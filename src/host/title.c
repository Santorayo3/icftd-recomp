/* The title screen.
 *
 * Port code, not a translation: the original boots straight into its intro, and its own title is
 * drawn by code we have not translated. This scene exists so the product has a place for the main
 * menu (settings, save slots, ...) that a DOS/Win32 release needs and a 1989 game never had; for
 * now it shows assets\titlescreen.png with its four menu buttons (title_button.c), plays the map
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
 * The buttons are wired. New Game starts the intro (fire and 0 do the same), Load Game loads the
 * slot the player selected (m->saveSlot, F1..F4/F5 in the game), Quit Game closes the application,
 * and Settings is drawn but not wired yet. A click is `input_state.mouse_left_pressed`, not the
 * game's /FIRE, so a click that misses a button does nothing at all.
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
#include "machine.h"
#include "display.h"
#include "../oracle/cpu.h"
#include "../recomp/cpu.h"
#include "title.h"
#include "title_art.h"
#include "title_button.h"

/* Runtime addresses: the image loads at 0x4000, and the model addresses named in the comments are
 * the ones in re\disasm\dshell.asm. */
#define TITLE_HOLD_PC     0x0D870u   /* FUN_00009870, the intro's setup          (model 0x9870) */
#define TITLE_SCORE_PC    0x0DCF2u   /* FUN_00009CF2(descriptor, loop): load a score and start it
                                      * - the map's setup calls it with &"Overhead2.tiny" at
                                      *   FUN_0000bfca; the map's re-entry path does the same at
                                      *   0x10920..0x1093e (load, then FUN_00009cc4 to start) */
#define TITLE_UNLOAD_PC   0x12C8Au   /* FUN_0000EC8A, stop and free that score   (model 0xEC8A) */
#define TITLE_SCORE_DESC  0x27B84u   /* &"Overhead2.tiny", the map's score       (model 0x23B84) */
#define TITLE_MUSIC_BLOCK 0x27C5Eu   /* DAT_00023C5E: the loaded music block     (model 0x23C5E) */

/* The engine's own entry points for the scenes the digit keys start, at runtime addresses (the
 * image loads at 0x4000). Each is what FUN_00002cc8's dispatcher calls once its action is picked:
 * the fight is mode 3 (`jsr` slot 46 at 0x2E3E), Take a Flight is mode 9 with the argument 6
 * (0x2F72), the fire game is mode 0xb (0x2EBA), the hospital escape is mode 6 through vector slot
 * 70 (0x2EF8). None of them needs the room the dispatcher tears down first: each loads its own
 * banks, programs its own screen and returns to its caller - measured from this very hold point,
 * see tools\title-check.ps1.
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
#define TITLE_CHICKEN_PC  0x1FA3Eu  /* FUN_0001BA3E, the road/chicken scene   (model 0xBA3E) */
#define TITLE_UNDER_PC    0x0FFCAu  /* FUN_0000BFCA, the underground ant nest (model 0xBFCA) */
#define TITLE_SWERVE_PC   0x30100u  /* DAT_0002C100: the truck x that makes him swerve */
#define TITLE_SWERVE_END  0x30102u  /* DAT_0002C102, the window's other edge  */

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
 * the pistol in a title launch could be aimed but never fired. */
#define TITLE_ANT_PC      0x0CC5Cu  /* FUN_00008C5C, the giant-ant fight      (model 0x8C5C) */
#define TITLE_CLOCKVBI_PC 0x0951Cu  /* FUN_0000551C, installs the clock VBI   (model 0x551C) */
#define TITLE_LOCATION_PC 0x2CA3Au  /* DAT_00028A3A, the location             (model 0x28A3A) */
#define TITLE_ROOM_PC     0x2CB10u  /* DAT_00028B10, the room byte            (model 0x28B10) */
#define TITLE_ROOM_NAME   0x2CB3Eu  /* DAT_00028B3E, "!B%02d" of that byte    (model 0x28B3E) */
#define TITLE_ANT_LOC     0x0011u
#define TITLE_ANT_ROOM    0x000Cu

