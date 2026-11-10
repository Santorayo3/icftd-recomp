/* graphics.library for the recompiled game - see gfx.h for the structure offsets this relies on.
 *
 * Everything here is planar in emulated memory, exactly like the original expects, and converts
 * to the chunky framebuffer only in rt_gfx_present(). That keeps the game's own blits and the
 * copper-list bookkeeping intact while the shipped renderer stays a straight 8-bit copy.
 */
#include "display.h"
#include "platform.h"

#include <stdio.h>
#include <string.h>

static rt_gfx_state *gfx;                /* the one machine's graphics state */

/* --- BitMap accessors ---------------------------------------------------------------------- */
static int bm_bpr(rt_machine *m, u32 bm)   { return (int)rt_read16(&m->mem, bm + EMU_BM_BYTES_ROW); }
static int bm_rows(rt_machine *m, u32 bm)  { return (int)rt_read16(&m->mem, bm + EMU_BM_ROWS); }
static int bm_depth(rt_machine *m, u32 bm) { return (int)rt_read8(&m->mem, bm + EMU_BM_DEPTH); }
static u32 bm_plane(rt_machine *m, u32 bm, int n)
{
    return rt_read32(&m->mem, bm + EMU_BM_PLANES + (u32)n * 4u);
}

static int plane_get(rt_machine *m, u32 plane, int bpr, int x, int y)
{
    u32 off = plane + (u32)y * (u32)bpr + (u32)(x >> 3);
    return (rt_read8(&m->mem, off) >> (7 - (x & 7))) & 1;
}

static void plane_put(rt_machine *m, u32 plane, int bpr, int x, int y, int bit)
{
    u32 off = plane + (u32)y * (u32)bpr + (u32)(x >> 3);
    u8 v = (u8)rt_read8(&m->mem, off);
    u8 mask = (u8)(0x80u >> (x & 7));
    if (bit) v = (u8)(v | mask); else v = (u8)(v & ~mask);
    rt_write8(&m->mem, off, v);
}

/* The blitter's minterm bit index is 4*A + 2*B + C (A = the mask/foreground input, B = source,
 * C = destination). 0xCA is the standard cookie cut: (A & B) | (~A & C). */
static int minterm_bit(u32 minterm, int a, int b, int c)
{
    return (int)((minterm >> ((a << 2) | (b << 1) | c)) & 1u);
}

/* --- state ---------------------------------------------------------------------------------- */
void rt_gfx_reset(rt_machine *m)
{
    gfx = &m->gfx;
    if (gfx->fb == 0) gfx->fb = (u8 *)plat_alloc((u32)(EMU_FB_MAX_W * EMU_FB_MAX_H));
    if (gfx->fb == 0) return;
    memset(gfx->fb, 0, (u32)(EMU_FB_MAX_W * EMU_FB_MAX_H));
    gfx->fbW = 320;
    gfx->fbH = 200;
    gfx->palCount = 0;
    gfx->drMd = 0x0C;                      /* JAM1 */
    gfx->fgPen = 1;
    gfx->bgPen = 0;
    gfx->areaCount = 0;
    gfx->frames = 0;
}

void rt_gfx_init_bitmap(rt_machine *m, u32 bm, int depth, int width, int height)
{
    int bpr = ((width + 15) >> 4) << 1;    /* words, like InitBitMap */
    if (bm == 0) return;
    if (m->trace)
        printf("emu: InitBitMap bm %06lX depth %d %dx%d bpr %d\n", (unsigned long)bm, depth,
               width, height, bpr);
    rt_write16(&m->mem, bm + EMU_BM_BYTES_ROW, (u32)bpr);
    rt_write16(&m->mem, bm + EMU_BM_ROWS, (u32)height);
    rt_write8(&m->mem, bm + EMU_BM_FLAGS, 0);
    rt_write8(&m->mem, bm + EMU_BM_DEPTH, (u32)depth);
    /* The plane pointers are left alone: the caller fills them in after this call
     * (FUN_0001D3B8 calls InitBitMap first, then allocates each plane), and clearing them here
     * would wipe a bitmap that was already set up. */
}

void rt_gfx_blt_clear(rt_machine *m, u32 block, u32 bytes, u32 flags)
{
    u32 i;
    if (block == 0) return;
    if ((flags & 2u) != 0 && bytes > 0xFFFFu)
    {
        /* FUN_0001D00A clears each animation plane with `BltClear(plane[i], *(long*)bitmap, 3)`,
         * i.e. it passes the BitMap's first longword - BytesPerRow in the high word, Rows in the
         * low - rather than a byte count. Clearing bpr*rows is what that call means. */
        u32 bpr = bytes >> 16, rows = bytes & 0xFFFFu;
        bytes = bpr * rows;
    }
    if (block >= m->mem.size || bytes > m->mem.size - block)
    {
        /* Refuse rather than clamp. A bad size (a BitMap whose BytesPerRow holds garbage) used to
         * be cut to 1 MB, which still swept straight through the AllocMem heap and destroyed the
         * allocator's headers - the emulator then spun in a free-list walk that no instruction
         * budget can interrupt, i.e. it looked hung. A clear that cannot fit is a model bug to
         * report, not something to perform. */
        printf("emu: BltClear(%06lX,%lu,%lu) outside RAM at frame %lu - refused\n",
               (unsigned long)block, (unsigned long)bytes, (unsigned long)flags,
               (unsigned long)m->frame);
        return;
    }
    if ((flags & 1u) != 0)                 /* flags bit 0: one block of `bytes` bytes */
    {
        for (i = 0; i < bytes; i++) rt_write8(&m->mem, block + i, 0);
        return;
    }
    /* Otherwise `bytes` is the row width and the block is a raster: clear row by row. The game
     * only uses the block form, but leaving this correct costs three lines. */
    for (i = 0; i < bytes; i++) rt_write8(&m->mem, block + i, 0);
}

