/* Checks the 8254 clock (src\runtime\plat\dos\pitclock.h) against a simulated machine, on the host.
 *
 * The simulation is the hardware as measured on the target (DOSBox, 8254 channel 0 in mode 3 with a
 * reload of 65536): the counter steps by two per 1.193182 MHz input clock and reloads every half
 * period, the read-back status byte reports the OUT pin and the mode, and the BIOS tick increments
 * once per 65,536 input clocks - a configurable number of clocks late, so the "handler has not run
 * yet" case is exercised. Mode 2 is simulated too (one wrap per tick, no useful OUT).
 *
 * What the checks are for: the clock must report the same elapsed time for any sampling rate, which
 * is exactly what the linear reading it replaced did not do. Every case compares the clock against
 * an independent reference - the simulated time itself - so a pass means "no drift", not "looks
 * plausible".
 *
 *   powershell -ExecutionPolicy Bypass -File tools\pit-clock-check.ps1
 */
#include <stdio.h>
#include <string.h>

#include "pitclock.h"

static int g_failures;
static int g_checks;

static void check(int ok, const char *what, u32 got, u32 want)
{
    g_checks++;
    if (!ok)
    {
        g_failures++;
        printf("  FAIL %s: got %lu, expected %lu\n", what, (unsigned long)got, (unsigned long)want);
    }
}

/* --- the simulated machine --------------------------------------------------------------- */

typedef struct sim
{
    u32 now;                        /* input clocks since the simulation started             */
    u32 snapNow;                    /* the time of the last snapshot taken                  */
    u32 dayBase;                    /* the tick value at `now == 0`, for the midnight test  */
    int mode;                       /* 2 or 3                                               */
    int firstOut;                   /* mode 3: the OUT level of the half the tick opens     */
    u32 handlerDelay;               /* clocks from a period boundary to the tick increment  */
    u32 readCost;                   /* clocks a latch and its port reads take               */
    int failLeft;                   /* snapshots that report a racing tick                  */
    int badLeft;                    /* snapshots whose counter is from elsewhere            */
} sim;

static u32 sim_tick_at(const sim *s, u32 now)
{
    u32 t;

    if (now < s->handlerDelay) return s->dayBase % PIT_TICKS_PER_DAY;
    t = (now - s->handlerDelay) / PIT_PERIOD;
    return (s->dayBase + t) % PIT_TICKS_PER_DAY;
}

static int sim_read(void *ctx, pit_snapshot *snap)
{
    sim *s = (sim *)ctx;
    u32 halfClocks = (s->mode == 3) ? PIT_HALF : PIT_PERIOD;
    u32 phase = s->now % halfClocks;
    u32 halfIndex = s->now / halfClocks;
    u32 raw;
    int out;

    s->snapNow = s->now;
    if (s->failLeft > 0)
    {
        /* The tick moved across the latch. The attempt still costs the port reads, which is what
         * lets a retry get past a BIOS tick that had not been counted yet. */
        s->failLeft--;
        s->now += s->readCost;
        return 0;
    }
    if (s->badLeft > 0)
    {
        s->badLeft--;
        /* A counter reading from a different, earlier phase: the clock must refuse it, not rebase.
         * 0xFF00 reads back as a phase of 128 clocks, behind every sample these checks take. */
        snap->tick = sim_tick_at(s, s->now);
        snap->counter = (u16)0xFF00u;
        snap->status = (u8)(0x80 | 0x30 | (s->mode << 1));
        s->now += s->readCost;
        return 1;
    }
    raw = ((0u - (s->mode == 3 ? 2u * phase : phase)) & 0xFFFFu);
    if (s->mode == 3)
        out = ((halfIndex & 1u) == 0) ? s->firstOut : !s->firstOut;
    else
        out = 1;
    snap->tick = sim_tick_at(s, s->now);
    snap->counter = (u16)raw;
    snap->status = (u8)((out ? 0x80 : 0) | 0x30 | (s->mode << 1));
    s->now += s->readCost;
    return 1;
}

/* One measurement: the clock is opened at `start`, sampled every `step` clocks, and the elapsed
 * counts of the last sample are returned. */
static u32 span_measure(int mode, int firstOut, u32 handlerDelay, u32 dayBase, u32 start, u32 span,
                        u32 step)
{
    sim s;
    pit_clock c;
    u32 t0, t1 = 0, end = start + span;

    memset(&s, 0, sizeof s);
    s.mode = mode;
    s.firstOut = firstOut;
    s.handlerDelay = handlerDelay;
    s.dayBase = dayBase;
    s.now = start;
    pit_clock_begin(&c, mode == 3, firstOut);
    t0 = pit_clock_sample(&c, sim_read, &s);
    while (s.now < end)
    {
        s.now += step;
        if (s.now > end) s.now = end;
        t1 = pit_clock_sample(&c, sim_read, &s);
    }
    return t1 - t0;
}

