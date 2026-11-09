/* 8-bit indexed software framebuffer with the blit primitives the engine needs.
 *
 * The Amiga engine composites planar bitmaps; the port keeps everything chunky
 * (1 byte per pixel) and converts the assets once, at build time.  That is the
 * single decision that makes the same rendering code work on VGA and on Windows.
 */
#ifndef ICFTD_GFX_H
#define ICFTD_GFX_H

#include "types.h"

extern u8 *gfx_fb;
extern s32 gfx_w, gfx_h;

void gfx_init(u8 *framebuffer, s32 w, s32 h);
void gfx_clear(u8 color);
void gfx_fill(s32 x, s32 y, s32 w, s32 h, u8 color);
void gfx_hline(s32 x, s32 y, s32 w, u8 color);

/* Opaque blit.  transparent < 0 draws every pixel, otherwise that index is skipped. */
void gfx_blit(s32 x, s32 y, s32 w, s32 h, const u8 *src, s32 transparent);

/* Blit a source rectangle (used by 8x8 font and tile drawing). */
void gfx_blit_part(s32 x, s32 y, s32 w, s32 h,
                   const u8 *src, s32 src_stride, s32 sx, s32 sy, s32 transparent);

#endif /* ICFTD_GFX_H */
