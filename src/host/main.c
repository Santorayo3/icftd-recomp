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
 *                [--dump <prefix> [n]] [--dumpfrom <frame>] [--cover <file>]
 *                [--titlekey <n>] [--mouse <file>]
 *
 * `--run` opens the window and plays at 50 Hz until it is closed (esc quits, space or the left
 * mouse button is /FIRE, arrows are the joystick, F1..F4 pick a save slot and F5 cycles them, and
 * the mouse moves the situation map's cursor); without it the build runs headless and only reports
 * machine state. `--call` enters one of the engine's own routines at a frame boundary, with the
 * program-end sentinel as its return address.
 * `--mouse` feeds the situation map's cursor the positions a platform pointer would report
 * ("<frame> <x> <y> [<button>]"), so the port's pointer control can be measured without a mouse
 * (it is a dev seam like --input; in a played game the platform pointer drives the same state).
 * `--speed` scales that clock for inspection: 100 is the Amiga's 50 Hz.
 * `--titlekey` takes one of the title screen's menu choices (0 the game, 1..6 the minigames) so a
 * scripted run can start a scene from the title; it is a dev seam like `--call`.
 * `--dump` writes one raster per presented frame, the way the oracle's does: a scroll is a
 * sequence of frames, so "does it move, and by how much" is measured on consecutive rasters
 * (`--dumpfrom` starts the sequence at an emulated frame, for a scene reached deep into a run).
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
#include "title.h"

#define DEFAULT_IMAGE "export\\code\\dshell4k\\dshell.img"
#define HS_BASE       EMU_IMAGE_BASE
#define HS_ENTRY      EMU_ENTRY
#define HS_A4         EMU_A4

/* How many save slots the game exposes: saves\slot1 .. slot4. */
#define MAX_SAVE_SLOTS 4

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

/* The title injects calls, and pops their arguments, on the machine's register file while no
 * translated code is running; host_cia scatters the mirror above into the core, so it must be
 * brought up to date or the handler's frame would undo those writes. */
void host_regs_sync(rt_machine *m)
{
    if (g_cpu != 0) gather(g_cpu, m);
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
#define HOST_DUMP_MAX 512
static const char *dumpPrefix;    /* --dump: one raster per presented frame */
static int  dumpCount = 64;
static int  dumpIndex;
static u32  dumpFrom;             /* --dumpfrom: start the sequence at this emulated frame */
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

/* Which translated functions a run actually executes: `--cover <file>` writes one line per
 * function that ran, keyed by its entry address, plus the pcs the core had to interpret. Without
 * it, "what has never been exercised" is a guess; with it, a recorded playthrough becomes a list.
 * The table is sorted and `rc_containing` hands back its element, so the index is O(1). */
#define HOST_COVER_FUNCS 2048
#define HOST_COVER_EXTRA 32
static const char *coverPath;
static u32 g_covHits[HOST_COVER_FUNCS];
static u32 g_covExtraPc[HOST_COVER_EXTRA];
static u32 g_covExtraHits[HOST_COVER_EXTRA];
static int g_covExtraCount;

static void cover_hit(unsigned index)
{
    if (index < HOST_COVER_FUNCS) g_covHits[index]++;
}

/* Interpreted instructions (the refused functions, and every interrupt handler, which both front
 * ends run on the 68000 core) are keyed by the pc the core is at; the owning function is found
 * through the translated table so both sides of the measurement share one list. */
static void cover_note(u32 pc)
{
    const rc_entry *e;
    int i;

    if (coverPath == 0) return;
    e = rc_containing(pc);
    if (e != 0)
    {
        unsigned idx = (unsigned)(e - rc_functions);
        if (idx < HOST_COVER_FUNCS) { g_covHits[idx]++; return; }
    }
    for (i = 0; i < g_covExtraCount; i++)
        if (g_covExtraPc[i] == pc) { g_covExtraHits[i]++; return; }
    if (g_covExtraCount < HOST_COVER_EXTRA)
    {
        g_covExtraPc[g_covExtraCount] = pc;
        g_covExtraHits[g_covExtraCount] = 1;
        g_covExtraCount++;
    }
}

static void cover_report(void)
{
    FILE *f;
    unsigned i;
    int n = 0, k;

    if (coverPath == 0) return;
    f = fopen(coverPath, "w");
    if (f == 0) { printf("recomp: cannot write %s\n", coverPath); return; }
    fprintf(f, "# entry calls\n");
    for (i = 0; i < rc_functionCount && i < HOST_COVER_FUNCS; i++)
        if (g_covHits[i] != 0)
        {
            fprintf(f, "%08lX %lu\n", (unsigned long)rc_functions[i].addr,
                    (unsigned long)g_covHits[i]);
            n++;
        }
    for (k = 0; k < g_covExtraCount; k++)
        fprintf(f, "%08lX %lu interpreted\n", (unsigned long)g_covExtraPc[k],
                (unsigned long)g_covExtraHits[k]);
    fclose(f);
    printf("recomp: coverage: %d of %u translated function(s) ran -> %s\n", n,
           rc_functionCount, coverPath);
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

/* --- the situation map's cursor and the pointer (a port feature) -----------------------------
 * The original is joystick-only: the map scene's per-frame script FUN_00003B1E moves the cursor
 * with the stick. FUN_0001D2C6 runs a MovE scene by calling the scene's script function once a
 * frame, and the map's is FUN_00003B1E, so its entry is where the cursor state is about to be
 * consumed - after the vblank that read the stick (ClockVBI -> FUN_0000A500), before the cursor,
 * the map scroll and the destination test run.
 *
 * What the script does with the inputs (0x26892/0x26894 are the decoded axes, +/-1):
 *   0x26830/0x26834 += axis        (so a held direction accelerates: 1, 2, 3 ... px per update)
 *   0x28A54/0x28A58 += that speed  (the cursor's screen position)
 *   past the travel window 0x19..0x136 x 0x19..0x28A48 the cursor is clamped and the map origin
 *   0x28A4C/0x28A50 moves instead - i.e. the map scrolls (FUN_000035D2 keeps it on the picture);
 *   the map position under the cursor's hot spot 0x11/0x12 then picks the destination.
 *
 * The pointer drives that same state absolutely: the cursor is pinned under it (hot spot added)
 * every update, and while the pointer is pushed past the travel window the cursor stays on the
 * edge it hit while the picture scrolls under it. That scroll rate is this seam's own - the
 * engine's accumulator cannot carry it (see map_pointer).
 * Only those words are written, and only while the map's script is the one being called, so no
 * other screen and no headless/scripted measurement (where this is not armed at all) can see it. */
#define MAP_SCRIPT_PC  0x00003B1Eu
#define MAP_CUR_MIN    0x19        /* the travel window, from FUN_00003B1E */
#define MAP_CUR_MAXX   0x136
#define MAP_HOT_X      0x11        /* the cursor sprite's hot spot: its tip, from FUN_00003B1E */
#define MAP_HOT_Y      0x12
#define MAP_SCROLL     6           /* picture pixels per update at the window's edge: the stick's
                                    * own ramp runs 1..14, and the pointer has no hold to ramp
                                    * with - reversing at the other edge must take effect at once */
#define MAP_MAX_Y      0x00028A48u /* word, the window's bottom row (0xC4, 0xB0 in the 0xF mode) */
#define MAP_ORG_X      0x00028A4Cu /* long, map picture offset <= 0 ... */
#define MAP_ORG_Y      0x00028A50u
#define MAP_ORG_MINY   0x00028A5Cu /* ... and the bottom limit FUN_000035D2 clamps to */
#define MAP_ORG_MAXX   0x13F       /* the same clamp, x: -0x13F (FUN_000035D2) */
#define MAP_CUR_X      0x00028A54u /* long, cursor screen x/y */
#define MAP_CUR_Y      0x00028A58u
#define MAP_AXIS_X     0x00026892u /* word, the decoded stick, +1 right / -1 left */
#define MAP_AXIS_Y     0x00026894u /* ... +1 down / -1 up */
/* The map's script runs every few vblanks (its loop flips buffers and waits), so "the map is not
 * on screen" cannot be decided on one frame: this many frames without a script call means the
 * screen is gone, and the next one starts with the game's own cursor placement again. */
#define MAP_IDLE_FRAMES 30

static int  g_ptrArm;                  /* the pointer seam may run (a played game, or --mouse) */
static int  g_ptrKnown;                /* a pointer position is available */
static int  g_ptrActive;               /* the pointer owns the map cursor */
static s16  g_ptrX, g_ptrY;            /* framebuffer coordinates */

/* --mouse <file>: "<frame> <x> <y> [<button>]" per line, the pointer's positions and left-button
 * state as the platform would report them. A dev seam like --input: the same state, so the feature
 * can be measured headless (no platform has to be driven and no human has to be at the mouse). */
#define HOST_MOUSE_MAX 256
static struct { u32 frame; s16 x, y; u8 button; } g_ptrScript[HOST_MOUSE_MAX];
static int g_ptrScriptCount, g_ptrScriptPos;
static u8  g_ptrButton;                /* the script's left button, held until it changes */
static u32 g_mapFrame;                 /* last frame in which the map's script ran */

static void pointer_script_load(const char *path)
{
    FILE *f = fopen(path, "r");
    char line[160];

    if (f == 0) { printf("recomp: cannot read %s\n", path); return; }
    while (fgets(line, sizeof line, f) != 0 && g_ptrScriptCount < HOST_MOUSE_MAX)
    {
        char *p = line;
        u32 fr;
        long x, y, b = 0;
        while (*p == ' ' || *p == '\t') p++;
        if (*p == '#' || *p == '\n' || *p == '\r' || *p == 0) continue;
        fr = (u32)strtoul(p, &p, 0);
        x = strtol(p, &p, 0);
        y = strtol(p, &p, 0);
        b = strtol(p, &p, 0);
        g_ptrScript[g_ptrScriptCount].frame = fr;
        g_ptrScript[g_ptrScriptCount].x = (s16)x;
        g_ptrScript[g_ptrScriptCount].y = (s16)y;
        g_ptrScript[g_ptrScriptCount].button = (u8)(b != 0);
        g_ptrScriptCount++;
    }
    fclose(f);
    printf("recomp: pointer script %s, %d position(s)\n", path, g_ptrScriptCount);
}

/* Applies the scripted pointer positions that are due - the script holds the last one, like a
 * pointer that stays where it was put (and the button with it). */
static void pointer_script_tick(rt_machine *m)
{
    while (g_ptrScriptPos < g_ptrScriptCount && g_ptrScript[g_ptrScriptPos].frame <= m->frame)
    {
        g_ptrX = g_ptrScript[g_ptrScriptPos].x;
        g_ptrY = g_ptrScript[g_ptrScriptPos].y;
        g_ptrButton = g_ptrScript[g_ptrScriptPos].button;
        g_ptrKnown = 1;
        g_ptrActive = 1;
        g_ptrScriptPos++;
    }
}

/* The keyboard wins while a direction is held, the pointer wins when it moves: either one can be
 * used on the same screen without the other fighting it (the same rule the platform's own pad
 * follows). A pointer that has not moved since the map opened leaves the cursor where the game put
 * it, on the current location. */
static void pointer_input(const input_state *in, int stickHeld)
{
    if (!in->mouse_present) { g_ptrKnown = 0; g_ptrActive = 0; return; }
    g_ptrKnown = 1;
    if (stickHeld) g_ptrActive = 0;
    else if (in->mouse_moved) { g_ptrX = in->mouse_x; g_ptrY = in->mouse_y; g_ptrActive = 1; }
}

/* Runs at FUN_00003B1E's entry, i.e. once per map update, right before the cursor is moved. */
static void map_pointer(rt_machine *m)
{
    s32 x, y, maxY, ox, oy, sx = 0, sy = 0;

    g_mapFrame = m->frame;
    if (!g_ptrKnown || !g_ptrActive) return;

    maxY = (s16)rt_read16(&m->mem, RC_ADDR(MAP_MAX_Y));
    x = (s32)g_ptrX + MAP_HOT_X;
    y = (s32)g_ptrY + MAP_HOT_Y;
    /* Pushed past the travel window: the cursor stops at the edge it hit and the picture moves
     * under it. Back inside, it just follows the pointer again. */
    if (x < MAP_CUR_MIN)       { sx = -MAP_SCROLL; x = MAP_CUR_MIN; }
    else if (x > MAP_CUR_MAXX) { sx =  MAP_SCROLL; x = MAP_CUR_MAXX; }
    if (y < MAP_CUR_MIN)       { sy = -MAP_SCROLL; y = MAP_CUR_MIN; }
    else if (y > maxY)         { sy =  MAP_SCROLL; y = maxY; }

    /* The cursor itself is in screen coordinates (the map picture's offset is 0x28A4C/0x28A50, and
     * FUN_00003B1E converts with cursor - offset when it tests a location). The stick is left idle:
     * this update's movement is the pointer's, not a held direction's. */
    rt_write16(&m->mem, RC_ADDR(MAP_AXIS_X), 0);
    rt_write16(&m->mem, RC_ADDR(MAP_AXIS_Y), 0);
    rt_write32(&m->mem, RC_ADDR(MAP_CUR_X), (u32)x);
    rt_write32(&m->mem, RC_ADDR(MAP_CUR_Y), (u32)y);

    /* The scrolling is this seam's own: the engine's accumulator is reset by every vblank between
     * two map updates (it reads the stick as idle there), so with the pointer it can only ever add
     * +/-1 per update. The clamps are FUN_000035D2's, applied here so the cursor and the picture
     * never disagree. */
    if (sx != 0)
    {
        ox = (s32)rt_read32(&m->mem, RC_ADDR(MAP_ORG_X)) - sx;
        if (ox < -MAP_ORG_MAXX) ox = -MAP_ORG_MAXX;
        if (ox > 0) ox = 0;
        rt_write32(&m->mem, RC_ADDR(MAP_ORG_X), (u32)ox);
    }
    if (sy != 0)
    {
        oy = (s32)rt_read32(&m->mem, RC_ADDR(MAP_ORG_Y)) - sy;
        if (oy < (s32)rt_read32(&m->mem, RC_ADDR(MAP_ORG_MINY)))
            oy = (s32)rt_read32(&m->mem, RC_ADDR(MAP_ORG_MINY));
        if (oy > 0) oy = 0;
        rt_write32(&m->mem, RC_ADDR(MAP_ORG_Y), (u32)oy);
    }
}

/* rc_entryHook: the map's script is reached from inside the translated stream (the scene runner's
 * `jsr (A0)`), so this is where its update becomes visible to the host. */
static void host_entry(cpu_t *c, rt_machine *m, u32 pc)
{
    (void)c;
    if (pc == RC_ADDR(MAP_SCRIPT_PC)) map_pointer(m);
}

static void host_input(rt_machine *m)
{
    input_state in;
    u16 joy;

    if (!plat_pump(&in)) m->stop = 1;
    if (in.down[KEY_ESCAPE]) m->stop = 1;
    joy = g_joyDirs[(in.down[KEY_UP]    ? 1u : 0u) | (in.down[KEY_DOWN]  ? 2u : 0u) |
                    (in.down[KEY_LEFT]  ? 4u : 0u) | (in.down[KEY_RIGHT] ? 8u : 0u)];
    if (g_ptrArm)
    {
        /* A scripted stick (--input) counts like a held direction key: the pointer yields to it. */
        if (g_ptrScriptCount > 0) pointer_script_tick(m);
        else pointer_input(&in, joy != 0 || m->joy0 != 0);
        /* Only the map's script consumes the pointer state: anywhere else it owns nothing, so
         * the next screen starts with the game's own placement until the pointer moves again. */
        if (m->frame > g_mapFrame + MAP_IDLE_FRAMES) g_ptrActive = 0;
    }
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
    m->fireDown = (u8)((in.down[KEY_FIRE] || in.mouse_left || g_ptrButton) ? 1u : 0u);
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

/* --mouse without a window: no platform to pump, but the scripted pointer still has to be applied
 * at the frame boundary for the run to mean anything (it is a dev seam, like --input). */
static void host_pointer_frame(rt_machine *m)
{
    if (!g_ptrArm) return;
    if (g_ptrScriptCount > 0) pointer_script_tick(m);
    /* A scripted click is /FIRE, the same level the platform's button is; the script's own fire
     * level is put back when the button is released, so the two compose. */
    m->fireDown = (u8)((g_ptrButton || input_fire()) ? 1u : 0u);
    if (m->joy0 != 0) g_ptrActive = 0;      /* a scripted stick wins, like a held direction key */
    if (m->frame > g_mapFrame + MAP_IDLE_FRAMES) g_ptrActive = 0;
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
    if (dumpPrefix != 0 && dumpIndex < dumpCount && m->frame >= dumpFrom)
    {
        /* The emulated frame is in the name: it is the only way to line a raster up with a
         * --state / --ram dump of the same frame. */
        char path[280];
        sprintf(path, "%s%06lu.bmp", dumpPrefix, (unsigned long)m->frame);
        dumpIndex++;
        shot_write(path);
    }
    if (!g_window) return;
    dst = plat_framebuffer();
    plat_set_palette(0, 256, pal);
    cw = w < SCREEN_W ? w : SCREEN_W;
    if (h > SCREEN_H)
    {
        /* The raster is the size of the window the copper list programs, which can be taller than
         * the 320x200 DIB (the chicken race's list asks for 216 rows). Sample it down instead of
         * leaving its bottom rows - the cockpit - out of the window. */
        for (y = 0; y < SCREEN_H; y++)
        {
            int sy = (y * h) / SCREEN_H;
            if (sy >= h) sy = h - 1;
            memcpy(dst + (u32)y * SCREEN_W, fb + (u32)sy * EMU_FB_MAX_W, (size_t)cw);
        }
    }
    else
    {
        for (y = 0; y < SCREEN_H && y < h; y++)
            memcpy(dst + (u32)y * SCREEN_W, fb + (u32)y * EMU_FB_MAX_W, (size_t)cw);
    }
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
    const char *mousePath = 0;
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
    int titleKey = -1;                     /* --titlekey: take this menu choice on the title */
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
        if (strcmp(argv[i], "--cover") == 0 && i + 1 < argc) { coverPath = argv[++i]; continue; }
        if (strcmp(argv[i], "--shot") == 0 && i + 1 < argc) { shotPath = argv[++i]; continue; }
        if (strcmp(argv[i], "--dump") == 0 && i + 1 < argc)
        {
            dumpPrefix = argv[++i];
            dumpCount = HOST_DUMP_MAX;
            if (i + 1 < argc && argv[i + 1][0] >= '0' && argv[i + 1][0] <= '9')
                dumpCount = (int)strtol(argv[++i], 0, 0);
            if (dumpCount > HOST_DUMP_MAX) dumpCount = HOST_DUMP_MAX;
            continue;
        }
        if (strcmp(argv[i], "--dumpfrom") == 0 && i + 1 < argc) { dumpFrom = (u32)strtoul(argv[++i], 0, 0); continue; }
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
        if (strcmp(argv[i], "--mouse") == 0 && i + 1 < argc) { mousePath = argv[++i]; continue; }
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
        if (strcmp(argv[i], "--titlekey") == 0 && i + 1 < argc)
        {
            /* <n>: 0 starts the game from the title, 1..6 start the debug scenes. A dev seam like
             * --call, but through the title's own menu - see src\host\title.c. */
            titleKey = (int)strtol(argv[++i], 0, 0);
            if (titleKey < 0) titleKey = 0;
            continue;
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
    if (mousePath != 0) pointer_script_load(mousePath);
    if (recordPath != 0)
    {
        g_record = fopen(recordPath, "w");
        if (g_record == 0) { printf("recomp: cannot write %s\n", recordPath); rt_shutdown(&m); return 1; }
        printf("recomp: recording input -> %s\n", recordPath);
    }
    if (dumpPrefix != 0)
        printf("recomp: dumping %d raster(s) -> %s<frame>.bmp from frame %lu\n", dumpCount, dumpPrefix,
               (unsigned long)dumpFrom);
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
    else if (mousePath != 0)
        m.on_frame = host_pointer_frame;   /* headless --mouse: only the scripted pointer */
    if (audioDump != 0)
    {
        /* Mix without a device: the run's audio is checked (and can be heard) offline. */
        rt_audio_set_gain(&m, rt_config_int("AUDIO", "sound", 10, 0, 10),
                              rt_config_int("AUDIO", "music", 10, 0, 10));
        rt_audio_render_only(&m, EMU_AUD_RATE);
        if (!rt_audio_capture(&m, audioDump)) { printf("recomp: cannot write %s\n", audioDump); rt_shutdown(&m); return 1; }
        printf("recomp: audio -> %s (%lu Hz stereo, raw s16)\n", audioDump, (unsigned long)EMU_AUD_RATE);
    }
    if (g_window || shotPath != 0 || dumpPrefix != 0) m.on_present = host_present;

    /* The title screen is part of the played game, not of a measurement: a run with an input
     * script, a state/raster dump, an injected entry or a poke is reproducing or inspecting the
     * original, which has no title, and must start where the original starts. It engages itself
     * when the program is about to play its intro (see title.c). --titlekey is the exception: it
     * asks for the title's own menu, so it arms the title even headless and with a capture. */
    host_title_key(titleKey);
    host_title_arm((g_window && inputPath == 0 && statePrefix == 0 && shotPath == 0 &&
                    dumpPrefix == 0 && g_callPc == 0 && g_pokeCount == 0) ||
                   (titleKey >= 0 && inputPath == 0 && statePrefix == 0 &&
                    g_callPc == 0 && g_pokeCount == 0));
    /* The pointer that drives the map cursor is a port feature, so it follows the same rule: it
     * runs in a played game (and for a --mouse test run), never in a measurement, where the
     * machine state has to be the original's. */
    g_ptrArm = (g_window && inputPath == 0 && statePrefix == 0 && shotPath == 0 &&
                dumpPrefix == 0 && g_callPc == 0 && g_pokeCount == 0) || mousePath != 0;
    if (g_ptrArm) rc_entryHook = host_entry;

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
    if (coverPath != 0) { rc_coverHook = cover_hit; oracle_coverHook = cover_note; }
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
        if (host_title_check(&m, pc)) continue;

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
        cover_note(pc);
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
    cover_report();
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
