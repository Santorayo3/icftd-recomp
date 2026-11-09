/* The intro scene: FUN_00009870 sets it up, FUN_00009630 is its per-frame tick. */
#ifndef INTRO_H
#define INTRO_H

#include "types.h"

/* The original tick returns 1 at this frame and the MovE run loop stops. */
#define INTRO_LAST_FRAME 0x1dd

/* Equivalent of FUN_00009870 up to the point where the script is running. */
void intro_start(void);

/* FUN_00009630. `fire` is the joystick/mouse button that DAT_00024A84 reports. */
s32 intro_tick(int fire);

s32 intro_frame(void);

#endif
