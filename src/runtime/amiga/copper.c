/* The copper (see copper.h): one MOVE per bus slot, in the hardware's instruction format. */
#include <string.h>

#include "types.h"
#include "machine.h"
#include "blitter.h"
#include "slots.h"
#include "copper.h"

void rt_cop_reset(rt_machine *m)
{
    memset(&m->copper, 0, sizeof m->copper);
}

long rt_cop_run(rt_machine *m, u32 list, int maxInstr)
{
    u32 pc = list;
    int n = 0, moves = 0, waits = 0;

    if (list == 0 || (list + 4u) > m->mem.size)
    {
        m->copper.installed = 0;
        m->copper.moves = m->copper.waits = 0;
        return 0;
    }
    if (maxInstr <= 0) maxInstr = 1024;
    m->copper.installed = 1;
    while (n < maxInstr && (pc + 4u) <= m->mem.size)
    {
        u16 opcode = (u16)rt_read16(&m->mem, pc);
        u16 data   = (u16)rt_read16(&m->mem, pc + 2u);
        u32 next   = pc + 4u;

        n++;
        if ((opcode & 1u) == 0)
        {
            /* MOVE: the register field is the $DFF offset in bits 8..1, so a write to COLOR00
             * arrives here as 0x180 and to BPLCON0 as 0x100. */
            rt_custom_write16(m, (u16)(opcode & 0x1FEu), data);
            moves++;
            pc = next;
            continue;
        }
        /* WAIT/SKIP: bit 0 set. 0xFFFF/0xFFFE is "wait here for ever" - the end of the program. */
        waits++;
        if ((opcode & 0xFFFEu) == 0xFFFEu) { pc = next; break; }
        /* Any other WAIT lies at a beam position below the display, which a frame-based run has
         * already passed: keep going, as the beam would. */
        pc = next;
    }
    m->copper.pc = pc;
    m->copper.moves = moves;
    m->copper.waits = waits;
    /* One bus slot per copper instruction - the copper fetches one word per slot, like any other
     * DMA channel, and those slots come out of the same map the CPU and blitter walk. */
    return rt_bus_walk(m, n);
}
