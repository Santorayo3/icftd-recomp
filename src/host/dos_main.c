/* icftd.exe - "It Came from the Desert" for MS-DOS.
 *
 * The same machine as the Windows build: the runtime (src\runtime) plus the translated image
 * (src\recomp), with the vendored 68000 core behind it for the functions the translator refuses.
 * What differs is the platform layer (src\runtime\plat\dos) and that this front end IS the game -
 * no development flags, no state dumps: it opens the display, plays at 50 Hz until Esc, and
 * writes its settings file on the first start.
 *
 *   ICFTD.EXE [<image>] [--data <dir>] [--disks <dir>] [--slot <n>] [--frames <n>]
 *
 * The image defaults to DSHELL.IMG in the data folder and the game data to the executable's own
 * directory, which is what the DOS release ships in: ICFTD.EXE, DSHELL.IMG, NAMES.TXT and
 * DISK1..DISK3. Save slots are directories the engine writes its ICFTD file into, exactly as on
 * Windows: SAVES\SLOT1..SLOT4 next to the executable.
 *
 * A first start on an empty release extracts the data itself: the player's own three floppy images
 * in `disks\` next to the executable are read and written as the 8.3 tree above (DISK1..3 with
 * MS-DOS names, NAMES.TXT recording long=short, DSHELL.IMG last). Without them the game says what is
 * missing and stops. --extract is the same step on its own.
 *
 * Development flags (same machinery as src\host\main.c, used for the DOS port's own testing):
 *   --perf              where a frame's time goes, in milliseconds of the 8254 clock: the vblank
 *                        and the machine's run between two of them, and inside those the
 *                        conversion, the present copy, the blitter and the interrupt servers
 *   --perfafter <frame> with --perf: open the measurement window at that frame, so a settled scene
 *                        (the hospital room, say) is measured without the startup, the loads and
 *                        the menus. Every counter starts at that boundary, and the window ends at
 *                        the last complete frame - one unit covers everything the report says
 *   --blitstats         with --perf: split the blitter's pixel-loop time by class of blit (minterm,
 *                        shifts, channels, words x rows, direction, overlap), largest first
 *   --ticklog           oracle_tick's `tick N in|out` lines, to compare pacing with the host
 *   --refbus            charge the bus the first, division-per-clock way: the reference walker,
 *                        which any scheduler change must reproduce byte for byte (slots.h)
 *   --refwait           run the translated flag waits instead of the native loop in
 *                        src\recomp\patches\wait.c - the reference half of that seam, which the
 *                        native wait must reproduce byte for byte (--dump/--state diff)
 *   --genericblit       run every blit through the general row engine: the reference half of the
 *                        per-blit specialization, which the planned engines must reproduce
 *   --tracewin a,b      `t <insns> <budget> <pc>` per instruction in a window (both front ends)
 *   --dump <frame> <f>  the whole RAM image at that vblank, to diff against the Windows build
 *   --call <pc>[:<frame>[:<arg>[:<retpc>]]]  enter one engine routine once (e.g. 0x1442A = save)
 *   --mouse <file>      "<frame> <x> <y> [<button>]" pointer positions the seams read, headless
 *   --input <file>      "<frame> <fire> <joy0>" scripted stick and fire, as src\host\main.c
 *   --shot <bmp>        the composed picture (OSD, pointer, crosshair) as a 24-bit BMP
 *   --hoverlog          the text-menu lines recorded and what the pointer picks
 *   --titlekey <n>       take a title screen menu choice (0 the game, 1..7 the minigames, 8..10
 *                        the endings, 11/12 the menu's Load Game / New Game)
 *   --extract            extract the game data from `disks\` into the data folder and exit
 *   --esc <frame>        press Escape at that frame (the restart-to-title seam, like --call)
 *   --cheat <frame>      press left Ctrl+W at that frame (the minigame cheat's seam)
 *   --timefreeze <f>[,<f>...]  press left Ctrl+T at each of those frames (the clock freeze's seam)
 *   --srcdiff           per presented frame: how many of the window's source bytes changed, how
 *                        many the scroll exposed and how many are unchanged (the scroll cache's
 *                        measurement; see docs\next-session.md)
 *   --trace             dispatch/ring diagnostics
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "audio.h"
#include "assets.h"
#include "config.h"
#include "blitter.h"
#include "display.h"
#include "machine.h"
#include "platform.h"
#include "m68k.h"
/* Two headers are called cpu.h: the 68000 front end's and the translated layer's. */
#include "../oracle/cpu.h"
#include "../oracle/input.h"
#include "../recomp/cpu.h"
#include "../recomp/fn_table.h"
#include "title.h"
#include "cheat.h"
#include "time_freeze.h"
#include "hospital_camera.h"
#include "save_button.h"
#include "save_ui.h"
#include "seams.h"

#define DOS_IMAGE      "DSHELL.IMG"
#define MAX_SAVE_SLOTS 10

/* Paula is mixed at this rate on DOS, half the Amiga build's 44.1 kHz (EMU_AUD_RATE): the mixer is
 * emulated code here, so every mixed frame costs the modelled machine time. The card is programmed
 * with the same rate, so nothing resamples between the mixer and the device. */
#define DOS_AUD_RATE   22050u

static cpu_t *g_cpu;
static int    g_trace;          /* --trace: the dispatch and CIA path, for a DOS-only defect */
static const char *g_dumpPath;  /* --dump <frame> <file>: the RAM image at that vblank */
static const char *g_shotPath;  /* --shot <bmp>: the composed picture, for the port's surfaces */
static int    g_noAudio;        /* --noaudio: leave the Sound Blaster alone */
static int    g_sbTest;         /* --sbtest: diagnose the audio device and exit */
u32    g_dumpFrame;
static int    g_dumped;
static u32    g_frameLimit;     /* --frames: stop at the end of this vblank */

/* --perf: where a frame's time goes, in plat_pit_now() counts (plat_pit_per_second() says how many
 * make a second). The emulated work the runtime owns - the conversion, the blitter's pixel loop and
 * the interrupt servers, which run on the interpreter - is accumulated on the machine
 * (rt_machine::perf); what lives here is the frame as a whole, which only the front end can see.
 *
 * All of it is one measurement window: a run of complete frames. `perf_open` zeroes every counter
 * at one frame boundary and takes the clock and the CMOS clock there, and `frame_measure_in`
 * commits a frame only once its vblank and the run after it have both been measured - so the vblank
 * and machine halves add up to the frames counted, and the conversion/present/blitter/handler
 * figures cover exactly those frames. Reporting does not read a clock at all: it uses what the
 * window captured, before shutdown. */
static int    g_perf;                   /* --perf requested                               */
static int    g_blitStats;              /* --blitstats: split the pixel loop by blit class */
static int    g_genericBlit;            /* --genericblit: the specialization's reference path */
static u32    g_perfFrom;               /* --perfafter: open the window at this frame     */
static int    g_perfOpen;               /* the window is open                             */
static u32    g_perfFirstFrame;         /* the emulated frame it opened at, for the header */
static u32    g_perfFrames;             /* complete frames measured                       */
static u32    g_perfVblank, g_perfMachine;   /* the two halves, which add up to the frame  */
static u32    g_perfPresent, g_perfPresented, g_perfWait;   /* front-end sums in the window  */
static u32    g_perfFrameIn;            /* clock at the top of the vblank being measured  */
static u32    g_perfFrameOut;           /* ... at its end, where the machine's run starts */
static int    g_perfHaveOut;            /* the vblank above is measured, waiting for its run */
static u32    g_perfRtcIn, g_perfRtcOut;     /* the CMOS clock at the same two boundaries   */
static long   g_perfInsnsIn;            /* instructions at the window's start             */
static u32    g_perfLastFrame;          /* the emulated frame of the last boundary seen   */
static plat_clock_info g_perfClockIn;   /* the platform clock's state at its start        */
static u32    g_escFrame;               /* --esc <frame>: press Escape at that frame */
static int    g_escDone;
static u32    g_cheatFrame;             /* --cheat <frame>: press left Ctrl+W at that frame */
static int    g_cheatDone;
/* --timefreeze <frame>[,<frame>...]: press left Ctrl+T at each of those frames (the clock
 * freeze's seam, like --cheat). Two frames freeze and unfreeze again. */
#define DOS_TIME_FREEZE_MAX 8
static u32    g_freezeAt[DOS_TIME_FREEZE_MAX];
static int    g_freezeCount;
static int    g_freezePos;

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

static void note_state(rt_machine *m)
{
    u32 r[18];
    char text[256];

    if (!g_crashLog) return;
    oracle_regs_get(r);       /* the core holds the state: after gather in translated code, always
                               * in the interpreter, which is why no cpu_t is needed here */
    sprintf(text, "frame %lu  insns %ld  pc %06lX\nD0 %08lX  D1 %08lX  A0 %08lX  A6 %08lX  "
                  "A7 %08lX  SR %04lX  cpu pc %08lX  presents %lu\n",
            (unsigned long)m->frame, (long)m->insns, (unsigned long)m->pc,
            (unsigned long)r[REGS_D + 0], (unsigned long)r[REGS_D + 1], (unsigned long)r[REGS_A + 0],
            (unsigned long)r[REGS_A + 6], (unsigned long)r[REGS_A + 7], (unsigned long)r[REGS_SR],
            (unsigned long)r[REGS_PC], (unsigned long)m->gfx.frames);
    plat_crash_state(text);
}

/* The fight's aiming crosshair is placed at the frame boundary, before the vblank composes the
 * frame (defined with the pointer's seams below), and so is the loading line (defined with the
 * loading-line seam below). */
static void crosshair_present(rt_machine *m);
static void loading_frame(rt_machine *m);

/* Opens the measurement window at a frame boundary. Every counter the report divides by starts
 * here, at the same instant, so "per frame" means the same frames in every line. */
