/* graphics.library subset over the chunky framebuffer.  See graphics.h. */
#include <string.h>

#include "../types.h"
#include "../platform.h"
#include "../gfx.h"
#include "graphics.h"

static agfx_stats stats;

void agfx_init(void)
{
    memset(&stats, 0, sizeof stats);
}

const agfx_stats *agfx_get_stats(void)
{
    return &stats;
}

/* ------------------------------------------------------------- bitmaps ---- */

void agfx_bitmap_from_fb(agfx_bitmap *bm)
{
    bm->pixels = gfx_fb;
    bm->width  = gfx_w;
    bm->height = gfx_h;
    bm->stride = gfx_w;
    bm->depth  = 8;
}

agfx_bitmap *agfx_bitmap_alloc(s32 w, s32 h, u16 depth, u8 clear_pen)
{
    agfx_bitmap *bm;

    if (w <= 0 || h <= 0) return NULLP;
    bm = (agfx_bitmap *)plat_alloc((u32)sizeof(agfx_bitmap));
    if (bm == NULLP) return NULLP;
    bm->pixels = (u8 *)plat_alloc((u32)(w * h));
    if (bm->pixels == NULLP) { plat_free(bm); return NULLP; }
    bm->width  = w;
    bm->height = h;
    bm->stride = w;
    bm->depth  = depth;
    memset(bm->pixels, clear_pen, (u32)(w * h));
    return bm;
}

void agfx_bitmap_free(agfx_bitmap *bm)
{
    if (bm == NULLP) return;
    if (bm->pixels != NULLP) plat_free(bm->pixels);
    plat_free(bm);
}

/* ----------------------------------------------------------- colormaps ---- */

agfx_colormap *agfx_colormap_alloc(u16 count)
{
    agfx_colormap *cm;

    if (count == 0 || count > AGFX_MAX_PENS) count = AGFX_MAX_PENS;
    cm = (agfx_colormap *)plat_alloc((u32)sizeof(agfx_colormap));
    if (cm == NULLP) return NULLP;
    memset(cm, 0, sizeof *cm);
    cm->count = count;
    return cm;
}

void agfx_colormap_free(agfx_colormap *cm)
{
    if (cm != NULLP) plat_free(cm);
}

void agfx_set_rgb4(agfx_colormap *cm, u16 index, u16 r, u16 g, u16 b)
{
    if (cm == NULLP || index >= AGFX_MAX_PENS) return;
    cm->color[index] = (u16)(((r & 0x0F) << 8) | ((g & 0x0F) << 4) | (b & 0x0F));
}

void agfx_load_rgb4(agfx_colormap *cm, const u16 *rgb4, u16 count)
{
    u16 i;

    if (cm == NULLP || rgb4 == NULLP) return;
    for (i = 0; i < count && i < AGFX_MAX_PENS; i++) cm->color[i] = rgb4[i];
}

void agfx_palette_upload(const agfx_colormap *cm, u32 first, u32 count)
{
    u8 rgb[AGFX_MAX_PENS * 3];
    u32 i;

    if (cm == NULLP) return;
    if (first + count > AGFX_MAX_PENS) count = AGFX_MAX_PENS - first;
    for (i = 0; i < count; i++) {
        u16 c = cm->color[first + i];
        rgb[i * 3 + 0] = (u8)(((c >> 8) & 0x0F) * 17);
        rgb[i * 3 + 1] = (u8)(((c >> 4) & 0x0F) * 17);
        rgb[i * 3 + 2] = (u8)((c & 0x0F) * 17);
    }
    plat_set_palette(first, count, rgb);
    stats.palette_uploads++;
}

/* ----------------------------------------------------------- rastports ---- */

void agfx_init_rastport(agfx_rastport *rp, agfx_bitmap *bm, agfx_colormap *cm)
{
    memset(rp, 0, sizeof *rp);
    rp->bm       = bm;
    rp->cmap     = cm;
    rp->drawmode = AGFX_JAM1;
    rp->minterm  = AGFX_MT_SRC;
}

