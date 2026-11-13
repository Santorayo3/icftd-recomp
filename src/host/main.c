/* icftd-recomp: the translated game.
 *
 * The runtime plus src\recomp - the image's own instructions as C - with the vendored 68000 core
 * behind it for the few functions the translator refuses (line-F, BCD, two odd vector calls).
 * Those two front ends run in the SAME machine: the frame budget, the tick and the game's own
 * interrupt servers all live in src\oracle\cpu.c, so the only difference to `icftd-oracle` is who
 * executes the instruction stream.
 *
 * That is the point: `--state` dumps of this build and of the oracle, on one `--input` script,
 * must be identical. Machine state is the acceptance criterion (repo memory); pictures are not.
 *
 *   icftd-recomp [<image>] [<insns>] [--state <prefix> [--every n] [--ram f,f]]
 *                [--input <script>] [--data <dir>] [--progress] [--blitlog] [--base <addr>]
 *                [--window] [--run] [--speed <percent>] [--slot <n>]
 *                [--call <pc>[:<frame>]] [--osd <text>|save] [--shot <bmp>]
 *
 * `--run` opens the window and plays at 50 Hz until it is closed (esc quits, space is /FIRE,
 * arrows are the joystick, F1..F4 pick a save slot and F5 cycles them); without it the build runs
 * headless and only reports machine state. `--call` enters one of the engine's own routines at a
 * frame boundary, with the program-end sentinel as its return address.
 * `--speed` scales that clock for inspection: 100 is the Amiga's 50 Hz.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "machine.h"
#include "config.h"
#include "display.h"
#include "input.h"
#include "platform.h"
#include "state.h"
#include "m68k.h"
/* Two headers are called cpu.h: the 68000 front end's and the translated layer's. */
#include "../oracle/cpu.h"
#include "../recomp/cpu.h"
#include "../recomp/fn_table.h"

#define DEFAULT_IMAGE "export\\code\\dshell4k\\dshell.img"
#define HS_BASE       EMU_IMAGE_BASE
#define HS_ENTRY      EMU_ENTRY
#define HS_A4         EMU_A4

/* How many save slots the game exposes: saves\slot1 .. slot4. */
#define MAX_SAVE_SLOTS 4

/* The 68000 register file, as oracle_regs_get/set order it: d0-d7, a0-a7, sr, pc. */
#define REGS_D 0
#define REGS_A 8
#define REGS_SR 16
#define REGS_PC 17

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

/* --call: enter one of the engine's own routines once, at a chosen frame. */
static u32 g_callPc;
static u32 g_callRet;                      /* --call's 4th field: return here instead of the sentinel */
static u32 g_callFrame;
static u32 g_callArg;
static int g_called;

/* --poke <frame>:<addr>=<value>[,<addr>=<value>...] writes engine globals at a frame boundary, so
 * a state the game's own menus would produce (e.g. DAT_000269d6 = 9, "Take a Flight") can be set
 * without playing the UI. Machine state, like --call - never a picture. */

/* The last few addresses the dispatcher entered, newest last: a crash inside translated code is
 * located by m->pc (set per instruction), a crash in a shim by the entry that made the call. */
#define HOST_PC_RING 8
static u32 g_entryPc[HOST_PC_RING];
static int g_entryPos;

static void host_crash_note(rt_machine *m, cpu_t *c)
{
    char text[1024];
    int i = 0, n;

    i += sprintf(text + i, "frame %lu  insns %ld  pc %06lX\n", (unsigned long)m->frame,
                 (long)m->insns, (unsigned long)m->pc);
    i += sprintf(text + i, "entries");
    for (n = 0; n < HOST_PC_RING; n++)
        i += sprintf(text + i, " %06lX",
                     (unsigned long)g_entryPc[(g_entryPos + n) & (HOST_PC_RING - 1)]);
    i += sprintf(text + i, "\nD:");
    for (n = 0; n < 8; n++) i += sprintf(text + i, " %08lX", (unsigned long)c->d[n]);
    i += sprintf(text + i, "\nA:");
    for (n = 0; n < 8; n++) i += sprintf(text + i, " %08lX", (unsigned long)c->a[n]);
    i += sprintf(text + i, "\nSR %04lX  cpu pc %08lX  presents %lu  saves %lu\n",
                 (unsigned long)c->sr, (unsigned long)c->pc, (unsigned long)m->gfx.frames,
                 (unsigned long)m->saves);
    plat_crash_state(text);
}

