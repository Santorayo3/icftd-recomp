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

/* The settings view's pens: the six colours its pictures are drawn with, in the order
 * tools\mksettingsart.ps1 writes into their pixel tables (see settings_art.h). They sit in the
 * free range below the presenter's 240..255, which the OSD and the pointer own. */
enum
{
    TITLE_SETTINGS_PEN_FIRST = 233,
    TITLE_SETTINGS_PEN_OUTLINE = TITLE_SETTINGS_PEN_FIRST,  /* the pictures' black border */
    TITLE_SETTINGS_PEN_FILL,                                /* the buttons' fill, the toggle's off track */
    TITLE_SETTINGS_PEN_HOVER,                               /* the fill under the pointer */
    TITLE_SETTINGS_PEN_ON,                                  /* the toggle's on track */
    TITLE_SETTINGS_PEN_KNOB,                                /* the toggle's knob */
    TITLE_SETTINGS_PEN_EDGE,                                /* the knob's edge */
    TITLE_SETTINGS_PEN_COUNT
};

/* What a button does when it is clicked. TITLE_ACTION_ANTHEADS is the fifth button: it starts the
 * add-on's game, exactly as TITLE_ACTION_NEW_GAME starts the 1989 one - the menu is the port's, and
 * each of the two entries plays its own build (docs\antheads.md). */
