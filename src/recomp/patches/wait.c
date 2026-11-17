/* The engine's flag waits, run natively instead of as translated polling instructions.
 *
 * The hospital's pass (`fn_0001819a`, 0x1821C..0x18228) raises the word at 0x28CE0 and then spins
 * on it:
 *
 *     1821c  move.w #1,(A4-0xD76)     ; the request
 *     18222  tst.w  (A4-0xD76)        ; ... answered by an interrupt server
 *     18226  beq    1822a             ; the wait is over
 *     18228  bra    18222
 *
 * The answer is the vertical blank's copper-list server (`fn_000180f0` -> `fn_00017cec`, installed
 * by `fn_00018108`), which clears the word on every vblank, so the wait lasts at most a frame. On
 * an A500 that wait is free; here it is the largest single item of a frame
 * (docs\dos-hospital-perf.txt, section 5: 17,152 of the frame's 141,875 cycles, 12.6 ms of a
 * 100 ms frame), and making the pass faster does not help - the wait is the frame's residual and
 * grows by whatever the pass no longer spends.
 *
 * The emitter recognises the loop (`Emitter.EmitWait`) and offers each *iteration* here before the
 * three instructions run. Two things happen:
 *
 *   1. the iteration is charged one rc_step at a time, exactly as the translation charges it - its
 *      cycles, its bus words through the slot walker, its pc - so the budget runs out at the same
 *      instruction, the vblank lands in the same charge, the CIA slice and the copper and the
 *      blitter take the same clocks, and the word is read after the charge it was read after
 *      originally;
 *   2. `wait_bulk` charges whole runs of iterations in one step, but only in a machine state that
 *      proves the run is a plain sequence of clocks (see there).
 *
 * Nothing here clears the word. `rc_wait` returns 0 whenever the translation should run the loop
 * instead, which keeps the reference path alive: `--refwait` (rc_waitTranslated) selects it for a
 * state diff, a machine with no frame hook cannot release the word at all, a machine whose word
 * survives a frame boundary is waiting for something else, and every instruction-level seam
 * (--trace, the harness's operation limit, a break pc on the loop) turns the bulk step off so
 * nothing that watches single instructions loses sight of them.
 */
#include "cpu.h"
#include "audio.h"
#include "slots.h"

/* --refwait: the translation runs the loop. Used by `recomp-check --wait` and by the front ends,
 * so the native wait and the translated loop can be compared from one machine state. */
int rc_waitTranslated = 0;

/* A wait that outlives this many frame boundaries is not one of ours. One boundary is the normal
 * case (the word is cleared by the first vblank after the request); the second is the margin a
 * boundary that lands inside the exit branch's own charge can need. */
#define WAIT_FRAMES 2u

/* The loop, in colour clocks: every instruction runs its internal cycles first and then transfers
 * its bus words, one colour clock each (rt_bus_charge's rule). */
typedef struct wait_shape
{
    int internal[3];                /* internal clocks of the test, the exit branch and the loop */
    int words[3];                   /* bus words each of them transfers                          */
    int clocks;                     /* colour clocks one iteration takes when nothing waits     */
} wait_shape;

static void wait_shape_of(rt_machine *m, u32 testPc, u32 testCycles, u32 bccPc, u32 bccCycles,
                          u32 braPc, u32 braCycles, wait_shape *s)
{
    u32 pcs[3], costs[3];
    int i, at = 0;

    pcs[0] = testPc; costs[0] = testCycles;
    pcs[1] = bccPc;  costs[1] = bccCycles;
    pcs[2] = braPc;  costs[2] = braCycles;
    for (i = 0; i < 3; i++)
    {
        int w = rt_bus_words_at(m, pcs[i], (long)costs[i]);

        s->words[i] = w;
        s->internal[i] = (int)((costs[i] - 2u * (u32)w) / 2u);
        at += s->internal[i] + w;
    }
    s->clocks = at;
}

/* 1 while nothing watches single instructions. The trace window and the harness's operation limit
 * need one rc_step per instruction, and a break pc on one of the loop's own instructions has to be
 * handed back to the front end. The bisection stop (rc_stopAt) does not: the run is clamped to it
 * below, so the stop lands on the instruction it names. */
static int wait_quiet_mode(const rt_machine *m, u32 testPc, u32 bccPc, u32 braPc)
{
    if (m->traceTo != 0 || rc_abort != 0) return 0;
    if (rc_breakPc == testPc || rc_breakPc == bccPc || rc_breakPc == braPc) return 0;
    return 1;
}

/* Charges whole runs of iterations in one step and returns how many were taken (0 when no run can
 * be proven). The caller has just charged one iteration whose charges stayed inside the frame, so
 * the machine is at the head of the loop with the word known to be set.
 *
 * The run is walked in the bus walker's own terms rather than stepped with rc_step: the same
 * internal clocks, the same bus words, each word taking the first colour clock nobody else owns.
 * What makes that a proof and not an approximation is the state it is allowed to run in - the
 * copper held at a WAIT, so it takes no clock and every clock it is offered only flips its
 * one-on-one-off alternation, or a copper whose list has ended, which takes nothing at all - and
 * the blitter idle, so the only owner in front of a bus word is the display DMA and the walk is
 * the same sequence of clocks the per-instruction path would have walked. Every boundary that
 * changes behaviour stops the run before it: the copper waking, a CIA handler becoming due (it
 * runs at an instruction boundary), the bisection stop, and the frame budget - the run always
 * leaves one iteration inside the frame, because the translated step above crosses the boundary,
 * and that crossing is what places the vblank and the frame's debt.
 *
 * The applied state is exactly what those clocks would have left: the budget, the copper's
 * alternation (the parity of the free clocks in the run), the device slice in one rt_time_run -
 * which is the same sequence of E-clock ticks and audio samples the per-charge calls make, since
 * no handler can be due inside it - the instruction count the translation would have added, and
 * the pc of the last instruction it would have run. */