/* The vertical blank, reached from inside translated code: the register file goes to the core, the
 * game's servers run there (they are original code, mostly untranslated), and whatever they left in
 * the registers comes back. */
static void host_frame(cpu_t *c, rt_machine *m)
{
    scatter(c, m);
    oracle_tick(m);
    gather(c, m);
    host_crash_note(m, c);
}

/* A CIA timer expiry (the engine's music driver) can land inside translated code as well as
 * between two interpreted instructions: the register file goes to the core, the handler runs
 * there with the interrupted state saved around it, and only its memory stores survive. */
static cpu_t *g_cpu;

static void host_cia(rt_machine *m, u32 code)
{
    if (g_cpu == 0) return;
    scatter(g_cpu, m);
    oracle_run_icr(m, code, m->ciaData);
    gather(g_cpu, m);
}

/* --- the window ----------------------------------------------------------------------------
 * Same contract as the oracle's: keyboard once per emulated frame (the menus spin on /FIRE without
 * drawing, so input cannot wait for a present) and a 50 Hz clock. */
static u32 g_window;
static u8  g_fireShown;
static FILE *g_record;                    /* --record: one line per input change, replayable */
static int g_recFire = -1;
static u16 g_recJoy = 0xFFFF;
#define HOST_MAX_POKES 8
static struct { u32 addr, val; } g_pokes[HOST_MAX_POKES];
static int g_pokeCount;
static u32 g_pokeFrame;
static const char *shotPath;
static const char *osdText;      /* --osd: keep this overlay up, instead of only on a slot change */
static int g_interpStat;

/* Which refused functions actually run, and what they cost: one entry per interpreted stretch,
 * keyed by the pc the interpreter was entered at. Printed at exit with --interpstat, so "the N
 * functions the translator refused" becomes a list of the ones that matter. */
#define INTERP_SLOTS 24
static u32 g_isPc[INTERP_SLOTS];
static u32 g_isInsns[INTERP_SLOTS];
static int g_isCount, g_isActive;
static u32 g_isCurrent;

static void interp_note(u32 pc, int startsStretch)
{
    int i;

    if (startsStretch) { g_isCurrent = pc; g_isActive = 1; }
    else if (!g_isActive) return;
    for (i = 0; i < g_isCount; i++)
        if (g_isPc[i] == g_isCurrent) { g_isInsns[i]++; return; }
    if (g_isCount < INTERP_SLOTS)
    {
        g_isPc[g_isCount] = g_isCurrent;
        g_isInsns[g_isCount] = 1;
        g_isCount++;
    }
}

static void interp_report(void)
{
    int i, j;

    if (!g_interpStat || g_isCount == 0) return;
    printf("recomp: interpreted stretches (pc %lu instruction(s)):\n", (unsigned long)g_isCount);
    for (i = 0; i < g_isCount; i++)
    {
        int best = i;
        for (j = i + 1; j < g_isCount; j++) if (g_isInsns[j] > g_isInsns[best]) best = j;
        { u32 p = g_isPc[i]; u32 n = g_isInsns[i];
          g_isPc[i] = g_isPc[best]; g_isInsns[i] = g_isInsns[best];
          g_isPc[best] = p; g_isInsns[best] = n; }
        printf("  %06lX  %lu\n", (unsigned long)g_isPc[i], (unsigned long)g_isInsns[i]);
    }
}

/* JOY0DAT for the sixteen key combinations, indexed up|down<<1|left<<2|right<<3.
 *
 * FUN_00011bf0 (and FUN_0000a500) decode the port into two axes:
 *     v = bit1 ? +1 : (bit9 ? -1 : 0)                      the engine's X  (+1 right, -1 left)
 *     h = (bit8 ^ bit9) ? -1 : ((bit0 ^ bit1) ? +1 : 0)     the engine's Y  (+1 down, -1 up)
 * v feeds DAT_000297ee and h DAT_000297f0 (FUN_00012202 moves the map cursor, FUN_00011cdc
 * scrolls it at the edges), so the axes are NOT interchangeable.
 *
 * These are the words a real joystick presents - one switch grounds one line of its pair (UAE's
 * joymousecounter -> JOY0DAT gives exactly these): up 0100, down 0001, left 0300, right 0003, and
 * a diagonal 0200 (up+left), 0103 (up+right), 0301 (down+left), 0002 (down+right). Under this
 * decode each one moves exactly one axis and leaves the other at 0, which is what makes the
 * engine's own consumers agree. */
