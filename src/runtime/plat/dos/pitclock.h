/* The 8254 frame clock: the BIOS tick plus channel 0's counter, resolved to a monotonic count of
 * the timer's 1.193182 MHz input clock.
 *
 * Why this is not `tick * 65536 + counter`:
 *
 * The BIOS programs channel 0 in mode 3 (square wave) with a reload of 65536. In mode 3 the counter
 * steps by TWO per input clock and reloads at every terminal count, so the value read from the port
 * ramps 0, 2, 4 ... 65534 and starts over after 32,768 input clocks. The BIOS tick increments once
 * per full output period of 65,536 clocks, i.e. once per two of those ramps. The counter value
 * alone therefore does not say which half of the period it is in, and treating it as a linear
 * countdown makes the derived rate depend on how often it is sampled. Measured on the target
 * (DOSBox, `tools\pit-clock-check.ps1` is the synthetic check): reads are always even, the counter
 * wraps twice per BIOS tick, and the read-back status byte's OUT bit is high for the half the tick
 * opens and low for the second half. That bit is what makes the value unambiguous, and it is why
 * status and count are sampled with one read-back command - two separate reads could pair a counter
 * that has wrapped with a tick that has not.
 *
 * One step of the clock is
 *
 *     elapsed = 65536 * (tick - lastTick)
 *             + 32768 * (half - lastHalf)          (mode 3 only)
 *             + (phase - lastPhase)
 *
 * with phase the counter's position inside its half (mode 3) or inside the period (mode 2), in input
 * clocks. That expression is exact for any pair of samples and the intermediate samples telescope
 * out, so a sparse sampler and a frequent one measure the same interval identically. Everything is
 * modulo 2^32 (u32 arithmetic) and the total wraps at 2^32 counts, an hour.
 *
 * The clock refuses readings instead of inventing a time for them:
 *
 *  - a snapshot whose BIOS tick moved across the latch is retried - the pair (tick, counter) would
 *    not describe one instant;
 *  - a sample that steps backwards inside a half is retried for the same reason, and if the retries
 *    all fail it is skipped, keeping the marks where they were, so the next good sample measures the
 *    whole interval instead of a silent rebase that would count the recovery twice;
 *  - the BIOS counts its tick down to zero at midnight (0x1800B0 = 1,573,040 ticks), which is a
 *    backwards step of almost a day and is added back;
 *  - the counter can be past a period boundary while the BIOS handler has not yet counted the
 *    terminal count (the interrupt was still queued when we looked). The half bit says the boundary
 *    was crossed, so the period is counted then and the tick is marked as consumed, so its later
 *    increment is not counted a second time.
 *
 * If the read-back status does not look like one (a chip without read-back, an emulator that does
 * not implement it) the clock falls back to the old linear reading with mode3 = 0. That is only
 * correct for a counter that wraps once per tick; `pit_status_mode` returning -1 is what the
 * platform layer reports in that case.
 *
 * Header-only, and free of platform calls on purpose: the DOS layer passes a snapshot reader that
 * does the port I/O, and `tools\pit-clock-check.c` passes a synthetic machine (modes 2 and 3, lost
 * samples, a racing tick, a midnight reset) so the arithmetic is checked without DOSBox.
 */
#ifndef ICFTD_PITCLOCK_H
#define ICFTD_PITCLOCK_H

#include "types.h"

#define PIT_INPUT_HZ       1193182u   /* the 8254's input clock: what `total` counts       */
#define PIT_PERIOD         65536u     /* channel 0's reload, 0 written means 65536          */
#define PIT_HALF           32768u     /* mode 3 reloads every half period                   */
#define PIT_TICKS_PER_DAY  1573040u   /* 0x1800B0: the BIOS resets its tick at midnight     */
#define PIT_MIDNIGHT_SLACK 364u       /* 20 s of ticks: how far a missed reset may be seen  */
#define PIT_SNAP_TRIES     8          /* consistent snapshots tried before a sample is lost */

typedef struct pit_snapshot
{
    u32 tick;                         /* BIOS tick, 0040:006C, read either side of the latch */
    u16 counter;                      /* channel 0's latched count, 0 = a whole reload      */
    u8  status;                       /* read-back status: bit 7 OUT, bits 3-1 mode         */
} pit_snapshot;

/* One consistent latch. Returns 0 when the BIOS tick moved across it: the caller (or
 * pit_clock_sample) asks again. */
typedef int (*pit_snapshot_fn)(void *ctx, pit_snapshot *s);

typedef struct pit_clock
{
    u32 total;                        /* counts since the first sample, 1.193182 MHz       */
    u32 lastTick;                     /* BIOS tick at the last adopted sample              */
    u32 lastPhase;                    /* counter phase at it, input clocks into the half   */
    u16 lastHalf;                     /* 0 = first half of the period, 1 = second (mode 3) */
    u16 started;                      /* the first sample only sets the marks              */
    u16 mode3;                        /* 1 = counter steps by two, reloads every half      */
    u16 firstOut;                     /* OUT level that begins a period (mode 3)           */
    u32 samples;                      /* samples adopted                                   */
    u32 snapFails;                    /* samples lost: no consistent snapshot              */
    u32 rejects;                      /* samples lost: the counter stepped backwards       */
    u32 pending;                      /* period boundaries the tick had not counted yet    */
} pit_clock;

