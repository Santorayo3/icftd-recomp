/* icftd.exe - "It Came from the Desert" for MS-DOS.
 *
 * The same machine as the Windows build: the runtime (src\runtime) plus the translated image
 * (src\recomp), with the vendored 68000 core behind it for the functions the translator refuses.
 * What differs is the platform layer (src\runtime\plat\dos) and that this front end IS the game -
 * no development flags, no state dumps: it opens the display, plays at 50 Hz until Esc, and
 * writes its settings file on the first start.
 *
 *   ICFTD.EXE [<image>] [--data <dir>] [--slot <n>] [--frames <n>]
 *
 * The image defaults to DSHELL.IMG next to the executable and the game data to the executable's
 * own directory, which is what the DOS release ships in: ICFTD.EXE, DSHELL.IMG and DISK1..DISK3.
 * Save slots are directories the engine writes its ICFTD file into, exactly as on Windows:
 * SAVES\SLOT1..SLOT4 next to the executable.
 *
 * Development flags (same machinery as src\host\main.c, used for the DOS port's own testing):
 *   --perf              per-frame cost in 8254 counts, split into vblank / present
 *   --ticklog           oracle_tick's `tick N in|out` lines, to compare pacing with the host
 *   --tracewin a,b      `t <insns> <budget> <pc>` per instruction in a window (both front ends)
 *   --dump <frame> <f>  the whole RAM image at that vblank, to diff against the Windows build
 *   --call <pc>[:<frame>]  enter one engine routine once (e.g. 0x1442A = save)
 *   --titlekey <n>       take a title screen menu choice (0 the game, 1..7 the minigames, 8..10
 *                        the endings, 11/12 the menu's Load Game / New Game)
 *                        the endings)
 *   --esc <frame>        press Escape at that frame (the restart-to-title seam, like --call)
 *   --cheat <frame>      press left Ctrl+W at that frame (the minigame cheat's seam)
 *   --trace             dispatch/ring diagnostics
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "audio.h"
#include "config.h"
#include "display.h"
#include "machine.h"
#include "platform.h"
#include "m68k.h"
/* Two headers are called cpu.h: the 68000 front end's and the translated layer's. */
#include "../oracle/cpu.h"
#include "../recomp/cpu.h"
#include "../recomp/fn_table.h"
#include "title.h"
#include "cheat.h"

#define DOS_IMAGE      "DSHELL.IMG"
#define MAX_SAVE_SLOTS 4

static cpu_t *g_cpu;
static int    g_trace;          /* --trace: the dispatch and CIA path, for a DOS-only defect */
static const char *g_dumpPath;  /* --dump <frame> <file>: the RAM image at that vblank */
static int    g_noAudio;        /* --noaudio: leave the Sound Blaster alone */
static int    g_sbTest;         /* --sbtest: diagnose the audio device and exit */
u32    g_dumpFrame;
static int    g_dumped;
static u32    g_frameLimit;     /* --frames: stop at the end of this vblank */

/* --perf: where a frame's emulated time goes, in 8254 counts (1.193 MHz). */
static int    g_perf;
static u32    g_perfLast, g_perfTotal, g_perfVblank, g_perfPresent, g_perfFrames, g_perfWait;
static long   g_perfCiaInsns;           /* instructions run by the CIA handlers (the music driver) */
static u32    g_perfCiaRuns;
static u32    g_escFrame;               /* --esc <frame>: press Escape at that frame */
static int    g_escDone;
static u32    g_cheatFrame;             /* --cheat <frame>: press left Ctrl+W at that frame */
static int    g_cheatDone;

static void dump_ram(rt_machine *m)
{
    FILE *f;

    if (g_dumpPath == 0 || g_dumped || m->frame != g_dumpFrame) return;
    g_dumped = 1;
    f = fopen(g_dumpPath, "wb");
    if (f == 0) return;
    fwrite(m->mem.base, 1, (size_t)m->mem.size, f);
    fclose(f);
    printf("icftd: RAM dump at frame %lu -> %s\n", (unsigned long)m->frame, g_dumpPath);
}

