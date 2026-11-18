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
 * button under the pointer and the press edge, and title.c starts a new game, opens the settings,
 * loads the selected save slot or ends the run.
 *
 * The load game view replaces the buttons with ten "Slot N" lines and a Back button at the bottom.
 * A slot with no save file is grey; a slot with one is white, turns #00FF00 under the pointer and
 * is what a click loads.
 *
 * The settings view replaces them too: one row per option - its label in the game's font, the
 * control under it - and Back where Quit Game was. The controls are assets\minus_*.png,
 * assets\plus_*.png and assets\toggle_*.png, kept byte-exact in settings_art.h by
 * tools\mksettingsart.ps1; the toggle is drawn on a cyan surround that the table marks
 * transparent, so the panel shows through its rounded corners.
 */
#include <stdio.h>
#include <string.h>

#include "title_button.h"
#include "config.h"
#include "display.h"
#include "platform.h"
#include "settings_art.h"
#include "title_buttons.h"

/* The attached layout: one column inside the title picture's right-hand panel. The larger gap
 * before Quit Game is the layout's own grouping, not a mistake. */
#define TITLE_BUTTON_X 230

/* The slot lines take the buttons' place: ten 8 px rows from the first button down to just above
 * the Back button, which sits where Quit Game was. */
#define TITLE_SLOT_Y      80
#define TITLE_SLOT_STEP   8
#define TITLE_BACK_Y      164

/* The settings view uses the same column, inside the picture's panel (x 230..302, y 72..184). Each
 * option is a label line with its control under it, because the column is 73 px wide and
 * "Music Vol." plus "[-] 10 [+]" needs 102. Three rows, or two on a platform with no window mode
 * (the DOS build), which are centred in the space the three would take. */
#define TITLE_SETTINGS_CX         (TITLE_BUTTON_X + TITLE_BUTTON_W / 2)
#define TITLE_SETTINGS_ROW_Y      74    /* the first label's top row */
#define TITLE_SETTINGS_ROW_Y2     90    /* the first of two rows only */
#define TITLE_SETTINGS_ROW_STEP   28    /* label 7 + gap 3 + control 14 + gap 4 */
#define TITLE_SETTINGS_CONTROL_DY 10    /* the control's top row, from its label's */
#define TITLE_SETTINGS_VALUE_W    12    /* the volume cell: "10" */
#define TITLE_SETTINGS_VALUE_GAP  6
#define TITLE_SETTINGS_STATE_W    16    /* the toggle's "On"/"Off" cell */
#define TITLE_SETTINGS_TOGGLE_W   (TITLE_TOGGLE_W + TITLE_SETTINGS_VALUE_GAP + TITLE_SETTINGS_STATE_W)
#define TITLE_SETTINGS_VOLUME_W   (TITLE_STEP_W * 2 + TITLE_SETTINGS_VALUE_W + TITLE_SETTINGS_VALUE_GAP * 2)

/* The toggle's left edge and the volume row's, centred in the column, and the volume row's three
 * parts inside it: minus, the value cell, plus. */
#define TITLE_SETTINGS_TOGGLE_X   (TITLE_SETTINGS_CX - TITLE_SETTINGS_TOGGLE_W / 2)
#define TITLE_SETTINGS_VOLUME_X   (TITLE_SETTINGS_CX - TITLE_SETTINGS_VOLUME_W / 2)
#define TITLE_SETTINGS_VALUE_X    (TITLE_SETTINGS_VOLUME_X + TITLE_STEP_W + TITLE_SETTINGS_VALUE_GAP)
#define TITLE_SETTINGS_PLUS_X     (TITLE_SETTINGS_VALUE_X + TITLE_SETTINGS_VALUE_W + TITLE_SETTINGS_VALUE_GAP)

