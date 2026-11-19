/* The situation map's save-slot picker.
 *
 * A port feature: the original has one save file and no slot UI. Clicking the map's SAVE GAME mark
 * opens this list instead of ending the session at once; picking a slot makes that slot active and
 * lets the engine's own save path run, and Back returns to the map. Nothing here writes machine
 * state - the caller owns that - so a measurement run that never installs the map seam never sees
 * the picker.
 *
 * The box is assets\portrait_box.png, kept byte-exact in portrait_box_art.h by
 * tools\mkportraitbox.ps1. The ten lines and the Back button use the same drawing the title's Load
 * Game list uses: the game's disk font for the labels, the shipped button picture for Back, and the
 * menu's pens (grey empty, white filled, #00FF00 under the pointer). The picker is drawn after the
 * engine's frame - through the runtime's port-overlay hook - so it covers the map and the pointer
 * arrow is drawn last.
 */
#include <stdio.h>
#include <string.h>

#include "save_ui.h"
#include "display.h"
#include "title_button.h"
#include "../runtime/lang.h"
#include "portrait_box_art.h"

/* The portrait box is the whole popup; its mustard interior starts at x 6, y 11 and ends at x 80,
 * y 123 (the decorative border is four or five pixels wide). The content uses that interior: the
 * title, ten 8 px slot rows and the 73x14 Back button. */
#define SAVE_UI_LEFT   6
#define SAVE_UI_RIGHT  80
#define SAVE_UI_TITLE_Y 12
#define SAVE_UI_SLOT_Y  22
#define SAVE_UI_STEP    8
#define SAVE_UI_BACK_X  6
#define SAVE_UI_BACK_Y  108

/* Palette entries the portrait box's nine colours are drawn with. 224..232 is clear of the OSD's
 * 240..255, and the title menu's pens (250..255) are installed on top of their own entries. */
#define SAVE_UI_PEN_ART 224

void save_ui_init(save_ui *ui)
{
    memset(ui, 0, sizeof *ui);
    ui->hover = -1;
    memset(ui->empty, 1, sizeof ui->empty);
}

void save_ui_start(save_ui *ui, rt_machine *m)
{
    int i;

    for (i = 0; i < SAVE_UI_SLOTS; i++)
        ui->empty[i] = (u8)(rt_save_slot_empty(m, i + 1) ? 1 : 0);
    ui->open = 1;
    ui->hover = -1;
    ui->back_hover = 0;
    ui->pointer_on = 0;
}

void save_ui_close(save_ui *ui)
{
    ui->open = 0;
    ui->hover = -1;
    ui->back_hover = 0;
}

/* Where the popup goes: the middle of the presented picture. */
static void save_ui_origin(int w, int h, int *x0, int *y0)
{
    *x0 = (w - PORTRAIT_W) / 2;
    *y0 = (h - PORTRAIT_H) / 2;
}

int save_ui_pointer(save_ui *ui, int present, int x, int y)
{
    int i, x0, y0;

    ui->pointer_on = present ? 1 : 0;
    ui->pointer_x = (s16)x;
    ui->pointer_y = (s16)y;
    ui->hover = -1;
    ui->back_hover = 0;
    if (!present) return -1;

    save_ui_origin(rt_gfx_width(), rt_gfx_height(), &x0, &y0);
    x -= x0;
    y -= y0;
    for (i = 0; i < SAVE_UI_SLOTS; i++)
    {
        int top = SAVE_UI_SLOT_Y + i * SAVE_UI_STEP;

        if (x >= SAVE_UI_LEFT && x < SAVE_UI_RIGHT && y >= top && y < top + SAVE_UI_STEP)
        {
            ui->hover = i;
            return i;
        }
    }
    if (x >= SAVE_UI_BACK_X && x < SAVE_UI_BACK_X + title_button_width() &&
        y >= SAVE_UI_BACK_Y && y < SAVE_UI_BACK_Y + title_button_height())
        ui->back_hover = 1;
    return -1;
}

/* The box, one byte per pixel in the art's own palette indices. */
static void save_ui_box(u8 *dst, u32 stride, int w, int h, int x0, int y0)
{
    int row, col;

    for (row = 0; row < PORTRAIT_H; row++)
    {
        int py = y0 + row;

        if (py < 0 || py >= h) continue;
        for (col = 0; col < PORTRAIT_W; col++)
        {
            u8 v = g_portraitBox[row * PORTRAIT_W + col];
            int px = x0 + col;

            if (v != PORTRAIT_TRANSPARENT && px >= 0 && px < w)
                dst[(u32)py * stride + (u32)px] = (u8)(SAVE_UI_PEN_ART + v);
        }
    }
}

static void save_ui_text(rt_machine *m, u8 *dst, u32 stride, int w, int h, int cx, int top,
                         const char *text, u8 pen)
{
    s32 tw = rt_font_text_width(m, text);

    rt_font_text_draw(m, dst, stride, w, h, cx - tw / 2, top, text, pen);
}

void save_ui_draw(rt_machine *m, const save_ui *ui, rt_surface *s)
{
    u8 *dst;
    char label[16];
    int i, x0, y0, cx;
    int w, h;
    u32 stride;

    if (ui == 0 || !ui->open || s == 0 || s->dst == 0) return;
    dst = s->dst;
    stride = s->stride;
    w = s->w;
    h = s->h;

    rt_overlay_palette(SAVE_UI_PEN_ART, PORTRAIT_COLOURS, g_portraitBoxPal);
    rt_overlay_palette(TITLE_BUTTON_PEN_SLOT_EMPTY,
                       TITLE_BUTTON_PEN_COUNT - TITLE_BUTTON_PEN_SLOT_EMPTY,
                       title_menu_palette());
    rt_overlay_palette(EMU_PEN_POINTER, EMU_PEN_POINTER_COLOURS, rt_pointer_palette());

    save_ui_origin(w, h, &x0, &y0);
    save_ui_box(dst, stride, w, h, x0, y0);
    cx = x0 + (SAVE_UI_LEFT + SAVE_UI_RIGHT) / 2;
    save_ui_text(m, dst, stride, w, h, cx, y0 + SAVE_UI_TITLE_Y, rt_lang_text("Save Game"),
                 TITLE_BUTTON_PEN_TEXT);
    for (i = 0; i < SAVE_UI_SLOTS; i++)
    {
        u8 pen;

        sprintf(label, rt_lang_text("Slot %d"), i + 1);
        if (i == ui->hover) pen = TITLE_BUTTON_PEN_SLOT_HOVER;
        else if (ui->empty[i]) pen = TITLE_BUTTON_PEN_SLOT_EMPTY;
        else pen = TITLE_BUTTON_PEN_TEXT;
        save_ui_text(m, dst, stride, w, h, cx, y0 + SAVE_UI_SLOT_Y + i * SAVE_UI_STEP,
                     label, pen);
    }
    title_button_draw_at(m, dst, stride, w, h, x0 + SAVE_UI_BACK_X,
                         y0 + SAVE_UI_BACK_Y, "Back", ui->back_hover);
    if (ui->pointer_on)
        rt_pointer_draw(dst, stride, w, h, ui->pointer_x, ui->pointer_y);
}