/* The endings, the same way: 1 win, 2 the nest collapse, 3 the deadline. FUN_0000A4D6 reads the
 * word and runs `!WIN` or `!LOS` itself, so the key only has to set it first. */
#define TITLE_END_PC      0x0E4D6u  /* FUN_0000A4D6, the ending dispatcher    (model 0xA4D6) */
#define TITLE_END_FLAG    0x26D68u  /* DAT_00022D68, which ending it runs     (model 0x22D68) */

/* The engine's own YES/NO load screen, FUN_0001029e ("Lizard Breath has been awaiting your
 * return."), which the boot loop calls at 0x1EA right after the intro's setup returns. A played
 * game never shows it: the decision it asks for was taken on the title, so the host answers it. The
 * break pc is the routine's first instruction after its `link` (A5 then addresses its frame), and
 * the answer is delivered the way its own prompt delivers it - D0 written at the instruction right
 * after the `jsr FUN_000101e4`, where the routine stores it and branches to its load or its
 * "a new game" path. Only the screen - the dim, the three lines, the prompt - is skipped; the
 * decision, the palette restore and the load itself are the engine's own code. */
#define TITLE_LOAD_PROMPT 0x142A2u  /* FUN_0001029e+4, after `link A5,#ffffee` (model 0x102A2) */
#define TITLE_LOAD_ANSWER 0x142E6u  /* ... and after `jsr FUN_000101e4`, which reads D0 (0x102E6) */

/* The intro is a MovE scene, not an animation the setup draws itself: FUN_00009870 loads the scene
 * record at 0x993c and hands it to FUN_0001EB94, which runs it through FUN_0001D2C6 - the runner
 * the situation map uses too. Load Game has nothing to show before the save, so the host skips that
 * one call: the break is the `jsr` itself, so the four arguments it would have consumed are left for
 * the `lea (0x10,A7),A7` that follows, and the setup's own cleanup (close the bank, free the score)
 * still runs. Nothing of the scene is entered. */
#define TITLE_INTRO_RUN   0x0D8F8u  /* FUN_00009870's `jsr (vector 96)`      (model 0x98F8) */
#define TITLE_INTRO_SKIP  0x0D8FCu  /* the `lea (0x10,A7),A7` after it       (model 0x98FC) */

typedef struct title_scene
{
    int         key;                     /* the key that starts it (KEY_1 is "1") */
    const char *keyName;                 /* how title_keys() writes it down */
    const char *name;
    u32         entry;
    int         nargs;
    u32         arg0, arg1;
    u16         ending;                  /* non-0: write DAT_00022D68 before entering TITLE_END_PC */
} title_scene;

static const title_scene g_scenes[] =
{
    { KEY_1, "1", "Fight",           0x0F46Cu, 0, 0, 0, 0 },
    { KEY_2, "2", "Take a Flight",   0x147A6u, 1, 6, 0, 0 },   /* 6 = the dispatcher's own argument */
    { KEY_3, "3", "Fire Game",       0x0FE34u, 0, 0, 0, 0 },
    { KEY_4, "4", "Escape Hospital", 0x1C19Au, 0, 0, 0, 0 },
    { KEY_5, "5", "Chicken Race",    TITLE_CHICKEN_PC, 0, 0, 0, 0 },
    { KEY_6, "6", "Underground",     TITLE_UNDER_PC,   0, 0, 0, 0 },
    { KEY_7, "7", "Giant Ant",       TITLE_ANT_PC,     0, 0, 0, 0 },
    { KEY_W, "W", "Win Ending",      TITLE_END_PC,     0, 0, 0, 1 },
    { KEY_C, "C", "Nest Collapse",   TITLE_END_PC,     0, 0, 0, 2 },
    { KEY_T, "T", "Time Ran Out",    TITLE_END_PC,     0, 0, 0, 3 }
};

#define TITLE_SCENE_COUNT ((int)(sizeof g_scenes / sizeof g_scenes[0]))