static const u16 g_joyDirs[16] =
{
    0x0000u, 0x0100u, 0x0001u, 0x0000u,     /* idle          up            down          up+down   */
    0x0300u, 0x0200u, 0x0301u, 0x0300u,     /* left          up+left       down+left     up+down+left   */
    0x0003u, 0x0103u, 0x0002u, 0x0003u,     /* right         up+right      down+right    up+down+right  */
    0x0000u, 0x0100u, 0x0001u, 0x0000u      /* left+right    +left         +right        all four  */
};

static void host_input(rt_machine *m)
{
    input_state in;
    u16 joy;

    if (!plat_pump(&in)) m->stop = 1;
    if (in.down[KEY_ESCAPE]) m->stop = 1;
    if (input_active())
    {
        /* A frame-indexed script owns fire and the joystick; the keyboard only quits. */
        plat_frame_sync();
        return;
    }
    /* Save slot: F1..F4 pick one, F5 steps to the next. The engine writes its save into
     * DSAVE:, which the runtime maps onto saves\slot<N>, so the only feedback is the overlay. */
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
            printf("recomp: %s (frame %lu)\n", msg, (unsigned long)m->frame);
        }
    }
    m->fireDown = (u8)(in.down[KEY_FIRE] ? 1u : 0u);
    joy = g_joyDirs[(in.down[KEY_UP]    ? 1u : 0u) | (in.down[KEY_DOWN]  ? 2u : 0u) |
                    (in.down[KEY_LEFT]  ? 4u : 0u) | (in.down[KEY_RIGHT] ? 8u : 0u)];
    m->joy0 = joy;
    if (g_record != 0 && ((int)m->fireDown != g_recFire || joy != g_recJoy))
    {
        /* The same frame-indexed form --input reads, so a played session can be replayed exactly in
         * both front ends. Sparse: one line only when fire or the stick changes. */
        g_recFire = m->fireDown;
        g_recJoy = joy;
        fprintf(g_record, "%lu %d 0x%04X\n", (unsigned long)m->frame, (int)m->fireDown, joy);
        fflush(g_record);
    }
    if (m->fireDown != g_fireShown)
    {
        g_fireShown = m->fireDown;
        printf("recomp: /FIRE %s at frame %lu\n", m->fireDown ? "pressed" : "released",
               (unsigned long)m->frame);
    }
    plat_frame_sync();
}

/* Writes the presented raster as a 24-bit BMP (bottom-up); --shot makes screen content testable. */
static void shot_write(const char *path)
{
    const u8 *fb = rt_gfx_framebuffer();
    const u8 *pal = rt_gfx_palette();
    int w = rt_gfx_width(), h = rt_gfx_height();
    u32 rowBytes, dataSize;
    u8 hdr[54], row[EMU_FB_MAX_W * 3 + 4];
    FILE *f;
    int x, y;

    if (fb == 0 || pal == 0 || w <= 0 || h <= 0) return;
    rowBytes = (u32)((w * 3 + 3) & ~3);
    dataSize = rowBytes * (u32)h;
    f = fopen(path, "wb");
    if (f == 0) return;
    memset(hdr, 0, sizeof hdr);
    hdr[0] = 'B'; hdr[1] = 'M';
#define PUT32(o, v) do { u32 v_ = (u32)(v); hdr[o] = (u8)v_; hdr[o+1] = (u8)(v_ >> 8); \
                         hdr[o+2] = (u8)(v_ >> 16); hdr[o+3] = (u8)(v_ >> 24); } while (0)
    PUT32(2, 54 + dataSize); PUT32(10, 54); PUT32(14, 40);
    PUT32(18, w); PUT32(22, h); PUT32(34, dataSize);
    PUT32(38, 2835); PUT32(42, 2835);
#undef PUT32
    hdr[26] = 1;                            /* planes */
    hdr[28] = 24;                           /* bits per pixel */
    fwrite(hdr, 1, sizeof hdr, f);
    for (y = h - 1; y >= 0; y--)
    {
        memset(row, 0, rowBytes);
        for (x = 0; x < w; x++)
        {
            u32 p = (u32)fb[(u32)y * EMU_FB_MAX_W + x] * 3;
            row[x * 3 + 0] = pal[p + 2];
            row[x * 3 + 1] = pal[p + 1];
            row[x * 3 + 2] = pal[p + 0];
        }
        fwrite(row, 1, rowBytes, f);
    }
    fclose(f);
}