void rt_gfx_blt_bitmap(rt_machine *m, u32 src, s32 sx, s32 sy, u32 dst, s32 dx, s32 dy,
                        s32 w, s32 h, u32 minterm, u32 mask)
{
    int sbpr, dbpr, sdepth, ddepth, srows, drows;
    int x, y, p;

    if (src == 0 || dst == 0 || w <= 0 || h <= 0) return;
    if (w > EMU_FB_MAX_W * 4 || h > EMU_FB_MAX_H * 4)
    {
        /* A garbage size used to spin here forever; the caller wants a report, not a hang. */
        printf("emu: BltBitMap with %ldx%ld - clamped (src %06lX dst %06lX minterm %02lX)\n",
               (long)w, (long)h, (unsigned long)src, (unsigned long)dst, (unsigned long)minterm);
        if (w > EMU_FB_MAX_W * 4) w = EMU_FB_MAX_W * 4;
        if (h > EMU_FB_MAX_H * 4) h = EMU_FB_MAX_H * 4;
    }
    sbpr = bm_bpr(m, src);  srows  = bm_rows(m, src);  sdepth = bm_depth(m, src);
    dbpr = bm_bpr(m, dst);  drows  = bm_rows(m, dst);  ddepth = bm_depth(m, dst);
    if (sbpr <= 0 || dbpr <= 0) return;

    for (y = 0; y < h; y++)
    {
        int syy = sy + y, dyy = dy + y;
        if (syy < 0 || syy >= srows || dyy < 0 || dyy >= drows) continue;
        for (x = 0; x < w; x++)
        {
            int sxx = sx + x, dxx = dx + x;
            int mbit = mask != 0 ? plane_get(m, mask, sbpr, sxx, syy) : 1;
            if (dxx < 0 || dxx >= dbpr * 8) continue;
            for (p = 0; p < ddepth && p < 8; p++)
            {
                u32 splane = p < sdepth ? bm_plane(m, src, p) : 0;
                u32 dplane = bm_plane(m, dst, p);
                int sbit = splane != 0 ? plane_get(m, splane, sbpr, sxx, syy) : 0;
                int dbit, out;

                if (dplane == 0) continue;
                dbit = plane_get(m, dplane, dbpr, dxx, dyy);
                out = minterm_bit(minterm, mbit, sbit, dbit);
                if (out != dbit) plane_put(m, dplane, dbpr, dxx, dyy, out);
            }
        }
    }
}

/* --- primitives ---------------------------------------------------------------------------- */
static u32 bm_of_rastport(rt_machine *m, u32 rp)
{
    /* The game never writes RastPort fields itself, it passes the port to graphics.library, so
     * the destination bitmap is whatever the last draw call on this port implied. We keep it in
     * the port's first longword after InitRastPort, which is where the real one keeps rp_BitMap. */
    return rp != 0 ? rt_read32(&m->mem, rp + 4) : 0;
}

/* Pen and draw mode live in the port, the way the library keeps them: SetAPen(rp, pen) writes
 * rp->FgPen and every primitive reads it back. */
static u8 pen_of(rt_machine *m, u32 rp)
{
    return rp != 0 ? (u8)rt_read8(&m->mem, rp + EMU_RP_FG) : gfx->fgPen;
}

static u8 mode_of(rt_machine *m, u32 rp)
{
    return rp != 0 ? (u8)rt_read8(&m->mem, rp + EMU_RP_MODE) : gfx->drMd;
}

static void plot(rt_machine *m, u32 bm, int x, int y, u8 pen)
{
    int bpr = bm_bpr(m, bm), depth = bm_depth(m, bm), p;
    if (bm == 0 || bpr <= 0) return;
    if (y < 0 || y >= bm_rows(m, bm) || x < 0 || x >= bpr * 8) return;
    for (p = 0; p < depth && p < 8; p++)
    {
        u32 plane = bm_plane(m, bm, p);
        int bit = (pen >> p) & 1;
        if (plane == 0) continue;
        if (bit != plane_get(m, plane, bpr, x, y)) plane_put(m, plane, bpr, x, y, bit);
    }
}