static long wait_bulk(cpu_t *c, rt_machine *m, const wait_shape *s, u32 braPc)
{
    const u8 *map;
    long c0, at, free, next, budget, wake = -1, done = 0, limit, i;

    if (s->clocks <= 0) return 0;
    if (!m->slots.valid || m->blit.run) return 0;
    if (m->copper.installed && !m->copper.done && !m->copper.waiting) return 0;
    if (m->slots.dirty) rt_slots_update(m);

    budget = m->cyclesToTick;
    if (budget <= 0) return 0;
    c0 = rt_frame_pos(m) / 2;                         /* the run's first colour clock */
    if (c0 <= 0) return 0;                            /* the copper restarts at the top */

    map = rt_slots_map(m);
    next = rt_time_next_service(m);
    if (m->copper.installed && !m->copper.done) wake = m->copper.wakeAt;

    limit = (budget - 2L * (long)s->clocks) / 2L;     /* clocks the run may take */
    if (limit <= 0) return 0;
    if (rc_stopAt > 0)
    {
        long room = ((rc_stopAt - m->insns) / 3L) * (long)s->clocks;

        if (room < limit) limit = room;
        if (limit <= 0) return 0;
    }

    at = c0;
    for (;;)
    {
        long start = at;
        int bad = 0;

        for (i = 0; i < 3 && !bad; i++)
        {
            int w;

            at += s->internal[i];
            if (at >= (long)EMU_FRAME_SLOTS) { bad = 1; break; }
            for (w = s->words[i]; w > 0; w--)
            {
                while (map[at] != RT_SLOT_CPU)
                {
                    if (++at >= (long)EMU_FRAME_SLOTS) { bad = 1; break; }
                }
                if (bad) break;
                if (++at >= (long)EMU_FRAME_SLOTS) { bad = 1; break; }
            }
        }
        if (bad || at - c0 > limit) { at = start; break; }
        if (next >= 0 && 2L * (at - c0) >= next) { at = start; break; }
        if (wake >= 0 && 2L * at >= wake) { at = start; break; }
        done++;
    }
    if (done <= 0) return 0;

    /* The copper's alternation is the parity of the free clocks the run walked through. A copper
     * whose list has ended takes no clock at all and has nothing to alternate. */
    if (wake >= 0)
    {
        free = rt_slots_free_clocks(m, 2L * c0, 2L * (at - c0));
        m->copper.delay ^= (int)(free & 1L);
    }
    m->cyclesToTick -= 2L * (at - c0);
    rt_time_run(m, 2L * (at - c0));
    m->insns += 3 * done;
    m->pc = braPc;
    c->pc = braPc;
    return done;
}

static u32 wait_read(cpu_t *c, rt_machine *m, u32 addr, int size)
{
    if (size == RC_B) return rc_rd8(c, m, addr);
    if (size == RC_L) return rc_rd32(c, m, addr);
    return rc_rd16(c, m, addr);
}

int rc_wait(cpu_t *c, rt_machine *m, u32 testPc, u32 testCycles,
            u32 bccPc, u32 bccCycles, int cc, u32 braPc, u32 braCycles, u32 addr, int size)
{
    wait_shape shape;
    int shapeReady = 0, bulk;
    u32 frame0;

    if (rc_waitTranslated || rc_frame_hook == 0) return 0;
    bulk = wait_quiet_mode(m, testPc, bccPc, braPc);

    frame0 = m->frame;
    for (;;)
    {
        u32 v, frameIn = m->frame;

        /* The head of the loop is the one place this can return 0: the charges so far are then
         * exactly the ones the translation would have made before its own `tst`, and the emitted
         * loop resumes on that test. */
        if (m->stop || m->frame - frame0 >= WAIT_FRAMES) return 0;

        /* The test. Its charge comes first, so a frame boundary inside it runs the vblank - which
         * is what clears the word - before the read, exactly as in the emitted loop. */
        c->pc = testPc;
        rc_step(c, m, testCycles);
        v = wait_read(c, m, addr, size);
        rc_set_nzvc(c, v, size);

        /* The exit branch, evaluated on the flags the test just set - also after its charge, for
         * the same reason. The handler the vblank runs restores the register file, so the CCR here
         * is the one the test produced. */
        c->pc = bccPc;
        rc_step(c, m, bccCycles);
        if (rc_cond(c, cc)) return 1;

        /* ... and the branch back, with the loop's stop check after it (the emitted `rc_tick`). */
        c->pc = braPc;
        rc_step(c, m, braCycles);
        rc_tick();

        /* A vertical blank inside this iteration may have cleared the word - the server that owns
         * it runs there - so the next test has to be a real one, read after the charge that
         * crossed the boundary, before anything may be skipped. */
        if (m->frame != frameIn) continue;
        if (!bulk) continue;
        if (!shapeReady)
        {
            wait_shape_of(m, testPc, testCycles, bccPc, bccCycles, braPc, braCycles, &shape);
            shapeReady = 1;
        }
        wait_bulk(c, m, &shape, braPc);
    }
}
