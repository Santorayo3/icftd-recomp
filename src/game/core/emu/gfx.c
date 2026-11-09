/* graphics.library for the recompiled game - see gfx.h for the structure offsets this relies on.
 *
 * Everything here is planar in emulated memory, exactly like the original expects, and converts
 * to the chunky framebuffer only in emu_gfx_present(). That keeps the game's own blits and the
 * copper-list bookkeeping intact while the shipped renderer stays a straight 8-bit copy.
 */
#include "gfx.h"
#include "platform.h"

#include <stdio.h>
#include <string.h>

static emu_gfx_state *gfx;                /* the one machine's graphics state */

/* --- BitMap accessors ---------------------------------------------------------------------- */
static int bm_bpr(emu_machine *m, u32 bm)   { return (int)emu_read16(&m->mem, bm + EMU_BM_BYTES_ROW); }
static int bm_rows(emu_machine *m, u32 bm)  { return (int)emu_read16(&m->mem, bm + EMU_BM_ROWS); }
static int bm_depth(emu_machine *m, u32 bm) { return (int)emu_read8(&m->mem, bm + EMU_BM_DEPTH); }
static u32 bm_plane(emu_machine *m, u32 bm, int n)
{
    return emu_read32(&m->mem, bm + EMU_BM_PLANES + (u32)n * 4u);
}

static int plane_get(emu_machine *m, u32 plane, int bpr, int x, int y)
{
    u32 off = plane + (u32)y * (u32)bpr + (u32)(x >> 3);
    return (emu_read8(&m->mem, off) >> (7 - (x & 7))) & 1;
}

static void plane_put(emu_machine *m, u32 plane, int bpr, int x, int y, int bit)
{
    u32 off = plane + (u32)y * (u32)bpr + (u32)(x >> 3);
    u8 v = (u8)emu_read8(&m->mem, off);
    u8 mask = (u8)(0x80u >> (x & 7));
    if (bit) v = (u8)(v | mask); else v = (u8)(v & ~mask);
    emu_write8(&m->mem, off, v);
}

/* The blitter's minterm bit index is 4*A + 2*B + C (A = the mask/foreground input, B = source,
 * C = destination). 0xCA is the standard cookie cut: (A & B) | (~A & C). */
static int minterm_bit(u32 minterm, int a, int b, int c)
{
    return (int)((minterm >> ((a << 2) | (b << 1) | c)) & 1u);
}

/* --- state ---------------------------------------------------------------------------------- */
void emu_gfx_reset(emu_machine *m)
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

void emu_gfx_init_bitmap(emu_machine *m, u32 bm, int depth, int width, int height)
{
    int bpr = ((width + 15) >> 4) << 1;    /* words, like InitBitMap */
    if (bm == 0) return;
    if (m->trace)
        printf("emu: InitBitMap bm %06lX depth %d %dx%d bpr %d\n", (unsigned long)bm, depth,
               width, height, bpr);
    emu_write16(&m->mem, bm + EMU_BM_BYTES_ROW, (u32)bpr);
    emu_write16(&m->mem, bm + EMU_BM_ROWS, (u32)height);
    emu_write8(&m->mem, bm + EMU_BM_FLAGS, 0);
    emu_write8(&m->mem, bm + EMU_BM_DEPTH, (u32)depth);
    /* The plane pointers are left alone: the caller fills them in after this call
     * (FUN_0001D3B8 calls InitBitMap first, then allocates each plane), and clearing them here
     * would wipe a bitmap that was already set up. */
}

void emu_gfx_blt_clear(emu_machine *m, u32 block, u32 bytes, u32 flags)
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
    if (bytes > 0x100000u)
    {
        /* Caller-controlled byte count: a bogus value used to spin here for hours. */
        printf("emu: BltClear(%06lX,%lu,%lu) - clamped to 1 MB\n", (unsigned long)block,
               (unsigned long)bytes, (unsigned long)flags);
        bytes = 0x100000u;
    }
    if ((flags & 1u) != 0)                 /* flags bit 0: one block of `bytes` bytes */
    {
        for (i = 0; i < bytes; i++) emu_write8(&m->mem, block + i, 0);
        return;
    }
    /* Otherwise `bytes` is the row width and the block is a raster: clear row by row. The game
     * only uses the block form, but leaving this correct costs three lines. */
    for (i = 0; i < bytes; i++) emu_write8(&m->mem, block + i, 0);
}

