/* The title screen.
 *
 * Port code, not a translation: the original boots straight into its intro, and its own title is
 * drawn by code we have not translated. This scene exists so the product has a place for the main
 * menu (settings, save slots, ...) that a DOS/Win32 release needs and a 1989 game never had; for
 * now it shows assets\titlescreen.png with its menu buttons (title_button.c), plays the map
 * screen's score, and starts the game on fire or 0 (or one of the minigames on a digit key - see
 * the end of this comment).
 *
 * The music is the engine's, not ours: its driver is game code (CIA timer A -> FUN_0000f264 ->
 * the score player, see docs\next-session.md), so nothing on the host side could play a song. What
 * the title does instead is call the engine's *own* score entry, the one every scene calls -
 * FUN_00009cf2(&"Overhead2.tiny", -1), which the map's setup also uses at FUN_0000bfca - raise the
 * music block to the map's volume as that setup does, and then hold the program where it is while
 * the machine keeps ticking, so the music runs exactly as it does inside a scene.
 *
 * The hold point is the intro's setup (FUN_00009870, reached from the boot at frame ~17), which has
 * not run yet at that moment: the score is loaded *before* it, so the title owns the music, and when
 * the player presses fire the score is unloaded again and the intro loads its own and plays from its
 * first frame. Nothing of the intro has executed while the title was up.
 *
 * Both front ends arm it, and only for a played game: with an input script, a state/raster dump, an
 * injected entry or a poke the run is reproducing or inspecting the original - which has no title -
 * and must start where the original starts.
 *
 * The digit keys are a debug menu: 1..7 start the fight, the flight, the fire game, the hospital
 * escape, the chicken race, the underground ant nest and the giant-ant fight without playing to
 * them, and the title comes back when the scene ends. They are the engine's own scene entries (see
 * g_scenes), called the way FUN_00002cc8's dispatcher calls them - after FUN_0000EC8A frees the
 * score, because FUN_0000E804 refuses to load a new one while DAT_00023C58 is set. Nothing of the
 * world loop is faked: a scene entered this way gets no room, no location state and no post-scene
 * bookkeeping, which is exactly why the title returns to itself instead of to the game. The giant-
 * ant fight is the one scene that *reads* that missing room state (which location, which room
 * picture, the clock VBI that decodes the fire button), so its launch sets those three from the
 * room it runs in - see TITLE_ANT_PC.
 *
 * W, C and T are the three endings. Each writes DAT_00022D68 and enters FUN_0000A4D6, the
 * dispatcher the world loop calls: 1 is the win (`!WIN`, the queen is dead), 2 the blast in the
 * collapsing nest and 3 the town's deadline (`!LOS` for both). The epilogue is the text that word
 * selects, so the key takes the same switch the game itself takes. An ending never returns - its
 * per-frame callback always answers 0 - so the title does not come back; Esc restarts the game.
 *
 * Escape in a played game is not a quit: the front end stops the run and starts the machine again,
 * so the player lands on this title with a fresh game (src\host\main.c, src\host\dos_main.c). The
 * menu itself ignores Escape - the Quit Game button is the way out.
 *
 * The buttons are wired. New Game starts the intro (fire and 0 do the same), Load Game replaces the
 * buttons with the ten save slots (empty ones grey, a slot with a save white and #00FF00 under the
 * pointer; a click loads that exact slot) and a Back button that restores the menu, Settings
 * replaces them with the settings view (title_button.c: the fullscreen toggle, the two volumes,
 * Back), and Quit Game shows a ten-second farewell - the successor's name on a black screen - and
 * then closes the application. A click is `input_state.mouse_left_pressed`, not the game's /FIRE,
 * so a click that misses a button does nothing at all.
 *
 * When the player's data folder also holds the add-on "It Came from the Desert II - Antheads", the
 * menu has a fifth button between New Game and Load Game - "Play Antheads" - and the two game
 * entries are exactly that: New Game plays the 1989 game, Play Antheads plays the add-on. The
 * add-on is another *program* (a second translated table linked at the same address), so choosing
 * it is a boot of the machine with that image; but it is a game start and not a screen: the fresh
 * machine runs the add-on's own intro from the very start, and the port only answers the engine's
 * YES/NO load screen at the end of it (host_title_new_game) - nothing is parked at an intro setup,
 * no menu of the add-on's own is drawn, and the player goes from the menu into the intro exactly as
 * New Game goes into the 1989 one. The menu itself belongs to the port, not to a build: it is
 * always drawn on the 1989 program's hold point, and Escape from either game boots that program
 * again and shows it - one menu, two games, and the save slots they share (docs\antheads.md). A
 * data folder without the add-on's three disks gets the four buttons it has always had.
 *
 * The settings view changes the running machine, not just the file: the two volumes are the
 * mixer's gains (rt_audio_set_gain - the title's own score is what a player hears the step on) and
 * the toggle switches the window (plat_set_fullscreen), and each one is written back to icftd.ini
 * (rt_config_save_int) so the next start keeps it. The platform says whether it has a window mode
 * at all (plat_has_fullscreen), which is why the DOS build shows the two volumes only.
 *
 * The title also answers the engine's YES/NO load screen, which is why that screen never appears
 * in a played game: the decision it asked for was just made here. The screen is FUN_0001029e,
 * called by the boot loop right after FUN_00009870 returns - i.e. after the intro - and it is left
 * in place in a --titlekey run, which reproduces the original from this hold point. Load Game also
 * skips the intro scene itself (FUN_00009870's call into FUN_0001EB94), so a loaded game starts at
 * once; New Game plays it, as the original does.
 */
#include <stdio.h>
#include <string.h>

#include "types.h"
#include "platform.h"
#include "config.h"
#include "machine.h"
#include "display.h"
#include "../oracle/cpu.h"
#include "../recomp/cpu.h"
#include "title.h"
#include "programs.h"
#include "title_art.h"
#include "title_button.h"
#include "time_freeze.h"
#include "seams.h"
#include "../runtime/lang.h"

/* Every engine address this file holds is a row of the seam table (src\host\seams.c), as a model
 * (image) offset - the convention the other seam files use - so every use goes through RC_ADDR.
 * The model addresses named in the comments below are the ones in re\disasm\dshell.asm; the
 * add-on's column of the table carries its own. */

/* The engine's own entry points for the scenes the digit keys start. Each is what FUN_00002cc8's
 * dispatcher calls once its action is picked: the fight is mode 3 (`jsr` slot 46 at 0x2E3E), Take
 * a Flight is mode 9 with the argument 6 (0x2F72), the fire game is mode 0xb (0x2EBA), the
 * hospital escape is mode 6 through vector slot 70 (0x2EF8). None of them needs the room the
 * dispatcher tears down first: each loads its own banks, programs its own screen and returns to its
 * caller - measured from this very hold point, see tools\title-check.ps1.
 *
 * The chicken race is FUN_0001BA3E itself (0x1FA3E), the scene FUN_0001CC2E runs once its two
 * narration pages are over. Its caller also sets the swerve window from the encounter count
 * (`0x2C100 = 0x78 + 10*n`, `0x2C102 = 0x104 - 10*n`) before calling it; a race entered from the
 * title has no encounter behind it, so the title writes the first one's window - without it the
 * "Ice swerved off the road" branch can never be taken and the race has no win.
 *
 * The underground ant nest is FUN_0000BFCA (0xFFCA), the scene FUN_000107A6 calls once the flight
 * reports it landed (DAT_0002A552). It is self-contained: it opens Desert1:UNDER, loads Tilz.pic
 * with its own 32-colour palette into g_palWant, builds its copper list from the template at
 * 0x24EB2 (LoadView), keeps the tunnel state in 0x2A1xx (runtime 0x2E1xx) and runs until its
 * eight steps are done. */

