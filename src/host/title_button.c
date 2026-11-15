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
 * The buttons have no actions yet. The menu only reports what the pointer is over; title.c still
 * starts the game on fire or 0, and the digit/letter keys still start their scenes.
 */
#include <string.h>

#include "title_button.h"
#include "display.h"
#include "title_buttons.h"

/* The attached layout: one column inside the title picture's right-hand panel. The larger gap
 * before Quit Game is the layout's own grouping, not a mistake. */
#define TITLE_BUTTON_X 230

static const struct
{
    const char *label;
    s16 y;
} g_titleButtonLayout[] =
{
    { "New Game",  85 },
    { "Load Game", 106 },
    { "Settings",  127 },
    { "Quit Game", 164 }
};

#define TITLE_BUTTON_LAYOUT_COUNT \
    ((int)(sizeof g_titleButtonLayout / sizeof g_titleButtonLayout[0]))

const u8 *title_menu_palette(void)
{
    static u8 pal[(TITLE_BUTTON_PEN_COUNT - TITLE_BUTTON_PEN_OUTLINE) * 3];
    static int ready;

    if (!ready)
    {
        /* Index 0 of each picture is the outline, index 1 the fill. The pens are the pictures'
         * own colours, so the generated tables are the only source of them. */
        memcpy(pal + 0, g_titleButtonNormalPal, 3);
        memcpy(pal + 3, g_titleButtonNormalPal + 3, 3);
        memcpy(pal + 6, g_titleButtonHoverPal + 3, 3);
        pal[9] = pal[10] = pal[11] = 255;          /* the labels are white */
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

void title_menu_draw(rt_machine *m, const title_menu *menu, u8 *dst, u32 stride, int w, int h)
{
    int i;

    if (dst == 0) return;
    for (i = 0; i < menu->count; i++)
    {
        const title_button *b = &menu->buttons[i];
        int hovered = i == menu->hover;
        u8 pens[2];
        s32 tw;
        int th, tx, ty;

        pens[0] = TITLE_BUTTON_PEN_OUTLINE;
        pens[1] = hovered ? TITLE_BUTTON_PEN_HOVER : TITLE_BUTTON_PEN_NORMAL;
        title_button_blit(dst, stride, w, h, b->x, b->y,
                          hovered ? g_titleButtonHover : g_titleButtonNormal, pens);

        tw = rt_font_text_width(m, b->label);
        th = rt_font_height(m);
        tx = b->x + ((int)b->w - tw) / 2;
        ty = b->y + ((int)b->h - th) / 2 + 1;
        rt_font_text_draw(m, dst, stride, w, h, tx, ty, b->label, TITLE_BUTTON_PEN_TEXT);
    }
    if (menu->pointer_on)
        rt_pointer_draw(dst, stride, w, h, menu->pointer_x, menu->pointer_y);
}
