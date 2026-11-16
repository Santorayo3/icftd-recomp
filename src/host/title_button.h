/* The title menu's buttons - a port feature. See title_button.c. */
#ifndef ICFTD_HOST_TITLE_BUTTON_H
#define ICFTD_HOST_TITLE_BUTTON_H

#include "types.h"
#include "machine.h"

#define TITLE_BUTTON_MAX 8
#define TITLE_SLOT_COUNT 10

/* The menu's pens, past the 69 the title picture uses: the two slot-list text colours and the
 * button colours. */
enum
{
    TITLE_BUTTON_PEN_SLOT_EMPTY = 250,  /* grey: the slot has no save */
    TITLE_BUTTON_PEN_SLOT_HOVER,        /* #00FF00: the pointer is over a slot with a save */
    TITLE_BUTTON_PEN_OUTLINE,
    TITLE_BUTTON_PEN_NORMAL,
    TITLE_BUTTON_PEN_HOVER,
    TITLE_BUTTON_PEN_TEXT,
    TITLE_BUTTON_PEN_COUNT
};

/* What a button does when it is clicked. Settings is drawn like the other three but has no action
 * yet, so a click on it commits nothing. */
typedef enum title_action
{
    TITLE_ACTION_NONE = 0,
    TITLE_ACTION_NEW_GAME,
    TITLE_ACTION_LOAD_GAME,
    TITLE_ACTION_QUIT
} title_action;

typedef struct title_button
{
    const char *label;
    s16 x, y;
    s16 w, h;
    title_action action;
} title_button;

typedef struct title_menu
{
    title_button buttons[TITLE_BUTTON_MAX];
    int count;
    int hover;                          /* the button under the pointer, -1 for none */
    int pointer_on;                     /* the platform reported a pointer this frame */
    s16 pointer_x, pointer_y;           /* its position, the arrow's tip */
} title_menu;

/* The load game view: ten save-slot lines in place of the buttons, and the Back button under
 * them. `empty` is filled from the save directories when the view opens. */
typedef struct title_slots
{
    u8  empty[TITLE_SLOT_COUNT];        /* 1 = nothing was ever saved in that slot */
    int hover;                          /* the slot under the pointer, -1 for none */
    int back_hover;                     /* the pointer is over the Back button */
    int pointer_on;                     /* the platform reported a pointer this frame */
    s16 pointer_x, pointer_y;           /* its position, the arrow's tip */
} title_slots;

/* The menu's own colours, RGB: the two slot-list colours and the button outline, normal fill,
 * hover fill and text. */
const u8 *title_menu_palette(void);

/* Fills the menu with the shipped layout; call it once before drawing. */
void title_menu_init(title_menu *menu);

/* Notes where the pointer is (framebuffer coordinates) and whether the platform has one at all,
 * and returns the button it is over, or -1. A pointer outside every button clears the hover. */
int title_menu_pointer(title_menu *menu, int present, int x, int y);

/* Draws the buttons, their labels and the pointer arrow into a chunky 8-bit framebuffer, one byte
 * per pixel and `stride` bytes per row. The labels use the game's own disk font. */
void title_menu_draw(rt_machine *m, const title_menu *menu, u8 *dst, u32 stride, int w, int h);

/* The load game view. `title_slots_init` clears it; `title_slots_load` reads the ten save
 * directories, so a slot with no file is drawn grey and cannot be hovered. */
void title_slots_init(title_slots *slots);
void title_slots_load(title_slots *slots, rt_machine *m);

/* Notes the pointer and returns the non-empty slot under it, or -1. `back_hover` is set when the
 * pointer is over the Back button. Empty slots never report a hover. */
int title_slots_pointer(title_slots *slots, int present, int x, int y);

/* Draws the ten "Slot N" lines, the Back button and the pointer arrow. */
void title_slots_draw(rt_machine *m, const title_slots *slots, u8 *dst, u32 stride, int w, int h);

#endif /* ICFTD_HOST_TITLE_BUTTON_H */