/* The giant-ant fight is FUN_00008C5C (0xCC5C), the chapter's own entry: it opens the BACKS bank,
 * then Desert3:BIGANT, and runs FUN_00007934 as its per-update script. It is entered from a room
 * and needs what the room leaves behind, none of which it sets itself:
 *   DAT_00028A3A (word)  the location. FUN_00008c5c indexes the location table with it to pick the
 *                        per-location sprite prefix ("Cone", "Mine", ... - the table at 0x22CF6);
 *   DAT_00028B10 (byte)  the room byte FUN_000057ba turns into BACKS or BACKS1;
 *   DAT_00028B3E         the resource name of the room's picture, "!B%02d" of that byte, which
 *                        FUN_00005824 sprintf's before loading it and FUN_0000895e looks up again.
 * Measured from the room that runs the chapter (docs\port-features.md): location 0x11 is the room
 * whose record byte is 0x0C, i.e. "!B12", and its prefix is "Cone" - BACKS holds ConeSP1/SP2.
 * The fire button is the world loop's: FUN_0000551C installs the clock VBI (FUN_000054CC) whose
 * FUN_0000A500 is the only writer of DAT_00026898, the edge FUN_000086a0's shot reads. Without it
 * the pistol in a title launch could be aimed but never fired.
 *
 * The four scene entries themselves are rows of the seam table (fight, flight, fire, hospital): the
 * add-on's dispatcher calls its own. The fire game is 0 there - the add-on has none - and the key
 * that would start it is then not offered. */

/* The score the title holds: the map's own. FUN_00009CF2(descriptor, loop) loads a score and
 * starts it - the map's setup calls it with &"Overhead2.tiny" (FUN_0000bfca), and the map's
 * re-entry path does the same at 0x10920..0x1093e (load, then FUN_00009cc4 to start). Whatever is
 * playing has to go first: FUN_0000EC8A stops and frees it.
 *
 * The endings are the same shape: 1 win, 2 the nest collapse, 3 the deadline. FUN_0000A4D6 reads
 * the word and runs `!WIN` or `!LOS` itself, so the key only has to set it first.
 *
 * The engine's own YES/NO load screen, FUN_0001029e ("Lizard Breath has been awaiting your
 * return."), is what the boot loop calls at 0x1EA right after the intro's setup returns. A played
 * game never shows it: the decision it asks for was taken on the title, so the host answers it. The
 * break pc is the routine's first instruction after its `link` (A5 then addresses its frame), and
 * the answer is delivered the way its own prompt delivers it - D0 written at the instruction right
 * after the `jsr FUN_000101e4`, where the routine stores it and branches to its load or its
 * "a new game" path. Only the screen - the dim, the three lines, the prompt - is skipped; the
 * decision, the palette restore and the load itself are the engine's own code.
 *
 * The intro is a MovE scene, not an animation the setup draws itself: FUN_00009870 loads the scene
 * record at 0x993c and hands it to FUN_0001EB94, which runs it through FUN_0001D2C6 - the runner
 * the situation map uses too. Load Game has nothing to show before the save, so the host skips that
 * one call: the break is the `jsr` itself, so the four arguments it would have consumed are left for
 * the `lea (0x10,A7),A7` that follows, and the setup's own cleanup (close the bank, free the score)
 * still runs. Nothing of the scene is entered. */
#define TITLE_ANT_LOC     0x0011u
#define TITLE_ANT_ROOM    0x000Cu

/* What a digit key starts: the seam row that holds that scene's entry. The entries are not
 * compile-time constants any more (the running program decides them), so the table names the row
 * and title_entry_pc() resolves it. */
typedef enum
{
    TITLE_ENTRY_FIGHT,
    TITLE_ENTRY_FLIGHT,
    TITLE_ENTRY_FIRE,
    TITLE_ENTRY_HOSPITAL,
    TITLE_ENTRY_CHICKEN,
    TITLE_ENTRY_UNDER,
    TITLE_ENTRY_ANT,
    TITLE_ENTRY_END
} title_entry;

typedef struct title_scene
{
    int         key;                     /* the key that starts it (KEY_1 is "1") */
    const char *keyName;                 /* how title_keys() writes it down */
    const char *name;
    title_entry entry;
    int         nargs;
    u32         arg0, arg1;
    u16         ending;                  /* non-0: write TITLE_END_FLAG before entering TITLE_END_PC */
} title_scene;

static const title_scene g_scenes[] =
{
    { KEY_1, "1", "Fight",           TITLE_ENTRY_FIGHT,    0, 0, 0, 0 },
    { KEY_2, "2", "Take a Flight",   TITLE_ENTRY_FLIGHT,   1, 6, 0, 0 }, /* 6 = the dispatcher's own argument */
    { KEY_3, "3", "Fire Game",       TITLE_ENTRY_FIRE,     0, 0, 0, 0 },
    { KEY_4, "4", "Escape Hospital", TITLE_ENTRY_HOSPITAL, 0, 0, 0, 0 },
    { KEY_5, "5", "Chicken Race",    TITLE_ENTRY_CHICKEN,  0, 0, 0, 0 },
    { KEY_6, "6", "Underground",     TITLE_ENTRY_UNDER,    0, 0, 0, 0 },
    { KEY_7, "7", "Giant Ant",       TITLE_ENTRY_ANT,      0, 0, 0, 0 },
    { KEY_W, "W", "Win Ending",      TITLE_ENTRY_END,      0, 0, 0, 1 },
    { KEY_C, "C", "Nest Collapse",   TITLE_ENTRY_END,      0, 0, 0, 2 },
    { KEY_T, "T", "Time Ran Out",    TITLE_ENTRY_END,      0, 0, 0, 3 }
};

/* The running program's entry for a scene row, or 0 when it has no such scene (the add-on has no
 * fire game). A key whose entry is 0 is not offered and does not start anything. */
static u32 title_entry_pc(title_entry entry)
{
    switch (entry)
    {
    case TITLE_ENTRY_FIGHT:    return SCENE_FIGHT_PC;
    case TITLE_ENTRY_FLIGHT:   return SCENE_FLIGHT_PC;
    case TITLE_ENTRY_FIRE:     return SCENE_FIRE_PC;
    case TITLE_ENTRY_HOSPITAL: return SCENE_HOSPITAL_PC;
    case TITLE_ENTRY_CHICKEN:  return TITLE_CHICKEN_PC;
    case TITLE_ENTRY_UNDER:    return TITLE_UNDER_PC;
    case TITLE_ENTRY_ANT:      return TITLE_ANT_PC;
    case TITLE_ENTRY_END:      return TITLE_END_PC;
    }
    return 0;
}