/* The two layouts. Without the add-on the menu is what it has always been - four buttons at 85,
 * 106, 127 and 164. With it there is a fifth row in between, and the four others move down to make
 * room (a gap of 19 rows, the panel is y 72..184 and a button is 14 high, so 164 + 14 = 178 still
 * fits); Quit Game keeps its place at the bottom either way.
 *
 * The fifth button starts the add-on's game, the way New Game starts the 1989 one; it is offered
 * only when the add-on is there and is not what is running, so the menu never lists a game the
 * player is already in. "Play Antheads" has to fit the 73 px button: measured with the game's own
 * font it is 71 px. */
typedef struct title_button_row
{
    const char *label;
    s16 y;
    title_action action;
} title_button_row;

static const title_button_row g_titleButtonLayout[] =
{
    { "New Game",  85, TITLE_ACTION_NEW_GAME },
    { "Load Game", 106, TITLE_ACTION_LOAD_GAME },
    { "Settings",  127, TITLE_ACTION_SETTINGS },
    { "Quit Game", 164, TITLE_ACTION_QUIT }
};

static const title_button_row g_titleButtonLayoutAddon[] =
{
    { "New Game",      84, TITLE_ACTION_NEW_GAME },
    { "Play Antheads", 103, TITLE_ACTION_ANTHEADS },
    { "Load Game",     122, TITLE_ACTION_LOAD_GAME },
    { "Settings",      141, TITLE_ACTION_SETTINGS },
    { "Quit Game",     164, TITLE_ACTION_QUIT }
};

#define TITLE_BUTTON_LAYOUT_COUNT(l) ((int)(sizeof(l) / sizeof(l[0])))

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

