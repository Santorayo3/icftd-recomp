/* Ctrl+T on the situation map: freeze the game's clock - a port feature.
 *
 * The original has no such key, so there is no path to diff against. What the feature owes
 * instead (docs\port-features.md, "Done" for a port feature) is that its claim is a machine state
 * and that a measurement run is untouched.
 *
 * The engine's clock is one routine. The clock VBI FUN_000054cc counts 0x50 vblanks
 * (DAT_0002687e, started by FUN_0000551c) and calls FUN_00005406, which adds one to the minute
 * word DAT_00021e24 and, when the minute passes 59, counts the hour DAT_00021e22 up, runs the
 * hourly code and at midnight counts the day DAT_00021e1e down; it also keeps the hour the map
 * prints (DAT_00026870 and its AM/PM string DAT_00026872) in step. Two places add time directly,
 * before calling the same routine: travelling on the map (FUN_00003b1e at 0x3208, the destination's
 * minutes plus the current minute word) and sleeping (FUN_0000579c at 0x4204).
 *
 * Freezing therefore is not a new clock - it is the engine's own pause, held:
 *
 *   DAT_00021e26   the gate FUN_00005406 tests at 0x4006. It is 1 while the engine itself stops
 *                  the clock (a narration page, a pause loop), and the routine returns without
 *                  touching anything. Held at 1 here, the VBI's tick, its hourly code and its
 *                  midnight code all stop exactly as they do during a narration.
 *   the five time words  put back at every frame boundary while the gate is held. That is what
 *                  undoes the two direct adds above - travel and sleep add to the minute word and
 *                  then find the gate shut, so the add would otherwise surface, all at once, on
 *                  the first tick after unfreezing.
 *
 * Nothing is skipped and no caller is special-cased: the engine's own code runs, the pause is the
 * engine's own pause. Words are only written when they differ, so a frozen game whose clock would
 * not have moved anyway is not touched at all.
 *
 * The key is the port's: left Ctrl + T, pressed on the situation map - the one screen the clock is
 * for (the room's own timers and the minigames' counters are scene state, not the clock) - toggles
 * the freeze and says so in the OSD line, "Time frozen" / "Time unfrozen". The state is the host's
 * (s_frozen), so it survives every screen the player walks through; it is not saved with a game
 * and it ends where the game does (a restart, or a new game / a load from the title).
 *
 * The platform layer decides what the chord is (Windows WM_KEYDOWN 'T' with VK_CONTROL held, DOS
 * scancode 0x14 with 0x1D held); this file only decides what it means, and only while the front
 * end says the map is the screen. A measurement run installs nothing and passes no input here, so
 * it is inert; --timefreeze is the scripted-run seam that raises the same chord.
 */
#include <stdio.h>
#include <string.h>

#include "types.h"
#include "../recomp/cpu.h"
#include "machine.h"
#include "display.h"
#include "time_freeze.h"
#include "seams.h"

/* The clock words and the map's script are rows of the seam table (src\host\seams.c): the 1989
 * game's addresses and the add-on's, chosen at run time. RC_ADDR adds the build's load address. */

/* The date and time as the engine keeps them while the freeze was engaged. */
typedef struct
{
    u16 min, hour, day, dispH;
    u32 dispAP;
} clock_words;

static int s_frozen;
static clock_words s_hold;
static int s_stalePause;            /* frames left in which a load's own pause word is discarded */

static void host_time_freeze_toggle(rt_machine *m);

static void clock_read(rt_machine *m, clock_words *w)
{
    w->min   = rt_read16(&m->mem, RC_ADDR(CLOCK_MIN));
    w->hour  = rt_read16(&m->mem, RC_ADDR(CLOCK_HOUR));
    w->day   = rt_read16(&m->mem, RC_ADDR(CLOCK_DAY));
    w->dispH = rt_read16(&m->mem, RC_ADDR(CLOCK_DISP_H));
    w->dispAP = rt_read32(&m->mem, RC_ADDR(CLOCK_DISP_AP));
}