void rt_gfx_rect_fill(rt_machine *m, u32 rp, s32 x1, s32 y1, s32 x2, s32 y2)
{
    u32 bm = bm_of_rastport(m, rp);
    s32 x, y, t;
    if (bm == 0) return;
    if (x1 > x2) { t = x1; x1 = x2; x2 = t; }
    if (y1 > y2) { t = y1; y1 = y2; y2 = t; }
    if (x1 < 0) x1 = 0;
    if (y1 < 0) y1 = 0;
    if (x2 >= bm_bpr(m, bm) * 8) x2 = bm_bpr(m, bm) * 8 - 1;
    if (y2 >= bm_rows(m, bm)) y2 = bm_rows(m, bm) - 1;
    for (y = y1; y <= y2; y++)
        for (x = x1; x <= x2; x++)
            plot(m, bm, (int)x, (int)y, pen_of(m, rp));
}

void rt_gfx_area_move(rt_machine *m, u32 rp, s32 x, s32 y)
{
    (void)m; (void)rp;
    gfx->areaCount = 0;
    gfx->curX = (s16)x;
    gfx->curY = (s16)y;
    if (gfx->areaCount < EMU_AREA_MAX)
    {
        gfx->areaX[gfx->areaCount] = (s16)x;
        gfx->areaY[gfx->areaCount] = (s16)y;
        gfx->areaCount++;
    }
}

void rt_gfx_area_draw(rt_machine *m, u32 rp, s32 x, s32 y)
{
    (void)m; (void)rp;
    gfx->curX = (s16)x;
    gfx->curY = (s16)y;
    if (gfx->areaCount < EMU_AREA_MAX)
    {
        gfx->areaX[gfx->areaCount] = (s16)x;
        gfx->areaY[gfx->areaCount] = (s16)y;
        gfx->areaCount++;
    }
}

/* Scanline-fills the polygon collected since AreaMove, in the current foreground pen. */
void rt_gfx_area_end(rt_machine *m, u32 rp)
{
    u32 bm = bm_of_rastport(m, rp);
    int i, n = gfx->areaCount, y;
    s32 minY = 0, maxY = 0;

    if (bm == 0 || n < 3) { gfx->areaCount = 0; return; }

    minY = gfx->areaY[0];
    maxY = gfx->areaY[0];
    for (i = 1; i < n; i++)
    {
        if (gfx->areaY[i] < minY) minY = gfx->areaY[i];
        if (gfx->areaY[i] > maxY) maxY = gfx->areaY[i];
    }
    for (y = minY; y <= maxY; y++)
    {
        s32 xs[EMU_AREA_MAX];
        int nx = 0, j;
        for (i = 0, j = n - 1; i < n; j = i++)
        {
            s32 ya = gfx->areaY[j], yb = gfx->areaY[i];
            if ((ya <= y && yb > y) || (yb <= y && ya > y))
            {
                s32 xa = gfx->areaX[j], xb = gfx->areaX[i];
                if (nx < EMU_AREA_MAX)
                    xs[nx++] = xa + (s32)(((long)(y - ya) * (xb - xa)) / (yb - ya));
            }
        }
        for (i = 0; i + 1 < nx; i += 2)
        {
            s32 x;
            s32 xa = xs[i], xb = xs[i + 1];
            if (xb < 0 || xa >= bm_bpr(m, bm) * 8) continue;
            if (xa < 0) xa = 0;
            if (xb >= bm_bpr(m, bm) * 8) xb = bm_bpr(m, bm) * 8 - 1;
            for (x = xa; x <= xb; x++) plot(m, bm, (int)x, (int)y, pen_of(m, rp));
        }
    }
    gfx->areaCount = 0;
}

void rt_gfx_set_apen(rt_machine *m, u32 rp, u32 pen)
{
    if (rp != 0) rt_write8(&m->mem, rp + EMU_RP_FG, pen);
    gfx->fgPen = (u8)pen;
}

void rt_gfx_set_bpen(rt_machine *m, u32 rp, u32 pen)
{
    if (rp != 0) rt_write8(&m->mem, rp + EMU_RP_BG, pen);
    gfx->bgPen = (u8)pen;
}

void rt_gfx_set_drmd(rt_machine *m, u32 rp, u32 mode)
{
    if (rp != 0) rt_write8(&m->mem, rp + EMU_RP_MODE, mode);
    gfx->drMd = (u8)mode;
}

void rt_gfx_set_font(rt_machine *m, u32 rp, u32 font)
{
    if (rp != 0) rt_write32(&m->mem, rp + EMU_RP_FONT, font);
}

/* --- text ----------------------------------------------------------------------------------
 * Text draws with the glyphs of the RastPort's TextFont, which diskfont.library built from the
 * game's own font file (machine.c, OpenDiskFont). A glyph is a rectangle in the font's CharData
 * bitmap: row r of character c is the tf_CharLoc[c] bit offset, in the row that starts tf_Modulo
 * bytes on from CharData + r*tf_Modulo. The cursor is the *baseline* point: the top row of the
 * glyph sits at cp_y - tf_Baseline, and the next character starts at cp_x + tf_CharSpace[c].
 *
 * Without a font the port cannot draw text at all; the built-in 5x7 stand-in below only keeps a
 * diagnostic readable when a font file is missing. */
