/* The Amiga blitter, in immediate mode - see blit.c for why the engine needs it. */
#ifndef EMU_BLIT_H
#define EMU_BLIT_H

#include "types.h"
#include "machine.h"

/* Writing BLTSIZE runs the blit synchronously. */
void emu_blit_run(emu_machine *m);

/* Chipset write from the emulated 68000; `reg` is the offset from $DFF000. Anything that is not a
 * blitter register lands in emu_machine::custom[]. */
void emu_custom_write16(emu_machine *m, u16 reg, u16 v);

#endif /* EMU_BLIT_H */
