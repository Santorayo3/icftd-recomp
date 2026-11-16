/* The title menu's buttons.
 *
 * A port feature: the original has no title screen, so there is nothing here to diff against. A
 * button is two of the shipped pictures (assets\btn_normal.png and assets\btn_hover.png) with a
 * label centred on it in the game's own disk font - the TextFont diskfont.library built from
 * fonts\newnem.font, which every line of the engine's text is drawn with.
 *
 * The pictures are kept byte for byte by tools\mktitlebuttons.ps1; the four pens the menu needs
 * are palette entries 252..255, past the 69 colours the title picture itself uses, so drawing the
 * menu changes no pixel of the art.
 *
 * What a click does is title.c's business: the layout below names the action, the menu reports the
 * button under the pointer and the press edge, and title.c starts a new game, loads the selected
 * save slot or ends the run. Settings is drawn with the others but is not wired yet.
 *
 * The load game view replaces the buttons with ten "Slot N" lines and a Back button at the bottom.
 * A slot with no save file is grey; a slot with one is white, turns #00FF00 under the pointer and
 * is what a click loads.
 */
#include <stdio.h>
#include <string.h>

#include "title_button.h"
#include "display.h"
#include "title_buttons.h"

/* The attached layout: one column inside the title picture's right-hand panel. The larger gap
 * before Quit Game is the layout's own grouping, not a mistake. */
#define TITLE_BUTTON_X 230

/* The slot lines take the buttons' place: ten 8 px rows from the first button down to just above
 * the Back button, which sits where Quit Game was. */
#define TITLE_SLOT_Y      80
#define TITLE_SLOT_STEP   8
#define TITLE_BACK_Y      164

static const struct
{
    const char *label;
    s16 y;
    title_action action;
} g_titleButtonLayout[] =
{
    { "New Game",  85, TITLE_ACTION_NEW_GAME },
    { "Load Game", 106, TITLE_ACTION_LOAD_GAME },
    { "Settings",  127, TITLE_ACTION_NONE },     /* drawn, not wired yet */
    { "Quit Game", 164, TITLE_ACTION_QUIT }
};

#define TITLE_BUTTON_LAYOUT_COUNT \
    ((int)(sizeof g_titleButtonLayout / sizeof g_titleButtonLayout[0]))

const u8 *title_menu_palette(void)
{
    static u8 pal[(TITLE_BUTTON_PEN_COUNT - TITLE_BUTTON_PEN_SLOT_EMPTY) * 3];
    static int ready;

    if (!ready)
    {
        static const u8 empty[3] = { 128, 128, 128 };   /* a slot with no save   */
        static const u8 hover[3] = { 0, 255, 0 };       /* #00FF00 under the pointer */
        static const u8 white[3] = { 255, 255, 255 };   /* the labels            */

        /* Index 0 of each picture is the outline, index 1 the fill. The pens are the pictures'
         * own colours, so the generated tables are the only source of them. */
        memcpy(pal + (TITLE_BUTTON_PEN_SLOT_EMPTY - TITLE_BUTTON_PEN_SLOT_EMPTY) * 3, empty, 3);
        memcpy(pal + (TITLE_BUTTON_PEN_SLOT_HOVER - TITLE_BUTTON_PEN_SLOT_EMPTY) * 3, hover, 3);
        memcpy(pal + (TITLE_BUTTON_PEN_OUTLINE   - TITLE_BUTTON_PEN_SLOT_EMPTY) * 3,
               g_titleButtonNormalPal, 3);
        memcpy(pal + (TITLE_BUTTON_PEN_NORMAL    - TITLE_BUTTON_PEN_SLOT_EMPTY) * 3,
               g_titleButtonNormalPal + 3, 3);
        memcpy(pal + (TITLE_BUTTON_PEN_HOVER     - TITLE_BUTTON_PEN_SLOT_EMPTY) * 3,
               g_titleButtonHoverPal + 3, 3);
        memcpy(pal + (TITLE_BUTTON_PEN_TEXT      - TITLE_BUTTON_PEN_SLOT_EMPTY) * 3, white, 3);
        ready = 1;
    }
    return pal;
}

void title_menu_init(title_menu *menu)
{
    int i;

    memset(menu, 0, sizeof *menu);
    menu->hover = -1;
    menu->pointer_on = 0;
    for (i = 0; i < TITLE_BUTTON_LAYOUT_COUNT && i < TITLE_BUTTON_MAX; i++)
    {
        menu->buttons[i].label = g_titleButtonLayout[i].label;
        menu->buttons[i].x = TITLE_BUTTON_X;
        menu->buttons[i].y = g_titleButtonLayout[i].y;
        menu->buttons[i].w = TITLE_BUTTON_W;
        menu->buttons[i].h = TITLE_BUTTON_H;
        menu->buttons[i].action = g_titleButtonLayout[i].action;
    }
    menu->count = i;
}

int title_menu_pointer(title_menu *menu, int present, int x, int y)
{
    int i;

    menu->pointer_on = present ? 1 : 0;
    menu->pointer_x = (s16)x;
    menu->pointer_y = (s16)y;
    menu->hover = -1;
    if (!present) return -1;
    for (i = 0; i < menu->count; i++)
    {
        const title_button *b = &menu->buttons[i];

        if (x >= b->x && y >= b->y && x < b->x + b->w && y < b->y + b->h)
        {
            menu->hover = i;
            break;
        }
    }
    return menu->hover;
}

