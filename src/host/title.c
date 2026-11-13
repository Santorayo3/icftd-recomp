/* The title screen.
 *
 * Port code, not a translation: the original boots straight into its intro, and its own title is
 * drawn by code we have not translated. This scene exists so the product has a place for the main
 * menu (settings, save slots, ...) that a DOS/Win32 release needs and a 1989 game never had; for
 * now it shows assets\titlescreen.png, plays the map screen's score, and starts the game on fire.
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

enum { TITLE_OFF = 0, TITLE_ARMED, TITLE_PLAYING };

static int g_state = TITLE_OFF;

void host_title_arm(int on)
{
    g_state = on ? TITLE_ARMED : TITLE_OFF;
    /* The intro's setup is reached inside a translated function (the mode dispatcher runs it as a
     * block), so there is no call boundary to catch: ask the dispatch to hand the program back
     * before that instruction runs. Cleared again as soon as the title is done with it. */
    rc_breakPc = on ? TITLE_HOLD_PC : 0;
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

/* Shows the art until the player starts the game: 1 = start it, 0 = leave the game. */
static int title_play(rt_machine *m)
{
    input_state in;
    void (*savedFrame)(rt_machine *) = m->on_frame;
    void (*savedPresent)(rt_machine *) = m->on_present;
    int go;

    title_draw();
    m->on_frame = 0;                     /* the title owns the keyboard ... */
    m->on_present = 0;                   /* ... and the screen */
    for (;;)
    {
        plat_present();                  /* a still, redrawn so an uncovered window repaints */
        if (!plat_pump(&in)) { go = 0; break; }            /* the window was closed */
        if (in.down[KEY_ESCAPE]) { go = 0; break; }
        if (in.down[KEY_FIRE]) { go = 1; break; }
        title_tick(m);
        plat_frame_sync();
    }
    m->on_frame = savedFrame;
    m->on_present = savedPresent;
    return go;
}

int host_title_check(rt_machine *m, u32 pc)
{
    if (g_state == TITLE_OFF || pc != TITLE_HOLD_PC) return 0;

    if (g_state == TITLE_ARMED)
    {
        title_call(m, TITLE_SCORE_PC, pc, 2, TITLE_SCORE_DESC, 0xFFFFFFFFu);  /* loop for ever */
        g_state = TITLE_PLAYING;
        printf("title: the map screen's score starts under the title\n");
        return 1;
    }

    /* Back here means the loader and the player have returned. The map's own setup does the same
     * thing at FUN_0000bfca: FUN_00009cf2(&"Overhead2.tiny") and then 100 into the music block, so
     * the title sounds exactly as loud as the map screen does. */
    {
        u32 block = rt_read32(&m->mem, TITLE_MUSIC_BLOCK);
        if (block != 0) rt_write16(&m->mem, block, 100);
    }

    if (title_play(m))
    {
        title_call(m, TITLE_UNLOAD_PC, pc, 0, 0, 0);      /* the engine gets the score back */
        printf("title: starting the game (frame %lu)\n", (unsigned long)m->frame);
    }
    else
    {
        m->stop = 1;
    }
    g_state = TITLE_OFF;
    rc_breakPc = 0;                      /* from here the intro runs untouched */
    return 1;
}
