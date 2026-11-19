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
 *                [--input <script>] [--data <dir>] [--disks <dir>] [--extract] [--progress]
 *                [--blitlog] [--base <addr>] [--window] [--run] [--speed <percent>] [--slot <n>]
 *                [--call <pc>[:<frame>]] [--osd <text>|save] [--shot <bmp>]
 *                [--dump <prefix> [n]] [--dumpfrom <frame>] [--cover <file>]
 *                [--audiostall <n>]
 *                [--titlekey <n>] [--esc <frame>] [--cheat <frame>] [--timefreeze <frame>[,<frame>...]]
 *                [--mouse <file>] [--hoverlog] [--srcdiff] [--genericblit]
 *                [--cameralog] [--savelog] [--program ant|original] [--langdump <file>]
 *                [--langkeys <file>]
 *
 * Started with no arguments at all it plays the game (like `--run`): that is how a release is
 * launched by double-clicking it.
 *
 * A release ships empty `export\` and `disks\` folders next to the executable. The data in
 * `export\` is extracted from the player's own three floppy images in `disks\` on the first start
 * (src\runtime\assets.c), and a launch without those images shows one line and stops:
 * "Please put the three original 'It Came from the Desert' disk images in the 'disks' folder and
 * restart." `--data` and `--disks` say where those two folders are (default: next to the
 * executable, or `export`/`disks` in the working directory when the executable has no `export\`,
 * which is what a run from the repository root uses); `--extract` only fills the data folder.
 *
 * `--run` opens the window and plays at 50 Hz until it is closed (esc restarts the game at the
 * title screen, space or the left
 * mouse button is /FIRE, arrows are the joystick, F1..F4 pick a save slot and F5 cycles them, the
 * mouse moves the situation map's cursor, the phone book's arrow, the giant-ant fight's gun and the
 * fire game's extinguisher, and on a room screen it is the pointer a menu line is selected with;
 * left Ctrl+W in a minigame ends it in that scene's own success state, src\host\cheat.c, and left
 * Ctrl+T on the situation map freezes the game's clock and says so in the OSD line,
 * src\host\time_freeze.c);
 * without it the build runs headless and only reports machine state. `--call`
 * enters one of the engine's own routines at a frame boundary, with the program-end sentinel as its
 * return address.
 * `--mouse` feeds the pointer the positions a platform pointer would report
 * ("<frame> <x> <y> [<button>]"), so the port's pointer control - the map's cursor, the phone's
 * arrow, a room menu's hover, the fight's gun and the fire game's extinguisher - can be measured
 * without a mouse (it is a dev seam like --input; in a played game the platform pointer drives the
 * same state).
 * `--hoverlog` prints every text menu line the pointer seam records and the entry a hover picks,
 * so a scripted run says which line is where instead of leaving it to a screenshot.
 * `--cameralog` prints the hospital escape's player, picture origin, fine scroll and scroll
 * request once per update, so the port's centred camera is a list of numbers instead of a picture
 * (a played run, or the headless --mouse form of one: a measurement installs no seam and prints
 * nothing).
 * `--savelog` does the same for the situation map's SAVE GAME mark: the node's own position, the
 * screen's corner it is moved to and the surface it is drawn on, once per placement.
 * `--langdump <file>` writes every distinct string the run hands to the engine's text routines,
 * one `<English><TAB>` row each - the raw material of a translation file, including the text that
 * only exists in memory (the intro's compressed narration pages, the room menus, the map's
 * messages). The run stays English while it dumps, whatever `[GAME] language` says, so a row is
 * always the original's text; tools\lang-export.ps1 runs it and merges its rows with the prose read
 * out of the data files and the interface's own vocabulary (`--langkeys`) into `lang\en.csv`, the
 * source a translation file is made from (docs\port-features.md, "The translation file").
 * `--langkeys <file>` writes that vocabulary on its own: the lines the engine draws from its
 * program and the port's own screens, which no data file holds.
 * `--speed` scales that clock for inspection: 100 is the Amiga's 50 Hz.
 * `--titlekey` takes one of the title screen's menu choices (0 the game, 1..7 the minigames, 8..10
 * the endings; 11 and 12 are the menu's Load Game and New Game buttons, i.e. the played path where
 * the title answers the load screen, and 15 is the fifth button, which plays the add-on "Antheads")
 * so a scripted run can start a scene from the title; it is a dev seam like `--call`.
 * `--dump` writes one raster per presented frame, the way the oracle's does: a scroll is a
 * sequence of frames, so "does it move, and by how much" is measured on consecutive rasters
 * (`--dumpfrom` starts the sequence at an emulated frame, for a scene reached deep into a run).
 * `--program ant` runs the 1990 add-on "It Came from the Desert II - Antheads" instead of the 1989
 * game: a second build of the engine with its own translated table, A4, entry and save file. Both
 * link at the same address, so only the program changes (docs\antheads.md).
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
#include "assets.h"
#include "m68k.h"
/* Two headers are called cpu.h: the 68000 front end's and the translated layer's. */
#include "../oracle/cpu.h"
#include "../recomp/cpu.h"
#include "../recomp/fn_table.h"
#include "title.h"
#include "cheat.h"
#include "time_freeze.h"
#include "hospital_camera.h"
#include "save_button.h"
#include "save_ui.h"
#include "programs.h"
#include "seams.h"
#include "lang_dump.h"
#include "lang_hook.h"
#include "../runtime/lang.h"

/* The game program inside the data folder, which a fresh release only gets by extraction. Both
 * builds are extracted side by side: `\code\dshell4k` is the 1989 game, `\ant\code\dshell4k` the
 * add-on (docs\antheads.md). */
#define IMAGE_RELATIVE     "\\code\\dshell4k\\dshell.img"
#define IMAGE_RELATIVE_ANT "\\ant\\code\\dshell4k\\dshell.img"
#define HS_BASE       EMU_IMAGE_BASE

/* Where the data folder and the floppy images are. A release keeps `export\`, `disks\` and
 * `saves\` next to the executable and is started from anywhere, so the executable's own folder is
 * tried first; a development tree runs the binary out of `bin\win32\` with the data in the
 * repository root, so plain working-directory-relative names are the fallback. `--data`/`--disks`
 * override both. Filled in once by host_asset_dirs. */
static char g_exportPath[300];
static char g_disksPath[300];
static char g_imagePath[300];

/* Which engine build this run executes: HOST_PROGRAM_ORIGINAL (the 1989 game) or
 * HOST_PROGRAM_ANT (the 1990 add-on). --program picks at start, the title's fifth button switches
 * a running game (docs\antheads.md). */
static int g_program = HOST_PROGRAM_ORIGINAL;

static void host_asset_dirs(void)
{
    char probe[300];

    sprintf(probe, "%s\\export", plat_exe_dir());
    if (plat_path_kind(probe) == PLAT_PATH_DIR) {
        strcpy(g_exportPath, probe);
        sprintf(probe, "%s\\disks", plat_exe_dir());
        strcpy(g_disksPath, probe);
    } else {
        strcpy(g_exportPath, "export");
        strcpy(g_disksPath, "disks");
    }
}

/* How many save slots the game exposes: saves\slot1 .. slot10, the ten the title lists. */
#define MAX_SAVE_SLOTS 10

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

/* --esc <frame>: press Escape at a frame (a test seam, like --call). It goes through the same path
 * the key does, so a scripted run can measure the restart that returns to the title. */
static u32 g_escFrame;
static int g_escDone;

/* --cheat <frame>: press the Ctrl+W minigame cheat at a frame (a test seam, like --esc). It raises
 * the same request the platform's chord does, so a scripted run measures the cheat itself and not
 * a second path (src\host\cheat.c). */
static u32 g_cheatFrame;
static int g_cheatDone;

/* --timefreeze <frame>[,<frame>...]: press the Ctrl+T clock freeze at those frames (a test seam,
 * like --cheat). Each frame in the list is one chord press, so two of them freeze and unfreeze
 * again; the toggle itself is the platform chord's (src\host\time_freeze.c). */
#define HOST_TIME_FREEZE_MAX 8
static u32 g_freezeAt[HOST_TIME_FREEZE_MAX];
static int g_freezeCount;
static int g_freezePos;

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

/* The port's per-screen seams, defined with their attachment points further down: the fight's
 * aiming crosshair is placed at the frame boundary, before the vblank composes the frame. */
static void crosshair_present(rt_machine *m);
static void loading_frame(rt_machine *m);
static int  aim_live(rt_machine *m);
static void host_present(rt_machine *m);

/* The machine whose frames host_present shows. The platform's display service calls the port's
 * overlay (host_overlay_draw) with a surface and nothing else, so the front end keeps the machine
 * here rather than threading it through a callback the platform has no use for. */
static rt_machine *g_m;
static int  s_ptrVisible;            /* the arrow is up on this screen (the 50 Hz decision) */

/* The machine-side half of the audio fault log: one line when the engine frees its score. A
 * silence with no such line is the host device's; one right before it is the game's own scene
 * change. Loads are not logged - they happen in every scene and say nothing about a silence.
 * DAT_00023C58 (the loaded score) and DAT_0002A170 (the hospital escape's progress) are rows of
 * the seam table, src\host\seams.c. */

static void host_audio_note(rt_machine *m)
{
    static u32 s_score;
    static u32 s_frame;
    static int s_seen;
    u32 score = rt_read32(&m->mem, RC_ADDR(HOST_SCORE_PTR));

    if (s_seen && m->frame < s_frame) { s_score = score; s_frame = m->frame; return; }
    s_frame = m->frame;
    if (!s_seen) { s_seen = 1; s_score = score; return; }
    if (score == s_score) return;
    if (s_score != 0 && score == 0)
    {
        char line[192];
        sprintf(line, "machine: score freed at frame %lu, pc %06lX, hospital progress %04X",
                (unsigned long)m->frame, (unsigned long)m->pc,
                (unsigned)rt_read16(&m->mem, RC_ADDR(HOST_HOSP_PROG)));
        plat_audio_log(line);
    }
    s_score = score;
}

/* The vertical blank, reached from inside translated code: the register file goes to the core, the
 * game's servers run there (they are original code, mostly untranslated), and whatever they left in
 * the registers comes back. */
static void host_frame(cpu_t *c, rt_machine *m)
{
    /* --timefreeze: the Ctrl+T chord, once per listed frame (a test seam). It is consumed here
     * because this is the frame boundary every run passes - windowed, --input, --mouse, --esc. */
    while (g_freezePos < g_freezeCount && m->frame >= g_freezeAt[g_freezePos])
    {
        g_freezePos++;
        printf("recomp: Ctrl+T at frame %lu\n", (unsigned long)m->frame);
        host_time_freeze_force(m);
    }
    host_time_freeze_frame(m);         /* a frozen clock: the vblank's server must see the pause */
    loading_frame(m);                  /* arms the OSD line while a load runs, before the present */
    crosshair_present(m);              /* composed by the present inside oracle_tick */
    scatter(c, m);
    oracle_tick(m);
    gather(c, m);
    host_audio_note(m);
    host_crash_note(m, c);
    /* The front end's own loop services the per-frame seams (`--call`, `--esc`, `--cheat`, the
     * title's keys); with the whole program translated nothing else hands it the program, so it
     * asks for the boundary here. See rc_frameBreak (src\recomp\cpu.h). */
    rc_frameBreak = 1;
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
        unsigned idx = (unsigned)(e - rc_active->fns);
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
    for (i = 0; i < rc_active->count && i < HOST_COVER_FUNCS; i++)
        if (g_covHits[i] != 0)
        {
            fprintf(f, "%08lX %lu\n", (unsigned long)rc_active->fns[i].addr,
                    (unsigned long)g_covHits[i]);
            n++;
        }
    for (k = 0; k < g_covExtraCount; k++)
        fprintf(f, "%08lX %lu interpreted\n", (unsigned long)g_covExtraPc[k],
                (unsigned long)g_covExtraHits[k]);
    fclose(f);
    printf("recomp: coverage: %d of %u translated function(s) ran -> %s\n", n,
           rc_active->count, coverPath);
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
 * engine's accumulator cannot carry it (see map_pointer). The exception is the screen's SAVE GAME
 * mark: while the pointer is over the mark the window holds still, and a held fire is reported at
 * the mark's own map point so the script's click test takes its save path.
 * Only those words are written, and only while the map's script is the one being called, so no
 * other screen and no headless/scripted measurement (where this is not armed at all) can see it.
 * The engine addresses are rows of the seam table, src\host\seams.c. */
#define MAP_CUR_MIN    0x19        /* the travel window, from FUN_00003B1E */
#define MAP_CUR_MAXX   0x136
#define MAP_HOT_X      0x11        /* the cursor sprite's hot spot: its tip, from FUN_00003B1E */
#define MAP_HOT_Y      0x12
#define MAP_SCROLL     6           /* picture pixels per update at the window's edge: the stick's
                                    * own ramp runs 1..14, and the pointer has no hold to ramp
                                    * with - reversing at the other edge must take effect at once */
#define MAP_ORG_MAXX   0x13F       /* FUN_000035D2's x clamp (the same in both builds) */
/* The map's script runs every few vblanks (its loop flips buffers and waits), so "the map is not
 * on screen" cannot be decided on one frame: this many frames without a script call means the
 * screen is gone, and the next one starts with the game's own cursor placement again. */
#define MAP_IDLE_FRAMES 30

static int  g_portArm;                 /* the port's per-screen seams may run (a played game,
                                        * or --mouse): the pointer, the crosshair, the aim */
static int  g_ptrKnown;                /* a pointer position is available */
static int  g_ptrActive;               /* the pointer owns the map cursor */
static int  g_hoverOwn;                /* the pointer owns the menu line under it */
static s16  g_ptrX, g_ptrY;            /* framebuffer coordinates */

/* --mouse <file>: "<frame> <x> <y> [<button>]" per line, the pointer's positions and left-button
 * state as the platform would report them. A dev seam like --input: the same state, so the feature
 * can be measured headless (no platform has to be driven and no human has to be at the mouse). */
#define HOST_MOUSE_MAX 256
static struct { u32 frame; s16 x, y; u8 button; } g_ptrScript[HOST_MOUSE_MAX];
static int g_ptrScriptCount, g_ptrScriptPos;
static u8  g_ptrButton;                /* the script's left button, held until it changes */
static u8  g_ptrButtonPrev;            /* ... the previous frame, for its press edge */
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
 * pointer that stays where it was put (and the button with it). Returns how many were applied,
 * i.e. whether the pointer moved in this frame. */
static int pointer_script_tick(rt_machine *m)
{
    int applied = 0;

    while (g_ptrScriptPos < g_ptrScriptCount && g_ptrScript[g_ptrScriptPos].frame <= m->frame)
    {
        g_ptrX = g_ptrScript[g_ptrScriptPos].x;
        g_ptrY = g_ptrScript[g_ptrScriptPos].y;
        g_ptrButton = g_ptrScript[g_ptrScriptPos].button;
        g_ptrKnown = 1;
        g_ptrActive = 1;
        g_hoverOwn = 1;
        g_ptrScriptPos++;
        applied++;
    }
    return applied;
}

/* The keyboard wins while a direction is held, the pointer wins when it moves: either one can be
 * used on the same screen without the other fighting it (the same rule the platform's own pad
 * follows). A pointer that has not moved since the map opened leaves the cursor where the game put
 * it, on the current location. */
static void pointer_input(const input_state *in, int stickHeld)
{
    if (!in->mouse_present) { g_ptrKnown = 0; g_ptrActive = 0; g_hoverOwn = 0; return; }
    if (stickHeld) { g_ptrActive = 0; g_hoverOwn = 0; }
    else if (in->mouse_moved)
    {
        g_ptrX = in->mouse_x;
        g_ptrY = in->mouse_y;
        g_ptrKnown = 1;                /* the position is only trusted once it was reported */
        g_ptrActive = 1;
        g_hoverOwn = 1;                /* a menu line under it is selected from now on */
    }
}

/* Whether the pointer is over the screen rectangle the map's SAVE GAME mark was drawn in. */
static int save_mark_under_pointer(void)
{
    s32 mx, my, mw, mh;

    if (!host_save_button_rect(&mx, &my, &mw, &mh)) return 0;
    return g_ptrX >= mx && g_ptrX < mx + mw && g_ptrY >= my && g_ptrY < my + mh;
}

static int g_saveLog;
static save_ui g_saveUi;           /* the save-slot picker (src\host\save_ui.c) */
static int s_markHover;            /* the pointer is over the SAVE GAME mark */
static int s_markClick;            /* a click on the mark waits for the map's own tail */
static u32 s_markClickFrame;       /* ... the frame it was reported in */
static int s_saveCommit;           /* a slot was chosen: the map's save path runs next */
static int s_clickHeld;            /* the click that closed the picker is still down */
static int s_fakeView;             /* the map's own words were replaced for a click */
static s32 s_trueOrgX, s_trueOrgY; /* ... the picture offset before that */

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
 * before the test - so none of it reaches the screen; the engine then takes its own save path
 * (clear DAT_00026886, end the map scene, and the world loop's session end + save). If a queued
 * panel opens in the tail instead and the test is skipped, the offset is put back at the next map
 * update, before that one is drawn. */
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

/* Runs at FUN_00003B1E's entry, i.e. once per map update, right before the cursor is moved. */
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
        /* The SAVE GAME mark owns the pointer while it is over it. Pushing past the travel window
         * used to scroll the picture, which carried the mark away from the pointer, so the mark
         * holds the window still: the cursor stops inside it exactly as at any other edge, and a
         * held fire is the mark's own click (save_mark_click). */
        if (x < MAP_CUR_MIN) x = MAP_CUR_MIN; else if (x > MAP_CUR_MAXX) x = MAP_CUR_MAXX;
        if (y < MAP_CUR_MIN) y = MAP_CUR_MIN; else if (y > maxY) y = maxY;
    }
    else
    {
        /* Pushed past the travel window: the cursor stops at the edge it hit and the picture moves
         * under it. Back inside, it just follows the pointer again. */
        if (x < MAP_CUR_MIN)       { sx = -MAP_SCROLL; x = MAP_CUR_MIN; }
        else if (x > MAP_CUR_MAXX) { sx =  MAP_SCROLL; x = MAP_CUR_MAXX; }
        if (y < MAP_CUR_MIN)       { sy = -MAP_SCROLL; y = MAP_CUR_MIN; }
        else if (y > maxY)         { sy =  MAP_SCROLL; y = maxY; }
    }

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

/* --- the phone book's cursor (a port feature) ------------------------------------------------
 * "Make a Call" (FUN_000064e2) shows the phone book and puts its arrow (AROW) on the entry list.
 * The original moves it with the stick, in the scene's own loop: the position lives in two stack
 * locals of the scene, and every iteration
 *     0x65a4..0x65b8   x,y += axis * speed     (0x26892/0x26894, what the ClockVBI decoded)
 *     0x65bc..0x65f4   clamps to x 0x40..0xaa, y 0x97..0xce (seven rows, 8 px apart)
 *     0x6638..0x6646   reads the row under it: (y - 0x97) / 8 is the entry fire picks
 * and ends by presenting the frame through FUN_00005fbe (0x662e; its return address 0x6632 is what
 * tells the phone's loop from FUN_00005fe0's own calls to the same routine).
 *
 * That call is the seam: the pointer pins x,y there, so the next iteration clamps, draws and reads
 * the pointer's row - hovering a line and clicking calls that number, like the room menus. The
 * stick is left idle for the reason the map's cursor does it: the engine adds its axes to the
 * cursor, and this update's movement is the pointer's.
 *
 * The two words are A5-relative because the scene keeps them in its frame. The pointer gets the
 * map cursor's hot spot 0x11/0x12: AROW is drawn that far up-left of the point the scene keeps,
 * so the arrow's tip sits under the mouse.
 *
 * FUN_00005fbe, its return address in the phone's cursor loop are rows of the seam table
 * (src\host\seams.c); the two stack offsets and the scene's clamps are the same in both builds. */
#define PHONE_CUR_X      0x0Eu         /* word, A5-0x0e: the arrow's x                      */
#define PHONE_CUR_Y      0x10u         /* word, A5-0x10: ... and y                          */
#define PHONE_MIN_X      0x40          /* the scene's own clamps, from 0x65bc..0x65ec       */
#define PHONE_MAX_X      0xAA
#define PHONE_MIN_Y      0x97
#define PHONE_MAX_Y      0xCE

static u32 g_phoneFrame;               /* last frame the phone's cursor loop presented */

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

/* --- the pointer on a room screen, and the menu line under it (port features) ----------------
 * The original has no mouse at all: a room is walked and its action list ("Go to Map", "Answer the
 * Door", ...) is chosen with the stick. The port shows the situation map's arrow under the mouse on
 * every room screen, and a line of a text menu under it is selected by hovering over it.
 *
 * Three seams do it, all through rc_entryHook (the front end only sees the translated stream):
 *
 *   FUN_00005eac / FUN_00005824  draw and update a location view, so "this is a room screen" -
 *                                the arrow is shown there and nowhere else (the intro, the flight
 *                                and the minigames never call them);
 *   FUN_00004d76                 draws one line of a text menu (text, x, y, pen, count). Each line
 *                                is recorded with its screen rectangle and the menu entry it
 *                                belongs to - the caller's loop counter, so wrapped lines and
 *                                hidden entries keep the right number;
 *   FUN_0001d1da                 flips the menu's two bitmaps at the end of a draw pass. That is
 *                                where the pointer's choice becomes the engine's own selection.
 *
 * Neither menu keeps its selection in a global: FUN_0000247a (the action list) and FUN_00002b7c
 * (Look North/South/East/West) hold it in a stack local and add the stick to it once per pass.
 * The pointer therefore writes that local, in the frame of the menu its return address names, at
 * the flip - exactly what a Down press does, without the per-pass ramp. The highlighted pen cannot
 * be used to find the selection: "Answer the Door" and the door/external entries blink their pen
 * between passes whether they are selected or not.
 *
 * Nothing here runs in a measurement: rc_entryHook is installed only when the pointer is armed
 * (a played game or --mouse), and the arrow itself is drawn on top of the presented picture, never
 * into the machine's memory.
 *
 * The five code points are rows of the seam table (src\host\seams.c). The stack offsets and the
 * selection/entry locals are the same in both builds. */

/* The selection and the entry loop counter, read from each menu's own frame:
 *   FUN_0000247a  link.w A5,-0x9a:  selection (local_a) at -0x6,  entry (local_6) at -0x2
 *   FUN_00002b7c  link.w A5,-0x0c:  selection (local_8) at -0x4,  entry (local_c) at -0x8
 * A drawn line is filed under the entry its loop counter held, so the pointer writes a value the
 * menu's own array indexes (the hidden entries are simply never drawn, and a wrapped line repeats
 * its entry). */

#define HOST_LINE_MAX 24
typedef struct
{
    s16 x0, x1, top, h;            /* the line's screen rectangle */
    s16 entry;                     /* the menu entry that drew it */
    u8  menu;                      /* 1 = action list, 2 = Look ... */
} host_text_line;

static host_text_line g_line[HOST_LINE_MAX];
static int g_lineCount;
static u32 g_roomFrame;            /* last frame a location view was drawn or updated */
static u32 g_menuFrame;            /* last frame a text menu flipped */
static int g_hoverLog;             /* --hoverlog: the lines recorded and what the pointer picks */
static int g_cameraLog;            /* --cameralog: the hospital camera, one line per update */
static int g_saveLog;              /* --savelog: the map's SAVE GAME mark, one line per placement */
static int s_ptrShown;             /* --hoverlog: the last reported pointer visibility */

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
        printf("recomp: line menu %d entry %d at %d..%d x %d..%d (frame %lu)\n", (int)menu,
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
                    printf("recomp: hover %d,%d -> entry %d of menu %d (was %d) at frame %lu\n",
                           (int)g_ptrX, (int)g_ptrY, (int)g_line[hover].entry, menu, (int)was,
                           (unsigned long)m->frame);
            }
        }
    }
    g_lineCount = 0;
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
 * their own mark under the pointer (the game's cursor, the crosshair, the extinguisher), so it
 * stays hidden there. */
static void pointer_present(rt_machine *m)
{
    int room, menu, map, phone, show;

    if (!g_portArm || !g_ptrKnown) { s_ptrVisible = 0; rt_pointer_hidden(); return; }
    /* The save picker is a pointer screen: its arrow is drawn over the popup by save_ui_draw. */
    if (g_saveUi.open) { s_ptrVisible = 1; rt_pointer_at(g_ptrX, g_ptrY); return; }
    room = g_roomFrame != 0 && m->frame - g_roomFrame <= MAP_IDLE_FRAMES;
    menu = g_menuFrame != 0 && m->frame - g_menuFrame <= MAP_IDLE_FRAMES;
    map  = g_mapFrame != 0 && m->frame - g_mapFrame <= MAP_IDLE_FRAMES;
    phone = g_phoneFrame != 0 && m->frame - g_phoneFrame <= MAP_IDLE_FRAMES;
    show = (room || menu) && !map && !phone && !aim_live(m);
    s_ptrVisible = show;
    if (show) rt_pointer_at(g_ptrX, g_ptrY);
    else rt_pointer_hidden();
    if (g_hoverLog && show && s_ptrShown != 1)
    {
        s_ptrShown = 1;
        printf("recomp: pointer shown at %d,%d on a room screen (frame %lu)\n", (int)g_ptrX,
               (int)g_ptrY, (unsigned long)m->frame);
    }
    else if (g_hoverLog && !show) s_ptrShown = 0;
}

/* --- the aiming crosshair of the giant-ant fight (a port feature) ----------------------------
 * The fight is FUN_00007934: it runs once per update while the chapter is up, moves the pistol
 * with the stick (FUN_000084e4), fires (FUN_000086a0) and draws the ant's antennas and tests the
 * shots against them (FUN_0000823a). The aim is the word pair 0x29AE0/0x29AE2 - the pistol's
 * position on screen - and the point a shot is tested at is that pair 0x1b left and 0x3a up:
 * FUN_000086a0 stores it in 0x29AF2/0x29AFC at 0x87b0, and FUN_0000823a loops over the antennas
 * comparing it with their screen rectangles. The original draws no aiming aid, so the port marks
 * that point with its own picture.
 *
 * The seam is two halves, both through rc_entryHook and the frame boundary:
 *   FUN_00007934's entry   the fight is running in this frame (g_antFrame);
 *   the frame boundary     the aim words are read and the crosshair placed, *before* the vblank's
 *                          present composes the overlay - so the mark is the point the engine will
 *                          read on the next trigger pull, which is also the position the pistol
 *                          was last drawn at.
 * Nothing here runs in a measurement: the hook and the overlay are armed only when the game is
 * being played (or with --mouse, the headless form of it) and the crosshair itself is drawn on
 * top of the presented picture, never into the machine's memory.
 *
 * FUN_00007934 and the aim words are rows of the seam table (src\host\seams.c).
 *
 * The add-on adds a second shooting scene the 1989 game does not have: the room action "Fight Ant
 * Head" (FUN_0000D534) keeps the pistol in the same aim words and tests a shot at the same offset
 * -0x1b/-0x3a (FUN_0000CF4E at 0xd00c/0xd01e), so one crosshair serves both. Only the entry points
 * differ: the scene's per-update script FUN_0000CA1A and the routine that ramps and draws its
 * pistol, FUN_0000CF24. They are seam rows too, 0 in the 1989 build. */
#define ANT_SHOT_DX    (-0x1B)     /* where FUN_000086a0 tests a shot, relative to the aim */
#define ANT_SHOT_DY    (-0x3A)
/* FUN_00007934 runs every update; this many frames without it means the fight is over (or is
 * holding a panel that waits for the button), and the mark has nothing left to show. */
#define ANT_IDLE_FRAMES 10

static u32 g_antFrame;             /* last frame the giant-ant fight updated */
static u32 g_antHeadFrame;         /* last frame "Fight Ant Head" updated (the add-on only) */

/* 1 while either shooting scene is running: they share the aim, the shot offset and therefore the
 * crosshair. */
static int crosshair_live(rt_machine *m)
{
    return (g_antFrame != 0 && m->frame - g_antFrame <= ANT_IDLE_FRAMES) ||
           (g_antHeadFrame != 0 && m->frame - g_antHeadFrame <= ANT_IDLE_FRAMES);
}

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

/* --- the gun and the extinguisher, moved with the pointer (port features) --------------------
 * The original aims its minigames with the stick, and they read it the same way:
 * FUN_00011bf0 - called at the top of every update - decodes JOY0DAT into DAT_00024A80/0x24A82
 * (+1/0/-1 per axis) and /FIRE into DAT_00024A84, and both scenes keep their aim in the word pair
 * DAT_00029AE0/0x29AE2:
 *
 *   the giant-ant fight   FUN_000084E4 ramps the axes into the acceleration DAT_00029AE4/0x29AE6
 *                         (clamped to +/-8, eased near the screen's edges) and adds it to the aim;
 *                         FUN_000086A0 fires before that, storing the point it tests at as the aim
 *                         0x1b left and 0x3a up - the point the port's crosshair marks;
 *   the fire game         FUN_0000B97C is the same code over the same words, and the extinguisher
 *                         sprite is drawn at the aim, which is where FUN_0000BADE's spray starts;
 *   "Fight Ant Head"      the add-on's variant (docs\antheads.md): FUN_0000CA1A moves and draws the
 *                         pistol with FUN_0000CF24 (which ramps through the same FUN_00009DE8) and
 *                         FUN_0000CF4E stores each shot 0x1b left and 0x3a up of the aim, exactly
 *                         as the giant-ant fight does.
 *
 * So the pointer writes the aim itself, at the entry of those routines: after FUN_00011BF0 has
 * read the stick (which is why it is not the scene's entry - that is where the stick is read) and
 * before the shot, the spray or the drawing. The axes and the acceleration are cleared with it, so
 * the engine's own ramp cannot pull the aim away from the pointer while it owns the gun.
 *
 * What the pointer *means* differs, because the two aims are not the same thing:
 *
 *   the fight        the aim is the pistol, and the scene acts 0x1b left and 0x3a up of it, so the
 *                    pointer is that point - the crosshair the port draws sits under the mouse;
 *   "Fight Ant Head" the same, and its own routine draws the pistol at the aim and tests each shot
 *                    at the same offset - so the pointer writes the aim at FUN_0000CF24's entry,
 *                    the routine that runs (and ramps) before the pistol is drawn and the shot is
 *                    tested;
 *   the fire game    the aim is the hand itself (the sprite is drawn there and the spray starts
 *                    there), and FUN_0000B97C only accelerates it *inside* a travel rectangle:
 *                    x 0x28..0x12c and y 0xa5..0xf0, damped outside, which is where a held stick
 *                    comes to rest (measured: x 28..311, y 149..251 including the ramp's overshoot).
 *                    A raw screen position is the wrong control there: it aims the hand above the
 *                    room (the floating hand) and cannot reach the low flames the stick reaches.
 *                    The pointer's screen therefore spans that rectangle - every position the
 *                    stick can reach and no other - so the mouse stops where the keyboard stops.
 *
 * A held direction key still moves the gun - the pointer takes over again the next time it moves -
 * the rule the map's cursor follows; and a pointer that was put down before the scene started
 * leaves the engine's own aim alone (g_aimOwn), exactly as such a pointer leaves the map's cursor
 * where the game put it. Nothing here runs in a measurement: rc_entryHook is installed only while
 * the game is being played (or for a --mouse test run). The two code points and the six aim words
 * are rows of the seam table (src\host\seams.c); the fire game's travel rectangle is the fire
 * game's own code and is the same in both builds (the add-on has no fire game at all, so its two
 * seams are 0 and the spray seam is never installed there). */
/* The fire game's travel rectangle, from the stops in FUN_0000B97C (0x28/0x12c at 0xb986..0xb9b0,
 * 0xa5/0xf0 at 0xb9ce..0xb9f8): inside it a held stick accelerates the aim, outside it the
 * acceleration is damped instead, so these are the positions the hand comes to rest at. */
#define FIRE_MIN_X    0x0028
#define FIRE_MAX_X    0x012C
#define FIRE_MIN_Y    0x00A5
#define FIRE_MAX_Y    0x00F0
/* Both scenes call their aim routine every update, so this many frames without it means the scene
 * is gone (aiming at the narration afterwards would only write a dead word). */
#define FIRE_IDLE_FRAMES 10

static int g_aimOwn;               /* the pointer owns the aim of the scene that is up */
static u32 g_fireFrame;            /* last frame the fire game's extinguisher moved  */

/* The pointer owns the aim only while one of the scenes is running, and only after it moved
 * while that scene was up. */
static int aim_live(rt_machine *m)
{
    return crosshair_live(m) ||
           (g_fireFrame != 0 && m->frame - g_fireFrame <= FIRE_IDLE_FRAMES);
}

/* Once per frame, at the frame boundary: the pointer may take the gun, a held direction takes it
 * back. `moved` is a pointer movement reported during this frame (the platform's, or --mouse's). */
static void aim_input(rt_machine *m, int moved, int stickHeld)
{
    int was = g_aimOwn;

    if (!aim_live(m)) { g_aimOwn = 0; return; }
    if (moved) g_aimOwn = 1;
    if (stickHeld) g_aimOwn = 0;
    if (g_hoverLog && was != g_aimOwn)
        printf("recomp: %s aims at frame %lu\n", g_aimOwn ? "the pointer" : "the stick",
               (unsigned long)m->frame);
}

/* The aim is the pointer's: the axes and the acceleration are cleared so the engine's ramp cannot
 * pull it away, and the two words are written. */
static void aim_write(rt_machine *m, s32 x, s32 y)
{
    rt_write16(&m->mem, RC_ADDR(AIM_AXIS_X), 0);
    rt_write16(&m->mem, RC_ADDR(AIM_AXIS_Y), 0);
    rt_write16(&m->mem, RC_ADDR(AIM_ACC_X), 0);
    rt_write16(&m->mem, RC_ADDR(AIM_ACC_Y), 0);
    rt_write16(&m->mem, RC_ADDR(AIM_X), (u16)x);
    rt_write16(&m->mem, RC_ADDR(AIM_Y), (u16)y);
}

/* `v` (0..vmax, the pointer's travel) mapped onto lo..hi (the scene's own travel). */
static s32 aim_span(s32 v, s32 vmax, s32 lo, s32 hi)
{
    if (v < 0) v = 0;
    if (v > vmax) v = vmax;
    return lo + (v * (hi - lo)) / vmax;
}

/* Runs at FUN_000086a0's entry (and at FUN_0000cf24's in the add-on's "Fight Ant Head"): the
 * pointer is the shot point, so the aim - the pistol - is that point 0x1b right and 0x3a down, and
 * the port's crosshair lands under the mouse. */
static void aim_shot(rt_machine *m)
{
    if (!g_aimOwn || !g_ptrKnown) return;
    aim_write(m, (s32)g_ptrX - ANT_SHOT_DX, (s32)g_ptrY - ANT_SHOT_DY);
}

/* Runs at FUN_0000b97c's entry: the pointer's screen spans the hand's own travel rectangle, so the
 * mouse can put the hand exactly where the stick can and no further. */
static void aim_spray(rt_machine *m)
{
    if (!g_aimOwn || !g_ptrKnown) return;
    aim_write(m, aim_span(g_ptrX, SCREEN_W - 1, FIRE_MIN_X, FIRE_MAX_X),
                 aim_span(g_ptrY, SCREEN_H - 1, FIRE_MIN_Y, FIRE_MAX_Y));
}

/* --- the loading line (a port feature) ------------------------------------------------------
 * The engine loads a screen before it can show it, and on the original that is a wait with the
 * previous picture still on the screen: the bank opener reads the resource files, Sms_Load unpacks
 * a picture bank's RLE tiles (Sms_Unpack) and FUN_000205e6 decrunches the LZ banks (FUN_0002069c).
 * That work can run for hundreds of frames - often inside one call, so the engine dispatching
 * nothing - and the view keeps showing the old picture until the new scene's first update. Measured
 * on ref\inputs\flight-crash-hospital-room.txt: the map leaves at frame 1409, the last load
 * routine runs at 1680 and the room appears at 1683; the 87-frame map load after a room is the
 * same shape (frames 1127..1200 of ref\inputs\map-pointer.txt).
 *
 * A frame is load work when one of those routines was entered during it, or when the instruction
 * the frame boundary lands on is inside one (a long decode never dispatches, so the entry hook
 * alone misses most of it). The line appears after LOAD_SHOW_FRAMES of work - a short asset load
 * must not flash - and stays through the gaps between one resource and the next (LOAD_IDLE_FRAMES),
 * because those gaps are the loader looking the next asset up, not the end of the transition.
 *
 * The engine keeps presenting the unchanged picture through the load, so the line is just the
 * runtime's OSD text: it is armed here, at the frame boundary before the present, and re-armed
 * every frame the load runs. Nothing of the machine is written, and a measurement run never
 * installs the seam (g_portArm).
 */
/* The load-only code's ranges are per program: the SMS loader and its unpacker, the bank directory
 * search, the bank opener, the asset lookup inside a bank, the read helper, and the LZ decruncher's
 * state machine and decoder (src\host\seams.c carries both builds' ranges, measured from the same
 * function boundaries in re\decomp_all\dshell\ALL.c). */
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
 * seconds before the loader's own detection reaches LOAD_SHOW_FRAMES - or is not loader code at all
 * yet. The line is up at once instead of a few seconds later, and it gives way again as soon as
 * the load it waited for has run and ended. */
void host_loading_hold(rt_machine *m)
{
    if (!g_portArm) return;
    g_loadHold = LOAD_HOLD_FRAMES;
    g_loadHoldSeen = 0;
    rt_osd_text(m, rt_lang_text("Loading"), 2);
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
        printf("recomp: %s (frame %lu)\n", up ? "loading" : "loading done",
               (unsigned long)m->frame);
    }
    if (!up) return;

    /* A slot message has the corner while it is up; the load line takes it back when that
     * expires. Re-arming every frame keeps it up for as long as the load runs. */
    if (m->gfx.osdText[0] == 0 || (s32)(m->gfx.osdTextUntil - m->frame) <= 0 ||
        strcmp(m->gfx.osdText, rt_lang_text("Loading")) == 0)
        rt_osd_text(m, rt_lang_text("Loading"), 2);
}

/* --- the hospital escape's camera (a port feature, src\host\hospital_camera.c) ----------------
 * The original lets the walking character wander 40 px left or right of the middle of the window
 * (30 px up or down) before the picture starts to follow it; the port keeps it in the middle and
 * the picture scrolls for as long as it walks. The seam is the hospital's own actor draw, which
 * its loop calls right after the walk has moved the player (0x18298) and before the vblank that
 * applies the scroll request FUN_000189aa wrote; host_hospital_camera_entry answers for that
 * entry and writes only DAT_000297f2. Nothing here runs in a measurement: rc_entryHook is
 * installed in a played run only (g_portArm). */

/* --- the map's SAVE GAME mark (a port feature, src\host\save_button.c) -----------------------
 * The map's own script puts the mark on the map picture's top-left corner, so it scrolls with
 * the picture; the port pins it 2 px in from the screen's bottom-right corner at the one blit the
 * MovE renderer makes for it. rc_entryHook is installed in a played run only (g_portArm), so a
 * measurement still sees the original's placement. */

/* rc_entryHook: everything the port's per-screen seams need is reached from inside the translated
 * stream (the scene runner's `jsr (A0)` never returns to the front end's own loop), so this is the
 * seam. */
static void host_entry(cpu_t *c, rt_machine *m, u32 pc)
{
    host_lang_entry(c, m, pc);            /* [GAME] language: the translated string, if there is one */
    if (host_cheat_entry(m, pc)) return;
    if (load_pc(pc)) { g_loadSeen = m->frame; return; }
    if (host_hospital_camera_entry(m, pc)) return;
    if (host_save_button_entry(c, m, pc)) return;
    if (pc == RC_ADDR(TEXT_LINE_PC)) { line_record(c, m); return; }
    if (pc == RC_ADDR(MENU_FLIP_PC)) { menu_flip(c, m); return; }
    if (pc == RC_ADDR(MAP_SCRIPT_PC)) { map_pointer(m); return; }
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

/* --cheat <frame>: the Ctrl+W chord at a frame boundary, once. The request itself is consumed by
 * the next minigame update, exactly as the key's is. */
static void host_cheat_frame(rt_machine *m)
{
    if (g_cheatFrame != 0 && !g_cheatDone && m->frame >= g_cheatFrame)
    {
        g_cheatDone = 1;
        printf("recomp: Ctrl+W at frame %lu\n", (unsigned long)m->frame);
        host_cheat_force(m);
    }
}

/* The title's fifth button, and --titlekey 15: the add-on is playable when its own tree - `ant1..3\`
 * and `ant\code\dshell4k\dshell.img` - is in the data folder (src\runtime\assets.c extracts it when
 * the player's disks carry it), and this front end links both tables, so it can always boot it.
 * The MS-DOS front end asks the same question of its own layout (docs\antheads.md, Phase 8). */
int host_title_addon(rt_machine *m)
{
    return rt_assets_addon_ready(m != 0 ? m->dataDir : 0, RT_ASSETS_WINDOWS) ? 1 : 0;
}

/* The save files this machine recognises. The slots are shared by the two games, so a save the
 * other one wrote must be visible - and bootable - from this one: the running program's own file
 * always, the other game's when it can be played from this data folder (the same gate the menu's
 * fifth button asks, so a slot can never offer a game this front end could not boot). The name and
 * size are the descriptors' own (docs\antheads.md, Phase 7). */
static void host_saves(rt_machine *m)
{
    const int ant = g_program == HOST_PROGRAM_ANT;
    const int otherPlayable = ant || host_title_addon(m);

    rt_save_register(m, ant ? RT_SAVE_ANTHEADS : RT_SAVE_ORIGINAL,
                     rc_active->saveName, rc_active->saveBytes);
    if (otherPlayable)
    {
        const rc_program *other = host_program(ant ? HOST_PROGRAM_ORIGINAL : HOST_PROGRAM_ANT);

        if (other != 0)
            rt_save_register(m, ant ? RT_SAVE_ORIGINAL : RT_SAVE_ANTHEADS,
                             other->saveName, other->saveBytes);
    }
}

/* The title menu runs its own loop, so the frame hooks above do not run while it is up: a --mouse
 * script reaches its buttons through this (see title.h). A windowed game has no script - and a
 * player's own pointer arrives through plat_pump - so the pitch is the platform's. */
int host_title_pointer(rt_machine *m, input_state *in)
{
    if (g_ptrScriptCount == 0) return 0;
    pointer_script_tick(m);
    if (!g_ptrKnown) {
        in->mouse_present = 0;                  /* the script's first position is not due yet */
        return 1;
    }
    in->mouse_present = 1;
    in->mouse_x = g_ptrX;
    in->mouse_y = g_ptrY;
    in->mouse_left = g_ptrButton ? 1 : 0;
    in->mouse_left_pressed = (u8)(g_ptrButton && !g_ptrButtonPrev);
    in->mouse_moved = 0;
    g_ptrButtonPrev = g_ptrButton;
    return 1;
}

/* A headless --esc run has no window and therefore no host_input; this hook is the frame boundary
 * it needs. It is the same seam host_input checks. */
static void host_esc_frame(rt_machine *m)
{
    host_cheat_frame(m);
    if (g_escFrame != 0 && !g_escDone && m->frame >= g_escFrame)
    {
        g_escDone = 1;
        printf("recomp: escape at frame %lu\n", (unsigned long)m->frame);
        host_title_escape(m);
    }
}

static void host_input(rt_machine *m)
{
    input_state in;
    u16 joy;

    /* --esc <frame>: the same path the Escape key takes (a test seam, like --call). */
    if (g_escFrame != 0 && !g_escDone && m->frame >= g_escFrame)
    {
        g_escDone = 1;
        printf("recomp: escape at frame %lu\n", (unsigned long)m->frame);
        host_title_escape(m);
    }
    if (!plat_pump(&in)) m->stop = 1;
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
    /* Alt+Enter, on every screen the game itself puts up: the window switches now and the ini keeps
     * the choice for the next start. The title's own loop asks the same helper (title.c). */
    if (in.pressed[KEY_FULLSCREEN])
    {
        int fs = host_fullscreen_toggle((int)plat_fullscreen());
        if (fs >= 0)
            printf("recomp: fullscreen %s (Alt+Enter, frame %lu)\n", fs ? "on" : "off",
                   (unsigned long)m->frame);
    }
    host_cheat_input(m, &in);
    /* Left Ctrl+T freezes the game's clock, on the situation map only: the map's own script ran
     * within MAP_IDLE_FRAMES, which is how the front end knows the screen (a room, the phone, the
     * intro and the minigames have their own scripts and leave it stale). */
    host_time_freeze_input(m, &in,
                           g_mapFrame != 0 && m->frame - g_mapFrame <= MAP_IDLE_FRAMES);
    host_cheat_frame(m);
    joy = g_joyDirs[(in.down[KEY_UP]    ? 1u : 0u) | (in.down[KEY_DOWN]  ? 2u : 0u) |
                    (in.down[KEY_LEFT]  ? 4u : 0u) | (in.down[KEY_RIGHT] ? 8u : 0u)];
    if (g_portArm)
    {
        int moved, click;
        /* A scripted stick (--input) counts like a held direction key: the pointer yields to it. */
        if (g_ptrScriptCount > 0) moved = pointer_script_tick(m) > 0;
        else { pointer_input(&in, joy != 0 || m->joy0 != 0); moved = in.mouse_moved != 0; }
        /* The left button's press edge: the platform reports it, and a --mouse script has it as
         * the level change. Only a click opens the picker or chooses a line. */
        if (g_ptrScriptCount > 0)
        {
            click = g_ptrButton && !g_ptrButtonPrev;
            g_ptrButtonPrev = g_ptrButton;
        }
        else
        {
            click = in.mouse_left_pressed != 0;
            g_ptrButtonPrev = 0;
        }
        if (s_clickHeld && !in.mouse_left && !g_ptrButton) s_clickHeld = 0;
        save_ui_frame(m, click);
        if (click) save_click_note(m);
        save_ui_watch(m);
        /* The aiming scenes (the giant-ant fight, the fire game and the add-on's "Fight Ant Head")
         * take the aim from the pointer once it moved over them; everywhere else this latch stays
         * clear. */
        aim_input(m, moved, joy != 0 || m->joy0 != 0);
        /* Only the map's script and the phone's loop consume the pointer state: anywhere else it
         * owns nothing, so the next screen starts with the game's own placement until the pointer
         * moves again. */
        if (m->frame > g_mapFrame + MAP_IDLE_FRAMES && m->frame > g_phoneFrame + MAP_IDLE_FRAMES)
            g_ptrActive = 0;
        pointer_present(m);
    }
    if (input_active())
    {
        /* A frame-indexed script owns fire and the joystick; the keyboard only quits. */
        if (save_owns_input(m)) { m->fireDown = 0; m->joy0 = 0; }
        plat_frame_sync();
        return;
    }
    /* Save slot: F1..F4 pick one, F5 steps to the next. The engine writes its save into
     * DSAVE:, which the runtime maps onto saves\slot<N>, so the only feedback is the overlay.
     * The picker's own choice owns the slot while it is up. */
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
            sprintf(msg, rt_lang_text("Save Slot - %d%s"), m->saveSlot,
                    rt_save_slot_empty(m, m->saveSlot) ? rt_lang_text(" (Empty)") : "");
            rt_osd_text(m, msg, EMU_OSD_FRAMES);
            printf("recomp: %s (frame %lu)\n", msg, (unsigned long)m->frame);
        }
    }
    m->fireDown = (u8)((in.down[KEY_FIRE] || in.mouse_left || g_ptrButton) ? 1u : 0u);
    m->joy0 = joy;
    if (save_owns_input(m)) { m->fireDown = 0; m->joy0 = 0; joy = 0; }
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
    int moved = 0, click = 0;

    if (!g_portArm) return;
    host_cheat_frame(m);
    if (g_ptrScriptCount > 0)
    {
        moved = pointer_script_tick(m) > 0;
        click = g_ptrButton && !g_ptrButtonPrev;
        g_ptrButtonPrev = g_ptrButton;
    }
    if (s_clickHeld && !g_ptrButton) s_clickHeld = 0;
    /* A scripted click is /FIRE, the same level the platform's button is; the script's own fire
     * level is put back when the button is released, so the two compose. */
    m->fireDown = (u8)((g_ptrButton || input_fire()) ? 1u : 0u);
    if (m->joy0 != 0) { g_ptrActive = 0; g_hoverOwn = 0; }   /* a scripted stick wins */
    if (m->frame > g_mapFrame + MAP_IDLE_FRAMES && m->frame > g_phoneFrame + MAP_IDLE_FRAMES)
        g_ptrActive = 0;
    save_ui_frame(m, click);
    if (click) save_click_note(m);
    save_ui_watch(m);
    if (save_owns_input(m)) { m->fireDown = 0; m->joy0 = 0; }
    aim_input(m, moved, m->joy0 != 0);
    pointer_present(m);
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

/* The port's overlay at display rate (docs\display-rate.md, phase 2): the OSD line, the save icon,
 * the pointer arrow, the aiming crosshair and the save picker, onto whatever chunky surface the
 * platform hands over. The platform calls this for every display frame it delivers; host_present
 * calls it for a headless --shot/--dump, so both paths show the same overlay.
 *
 * The arrow's *drawn* position moves with the pointer here, at the panel's rate - a mouse reports
 * at 125-1000 Hz and the screen would otherwise show 50 of those samples a second. What the arrow
 * *means* (the menu line under it, the slot it would click) stays where the frame boundary put it,
 * because that writes guest state and the guest samples it once per frame. While the picker is up
 * its own arrow is drawn from its 50 Hz state, so the lead is suspended: two arrows a frame apart
 * would be two arrows. */
static void host_overlay_draw(u8 *dst, u32 stride, int w, int h)
{
    rt_surface s;
    s16 px, py;

    /* Only while the game's own picture is what the platform holds: the title and the farewell own
     * the screen (and their own pointer), and m->on_present is 0 for exactly those frames. */
    if (g_m == 0 || dst == 0 || g_m->on_present != host_present) return;
    if (g_window && g_portArm && s_ptrVisible && !g_saveUi.open &&
        plat_pointer_position(&px, &py))
        rt_pointer_at(px, py);
    s.dst = dst;
    s.stride = stride;
    s.w = w;
    s.h = h;
    rt_overlay_draw(g_m, &s);
    save_ui_draw(g_m, &g_saveUi, &s);
    /* The overlay's own pens (224..255) are the colours it has just drawn with. They go to the
     * platform's *overlay* table, not the picture's: a presenter that builds a true-colour picture
     * resolves each layer through its own table, so an overlay pen no longer paints picture pixels
     * that share its index (docs\display-rate.md, phase 3). rgb is the *range's* first entry
     * (platform.h), so the table is handed over from EMU_OVERLAY_PEN_FIRST - passing its base
     * loaded the game's pens 0..31 into 224..255 instead, which is what painted the OSD line and
     * the arrow in the scene's colours. */
    plat_set_overlay_palette(EMU_OVERLAY_PEN_FIRST, PAL_ENTRIES - EMU_OVERLAY_PEN_FIRST,
                             rt_gfx_palette() + EMU_OVERLAY_PEN_FIRST * 3);
}

static void host_present(rt_machine *m)
{
    const u8 *fb = rt_gfx_framebuffer();
    const u8 *pal = rt_gfx_palette();
    int w = rt_gfx_width(), h = rt_gfx_height();
    u8 *dst;
    u32 stride;
    int x, y, cw;
    int capture = shotPath != 0 ||
                  (dumpPrefix != 0 && dumpIndex < dumpCount && m->frame >= dumpFrom);

    /* --osd keeps a line (or "save" for the icon) up, so a headless --shot can be checked by
     * pixel instead of by eye. Armed here so it works without a window. */
    if (osdText != 0)
    {
        if (strcmp(osdText, "save") == 0) rt_osd_icon(m, EMU_OSD_FRAMES);
        else rt_osd_text(m, osdText, EMU_OSD_FRAMES);
    }
    if (g_window)
    {
        /* The picture is the screen the copper list programs - 320x200, or 368x216 while the
         * chicken race's narration page is up, because that page lays its text out across the
         * overscan. The platform takes it at that size, so every column and row reaches the
         * screen; sampling it into the 320x200 mode instead dropped one column in eight, which
         * garbled the letters. It is handed over *without* the port's overlay: the platform draws
         * that per display frame, on top of this picture (docs\display-rate.md). */
        stride = plat_set_framebuffer_size((u32)w, (u32)h);
        dst = plat_framebuffer();
        if (stride != 0)
        {
            for (y = 0; y < h; y++)
                memcpy(dst + (u32)y * stride, fb + (u32)y * EMU_FB_MAX_W, (size_t)w);
        }
        else
        {   /* The video mode cannot change (DOS: VGA mode 13h is 320x200): fit it into it. */
            cw = w < SCREEN_W ? w : SCREEN_W;
            for (y = 0; y < SCREEN_H; y++)
            {
                int sy = (h > SCREEN_H) ? (y * h) / SCREEN_H : y;
                const u8 *row;
                if (sy >= h) break;
                row = fb + (u32)sy * EMU_FB_MAX_W;
                if (w > SCREEN_W)
                {
                    for (x = 0; x < SCREEN_W; x++)
                        dst[(u32)y * SCREEN_W + (u32)x] = row[(u32)(x * w) / SCREEN_W];
                }
                else
                    memcpy(dst + (u32)y * SCREEN_W, row, (size_t)cw);
            }
        }
        plat_set_palette(0, 256, pal);
    }
    /* The overlay is composed into the picture itself where that is the only place it is drawn -
     * a headless run - and, with a window, only for a capture: --shot and --dump are one raster per
     * composed frame and must contain what the screen showed, as they always have. Drawing into the
     * picture invalidates the plane comparison, so the next present rebuilds those pixels; a
     * headless run therefore only does it when the picker is up, because the OSD, the arrow and the
     * crosshair were already composed by the runtime inside rt_gfx_present. */
    if ((!g_window && g_saveUi.open) || (g_window && capture))
    {
        u8 *base = rt_overlay_begin();

        if (base != 0) host_overlay_draw(base, EMU_FB_MAX_W, w, h);
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
    if (g_window) plat_present();
    (void)m;
}

int main(int argc, char **argv)
{
    rt_machine m;
    cpu_t c;
    const char *image = 0;
    const char *dataDir = 0;
    const char *diskDir = 0;
    int extractOnly = 0;
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
    u32 audioStall = 0;                    /* --audiostall: make a submission never complete */
    int blitBytePtr = 0;
    int blitGeneric = 0;
    int slot = 1;
    int slotGiven = 0;
    int slotsDump = 0;
    int slotsCheck = 0;
    int displayStat = 0;
    u32 slotsAt = 0;
    const char *busTablePath = 0;
    int titleKey = -1;                     /* --titlekey: take this menu choice on the title */
    const char *langDumpPath = 0;          /* --langdump: the English text a run draws */
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
        /* --displaystat: one line at exit saying what the machine composed and what the panel was
         * delivered (docs\display-rate.md, "A measurement for the claim itself"). */
        if (strcmp(argv[i], "--displaystat") == 0) { displayStat = 1; continue; }
        if (strcmp(argv[i], "--slotsat") == 0 && i + 1 < argc) { slotsAt = (u32)strtoul(argv[++i], 0, 0); continue; }
        if (strcmp(argv[i], "--bustable") == 0 && i + 1 < argc) { busTablePath = argv[++i]; continue; }
        /* --refbus: charge the bus the first, division-per-clock way. The two walkers must agree
         * instruction for instruction, so the same script run with and without this must end on
         * the same --state / --ram bytes (slots.h). */
        if (strcmp(argv[i], "--refbus") == 0) { rt_bus_set_reference(1); continue; }
        /* --refwait: run the translated flag waits instead of rc_wait's native loop (the same
         * three instructions, charged the same way). Both must leave the same --state / --ram
         * bytes at every frame boundary - the reference half of the wait seam. */
        if (strcmp(argv[i], "--refwait") == 0) { rc_waitTranslated = 1; continue; }
        if (strcmp(argv[i], "--audioregs") == 0) { audioRegs = 1; continue; }
        if (strcmp(argv[i], "--window") == 0) { g_window = 1; continue; }
        if (strcmp(argv[i], "--run") == 0) { g_window = 1; runForever = 1; continue; }
        if (strcmp(argv[i], "--audiodump") == 0 && i + 1 < argc) { audioDump = argv[++i]; continue; }
        if (strcmp(argv[i], "--program") == 0 && i + 1 < argc)
        {
            /* ant|antheads selects the add-on; original|0 is the 1989 game (the default). */
            const char *p = argv[++i];
            if (strcmp(p, "ant") == 0 || strcmp(p, "antheads") == 0 || strcmp(p, "1") == 0)
                g_program = HOST_PROGRAM_ANT;
            else if (strcmp(p, "original") == 0 || strcmp(p, "icftd") == 0 || strcmp(p, "0") == 0)
                g_program = HOST_PROGRAM_ORIGINAL;
            else { printf("recomp: --program wants ant or original, not %s\n", p); return 2; }
            continue;
        }
        if (strcmp(argv[i], "--audiostall") == 0 && i + 1 < argc)
        {
            audioStall = (u32)strtoul(argv[++i], 0, 0);
            continue;
        }
        if (strcmp(argv[i], "--doslog") == 0) { dosLog = 1; continue; }
        if (strcmp(argv[i], "--textlog") == 0) { textLog = 1; continue; }
        if (strcmp(argv[i], "--hoverlog") == 0) { g_hoverLog = 1; continue; }
        if (strcmp(argv[i], "--cameralog") == 0) { g_cameraLog = 1; continue; }
        if (strcmp(argv[i], "--savelog") == 0) { g_saveLog = 1; continue; }
        /* --langdump <file>: writes every distinct string the run hands to the engine's text
         * routines, one `<English><TAB>` row each, which is what a translation file is made of
         * (tools\lang-export.ps1 runs this and merges the rows with the data files' prose). */
        if (strcmp(argv[i], "--langdump") == 0 && i + 1 < argc) { langDumpPath = argv[++i]; continue; }
        /* --langkeys <file>: the interface's English vocabulary - the lines the engine draws from
         * its program (menus, place names, boot messages) and the port's own screens, neither of
         * which is in the game's data files - written for tools\lang-export.ps1. Nothing has been
         * set up yet, so it is written here and the program ends: no run, no game data needed. */
        if (strcmp(argv[i], "--langkeys") == 0 && i + 1 < argc) { host_lang_keys(argv[++i]); return 0; }
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
        if (strcmp(argv[i], "--disks") == 0 && i + 1 < argc) { diskDir = argv[++i]; continue; }
        if (strcmp(argv[i], "--extract") == 0) { extractOnly = 1; continue; }
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
        if (strcmp(argv[i], "--srcdiff") == 0) { rt_gfx_srcdiff(1); continue; }
        if (strcmp(argv[i], "--blitlog") == 0)
        {
            blitLog = 1;
            if (i + 1 < argc && argv[i + 1][0] >= '0' && argv[i + 1][0] <= '9') blitLogFrame = (u32)strtoul(argv[++i], 0, 0);
            continue;
        }
        if (strcmp(argv[i], "--byteptr") == 0) { blitBytePtr = 1; continue; }
        if (strcmp(argv[i], "--noblitfix") == 0) { blitBytePtr = 1; continue; }   /* old name */
        /* --genericblit: the general row engine for every blit, the reference the planned copy
         * engines must reproduce (blitter.c, --blitstats in dos_main.c). */
        if (strcmp(argv[i], "--genericblit") == 0) { blitGeneric = 1; continue; }
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
            /* <n>: 0 starts the game from the title, 1..7 start the debug scenes, 8..10 the three
            * endings, 15 the button that plays the add-on. A dev seam like --call, but through the
            * title's own menu - see src\host\title.c. */
            titleKey = (int)strtol(argv[++i], 0, 0);
            if (titleKey < 0) titleKey = 0;
            continue;
        }
        if (strcmp(argv[i], "--esc") == 0 && i + 1 < argc)
        {
            /* <frame>: press Escape at that frame, through the path the key takes (a test seam
            * like --call - it measures the restart that returns to the title). */
            g_escFrame = (u32)strtoul(argv[++i], 0, 0);
            continue;
        }
        if (strcmp(argv[i], "--cheat") == 0 && i + 1 < argc)
        {
            /* <frame>: press Ctrl+W at that frame, through the same request the platform's chord
            * raises (a test seam like --esc - it measures the minigame cheat itself). */
            g_cheatFrame = (u32)strtoul(argv[++i], 0, 0);
            continue;
        }
        if (strcmp(argv[i], "--timefreeze") == 0 && i + 1 < argc)
        {
            /* <frame>[,<frame>...]: press Ctrl+T at each of those frames, through the same toggle
            * the platform's chord raises (a test seam like --cheat - it measures the clock freeze
            * itself). Two frames freeze and unfreeze again. */
            char *p = argv[++i];
            while (*p != 0 && g_freezeCount < HOST_TIME_FREEZE_MAX)
            {
                g_freezeAt[g_freezeCount++] = (u32)strtoul(p, &p, 0);
                if (*p == ',') p++;
                else break;
            }
            continue;
        }
        if (argv[i][0] == '-') { printf("recomp: unknown option %s\n", argv[i]); return 2; }
        if (strchr(argv[i], '\\') || strchr(argv[i], '/') || strchr(argv[i], '.')) image = argv[i];
        else insns = strtol(argv[i], 0, 0);
    }
    if (slotsCheck) return rt_slots_selftest() == 0 ? 0 : 1;

    /* No argument at all is a double-click on the release: play the game (the window decides when
     * to stop), never a measurement. Anything else is the developer's command line. */
    if (argc == 1) { g_window = 1; runForever = 1; }
    /* A run that will show the game's window hides the console window it owns - the black window a
     * double click gives it - before anything is written to it, so the player sees the game and
     * nothing else (see plat_console_hide_own). A run started from a terminal keeps its console. */
    if (g_window) plat_console_hide_own();

    /* The settings file, written with its defaults when this is the first start, and the language
     * it selects - before the first message the player can see and before the program boots. */
    rt_config_ensure();
    host_lang_load();
    if (langDumpPath != 0) { host_lang_dump(langDumpPath); atexit(host_lang_dump_end); }

    /* The data folder, the folder the player's floppy images go in, and the image inside the data
     * folder; all three can be given, and otherwise come from the layout the executable sits in. */
    host_asset_dirs();
    if (dataDir == 0) dataDir = g_exportPath;
    if (diskDir == 0) diskDir = g_disksPath;
    {
        const rc_program *prog = host_program(g_program);
        const char *rel = g_program == HOST_PROGRAM_ANT ? IMAGE_RELATIVE_ANT : IMAGE_RELATIVE;

        if (image == 0)
        {
            if ((int)strlen(dataDir) + (int)strlen(rel) + 1 > (int)sizeof g_imagePath)
            {
                printf("recomp: the data folder path is too long\n");
                return 2;
            }
            sprintf(g_imagePath, "%s%s", dataDir, rel);
            image = g_imagePath;
        }
        /* The table the dispatcher searches, and the save geometry the engine writes with, belong
         * to the build being run; every other constant is the same for both (same load address). */
        rc_active = prog;
    }
    {   /* First start: fill `export\` from the player's `disks\`, or say what is missing. */
        char msg[600];
        if (rt_assets_ensure(dataDir, diskDir, RT_ASSETS_WINDOWS, msg, (u32)sizeof msg) !=
            RT_ASSETS_OK)
        {
            printf("recomp: %s\n", rt_lang_text(msg));
            if (g_window) plat_message("It Came from the Desert", rt_lang_text(msg));
            return 1;
        }
    }
    if (extractOnly) return 0;

    if (insns <= 0) insns = 40000000L;
    if (runForever) insns = 0x7FFFFFF0L;       /* the window decides when to stop */
    /* One rc_call runs a whole translated function, so the limit has to be armed inside the
     * stream too or a run overshoots it by up to a function. */
    if (rc_stopAt <= 0 && !runForever) rc_stopAt = insns;

    if (!rt_init(&m)) { printf("recomp: out of memory\n"); return 1; }
    g_m = &m;
    if (!rt_load_image(&m, base, image)) { printf("recomp: cannot load %s\n", image); rt_shutdown(&m); return 1; }
    host_lang_open(&m);                    /* [GAME] language=xx: the catalog into this machine */
    m.dataDir = dataDir;
    m.saveName = rc_active->saveName;
    m.saveBytes = rc_active->saveBytes;
    /* The program's files come from its own extracted tree: `disk1..3` for the 1989 game,
     * `ant1..3` for the add-on (src\runtime\assets.c extracts both). */
    m.tree = g_program == HOST_PROGRAM_ANT ? "ant" : "disk";
    host_saves(&m);
    /* The narration panel's engine variables belong to the build being run too: the display would
     * otherwise read the add-on's code bytes as colours (docs\antheads.md §6). */
    m.panelFlag = RC_ADDR(PANEL_FLAG);
    m.panelCols = RC_ADDR(PANEL_COLS);
    m.progress = progress;
    m.progressFrom = progressFrom;
    /* --displaystat reports the presenter's own counters, which live behind rt_machine::perfOn
     * (they are what --perf reports on DOS); the timings are plat_pit_now() counts and are 0 on
     * Win32, so only the counts are read. Nothing emulated changes: perfOn gates counting only. */
    if (displayStat) m.perfOn = 1;
    m.blitLog = blitLog;
    m.blitLogFrame = blitLogFrame;
    m.blitBytePtr = blitBytePtr;
    m.blitGeneric = blitGeneric;
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
        sprintf(msg, rt_lang_text("Save Slot - %d%s"), m.saveSlot,
                rt_save_slot_empty(&m, m.saveSlot) ? rt_lang_text(" (Empty)") : "");
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
    m.traceFrom = traceFrom;
    m.traceTo = traceTo;
    m.tickLog = tickLog;
    m.audioLog = audioRegs;
    if (g_window)
    {
        int fs = 0;
        int curtains;
        int ww, wh;
        fs = rt_config_bool("VIDEO", "fullscreen", 1);
        /* The bars beside the picture: the port's border art, or black ([VIDEO] curtains). */
        curtains = rt_config_bool("VIDEO", "curtains", 1);
        /* The window's own size, as the last run left it (the platform has it applied before the
         * window is created, so a windowed start comes back at the size the player chose). */
        ww = rt_config_int("VIDEO", "window_width", 0, 0, 16384);
        wh = rt_config_int("VIDEO", "window_height", 0, 0, 16384);
        if (ww > 0 && wh > 0) plat_set_window_size((u32)ww, (u32)wh);
        plat_set_fullscreen((u32)fs);
        plat_set_border((u32)curtains);
        if (!plat_init("It Came from the Desert (recomp)"))
        {
            printf("recomp: cannot open a window\n");
            rt_shutdown(&m);
            return 1;
        }
        /* The port's overlay is drawn by the platform, at the panel's rate, on top of the picture
         * this front end hands over (docs\display-rate.md); this is the function it calls. */
        plat_set_overlay(host_overlay_draw);
        {
            u32 cw = 0, ch = 0;
            if (plat_window_size(&cw, &ch))
                printf("recomp: video %s, fullscreen=%d, curtains=%d, window %lux%lu\n",
                       rt_config_path()[0] != 0 ? rt_config_path() : "(no icftd.ini)", fs,
                       curtains, (unsigned long)cw, (unsigned long)ch);
        }
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
    else if (g_escFrame != 0)
        m.on_frame = host_esc_frame;       /* headless --esc: the restart seam needs a frame */
    else if (g_cheatFrame != 0)
        m.on_frame = host_cheat_frame;     /* headless --cheat: the chord needs a frame */
    if (audioDump != 0)
    {
        /* Mix without a device: the run's audio is checked (and can be heard) offline. */
        rt_audio_set_gain(&m, rt_config_int("AUDIO", "sound", 10, 0, 10),
                              rt_config_int("AUDIO", "music", 10, 0, 10));
        rt_audio_render_only(&m, EMU_AUD_RATE);
        if (!rt_audio_capture(&m, audioDump)) { printf("recomp: cannot write %s\n", audioDump); rt_shutdown(&m); return 1; }
        printf("recomp: audio -> %s (%lu Hz stereo, raw s16)\n", audioDump, (unsigned long)EMU_AUD_RATE);
    }
    if (audioStall > 0)
    {
        if (!g_window)
            printf("recomp: --audiostall needs --window (no device is opened in a headless run)\n");
        else
            plat_audio_simulate_stall(audioStall);
    }
    if (g_window || shotPath != 0 || dumpPrefix != 0) m.on_present = host_present;

    /* The title screen is part of the played game, not of a measurement: a run with an input
     * script, a state/raster dump, an injected entry or a poke is reproducing or inspecting the
     * original, which has no title, and must start where the original starts. It engages itself
     * when the program is about to play its intro (see title.c). --titlekey is the exception: it
     * asks for the title's own menu, so it arms the title even headless and with a capture - and
     * an input script is exactly how a scene reached that way is replayed. */
    host_title_key(titleKey);
    host_title_arm((g_window && inputPath == 0 && statePrefix == 0 && shotPath == 0 &&
                    dumpPrefix == 0 && g_callPc == 0 && g_pokeCount == 0) ||
                   (titleKey >= 0 && statePrefix == 0 &&
                    g_callPc == 0 && g_pokeCount == 0));
    /* The pointer that drives the map cursor and the two aims, and the fight's aiming crosshair,
     * are port features, so they follow the same rule: they run in a played game (and for a --mouse
     * test run), never in a measurement, where the machine state has to be the original's. */
    g_portArm = (g_window && inputPath == 0 && statePrefix == 0 && shotPath == 0 &&
                dumpPrefix == 0 && g_callPc == 0 && g_pokeCount == 0) || mousePath != 0;
    /* The cheat follows the same rule, and --cheat is its scripted form: it needs the entry hook
     * even in a run that is otherwise a measurement, because that run asked for the cheat. A
     * language needs it too: the translation is the hook's other job (src\host\lang_hook.c). */
    if (g_portArm || g_cheatFrame != 0 || host_lang_on() || host_lang_dump_on()) rc_entryHook = host_entry;
    host_hospital_camera_log(g_cameraLog);
    host_save_button_log(g_saveLog);

    printf("recomp: %s at 0x%lx, %ld instruction(s), base %ld, %s\n", image, (unsigned long)base,
           insns, (long)RC_BASE, rc_active->name);

    oracle_boot(rc_active->entry, rc_active->a4);
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

    for (;;)
    {
        while (m.insns < insns && !m.stop)
        {
            u32 pc;

            /* The panel's own clock, reached between two translated functions: this is what keeps
             * the overlay moving (and the window drained) through a scene whose frame takes longer
             * than 20 ms - the hospital's world update runs at ~12.5 Hz. Never blocks. */
            if (g_window) plat_display_service();

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

        /* Esc in a played game (back to the menu) and the menu's "Play Antheads" (the add-on's
         * game): the machine starts again, so every piece of emulated state is the one a fresh
         * boot makes. The title arms itself as it does on the first boot; nothing of the old
         * session - its stack, heap, loaded banks or scores - can leak into it. */
        if (!host_title_restart_pending()) break;

        {
            int keepSlot = m.saveSlot;
            int soundGain = m.audio.soundGain, musicGain = m.audio.musicGain;
            int hadAudio = m.audio.device;
            int bootAs = host_title_restart_program();
            int bootPlay = host_title_restart_play();
            int bootLoad = host_title_restart_load();

            if (bootAs >= 0 && bootAs != g_program)
            {
                /* The other engine build, exactly as --program would have picked it at boot: its
                 * table, entry, A4, save geometry, image and disk tree (docs\antheads.md). */
                g_program = bootAs;
                rc_active = host_program(g_program);
                sprintf(g_imagePath, "%s%s", dataDir,
                        g_program == HOST_PROGRAM_ANT ? IMAGE_RELATIVE_ANT : IMAGE_RELATIVE);
                image = g_imagePath;
                printf("recomp: restarting as %s\n", rc_active->name);
            }

            printf("recomp: restarting the game\n");
            if (g_record != 0) { fclose(g_record); g_record = 0; }
            if (m.callLog != 0) { fclose((FILE *)m.callLog); m.callLog = 0; }
            if (m.frameLog != 0) { fclose((FILE *)m.frameLog); m.frameLog = 0; }
            if (m.spriteLog != 0) { fclose((FILE *)m.spriteLog); m.spriteLog = 0; }
            rt_shutdown(&m);
            if (!rt_init(&m)) { printf("recomp: out of memory\n"); return 1; }
            g_m = &m;
            if (!rt_load_image(&m, base, image))
            {
                printf("recomp: cannot load %s\n", image);
                rt_shutdown(&m);
                return 1;
            }
            /* The same per-session settings as above: rt_init starts from a zeroed machine, so the
             * callbacks, the slot and the logging switches have to be put back. */
            host_lang_open(&m);
            m.dataDir = dataDir;
            m.saveName = rc_active->saveName;
            m.saveBytes = rc_active->saveBytes;
            m.tree = g_program == HOST_PROGRAM_ANT ? "ant" : "disk";
            host_saves(&m);
            m.panelFlag = RC_ADDR(PANEL_FLAG);
            m.panelCols = RC_ADDR(PANEL_COLS);
            m.progress = progress;
            m.progressFrom = progressFrom;
            if (displayStat) m.perfOn = 1;
            m.blitLog = blitLog;
            m.blitLogFrame = blitLogFrame;
            m.blitBytePtr = blitBytePtr;
            m.blitGeneric = blitGeneric;
            m.dosLog = dosLog;
            m.textLog = textLog;
            m.busTable = busTablePath != 0;
            m.slotsAt = slotsAt;
            m.saveSlot = keepSlot;
            m.traceFrom = traceFrom;
            m.traceTo = traceTo;
            m.tickLog = tickLog;
            m.audioLog = audioRegs;
            if (hadAudio && plat_audio_open(EMU_AUD_RATE))
            {
                rt_audio_open(&m, EMU_AUD_RATE);
                rt_audio_set_gain(&m, soundGain, musicGain);
                if (audioStall > 0) plat_audio_simulate_stall(audioStall);
            }
            if (audioDump != 0)
            {
                rt_audio_render_only(&m, EMU_AUD_RATE);
                rt_audio_capture(&m, audioDump);
            }
            if (g_window) m.on_frame = host_input;
            else if (mousePath != 0) m.on_frame = host_pointer_frame;
            else if (g_escFrame != 0) m.on_frame = host_esc_frame;
            else if (g_cheatFrame != 0) m.on_frame = host_cheat_frame;
            if (g_window || shotPath != 0 || dumpPrefix != 0) m.on_present = host_present;
            oracle_boot(rc_active->entry, rc_active->a4);
            m.on_cia = host_cia;
            rc_frame_hook = host_frame;
            rc_stopOnUnknown = 1;
            rc_abort = 0;
            rc_stopAt = runForever ? 0 : insns;
            g_cpu = &c;
            gather(&c, &m);
            translated = interpreted = 0;
            g_isCount = 0;
            g_isActive = 0;
            g_called = 0;
            g_escDone = (g_escFrame != 0) ? 1 : 0;
            g_cheatDone = (g_cheatFrame != 0) ? 1 : 0;
            host_cheat_reset();
            /* The clock freeze is the host's, not the machine's: a fresh game starts running. The
             * scripted chord has already had its frames (this run's frame count starts over). */
            host_time_freeze_reset();
            g_freezePos = g_freezeCount;
            /* The port seams keep per-screen state; a fresh game must not inherit the old one. */
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
            g_mapFrame = g_phoneFrame = g_roomFrame = g_antFrame = g_antHeadFrame = 0;
            g_fireFrame = 0;
            g_aimOwn = 0;
            g_lineCount = 0;
            g_loadHold = g_loadHoldSeen = 0;
            g_loadOn = g_loadShown = 0;
            g_loadSeen = g_loadStart = 0;
            /* A played game shows the title again. A headless run (the --titlekey seam) has no
             * keyboard, so ask the menu for its scripted choice: a boot the menu asked for starts
             * that game at once (the menu's New Game was taken before this), and an Esc restart
             * ends on the menu itself (99 is not a scene). */
            host_title_arm(1);
            if (bootPlay) host_title_new_game();
            else if (bootLoad) host_title_load_on_boot();
            else host_title_key(g_window ? -1 : 99);
        }
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
    if (displayStat)
    {
        /* The claim docs\display-rate.md makes is about delivery, never about content: the
         * machine's composed frames stay at 50 Hz (the cycle model decides), and the display
         * frames are what the panel got. A scene that needs more than one vblank per update
         * delivers fewer display frames, because the host is inside the emulation meanwhile. */
        u32 df = 0, ov = 0, hz = 0;
        u32 ms = g_window ? plat_ticks_ms() : 0;

        plat_display_stats(&df, &ov, &hz);
        printf("recomp: displaystat machine %lu frame(s) (%lu composed) in %lu ms",
               (unsigned long)m.frame, (unsigned long)rt_gfx_frames(), (unsigned long)ms);
        if (ms != 0)
            printf(" (%.1f/s machine, %.1f/s composed)", (double)m.frame * 1000.0 / (double)ms,
                   (double)rt_gfx_frames() * 1000.0 / (double)ms);
        printf("; display %lu frame(s)", (unsigned long)df);
        if (ms != 0) printf(" (%.1f/s)", (double)df * 1000.0 / (double)ms);
        printf(", %lu overlay redraw(s), panel %lu Hz", (unsigned long)ov, (unsigned long)hz);
        /* Conversions per composed frame: the identity caches are what the overlay used to defeat
         * on every pointer screen (docs\display-rate.md, phase 2's exit criteria). */
        printf("; %lu conversion(s) in %lu present(s) (%.2f per present)",
               (unsigned long)m.perf.convs, (unsigned long)m.perf.presents,
               m.perf.presents != 0
                   ? (double)m.perf.convs / (double)m.perf.presents : 0.0);
        /* Which presenter delivered those frames: the flip-model layer ("dx9"), or the window-DC
         * fallback that is also the reference for --shot (docs\display-rate.md, phase 3). */
        printf("; presenter %s", plat_display_backend());
        printf("\n");
    }
    state_close();
    if (ramStop != 0) state_ram_snapshot(&m, ramStop);
    /* A dropping device means the emulation fell behind its own 50 Hz clock: worth one line in
     * every run that had audio. */
    if (m.audio.device != 0)
    {
        u32 dropped = plat_audio_dropped();
        u32 stalls = plat_audio_stalls();
        u32 reopens = plat_audio_reopens();
        if (dropped != 0) printf("recomp: audio dropped %lu frame(s)\n", (unsigned long)dropped);
        if (stalls != 0)
            printf("recomp: audio device restarted %lu time(s) after it stopped completing buffers\n",
                   (unsigned long)stalls);
        if (reopens != 0)
            printf("recomp: audio device reopened %lu time(s)\n", (unsigned long)reopens);
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
    if (g_window)
    {
        /* The window's own size, written back so the next windowed start comes back to it -
         * Windows keeps no such thing for an application's window. It is also the size a windowed
         * mode returns to, so quitting from fullscreen keeps it too. */
        u32 ww = 0, wh = 0;
        if (plat_window_size(&ww, &wh))
        {
            /* Height first: a key the file does not have is inserted under its section's header,
             * so the second write lands above the first and the file reads window_width, then
             * window_height. */
            rt_config_save_int("VIDEO", "window_height", (int)wh);
            rt_config_save_int("VIDEO", "window_width", (int)ww);
        }
        plat_shutdown();
    }
    rc = 0;
    return rc;
}