void agfx_set_apen(agfx_rastport *rp, u8 pen) { rp->fg_pen = pen; }
void agfx_set_bpen(agfx_rastport *rp, u8 pen) { rp->bg_pen = pen; }
void agfx_set_drmd(agfx_rastport *rp, u8 mode) { rp->drawmode = mode; }
void agfx_set_font(agfx_rastport *rp, const agfx_font *f) { rp->font = f; }

/* -------------------------------------------------------------- pixels ---- */

static u8 mix_pen(const agfx_rastport *rp, u8 old)
{
    switch (rp->drawmode) {
    case AGFX_JAM2:       return (u8)(old | rp->fg_pen);
    case AGFX_COMPLEMENT: return (u8)(old ^ rp->fg_pen);
    case AGFX_INVERSE:    return (u8)(rp->fg_pen ^ 0xFF);  /* inverse video */
    default:              return rp->fg_pen;               /* AGFX_JAM1 */
    }
}

static void put_pixel(agfx_rastport *rp, s32 x, s32 y)
{
    agfx_bitmap *bm = rp->bm;

    if (x < 0 || y < 0 || x >= bm->width || y >= bm->height) return;
    bm->pixels[y * bm->stride + x] = mix_pen(rp, bm->pixels[y * bm->stride + x]);
}

static void put_pen_pixel(agfx_rastport *rp, s32 x, s32 y, u8 pen)
{
    agfx_bitmap *bm = rp->bm;

    if (x < 0 || y < 0 || x >= bm->width || y >= bm->height) return;
    bm->pixels[y * bm->stride + x] = pen;
}

/* Inclusive horizontal span, clipped to the bitmap. */
static void hspan(agfx_rastport *rp, s32 x1, s32 x2, s32 y)
{
    agfx_bitmap *bm = rp->bm;
    s32 x;

    if (y < 0 || y >= bm->height) return;
    if (x1 > x2) { s32 t = x1; x1 = x2; x2 = t; }
    if (x2 < 0 || x1 >= bm->width) return;
    if (x1 < 0) x1 = 0;
    if (x2 >= bm->width) x2 = bm->width - 1;
    if (rp->drawmode == AGFX_JAM1) {
        memset(bm->pixels + y * bm->stride + x1, rp->fg_pen, (u32)(x2 - x1 + 1));
        return;
    }
    for (x = x1; x <= x2; x++) {
        u8 *p = bm->pixels + y * bm->stride + x;
        *p = mix_pen(rp, *p);
    }
}

/* --------------------------------------------------------------- lines ---- */

void agfx_move(agfx_rastport *rp, s16 x, s16 y)
{
    rp->cp_x = x;
    rp->cp_y = y;
}

void agfx_draw(agfx_rastport *rp, s16 x, s16 y)
{
    s32 x0 = rp->cp_x, y0 = rp->cp_y;
    s32 x1 = x, y1 = y;
    s32 dx = x1 - x0, dy = y1 - y0;
    s32 sx = dx < 0 ? -1 : 1, sy = dy < 0 ? -1 : 1;
    s32 err, e2;

    stats.lines++;
    if (dx < 0) dx = -dx;
    if (dy < 0) dy = -dy;
    err = dx - dy;
    for (;;) {
        put_pixel(rp, x0, y0);
        if (x0 == x1 && y0 == y1) break;
        e2 = err * 2;
        if (e2 > -dy) { err -= dy; x0 += sx; }
        if (e2 <  dx) { err += dx; y0 += sy; }
    }
    rp->cp_x = x;
    rp->cp_y = y;
}

void agfx_rect_fill(agfx_rastport *rp, s16 x1, s16 y1, s16 x2, s16 y2)
{
    s32 y;

    stats.rect_fills++;
    if (y1 > y2) { s16 t = y1; y1 = y2; y2 = t; }
    for (y = y1; y <= y2; y++) hspan(rp, x1, x2, y);
}