void emu_gfx_blt_bitmap(emu_machine *m, u32 src, s32 sx, s32 sy, u32 dst, s32 dx, s32 dy,
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
static u32 bm_of_rastport(emu_machine *m, u32 rp)
{
    /* The game never writes RastPort fields itself, it passes the port to graphics.library, so
     * the destination bitmap is whatever the last draw call on this port implied. We keep it in
     * the port's first longword after InitRastPort, which is where the real one keeps rp_BitMap. */
    return rp != 0 ? emu_read32(&m->mem, rp + 4) : 0;
}

static void plot(emu_machine *m, u32 bm, int x, int y, u8 pen)
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

void emu_gfx_rect_fill(emu_machine *m, u32 rp, s32 x1, s32 y1, s32 x2, s32 y2)
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
            plot(m, bm, (int)x, (int)y, gfx->fgPen);
}

void emu_gfx_area_move(emu_machine *m, u32 rp, s32 x, s32 y)
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

void emu_gfx_area_draw(emu_machine *m, u32 rp, s32 x, s32 y)
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
void emu_gfx_area_end(emu_machine *m, u32 rp)
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
            for (x = xa; x <= xb; x++) plot(m, bm, (int)x, (int)y, gfx->fgPen);
        }
    }
    gfx->areaCount = 0;
}

void emu_gfx_set_apen(emu_machine *m, u32 rp, u32 pen)
{
    (void)m; (void)rp;
    gfx->fgPen = (u8)pen;
}

void emu_gfx_set_bpen(emu_machine *m, u32 rp, u32 pen)
{
    (void)m; (void)rp;
    gfx->bgPen = (u8)pen;
}

void emu_gfx_set_drmd(emu_machine *m, u32 rp, u32 mode)
{
    (void)m; (void)rp;
    gfx->drMd = (u8)mode;
}

/* --- palette ------------------------------------------------------------------------------- */
static u32 colormap_of(emu_machine *m, u32 vp)
{
    return vp != 0 ? emu_read32(&m->mem, vp + EMU_VP_COLORMAP) : 0;
}

static void set_palette_entry(emu_machine *m, u32 cm, int idx, u32 r, u32 g, u32 b)
{
    u32 table;
    if (cm == 0 || idx < 0 || idx > 255) return;
    table = emu_read32(&m->mem, cm + EMU_CM_TABLE);
    if (table == 0) return;
    emu_write16(&m->mem, table + (u32)idx * 2u, ((r & 0xFu) << 8) | ((g & 0xFu) << 4) | (b & 0xFu));
}

void emu_gfx_load_rgb4(emu_machine *m, u32 vp, u32 table, u32 count)
{
    u32 cm = colormap_of(m, vp), i;
    if (count > 256u) count = 256u;        /* a palette has at most 256 entries */
    for (i = 0; i < count; i++)
    {
        u32 v = emu_read16(&m->mem, table + i * 2u);
        set_palette_entry(m, cm, (int)i, (v >> 8) & 0xF, (v >> 4) & 0xF, v & 0xF);
    }
}

void emu_gfx_set_rgb4(emu_machine *m, u32 vp, u32 index, u32 r, u32 g, u32 b)
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
 * so emu_gfx_present() reads the colours back out of it instead of keeping a copy in sync. */
void emu_gfx_mrg_cop(emu_machine *m, u32 view)
{
    u32 vp, cm, table, list, start;
    int depth = 5, colours, i;

    if (view == 0) return;
    vp = emu_read32(&m->mem, view);
    if (vp != 0)
    {
        u32 ri = emu_read32(&m->mem, vp + EMU_VP_RASINFO);
        u32 bm = ri != 0 ? emu_read32(&m->mem, ri + EMU_RI_BITMAP) : 0;
        if (bm != 0)
        {
            int d = bm_depth(m, bm);
            if (d > 0 && d <= 8) depth = d;
        }
    }
    colours = (int)emu_read16(&m->mem, view + 0x12);
    if (colours <= 0 || colours > 256) colours = 1 << depth;

    cm = vp != 0 ? emu_read32(&m->mem, vp + EMU_VP_COLORMAP) : 0;
    table = cm != 0 ? emu_read32(&m->mem, cm + EMU_CM_TABLE) : 0;

    list = emu_alloc_bytes(10);                        /* struct cprlist */
    start = emu_alloc_bytes((u32)colours * 4u);
    if (list == 0 || start == 0) return;
    for (i = 0; i < colours; i++)
    {
        u32 colour = table != 0 ? emu_read16(&m->mem, table + (u32)i * 2u) : 0;
        emu_write16(&m->mem, start + (u32)i * 4u, (u32)(0x180 + 2 * i));   /* COLORxx */
        emu_write16(&m->mem, start + (u32)i * 4u + 2u, colour);
    }
    emu_write32(&m->mem, list + 0, 0);                    /* Next */
    emu_write32(&m->mem, list + 4, start);
    emu_write16(&m->mem, list + 8, (u32)(colours * 2));   /* MaxCount, in words */
    emu_write32(&m->mem, view + 4, list);                 /* v_LOFCprList */
    emu_write32(&m->mem, view + 8, list);                 /* v_SHFCprList */
    if (m->trace || gfx->frames == 0)
        printf("emu: MrgCop view=%06lX vp=%06lX depth %d colours %d cprlist %06lX start %06lX\n",
               (unsigned long)view, (unsigned long)vp, depth, colours, (unsigned long)list,
               (unsigned long)start);
}

