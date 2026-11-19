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

enum { EMU_VP_COLORMAP = 4, EMU_VP_WIDTH = 0x18, EMU_VP_HEIGHT = 0x1A, EMU_VP_MODES = 0x20,
       EMU_VP_RASINFO = 0x24 };
enum { EMU_RI_BITMAP = 4 };
enum { EMU_CM_COUNT = 0x0F, EMU_CM_TABLE = 0x10 };

/* RastPort fields this port keeps, so the drawing calls behave like the library's: the pen and the
 * draw mode belong to the port, not to the module. */
enum { EMU_RP_FG = 29, EMU_RP_BG = 30, EMU_RP_MODE = 32, EMU_RP_FONT = 36,
       EMU_RP_CPX = 40, EMU_RP_CPY = 42 };

/* TextFont (graphics/text.h), the layout a disk font file ships. */
enum {
    EMU_TF_TYPE = 8, EMU_TF_Y_SIZE = 20, EMU_TF_X_SIZE = 24, EMU_TF_BASELINE = 26,
    EMU_TF_LO_CHAR = 32, EMU_TF_HI_CHAR = 33, EMU_TF_CHAR_DATA = 34, EMU_TF_MODULO = 38,
    EMU_TF_CHAR_LOC = 40, EMU_TF_CHAR_SPACE = 44, EMU_TF_CHAR_KERN = 48
};

/* The 1989 build's narration-panel variables - link-map addresses of dshell loaded at 0x4000
 * (image offset + 0x4000). These are the defaults rt_gfx_reset installs; a front end booting
 * another build replaces them through rt_machine.panelFlag/panelCols. See the panel-palette note
 * in display.c. */
#define EMU_PANEL_FLAG 0x25F5Au      /* 0x21F5A: the narration panel is open */
#define EMU_PANEL_COLS 0x25F50u      /* 0x21F50: the five colours that panel draws in */

void rt_gfx_reset(rt_machine *m);

/* InitBitMap(bitmap, depth, width, height) */
void rt_gfx_init_bitmap(rt_machine *m, u32 bm, int depth, int width, int height);
/* BltClear(memBlock, byteCount, flags) */
void rt_gfx_blt_clear(rt_machine *m, u32 block, u32 bytes, u32 flags);
/* BltBitMap(srcBM, xSrc, ySrc, dstBM, xDest, yDest, xSize, ySize, minterm, mask, tempA) */
void rt_gfx_blt_bitmap(rt_machine *m, u32 src, s32 sx, s32 sy, u32 dst, s32 dx, s32 dy,
                        s32 w, s32 h, u32 minterm, u32 mask);
/* RectFill(rp, x1, y1, x2, y2) */
void rt_gfx_rect_fill(rt_machine *m, u32 rp, s32 x1, s32 y1, s32 x2, s32 y2);
/* AreaMove/AreaDraw/AreaEnd - the polygon is filled at AreaEnd. */
void rt_gfx_area_move(rt_machine *m, u32 rp, s32 x, s32 y);
void rt_gfx_area_draw(rt_machine *m, u32 rp, s32 x, s32 y);
void rt_gfx_area_end(rt_machine *m, u32 rp);
/* SetAPen/SetBPen/SetDrMd keep the drawing state of the RastPort passed in. */
void rt_gfx_set_apen(rt_machine *m, u32 rp, u32 pen);
void rt_gfx_set_bpen(rt_machine *m, u32 rp, u32 pen);
void rt_gfx_set_drmd(rt_machine *m, u32 rp, u32 mode);
/* SetFont(rp, font) - Text and TextLength read the glyphs back out of this TextFont. */
void rt_gfx_set_font(rt_machine *m, u32 rp, u32 font);
/* Move(rp,x,y) / Draw(rp,x,y) / Text(rp,string,count) / TextLength(...) - the cursor lives in the
 * RastPort, as the engine's own draw calls expect. */
void rt_gfx_move(rt_machine *m, u32 rp, s32 x, s32 y);
void rt_gfx_line(rt_machine *m, u32 rp, s32 x, s32 y);
u32  rt_gfx_text(rt_machine *m, u32 rp, u32 text, u32 count);   /* returns pixels plotted */
s32  rt_gfx_text_length(rt_machine *m, u32 rp, u32 text, u32 count);

/* The game's own disk font, drawn into a chunky 8-bit buffer (one byte per pixel, `stride` bytes
 * per row) - the title menu's labels use it, outside the engine's RastPorts. `x`/`top` are the
 * first glyph's left edge and top row; the return value is the advance. A machine with no font
 * open falls back to the built-in 5x7 stand-in, so the geometry stays the same. */
int  rt_font_height(rt_machine *m);
s32  rt_font_text_width(rt_machine *m, const char *text);
s32  rt_font_text_draw(rt_machine *m, u8 *dst, u32 stride, int w, int h,
                       int x, int top, const char *text, u8 pen);
/* LoadRGB4(vp, table, count) / SetRGB4(vp, index, r, g, b) fill the ColorMap palette. */
void rt_gfx_load_rgb4(rt_machine *m, u32 vp, u32 table, u32 count);
void rt_gfx_set_rgb4(rt_machine *m, u32 vp, u32 index, u32 r, u32 g, u32 b);

/* Converts the View's raster into the chunky framebuffer and refreshes the palette. What the
 * conversion itself costs, in plat_pit_now() counts, is added to rt_machine::perf (machine.h)
 * while rt_machine::perfOn is set - the same place the blitter's pixel loop reports to. */
void rt_gfx_present(rt_machine *m, u32 view);
/* The display registers a ViewPort asks graphics.library to program: what the OS turns
 * ViewPort DWidth/DHeight/Modes and the RasInfo's BitMap depth into. MgCop writes them into the
 * copper list and slots.c builds its colour-clock map from them, so both read one derivation. */