static void perf_open(rt_machine *m, u32 now)
{
    m->perfOn = 1;
    memset(&m->perf, 0, sizeof m->perf);
    rt_blit_stats_reset(m);
    g_perfFrames = g_perfVblank = g_perfMachine = 0;
    g_perfPresent = g_perfPresented = g_perfWait = 0;
    g_perfFrameIn = g_perfFrameOut = now;
    g_perfHaveOut = 0;
    g_perfRtcIn = g_perfRtcOut = plat_rtc_elapsed_ms();
    g_perfInsnsIn = m->insns;
    g_perfFirstFrame = m->frame;
    g_perfLastFrame = m->frame;
    plat_clock_report(&g_perfClockIn);
    g_perfOpen = 1;
}

/* The two halves of a frame boundary. `in` closes the machine's run that began at the previous
 * `out` and commits that frame (so a frame is counted only when both halves of it are measured);
 * `out` marks where the vblank ended and the machine's run starts. Both are no-ops unless --perf
 * asked for them, and neither runs the emulated machine: the register file is the caller's
 * business (see frame_vblank). */
static void frame_measure_in(rt_machine *m)
{
    u32 now;

    if (!g_perf) return;
    now = plat_pit_now();
    if (!g_perfOpen)
    {
        if (m->frame < g_perfFrom) return;      /* the settled scene has not been reached yet */
        perf_open(m, now);
        return;
    }
    if (g_perfHaveOut && m->frame == g_perfLastFrame + 1u)
    {
        g_perfMachine += now - g_perfFrameOut;
        g_perfVblank += g_perfFrameOut - g_perfFrameIn;
        g_perfFrames++;
        g_perfRtcOut = plat_rtc_elapsed_ms();   /* the window's end, at the same boundary */
    }
    /* Frames that ran without this boundary (the title screen's own tick loop, a restart) are not
     * part of the window: their span is dropped rather than attributed to a vblank that never
     * happened, and the measurement continues from here. */
    g_perfFrameIn = now;
    g_perfHaveOut = 0;
    g_perfLastFrame = m->frame;
}

static void frame_measure_out(void)
{
    if (!g_perfOpen) return;
    g_perfFrameOut = plat_pit_now();
    g_perfHaveOut = 1;
}

/* One vertical blank, whichever core is running: the port's per-frame seams, the game's own
 * interrupt servers, and the measurement on either side of them. It takes no cpu_t on purpose - the
 * translated path scatters its mirror into the core before the call and gathers it back after, and
 * the interpreter is already the core, so neither path can hand this stale registers. */
static void frame_vblank(rt_machine *m)
{
    frame_measure_in(m);
    /* A frozen clock: the engine's own pause is held and its date and time put back before the
     * vblank's interrupt servers tick it (src\host\time_freeze.c). Inert unless frozen. */
    while (g_freezePos < g_freezeCount && m->frame >= g_freezeAt[g_freezePos])
    {
        g_freezePos++;
        printf("icftd: Ctrl+T at frame %lu\n", (unsigned long)m->frame);
        host_time_freeze_force(m);
    }
    host_time_freeze_frame(m);
    loading_frame(m);                 /* arms the OSD line while a load runs, before the present */
    crosshair_present(m);             /* composed by the present inside oracle_tick */
    oracle_tick(m);
    dump_ram(m);
    note_state(m);
    /* A frame limit is only exact here: the game spends long stretched inside one translated
     * function, so checking it between rc_call()s would overshoot by hundreds of frames. */
    if (g_frameLimit != 0 && m->frame >= g_frameLimit) m->stop = 1;
    if (g_trace)
    {
        u32 r[18];

        oracle_regs_get(r);
        printf("  frame %lu insns %ld pc %06lX\n", (unsigned long)m->frame, (long)m->insns,
               (unsigned long)r[REGS_PC]);
        if (m->frame >= 6 && m->frame <= 12)
        {
            printf("ringdump frame %lu\n", (unsigned long)m->frame);
            oracle_ring_print(m);
        }
    }
    frame_measure_out();
}

/* The vertical blank, reached from inside translated code: the register file goes to the core, the
 * game's own servers run there, and what they leave comes back. */
static void dos_frame(cpu_t *c, rt_machine *m)
{
    scatter(c, m);
    frame_vblank(m);
    gather(c, m);
}

/* The same vblank on the interpreter, which has no mirror to scatter: the core already holds the
 * program's registers, and it must not be overwritten from the translated mirror (which is stale
 * there). This is the other half of "both execution paths count their frames": before it, a frame
 * that ran interpreted skipped the hook and its measurement entirely. */
static void interp_frame(rt_machine *m)
{
    frame_vblank(m);
}

/* A CIA timer expiry (the engine's music driver) can land inside translated code too. It runs on
 * the interpreter, and its cost is timed where it runs (oracle_run_icr, src\oracle\cpu.c). */
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
static u32 g_callPc, g_callFrame, g_callArg, g_callRet;
static int g_called;

/* The title injects calls, and pops their arguments, on the machine's register file while no
 * translated code is running; dos_cia scatters the mirror above into the core, so it must be
 * brought up to date or the handler's frame would undo those writes. */
void host_regs_sync(rt_machine *m)
{
    if (g_cpu != 0) gather(g_cpu, m);
}

/* --- the pointer, and the screens it drives (port features, src\host\main.c) ------------------
 * The original is joystick-only. The DOS platform reports the mouse through INT 33h, in mode 13h
 * pixels (plat_dos.c); this front end turns that into the same g_ptrKnown / g_ptrActive /
 * g_hoverOwn state the Windows seams use and drives the pointer once per frame.
 *
 * Coordinates: the title menu draws straight into the 320x200 VGA framebuffer, so it takes the raw
 * position. The game seams work in the runtime picture, which dos_present crops into the mode (the
 * middle 320x200 for a larger picture, top-left for a smaller one), so the platform's position is
 * mapped the other way here; the overlay is then presented with the arrow's tip under the physical
 * pointer.
 *
 * The seams and their attachment points are the Windows front end's (src\host\main.c):
 *
 *   FUN_00003b1e  the situation map's script: the cursor is pinned under the pointer, the picture
 *                 scrolls when it is pushed past the travel window, and the SAVE GAME mark holds
 *                 the window still while the pointer is over it;
 *   FUN_00005eac / FUN_00005824  a location view draw/update, so the arrow shows on room screens;
 *   FUN_00004d76 / FUN_0001d1da  a text menu's line and its flip: the line under the pointer
 *                 becomes the menu's own selection;
 *   FUN_00005fbe  the phone book's update: the arrow is pinned under the pointer;
 *   FUN_00007934 / FUN_000086a0 / FUN_0000b97c  the two aiming scenes: the pointer is the gun;
 *   FUN_0000ca1a / FUN_0000cf24  the add-on's "Fight Ant Head", the same gun, the same aim words
 *                 (0 in the 1989 build - the scene is the add-on's own).
 *
 * Nothing here runs in a measurement: the hook is installed only in a played run or a --mouse test
 * run (g_portArm), and the arrow and the crosshair are drawn on top of the composed picture, never
 * into the machine's memory.
 */
#define MAP_CUR_MIN    0x19        /* the map's travel window, from FUN_00003B1E          */
#define MAP_CUR_MAXX   0x136
#define MAP_HOT_X      0x11        /* the cursor sprite's hot spot: its tip               */
#define MAP_HOT_Y      0x12
#define MAP_SCROLL     6           /* picture pixels per update at the window's edge      */
#define MAP_ORG_MAXX   0x13F       /* FUN_000035D2's x clamp (the same in both builds)    */
/* The map's script runs every few vblanks, so "the map is not on screen" cannot be decided on one
 * frame: this many frames without a script call means the screen is gone. */
#define MAP_IDLE_FRAMES 30

/* The room screens' pointer: the arrow is shown on a room, and the menu line under it becomes the
 * menu's selection at the flip. The five code points are rows of the seam table (src\host\seams.c);
 * the stack offsets and the menus' own locals are the same in both builds. */

/* The phone book's cursor (FUN_00005fbe called from the phone's own loop): the two words are
 * A5-relative locals of the scene. */
#define PHONE_CUR_X      0x0Eu         /* word, A5-0x0e: the arrow's x                  */
#define PHONE_CUR_Y      0x10u         /* word, A5-0x10: ... and y                      */
#define PHONE_MIN_X      0x40          /* the scene's own clamps                        */
#define PHONE_MAX_X      0xAA
#define PHONE_MIN_Y      0x97
#define PHONE_MAX_Y      0xCE

/* The aiming scenes: the fight's shot point is the aim 0x1b left and 0x3a up, and the fire
 * game's hand travels inside x 0x28..0x12c, y 0xa5..0xf0. FUN_00007934, the aim words and the two
 * aim routines are rows of the seam table; the rectangle is the fire game's own code and is the
 * same in both builds (the add-on has no fire game, so its seams are 0 and never armed).
 * The add-on's "Fight Ant Head" tests its shots at the fight's offset too, on the same aim words,
 * so it shares ANT_SHOT_DX/DY and the crosshair (its two seams are 0 in the 1989 build). */
#define ANT_SHOT_DX    (-0x1B)     /* where FUN_000086a0 tests a shot, relative to the aim      */
#define ANT_SHOT_DY    (-0x3A)
#define ANT_IDLE_FRAMES 10
#define FIRE_MIN_X     0x0028      /* the fire game's travel rectangle                         */
#define FIRE_MAX_X     0x012C
#define FIRE_MIN_Y     0x00A5
#define FIRE_MAX_Y     0x00F0
#define FIRE_IDLE_FRAMES 10

#define HOST_LINE_MAX 24
typedef struct
{
    s16 x0, x1, top, h;            /* the line's screen rectangle */
    s16 entry;                     /* the menu entry that drew it  */
    u8  menu;                      /* 1 = action list, 2 = Look ... */
} host_text_line;

static int  g_portArm;             /* the port's per-screen seams may run (a played game, or
                                    * --mouse): the pointer, the crosshair, the aim */
static int  g_ptrKnown;            /* a pointer position is available */
static int  g_ptrActive;           /* the pointer owns the map cursor */
static int  g_hoverOwn;            /* the pointer owns the menu line under it */
static s16  g_ptrX, g_ptrY;        /* picture coordinates */

