/* The copper as a bus device - see copper.c. */
#ifndef EMU_COPPER_H
#define EMU_COPPER_H

#include "types.h"

struct rt_machine;

/* Hardware copper instruction format: two words, (opcode, data). Bit 0 clear = MOVE, set = WAIT
 * (bit 1 clear) or SKIP (bit 1 set). The register field is the $DFF offset in bits 8..1. */
#define RT_COP_MOVE(reg, value)  ((u16)(((reg) & 0x1FEu)), (u16)(value))
#define RT_COP_WAIT(vpos, hpos)  ((u16)((((vpos) & 0xFFu) << 8) | (((hpos) & 0xFFu) | 1u)), (u16)0xFFFFu)
#define RT_COP_END               RT_COP_WAIT(0xFF, 0xFE)

typedef struct rt_copper
{
    u32 list;               /* the program MrgCop installed (a cprlist's start) */
    u32 pc;                 /* next instruction word to fetch                  */
    u16 ir[2];              /* the two words of the instruction being fetched   */
    int load;               /* words of it already fetched (0, 1)               */
    int delay;              /* colour clocks until the copper's next bus slot   */
    int waiting;            /* a WAIT is holding the copper at a beam position  */
    int done;               /* the program ended (its terminating WAIT)         */
    u16 vcmp, hcmp;         /* ... at this position                             */
    int installed;          /* there is a program to run                        */
    int moves;              /* instructions executed                            */
    int waits;              /* WAITs passed                                     */
} rt_copper;

void rt_cop_reset(struct rt_machine *m);

/* The beam reached the top of the frame: the copper restarts at the list the last LoadView gave
 * MrgCop, as it does on the machine. */
void rt_cop_vblank(struct rt_machine *m);

/* One colour clock has passed with no DMA source owning it: the copper takes a slot every second
 * clock (UAE generate_copper: odd cycles only) and fetches one instruction word. Returns 1 if it
 * used the clock - the CPU then waits, exactly as it does against any other bus master. */
int  rt_cop_take_clock(struct rt_machine *m, long pos);

/* --slots report line. */
void rt_cop_report(struct rt_machine *m);

#endif /* EMU_COPPER_H */