/* The mode a read-back status byte names, or -1 if the byte is not one: bits 5-4 are the counter's
 * read/write mode, bits 3-1 its mode. The clock latches and reads two bytes, so only the LSB/MSB
 * mode (3) is usable, and only a rate or square wave makes sense for a clock (0, 4 and 5 are
 * one-shot/software strobe). */
static int pit_status_mode(u8 status)
{
    int rw = (status >> 4) & 3;
    int mode = (status >> 1) & 7;

    if (rw != 3 || (mode != 2 && mode != 3)) return -1;
    return mode;
}

/* How far into its half (mode 3) or period (mode 2) the counter is, in input clocks. The counter
 * counts down, so the phase is the distance it has run. In mode 3 it has been stepping by two, so
 * the raw distance is halved; the reload value 0 means a whole 65,536. */
static u32 pit_phase(const pit_clock *c, u16 counter)
{
    u32 lo = (0u - (u32)counter) & (PIT_PERIOD - 1u);

    return c->mode3 ? (lo >> 1) : lo;
}

static void pit_clock_begin(pit_clock *c, int mode3, int firstOut)
{
    c->total = 0;
    c->lastTick = 0;
    c->lastPhase = 0;
    c->lastHalf = 0;
    c->started = 0;
    c->mode3 = (u16)(mode3 != 0);
    c->firstOut = (u16)(firstOut != 0);
    c->samples = c->snapFails = c->rejects = c->pending = 0;
}

/* One sample into the clock. Returns 1 when the sample was adopted, 0 when it was refused as
 * non-monotonic (the caller retries or skips it, never rebases the clock onto it). */
static int pit_clock_step(pit_clock *c, u32 tick, u16 counter, u8 status, u32 *total)
{
    u32 phase = pit_phase(c, counter);
    u32 half = 0;
    u32 markTick = tick;
    s32 dt;
    u32 e;

    if (c->mode3)
        half = ((((u32)status >> 7) & 1u) == (u32)c->firstOut) ? 0u : 1u;

    if (!c->started)
    {
        c->started = 1;
        c->lastTick = tick;
        c->lastPhase = phase;
        c->lastHalf = (u16)half;
        c->samples++;
        *total = c->total;
        return 1;
    }

    dt = (s32)(tick - c->lastTick);
    if (dt < 0)
    {
        u32 back = 0u - (u32)dt;

        /* The BIOS handler counts the tick down to zero at midnight. That is the one legitimate
         * backwards step; anything else means the tick is behind the one already counted - its
         * handler for a boundary this clock has consumed has not run yet - and it must not be
         * adopted, or that boundary would be counted a second time when it runs. */
        if (back + PIT_MIDNIGHT_SLACK >= PIT_TICKS_PER_DAY &&
            back <= PIT_TICKS_PER_DAY + PIT_MIDNIGHT_SLACK)
        {
            dt += (s32)PIT_TICKS_PER_DAY;
            markTick = tick + PIT_TICKS_PER_DAY;
        }
        else
        {
            dt = 0;
            markTick = c->lastTick;
        }
    }

    if (c->mode3 && dt == 0 && c->lastHalf == 1 && half == 0)
    {
        /* The counter has crossed a full-period boundary but the BIOS handler has not counted it
         * yet. Count the period here and mark the tick as consumed, so the handler's later
         * increment is not counted as a second one. */
        dt = 1;
        markTick = c->lastTick + 1u;
        c->pending++;
    }

    e = PIT_PERIOD * (u32)dt
      + (c->mode3 ? PIT_HALF : 0u) * (u32)((s32)half - (s32)c->lastHalf)
      + (u32)(phase - c->lastPhase);

    if (dt == 0 && (s32)e < 0)
    {
        c->rejects++;                 /* the counter went backwards: refuse this reading */
        return 0;
    }

    c->total += e;
    c->lastTick = markTick;
    c->lastPhase = phase;
    c->lastHalf = (u16)half;
    c->samples++;
    *total = c->total;
    return 1;
}

/* Take a sample from `read`, retrying a racing tick or a backwards step. When no attempt is
 * consistent the clock simply does not advance: the next good sample measures the whole interval,
 * which is why a lost sample costs nothing but the marks. */
static u32 pit_clock_sample(pit_clock *c, pit_snapshot_fn read, void *ctx)
{
    int i;

    for (i = 0; i < PIT_SNAP_TRIES; i++)
    {
        pit_snapshot s;
        u32 total;

        if (!read(ctx, &s)) continue;
        if (pit_clock_step(c, s.tick, s.counter, s.status, &total)) return total;
    }
    c->snapFails++;
    return c->total;
}

#endif /* ICFTD_PITCLOCK_H */
