/* The copper, executed rather than parsed.
 *
 * On the original the display is not a set of registers the program writes once: graphics.library
 * turns the View (ViewPort + RasInfo + BitMap) into a copper program - BPLCON0, DIWSTRT/STOP,
 * DDFSTRT/STOP, the two modulos, one BPLxPT per plane, one COLORxx per colour, then a WAIT that
 * runs to the bottom of the frame - and the copper writes those registers at beam positions while
 * the CPU runs. That is why this engine can fade the screen by patching the list it was handed
 * (FUN_0001FDE8 walks MrgCop's list and remembers every palette data word): the list *is* the
 * display.
 *
 * This runtime used to keep only a palette table built by MrgCop and never execute anything, so
 * the display registers the slot map reads were whatever the engine happened to write directly.
 * Now MrgCop emits the real hardware-format program into the same block the engine patches, and
 * the copper runs it: each MOVE goes through rt_custom_write16 (so BPLCON0/DDF/DIW/DMACON/COLOR
 * end up in the register file the rest of the machine reads), and each MOVE or WAIT costs one bus
 * slot, walked through the same arbiter the CPU and the blitter use.
 *
 * The renderer is frame-based (one chunky conversion and one palette per frame), so the program is
 * run once per frame from its start: the register file then holds exactly what the copper would
 * have left there. A list that changes a register *mid-screen* would need per-line conversion -
 * that is not something this engine does, and it is recorded as a limitation rather than modelled
 * wrongly.
 */
#ifndef EMU_COPPER_H
#define EMU_COPPER_H

#include "types.h"

struct rt_machine;

/* Hardware copper instruction format: two words, (opcode, data). Bit 0 clear = MOVE, set = WAIT
 * (bit 1 clear) or SKIP (bit 1 set). The register field is the $DFF offset in bits 8..1. */
#define RT_COP_MOVE(reg, value)  ((u16)(((reg) & 0x1FEu)), (u16)(value))
#define RT_COP_WAIT(vpos, hpos)  ((u16)((((vpos) & 0xFFu) << 8) | (((hpos) & 0xFFu) | 1u)), (u16)0xFFFFu)
#define RT_COP_END               RT_COP_WAIT(0xFF, 0xFE)
/* The smallest WAIT position a copper can express, and the mask ends a list. */

typedef struct rt_copper
{
    u32 pc;                 /* next instruction to execute                       */
    u16 cop1lc;             /* not used; kept for the report                     */
    int moves;              /* instructions executed by the last run              */
    int waits;              /* WAITs passed by the last run                       */
    int installed;          /* a program is loaded                                */
} rt_copper;

/* Runs the program at `list` (a hardware-format copper list) from its first instruction. Every
 * MOVE is applied to the register file; execution stops at the terminating WAIT (0xFFFF/0xFFFE),
 * at a WAIT that lies past the end of the frame, or after `maxInstr` instructions. Returns the
 * number of bus slots the copper used, already charged to the frame budget. */
long rt_cop_run(struct rt_machine *m, u32 list, int maxInstr);

void rt_cop_reset(struct rt_machine *m);

#endif /* EMU_COPPER_H */
