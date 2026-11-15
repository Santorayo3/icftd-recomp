/* The port's border art, painted behind the game view where fullscreen leaves bars.
 * See border.c; the picture itself is border_art.h, written by tools\mkborder.ps1. */
#ifndef ICFTD_BORDER_H
#define ICFTD_BORDER_H

#include "types.h"

/* Fills dst (w*h pixels, top-down, 32-bit BI_RGB: 0x00RRGGBB) with the border picture scaled to
 * that size, point-sampled. */
void border_paint(u32 *dst, int w, int h);

#endif /* ICFTD_BORDER_H */