static void gather(cpu_t *c, rt_machine *m)
{
    u32 r[18];
    int i;

    oracle_regs_get(r);
    for (i = 0; i < 8; i++) { c->d[i] = r[REGS_D + i]; c->a[i] = r[REGS_A + i]; }
    c->sr = (u16)r[REGS_SR];
    c->pc = r[REGS_PC];
    (void)m;
}

static void scatter(cpu_t *c, rt_machine *m)
{
    u32 r[18];
    int i;

    for (i = 0; i < 8; i++) { r[REGS_D + i] = c->d[i]; r[REGS_A + i] = c->a[i]; }
    r[REGS_SR] = c->sr;
    r[REGS_PC] = c->pc;
    oracle_regs_set(r);
    (void)m;
}

/* Last frame the game reached, for RCRASH.TXT: a DOS crash leaves nothing else behind. A dev
 * aid (--crashlog) and off in normal play: it formats a string every vblank and writes a FAT file
 * five times a second, which is real work on the hardware this port targets, and it is not
 * something a 1994 port would have done. */
static int g_crashLog;

static void note_state(rt_machine *m, cpu_t *c)
{
    char text[256];

    if (!g_crashLog) return;
    sprintf(text, "frame %lu  insns %ld  pc %06lX\nD0 %08lX  D1 %08lX  A0 %08lX  A6 %08lX  "
                  "A7 %08lX  SR %04lX  cpu pc %08lX  presents %lu\n",
            (unsigned long)m->frame, (long)m->insns, (unsigned long)m->pc,
            (unsigned long)c->d[0], (unsigned long)c->d[1], (unsigned long)c->a[0],
            (unsigned long)c->a[6], (unsigned long)c->a[7], (unsigned long)c->sr,
            (unsigned long)c->pc, (unsigned long)m->gfx.frames);
    plat_crash_state(text);
}

/* The vertical blank, reached from inside translated code: the register file goes to the core,
 * the game's own servers run there, and what they leave comes back. */
static void dos_frame(cpu_t *c, rt_machine *m)
{
    /* Milliseconds, not PIT counts: plat_pit_now() extends a 16-bit counter snapshot, so it is
     * only exact for intervals under 65,536 counts (55 ms) - and a frame at the 486-66 clock is
     * three times that, which is what truncated the first version of this report. */
    u32 t0 = g_perf ? plat_ticks_ms() : 0;

    if (g_perf)
    {
        g_perfTotal += t0 - g_perfLast;
        g_perfLast = t0;
        g_perfFrames++;
    }
    scatter(c, m);
    oracle_tick(m);
    gather(c, m);
    if (g_perf) g_perfVblank += plat_ticks_ms() - t0;
    dump_ram(m);
    note_state(m, c);
    /* A frame limit is only exact here: the game spends long stretched inside one translated
     * function, so checking it between rc_call()s would overshoot by hundreds of frames. */
    if (g_frameLimit != 0 && m->frame >= g_frameLimit) m->stop = 1;
    if (g_trace)
    {
        printf("  frame %lu insns %ld pc %06lX\n", (unsigned long)m->frame, (long)m->insns,
               (unsigned long)c->pc);
        if (m->frame >= 6 && m->frame <= 12)
        {
            printf("ringdump frame %lu\n", (unsigned long)m->frame);
            oracle_ring_print(m);
        }
    }
}

/* A CIA timer expiry (the engine's music driver) can land inside translated code too. */
static void dos_cia(rt_machine *m, u32 code)
{
    long before;

    if (g_cpu == 0) return;
    if (g_trace) printf("  cia in %06lX frame %lu pc %06lX\n", (unsigned long)code,
                       (unsigned long)m->frame, (unsigned long)g_cpu->pc);
    before = g_perf ? m->insns : 0;
    scatter(g_cpu, m);
    oracle_run_icr(m, code, m->ciaData);
    gather(g_cpu, m);
    if (g_perf) { g_perfCiaInsns += m->insns - before; g_perfCiaRuns++; }
    if (g_trace) printf("  cia out pc %06lX\n", (unsigned long)g_cpu->pc);
}

