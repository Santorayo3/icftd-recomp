/* The Amiga blitter, in immediate mode - see blit.c for why the engine needs it. */
#ifndef EMU_BLIT_H
#define EMU_BLIT_H

#include "types.h"
#include "machine.h"

/* Writing BLTSIZE runs the blit synchronously. */
void rt_blit_run(rt_machine *m);

/* Chipset write from the emulated 68000; `reg` is the offset from $DFF000. Anything that is not a
 * blitter register lands in rt_machine::custom[]. */
void rt_custom_write16(rt_machine *m, u16 reg, u16 v);

#endif /* EMU_BLIT_H */