typedef enum title_action
{
    TITLE_ACTION_NONE = 0,
    TITLE_ACTION_NEW_GAME,
    TITLE_ACTION_LOAD_GAME,
    TITLE_ACTION_SETTINGS,
    TITLE_ACTION_QUIT,
    TITLE_ACTION_ANTHEADS
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

/* The load game view: one row per save *file* in place of the buttons, and the Back button under
 * them. `state` is filled from the save directories when the view opens and says which builds saved
 * in each slot - the two games share the slots (docs\antheads.md, Phase 7) - and `entry` is the
 * list that is drawn: one row per file, in slot order, so a slot both games saved in shows
 * "Slot N" and "Slot N (A)" and each row loads its own program. A row never asks a question about
 * what it already says.
 *
 * Ten rows fit between the first button and Back. When the slots hold more files than that, the
 * last row becomes "More" and the list pages - nothing is hidden, and no row changes meaning. */
#define TITLE_SLOT_ROWS 10

typedef struct title_slot_entry
{
    u8 slot;                            /* 1..TITLE_SLOT_COUNT: the directory the file is in */
    u8 kind;                            /* RT_SAVE_ORIGINAL or RT_SAVE_ANTHEADS: which file */
} title_slot_entry;

typedef struct title_slots
{
    u8  state[TITLE_SLOT_COUNT];        /* RT_SAVE_*: which builds saved in that slot */
    title_slot_entry entry[TITLE_SLOT_COUNT * 2];
    int entries;                        /* save files the ten slots hold */
    int page;                           /* the page of rows shown (only when entries > TITLE_SLOT_ROWS) */
    int hover;                          /* the row under the pointer, -1 for none */
    int more_hover;                     /* the pointer is over the "More" row */
    int back_hover;                     /* the pointer is over the Back button */
    int pointer_on;                     /* the platform reported a pointer this frame */
    s16 pointer_x, pointer_y;           /* its position, the arrow's tip */
} title_slots;

/* The control of the settings view the pointer is over. */
typedef enum title_setting_hit
{
    TITLE_SETTING_NONE = 0,
    TITLE_SETTING_FULLSCREEN,           /* the toggle */
    TITLE_SETTING_MUSIC_DOWN,           /* the music's minus button */
    TITLE_SETTING_MUSIC_UP,
    TITLE_SETTING_SOUND_DOWN,
    TITLE_SETTING_SOUND_UP,
    TITLE_SETTING_LANGUAGE_DOWN,        /* the language's minus button */
    TITLE_SETTING_LANGUAGE_UP
} title_setting_hit;

/* The settings view: the buttons are replaced by one row per option (its label in the game's
 * font, the control under it) and the Back button where Quit Game was. The view shows the settings
 * the game was started with (icftd.ini), and the caller applies what a click changes, so nothing
 * here touches the machine. `fullscreen_on` is 0 on a platform with no window mode of its own (the
 * DOS build), which draws the volume and language rows only.
 *
 * The language row shows the two-letter code of the file the run is using ("en" for the original),
 * between the same minus/plus buttons the volumes have. `language` indexes `languages` codes, which
 * are the ones the runtime found at start-up (rt_lang_available - English first, then every
 * complete `lang\<code>.csv`). The caller switches the run and keeps the index in step. */
typedef struct title_settings
{
    int fullscreen;                     /* the toggle's state: 1 = fullscreen */
    int fullscreen_on;                  /* this platform has a window mode to toggle */
    int music, sound;                   /* 0..10, the [AUDIO] volumes */
    int language;                       /* the index of the code the run is using */
    int languages;                      /* how many the runtime offers (at least English) */
    int hover;                          /* TITLE_SETTING_*, NONE for none */
    int back_hover;                     /* the pointer is over the Back button */
    int pointer_on;                     /* the platform reported a pointer this frame */
    s16 pointer_x, pointer_y;           /* its position, the arrow's tip */
} title_settings;

/* The menu's own colours, RGB: the two slot-list colours and the button outline, normal fill,
 * hover fill and text. */
const u8 *title_menu_palette(void);

/* Fills the menu with the shipped layout; call it once before drawing.
 *
 * Four buttons, or five when the add-on is playable (`addon` = 1) and is not the build running
 * (`addonRunning` = 0): the extra row sits between New Game and Load Game and starts the add-on's
 * game, so the four others move down and Quit Game keeps its place at the bottom of the panel. A
 * game that is already running the add-on gets the four buttons, because its New Game plays it -
 * there is no second game to offer. */
void title_menu_init(title_menu *menu, int addon, int addonRunning);

/* Notes where the pointer is (framebuffer coordinates) and whether the platform has one at all,
 * and returns the button it is over, or -1. A pointer outside every button clears the hover. */
int title_menu_pointer(title_menu *menu, int present, int x, int y);

/* Draws the buttons, their labels and the pointer arrow into a chunky 8-bit framebuffer, one byte
 * per pixel and `stride` bytes per row. The labels use the game's own disk font. */
void title_menu_draw(rt_machine *m, const title_menu *menu, u8 *dst, u32 stride, int w, int h);

/* The load game view. `title_slots_init` clears it; `title_slots_load` reads the ten save
 * directories into `state` and builds the row list (`entry`, `entries`): one row per save file, in
 * slot order, the 1989 game's before the add-on's. A slot no file came back from is drawn grey and
 * cannot be hovered.
 */
void title_slots_init(title_slots *slots);
void title_slots_load(title_slots *slots, rt_machine *m);

/* Notes the pointer and returns the row under it, or -1; the row's entry is title_slots_at(). An
 * empty row never reports a hover. `more_hover` and `back_hover` name the other two rows. */
int title_slots_pointer(title_slots *slots, int present, int x, int y);

/* The entry a row of the current page shows, or 0 for a row past the end (an empty slot's grey row,
 * or the "More" row). */
const title_slot_entry *title_slots_at(const title_slots *slots, int row);

/* 1 when the list has more files than rows, so the last row is "More"; title_slots_next_page moves
 * to the page after it (wrapping). */
int title_slots_paging(const title_slots *slots);
void title_slots_next_page(title_slots *slots);

/* Draws the rows - "Slot N" or "Slot N (A)", grey for a slot nothing was saved in - the "More" row
 * when there is one, the Back button and the pointer arrow. */
void title_slots_draw(rt_machine *m, const title_slots *slots, u8 *dst, u32 stride, int w, int h);

/* The settings view. `title_settings_init` fills it from icftd.ini - the settings the front end
 * applied at startup - with the machine (the mixer's two gains) and the platform (the window mode)
 * as the fallbacks; `fullscreen` stays 0 on a platform that has no window mode at all. */
void title_settings_init(title_settings *settings, rt_machine *m, int fullscreen);

/* Notes the pointer and returns the control under it, or TITLE_SETTING_NONE. `back_hover` is set
 * when the pointer is over the Back button. */
int title_settings_pointer(title_settings *settings, int present, int x, int y);

/* Draws the labels, the toggle, the volume rows, the language row, the Back button and the arrow.
 * The caller installs title_settings_palette() at TITLE_SETTINGS_PEN_FIRST first, the way it
 * installs title_menu_palette() for the buttons. */
void title_settings_draw(rt_machine *m, const title_settings *settings, u8 *dst, u32 stride,
                         int w, int h);

/* The settings pictures' six colours, RGB, for the pens TITLE_SETTINGS_PEN_FIRST..COUNT-1. */
const u8 *title_settings_palette(void);

/* Draws one button at an arbitrary position: the state picture and its centred label. The caller
 * installs title_menu_palette() for the button pens first. The save-slot picker uses it for Back,
 * so both slot lists draw the same control. */
void title_button_draw_at(rt_machine *m, u8 *dst, u32 stride, int w, int h,
                          int x, int y, const char *label, int hovered);

/* The shipped button's size (from the generated art table). */
int title_button_width(void);
int title_button_height(void);

#endif /* ICFTD_HOST_TITLE_BUTTON_H */