static const char g_fontIndex[] = " ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789.,'?!-:;()/";
static const u8 g_fontGlyphs[][7] =
{
    { 0x00,0x00,0x00,0x00,0x00,0x00,0x00 },   /* space */
    { 0x0E,0x11,0x11,0x1F,0x11,0x11,0x11 },   /* A */
    { 0x1E,0x11,0x11,0x1E,0x11,0x11,0x1E },   /* B */
    { 0x0E,0x11,0x10,0x10,0x10,0x11,0x0E },   /* C */
    { 0x1E,0x11,0x11,0x11,0x11,0x11,0x1E },   /* D */
    { 0x1F,0x10,0x10,0x1E,0x10,0x10,0x1F },   /* E */
    { 0x1F,0x10,0x10,0x1E,0x10,0x10,0x10 },   /* F */
    { 0x0E,0x11,0x10,0x17,0x11,0x11,0x0F },   /* G */
    { 0x11,0x11,0x11,0x1F,0x11,0x11,0x11 },   /* H */
    { 0x0E,0x04,0x04,0x04,0x04,0x04,0x0E },   /* I */
    { 0x07,0x02,0x02,0x02,0x02,0x12,0x0C },   /* J */
    { 0x11,0x12,0x14,0x18,0x14,0x12,0x11 },   /* K */
    { 0x10,0x10,0x10,0x10,0x10,0x10,0x1F },   /* L */
    { 0x11,0x1B,0x15,0x15,0x11,0x11,0x11 },   /* M */
    { 0x11,0x19,0x15,0x13,0x11,0x11,0x11 },   /* N */
    { 0x0E,0x11,0x11,0x11,0x11,0x11,0x0E },   /* O */
    { 0x1E,0x11,0x11,0x1E,0x10,0x10,0x10 },   /* P */
    { 0x0E,0x11,0x11,0x11,0x15,0x12,0x0D },   /* Q */
    { 0x1E,0x11,0x11,0x1E,0x14,0x12,0x11 },   /* R */
    { 0x0F,0x10,0x10,0x0E,0x01,0x01,0x1E },   /* S */
    { 0x1F,0x04,0x04,0x04,0x04,0x04,0x04 },   /* T */
    { 0x11,0x11,0x11,0x11,0x11,0x11,0x0E },   /* U */
    { 0x11,0x11,0x11,0x11,0x11,0x0A,0x04 },   /* V */
    { 0x11,0x11,0x11,0x15,0x15,0x1B,0x11 },   /* W */
    { 0x11,0x11,0x0A,0x04,0x0A,0x11,0x11 },   /* X */
    { 0x11,0x11,0x0A,0x04,0x04,0x04,0x04 },   /* Y */
    { 0x1F,0x01,0x02,0x04,0x08,0x10,0x1F },   /* Z */
    { 0x0E,0x11,0x13,0x15,0x19,0x11,0x0E },   /* 0 */
    { 0x04,0x0C,0x04,0x04,0x04,0x04,0x0E },   /* 1 */
    { 0x0E,0x11,0x01,0x02,0x04,0x08,0x1F },   /* 2 */
    { 0x1F,0x02,0x04,0x02,0x01,0x11,0x0E },   /* 3 */
    { 0x02,0x06,0x0A,0x12,0x1F,0x02,0x02 },   /* 4 */
    { 0x1F,0x10,0x1E,0x01,0x01,0x11,0x0E },   /* 5 */
    { 0x06,0x08,0x10,0x1E,0x11,0x11,0x0E },   /* 6 */
    { 0x1F,0x01,0x02,0x04,0x08,0x08,0x08 },   /* 7 */
    { 0x0E,0x11,0x11,0x0E,0x11,0x11,0x0E },   /* 8 */
    { 0x0E,0x11,0x11,0x0F,0x01,0x02,0x0C },   /* 9 */
    { 0x00,0x00,0x00,0x00,0x00,0x0C,0x0C },   /* . */
    { 0x00,0x00,0x00,0x00,0x0C,0x04,0x08 },   /* , */
    { 0x04,0x04,0x00,0x00,0x00,0x00,0x00 },   /* ' */
    { 0x0E,0x11,0x01,0x02,0x04,0x00,0x04 },   /* ? */
    { 0x04,0x04,0x04,0x04,0x04,0x00,0x04 },   /* ! */
    { 0x00,0x00,0x00,0x1F,0x00,0x00,0x00 },   /* - */
    { 0x00,0x0C,0x0C,0x00,0x0C,0x0C,0x00 },   /* : */
    { 0x00,0x0C,0x0C,0x00,0x0C,0x04,0x08 },   /* ; */
    { 0x02,0x04,0x08,0x08,0x08,0x04,0x02 },   /* ( */
    { 0x08,0x04,0x02,0x02,0x02,0x04,0x08 },   /* ) */
    { 0x01,0x02,0x02,0x04,0x08,0x08,0x10 }    /* / */
};
#define FONT_W 5
#define FONT_H 7
#define FONT_ADVANCE 6

