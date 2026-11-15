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

#define SCENE_RESULT   0x0002991Eu  /* DAT_0002991e                             */
#define SCENE_INIT     0x00029896u  /* DAT_00029896                             */

/* The seven per-frame updates, at model addresses. */
#define FIGHT_UPDATE   0x0000A74Eu  /* FUN_0000a74e                             */
#define ANT_UPDATE     0x00007934u  /* FUN_00007934                             */
#define FIRE_UPDATE    0x0000B528u  /* FUN_0000b528                             */
#define CHICKEN_UPDATE 0x0001C838u  /* FUN_0001c838                             */
#define UNDER_UPDATE   0x0000D376u  /* FUN_0000d376                             */
#define HOSP_UPDATE    0x00019E9Cu  /* FUN_00019e9c                             */
#define FLIGHT_UPDATE  0x000125AAu  /* FUN_000125aa                             */

/* The fight: DAT_000230f6 is the update's own "fight over" flag, DAT_00029e26 the opponent's pose
 * (8 is FUN_0000ac30's knockout state, which also sets 230f6), DAT_00029e24 the player's pose (8 is
 * FUN_0000afba's knocked-out state - the one the result must not be taken from), and DAT_00029e36
 * the player's health (0x76 at setup; FUN_0000afba picks pose 8 when it is 0). */
#define FIGHT_OVER     0x000230F6u
#define FIGHT_O_POSE   0x00029E26u
#define FIGHT_H_POSE   0x00029E24u
#define FIGHT_H_HEALTH 0x00029E36u

/* The fire game: DAT_00029e88 is the eight flames' active flags, DAT_00029cc0 FUN_0000b7b2's "no
 * fire left" flag (it re-ignites a flame while this is 0), and DAT_00029eba the countdown
 * FUN_0000b528 runs once the room is out before it returns 1. */
#define FIRE_ACTIVE    0x00029E88u
#define FIRE_CLEAR     0x00029CC0u
#define FIRE_END_WAIT  0x00029EBAu

/* The chicken race: DAT_0002bcd4 is "Ice swerved" (the win FUN_0001cd94 narrates), DAT_0002bcce
 * was braking, and DAT_0002bcd0 ends FUN_0001ba3e's loop. */
#define CHICK_WON      0x0002BCD4u
#define CHICK_BRAKE    0x0002BCCEu
#define CHICK_OVER     0x0002BCD0u

/* The underground nest and the hospital escape both end their loop when DAT_0002a170 reaches 8
 * (FUN_0000bfca's `while (DAT_0002a170 < 8)`; FUN_00018832 counts the escape up the same way). */
#define SCENE_STEPS    0x0002A170u

/* The giant ant: the success branch of FUN_00007934 sets this pair (and DAT_00029cc0, the update's
 * exit flag it tests at 0x7cde). */
#define ANT_WON        0x00029920u
#define ANT_OVER       0x00029CC0u

/* The flight: FUN_00017b9c's landing at the nest writes DAT_0002a552 (the "landed" word
 * FUN_000107a6 follows into FUN_0000bfca), DAT_0002a544 (the flight is over) and the result. */
#define FLIGHT_LANDED  0x0002A552u
#define FLIGHT_OVER    0x0002A544u

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

    if (!s_requested) return 0;
    if ((s32)(m->frame - s_requestFrame) > CHEAT_REQUEST_FRAMES)
    {
        s_requested = 0;
        return 0;
    }

    switch (pc)
    {
    case RC_ADDR(FIGHT_UPDATE):
        if (r16(m, SCENE_INIT) == 0) return 0;      /* this frame still initialises the fight */
        fight_win(m);
        name = "Fight";
        break;
    case RC_ADDR(ANT_UPDATE):
        if (r16(m, SCENE_INIT) == 0) return 0;
        ant_win(m);
        name = "Giant Ant";
        break;
    case RC_ADDR(FIRE_UPDATE):
        if (r16(m, SCENE_INIT) == 0) return 0;
        fire_win(m);
        name = "Fire Game";
        break;
    case RC_ADDR(CHICKEN_UPDATE):
        chicken_win(m);
        name = "Chicken Race";
        break;
    case RC_ADDR(UNDER_UPDATE):
        steps_win(m);
        name = "Underground";
        break;
    case RC_ADDR(HOSP_UPDATE):
        steps_win(m);
        name = "Escape Hospital";
        break;
    case RC_ADDR(FLIGHT_UPDATE):
        flight_win(m);
        name = "Take a Flight";
        break;
    default:
        return 0;
    }

    s_requested = 0;
    printf("cheat: Ctrl+W ends the %s in its success state at frame %lu\n",
           name, (unsigned long)m->frame);
    return 1;
}
