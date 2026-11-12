/* icftd-emu: the recompilation runtime bring-up tool.
 *
 *   icftd-emu <image> [<entry>] [<insns>] [--trace] [--watch <pc>] [--data <dir>]
 *             [--window] [--dump <prefix> [frames]]
 *
 * Loads the flattened dshell image at 0, boots the 68000 core and runs. Phase A grows this
 * into the machine that plays the original game; see docs\recomp-architecture.md.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "types.h"
#include "platform.h"
#include "config.h"
#include "m68k.h"
#include "machine.h"
#include "cpu.h"
#include "display.h"
#include "input.h"
#include "state.h"

#define DEFAULT_ENTRY EMU_ENTRY
#define DEFAULT_A4    EMU_A4

/* --- frame output ------------------------------------------------------------------------- */
/* An 8-bit BMP: the chunky framebuffer is already in palette indices, so a screenshot is the
 * buffer plus the palette. Rows are bottom-up and padded to four bytes. */
static int write_bmp(const char *path, const u8 *fb, int stride, int w, int h, const u8 *pal)
{
    FILE *f;
    u8 head[54];
    u32 image = (u32)(((w + 3) & ~3) * h);
    u32 fileSize = 54 + 1024 + image;
    int i, row;

    f = fopen(path, "wb");
    if (!f) return 0;
    memset(head, 0, sizeof head);
    head[0] = 'B'; head[1] = 'M';
    head[2] = (u8)fileSize; head[3] = (u8)(fileSize >> 8);
    head[4] = (u8)(fileSize >> 16); head[5] = (u8)(fileSize >> 24);
    head[10] = 54; head[11] = 4;
    head[14] = 40;
    head[18] = (u8)w; head[19] = (u8)(w >> 8);
    head[22] = (u8)h; head[23] = (u8)(h >> 8);
    head[26] = 1;
    head[28] = 8;
    head[34] = (u8)image; head[35] = (u8)(image >> 8);
    head[36] = (u8)(image >> 16); head[37] = (u8)(image >> 24);
    fwrite(head, 1, 54, f);
    for (i = 0; i < 256; i++)
    {
        u8 bgr[4];
        bgr[0] = pal[i * 3 + 2]; bgr[1] = pal[i * 3 + 1]; bgr[2] = pal[i * 3 + 0]; bgr[3] = 0;
        fwrite(bgr, 1, 4, f);
    }
    for (row = h - 1; row >= 0; row--)
    {
        fwrite(fb + (u32)row * (u32)stride, 1, (size_t)w, f);
        if ((w & 3) != 0) { u8 pad[4] = { 0, 0, 0, 0 }; fwrite(pad, 1, (size_t)(4 - (w & 3)), f); }
    }
    fclose(f);
    return 1;
}

static u32  g_window;
static char g_prefix[192];
static int  g_shots, g_shotIndex, g_every = 1;
static u8   g_fireShown;          /* last fire state reported, so a press prints once */
/* Once per emulated frame: read the keyboard, follow the window, and hold the machine to 50 Hz.
 *
 * This has to be independent of presenting. The intro presents every frame, but the menus do not -
 * they spin on /FIRE - so pumping input inside on_present() left the window unpumped (and the run
 * unthrottled) for exactly the stretch where the player is expected to press something. */
static void on_frame(rt_machine *m)
{
    input_state in;

    if (!plat_pump(&in)) m->stop = 1;
    if (in.down[KEY_ESCAPE]) m->stop = 1;
    m->fireDown = (u8)(in.down[KEY_FIRE] ? 1u : 0u);
    if (m->fireDown != g_fireShown)
    {
        g_fireShown = m->fireDown;
        printf("emu: /FIRE %s at frame %lu\n", m->fireDown ? "pressed" : "released",
               (unsigned long)m->frame);
    }
    plat_frame_sync();
}

