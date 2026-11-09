/* Milestone 1 main: asset bootstrap and picture browser over game.pak.
 *
 *   icftd.exe                     start: decodes assets\game.pak from disks\ if needed
 *   icftd.exe --browse [pack]     step through every picture in the pack
 *   icftd.exe --convert           rebuild assets\game.pak from the disk images
 *   icftd.exe --demo              M0 demo (palette ramp + bouncing block)
 *
 * The browser is the first acceptance test of the asset pipeline: what it shows must be
 * pixel identical to the PNGs the exporter writes, and every picture must be reachable.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "types.h"
#include "platform.h"
#include "gfx.h"
#include "pack.h"
#include "assets.h"
#include "move.h"
#include "amiga/graphics.h"
#include "amiga/blitter.h"

static u8 palette[PAL_ENTRIES * 3];
static s32 box_x = 100, box_y = 80, box_dx = 2, box_dy = 1;

/* ---------------------------------------------------------------- M0 demo ---- */

static void build_palette(void)
{
    s32 i;
    for (i = 0; i < 16; i++) {
        palette[i * 3 + 0] = (u8)(i * 17);
        palette[i * 3 + 1] = (u8)(i * 17);
        palette[i * 3 + 2] = (u8)(i * 17);
    }
    palette[16 * 3 + 0] = 255; palette[16 * 3 + 1] = 64; palette[16 * 3 + 2] = 32;
    for (i = 17; i < PAL_ENTRIES; i++) {
        palette[i * 3 + 0] = (u8)((i * 37) & 0xFF);
        palette[i * 3 + 1] = (u8)((i * 11) & 0xFF);
        palette[i * 3 + 2] = (u8)((i * 23) & 0xFF);
    }
}

static void demo_frame(void)
{
    s32 x, y;

    box_x += box_dx;
    box_y += box_dy;
    if (box_x < 0 || box_x > SCREEN_W - 24) { box_dx = -box_dx; box_x += box_dx; }
    if (box_y < 0 || box_y > SCREEN_H - 24) { box_dy = -box_dy; box_y += box_dy; }

    for (y = 0; y < SCREEN_H; y++)
        for (x = 0; x < SCREEN_W; x++)
            gfx_fb[(u32)y * SCREEN_W + (u32)x] = (u8)((((x >> 4) + (y >> 4)) & 15));
    gfx_fill(box_x, box_y, 24, 24, 16);
}

static int run_demo(void)
{
    input_state in;
    u32 ticks = 0;

    build_palette();
    plat_set_palette(0, PAL_ENTRIES, palette);
    gfx_clear(0);
    for (;;) {
        plat_frame_sync();
        if (!plat_pump(&in)) break;
        if (in.pressed[KEY_ESCAPE]) break;
        demo_frame();
        ticks++;
        palette[16 * 3 + 1] = (u8)((ticks * 3) & 0xFF);
        plat_set_palette(16, 1, palette + 16 * 3);
        plat_present();
    }
    return 0;
}

/* ------------------------------------------------------------- M1 browser ---- */

typedef struct {
    pak  p;
    u8  *band;        /* row band scratch; far heap on DOS */
    u32  band_bytes;
    char title[96];
} browser;

#define BAND_BYTES 16384u

/* Blits a picture band by band; pictures can be larger than the screen (608x216
 * tile maps, the 640x400 map screen), so only visible rows are read. */
static void draw_picture(const pak *p, s32 index, const pic_hdr *hdr, u8 *band, u32 band_bytes)
{
    s32 dx, dy, y0, y1, y;
    u32 rows_per_band;

    dx = (SCREEN_W - (s32)hdr->w) / 2;
    dy = (SCREEN_H - (s32)hdr->h) / 2;
    rows_per_band = band_bytes / hdr->w;
    if (rows_per_band == 0) return;
    y0 = dy < 0 ? -dy : 0;
    y1 = dy + (s32)hdr->h > SCREEN_H ? SCREEN_H - dy : (s32)hdr->h;

    for (y = y0; y < y1; y += (s32)rows_per_band) {
        s32 rows = y1 - y < (s32)rows_per_band ? y1 - y : (s32)rows_per_band;
        if (pic_rows(p, index, hdr, (u32)y, (u32)rows, band, band_bytes) != (u32)rows * hdr->w)
            return;
        gfx_blit_part(dx, dy + y, hdr->w, rows, band, hdr->w, 0, 0, -1);
    }
}

static s32 prev_picture(const pak *p, s32 index)
{
    s32 i;
    for (i = index - 1; i >= 0; i--) if (pak_type(p, i) == PAK_PICTURE) return i;
    for (i = (s32)p->count - 1; i > index; i--) if (pak_type(p, i) == PAK_PICTURE) return i;
    return index;
}

static void browser_show(browser *b, s32 index)
{
    pic_hdr hdr;
    u32 colours;

    if (!pic_header(&b->p, index, &hdr)) return;
    colours = pal_read(&b->p, (s32)hdr.palette, palette, PAL_ENTRIES);
    if (colours == 0) {
        memset(palette, 0, sizeof palette);
        colours = 1;
    }
    plat_set_palette(0, PAL_ENTRIES, palette);

    gfx_clear(0);
    draw_picture(&b->p, index, &hdr, b->band, b->band_bytes);

    sprintf(b->title, "%d/%lu  %s  %ux%u p%u  %lu cols", (int)index,
            (unsigned long)b->p.count, pak_name(&b->p, index),
            hdr.w, hdr.h, hdr.planes, (unsigned long)colours);
    plat_set_title(b->title);
}

