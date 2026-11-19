/* The border behind the game view (a port feature).
 *
 * The Windows build keeps the 320x200 picture at 4:3, so a widescreen window leaves bars either
 * side. They used to be black; this paints the port's own artwork there (assets\border.png,
 * converted by tools\mkborder.ps1): curtains at the edges and black across the middle, authored
 * for the picture's own footprint, so the bars show curtain and the picture covers the middle.
 *
 * There is no counterpart for this in the original - it is the present backend, not the game - so
 * it may not read or write any machine state. It does not: the picture is composed by display.c
 * and blitted over this art, and this file only fills the bars. The image is scaled with point
 * sampling, because it is pixel art and any smoothing turns the folds to mush.
 *
 * The table is run-length encoded (count, R, G, B), because the shading has thousands of colours
 * and an 8-bit palette would band it; it is decoded once into a static image and scaled from
 * there.
 */
#include "types.h"
#include "border.h"
#include "border_art.h"

#define BORDER_PIXELS (BORDER_W * BORDER_H)

static u32 g_borderImg[BORDER_PIXELS];
static int g_borderReady;

static void border_decode(void)
{
    u32 i, n = 0;

    for (i = 0; i < BORDER_RUNS && n < BORDER_PIXELS; i++) {
        u32 left = g_borderRuns[i * 4];
        u32 rgb = ((u32)g_borderRuns[i * 4 + 1] << 16) |
                  ((u32)g_borderRuns[i * 4 + 2] << 8) |
                   (u32)g_borderRuns[i * 4 + 3];
        while (left > 0 && n < BORDER_PIXELS) {
            g_borderImg[n++] = rgb;
            left--;
        }
    }
    g_borderReady = 1;
}

void border_paint(u32 *dst, int w, int h)
{
    int x, y;

    if (dst == 0 || w <= 0 || h <= 0) return;
    if (!g_borderReady) border_decode();
    for (y = 0; y < h; y++) {
        const u32 *src = g_borderImg + ((u32)y * BORDER_H / (u32)h) * BORDER_W;
        u32 *row = dst + (u32)y * (u32)w;
        for (x = 0; x < w; x++)
            row[x] = src[(u32)x * BORDER_W / (u32)w];
    }
}

/* Decodes the art now, on the calling thread, so a later border_paint from another one (the
 * presenter's own thread, docs\display-rate.md phase 3) only reads the decoded table. */
void border_prepare(void)
{
    if (!g_borderReady) border_decode();
}
