/* The gamepad, translated into the controls the game and the port already have (a port feature:
 * host input plumbing). See pad.c. */
#ifndef ICFTD_HOST_PAD_H
#define ICFTD_HOST_PAD_H

#include "types.h"
#include "platform.h"

/* What the pad has done so far: the pointer it drives, and the buttons of the previous frame (the
 * press edges are diffed here, because a button that is down at two boundaries is one press). */
typedef struct
{
    s32 x, y;                   /* the pointer, framebuffer pixels in 1/16ths (sub-pixel steps) */
    s16 plat_x, plat_y;         /* the platform's (the mouse's) position, as it last reported it */
    u8  known;                  /* the stick owns the pointer, and x,y are where it has it */
    u8  up, down, left, right;  /* the d-pad, last frame */
    u8  fire, start;            /* the face buttons and Start, last frame */
} host_pad;

/* The pointer's speed, as a per cent of the pad's full-deflection speed: icftd.ini's
 * [INPUT] pad_sensitivity, clamped to this range. A default of half is what playing with the pad
 * asked for - the full speed crosses the picture in half a second, which is quicker than a hand
 * wants to aim a cursor with. */
#define PAD_SENSITIVITY_DEFAULT 50
#define PAD_SENSITIVITY_MIN     10
#define PAD_SENSITIVITY_MAX     200

/* Sets the speed, once at start-up (main.c) from the ini; a value outside the range is clamped. */
void host_pad_sensitivity(int percent);

/* The d-pad, the face buttons and Start, into the keys the rest of the port already reads: the
 * d-pad is the four directions, any face button is /FIRE (and the pointer's left button, which is
 * what the port's own buttons and popups answer), and Start is Escape. */
void host_pad_buttons(host_pad *p, input_state *in);

/* The left stick as the pointer, for a screen that shows a cursor: `in`'s mouse position becomes
 * the stick's, and `mouse_moved` is set on the frames it moves. Returns 1 when it moved the
 * pointer, 0 otherwise - a centred stick leaves the pointer where the pad put it, and the mouse
 * takes it back by moving. */
int  host_pad_cursor(host_pad *p, input_state *in);

/* The left stick as the four directions, in the bit layout the joy word is built from in the front
 * end (1 up, 2 down, 4 left, 8 right); 0 when the stick is inside its deadzone. */
int  host_pad_dirs(const input_state *in);

#endif /* ICFTD_HOST_PAD_H */