static int run_browse(const char *path)
{
    browser *b;
    input_state in;
    s32 index;

    b = (browser *)plat_alloc(sizeof(browser));
    if (b == NULLP) { printf("out of memory\n"); return 1; }
    b->band_bytes = BAND_BYTES;
    b->band = (u8 *)plat_alloc(b->band_bytes);
    if (b->band == NULLP) { printf("out of memory\n"); return 1; }

    if (!pak_open(&b->p, path)) {
        printf("cannot open pack '%s'\n", path);
        return 1;
    }
    printf("pack: %lu entries\n", (unsigned long)b->p.count);

    index = pak_find_type(&b->p, PAK_PICTURE, 0);
    if (index < 0) { printf("no pictures in pack\n"); pak_close(&b->p); return 1; }
    browser_show(b, index);
    plat_present();

    for (;;) {
        s32 next;

        plat_frame_sync();
        if (!plat_pump(&in)) break;
        if (in.pressed[KEY_ESCAPE]) break;

        if (in.pressed[KEY_RIGHT] || in.pressed[KEY_FIRE] || in.pressed[KEY_ENTER]) {
            next = pak_find_type(&b->p, PAK_PICTURE, index + 1);
            if (next < 0) next = pak_find_type(&b->p, PAK_PICTURE, 0);
            index = next;
        }
        else if (in.pressed[KEY_LEFT]) {
            index = prev_picture(&b->p, index);
        }
        else if (in.pressed[KEY_DOWN]) {
            s32 i;
            for (i = index + 10; i < (s32)b->p.count; i++)
                if (pak_type(&b->p, i) == PAK_PICTURE) { index = i; break; }
        }
        else if (in.pressed[KEY_UP]) {
            s32 i;
            for (i = index - 10; i > 0; i--)
                if (pak_type(&b->p, i) == PAK_PICTURE) { index = i; break; }
        }
        else {
            continue;
        }
        browser_show(b, index);
        plat_present();
    }

    pak_close(&b->p);
    return 0;
}

/* ------------------------------------------------------------ M1 checksums ---- */
/* Prints "name w h hash" for every picture; tools/verify-pack.ps1 compares these with
 * the .idx8 files the exporter writes, which is the acceptance test for the pack. */

static u32 fnv1a(const u8 *p, u32 n)
{
    u32 h = 2166136261UL;
    while (n--) {
        h ^= *p++;
        h *= 16777619UL;
    }
    return h;
}

static int run_checksum(const char *path)
{
    pak p;
    pic_hdr hdr;
    u8 *band;
    s32 i;
    u32 bad = 0;

    if (!pak_open(&p, path)) { printf("cannot open pack '%s'\n", path); return 1; }
    band = (u8 *)plat_alloc(BAND_BYTES);
    if (band == NULLP) { printf("out of memory\n"); pak_close(&p); return 1; }

    for (i = 0; i < (s32)p.count; i++) {
        u32 h = 2166136261UL, y, rows_per_band, read;

        if (pak_type(&p, i) != PAK_PICTURE) continue;
        if (!pic_header(&p, i, &hdr)) { bad++; continue; }
        rows_per_band = BAND_BYTES / hdr.w;
        if (rows_per_band == 0) { bad++; continue; }

        for (y = 0; y < hdr.h; y += rows_per_band) {
            u32 rows = hdr.h - y < rows_per_band ? (u32)hdr.h - y : rows_per_band;
            read = pic_rows(&p, i, &hdr, y, rows, band, BAND_BYTES);
            if (read != (u32)hdr.w * rows) { bad++; break; }
            {
                u32 n = read;
                const u8 *q = band;
                while (n--) { h ^= *q++; h *= 16777619UL; }
            }
        }
        printf("%s %u %u %08lx\n", pak_name(&p, i), hdr.w, hdr.h, (unsigned long)h);
    }
    pak_close(&p);
    plat_free(band);
    if (bad) printf("# %lu pictures could not be read\n", (unsigned long)bad);
    return 0;
}

/* -------------------------------------------------------------- M1 screenshot -- */
/* Renders one picture into the framebuffer and writes it as a 256-colour BMP.  Used by
 * tools/show-picture.ps1 to eyeball the pipeline and later to diff against WinUAE
 * captures; BMP keeps the writer trivial on both platforms. */