/* What title_play() picked: 0 leaves the game, 1 is the intro, 2 loads a save, 3 + n is scene n. */
#define TITLE_PICK_QUIT   0
#define TITLE_PICK_INTRO  1
#define TITLE_PICK_LOAD   2
#define TITLE_PICK_SCENE  3
/* --titlekey's values for the menu's New Game and Load Game buttons; past the scenes and endings. */
#define TITLE_KEY_LOAD     11
#define TITLE_KEY_NEW_GAME 12

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
static int g_ticks;                      /* menu frames run since the title came up */
static u32 g_popOnReturn;                /* argument bytes the injected call's caller would pop */
static int g_clockVbi;                   /* the world loop's clock VBI is installed (once) */
static int g_playMode;                   /* this session is a played game: Esc restarts it */
static int g_restart;                    /* Esc asked the front end for a fresh boot */
static int g_wantLoad;                   /* the menu chose Load Game: the load screen answers yes */
static int g_fromMenu;                   /* the pick was the player's, not --titlekey's */

void host_title_arm(int on)
{
    g_state = on ? TITLE_UNLOAD : TITLE_OFF;
    g_pick = 0;
    g_popOnReturn = 0;
    g_ticks = 0;
    g_clockVbi = 0;                      /* a fresh machine has no clock VBI installed */
    g_playMode = on;                     /* Esc restarts a played game, never a measurement */
    g_wantLoad = 0;
    g_fromMenu = 0;
    /* The intro's setup is reached inside a translated function (the mode dispatcher runs it as a
     * block), so there is no call boundary to catch: ask the dispatch to hand the program back
     * before that instruction runs. Cleared again as soon as the title is done with it. */
    rc_breakPc = on ? TITLE_HOLD_PC : 0;
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
 * never reach one. */
void host_title_escape(rt_machine *m)
{
    if (!g_playMode) { m->stop = 1; return; }   /* a measurement: the front end's old stop */
    if (g_restart) return;
    g_restart = 1;
    m->stop = 1;
    rc_stopAt = (long)m->insns + 1;
}

int host_title_restart_pending(void)
{
    int r = g_restart;
    g_restart = 0;
    return r;
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

static void title_draw(rt_machine *m, const title_menu *menu)
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
    plat_set_palette(TITLE_BUTTON_PEN_OUTLINE,
                     TITLE_BUTTON_PEN_COUNT - TITLE_BUTTON_PEN_OUTLINE, title_menu_palette());
    /* The pointer is the game's own arrow, with the two pens the runtime overlay uses. */
    plat_set_palette(EMU_PEN_POINTER, EMU_PEN_POINTER_COLOURS, rt_pointer_palette());
    for (y = 0; y < TITLE_H && y < SCREEN_H; y++)
    {
        for (x = 0; x < TITLE_W && x < SCREEN_W; x++)
            dst[(u32)y * stride + (u32)x] = g_titleImg[(u32)y * TITLE_W + (u32)x];
        for (; x < SCREEN_W; x++) dst[(u32)y * stride + (u32)x] = 0;
    }
    for (; y < SCREEN_H; y++) memset(dst + (u32)y * stride, 0, SCREEN_W);
    title_menu_draw(m, menu, dst, stride, SCREEN_W, SCREEN_H);
}

/* The debug keys, on the console: the four menu entries are drawn on the title itself, but the
 * scenes and endings have no button, so this line is where those keys are written down. */
static void title_keys(void)
{
    int i;

    printf("title: fire or 0 starts the game;");
    for (i = 0; i < TITLE_SCENE_COUNT; i++)
        printf("  %s %s", g_scenes[i].keyName, g_scenes[i].name);
    printf("\n");
}

/* Shows the art until the player starts something. The keys are read as *presses*, not as held
 * state: the button that ended a scene is usually still down when the title comes back, and it must
 * not start the next thing on its own. */
static int title_play(rt_machine *m)
{
    input_state in;
    title_menu menu;
    void (*savedFrame)(rt_machine *) = m->on_frame;
    void (*savedPresent)(rt_machine *) = m->on_present;
    int pick = -1;

    if (g_scripted && g_virtualKey < 0) return TITLE_PICK_QUIT;   /* the choice was taken already */

    title_menu_init(&menu);
    m->on_frame = 0;                     /* the title owns the keyboard ... */
    m->on_present = 0;                   /* ... and the screen */
    while (pick < 0)
    {
        int i;

        if (!plat_pump(&in)) { pick = TITLE_PICK_QUIT; break; }        /* the window was closed */
        title_menu_pointer(&menu, in.mouse_present, in.mouse_x, in.mouse_y);
        title_draw(m, &menu);            /* the still, the pointer, and the button it is over */
        plat_present();
        if (in.mouse_left_pressed && menu.hover >= 0)
        {
            const title_button *b = &menu.buttons[menu.hover];

            if (b->action == TITLE_ACTION_NEW_GAME) pick = TITLE_PICK_INTRO;
            else if (b->action == TITLE_ACTION_LOAD_GAME)
            {
                /* The selected slot is the one the engine would write to (F1..F5 in the game).
                 * An empty one is not a new game: the engine's load would fail and the boot loop
                 * would start one, so the menu stays up instead. */
                if (rt_save_slot_empty(m, m->saveSlot))
                    printf("title: save slot %d is empty (frame %lu)\n", m->saveSlot,
                           (unsigned long)m->frame);
                else
                    pick = TITLE_PICK_LOAD;
            }
            else if (b->action == TITLE_ACTION_QUIT) pick = TITLE_PICK_QUIT;
            /* TITLE_ACTION_NONE (Settings) is drawn and does nothing yet. */
            if (pick >= 0) g_fromMenu = 1;
        }
        if (pick < 0 && (in.pressed[KEY_FIRE] || in.pressed[KEY_0]))   /* fire and 0 are New Game */
        {
            pick = TITLE_PICK_INTRO;
            g_fromMenu = 1;
        }
        for (i = 0; i < TITLE_SCENE_COUNT && pick < 0; i++)
            if (in.pressed[g_scenes[i].key]) pick = TITLE_PICK_SCENE + i;
        if (g_virtualKey >= 0 && pick < 0 && g_ticks > 0) /* --titlekey: a scripted choice */
        {
            int k = g_virtualKey;
            g_virtualKey = -1;
            if (k == 0) pick = TITLE_PICK_INTRO;
            else if (k <= TITLE_SCENE_COUNT) pick = TITLE_PICK_SCENE + (k - 1);
            else if (k == TITLE_KEY_LOAD || k == TITLE_KEY_NEW_GAME)
            {
                /* The Load Game / New Game buttons, for a scripted run: the menu path (the load
                 * screen is answered by the title), not the original's. */
                pick = k == TITLE_KEY_LOAD ? TITLE_PICK_LOAD : TITLE_PICK_INTRO;
                g_fromMenu = 1;
            }
            else pick = TITLE_PICK_QUIT;    /* no such key: a scripted run must not wait for one */
        }
        if (pick >= 0) break;
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
    if (g_state == TITLE_SKIP_INTRO && pc == TITLE_INTRO_RUN)
    {
        /* Load Game: the intro's setup is running and is about to enter the intro scene. Skip that
         * one call - the arguments it was given are dropped by the `lea (0x10,A7),A7` at
         * TITLE_INTRO_SKIP - and wait for the load screen the setup leads to. */
        u32 r[18];

        oracle_regs_get(r);
        r[REGS_PC] = TITLE_INTRO_SKIP;
        oracle_regs_set(r);
        host_regs_sync(m);
        host_loading_hold(m);       /* the intro is skipped: the game starts building now */
        printf("title: skipping the intro (frame %lu)\n", (unsigned long)m->frame);
        g_state = TITLE_PROMPT;
        rc_breakPc = TITLE_LOAD_PROMPT;
        return 1;
    }

    if (g_state == TITLE_PROMPT && pc == TITLE_LOAD_PROMPT)
    {
        /* The intro is over and the boot loop is about to run the engine's YES/NO load screen.
         * The decision it asks for was taken on the title, so hand it the answer the prompt would
         * have returned: the routine's `link` has run (its frame is A5), so writing D0 and
         * resuming at the instruction after its `jsr FUN_000101e4` runs its own decision, palette
         * restore and - for Load Game - its own file read. Nothing of the screen is drawn. */
        u32 r[18];

        oracle_regs_get(r);
        r[REGS_D + 0] = g_wantLoad ? 1u : 0u;
        r[REGS_PC] = TITLE_LOAD_ANSWER;
        oracle_regs_set(r);
        host_regs_sync(m);
        host_loading_hold(m);       /* the intro is over: the game starts building now */
        printf("title: %s (frame %lu)\n",
               g_wantLoad ? "loading the selected save slot" : "a new game, nothing to load",
               (unsigned long)m->frame);
        g_wantLoad = 0;
        g_state = TITLE_OFF;
        rc_breakPc = 0;
        return 1;
    }

    if (g_state == TITLE_OFF || pc != TITLE_HOLD_PC) return 0;

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
        title_call(m, TITLE_UNLOAD_PC, pc, 0, 0, 0);
        g_state = TITLE_LOAD;
        return 1;
    }

    if (g_state == TITLE_LOAD)
    {
        title_call(m, TITLE_SCORE_PC, pc, 2, TITLE_SCORE_DESC, 0xFFFFFFFFu);  /* loop for ever */
        g_state = TITLE_PLAYING;
        printf("title: the map screen's score starts under the title\n");
        return 1;
    }

    if (g_state == TITLE_LAUNCH)
    {
        const title_scene *s = &g_scenes[g_pick];

        /* The scene returns to this same instruction, and rc_breakPc stays armed so the dispatch
         * hands the program back here when it does - a translated stream runs on through an rts
         * (`rc_ret` only sets rc_returned), so without the break the program would simply continue
         * into the intro's setup and the title would never come back. */
        if (s->entry == TITLE_CHICKEN_PC)
        {
            /* The race's caller (FUN_0001CC2E) sets the swerve window from the encounter count
             * before running it; a race entered from the title is the first one. */
            rt_write16(&m->mem, TITLE_SWERVE_PC, 0x0078u);
            rt_write16(&m->mem, TITLE_SWERVE_END, 0x0104u);
        }
        if (s->entry == TITLE_ANT_PC)
        {
            /* The room's own state, every launch. The clock VBI is the world loop's, installed
             * once and left installed (the engine keeps it for the whole session); a second
             * launch must not add a second server. */
            const char *name = "!B12";
            int i;

            rt_write16(&m->mem, TITLE_LOCATION_PC, TITLE_ANT_LOC);
            rt_write16(&m->mem, TITLE_ROOM_PC, TITLE_ANT_ROOM);
            for (i = 0; name[i] != 0; i++)
                rt_write8(&m->mem, TITLE_ROOM_NAME + (u32)i, (u32)(u8)name[i]);
            rt_write8(&m->mem, TITLE_ROOM_NAME + (u32)i, 0);
            if (!g_clockVbi)
            {
                g_clockVbi = 1;
                title_call(m, TITLE_CLOCKVBI_PC, pc, 0, 0, 0);   /* returns here */
                return 1;
            }
        }
        if (s->ending != 0)
            rt_write16(&m->mem, TITLE_END_FLAG, s->ending);      /* the word FUN_0000A4D6 reads */
        title_call(m, s->entry, pc, s->nargs, s->arg0, s->arg1);
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
        u32 block = rt_read32(&m->mem, TITLE_MUSIC_BLOCK);
        int pick;

        if (block != 0) rt_write16(&m->mem, block, 100);
        title_keys();
        pick = title_play(m);
        if (pick == TITLE_PICK_QUIT)
        {
            m->stop = 1;
            g_state = TITLE_OFF;
            rc_breakPc = 0;
            return 1;
        }
        if (pick == TITLE_PICK_INTRO || pick == TITLE_PICK_LOAD)
        {
            title_call(m, TITLE_UNLOAD_PC, pc, 0, 0, 0);  /* the engine gets the score back */
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
                rc_breakPc = g_wantLoad ? TITLE_INTRO_RUN : TITLE_LOAD_PROMPT;
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
        title_call(m, TITLE_UNLOAD_PC, pc, 0, 0, 0);
        g_state = TITLE_LAUNCH;
        return 1;
    }
}