/* JOY0DAT for the sixteen key combinations, indexed up|down<<1|left<<2|right<<3.
 * FUN_00011bf0 decodes the port into two axes - v = bit1 ? +1 : (bit9 ? -1 : 0) is the engine's
 * X, h = (bit8^bit9) ? -1 : ((bit0^bit1) ? +1 : 0) its Y - so these are the words a real
 * joystick presents (one switch grounds one line of its pair), not an arbitrary encoding. */
static const u16 g_joyDirs[16] =
{
    0x0000u, 0x0100u, 0x0001u, 0x0000u,     /* idle          up            down          up+down   */
    0x0300u, 0x0200u, 0x0301u, 0x0300u,     /* left          up+left       down+left     up+down+left   */
    0x0003u, 0x0103u, 0x0002u, 0x0003u,     /* right         up+right      down+right    up+down+right  */
    0x0000u, 0x0100u, 0x0001u, 0x0000u      /* left+right    +left         +right        all four  */
};

/* --call: enter one of the engine's own routines once, at a chosen frame (the same dev seam as
 * src\host\main.c). Used to reach the save routine without playing to it. */
static u32 g_callPc, g_callFrame, g_callArg;
static int g_called;

/* The title injects calls, and pops their arguments, on the machine's register file while no
 * translated code is running; dos_cia scatters the mirror above into the core, so it must be
 * brought up to date or the handler's frame would undo those writes. */
void host_regs_sync(rt_machine *m)
{
    if (g_cpu != 0) gather(g_cpu, m);
}

/* The OSD loading line's explicit hold (src\host\main.c) has no seam here: the DOS front end
 * installs no per-screen hook for the pointer, the crosshair or the loading line. */
void host_loading_hold(rt_machine *m)
{
    (void)m;
}

/* The one per-screen seam this front end needs: the Ctrl+W cheat is a played-game feature and its
 * request is consumed at a minigame's own per-frame update (src\host\cheat.c). It does nothing
 * unless a request is pending. */
static void dos_entry(cpu_t *c, rt_machine *m, u32 pc)
{
    (void)c;
    host_cheat_entry(m, pc);
}