static int write_bmp(const char *path, const u8 *fb, const u8 *pal)
{
    FILE *f;
    u8 head[54];
    u32 image = SCREEN_W * SCREEN_H;
    u32 file_size = 54 + 1024 + image;
    s32 i, row;

    f = fopen(path, "wb");
    if (!f) return 0;

    memset(head, 0, sizeof head);
    head[0] = 'B'; head[1] = 'M';
    head[2] = (u8)file_size; head[3] = (u8)(file_size >> 8);
    head[4] = (u8)(file_size >> 16); head[5] = (u8)(file_size >> 24);
    head[10] = 54; head[11] = 4;                 /* pixel data offset = 1078 */
    head[14] = 40;                               /* BITMAPINFOHEADER */
    head[18] = (u8)SCREEN_W; head[19] = (u8)(SCREEN_W >> 8);
    head[22] = (u8)SCREEN_H; head[23] = (u8)(SCREEN_H >> 8);
    head[26] = 1;                                /* planes */
    head[28] = 8;                                /* bits per pixel */
    head[34] = (u8)image; head[35] = (u8)(image >> 8);
    head[36] = (u8)(image >> 16); head[37] = (u8)(image >> 24);
    fwrite(head, 1, 54, f);

    for (i = 0; i < 256; i++) {
        u8 bgr[4];
        bgr[0] = pal[i * 3 + 2];
        bgr[1] = pal[i * 3 + 1];
        bgr[2] = pal[i * 3 + 0];
        bgr[3] = 0;
        fwrite(bgr, 1, 4, f);
    }
    for (row = SCREEN_H - 1; row >= 0; row--)      /* BMP rows are bottom-up */
        fwrite(fb + (u32)row * SCREEN_W, 1, SCREEN_W, f);

    fclose(f);
    return 1;
}

static s32 entry_arg(const pak *p, const char *s);

static int run_shot(const char *pack_path, const char *what, const char *out)
{
    pak p;
    pic_hdr hdr;
    u8 *band;
    s32 i, found = 0;

    if (!pak_open(&p, pack_path)) { printf("cannot open pack '%s'\n", pack_path); return 1; }
    band = (u8 *)plat_alloc(BAND_BYTES);
    if (band == NULLP) { printf("out of memory\n"); pak_close(&p); return 1; }

    found = entry_arg(&p, what);
    if (found < 0) {
        for (i = 0; i < (s32)p.count; i++)
            if (pak_type(&p, i) == PAK_PICTURE) { found = i; break; }
    }
    if (!pic_header(&p, found, &hdr)) { printf("no such picture: %s\n", what); return 1; }

    {
        u32 colours = pal_read(&p, (s32)hdr.palette, palette, PAL_ENTRIES);
        if (colours == 0) memset(palette, 0, sizeof palette);
    }
    gfx_clear(0);
    draw_picture(&p, found, &hdr, band, BAND_BYTES);
    if (!write_bmp(out, gfx_fb, palette)) { printf("cannot write '%s'\n", out); return 1; }
    printf("%s %ux%u -> %s\n", pak_name(&p, found), hdr.w, hdr.h, out);
    pak_close(&p);
    plat_free(band);
    return 0;
}

/* -------------------------------------------------------------- M3 scene ---- */
/* Backdrop plus one sprite, composited with the engine's own blit routine: minterm 0xCA
 * with a 1-bit cookie-cut mask built from the transparent colour, exactly like
 * FUN_0001E8C8.  First target: !B28 + TWIN at (2,135) with key 28 = ref\scene1.bmp. */

static s32 entry_arg(const pak *p, const char *s)
{
    if (s[0] >= '0' && s[0] <= '9') return (s32)atoi(s);
    return pak_find(p, s);
}

static agfx_bitmap *load_bitmap(pak *p, s32 index, pic_hdr *hdr, u8 *band, u32 band_bytes)
{
    agfx_bitmap *bm;
    u32 rows_per_band, y;

    if (!pic_header(p, index, hdr)) return NULLP;
    bm = agfx_bitmap_alloc((s32)hdr->w, (s32)hdr->h, (u16)(hdr->planes ? hdr->planes : 5), 0);
    if (bm == NULLP) return NULLP;

    rows_per_band = band_bytes / hdr->w;
    if (rows_per_band == 0) { agfx_bitmap_free(bm); return NULLP; }
    for (y = 0; y < hdr->h; y += rows_per_band) {
        u32 rows = hdr->h - y < rows_per_band ? hdr->h - y : rows_per_band;
        if (pic_rows(p, index, hdr, y, rows, band, band_bytes) != rows * hdr->w) {
            agfx_bitmap_free(bm);
            return NULLP;
        }
        memcpy(bm->pixels + y * (u32)bm->stride, band, rows * hdr->w);
    }
    return bm;
}

