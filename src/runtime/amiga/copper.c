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
    u32 list = m->gfx.cprList;

    c->list = list;
    c->pc = list;
    c->load = 0;
    c->waiting = 0;
    c->done = 0;
    c->delay = 1;
    c->moves = 0;
    c->waits = 0;
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

int rt_cop_take_clock(rt_machine *m, long pos)
{
    rt_copper *c = &m->copper;
    u16 op, data;
    int vpos, hpos;

    if (!c->installed || c->done) return 0;
    if (c->delay-- > 0) return 0;            /* not the copper's clock this time */
    c->delay = 1;                            /* one clock off, then one on: odd cycles only */

    if (c->waiting)
    {
        beam_of(m, pos, &vpos, &hpos);
        /* WAIT until the beam has reached (vcmp,hcmp). A position already behind the beam is
         * passed immediately, which is what makes a list with no WAITs run straight through. */
        if (vpos < (int)c->vcmp || (vpos == (int)c->vcmp && hpos < (int)c->hcmp)) return 0;
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
    c->waiting = 1;
    return 1;
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