/* --------------------------------------------------------------- areas ---- */

void agfx_area_move(agfx_rastport *rp, s16 x, s16 y)
{
    rp->area_n = 0;
    agfx_area_draw(rp, x, y);
}

void agfx_area_draw(agfx_rastport *rp, s16 x, s16 y)
{
    if (rp->area_n + 2 > AGFX_MAX_AREA) { stats.unsupported++; return; }
    rp->area[rp->area_n++] = x;
    rp->area[rp->area_n++] = y;
}

/* Even-odd scanline fill: the same coverage the Amiga area fill produces for a simple
 * non self-intersecting outline. */
void agfx_area_end(agfx_rastport *rp)
{
    s32 n = rp->area_n / 2;
    s32 i, j, y, ymin, ymax;

    stats.areas++;
    if (n < 3) return;
    ymin = ymax = rp->area[1];
    for (i = 1; i < n; i++) {
        s16 v = rp->area[i * 2 + 1];
        if (v < ymin) ymin = v;
        if (v > ymax) ymax = v;
    }
    if (ymin < 0) ymin = 0;
    if (ymax >= rp->bm->height) ymax = rp->bm->height - 1;

    for (y = ymin; y <= ymax; y++) {
        s32 xs[AGFX_MAX_AREA];
        s32 nx = 0;
        s32 scan = y * 2 + 1;      /* sample at the pixel centre */

        for (i = 0; i < n; i++) {
            s32 j2 = (i + 1) % n;
            s32 ay = rp->area[i * 2 + 1], by = rp->area[j2 * 2 + 1];
            s32 ax = rp->area[i * 2],     bx = rp->area[j2 * 2];
            if (ay == by) continue;                     /* horizontal edge */
            if ((scan >= ay * 2 && scan < by * 2) || (scan >= by * 2 && scan < ay * 2)) {
                /* x at this scanline, kept in half-pixel units to stay exact */
                s32 x = ax * 2 + (s32)(((long)(bx - ax) * (scan - ay * 2)) / (by - ay));
                if (nx < AGFX_MAX_AREA) xs[nx++] = x;
            }
        }
        for (i = 1; i < nx; i++) {                      /* insertion sort */
            s32 v = xs[i];
            for (j = i - 1; j >= 0 && xs[j] > v; j--) xs[j + 1] = xs[j];
            xs[j + 1] = v;
        }
        for (i = 0; i + 1 < nx; i += 2) {
            s32 x1 = (xs[i] + 1) / 2, x2 = (xs[i + 1] - 1) / 2;
            if (x2 >= x1) hspan(rp, x1, x2, y);
        }
    }
    rp->area_n = 0;
}

/* ---------------------------------------------------------------- text ---- */

static s32 font_bpr(const agfx_font *f)
{
    return f->bytes_per_row ? (s32)f->bytes_per_row : ((s32)f->width + 7) / 8;
}

s16 agfx_text(agfx_rastport *rp, const char *s, s16 len)
{
    const agfx_font *f = rp->font;
    s32 glyph_bytes;
    s16 i;

    if (f == NULLP || f->bitmap == NULLP || len <= 0) { stats.unsupported++; return 0; }
    glyph_bytes = font_bpr(f) * (s32)f->height;
    stats.texts++;
    for (i = 0; i < len; i++) {
        u8 ch = (u8)s[i];
        const u8 *glyph;
        s32 gx, gy;

        if (ch >= f->count) { rp->cp_x = (s16)(rp->cp_x + f->width); continue; }
        glyph = f->bitmap + (u32)ch * (u32)glyph_bytes;
        for (gy = 0; gy < (s32)f->height; gy++) {
            const u8 *row = glyph + gy * font_bpr(f);
            for (gx = 0; gx < (s32)f->width; gx++) {
                u8 bit = (u8)((row[gx >> 3] >> (7 - (gx & 7))) & 1);
                if (bit) put_pixel(rp, rp->cp_x + gx, rp->cp_y + gy);
                else if (rp->drawmode == AGFX_JAM1)
                    put_pen_pixel(rp, rp->cp_x + gx, rp->cp_y + gy, rp->bg_pen);
            }
        }
        rp->cp_x = (s16)(rp->cp_x + f->width);
    }
    return (s16)(len * (s16)f->width);
}