static int run_scene(const char *pack_path, const char *backdrop, const char *overlay,
                     s32 x, s32 y, s32 key, const char *out, const char *pal_name)
{
    pak p;
    pic_hdr bhdr, ohdr;
    agfx_bitmap screen, *bm = NULLP;
    agfx_blit_job job;
    u8 *band = NULLP, *mask = NULLP;
    s32 bi, oi;
    u32 painted;

    if (!pak_open(&p, pack_path)) { printf("cannot open pack '%s'\n", pack_path); return 1; }
    band = (u8 *)plat_alloc(BAND_BYTES);
    if (band == NULLP) { printf("out of memory\n"); pak_close(&p); return 1; }

    bi = entry_arg(&p, backdrop);
    oi = entry_arg(&p, overlay);
    bm = load_bitmap(&p, oi, &ohdr, band, BAND_BYTES);
    if (bm == NULLP) { printf("no such picture: %s\n", overlay); return 1; }

    if (bi >= 0 && pic_header(&p, bi, &bhdr)) {
        if (pal_read(&p, (s32)bhdr.palette, palette, PAL_ENTRIES) == 0)
            memset(palette, 0, sizeof palette);
        gfx_clear(0);
        draw_picture(&p, bi, &bhdr, band, BAND_BYTES);
    }
    else if (strcmp(backdrop, "-") == 0) {
        /* No backdrop: the intro draws the logo straight onto a cleared screen. */
        bhdr = ohdr;
        if (pal_read(&p, (s32)ohdr.palette, palette, PAL_ENTRIES) == 0)
            memset(palette, 0, sizeof palette);
        gfx_clear(0);
    }
    else {
        printf("no such picture: %s\n", backdrop);
        return 1;
    }

    if (pal_name != NULLP) {
        s32 pi = entry_arg(&p, pal_name);
        if (pi < 0 || pal_read(&p, pi, palette, PAL_ENTRIES) == 0) {
            printf("no such palette: %s\n", pal_name);
            return 1;
        }
    }

    mask = agfx_mask_from_key(bm, (u8)key);
    if (mask == NULLP) { printf("out of memory\n"); return 1; }

    agfx_bitmap_from_fb(&screen);
    memset(&job, 0, sizeof job);
    job.src = bm;
    job.dst = &screen;
    job.dx = (s16)x;
    job.dy = (s16)y;
    job.w = (s16)bm->width;
    job.h = (s16)bm->height;
    job.mask = mask;
    job.mask_stride = agfx_mask_stride(bm->width);
    painted = agfx_blit(&job);

    if (!write_bmp(out, gfx_fb, palette)) { printf("cannot write '%s'\n", out); return 1; }
    printf("%s + %s at %d,%d key %d (%lu px) -> %s\n",
           bi >= 0 ? pak_name(&p, bi) : "-", pak_name(&p, oi), (int)x, (int)y, (int)key,
           (unsigned long)painted, out);

    plat_free(mask);
    agfx_bitmap_free(bm);
    plat_free(band);
    pak_close(&p);
    return 0;
}

/* --------------------------------------------------------------- compose ---- */
/* Draws a list of objects over a cleared screen: a frame of a script sequence, built
 * from the coordinates the script itself uses.  Specs are "name,x,y,key" and are blitted
 * in the order given, exactly like FUN_0001F89C does for MovE command 1. */

static int run_compose(const char *pack_path, const char *out, const char *pal_name,
                       int count, char **specs)
{
    pak p;
    pic_hdr hdr;
    agfx_bitmap screen, *bm;
    agfx_blit_job job;
    u8 *band, *mask;
    char name[128];
    s32 i, x, y, key, index, pal_done = 0;

    if (!pak_open(&p, pack_path)) { printf("cannot open pack '%s'\n", pack_path); return 1; }
    band = (u8 *)plat_alloc(BAND_BYTES);
    if (band == NULLP) { printf("out of memory\n"); pak_close(&p); return 1; }

    memset(palette, 0, sizeof palette);
    if (strcmp(pal_name, "-") != 0) {
        s32 pi = entry_arg(&p, pal_name);
        if (pi < 0 || pal_read(&p, pi, palette, PAL_ENTRIES) == 0) {
            printf("no such palette: %s\n", pal_name);
            return 1;
        }
    }
    gfx_clear(0);
    agfx_bitmap_from_fb(&screen);

    for (i = 0; i < count; i++) {
        if (sscanf(specs[i], "%127[^,],%ld,%ld,%ld", name, &x, &y, &key) != 4) {
            printf("bad object spec '%s' (want name,x,y,key)\n", specs[i]);
            return 1;
        }
        index = entry_arg(&p, name);
        bm = load_bitmap(&p, index, &hdr, band, BAND_BYTES);
        if (bm == NULLP) { printf("no such picture: %s\n", name); return 1; }
        if (pal_name[0] == '-' && !pal_done) {
            pal_done = 1;
            if (pal_read(&p, (s32)hdr.palette, palette, PAL_ENTRIES) == 0)
                memset(palette, 0, sizeof palette);
        }
        mask = agfx_mask_from_key(bm, (u8)key);
        if (mask == NULLP) { printf("out of memory\n"); return 1; }

        memset(&job, 0, sizeof job);
        job.src = bm;
        job.dst = &screen;
        job.dx = (s16)x;
        job.dy = (s16)y;
        job.w = (s16)bm->width;
        job.h = (s16)bm->height;
        job.mask = mask;
        job.mask_stride = agfx_mask_stride(bm->width);
        agfx_blit(&job);

        plat_free(mask);
        agfx_bitmap_free(bm);
    }

    if (!write_bmp(out, gfx_fb, palette)) { printf("cannot write '%s'\n", out); return 1; }
    printf("composed %d object(s) -> %s\n", count, out);
    plat_free(band);
    pak_close(&p);
    return 0;
}

/* ----------------------------------------------------------------- intro ---- */
/* Reads a MovE script out of the pack and resolves its asset names against the script's
 * own bank ("Desert1/OPEN/!OPN" -> assets named "Desert1/OPEN/<name>"). */

