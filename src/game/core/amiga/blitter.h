/* The engine's own blitter routine (dshell FUN_0001E8C8), ported to the chunky framebuffer.
 *
 * The original never calls graphics.BltBitMap: it programs the copper/blitter registers
 * directly, once per plane, with
 *     BLTCON0 = shift << 12 | USEA/B/C/D | 0xCA      (0xCA = D = (A & B) | (~A & C))
 *     A = 1-bit cookie-cut mask, B = source plane, C = D = destination plane
 * and it walks bottom-up with negative modulos.  Since a chunky pixel already carries every
 * plane, all of that collapses into one pixelwise masked copy - but the argument order and
 * the role of each channel are kept, so transcribed engine code maps 1:1.
 */
#ifndef ICFTD_AMIGA_BLITTER_H
#define ICFTD_AMIGA_BLITTER_H

#include "../types.h"
#include "graphics.h"

/* The one minterm the engine uses. */
#define AGFX_BLIT_COOKIE 0xCAu

/* One call of FUN_0001E8C8.  The mask is a 1-bit-per-pixel plane with the same geometry
 * as src (MSB leftmost); the original addresses it with the source offset, so there is no
 * separate mask origin.  NULLP means "opaque" - the original leaves USEA off, so BLTADAT
 * (0xFFFF) feeds channel A. */
typedef struct agfx_blit_job {
    const agfx_bitmap *src;     /* B: what is drawn                    */
    s16 sx, sy;                 /* source pixel origin                 */
    agfx_bitmap       *dst;     /* C and D: the destination            */
    s16 dx, dy;                 /* destination pixel origin            */
    s16 w, h;                   /* size in pixels                      */
    const u8 *mask;             /* A: cookie-cut bits, or NULLP        */
    s16 mask_stride;            /* bytes per mask row                  */
} agfx_blit_job;

/* Runs the job, clipped to the destination bitmap. Returns the number of pixels the
 * destination actually saw. */
u32 agfx_blit(const agfx_blit_job *job);

/* Bytes per row of a 1-bit mask for the given width. */
s16 agfx_mask_stride(s32 w);

/* Builds the cookie-cut mask the engine derives from its transparent colour: a bit is set
 * where the source pixel is not `key`.  Returns a plat_alloc'd buffer or NULLP. */
u8 *agfx_mask_from_key(const agfx_bitmap *src, u8 key);

#endif /* ICFTD_AMIGA_BLITTER_H */