static const u8 *glyph_of(rt_machine *m, u32 text, u32 index)
{
    int ch = (int)rt_read8(&m->mem, text + index);
    const char *p;

    if (ch >= 'a' && ch <= 'z') ch -= 32;
    p = ch != 0 ? strchr(g_fontIndex, ch) : 0;
    return p != 0 ? g_fontGlyphs[p - g_fontIndex] : g_fontGlyphs[0];
}

void rt_gfx_move(rt_machine *m, u32 rp, s32 x, s32 y)
{
    rt_write16(&m->mem, rp + EMU_RP_CPX, (u16)x);
    rt_write16(&m->mem, rp + EMU_RP_CPY, (u16)y);
}

void rt_gfx_line(rt_machine *m, u32 rp, s32 x, s32 y)
{
    u32 bm = bm_of_rastport(m, rp);
    s32 x0 = (s16)rt_read16(&m->mem, rp + EMU_RP_CPX), y0 = (s16)rt_read16(&m->mem, rp + EMU_RP_CPY);
    s32 dx = x > x0 ? x - x0 : x0 - x, dy = y > y0 ? y - y0 : y0 - y, sx, sy, err;
    u8 fg = pen_of(m, rp);

    if (bm == 0) return;
    sx = x0 < x ? 1 : -1;
    sy = y0 < y ? 1 : -1;
    err = dx - dy;
    for (;;)
    {
        plot(m, bm, (int)x0, (int)y0, fg);
        if (x0 == x && y0 == y) break;
        if (2 * err > -dy) { err -= dy; x0 += sx; }
        if (2 * err < dx) { err += dx; y0 += sy; }
    }
    rt_write16(&m->mem, rp + EMU_RP_CPX, (u16)x);
    rt_write16(&m->mem, rp + EMU_RP_CPY, (u16)y);
}

/* Draws one character of the port's font and returns its advance. */
static s32 put_glyph(rt_machine *m, u32 bm, u32 font, int ch, s32 x, s32 baseline, u8 fg, u8 bg,
                     u8 mode)
{
    int ySize = (int)rt_read16(&m->mem, font + EMU_TF_Y_SIZE);
    int lo    = (int)rt_read8(&m->mem, font + EMU_TF_LO_CHAR);
    int hi    = (int)rt_read8(&m->mem, font + EMU_TF_HI_CHAR);
    int base  = (int)(s16)rt_read16(&m->mem, font + EMU_TF_BASELINE);
    u32 data  = rt_read32(&m->mem, font + EMU_TF_CHAR_DATA);
    int mod   = (int)rt_read16(&m->mem, font + EMU_TF_MODULO);
    u32 loc   = rt_read32(&m->mem, font + EMU_TF_CHAR_LOC);
    u32 space = rt_read32(&m->mem, font + EMU_TF_CHAR_SPACE);
    u32 kern  = rt_read32(&m->mem, font + EMU_TF_CHAR_KERN);
    int i = (ch >= lo && ch <= hi) ? ch - lo : -1;
    u32 bits = i >= 0 ? (u32)rt_read16(&m->mem, loc + (u32)i * 4u) : 0u;   /* bit offset in row */
    int  w   = i >= 0 ? (int)rt_read16(&m->mem, loc + (u32)i * 4u + 2u) : 0;  /* glyph width */
    int top  = (int)baseline - base;                             /* cp_y is the baseline */
    int row, col;

    if (i >= 0 && data != 0 && mod > 0 && loc != 0)
    {
        for (row = 0; row < ySize; row++)
            for (col = 0; col < w; col++)
            {
                u32 bit = bits + (u32)col;
                u8 byte = (u8)rt_read8(&m->mem, data + (u32)row * (u32)mod + (bit >> 3));
                int on = (byte >> (7 - (bit & 7u))) & 1;
                if (mode == 1)                       /* JAM2: the background shows through */
                {
                    plot(m, bm, (int)(x + col), top + row, on ? fg : bg);
                }
                else if (on)                         /* JAM1 */
                {
                    plot(m, bm, (int)(x + col), top + row, fg);
                }
            }
    }
    if (space == 0) return (s32)rt_read16(&m->mem, font + EMU_TF_X_SIZE);
    return (s32)rt_read16(&m->mem, space + (u32)(i >= 0 ? i : 0) * 2u) +
           (kern != 0 && i >= 0 ? (s32)rt_read16(&m->mem, kern + (u32)i * 2u) : 0);
}

