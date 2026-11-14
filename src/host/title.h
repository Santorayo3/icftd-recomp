/* The title screen - a port feature. See title.c. */
#ifndef ICFTD_HOST_TITLE_H
#define ICFTD_HOST_TITLE_H

#include "machine.h"

/* Arm the title for a played game (call it when the front end is about to run the game for a
 * player). It engages itself the first time the program is about to play its intro; measurement
 * runs never arm it, so they start exactly where the original does. */
void host_title_arm(int on);

/* --titlekey <n>: take one menu choice as soon as the title is up, so a scripted run can start a
 * scene from the title (the same class of dev seam as --call). 0 = the intro, 1..4 = a scene,
 * -1 (the default) = no choice. */
void host_title_key(int n);

/* The front end's cpu_t mirror is scattered into the core when a CIA handler runs, so a register
 * write made here (an injected call's frame, or the pop that balances it) has to reach that mirror
 * too - otherwise the next handler run would put the stale stack pointer back. Defined by each
 * front end, which owns the mirror. */
void host_regs_sync(rt_machine *m);

/* Call from the main loop before executing `pc`. Returns 1 when the title did something and the
 * loop must re-read the PC (a call was injected, or the PC was left where it was). */
int host_title_check(rt_machine *m, u32 pc);

#endif /* ICFTD_HOST_TITLE_H */