/* Puts the held date and time back, writing only a word that has moved. */
static void clock_write(rt_machine *m, const clock_words *w)
{
    if (rt_read16(&m->mem, RC_ADDR(CLOCK_MIN)) != w->min)
        rt_write16(&m->mem, RC_ADDR(CLOCK_MIN), w->min);
    if (rt_read16(&m->mem, RC_ADDR(CLOCK_HOUR)) != w->hour)
        rt_write16(&m->mem, RC_ADDR(CLOCK_HOUR), w->hour);
    if (rt_read16(&m->mem, RC_ADDR(CLOCK_DAY)) != w->day)
        rt_write16(&m->mem, RC_ADDR(CLOCK_DAY), w->day);
    if (rt_read16(&m->mem, RC_ADDR(CLOCK_DISP_H)) != w->dispH)
        rt_write16(&m->mem, RC_ADDR(CLOCK_DISP_H), w->dispH);
    if (rt_read32(&m->mem, RC_ADDR(CLOCK_DISP_AP)) != w->dispAP)
        rt_write32(&m->mem, RC_ADDR(CLOCK_DISP_AP), w->dispAP);
}

/* Runs at the frame boundary, before the vblank whose interrupt servers tick the clock. */
void host_time_freeze_frame(rt_machine *m)
{
    /* A save is a raw image of 0x021E18..0x021E90 and 0x02686C..0x029890 (docs\savegames.md), and
     * the first range holds the pause gate: a game saved while the clock was frozen carries the
     * port's pause word. It is not the engine's, so the frames after a load screen was answered
     * clear it - the loaded game's clock runs, and the freeze stays what it is, a session setting. */
    if (s_stalePause > 0)
    {
        s_stalePause--;
        if (rt_read16(&m->mem, RC_ADDR(CLOCK_GATE)) != 0)
            rt_write16(&m->mem, RC_ADDR(CLOCK_GATE), 0);
    }

    if (!s_frozen) return;
    if (rt_read16(&m->mem, RC_ADDR(CLOCK_GATE)) != 1)
        rt_write16(&m->mem, RC_ADDR(CLOCK_GATE), 1);
    clock_write(m, &s_hold);
}

/* The title answered the engine's load screen with "yes": the save's own pause word is about to be
 * read into the image. Long enough for the loader (two synchronous reads, no vblank inside). */
#define STALE_PAUSE_FRAMES 5

void host_time_freeze_loaded(void)
{
    s_stalePause = STALE_PAUSE_FRAMES;
}

void host_time_freeze_reset(void)
{
    s_frozen = 0;
    memset(&s_hold, 0, sizeof s_hold);
}

int host_time_freeze_map_pc(u32 pc)
{
    return pc == RC_ADDR(MAP_SCRIPT_PC);
}

/* The chord: either order, a press of T with Control already held or a press of Control with T
 * already held, exactly as the Ctrl+W cheat reads its own. */
void host_time_freeze_input(rt_machine *m, const input_state *in, int onMap)
{
    int chord = (in->down[KEY_CTRL] && in->pressed[KEY_T]) ||
                (in->pressed[KEY_CTRL] && in->down[KEY_T]);

    if (!chord || !onMap) return;
    host_time_freeze_toggle(m);
}

/* --timefreeze: the input state the platform reports for the chord, so a scripted run goes through
 * the one test that decides whether Ctrl+T was pressed (a dev seam like --cheat). The map
 * condition is the caller's: a script has no screen to be on. */
void host_time_freeze_force(rt_machine *m)
{
    input_state in;

    memset(&in, 0, sizeof in);
    in.down[KEY_CTRL] = 1;
    in.pressed[KEY_T] = 1;
    host_time_freeze_input(m, &in, 1);
}

/* The toggle itself: the state, the engine's pause and the OSD line. */
static void host_time_freeze_toggle(rt_machine *m)
{
    s_frozen = !s_frozen;
    if (s_frozen)
    {
        clock_read(m, &s_hold);
        host_time_freeze_frame(m);    /* the same vblank's clock server already sees the pause */
    }
    else if (rt_read16(&m->mem, RC_ADDR(CLOCK_GATE)) != 0)
        rt_write16(&m->mem, RC_ADDR(CLOCK_GATE), 0);

    rt_osd_text(m, s_frozen ? "Time frozen" : "Time unfrozen", EMU_OSD_FRAMES);
    printf("recomp: time %s at frame %lu, OSD \"%s\"\n", s_frozen ? "frozen" : "unfrozen",
           (unsigned long)m->frame, s_frozen ? "Time frozen" : "Time unfrozen");
}