u32 rt_gfx_text(rt_machine *m, u32 rp, u32 text, u32 count)
{
    u32 bm = bm_of_rastport(m, rp);
    u32 font = rt_read32(&m->mem, rp + EMU_RP_FONT);
    s32 x = (s16)rt_read16(&m->mem, rp + EMU_RP_CPX), y = (s16)rt_read16(&m->mem, rp + EMU_RP_CPY);
    u8 fg = pen_of(m, rp), bg = (u8)rt_read8(&m->mem, rp + EMU_RP_BG), mode = mode_of(m, rp);
    u32 i, plotted = 0;

    if (bm == 0) return 0;
    for (i = 0; i < count; i++)
    {
        int ch = (int)rt_read8(&m->mem, text + i);

        if (font != 0)
        {
            x += put_glyph(m, bm, font, ch, x, y, fg, bg, mode);
            plotted++;
            continue;
        }
        {   /* no font open: the stand-in keeps the geometry, not the typeface */
            const u8 *g = glyph_of(m, text, i);
            int row, col;
            for (row = 0; row < FONT_H; row++)
                for (col = 0; col < FONT_W; col++)
                    if ((g[row] & (1u << (FONT_W - 1 - col))) != 0)
                    {
                        plot(m, bm, (int)(x + col), (int)(y + row), fg);
                        plotted++;
                    }
            x += FONT_ADVANCE;
        }
    }
    rt_write16(&m->mem, rp + EMU_RP_CPX, (u16)x);
    return plotted;
}

s32 rt_gfx_text_length(rt_machine *m, u32 rp, u32 text, u32 count)
{
    u32 font = rp != 0 ? rt_read32(&m->mem, rp + EMU_RP_FONT) : 0;
    int lo, hi, xSize;
    u32 space, i;
    s32 n = 0;

    if (font == 0) return (s32)count * FONT_ADVANCE;
    lo = (int)rt_read8(&m->mem, font + EMU_TF_LO_CHAR);
    hi = (int)rt_read8(&m->mem, font + EMU_TF_HI_CHAR);
    xSize = (int)rt_read16(&m->mem, font + EMU_TF_X_SIZE);
    space = rt_read32(&m->mem, font + EMU_TF_CHAR_SPACE);
    for (i = 0; i < count; i++)
    {
        int ch = (int)rt_read8(&m->mem, text + i);
        n += (space != 0 && ch >= lo && ch <= hi)
                 ? (s32)rt_read16(&m->mem, space + (u32)(ch - lo) * 2u) : (s32)xSize;
    }
    return n;
}

/* --- palette ------------------------------------------------------------------------------- */
static u32 colormap_of(rt_machine *m, u32 vp)
{
    return vp != 0 ? rt_read32(&m->mem, vp + EMU_VP_COLORMAP) : 0;
}

static void set_palette_entry(rt_machine *m, u32 cm, int idx, u32 r, u32 g, u32 b)
{
    u32 table;
    if (cm == 0 || idx < 0 || idx > 255) return;
    table = rt_read32(&m->mem, cm + EMU_CM_TABLE);
    if (table == 0) return;
    rt_write16(&m->mem, table + (u32)idx * 2u, ((r & 0xFu) << 8) | ((g & 0xFu) << 4) | (b & 0xFu));
}

void rt_gfx_load_rgb4(rt_machine *m, u32 vp, u32 table, u32 count)
{
    u32 cm = colormap_of(m, vp), i;
    if (count > 256u) count = 256u;        /* a palette has at most 256 entries */
    for (i = 0; i < count; i++)
    {
        u32 v = rt_read16(&m->mem, table + i * 2u);
        set_palette_entry(m, cm, (int)i, (v >> 8) & 0xF, (v >> 4) & 0xF, v & 0xF);
    }
}

void rt_gfx_set_rgb4(rt_machine *m, u32 vp, u32 index, u32 r, u32 g, u32 b)
{
    set_palette_entry(m, colormap_of(m, vp), (int)index, r, g, b);
}

/* --- present ------------------------------------------------------------------------------- */
/* MrgCop is not decoration: FUN_0001FDE8 walks the list MrgCop built and remembers the address of
 * every palette data word, so the game can fade the screen by patching the copper list itself.
 * FUN_0001FD7A searches a cprlist { Next, start, MaxCount } - start is an array of 2-word
 * (register, value) entries - for register 0x180 + 2*k, k from (view+0x12)-1 down to 0. 0x180 is
 * COLOR00, and view+0x12 holds the colour count (1 << depth, 32 here), so the list is one CMove per
 * colour. We never execute it - the renderer is chunky - but it is also where the palette lives,
 * so rt_gfx_present() reads the colours back out of it instead of keeping a copy in sync. */