static int load_script(pak *p, const char *script_name, mv_script **out)
{
    u8 *data;
    u32 size;
    s32 index = entry_arg(p, script_name);
    char prefix[96];
    const char *slash;

    if (index < 0 || pak_type(p, index) != PAK_SCRIPT) {
        printf("no such script: %s\n", script_name);
        return 0;
    }
    size = pak_size(p, index);
    data = (u8 *)plat_alloc(size + 4u);
    *out = (mv_script *)plat_alloc(sizeof(mv_script));
    if (data == NULLP || *out == NULLP) { printf("out of memory\n"); return 0; }
    if (pak_read(p, index, data, size) != size) { printf("short read\n"); return 0; }
    if (!mv_parse(data, size, *out)) { printf("cannot parse %s\n", script_name); return 0; }
    plat_free(data);

    slash = strrchr(script_name, '/');
    if (slash != NULLP) {
        u32 n = (u32)(slash - script_name) + 1u;
        if (n >= sizeof prefix) n = sizeof prefix - 1;
        memcpy(prefix, script_name, n);
        prefix[n] = 0;
    } else prefix[0] = 0;

    printf("%s: %d assets, %d labels, %d assets resolved\n",
           pak_name(p, index), (int)(*out)->assetCount, (int)(*out)->labelCount,
           (int)mv_resolve(*out, p, prefix));
    return 1;
}

/* Runs a label through the runtime and writes one BMP per frame, so the intro can be
 * compared frame by frame against a WinUAE capture. */
static int run_intro(const char *pack_path, const char *script_name, const char *label,
                     s32 from, s32 to, const char *prefix)
{
    pak p;
    mv_script *sc;
    s32 f;
    char out[256];

    if (!pak_open(&p, pack_path)) { printf("cannot open pack '%s'\n", pack_path); return 1; }
    if (!load_script(&p, script_name, &sc)) return 1;
    if (!mv_start(&p, sc, label)) { printf("no such label: %s\n", label); return 1; }

    for (f = 0; f <= to; f++) {
        if (f > 0) gfx_clear(0);
        mv_tick();
        if (f < from) continue;
        sprintf(out, "%s%04d.bmp", prefix, (int)f);
        if (!write_bmp(out, gfx_fb, (u8 *)mv_palette())) { printf("cannot write '%s'\n", out); return 1; }
        if (f == from || f == to) mv_report();
    }
    printf("intro: frames %d..%d -> %s%%04d.bmp\n", (int)from, (int)to, prefix);
    return 0;
}

/* Plays a label in the window at the Amiga's 50 Hz, looping when it ends. */
static int run_play(const char *pack_path, const char *script_name, const char *label)
{
    pak p;
    mv_script *sc;
    input_state in;
    s32 hold = 0;

    if (!pak_open(&p, pack_path)) { printf("cannot open pack '%s'\n", pack_path); return 1; }
    if (!load_script(&p, script_name, &sc)) return 1;
    if (!mv_start(&p, sc, label)) { printf("no such label: %s\n", label); return 1; }

    plat_set_title("It Came from the Desert - MovE intro");
    gfx_clear(0);
    plat_set_palette(0, MV_PAL_COLOURS, mv_palette());
    plat_present();
    printf("playing %s / %s - ESC quits\n", script_name, label);

    for (;;) {
        plat_frame_sync();
        if (!plat_pump(&in)) break;
        if (in.pressed[KEY_ESCAPE]) break;

        gfx_clear(0);
        mv_tick();
        plat_set_palette(0, MV_PAL_COLOURS, mv_palette());
        plat_present();

        /* the label runs out after the collapse: hold the last frame, then start over */
        if (mv_done()) {
            if (++hold > 75) { hold = 0; mv_start(&p, sc, label); }
        } else hold = 0;
    }
    printf("stopped after %d frame(s)\n", (int)mv_frame());
    return 0;
}


/* ------------------------------------------------------------ M2 self test ---- */
/* Exercises every primitive the original's graphics calls need, into one image that can
 * be compared by eye (and later diffed) against a WinUAE capture. */

static void gfx_test_palette(agfx_colormap *cm)
{
    s32 i;

    agfx_set_rgb4(cm, 0, 0, 0, 0);
    for (i = 1; i < 9; i++) agfx_set_rgb4(cm, (u16)i, (u16)i, (u16)i, (u16)i);
    for (i = 0; i < 8; i++) {
        agfx_set_rgb4(cm, (u16)(9 + i), 15, (u16)(i * 2), 0);
        agfx_set_rgb4(cm, (u16)(17 + i), (u16)(i * 2), 0, (u16)(15 - i));
    }
    agfx_set_rgb4(cm, 25, 0, 15, 0);
    agfx_set_rgb4(cm, 26, 0, 15, 15);
    agfx_set_rgb4(cm, 27, 15, 15, 0);
    agfx_set_rgb4(cm, 28, 15, 0, 15);
    agfx_set_rgb4(cm, 29, 15, 15, 15);
    agfx_set_rgb4(cm, 30, 8, 8, 15);
    agfx_set_rgb4(cm, 31, 15, 8, 8);
}