#define TITLE_SCENE_COUNT ((int)(sizeof g_scenes / sizeof g_scenes[0]))

/* What title_play() picked: 0 leaves the game, 1 is the intro, 2 loads a save, 3 + n is scene n,
 * and TITLE_PICK_ANTHEADS starts the add-on's game - the fifth button, which is New Game for the
 * other build. */
#define TITLE_PICK_QUIT     0
#define TITLE_PICK_INTRO    1
#define TITLE_PICK_LOAD     2
#define TITLE_PICK_SCENE    3
#define TITLE_PICK_ANTHEADS 100            /* past every scene index (3 + n) */
/* --titlekey's values for the menu's New Game, Load Game and Settings buttons, past the scenes and
 * endings - and the menu itself, for a run whose --mouse script does the clicking - and the fifth
 * button, which plays the add-on (docs\antheads.md). */
#define TITLE_KEY_LOAD     11
#define TITLE_KEY_NEW_GAME 12
#define TITLE_KEY_SETTINGS 13
#define TITLE_KEY_MENU     14
#define TITLE_KEY_ADDON    15

/* Quit Game shows where the successor lives for ten seconds before the application ends, so a
 * click is not an instant disappearance. The notice is the game's own font on black - port art,
 * like the menu around it - and the frame is the machine's own 50 Hz. */
#define TITLE_NOTICE_FRAMES    500
#define TITLE_NOTICE_LINE_STEP 14

static const char *const g_titleNotice[] =
{
    "Check out my spiritual successor \"It Returned to the Desert\"",
    "Available on Steam and itch.io"
};

#define TITLE_NOTICE_LINES ((int)(sizeof g_titleNotice / sizeof g_titleNotice[0]))

/* A scripted run's menu and settings view are clicked through by its own --mouse script (Back, or
 * Quit Game); this is how long one may stay up before the run gives up on it, so a script that
 * misses cannot hold a check for ever. */
#define TITLE_SCRIPT_FRAMES 600

/* A scene is entered as the two calls the dispatcher makes (free the score, then enter), and the
 * title comes back after each one: an injected call returns to the pc it was made from, so every
 * step of the sequence starts at the same hold point. */
enum
{
    TITLE_OFF = 0,
    TITLE_UNLOAD,                        /* free whatever score is loaded ... */
    TITLE_LOAD,                          /* ... then load the map's */
    TITLE_PLAYING,                       /* the art, and the keys */
    TITLE_LAUNCH,                        /* enter the scene that was picked */
    TITLE_SKIP_INTRO,                    /* Load Game: the intro's setup runs, its scene does not */
    TITLE_PROMPT                         /* the load screen is answered next */
};

static int g_state = TITLE_OFF;
static int g_pick;                       /* scene index for TITLE_LAUNCH */
static int g_virtualKey = -1;            /* --titlekey: the choice to take, once; -1 = none */
static int g_scripted;                   /* --titlekey was given: the title ends after that */
static int g_scriptMenu;                 /* --titlekey 14: the run's --mouse script owns the menu */
static int g_ticks;                      /* menu frames run since the title came up */
static u32 g_popOnReturn;                /* argument bytes the injected call's caller would pop */
static int g_clockVbi;                   /* the world loop's clock VBI is installed (once) */
static int g_playMode;                   /* this session is a played game: Esc restarts it */
static int g_restart;                    /* Esc or the fifth button asked the front end for a boot */
static int g_switchTo = -1;              /* ... and which program that boot is to run (-1: the same) */
static int g_playOnBoot;                 /* ... and whether it goes straight into that game */
static int g_loadOnBoot;                 /* ... and whether it loads the slot it was picked for */
static int g_wantLoad;                   /* the menu chose Load Game: the load screen answers yes */
static int g_fromMenu;                   /* the pick was the player's, not --titlekey's */
static int g_loadTarget;                 /* which build wrote the save being loaded (RT_SAVE_*) */

void host_title_arm(int on)
{
    g_state = on ? TITLE_UNLOAD : TITLE_OFF;
    g_pick = 0;
    g_popOnReturn = 0;
    g_ticks = 0;
    g_clockVbi = 0;                      /* a fresh machine has no clock VBI installed */
    g_playMode = on;                     /* Esc restarts a played game, never a measurement */
    g_switchTo = -1;                     /* a boot has not been asked to switch build */
    g_playOnBoot = 0;
    g_loadOnBoot = 0;
    g_wantLoad = 0;
    g_fromMenu = 0;
    g_loadTarget = 0;
    g_scriptMenu = 0;
    /* The intro's setup is reached inside a translated function (the mode dispatcher runs it as a
     * block), so there is no call boundary to catch: ask the dispatch to hand the program back
     * before that instruction runs. Cleared again as soon as the title is done with it. */
    rc_breakPc = on ? RC_ADDR(TITLE_HOLD_PC) : 0;
}

void host_title_new_game(void)
{
    /* A program booted for the menu's "Play Antheads": its own intro is what the player asked for,
     * so nothing of the menu runs on this machine - no hold at the intro's setup, no score of ours
     * loaded and freed again (which is also what perturbed the add-on's own sound loader: parking
     * it at 0xAC3C and calling into it left a stack word the loader reads before writing it), and
     * no keyboard. The one thing the port still owns here is the engine's YES/NO load screen, which
     * the boot loop runs once the intro is over and which asks whether to restore a save: the menu
     * has already answered that, so the title answers "no" the moment the prompt is reached and the
     * game continues into itself. */
    g_state = TITLE_PROMPT;
    g_wantLoad = 0;
    rc_breakPc = RC_ADDR(TITLE_LOAD_PROMPT);
}

/* A program booted for a save it wrote itself (the menu's Load Game, see host_title_restart_load):
 * the fresh machine runs its own intro setup, the title skips the intro scene - a loaded game has
 * nothing to show before the save - and then answers the engine's YES/NO load screen with "yes",
 * so the build's own load routine reads its own file back (DSAVE:ICFTD2 in the add-on). Nothing of
 * the menu is drawn and no score of the port's is loaded. The slot is m->saveSlot, which the front
 * end keeps across the restart. */
void host_title_load_on_boot(void)
{
    g_state = TITLE_SKIP_INTRO;
    g_wantLoad = 1;
    g_fromMenu = 0;
    rc_breakPc = RC_ADDR(TITLE_INTRO_RUN);
}

void host_title_key(int n)
{
    g_virtualKey = n;
    /* A scripted run has no keyboard, so its title must not wait for one: once the choice has been
     * taken this menu ends the run (a scene that returns therefore ends it too, which is what
     * tools\title-check.ps1 measures). */
    g_scripted = n >= 0;
}