static void dos_input(rt_machine *m)
{
    input_state in;
    u16 joy;

    if (!plat_pump(&in)) m->stop = 1;
    /* --esc <frame>: the same path the Escape key takes (a test seam, like --call). */
    if (g_escFrame != 0 && !g_escDone && m->frame >= g_escFrame)
    {
        g_escDone = 1;
        printf("icftd: escape at frame %lu\n", (unsigned long)m->frame);
        host_title_escape(m);
    }
    /* Left Ctrl+W (the minigame cheat), and --cheat as the scripted form of the same request. */
    host_cheat_input(m, &in);
    if (g_cheatFrame != 0 && !g_cheatDone && m->frame >= g_cheatFrame)
    {
        g_cheatDone = 1;
        printf("icftd: Ctrl+W at frame %lu\n", (unsigned long)m->frame);
        host_cheat_force(m);
    }
    if (in.pressed[KEY_ESCAPE]) host_title_escape(m);

    /* Save slot: F1..F4 pick one, F5 steps to the next. The engine writes its save into DSAVE:,
     * which the runtime maps onto SAVES\SLOT<N>, so the overlay is the only feedback. */
    {
        int slot = 0;
        if (in.pressed[KEY_F1]) slot = 1;
        if (in.pressed[KEY_F2]) slot = 2;
        if (in.pressed[KEY_F3]) slot = 3;
        if (in.pressed[KEY_F4]) slot = 4;
        if (in.pressed[KEY_F5]) slot = m->saveSlot >= MAX_SAVE_SLOTS ? 1 : m->saveSlot + 1;
        if (slot != 0 || in.pressed[KEY_F5])
        {
            char msg[40];
            if (slot == 0) slot = m->saveSlot;
            m->saveSlot = slot;
            sprintf(msg, "Save Slot - %d%s", m->saveSlot,
                    rt_save_slot_empty(m, m->saveSlot) ? " (Empty)" : "");
            rt_osd_text(m, msg, EMU_OSD_FRAMES);
        }
    }
    m->fireDown = (u8)(in.down[KEY_FIRE] ? 1u : 0u);
    joy = g_joyDirs[(in.down[KEY_UP]    ? 1u : 0u) | (in.down[KEY_DOWN]  ? 2u : 0u) |
                    (in.down[KEY_LEFT]  ? 4u : 0u) | (in.down[KEY_RIGHT] ? 8u : 0u)];
    m->joy0 = joy;
    {
        /* Time spent waiting for the next frame slot. It is the difference between the pacing
         * interval --perf reports and the work the frame actually costs, so without it the split
         * looks as if the machine used the whole slot even when the host is ten times fast enough. */
        u32 w0 = g_perf ? plat_ticks_ms() : 0;
        plat_frame_sync();
        if (g_perf) g_perfWait += plat_ticks_ms() - w0;
    }
}
static void dos_present(rt_machine *m)
{
    const u8 *fb = rt_gfx_framebuffer();
    const u8 *pal = rt_gfx_palette();
    u8 *dst;
    int w = rt_gfx_width(), h = rt_gfx_height();
    int x, y;
    u32 stride, t0 = g_perf ? plat_ticks_ms() : 0;

    if (fb == 0 || pal == 0) return;
    stride = plat_set_framebuffer_size((u32)w, (u32)h);
    dst = plat_framebuffer();
    if (dst == 0) return;
    plat_set_palette(0, PAL_ENTRIES, pal);
    if (stride != 0)
    {
        /* The video mode took the picture's size: hand it over unchanged. */
        for (y = 0; y < h; y++)
            memcpy(dst + (u32)y * stride, fb + (u32)y * EMU_FB_MAX_W, (size_t)w);
        plat_present();
        if (g_perf) g_perfPresent += plat_ticks_ms() - t0;
        (void)m;
        return;
    }
    /* VGA mode 13h is exactly 320x200, while the screen is the size of the window the copper list
     * programs: the chicken race's list asks for 368x216, because it uses the overscan its text
     * page lays the narration out across. The mode cannot hold that, so the picture is fitted into
     * it. (On Win32 the mode follows the picture instead - the narration's letters stay whole
     * there.) */
    for (y = 0; y < SCREEN_H; y++)
    {
        int sy = (h > SCREEN_H) ? (y * h) / SCREEN_H : y;
        const u8 *row;
        u8 *out = dst + (u32)y * SCREEN_W;
        if (sy >= h || y >= h)
        {
            memset(out, 0, SCREEN_W);
            continue;
        }
        row = fb + (u32)sy * EMU_FB_MAX_W;
        if (w > SCREEN_W)
        {
            for (x = 0; x < SCREEN_W; x++)
                out[x] = row[(u32)(x * w) / SCREEN_W];
        }
        else
        {
            /* Anything smaller sits in the top left corner, as before. */
            memcpy(out, row, (size_t)w);
            memset(out + w, 0, (size_t)(SCREEN_W - w));
        }
    }
    plat_present();
    if (g_perf) g_perfPresent += plat_ticks_ms() - t0;
    (void)m;
}