/* --mouse <file>: "<frame> <x> <y> [<button>]" per line, the pointer's positions and left-button
 * state as the platform would report them (mode 13h pixels, like INT 33h). A dev seam like
 * --cheat: the same state, so the feature can be measured headless. */
#define HOST_MOUSE_MAX 256
static struct { u32 frame; s16 x, y; u8 button; } g_ptrScript[HOST_MOUSE_MAX];
static int g_ptrScriptCount, g_ptrScriptPos;
static s16 g_scriptX, g_scriptY;   /* the script's last position, in platform pixels */
static u8  g_ptrButton;            /* the script's left button, held until it changes */
static u8  g_ptrButtonPrev;        /* ... the previous frame, for its press edge */
static const char *g_mousePath;    /* --mouse <file> */
static const char *g_inputPath;    /* --input <file>: a scripted stick and fire */
static int g_hoverLog;             /* --hoverlog: the lines recorded and what the pointer picks */

static u32 g_mapFrame;             /* last frame the map's script ran */
static u32 g_roomFrame;            /* last frame a location view was drawn or updated */
static u32 g_menuFrame;            /* last frame a text menu flipped */
static u32 g_phoneFrame;           /* last frame the phone's cursor loop presented */
static u32 g_antFrame;             /* last frame the giant-ant fight updated */
static u32 g_antHeadFrame;         /* last frame "Fight Ant Head" updated (the add-on only) */
static u32 g_fireFrame;            /* last frame the fire game's extinguisher moved */
static int g_aimOwn;               /* the pointer owns the aim of the scene that is up */
static host_text_line g_line[HOST_LINE_MAX];
static int g_lineCount;
static int s_markHover;            /* the pointer is over the SAVE GAME mark */
static int s_ptrShown;             /* --hoverlog: the last reported pointer visibility */
static s32 s_mapLogX = -1, s_mapLogY = -1;  /* --hoverlog: the cursor last reported */

/* The save-slot picker (src\host\save_ui.c), the Windows front end's state machine. */
static save_ui g_saveUi;
static int s_markClick;            /* a click on the mark waits for the map's own tail */
static u32 s_markClickFrame;       /* ... the frame it was reported in */
static int s_saveCommit;           /* a slot was chosen: the map's save path runs next */
static int s_clickHeld;            /* the click that closed the picker is still down */
static int s_fakeView;             /* the map's own words were replaced for a click */
static s32 s_trueOrgX, s_trueOrgY; /* ... the picture offset before that */

static void crosshair_present(rt_machine *m);
static int  aim_live(rt_machine *m);

/* The platform's mode 13h position mapped onto the presented picture, clamped to it. */
static void ptr_set(int x, int y)
{
    int w = rt_gfx_width(), h = rt_gfx_height();

    if (w <= 0) w = SCREEN_W;
    if (h <= 0) h = SCREEN_H;
    if (x < 0) x = 0; else if (x >= SCREEN_W) x = SCREEN_W - 1;
    if (y < 0) y = 0; else if (y >= SCREEN_H) y = SCREEN_H - 1;
    /* The inverse of dos_present's crop: mode 13h pixel (0,0) is the picture's top left corner of
     * the part on screen, (w-320)/2 in and h-200 down. */
    if (w > SCREEN_W) x += (w - SCREEN_W) / 2;
    if (h > SCREEN_H) y += h - SCREEN_H;
    if (x >= w) x = w - 1;
    if (y >= h) y = h - 1;
    g_ptrX = (s16)x;
    g_ptrY = (s16)y;
}

static void pointer_script_load(const char *path)
{
    FILE *f = fopen(path, "r");
    char line[160];

    if (f == 0) { printf("icftd: cannot read %s\n", path); return; }
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
    printf("icftd: pointer script %s, %d position(s)\n", path, g_ptrScriptCount);
}

/* Applies the scripted positions that are due - the script holds the last one, like a pointer that
 * stays where it was put (and the button with it). Returns how many were applied, i.e. whether the
 * pointer moved in this frame. */
static int pointer_script_tick(rt_machine *m)
{
    int applied = 0;

    while (g_ptrScriptPos < g_ptrScriptCount && g_ptrScript[g_ptrScriptPos].frame <= m->frame)
    {
        g_scriptX = g_ptrScript[g_ptrScriptPos].x;
        g_scriptY = g_ptrScript[g_ptrScriptPos].y;
        g_ptrButton = g_ptrScript[g_ptrScriptPos].button;
        ptr_set(g_scriptX, g_scriptY);
        g_ptrKnown = 1;
        g_ptrActive = 1;
        g_hoverOwn = 1;
        g_ptrScriptPos++;
        applied++;
        if (g_hoverLog)
            printf("icftd: pointer script %d,%d button %d -> picture %d,%d (frame %lu)\n",
                   (int)g_scriptX, (int)g_scriptY, (int)g_ptrButton, (int)g_ptrX, (int)g_ptrY,
                   (unsigned long)m->frame);
    }
    return applied;
}

/* The keyboard wins while a direction is held, the pointer wins when it moves - the rule the
 * Windows front end's pointer_input follows. A pointer that has not moved since the map opened
 * leaves the cursor where the game put it. */
static void pointer_input(const input_state *in, int stickHeld)
{
    if (!in->mouse_present) { g_ptrKnown = 0; g_ptrActive = 0; g_hoverOwn = 0; return; }
    if (stickHeld) { g_ptrActive = 0; g_hoverOwn = 0; }
    else if (in->mouse_moved)
    {
        ptr_set(in->mouse_x, in->mouse_y);
        g_ptrKnown = 1;                /* the position is only trusted once it was reported */
        g_ptrActive = 1;
        g_hoverOwn = 1;                /* a menu line under it is selected from now on */
    }
}

/* The title's fifth button: 0 here, because this front end still boots only the 1989 game - it does
 * not link the add-on's table (docs\antheads.md, Phase 8). A data folder that holds the add-on's
 * tree therefore keeps today's four buttons, instead of one that could not switch anything. */
int host_title_addon(rt_machine *m)
{
    (void)m;
    return 0;
}

/* The title menu runs its own loop, so the frame hooks do not run while it is up: a --mouse
 * script reaches its buttons through this. A played game has a real pointer - the platform's own
 * report arrives through plat_pump - so the menu's copy is left alone. */
int host_title_pointer(rt_machine *m, input_state *in)
{
    if (g_ptrScriptCount == 0) return 0;
    pointer_script_tick(m);
    if (!g_ptrKnown) {
        in->mouse_present = 0;                  /* the script's first position is not due yet */
        return 1;
    }
    in->mouse_present = 1;
    in->mouse_x = g_scriptX;                    /* the title is the raw 320x200 framebuffer */
    in->mouse_y = g_scriptY;
    in->mouse_left = g_ptrButton ? 1 : 0;
    in->mouse_left_pressed = (u8)(g_ptrButton && !g_ptrButtonPrev);
    in->mouse_moved = 0;
    g_ptrButtonPrev = g_ptrButton;
    return 1;
}

/* Whether the pointer is over the screen rectangle the map's SAVE GAME mark was drawn in. */
static int save_mark_under_pointer(void)
{
    s32 mx, my, mw, mh;

    if (!host_save_button_rect(&mx, &my, &mw, &mh)) return 0;
    return g_ptrX >= mx && g_ptrX < mx + mw && g_ptrY >= my && g_ptrY < my + mh;
}

/* The map's script runs every few frames, so a click reported at the frame boundary has to stay
 * valid until the next update; after that it was either consumed or was not on the mark. */
#define SAVE_CLICK_FRAMES 8

static int save_click_pending(const rt_machine *m)
{
    return s_markClick && m->frame - s_markClickFrame <= SAVE_CLICK_FRAMES;
}

/* While the picker is up (or about to run the save) the map owns no input: no stick, no fire. */
static int save_owns_input(const rt_machine *m)
{
    return g_saveUi.open || s_saveCommit || s_clickHeld || save_click_pending(m);
}

/* Records a click that landed on the mark. The picker itself is opened at FUN_0001061C's entry
 * (save_mark_click), where the map has drawn its update and is about to test its own click. */
static void save_click_note(rt_machine *m)
{
    if (save_owns_input(m)) return;
    if (!save_mark_under_pointer()) return;
    s_markClick = 1;
    s_markClickFrame = m->frame;
}

/* The map's own test (FUN_00003B1E, 0x40dc) looks for the cursor at the mark's *map* position -
 * "cursor - offset inside 0x3c x 0x29" with the fire held - because that is where the original drew
 * it. The port's mark is on the screen, so the seam presents the view the original had there for
 * the one update that is left: the picture's offset at 0 and the cursor at the map's top left. It
 * runs at FUN_0001061C's entry - after this update's picture, arrow and nodes are drawn, right
 * before the test - so none of it reaches the screen; the engine then takes its own save path.
 * If a queued panel opens in the tail instead and the test is skipped, the offset is put back at
 * the next map update, before that one is drawn. */
static void save_fake_view(rt_machine *m)
{
    s_trueOrgX = (s32)rt_read32(&m->mem, RC_ADDR(MAP_ORG_X));
    s_trueOrgY = (s32)rt_read32(&m->mem, RC_ADDR(MAP_ORG_Y));
    rt_write32(&m->mem, RC_ADDR(MAP_ORG_X), 0);
    rt_write32(&m->mem, RC_ADDR(MAP_ORG_Y), 0);
    rt_write32(&m->mem, RC_ADDR(MAP_CUR_X), MAP_CUR_MIN);
    rt_write32(&m->mem, RC_ADDR(MAP_CUR_Y), MAP_CUR_MIN);
    s_fakeView = 1;
}

/* FUN_0001061C's entry: the picker opens on a click, and a chosen slot runs the map's save path
 * exactly as the mark's own click did. */