/* Escape in a played game. The front end restarts the whole machine after this (see title.h), so
 * every piece of emulated state is the one a fresh boot makes - which is what "back to the title"
 * has to mean: the title is a host menu parked at the intro's setup, and nothing of the old
 * session's stack, heap or banks can survive into it. The stop is forced twice: m->stop leaves the
 * stream at the next function boundary, and rc_stopAt unwinds a translated busy loop that would
 * never reach one.
 *
 * The title belongs to the port, not to a build: it is always drawn on the 1989 program's hold
 * point, and its two game entries pick the build. So Escape from an add-on session boots the 1989
 * program again and the player gets the same menu he started from - with both games on it, and
 * with the save slots they share (docs\antheads.md). */
void host_title_escape(rt_machine *m)
{
    if (!g_playMode) { m->stop = 1; return; }   /* a measurement: the front end's old stop */
    if (g_restart) return;
    g_restart = 1;
    g_switchTo = HOST_PROGRAM_ORIGINAL;
    g_playOnBoot = 0;                    /* back to the menu, not into a game */
    m->stop = 1;
    rc_stopAt = (long)m->insns + 1;
}

int host_title_restart_pending(void)
{
    int r = g_restart;
    g_restart = 0;
    return r;
}

int host_title_restart_program(void)
{
    int p = g_switchTo;
    g_switchTo = -1;
    return p;
}

int host_title_restart_play(void)
{
    int p = g_playOnBoot;
    g_playOnBoot = 0;
    return p;
}

int host_title_restart_load(void)
{
    int p = g_loadOnBoot;
    g_loadOnBoot = 0;
    return p;
}

/* Enters `pc` the way a caller would: its stack arguments, then the return address on top, so the
 * routine returns into the program at `ret`. The same shape as the front ends' --call. */
static void title_call(rt_machine *m, u32 pc, u32 ret, int nargs, u32 arg0, u32 arg1)
{
    u32 r[18];

    oracle_regs_get(r);
    if (nargs > 1) { r[REGS_A + 7] -= 4; rt_write32(&m->mem, r[REGS_A + 7], arg1); }
    if (nargs > 0) { r[REGS_A + 7] -= 4; rt_write32(&m->mem, r[REGS_A + 7], arg0); }
    r[REGS_A + 7] -= 4;
    rt_write32(&m->mem, r[REGS_A + 7], ret);
    r[REGS_PC] = pc;
    oracle_regs_set(r);
    host_regs_sync(m);
    g_popOnReturn = (u32)nargs * 4;      /* restored when the routine returns to the hold point */
}

/* One emulated frame with no program running: the time and the vblank the main loop gives a frame,
 * so Paula and the CIA timer - the music - keep their 50 Hz. */
static void title_tick(rt_machine *m)
{
    rt_time_run(m, EMU_CYCLES_PER_FRAME);
    rt_cia_service(m);
    m->cyclesToTick = 0;                 /* this frame's budget is spent exactly */
    oracle_tick(m);                      /* vblank, interrupt servers, one frame */
}

/* The art, then either the buttons, the load game view (slots != 0) or the settings view
 * (settings != 0). */
static void title_draw(rt_machine *m, const title_menu *menu, const title_slots *slots,
                       const title_settings *settings)
{
    u8 *dst;
    u32 stride = plat_set_framebuffer_size(SCREEN_W, SCREEN_H);
    int x, y;

    /* The title is the port's own 320x200 art; a scene that presented a larger screen (the chicken
     * race's 368x216 narration page) has to give the window back first. */
    if (stride == 0) stride = SCREEN_W;             /* a fixed-mode platform */
    dst = plat_framebuffer();
    if (dst == 0) return;
    plat_set_palette(0, TITLE_PAL_ENTRIES, g_titlePal);
    /* The menu's pens sit past the picture's own 69 entries, so the art keeps its colours. */
    plat_set_palette(TITLE_BUTTON_PEN_SLOT_EMPTY,
                     TITLE_BUTTON_PEN_COUNT - TITLE_BUTTON_PEN_SLOT_EMPTY, title_menu_palette());
    /* The settings controls' own colours, below the pens the presenter and the OSD own. */
    plat_set_palette(TITLE_SETTINGS_PEN_FIRST, TITLE_SETTINGS_PEN_COUNT - TITLE_SETTINGS_PEN_FIRST,
                     title_settings_palette());
    /* The pointer is the game's own arrow, with the two pens the runtime overlay uses. */
    plat_set_palette(EMU_PEN_POINTER, EMU_PEN_POINTER_COLOURS, rt_pointer_palette());
    for (y = 0; y < TITLE_H && y < SCREEN_H; y++)
    {
        for (x = 0; x < TITLE_W && x < SCREEN_W; x++)
            dst[(u32)y * stride + (u32)x] = g_titleImg[(u32)y * TITLE_W + (u32)x];
        for (; x < SCREEN_W; x++) dst[(u32)y * stride + (u32)x] = 0;
    }
    for (; y < SCREEN_H; y++) memset(dst + (u32)y * stride, 0, SCREEN_W);
    if (settings != 0) title_settings_draw(m, settings, dst, stride, SCREEN_W, SCREEN_H);
    else if (slots != 0) title_slots_draw(m, slots, dst, stride, SCREEN_W, SCREEN_H);
    else title_menu_draw(m, menu, dst, stride, SCREEN_W, SCREEN_H);
}

/* Quit Game's farewell: a black screen with the successor's name, drawn in the game's own disk
 * font and centred on the picture. It is the port's own screen, so it is drawn straight into the
 * platform framebuffer and costs the machine nothing. */
static void title_notice_draw(rt_machine *m)
{
    static const u8 black[3] = { 0, 0, 0 };
    static const u8 white[3] = { 255, 255, 255 };
    u32 stride = plat_set_framebuffer_size(SCREEN_W, SCREEN_H);
    u8 *dst = plat_framebuffer();
    int height = rt_font_height(m);
    int block = height + TITLE_NOTICE_LINE_STEP * (TITLE_NOTICE_LINES - 1);
    int top = (SCREEN_H - block) / 2;
    int x, y, i;

    if (stride == 0) stride = SCREEN_W;
    if (dst == 0) return;
    plat_set_palette(0, 1, black);
    plat_set_palette(TITLE_BUTTON_PEN_TEXT, 1, white);
    for (y = 0; y < SCREEN_H; y++) memset(dst + (u32)y * stride, 0, SCREEN_W);
    for (i = 0; i < TITLE_NOTICE_LINES; i++)
    {
        const char *line = rt_lang_text(g_titleNotice[i]);
        s32 w = rt_font_text_width(m, line);

        x = (SCREEN_W - (int)w) / 2;
        rt_font_text_draw(m, dst, stride, SCREEN_W, SCREEN_H, x,
                          top + i * TITLE_NOTICE_LINE_STEP, line,
                          TITLE_BUTTON_PEN_TEXT);
    }
}

/* Holds the notice for TITLE_NOTICE_FRAMES frames - the score keeps playing and a closed window
 * still ends the run - then lets the title return its quit. */
