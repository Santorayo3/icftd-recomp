/* The copper (see copper.h): a device on the colour-clock bus, one instruction word per slot.
 *
 * On the original the display is not a set of registers the program writes once: graphics.library
 * turns the View into a copper program and the copper writes those registers at beam positions
 * while the CPU runs. That is also why this engine can fade by patching the list it was handed
 * (FUN_0001FDE8 walks MrgCop's list and remembers every palette data word): the list *is* the
 * display.
 *
 * So the copper is not run as a lump between frames. It is a bus master like the CPU and the
 * blitter: every second colour clock it takes a slot, fetches one instruction word, and applies a
 * MOVE through rt_custom_write16 - so a register the list writes is written exactly when the
 * hardware would write it, and the list's own bus time comes out of the same map.
 */
#include <stdio.h>
#include <string.h>

#include "types.h"
#include "machine.h"
#include "blitter.h"
#include "slots.h"
#include "copper.h"

void rt_cop_reset(rt_machine *m)
{
    memset(&m->copper, 0, sizeof m->copper);
    m->copper.delay = 1;
}

void rt_cop_vblank(rt_machine *m)
{
    rt_copper *c = &m->copper;
    u32 crl = m->gfx.cprList;
    /* LoadView puts LOFCprList->start into COP1LC, not the cprlist itself: the struct is
     * { Next, start, MaxCount } and the program is at `start`. The engine relies on that - it
     * keeps the list graphics.library built and points the struct's start at a list of its own
     * (FUN_00011F64: it saves the old start/MaxCount at 0x2A888/0x2A88C and restores them in
     * FUN_000120F4), so following the struct instead of its start runs the wrong list. */
    u32 list = crl != 0 ? rt_read32(&m->mem, crl + 4) : 0;

    c->list = list;
    c->pc = list;
    c->load = 0;
    c->waiting = 0;
    c->done = 0;
    c->delay = 1;
    c->moves = 0;
    c->waits = 0;
    c->wakeAt = 0;
    c->installed = (list != 0 && (list + 4u) <= m->mem.size);
}

/* The beam position the copper compares against, from the frame position in 68000 cycles. */
static void beam_of(rt_machine *m, long pos, int *vpos, int *hpos)
{
    pos %= (long)EMU_CYCLES_PER_FRAME;
    if (pos < 0) pos += (long)EMU_CYCLES_PER_FRAME;
    *vpos = (int)(pos / EMU_LINE_CYCLES);
    *hpos = (int)((pos % EMU_LINE_CYCLES) >> 1);
}

/* Where in the frame the beam has to be before a WAIT at (vcmp,hcmp) lets the copper go on: the
 * position of that (line, clock) as one 68000-cycle offset. A hcmp beyond the line's own clocks
 * can never be reached inside that line, so the WAIT releases at the first clock of the next one -
 * which is what the (vpos,hpos) comparison of the reference path says too. */
static long wait_position(u16 vcmp, u16 hcmp)
{
    if (hcmp > EMU_LINE_COLOR_CLOCKS - 1)
        return (long)(vcmp + 1) * EMU_LINE_CYCLES;
    return (long)vcmp * EMU_LINE_CYCLES + (long)hcmp * 2L;
}

/* One slot offered to the copper. `reached` is the answer to "has the beam got to the WAIT
 * position"; it is only looked at while a WAIT holds the copper. */
static int copper_slot(rt_machine *m, int reached)
{
    rt_copper *c = &m->copper;
    u16 op, data;

    if (c->delay-- > 0) return 0;            /* not the copper's clock this time */
    c->delay = 1;                            /* one clock off, then one on: odd cycles only */

    if (c->waiting)
    {
        /* WAIT until the beam has reached (vcmp,hcmp). A position already behind the beam is
         * passed immediately, which is what makes a list with no WAITs run straight through. */
        if (!reached) return 0;
        c->waiting = 0;
        c->waits++;
        return 1;
    }

    if ((c->pc + 2u) > m->mem.size) { c->done = 1; return 0; }
    c->ir[c->load++] = (u16)rt_read16(&m->mem, c->pc);
    c->pc += 2u;
    if (c->load < 2) return 1;               /* the instruction is only half fetched */

    c->load = 0;
    op = c->ir[0];
    data = c->ir[1];
    if ((op & 1u) == 0)
    {
        /* MOVE: the register field is the $DFF offset in bits 8..1. */
        rt_custom_write16(m, (u16)(op & 0x1FEu), data);
        c->moves++;
        return 1;
    }
    /* WAIT or SKIP: 0xFFFF/0xFFFE is the end of the list. */
    if (op == 0xFFFFu && data == 0xFFFEu) { c->done = 1; return 1; }
    c->vcmp = (u16)((op & 0xFF00u) >> 8);
    c->hcmp = (u16)(op & 0x00FEu);
    c->wakeAt = wait_position(c->vcmp, c->hcmp);
    c->waiting = 1;
    return 1;
}

int rt_cop_take_clock(rt_machine *m, long at)
{
    rt_copper *c = &m->copper;

    if (!c->installed || c->done) return 0;
    return copper_slot(m, !c->waiting || at >= c->wakeAt);
}

int rt_cop_take_clock_ref(rt_machine *m, long pos)
{
    rt_copper *c = &m->copper;
    int vpos, hpos;

    if (!c->installed || c->done) return 0;
    beam_of(m, pos, &vpos, &hpos);
    return copper_slot(m, !c->waiting ||
                          !(vpos < (int)c->vcmp ||
                            (vpos == (int)c->vcmp && hpos < (int)c->hcmp)));
}

void rt_cop_report(rt_machine *m)
{
    rt_copper *c = &m->copper;

    if (!c->installed)
    {
        printf("copper: no program (the last LoadView installed no list)\n");
        return;
    }
    printf("copper: list %06lX, pc %06lX, %d MOVE(s), %d WAIT(s)%s%s\n",
           (unsigned long)c->list, (unsigned long)c->pc, c->moves, c->waits,
           c->done ? " ended" : "", c->waiting ? " waiting" : "");
}
