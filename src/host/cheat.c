/* Ctrl+W in a minigame: end it in the scene's own success state.
 *
 * The original has no cheat key, so this is a port feature: there is no path to diff against.
 * What it owes instead (docs\port-features.md, "Done" for a port feature) is that its claim is a
 * machine state, and that it never disturbs the machine in a measurement.
 *
 * The claim is not a new variable. Every scene already knows how a win looks, and this seam writes
 * exactly the words that scene's own success path writes. The engine's end-of-scene code still runs
 * in full: the fight's result, the fire game's "the fire is out" countdown, the chicken's swerved
 * narration, the flight's landing. Nothing is skipped, so the scene ends the way the game ends it.
 *
 * The seven attachment points are each scene's own per-frame update. Each is reached from one scene
 * only (re\decomp_all\dshell\ALL.c, the callers):
 *
 *   FUN_0000a74e 0x00a74e  the fight's update           FUN_0000b46c (the scene's entry)
 *   FUN_00007934 0x007934  the giant ant's update       FUN_00008c5c
 *   FUN_0000b528 0x00b528  the fire game's update       FUN_0000be34
 *   FUN_0001c838 0x01c838  the chicken race's update    FUN_0001ba3e
 *   FUN_0000d376 0x00d376  the underground nest's update FUN_0000bfca
 *   FUN_00019e9c 0x019e9c  the hospital escape's update  FUN_0001819a
 *   FUN_000125aa 0x0125aa  the flight's update           FUN_000107a6
 *
 * rc_entryHook is the only place inside the translated stream where "this update is running" is
 * visible (docs\port-features.md, "the trap"), so the request is consumed there - at the next
 * update of a scene (the request is held for CHEAT_REQUEST_FRAMES frames, measured 0..2).
 *
 * The request itself comes from the platform input (input_state.down[KEY_CTRL] with a press of
 * KEY_W). A measurement run installs no hook and never passes input here, so it is inert; --cheat
 * is the scripted-run seam that raises the same request.
 *
 * The scene words, all engine globals (model addresses; the image loads at RC_BASE):
 *
 *   DAT_0002991e  the shared scene result: 1 = success (the dispatcher's cases read it)
 *   DAT_00029896  the scene's own "setup has run" flag - the fight, fire and ant updates put their
 *                 initial state in place while it is 0, so a request on that frame must wait
 */
#include <stdio.h>
#include <string.h>

#include "types.h"
#include "../recomp/cpu.h"
#include "cheat.h"
#include "seams.h"

/* Every address this file writes is a row of the seam table (src\host\seams.c): the 1989 game's
 * value and the add-on's, chosen at run time by seam_active(). The seven updates, the scene words
 * and the fight's flags keep the names their comments always gave them. The add-on has no fire
 * game, so its fire seams are 0 - the request then simply has nothing to end there. */

/* A request is good for the scene update it was made for. Each scene updates every frame, so three
 * frames is slack for the vblank's position in the stream; a key pressed on a screen that is not a
 * minigame (the title, a room, the map) expires instead of winning the next scene. */
#define CHEAT_REQUEST_FRAMES 3

static int s_requested;
static u32 s_requestFrame;

static void w16(rt_machine *m, u32 addr, u32 value)
{
    rt_write16(&m->mem, RC_ADDR(addr), value);
}

static u32 r16(rt_machine *m, u32 addr)
{
    return rt_read16(&m->mem, RC_ADDR(addr));
}

void host_cheat_input(rt_machine *m, const input_state *in)
{
    /* Either order: press Control with W already down, or W with Control already down. */
    int chord = (in->down[KEY_CTRL] && in->pressed[KEY_W]) ||
                (in->pressed[KEY_CTRL] && in->down[KEY_W]);

    if (!chord) return;
    s_requested = 1;
    s_requestFrame = m->frame;
}

/* --cheat: the same input state the platform layer reports for the chord, so the scripted run
 * goes through the one test that decides whether Ctrl+W was pressed. */
void host_cheat_force(rt_machine *m)
{
    input_state in;

    memset(&in, 0, sizeof in);
    in.down[KEY_CTRL] = 1;
    in.pressed[KEY_W] = 1;
    host_cheat_input(m, &in);
}

void host_cheat_reset(void)
{
    s_requested = 0;
    s_requestFrame = 0;
}

