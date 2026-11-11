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

#define DOS_IMAGE      "DSHELL.IMG"
#define MAX_SAVE_SLOTS 4

/* The 68000 register file, as oracle_regs_get/set order it: d0-d7, a0-a7, sr, pc. */
#define REGS_D 0
#define REGS_A 8
#define REGS_SR 16
#define REGS_PC 17

static cpu_t *g_cpu;
static int    g_trace;          /* --trace: the dispatch and CIA path, for a DOS-only defect */
static const char *g_dumpPath;  /* --dump <frame> <file>: the RAM image at that vblank */
u32    g_dumpFrame;
static int    g_dumped;
static u32    g_frameLimit;     /* --frames: stop at the end of this vblank */

/* --perf: where a frame's emulated time goes, in 8254 counts (1.193 MHz). */
static int    g_perf;
static u32    g_perfLast, g_perfTotal, g_perfVblank, g_perfPresent, g_perfFrames;

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

/* Last frame the game reached, for RCRASH.TXT: a DOS crash leaves nothing else behind. */
static void note_state(rt_machine *m, cpu_t *c)
{
    char text[256];

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
    u32 t0 = g_perf ? plat_pit_now() : 0;

    if (g_perf)
    {
        g_perfTotal += t0 - g_perfLast;
        g_perfLast = t0;
        g_perfFrames++;
    }
    scatter(c, m);
    oracle_tick(m);
    gather(c, m);
    if (g_perf) g_perfVblank += plat_pit_now() - t0;
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
    if (g_cpu == 0) return;
    if (g_trace) printf("  cia in %06lX frame %lu pc %06lX\n", (unsigned long)code,
                       (unsigned long)m->frame, (unsigned long)g_cpu->pc);
    scatter(g_cpu, m);
    oracle_run_icr(m, code, m->ciaData);
    gather(g_cpu, m);
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

static void dos_input(rt_machine *m)
{
    input_state in;
    u16 joy;

    if (!plat_pump(&in)) m->stop = 1;
    if (in.down[KEY_ESCAPE]) m->stop = 1;

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
    plat_frame_sync();
}

static void dos_present(rt_machine *m)
{
    const u8 *fb = rt_gfx_framebuffer();
    const u8 *pal = rt_gfx_palette();
    u8 *dst = plat_framebuffer();
    int w = rt_gfx_width(), h = rt_gfx_height();
    int x, y, cw;
    u32 t0 = g_perf ? plat_pit_now() : 0;

    if (fb == 0 || pal == 0 || dst == 0) return;
    if (w > SCREEN_W) w = SCREEN_W;
    if (h > SCREEN_H) h = SCREEN_H;
    plat_set_palette(0, PAL_ENTRIES, pal);
    /* The picture is a 320x200 chunky raster; anything smaller sits in the top left corner. */
    for (y = 0; y < h; y++)
    {
        cw = w;
        memcpy(dst + (u32)y * SCREEN_W, fb + (u32)y * EMU_FB_MAX_W, (size_t)cw);
        for (x = cw; x < SCREEN_W; x++) dst[(u32)y * SCREEN_W + x] = 0;
    }
    for (y = h; y < SCREEN_H; y++)
        memset(dst + (u32)y * SCREEN_W, 0, SCREEN_W);
    plat_present();
    if (g_perf) g_perfPresent += plat_pit_now() - t0;
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
    int i, rc = 0;
    int traced = 0, badReported = 0, tickLog = 0;
    long traceFrom = 0, traceTo = 0;
    u32 lastTraced = 0xFFFFFFFFu, prevTraced = 0xFFFFFFFFu;
    u32 translated = 0, interpreted = 0;

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
        if (strcmp(argv[i], "--perf") == 0) { g_perf = 1; continue; }
        if (strcmp(argv[i], "--call") == 0 && i + 1 < argc)
        {
            char *p = argv[++i];
            g_callPc = (u32)strtoul(p, &p, 0);
            g_callFrame = (*p == ':') ? (u32)strtoul(p + 1, &p, 0) : 300u;
            if (*p == ':') g_callArg = (u32)strtoul(p + 1, 0, 0);
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
    /* Audio is modelled but not played in this build; the gains are read so the next step only
     * has to open a device. */
    rt_audio_set_gain(&m, rt_config_int("AUDIO", "sound", 10, 0, 10),
                          rt_config_int("AUDIO", "music", 10, 0, 10));

    if (!plat_init("It Came from the Desert"))
    {
        printf("icftd: cannot set a video mode\n");
        rt_shutdown(&m);
        return 1;
    }
    m.on_frame = dos_input;
    m.on_present = dos_present;
    plat_set_frame_hz(50);

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
            u32 cost = oracle_cycle_cost(pc);

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

    rt_lvo_report();
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
    }
    if (g_perf && g_perfFrames != 0)
    {
        /* 1193182 counts = one second of emulated time, so a frame of 23863 counts is 20 ms. */
        double n = (double)g_perfFrames;
        printf("perf: %.0f counts/frame (%.1f ms)  vblank %.0f (%.0f%%)  present %.0f (%.0f%%)\n",
               (double)g_perfTotal / n, (double)g_perfTotal / n / 1193.182,
               (double)g_perfVblank / n, 100.0 * (double)g_perfVblank / (double)g_perfTotal,
               (double)g_perfPresent / n, 100.0 * (double)g_perfPresent / (double)g_perfTotal);
    }
    if (m.mem.bad != 0)
        printf("icftd: %lu access(es) outside the RAM block\n", (unsigned long)m.mem.bad);
    printf("icftd: settings %s, saves %lu\n",
           rt_config_path()[0] != 0 ? rt_config_path() : "(none)", (unsigned long)m.saves);
    (void)rc;
    return 0;
}
