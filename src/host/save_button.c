/* The situation map's SAVE GAME mark, pinned to the bottom right of the screen.
 *
 * The map's own script (FUN_00003b1e) loads the ANI bank's "SVGM" mark once (0x2c5c/0x3bac) and
 * then, on every update while the map is up, hands it to the MovE renderer as a child node whose
 * position is the map picture's offset plus 0x20/0xa (0x3cd2..0x3cf6). Move_Walk adds the node's
 * 16.16 x/y to the base it carries and Move_DrawNode turns the sum into the blit's screen position:
 *
 *     screenX = ((x + 0x8000) >> 16) - hotX        (0x1dbe0..0x1dbfa, and the same for y)
 *
 * so the mark sits on the map picture's own top-left corner and scrolls with the picture. The
 * player only ever sees it after pushing the cursor to the map's top-left edge.
 *
 * The port keeps the engine's mark and the engine's blit but places it at the bottom right of the
 * screen instead, 2 px in from the right and bottom edges. The seam is Move_DrawNode's entry,
 * where the sprite is one blit away: when the node being drawn carries the map's SVGM asset (the
 * pointer FUN_00003b1e keeps in DAT_0002682c) the two 16.16 position arguments on the stack are
 * replaced, and the node's own x/y - and every action that moves it - are left untouched.
 *
 * The screen is the map's own rectangle in the bitmap: 0x140 across, the width FUN_00003912
 * clamps the selection box to, and DAT_00026618 down, the height it uses and the clip the blitter
 * itself applies (the bitmap the nodes are drawn into is larger - 336x216 - and only this part of
 * it is shown). The mark's size is the node's source rectangle (srcW/srcH, what Move_DrawNode
 * passes to the blit) and the renderer subtracts the bitmap's hot spot, so that is added back to
 * the argument.
 *
 * A port feature: the original has no such placement, so there is nothing to diff against. It is
 * installed by the front ends in a played game only (a measurement run never installs
 * rc_entryHook), and tools\save-button-check.ps1 asserts its claim on the engine's own words: the
 * node's screenX/screenY are the corner while the map scrolls, and the same script played as a
 * measurement still shows the mark moving with the picture.
 */
#include <stdio.h>

#include "types.h"
#include "../recomp/cpu.h"
#include "machine.h"
#include "save_button.h"
#include "seams.h"

/* The renderer's entry, the map's SVGM asset and the screen's height are rows of the seam table
 * (src\host\seams.c); RC_ADDR adds the build's load address. SAVE_SCREEN_W is the map's own
 * rectangle in the bitmap and is the same in both builds. */

/* The map's own rectangle in the bitmap. SAVE_SCREEN_W is the width FUN_00003912 clamps the
 * selection box to and is the same in both builds; the height is the engine's own word. */
#define SAVE_SCREEN_W  0x140

/* The words of docs\structs.md's move_node, move_asset and move_bitmap. */
#define NODE_ASSET     0x04u
#define NODE_SRCW      0x34u
#define NODE_SRCH      0x36u
#define ASSET_BITMAP   0x0Cu
#define BMP_HOTX       0x08u
#define BMP_HOTY       0x0Au

/* Stack of Move_DrawNode as its caller left it: the return address, the node, x, y, flags. */
#define ARG_NODE       4u
#define ARG_X          8u
#define ARG_Y          12u

/* 2 px of the screen stay clear to the right and below the mark, and the mark is lifted another
 * 12 px: the map cursor's own travel window ends at DAT_00028A48 (0xC4 on this screen), so an
 * arrow whose tip is the cursor less its 0x12 hot spot could not reach a mark at the very bottom
 * (0xB6..0xC5). Twelve rows up (0xAA..0xB9) puts the whole mark inside the window for the cursor
 * and its top rows inside it for the arrow's tip. */
#define SAVE_PAD       2
#define SAVE_UP        12

static int s_log;                   /* --savelog: one line per placement */
static int s_noted;                 /* the seam has said it is pinning the mark */
static int s_haveRect;              /* the map has placed the mark at least once */
static s32 s_rx, s_ry, s_rw, s_rh;  /* ... and where, in screen coordinates */

void host_save_button_log(int on)
{
    s_log = on;
}

int host_save_button_rect(s32 *x, s32 *y, s32 *w, s32 *h)
{
    if (!s_haveRect) return 0;
    if (x != 0) *x = s_rx;
    if (y != 0) *y = s_ry;
    if (w != 0) *w = s_rw;
    if (h != 0) *h = s_rh;
    return 1;
}

int host_save_button_entry(cpu_t *c, rt_machine *m, u32 pc)
{
    u32 sp, node, asset, bm;
    s32 hotX, hotY, w, h, sw, sh, x, y, wasX = 0, wasY = 0;

    if (pc != RC_ADDR(SAVE_DRAW_PC)) return 0;

    sp = c->a[7];
    node = rt_read32(&m->mem, sp + ARG_NODE);
    if (node == 0) return 1;
    asset = rt_read32(&m->mem, node + NODE_ASSET);
    if (asset == 0u || asset != rt_read32(&m->mem, RC_ADDR(SAVE_ASSET))) return 1;

    bm = rt_read32(&m->mem, asset + ASSET_BITMAP);
    if (bm == 0u) return 1;
    sw = SAVE_SCREEN_W;
    sh = (s32)rt_read16(&m->mem, RC_ADDR(SAVE_SCREEN_H));
    w  = (s32)(s16)rt_read16(&m->mem, node + NODE_SRCW);
    h  = (s32)(s16)rt_read16(&m->mem, node + NODE_SRCH);
    if (sh <= 0 || w <= 0 || h <= 0) return 1;
    hotX = (s32)(s16)rt_read16(&m->mem, bm + BMP_HOTX);
    hotY = (s32)(s16)rt_read16(&m->mem, bm + BMP_HOTY);

    if (s_log)
    {
        wasX = ((s32)(rt_read32(&m->mem, sp + ARG_X) + 0x8000u) >> 16) - hotX;
        wasY = ((s32)(rt_read32(&m->mem, sp + ARG_Y) + 0x8000u) >> 16) - hotY;
    }

    /* Where the mark's top left goes, then the arguments that make Move_DrawNode compute it. */
    x = sw - w - SAVE_PAD;
    y = sh - h - SAVE_PAD - SAVE_UP;
    rt_write32(&m->mem, sp + ARG_X, (u32)((x + hotX) << 16));
    rt_write32(&m->mem, sp + ARG_Y, (u32)((y + hotY) << 16));
    s_rx = x;
    s_ry = y;
    s_rw = w;
    s_rh = h;
    s_haveRect = 1;

    if (!s_noted)
    {
        s_noted = 1;
        printf("save: the map's SAVE GAME mark is pinned to the screen's corner (frame %lu)\n",
               (unsigned long)m->frame);
    }
    if (s_log)
        printf("save: frame %lu mark %ldx%ld at %ld,%ld -> %ld,%ld (screen %ldx%ld)\n",
               (unsigned long)m->frame, (long)w, (long)h, (long)wasX, (long)wasY,
               (long)x, (long)y, (long)sw, (long)sh);
    return 1;
}
