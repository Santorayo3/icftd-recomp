/* The gamepad (a port feature: host input plumbing).
 *
 * The original's only control is a one-button stick, and the port adds a pointer on the screens
 * that show a cursor. A pad is both: the platform layer reports what the pad *is* (the left stick's
 * two axes, the d-pad, the four face buttons, Start - input_state in src\runtime\platform.h), and
 * this is where that becomes what the front end already reads. The split is where the knowledge
 * is: the platform cannot know whether the screen in front of the player has a cursor, and the
 * front end cannot know what a pad reports.
 *
 *   the d-pad          the four directions, always - the stick the original's game code decodes
 *                      from JOY0DAT (KEY_UP..KEY_RIGHT, which the front end turns into that word);
 *   any face button    /FIRE, and a click of the port's own pointer (its buttons, the save picker,
 *                      the Escape question): a pad has one button, and every one of the four is it;
 *   Start              Escape (the same key, so the Escape question and the title behave alike);
 *   the left stick     the four directions on a screen with no cursor, and the *pointer* on one
 *                      that has: the situation map's cursor, the phone book's arrow, the aiming
 *                      scenes' gun and extinguisher, and the port's own popups and title. There the
 *                      deflection is the speed - a nudge is a crawl of a few pixels a second, half
 *                      the travel crosses the picture in about four seconds and full deflection in
 *                      about one - which is the fine control a mouse gives and a digital direction
 *                      does not.
 *                      On a room screen the stick stays the four directions: that screen's control
 *                      is the original's menu, and the arrow the port draws there belongs to the
 *                      mouse.
 *
 * Nothing here runs in a measurement: the front end calls it from its frame hook, and a scripted
 * run (--input) returns before the game's fire and stick are touched, so a recorded session is
 * unaffected by a pad being plugged in.
 */
#include "pad.h"

/* The stick's central slack, of the -32768..32767 the platform reports: about a quarter of the
 * travel, which is where a worn stick comes to rest. */
#define PAD_DEADZONE   8000
/* The pointer's speed at full deflection, framebuffer pixels per frame (the pad is read once per
 * 50 Hz frame) at sensitivity 100: 12 crosses the screen in about half a second. The setting scales
 * it, and the default is half that - see PAD_SENSITIVITY_DEFAULT. */
#define PAD_CURSOR_MAX 12
/* How much of that speed is linear in the deflection and how much is its square: the straight part
 * keeps a half-pushed stick quick, the square part is what makes the first third of the travel a
 * crawl - the fine control a mouse gives and a digital direction cannot. */
#define PAD_LINEAR    60        /* per cent, of PAD_CURSOR_MAX, at full deflection */
#define PAD_SQUARE    (100 - PAD_LINEAR)
/* The cursor is kept in 1/16ths of a pixel, so a deflection too small to move a whole pixel in one
 * frame still moves it in a few. */
#define PAD_SUB        4

static int g_speed = PAD_SENSITIVITY_DEFAULT;   /* per cent of PAD_CURSOR_MAX */

void host_pad_sensitivity(int percent)
{
    if (percent < PAD_SENSITIVITY_MIN) percent = PAD_SENSITIVITY_MIN;
    if (percent > PAD_SENSITIVITY_MAX) percent = PAD_SENSITIVITY_MAX;
    g_speed = percent;
}

/* One frame's movement along one axis, in 1/16 pixel, for a deflection `v` of the raw axis. */
static s32 pad_step(s32 v)
{
    s32 mag = v < 0 ? -v : v;
    s32 span = 32767 - PAD_DEADZONE;
    s32 t = mag - PAD_DEADZONE;
    __int64 max = (((__int64)PAD_CURSOR_MAX * g_speed) << PAD_SUB) / 100;
    __int64 step;

    if (t <= 0) return 0;
    if (t > span) t = span;
    step = (t * max * PAD_LINEAR + (__int64)span * 50) / ((__int64)span * 100);
    step += ((__int64)t * t * max * PAD_SQUARE + (__int64)span * span * 50) /
            ((__int64)span * span * 100);
    if (step == 0) step = 1;            /* any push past the deadzone moves, however slowly */
    return v < 0 ? -(s32)step : (s32)step;
}

