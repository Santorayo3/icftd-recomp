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

/* What a button does when it is clicked. */
typedef enum title_action
{
    TITLE_ACTION_NONE = 0,
    TITLE_ACTION_NEW_GAME,
    TITLE_ACTION_LOAD_GAME,
    TITLE_ACTION_SETTINGS,
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

/* The control of the settings view the pointer is over. */
typedef enum title_setting_hit
{
    TITLE_SETTING_NONE = 0,
    TITLE_SETTING_FULLSCREEN,           /* the toggle */
    TITLE_SETTING_MUSIC_DOWN,           /* the music's minus button */
    TITLE_SETTING_MUSIC_UP,
    TITLE_SETTING_SOUND_DOWN,
    TITLE_SETTING_SOUND_UP
} title_setting_hit;

/* The settings view: the four buttons are replaced by one row per option (its label in the game's
 * font, the control under it) and the Back button where Quit Game was. The view shows the settings
 * the game was started with (icftd.ini), and the caller applies what a click changes, so nothing
 * here touches the machine. `fullscreen_on` is 0 on a platform with no window mode of its own (the
 * DOS build), which draws the two volume rows only. */
typedef struct title_settings
{
    int fullscreen;                     /* the toggle's state: 1 = fullscreen */
    int fullscreen_on;                  /* this platform has a window mode to toggle */
    int music, sound;                   /* 0..10, the [AUDIO] volumes */
    int hover;                          /* TITLE_SETTING_*, NONE for none */
    int back_hover;                     /* the pointer is over the Back button */
    int pointer_on;                     /* the platform reported a pointer this frame */
    s16 pointer_x, pointer_y;           /* its position, the arrow's tip */
} title_settings;

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

/* The settings view. `title_settings_init` fills it from icftd.ini - the settings the front end
 * applied at startup - with the machine (the mixer's two gains) and the platform (the window mode)
 * as the fallbacks; `fullscreen` stays 0 on a platform that has no window mode at all. */
void title_settings_init(title_settings *settings, rt_machine *m, int fullscreen);

/* Notes the pointer and returns the control under it, or TITLE_SETTING_NONE. `back_hover` is set
 * when the pointer is over the Back button. */
int title_settings_pointer(title_settings *settings, int present, int x, int y);

/* Draws the labels, the toggle, the two minus/value/plus rows, the Back button and the arrow. The
 * caller installs title_settings_palette() at TITLE_SETTINGS_PEN_FIRST first, the way it installs
 * title_menu_palette() for the buttons. */
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
