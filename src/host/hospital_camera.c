/* The hospital escape's camera: keep the character in the middle of the window.
 *
 * "Escape Hospital" (FUN_0001819a) is a walk through the hospital with the picture scrolling under
 * the character, and everything about that scroll is engine state:
 *
 *   DAT_00029ed0/0x29ed2   the player's world position, moved by FUN_000189aa's walk
 *   DAT_00029ec6/0x29ec8   the picture's world origin in the bitmap; the loop computes it from the
 *                          camera DAT_0002a1a4/0x2a1a6 at 0x1825a/0x1826a (16*x - 0x30 and
 *                          10*y - 0x28), and FUN_0001a03e draws the walk sprite at player - origin
 *   DAT_00028cd4           the horizontal fine scroll 0..15: FUN_00017cec puts it into the copper
 *                          list's BPLCON1 entry every tick and steps it by DAT_00028cdc
 *   DAT_000297f2           the scroll request: four direction bits that same tick applies - the
 *                          fine scroll, the plane pointers and the coarse step
 *
 * FUN_000189aa ends by turning the difference into those bits, with a dead band:
 *
 *   0x18fba   cmp.w #200,  player - origin     -> bit 0: the picture moves right
 *   0x18fce   cmp.w #0x78, player - origin     -> bit 1: ... left
 *   0x18fda   cmp.w #0x82, player - origin     -> bit 2: ... down
 *   0x18fe6   cmp.w #0x46, player - origin     -> bit 3: ... up
 *
 * The band is 80 px wide horizontally and 60 px high vertically: the character walks up to 40 px
 * from the middle of the 288x180 window before the picture starts to follow, so on the original a
 * walk is a step to the edge and then the screen being dragged along. The port keeps the character
 * in the middle instead, and the picture scrolls for as long as it walks.
 *
 * What is held is the character's *screen* position, and horizontally that is not the word above:
 * the sprite is drawn into the bitmap at player - origin, and the display fetches the bitmap
 * DAT_00028cd4 colour clocks late (BPLCON1, the only horizontal scroll - see the flight's fix in
 * docs\next-session.md), so screen x = player - origin + fine. Measured on a frame of the centred
 * camera: the sprite body is 12 px wide with its middle at 116.5 and player - origin + fine was
 * 116. Compensating for the delay also makes the controlled quantity smooth: while the picture
 * follows, the origin jumps by 16 px every fifth update and the fine scroll jumps back by 13, so
 * the sum does not move at all - a narrow band cannot oscillate on it, and the character is held
 * within a few pixels of HOSP_MID_X.
 *
 * Vertically the word *is* the visible position (that scroll is the plane pointers moving and the
 * picture being redrawn, not a display delay), so it is held at the engine's own band midpoint,
 * HOSP_MID_Y = 100 - the point the original's 70..130 band is built around, i.e. where the game's
 * own designers put the character. Its band has to be HOSP_BAND_Y either side: the word only moves
 * in 10 px steps, and a narrower band cannot settle - the camera would overshoot, the opposite bit
 * would fire next update and the view would oscillate with the character standing still (measured
 * with a 5 px band: the vertical offset ping-ponged between 97 and 107).
 *
 * Everything else is the engine's: the same request bits drive the same fine scroll, the same
 * coarse step and the same redraw, and the level's own limits (DAT_00028d46, DAT_0002ae22) still
 * stop the camera at a wall.
 *
 * The seam is the entry of FUN_00019e9c, called from the loop right after the update (0x18298):
 * the walk has just moved the player, the loop has just computed the picture origin, and the
 * request FUN_000189aa wrote has not been consumed yet - the loop's next iteration sets
 * DAT_00028ce0 and waits for the vblank that applies it. It runs once per update and writes only
 * DAT_000297f2.
 *
 * A port feature: the original has no such camera, so there is nothing to diff against. It is
 * installed by the front ends in a played game only (a measurement run never installs
 * rc_entryHook), and tools\camera-check.ps1 asserts its claim on the engine's own words: the
 * character's screen position stays at the middle while walking, the origin moves with it, and the
 * same script played without the seam still shows the original's 40 px band.
 */
#include <stdio.h>

#include "types.h"
#include "../recomp/cpu.h"
#include "machine.h"
#include "hospital_camera.h"
#include "seams.h"

/* The hospital's words are rows of the seam table (src\host\seams.c); RC_ADDR adds the build's
 * load address. FUN_00019e9c is the loop's actor draw, right after the update. */

/* The window is 288x180 and the character's middle is what is held: 144 across, and 100 down -
 * the original's own band midpoint, which is 10 px below the geometric centre because that is
 * where the walk sprite's middle sits. */
#define HOSP_MID_X     144
#define HOSP_MID_Y     100
#define HOSP_BAND_X    2
#define HOSP_BAND_Y    5

static int s_log;                   /* --cameralog: one line per update */
static int s_noted;                 /* the seam has said it is following the player */

static void host_hospital_camera(rt_machine *m);

void host_hospital_camera_log(int on)
{
    s_log = on;
}

int host_hospital_camera_entry(rt_machine *m, u32 pc)
{
    if (pc != RC_ADDR(HOSP_DRAW_PC)) return 0;
    host_hospital_camera(m);
    return 1;
}

static void host_hospital_camera(rt_machine *m)
{
    s32 px, py, vx, vy, fine, sx, sy;
    u16 bits = 0;

    px = (s32)(s16)rt_read16(&m->mem, RC_ADDR(HOSP_PLAYER_X));
    py = (s32)(s16)rt_read16(&m->mem, RC_ADDR(HOSP_PLAYER_Y));
    vx = (s32)(s16)rt_read16(&m->mem, RC_ADDR(HOSP_VIEW_X));
    vy = (s32)(s16)rt_read16(&m->mem, RC_ADDR(HOSP_VIEW_Y));
    fine = (s32)(s16)rt_read16(&m->mem, RC_ADDR(HOSP_FINE));
    sx = px - vx + fine;            /* where the character is on screen, across */
    sy = py - vy;                   /* ... and down */

    if (sx > HOSP_MID_X + HOSP_BAND_X) bits |= 0x1u;
    if (sx < HOSP_MID_X - HOSP_BAND_X) bits |= 0x2u;
    if (sy > HOSP_MID_Y + HOSP_BAND_Y) bits |= 0x4u;
    if (sy < HOSP_MID_Y - HOSP_BAND_Y) bits |= 0x8u;

    rt_write16(&m->mem, RC_ADDR(HOSP_SCROLL), bits);

    if (!s_noted)
    {
        s_noted = 1;
        printf("camera: the hospital view follows the player (frame %lu)\n",
               (unsigned long)m->frame);
    }
    if (s_log)
        printf("camera: frame %lu player %ld,%ld origin %ld,%ld fine %ld screen %ld,%ld "
               "request %X\n",
               (unsigned long)m->frame, (long)px, (long)py, (long)vx, (long)vy, (long)fine,
               (long)sx, (long)sy, (unsigned)bits);
}
