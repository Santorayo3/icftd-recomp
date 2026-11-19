/* The Escape confirmation.
 *
 * A port feature: the original has no title screen to go back to and no question to ask, so there
 * is nothing to diff here. The dialog does not end or change the game either - it only asks the
 * question that Escape used to answer by itself, and the caller takes the same restart
 * (src\host\title.c, host_title_escape) once Confirm is clicked. Cancel changes nothing, so the
 * player is exactly where he was.
 *
 * The plaque is assets\quit_confirm.png, kept byte-exact in quit_confirm_art.h by
 * tools\mkquitconfirm.ps1. Its cyan surround is the picture's key colour (the top-left pixel) and
 * is left untouched, so the game shows through the rounded corners; the question and the two
 * buttons sit in the mustard interior. The buttons are the title menu's own pictures and pens
 * (title_button.c), so the port has one kind of button, and the text is the game's disk font, like
 * every other line the port draws.
 *
 * It is drawn through the runtime's port-overlay hook, like the save picker: over the game's
 * picture, under the pointer. The two are never up together - Escape closes the picker, and the
 * picker cannot open while this is up (the front ends' input layer) - which is why this uses the
 * picker's art pens (224..232): the range below the save icon, the arrow and the crosshair is only
 * large enough for one nine-colour picture.
 */
#include <stdio.h>
#include <string.h>

#include "quit_confirm.h"
#include "display.h"
#include "title_button.h"
#include "../runtime/lang.h"
#include "quit_confirm_art.h"

/* The plaque's mustard interior: the decorative border is 6..8 px wide, so these are the rows and
 * columns the text and the buttons are laid out in. The question is centred in it; the buttons are
 * the title menu's 73x14 picture, side by side with a 6 px gap, centred under the question. */
#define QUIT_UI_LEFT       8
#define QUIT_UI_RIGHT      166
#define QUIT_UI_TEXT_Y     25
#define QUIT_UI_BUTTON_Y   38
#define QUIT_UI_BUTTON_GAP 6

/* The first button's left column, inside the plaque: the two shipped buttons and their gap,
 * centred in the interior. */
static int quit_confirm_button_x(void)
{
    int bw = title_button_width();

    return QUIT_UI_LEFT + (QUIT_UI_RIGHT - QUIT_UI_LEFT - (bw * 2 + QUIT_UI_BUTTON_GAP)) / 2;
}

/* The plaque's own nine colours. 224..232 is the picker's range: Escape closes the picker before
 * this opens, and the picker cannot open while this is up, so the two never share a frame. */
#define QUIT_PEN_ART 224

static const char *const g_quitConfirmText = "Quit to title menu?";
static const char *const g_quitConfirmYes = "Confirm";
static const char *const g_quitConfirmNo = "Cancel";

void quit_confirm_init(quit_confirm *ui)
{
    memset(ui, 0, sizeof *ui);
    ui->hover = QUIT_CONFIRM_NONE;
}

void quit_confirm_open(quit_confirm *ui, rt_machine *m)
{
    ui->open = 1;
    ui->hover = QUIT_CONFIRM_NONE;
    ui->pointer_on = 0;
    printf("quit: confirmation shown (frame %lu): '%s' [%s] [%s]\n", (unsigned long)m->frame,
           rt_lang_text(g_quitConfirmText), rt_lang_text(g_quitConfirmYes),
           rt_lang_text(g_quitConfirmNo));
}

void quit_confirm_close(quit_confirm *ui, rt_machine *m, const char *how)
{
    if (!ui->open) return;
    ui->open = 0;
    ui->hover = QUIT_CONFIRM_NONE;
    ui->pointer_on = 0;
    printf("quit: confirmation cancelled (%s, frame %lu)\n", how, (unsigned long)m->frame);
}

/* Where the popup goes: the middle of the presented picture, like the save picker. */
static void quit_confirm_origin(int w, int h, int *x0, int *y0)
{
    *x0 = (w - QUIT_CONFIRM_W) / 2;
    *y0 = (h - QUIT_CONFIRM_H) / 2;
}

