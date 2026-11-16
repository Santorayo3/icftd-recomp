/* The situation map's save-slot picker - a port feature. See save_ui.c. */
#ifndef ICFTD_HOST_SAVE_UI_H
#define ICFTD_HOST_SAVE_UI_H

#include "types.h"
#include "machine.h"

#define SAVE_UI_SLOTS 10

/* The picker's state. `open` is what the front end reads; the rest is for the hover and the
 * pointer arrow. Empty slots are drawn grey like the title's load list, but unlike there they are
 * selectable: this list chooses where to write. */
typedef struct save_ui
{
    int open;
    u8  empty[SAVE_UI_SLOTS];       /* 1 = the slot holds no save file yet */
    int hover;                      /* the slot under the pointer, -1 for none */
    int back_hover;                 /* the pointer is over the Back button */
    int pointer_on;                 /* the platform reported a pointer this frame */
    s16 pointer_x, pointer_y;       /* its position, the arrow's tip */
} save_ui;

void save_ui_init(save_ui *ui);

/* Opens the picker: reads the ten save directories so the empty slots can be drawn grey. */
void save_ui_start(save_ui *ui, rt_machine *m);
void save_ui_close(save_ui *ui);

/* Notes the pointer and returns the slot under it, or -1. `back_hover` is set when the pointer is
 * over the Back button. Every slot reports a hover, empty ones included. */
int save_ui_pointer(save_ui *ui, int present, int x, int y);

/* Draws the portrait box, the ten slot lines, the Back button and the pointer arrow on top of the
 * composed picture, using the runtime's port-overlay palette (rt_overlay_begin). Does nothing when
 * the picker is closed. */
void save_ui_draw(rt_machine *m, const save_ui *ui);

#endif /* ICFTD_HOST_SAVE_UI_H */
