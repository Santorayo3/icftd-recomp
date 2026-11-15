/* The title screen - a port feature. See title.c. */
#ifndef ICFTD_HOST_TITLE_H
#define ICFTD_HOST_TITLE_H

#include "machine.h"

/* Arm the title for a played game (call it when the front end is about to run the game for a
 * player). It engages itself the first time the program is about to play its intro; measurement
 * runs never arm it, so they start exactly where the original does. */
void host_title_arm(int on);

/* --titlekey <n>: take one menu choice as soon as the title is up, so a scripted run can start a
 * scene from the title (the same class of dev seam as --call). 0 = the intro, 1..7 = a scene,
 * 8..10 = the endings (win, nest collapse, deadline), -1 (the default) = no choice. */
void host_title_key(int n);

/* Esc in a played game. The front end's input layer calls this at a frame boundary; it asks the
 * run to stop and leaves a restart for the front end, which then re-initialises the machine and
 * boots the game again, so the player lands on the title screen with nothing of the old session
 * left over. In a measurement run (the title was never armed) it keeps the old meaning: stop. */
void host_title_escape(struct rt_machine *m);

/* Read by the front end after its run loop: 1 means Esc asked for a restart. Clears the request. */
int host_title_restart_pending(void);

/* The front end's cpu_t mirror is scattered into the core when a CIA handler runs, so a register
 * write made here (an injected call's frame, or the pop that balances it) has to reach that mirror
 * too - otherwise the next handler run would put the stale stack pointer back. Defined by each
 * front end, which owns the mirror. */
void host_regs_sync(rt_machine *m);

/* Call from the main loop before executing `pc`. Returns 1 when the title did something and the
 * loop must re-read the PC (a call was injected, or the PC was left where it was). */
int host_title_check(rt_machine *m, u32 pc);

#endif /* ICFTD_HOST_TITLE_H */
