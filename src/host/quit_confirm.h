/* The Escape confirmation - a port feature. See quit_confirm.c.
 *
 * Escape in a played game asks before it leaves it: this popup sits over the game's own picture
 * (assets\quit_confirm.png with the question and the two buttons) until the player clicks Confirm -
 * which is the old "back to the title screen" - or Cancel, which only closes it. Losing the game
 * itself is never on offer, so every path that would end the session stays on the title side.
 */
#ifndef ICFTD_HOST_QUIT_CONFIRM_H
#define ICFTD_HOST_QUIT_CONFIRM_H

#include "types.h"
#include "machine.h"
#include "display.h"

/* What a click on the popup chose: Confirm (leave the game), Cancel (stay), or nothing. */
typedef enum quit_confirm_choice
{
    QUIT_CONFIRM_NONE = 0,
    QUIT_CONFIRM_YES,               /* the Confirm button: the caller takes the escape */
    QUIT_CONFIRM_NO                 /* the Cancel button: the popup is already closed */
} quit_confirm_choice;

/* The popup's state. `open` is what the front end reads; `hover` is the button under the pointer
 * (NONE for none), and the position is the arrow's tip, kept at the frame boundary's 50 Hz. */
typedef struct quit_confirm
{
    int open;
    int hover;
    int pointer_on;                 /* the platform reported a pointer this frame */
    s16 pointer_x, pointer_y;
} quit_confirm;

void quit_confirm_init(quit_confirm *ui);

/* Puts the question up. It prints what it asks (the labels it draws, translation included), so a
 * headless run says what the player would read instead of leaving it to a screenshot. */
void quit_confirm_open(quit_confirm *ui, rt_machine *m);

/* Takes it down without a choice - Escape again, or a new session - and says why. */
void quit_confirm_close(quit_confirm *ui, rt_machine *m, const char *how);

/* One frame: follows the pointer and acts on a click. A click on a button closes the popup and
 * returns the choice; QUIT_CONFIRM_NONE means "still up, or nothing was clicked". */
quit_confirm_choice quit_confirm_frame(quit_confirm *ui, rt_machine *m,
                                       int present, int x, int y, int click);

/* Draws the plaque, the question, the two buttons and the pointer arrow on top of the composed
 * picture, onto the chunky surface the caller draws the port's overlay on (the runtime's
 * framebuffer for a headless --shot/--dump, the platform's display surface otherwise), using the
 * runtime's port-overlay palette (rt_overlay_palette). Does nothing while it is closed. */
void quit_confirm_draw(rt_machine *m, const quit_confirm *ui, rt_surface *s);

#endif /* ICFTD_HOST_QUIT_CONFIRM_H */
