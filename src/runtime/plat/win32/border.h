/* The port's border art, painted behind the game view where fullscreen leaves bars.
 * See border.c; the picture itself is border_art.h, written by tools\mkborder.ps1. */
#ifndef ICFTD_BORDER_H
#define ICFTD_BORDER_H

#include "types.h"

/* Fills dst (w*h pixels, top-down, 32-bit BI_RGB: 0x00RRGGBB) with the border picture scaled to
 * that size, point-sampled. */
void border_paint(u32 *dst, int w, int h);

/* Whether border_paint fills the bars with the art, from icftd.ini [VIDEO] curtains (on when the
 * key is absent). Off fills them black instead - the bars as they were before the art - and the
 * table is never decoded. */
void border_set_enabled(int on);
int  border_enabled(void);

/* Decodes the art on the calling thread. border_paint decodes it lazily on first use, which is fine
 * while one thread paints; the true-colour presenter paints on its own thread (docs\display-rate.md,
 * phase 3), so the front end calls this once before that thread starts and every later paint only
 * reads the table. */
void border_prepare(void);

#endif /* ICFTD_BORDER_H */