void title_menu_init(title_menu *menu, int addon, int addonRunning)
{
    /* The add-on's row is offered to the menu that has a choice to make: a game already running
     * the add-on has nothing to switch to, and its New Game plays it. */
    int offerAddon = addon && !addonRunning;
    const title_button_row *rows = offerAddon ? g_titleButtonLayoutAddon : g_titleButtonLayout;
    int n = offerAddon ? TITLE_BUTTON_LAYOUT_COUNT(g_titleButtonLayoutAddon)
                       : TITLE_BUTTON_LAYOUT_COUNT(g_titleButtonLayout);
    int i;

    memset(menu, 0, sizeof *menu);
    menu->hover = -1;
    menu->pointer_on = 0;
    for (i = 0; i < n && i < TITLE_BUTTON_MAX; i++)
    {
        menu->buttons[i].label = rows[i].label;
        menu->buttons[i].x = TITLE_BUTTON_X;
        menu->buttons[i].y = rows[i].y;
        menu->buttons[i].w = TITLE_BUTTON_W;
        menu->buttons[i].h = TITLE_BUTTON_H;
        menu->buttons[i].action = rows[i].action;
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

int title_button_width(void) { return TITLE_BUTTON_W; }
int title_button_height(void) { return TITLE_BUTTON_H; }

/* One button: the state picture and its centred label. */
void title_button_draw_at(rt_machine *m, u8 *dst, u32 stride, int w, int h,
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

        title_button_draw_at(m, dst, stride, w, h, b->x, b->y, b->label, i == menu->hover);
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

const u8 *title_settings_palette(void)
{
    return g_titleSettingsPal;
}

/* The three rows' label tops. The fullscreen one is -1 on a platform with no window mode: the DOS
 * build then draws the two volume rows, moved down into the middle of the space they leave. */
static void title_settings_rows(const title_settings *settings, int *fs, int *music, int *sound)
{
    int y = settings->fullscreen_on ? TITLE_SETTINGS_ROW_Y : TITLE_SETTINGS_ROW_Y2;

    *fs = settings->fullscreen_on ? y : -1;
    *music = settings->fullscreen_on ? y + TITLE_SETTINGS_ROW_STEP : y;
    *sound = *music + TITLE_SETTINGS_ROW_STEP;
}

void title_settings_init(title_settings *settings, rt_machine *m, int fullscreen)
{
    memset(settings, 0, sizeof *settings);
    settings->fullscreen_on = fullscreen ? 1 : 0;
    /* The view shows the settings the game was started with - the ini the front end read and
     * applied - and falls back to what the machine is running with when the file has no entry.
     * rt_audio_set_gain keeps the mixer's two gains as percentages of the [AUDIO] 0..10 values. */
    settings->fullscreen = settings->fullscreen_on
                               ? rt_config_bool("VIDEO", "fullscreen", (int)plat_fullscreen())
                               : 0;
    settings->music = rt_config_int("AUDIO", "music", (int)(m->audio.musicGain / 10), 0, 10);
    settings->sound = rt_config_int("AUDIO", "sound", (int)(m->audio.soundGain / 10), 0, 10);
    settings->hover = TITLE_SETTING_NONE;
}

int title_settings_pointer(title_settings *settings, int present, int x, int y)
{
    int fs, music, sound;

    settings->pointer_on = present ? 1 : 0;
    settings->pointer_x = (s16)x;
    settings->pointer_y = (s16)y;
    settings->hover = TITLE_SETTING_NONE;
    settings->back_hover = 0;
    if (!present) return TITLE_SETTING_NONE;

    title_settings_rows(settings, &fs, &music, &sound);
    if (fs >= 0 && x >= TITLE_SETTINGS_TOGGLE_X &&
        x < TITLE_SETTINGS_TOGGLE_X + TITLE_SETTINGS_TOGGLE_W &&
        y >= fs + TITLE_SETTINGS_CONTROL_DY &&
        y < fs + TITLE_SETTINGS_CONTROL_DY + TITLE_TOGGLE_H)
        settings->hover = TITLE_SETTING_FULLSCREEN;
    else if (x >= TITLE_SETTINGS_VOLUME_X && x < TITLE_SETTINGS_VOLUME_X + TITLE_STEP_W)
    {
        if (y >= music + TITLE_SETTINGS_CONTROL_DY &&
            y < music + TITLE_SETTINGS_CONTROL_DY + TITLE_STEP_H)
            settings->hover = TITLE_SETTING_MUSIC_DOWN;
        else if (y >= sound + TITLE_SETTINGS_CONTROL_DY &&
                 y < sound + TITLE_SETTINGS_CONTROL_DY + TITLE_STEP_H)
            settings->hover = TITLE_SETTING_SOUND_DOWN;
    }
    else if (x >= TITLE_SETTINGS_PLUS_X && x < TITLE_SETTINGS_PLUS_X + TITLE_STEP_W)
    {
        if (y >= music + TITLE_SETTINGS_CONTROL_DY &&
            y < music + TITLE_SETTINGS_CONTROL_DY + TITLE_STEP_H)
            settings->hover = TITLE_SETTING_MUSIC_UP;
        else if (y >= sound + TITLE_SETTINGS_CONTROL_DY &&
                 y < sound + TITLE_SETTINGS_CONTROL_DY + TITLE_STEP_H)
            settings->hover = TITLE_SETTING_SOUND_UP;
    }
    if (x >= TITLE_BUTTON_X && x < TITLE_BUTTON_X + TITLE_BUTTON_W &&
        y >= TITLE_BACK_Y && y < TITLE_BACK_Y + TITLE_BUTTON_H)
        settings->back_hover = 1;
    return settings->hover;
}

/* One settings picture. A pixel is the offset of a pen from TITLE_SETTINGS_PEN_FIRST, or
 * TITLE_SETTINGS_TRANSPARENT for the toggle's cyan surround, which leaves the panel showing. */
static void title_settings_picture(u8 *dst, u32 stride, int w, int h, int x, int y,
                                   const u8 *art, int aw, int ah)
{
    int row, col;

    for (row = 0; row < ah; row++)
    {
        int py = y + row;

        if (py < 0 || py >= h) continue;
        for (col = 0; col < aw; col++)
        {
            u8 v = art[row * aw + col];
            int px = x + col;

            if (v != TITLE_SETTINGS_TRANSPARENT && px >= 0 && px < w)
                dst[(u32)py * stride + (u32)px] = (u8)(TITLE_SETTINGS_PEN_FIRST + v);
        }
    }
}

static void title_settings_label(rt_machine *m, u8 *dst, u32 stride, int w, int h, int top,
                                 const char *text)
{
    s32 tw = rt_font_text_width(m, text);

    rt_font_text_draw(m, dst, stride, w, h, TITLE_SETTINGS_CX - tw / 2, top, text,
                      TITLE_BUTTON_PEN_TEXT);
}

/* One volume row: the label, then minus, the value and plus on one line. */
static void title_settings_volume(rt_machine *m, const title_settings *settings, u8 *dst,
                                  u32 stride, int w, int h, int top, const char *label,
                                  int value, int downHover, int upHover)
{
    char text[8];
    s32 tw;
    int ctl = top + TITLE_SETTINGS_CONTROL_DY;
    int textY = ctl + (TITLE_STEP_H - rt_font_height(m)) / 2 + 1;

    title_settings_label(m, dst, stride, w, h, top, label);
    title_settings_picture(dst, stride, w, h, TITLE_SETTINGS_VOLUME_X, ctl,
                           downHover ? g_titleMinusHover : g_titleMinusNormal,
                           TITLE_STEP_W, TITLE_STEP_H);
    sprintf(text, "%d", value);
    tw = rt_font_text_width(m, text);
    rt_font_text_draw(m, dst, stride, w, h,
                      TITLE_SETTINGS_VALUE_X + ((int)TITLE_SETTINGS_VALUE_W - tw) / 2, textY,
                      text, TITLE_BUTTON_PEN_TEXT);
    title_settings_picture(dst, stride, w, h, TITLE_SETTINGS_PLUS_X, ctl,
                           upHover ? g_titlePlusHover : g_titlePlusNormal,
                           TITLE_STEP_W, TITLE_STEP_H);
}

void title_settings_draw(rt_machine *m, const title_settings *settings, u8 *dst, u32 stride,
                         int w, int h)
{
    int fs, music, sound;

    if (dst == 0) return;
    title_settings_rows(settings, &fs, &music, &sound);

    if (fs >= 0)
    {
        const int ctl = fs + TITLE_SETTINGS_CONTROL_DY;

        title_settings_label(m, dst, stride, w, h, fs, "Fullscreen");
        title_settings_picture(dst, stride, w, h, TITLE_SETTINGS_TOGGLE_X, ctl,
                               settings->fullscreen ? g_titleToggleOn : g_titleToggleOff,
                               TITLE_TOGGLE_W, TITLE_TOGGLE_H);
        rt_font_text_draw(m, dst, stride, w, h,
                          TITLE_SETTINGS_TOGGLE_X + TITLE_TOGGLE_W + TITLE_SETTINGS_VALUE_GAP,
                          ctl + (TITLE_TOGGLE_H - rt_font_height(m)) / 2 + 1,
                          settings->fullscreen ? "On" : "Off", TITLE_BUTTON_PEN_TEXT);
    }
    title_settings_volume(m, settings, dst, stride, w, h, music, "Music Vol.", settings->music,
                          settings->hover == TITLE_SETTING_MUSIC_DOWN,
                          settings->hover == TITLE_SETTING_MUSIC_UP);
    title_settings_volume(m, settings, dst, stride, w, h, sound, "Sound Vol.", settings->sound,
                          settings->hover == TITLE_SETTING_SOUND_DOWN,
                          settings->hover == TITLE_SETTING_SOUND_UP);
    title_button_draw_at(m, dst, stride, w, h, TITLE_BUTTON_X, TITLE_BACK_Y, "Back",
                         settings->back_hover);
    if (settings->pointer_on)
        rt_pointer_draw(dst, stride, w, h, settings->pointer_x, settings->pointer_y);
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
    title_button_draw_at(m, dst, stride, w, h, TITLE_BUTTON_X, TITLE_BACK_Y, "Back",
                         slots->back_hover);
    if (slots->pointer_on)
        rt_pointer_draw(dst, stride, w, h, slots->pointer_x, slots->pointer_y);
}