static int run_gfx_test(const char *out)
{
    agfx_bitmap fb;
    agfx_colormap *cm;
    agfx_rastport rp;
    agfx_bitmap *spr, *msk;
    const agfx_stats *st;
    s32 i, x, y;

    cm = agfx_colormap_alloc(32);
    if (cm == NULLP) { printf("out of memory\n"); return 1; }
    agfx_init();
    gfx_test_palette(cm);
    agfx_palette_upload(cm, 0, 32);

    agfx_bitmap_from_fb(&fb);
    agfx_init_rastport(&rp, &fb, cm);

    /* background + solid bars (RectFill) */
    agfx_set_apen(&rp, 1);
    agfx_rect_fill(&rp, 0, 0, SCREEN_W - 1, SCREEN_H - 1);
    agfx_set_apen(&rp, 2);
    agfx_rect_fill(&rp, 0, 0, SCREEN_W - 1, 11);
    agfx_set_apen(&rp, 3);
    agfx_rect_fill(&rp, 0, SCREEN_H - 13, SCREEN_W - 1, SCREEN_H - 1);

    /* palette swatches along the top bar */
    for (i = 0; i < 32; i++) {
        agfx_set_apen(&rp, (u8)i);
        agfx_rect_fill(&rp, (s16)(4 + i * 9), 2, (s16)(4 + i * 9 + 7), 9);
    }

    /* line fan (Move/Draw) */
    agfx_set_apen(&rp, 12);
    {
        /* 16 points of a radius-60 circle, tabulated so the core needs no libm */
        static const s16 cx[16] = {  60,  55,  42,  23,   0, -23, -42, -55,
                                    -60, -55, -42, -23,   0,  23,  42,  55 };
        static const s16 cy[16] = {   0,  23,  42,  55,  60,  55,  42,  23,
                                      0, -23, -42, -55, -60, -55, -42, -23 };
        for (i = 0; i < 16; i++) {
            agfx_move(&rp, 160, 92);
            agfx_draw(&rp, (s16)(160 + cx[i]), (s16)(92 + cy[i]));
        }
    }

    /* filled polygon (AreaMove/AreaDraw/AreaEnd): a 6 point star */
    agfx_set_apen(&rp, 20);
    agfx_area_move(&rp, 40, 60);
    agfx_area_draw(&rp, 68, 60);
    agfx_area_draw(&rp, 74, 40);
    agfx_area_draw(&rp, 80, 60);
    agfx_area_draw(&rp, 108, 60);
    agfx_area_draw(&rp, 86, 74);
    agfx_area_draw(&rp, 94, 96);
    agfx_area_draw(&rp, 74, 82);
    agfx_area_draw(&rp, 54, 96);
    agfx_area_draw(&rp, 62, 74);
    agfx_area_end(&rp);

    /* a sprite blitted twice, once straight and once through a mask */
    spr = agfx_bitmap_alloc(24, 24, 5, 0);
    msk = agfx_bitmap_alloc(24, 24, 1, 0);
    if (spr == NULLP || msk == NULLP) { printf("out of memory\n"); return 1; }
    for (y = 0; y < 24; y++)
        for (x = 0; x < 24; x++) {
            s32 dx = x - 12, dy = y - 12;
            spr->pixels[y * spr->stride + x] = (u8)((dx * dx + dy * dy) < 110 ? 25 + ((x + y) & 3) : 0);
            msk->pixels[y * msk->stride + x] = (u8)((dx * dx + dy * dy) < 110);
        }
    agfx_blt_bitmap(&rp, spr, 180, 70, 24, 24, AGFX_MT_SRC, 0, 0);
    agfx_blt_mask(&rp, spr, 220, 70, 24, 24, AGFX_MT_COOKIE, msk, 0, 0);
    agfx_bitmap_free(spr);
    agfx_bitmap_free(msk);

    st = agfx_get_stats();
    printf("gfx-test: %lu blits, %lu rects, %lu lines, %lu areas, %lu palettes\n",
           (unsigned long)st->blits, (unsigned long)st->rect_fills,
           (unsigned long)st->lines, (unsigned long)st->areas,
           (unsigned long)st->palette_uploads);

    {
        u8 rgb[PAL_ENTRIES * 3];
        memset(rgb, 0, sizeof rgb);
        for (i = 0; i < 32; i++) {
            u16 c = cm->color[i];
            rgb[i * 3 + 0] = (u8)(((c >> 8) & 0x0F) * 17);
            rgb[i * 3 + 1] = (u8)(((c >> 4) & 0x0F) * 17);
            rgb[i * 3 + 2] = (u8)((c & 0x0F) * 17);
        }
        if (!write_bmp(out, gfx_fb, rgb)) { printf("cannot write '%s'\n", out); return 1; }
    }
    printf("wrote %s\n", out);
    agfx_colormap_free(cm);
    return 0;
}

/* ------------------------------------------------------- M2 reference match ---- */
/* Loads an uncompressed BMP as top-down RGB triplets (8, 24 or 32 bit).  This is the
 * conversion target of a WinUAE capture: crop and scale it to 320x200 first. */

static u32 rd32(const u8 *p) {
    return (u32)p[0] | ((u32)p[1] << 8) | ((u32)p[2] << 16) | ((u32)p[3] << 24);
}
static u32 rd16(const u8 *p) { return (u32)p[0] | ((u32)p[1] << 8); }