static void save_mark_click(rt_machine *m)
{
    if (s_saveCommit)
    {
        s_saveCommit = 0;
        rt_write16(&m->mem, RC_ADDR(MAP_FIRE_HELD), 1);   /* the test's fire, for this update */
        save_fake_view(m);
        printf("save: writing slot %d (frame %lu)\n", m->saveSlot, (unsigned long)m->frame);
        return;
    }
    if (g_saveUi.open) return;
    if (!save_click_pending(m)) { s_markClick = 0; return; }
    s_markClick = 0;
    if (!s_markHover) return;
    if ((s16)rt_read16(&m->mem, RC_ADDR(MAP_PANEL)) != 0) return;

    /* The map's own test must not see the click that opened the picker. */
    rt_write16(&m->mem, RC_ADDR(MAP_FIRE_HELD), 0);
    save_ui_start(&g_saveUi, m);
    printf("save: slot picker opened (%d slot(s)) at frame %lu\n", SAVE_UI_SLOTS,
           (unsigned long)m->frame);
}

/* Runs at FUN_00003B1E's entry, once per map update: the pointer pins the cursor, and the picture
 * scrolls while it is pushed past the travel window. The scrolling is the seam's own: the engine's
 * accumulator is reset by every vblank between two map updates, so with the pointer it can only
 * ever add +/-1 per update. */
