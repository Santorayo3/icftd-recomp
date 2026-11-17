/* The Amiga blitter as a bus device - see blitter.c for why the engine needs it, and why it is a
 * device on the clock rather than a function called at BLTSIZE. */
#ifndef EMU_BLIT_H
#define EMU_BLIT_H

#include "types.h"
#include "machine.h"

/* Writing BLTSIZE starts the blit: the device takes its slots as the bus clock passes (slots.c,
 * rt_bus_charge and rt_blit_wait) and runs the data path when the last slot has gone by. */
void rt_blit_start(rt_machine *m);

/* One colour clock went by and no DMA source owned it: the blitter takes it. Returns 1 if it did
 * (i.e. the clock is no longer the CPU's). This is what makes a CPU instruction wait while a blit
 * is running, exactly as the hardware does. */
int  rt_blit_take_clock(rt_machine *m);

/* Chipset write from the emulated 68000; `reg` is the offset from $DFF000. Anything that is not a
 * blitter register lands in rt_machine::custom[]. */
void rt_custom_write16(rt_machine *m, u16 reg, u16 v);

/* --blitstats: attribute the blitter's pixel-loop time to the classes of blit that run (minterm,
 * shifts, enabled channels, geometry, direction, source/destination overlap). Collects only while
 * the --perf window is open; reset() is called when that window opens, and the front end reads the
 * table back at shutdown to print it. */
void rt_blit_stats(int on);
void rt_blit_stats_reset(rt_machine *m);
int  rt_blit_stats_count(void);
const rt_blit_stat *rt_blit_stats_at(int i);

#endif /* EMU_BLIT_H */