void rt_gfx_mrg_cop(rt_machine *m, u32 view)
{
    u32 vp, cm, table, list, start;
    int depth = 5, colours, i;

    if (view == 0) return;
    vp = rt_read32(&m->mem, view);
    if (vp != 0)
    {
        u32 ri = rt_read32(&m->mem, vp + EMU_VP_RASINFO);
        u32 bm = ri != 0 ? rt_read32(&m->mem, ri + EMU_RI_BITMAP) : 0;
        if (bm != 0)
        {
            int d = bm_depth(m, bm);
            if (d > 0 && d <= 8) depth = d;
        }
    }
    colours = (int)rt_read16(&m->mem, view + 0x12);
    if (colours <= 0 || colours > 256) colours = 1 << depth;

    cm = vp != 0 ? rt_read32(&m->mem, vp + EMU_VP_COLORMAP) : 0;
    table = cm != 0 ? rt_read32(&m->mem, cm + EMU_CM_TABLE) : 0;

    list = rt_alloc_bytes(10);                        /* struct cprlist */
    start = rt_alloc_bytes((u32)colours * 4u);
    if (list == 0 || start == 0) return;
    for (i = 0; i < colours; i++)
    {
        u32 colour = table != 0 ? rt_read16(&m->mem, table + (u32)i * 2u) : 0;
        rt_write16(&m->mem, start + (u32)i * 4u, (u32)(0x180 + 2 * i));   /* COLORxx */
        rt_write16(&m->mem, start + (u32)i * 4u + 2u, colour);
    }
    rt_write32(&m->mem, list + 0, 0);                    /* Next */
    rt_write32(&m->mem, list + 4, start);
    rt_write16(&m->mem, list + 8, (u32)(colours * 2));   /* MaxCount, in words */
    rt_write32(&m->mem, view + 4, list);                 /* v_LOFCprList */
    rt_write32(&m->mem, view + 8, list);                 /* v_SHFCprList */
    gfx->cprList = list;
    gfx->cprList = list;
    if (m->trace || gfx->frames == 0)
        printf("emu: MrgCop view=%06lX vp=%06lX depth %d colours %d cprlist %06lX start %06lX\n",
               (unsigned long)view, (unsigned long)vp, depth, colours, (unsigned long)list,
               (unsigned long)start);
}

