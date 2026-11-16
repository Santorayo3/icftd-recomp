/* The situation map's SAVE GAME mark, pinned to the bottom right of the screen
 * (a port feature, src\host\save_button.c).
 *
 * Both front ends call this from their rc_entryHook: it answers for the entry of Move_DrawNode
 * (0x1DBD0), the one blit of the MovE renderer. When the node being placed is the map's SVGM
 * asset it rewrites that node's 16.16 screen position, so the mark sits 2 px in from the screen's
 * right and bottom edges instead of on the map's own top-left corner. It returns 1 when the entry
 * it was given is Move_DrawNode's (whether or not the node was the mark), 0 for every other
 * entry.
 */
#ifndef ICFTD_HOST_SAVE_BUTTON_H
#define ICFTD_HOST_SAVE_BUTTON_H

#include "types.h"
#include "machine.h"
#include "../recomp/cpu.h"

int host_save_button_entry(cpu_t *c, rt_machine *m, u32 pc);

/* Where the mark was last drawn, in screen coordinates (2 px in from the right, 2 px above the
 * bottom, and SAVE_UP further up). Returns 0 until the map has drawn it once; the map's pointer
 * seam uses it to keep the window still while the pointer is over the mark, and a held fire there
 * is the mark's own click (src\host\main.c, save_mark_click). */
int host_save_button_rect(s32 *x, s32 *y, s32 *w, s32 *h);

/* --savelog: one line per placement of the mark with the node's own position, the corner it was
 * moved to and the surface it is drawn on, so a headless run says where the mark is instead of a
 * screenshot. A measurement run never installs the seam, so it prints nothing. */
void host_save_button_log(int on);

#endif /* ICFTD_HOST_SAVE_BUTTON_H */