static void on_present(rt_machine *m)
{
    const u8 *fb = rt_gfx_framebuffer();
    const u8 *pal = rt_gfx_palette();
    int w = rt_gfx_width(), h = rt_gfx_height();

    if (g_window)
    {
        u8 *dst = plat_framebuffer();
        int y, cw = w < SCREEN_W ? w : SCREEN_W;

        plat_set_palette(0, 256, pal);
        for (y = 0; y < SCREEN_H; y++)
        {
            if (y >= h) break;
            memcpy(dst + (u32)y * SCREEN_W, fb + (u32)y * EMU_FB_MAX_W, (size_t)cw);
        }
        plat_present();
    }
    if (g_prefix[0] != 0 && g_shotIndex < g_shots)
    {
        if (g_every > 1 && (rt_gfx_frames() % (u32)g_every) != 0u) return;
        char path[256];
        sprintf(path, "%s%04d.bmp", g_prefix, g_shotIndex++);
        write_bmp(path, fb, EMU_FB_MAX_W, w, h, pal);
    }
}

int main(int argc, char **argv)
{
    rt_machine m;
    const char *image = 0;
    u32 entry = DEFAULT_ENTRY;
    u32 base = EMU_IMAGE_BASE;
    u32 a4 = DEFAULT_A4;
    long insns = 1000;
    int i, rc = 1, trace = 0, haveEntry = 0, dosLog = 0, progress = 0, dffLog = 0, runForever = 0, k;
    int haveA4 = 0;
    u32 watch = 0;
    u32 pressAt = 0;
    u32 releaseAt = 0;
    const char *dataDir = "export";
    const char *statePrefix = 0;
    const char *ramFrames = 0;
    const char *ramStop = 0;
    const char *callLog = 0;
    long traceFrom = 0, traceTo = 0;
    int tickLog = 0;
    int ring = 0;
    const char *inputPath = 0;
    const char *cycleTable = 0;
    const char *busTable = 0;
    int slotsDump = 0;
    u32 slotsAt = 0;
    const char *audioDump = 0;
    int blitBytePtr = 0;
    int stateEvery = 1;
    int textLog = 0;
    u32 callPc = 0, callFrame = 300u, callArg = 0u, callAtPc = 0u;
    long callInsns = 0;

    /* Unbuffered: a run that is killed (see tools\emu-run.ps1) must still leave its log behind up to
     * the point where it stopped, otherwise a hang is indistinguishable from a crash. */
    setvbuf(stdout, NULL, _IONBF, 0);

    for (i = 1; i < argc; i++)
    {
        if (strcmp(argv[i], "--trace") == 0) { trace = 1; continue; }
        if (strcmp(argv[i], "--doslog") == 0) { dosLog = 1; continue; }
        if (strcmp(argv[i], "--textlog") == 0) { textLog = 1; continue; }
        if (strcmp(argv[i], "--progress") == 0) { progress = 1; continue; }
        if (strcmp(argv[i], "--dfflog") == 0) { dffLog = 1; continue; }
        if (strcmp(argv[i], "--window") == 0) { g_window = 1; continue; }
        if (strcmp(argv[i], "--run") == 0) { g_window = 1; runForever = 1; continue; }
        if (strcmp(argv[i], "--dump") == 0 && i + 1 < argc)
        {
            strncpy(g_prefix, argv[++i], sizeof(g_prefix) - 1);
            g_shots = 64;
            if (i + 1 < argc && argv[i + 1][0] >= '0' && argv[i + 1][0] <= '9')
                g_shots = (int)strtol(argv[++i], 0, 0);
            if (i + 1 < argc && strcmp(argv[i + 1], "--every") == 0 && i + 2 < argc)
            {
                i++;
                g_every = (int)strtol(argv[++i], 0, 0);
                if (g_every < 1) g_every = 1;
            }
            continue;
        }
        if (strcmp(argv[i], "--watch") == 0 && i + 1 < argc) { watch = (u32)strtoul(argv[++i], 0, 0); continue; }
        if (strcmp(argv[i], "--press") == 0 && i + 1 < argc) { pressAt = (u32)strtoul(argv[++i], 0, 0); continue; }
        if (strcmp(argv[i], "--release") == 0 && i + 1 < argc) { releaseAt = (u32)strtoul(argv[++i], 0, 0); continue; }
        if (strcmp(argv[i], "--data") == 0 && i + 1 < argc) { dataDir = argv[++i]; continue; }
        if (strcmp(argv[i], "--base") == 0 && i + 1 < argc) { base = (u32)strtoul(argv[++i], 0, 0); continue; }
        if (strcmp(argv[i], "--entry") == 0 && i + 1 < argc) { entry = (u32)strtoul(argv[++i], 0, 0); haveEntry = 1; continue; }
        if (strcmp(argv[i], "--a4") == 0 && i + 1 < argc) { a4 = (u32)strtoul(argv[++i], 0, 0); haveA4 = 1; continue; }
        if (strcmp(argv[i], "--state") == 0 && i + 1 < argc) { statePrefix = argv[++i]; continue; }
        if (strcmp(argv[i], "--ram") == 0 && i + 1 < argc) { ramFrames = argv[++i]; continue; }
        if (strcmp(argv[i], "--ramstop") == 0 && i + 1 < argc) { ramStop = argv[++i]; continue; }
        if (strcmp(argv[i], "--calllog") == 0 && i + 1 < argc) { callLog = argv[++i]; continue; }
        if (strcmp(argv[i], "--ring") == 0) { ring = 1; continue; }
        if (strcmp(argv[i], "--byteptr") == 0) { blitBytePtr = 1; continue; }
        if (strcmp(argv[i], "--noblitfix") == 0) { blitBytePtr = 1; continue; }   /* old name */
        if (strcmp(argv[i], "--cyclestable") == 0 && i + 1 < argc) { cycleTable = argv[++i]; continue; }
        if (strcmp(argv[i], "--bustable") == 0 && i + 1 < argc) { busTable = argv[++i]; continue; }
        if (strcmp(argv[i], "--slots") == 0) { slotsDump = 1; continue; }
        if (strcmp(argv[i], "--slotsat") == 0 && i + 1 < argc) { slotsAt = (u32)strtoul(argv[++i], 0, 0); continue; }
        if (strcmp(argv[i], "--audiodump") == 0 && i + 1 < argc) { audioDump = argv[++i]; continue; }
        if (strcmp(argv[i], "--ticklog") == 0) { tickLog = 1; continue; }
        if (strcmp(argv[i], "--tracewin") == 0 && i + 1 < argc)
        {
            char *p = argv[++i];
            traceFrom = strtol(p, &p, 0);
            if (*p == ',') p++;
            traceTo = strtol(p, 0, 0);
            continue;
        }
        if (strcmp(argv[i], "--input") == 0 && i + 1 < argc) { inputPath = argv[++i]; continue; }
        if (strcmp(argv[i], "--call") == 0 && i + 1 < argc)
        {
            /* --call <pc>[:<frame>[:<arg>]] - enter an engine routine once, like the host does. */
            char *p = argv[++i];
            callPc = (u32)strtoul(p, &p, 0);
            callFrame = (*p == ':') ? (u32)strtoul(p + 1, &p, 0) : 300u;
            callArg = (*p == ':') ? (u32)strtoul(p + 1, 0, 0) : 0u;
            continue;
        }
        if (strcmp(argv[i], "--callat") == 0 && i + 1 < argc)
        {
            /* --callat <pc>:<insns>:<arg>[:<atpc>] - inject at an exact instruction count, and with
             * <atpc> only at that PC, so it can match the host's dispatch-loop boundary. */
            char *p = argv[++i];
            callPc = (u32)strtoul(p, &p, 0);
            callInsns = (*p == ':') ? (long)strtoul(p + 1, &p, 0) : 0;
            callArg = (*p == ':') ? (u32)strtoul(p + 1, &p, 0) : 0u;
            callAtPc = (*p == ':') ? (u32)strtoul(p + 1, 0, 0) : 0u;
            continue;
        }
        /* --every is shared: "--dump <prefix> n --every k" already means "every k-th raster". */
        if (strcmp(argv[i], "--every") == 0 && i + 1 < argc) { stateEvery = (int)strtol(argv[++i], 0, 0); continue; }
        if (image == 0) { image = argv[i]; continue; }
        if (!haveEntry) { entry = (u32)strtoul(argv[i], 0, 0); haveEntry = 1; continue; }
        /* An unknown option must not fall through to the instruction count: "--foo" would parse as
         * 0 and the run would end before the first instruction, which looks like a model bug. */
        if (argv[i][0] == '-') { printf("emu: unknown option %s\n", argv[i]); return 2; }
        insns = strtol(argv[i], 0, 0);
    }
    if (image == 0)
    {
        printf("usage: icftd-oracle <image> [<entry>] [<insns>] [--trace] [--watch <pc>] [--data <dir>]\n"
               "                    [--window] [--run] [--dump <prefix> [frames]] [--press <frame>]\n"
               "                    [--state <prefix> [--every <n>] [--ram <frame[,frame...]>]]\n"
               "                    [--input <script>] [--base <addr>] [--entry <addr>] [--a4 <addr>]\n"
               "                    [--audiodump <file>] [--bustable <file>] [--slots]\n"
               "  --run    open the window and play until it is closed (space = fire, esc = quit)\n"
               "  --state  canonical machine-state dump per frame (registers, custom regs, RAM hash)\n"
               "  --ram    also write the full RAM image at these frames (<prefix>.<frame>.ram)\n"
               "  --input  frame-indexed input script: \"<frame> <fire> <joy0> [<joy1>]\"\n"
               "  --base   where the image is loaded (default 0x4000); entry and A4 follow it unless\n"
               "           --entry/--a4 say otherwise\n"
               "  --audiodump  mix the audio without a device and write it as raw s16 stereo\n");
        return 1;
    }
    if (inputPath != 0 && !input_load(inputPath)) return 1;
    if (runForever)
    {
        insns = 2000000000L;                 /* ended by the window, not by a budget */
        printf("emu: window mode - space = fire, esc or close = quit\n");
    }
    /* The settings file, written with its defaults when this is the first start. */
    rt_config_ensure();

    if (g_window)
    {
        int fs = 0;
        fs = rt_config_bool("VIDEO", "fullscreen", 1);
        plat_set_fullscreen((u32)fs);
        printf("emu: video %s, fullscreen=%d\n",
               rt_config_path()[0] != 0 ? rt_config_path() : "(no icftd.ini)", fs);
    }
    if (g_window && !plat_init("It Came from the Desert (recomp)"))
    {
        printf("emu: cannot open a window\n");
        return 1;
    }

    if (!rt_init(&m)) { printf("emu: out of memory\n"); return 1; }
    if (audioDump != 0)
    {
        /* Mix without a device so a headless run can be checked (and heard) offline. */
        rt_audio_set_gain(&m, rt_config_int("AUDIO", "sound", 10, 0, 10),
                              rt_config_int("AUDIO", "music", 10, 0, 10));
        rt_audio_render_only(&m, EMU_AUD_RATE);
        if (!rt_audio_capture(&m, audioDump)) { printf("emu: cannot write %s\n", audioDump); return 1; }
        printf("emu: audio -> %s (%lu Hz stereo, raw s16)\n", audioDump, (unsigned long)EMU_AUD_RATE);
    }
    else if (g_window)
    {
        rt_audio_set_gain(&m, rt_config_int("AUDIO", "sound", 10, 0, 10),
                              rt_config_int("AUDIO", "music", 10, 0, 10));
        if (plat_audio_open(EMU_AUD_RATE))
        {
            rt_audio_open(&m, EMU_AUD_RATE);
            printf("emu: audio %lu Hz stereo, sound %d/10, music %d/10\n",
                   (unsigned long)EMU_AUD_RATE, m.audio.soundGain / 10, m.audio.musicGain / 10);
        }
    }
    if (!rt_load_image(&m, base, image)) { printf("emu: cannot load %s\n", image); rt_shutdown(&m); return 1; }

    /* Entry and A4 are relative to the load address: the base-0 image (the one Ghidra models and
     * the fixtures replay) has A4 = 0x29A56, the 0x4000 image 0x2DA56. At base 0 address 4 is
     * inside the code hunk, so the entry has to be the cstart itself (0x20918), not the
     * `jmp 0x20918` stub at 0, whose operand the AbsExecBase write replaces. */
    if (!haveEntry) entry = base;
    if (!haveA4) a4 = base + (DEFAULT_A4 - EMU_IMAGE_BASE);

    m.trace = trace;
    m.dosLog = dosLog;
    m.progress = progress;
    m.textLog = textLog;
    m.dffLog = dffLog;
    m.watch = watch;
    m.pressAt = pressAt;
    m.releaseAt = releaseAt;
    m.dataDir = dataDir;
    if (callLog != 0) rt_calllog_open(&m, callLog);
    m.traceFrom = traceFrom;
    m.traceTo = traceTo;
    m.tickLog = tickLog;
    m.blitBytePtr = blitBytePtr;
    m.busTable = busTable != 0;
    m.slotsAt = slotsAt;
    if (g_window) m.on_frame = on_frame;
    if (g_window || g_prefix[0] != 0) m.on_present = on_present;

    printf("emu: %s loaded at 0x%lx, entry 0x%lx, A4 0x%lx, %ld instruction(s)\n",
           image, (unsigned long)base, (unsigned long)entry, (unsigned long)a4, insns);

    oracle_boot(entry, a4);
    if (cycleTable != 0)
    {
        /* The 68000 opcode cycle table Musashi itself uses, so the translated build can charge the
         * same costs (tools\gen-cycles.ps1 turns it into src\runtime\amiga\cycles.h). */
        if (!oracle_dump_cycle_table(cycleTable)) return 1;
        rt_shutdown(&m);
        return 0;
    }
    {
        u32 pc;
        s32 lvo = 0;
        int lib;

        if (callPc != 0) oracle_call_at(callPc, callFrame, callArg, callInsns, callAtPc);
        if (statePrefix != 0)
        {
            if (!state_open(statePrefix, stateEvery, ramFrames)) { rt_shutdown(&m); return 1; }
            state_sample(&m);                       /* frame 0: the state the program starts from */
        }
        pc = oracle_run(&m, insns);
        lib = rt_library_of(&m, pc, &lvo);

        printf("emu: stopped at 0x%lx after %ld instruction(s)\n", (unsigned long)pc,
               (unsigned long)m.insns);
        if (lib >= 0)
            printf("emu: library call, base %d, LVO %ld\n", lib, (long)lvo);
        printf("emu: D0=%08lX D1=%08lX A0=%08lX A1=%08lX A6=%08lX A7=%08lX SR=%04lX\n",
               (unsigned long)m68k_get_reg(0, M68K_REG_D0),
               (unsigned long)m68k_get_reg(0, M68K_REG_D1),
               (unsigned long)m68k_get_reg(0, M68K_REG_A0),
               (unsigned long)m68k_get_reg(0, M68K_REG_A1),
               (unsigned long)m68k_get_reg(0, M68K_REG_A6),
               (unsigned long)m68k_get_reg(0, M68K_REG_A7),
               (unsigned long)m68k_get_reg(0, M68K_REG_SR));
        printf("regs:");
        if (ring) oracle_ring_print(&m);
        for (k = 0; k < 8; k++) printf(" D%d=%08lX", k, (unsigned long)m68k_get_reg(0, M68K_REG_D0 + k));
        for (k = 0; k < 8; k++) printf(" A%d=%08lX", k, (unsigned long)m68k_get_reg(0, M68K_REG_D0 + 8 + k));
        printf(" SR=%04lX PC=%08lX\n", (unsigned long)m68k_get_reg(0, M68K_REG_SR),
               (unsigned long)m68k_get_reg(0, M68K_REG_PC));
        if (m.mem.bad != 0) printf("emu: %lu access(es) outside the RAM block\n",
                                   (unsigned long)m.mem.bad);
        printf("emu: %lu raster(s) presented\n", (unsigned long)rt_gfx_frames());
        state_close();
        if (ramStop != 0) state_ram_snapshot(&m, ramStop);
        if (slotsDump) rt_slots_print(&m);
        if (busTable != 0) oracle_bus_dump(busTable);
        rc = 0;
    }

    rt_shutdown(&m);
    if (g_window) plat_shutdown();
    return rc;
}