void emu_gfx_present(emu_machine *m, u32 view)
{
    u32 vp, cm, ri, bm, table;
    int bpr, rows, depth, w, h, x, y, p, count;

    if (view == 0 || gfx == 0 || gfx->fb == 0) return;
    /* No extra throttling here: the game pace each frame with WaitBOVP on the back viewport, so a
     * LoadView already means "a new frame is ready". (An earlier version suppressed presents that
     * landed in the same emulated frame and hid the whole intro behind four frames.) */
    vp = emu_read32(&m->mem, view);
    if (vp == 0)
    {
        if (m->progress) printf("emu: present: view %06lX has no ViewPort\n", (unsigned long)view);
        return;
    }
    ri = emu_read32(&m->mem, vp + EMU_VP_RASINFO);
    bm = ri != 0 ? emu_read32(&m->mem, ri + EMU_RI_BITMAP) : 0;
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
    w = (int)emu_read16(&m->mem, vp + EMU_VP_WIDTH);
    h = (int)emu_read16(&m->mem, vp + EMU_VP_HEIGHT);
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
                if (emu_read8(&m->mem, bm_plane(m, bm, 0) + (u32)y * (u32)bpr + (u32)x) != 0) nz++;
        for (pp = 0; pp < 256; pp++)
            if (gfx->pal[pp * 3] || gfx->pal[pp * 3 + 1] || gfx->pal[pp * 3 + 2]) nzpal++;
        printf("emu: present %lu: %dx%d bm %06lX planes-nonzero %d, palette colours %d\n",
               (unsigned long)gfx->frames, w, h, (unsigned long)bm, nz, nzpal);
    }

    /* Palette: the copper list MrgCop built, because the game patches *those* words every frame
     * (that is what the pointers it kept from FUN_0001FDE8 are for). Fall back to the ColorMap. */
    cm = emu_read32(&m->mem, vp + EMU_VP_COLORMAP);
    count = 0;
    table = 0;
    {
        u32 list = emu_read32(&m->mem, view + 4);
        u32 start = list != 0 ? emu_read32(&m->mem, list + 4) : 0;
        int words = list != 0 ? (int)emu_read16(&m->mem, list + 8) : 0;
        int w;
        for (w = 0; start != 0 && w + 1 < words; w += 2)
        {
            u32 reg = emu_read16(&m->mem, start + (u32)w * 2u);
            u32 val = emu_read16(&m->mem, start + (u32)w * 2u + 2u);
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
        count = (int)emu_read8(&m->mem, cm + EMU_CM_COUNT);
        table = emu_read32(&m->mem, cm + EMU_CM_TABLE);
    }
    if (count > 0 && count <= 256 && table != 0)
    {
        for (p = 0; p < count; p++)
        {
            u32 v = emu_read16(&m->mem, table + (u32)p * 2u);
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
    gfx->frames++;
    /* Trace the flip cadence: the emulated frame number each present belongs to is the only way to
     * tell "the intro drew nothing" from "the intro never flipped". */
    if (m->progress && (gfx->frames % 20u) == 0u)
        printf("emu: present %lu at frame %lu\n", (unsigned long)gfx->frames,
               (unsigned long)m->frame);
    if (m->on_present != 0) m->on_present(m);
}

const u8 *emu_gfx_framebuffer(void) { return gfx != 0 ? gfx->fb : 0; }
const u8 *emu_gfx_palette(void)     { return gfx != 0 ? gfx->pal : 0; }
int  emu_gfx_width(void)            { return gfx != 0 ? gfx->fbW : 0; }
int  emu_gfx_height(void)           { return gfx != 0 ? gfx->fbH : 0; }
u32  emu_gfx_frames(void)           { return gfx != 0 ? gfx->frames : 0; }
