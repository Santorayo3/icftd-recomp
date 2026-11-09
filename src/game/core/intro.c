/* The intro: FUN_00009870 (one-off setup) and FUN_00009630 (the per-frame tick).
 *
 * The tick *is* the timeline.  Every frame it walks the "!OPN" MovE script once
 * (slot 105 = Move_Walk) - all of the moving picture comes from that script - and apart
 * from that it only fades the music tempo twice and fires eleven timed sound events.
 * It draws nothing itself.
 *
 *   frame 160  FUN_0000EF88(110, 60)            tempo -> 60 over 110 frames
 *   frame 200  FUN_0000EFA6(3)                  stop channel 3
 *   frame 202  FUN_00009B60(voice1, .., 3, 3F)  voice-over
 *   frame 204  FUN_00009BCA(3)                  arm channel 3
 *   frame 310  FUN_0000EF88(400, 220)           tempo -> 220 over 400 frames
 *   frame 379  FUN_0000EFA6(2); play "met" ch3
 *   frame 381  play "met" ch2
 *   frame 389  play "exp" (period 900) ch3
 *   frame 391  play "exp" (period 900) ch2
 *   frame 394  FUN_00009BCA(2); FUN_00009BCA(3)
 *   frame 400  FUN_0000EFC0(2); FUN_0000EFC0(3)
 *   frame 477  return 1  ->  the run loop stops, handlers and samples are freed
 *
 * Pressing fire jumps the counter to 500 (FUN_000011BF0 polls JOY0DAT into
 * DAT_00024A84), so the whole intro can be skipped.  The per-frame delay
 * `DAT_0002688E` is BSS and never written: zero iterations, so the 50 Hz is exact.
 *
 * PORTED: 00009870 (setup), 00009630 (tick).  Audio is not ported yet (sweep S7), so the
 * sound events are written to the trace instead of being played.
 */
#include "intro.h"
#include "move.h"

#include <stdio.h>

enum { EV_TEMPO, EV_KILL, EV_PLAY, EV_ARM, EV_RESET };

typedef struct intro_event
{
    u16 frame;
    u8  kind;
    u8  chan;
    const char *note;
} intro_event;

static const intro_event events[] = {
    { 160, EV_TEMPO, 0, "60 over 110 frames" },
    { 200, EV_KILL,  3, "stop channel 3" },
    { 202, EV_PLAY,  3, "play voice1" },
    { 204, EV_ARM,   3, "arm channel 3" },
    { 310, EV_TEMPO, 0, "220 over 400 frames" },
    { 379, EV_KILL,  2, "stop channel 2" },
    { 379, EV_PLAY,  3, "play met" },
    { 381, EV_PLAY,  2, "play met" },
    { 389, EV_PLAY,  3, "play exp period 900" },
    { 391, EV_PLAY,  2, "play exp period 900" },
    { 394, EV_ARM,   2, "arm channel 2" },
    { 394, EV_ARM,   3, "arm channel 3" },
    { 400, EV_RESET, 2, "reset channel 2" },
    { 400, EV_RESET, 3, "reset channel 3" },
};

static s32 s_frame;
static s32 s_first;

void intro_start(void)
{
    s_frame = 0;
    s_first = 1;                    /* FUN_00009870: DAT_00029D38 = 1 */
}

/* The original cascades a subtract chain over the frame counter; the values are exact. */
static void intro_events(s32 f)
{
    char line[80];
    u32 i;

    for (i = 0; i < sizeof(events) / sizeof(events[0]); i++) {
        if ((s32)events[i].frame != f) continue;
        if (events[i].kind == EV_TEMPO) {
            sprintf(line, "audio %d tempo %s", (int)f, events[i].note);
        } else {
            sprintf(line, "audio %d ch%d %s", (int)f, (int)events[i].chan, events[i].note);
        }
        mv_trace_note(line);
    }
}

s32 intro_tick(int fire)
{
    if (s_first) {
        s_first = 0;
        s_frame = 0;
        /* slot 38 = FUN_00009CC4(1) restores the scene palette, slots 99/102 look "MAIN"
         * up and run its first command - mv_start() did both before the first tick. */
    }

    mv_tick();                      /* slot 105: Move_Walk(g_moveScript->child, 0, 0) */
    intro_events(s_frame);

    if (fire) s_frame = 500;        /* DAT_00024A84 -> jump past INTRO_LAST_FRAME */
    s_frame++;
    return s_frame > INTRO_LAST_FRAME;
}

s32 intro_frame(void)
{
    return s_frame;
}