static u8 *load_bmp_rgb(const char *path, u32 *out_w, u32 *out_h)
{
    plat_file *f;
    u32 size, data_off, w, h, bpp, colors, stride, y, x;
    s32 lh;
    u8 *file, *pix, *out;

    f = plat_open(path);
    if (f == NULLP) return NULLP;
    size = plat_size(f);
    file = (u8 *)plat_alloc(size);
    if (file == NULLP) { plat_close(f); return NULLP; }
    if (plat_read(f, 0, file, size) != size) { plat_free(file); plat_close(f); return NULLP; }
    plat_close(f);

    if (size < 54 || file[0] != 'B' || file[1] != 'M') { plat_free(file); return NULLP; }
    data_off = rd32(file + 10);
    w = rd32(file + 18);
    lh = (s32)rd32(file + 22);
    h = (u32)(lh < 0 ? -lh : lh);
    bpp = rd16(file + 28);
    colors = rd32(file + 46);
    if (bpp != 8 && bpp != 24 && bpp != 32) { plat_free(file); return NULLP; }
    stride = ((bpp * w + 31) / 32) * 4;

    out = (u8 *)plat_alloc(w * h * 3);
    if (out == NULLP) { plat_free(file); return NULLP; }
    pix = file + data_off;
    for (y = 0; y < h; y++) {
        const u8 *row = pix + (lh > 0 ? (h - 1 - y) : y) * stride;
        for (x = 0; x < w; x++) {
            u8 r, g, b;
            if (bpp == 8) {
                u32 idx = row[x];
                const u8 *pal = file + 54;
                if (idx >= (colors ? colors : 256u)) idx = 0;
                b = pal[idx * 4 + 0]; g = pal[idx * 4 + 1]; r = pal[idx * 4 + 2];
            }
            else {
                const u8 *px = row + x * (bpp / 8);
                b = px[0]; g = px[1]; r = px[2];
            }
            out[(y * w + x) * 3 + 0] = r;
            out[(y * w + x) * 3 + 1] = g;
            out[(y * w + x) * 3 + 2] = b;
        }
    }
    plat_free(file);
    *out_w = w;
    *out_h = h;
    return out;
}

/* Renders every picture and reports which one reproduces the reference frame.
 *
 * A tolerance is needed because WinUAE's colour output is not a plain 4-bits-to-8-bits
 * expansion: the same palette entry comes back up to 15 levels away from ours.  A scene the
 * engine composites (background + narration box) can never match completely either, so the
 * tool ranks by number of matching pixels instead of demanding equality. */
static int run_match(const char *ref_path, const char *pack_path, s32 tol)
{
    pak p;
    pic_hdr hdr;
    u8 *band, *ref;
    u32 rw = 0, rh = 0, i, total = SCREEN_PIXELS;
    s32 best_i[3] = { -1, -1, -1 };
    u32 best_d[3];

    best_d[0] = best_d[1] = best_d[2] = 0xFFFFFFFFu;

    ref = load_bmp_rgb(ref_path, &rw, &rh);
    if (ref == NULLP) { printf("cannot read reference '%s' (need an uncompressed BMP)\n", ref_path); return 1; }
    if (rw != SCREEN_W || rh != SCREEN_H) {
        printf("reference is %ux%u, must be %dx%d - crop and scale it first\n",
               rw, rh, SCREEN_W, SCREEN_H);
        plat_free(ref);
        return 1;
    }
    if (!pak_open(&p, pack_path)) { printf("cannot open pack '%s'\n", pack_path); plat_free(ref); return 1; }
    band = (u8 *)plat_alloc(BAND_BYTES);
    if (band == NULLP) { pak_close(&p); plat_free(ref); return 1; }

    printf("matching against %s (tolerance %ld)\n", pack_path, (long)tol);
    for (i = 0; i < p.count; i++) {
        u32 d = 0, px;
        u8 *fb = gfx_fb;
        s32 k;

        if (pak_type(&p, i) != PAK_PICTURE) continue;
        if (!pic_header(&p, i, &hdr)) continue;
        if (hdr.w != SCREEN_W || hdr.h != SCREEN_H) continue;
        if (pal_read(&p, (s32)hdr.palette, palette, PAL_ENTRIES) == 0) continue;
        gfx_clear(0);
        draw_picture(&p, i, &hdr, band, BAND_BYTES);
        for (px = 0; px < total; px++) {
            const u8 *c = palette + (u32)fb[px] * 3;
            const u8 *r = ref + px * 3;
            s32 d0 = (s32)c[0] - (s32)r[0];
            s32 d1 = (s32)c[1] - (s32)r[1];
            s32 d2 = (s32)c[2] - (s32)r[2];
            if (d0 < 0) d0 = -d0;
            if (d1 < 0) d1 = -d1;
            if (d2 < 0) d2 = -d2;
            if ((d0 > tol) || (d1 > tol) || (d2 > tol)) d++;
        }
        for (k = 2; k >= 0; k--) {
            if (d < best_d[k]) {
                if (k < 2) { best_d[k + 1] = best_d[k]; best_i[k + 1] = best_i[k]; }
                best_d[k] = d;
                best_i[k] = (s32)i;
            }
            else break;
        }
        if (d == 0) break;      /* exact hit, no need to look further */
    }

    {
        s32 k;
        for (k = 0; k < 3; k++) {
            if (best_i[k] < 0) continue;
            printf("%d. %-40s %6lu differing  %6.2f %% match%s\n", (int)(k + 1),
                   pak_name(&p, best_i[k]), (unsigned long)best_d[k],
                   100.0 * (total - best_d[k]) / total,
                   best_d[k] == 0 ? "  IDENTICAL" : "");
        }
        if (best_i[0] < 0) printf("no 320x200 picture in the pack\n");
    }
    pak_close(&p);
    plat_free(band);
    plat_free(ref);
    return best_d[0] == 0 ? 0 : 1;
}

