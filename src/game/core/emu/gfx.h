/* graphics.library for the recompiled game.
 *
 * The game speaks classic planar graphics: every picture is a BitMap of N bitplanes, blitted
 * with an Amiga minterm, and the palette arrives through a ViewPort's ColorMap. The shipped
 * port is a chunky renderer (docs\recomp-architecture.md), so this module keeps the planar
 * model the game expects and converts to 8-bit chunky only at present time.
 *
 * Structure offsets used here are the ones the *game* writes, read off the disassembly:
 *   BitMap    bytes/row @0, rows @2, flags @4, depth @5, plane pointers @8+4n   (InitBitMap)
 *   View      pointer to its ViewPort @0                                        (FUN_0001FAEC)
 *   ViewPort  ColorMap @4, DWidth @0x18, DHeight @0x1A, Modes @0x20, RasInfo @0x24
 *             (FUN_0001FAEC stores exactly these; the block is 0x28 bytes = sizeof ViewPort)
 *   RasInfo   BitMap @4, next @8                                               (FUN_0001FAEC)
 *   ColorMap  flags @0x0E, count @0x0F, table @0x10 (u16 0x0RGB)               (GetColorMap)
 */
#ifndef EMU_GFX_H
#define EMU_GFX_H

#include "types.h"
#include "machine.h"

enum {
    EMU_BM_BYTES_ROW = 0,
    EMU_BM_ROWS      = 2,
    EMU_BM_FLAGS     = 4,
    EMU_BM_DEPTH     = 5,
    EMU_BM_PLANES    = 8
};

enum { EMU_VP_COLORMAP = 4, EMU_VP_WIDTH = 0x18, EMU_VP_HEIGHT = 0x1A, EMU_VP_RASINFO = 0x24 };
enum { EMU_RI_BITMAP = 4 };
enum { EMU_CM_COUNT = 0x0F, EMU_CM_TABLE = 0x10 };

void emu_gfx_reset(emu_machine *m);

/* InitBitMap(bitmap, depth, width, height) */
void emu_gfx_init_bitmap(emu_machine *m, u32 bm, int depth, int width, int height);
/* BltClear(memBlock, byteCount, flags) */
void emu_gfx_blt_clear(emu_machine *m, u32 block, u32 bytes, u32 flags);
/* BltBitMap(srcBM, xSrc, ySrc, dstBM, xDest, yDest, xSize, ySize, minterm, mask, tempA) */
void emu_gfx_blt_bitmap(emu_machine *m, u32 src, s32 sx, s32 sy, u32 dst, s32 dx, s32 dy,
                        s32 w, s32 h, u32 minterm, u32 mask);
/* RectFill(rp, x1, y1, x2, y2) */
void emu_gfx_rect_fill(emu_machine *m, u32 rp, s32 x1, s32 y1, s32 x2, s32 y2);
/* AreaMove/AreaDraw/AreaEnd - the polygon is filled at AreaEnd. */
void emu_gfx_area_move(emu_machine *m, u32 rp, s32 x, s32 y);
void emu_gfx_area_draw(emu_machine *m, u32 rp, s32 x, s32 y);
void emu_gfx_area_end(emu_machine *m, u32 rp);
/* SetAPen/SetBPen/SetDrMd keep the drawing state of the RastPort passed in. */
void emu_gfx_set_apen(emu_machine *m, u32 rp, u32 pen);
void emu_gfx_set_bpen(emu_machine *m, u32 rp, u32 pen);
void emu_gfx_set_drmd(emu_machine *m, u32 rp, u32 mode);
/* LoadRGB4(vp, table, count) / SetRGB4(vp, index, r, g, b) fill the ColorMap palette. */
void emu_gfx_load_rgb4(emu_machine *m, u32 vp, u32 table, u32 count);
void emu_gfx_set_rgb4(emu_machine *m, u32 vp, u32 index, u32 r, u32 g, u32 b);

/* Converts the View's raster into the chunky framebuffer and refreshes the palette. */
void emu_gfx_present(emu_machine *m, u32 view);
/* MrgCop(view): builds the copper list the game walks to find its bitplane pointers. */
void emu_gfx_mrg_cop(emu_machine *m, u32 view);

const u8 *emu_gfx_framebuffer(void);
const u8 *emu_gfx_palette(void);
int  emu_gfx_width(void);
int  emu_gfx_height(void);
u32  emu_gfx_frames(void);

#endif /* EMU_GFX_H */
