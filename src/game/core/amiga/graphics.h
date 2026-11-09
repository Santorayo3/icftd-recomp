/* graphics.library subset, reimplemented over a chunky 8-bit framebuffer.
 *
 * The original builds its own View/ViewPort/ColorMap and draws through a RastPort with the
 * graphics library (see docs/graphics-notes.md).  The recomp keeps the same call shapes so
 * transcribed engine code maps 1:1, but stores one byte per pixel instead of bitplanes:
 * a pen value is the colour index, and a minterm is applied bit by bit, which is exactly
 * what the blitter does per plane.
 */
#ifndef ICFTD_AMIGA_GRAPHICS_H
#define ICFTD_AMIGA_GRAPHICS_H

#include "../types.h"

#define AGFX_MAX_PENS 32
#define AGFX_MAX_AREA 128      /* vertices, x/y pairs */

/* SetDrMd modes (graphics/rastport.h). */
enum { AGFX_JAM1 = 0, AGFX_JAM2 = 1, AGFX_COMPLEMENT = 2, AGFX_INVERSE = 3 };

typedef struct agfx_bitmap {
    u8 *pixels;                /* chunky, one byte per pixel */
    s32 width, height;
    s32 stride;                /* bytes per row */
    u16 depth;                 /* planes the original bitmap had (1..5) */
} agfx_bitmap;

typedef struct agfx_colormap {
    u16 color[AGFX_MAX_PENS];  /* 0x0RGB, four bits per gun (LoadRGB4 format) */
    u16 count;
} agfx_colormap;

/* One bit per pixel, MSB left: the layout of an Amiga FontChar bitmap. */
typedef struct agfx_font {
    u8  width, height;
    u8  baseline;
    u16 bytes_per_row;         /* 0 means (width + 7) / 8 */
    u16 count;
    const u8 *bitmap;
} agfx_font;

typedef struct agfx_rastport {
    agfx_bitmap     *bm;
    agfx_colormap   *cmap;
    const agfx_font *font;
    s16 cp_x, cp_y;            /* Move/Draw current point */
    u8  fg_pen, bg_pen;
    u8  drawmode;
    s16 area[AGFX_MAX_AREA];
    s16 area_n;                /* number of shorts used */
    u8  minterm;               /* last blit, for diagnostics */
} agfx_rastport;

typedef struct agfx_stats {
    u32 blits, rect_fills, lines, areas, texts, palette_uploads, unsupported;
} agfx_stats;

void agfx_init(void);
const agfx_stats *agfx_get_stats(void);

void        agfx_bitmap_from_fb(agfx_bitmap *bm);   /* wraps the framebuffer */
agfx_bitmap *agfx_bitmap_alloc(s32 w, s32 h, u16 depth, u8 clear_pen);
void        agfx_bitmap_free(agfx_bitmap *bm);

agfx_colormap *agfx_colormap_alloc(u16 count);
void           agfx_colormap_free(agfx_colormap *cm);

void agfx_init_rastport(agfx_rastport *rp, agfx_bitmap *bm, agfx_colormap *cm);
void agfx_set_apen(agfx_rastport *rp, u8 pen);
void agfx_set_bpen(agfx_rastport *rp, u8 pen);
void agfx_set_drmd(agfx_rastport *rp, u8 mode);
void agfx_set_font(agfx_rastport *rp, const agfx_font *f);

void agfx_move(agfx_rastport *rp, s16 x, s16 y);
void agfx_draw(agfx_rastport *rp, s16 x, s16 y);
void agfx_rect_fill(agfx_rastport *rp, s16 x1, s16 y1, s16 x2, s16 y2);

void agfx_area_move(agfx_rastport *rp, s16 x, s16 y);
void agfx_area_draw(agfx_rastport *rp, s16 x, s16 y);
void agfx_area_end(agfx_rastport *rp);

s16 agfx_text(agfx_rastport *rp, const char *s, s16 len);
s16 agfx_text_length(const agfx_rastport *rp, const char *s, s16 len);

void agfx_set_rgb4(agfx_colormap *cm, u16 index, u16 r, u16 g, u16 b);
void agfx_load_rgb4(agfx_colormap *cm, const u16 *rgb4, u16 count);
void agfx_palette_upload(const agfx_colormap *cm, u32 first, u32 count);

/* A = source, B = destination, C = mask (upper case means the bit is set).
 * The values below are the truth-table combinations, not folklore: the same minterm means
 * the same thing for every caller, and agfx_minterm() is the definition. */
enum {
    AGFX_MT_ZERO   = 0x00,   /* dst = 0                  */
    AGFX_MT_DST    = 0x0C,   /* dst unchanged            */
    AGFX_MT_XOR    = 0x3C,   /* dst = src ^ dst          */
    AGFX_MT_AND    = 0xC0,   /* dst = src & dst          */
    AGFX_MT_SRC    = 0xF0,   /* dst = src                */
    AGFX_MT_OR     = 0xFC,   /* dst = src | dst          */
    AGFX_MT_COOKIE = 0xE4    /* dst = C ? src : dst      */
};

u8   agfx_minterm(u8 minterm, u8 a, u8 b, u8 c);
void agfx_blt_bitmap(agfx_rastport *rp, const agfx_bitmap *src, s16 dx, s16 dy,
                     s16 w, s16 h, u8 minterm, s16 sx, s16 sy);
void agfx_blt_mask(agfx_rastport *rp, const agfx_bitmap *src, s16 dx, s16 dy,
                   s16 w, s16 h, u8 minterm, const agfx_bitmap *mask, s16 mx, s16 my);

/* Nothing to synchronise with: the framebuffer is plain RAM. */
void agfx_own_blitter(void);
void agfx_disown_blitter(void);
void agfx_wait_blit(void);
void agfx_wait_tof(void);

#endif /* ICFTD_AMIGA_GRAPHICS_H */