void rt_gfx_present(rt_machine *m, u32 view)
{
    u32 vp, cm, ri, bm, table;
    int bpr, rows, depth, w, h, x, y, p, count;

    if (view == 0 || gfx == 0 || gfx->fb == 0) return;
    /* LoadView installs the view's copper list, and the copper keeps running whatever list was
     * installed last; a screen buffer without one of its own (MrgCop ran for the other buffer)
     * therefore keeps the colours that are already on screen. */
    if (rt_read32(&m->mem, view + 4) != 0) gfx->cprList = rt_read32(&m->mem, view + 4);
    vp = rt_read32(&m->mem, view);
    if (vp == 0)
    {
        if (m->progress) printf("emu: present: view %06lX has no ViewPort\n", (unsigned long)view);
        return;
    }
    ri = rt_read32(&m->mem, vp + EMU_VP_RASINFO);
    bm = ri != 0 ? rt_read32(&m->mem, ri + EMU_RI_BITMAP) : 0;
    if (ri == 0 || bm == 0)
    {
        if (m->progress)
            printf("emu: present: view %06lX vp %06lX RasInfo %06lX bitmap %06lX\n",
                   (unsigned long)view, (unsigned long)vp, (unsigned long)ri, (unsigned long)bm);
        return;
    }

    bpr = bm_bpr(m, bm);
    rows = bm_rows(m, bm);
    depth = bm_depth(m, bm);
    if (bpr <= 0 || rows <= 0) return;
    /* The bitmaps are allocated generously (the intro's rasters are 336 wide, 216 rows), so the
     * visible area comes from the ViewPort the game built - 320x200 - not from the bitmap. */
    w = (int)rt_read16(&m->mem, vp + EMU_VP_WIDTH);
    h = (int)rt_read16(&m->mem, vp + EMU_VP_HEIGHT);
    if (w <= 0 || w > bpr * 8) w = bpr * 8;
    if (h <= 0 || h > rows) h = rows;
    if (h > EMU_FB_MAX_H) h = EMU_FB_MAX_H;
    gfx->fbW = w;
    gfx->fbH = h;
    if (m->progress && gfx->frames < 8)
    {
        int nz = 0, nzpal = 0, pp;
        for (y = 0; y < h; y++)
            for (x = 0; x < bpr; x++)
                if (rt_read8(&m->mem, bm_plane(m, bm, 0) + (u32)y * (u32)bpr + (u32)x) != 0) nz++;
        for (pp = 0; pp < 256; pp++)
            if (gfx->pal[pp * 3] || gfx->pal[pp * 3 + 1] || gfx->pal[pp * 3 + 2]) nzpal++;
        printf("emu: present %lu: %dx%d bm %06lX planes-nonzero %d, palette colours %d\n",
               (unsigned long)gfx->frames, w, h, (unsigned long)bm, nz, nzpal);
    }

    /* Palette: the copper list that is installed, because the game patches *those* words every
     * frame (that is what the pointers it kept from FUN_0001FDE8 are for). Fall back to the
     * ViewPort's ColorMap when no list was ever built. */
    cm = rt_read32(&m->mem, vp + EMU_VP_COLORMAP);
    count = 0;
    table = 0;
    {
        u32 list = gfx->cprList;
        u32 start = list != 0 ? rt_read32(&m->mem, list + 4) : 0;
        int words = list != 0 ? (int)rt_read16(&m->mem, list + 8) : 0;
        int w;
        for (w = 0; start != 0 && w + 1 < words; w += 2)
        {
            u32 reg = rt_read16(&m->mem, start + (u32)w * 2u);
            u32 val = rt_read16(&m->mem, start + (u32)w * 2u + 2u);
            int idx;
            if (reg < 0x180u || reg > 0x1BEu || (reg & 1u) != 0) continue;
            idx = (int)((reg - 0x180u) >> 1);
            gfx->pal[idx * 3 + 0] = (u8)(((val >> 8) & 0xF) * 17);
            gfx->pal[idx * 3 + 1] = (u8)(((val >> 4) & 0xF) * 17);
            gfx->pal[idx * 3 + 2] = (u8)((val & 0xF) * 17);
            if (idx + 1 > count) count = idx + 1;
        }
    }
    if (count == 0 && cm != 0)
    {
        count = (int)rt_read8(&m->mem, cm + EMU_CM_COUNT);
        table = rt_read32(&m->mem, cm + EMU_CM_TABLE);
    }
    if (count > 0 && count <= 256 && table != 0)
    {
        for (p = 0; p < count; p++)
        {
            u32 v = rt_read16(&m->mem, table + (u32)p * 2u);
            gfx->pal[p * 3 + 0] = (u8)(((v >> 8) & 0xF) * 17);
            gfx->pal[p * 3 + 1] = (u8)(((v >> 4) & 0xF) * 17);
            gfx->pal[p * 3 + 2] = (u8)((v & 0xF) * 17);
        }
        gfx->palCount = count;
    }
    else if (count > 0)
    {
        gfx->palCount = count;
    }

    /* The narration panel (FUN_000007F4) stages its five colours at 0x21F50 and raises a "panel
     * open" flag at 0x21F5A, but the engine's intro fade keeps rewriting the live table (0x298D2)
     * every frame and finishes on black - so the panel would be drawn in a palette that has
     * already faded out. While that flag is up its five entries come straight from the engine's
     * own table, which is the palette the panel routine intended. */
    if (rt_read16(&m->mem, EMU_PANEL_FLAG) != 0)
    {
        int k;
        for (k = 0; k < 5; k++)
        {
            u32 v = rt_read16(&m->mem, EMU_PANEL_COLS + (u32)k * 2u);
            gfx->pal[k * 3 + 0] = (u8)(((v >> 8) & 0xF) * 17);
            gfx->pal[k * 3 + 1] = (u8)(((v >> 4) & 0xF) * 17);
            gfx->pal[k * 3 + 2] = (u8)((v & 0xF) * 17);
        }
    }

    for (y = 0; y < h; y++)
    {
        u8 *row = gfx->fb + (u32)y * (u32)EMU_FB_MAX_W;
        for (x = 0; x < w; x++)
        {
            int idx = 0;
            for (p = 0; p < depth && p < 8; p++)
            {
                u32 plane = bm_plane(m, bm, p);
                if (plane != 0) idx |= plane_get(m, plane, bpr, x, y) << p;
            }
            row[x] = (u8)idx;
        }
    }
    /* FUN_000007F4 (panel open, flag 0x21F5A) loads five colours from 0x21F50 into the live table
     * and FUN_000008D6 restores the saved five when it closes - the engine expects them to stay up
     * while the panel waits for input. Its intro fade, however, rewrites the whole table every
     * frame and finishes at black 11 frames after the panel opens, which leaves the prompt
     * invisible. While the panel flag is up, take those five entries from the engine's own panel
     * palette, i.e. the colours FUN_000007F4 would have put there. */
    if (rt_read16(&m->mem, 0x25F5Au) != 0)
    {
        for (p = 0; p < 5; p++)
        {
            u32 v = rt_read16(&m->mem, 0x25F50u + (u32)p * 2u);
            gfx->pal[p * 3 + 0] = (u8)(((v >> 8) & 0xF) * 17);
            gfx->pal[p * 3 + 1] = (u8)(((v >> 4) & 0xF) * 17);
            gfx->pal[p * 3 + 2] = (u8)((v & 0xF) * 17);
        }
    }
    gfx->frames++;
    /* Trace the flip cadence: the emulated frame number each present belongs to is the only way to
     * tell "the intro drew nothing" from "the intro never flipped". */
    if (m->progress && (gfx->frames % 20u) == 0u)
        printf("emu: present %lu at frame %lu\n", (unsigned long)gfx->frames,
               (unsigned long)m->frame);
    if (m->on_present != 0) m->on_present(m);
}

const u8 *rt_gfx_framebuffer(void) { return gfx != 0 ? gfx->fb : 0; }
const u8 *rt_gfx_palette(void)     { return gfx != 0 ? gfx->pal : 0; }
int  rt_gfx_width(void)            { return gfx != 0 ? gfx->fbW : 0; }
int  rt_gfx_height(void)           { return gfx != 0 ? gfx->fbH : 0; }
u32  rt_gfx_frames(void)           { return gfx != 0 ? gfx->frames : 0; }
