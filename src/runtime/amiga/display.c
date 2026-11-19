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

#include "osd_icon.h"
#include "pointer_art.h"
#include "crosshair_art.h"

static rt_gfx_state *gfx;                /* the one machine's graphics state */

/* --- planar -> chunky ---------------------------------------------------------------------
 * Eight pixels share one byte per plane, so a nibble of two plane bytes names four pixels: the
 * tables below hold those four pixel bytes already OR-ed together (planes 0/1, planes 2/3) plus
 * plane 4 on its own. Since the game's screen is five planes, one group of eight pixels costs six
 * table reads instead of forty bit tests - this loop is what a real Amiga does in the hardware,
 * and it is by far the largest single item of a frame. */
static u32 g_nib01[256];                 /* planes 0 and 1 */
static u32 g_nib23[256];                 /* planes 2 and 3 */
static u32 g_nib4[16];                   /* plane 4 */
static int g_nibReady;
/* Stands in for a plane the screen does not have (and for one whose row is not in RAM), so the
 * group loop below can read all five planes unconditionally. Must cover a 640-pixel row. */
static const u8 g_zeroRow[128];

/* --- one conversion per changed picture ---------------------------------------------------
 * The chunky buffer is a pure function of the plane bytes, so it only has to be rebuilt when those
 * bytes (or the geometry) changed since the last time this view was converted. Comparing them is
 * an exact test - whoever wrote the bytes: the blitter, a shim or translated code - and it costs a
 * memcmp per plane instead of the whole group loop. The intro presents 1.54 times per frame
 * (`LoadView` presents, and the vblank presents the same view again); the second one is normally
 * this case. Draws that land in the chunky buffer itself (graphics primitives on the pseudo
 * bitmap, the OSD) make the comparison meaningless and invalidate it. */
#define CONV_PLANES  5
#define CONV_SRC_MAX (CONV_PLANES * 80 * EMU_FB_MAX_H)   /* a 640-wide, five-plane raster */
static u8  *g_src;
static int  g_srcValid;
static u32  g_srcBm;
static int  g_srcW, g_srcH, g_srcBpr, g_srcPlanes, g_srcLen;

/* BPLCON1's two playfield delays are part of the picture, not of the plane bytes: the engine
 * scrolls by patching that register in the copper list and never touches the bitmap, so a frame
 * that only changed the delays still has to be converted again. */
static int  g_srcD1 = -1, g_srcD2 = -1;

/* 1 when gfx->fb still holds what these planes would convert to. */
static int conv_same(rt_machine *m, u32 bm, int w, int h, int bpr, int np, const u32 *planes,
                     int d1, int d2)
{
    int p;

    if (!g_srcValid || g_srcPlanes != np || g_srcBm != bm || g_srcW != w || g_srcH != h ||
        g_srcBpr != bpr || g_srcLen != bpr * h || g_srcD1 != d1 || g_srcD2 != d2)
        return 0;
    for (p = 0; p < np; p++)
        if (memcmp(g_src + (u32)p * (u32)g_srcLen, m->mem.base + planes[p], (size_t)g_srcLen) != 0)
            return 0;
    return 1;
}

/* Remembers the bytes that were just converted. A picture whose rows are not all inside RAM is not
 * a plane-byte conversion at all (the accessor answers 0 outside), so it is not remembered. */
static void conv_saved(rt_machine *m, u32 bm, int w, int h, int bpr, int np, const u32 *planes,
                       int d1, int d2)
{
    int p, len = bpr * h;

    g_srcValid = 0;
    g_srcD1 = d1;
    g_srcD2 = d2;
    if (np > CONV_PLANES || len <= 0 || len > CONV_SRC_MAX / CONV_PLANES) return;
    if (g_src == 0) g_src = (u8 *)plat_alloc(CONV_SRC_MAX);
    if (g_src == 0) return;
    for (p = 0; p < np; p++)
    {
        if (planes[p] == 0 || planes[p] + (u32)len > m->mem.size) return;
        memcpy(g_src + (u32)p * (u32)len, m->mem.base + planes[p], (size_t)len);
    }
    g_srcBm = bm;
    g_srcW = w;
    g_srcH = h;
    g_srcBpr = bpr;
    g_srcPlanes = np;
    g_srcLen = len;
    g_srcValid = 1;
}

/* --- one conversion per unchanged picture, for the per-row renderer too ---------------------
 * conv_same() skips a whole-frame conversion when the planes and the delays are unchanged, but the
 * general row renderer (a copper list with several segments: the hospital, the flight) converts
 * every row on every present - and most presents of a scrolling picture are the *same* picture:
 * measured with --srcdiff over the hospital walk, 85 % of the presents in the DOS benchmark window
 * change not one source byte (169 of 200), and none of those changes the delays either. This
 * remembers what that renderer converted and skips the rows when the source and the geometry are
 * identical. It is the same exact test as conv_same - whoever wrote the bytes - and it is only
 * armed while the row parameters are uniform down the window, so the remembered run really is the
 * bytes the rows read. */
typedef struct
{
    int valid;
    u32 bm;
    int w, h, bpr, np, npUse, x0, x1, srcBase, xOrigin, d1, d2;
    u32 planes[8];
    u8 *src;
} row_src;
static row_src s_row;

static void row_src_invalidate(void) { s_row.valid = 0; }

/* Bit 3 of a nibble is its leftmost pixel, matching the 0x80 mask the bitplane format uses. */
static void nib_tables(void)
{
    int a, b, k;

    if (g_nibReady) return;
    for (a = 0; a < 16; a++)
    {
        u32 v = 0;
        for (k = 0; k < 4; k++)
            v |= ((((u32)a >> (3u - (u32)k)) & 1u) << 4) << (k * 8);
        g_nib4[a] = v;
        for (b = 0; b < 16; b++)
        {
            u32 v01 = 0, v23 = 0;
            for (k = 0; k < 4; k++)
            {
                u32 bit = 3u - (u32)k;
                u32 pa = ((u32)a >> bit) & 1u;
                u32 pb = ((u32)b >> bit) & 1u;
                v01 |= (pa | (pb << 1)) << (k * 8);
                v23 |= ((pa << 2) | (pb << 3)) << (k * 8);
            }
            g_nib01[a * 16 + b] = v01;
            g_nib23[a * 16 + b] = v23;
        }
    }
    g_nibReady = 1;
}


/* The port's own drawing no longer plots into the chunky buffer through plot(): it draws on an
 * rt_surface (plot_surface, rt_overlay_draw), which is what lets the presentation put the overlay
 * on the platform's display surface instead of into the composed picture. */

static void osd_draw(rt_machine *m);

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

/* --- screen-write diagnostics -------------------------------------------------------------- */
u32 rt_gfx_screen_bitmap(rt_machine *m)
{
    u32 vp, ri;
    if (m->view == 0) return 0;
    vp = rt_read32(&m->mem, m->view);
    if (vp == 0) return 0;
    ri = rt_read32(&m->mem, vp + EMU_VP_RASINFO);
    return ri != 0 ? rt_read32(&m->mem, ri + EMU_RI_BITMAP) : 0;
}

