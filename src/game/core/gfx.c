/* Framebuffer primitives.  Clipping is done here so callers can pass the engine's
 * raw coordinates (the Amiga engine frequently draws partly off screen).
 */
#include "gfx.h"

u8  *gfx_fb = NULLP;
s32  gfx_w = 0;
s32  gfx_h = 0;

void gfx_init(u8 *framebuffer, s32 w, s32 h)
{
    gfx_fb = framebuffer;
    gfx_w = w;
    gfx_h = h;
}

void gfx_clear(u8 color)
{
    u32 n = (u32)gfx_w * (u32)gfx_h;
    u8 *p = gfx_fb;
    while (n--) *p++ = color;
}

void gfx_hline(s32 x, s32 y, s32 w, u8 color)
{
    u8 *p;

    if (y < 0 || y >= gfx_h || w <= 0) return;
    if (x < 0) { w += x; x = 0; }
    if (x + w > gfx_w) w = gfx_w - x;
    if (w <= 0) return;

    p = gfx_fb + (u32)y * (u32)gfx_w + (u32)x;
    while (w--) *p++ = color;
}

void gfx_fill(s32 x, s32 y, s32 w, s32 h, u8 color)
{
    u8 *d;
    s32 rows;

    if (w <= 0 || h <= 0) return;
    if (y < 0) { h += y; y = 0; }
    if (y + h > gfx_h) h = gfx_h - y;
    if (h <= 0) return;
    if (x < 0) { w += x; x = 0; }
    if (x + w > gfx_w) w = gfx_w - x;
    if (w <= 0) return;

    d = gfx_fb + (u32)y * (u32)gfx_w + (u32)x;
    for (rows = h; rows > 0; rows--, d += (u32)gfx_w) {
        u8 *p = d;
        s32 i;
        for (i = 0; i < w; i++) p[i] = color;
    }
}

void gfx_blit_part(s32 x, s32 y, s32 w, s32 h,
                   const u8 *src, s32 src_stride, s32 sx, s32 sy, s32 transparent)
{
    s32 rows;
    const u8 *s;
    u8 *d;

    if (w <= 0 || h <= 0) return;
    if (x < 0) { w += x; sx -= x; x = 0; }
    if (y < 0) { h += y; sy -= y; y = 0; }
    if (x + w > gfx_w) w = gfx_w - x;
    if (y + h > gfx_h) h = gfx_h - y;
    if (w <= 0 || h <= 0 || sx < 0 || sy < 0) return;

    for (rows = 0; rows < h; rows++) {
        s = src + (u32)(sy + rows) * (u32)src_stride + (u32)sx;
        d = gfx_fb + (u32)(y + rows) * (u32)gfx_w + (u32)x;
        if (transparent < 0) {
            s32 i;
            for (i = 0; i < w; i++) d[i] = s[i];
        }
        else {
            s32 i;
            u8 key = (u8)transparent;
            for (i = 0; i < w; i++) {
                u8 px = s[i];
                if (px != key) d[i] = px;
            }
        }
    }
}

void gfx_blit(s32 x, s32 y, s32 w, s32 h, const u8 *src, s32 transparent)
{
    gfx_blit_part(x, y, w, h, src, w, 0, 0, transparent);
}