s16 agfx_text_length(const agfx_rastport *rp, const char *s, s16 len)
{
    (void)s;
    if (rp->font == NULLP) { return 0; }
    if (len < 0) {
        len = 0;
        while (s[len] != '\0') len++;
    }
    return (s16)(len * (s16)rp->font->width);
}

/* --------------------------------------------------------------- blits ---- */

u8 agfx_minterm(u8 minterm, u8 a, u8 b, u8 c)
{
    u32 idx = ((u32)(a & 1) << 2) | ((u32)(b & 1) << 1) | (u32)(c & 1);
    return (u8)((minterm >> idx) & 1);
}

/* One pen value through the minterm: bit i of the pen is plane i. */
static u8 blit_pen(u8 minterm, u8 a, u8 b, u8 c)
{
    u8 out = 0;
    u8 bit;

    for (bit = 0; bit < 8; bit++) {
        u8 m = (u8)(1u << bit);
        if (agfx_minterm(minterm, (u8)((a & m) ? 1 : 0), (u8)((b & m) ? 1 : 0),
                         (u8)((c & m) ? 1 : 0)))
            out |= m;
    }
    return out;
}

void agfx_blt_bitmap(agfx_rastport *rp, const agfx_bitmap *src, s16 dx, s16 dy,
                     s16 w, s16 h, u8 minterm, s16 sx, s16 sy)
{
    agfx_bitmap *dst = rp->bm;
    s32 y;

    stats.blits++;
    rp->minterm = minterm;
    for (y = 0; y < h; y++) {
        s32 syy = sy + y, dyy = dy + y;
        s32 x;
        if (syy < 0 || syy >= src->height) continue;
        if (dyy < 0 || dyy >= dst->height) continue;
        for (x = 0; x < w; x++) {
            s32 sxx = sx + x, dxx = dx + x;
            u8 a, b;
            if (sxx < 0 || sxx >= src->width) continue;
            if (dxx < 0 || dxx >= dst->width) continue;
            a = src->pixels[syy * src->stride + sxx];
            b = dst->pixels[dyy * dst->stride + dxx];
            dst->pixels[dyy * dst->stride + dxx] = blit_pen(minterm, a, b, 0xFF);
        }
    }
}

void agfx_blt_mask(agfx_rastport *rp, const agfx_bitmap *src, s16 dx, s16 dy,
                   s16 w, s16 h, u8 minterm, const agfx_bitmap *mask, s16 mx, s16 my)
{
    agfx_bitmap *dst = rp->bm;
    s32 y;

    stats.blits++;
    rp->minterm = minterm;
    for (y = 0; y < h; y++) {
        s32 syy = my + y, dyy = dy + y;
        s32 x;
        if (syy < 0 || syy >= mask->height) continue;
        if (dyy < 0 || dyy >= dst->height) continue;
        for (x = 0; x < w; x++) {
            s32 sxx = mx + x, dxx = dx + x;
            u8 a, b, c;
            if (sxx < 0 || sxx >= mask->width) continue;
            if (dxx < 0 || dxx >= dst->width) continue;
            c = mask->pixels[syy * mask->stride + sxx] ? 0xFF : 0x00;
            a = src->pixels[syy * src->stride + sxx];
            b = dst->pixels[dyy * dst->stride + dxx];
            dst->pixels[dyy * dst->stride + dxx] = blit_pen(minterm, a, b, c);
        }
    }
}

/* --------------------------------------------------------- no-op waits ---- */

void agfx_own_blitter(void)   { }
void agfx_disown_blitter(void){ }
void agfx_wait_blit(void)     { }
void agfx_wait_tof(void)      { }