/* Rows are reported in bands of 8 so one u32 says which part of the screen something reached. */
void rt_gfx_screen_touched(rt_machine *m, int first, int last)
{
    int b;
    if (first > last) return;
    if (first < 0) first = 0;
    if (last > 255) last = 255;
    for (b = first >> 3; b <= (last >> 3) && b < 32; b++) m->screenBands |= 1u << b;
    m->screenWrites++;
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
    g_srcValid = 0;
    row_src_invalidate();
    /* The narration panel's engine variables: the 1989 build's until a front end booting the other
     * program overwrites them (rt_machine.panelFlag/panelCols, set from the seam table). */
    m->panelFlag = EMU_PANEL_FLAG;
    m->panelCols = EMU_PANEL_COLS;
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
    if (m->progress && dst == rt_gfx_screen_bitmap(m)) rt_gfx_screen_touched(m, (int)dy, (int)(dy + h - 1));

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
    int bpr, depth, p;

    bpr = bm_bpr(m, bm);
    depth = bm_depth(m, bm);
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
    if (m->progress && bm == rt_gfx_screen_bitmap(m)) rt_gfx_screen_touched(m, (int)y1, (int)y2);
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
    if (m->progress && bm == rt_gfx_screen_bitmap(m)) rt_gfx_screen_touched(m, (int)minY, (int)maxY);
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
        /* The crossings arrive in polygon order, so they have to be sorted before they can be
         * paired left to right - the same thing graphics.library's TAD does with its edge list.
         * Without the sort a polygon whose edges cross the scanline right-to-left fills nothing:
         * the chicken race's road only ever painted its bottom six rows. */
        for (i = 1; i < nx; i++)
        {
            s32 v = xs[i];
            int k = i - 1;
            while (k >= 0 && xs[k] > v) { xs[k + 1] = xs[k]; k--; }
            xs[k + 1] = v;
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
    if (m->progress) printf("     AreaEnd %d point(s), rows %d..%d\n", n, (int)minY, (int)maxY);
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
 * glyph sits at cp_y - tf_Baseline, and a character advances the cursor by tf_CharKern[c] and then
 * tf_CharSpace[c] - the same sum TextLength() returns, so the engine's centring matches the draw.
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

static const u8 *glyph_for_char(int ch)
{
    const char *p;

    if (ch >= 'a' && ch <= 'z') ch -= 32;
    p = ch != 0 ? strchr(g_fontIndex, ch) : 0;
    return p != 0 ? g_fontGlyphs[p - g_fontIndex] : g_fontGlyphs[0];
}

static const u8 *glyph_of(rt_machine *m, u32 text, u32 index)
{
    return glyph_for_char((int)rt_read8(&m->mem, text + index));
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

/* One glyph as the TextFont describes it. put_glyph (planar BitMap) and rt_font_text_draw
 * (chunky buffer) both lay a glyph out through this, so the two cannot disagree. */
typedef struct glyph_layout
{
    u32 data;                   /* CharData base, 0 = nothing to draw */
    int modulo;                 /* bytes between rows */
    u32 bits;                   /* bit offset of the glyph's left edge in its row */
    int w, h;                   /* the glyph's rectangle */
    int kern;                   /* how far the kern shifts the glyph right */
    int top;                    /* first row, relative to the cursor's baseline */
    int advance;                /* kern + space: what the cursor moves by */
} glyph_layout;

static void glyph_layout_of(rt_machine *m, u32 font, int ch, int baseline, glyph_layout *g)
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
    int xSize = (int)rt_read16(&m->mem, font + EMU_TF_X_SIZE);
    int i = (ch >= lo && ch <= hi) ? ch - lo : -1;
    int j = i >= 0 ? i : 0;

    g->data  = i >= 0 ? data : 0;
    g->modulo = mod;
    g->bits  = (i >= 0 && loc != 0) ? (u32)rt_read16(&m->mem, loc + (u32)i * 4u) : 0u;
    g->w     = (i >= 0 && loc != 0) ? (int)rt_read16(&m->mem, loc + (u32)i * 4u + 2u) : 0;
    g->h     = ySize;
    g->kern  = kern != 0 ? (int)(s16)rt_read16(&m->mem, kern + (u32)j * 2u) : 0;
    g->top   = baseline - base;                                  /* cp_y is the baseline */
    g->advance = g->kern +
                 ((space != 0 && i >= 0) ? (int)rt_read16(&m->mem, space + (u32)j * 2u) : xSize);
}

/* Draws one character of the port's font and returns its advance. */
static s32 put_glyph(rt_machine *m, u32 bm, u32 font, int ch, s32 x, s32 baseline, u8 fg, u8 bg,
                     u8 mode)
{
    glyph_layout g;
    int row, col;

    glyph_layout_of(m, font, ch, (int)baseline, &g);
    x += g.kern;                /* the kern shifts the glyph, then CharSpace advances past it */
    if (g.data != 0 && g.modulo > 0 && g.w > 0)
    {
        for (row = 0; row < g.h; row++)
            for (col = 0; col < g.w; col++)
            {
                u32 bit = g.bits + (u32)col;
                u8 byte = (u8)rt_read8(&m->mem, g.data + (u32)row * (u32)g.modulo + (bit >> 3));
                int on = (byte >> (7 - (bit & 7u))) & 1;

                if (mode == 1)                       /* JAM2: the background shows through */
                {
                    plot(m, bm, (int)(x + col), g.top + row, on ? fg : bg);
                }
                else if (on)                         /* JAM1 */
                {
                    plot(m, bm, (int)(x + col), g.top + row, fg);
                }
            }
    }
    return (s32)g.advance;
}

u32 rt_gfx_text(rt_machine *m, u32 rp, u32 text, u32 count)
{
    u32 bm = bm_of_rastport(m, rp);
    u32 font = rt_read32(&m->mem, rp + EMU_RP_FONT);
    s32 x = (s16)rt_read16(&m->mem, rp + EMU_RP_CPX), y = (s16)rt_read16(&m->mem, rp + EMU_RP_CPY);
    u8 fg = pen_of(m, rp), bg = (u8)rt_read8(&m->mem, rp + EMU_RP_BG), mode = mode_of(m, rp);
    u32 i, plotted = 0;

    if (bm == 0) return 0;
    m->textDraws++;
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
    u32 space, kern, i;
    s32 n = 0;

    if (font == 0) return (s32)count * FONT_ADVANCE;
    lo = (int)rt_read8(&m->mem, font + EMU_TF_LO_CHAR);
    hi = (int)rt_read8(&m->mem, font + EMU_TF_HI_CHAR);
    xSize = (int)rt_read16(&m->mem, font + EMU_TF_X_SIZE);
    space = rt_read32(&m->mem, font + EMU_TF_CHAR_SPACE);
    kern = rt_read32(&m->mem, font + EMU_TF_CHAR_KERN);
    for (i = 0; i < count; i++)
    {
        int ch = (int)rt_read8(&m->mem, text + i);
        int j = (ch >= lo && ch <= hi) ? ch - lo : 0;
        n += (space != 0 && ch >= lo && ch <= hi)
                 ? (s32)rt_read16(&m->mem, space + (u32)j * 2u) : (s32)xSize;
        if (kern != 0) n += (s32)(s16)rt_read16(&m->mem, kern + (u32)j * 2u);
    }
    return n;
}

/* --- the game's font, into any chunky buffer ------------------------------------------------
 * The title menu is host code drawing into the platform framebuffer, not a game BitMap, so the
 * glyphs have to land in a plain one-byte-per-pixel buffer. The font is still the engine's own
 * (m->osdFont, the TextFont OpenDiskFont built from fonts\newnem.font); without one the built-in
 * stand-in keeps the same geometry. */

int rt_font_height(rt_machine *m)
{
    u32 font = m->osdFont;
    int y;

    if (font == 0) return FONT_H;
    y = (int)rt_read16(&m->mem, font + EMU_TF_Y_SIZE);
    return y > 0 ? y : FONT_H;
}

s32 rt_font_text_width(rt_machine *m, const char *text)
{
    u32 font = m->osdFont;
    s32 n = 0;

    if (text == 0) return 0;
    if (font == 0) return (s32)strlen(text) * FONT_ADVANCE;
    for (; *text != 0; text++)
    {
        glyph_layout g;

        glyph_layout_of(m, font, (u8)*text, 0, &g);
        n += g.advance;
    }
    return n;
}

s32 rt_font_text_draw(rt_machine *m, u8 *dst, u32 stride, int w, int h,
                      int x, int top, const char *text, u8 pen)
{
    u32 font = m->osdFont;
    s32 start = x;

    if (dst == 0 || text == 0) return 0;
    for (; *text != 0; text++)
    {
        int ch = (u8)*text;

        if (font != 0)
        {
            glyph_layout g;
            int base = (int)(s16)rt_read16(&m->mem, font + EMU_TF_BASELINE);
            int row, col;

            glyph_layout_of(m, font, ch, top + base, &g);
            if (g.data != 0 && g.modulo > 0 && g.w > 0)
                for (row = 0; row < g.h; row++)
                    for (col = 0; col < g.w; col++)
                    {
                        u32 bit = g.bits + (u32)col;
                        u8 byte = (u8)rt_read8(&m->mem, g.data + (u32)row * (u32)g.modulo +
                                               (bit >> 3));

                        if (((byte >> (7 - (bit & 7u))) & 1) != 0)
                        {
                            int px = (int)(x + g.kern) + col, py = g.top + row;

                            if (px >= 0 && py >= 0 && px < w && py < h)
                                dst[(u32)py * stride + (u32)px] = pen;
                        }
                    }
            x += g.advance;
        }
        else
        {   /* no font open: the stand-in keeps the geometry, not the typeface */
            const u8 *g = glyph_for_char(ch);
            int row, col;

            for (row = 0; row < FONT_H; row++)
                for (col = 0; col < FONT_W; col++)
                    if ((g[row] & (1u << (FONT_W - 1 - col))) != 0)
                    {
                        int px = x + col, py = top + row;

                        if (px >= 0 && py >= 0 && px < w && py < h)
                            dst[(u32)py * stride + (u32)px] = pen;
                    }
            x += FONT_ADVANCE;
        }
    }
    return x - start;
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
/* --- the copper list graphics.library builds for a View ------------------------------------ */
/* What the OS turns ViewPort DWidth/DHeight/Modes and the RasInfo's BitMap depth into: the
 * registers the copper programs for a screen. The 320x200 five-plane ViewPort the engine builds
 * gives BPLCON0 5000, DDF 0038..00D0 and DIW 2C81..F4C1 - a screen that starts on line 44, 200
 * lines tall. slots.c derives its colour-clock map from the same numbers, which is why they live
 * here and not in two places. */
void rt_gfx_view_regs(rt_machine *m, u32 vp, rt_view_regs *r)
{
    int w = 0, h = 0;
    u16 modes = 0;
    u32 ri = 0, bm = 0;

    r->planes = 0;
    r->hires = 0;
    r->words = 0;
    r->vstart = 0x2C;
    r->vstop = 0x2C + 200;
    if (vp != 0)
    {
        w = (int)rt_read16(&m->mem, vp + EMU_VP_WIDTH);
        h = (int)rt_read16(&m->mem, vp + EMU_VP_HEIGHT);
        modes = (u16)rt_read16(&m->mem, vp + EMU_VP_MODES);
        ri = rt_read32(&m->mem, vp + EMU_VP_RASINFO);
        bm = ri != 0 ? rt_read32(&m->mem, ri + EMU_RI_BITMAP) : 0;
        if (bm != 0)
        {
            int d = bm_depth(m, bm);
            if (d > 0 && d <= 8) r->planes = d;
        }
        if (w > 0) r->words = (w + 15) / 16;
        r->hires = (modes & 0x8000u) != 0;
        if (h > 0) r->vstop = r->vstart + h;
        if (r->vstop > EMU_FRAME_LINES) r->vstop = EMU_FRAME_LINES;
    }
    r->bplcon0 = (u16)(((u32)r->planes << 12) | (r->hires ? 0x8000u : 0u));
    r->ddfstrt = 0x0038u;
    r->ddfstop = (u16)(0x0038u + 8u * (u32)(r->words > 0 ? r->words - 1 : 0));
    r->diwstrt = (u16)(((u32)r->vstart << 8) | 0x81u);
    r->diwstop = (u16)((((u32)r->vstop & 0xFFu) << 8) | 0xC1u);
}

/* MrgCop is not decoration: FUN_0001FDE8 walks the list MrgCop built and remembers the address of
 * every palette data word, so the game can fade the screen by patching the copper list itself.
 * FUN_0001FD7A searches a cprlist { Next, start, MaxCount } - start is an array of 2-word
 * (register, value) entries - for register 0x180 + 2*k, k from (view+0x12)-1 down to 0. 0x180 is
 * COLOR00, and view+0x12 holds the colour count (1 << depth, 32 here).
 *
 * The list is what the display *is*: graphics.library programs BPLCON0, the DDF window, DIW and
 * one pointer per bitplane from the ViewPort, then the palette, and the copper writes them at the
 * top of every frame. Writing only the palette left the plane pointers wherever the previous list
 * had put them - zero, when the previous list was one of ours - so nothing pointed the display at
 * the picture the engine had just drawn. */
void rt_gfx_mrg_cop(rt_machine *m, u32 view)
{
    rt_view_regs r;
    u32 vp, cm, table, ri, bm, list, start;
    int depth, colours, entries, e = 0, i;

    if (view == 0) return;
    vp = rt_read32(&m->mem, view);
    rt_gfx_view_regs(m, vp, &r);
    depth = r.planes > 0 ? r.planes : 5;
    ri = vp != 0 ? rt_read32(&m->mem, vp + EMU_VP_RASINFO) : 0;
    bm = ri != 0 ? rt_read32(&m->mem, ri + EMU_RI_BITMAP) : 0;

    colours = (int)rt_read16(&m->mem, view + 0x12);
    if (colours <= 0 || colours > 256) colours = 1 << depth;

    cm = vp != 0 ? rt_read32(&m->mem, vp + EMU_VP_COLORMAP) : 0;
    table = cm != 0 ? rt_read32(&m->mem, cm + EMU_CM_TABLE) : 0;

    /* BPLCON0, DDFSTRT/STOP, DIWSTRT/STOP, the plane pointer of each plane as its high then its
     * low word (the copper writes one 16-bit register at a time), then the palette. */
    entries = 5 + 2 * depth + colours;
    list = rt_alloc_bytes(10);                              /* struct cprlist */
    start = rt_alloc_bytes((u32)(entries + 1) * 4u);        /* ... and the terminating WAIT */
    if (list == 0 || start == 0) return;
#define MRG_MOVE(reg, val)                                                       \
    do {                                                                         \
        rt_write16(&m->mem, start + (u32)e * 4u, (u32)(reg));                    \
        rt_write16(&m->mem, start + (u32)e * 4u + 2u, (u32)(val));               \
        e++;                                                                     \
    } while (0)
    MRG_MOVE(0x100u, r.bplcon0);                            /* BPLCON0            */
    MRG_MOVE(0x092u, r.ddfstrt);                            /* DDFSTRT            */
    MRG_MOVE(0x094u, r.ddfstop);                            /* DDFSTOP            */
    MRG_MOVE(0x08Eu, r.diwstrt);                            /* DIWSTRT            */
    MRG_MOVE(0x090u, r.diwstop);                            /* DIWSTOP            */
    for (i = 0; i < depth; i++)
    {
        u32 plane = bm != 0 ? bm_plane(m, bm, i) : 0;
        MRG_MOVE(0x0E0u + 4u * (u32)i, (plane >> 16) & 0xFFFFu);   /* BPLnPTH */
        MRG_MOVE(0x0E2u + 4u * (u32)i, plane & 0xFFFFu);           /* BPLnPTL */
    }
    for (i = 0; i < colours; i++)
    {
        u32 colour = table != 0 ? rt_read16(&m->mem, table + (u32)i * 2u) : 0;
        MRG_MOVE(0x180u + 2u * (u32)i, colour);             /* COLORxx            */
    }
#undef MRG_MOVE
    /* The copper executes this list, so it needs an end: wait for ever, one entry past the last
     * colour. The engine's own readers walk MaxCount entries and only match what they look for -
     * FUN_0001FDE8 collects each palette word's address and FUN_0001FD7A searches for 0x180+2k - so
     * the display entries and the extra terminator are invisible to them. */
    rt_write16(&m->mem, start + (u32)e * 4u, 0xFFFFu);      /* WAIT $FFFF,$FFFE */
    rt_write16(&m->mem, start + (u32)e * 4u + 2u, 0xFFFEu);
    rt_write32(&m->mem, list + 0, 0);                       /* Next */
    rt_write32(&m->mem, list + 4, start);
    rt_write16(&m->mem, list + 8, (u32)(entries + 1));      /* MaxCount, in entries (FUN_0001FD7A) */
    rt_write32(&m->mem, view + 4, list);                    /* v_LOFCprList */
    rt_write32(&m->mem, view + 8, list);                    /* v_SHFCprList */
    gfx->cprList = list;
    if (m->trace || gfx->frames == 0)
        printf("emu: MrgCop view=%06lX vp=%06lX depth %d colours %d entries %d cprlist %06lX "
               "start %06lX BPLCON0 %04lX DDF %04lX..%04lX DIW %04lX..%04lX\n",
               (unsigned long)view, (unsigned long)vp, depth, colours, entries + 1,
               (unsigned long)list, (unsigned long)start, (unsigned long)r.bplcon0,
               (unsigned long)r.ddfstrt, (unsigned long)r.ddfstop,
               (unsigned long)r.diwstrt, (unsigned long)r.diwstop);
}

/* One byte of a plane's row, `byteIdx` counted from the row's first byte. Negative indices read
 * the bytes before the row, which is what the shifter has already fetched when BPLCON1 delays the
 * playfield past the left edge (bitplane DMA runs linearly through the plane, so the prefetch word
 * of a display line is the memory in front of it). Only memory before the *plane* has nothing to
 * read: the address is clamped at the plane's start, not at the row's. */
static u32 plane_row_byte(rt_machine *m, u32 plane, int bpr, int y, int byteIdx)
{
    long addr;

    if (plane == 0) return 0;
    addr = (long)plane + (long)y * (long)bpr + (long)byteIdx;
    if (addr < 0 || (u32)addr >= m->mem.size) return 0;
    return rt_read8(&m->mem, (u32)addr);
}

/* --- one row through the nibble tables, with BPLCON1's delays applied ----------------------
 * Pixel x of a line shows bit `x + srcBase - delay` of its playfield's plane data. For a group
 * of eight output pixels starting at x = 8g that source bit sits at
 *
 *     s = 8g + srcBase - delay
 *     q = floor(s / 8) = g + floor((srcBase - delay) / 8)
 *     r = s - 8q, 0..7
 *
 * so q advances by one per group and r is constant for the whole row. The eight bits are
 * byte[q]'s bits r..7 followed by byte[q+1]'s bits 0..r-1; rotating the two into one byte gives
 * exactly the aligned form conv_picture()'s group loop expects. The rotation is done once per
 * plane per group instead of a bit test per plane per pixel, and unequal playfield delays cost
 * nothing extra because each plane carries its own r. */
typedef struct
{
    const u8 *p;                /* first byte of the group range (an absolute RAM address) */
    int first;                  /* group index p stands for */
    int shift;                  /* r, 0..7 */
} conv_row_plane;

/* Floor division by eight, for a source position that may be negative (a delay reaching in front
 * of the row). Kept apart from `>>` so the rule holds on any compiler. */
static int row_div8(int v) { return v >= 0 ? (v >> 3) : -((7 - v) >> 3); }

static u32 conv_aligned_byte(const conv_row_plane *cp, int g)
{
    const u8 *s = cp->p + (g - cp->first);
    u32 b = s[0];

    if (cp->shift != 0) b = (b << cp->shift) | (s[1] >> (8 - cp->shift));
    return b & 0xFFu;
}

static void conv_row_groups(const conv_row_plane cr[5], int gFirst, int gLast, u8 *row)
{
    int g;

    for (g = gFirst; g <= gLast; g++)
    {
        u32 b0 = conv_aligned_byte(&cr[0], g);
        u32 b1 = conv_aligned_byte(&cr[1], g);
        u32 b2 = conv_aligned_byte(&cr[2], g);
        u32 b3 = conv_aligned_byte(&cr[3], g);
        u32 b4 = conv_aligned_byte(&cr[4], g);
        u32 lo = g_nib01[(b0 & 0xF0u) | (b1 >> 4)] |
                 g_nib23[(b2 & 0xF0u) | (b3 >> 4)] |
                 g_nib4[b4 >> 4];
        u32 hi = g_nib01[((b0 & 0x0Fu) << 4) | (b1 & 0x0Fu)] |
                 g_nib23[((b2 & 0x0Fu) << 4) | (b3 & 0x0Fu)] |
                 g_nib4[b4 & 0x0Fu];
        u32 *out = (u32 *)(void *)(row + (g << 3));

        out[0] = lo;
        out[1] = hi;
    }
}

/* The scalar rule for one pixel, the reference the fast row falls back to: a clipped head/tail,
 * more than five planes, a dual-playfield picture, a per-line palette or a byte outside RAM. */
static int conv_scalar_pixel(rt_machine *m, const u32 *planes, int stride1, int stride2, int ry,
                             int np, int dbl, int front2, int srcBase, int d1, int d2, int x)
{
    int p, idx = 0, pf1 = 0, pf2 = 0;
    int sx = x + srcBase;

    for (p = 0; p < np; p++)
    {
        int s = sx - (((p & 1) != 0) ? d2 : d1);
        u32 byte = plane_row_byte(m, planes[p], ((p & 1) != 0) ? stride2 : stride1, ry, s >> 3);

        if (((byte >> (7 - (s & 7))) & 1u) == 0) continue;
        if (dbl)
        {
            /* DBLPF: the odd-numbered planes carry playfield 2 and the even ones playfield 1;
             * playfield 2 takes colours 8..15 (8+0 is the transparent one, so its first pen is
             * COLOR09). Which of the two is in front is BPLCON2's PF2PRI, and a pixel where the
             * front playfield is transparent shows the one behind it. */
            if ((p & 1) == 0) pf1 |= 1 << (p >> 1);
            else pf2 |= 1 << (p >> 1);
        }
        else idx |= 1 << p;
    }
    if (dbl)
        idx = front2 ? (pf2 != 0 ? 8 + pf2 : pf1)
                     : (pf1 != 0 ? pf1 : (pf2 != 0 ? 8 + pf2 : 0));
    return idx;
}

/* Converts [x0, x1) of one row through the group loop. Returns 0 without touching the row when
 * the picture needs the scalar rule; the caller then runs conv_scalar_pixel over the span. A
 * clipped head or tail is always scalar, so a window that is not a multiple of eight costs at
 * most seven pixels at each end. A row whose groups would read outside the RAM block also takes
 * the scalar rule, which answers 0 per byte exactly where the original accessor does. */
static int conv_row_fast(rt_machine *m, u8 *row, const u32 *planes, int np, int stride1,
                         int stride2, int ry, int srcBase, int d1, int d2, int x0, int x1)
{
    conv_row_plane cr[5];
    int p, x, gFirst, gLast;

    if (np > 5 || x1 <= x0) return 0;
    gFirst = (x0 + 7) >> 3;
    gLast = (x1 >> 3) - 1;
    if (gLast < gFirst) return 0;
    for (p = 0; p < np; p++)
    {
        int off, q, r;
        long rowAddr, lo, hi;

        if (planes[p] == 0)
        {
            cr[p].p = g_zeroRow;
            cr[p].first = gFirst;
            cr[p].shift = 0;
            continue;
        }
        off = srcBase - (((p & 1) != 0) ? d2 : d1);
        q = row_div8(off);
        r = off - 8 * q;
        rowAddr = (long)planes[p] + (long)ry * (long)(((p & 1) != 0) ? stride2 : stride1);
        lo = rowAddr + (long)q + (long)gFirst;
        hi = rowAddr + (long)q + (long)gLast + (r != 0 ? 1 : 0);
        if (lo < 0 || hi >= (long)m->mem.size) return 0;
        cr[p].p = m->mem.base + lo;
        cr[p].first = gFirst;
        cr[p].shift = r;
    }
    for (; p < 5; p++)
    {
        cr[p].p = g_zeroRow;
        cr[p].first = gFirst;
        cr[p].shift = 0;
    }
    for (x = x0; x < (gFirst << 3) && x < x1; x++)
        row[x] = (u8)conv_scalar_pixel(m, planes, stride1, stride2, ry, np, 0, 0,
                                       srcBase, d1, d2, x);
    conv_row_groups(cr, gFirst, gLast, row);
    for (x = (gLast + 1) << 3; x < x1; x++)
        row[x] = (u8)conv_scalar_pixel(m, planes, stride1, stride2, ry, np, 0, 0,
                                       srcBase, d1, d2, x);
    return 1;
}

/* The screen with BPLCON1's playfield delays applied. The hardware puts fetched data into the
 * shifter `PF1H`/`PF2H` colour clocks late (winuae drawing.cpp, bplcon1_shift), so pixel x of a
 * line shows bit x-d of its playfield's plane data: the picture sits d pixels to the right of
 * where a straight copy would put it.
 *
 * This is how the engine scrolls horizontally - it never moves the plane pointers for it. The
 * vblank server patches the copper list's BPLCON1 entry from the fine scroll accumulator
 * (FUN_00011cdc at 0x11cf2: fine | fine<<4) and advances the coarse position only when that
 * accumulator wraps, so a presenter that ignores the register shows a frozen picture that jerks
 * a whole tile every 16 steps. Playfields alternate over the bitplanes (1,3,5 = playfield 1), as
 * on the Amiga. */
static void conv_picture_scrolled(rt_machine *m, int w, int h, int bpr, int np, const u32 *planes,
                                  int d1, int d2)
{
    int x, y;

    for (y = 0; y < h; y++)
    {
        u8 *row = gfx->fb + (u32)y * (u32)EMU_FB_MAX_W;

        if (!conv_row_fast(m, row, planes, np, bpr, bpr, y, 0, d1, d2, 0, w))
            for (x = 0; x < w; x++)
                row[x] = (u8)conv_scalar_pixel(m, planes, bpr, bpr, y, np, 0, 0, 0, d1, d2, x);
    }
}

/* One planar -> chunky pass over the whole visible area. The plane pointers are read once per row;
 * a row that does not lie wholly inside the RAM block keeps the general accessor (which answers 0
 * outside); up to five planes go through the nibble tables above, wider bitmaps keep the per-pixel
 * rule. */
static void conv_picture(rt_machine *m, int w, int h, int bpr, int np, const u32 *planes)
{
    int x, y, p;

    for (y = 0; y < h; y++)
    {
        u8 *row = gfx->fb + (u32)y * (u32)EMU_FB_MAX_W;
        const u8 *src[8];
        int fast = 1;

        for (p = 0; p < 8; p++) src[p] = 0;
        for (p = 0; p < np; p++)
        {
            u32 off;
            if (planes[p] == 0) continue;
            off = planes[p] + (u32)y * (u32)bpr;
            if (off + (u32)bpr > m->mem.size) { fast = 0; break; }
            src[p] = m->mem.base + off;
        }
        if (fast && np <= 5)
        {
            int groups = w >> 3;
            int g;
            /* A plane a shallow screen does not have is read from a zero row, so the group loop
             * needs no per-plane test: five loads, six table reads and two dword stores for eight
             * pixels. This loop is 40 % of a frame (measured with it switched off), so the branch
             * per plane and the eight byte stores per group are worth this much care - the values
             * are the same either way. */
            const u8 *s0 = src[0] != 0 ? src[0] : g_zeroRow;
            const u8 *s1 = src[1] != 0 ? src[1] : g_zeroRow;
            const u8 *s2 = src[2] != 0 ? src[2] : g_zeroRow;
            const u8 *s3 = src[3] != 0 ? src[3] : g_zeroRow;
            const u8 *s4 = src[4] != 0 ? src[4] : g_zeroRow;

            for (g = 0; g < groups; g++)
            {
                u32 b0 = s0[g], b1 = s1[g], b2 = s2[g], b3 = s3[g], b4 = s4[g];
                u32 lo = g_nib01[(b0 & 0xF0u) | (b1 >> 4)] |
                         g_nib23[(b2 & 0xF0u) | (b3 >> 4)] |
                         g_nib4[b4 >> 4];
                u32 hi = g_nib01[((b0 & 0x0Fu) << 4) | (b1 & 0x0Fu)] |
                         g_nib23[((b2 & 0x0Fu) << 4) | (b3 & 0x0Fu)] |
                         g_nib4[b4 & 0x0Fu];
                u32 *out = (u32 *)(void *)(row + (g << 3));   /* 8 pixels, 4-aligned row */
                out[0] = lo;
                out[1] = hi;
            }
            for (x = groups << 3; x < w; x++)
            {
                u8 mask = (u8)(0x80u >> (x & 7));
                int byte = x >> 3;
                int idx = 0;
                for (p = 0; p < np; p++)
                    if (src[p] != 0 && (src[p][byte] & mask) != 0) idx |= 1 << p;
                row[x] = (u8)idx;
            }
        }
        else if (fast)
        {
            for (x = 0; x < w; x++)
            {
                u8 mask = (u8)(0x80u >> (x & 7));
                int byte = x >> 3;
                int idx = 0;
                for (p = 0; p < np; p++)
                    if (src[p] != 0 && (src[p][byte] & mask) != 0) idx |= 1 << p;
                row[x] = (u8)idx;
            }
        }
        else
        {
            for (x = 0; x < w; x++)
            {
                int idx = 0;
                for (p = 0; p < np; p++)
                    if (planes[p] != 0) idx |= plane_get(m, planes[p], bpr, x, y) << p;
                row[x] = (u8)idx;
            }
        }
    }
}

/* --- display regions ------------------------------------------------------------------------
 * One copper list can program more than one screen region: the flight builds a playfield and, below
 * it, a HUD strip with its own five plane pointers (the fuel/canister panel). A presenter that
 * converts one plane set for the whole frame paints the playfield over the HUD's rows, which is
 * what showed up as garbage at the bottom of the flight screen.
 *
 * The copper also programs the picture line by line, and two things follow from that which a
 * whole-frame presenter gets wrong:
 *
 *   - the plane pointers are only reloaded where the list names them, so each line's row offset is
 *     counted from the WAIT that loaded them, and the stride is the DDF window plus the modulo in
 *     force (the chicken race's list is 46 bytes: DDFSTRT 0x28, DDFSTOP 0xD8, mod 0 - which is the
 *     bytes/row its own drawing bitmap at 0x2BCF0 names, not the 42 of the ViewPort bitmap). The
 *     odd-numbered planes use BPL1MOD and the even-numbered ones BPL2MOD, so a picture can give
 *     its two playfields different strides: the chicken race's horizon strip runs its three
 *     playfield-1 planes 98 bytes a line and its two playfield-2 planes 80;
 *   - every COLORxx write takes effect from its line on. The chicken race changes COLOR12/13/14
 *     thirteen times down the screen for the sunset bands, after a completely different palette for
 *     the mountain strip above, so "the last colour in the list" flattens the whole picture to the
 *     border's black.
 *
 * A segment is therefore closed at every WAIT: the plane set, delays, strides and BPLCON0 in force,
 * and the colours latched at that line. BPLCON0 matters as much as the colours: a list that sets
 * DBLPF interleaves two playfields (odd planes in front of even ones, the odd ones taking colours
 * 8..15) and one that clears the plane count turns the picture off, and the chicken race's list
 * does both - its horizon strip is a dual-playfield picture and its last three rows have no planes
 * at all. */
#define EMU_MAX_REGIONS 32
#define EMU_PAL_SLOTS   240         /* picture slots; 240..255 are the OSD's */
#define EMU_BP_UNKNOWN  0xFF        /* the list never wrote BPLCON0: keep the bitmap's depth */
typedef struct
{
    int row;                    /* first display row this segment covers (0-based) */
    int n;                      /* plane pointers this segment names (0 = inherited) */
    u32 planes[8];
    int d1, d2;                 /* BPLCON1 playfield delays in force here */
    int stride;                 /* bytes an odd-numbered plane's pointer advances per line */
    int stride2;                /* ... and an even-numbered one (BPL2MOD) */
    u8  dblpf;                  /* BPLCON0 DBLPF: odd planes are a second playfield in front */
    u8  pf2pri;                 /* BPLCON2 PF2PRI: playfield 2 in front of playfield 1 */
    u8  bp;                     /* BPLCON0 plane count, or EMU_BP_UNKNOWN */
    u16 pal[32];                /* COLORxx latched at this line, 0x0RGB */
    u8  slot[32];               /* framebuffer index for each pen (per-line palettes) */
} rt_region;

/* --- source change rate while a picture scrolls (--srcdiff) --------------------------------
 * A converted-content cache only pays if most of the bytes the presenter reads are still the ones
 * it read last time. This measures that directly: for every row of the presented window it takes
 * the plane addresses in force, and compares the window's bytes at *bitmap* coordinates with what
 * this same bitmap held when it was last presented. `changed` is content rewritten in place, `new`
 * is a range the scroll has just exposed (either one has to be converted by a cache; `unchanged`
 * would not). Diffing RAM is the only honest way here: the hospital's tiles and walk sprite are
 * written by translated CPU code, so a blitter-side tracker sees nothing (--progress reports
 * "0 writes into the shown bitmap" for this scene). */
#define SRCDIFF_SLOTS 2
typedef struct
{
    int valid, bpr, rows, np;
    u32 anchor[8];                      /* first-row address the plane buffer is keyed on */
    u8 *img[8];                         /* the buffer as it was last presented ... */
    u8 *seen[8];                        /* ... and which of its bytes have been presented */
} srcdiff_slot;
static srcdiff_slot s_sd[SRCDIFF_SLOTS];
static int s_sdOn, s_sdNext;

void rt_gfx_srcdiff(int on) { s_sdOn = on; }

static void srcdiff_slot_free(srcdiff_slot *s)
{
    int p;

    for (p = 0; p < 8; p++)
    {
        if (s->img[p] != 0) { plat_free(s->img[p]); s->img[p] = 0; }
        if (s->seen[p] != 0) { plat_free(s->seen[p]); s->seen[p] = 0; }
    }
    s->valid = 0;
}

static void srcdiff_scan(rt_machine *m, u32 bm, int bpr, int np, int h, int srcBase,
                         int x0, int x1, const rt_region *regions, int regionCount)
{
    srcdiff_slot *s = 0;
    u32 total = 0, changed = 0, fresh = 0, start[8], span;
    int i, p, y, r, rp, bx0, bx1, rowLo = -1, rowHi = -1;

    if (!s_sdOn || bpr <= 0 || np <= 0 || h <= 0 || regionCount <= 0) return;
    if (np > 8) np = 8;
    span = (u32)(bpr * h);
    /* The plane set in force at row 0, latched exactly as the renderer latches it. */
    r = 0;
    while (r + 1 < regionCount && regions[r + 1].row <= 0) r++;
    rp = r;
    while (rp > 0 && regions[rp].n == 0) rp--;
    for (p = 0; p < np; p++)
    {
        u32 plane = regions[rp].n == 0 ? bm_plane(m, bm, p) : regions[rp].planes[p];
        int st = ((p & 1) != 0 && regions[rp].stride2 > 0)
                     ? regions[rp].stride2
                     : (regions[rp].stride > 0 ? regions[rp].stride : bpr);
        start[p] = plane != 0 ? plane + (u32)(0 - regions[rp].row) * (u32)st : 0;
        if (start[p] == 0) return;
    }
    /* The same buffer as last time: its window start is within one window's worth of the anchor.
     * The two engine buffers are further apart than that, so each keeps its own slot. */
    for (i = 0; i < SRCDIFF_SLOTS; i++)
    {
        srcdiff_slot *c = &s_sd[i];
        s32 d;
        if (!c->valid || c->bpr != bpr || c->rows != h || c->np != np) continue;
        d = (s32)(start[0] - c->anchor[0]);
        if (d > -(s32)span && d < (s32)span) { s = c; break; }
    }
    if (s == 0)
    {
        s = &s_sd[s_sdNext];
        s_sdNext = (s_sdNext + 1) % SRCDIFF_SLOTS;
        srcdiff_slot_free(s);
        s->valid = 1;
        s->bpr = bpr;
        s->rows = h;
        s->np = np;
        for (p = 0; p < np; p++)
        {
            s->anchor[p] = start[p];
            s->img[p] = (u8 *)plat_alloc(span * 2u);
            s->seen[p] = (u8 *)plat_alloc(span * 2u);
            if (s->img[p] == 0 || s->seen[p] == 0) { srcdiff_slot_free(s); return; }
            memset(s->img[p], 0, (size_t)span * 2u);
            memset(s->seen[p], 0, (size_t)span * 2u);
        }
    }
    /* The window's source bytes: a column's source bit is column + srcBase, moved back by the
     * playfield delay (up to 15 px), so the byte range is one either side of the aligned middle. */
    bx0 = (x0 + srcBase - 15) >> 3;
    bx1 = (x1 - 1 + srcBase) >> 3;
    if (bx0 < 0) bx0 = 0;
    if (bx1 >= bpr) bx1 = bpr - 1;
    if (bx1 < bx0) return;
    for (y = 0; y < h; y++)
    {
        int stride, ry;

        r = 0;
        while (r + 1 < regionCount && regions[r + 1].row <= y) r++;
        rp = r;
        while (rp > 0 && regions[rp].n == 0) rp--;
        stride = regions[rp].stride > 0 ? regions[rp].stride : bpr;
        ry = y - regions[rp].row;
        if (regions[rp].n == 0) ry = y;
        for (p = 0; p < np; p++)
        {
            u32 plane = regions[rp].n == 0 ? bm_plane(m, bm, p) : regions[rp].planes[p];
            int st = ((p & 1) != 0 && regions[rp].stride2 > 0)
                         ? regions[rp].stride2
                         : (regions[rp].stride > 0 ? regions[rp].stride : bpr);
            u32 base, x;

            if (plane == 0) continue;
            base = plane + (u32)ry * (u32)st;
            for (x = (u32)bx0; x <= (u32)bx1; x++)
            {
                u32 a = base + x;
                s32 idx = (s32)(a - s->anchor[p]) + (s32)span;
                u8 cur = rt_read8(&m->mem, a);

                total++;
                if (idx < 0 || idx >= (s32)(span * 2u))
                {
                    fresh++;
                    rowLo = y;
                    rowHi = y;
                    continue;
                }
                if (s->seen[p][idx] == 0) { fresh++; rowLo = y; rowHi = y; }
                else if (s->img[p][idx] != cur) { changed++; rowLo = y; rowHi = y; }
                s->img[p][idx] = cur;
                s->seen[p][idx] = 1;
            }
        }
    }
    printf("srcdiff: f%lu bm %06lX bytes %lu changed %lu new %lu unchanged %lu d %d/%d rows %d..%d\n",
           (unsigned long)m->frame, (unsigned long)bm, (unsigned long)total,
           (unsigned long)changed, (unsigned long)fresh,
           (unsigned long)(total - changed - fresh),
           regions[regionCount > 1 ? 1 : 0].d1, regions[regionCount > 1 ? 1 : 0].d2,
           rowLo, rowHi);
}

/* --- the row renderer's "same picture" test -------------------------------------------------
 * 1 when every visible row reads one plane set with stride == bpr and one pair of delays, i.e. the
 * contiguous bpr*h run at the row-0 pointers is exactly the bytes the rows read. Fills the row-0
 * parameters. A row whose segment names no plane pointer, a dual-playfield row or a per-line
 * palette (checked by the caller) is never uniform. */
static int row_uniform(int bpr, int h, int np, const rt_region *regions, int regionCount,
                       int *d1, int *d2, u32 *pl, int *npUse)
{
    int y, p, r, rp, f1 = -1, f2 = -1, fu = -1;
    u32 fp[8];

    if (h <= 0 || np <= 0) return 0;
    for (p = 0; p < 8; p++) fp[p] = 0;
    for (y = 0; y < h; y++)
    {
        int s1, s2, u;

        r = 0;
        while (r + 1 < regionCount && regions[r + 1].row <= y) r++;
        rp = r;
        while (rp > 0 && regions[rp].n == 0) rp--;
        if (regions[rp].n == 0 || regions[r].dblpf) return 0;
        s1 = regions[rp].stride > 0 ? regions[rp].stride : bpr;
        s2 = regions[rp].stride2 > 0 ? regions[rp].stride2 : s1;
        if (s1 != bpr || s2 != bpr) return 0;
        u = np;
        if (regions[r].bp != EMU_BP_UNKNOWN && regions[r].bp < u) u = regions[r].bp;
        if (y == 0) { f1 = regions[rp].d1; f2 = regions[rp].d2; fu = u; }
        else if (regions[rp].d1 != f1 || regions[rp].d2 != f2 || u != fu) return 0;
        for (p = 0; p < np; p++)
        {
            if (regions[rp].planes[p] == 0) return 0;
            if (y == 0) fp[p] = regions[rp].planes[p];
            else if (regions[rp].planes[p] != fp[p]) return 0;
        }
    }
    *d1 = f1;
    *d2 = f2;
    *npUse = fu;
    for (p = 0; p < np; p++) pl[p] = fp[p];
    return 1;
}

/* 1 when gfx->fb still holds what these rows would convert to. */
static int row_same(rt_machine *m, u32 bm, int w, int h, int bpr, int np, int npUse,
                    const u32 *pl, int d1, int d2, int x0, int x1, int srcBase, int xOrigin)
{
    int p, len = bpr * h;

    if (!s_row.valid || s_row.bm != bm || s_row.w != w || s_row.h != h || s_row.bpr != bpr ||
        s_row.np != np || s_row.npUse != npUse || s_row.d1 != d1 || s_row.d2 != d2 ||
        s_row.x0 != x0 || s_row.x1 != x1 || s_row.srcBase != srcBase ||
        s_row.xOrigin != xOrigin)
        return 0;
    for (p = 0; p < np; p++)
        if (s_row.planes[p] != pl[p] ||
            memcmp(s_row.src + (u32)p * (u32)len, m->mem.base + pl[p], (size_t)len) != 0)
            return 0;
    return 1;
}

/* Remembers the bytes that were just converted. A run that does not fit (a plane whose rows are
 * not in RAM) is not remembered, so the next present converts again. */
static void row_saved(rt_machine *m, u32 bm, int w, int h, int bpr, int np, int npUse,
                      const u32 *pl, int d1, int d2, int x0, int x1, int srcBase, int xOrigin)
{
    int p, len = bpr * h;

    s_row.valid = 0;
    if (np <= 0 || np > 8 || len <= 0 || len * np > CONV_SRC_MAX) return;
    if (s_row.src == 0) s_row.src = (u8 *)plat_alloc(CONV_SRC_MAX);
    if (s_row.src == 0) return;
    for (p = 0; p < np; p++)
    {
        if (pl[p] == 0 || pl[p] + (u32)len > m->mem.size) return;
        memcpy(s_row.src + (u32)p * (u32)len, m->mem.base + pl[p], (size_t)len);
    }
    s_row.bm = bm;
    s_row.w = w;
    s_row.h = h;
    s_row.bpr = bpr;
    s_row.np = np;
    s_row.npUse = npUse;
    s_row.x0 = x0;
    s_row.x1 = x1;
    s_row.srcBase = srcBase;
    s_row.xOrigin = xOrigin;
    s_row.d1 = d1;
    s_row.d2 = d2;
    for (p = 0; p < np; p++) s_row.planes[p] = pl[p];
    s_row.valid = 1;
}

/* The colour registers keep their value from frame to frame, exactly like the hardware: a list that
 * writes a colour half way down the screen leaves the rows above it in the colour the previous
 * frame ended with. */
static u16 g_latch[32];

/* Per-line palettes need the framebuffer's indices to name a colour per line, so colours are
 * interned: one slot per distinct 12-bit value, and each segment keeps a pen -> slot map. A screen
 * with one palette keeps the identity map and the fast conversion paths below. */
static u16 g_slotCol[EMU_PAL_SLOTS];
static int g_slotCount;

static int pal_slot(u16 col)
{
    int i;

    for (i = 0; i < g_slotCount; i++)
        if (g_slotCol[i] == col) return i;
    if (g_slotCount >= EMU_PAL_SLOTS) return 0;
    g_slotCol[g_slotCount] = col;
    return g_slotCount++;
}

/* A plane-pointer group read out of a copper list is usable when every pointer is in RAM and the
 * rows it needs fit there. */
static int list_planes_ok(rt_machine *m, const u32 *pl, int n, int bpr, int h)
{
    int i;

    if (n <= 0) return 0;
    for (i = 0; i < n; i++)
    {
        if (pl[i] == 0) return 0;
        if ((pl[i] & 1u) != 0) return 0;
        if (pl[i] + (u32)(bpr * h) > m->mem.size) return 0;
    }
    return 1;
}

/* A display line reads each plane with the bytes the DDF window fetches plus that plane's modulo.
 * The custom chip set keeps the two apart - BPL1MOD for the odd-numbered planes (1, 3, 5) and
 * BPL2MOD for the even-numbered ones - which is what lets a picture interleave two playfields with
 * different row widths. */
static void region_strides(rt_region *rg, int fetch, int mod1, int mod2, int bpr)
{
    int s1 = fetch > 0 ? fetch + mod1 : bpr;
    int s2 = fetch > 0 ? fetch + mod2 : bpr;

    if (s1 <= 0) s1 = bpr;
    if (s2 <= 0) s2 = s1;
    rg->stride = s1;
    rg->stride2 = s2;
}

/* The display window the installed list programs. DIWSTRT/DIWSTOP carry two independent windows:
 * the vertical pair (the high bytes) and the horizontal pair (the low bytes). The hardware displays
 * exactly that rectangle and shows COLOR00 - the border - everywhere else, whatever DHeight or
 * DWidth the game told the OS.
 *
 * Vertical: DIWSTOP.vpos - DIWSTRT.vpos lines starting at DIWSTRT.vpos.
 *
 * Horizontal: the field counts *lores pixels* from 0x81, the standard window's left edge, only bit
 * 0 is the hires half-pixel a lores display does not have, and DIWSTOP's ninth bit is implied -
 * which is why the standard pair 0x81..0xC1 is 0x1C1-0x80 = 0x140 = 320 pixels wide and not 32.
 * The minigames program 0x90..0xB0: 0x1B0-0x90 = 0x120 = 288 pixels starting 16 pixels in, i.e.
 * the same 320-pixel screen with a 16-pixel black frame down each side. That frame is what hides
 * the strip the renderer has not finished with at the edges of the scrolling levels.
 *
 * Returns the window's height (0 when the list programs no sane vertical window); *hstart/*hstop
 * get the horizontal pair in framebuffer columns, and are left alone when the list has none. */
static int list_window(rt_machine *m, int *vstart, int *hstart, int *hstop)
{
    u32 list = gfx->cprList;
    u32 start = list != 0 ? rt_read32(&m->mem, list + 4) : 0;
    int entries = list != 0 ? (int)rt_read16(&m->mem, list + 8) : 0;
    int e, vs = -1, ve = -1, hs = -1, he = -1;

    for (e = 0; start != 0 && e < entries && e < 256; e++)
    {
        u32 reg = rt_read16(&m->mem, start + (u32)e * 4u);
        u32 val = rt_read16(&m->mem, start + (u32)e * 4u + 2u);
        if (reg == 0x08Eu)
        {
            if (vs < 0) vs = (int)((val >> 8) & 0xFFu);
            if (hs < 0) hs = (int)(val & 0xFEu);
        }
        else if (reg == 0x090u)
        {
            if (ve < 0) ve = (int)((val >> 8) & 0xFFu);
            if (he < 0) he = (int)((val & 0xFEu) | 0x100u);
        }
    }
    if (hs >= 0 && he > hs)
    {
        *hstart = hs - 0x80;
        *hstop = he - 0x80;
    }
    if (vs < 0 || ve < 0 || ve <= vs) return 0;
    *vstart = vs;
    return ve - vs;
}

void rt_gfx_present(rt_machine *m, u32 view)
{
    u32 vp, cm, ri, bm, table;
    u32 listPlanes[8];
    u16 palLatch[32];
    int bpr, rows, depth, w, h, x, y, p, count, entries, d1 = 0, d2 = 0;
    int planesSeen = 0;
    static rt_region regions[EMU_MAX_REGIONS];
    int regionCount = 0, regRow = 0, regVStart = 0, regVStop = 0;
    int regHStart = 0, regHStop = 0;   /* the list's horizontal window, in framebuffer columns */
    int xOrigin = 0;                    /* standard column raster column 0 shows */
    int srcBase = 0;                    /* bitmap column the raster reads at column 0 */
    static int s_progTiles;
    int ddfS = 0, ddfE = 0, mod = 0, mod2 = 0;  /* what the strides are derived from */
    int bp = EMU_BP_UNKNOWN, dblpf = 0, pf2pri = 0;   /* BPLCON0/BPLCON2 in force */
    int palMulti = 0;                   /* a palette per line: pixels are palette slots */
    int segSimple = 1;                  /* every visible segment programs the same picture */
    int listColours = 0;                /* colours the list itself carried */

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
    /* ... except that the window the copper list programs is part of the screen too: the engine
     * uses it beyond what its ViewPort asks for. The chicken race's list asks for lines
     * 0x1D..0xF5, 216 rows, while its ViewPort says 200, and its cockpit picture fills rows
     * 176..215 - presenting DHeight's 200 rows cut the bottom 16 off the dashboard. A window
     * *shorter* than the ViewPort (the hospital room's 180 rows in a 200-row screen) keeps the
     * ViewPort's height: the rows below DIWSTOP are the border there, which is what the screen
     * shows. Sanity: the window must be at least three quarters of the screen the game built and
     * must fit the bitmap the list names. */
    {
        int vs = 0, hs = 0, he = 0;
        int win = list_window(m, &vs, &hs, &he);
        if (win > 0 && win >= (h * 3) / 4 && win <= rows && win <= EMU_FB_MAX_H)
        {
            regVStart = vs;
            regVStop = vs + win;
            if (win > h) h = win;
        }
        if (he > hs)
        {
            regHStart = hs;
            regHStop = he;
        }
    }
    if (w <= 0 || w > bpr * 8) w = bpr * 8;
    if (w > EMU_FB_MAX_W) w = EMU_FB_MAX_W;
    if (h <= 0 || h > rows) h = rows;
    if (h > EMU_FB_MAX_H) h = EMU_FB_MAX_H;
    /* The horizontal window in framebuffer columns. A window narrower than the ViewPort is the
     * black frame the minigames have, and is clipped out of the ViewPort's raster. A window
     * *wider* than it is a screen of its own: the chicken race programs DIW 0x1D61..0xF5D1, 368
     * pixels across while the ViewPort it draws through says 320, and its text page lays its
     * narration box out across all 368 (0..0x16F, text 0x1E..0x151). Clipping that to the
     * ViewPort cut the right end off every line. The raster becomes the window then, with raster
     * column 0 at the window's left edge and nothing the list displays dropped. */
    if (regHStop > regHStart)
    {
        int winW = regHStop - regHStart;
        if (winW > w && winW <= EMU_FB_MAX_W)
        {
            xOrigin = regHStart;
            w = winW;
            regHStart = 0;
            regHStop = winW;
        }
        else
        {
            if (regHStart < 0) regHStart = 0;
            if (regHStart > w) regHStart = w;
            if (regHStop > w) regHStop = w;
            if (regHStop < regHStart) regHStop = regHStart;
        }
    }
    else
    {
        regHStart = 0;
        regHStop = w;
    }
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
     * ViewPort's ColorMap when no list was ever built.
     *
     * MaxCount counts (register, value) ENTRIES, not words - the engine's own reader FUN_0001FD7A
     * steps `psVar4 + 2` once per decrement of it. Reading it as words halved the window and cut a
     * 32-colour list down to its first 14 colours (measured on the flight screen, list 0x931F0: 69
     * entries, all 32 CLRx moves present, 18 of them beyond the halved window). */
    cm = rt_read32(&m->mem, vp + EMU_VP_COLORMAP);
    count = 0;
    entries = 0;
    table = 0;
    for (p = 0; p < 8; p++) listPlanes[p] = 0;
    {
        u32 list = gfx->cprList;
        u32 start = list != 0 ? rt_read32(&m->mem, list + 4) : 0;
        int e;
        entries = list != 0 ? (int)rt_read16(&m->mem, list + 8) : 0;
        /* DIWSTRT/DIWSTOP were read before the clamps above: they are the frame's origin and end,
         * and the region rows below are `vpos - vstart`, so the origin is already in regVStart,
         * and the horizontal pair is already in regHStart/regHStop. What is left here is the rest
         * of the list. */
        for (p = 0; p < 32; p++) palLatch[p] = g_latch[p];
        for (e = 0; start != 0 && e < entries && e < 256; e++)
        {
            u32 reg = rt_read16(&m->mem, start + (u32)e * 4u);
            u32 val = rt_read16(&m->mem, start + (u32)e * 4u + 2u);
            int idx;
            if (reg == 0x100u)
            {
                /* BPLCON0: the plane count the shifter takes (0 turns the playfield off) and
                 * DBLPF, which interleaves two playfields instead of showing one deep one. */
                bp = (u8)((val >> 12) & 7u);
                dblpf = (u8)((val & 0x400u) != 0);
            }
            /* BPLCON2 bit 6 (PF2PRI): which of the two playfields is in front. Clear means
             * playfield 1 wins, which is what the chicken race's horizon strip needs: its
             * playfield 2 covers every pixel (sky and a far ridge), so with playfield 2 in front
             * the tan range its three playfield-1 planes carry never appeared at all. */
            if (reg == 0x104u) pf2pri = (u8)((val & 0x40u) != 0);
            /* BPLCON1: PF1H (bits 3-0), PF2H (bits 7-4) - winuae drawing.cpp, update_bplcon1.
             * Per display region: the engine writes a different value for the panel below the
             * playfield, so the delay belongs to the region, not to the frame. */
            if (reg == 0x102u)
            {
                d1 = (int)(val & 0x0Fu);
                d2 = (int)((val >> 4) & 0x0Fu);
            }
            /* The fetch window and the modulos: a line advances a plane's pointer by the bytes the
             * DDF window makes the shifter fetch plus that plane's modulo, so these are what a
             * region's rows are read with. The engine's own drawing bitmap agrees: the chicken
             * race draws at 46 bytes/row (0x2E at 0x2BCF0), and 0x28..0xD8 with mod 0 is exactly
             * 46. */
            if (reg == 0x092u) ddfS = (int)val;
            if (reg == 0x094u) ddfE = (int)val;
            if (reg == 0x108u) mod = (int)(s16)val;
            if (reg == 0x10Au) mod2 = (int)(s16)val;
            /* A WAIT ends the current display region and starts the next one at its line. The
             * flight screen is built this way: the playfield from line 0x1B, then a HUD region at
             * line 0xCA with its own five plane pointers (the fuel/canister panel). Rendering the
             * playfield's planes over those rows is what put garbage at the bottom of the frame.
             * The segment carries the colours latched at that line as well (see above).
             *
             * A copper instruction is a WAIT when bit 0 of its first word is set (src\amiga\
             * copper.c, same rule); bit 15 is *not* part of the opcode - it is bit 7 of the
             * vertical position, so testing it only ever caught WAITs below line 128, which is
             * why the chicken race's thirteen sunset-band WAITs were invisible. */
            if ((reg & 1u) != 0 && !(reg == 0xFFFFu && val == 0xFFFEu) && e + 1 < entries)
            {
                if (regionCount < EMU_MAX_REGIONS)
                {
                    rt_region *rg = &regions[regionCount++];
                    int q2, fetch = 0;

                    if (ddfE > ddfS) fetch = (int)(((u32)(ddfE - ddfS) / 8u) + 1u) * 2;
                    region_strides(rg, fetch, mod, mod2, bpr);
                    rg->row = regRow < 0 ? 0 : regRow;
                    rg->n = planesSeen;
                    for (q2 = 0; q2 < 8; q2++) rg->planes[q2] = listPlanes[q2];
                    rg->d1 = d1;
                    rg->d2 = d2;
                    rg->dblpf = dblpf;
                    rg->pf2pri = pf2pri;
                    rg->bp = bp;
                    for (q2 = 0; q2 < 32; q2++) rg->pal[q2] = palLatch[q2];
                }
                regRow = (int)((reg >> 8) & 0xFFu) - regVStart;
                planesSeen = 0;
                continue;
            }
            if (reg >= 0x0E0u && reg <= 0x0FEu)
            {
                int k2 = (int)((reg - 0x0E0u) >> 2);
                if (k2 < 8)
                {
                    /* The pointers are latched, not reset by a WAIT: a region that names none keeps
                     * the set in force (the sunset bands only change colours). */
                    if ((reg & 2u) == 0) listPlanes[k2] = (u32)val << 16;
                    else
                    {
                        listPlanes[k2] |= (u32)val;
                        if (k2 + 1 > planesSeen) planesSeen = k2 + 1;
                    }
                }
            }
            if (reg < 0x180u || reg > 0x1BEu || (reg & 1u) != 0) continue;
            idx = (int)((reg - 0x180u) >> 1);
            palLatch[idx] = (u16)(val & 0x0FFFu);
            gfx->pal[idx * 3 + 0] = (u8)(((val >> 8) & 0xF) * 17);
            gfx->pal[idx * 3 + 1] = (u8)(((val >> 4) & 0xF) * 17);
            gfx->pal[idx * 3 + 2] = (u8)((val & 0xF) * 17);
            if (idx + 1 > count) count = idx + 1;
        }
        if (regionCount < EMU_MAX_REGIONS)
        {
            rt_region *rg = &regions[regionCount++];
            int q2, fetch = 0;

            if (ddfE > ddfS) fetch = (int)(((u32)(ddfE - ddfS) / 8u) + 1u) * 2;
            region_strides(rg, fetch, mod, mod2, bpr);
            rg->row = regRow < 0 ? 0 : regRow;
            rg->n = planesSeen;
            for (q2 = 0; q2 < 8; q2++) rg->planes[q2] = listPlanes[q2];
            rg->d1 = d1;
            rg->d2 = d2;
            rg->dblpf = dblpf;
            rg->pf2pri = pf2pri;
            rg->bp = bp;
            for (q2 = 0; q2 < 32; q2++) rg->pal[q2] = palLatch[q2];
        }
        for (p = 0; p < 32; p++) g_latch[p] = palLatch[p];
        listColours = count;
    }
    /* Where the picture sits in the window. The shifter's data starts at DDFSTRT, and the
     * standard 0x38 is aligned with the standard window edge (0x80 in this code's units): a list
     * that offsets DDFSTRT - the chicken's 0x28, 32 pixels left - starts its bitmap at that
     * offset, not at the window's edge. Raster column 0 reads bitmap column
     * `xOrigin - (ddfS - 0x38) * 2`; every other list has DDF 0x38 and reads column 0. */
    srcBase = xOrigin - (ddfS != 0 ? (ddfS - 0x38) * 2 : 0);
    if (count == 0 && cm != 0)
    {
        count = (int)rt_read8(&m->mem, cm + EMU_CM_COUNT);
        table = rt_read32(&m->mem, cm + EMU_CM_TABLE);
    }
    /* The installed list is the palette the engine fades, but it only covers the colours it put in
     * that particular list. A screen whose ViewPort asks for more colours than the list carries
     * would otherwise render the extra indices with stale/black entries, so fill the tail from the
     * ViewPort's ColorMap - the list still wins wherever it has an entry. */
    else if (cm != 0)
    {
        int cmCount = (int)rt_read8(&m->mem, cm + EMU_CM_COUNT);
        u32 cmTable = rt_read32(&m->mem, cm + EMU_CM_TABLE);

        if (cmTable != 0 && cmCount > count && cmCount <= 256)
        {
            for (p = count; p < cmCount; p++)
            {
                u32 v = rt_read16(&m->mem, cmTable + (u32)p * 2u);
                gfx->pal[p * 3 + 0] = (u8)(((v >> 8) & 0xF) * 17);
                gfx->pal[p * 3 + 1] = (u8)(((v >> 4) & 0xF) * 17);
                gfx->pal[p * 3 + 2] = (u8)((v & 0xF) * 17);
            }
            count = cmCount;
        }
    }
    /* The bus is arbitrated by slots.c: rt_slots_update() reads the register state this view
     * programmed (the copper list is where BPLCON0/DDF/DIW/DMACON live) and builds the per-line
     * map the 68000's accesses are charged against. The blitter's own cycles are bus cycles and
     * are charged as such (blitter.c), so they are not part of the map. */
    rt_slots_update(m);
    m->dmaSteal = m->slots.frameDma;
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

    /* Does the list hold more than one palette down the frame? Compare the colours of the segments
     * that actually cover visible rows: a segment that covers none (the list's first WAIT is above
     * DIWSTRT, or two WAITs land on the same line) says nothing about the picture. */
    {
        int i, prev = -1, first = -1;

        for (i = 0; i < regionCount; i++)
        {
            int r0 = regions[i].row;
            int r1 = i + 1 < regionCount ? regions[i + 1].row : h;

            if (r0 >= h || r1 <= r0) continue;
            if (prev >= 0 && memcmp(regions[i].pal, regions[prev].pal, sizeof regions[i].pal) != 0)
                palMulti = 1;
            prev = i;
            /* A list with many WAITs that restate the same picture is still one picture: the fast
             * whole-frame conversion applies unless the segment changes the planes, the stride or
             * the playfield delays. */
            if (first < 0) first = i;
            else if (regions[i].n != regions[first].n ||
                     regions[i].stride != regions[first].stride ||
                     regions[i].stride2 != regions[first].stride2 ||
                     regions[i].dblpf != regions[first].dblpf ||
                     regions[i].pf2pri != regions[first].pf2pri ||
                     regions[i].bp != regions[first].bp ||
                     regions[i].d1 != regions[first].d1 ||
                     regions[i].d2 != regions[first].d2 ||
                     memcmp(regions[i].planes, regions[first].planes, sizeof regions[i].planes) != 0)
                segSimple = 0;
        }
    }

    /* The narration panel (FUN_000007F4) stages its five colours at `panelCols` and raises a
     * "panel open" flag at `panelFlag`, but the engine's intro fade keeps rewriting the live table
     * (0x298D2) every frame and finishes on black - so the panel would be drawn in a palette that
     * has already faded out. While that flag is up its five entries come straight from the
     * engine's own table, which is the palette the panel routine intended. Both addresses belong
     * to the build being run: the add-on's twin (FUN_00000b9e) stages its colours at 0x2405E and
     * raises its flag at 0x24068. */
    if (rt_read16(&m->mem, m->panelFlag) != 0)
    {
        int k;
        for (k = 0; k < 5; k++)
        {
            u32 v = rt_read16(&m->mem, m->panelCols + (u32)k * 2u);
            gfx->pal[k * 3 + 0] = (u8)(((v >> 8) & 0xF) * 17);
            gfx->pal[k * 3 + 1] = (u8)(((v >> 4) & 0xF) * 17);
            gfx->pal[k * 3 + 2] = (u8)((v & 0xF) * 17);
            if (palMulti)
            {
                int i;
                for (i = 0; i < regionCount; i++) regions[i].pal[k] = (u16)(v & 0x0FFFu);
            }
        }
    }

    if (palMulti)
    {
        /* Per-line palettes: intern every colour once and give each segment a pen -> slot map, so
         * one 8-bit framebuffer can carry the whole screen. This is the case the chicken race's
         * sunset bands need: thirteen COLOR12/13/14 writes down the screen, over a mountain strip
         * and a road strip with palettes of their own. */
        int i, k;

        if (cm != 0)
        {
            int cmCount = (int)rt_read8(&m->mem, cm + EMU_CM_COUNT);
            u32 cmTable = rt_read32(&m->mem, cm + EMU_CM_TABLE);

            if (cmTable != 0 && cmCount > 0 && cmCount <= 32)
            {
                for (i = 0; i < regionCount; i++)
                    for (k = listColours; k < cmCount; k++)
                        regions[i].pal[k] = (u16)(rt_read16(&m->mem, cmTable + (u32)k * 2u) & 0x0FFFu);
            }
        }
        g_slotCount = 0;
        for (i = 0; i < regionCount; i++)
            for (k = 0; k < 32; k++)
                regions[i].slot[k] = (u8)pal_slot(regions[i].pal[k]);
        for (k = 0; k < EMU_PAL_SLOTS; k++)
        {
            u8 r = 0, g = 0, b = 0;
            if (k < g_slotCount)
            {
                u16 v = g_slotCol[k];
                r = (u8)(((v >> 8) & 0xF) * 17);
                g = (u8)(((v >> 4) & 0xF) * 17);
                b = (u8)((v & 0xF) * 17);
            }
            gfx->pal[k * 3 + 0] = r;
            gfx->pal[k * 3 + 1] = g;
            gfx->pal[k * 3 + 2] = b;
        }
        gfx->palCount = g_slotCount;
    }

    /* --progress: the segment table the presenter derived from the installed list. "Why is this
     * band the wrong colour" is answered here - row, plane count, strides, BPLCON0 and first plane
     * per segment, plus whether a per-line palette is in force. */
    if (m->progress && m->frame >= m->progressFrom && (gfx->frames % 8u) == 0u)
    {
        int i;
        printf("emu: segments %d (palMulti %d segSimple %d vstart %d vstop %d hstart %d hstop %d "
               "origin %d base %d fetch %d mod %d/%d):",
               regionCount, palMulti, segSimple, regVStart, regVStop, regHStart, regHStop,
               xOrigin, srcBase,
               ddfE > ddfS ? (int)(((u32)(ddfE - ddfS) / 8u) + 1u) * 2 : bpr, mod, mod2);
        for (i = 0; i < regionCount; i++)
            printf(" [%d r%d n%d s%d/%d d%d/%d %s%s b%02X p%06lX c%03X]", i, regions[i].row,
                   regions[i].n, regions[i].stride, regions[i].stride2,
                   regions[i].d1, regions[i].d2,
                   regions[i].dblpf ? "dual" : "flat",
                   regions[i].dblpf ? (regions[i].pf2pri ? ",pf2" : ",pf1") : "",
                   (unsigned)regions[i].bp,
                   (unsigned long)regions[i].planes[0], regions[i].pal[0]);
        printf("\n");
    }

    /* Planar -> chunky. This is the one loop that runs over the whole screen every frame - and it
     * used to be 68% of a frame. One conversion per changed picture: see conv_same() above. */
    {
        u32 pt0 = m->perfOn ? plat_pit_now() : 0;
        int np = depth < 8 ? depth : 8;
        u32 planes[8];
        int didRows = 0;
        int converted = 0;              /* --perf: the planes were walked, not merely repainted */
        /* Rows below DIWSTOP are border, exactly as on the hardware: a window shorter than the
         * screen the game built (the hospital room's 180 rows in a 200-row screen) must not show
         * the plane data that happens to start there. */
        int visH = h;
        if (regVStop > regVStart && regVStop - regVStart < visH) visH = regVStop - regVStart;
        nib_tables();
        for (p = 0; p < 8; p++) planes[p] = 0;
        for (p = 0; p < np; p++) planes[p] = bm_plane(m, bm, p);
        /* More than one display segment in the list, or a palette per line: each row is converted
         * with the plane set, stride, delay and palette the copper has in force at its line. */
        if (!segSimple || palMulti || srcBase != 0 || xOrigin != 0)
        {
            int y0;
            /* Only the columns inside the window are displayed; the rest is border (pen 0). The
             * source bit of a column is the column itself, moved by the window's place in the
             * DDF fetch (srcBase) and by the playfield delay; the window clips what is visible,
             * it does not otherwise move the picture. */
            int x0 = regHStart, x1 = regHStop;
            int rd1 = 0, rd2 = 0, rnpUse = np, rUniform = 0, rSame = 0;
            u32 rplanes[8];

            for (p = 0; p < 8; p++) rplanes[p] = 0;
            /* A list with several segments takes the row loop below on every present, and most
             * presents of a scrolling picture are the same picture as the one before (85 % of
             * the hospital walk's, measured with --srcdiff): the buffer still holds its conversion.
             * See row_src above. */
            if (!palMulti)
                rUniform = row_uniform(bpr, visH, np, regions, regionCount, &rd1, &rd2,
                                       rplanes, &rnpUse);
            if (rUniform)
                rSame = row_same(m, bm, w, visH, bpr, np, rnpUse, rplanes, rd1, rd2, x0, x1,
                                 srcBase, xOrigin);
            srcdiff_scan(m, bm, bpr, np, visH, srcBase, x0, x1, regions, regionCount);
            if (!rSame)
            {
                for (y0 = 0; y0 < h; y0++)
                {
                    int r = 0, rp = 0;
                    u8 *row = gfx->fb + (u32)y0 * (u32)EMU_FB_MAX_W;
                    int dd1, dd2;
                    int ry, stride1, stride2, npUse, dbl, front2;
                    const u8 *slot = 0;
                    u8 bc = 0;                      /* the border: pen 0, i.e. COLOR00 */

                    if (y0 >= visH)
                    {
                        bc = (palMulti && regionCount > 0) ? regions[regionCount - 1].slot[0] : 0;
                        for (x = 0; x < w; x++) row[x] = bc;
                        for (; x < (int)EMU_FB_MAX_W; x++) row[x] = 0;
                        continue;
                    }
                    while (r + 1 < regionCount && regions[r + 1].row <= y0) r++;
                    if (palMulti) bc = regions[r].slot[0];
                    /* The plane pointers are latched: a segment that only changes colours keeps the
                     * set in force, and its rows continue from the row that set was loaded at. */
                    rp = r;
                    while (rp > 0 && regions[rp].n == 0) rp--;
                    dd1 = regions[rp].d1;
                    dd2 = regions[rp].d2;
                    stride1 = regions[rp].stride > 0 ? regions[rp].stride : bpr;
                    stride2 = regions[rp].stride2 > 0 ? regions[rp].stride2 : stride1;
                    ry = y0 - regions[rp].row;      /* the row of the plane set, not the segment's */
                    if (regions[rp].n == 0)
                    {
                        for (p = 0; p < np; p++) planes[p] = bm_plane(m, bm, p);
                        stride1 = stride2 = bpr;
                        ry = y0;
                    }
                    else
                    {
                        for (p = 0; p < np; p++) planes[p] = regions[rp].planes[p];
                    }
                    /* BPLCON0 of the segment in force: how many planes the shifter takes (zero turns
                     * the playfield off, which is how the list blanks the rows below the cockpit) and
                     * whether the two playfields are interleaved instead of one deep picture. */
                    npUse = np;
                    if (regions[r].bp != EMU_BP_UNKNOWN && regions[r].bp < npUse) npUse = regions[r].bp;
                    dbl = regions[r].dblpf;
                    front2 = regions[r].pf2pri;
                    if (palMulti) slot = regions[r].slot;
                    for (x = 0; x < x0; x++) row[x] = bc;
                    /* The window's aligned middle goes through the nibble tables exactly as
                     * conv_picture() does, with each plane's byte rotated by its own playfield delay.
                     * A dual-playfield picture, a per-line palette or an unreadable row keeps the
                     * scalar rule below (which is also the head/tail of an unaligned window inside
                     * conv_row_fast()). That rule stays written out here rather than called per pixel:
                     * the chicken race's per-line palette and dual-playfield strip take this branch on
                     * every pixel of every row, and a call there cost 6 % of its frame. */
                    if (dbl || slot != 0 ||
                        !conv_row_fast(m, row, planes, npUse, stride1, stride2, ry, srcBase,
                                       dd1, dd2, x0, x1))
                    {
                        for (x = x0; x < x1; x++)
                        {
                            int idx = 0, pf1 = 0, pf2 = 0;
                            int sx = x + srcBase;
                            for (p = 0; p < npUse; p++)
                            {
                                int s = sx - (((p & 1) != 0) ? dd2 : dd1);
                                u32 byte = plane_row_byte(m, planes[p],
                                                          ((p & 1) != 0) ? stride2 : stride1,
                                                          ry, s >> 3);
                                if (((byte >> (7 - (s & 7))) & 1u) == 0) continue;
                                if (dbl)   /* the DBLPF/PF2PRI rule of conv_scalar_pixel() */
                                {
                                    if ((p & 1) == 0) pf1 |= 1 << (p >> 1);
                                    else pf2 |= 1 << (p >> 1);
                                }
                                else idx |= 1 << p;
                            }
                            if (dbl)
                                idx = front2 ? (pf2 != 0 ? 8 + pf2 : pf1)
                                             : (pf1 != 0 ? pf1 : (pf2 != 0 ? 8 + pf2 : 0));
                            row[x] = slot != 0 ? slot[idx] : (u8)idx;
                        }
                    }
                    for (x = x1; x < w; x++) row[x] = bc;
                }
                for (y0 = h; y0 < EMU_FB_MAX_H; y0++)
                {
                    u8 *row = gfx->fb + (u32)y0 * (u32)EMU_FB_MAX_W;
                    for (x = 0; x < w; x++) row[x] = 0;
                }
                conv_saved(m, bm, w, h, bpr, np, planes, -1, -1);

                if (rUniform)
                    row_saved(m, bm, w, visH, bpr, np, rnpUse, rplanes, rd1, rd2, x0, x1,
                              srcBase, xOrigin);
                else
                    row_src_invalidate();
                didRows = 1;
                converted = 1;
            }
            else
            {
                didRows = 1;            /* the buffer already holds this picture */
            }
        }
        /* The planes the beam reads come from the copper list, not from the ViewPort: the list is
         * what the copper executes, and it is where the engine scrolls. `MrgCop` fills its list
         * with the same plane pointers the ViewPort names, so a static screen changes nothing; the
         * minigames point the list at a bitmap *plus a row lead-in* and then step those pointers,
         * which a presenter reading the BitMap from row 0 never shows - the hospital renders its
         * room 10 rows into the bitmap and scrolls vertically by moving the pointers. The group in
         * force at the top of the frame is the one the first `WAIT` closes, i.e. regions[0]; a
         * list that names no plane pointer leaves the ViewPort's planes. */
        if (!didRows && regionCount > 0)
        {
            int r0 = 0, rp;
            int k3;

            while (r0 + 1 < regionCount && regions[r0 + 1].row <= 0) r0++;
            rp = r0;
            while (rp > 0 && regions[rp].n == 0) rp--;
            if (regions[rp].n > 0)
                for (k3 = 0; k3 < np && k3 < 8; k3++)
                    if (regions[rp].planes[k3] != 0) planes[k3] = regions[rp].planes[k3];
            d1 = regions[rp].d1;
            d2 = regions[rp].d2;
        }
        if (!didRows && !conv_same(m, bm, w, visH, bpr, np, planes, d1, d2))
        {
            if (d1 != 0 || d2 != 0) conv_picture_scrolled(m, w, visH, bpr, np, planes, d1, d2);
            else conv_picture(m, w, visH, bpr, np, planes);
            conv_saved(m, bm, w, visH, bpr, np, planes, d1, d2);
            converted = 1;
        }
        /* Everything outside the window the list programs is border, which is pen 0 (COLOR00):
         * below DIWSTOP, left of DIWSTRT's horizontal position and right of DIWSTOP's. Only the
         * row loop above knows about the window, so without this a screen shorter than the
         * 200-row buffer keeps the previous screen's pixels there (the hospital's 180-row view
         * showed the desert) - and the minigames would show the strip the renderer has not
         * finished with at the edges of the scrolling level, which the original hides behind the
         * same border. */
        if (!didRows)
        {
            for (y = visH; y < EMU_FB_MAX_H; y++)
            {
                u8 *row = gfx->fb + (u32)y * EMU_FB_MAX_W;
                memset(row, 0, (size_t)w);
                memset(row + w, 0, (size_t)(EMU_FB_MAX_W - w));
            }
            for (y = 0; y < visH; y++)
            {
                u8 *row = gfx->fb + (u32)y * EMU_FB_MAX_W;
                if (regHStart > 0) memset(row, 0, (size_t)regHStart);
                if (regHStop < w) memset(row + regHStop, 0, (size_t)(w - regHStop));
                memset(row + w, 0, (size_t)(EMU_FB_MAX_W - w));
            }
        }
        if (m->perfOn)
        {
            m->perf.conv += plat_pit_now() - pt0;
            if (converted) m->perf.convs++;
        }
    }
    if (m->progress)
    {
        /* --progress diagnostic: what the composed picture really is - geometry, palette size and
         * the row range that carries visible (non-black) colour. This is how a scene whose screen
         * looks empty is told apart from one where the presenter dropped rows. `--progress <frame>`
         * starts the detailed reports there, so a scene entered by --call is not drowned by the
         * intro. */
        static int dbg;
        if (m->frame >= m->progressFrom && (dbg++ % 8) == 0 && dbg < 3200)
        {
            int y2, first = -1, last = -1, nz = 0;
            int band[14], bw = 20, nb = (h + bw - 1) / bw, yb;
            for (yb = 0; yb < 14; yb++) band[yb] = 0;
            for (y2 = 0; y2 < h; y2++)
            {
                int hit = 0;
                for (x = 0; x < w; x++)
                {
                    int idx = gfx->fb[(u32)y2 * EMU_FB_MAX_W + (u32)x];
                    if (gfx->pal[idx * 3] || gfx->pal[idx * 3 + 1] || gfx->pal[idx * 3 + 2]) { hit = 1; nz++; }
                }
                if (hit) { if (first < 0) first = y2; last = y2; }
            }
            /* Bit content per 20-row band, independent of the palette: this is what tells "nothing
             * was drawn here" apart from "drawn in a black pen". */
            for (p = 0; p < depth && p < 8; p++)
            {
                u32 plane = bm_plane(m, bm, p);
                if (plane == 0) continue;
                for (y2 = 0; y2 < h; y2++)
                {
                    yb = y2 / bw;
                    if (yb >= 14) break;
                    for (x = 0; x < bpr; x++)
                        band[yb] += (rt_read8(&m->mem, plane + (u32)y2 * (u32)bpr + (u32)x) != 0);
                }
            }
            printf("emu: present %lu frame %lu: vp %06lX bm %06lX %dx%d bpr %d rows %d depth %d "
                   "vpDx %d vpDy %d riRx %d riRy %d pal %d vcol %d cm %d; painted rows %d..%d, %d lit px\n",
                   (unsigned long)gfx->frames, (unsigned long)m->frame, (unsigned long)vp,
                   (unsigned long)bm, w, h, bpr, rows, depth,
                   (int)(s16)rt_read16(&m->mem, vp + 0x1C), (int)(s16)rt_read16(&m->mem, vp + 0x1E),
                   (int)(s16)rt_read16(&m->mem, ri + 4), (int)(s16)rt_read16(&m->mem, ri + 6),
                   gfx->palCount, (int)rt_read16(&m->mem, view + 0x12),
                   cm != 0 ? (int)rt_read8(&m->mem, cm + EMU_CM_COUNT) : -1,
                   first, last, nz);
            printf("emu:   writes %lu into the shown bitmap, rows bands %08lX; bytes/plane per "
                   "%d rows:", (unsigned long)m->screenWrites, (unsigned long)m->screenBands, bw);
            for (yb = 0; yb < nb && yb < 14; yb++) printf(" %d", band[yb]);
            printf("\n");
            /* One trace line per sample: frame, presented View/ViewPort and all 32 colours, so a
             * scene whose sprites come out black can be paired with the palette in force. */
            /* One trace line per sample: frame, presented View/ViewPort, the installed list and all
             * 32 colours, so a screen whose palette comes out short can be paired with the list it
             * was read from. `len` = cprlist MaxCount (entries), `cols` = colours it carries. */
            printf("emu: pal32 f%lu view %06lX vp %06lX clist %06lX start %06lX eng %06lX len %d cols %d",
                   (unsigned long)m->frame, (unsigned long)view, (unsigned long)vp,
                   (unsigned long)rt_read32(&m->mem, view + 4),
                   (unsigned long)(rt_read32(&m->mem, view + 4) != 0
                                       ? rt_read32(&m->mem, rt_read32(&m->mem, view + 4) + 4) : 0),
                   (unsigned long)rt_read32(&m->mem, 0x2A566u), entries, count);
            for (p = 0; p < 32; p++)
                printf(" %02X%02X%02X", gfx->pal[p * 3], gfx->pal[p * 3 + 1], gfx->pal[p * 3 + 2]);
            printf("\n");
            printf("\n");
            printf("\nemu:   drawn bitmap %06lX planes", (unsigned long)rt_gfx_screen_bitmap(m));
            {
                u32 sbm = rt_gfx_screen_bitmap(m);
                int sd = sbm != 0 ? bm_depth(m, sbm) : 0;
                for (yb = 0; sbm != 0 && yb < sd && yb < 8; yb++)
                    printf(" %06lX", (unsigned long)bm_plane(m, sbm, yb));
            }
            printf("\n");
            /* The engine double-buffers by swapping its two BitMap pointers (0x56E0, 0x170C8) and
             * handing the current one to the ViewPort's RasInfo. Printing the bands of both makes
             * "the flight draws into the other buffer" a measurement instead of a guess. */
            {
                u32 a = rt_read32(&m->mem, 0x2A612u), bb = rt_read32(&m->mem, 0x2A60Eu);
                int k;
                for (k = 0; k < 2; k++)
                {
                    u32 t = k == 0 ? a : bb;
                    int tb[14], td = t != 0 ? bm_depth(m, t) : 0;
                    int tp = t != 0 ? bm_bpr(m, t) : 0;
                    int tt = 0, ty, tplane;
                    for (yb = 0; yb < 14; yb++) tb[yb] = 0;
                    for (tplane = 0; tplane < td && tplane < 8; tplane++)
                    {
                        u32 plane = bm_plane(m, t, tplane);
                        if (plane == 0) continue;
                        for (ty = 0; ty < h; ty++)
                        {
                            yb = ty / bw;
                            if (yb >= 14 || tp <= 0) break;
                            for (x = 0; x < tp; x++)
                                tb[yb] += (rt_read8(&m->mem, plane + (u32)ty * (u32)tp + (u32)x) != 0);
                        }
                    }
                    printf("emu:   engine %s %06lX band bytes:", k == 0 ? "26612" : "2660E",
                           (unsigned long)t);
                    for (yb = 0; yb < 14; yb++) { printf(" %d", tb[yb]); tt += tb[yb]; }
                    printf(" (total %d)\n", tt);
                }
            }
        }
        m->screenBands = 0;
        m->screenWrites = 0;
    }
    /* The tile renderer's own parameters (FUN_00010e48 / FUN_00011094 write them): bpr/rows, the
     * two loop counters, the tile size, the source row delta and the BLTSIZE it will use. Printed
     * with the blit count, so "the map renderer ran but drew nothing" is distinguishable from
     * "it never ran". Addresses are engine image offsets + 0x4000, like EMU_PANEL_FLAG above. */
    if (m->progress && m->frame >= m->progressFrom && (s_progTiles++ % 8) == 0 && s_progTiles < 3200)
    {
        int wr = (int)rt_read16(&m->mem, 0x2CD24u), hr = (int)rt_read16(&m->mem, 0x2CD26u);
        printf("emu:   tiles bpr %d rows %d loops %d/%d delta %d tile %dx%d map %d/%d sheet %d/%d "
               "size %04lX; %lu blit(s) so far\n",
               wr, hr,
               (int)rt_read16(&m->mem, 0x2E840u), (int)rt_read16(&m->mem, 0x2E842u),
               (int)rt_read16(&m->mem, 0x2CD3Eu),
               (int)rt_read16(&m->mem, 0x2CD42u), (int)rt_read16(&m->mem, 0x2CD44u),
               (int)rt_read16(&m->mem, 0x2CD46u), (int)rt_read16(&m->mem, 0x2CD48u),
               (int)rt_read16(&m->mem, 0x2CD4Au), (int)rt_read16(&m->mem, 0x2CD4Cu),
               (unsigned long)rt_read16(&m->mem, 0x2E83Eu), (unsigned long)m->blits);
        /* The flight driver's own state: stage counter (FUN_0000bfca loops while it is < 8),
         * the strip's scroll offsets (FUN_0000beda fills y = 0xB8 + 0x28cd6 .. +5 in pen 0 with a
         * pen-6 border while 0x2a18e != 0) and the rastport's bitmap. If the stage stops moving,
         * the loop that issues the strip has already exited whatever the blits say. */
        {
            u32 rp = rt_read32(&m->mem, 0x2A56Au);
            printf("emu:   flight stage %d/+%d timer %d strip %d dx %d dy %d rp %06lX bm %06lX\n",
                   (int)rt_read16(&m->mem, 0x2E170u), (int)rt_read16(&m->mem, 0x2E172u),
                   (int)rt_read16(&m->mem, 0x2E16Eu),
                   (int)rt_read16(&m->mem, 0x2E18Eu),
                   (int)rt_read16(&m->mem, 0x2CDD4u), (int)rt_read16(&m->mem, 0x2CDD6u),
                   (unsigned long)rp, (unsigned long)(rp != 0 ? rt_read32(&m->mem, rp + 4) : 0));
            /* The fire-held readout: FUN_00016588 arms while 0x24a8c > 6 (consecutive frames with
             * /FIRE down) and then prints numbers at 0xf/0xe with graphics.Text. textDraws proves
             * whether that path is reached. */
            printf("emu:   hud fireHeld %d armed %d gate %d; %lu Text call(s) so far, %lu blit(s)\n",
                   (int)rt_read16(&m->mem, 0x24A8Cu), (int)rt_read16(&m->mem, 0x2AD30u),
                   (int)rt_read16(&m->mem, 0x2AB0Eu),
                   (unsigned long)m->textDraws, (unsigned long)m->blits);
            /* Game mode (FUN_00002cc8's switch): 9 = "Take a Flight", 10 = "Fire Game",
             * 2 = "Go to Map", 6 = "Escape Hospital", 1 = "Make a Call". Plus the location id
             * that decides which actions the menu even offers. */
            printf("emu:   mode %d loc %d/%d day %d act %d\n",
                   (int)rt_read16(&m->mem, 0x2A9D6u),
                   (int)rt_read16(&m->mem, 0x2E9A6u), (int)rt_read16(&m->mem, 0x2E9A8u),
                   (int)rt_read16(&m->mem, 0x25E1Eu), (int)rt_read16(&m->mem, 0x2CA3Au));
        }
    }
    /* FUN_000007F4 (panel open, flag `panelFlag`) loads five colours from `panelCols` into the
     * live table and FUN_000008D6 restores the saved five when it closes - the engine expects them
     * to stay up while the panel waits for input. Its intro fade, however, rewrites the whole
     * table every frame and finishes at black 11 frames after the panel opens, which leaves the
     * prompt invisible. While the panel flag is up, take those five entries from the engine's own
     * panel palette, i.e. the colours FUN_000007F4 would have put there. */
    if (rt_read16(&m->mem, m->panelFlag) != 0)
    {
        for (p = 0; p < 5; p++)
        {
            u32 v = rt_read16(&m->mem, m->panelCols + (u32)p * 2u);
            gfx->pal[p * 3 + 0] = (u8)(((v >> 8) & 0xF) * 17);
            gfx->pal[p * 3 + 1] = (u8)(((v >> 4) & 0xF) * 17);
            gfx->pal[p * 3 + 2] = (u8)((v & 0xF) * 17);
        }
    }
    /* The port's overlay last: it sits on top of whatever the engine composed, and its palette
     * entries are set after the game's own table was built. With a window the platform draws it
     * itself, per display frame, on its own display surface - so it is composed into the picture
     * only where nothing else will draw it (a headless --shot/--dump, the DOS build). */
    if (!plat_overlay_armed()) osd_draw(m);
    gfx->frames++;
    if (m->perfOn) m->perf.presents++;     /* --perf: a presentation call, which is not a frame */
    /* Trace the flip cadence: the emulated frame number each present belongs to is the only way to
     * tell "the intro drew nothing" from "the intro never flipped". */
    if (m->progress && (gfx->frames % 20u) == 0u)
        printf("emu: present %lu at frame %lu\n", (unsigned long)gfx->frames,
               (unsigned long)m->frame);
    if (m->on_present != 0) m->on_present(m);
}

/* --- on-screen display ----------------------------------------------------------------------
 *
 * A port feature, not a library call. It runs after the engine's frame has been composed and its
 * palette built, so the overlay lands in the pixels the presenter copies out and can use palette
 * entries the game never touches. Drawing through plot() and the disk font's own glyphs is what
 * lets a DOS/VGA build inherit this unchanged.
 *
 * The text sits 2 pixels in from the top left corner and the icon 2 pixels in from the top right;
 * the icon PNG ships its own 2-pixel transparent border, so it is placed flush. */
#define OSD_PAD       2
#define OSD_PEN_TEXT  255              /* #00FF00 */
#define OSD_PEN_ICON  240              /* 240..245: the save icon's colours */
#define OSD_PEN_PTR   EMU_PEN_POINTER  /* 246..247: the pointer's outline and fill */
#define OSD_PEN_CRS   248              /* 248..254: the crosshair's colours */
#define OSD_TEXT_MAX  40

static void osd_colour(u32 index, u32 r, u32 g, u32 b)
{
    gfx->pal[index * 3 + 0] = (u8)r;
    gfx->pal[index * 3 + 1] = (u8)g;
    gfx->pal[index * 3 + 2] = (u8)b;
}

void rt_osd_text(rt_machine *m, const char *text, u32 frames)
{
    int i = 0;

    if (text != 0)
        for (; text[i] != 0 && i < OSD_TEXT_MAX - 1; i++) gfx->osdText[i] = text[i];
    gfx->osdText[i] = 0;
    gfx->osdTextUntil = m->frame + frames;
}

void rt_osd_icon(rt_machine *m, u32 frames)
{
    gfx->osdIconUntil = m->frame + frames;
}

void rt_pointer_at(s16 x, s16 y)
{
    gfx->ptrX = x;
    gfx->ptrY = y;
    gfx->ptrUp = 1;
}

void rt_pointer_hidden(void)
{
    gfx->ptrUp = 0;
}

void rt_crosshair_at(s16 x, s16 y)
{
    gfx->crsX = x;
    gfx->crsY = y;
    gfx->crsUp = 1;
}

void rt_crosshair_hidden(void)
{
    gfx->crsUp = 0;
}

/* The overlay's own pixel write: the clip plot() gives the framebuffer, onto whatever surface the
 * caller is drawing on. */
static void plot_surface(rt_surface *s, int x, int y, u8 pen)
{
    if (s->dst == 0 || x < 0 || y < 0 || x >= s->w || y >= s->h) return;
    s->dst[(u32)y * s->stride + (u32)x] = pen;
}

static void osd_draw_text(rt_machine *m, rt_surface *s)
{
    /* The game's disk font, JAM1: only the glyph pixels are written, because the overlay sits on
     * top of the game's picture (JAM2 would paint pen 0 around every letter). */
    rt_font_text_draw(m, s->dst, s->stride, s->w, s->h, OSD_PAD, OSD_PAD, gfx->osdText,
                      OSD_PEN_TEXT);
}

static void osd_draw_icon(rt_machine *m, rt_surface *s)
{
    int x0 = s->w - OSD_ICON_W, row, col;

    if (x0 < 0) return;
    for (row = 0; row < OSD_ICON_H; row++)
        for (col = 0; col < OSD_ICON_W; col++)
        {
            u8 v = g_osdIcon[row * OSD_ICON_W + col];
            if (v != 0) plot_surface(s, x0 + col, row, (u8)(OSD_PEN_ICON + v - 1));
        }
}

/* The arrow's pixels, into any buffer the port owns: the presented picture, the title's screen,
 * the save picker's popup. Drawing into the chunky of the *presented* picture makes the plane
 * comparison meaningless, so a headless caller invalidates through rt_overlay_begin first; a
 * windowed one draws on the platform's display surface and must not (that is what keeps the
 * identity caches alive on a pointer screen).
 *
 * The arrow is kept whole: the tip is pulled in when it would put part of the mark past the
 * surface's right or bottom edge. It is the only pointer the player sees (the system cursor is
 * hidden), and a window wider than the picture has the border art right there - an arrow at the
 * edge slid under the curtain and read as a lost pointer (reported on the title menu, where the
 * pointer can be pushed into the bars beside the 320x200 picture). */
static void pointer_blit(u8 *dst, u32 stride, int w, int h, int x, int y)
{
    int row, col;

    if (dst == 0) return;
    if (w > PTR_W && x > w - PTR_W) x = w - PTR_W;
    if (h > PTR_H && y > h - PTR_H) y = h - PTR_H;
    for (row = 0; row < PTR_H; row++)
        for (col = 0; col < PTR_W; col++)
        {
            u8 v = g_pointer[row * PTR_W + col];
            int px = x + col, py = y + row;

            if (v != 0 && px >= 0 && py >= 0 && px < w && py < h)
                dst[(u32)py * stride + (u32)px] = (u8)(OSD_PEN_PTR + v - 1);
        }
}

void rt_pointer_draw(u8 *dst, u32 stride, int w, int h, int x, int y)
{
    pointer_blit(dst, stride, w, h, x, y);
}

const u8 *rt_pointer_palette(void)
{
    return g_pointerPal;
}

u8 *rt_overlay_begin(void)
{
    if (gfx == 0 || gfx->fb == 0) return 0;
    g_srcValid = 0;             /* the surface's pixels are not in the planes */
    row_src_invalidate();
    return gfx->fb;
}

void rt_overlay_palette(u32 first, u32 count, const u8 *rgb)
{
    u32 i;

    if (gfx == 0 || rgb == 0) return;
    if (first >= 256u) return;
    if (first + count > 256u) count = 256u - first;
    for (i = 0; i < count * 3u; i++) gfx->pal[first * 3u + i] = rgb[i];
}

static void osd_draw_pointer(rt_surface *s)
{
    pointer_blit(s->dst, s->stride, s->w, s->h, gfx->ptrX, gfx->ptrY);
}

/* The aiming crosshair: its centre pixel is the point it marks, so the picture is placed half its
 * size up and left of it. */
static void osd_draw_crosshair(rt_machine *m, rt_surface *s)
{
    int x0 = gfx->crsX - CRS_W / 2, y0 = gfx->crsY - CRS_H / 2;
    int row, col;

    for (row = 0; row < CRS_H; row++)
        for (col = 0; col < CRS_W; col++)
        {
            u8 v = g_crosshair[row * CRS_W + col];
            if (v != 0) plot_surface(s, x0 + col, y0 + row, (u8)(OSD_PEN_CRS + v - 1));
        }
}

static int overlay_text_up(rt_machine *m)
{
    return gfx->osdText[0] != 0 && (s32)(gfx->osdTextUntil - m->frame) > 0;
}

static int overlay_icon_up(rt_machine *m)
{
    return (s32)(gfx->osdIconUntil - m->frame) > 0;
}

static int overlay_up(rt_machine *m)
{
    return overlay_text_up(m) || overlay_icon_up(m) || gfx->ptrUp != 0 || gfx->crsUp != 0;
}

void rt_overlay_draw(rt_machine *m, rt_surface *s)
{
    int i;

    if (gfx == 0 || s == 0 || s->dst == 0 || !overlay_up(m)) return;
    /* The overlay's pens are set every time it is drawn: the game's own table may have rebuilt them
     * since the last frame, and the platform uploads this range after the call. */
    osd_colour(OSD_PEN_TEXT, 0, 255, 0);
    for (i = 0; i < OSD_ICON_COLOURS; i++)
        osd_colour((u32)OSD_PEN_ICON + (u32)i, g_osdIconPal[i * 3], g_osdIconPal[i * 3 + 1],
                   g_osdIconPal[i * 3 + 2]);
    for (i = 0; i < PTR_COLOURS; i++)
        osd_colour((u32)OSD_PEN_PTR + (u32)i, g_pointerPal[i * 3], g_pointerPal[i * 3 + 1],
                   g_pointerPal[i * 3 + 2]);
    for (i = 0; i < CRS_COLOURS; i++)
        osd_colour((u32)OSD_PEN_CRS + (u32)i, g_crosshairPal[i * 3], g_crosshairPal[i * 3 + 1],
                   g_crosshairPal[i * 3 + 2]);
    if (overlay_text_up(m)) osd_draw_text(m, s);
    if (overlay_icon_up(m)) osd_draw_icon(m, s);
    if (gfx->ptrUp) osd_draw_pointer(s);
    if (gfx->crsUp) osd_draw_crosshair(m, s);
}

/* The overlay into the chunky buffer itself: what the presentation draws while no platform draws
 * it per display frame - a headless --shot/--dump run, and the DOS build. Those pixels are not in
 * the planes, so the identity caches are invalidated here and only here. */
static void osd_draw(rt_machine *m)
{
    static int wasUp;
    rt_surface s;

    if (!overlay_up(m))
    {
        /* The overlay has been drawn into the chunky buffer and is gone now: the next present has
         * to rebuild the picture to clear those pixels. */
        if (wasUp) { g_srcValid = 0; row_src_invalidate(); wasUp = 0; }
        return;
    }
    wasUp = 1;
    g_srcValid = 0;                     /* the overlay's pixels are not in the planes */
    row_src_invalidate();
    s.dst = gfx->fb;
    s.stride = EMU_FB_MAX_W;
    s.w = gfx->fbW;
    s.h = gfx->fbH;
    rt_overlay_draw(m, &s);
}

const u8 *rt_gfx_framebuffer(void) { return gfx != 0 ? gfx->fb : 0; }
const u8 *rt_gfx_palette(void)     { return gfx != 0 ? gfx->pal : 0; }
int  rt_gfx_width(void)            { return gfx != 0 ? gfx->fbW : 0; }
int  rt_gfx_height(void)           { return gfx != 0 ? gfx->fbH : 0; }
u32  rt_gfx_frames(void)           { return gfx != 0 ? gfx->frames : 0; }
