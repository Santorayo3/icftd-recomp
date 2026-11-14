/* The title screen.
 *
 * Port code, not a translation: the original boots straight into its intro, and its own title is
 * drawn by code we have not translated. This scene exists so the product has a place for the main
 * menu (settings, save slots, ...) that a DOS/Win32 release needs and a 1989 game never had; for
 * now it shows assets\titlescreen.png, plays the map screen's score, and starts the game on fire
 * (or one of the minigames on a digit key - see the end of this comment).
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
 * The digit keys are a debug menu: 1..6 start the fight, the flight, the fire game, the hospital
 * escape, the chicken race and the underground ant nest without playing to them, and the title
 * comes back when the scene ends. They are the engine's own scene entries (see g_scenes), called
 * the way FUN_00002cc8's dispatcher calls them - after FUN_0000EC8A frees the score, because
 * FUN_0000E804 refuses to load a new one while DAT_00023C58 is set. Nothing of the world loop is
 * faked: a scene entered this way gets no room, no location state and no post-scene bookkeeping,
 * which is exactly why the title returns to itself instead of to the game.
 */
#include <stdio.h>
#include <string.h>

#include "types.h"
#include "platform.h"
#include "machine.h"
#include "../oracle/cpu.h"
#include "../recomp/cpu.h"
#include "title.h"
#include "title_art.h"

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
typedef struct title_scene
{
    int         key;                     /* the digit that starts it (KEY_1 is "1") */
    const char *name;
    u32         entry;
    int         nargs;
    u32         arg0, arg1;
} title_scene;

static const title_scene g_scenes[] =
{
    { KEY_1, "Fight",           0x0F46Cu, 0, 0, 0 },
    { KEY_2, "Take a Flight",   0x147A6u, 1, 6, 0 },   /* 6 = the dispatcher's own argument */
    { KEY_3, "Fire Game",       0x0FE34u, 0, 0, 0 },
    { KEY_4, "Escape Hospital", 0x1C19Au, 0, 0, 0 },
    { KEY_5, "Chicken Race",    TITLE_CHICKEN_PC, 0, 0, 0 },
    { KEY_6, "Underground",     TITLE_UNDER_PC, 0, 0, 0 }
};

#define TITLE_SCENE_COUNT ((int)(sizeof g_scenes / sizeof g_scenes[0]))

/* What title_play() picked: 0 leaves the game, 1 is the intro, 2 + n is scene n. */
#define TITLE_PICK_QUIT   0
#define TITLE_PICK_INTRO  1
#define TITLE_PICK_SCENE  2

/* A scene is entered as the two calls the dispatcher makes (free the score, then enter), and the
 * title comes back after each one: an injected call returns to the pc it was made from, so every
 * step of the sequence starts at the same hold point. */
enum
{
    TITLE_OFF = 0,
    TITLE_UNLOAD,                        /* free whatever score is loaded ... */
    TITLE_LOAD,                          /* ... then load the map's */
    TITLE_PLAYING,                       /* the art, and the keys */
    TITLE_LAUNCH                         /* enter the scene that was picked */
};

static int g_state = TITLE_OFF;
static int g_pick;                       /* scene index for TITLE_LAUNCH */
static int g_virtualKey = -1;            /* --titlekey: the choice to take, once; -1 = none */
static int g_scripted;                   /* --titlekey was given: the title ends after that */
static int g_ticks;                      /* menu frames run since the title came up */
static u32 g_popOnReturn;                /* argument bytes the injected call's caller would pop */

void host_title_arm(int on)
{
    g_state = on ? TITLE_UNLOAD : TITLE_OFF;
    g_pick = 0;
    g_popOnReturn = 0;
    g_ticks = 0;
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

static void title_draw(void)
{
    u8 *dst = plat_framebuffer();
    int x, y;

    if (dst == 0) return;
    plat_set_palette(0, TITLE_PAL_ENTRIES, g_titlePal);
    for (y = 0; y < TITLE_H && y < SCREEN_H; y++)
    {
        for (x = 0; x < TITLE_W && x < SCREEN_W; x++)
            dst[(u32)y * SCREEN_W + (u32)x] = g_titleImg[(u32)y * TITLE_W + (u32)x];
        for (; x < SCREEN_W; x++) dst[(u32)y * SCREEN_W + (u32)x] = 0;
    }
    for (; y < SCREEN_H; y++) memset(dst + (u32)y * SCREEN_W, 0, SCREEN_W);
}

/* The menu, on the console: the title art has no text of its own (the platform framebuffer has no
 * font), so this line is where the keys are written down. */
static void title_keys(void)
{
    int i;

    printf("title: fire or 0 starts the game;");
    for (i = 0; i < TITLE_SCENE_COUNT; i++)
        printf("  %d %s", i + 1, g_scenes[i].name);
    printf("\n");
}

/* Shows the art until the player starts something. The keys are read as *presses*, not as held
 * state: the button that ended a scene is usually still down when the title comes back, and it must
 * not start the next thing on its own. */
static int title_play(rt_machine *m)
{
    input_state in;
    void (*savedFrame)(rt_machine *) = m->on_frame;
    void (*savedPresent)(rt_machine *) = m->on_present;
    int pick = -1;

    if (g_scripted && g_virtualKey < 0) return TITLE_PICK_QUIT;   /* the choice was taken already */

    title_draw();
    m->on_frame = 0;                     /* the title owns the keyboard ... */
    m->on_present = 0;                   /* ... and the screen */
    while (pick < 0)
    {
        int i;

        plat_present();                  /* a still, redrawn so an uncovered window repaints */
        if (!plat_pump(&in)) { pick = TITLE_PICK_QUIT; break; }        /* the window was closed */
        if (in.down[KEY_ESCAPE]) { pick = TITLE_PICK_QUIT; break; }
        if (in.pressed[KEY_FIRE] || in.pressed[KEY_0] || in.mouse_left_pressed)
            pick = TITLE_PICK_INTRO;
        for (i = 0; i < TITLE_SCENE_COUNT && pick < 0; i++)
            if (in.pressed[g_scenes[i].key]) pick = TITLE_PICK_SCENE + i;
        if (g_virtualKey >= 0 && pick < 0 && g_ticks > 0) /* --titlekey: a scripted choice */
        {
            int k = g_virtualKey;
            g_virtualKey = -1;
            if (k == 0) pick = TITLE_PICK_INTRO;
            else if (k <= TITLE_SCENE_COUNT) pick = TITLE_PICK_SCENE + (k - 1);
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
        title_call(m, s->entry, pc, s->nargs, s->arg0, s->arg1);
        printf("title: %s at frame %lu\n", s->name, (unsigned long)m->frame);
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
        if (pick == TITLE_PICK_INTRO)
        {
            title_call(m, TITLE_UNLOAD_PC, pc, 0, 0, 0);  /* the engine gets the score back */
            printf("title: starting the game (frame %lu)\n", (unsigned long)m->frame);
            g_state = TITLE_OFF;
            rc_breakPc = 0;                  /* from here the intro runs untouched */
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