typedef struct rt_view_regs
{
    int planes;                 /* BitMap depth, the number of bitplanes fetched   */
    int hires;                  /* ViewPort Modes bit 15                          */
    int words;                  /* bitplane words per line: (DWidth + 15) / 16    */
    int vstart, vstop;          /* display lines [vstart, vstop)                  */
    u16 bplcon0, ddfstrt, ddfstop, diwstrt, diwstop;
} rt_view_regs;

/* Fills `r` from ViewPort `vp` (0 = nothing loaded: the A500 defaults). */
void rt_gfx_view_regs(rt_machine *m, u32 vp, rt_view_regs *r);

/* MrgCop(view): builds the copper list the game walks to find its bitplane pointers. */
void rt_gfx_mrg_cop(rt_machine *m, u32 view);

/* --- screen-write diagnostics (--progress) ------------------------------------------------- */
/* The bitmap the presenter copies out, 0 while no view is installed. */
u32  rt_gfx_screen_bitmap(rt_machine *m);
/* Notes that rows [first..last] of the shown bitmap were written, in 8-row bands. */
void rt_gfx_screen_touched(rt_machine *m, int first, int last);
/* --srcdiff: measure how much of a scrolled picture's source changes per presented frame. */
void rt_gfx_srcdiff(int on);

/* --- on-screen display --------------------------------------------------------------------- */
/* A chunky 8-bit drawing target: the runtime's own framebuffer (EMU_FB_MAX_W bytes per row) or a
 * platform display surface, which is what lets the port's overlay be drawn at display rate on top
 * of a picture that was composed once. */
typedef struct rt_surface
{
    u8  *dst;                   /* top row, one byte per pixel */
    u32  stride;                /* bytes between rows */
    int  w, h;                  /* the clip the drawing uses */
} rt_surface;

/* The port's whole overlay - the OSD line, the save icon, the pointer arrow and the aiming
 * crosshair - onto any surface, in the order and with the pens the presentation draws it with.
 * Sets the palette entries it uses in gfx->pal (rt_gfx_palette), so a caller that uploads the
 * overlay's palette range afterwards hands the device the colours it just drew with. The arrow is
 * drawn where rt_pointer_at last put it: a caller that wants it at display rate moves it there
 * (rt_pointer_at) before calling this. */
void rt_overlay_draw(rt_machine *m, rt_surface *s);

/* The port's own overlay, drawn into the chunky framebuffer after the game's frame has been
 * composed: a line of text in the top left corner (the game's disk font) and the save icon in the
 * top right. Both stay up for `frames` 50 Hz ticks. */
#define EMU_OSD_FRAMES 100         /* 2 seconds */
void rt_osd_text(rt_machine *m, const char *text, u32 frames);
void rt_osd_icon(rt_machine *m, u32 frames);

/* The port's pointer: the arrow a room screen shows under the mouse. It is drawn on top of the
 * presented picture, like the OSD, and is hidden while nothing calls rt_pointer_at (the DOS
 * build has no pointer, and a measurement run never sets one). x/y are framebuffer coordinates;
 * the arrow's tip is its top left pixel, the point a hover is tested at. */
void rt_pointer_at(s16 x, s16 y);
void rt_pointer_hidden(void);

/* The arrow itself, drawn into any chunky buffer (the title menu draws it while the game's own
 * presenter is not running). x/y are the tip, its top left pixel; a tip that would put part of the
 * arrow past the buffer's right or bottom edge is pulled in, because the arrow is the only pointer
 * the player sees and a half one reads as a lost pointer (a wider window's border art sits just past
 * the picture's edge, and an arrow at the edge slid under it). */
enum { EMU_PEN_POINTER = 246, EMU_PEN_POINTER_COLOURS = 2 };   /* 246..247: outline, fill */
/* The palette range the port's own surfaces draw in: the picker's art (224..232), the save icon
 * (240..245), the arrow (246..247), the crosshair (248..254) and the OSD line (255). A presenter
 * that draws the overlay itself, after the picture was uploaded, re-uploads this range - and only
 * it - so the overlay's colours are device state for a moment rather than for every present. */
#define EMU_OVERLAY_PEN_FIRST 224
void rt_pointer_draw(u8 *dst, u32 stride, int w, int h, int x, int y);

/* --- other port surfaces ------------------------------------------------------------------- */
/* A port surface that is neither the OSD nor the pointer (the map's save-slot picker) draws on
 * top of the composed picture. rt_overlay_begin returns the presented framebuffer and marks the
 * pictured planes stale, so the next present rebuilds the pixels the surface covers; the caller
 * then draws with rt_font_text_draw/rt_pointer_draw and installs its own colours with
 * rt_overlay_palette. Call it from on_present, after the game's frame is composed. */
u8  *rt_overlay_begin(void);
void rt_overlay_palette(u32 first, u32 count, const u8 *rgb);
/* The pointer's two colours (outline, fill), RGB. */
const u8 *rt_pointer_palette(void);

/* The port's aiming crosshair: drawn on top of the presented picture like the pointer, showing
 * the point a shot is tested at (the giant-ant fight). x/y are framebuffer coordinates and are the
 * crosshair's centre - the pixel the shot is tested at. Hidden while nothing calls
 * rt_crosshair_at, so a measurement run never shows it. */
void rt_crosshair_at(s16 x, s16 y);
void rt_crosshair_hidden(void);

const u8 *rt_gfx_framebuffer(void);
const u8 *rt_gfx_palette(void);
int  rt_gfx_width(void);
int  rt_gfx_height(void);
u32  rt_gfx_frames(void);

#endif /* EMU_GFX_H */
