/* Ctrl+T on the situation map freezes the game's clock - a port feature. See time_freeze.c. */
#ifndef ICFTD_HOST_TIME_FREEZE_H
#define ICFTD_HOST_TIME_FREEZE_H

#include "machine.h"
#include "platform.h"

/* The frame's platform input, with whether the situation map is the screen: the Ctrl+T chord
 * toggles the freeze there and nowhere else. A measurement run never calls this, so the seam is
 * inert there. */
void host_time_freeze_input(rt_machine *m, const input_state *in, int onMap);

/* --timefreeze <frame>: the same chord without a keyboard, for a scripted run (a dev seam like
 * --cheat). It toggles through the same test, so two frames freeze and unfreeze again. */
void host_time_freeze_force(rt_machine *m);

/* The frame boundary, before the vblank whose interrupt servers tick the engine's clock: while
 * frozen the engine's own clock pause is held and its date and time are put back. */
void host_time_freeze_frame(rt_machine *m);

/* A fresh game (the Escape restart, or a new game / a load from the title) starts unfrozen. */
void host_time_freeze_reset(void);

/* The title answered the engine's load screen with "yes": the save's ranges include the clock pause
 * word, so the next few frame boundaries discard it - a game saved while frozen loads running. */
void host_time_freeze_loaded(void);

/* 1 when `pc` is the situation map's own script (FUN_00003b1e). A front end that keeps no map
 * seam of its own (DOS) uses this to tell the screen the chord belongs to. */
int host_time_freeze_map_pc(u32 pc);

#endif /* ICFTD_HOST_TIME_FREEZE_H */
