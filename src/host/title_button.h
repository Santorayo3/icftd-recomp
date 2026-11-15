/* The title menu's buttons - a port feature. See title_button.c. */
#ifndef ICFTD_HOST_TITLE_BUTTON_H
#define ICFTD_HOST_TITLE_BUTTON_H

#include "types.h"
#include "machine.h"

#define TITLE_BUTTON_MAX 8

/* The four pens the menu adds, past the 69 the title picture uses. */
enum
{
    TITLE_BUTTON_PEN_OUTLINE = 252,
    TITLE_BUTTON_PEN_NORMAL,
    TITLE_BUTTON_PEN_HOVER,
    TITLE_BUTTON_PEN_TEXT,
    TITLE_BUTTON_PEN_COUNT
};

typedef struct title_button
{
    const char *label;
    s16 x, y;
    s16 w, h;
} title_button;

typedef struct title_menu
{
    title_button buttons[TITLE_BUTTON_MAX];
    int count;
    int hover;                          /* the button under the pointer, -1 for none */
    int pointer_on;                     /* the platform reported a pointer this frame */
    s16 pointer_x, pointer_y;           /* its position, the arrow's tip */
} title_menu;

/* The menu's own colours, RGB: the outline, the normal fill, the hover fill and the text. */
const u8 *title_menu_palette(void);

/* Fills the menu with the shipped layout; call it once before drawing. */
void title_menu_init(title_menu *menu);

/* Notes where the pointer is (framebuffer coordinates) and whether the platform has one at all,
 * and returns the button it is over, or -1. A pointer outside every button clears the hover. */
int title_menu_pointer(title_menu *menu, int present, int x, int y);

/* Draws the buttons, their labels and the pointer arrow into a chunky 8-bit framebuffer, one byte
 * per pixel and `stride` bytes per row. The labels use the game's own disk font. */
void title_menu_draw(rt_machine *m, const title_menu *menu, u8 *dst, u32 stride, int w, int h);

#endif /* ICFTD_HOST_TITLE_BUTTON_H */
