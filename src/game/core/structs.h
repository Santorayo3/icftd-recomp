/* Generated from docs/structs.csv by tools/structs.ps1 - do not edit.
 *
 * These are the layouts of the ORIGINAL program, as recovered from the
 * assembly and confirmed against the decompiler's field map (re/model).
 * Field order, widths and padding are the 68k's, so byte offsets match;
 * that is what lets a port read the real data instead of rebuilding it.
 */
#ifndef ICFTD_STRUCTS_H
#define ICFTD_STRUCTS_H

#include <stdint.h>

/* move_node - 62 bytes (0x3e) */
struct move_node {
    struct move_node *next;            /* +0x00  next node in the display list */
    struct move_asset *asset;          /* +0x04  source asset (picture or script) */
    uint16_t id;                       /* +0x08  id copied from the creation request; children are found by it */
    int16_t priority;                  /* +0x0a  insert position: the list is kept sorted by this */
    int16_t screenX;                   /* +0x0c  recomputed by DrawNode every frame */
    int16_t screenY;                   /* +0x0e  recomputed by DrawNode every frame */
    int32_t x;                         /* +0x10  16.16 fixed point */
    int32_t y;                         /* +0x14  16.16 fixed point */
    int32_t vx;                        /* +0x18  16.16 */
    int32_t vy;                        /* +0x1c  16.16 */
    int32_t ax;                        /* +0x20  16.16 */
    int32_t ay;                        /* +0x24  16.16 */
    int16_t wait;                      /* +0x28  frames before the script may run again */
    int16_t pc;                        /* +0x2a  next command index */
    struct move_node *child;           /* +0x2c  child list for a script node */
    uint16_t srcX;                     /* +0x30  source rectangle */
    uint16_t srcY;                     /* +0x32 */
    uint16_t srcW;                     /* +0x34  defaults to the asset width */
    uint16_t srcH;                     /* +0x36  defaults to the asset height */
    uint32_t channel;                  /* +0x38  bit mask ANDed with the plane table before blitting */
    int16_t vscale;                    /* +0x3c  vertical scale, 1 = normal */
};

/* move_asset - 56 bytes (0x38) */
struct move_asset {
    uint8_t _pad_00[11];
    uint8_t flags;                     /* +0x0b  bit 0 = leaf with a bitmap; bit 1 = do not recurse */
    struct move_bitmap *bitmap;        /* +0x0c  bitmap header (script assets keep a command count here) */
    uint8_t _pad_10[40];
};

/* move_bitmap - 56 bytes (0x38) */
struct move_bitmap {
    uint16_t width;                    /* +0x00 */
    uint16_t height;                   /* +0x02 */
    uint8_t _pad_04[4];
    int16_t hotX;                      /* +0x08  x offset subtracted when placing */
    int16_t hotY;                      /* +0x0a  y offset subtracted when placing */
    uint8_t pixels;                    /* +0x0c  pixel data starts here; passed as the blitter source base */
    uint8_t _pad_0d[35];
    uint32_t maskSource;               /* +0x30  read as a dword and passed to the blitter */
    uint32_t channel;                  /* +0x34  default channel mask copied into move_node.channel */
};

#endif /* ICFTD_STRUCTS_H */