/* --- checks ------------------------------------------------------------------------------ */

/* Sparse and frequent sampling of the same interval must agree, and agree with the time itself. */
static void check_sampling(const char *name, int mode, int firstOut, u32 handlerDelay, u32 start,
                           u32 span)
{
    static const u32 steps[] = { 1, 7, 977, 8191, 32767, 32768, 65536, 1000000, 0x7FFFFFFF };
    int i;

    printf("%s: %lu clocks (%.1f ms) from phase %lu\n", name, (unsigned long)span,
           (double)span * 1000.0 / (double)PIT_INPUT_HZ, (unsigned long)(start % PIT_PERIOD));
    for (i = 0; i < (int)(sizeof steps / sizeof steps[0]); i++)
    {
        u32 got = span_measure(mode, firstOut, handlerDelay, 0, start, span, steps[i]);

        check(got == span, "elapsed", got, span);
    }
}

/* 100, 500 and 1000 ms, started at the interesting phases: before a half boundary, on one, and
 * just after one, in both halves. */
static void check_intervals(int mode)
{
    static const u32 ms[] = { 100, 500, 1000 };
    static const u32 phases[] = { 0, 1, 32766, 32767, 32768, 32769, 65534, 65535 };
    unsigned i, k, n = 0;

    for (i = 0; i < sizeof ms / sizeof ms[0]; i++)
    {
        u32 span = ((u32)ms[i] * PIT_INPUT_HZ) / 1000u;

        for (k = 0; k < sizeof phases / sizeof phases[0]; k++)
        {
            u32 start = 1000000000ul + phases[k];
            u32 got = span_measure(mode, 1, 0, 0, start, span, 4099);

            check(got == span, "interval", got, span);
            n++;
        }
    }
    printf("mode %d: %u intervals of 100/500/1000 ms at boundary phases\n", mode, n);
}

/* The BIOS handler a few hundred clocks late: a sample can land between the counter's boundary and
 * the tick's increment. Dense and sparse sampling must both stay exact. */
static void check_pending(void)
{
    static const u32 delays[] = { 0, 1, 30, 200, 2000 };
    u32 span = PIT_INPUT_HZ;                         /* one second */
    unsigned i;

    printf("pending tick: handler 0..2000 clocks late, one second of it\n");
    for (i = 0; i < sizeof delays / sizeof delays[0]; i++)
    {
        u32 dense = span_measure(3, 1, delays[i], 0, 65530, span, 13);
        u32 sparse = span_measure(3, 1, delays[i], 0, 65530, span, 700001);

        check(dense == span, "dense sampling", dense, span);
        check(sparse == span, "sparse sampling", sparse, span);
    }
    /* The dense second above passes through period boundaries with the tick still pending, which is
     * the case the clock has to recognise from the half bit alone. */
    {
        sim s;
        pit_clock c;
        u32 k;

        memset(&s, 0, sizeof s);
        s.mode = 3;
        s.firstOut = 1;
        s.handlerDelay = 200;
        s.now = 65530;
        pit_clock_begin(&c, 1, 1);
        pit_clock_sample(&c, sim_read, &s);
        for (k = 0; k < 12000; k++)            /* past two more boundaries of the second */
        {
            s.now += 13;
            pit_clock_sample(&c, sim_read, &s);
        }
        check(c.pending > 0, "the pending rollover was recognised", c.pending, 1);
    }
}

/* A snapshot whose tick raced the latch, and a counter reading that is not where it should be: the
 * clock retries, and when the retries are exhausted it drops the sample without moving its marks -
 * the next good sample then covers the whole interval. */
static void check_bad_readings(void)
{
    pit_clock c;
    sim s;
    u32 t;

    printf("racing snapshots and rejected readings\n");
    memset(&s, 0, sizeof s);
    s.mode = 3;
    s.firstOut = 1;
    s.now = 1000;
    pit_clock_begin(&c, 1, 1);
    t = pit_clock_sample(&c, sim_read, &s);
    check(t == 0, "the first sample only sets the marks", t, 0);

    s.failLeft = 5;                    /* retried inside pit_clock_sample */
    s.now += 12345;
    t = pit_clock_sample(&c, sim_read, &s);
    check(t == 12345, "5 racing snapshots retried", t, 12345);
    check(c.snapFails == 0, "no sample lost", c.snapFails, 0);

    s.badLeft = 3;                     /* refused, retried, adopted on a clean read */
    s.now += 2000;
    t = pit_clock_sample(&c, sim_read, &s);
    check(t == 14345, "3 rejected readings retried", t, 14345);
    check(c.snapFails == 0, "still no sample lost", c.snapFails, 0);

    s.badLeft = PIT_SNAP_TRIES;        /* every try refused: the sample is dropped */
    s.now += 3000;
    t = pit_clock_sample(&c, sim_read, &s);
    check(t == 14345, "a lost sample does not advance the clock", t, 14345);
    check(c.snapFails == 1, "the loss is counted", c.snapFails, 1);

    s.badLeft = 0;
    s.now += 4000;                     /* and the next good one covers all 7000 clocks */
    t = pit_clock_sample(&c, sim_read, &s);
    check(t == 21345, "the next sample covers the lost interval", t, 21345);
}