/* The button at a position inside the plaque, or QUIT_CONFIRM_NONE. */
static int quit_confirm_at(int x, int y)
{
    int bx = quit_confirm_button_x();
    int bw = title_button_width();

    if (y < QUIT_UI_BUTTON_Y || y >= QUIT_UI_BUTTON_Y + title_button_height())
        return QUIT_CONFIRM_NONE;
    if (x >= bx && x < bx + bw)
        return QUIT_CONFIRM_YES;
    if (x >= bx + bw + QUIT_UI_BUTTON_GAP && x < bx + bw * 2 + QUIT_UI_BUTTON_GAP)
        return QUIT_CONFIRM_NO;
    return QUIT_CONFIRM_NONE;
}

quit_confirm_choice quit_confirm_frame(quit_confirm *ui, rt_machine *m,
                                       int present, int x, int y, int click)
{
    int x0, y0, choice;

    if (!ui->open) return QUIT_CONFIRM_NONE;
    ui->pointer_on = present ? 1 : 0;
    ui->pointer_x = (s16)x;
    ui->pointer_y = (s16)y;
    ui->hover = QUIT_CONFIRM_NONE;
    if (present)
    {
        quit_confirm_origin(rt_gfx_width(), rt_gfx_height(), &x0, &y0);
        ui->hover = quit_confirm_at(x - x0, y - y0);
    }
    if (!click || ui->hover == QUIT_CONFIRM_NONE) return QUIT_CONFIRM_NONE;

    choice = ui->hover;
    ui->open = 0;
    ui->hover = QUIT_CONFIRM_NONE;
    if (choice == QUIT_CONFIRM_YES)
        printf("quit: confirmation confirmed (frame %lu)\n", (unsigned long)m->frame);
    else
        printf("quit: confirmation cancelled (button, frame %lu)\n", (unsigned long)m->frame);
    return (quit_confirm_choice)choice;
}

/* The plaque, one byte per pixel in the art's own palette indices; the key colour is left alone. */
static void quit_confirm_box(u8 *dst, u32 stride, int w, int h, int x0, int y0)
{
    int row, col;

    for (row = 0; row < QUIT_CONFIRM_H; row++)
    {
        int py = y0 + row;

        if (py < 0 || py >= h) continue;
        for (col = 0; col < QUIT_CONFIRM_W; col++)
        {
            u8 v = g_quitConfirm[row * QUIT_CONFIRM_W + col];
            int px = x0 + col;

            if (v != QUIT_CONFIRM_TRANSPARENT && px >= 0 && px < w)
                dst[(u32)py * stride + (u32)px] = (u8)(QUIT_PEN_ART + v);
        }
    }
}

void quit_confirm_draw(rt_machine *m, const quit_confirm *ui, rt_surface *s)
{
    const char *text;
    s32 tw;
    int x0, y0, cx;

    if (ui == 0 || !ui->open || s == 0 || s->dst == 0) return;

    rt_overlay_palette(QUIT_PEN_ART, QUIT_CONFIRM_COLOURS, g_quitConfirmPal);
    rt_overlay_palette(TITLE_BUTTON_PEN_SLOT_EMPTY,
                       TITLE_BUTTON_PEN_COUNT - TITLE_BUTTON_PEN_SLOT_EMPTY,
                       title_menu_palette());
    rt_overlay_palette(EMU_PEN_POINTER, EMU_PEN_POINTER_COLOURS, rt_pointer_palette());

    quit_confirm_origin(s->w, s->h, &x0, &y0);
    quit_confirm_box(s->dst, s->stride, s->w, s->h, x0, y0);

    cx = x0 + (QUIT_UI_LEFT + QUIT_UI_RIGHT) / 2;
    text = rt_lang_text(g_quitConfirmText);
    tw = rt_font_text_width(m, text);
    rt_font_text_draw(m, s->dst, s->stride, s->w, s->h, cx - tw / 2, y0 + QUIT_UI_TEXT_Y, text,
                      TITLE_BUTTON_PEN_TEXT);

    title_button_draw_at(m, s->dst, s->stride, s->w, s->h,
                         x0 + quit_confirm_button_x(), y0 + QUIT_UI_BUTTON_Y,
                         g_quitConfirmYes, ui->hover == QUIT_CONFIRM_YES);
    title_button_draw_at(m, s->dst, s->stride, s->w, s->h,
                         x0 + quit_confirm_button_x() + title_button_width() + QUIT_UI_BUTTON_GAP,
                         y0 + QUIT_UI_BUTTON_Y, g_quitConfirmNo, ui->hover == QUIT_CONFIRM_NO);
    if (ui->pointer_on)
        rt_pointer_draw(s->dst, s->stride, s->w, s->h, ui->pointer_x, ui->pointer_y);
}