/* The fight's win, as FUN_0000a74e's own exit takes it: the fight is over, the opponent is down,
 * the player is standing and has health. */
static void fight_win(rt_machine *m)
{
    w16(m, FIGHT_H_HEALTH, 0x76);
    w16(m, FIGHT_O_POSE, 8);
    w16(m, FIGHT_H_POSE, 0);
    w16(m, FIGHT_OVER, 1);
    w16(m, SCENE_RESULT, 1);
}

/* Every flame out, which is FUN_0000b7b2's DAT_00029cc0, and the end-of-game countdown at its last
 * step so FUN_0000b528 returns 1 on this update. */
static void fire_win(rt_machine *m)
{
    int i;

    for (i = 0; i < 8; i++) w16(m, FIRE_ACTIVE + (u32)i * 2u, 0);
    w16(m, FIRE_CLEAR, 1);
    w16(m, FIRE_END_WAIT, 1);
    w16(m, SCENE_RESULT, 1);
}

/* Ice swerved off the road: the win FUN_0001cd94 narrates, and the race's own end flag. */
static void chicken_win(rt_machine *m)
{
    w16(m, CHICK_BRAKE, 0);
    w16(m, CHICK_WON, 1);
    w16(m, CHICK_OVER, 1);
}

/* The nest's eight steps and the escape's climb are the same word: the loop's own exit test. */
static void steps_win(rt_machine *m)
{
    w16(m, SCENE_STEPS, 8);
    w16(m, SCENE_RESULT, 1);
}

/* The giant ant's success branch, word for word. */
static void ant_win(rt_machine *m)
{
    w16(m, SCENE_RESULT, 1);
    w16(m, ANT_WON, 1);
    w16(m, ANT_OVER, 1);
}

/* The flight's own landing at the nest (FUN_00017b9c at 0x17c78): it ends the flight and continues
 * into FUN_0000bfca, which is where a successful flight leads. */
static void flight_win(rt_machine *m)
{
    w16(m, SCENE_RESULT, 1);
    w16(m, FLIGHT_LANDED, 1);
    w16(m, FLIGHT_OVER, 1);
}

int host_cheat_entry(rt_machine *m, u32 pc)
{
    const char *name;
    u32 fightPc = FIGHT_UPDATE, antPc = ANT_UPDATE, firePc = SEAM(fireUpdatePc);
    u32 chickPc = CHICKEN_UPDATE, underPc = UNDER_UPDATE, hospPc = HOSP_UPDATE;
    u32 flightPc = FLIGHT_UPDATE;

    if (!s_requested) return 0;
    if ((s32)(m->frame - s_requestFrame) > CHEAT_REQUEST_FRAMES)
    {
        s_requested = 0;
        return 0;
    }
    /* Each scene has one update; the two "setup has not run yet" cases must wait a frame, because
     * those updates put their initial state in place while the flag is 0. */
    if (fightPc != 0 && pc == RC_ADDR(fightPc))
    {
        if (r16(m, SCENE_INIT) == 0) return 0;
        fight_win(m);
        name = "Fight";
    }
    else if (antPc != 0 && pc == RC_ADDR(antPc))
    {
        if (r16(m, SCENE_INIT) == 0) return 0;
        ant_win(m);
        name = "Giant Ant";
    }
    else if (firePc != 0 && pc == RC_ADDR(firePc))
    {
        if (r16(m, SCENE_INIT) == 0) return 0;
        fire_win(m);
        name = "Fire Game";
    }
    else if (chickPc != 0 && pc == RC_ADDR(chickPc))
    {
        chicken_win(m);
        name = "Chicken Race";
    }
    else if (underPc != 0 && pc == RC_ADDR(underPc))
    {
        steps_win(m);
        name = "Underground";
    }
    else if (hospPc != 0 && pc == RC_ADDR(hospPc))
    {
        steps_win(m);
        name = "Escape Hospital";
    }
    else if (flightPc != 0 && pc == RC_ADDR(flightPc))
    {
        flight_win(m);
        name = "Take a Flight";
    }
    else
    {
        return 0;
    }

    s_requested = 0;
    printf("cheat: Ctrl+W ends the %s in its success state at frame %lu\n",
           name, (unsigned long)m->frame);
    return 1;
}