static void title_quit_notice(rt_machine *m)
{
    input_state in;
    long start = (long)m->frame;
    int i;

    printf("title: quit game: showing the notice for %d frame(s) (frame %lu)\n",
           TITLE_NOTICE_FRAMES, (unsigned long)m->frame);
    for (i = 0; i < TITLE_NOTICE_LINES; i++)
        printf("title: quit game: line %d: %s\n", i + 1, g_titleNotice[i]);
    for (i = 0; i < TITLE_NOTICE_FRAMES; i++)
    {
        if (!plat_pump(&in)) break;              /* the window was closed */
        /* Alt+Enter works here too: the farewell is a screen like any other. */
        if (in.pressed[KEY_FULLSCREEN] && host_fullscreen_toggle((int)plat_fullscreen()) >= 0)
            printf("title: fullscreen %s (Alt+Enter, frame %lu)\n",
                   plat_fullscreen() ? "on" : "off", (unsigned long)m->frame);
        title_notice_draw(m);
        plat_present();
        title_tick(m);
        plat_frame_sync();
    }
    printf("title: quit game: closing after %ld frame(s) (frame %lu)\n",
           (long)m->frame - start, (unsigned long)m->frame);
}

/* The debug keys, on the console: the menu entries are drawn on the title itself, but the
 * scenes and endings have no button, so this line is where those keys are written down. A scene the
 * running program does not have is not listed - the add-on's list has no "3 Fire Game". */
static void title_keys(void)
{
    int i;

    printf("title: fire or 0 starts the game;");
    for (i = 0; i < TITLE_SCENE_COUNT; i++)
        if (title_entry_pc(g_scenes[i].entry) != 0)
            printf("  %s %s", g_scenes[i].keyName, g_scenes[i].name);
    printf("\n");
}

/* Opens the settings view on the settings the game was started with (the ini, the machine's own
 * values where the file has no entry). */
static void title_settings_open(rt_machine *m, title_settings *settings)
{
    title_settings_init(settings, m, (int)plat_has_fullscreen());
    printf("title: settings: music %d/10, sound %d/10, %s (frame %lu)\n",
           settings->music, settings->sound,
           settings->fullscreen_on ? (settings->fullscreen ? "fullscreen on" : "fullscreen off")
                                   : "no window mode",
           (unsigned long)m->frame);
}

/* One volume step. The gain is the mixer's, so it is what the title's own score is played with the
 * moment it changes; the ini keeps the choice for the next start. */
static void title_settings_volume(rt_machine *m, title_settings *settings, int music, int delta)
{
    int v = (music ? settings->music : settings->sound) + delta;

    if (v < 0) v = 0;
    if (v > 10) v = 10;
    if (music) settings->music = v;
    else settings->sound = v;
    rt_audio_set_gain(m, settings->sound, settings->music);
    rt_config_save_int("AUDIO", music ? "music" : "sound", v);
    printf("title: %s volume %d/10 (%d%% gain, frame %lu)\n", music ? "music" : "sound", v,
           music ? m->audio.musicGain : m->audio.soundGain, (unsigned long)m->frame);
}

/* The window mode, wherever the player is: the settings view's toggle and Alt+Enter (the front
 * end's frame hook, and every loop this file drives) both come through here, so the window, the
 * settings view and icftd.ini cannot disagree about it. `current` is the mode being left, which is
 * what the caller shows: the settings view's own value there (a headless run never primed the
 * platform's), the live platform state otherwise. Returns the mode it switched to (0/1), or -1 on
 * a platform with no window mode of its own (DOS), where there is nothing to switch and nothing to
 * write. */
int host_fullscreen_toggle(int current)
{
    int on;

    if (!plat_has_fullscreen()) return -1;
    on = current ? 0 : 1;
    plat_set_fullscreen((u32)on);
    rt_config_save_int("VIDEO", "fullscreen", on);
    return on;
}

/* A click in the settings view. Returns 1 while the view stays up, 0 when Back closed it. */
static int title_settings_click(rt_machine *m, title_settings *settings)
{
    if (settings->hover == TITLE_SETTING_NONE)
    {
        if (!settings->back_hover) return 1;          /* a click that missed every control */
        printf("title: back to the main menu (frame %lu)\n", (unsigned long)m->frame);
        return 0;
    }
    switch (settings->hover)
    {
    case TITLE_SETTING_FULLSCREEN:
        /* The window mode is the platform's, so it changes there and then - not on the next
         * start - and the ini records it for that next start. */
        {
            int on = host_fullscreen_toggle(settings->fullscreen);
            if (on >= 0) settings->fullscreen = on;
        }
        printf("title: fullscreen %s (frame %lu)\n", settings->fullscreen ? "on" : "off",
               (unsigned long)m->frame);
        break;
    case TITLE_SETTING_MUSIC_DOWN: title_settings_volume(m, settings, 1, -1); break;
    case TITLE_SETTING_MUSIC_UP:   title_settings_volume(m, settings, 1, +1); break;
    case TITLE_SETTING_SOUND_DOWN: title_settings_volume(m, settings, 0, -1); break;
    case TITLE_SETTING_SOUND_UP:   title_settings_volume(m, settings, 0, +1); break;
    default: break;
    }
    return 1;
}

/* Shows the art until the player starts something. The keys are read as *presses*, not as held
 * state: the button that ended a scene is usually still down when the title comes back, and it must
 * not start the next thing on its own. */
