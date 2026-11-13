/* The title screen - a port feature. See title.c. */
#ifndef ICFTD_HOST_TITLE_H
#define ICFTD_HOST_TITLE_H

#include "machine.h"

/* Arm the title for a played game (call it when the front end is about to run the game for a
 * player). It engages itself the first time the program is about to play its intro; measurement
 * runs never arm it, so they start exactly where the original does. */
void host_title_arm(int on);

/* Call from the main loop before executing `pc`. Returns 1 when the title did something and the
 * loop must re-read the PC (a call was injected, or the PC was left where it was). */
int host_title_check(rt_machine *m, u32 pc);

#endif /* ICFTD_HOST_TITLE_H */