static void host_present(rt_machine *m)
{
    const u8 *fb = rt_gfx_framebuffer();
    const u8 *pal = rt_gfx_palette();
    int w = rt_gfx_width(), h = rt_gfx_height();
    u8 *dst;
    int y, cw;

    /* --osd keeps a line (or "save" for the icon) up, so a headless --shot can be checked by
     * pixel instead of by eye. Armed here so it works without a window. */
    if (osdText != 0)
    {
        if (strcmp(osdText, "save") == 0) rt_osd_icon(m, EMU_OSD_FRAMES);
        else rt_osd_text(m, osdText, EMU_OSD_FRAMES);
    }
    if (shotPath != 0) shot_write(shotPath);
    if (!g_window) return;
    dst = plat_framebuffer();
    cw = w < SCREEN_W ? w : SCREEN_W;
    plat_set_palette(0, 256, pal);
    for (y = 0; y < SCREEN_H && y < h; y++)
        memcpy(dst + (u32)y * SCREEN_W, fb + (u32)y * EMU_FB_MAX_W, (size_t)cw);
    plat_present();
    (void)m;
}

int main(int argc, char **argv)
{
    rt_machine m;
    cpu_t c;
    const char *image = DEFAULT_IMAGE;
    const char *dataDir = "export";
    const char *statePrefix = 0;
    const char *ramFrames = 0;
    const char *ramStop = 0;
    const char *callLog = 0;
    const char *frameLog = 0;
    long traceFrom = 0, traceTo = 0;
    int tickLog = 0;
    int ring = 0;
    int runForever = 0;
    int dosLog = 0;
    int textLog = 0;
    long speedPercent = 100;
    const char *inputPath = 0;
    const char *recordPath = 0;
    long insns = 40000000L;
    u32 base = HS_BASE;
    int i, rc = 1, progress = 0, stateEvery = 1;
    int blitLog = 0;
    u32 blitLogFrame = 0;
    u32 progressFrom = 0;
    const char *spriteLogPath = 0;
    u32 spriteLogFrom = 0;
    const char *audioDump = 0;
    int audioRegs = 0;
    int blitBytePtr = 0;
    int slot = 1;
    int slotGiven = 0;
    int slotsDump = 0;
    int slotsCheck = 0;
    u32 slotsAt = 0;
    const char *busTablePath = 0;
    u32 translated = 0, interpreted = 0;

    setvbuf(stdout, NULL, _IONBF, 0);
    memset(&c, 0, sizeof c);

    for (i = 1; i < argc; i++)
    {
        if (strcmp(argv[i], "--state") == 0 && i + 1 < argc) { statePrefix = argv[++i]; continue; }
        if (strcmp(argv[i], "--ram") == 0 && i + 1 < argc) { ramFrames = argv[++i]; continue; }
        if (strcmp(argv[i], "--ramstop") == 0 && i + 1 < argc) { ramStop = argv[++i]; continue; }
        if (strcmp(argv[i], "--calllog") == 0 && i + 1 < argc) { callLog = argv[++i]; continue; }
        if (strcmp(argv[i], "--framelog") == 0 && i + 1 < argc) { frameLog = argv[++i]; continue; }
        if (strcmp(argv[i], "--ring") == 0) { ring = 1; continue; }
        if (strcmp(argv[i], "--ticklog") == 0) { tickLog = 1; continue; }
        if (strcmp(argv[i], "--slots") == 0) { slotsDump = 1; continue; }
        if (strcmp(argv[i], "--slots-check") == 0) { slotsCheck = 1; continue; }
        if (strcmp(argv[i], "--slotsat") == 0 && i + 1 < argc) { slotsAt = (u32)strtoul(argv[++i], 0, 0); continue; }
        if (strcmp(argv[i], "--bustable") == 0 && i + 1 < argc) { busTablePath = argv[++i]; continue; }        if (strcmp(argv[i], "--audioregs") == 0) { audioRegs = 1; continue; }
        if (strcmp(argv[i], "--window") == 0) { g_window = 1; continue; }
        if (strcmp(argv[i], "--run") == 0) { g_window = 1; runForever = 1; continue; }
        if (strcmp(argv[i], "--audiodump") == 0 && i + 1 < argc) { audioDump = argv[++i]; continue; }
        if (strcmp(argv[i], "--doslog") == 0) { dosLog = 1; continue; }
        if (strcmp(argv[i], "--textlog") == 0) { textLog = 1; continue; }
        if (strcmp(argv[i], "--interpstat") == 0) { g_interpStat = 1; continue; }
        if (strcmp(argv[i], "--shot") == 0 && i + 1 < argc) { shotPath = argv[++i]; continue; }
        if (strcmp(argv[i], "--osd") == 0 && i + 1 < argc) { osdText = argv[++i]; continue; }
        if (strcmp(argv[i], "--poke") == 0 && i + 1 < argc)
        {
            /* <frame>:<addr>=<val>[,...] - the runtime writes these at that frame boundary, so the
             * write also lands inside a scene that runs its setup within one translated function. */
            char *p = argv[++i];
            g_pokeFrame = (u32)strtoul(p, &p, 0);
            while (*p == ':' || *p == ',') p++;
            while (*p != 0 && g_pokeCount < HOST_MAX_POKES)
            {
                u32 a = (u32)strtoul(p, &p, 0);
                u32 v = 0;
                if (*p == '=') v = (u32)strtoul(p + 1, &p, 0);
                g_pokes[g_pokeCount].addr = a;
                g_pokes[g_pokeCount].val = v;
                g_pokeCount++;
                while (*p == ',') p++;
            }
            continue;
        }
        if (strcmp(argv[i], "--call") == 0 && i + 1 < argc)
        {
            char *p = argv[++i];
            g_callPc = (u32)strtoul(p, &p, 0);
            g_callFrame = (*p == ':') ? (u32)strtoul(p + 1, &p, 0) : 300u;
            if (*p == ':') g_callArg = (u32)strtoul(p + 1, &p, 0);
            if (*p == ':') g_callRet = (u32)strtoul(p + 1, &p, 0);
            continue;
        }
        if (strcmp(argv[i], "--speed") == 0 && i + 1 < argc)
        {
            speedPercent = strtol(argv[++i], 0, 0);
            if (speedPercent < 1) speedPercent = 1;
            if (speedPercent > 1000) speedPercent = 1000;
            continue;
        }
        if (strcmp(argv[i], "--tracewin") == 0 && i + 1 < argc)
        {
            char *p = argv[++i];
            traceFrom = strtol(p, &p, 0);
            if (*p == ',') p++;
            traceTo = strtol(p, 0, 0);
            continue;
        }
        if (strcmp(argv[i], "--input") == 0 && i + 1 < argc) { inputPath = argv[++i]; continue; }
        if (strcmp(argv[i], "--record") == 0 && i + 1 < argc) { recordPath = argv[++i]; continue; }
        if (strcmp(argv[i], "--every") == 0 && i + 1 < argc) { stateEvery = (int)strtol(argv[++i], 0, 0); continue; }
        if (strcmp(argv[i], "--data") == 0 && i + 1 < argc) { dataDir = argv[++i]; continue; }
        if (strcmp(argv[i], "--slot") == 0 && i + 1 < argc)
        {
            slot = (int)strtol(argv[++i], 0, 0);
            slotGiven = 1;
            if (slot < 1) slot = 1;
            if (slot > MAX_SAVE_SLOTS) slot = MAX_SAVE_SLOTS;
            continue;
        }
        if (strcmp(argv[i], "--base") == 0 && i + 1 < argc) { base = (u32)strtoul(argv[++i], 0, 0); continue; }
        if (strcmp(argv[i], "--progress") == 0)
        {
            progress = 1;
            if (i + 1 < argc && argv[i + 1][0] >= '0' && argv[i + 1][0] <= '9') progressFrom = (u32)strtoul(argv[++i], 0, 0);
            continue;
        }
        if (strcmp(argv[i], "--blitlog") == 0)
        {
            blitLog = 1;
            if (i + 1 < argc && argv[i + 1][0] >= '0' && argv[i + 1][0] <= '9') blitLogFrame = (u32)strtoul(argv[++i], 0, 0);
            continue;
        }
        if (strcmp(argv[i], "--byteptr") == 0) { blitBytePtr = 1; continue; }
        if (strcmp(argv[i], "--noblitfix") == 0) { blitBytePtr = 1; continue; }   /* old name */
        if (strcmp(argv[i], "--spritelog") == 0 && i + 1 < argc)
        {
            spriteLogPath = argv[++i];
            if (i + 1 < argc && argv[i + 1][0] >= '0' && argv[i + 1][0] <= '9')
                spriteLogFrom = (u32)strtoul(argv[++i], 0, 0);
            continue;
        }
        if (strcmp(argv[i], "--stopat") == 0 && i + 1 < argc)
        {
            rc_stopAt = strtol(argv[++i], 0, 0); insns = rc_stopAt; continue;
        }
        if (argv[i][0] == '-') { printf("recomp: unknown option %s\n", argv[i]); return 2; }
        if (strchr(argv[i], '\\') || strchr(argv[i], '/') || strchr(argv[i], '.')) image = argv[i];
        else insns = strtol(argv[i], 0, 0);
    }
    if (slotsCheck) return rt_slots_selftest() == 0 ? 0 : 1;
    if (insns <= 0) insns = 40000000L;
    if (runForever) insns = 0x7FFFFFF0L;       /* the window decides when to stop */
    /* One rc_call runs a whole translated function, so the limit has to be armed inside the
     * stream too or a run overshoots it by up to a function. */
    if (rc_stopAt <= 0 && !runForever) rc_stopAt = insns;

    if (!rt_init(&m)) { printf("recomp: out of memory\n"); return 1; }
    if (!rt_load_image(&m, base, image)) { printf("recomp: cannot load %s\n", image); rt_shutdown(&m); return 1; }
    m.dataDir = dataDir;
    m.progress = progress;
    m.progressFrom = progressFrom;
    m.blitLog = blitLog;
    m.blitLogFrame = blitLogFrame;
    m.blitBytePtr = blitBytePtr;
    if (spriteLogPath != 0)
    {
        FILE *f = fopen(spriteLogPath, "w");
        if (f == 0) { printf("recomp: cannot write %s\n", spriteLogPath); rt_shutdown(&m); return 2; }
        m.spriteLog = (void *)f;
        m.spriteLogFrom = spriteLogFrom;
        printf("recomp: sprite blits -> %s (from frame %lu)\n", spriteLogPath,
               (unsigned long)spriteLogFrom);
    }
    m.dosLog = dosLog;
    m.textLog = textLog;
    m.busTable = busTablePath != 0;
    m.slotsAt = slotsAt;
    m.saveSlot = slot;
    if (slotGiven)
    {
        /* The command line picked a slot: say so the way the F-keys do, so a headless --shot can
         * check the overlay (and the empty marker) without a keyboard. */
        char msg[40];
        sprintf(msg, "Save Slot - %d%s", m.saveSlot,
                rt_save_slot_empty(&m, m.saveSlot) ? " (Empty)" : "");
        printf("recomp: %s\n", msg);
        rt_osd_text(&m, msg, EMU_OSD_FRAMES);
    }
    if (inputPath != 0 && !input_load(inputPath)) { rt_shutdown(&m); return 1; }
    if (recordPath != 0)
    {
        g_record = fopen(recordPath, "w");
        if (g_record == 0) { printf("recomp: cannot write %s\n", recordPath); rt_shutdown(&m); return 1; }
        printf("recomp: recording input -> %s\n", recordPath);
    }
    {
        int k;
        for (k = 0; k < g_pokeCount; k++) rt_poke(&m, g_pokeFrame, g_pokes[k].addr, g_pokes[k].val);
    }
    if (callLog != 0) rt_calllog_open(&m, callLog);
    if (frameLog != 0) rt_framelog_open(&m, frameLog);
    /* The settings file, written with its defaults when this is the first start. */
    rt_config_ensure();
    m.traceFrom = traceFrom;
    m.traceTo = traceTo;
    m.tickLog = tickLog;
    m.audioLog = audioRegs;
    if (g_window)
    {
        int fs = 0;
        fs = rt_config_bool("VIDEO", "fullscreen", 1);
        plat_set_fullscreen((u32)fs);
        if (!plat_init("It Came from the Desert (recomp)"))
        {
            printf("recomp: cannot open a window\n");
            rt_shutdown(&m);
            return 1;
        }
        printf("recomp: video %s, fullscreen=%d\n",
               rt_config_path()[0] != 0 ? rt_config_path() : "(no icftd.ini)", fs);
        rt_audio_set_gain(&m, rt_config_int("AUDIO", "sound", 10, 0, 10),
                              rt_config_int("AUDIO", "music", 10, 0, 10));
        if (plat_audio_open(EMU_AUD_RATE))
        {
            rt_audio_open(&m, EMU_AUD_RATE);
            printf("recomp: audio %lu Hz stereo, sound %d/10, music %d/10\n",
                   (unsigned long)EMU_AUD_RATE, m.audio.soundGain / 10, m.audio.musicGain / 10);
        }
        else
        {
            printf("recomp: no audio device - running silent\n");
        }
        m.on_frame = host_input;
        /* 100% = 50 Hz, the Amiga's rate; lower is a debugging aid for comparing content. */
        plat_set_frame_hz((u32)(50 * speedPercent / 100));
        if (speedPercent != 100)
            printf("recomp: %ld%% speed (%lu Hz)\n", speedPercent,
                   (unsigned long)(50 * speedPercent / 100));
    }
    if (audioDump != 0)
    {
        /* Mix without a device: the run's audio is checked (and can be heard) offline. */
        rt_audio_set_gain(&m, rt_config_int("AUDIO", "sound", 10, 0, 10),
                              rt_config_int("AUDIO", "music", 10, 0, 10));
        rt_audio_render_only(&m, EMU_AUD_RATE);
        if (!rt_audio_capture(&m, audioDump)) { printf("recomp: cannot write %s\n", audioDump); rt_shutdown(&m); return 1; }
        printf("recomp: audio -> %s (%lu Hz stereo, raw s16)\n", audioDump, (unsigned long)EMU_AUD_RATE);
    }
    if (g_window || shotPath != 0) m.on_present = host_present;

    printf("recomp: %s at 0x%lx, %ld instruction(s), base %ld\n", image, (unsigned long)base,
           insns, (long)RC_BASE);

    oracle_boot(HS_ENTRY, HS_A4);
    if (statePrefix != 0)
    {
        if (!state_open(statePrefix, stateEvery, ramFrames)) { rt_shutdown(&m); return 1; }
        state_sample(&m);                              /* frame 0 */
    }

    rc_frame_hook = host_frame;
    rc_stopOnUnknown = 1;
    rc_abort = 0;                                      /* the game's loops are supposed to spin */
    g_cpu = &c;
    m.on_cia = host_cia;
    gather(&c, &m);

    while (m.insns < insns && !m.stop)
    {
        u32 pc;

        if (g_callPc != 0 && !g_called && m.frame >= g_callFrame)
        {
            /* Enter one of the engine's own routines as if its caller had just called it: a frame
             * is pushed with the program-end sentinel as the return address, so the run stops
             * cleanly when it returns. This is how a scene is reached without playing to it. The
             * core's PC has to be set here - translated code rewrites c->pc per instruction. */
            u32 r[18];
            u32 beforePc = m68k_get_reg(0, M68K_REG_PC);
            g_called = 1;
            oracle_regs_get(r);
            r[REGS_A + 7] -= 4;
            rt_write32(&m.mem, r[REGS_A + 7], g_callArg);   /* the routine's first argument */
            r[REGS_A + 7] -= 4;
            rt_write32(&m.mem, r[REGS_A + 7], g_callRet != 0 ? g_callRet : EMU_EXIT_PC);
            r[REGS_PC] = g_callPc;
            oracle_regs_set(r);
            printf("recomp: calling %06lX(%08lX) at frame %lu (%ld insns, was at pc %06lX)\n",
                   (unsigned long)g_callPc, (unsigned long)g_callArg, (unsigned long)m.frame,
                   (long)m.insns, (unsigned long)beforePc);
            if (g_callRet != 0)
                printf("recomp:      returns into the program at %06lX\n", (unsigned long)g_callRet);
        }
        pc = m68k_get_reg(0, M68K_REG_PC);

        if (rc_containing(pc) != 0 || rc_lookup(pc) != 0)
        {
            /* Translated: it runs until it returns, or until it transfers somewhere the translator
             * refused, and c->pc then names where the core continues. */
            translated++;
            g_entryPc[g_entryPos++ & (HOST_PC_RING - 1)] = pc;
            g_isActive = 0;
            gather(&c, &m);                            /* the core's state is the machine's */
            rc_call(&c, &m, pc);
            scatter(&c, &m);                           /* ... and what the translation left is next */
            continue;
        }
        interpreted++;
        interp_note(pc, !g_isActive);
        while (m.waitFrames > 0) { m.waitFrames--; rt_time_idle(&m); oracle_tick(&m); }
        {
            u32 cost = oracle_instruction_cost(&m, pc);

            rt_trace(&m, pc);
            m.cyclesToTick -= (long)cost;
            rt_time_run(&m, (long)cost);       /* Paula + CIA timers, as in oracle_run */
            rt_cia_service(&m);
            if (m.cyclesToTick < 0) oracle_tick(&m);
        }
        if (!oracle_step(&m)) break;
        if (progress && (m.insns % 1000000L) == 0)
            printf("recomp: %ld steps, frame %lu, %lu raster(s), %lu translated entry(ies)\n",
                   (long)m.insns, (unsigned long)m.frame, (unsigned long)m.gfx.frames,
                   (unsigned long)translated);
    }

    printf("recomp: stopped at 0x%lx after %ld instruction(s), frame %lu\n",
           (unsigned long)m68k_get_reg(0, M68K_REG_PC), (unsigned long)m.insns,
           (unsigned long)m.frame);
    printf("recomp: %lu translated entry(ies), %lu interpreted instruction(s)\n",
           (unsigned long)translated, (unsigned long)interpreted);
    interp_report();
    if (ring) oracle_ring_print(&m);
    printf("regs:");
    for (i = 0; i < 8; i++) printf(" D%d=%08lX", i, (unsigned long)m68k_get_reg(0, M68K_REG_D0 + i));
    for (i = 0; i < 8; i++) printf(" A%d=%08lX", i, (unsigned long)m68k_get_reg(0, M68K_REG_D0 + 8 + i));
    printf(" SR=%04lX PC=%08lX\n", (unsigned long)m68k_get_reg(0, M68K_REG_SR),
           (unsigned long)m68k_get_reg(0, M68K_REG_PC));
    printf("recomp: D0=%08lX D1=%08lX A0=%08lX A1=%08lX A6=%08lX A7=%08lX SR=%04lX\n",
           (unsigned long)m68k_get_reg(0, M68K_REG_D0),
           (unsigned long)m68k_get_reg(0, M68K_REG_D1),
           (unsigned long)m68k_get_reg(0, M68K_REG_A0),
           (unsigned long)m68k_get_reg(0, M68K_REG_A1),
           (unsigned long)m68k_get_reg(0, M68K_REG_A6),
           (unsigned long)m68k_get_reg(0, M68K_REG_A7),
           (unsigned long)m68k_get_reg(0, M68K_REG_SR));
    if (m.mem.bad != 0)
        printf("recomp: %lu access(es) outside the RAM block\n", (unsigned long)m.mem.bad);
    printf("recomp: %lu raster(s) presented\n", (unsigned long)rt_gfx_frames());
    printf("recomp: %d interrupt server(s), %lu handler run(s)\n", m.intCount,
           (unsigned long)m.handlerRuns);
    {
        /* Emulated time vs wall clock: 50 frames per second is the Amiga's rate. */
        u32 ms = plat_ticks_ms();
        if (g_window)
            printf("recomp: %lu frame(s) in %lu ms (%.1f frame/s)\n", (unsigned long)m.frame,
                   (unsigned long)ms, ms != 0 ? (double)m.frame * 1000.0 / (double)ms : 0.0);
    }
    state_close();
    if (ramStop != 0) state_ram_snapshot(&m, ramStop);
    /* A dropping device means the emulation fell behind its own 50 Hz clock: worth one line in
     * every run that had audio. */
    if (m.audio.device != 0)
    {
        u32 dropped = plat_audio_dropped();
        if (dropped != 0) printf("recomp: audio dropped %lu frame(s)\n", (unsigned long)dropped);
    }
    if (shotPath != 0)
    {
        const u8 *pal = rt_gfx_palette();
        const u8 *fb = rt_gfx_framebuffer();
        int w = rt_gfx_width(), h = rt_gfx_height(), x, y, k;
        u32 hist[16];
        printf("shot: %dx%d  pal", w, h);
        for (k = 0; k < 16 && pal != 0; k++)
            printf(" %02lX%02lX%02lX", (unsigned long)pal[k * 3], (unsigned long)pal[k * 3 + 1],
                   (unsigned long)pal[k * 3 + 2]);
        printf("\n");
        for (k = 0; k < 16; k++) hist[k] = 0;
        for (y = 0; y < h && fb != 0; y++)
            for (x = 0; x < w; x++)
            {
                u8 v = fb[(u32)y * EMU_FB_MAX_W + x];
                if (v < 16) hist[v]++;
            }
        printf("shot: pixel counts per pen");
        for (k = 0; k < 16; k++)
            if (hist[k] != 0) printf(" %d:%lu", k, (unsigned long)hist[k]);
        printf("\n");
    }
    if (slotsDump) rt_slots_print(&m);
    if (busTablePath != 0) oracle_bus_dump(busTablePath);
    rt_shutdown(&m);
    if (g_window) plat_shutdown();
    rc = 0;
    return rc;
}