static int title_play(rt_machine *m)
{
    input_state in;
    title_menu menu;
    title_slots slots;
    title_settings settings;
    void (*savedFrame)(rt_machine *) = m->on_frame;
    void (*savedPresent)(rt_machine *) = m->on_present;
    int pick = -1;
    int showSlots = 0;
    int showSettings = 0;
    int quitNotice = 0;                  /* the pick was a click on Quit Game */
    long scriptFrames = 0;

    title_menu_init(&menu, host_title_addon(m), seam_is_addon());
    title_slots_init(&slots);
    title_settings_init(&settings, m, (int)plat_has_fullscreen());
    {
        /* The menu's rectangles on the console: a check asserts them instead of a picture, and it
         * is where "four buttons without the add-on, five with it" is visible in a log. */
        int i;

        printf("title: menu: %d button(s)", menu.count);
        for (i = 0; i < menu.count; i++)
            printf("; %s %d,%d %dx%d", menu.buttons[i].label, menu.buttons[i].x,
                   menu.buttons[i].y, menu.buttons[i].w, menu.buttons[i].h);
        printf("\n");
    }
    m->on_frame = 0;                     /* the title owns the keyboard ... */
    m->on_present = 0;                   /* ... and the screen */
    while (pick < 0)
    {
        int i;

        /* A scripted run has no keyboard: it ends once the choice it was given has been taken,
         * unless a screen it can only click through is up (--titlekey 13's settings view, or the
         * menu itself with 14). */
        if (g_scripted && !g_scriptMenu && g_virtualKey < 0 && !showSettings)
        {
            pick = TITLE_PICK_QUIT;
            break;
        }
        /* ... and a screen nothing clicks out of must not hold a run for ever. */
        if (g_scripted && (showSettings || g_scriptMenu) && ++scriptFrames > TITLE_SCRIPT_FRAMES)
        {
            printf("title: the script left the menu open (frame %lu)\n", (unsigned long)m->frame);
            pick = TITLE_PICK_QUIT;
            break;
        }
        if (!plat_pump(&in)) { pick = TITLE_PICK_QUIT; break; }        /* the window was closed */
        host_title_pointer(m, &in);      /* --mouse: the pointer a headless run feeds */
        /* Alt+Enter on the title's screens as well - and the settings view, when it is up, takes
         * the state the switch left behind, so its toggle shows what the window is. */
        if (in.pressed[KEY_FULLSCREEN])
        {
            int fs = host_fullscreen_toggle(settings.fullscreen);
            if (fs >= 0)
            {
                settings.fullscreen = fs;
                printf("title: fullscreen %s (Alt+Enter, frame %lu)\n", fs ? "on" : "off",
                       (unsigned long)m->frame);
            }
        }
        if (showSettings)
        {
            title_settings_pointer(&settings, in.mouse_present, in.mouse_x, in.mouse_y);
            title_draw(m, &menu, 0, &settings);  /* the still, the controls and the Back button */
        }
        else if (showSlots)
        {
            title_slots_pointer(&slots, in.mouse_present, in.mouse_x, in.mouse_y);
            title_draw(m, &menu, &slots, 0);     /* the still, the slots and the Back button */
        }
        else
        {
            title_menu_pointer(&menu, in.mouse_present, in.mouse_x, in.mouse_y);
            title_draw(m, &menu, 0, 0);          /* the still, the pointer, and the button it is over */
        }
        plat_present();
        if (showSettings)
        {
            if (in.mouse_left_pressed && !title_settings_click(m, &settings)) showSettings = 0;
        }
        else if (showSlots)
        {
            /* Load Game's view: one row per save file, and Back puts the buttons back. A row loads
             * the file it names - "Slot N (A)" is the add-on's, and boots that game - so no row
             * asks a question it has already answered (docs\antheads.md, Phase 7). When the slots
             * hold more files than rows, the last row pages through them. */
            if (in.mouse_left_pressed)
            {
                if (slots.back_hover)
                {
                    showSlots = 0;
                    menu.hover = -1;
                    printf("title: back to the main menu (frame %lu)\n",
                           (unsigned long)m->frame);
                }
                else if (slots.more_hover)
                {
                    title_slots_next_page(&slots);
                    printf("title: slots: page %d (frame %lu)\n", slots.page + 1,
                           (unsigned long)m->frame);
                }
                else if (slots.hover >= 0)
                {
                    const title_slot_entry *e = title_slots_at(&slots, slots.hover);

                    if (e != 0)
                    {
                        m->saveSlot = e->slot;
                        g_loadTarget = e->kind;
                        pick = TITLE_PICK_LOAD;
                        g_fromMenu = 1;
                        printf("title: save slot %d selected%s (frame %lu)\n", m->saveSlot,
                               e->kind == RT_SAVE_ANTHEADS ? ": Antheads" : "",
                               (unsigned long)m->frame);
                    }
                }
            }
        }
        else
        {
            if (in.mouse_left_pressed && menu.hover >= 0)
            {
                const title_button *b = &menu.buttons[menu.hover];

                if (b->action == TITLE_ACTION_NEW_GAME) pick = TITLE_PICK_INTRO;
                else if (b->action == TITLE_ACTION_LOAD_GAME)
                {
                    /* The slot list replaces the buttons; nothing is loaded until a slot is
                     * clicked, and an empty one cannot be clicked at all. The two lines say what
                     * the list is drawn from - which slots have a save, and which of them the
                     * add-on wrote ("Slot N (A)") - so a check reads the list, not a picture. */
                    int i, used = 0, ant = 0;

                    title_slots_load(&slots, m);
                    showSlots = 1;
                    printf("title: load game: %d save slot(s) (frame %lu)\n", TITLE_SLOT_COUNT,
                           (unsigned long)m->frame);
                    printf("title: slots:");
                    for (i = 0; i < TITLE_SLOT_COUNT; i++)
                    {
                        if (slots.state[i] == RT_SAVE_EMPTY) continue;
                        if (!used) { printf(" saved in"); used = 1; }
                        printf(" %d", i + 1);
                    }
                    if (!used) printf(" none saved");
                    printf("; (A) on");
                    for (i = 0; i < TITLE_SLOT_COUNT; i++)
                    {
                        if ((slots.state[i] & RT_SAVE_ANTHEADS) == 0) continue;
                        printf(" %d", i + 1);
                        ant = 1;
                    }
                    if (!ant) printf(" none");
                    printf(" (frame %lu)\n", (unsigned long)m->frame);
                }
                else if (b->action == TITLE_ACTION_SETTINGS)
                {
                    /* The buttons go; the options and Back take their place. */
                    title_settings_open(m, &settings);
                    showSettings = 1;
                    menu.hover = -1;
                }
                else if (b->action == TITLE_ACTION_QUIT)
                {
                    pick = TITLE_PICK_QUIT;
                    quitNotice = 1;
                }
                else if (b->action == TITLE_ACTION_ANTHEADS)
                {
                    /* New Game for the other build: the game starts, the menu does not come back
                     * (docs\antheads.md). */
                    pick = TITLE_PICK_ANTHEADS;
                    printf("title: playing Antheads (frame %lu)\n", (unsigned long)m->frame);
                }
                if (pick >= 0) g_fromMenu = 1;
            }
            if (pick < 0 && (in.pressed[KEY_FIRE] || in.pressed[KEY_0])) /* fire and 0 are New Game */
            {
                pick = TITLE_PICK_INTRO;
                g_fromMenu = 1;
            }
            for (i = 0; i < TITLE_SCENE_COUNT && pick < 0; i++)
                /* Ctrl+W is the minigame cheat (src\host\cheat.c), so it must not also take the W
                 * ending here; W alone still does. A scene the program has no entry for is not
                 * offered at all (the add-on's "3" starts nothing). */
                if (in.pressed[g_scenes[i].key] &&
                    title_entry_pc(g_scenes[i].entry) != 0 &&
                    !(g_scenes[i].key == KEY_W && in.down[KEY_CTRL]))
                    pick = TITLE_PICK_SCENE + i;
            if (g_virtualKey >= 0 && pick < 0 && g_ticks > 0) /* --titlekey: a scripted choice */
            {
                int k = g_virtualKey;
                g_virtualKey = -1;
                if (k == 0) pick = TITLE_PICK_INTRO;
                else if (k <= TITLE_SCENE_COUNT &&
                         title_entry_pc(g_scenes[k - 1].entry) != 0)
                    pick = TITLE_PICK_SCENE + (k - 1);
                else if (k <= TITLE_SCENE_COUNT)
                {
                    /* A scene this program does not have: say so and end the run rather than
                     * waiting for a game that can never start. */
                    printf("title: --titlekey %d is \"%s\", which this program has no entry for\n",
                           k, g_scenes[k - 1].name);
                    pick = TITLE_PICK_QUIT;
                }
                else if (k == TITLE_KEY_LOAD || k == TITLE_KEY_NEW_GAME)
                {
                    /* The Load Game / New Game buttons, for a scripted run: the menu path (the
                     * load screen is answered by the title), not the original's. The scripted
                     * Load Game takes the active slot directly - a script has no pointer - and
                     * the build that wrote the save there is the one that loads it: this run's
                     * own unless the slot holds only the other game's file. */
                    pick = k == TITLE_KEY_LOAD ? TITLE_PICK_LOAD : TITLE_PICK_INTRO;
                    g_fromMenu = 1;
                    if (k == TITLE_KEY_LOAD)
                    {
                        int state = rt_save_slot_state(m, m->saveSlot);
                        int mine = seam_is_addon() ? RT_SAVE_ANTHEADS : RT_SAVE_ORIGINAL;
                        int other = mine == RT_SAVE_ANTHEADS ? RT_SAVE_ORIGINAL : RT_SAVE_ANTHEADS;

                        g_loadTarget = (state & mine) || !(state & other) ? mine : other;
                    }
                }
                else if (k == TITLE_KEY_SETTINGS)
                {
                    /* The Settings button, for a scripted run: the view opens and the script's
                     * pointer (--mouse) does the clicking, Back ends it. */
                    title_settings_open(m, &settings);
                    showSettings = 1;
                }
                else if (k == TITLE_KEY_MENU)
                {
                    /* The menu itself: the run's --mouse script clicks the buttons. */
                    g_scriptMenu = 1;
                }
                else if (k == TITLE_KEY_ADDON)
                {
                    /* The fifth button: the add-on's game. A data folder without its tree has no
                     * such button, and a game already running the add-on does not offer it - either
                     * way a scripted run says so instead of waiting for a button that is not
                     * drawn. */
                    if (host_title_addon(m) && !seam_is_addon())
                    {
                        printf("title: playing Antheads (frame %lu)\n",
                               (unsigned long)m->frame);
                        pick = TITLE_PICK_ANTHEADS;
                        g_fromMenu = 1;
                    }
                    else
                    {
                        printf("title: --titlekey %d is the add-on's game, which this run does not "
                               "offer\n", TITLE_KEY_ADDON);
                        pick = TITLE_PICK_QUIT;
                    }
                }
                else pick = TITLE_PICK_QUIT;    /* no such key: a scripted run must not wait for one */
            }
        }
        if (pick >= 0)
        {
            if (quitNotice) title_quit_notice(m);
            break;
        }
        title_tick(m);
        g_ticks++;                       /* a real key press always lands after one menu frame, and
                                          * the first tick is where the score's CIA handler runs */
        plat_frame_sync();
    }
    m->on_frame = savedFrame;
    m->on_present = savedPresent;
    return pick;
}