/* --match <ref.bmp> [pack] [tolerance] - a bare number as third argument is the tolerance. */
static int cmd_match(int argc, char **argv)
{
    const char *pk = assets_pack_path();
    s32 tol = 16;

    if (argc > 3) {
        if (argv[3][0] >= '0' && argv[3][0] <= '9') {
            tol = (s32)atoi(argv[3]);
        }
        else {
            pk = argv[3];
            if (argc > 4) tol = (s32)atoi(argv[4]);
        }
    }
    return run_match(argv[2], pk, tol);
}

/* Modes that read the built-in pack path instead of a file named on the command line. */
static int needs_default_pack(int argc, char **argv)
{
    if (argc <= 1) return 1;
    if (strcmp(argv[1], "--browse") == 0 || strcmp(argv[1], "--checksum") == 0) return argc <= 2;
    if (strcmp(argv[1], "--play") == 0) return argc <= 2;
    if (strcmp(argv[1], "--match") == 0) return argc <= 3 || (argv[3][0] >= '0' && argv[3][0] <= '9');
    return 0;
}

static void usage(void)
{
    printf("icftd - It Came from the Desert recompilation\n"
           "  icftd.exe                     play (decodes assets from disks\\ on first start)\n"
           "  icftd.exe --browse [pack]     step through every picture in the pack\n"
           "  icftd.exe --convert           rebuild assets\\game.pak from disks\\*.adf\n"
           "  icftd.exe --checksum [pack]   print a hash per picture (tools/verify-pack.ps1)\n"
           "  icftd.exe --shot <pack> <index|name> <out.bmp>\n"
           "  icftd.exe --scene <pack> <backdrop|-> <sprite> <x> <y> <key> <out.bmp> [palette]\n"
           "  icftd.exe --compose <pack> <out.bmp> <palette|-> <name,x,y,key> ...\n"
           "  icftd.exe --intro <pack> <script> <label> <from> <to> <outPrefix>\n"
           "  icftd.exe --play [pack] [script] [label]   play a MovE label in the window\n"
           "  ... --intro/--play also take --trace <file>: one text line per event\n"
           "  icftd.exe --gfx-test <out.bmp>\n"
           "  icftd.exe --match <ref.bmp> [pack] [tolerance]\n"
           "  icftd.exe --demo              M0 demo (palette ramp)\n");
}

int main(int argc, char **argv)
{
    int rc;
    const char *trace_path = NULLP;
    int i;

    /* --trace <file> is a modifier, so it may sit anywhere after the mode. */
    for (i = 1; i + 1 < argc; i++)
        if (strcmp(argv[i], "--trace") == 0) { trace_path = argv[i + 1]; break; }
    /* Assets live outside the repository, so they are resolved (and decoded on a
     * fresh install) before the window opens. */
    if (argc > 1 && strcmp(argv[1], "--convert") == 0)
        return assets_prepare(1) ? 0 : 1;
    if (needs_default_pack(argc, argv) && !assets_prepare(0))
        return 1;

    if (!plat_init("It Came from the Desert - recomp")) return 1;
    gfx_init(plat_framebuffer(), SCREEN_W, SCREEN_H);
    mv_trace_open(trace_path);

    if (argc > 1 && strcmp(argv[1], "--browse") == 0)
        rc = run_browse(argc > 2 ? argv[2] : assets_pack_path());
    else if (argc > 1 && strcmp(argv[1], "--checksum") == 0)
        rc = run_checksum(argc > 2 ? argv[2] : assets_pack_path());
    else if (argc > 1 && strcmp(argv[1], "--shot") == 0 && argc > 4)
        rc = run_shot(argv[2], argv[3], argv[4]);
    else if (argc > 1 && strcmp(argv[1], "--scene") == 0 && argc > 8)
        rc = run_scene(argv[2], argv[3], argv[4], (s32)atoi(argv[5]), (s32)atoi(argv[6]),
                       (s32)atoi(argv[7]), argv[8], argc > 9 ? argv[9] : NULLP);
    else if (argc > 1 && strcmp(argv[1], "--compose") == 0 && argc > 5)
        rc = run_compose(argv[2], argv[3], argv[4], argc - 5, argv + 5);
    else if (argc > 1 && strcmp(argv[1], "--intro") == 0 && argc > 7)
        rc = run_intro(argv[2], argv[3], argv[4], (s32)atoi(argv[5]), (s32)atoi(argv[6]), argv[7]);
    else if (argc > 1 && strcmp(argv[1], "--play") == 0)
        rc = run_play(argc > 2 ? argv[2] : assets_pack_path(),
                      argc > 3 ? argv[3] : "Desert1/OPEN/!OPN",
                      argc > 4 ? argv[4] : "Logo");
    else if (argc > 1 && strcmp(argv[1], "--gfx-test") == 0 && argc > 2)
        rc = run_gfx_test(argv[2]);
    else if (argc > 1 && strcmp(argv[1], "--match") == 0 && argc > 2)
        rc = cmd_match(argc, argv);
    else if (argc > 1 && strcmp(argv[1], "--demo") == 0)
        rc = run_demo();
    else if (argc <= 1)
        rc = run_browse(assets_pack_path());
    else {
        usage();
        rc = 1;
    }

    plat_shutdown();
    mv_trace_close();
    return rc;
}