/* The BIOS resets its tick to zero at midnight (0x1800B0 ticks). That backwards step is a day. */
static void check_midnight(void)
{
    u32 span = PIT_INPUT_HZ * 3ul;
    u32 dayBase = PIT_TICKS_PER_DAY - 2000u;          /* two thousand ticks before the reset */
    u32 got;

    printf("midnight: three seconds across the BIOS tick reset\n");
    got = span_measure(3, 1, 0, dayBase, 0, span, 4099);
    check(got == span, "across midnight", got, span);
    got = span_measure(3, 1, 0, dayBase, 0, span, 500009);
    check(got == span, "across midnight, sparse", got, span);
    got = span_measure(2, 1, 0, dayBase, 0, span, 4099);
    check(got == span, "mode 2 across midnight", got, span);
}

/* A minute of simulated time with irregular sampling, against the exact clock. The snapshot itself
 * costs a few clocks, so a retry moves time on - which is what lets a reading taken just after a
 * period boundary be re-read once the BIOS handler has counted it. */
static void check_long_run(void)
{
    sim s;
    pit_clock c;
    u32 t0, t = 0, seed = 12345, span = 60ul * PIT_INPUT_HZ, end, start;
    long samples = 0;

    printf("long run: 60 s, irregular sampling\n");
    memset(&s, 0, sizeof s);
    s.mode = 3;
    s.firstOut = 1;
    s.handlerDelay = 40;
    s.readCost = 12;
    s.now = 777777;
    end = s.now + span;
    pit_clock_begin(&c, 1, 1);
    t0 = pit_clock_sample(&c, sim_read, &s);
    start = s.snapNow;
    while (s.now < end)
    {
        seed = seed * 1103515245ul + 12345ul;
        s.now += 1ul + (seed >> 16) % 200000ul;
        if (s.now > end) s.now = end;
        t = pit_clock_sample(&c, sim_read, &s);
        samples++;
    }
    check(t - t0 == s.snapNow - start, "elapsed after 60 s", t - t0, s.snapNow - start);
    printf("  %ld samples, %lu adopted, %lu without a consistent tick, %lu rejected, %lu pending\n",
           samples, (unsigned long)c.samples, (unsigned long)c.snapFails,
           (unsigned long)c.rejects, (unsigned long)c.pending);
}

int main(void)
{
    /* The three requested intervals, sparse and frequent sampling, both modes and cold starts. */
    check_sampling("mode 3, 100 ms", 3, 1, 0, 0, 100ul * PIT_INPUT_HZ / 1000ul);
    check_sampling("mode 3, 500 ms", 3, 1, 0, 0, 500ul * PIT_INPUT_HZ / 1000ul);
    check_sampling("mode 3, 1000 ms", 3, 1, 0, 0, 1000ul * PIT_INPUT_HZ / 1000ul);
    check_sampling("mode 3, 1000 ms, OUT low first", 3, 0, 0, 0, 1000ul * PIT_INPUT_HZ / 1000ul);
    check_sampling("mode 3, 100 ms, tick 300 late", 3, 1, 300, 0, 100ul * PIT_INPUT_HZ / 1000ul);
    check_sampling("mode 3, 100 ms from mid-half", 3, 1, 0, 40000, 100ul * PIT_INPUT_HZ / 1000ul);
    check_sampling("mode 2, 1000 ms", 2, 1, 0, 0, 1000ul * PIT_INPUT_HZ / 1000ul);
    check_sampling("mode 2, 100 ms", 2, 1, 0, 0, 100ul * PIT_INPUT_HZ / 1000ul);
    check_intervals(3);
    check_intervals(2);
    check_pending();
    check_bad_readings();
    check_midnight();
    check_long_run();

    printf("pit-clock: %d check(s), %d failure(s)\n", g_checks, g_failures);
    return g_failures == 0 ? 0 : 1;
}