int host_title_check(rt_machine *m, u32 pc)
{
    if (g_state == TITLE_SKIP_INTRO && pc == RC_ADDR(TITLE_INTRO_RUN))
    {
        /* Load Game: the intro's setup is running and is about to enter the intro scene. Skip that
         * one call - the arguments it was given are dropped by the `lea (0x10,A7),A7` at
         * TITLE_INTRO_SKIP - and wait for the load screen the setup leads to. */
        u32 r[18];

        oracle_regs_get(r);
        r[REGS_PC] = RC_ADDR(TITLE_INTRO_SKIP);
        oracle_regs_set(r);
        host_regs_sync(m);
        host_loading_hold(m);       /* the intro is skipped: the game starts building now */
        printf("title: skipping the intro (frame %lu)\n", (unsigned long)m->frame);
        g_state = TITLE_PROMPT;
        rc_breakPc = RC_ADDR(TITLE_LOAD_PROMPT);
        return 1;
    }

    if (g_state == TITLE_PROMPT && pc == RC_ADDR(TITLE_LOAD_PROMPT))
    {
        /* The intro is over and the boot loop is about to run the engine's YES/NO load screen.
         * The decision it asks for was taken on the title, so hand it the answer the prompt would
         * have returned: the routine's `link` has run (its frame is A5), so writing D0 and
         * resuming at the instruction after its `jsr FUN_000101e4` runs its own decision, palette
         * restore and - for Load Game - its own file read. Nothing of the screen is drawn. */
        u32 r[18];

        oracle_regs_get(r);
        r[REGS_D + 0] = g_wantLoad ? 1u : 0u;
        r[REGS_PC] = RC_ADDR(TITLE_LOAD_ANSWER);
        oracle_regs_set(r);
        host_regs_sync(m);
        /* The save is about to be read back into the image; its pause word is the port's, not the
         * engine's, so the frames after this boundary clear it (src\host\time_freeze.c). */
        if (g_wantLoad) host_time_freeze_loaded();
        host_loading_hold(m);       /* the intro is over: the game starts building now */
        printf("title: %s (frame %lu)\n",
               g_wantLoad ? "loading the selected save slot" : "a new game, nothing to load",
               (unsigned long)m->frame);
        g_wantLoad = 0;
        g_state = TITLE_OFF;
        rc_breakPc = 0;
        return 1;
    }

    if (g_state == TITLE_OFF || pc != RC_ADDR(TITLE_HOLD_PC)) return 0;

    if (g_popOnReturn != 0)
    {
        /* Every caller in the image pops the arguments it pushed once the routine returns
         * (`addq.w #4,SP` after the jsr, or an `lea (n,SP),SP`). An injected call has no such
         * caller, so the arguments would stay on the stack - and the routine that runs next at
         * this pc is the intro's setup, whose own `rts` would then return into the first argument
         * instead of into the boot. That is a real crash: with the score's two arguments left
         * over, FUN_00009870's `unlk/rts` at 0x990A returned into &"Overhead2.tiny". */
        u32 r[18];

        oracle_regs_get(r);
        r[REGS_A + 7] += g_popOnReturn;
        oracle_regs_set(r);
        host_regs_sync(m);
        g_popOnReturn = 0;
    }

    if (g_state == TITLE_UNLOAD)
    {
        /* Whatever is playing has to go before the map's score can be loaded - in both directions:
         * FUN_0000E804 returns immediately while DAT_00023C58 (a score is loaded) is set, so a
         * scene's leftover score would keep the title silent, and the title's would keep the scene
         * silent. On the first engage nothing is loaded and this call does nothing. */
        title_call(m, RC_ADDR(TITLE_UNLOAD_PC), pc, 0, 0, 0);
        g_state = TITLE_LOAD;
        return 1;
    }

    if (g_state == TITLE_LOAD)
    {
        title_call(m, RC_ADDR(TITLE_SCORE_PC), pc, 2, RC_ADDR(TITLE_SCORE_DESC),
                   0xFFFFFFFFu);                                        /* loop for ever */
        g_state = TITLE_PLAYING;
        printf("title: the map screen's score starts under the title\n");
        return 1;
    }

    if (g_state == TITLE_LAUNCH)
    {
        const title_scene *s = &g_scenes[g_pick];
        u32 entry = title_entry_pc(s->entry);

        if (entry == 0)
        {
            /* This program has no such scene (the add-on has no fire game): nothing to enter, and
             * the title stays up. Asked for by --titlekey, that ends the scripted run instead of
             * waiting for a game that will never start. */
            printf("title: the running program has no \"%s\" scene (frame %lu)\n",
                   s->name, (unsigned long)m->frame);
            g_state = TITLE_PLAYING;
            return 1;
        }

        /* The scene returns to this same instruction, and rc_breakPc stays armed so the dispatch
         * hands the program back here when it does - a translated stream runs on through an rts
         * (`rc_ret` only sets rc_returned), so without the break the program would simply continue
         * into the intro's setup and the title would never come back. */
        if (s->entry == TITLE_ENTRY_CHICKEN)
        {
            /* The race's caller (FUN_0001CC2E) sets the swerve window from the encounter count
             * before running it; a race entered from the title is the first one. */
            rt_write16(&m->mem, RC_ADDR(TITLE_SWERVE_PC), 0x0078u);
            rt_write16(&m->mem, RC_ADDR(TITLE_SWERVE_END), 0x0104u);
        }
        if (s->entry == TITLE_ENTRY_ANT)
        {
            /* The room's own state, every launch. The clock VBI is the world loop's, installed
             * once and left installed (the engine keeps it for the whole session); a second
             * launch must not add a second server. */
            const char *name = "!B12";
            int i;

            rt_write16(&m->mem, RC_ADDR(TITLE_LOCATION_PC), TITLE_ANT_LOC);
            rt_write16(&m->mem, RC_ADDR(TITLE_ROOM_PC), TITLE_ANT_ROOM);
            for (i = 0; name[i] != 0; i++)
                rt_write8(&m->mem, RC_ADDR(TITLE_ROOM_NAME) + (u32)i, (u32)(u8)name[i]);
            rt_write8(&m->mem, RC_ADDR(TITLE_ROOM_NAME) + (u32)i, 0);
            if (!g_clockVbi)
            {
                g_clockVbi = 1;
                title_call(m, RC_ADDR(TITLE_CLOCKVBI_PC), pc, 0, 0, 0);   /* returns here */
                return 1;
            }
        }
        if (s->ending != 0)
            rt_write16(&m->mem, RC_ADDR(TITLE_END_FLAG), s->ending);  /* the word FUN_0000A4D6 reads */
        title_call(m, RC_ADDR(entry), pc, s->nargs, s->arg0, s->arg1);
        printf("title: %s at frame %lu\n", s->name, (unsigned long)m->frame);
        if (s->ending != 0)
            printf("title: ending %u\n", (unsigned)s->ending);
        g_state = TITLE_UNLOAD;
        return 1;
    }

    /* TITLE_PLAYING: back here means the loader and the player have returned. The map's own setup
     * does the same thing at FUN_0000bfca: FUN_00009cf2(&"Overhead2.tiny") and then 100 into the
     * music block, so the title sounds exactly as loud as the map screen does. */
    {
        u32 block = rt_read32(&m->mem, RC_ADDR(TITLE_MUSIC_BLOCK));
        int pick;

        if (block != 0) rt_write16(&m->mem, block, 100);
        title_keys();
        pick = title_play(m);
        if (pick == TITLE_PICK_ANTHEADS)
        {
            /* Play Antheads: the add-on's game, from the same menu. The add-on is another program,
             * so this is a boot of the machine with that image - a game start, not a screen: the
             * front end boots it and hands the new machine to host_title_new_game(), which lets
             * the add-on's own intro run from the very start and only answers the load screen at
             * its end. The player never sees a menu of the add-on's own, and nothing of this
             * session survives into it - which is why the stop is forced twice, as
             * host_title_escape() does. */
            g_switchTo = HOST_PROGRAM_ANT;
            g_playOnBoot = 1;
            g_restart = 1;
            m->stop = 1;
            rc_stopAt = (long)m->insns + 1;
            g_state = TITLE_OFF;
            rc_breakPc = 0;
            return 1;
        }
        if (pick == TITLE_PICK_QUIT)
        {
            m->stop = 1;
            g_state = TITLE_OFF;
            rc_breakPc = 0;
            return 1;
        }
        if (pick == TITLE_PICK_INTRO || pick == TITLE_PICK_LOAD)
        {
            /* Which build that pick plays. New Game plays the build that is running; a loaded save
             * plays the build that wrote it, so a slot's file can never be restored into the other
             * game's image - the two saves never cross-load (docs\antheads.md, Phase 7). */
            int mine = seam_is_addon() ? HOST_PROGRAM_ANT : HOST_PROGRAM_ORIGINAL;
            int target = pick == TITLE_PICK_LOAD && g_loadTarget == RT_SAVE_ANTHEADS
                             ? HOST_PROGRAM_ANT
                             : pick == TITLE_PICK_LOAD && g_loadTarget == RT_SAVE_ORIGINAL
                                   ? HOST_PROGRAM_ORIGINAL
                                   : mine;

            if (target != mine)
            {
                /* The save belongs to the other game: this machine cannot restore it, so the
                 * front end boots that build and hands the fresh machine to
                 * host_title_load_on_boot(), which loads the slot there. The stop is forced twice,
                 * as host_title_escape does. */
                g_switchTo = target;
                g_loadOnBoot = 1;
                g_playOnBoot = 0;
                g_restart = 1;
                printf("title: slot %d is %s - booting it to load (frame %lu)\n", m->saveSlot,
                       g_loadTarget == RT_SAVE_ANTHEADS ? "the add-on's save" : "the 1989 game's save",
                       (unsigned long)m->frame);
                m->stop = 1;
                rc_stopAt = (long)m->insns + 1;
                g_state = TITLE_OFF;
                rc_breakPc = 0;
                return 1;
            }
            /* A new game or a loaded one replaces the clock the freeze was holding: it starts
             * running from the date and time the game (or the save) has. */
            host_time_freeze_reset();
            title_call(m, RC_ADDR(TITLE_UNLOAD_PC), pc, 0, 0, 0);  /* the engine gets the score back */
            if (pick == TITLE_PICK_INTRO)
                printf("title: starting the game (frame %lu)\n", (unsigned long)m->frame);
            else
                printf("title: loading save slot %d (frame %lu)\n", m->saveSlot,
                       (unsigned long)m->frame);
            g_wantLoad = pick == TITLE_PICK_LOAD;
            if (g_fromMenu)
            {
                /* A played game: the pick is the answer to the load screen the boot loop asks for
                 * once the intro's setup has returned. Loading goes straight in - the intro scene
                 * itself is skipped - while a new game plays it and only suppresses the question.
                 * The setup is what loads the resources the restored state expects, so it runs
                 * either way. */
                g_state = g_wantLoad ? TITLE_SKIP_INTRO : TITLE_PROMPT;
                rc_breakPc = g_wantLoad ? RC_ADDR(TITLE_INTRO_RUN) : RC_ADDR(TITLE_LOAD_PROMPT);
            }
            else
            {
                g_state = TITLE_OFF;         /* --titlekey: the original's flow, untouched */
                rc_breakPc = 0;
            }
            return 1;
        }
        /* A minigame: free the map's score first, exactly as the dispatcher does, then enter it on
         * the next pass through this point. */
        g_pick = pick - TITLE_PICK_SCENE;
        title_call(m, RC_ADDR(TITLE_UNLOAD_PC), pc, 0, 0, 0);
        g_state = TITLE_LAUNCH;
        return 1;
    }
}