void host_pad_buttons(host_pad *p, input_state *in)
{
    int up    = in->pad_present ? in->pad_up    : 0;
    int down  = in->pad_present ? in->pad_down  : 0;
    int left  = in->pad_present ? in->pad_left  : 0;
    int right = in->pad_present ? in->pad_right : 0;
    int fire  = in->pad_present ? in->pad_fire  : 0;
    int start = in->pad_present ? in->pad_start : 0;

    /* The d-pad is the four directions the keys report, as a level each: a direction is down for
     * as long as the pad says so, and the key that was already down stays down (this only ever
     * sets, never clears, so the arrow cluster and W/A/S/D keep their own state). */
    if (up)    { in->down[KEY_UP] = 1;    if (!p->up)    in->pressed[KEY_UP] = 1; }
    if (down)  { in->down[KEY_DOWN] = 1;  if (!p->down)  in->pressed[KEY_DOWN] = 1; }
    if (left)  { in->down[KEY_LEFT] = 1;  if (!p->left)  in->pressed[KEY_LEFT] = 1; }
    if (right) { in->down[KEY_RIGHT] = 1; if (!p->right) in->pressed[KEY_RIGHT] = 1; }

    /* Any face button is /FIRE. It is also the left mouse button, because that is what the port's
     * own screens answer (the title's buttons, the save picker, the Escape question) - the same
     * level the mouse sets, so holding it keeps the click alive exactly as a held mouse does. */
    if (fire)
    {
        in->down[KEY_FIRE] = 1;
        in->mouse_left = 1;
        if (!p->fire)
        {
            in->pressed[KEY_FIRE] = 1;
            in->mouse_left_pressed = 1;
        }
    }
    if (start)
    {
        in->down[KEY_ESCAPE] = 1;
        if (!p->start) in->pressed[KEY_ESCAPE] = 1;
    }

    p->up = (u8)up;
    p->down = (u8)down;
    p->left = (u8)left;
    p->right = (u8)right;
    p->fire = (u8)fire;
    p->start = (u8)start;
}

int host_pad_cursor(host_pad *p, input_state *in)
{
    s32 dx, dy, maxX, maxY;

    if (!in->pad_present) return 0;

    /* The mouse takes the pointer back by moving: the position it reports changes, and the stick's
     * next push starts from there. Until it does, the stick keeps the pointer - a centred stick is
     * not a release, it is the pointer standing still where the pad put it (a stick let go between
     * two pushes used to hand the arrow back to the mouse's corner, which read as a jump). */
    if (in->mouse_x != p->plat_x || in->mouse_y != p->plat_y) p->known = 0;
    p->plat_x = in->mouse_x;
    p->plat_y = in->mouse_y;

    dx = pad_step(in->pad_x);
    dy = pad_step(in->pad_y);
    if (dx == 0 && dy == 0 && !p->known) return 0;

    if (!p->known)
    {
        p->x = (s32)in->mouse_x << PAD_SUB;
        p->y = (s32)in->mouse_y << PAD_SUB;
        p->known = 1;
    }
    maxX = (SCREEN_W - 1) << PAD_SUB;
    maxY = (SCREEN_H - 1) << PAD_SUB;
    p->x += dx;
    p->y += dy;
    if (p->x < 0) p->x = 0; else if (p->x > maxX) p->x = maxX;
    if (p->y < 0) p->y = 0; else if (p->y > maxY) p->y = maxY;

    in->mouse_x = (s16)(p->x >> PAD_SUB);
    in->mouse_y = (s16)(p->y >> PAD_SUB);
    in->mouse_present = 1;
    if (dx != 0 || dy != 0)
    {
        in->mouse_moved = 1;
        return 1;
    }
    return 0;
}

int host_pad_dirs(const input_state *in)
{
    int bits = 0;

    if (!in->pad_present) return 0;
    if (in->pad_x < -PAD_DEADZONE) bits |= 4;       /* left  */
    if (in->pad_x >  PAD_DEADZONE) bits |= 8;       /* right */
    if (in->pad_y < -PAD_DEADZONE) bits |= 1;       /* up    */
    if (in->pad_y >  PAD_DEADZONE) bits |= 2;       /* down  */
    return bits;
}
