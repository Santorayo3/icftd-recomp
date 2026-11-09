/* See blitter.h. */
#include <string.h>

#include "../types.h"
#include "../platform.h"
#include "blitter.h"

/* One pixel through the fixed minterm, bit by bit: bit i of a pen is plane i. */
static u8 blend(u8 a, u8 b, u8 c)
{
    u8 out = 0;
    u8 bit;

    for (bit = 0; bit < 8; bit++) {
        u8 m = (u8)(1u << bit);
        u8 idx = (u8)(((a & m) ? 4u : 0u) | ((b & m) ? 2u : 0u) | ((c & m) ? 1u : 0u));
        if ((AGFX_BLIT_COOKIE >> idx) & 1u) out |= m;
    }
    return out;
}

s16 agfx_mask_stride(s32 w)
{
    return (s16)((w + 7) / 8);
}

u8 *agfx_mask_from_key(const agfx_bitmap *src, u8 key)
{
    s16 stride;
    u8 *mask;
    s32 x, y;

    if (src == NULLP || src->pixels == NULLP) return NULLP;
    stride = agfx_mask_stride(src->width);
    mask = (u8 *)plat_alloc((u32)stride * (u32)src->height);
    if (mask == NULLP) return NULLP;
    memset(mask, 0, (u32)stride * (u32)src->height);

    for (y = 0; y < src->height; y++) {
        const u8 *row = src->pixels + (s32)y * src->stride;
        u8 *mrow = mask + (s32)y * stride;
        for (x = 0; x < src->width; x++)
            if (row[x] != key) mrow[x >> 3] |= (u8)(0x80u >> (x & 7));
    }
    return mask;
}

u32 agfx_blit(const agfx_blit_job *job)
{
    const agfx_bitmap *src;
    agfx_bitmap *dst;
    s32 x0, y0, x1, y1, x, y;
    u32 painted = 0;

    if (job == NULLP) return 0;
    src = job->src;
    dst = job->dst;
    if (src == NULLP || dst == NULLP || src->pixels == NULLP || dst->pixels == NULLP) return 0;
    if (job->w <= 0 || job->h <= 0) return 0;

    x0 = job->dx;
    y0 = job->dy;
    x1 = job->dx + job->w;
    y1 = job->dy + job->h;

    /* The original clips to the destination bitmap (Rows, and the screen height) and to
     * the source's Rows; do the same, one pixel at a time. */
    if (x0 < 0) x0 = 0;
    if (y0 < 0) y0 = 0;
    if (x1 > dst->width)  x1 = dst->width;
    if (y1 > dst->height) y1 = dst->height;
    if (x1 <= x0 || y1 <= y0) return 0;

    for (y = y0; y < y1; y++) {
        s32 sy = job->sy + (y - job->dy);
        const u8 *srow;
        u8 *drow;
        const u8 *mrow = NULLP;

        if (sy < 0 || sy >= src->height) continue;
        srow = src->pixels + sy * src->stride;
        drow = dst->pixels + y * dst->stride;
        if (job->mask != NULLP) mrow = job->mask + sy * job->mask_stride;

        for (x = x0; x < x1; x++) {
            s32 sx = job->sx + (x - job->dx);
            u8 a = 0xFF;
            if (sx < 0 || sx >= src->width) continue;
            if (mrow != NULLP)
                a = (u8)((mrow[sx >> 3] & (0x80u >> (sx & 7))) ? 0xFF : 0x00);
            drow[x] = blend(a, srow[sx], drow[x]);
            painted++;
        }
    }
    return painted;
}