/* Copies one state picture, clipping to the framebuffer. */
static void title_button_blit(u8 *dst, u32 stride, int w, int h, int x, int y,
                              const u8 *art, const u8 *pens)
{
    int row, col;

    for (row = 0; row < TITLE_BUTTON_H; row++)
    {
        int py = y + row;

        if (py < 0 || py >= h) continue;
        for (col = 0; col < TITLE_BUTTON_W; col++)
        {
            int px = x + col;

            if (px >= 0 && px < w)
                dst[(u32)py * stride + (u32)px] = pens[art[row * TITLE_BUTTON_W + col]];
        }
    }
}

/* One button: the state picture and its centred label. */
static void title_button_draw(rt_machine *m, u8 *dst, u32 stride, int w, int h,
                              int x, int y, const char *label, int hovered)
{
    u8 pens[2];
    s32 tw;
    int th, tx, ty;

    pens[0] = TITLE_BUTTON_PEN_OUTLINE;
    pens[1] = hovered ? TITLE_BUTTON_PEN_HOVER : TITLE_BUTTON_PEN_NORMAL;
    title_button_blit(dst, stride, w, h, x, y,
                      hovered ? g_titleButtonHover : g_titleButtonNormal, pens);

    tw = rt_font_text_width(m, label);
    th = rt_font_height(m);
    tx = x + ((int)TITLE_BUTTON_W - tw) / 2;
    ty = y + ((int)TITLE_BUTTON_H - th) / 2 + 1;
    rt_font_text_draw(m, dst, stride, w, h, tx, ty, label, TITLE_BUTTON_PEN_TEXT);
}

void title_menu_draw(rt_machine *m, const title_menu *menu, u8 *dst, u32 stride, int w, int h)
{
    int i;

    if (dst == 0) return;
    for (i = 0; i < menu->count; i++)
    {
        const title_button *b = &menu->buttons[i];

        title_button_draw(m, dst, stride, w, h, b->x, b->y, b->label, i == menu->hover);
    }
    if (menu->pointer_on)
        rt_pointer_draw(dst, stride, w, h, menu->pointer_x, menu->pointer_y);
}

void title_slots_init(title_slots *slots)
{
    memset(slots, 0, sizeof *slots);
    slots->hover = -1;
    memset(slots->empty, 1, sizeof slots->empty);
}

void title_slots_load(title_slots *slots, rt_machine *m)
{
    int i;

    for (i = 0; i < TITLE_SLOT_COUNT; i++)
        slots->empty[i] = (u8)(rt_save_slot_empty(m, i + 1) ? 1 : 0);
    slots->hover = -1;
    slots->back_hover = 0;
}

int title_slots_pointer(title_slots *slots, int present, int x, int y)
{
    int i;

    slots->pointer_on = present ? 1 : 0;
    slots->pointer_x = (s16)x;
    slots->pointer_y = (s16)y;
    slots->hover = -1;
    slots->back_hover = 0;
    if (!present) return -1;
    for (i = 0; i < TITLE_SLOT_COUNT; i++)
    {
        int top = TITLE_SLOT_Y + i * TITLE_SLOT_STEP;

        if (x >= TITLE_BUTTON_X && x < TITLE_BUTTON_X + TITLE_BUTTON_W &&
            y >= top && y < top + TITLE_SLOT_STEP)
        {
            if (!slots->empty[i]) slots->hover = i;
            return slots->hover;
        }
    }
    if (x >= TITLE_BUTTON_X && x < TITLE_BUTTON_X + TITLE_BUTTON_W &&
        y >= TITLE_BACK_Y && y < TITLE_BACK_Y + TITLE_BUTTON_H)
        slots->back_hover = 1;
    return -1;
}

void title_slots_draw(rt_machine *m, const title_slots *slots, u8 *dst, u32 stride, int w, int h)
{
    int i;

    if (dst == 0) return;
    for (i = 0; i < TITLE_SLOT_COUNT; i++)
    {
        char label[16];
        u8 pen;
        s32 tw;
        int top = TITLE_SLOT_Y + i * TITLE_SLOT_STEP;

        sprintf(label, "Slot %d", i + 1);
        if (slots->empty[i]) pen = TITLE_BUTTON_PEN_SLOT_EMPTY;
        else if (i == slots->hover) pen = TITLE_BUTTON_PEN_SLOT_HOVER;
        else pen = TITLE_BUTTON_PEN_TEXT;
        tw = rt_font_text_width(m, label);
        rt_font_text_draw(m, dst, stride, w, h,
                          TITLE_BUTTON_X + ((int)TITLE_BUTTON_W - tw) / 2, top,
                          label, pen);
    }
    title_button_draw(m, dst, stride, w, h, TITLE_BUTTON_X, TITLE_BACK_Y, "Back",
                      slots->back_hover);
    if (slots->pointer_on)
        rt_pointer_draw(dst, stride, w, h, slots->pointer_x, slots->pointer_y);
}