int main(int argc, char **argv)
{
    rt_machine m;
    cpu_t c;
    char imagePath[160];
    const char *image = 0;
    const char *dataDir = 0;
    u32 frameLimit = 0;
    int slot = 1;
    int titleKey = -1;              /* --titlekey: take this title screen menu choice */
    int i, rc = 0;
    int traced = 0, badReported = 0, tickLog = 0;
    long traceFrom = 0, traceTo = 0;
    u32 lastTraced = 0xFFFFFFFFu, prevTraced = 0xFFFFFFFFu;
    u32 translated = 0, interpreted = 0;
    u32 audioPlayed = 0, audioDropped = 0, audioStarved = 0;
    plat_set_program(argc > 0 ? argv[0] : 0);
    setvbuf(stdout, NULL, _IONBF, 0);
    memset(&c, 0, sizeof c);

    for (i = 1; i < argc; i++)
    {
        if (strcmp(argv[i], "--data") == 0 && i + 1 < argc) { dataDir = argv[++i]; continue; }
        if (strcmp(argv[i], "--frames") == 0 && i + 1 < argc)
        {
            frameLimit = (u32)strtoul(argv[++i], 0, 0);
            continue;
        }        if (strcmp(argv[i], "--slot") == 0 && i + 1 < argc)
        {
            slot = (int)strtol(argv[++i], 0, 0);
            if (slot < 1) slot = 1;
            if (slot > MAX_SAVE_SLOTS) slot = MAX_SAVE_SLOTS;
            continue;
        }
        if (strcmp(argv[i], "--trace") == 0) { g_trace = 1; continue; }
        if (strcmp(argv[i], "--crashlog") == 0) { g_crashLog = 1; continue; }
        if (strcmp(argv[i], "--noaudio") == 0) { g_noAudio = 1; continue; }
        if (strcmp(argv[i], "--sbtest") == 0) { g_sbTest = 1; continue; }
        if (strcmp(argv[i], "--perf") == 0) { g_perf = 1; continue; }
        if (strcmp(argv[i], "--call") == 0 && i + 1 < argc)
        {
            char *p = argv[++i];
            g_callPc = (u32)strtoul(p, &p, 0);
            g_callFrame = (*p == ':') ? (u32)strtoul(p + 1, &p, 0) : 300u;
            if (*p == ':') g_callArg = (u32)strtoul(p + 1, 0, 0);
            continue;
        }
        if (strcmp(argv[i], "--titlekey") == 0 && i + 1 < argc)
        {
            titleKey = (int)strtol(argv[++i], 0, 0);
            if (titleKey < 0) titleKey = 0;
            continue;
        }
        if (strcmp(argv[i], "--esc") == 0 && i + 1 < argc)
        {
            g_escFrame = (u32)strtoul(argv[++i], 0, 0);
            continue;
        }
        if (strcmp(argv[i], "--cheat") == 0 && i + 1 < argc)
        {
            g_cheatFrame = (u32)strtoul(argv[++i], 0, 0);
            continue;
        }
        if (strcmp(argv[i], "--ticklog") == 0) { tickLog = 1; continue; }
        if (strcmp(argv[i], "--tracewin") == 0 && i + 1 < argc)
        {
            char *p = argv[++i];
            traceFrom = strtol(p, &p, 0);
            if (*p == ',') { p++; traceTo = strtol(p, 0, 0); }
            continue;
        }
        if (strcmp(argv[i], "--dump") == 0 && i + 2 < argc)
        {
            g_dumpFrame = (u32)strtoul(argv[++i], 0, 0);
            g_dumpPath = argv[++i];
            continue;
        }
        if (argv[i][0] == '-') continue;
        image = argv[i];
    }
    if (image == 0)
    {
        sprintf(imagePath, "%s\\%s", plat_exe_dir(), DOS_IMAGE);
        image = imagePath;
    }
    if (dataDir == 0) dataDir = plat_exe_dir();

    printf("It Came from the Desert - %s (base %ld)\n", image, (long)RC_BASE);
    /* Conventional memory left once the extender and this EXE are in place: the audio ring, the
     * only base-memory allocation the game makes itself, has to come out of what remains. */
    printf("icftd: %lu KB conventional memory, %lu KB free with the EXE loaded\n",
           (unsigned long)plat_base_total_kb(), (unsigned long)plat_free_base_kb());

    /* Settings next to the executable; a fresh copy gets the whole file written. */
    rt_config_ensure();

    if (!rt_init(&m)) { printf("icftd: not enough memory\n"); return 1; }
    if (!rt_load_image(&m, EMU_IMAGE_BASE, image))
    {
        printf("icftd: cannot load %s\n", image);
        rt_shutdown(&m);
        return 1;
    }
    m.dataDir = dataDir;
    m.saveSlot = slot;
    g_frameLimit = frameLimit;
    m.tickLog = tickLog;
    m.traceFrom = traceFrom;
    m.traceTo = traceTo;
    rt_audio_set_gain(&m, rt_config_int("AUDIO", "sound", 10, 0, 10),
                          rt_config_int("AUDIO", "music", 10, 0, 10));

    if (!plat_init("It Came from the Desert"))
    {
        printf("icftd: cannot set a video mode\n");
        rt_shutdown(&m);
        return 1;
    }
    if (g_sbTest)
    {
        plat_audio_probe();
        rt_shutdown(&m);
        return 0;
    }
    /* Paula is mixed here and played through the Sound Blaster the BLASTER variable names. Without
     * one the mixer is not started at all (rt_time_slice keeps its cheap path) and the player is
     * told on screen instead of wondering why the game is silent. */
    if (!g_noAudio)
    {
        rt_audio_open(&m, EMU_AUD_RATE);
        if (!m.audio.device)
            rt_osd_text(&m, "BLASTER not set - no sound (set BLASTER=A220 I5 D1 T4)", EMU_OSD_FRAMES * 8);
    }
    m.on_frame = dos_input;
    m.on_present = dos_present;
    plat_set_frame_hz(50);

    /* The title screen is part of the played game. A scripted run (--frames, --call, --dump) is
     * reproducing or inspecting the original, which has no title, so it starts where it starts; the
     * title engages itself when the program is about to play its intro (see title.c). --titlekey is
     * the exception: it asks for the title's own menu, so it arms the title in a scripted run too. */
    host_title_key(titleKey);
    host_title_arm((frameLimit == 0 || titleKey >= 0) && g_callPc == 0 && g_dumpPath == 0);
    /* The Ctrl+W cheat is a played-game feature: its entry hook runs only in a played run (and in
     * a run that asked for the cheat with --cheat), never in a measurement. */
    if (((frameLimit == 0 || titleKey >= 0) && g_callPc == 0 && g_dumpPath == 0) ||
        g_cheatFrame != 0)
        rc_entryHook = dos_entry;

    g_cpu = &c;
    oracle_boot(EMU_ENTRY, EMU_A4);
    /* After oracle_boot, which installs the dev tool's own hook: a CIA timer expiry is game code
     * and must run with THIS front end's register file (scatter -> handler -> gather), or the
     * handler computes with stale registers. Same order as src\host\main.c. */
    m.on_cia = dos_cia;
    rc_frame_hook = dos_frame;
    rc_stopOnUnknown = 1;
    rc_stopAt = 0;                         /* the player decides when to stop */
    rc_abort = 0;                          /* the game's loops are supposed to spin */
    gather(&c, &m);

    for (;;)
    {
        while (!m.stop)
        {
            u32 pc;
    
            if (frameLimit != 0 && m.frame >= frameLimit) break;
            if (g_callPc != 0 && !g_called && m.frame >= g_callFrame)
            {
                /* Enter the routine as its caller would: push the program-end sentinel as the return
                 * address (and the argument below it), so the run stops when it returns. */
                u32 r[18];
                g_called = 1;
                oracle_regs_get(r);
                r[REGS_A + 7] -= 4;
                rt_write32(&m.mem, r[REGS_A + 7], g_callArg);
                r[REGS_A + 7] -= 4;
                rt_write32(&m.mem, r[REGS_A + 7], EMU_EXIT_PC);
                r[REGS_PC] = g_callPc;
                oracle_regs_set(r);
                printf("icftd: calling %06lX(%08lX) at frame %lu\n", (unsigned long)g_callPc,
                       (unsigned long)g_callArg, (unsigned long)m.frame);
            }
            pc = m68k_get_reg(0, M68K_REG_PC);
            if (host_title_check(&m, pc)) continue;
            if (g_trace && m.mem.bad != 0 && !badReported)
            {
                badReported = 1;
                printf("icftd: first out-of-RAM access, at pc %06lX, frame %lu\n",
                       (unsigned long)pc, (unsigned long)m.frame);
                oracle_ring_print(&m);
            }
            if (g_trace && traced < 300 && pc != lastTraced && pc != prevTraced)
            {
                printf("  f%lu %06lX %s\n", (unsigned long)m.frame, (unsigned long)pc,
                       (rc_containing(pc) != 0 || rc_lookup(pc) != 0) ? "rc" : "in");
                prevTraced = lastTraced;
                lastTraced = pc;
                traced++;
            }
            if (rc_containing(pc) != 0 || rc_lookup(pc) != 0)
            {
                /* Translated: it runs until it returns, or until it transfers somewhere the
                 * translator refused, and c->pc then names where the core continues. */
                translated++;
                gather(&c, &m);
                rc_call(&c, &m, pc);
                scatter(&c, &m);
                continue;
            }
            /* Not translated (the translator refused the construct): run it on the core, one
             * instruction, with the same time accounting as the oracle. */
            interpreted++;
            while (m.waitFrames > 0) { m.waitFrames--; rt_time_idle(&m); oracle_tick(&m); }
            {
                u32 cost = oracle_instruction_cost(&m, pc);
    
                m.cyclesToTick -= (long)cost;
                rt_time_run(&m, (long)cost);       /* Paula + CIA timers, as in oracle_run */
                rt_cia_service(&m);
                if (m.cyclesToTick < 0) oracle_tick(&m);
            }
            if (!oracle_step(&m)) break;
            if (g_trace && m.mem.bad != 0 && !badReported)
            {
                /* The first access outside the RAM block is where the machine left the rails; the
                 * ring still holds the instructions that led there. */
                badReported = 1;
                printf("icftd: first out-of-RAM access at pc %06lX, frame %lu\n",
                       (unsigned long)pc, (unsigned long)m.frame);
                oracle_ring_print(&m);
            }
        }

        /* Escape in a played game: start the whole game again, so the title screen comes back with
         * every piece of emulated state reset (see src\host\title.c). */
        if (!host_title_restart_pending()) break;

        {
            int keepSlot = m.saveSlot;
            int soundGain = m.audio.soundGain, musicGain = m.audio.musicGain;
            int hadAudio = m.audio.device;

            printf("icftd: restarting the game\n");
            rt_shutdown(&m);
            if (!rt_init(&m)) { printf("icftd: not enough memory\n"); rc = 1; break; }
            if (!rt_load_image(&m, EMU_IMAGE_BASE, image))
            {
                printf("icftd: cannot load %s\n", image);
                rt_shutdown(&m);
                rc = 1;
                break;
            }
            m.dataDir = dataDir;
            m.saveSlot = keepSlot;
            g_frameLimit = frameLimit;
            m.tickLog = tickLog;
            m.traceFrom = traceFrom;
            m.traceTo = traceTo;
            rt_audio_set_gain(&m, soundGain, musicGain);
            if (!g_noAudio && hadAudio) rt_audio_open(&m, EMU_AUD_RATE);
            m.on_frame = dos_input;
            m.on_present = dos_present;
            oracle_boot(EMU_ENTRY, EMU_A4);
            m.on_cia = dos_cia;
            rc_frame_hook = dos_frame;
            rc_stopOnUnknown = 1;
            rc_stopAt = 0;
            rc_abort = 0;
            gather(&c, &m);
            translated = interpreted = 0;
            g_called = 0;
            g_dumped = 0;
            g_escDone = (g_escFrame != 0) ? 1 : 0;
            g_cheatDone = (g_cheatFrame != 0) ? 1 : 0;
            host_cheat_reset();
            g_perfFrames = g_perfTotal = g_perfVblank = g_perfPresent = g_perfWait = 0;
            g_perfCiaInsns = 0;
            g_perfCiaRuns = 0;
            badReported = 0;
            traced = 0;
            lastTraced = prevTraced = 0xFFFFFFFFu;
            host_title_key(-1);
            host_title_arm(1);
            continue;
        }
    }

    rt_lvo_report();
    /* rt_shutdown closes the device and clears the flag, so the counters are read first. */
    audioPlayed = m.audio.device ? plat_audio_played() : 0;
    audioDropped = m.audio.device ? plat_audio_dropped() : 0;
    audioStarved = m.audio.device ? plat_audio_starved() : 0;
    rt_shutdown(&m);
    plat_shutdown();

    /* Text mode again: the messages the runtime printed into the graphics screen are gone, so
     * the run summary is the one thing the player sees. */
    printf("icftd: %lu frame(s), %lu raster(s), %ld instruction(s)\n",
           (unsigned long)m.frame, (unsigned long)rt_gfx_frames(), (long)m.insns);
    printf("icftd: %lu translated entry(ies), %lu interpreted instruction(s)\n",
           (unsigned long)translated, (unsigned long)interpreted);
    {
        u32 ms = plat_ticks_ms();
        if (ms != 0)
            printf("icftd: %.1f frame/s\n", (double)m.frame * 1000.0 / (double)ms);
        /* The two clocks measure the whole run: if they disagree, the game's pacing clock is not
         * real time and every speed figure - frames and audio both - is scaled by the ratio. */
        printf("icftd: %lu ms by the 8254, %lu ms by the RTC\n",
               (unsigned long)ms, (unsigned long)plat_rtc_elapsed_ms());
        /* Emulated time: at a fixed DOSBox cycle setting (cycles per emulated millisecond) this
         * times the setting is the host instruction count of the run, so dividing by the frame
         * count says what a frame really costs. */
        printf("icftd: %lu ms of machine time, %lu ms/frame\n",
               (unsigned long)plat_emulated_ms(),
               (unsigned long)(m.frame != 0 ? plat_emulated_ms() / m.frame : 0));
    }
    if (g_perf && g_perfFrames != 0)
    {
        /* Milliseconds. Run this with -Cycles max: there the 8254 tracks real time and a frame is
         * short enough for the 16-bit counter snapshots to stay exact (a fixed 30000 clock makes a
         * frame ~180 ms, so the samples straddle more than one wrap and the split lies). The
         * headline number - frames per second at the launcher's 30000 clock - comes from the wall
         * clock outside the program, which needs no emulated timer at all. */
        double n = (double)g_perfFrames;
        double total = (double)g_perfTotal / n;
        double vb = (double)g_perfVblank / n;
        double conv = (double)rt_gfx_perf_conv / 1193.182 / n;   /* PIT counts -> ms */
        double blit = (double)rt_blit_perf / 1193.182 / n;
        double wait = (double)g_perfWait / n;
        double pres = (double)g_perfPresent / n;
        printf("perf: %.1f ms/frame = %.2f frame/s\n", total, 1000.0 / total);
        printf("perf:   vblank %.1f ms, of it conversion %.1f; present copy %.1f; blitter %.1f\n",
               vb, conv, pres, blit);
        printf("perf:   machine code %.1f ms, idle waiting for the slot %.1f ms, work %.1f ms\n",
               total - vb - pres - wait, wait, total - wait);
        printf("perf:   conversion runs %.2f time(s)/frame; %.0f instruction(s)/frame, "
               "%.0f of them in the %.2f CIA run(s)/frame\n",
               (double)rt_gfx_frames() / n, (double)m.insns / n, (double)g_perfCiaInsns / n,
               (double)g_perfCiaRuns / n);
    }
    if (m.mem.bad != 0)
        printf("icftd: %lu access(es) outside the RAM block\n", (unsigned long)m.mem.bad);
    if (audioPlayed != 0 || audioDropped != 0)
        printf("icftd: audio %lu byte(s) sent to the card, %lu frame(s) dropped, "
               "%lu frame(s) starved\n",
               (unsigned long)audioPlayed, (unsigned long)audioDropped,
               (unsigned long)audioStarved);
    printf("icftd: settings %s, saves %lu\n",
           rt_config_path()[0] != 0 ? rt_config_path() : "(none)", (unsigned long)m.saves);
    (void)rc;
    return 0;
}