static void map_pointer(rt_machine *m)
{
    s32 x, y, maxY, ox, oy, sx = 0, sy = 0;

    /* The click's view was replaced and the map is still running: put the picture back before this
     * update draws it (a new map session starts with the game's own placement instead). */
    if (s_fakeView)
    {
        if (m->frame - g_mapFrame <= MAP_IDLE_FRAMES)
        {
            rt_write32(&m->mem, RC_ADDR(MAP_ORG_X), (u32)s_trueOrgX);
            rt_write32(&m->mem, RC_ADDR(MAP_ORG_Y), (u32)s_trueOrgY);
        }
        s_fakeView = 0;
    }
    g_mapFrame = m->frame;
    if (!save_click_pending(m)) s_markClick = 0;

    /* The picker (or the click that opens it, or the save it chose) holds the map still: the
     * stick is idle and the fire is released for this update, so neither the cursor, the picture
     * nor a destination can move or be picked. */
    if (save_owns_input(m))
    {
        rt_write16(&m->mem, RC_ADDR(MAP_AXIS_X), 0);
        rt_write16(&m->mem, RC_ADDR(MAP_AXIS_Y), 0);
        rt_write16(&m->mem, RC_ADDR(MAP_FIRE_HELD), 0);
        s_markHover = save_click_pending(m) ? save_mark_under_pointer() : 0;
        return;
    }
    if (!g_ptrKnown || !g_ptrActive) { s_markHover = 0; return; }

    maxY = (s16)rt_read16(&m->mem, RC_ADDR(MAP_MAX_Y));
    x = (s32)g_ptrX + MAP_HOT_X;
    y = (s32)g_ptrY + MAP_HOT_Y;
    s_markHover = save_mark_under_pointer();
    if (s_markHover)
    {
        /* The SAVE GAME mark owns the pointer while it is over it: pushing past the travel window
         * must not scroll the picture and carry the mark away from the pointer. */
        if (x < MAP_CUR_MIN) x = MAP_CUR_MIN; else if (x > MAP_CUR_MAXX) x = MAP_CUR_MAXX;
        if (y < MAP_CUR_MIN) y = MAP_CUR_MIN; else if (y > maxY) y = maxY;
    }
    else
    {
        if (x < MAP_CUR_MIN)       { sx = -MAP_SCROLL; x = MAP_CUR_MIN; }
        else if (x > MAP_CUR_MAXX) { sx =  MAP_SCROLL; x = MAP_CUR_MAXX; }
        if (y < MAP_CUR_MIN)       { sy = -MAP_SCROLL; y = MAP_CUR_MIN; }
        else if (y > maxY)         { sy =  MAP_SCROLL; y = maxY; }
    }

    rt_write16(&m->mem, RC_ADDR(MAP_AXIS_X), 0);
    rt_write16(&m->mem, RC_ADDR(MAP_AXIS_Y), 0);
    rt_write32(&m->mem, RC_ADDR(MAP_CUR_X), (u32)x);
    rt_write32(&m->mem, RC_ADDR(MAP_CUR_Y), (u32)y);
    if (g_hoverLog && (x != s_mapLogX || y != s_mapLogY))
    {
        s_mapLogX = x;
        s_mapLogY = y;
        printf("icftd: map pointer %d,%d -> cursor %ld,%ld (frame %lu)\n", (int)g_ptrX,
               (int)g_ptrY, (long)x, (long)y, (unsigned long)m->frame);
    }

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

/* The phone book's loop presents through FUN_00005fbe: the pointer pins the arrow's stack local,
 * so the next iteration clamps, draws and reads the pointer's row. */
static void phone_pointer(cpu_t *c, rt_machine *m)
{
    s32 x, y;

    if (rt_read32(&m->mem, c->a[7]) != RC_ADDR(PHONE_UPDATE_RET)) return;
    g_phoneFrame = m->frame;
    if (!g_ptrKnown || !g_ptrActive) return;

    x = (s32)g_ptrX + MAP_HOT_X;
    y = (s32)g_ptrY + MAP_HOT_Y;
    if (x < PHONE_MIN_X) x = PHONE_MIN_X; else if (x > PHONE_MAX_X) x = PHONE_MAX_X;
    if (y < PHONE_MIN_Y) y = PHONE_MIN_Y; else if (y > PHONE_MAX_Y) y = PHONE_MAX_Y;

    rt_write16(&m->mem, RC_ADDR(MAP_AXIS_X), 0);
    rt_write16(&m->mem, RC_ADDR(MAP_AXIS_Y), 0);
    rt_write16(&m->mem, c->a[5] - PHONE_CUR_X, (u16)x);
    rt_write16(&m->mem, c->a[5] - PHONE_CUR_Y, (u16)y);
}

/* One line of a text menu was queued for drawing: remember where it is and which entry it is. */
static void line_record(cpu_t *c, rt_machine *m)
{
    u32 sp = c->a[7], frame = c->a[5], ret, caller, text, count, rp, font;
    s16 menu = 0, entry = 0, x, y, h = 7, base = 6;
    s32 w;

    if (rt_read32(&m->mem, sp) != RC_ADDR(TEXT_LINE_RET)) return;   /* not FUN_00004f0a's draw */
    ret = rt_read32(&m->mem, frame + 4);        /* where FUN_00004f0a was called from */
    caller = rt_read32(&m->mem, frame);         /* ... and the menu's own frame */
    if (ret >= RC_ADDR(MENU_ACTION_PC) && ret < RC_ADDR(MENU_ACTION_END))
    {
        menu = 1;
        entry = (s16)rt_read16(&m->mem, caller - 2);   /* local_6, the entry loop counter */
    }
    else if (ret >= RC_ADDR(MENU_LOOK_PC) && ret < RC_ADDR(MENU_LOOK_END))
    {
        menu = 2;
        entry = (s16)rt_read16(&m->mem, caller - 8);
    }
    else return;                                /* narration, panel text: not a chooser */

    text  = rt_read32(&m->mem, sp + 4);
    x     = (s16)rt_read16(&m->mem, sp + 8);
    y     = (s16)rt_read16(&m->mem, sp + 10);
    count = rt_read32(&m->mem, sp + 14);
    rp    = rt_read32(&m->mem, RC_ADDR(TEXT_RASTPORT));
    font  = rp != 0 ? rt_read32(&m->mem, rp + EMU_RP_FONT) : 0;
    if (font != 0)
    {
        h = (s16)rt_read16(&m->mem, font + EMU_TF_Y_SIZE);
        base = (s16)rt_read16(&m->mem, font + EMU_TF_BASELINE);
    }
    if (h <= 0) h = 7;
    w = rt_gfx_text_length(m, rp, text, count);
    if (g_lineCount < HOST_LINE_MAX)
    {
        g_line[g_lineCount].menu = (u8)menu;
        g_line[g_lineCount].entry = entry;
        g_line[g_lineCount].x0 = x;
        g_line[g_lineCount].x1 = (s16)(x + w);
        g_line[g_lineCount].top = (s16)(y - base);
        g_line[g_lineCount].h = h;
        g_lineCount++;
    }
    if (g_hoverLog)
        printf("icftd: line menu %d entry %d at %d..%d x %d..%d (frame %lu)\n", (int)menu,
               (int)entry, (int)x, (int)(x + w), (int)(y - base), (int)(y - base + h),
               (unsigned long)m->frame);
}

/* A menu draw pass ends here: the pointer's line, if it is over one, becomes the selection. */
static void menu_flip(cpu_t *c, rt_machine *m)
{
    u32 ret = rt_read32(&m->mem, c->a[7]);
    int menu = ret == RC_ADDR(MENU_ACTION_FLIP) ? 1
             : ret == RC_ADDR(MENU_LOOK_FLIP) ? 2 : 0;
    int i, hover = -1;

    if (menu != 0)
    {
        g_menuFrame = m->frame;
        if (g_hoverOwn && g_ptrKnown &&
            (g_mapFrame == 0 || m->frame - g_mapFrame > MAP_IDLE_FRAMES))
        {
            for (i = 0; i < g_lineCount; i++)
                if (g_line[i].menu == (u8)menu &&
                    g_ptrX >= g_line[i].x0 - 1 && g_ptrX <= g_line[i].x1 + 1 &&
                    g_ptrY >= g_line[i].top && g_ptrY < g_line[i].top + g_line[i].h)
                    hover = i;
            if (hover >= 0)
            {
                u32 at = c->a[5] - (menu == 1 ? 6u : 4u);
                s16 was = (s16)rt_read16(&m->mem, at);
                rt_write16(&m->mem, at, (u16)g_line[hover].entry);
                if (g_hoverLog && was != g_line[hover].entry)
                    printf("icftd: hover %d,%d -> entry %d of menu %d (was %d) at frame %lu\n",
                           (int)g_ptrX, (int)g_ptrY, (int)g_line[hover].entry, menu, (int)was,
                           (unsigned long)m->frame);
            }
        }
    }
    g_lineCount = 0;
}

/* The pointer owns the aim only while one of the scenes is running, and only after it moved
 * while that scene was up. */
static int crosshair_live(rt_machine *m)
{
    return (g_antFrame != 0 && m->frame - g_antFrame <= ANT_IDLE_FRAMES) ||
           (g_antHeadFrame != 0 && m->frame - g_antHeadFrame <= ANT_IDLE_FRAMES);
}

static int aim_live(rt_machine *m)
{
    return crosshair_live(m) ||
           (g_fireFrame != 0 && m->frame - g_fireFrame <= FIRE_IDLE_FRAMES);
}

/* The pointer may take the gun, a held direction takes it back. */
static void aim_input(rt_machine *m, int moved, int stickHeld)
{
    int was = g_aimOwn;

    if (!aim_live(m)) { g_aimOwn = 0; return; }
    if (moved) g_aimOwn = 1;
    if (stickHeld) g_aimOwn = 0;
    if (g_hoverLog && was != g_aimOwn)
        printf("icftd: %s aims at frame %lu\n", g_aimOwn ? "the pointer" : "the stick",
               (unsigned long)m->frame);
}

static void aim_write(rt_machine *m, s32 x, s32 y)
{
    rt_write16(&m->mem, RC_ADDR(AIM_AXIS_X), 0);
    rt_write16(&m->mem, RC_ADDR(AIM_AXIS_Y), 0);
    rt_write16(&m->mem, RC_ADDR(AIM_ACC_X), 0);
    rt_write16(&m->mem, RC_ADDR(AIM_ACC_Y), 0);
    rt_write16(&m->mem, RC_ADDR(AIM_X), (u16)x);
    rt_write16(&m->mem, RC_ADDR(AIM_Y), (u16)y);
}

/* `v` (0..vmax) mapped onto lo..hi (the scene's own travel). */
static s32 aim_span(s32 v, s32 vmax, s32 lo, s32 hi)
{
    if (v < 0) v = 0;
    if (v > vmax) v = vmax;
    return lo + (v * (hi - lo)) / vmax;
}

/* FUN_000086a0's entry: the pointer is the shot point, so the aim - the pistol - is that point
 * 0x1b right and 0x3a down, and the crosshair lands under the mouse. */
static void aim_shot(rt_machine *m)
{
    if (!g_aimOwn || !g_ptrKnown) return;
    aim_write(m, (s32)g_ptrX - ANT_SHOT_DX, (s32)g_ptrY - ANT_SHOT_DY);
}

/* FUN_0000b97c's entry: the pointer's screen spans the hand's own travel rectangle. */
static void aim_spray(rt_machine *m)
{
    if (!g_aimOwn || !g_ptrKnown) return;
    aim_write(m, aim_span(g_ptrX, SCREEN_W - 1, FIRE_MIN_X, FIRE_MAX_X),
                 aim_span(g_ptrY, SCREEN_H - 1, FIRE_MIN_Y, FIRE_MAX_Y));
}

/* The save picker's once-per-frame work: follow the pointer, and act on a click. A slot sets
 * m->saveSlot and closes the list; Back only closes it. The engine's save path runs at the next
 * map update (save_mark_click), so the chosen slot is the one DSAVE: resolves to. */
static void save_ui_frame(rt_machine *m, int click)
{
    if (!g_saveUi.open) return;
    save_ui_pointer(&g_saveUi, g_ptrKnown, g_ptrX, g_ptrY);
    if (!click) return;

    if (g_saveUi.back_hover)
    {
        save_ui_close(&g_saveUi);
        s_clickHeld = 1;               /* the press that chose Back must not reach the map */
        printf("save: slot picker closed (frame %lu)\n", (unsigned long)m->frame);
        return;
    }
    if (g_saveUi.hover >= 0)
    {
        m->saveSlot = g_saveUi.hover + 1;
        save_ui_close(&g_saveUi);
        s_saveCommit = 1;
        printf("save: save slot %d selected (frame %lu)\n", m->saveSlot,
               (unsigned long)m->frame);
    }
}

/* The map is the only screen that can service a click. If it left while the list was up (a queued
 * panel or a timer ended the scene), close the list rather than leaving it over the next screen
 * with no seam to consume the choice. */
static void save_ui_watch(rt_machine *m)
{
    if (!g_saveUi.open && !s_saveCommit) return;
    if (g_mapFrame != 0 && m->frame <= g_mapFrame + MAP_IDLE_FRAMES) return;
    if (g_saveUi.open)
        printf("save: slot picker closed (the map left, frame %lu)\n",
               (unsigned long)m->frame);
    save_ui_close(&g_saveUi);
    s_saveCommit = 0;
}

/* The arrow is a room-screen feature; the map, the phone and the aiming scenes draw or move
 * their own mark under the pointer, so it stays hidden there. */
static void pointer_present(rt_machine *m)
{
    int room, menu, map, phone, show;

    if (!g_portArm || !g_ptrKnown) { rt_pointer_hidden(); return; }
    /* The save picker is a pointer screen: its arrow is drawn over the popup by save_ui_draw. */
    if (g_saveUi.open) { rt_pointer_at(g_ptrX, g_ptrY); return; }
    room = g_roomFrame != 0 && m->frame - g_roomFrame <= MAP_IDLE_FRAMES;
    menu = g_menuFrame != 0 && m->frame - g_menuFrame <= MAP_IDLE_FRAMES;
    map  = g_mapFrame != 0 && m->frame - g_mapFrame <= MAP_IDLE_FRAMES;
    phone = g_phoneFrame != 0 && m->frame - g_phoneFrame <= MAP_IDLE_FRAMES;
    show = (room || menu) && !map && !phone && !aim_live(m);
    if (show) rt_pointer_at(g_ptrX, g_ptrY);
    else rt_pointer_hidden();
    if (g_hoverLog && show && s_ptrShown != 1)
    {
        s_ptrShown = 1;
        printf("icftd: pointer shown at %d,%d on a room screen (frame %lu)\n", (int)g_ptrX,
               (int)g_ptrY, (unsigned long)m->frame);
    }
    else if (g_hoverLog && !show) s_ptrShown = 0;
}

/* The aimed scenes' mark: reads the aim words at the frame boundary, before the present composes
 * the overlay, so the crosshair is the point the engine will read on the next trigger pull. */
static void crosshair_present(rt_machine *m)
{
    s16 aimX, aimY;

    if (!g_portArm || !crosshair_live(m))
    {
        rt_crosshair_hidden();
        return;
    }
    aimX = (s16)rt_read16(&m->mem, RC_ADDR(ANT_AIM_X));
    aimY = (s16)rt_read16(&m->mem, RC_ADDR(ANT_AIM_Y));
    rt_crosshair_at((s16)(aimX + ANT_SHOT_DX), (s16)(aimY + ANT_SHOT_DY));
}

/* --- the loading line (a port feature, src\host\main.c) --------------------------------------
 * The engine loads a screen before it can show it, and on the original that is a wait with the
 * previous picture still on the screen: the bank opener reads the resource files, Sms_Load unpacks
 * a picture bank's RLE tiles and FUN_000205e6 decrunches the LZ banks. A frame is load work when
 * one of those routines was entered during it, or when the instruction the frame boundary lands on
 * is inside one (a long decode never dispatches, so the entry hook alone misses most of it). The
 * line appears after LOAD_SHOW_FRAMES of work and stays through the gaps between one resource and
 * the next. Nothing of the machine is written, and a measurement run never installs the seam.
 *
 * Image offsets of the load-only code are per program - src\host\seams.c carries both builds'
 * ranges, measured from the same function boundaries in re\decomp_all\dshell\ALL.c: the SMS loader
 * and its unpacker, the bank directory search, the bank opener, the asset lookup inside a bank, the
 * read helper, and the LZ decruncher's state machine and decoder. */
#define LOAD_SHOW_FRAMES 25        /* 1/2 s of work before the line appears */
#define LOAD_IDLE_FRAMES 8         /* ... and how long a gap still belongs to the load */
#define LOAD_HOLD_FRAMES 500       /* 10 s: a transition the title announced has no such limit */

static u32 g_loadSeen;             /* last frame a load routine ran in          */
static u32 g_loadStart;            /* first frame of the load now in progress   */
static int g_loadOn;               /* a load has run within LOAD_IDLE_FRAMES    */
static int g_loadShown;            /* the line is up (the log's edge)           */
static int g_loadHold;             /* frames left on an announced transition    */
static int g_loadHoldSeen;         /* load work has run since the hold was armed */

static int load_pc(u32 pc)
{
    const seam_set *s = seam_active();
    int i;

    if (pc < RC_BASE) return 0;
    pc -= RC_BASE;
    for (i = 0; i < s->loadRangeCount; i++)
        if (pc >= s->loadRanges[i][0] && pc < s->loadRanges[i][1]) return 1;
    return 0;
}

/* Armed when the title takes the intro away (a menu New Game after its scene ends, or Load Game,
 * which skips the scene): from that frame the game is building its first screen, which takes
 * seconds. The line is up at once instead of a few seconds later, and it gives way again as soon
 * as the load it waited for has run and ended. */
void host_loading_hold(rt_machine *m)
{
    if (!g_portArm) return;
    g_loadHold = LOAD_HOLD_FRAMES;
    g_loadHoldSeen = 0;
    rt_osd_text(m, "Loading", 2);
}

/* Runs at the frame boundary, before the vblank whose present composes the overlay. */
static void loading_frame(rt_machine *m)
{
    int busy, up;

    if (!g_portArm) return;
    busy = load_pc(m->pc) || g_loadSeen == m->frame;
    if (busy)
    {
        if (!g_loadOn) { g_loadOn = 1; g_loadStart = m->frame; }
        g_loadSeen = m->frame;
    }
    else if (g_loadOn && m->frame - g_loadSeen > LOAD_IDLE_FRAMES)
        g_loadOn = 0;

    if (g_loadHold > 0)
    {
        if (busy) g_loadHoldSeen = 1;
        else if (g_loadHoldSeen && !g_loadOn) g_loadHold = 0;   /* the load it waited for ended */
        else g_loadHold--;
    }

    up = g_loadHold > 0 || (g_loadOn && m->frame - g_loadStart >= LOAD_SHOW_FRAMES);
    if (up != g_loadShown)
    {
        g_loadShown = up;
        printf("loading: %s (frame %lu)\n", up ? "loading" : "loading done",
               (unsigned long)m->frame);
    }
    if (!up) return;

    /* A slot message has the corner while it is up; the load line takes it back when that
     * expires. Re-arming every frame keeps it up for as long as the load runs. */
    if (m->gfx.osdText[0] == 0 || (s32)(m->gfx.osdTextUntil - m->frame) <= 0 ||
        strcmp(m->gfx.osdText, "Loading") == 0)
        rt_osd_text(m, "Loading", 2);
}

/* The per-screen seams this front end installs. All are played-game features: the cheat does
 * nothing unless a request is pending, the camera writes only while the hospital's own draw runs,
 * the mark is only moved when the map's own SVGM node is blitted, and the pointer seams return at
 * once while g_ptrKnown is clear. */
static void dos_entry(cpu_t *c, rt_machine *m, u32 pc)
{
    /* The map's script: the pointer seam, and the screen Ctrl+T's clock freeze belongs to. */
    if (host_time_freeze_map_pc(pc)) { map_pointer(m); return; }
    if (host_cheat_entry(m, pc)) return;
    if (load_pc(pc)) { g_loadSeen = m->frame; return; }
    if (host_hospital_camera_entry(m, pc)) return;
    if (host_save_button_entry(c, m, pc)) return;
    if (pc == RC_ADDR(TEXT_LINE_PC)) { line_record(c, m); return; }
    if (pc == RC_ADDR(MENU_FLIP_PC)) { menu_flip(c, m); return; }
    if (pc == RC_ADDR(MAP_EVENT_PC)) { save_mark_click(m); return; }
    if (pc == RC_ADDR(PHONE_UPDATE_PC)) { phone_pointer(c, m); return; }
    if (pc == RC_ADDR(ANT_SCENE_PC)) { g_antFrame = m->frame; return; }
    if (pc == RC_ADDR(AIM_SHOT_PC)) { aim_shot(m); return; }
    if (ANT_HEAD_SCENE_PC != 0 && pc == RC_ADDR(ANT_HEAD_SCENE_PC))
    {
        g_antHeadFrame = m->frame;
        return;
    }
    if (ANT_HEAD_AIM_PC != 0 && pc == RC_ADDR(ANT_HEAD_AIM_PC)) { aim_shot(m); return; }
    if (AIM_SPRAY_PC != 0 && pc == RC_ADDR(AIM_SPRAY_PC))
    {
        g_fireFrame = m->frame;
        aim_spray(m);
        return;
    }
    if (pc == RC_ADDR(ROOM_DRAW_PC) || pc == RC_ADDR(ROOM_UPDATE_PC)) g_roomFrame = m->frame;
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
    /* Left Ctrl+T on the situation map freezes the game's clock (src\host\time_freeze.c). */
    host_time_freeze_input(m, &in,
                           g_mapFrame != 0 && m->frame - g_mapFrame <= MAP_IDLE_FRAMES);
    if (g_cheatFrame != 0 && !g_cheatDone && m->frame >= g_cheatFrame)
    {
        g_cheatDone = 1;
        printf("icftd: Ctrl+W at frame %lu\n", (unsigned long)m->frame);
        host_cheat_force(m);
    }
    if (in.pressed[KEY_ESCAPE])
    {
        /* Escape closes the picker first; only outside it is the game's restart. */
        if (g_saveUi.open)
        {
            save_ui_close(&g_saveUi);
            printf("save: slot picker closed (escape, frame %lu)\n", (unsigned long)m->frame);
        }
        else host_title_escape(m);
    }

    joy = g_joyDirs[(in.down[KEY_UP]    ? 1u : 0u) | (in.down[KEY_DOWN]  ? 2u : 0u) |
                    (in.down[KEY_LEFT]  ? 4u : 0u) | (in.down[KEY_RIGHT] ? 8u : 0u)];
    if (g_portArm)
    {
        int moved, click;
        /* A scripted pointer stands in for the platform's: it feeds the same state the seams read.
         * A held direction (keyboard or a scripted stick) takes the pointer off the cursor. */
        if (g_ptrScriptCount > 0)
        {
            moved = pointer_script_tick(m) > 0;
            click = g_ptrButton && !g_ptrButtonPrev;
            g_ptrButtonPrev = g_ptrButton;
        }
        else
        {
            pointer_input(&in, joy != 0 || m->joy0 != 0);
            moved = in.mouse_moved != 0;
            click = in.mouse_left_pressed != 0;
            g_ptrButtonPrev = 0;
        }
        if (s_clickHeld && !in.mouse_left && !g_ptrButton) s_clickHeld = 0;
        save_ui_frame(m, click);
        if (click) save_click_note(m);
        save_ui_watch(m);
        /* The aiming scenes take the aim from the pointer once it moved over them. */
        aim_input(m, moved, joy != 0 || m->joy0 != 0);
        /* Only the map's script and the phone's loop consume the pointer state: anywhere else it
         * owns nothing, so the next screen starts with the game's own placement. */
        if (m->frame > g_mapFrame + MAP_IDLE_FRAMES && m->frame > g_phoneFrame + MAP_IDLE_FRAMES)
            g_ptrActive = 0;
        pointer_present(m);
    }
    if (input_active())
    {
        /* A frame-indexed script owns fire and the stick (input_apply already wrote them); the
         * keyboard only quits. A scripted pointer's button is /FIRE too, the same level the
         * platform's button is in a played game, so a screen that waits for the button (the
         * engine's save prompt) can be played headless. The picker still holds both still while it
         * owns the input. */
        m->fireDown = (u8)((m->fireDown || g_ptrButton) ? 1u : 0u);
        if (save_owns_input(m)) { m->fireDown = 0; m->joy0 = 0; }
        plat_frame_sync();
        return;
    }

    /* Save slot: F1..F4 pick one, F5 steps to the next. The engine writes its save into DSAVE:,
     * which the runtime maps onto SAVES\SLOT<N>, so the overlay is the only feedback. The picker's
     * own choice owns the slot while it is up. */
    if (!save_owns_input(m))
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
    m->fireDown = (u8)((in.down[KEY_FIRE] || in.mouse_left || g_ptrButton) ? 1u : 0u);
    m->joy0 = joy;
    if (save_owns_input(m)) { m->fireDown = 0; m->joy0 = 0; }
    {
        /* Time spent waiting for the next frame slot. It is the difference between the pacing
         * interval --perf reports and the work the frame actually costs, so without it the split
         * looks as if the machine used the whole slot even when the host is ten times fast enough. */
        u32 w0 = g_perfOpen ? plat_pit_now() : 0;
        plat_frame_sync();
        if (g_perfOpen) g_perfWait += plat_pit_now() - w0;
    }
}
/* Writes the composed raster as a 24-bit BMP (bottom-up); --shot makes screen content testable.
 * The picture is the runtime framebuffer, which already holds the OSD, the pointer and the
 * crosshair. Machine state remains the acceptance; this is only for the port's own surfaces. */
static void shot_write(const char *path)
{
    const u8 *fb = rt_gfx_framebuffer();
    const u8 *pal = rt_gfx_palette();
    int w = rt_gfx_width(), h = rt_gfx_height();
    u32 rowBytes, dataSize;
    u8 hdr[54];
    static u8 row[EMU_FB_MAX_W * 3 + 4];
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

static void dos_present(rt_machine *m)
{
    const u8 *fb = rt_gfx_framebuffer();
    const u8 *pal = rt_gfx_palette();
    u8 *dst;
    int w = rt_gfx_width(), h = rt_gfx_height();
    int y;
    u32 stride, t0 = g_perfOpen ? plat_pit_now() : 0;

    if (fb == 0 || pal == 0) return;
    /* The save picker sits on top of the composed frame and under the pointer, so it also reaches
     * --shot: the runtime framebuffer is what is copied into VGA here. */
    save_ui_draw(m, &g_saveUi);
    if (g_shotPath != 0) shot_write(g_shotPath);
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
        if (g_perfOpen)
        {
            g_perfPresent += plat_pit_now() - t0;
            g_perfPresented++;
        }
        (void)m;
        return;
    }
    /* VGA mode 13h is exactly 320x200, while the picture is the size of the window the copper list
     * programs: the chicken race's list asks for 368x216, because its narration page lays the text
     * out across the overscan. The mode cannot hold that, and sampling it down to 320x200 dropped
     * one column in eight, which left the narration's letters ragged. The middle 320x200 of the
     * picture goes to the screen one pixel for one instead: the page's text box spans the whole 368
     * (text 0x1E..0x151, centred on it), and its lines and the race's cockpit are anchored to the
     * picture's bottom row, so the crop is centred across and taken off the top. (On Win32 the
     * mode follows the picture instead.) */
    {
        int cropX = w > SCREEN_W ? (w - SCREEN_W) / 2 : 0;
        int cropY = h > SCREEN_H ? h - SCREEN_H : 0;
        int cw = w < SCREEN_W ? w : SCREEN_W;
        for (y = 0; y < SCREEN_H; y++)
        {
            int sy = y + cropY;
            const u8 *row;
            u8 *out = dst + (u32)y * SCREEN_W;
            if (sy >= h)
            {
                memset(out, 0, SCREEN_W);
                continue;
            }
            row = fb + (u32)sy * EMU_FB_MAX_W + cropX;
            memcpy(out, row, (size_t)cw);
            if (cw < SCREEN_W) memset(out + cw, 0, (size_t)(SCREEN_W - cw));
        }
    }
    plat_present();
    if (g_perfOpen)
    {
        g_perfPresent += plat_pit_now() - t0;
        g_perfPresented++;
    }
    (void)m;
}

int main(int argc, char **argv)
{
    rt_machine m;
    cpu_t c;
    char imagePath[200];
    char diskPath[200];
    const char *image = 0;
    const char *dataDir = 0;
    const char *diskDir = 0;
    int extractOnly = 0;            /* --extract: fill the data folder and stop */
    u32 frameLimit = 0;
    int slot = 1;
    int titleKey = -1;              /* --titlekey: take this title screen menu choice */
    int i, rc = 0;
    int traced = 0, badReported = 0, tickLog = 0;
    long traceFrom = 0, traceTo = 0;
    u32 lastTraced = 0xFFFFFFFFu, prevTraced = 0xFFFFFFFFu;
    u32 translated = 0, interpreted = 0;
    u32 audioPlayed = 0, audioDropped = 0, audioStarved = 0;
    /* Read before rt_shutdown/plat_shutdown, and used by the summary and the --perf report, so both
     * describe the same run and neither re-reads a clock after the machine is gone. */
    u32 runFrames = 0, runRasters = 0, runMs = 0, runRtcMs = 0, runEmuMs = 0, perfClocks = 0;
    long runInsns = 0;
    rt_perf perfRt;
    plat_clock_info perfClockOut;
    /* The game is the screen: the quiet console is the first thing set, so no diagnostic can be
     * written into mode 13h (a redirected stdout keeps its log - see platform.h). */
    plat_quiet_console();
    plat_set_program(argc > 0 ? argv[0] : 0);
    setvbuf(stdout, NULL, _IONBF, 0);
    memset(&c, 0, sizeof c);
    memset(&perfRt, 0, sizeof perfRt);
    memset(&perfClockOut, 0, sizeof perfClockOut);

    for (i = 1; i < argc; i++)
    {
        if (strcmp(argv[i], "--data") == 0 && i + 1 < argc) { dataDir = argv[++i]; continue; }
        if (strcmp(argv[i], "--disks") == 0 && i + 1 < argc) { diskDir = argv[++i]; continue; }
        if (strcmp(argv[i], "--image") == 0 && i + 1 < argc) { image = argv[++i]; continue; }
        if (strcmp(argv[i], "--extract") == 0) { extractOnly = 1; continue; }
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
        /* --refbus: the reference bus walker (slots.h). Same machine state, slower. */
        if (strcmp(argv[i], "--refbus") == 0) { rt_bus_set_reference(1); continue; }
        /* --refwait: the translated flag waits run instead of the native loop (same three
         * instructions, same charges). Both must produce the same --dump / --state bytes. */
        if (strcmp(argv[i], "--refwait") == 0) { rc_waitTranslated = 1; continue; }
        if (strcmp(argv[i], "--genericblit") == 0) { g_genericBlit = 1; continue; }
        if (strcmp(argv[i], "--srcdiff") == 0) { rt_gfx_srcdiff(1); continue; }
        if (strcmp(argv[i], "--perf") == 0) { g_perf = 1; continue; }
        if (strcmp(argv[i], "--blitstats") == 0)
        {
            g_blitStats = 1;
            g_perf = 1;
            rt_blit_stats(1);
            continue;
        }
        if (strcmp(argv[i], "--perfafter") == 0 && i + 1 < argc)
        {
            g_perf = 1;
            g_perfFrom = (u32)strtoul(argv[++i], 0, 0);
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
        if (strcmp(argv[i], "--mouse") == 0 && i + 1 < argc) { g_mousePath = argv[++i]; continue; }
        if (strcmp(argv[i], "--input") == 0 && i + 1 < argc) { g_inputPath = argv[++i]; continue; }
        if (strcmp(argv[i], "--shot") == 0 && i + 1 < argc) { g_shotPath = argv[++i]; continue; }
        if (strcmp(argv[i], "--hoverlog") == 0) { g_hoverLog = 1; continue; }
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
        if (strcmp(argv[i], "--timefreeze") == 0 && i + 1 < argc)
        {
            char *p = argv[++i];
            while (*p != 0 && g_freezeCount < DOS_TIME_FREEZE_MAX)
            {
                g_freezeAt[g_freezeCount++] = (u32)strtoul(p, &p, 0);
                if (*p == ',') p++;
                else break;
            }
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
    if (dataDir == 0) dataDir = plat_exe_dir();
    if (diskDir == 0)
    {
        sprintf(diskPath, "%s\\disks", plat_exe_dir());
        diskDir = diskPath;
    }

    /* First start: the data folder is filled from the player's own three floppy images, once, and
     * in the layout this release ships (DISK1..3 under 8.3 names, NAMES.TXT, DSHELL.IMG last). The
     * extraction is skipped when there is already something to boot: `--image`, the release's own
     * DSHELL.IMG, or the tree tools\extract.ps1 writes, which is what a development run pointed at
     * the Windows export with --data uses. */
    if (extractOnly)
    {
        char msg[600];
        if (rt_assets_ensure(dataDir, diskDir, RT_ASSETS_DOS, msg, (u32)sizeof msg) != RT_ASSETS_OK)
        {
            printf("icftd: %s\n", msg);
            return 1;
        }
        return 0;
    }
    if (image == 0)
    {
        char devImage[200];
        if ((int)strlen(dataDir) + (int)strlen(DOS_IMAGE) + 2 > (int)sizeof imagePath ||
            (int)strlen(dataDir) + 27 > (int)sizeof devImage)
        {
            printf("icftd: the data folder path is too long\n");
            return 2;
        }
        sprintf(imagePath, "%s\\%s", dataDir, DOS_IMAGE);
        sprintf(devImage, "%s\\code\\dshell4k\\dshell.img", dataDir);
        if (plat_path_kind(imagePath) != PLAT_PATH_FILE &&
            plat_path_kind(devImage) == PLAT_PATH_FILE)
            strcpy(imagePath, devImage);
        if (plat_path_kind(imagePath) != PLAT_PATH_FILE)
        {
            char msg[600];
            if (rt_assets_ensure(dataDir, diskDir, RT_ASSETS_DOS, msg,
                                 (u32)sizeof msg) != RT_ASSETS_OK)
            {
                printf("icftd: %s\n", msg);
                return 1;
            }
        }
        image = imagePath;
    }

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
    /* perfOn is the window's, not the run's: perf_open() turns it on at the boundary the window
     * starts at, so nothing before it pays for instrumentation or lands in its counters. */
    m.tickLog = tickLog;
    m.blitGeneric = g_genericBlit;
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
        rt_audio_open(&m, DOS_AUD_RATE);
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
    if (g_mousePath != 0) pointer_script_load(g_mousePath);
    /* A scripted stick/fire (src\oracle\input.c): applied at the frame boundary by oracle_tick, so
     * a screen that waits for the button - the engine's own save prompt - can be played headless. */
    if (g_inputPath != 0 && !input_load(g_inputPath))
    {
        rt_shutdown(&m);
        plat_shutdown();
        return 1;
    }
    /* The port's per-screen seams (the pointer, the crosshair, the aim) are played-game features:
     * they run in a played run and in a run that asked for the pointer with --mouse, never in a
     * measurement. The cheat follows the same rule with its own scripted form. */
    g_portArm = ((frameLimit == 0 || titleKey >= 0) && g_callPc == 0 && g_dumpPath == 0) ||
                g_mousePath != 0;
    if (g_portArm || g_cheatFrame != 0)
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
                /* Enter the routine as its caller would: push the return address (the program-end
                 * sentinel, or --call's fourth field) and the argument below it. */
                u32 r[18];
                g_called = 1;
                oracle_regs_get(r);
                r[REGS_A + 7] -= 4;
                rt_write32(&m.mem, r[REGS_A + 7], g_callArg);
                r[REGS_A + 7] -= 4;
                rt_write32(&m.mem, r[REGS_A + 7], g_callRet != 0 ? g_callRet : EMU_EXIT_PC);
                r[REGS_PC] = g_callPc;
                oracle_regs_set(r);
                printf("icftd: calling %06lX(%08lX) at frame %lu\n", (unsigned long)g_callPc,
                       (unsigned long)g_callArg, (unsigned long)m.frame);
                if (g_callRet != 0)
                    printf("icftd:      returns into the program at %06lX\n",
                           (unsigned long)g_callRet);
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
            while (m.waitFrames > 0) { m.waitFrames--; rt_time_idle(&m); interp_frame(&m); }
            {
                u32 cost = oracle_instruction_cost(&m, pc);
    
                m.cyclesToTick -= (long)cost;
                rt_time_run(&m, (long)cost);       /* Paula + CIA timers, as in oracle_run */
                rt_cia_service(&m);
                if (m.cyclesToTick < 0) interp_frame(&m);
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
            m.blitGeneric = g_genericBlit;
            m.traceFrom = traceFrom;
            m.traceTo = traceTo;
            rt_audio_set_gain(&m, soundGain, musicGain);
            if (!g_noAudio && hadAudio) rt_audio_open(&m, DOS_AUD_RATE);
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
            /* A fresh game starts with the clock running; the scripted chord has had its frames. */
            host_time_freeze_reset();
            g_freezePos = g_freezeCount;
            /* The pointer seams keep per-screen state; a fresh game must not inherit the old one. */
            g_ptrKnown = g_ptrActive = g_hoverOwn = 0;
            g_ptrX = g_ptrY = 0;
            g_ptrScriptPos = 0;
            g_ptrButton = 0;
            g_ptrButtonPrev = 0;
            save_ui_init(&g_saveUi);
            s_markClick = 0;
            s_saveCommit = 0;
            s_clickHeld = 0;
            s_markHover = 0;
            s_fakeView = 0;
            s_ptrShown = 0;
            g_mapFrame = g_phoneFrame = g_roomFrame = g_menuFrame = 0;
            g_antFrame = g_antHeadFrame = g_fireFrame = 0;
            g_aimOwn = 0;
            g_lineCount = 0;
            g_loadHold = g_loadHoldSeen = 0;
            g_loadOn = g_loadShown = 0;
            g_loadSeen = g_loadStart = 0;
            /* A restart starts the measurement again: close the window, and the next boundary that
             * passes --perfafter opens a fresh one with every counter at zero. */
            m.perfOn = 0;
            g_perfOpen = 0;
            g_perfFrames = g_perfVblank = g_perfMachine = 0;
            g_perfPresent = g_perfPresented = g_perfWait = 0;
            g_perfFrameIn = g_perfFrameOut = 0;
            g_perfHaveOut = 0;
            g_perfLastFrame = 0;
            g_perfRtcIn = g_perfRtcOut = 0;
            g_perfInsnsIn = 0;
            badReported = 0;
            traced = 0;
            lastTraced = prevTraced = 0xFFFFFFFFu;
            host_title_key(-1);
            host_title_arm(1);
            /* A save the other game wrote is loaded in that game (title.c): this front end boots
             * one program, so nothing here can ask for the switch yet - the latch is taken so a
             * pending load is not silently dropped (docs\antheads.md, Phase 8 boots the add-on). */
            if (host_title_restart_load()) host_title_load_on_boot();
            continue;
        }
    }

    rt_lvo_report();
    /* rt_shutdown closes the device and clears the flag, so the counters are read first - and so is
     * every clock the report divides. The endpoint of the run and of the --perf window is here, not
     * after the shutdown and not after the messages: the window's own endpoint was taken at the last
     * complete frame boundary (frame_measure_in), which is earlier still than this. */
    audioPlayed = m.audio.device ? plat_audio_played() : 0;
    audioDropped = m.audio.device ? plat_audio_dropped() : 0;
    audioStarved = m.audio.device ? plat_audio_starved() : 0;
    {
        runFrames = m.frame;
        runRasters = rt_gfx_frames();
        runInsns = m.insns;
        runMs = plat_ticks_ms();
        runRtcMs = plat_rtc_elapsed_ms();
        runEmuMs = plat_emulated_ms();
        perfClocks = plat_pit_per_second();
        perfRt = m.perf;
        plat_clock_report(&perfClockOut);
    }
    rt_shutdown(&m);
    plat_shutdown();

    /* Text mode again: the messages the runtime printed into the graphics screen are gone, so
     * the run summary is the one thing the player sees. */
    printf("icftd: %lu frame(s), %lu raster(s), %ld instruction(s)\n",
           (unsigned long)runFrames, (unsigned long)runRasters, (long)runInsns);
    printf("icftd: %lu translated entry(ies), %lu interpreted instruction(s)\n",
           (unsigned long)translated, (unsigned long)interpreted);
    {
        if (runMs != 0)
            printf("icftd: %.1f frame/s\n", (double)runFrames * 1000.0 / (double)runMs);
        /* The two clocks measure the whole run: if they disagree, the game's pacing clock is not
         * real time and every speed figure - frames and audio both - is scaled by the ratio. */
        printf("icftd: %lu ms by the 8254, %lu ms by the RTC\n",
               (unsigned long)runMs, (unsigned long)runRtcMs);
        /* Emulated time: at a fixed DOSBox cycle setting (cycles per emulated millisecond) this
         * times the setting is the host instruction count of the run, so dividing by the frame
         * count says what a frame really costs. */
        printf("icftd: %lu ms of machine time, %lu ms/frame\n",
               (unsigned long)runEmuMs,
               (unsigned long)(runFrames != 0 ? runEmuMs / runFrames : 0));
    }
    if (g_perf && g_perfFrames != 0 && perfClocks != 0)
    {
        /* One unit for everything: counts of the platform's clock, divided by its own
         * counts-per-second, so the two halves add up to the frame and the frame to the frame rate.
         * Every figure covers the same window - the complete frames between the boundary the
         * window opened at and the last one whose vblank *and* machine run were both measured - and
         * the counters behind them were zeroed together at the opening boundary.
         *
         * The order of the lines is the nesting: `vblank + machine run` is the whole frame; `idle
         * waiting for the slot` is inside the vblank; conversion, the screen copy, the blitter and
         * the interrupt servers happen wherever they happen (a LoadView converts and presents
         * inside the machine's run too, not only at the vblank), so they are exclusive timings
         * inside one of those halves, never parts to be added up.
         *
         * The scale is the platform's own counts-per-second, the same factor plat_ticks_ms uses. It
         * comes from one CMOS-clock calibration at startup, and an emulated 8254 does not tick at
         * one rate (DOSBox fast-forwards an idle polling loop and not our C), so the headline
         * carries the same window measured on the CMOS clock as well: where the two disagree, that
         * is the scale and not the split. The wall clock outside the program settles it
         * (tools\perf-dos.ps1). */
        double n = (double)g_perfFrames;
        double toMs = 1000.0 / (double)perfClocks;
        double vb = (double)g_perfVblank * toMs / n;
        double machine = (double)g_perfMachine * toMs / n;
        double total = vb + machine;
        double conv = (double)perfRt.conv * toMs / n;
        double blit = (double)perfRt.blit * toMs / n;
        double handlers = (double)perfRt.vblank * toMs / n;
        double cia = (double)perfRt.cia * toMs / n;
        double wait = (double)g_perfWait * toMs / n;
        double pres = (double)g_perfPresent * toMs / n;
        double insns = (double)(runInsns - g_perfInsnsIn);
        u32 rtc = g_perfRtcOut >= g_perfRtcIn ? g_perfRtcOut - g_perfRtcIn : 0;

        printf("perf: window: frames %lu..%lu, %lu complete; clock %lu counts/s (%.2f x 1.193182 "
               "MHz)\n",
               (unsigned long)g_perfFirstFrame, (unsigned long)(g_perfFirstFrame + g_perfFrames),
               (unsigned long)g_perfFrames, (unsigned long)perfClocks,
               (double)perfClocks / 1193182.0);
        printf("perf: clock: 8254 mode %s; %lu samples in the window, %lu without a consistent "
               "tick, %lu rejected, %lu pending rollover(s)\n",
               g_perfClockIn.mode == 3 ? "3 (half periods, read-back OUT)"
                                       : (g_perfClockIn.mode == 2
                                              ? "2 (one wrap per BIOS tick)"
                                              : "unknown - linear fallback, timings may depend on "
                                                "the sampling rate"),
               (unsigned long)(perfClockOut.samples - g_perfClockIn.samples),
               (unsigned long)(perfClockOut.snapFails - g_perfClockIn.snapFails),
               (unsigned long)(perfClockOut.rejects - g_perfClockIn.rejects),
               (unsigned long)(perfClockOut.pending - g_perfClockIn.pending));
        printf("perf: %.1f ms/frame = %.2f frame/s", total, 1000.0 / total);
        if (rtc >= 3000u)                  /* the CMOS clock counts seconds: skip a short run */
            printf("; the same %lu frame(s) took %.1f ms/frame by the CMOS clock",
                   (unsigned long)g_perfFrames, (double)rtc / n);
        printf("\n");
        printf("perf:   vblank %.1f ms (%.0f%%), of it idle waiting for the slot %.1f; machine run "
               "%.1f ms (%.0f%%)\n",
               vb, vb * 100.0 / total, wait, machine, machine * 100.0 / total);
        printf("perf:   exclusive: conversion %.1f ms over %.2f raster(s)/frame, blitter %.1f ms "
               "over %.0f row(s)/frame, screen copy %.1f ms over %.2f copy(ies)/frame\n",
               conv, (double)perfRt.convs / n, blit, (double)perfRt.blitRows / n, pres,
               (double)g_perfPresented / n);
        printf("perf:   interrupt servers (inclusive, on the interpreter): vblank %.1f ms, CIA %.1f "
               "ms in %.2f run(s)/frame\n",
               handlers, cia, (double)perfRt.ciaRuns / n);
        printf("perf:   presentation calls %.2f/frame, %.0f instruction(s)/frame, %.0f of them in the "
               "interrupt handlers\n",
               (double)perfRt.presents / n, insns / n,
               (double)(perfRt.vblankInsns + perfRt.ciaInsns) / n);
        /* --blitstats: the pixel loop split the way a specialization would have to split it. The
         * classes are the ones the task asks about - minterm, both shifts, the channel enables,
         * fill, direction, geometry - and the last column says whether D's span meets a source's,
         * i.e. whether the class is one a contiguous copy could replace without changing what the
         * CPU sees. Ticks are the same counts as the blitter line above, summed per class. */
        if (g_blitStats && rt_blit_stats_count() > 0)
        {
            int total = rt_blit_stats_count(), k, j, si, shown[16];
            u32 sumBlits = 0, sumRows = 0, sumWords = 0, sumTicks = 0;
            for (si = 0; si < total; si++)
            {
                const rt_blit_stat *s = rt_blit_stats_at(si);
                sumBlits += s->blits;
                sumRows += s->rows;
                sumWords += s->words;
                sumTicks += s->ticks;
            }
            printf("perf:   blit classes: %d distinct, %lu blit(s), %lu row(s), %lu word(s); "
                   "pixel loop %.1f ms/frame\n",
                   total, (unsigned long)sumBlits, (unsigned long)sumRows,
                   (unsigned long)sumWords, (double)sumTicks * toMs / n);
            printf("perf:     minterm ash bsh  ch  fill desc  words x rows  blits  rows/fr"
                   "   ms/fr  us/row  D meets\n");
            for (k = 0; k < 16 && k < total; k++)
            {
                int best = -1;
                for (si = 0; si < total; si++)
                {
                    int used = 0;
                    for (j = 0; j < k; j++) if (shown[j] == si) { used = 1; break; }
                    if (!used && (best < 0 || rt_blit_stats_at(si)->ticks > rt_blit_stats_at(best)->ticks))
                        best = si;
                }
                shown[k] = best;
                {
                    const rt_blit_stat *s = rt_blit_stats_at(best);
                    char ch[5], ov[5];
                    int c, nOv = 0;
                    for (c = 0; c < 4; c++) ch[c] = (s->chan & (8 >> c)) ? (char)('A' + c) : '-';
                    ch[4] = 0;
                    for (c = 0; c < 4; c++)
                        if ((s->overlap & (1 << c)) != 0) ov[nOv++] = (char)('A' + c);
                    ov[nOv] = 0;
                    printf("perf:     %06lX %3d %3d  %s  %d %d  %3d x %4d  %6lu  %6.1f  %6.1f %7.2f"
                           "  %s\n",
                           (unsigned long)s->minterm, (int)s->ash, (int)s->bsh, ch,
                           (s->flags & 1) != 0, (s->flags & 2) != 0,
                           (int)s->w, (int)s->h, (unsigned long)s->blits,
                           (double)s->rows / n, (double)s->ticks * toMs / n,
                           (double)s->ticks * toMs * 1000.0 / (double)s->rows,
                           nOv != 0 ? ov : "none");
                }
            }
            if (total > 16) printf("perf:     ... %d more class(es)\n", total - 16);
        }
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
