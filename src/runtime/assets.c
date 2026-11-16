/* First-start extraction of the game data (see assets.h).
 *
 * A release ships no game data: the player's own three Amiga floppies are the only source. This
 * module reads them directly - the AmigaDOS OFS directory and data chains of src\assetExport\Adf.cs
 * and AmigaFs.cs, and the hunk flattening of src\assetExport\Hunk.cs - and writes exactly the tree
 * tools\extract.ps1 writes, so the runtime cannot tell the two apart. No image means no game: the
 * caller shows RT_ASSETS_MSG_DISKS and stops.
 */
#include "assets.h"
#include "machine.h"
#include "platform.h"

#include <stdio.h>
#include <string.h>

#define ADF_BLOCK        512u
#define ADF_ROOT_BLOCK   880u
#define ADF_MIN_BYTES    (100u * ADF_BLOCK)         /* nothing smaller is a 3.5" disk image */
#define ADF_MAX_BYTES    (2048u * ADF_BLOCK)
#define ADF_MAX_DISKS    8
#define ADF_NAME_CHARS   30                          /* AmigaDOS names are at most 30 bytes */
#define ADF_PATH_CHARS   300
#define ADF_DIR_DEPTH    8
#define ADF_MAX_HUNKS    32
#define ADF_MAX_IMAGE    (4u * 1024u * 1024u)   /* the game's image is 185 752 bytes */
#define ADF_CHAIN_GUARD  4000                   /* blocks in one file chain, like the exporter's */

/* A disk image, kept open: the blocks are read where they are needed, so an 880 KB image never has
 * to live in memory next to the game's own. */
typedef struct {
    plat_file *f;
    u32        blocks;
    char       path[ADF_PATH_CHARS];
    char       label[ADF_NAME_CHARS + 1];            /* the root block's volume name, lower case */
} disk_image;

static u32 be32(const u8 *p)
{
    return ((u32)p[0] << 24) | ((u32)p[1] << 16) | ((u32)p[2] << 8) | (u32)p[3];
}

static void be32_put(u8 *p, u32 v)
{
    p[0] = (u8)(v >> 24);
    p[1] = (u8)(v >> 16);
    p[2] = (u8)(v >> 8);
    p[3] = (u8)v;
}

static void to_lower(char *s)
{
    for (; *s != 0; s++)
        if (*s >= 'A' && *s <= 'Z') *s = (char)(*s - 'A' + 'a');
}

static int disk_block(const disk_image *d, u32 block, u8 *buf)
{
    if (block >= d->blocks) return 0;
    return plat_read(d->f, block * ADF_BLOCK, buf, ADF_BLOCK) == ADF_BLOCK;
}

/* A header block's name (length at 432, the characters at 433), made safe as a host file name -
 * the exporter replaces the characters Windows does not allow, and so do we. */
static void disk_name(const u8 *blk, char *out, int max)
{
    int len = blk[432];
    int i;

    if (len > ADF_NAME_CHARS) len = ADF_NAME_CHARS;
    if (len > max - 1) len = max - 1;
    for (i = 0; i < len; i++) {
        char c = (char)blk[433 + i];
        if (c < 32 || c == '<' || c == '>' || c == ':' || c == '"' ||
            c == '/' || c == '\\' || c == '|' || c == '?' || c == '*')
            c = '_';
        out[i] = c;
    }
    out[i] = 0;
}

/* An AmigaDOS OFS floppy: a 'DOS' boot block with type 0. The data chains this reader follows
 * carry the 24-byte header only in OFS; an FFS image stores its payload raw and would decode to
 * garbage, so it is refused instead of producing a half-extracted tree. */
static int disk_open(disk_image *d, const char *path, u32 size)
{
    u8 boot[ADF_BLOCK];
    u8 root[ADF_BLOCK];
    plat_file *f;

    if (size < ADF_MIN_BYTES || size > ADF_MAX_BYTES || (size % ADF_BLOCK) != 0) return 0;
    f = plat_open(path);
    if (f == 0) return 0;
    if (plat_read(f, 0, boot, ADF_BLOCK) != ADF_BLOCK ||
        boot[0] != 'D' || boot[1] != 'O' || boot[2] != 'S' || boot[3] != 0) {
        plat_close(f);
        return 0;
    }
    d->f = f;
    d->blocks = size / ADF_BLOCK;
    strncpy(d->path, path, sizeof d->path - 1);
    d->path[sizeof d->path - 1] = 0;
    d->label[0] = 0;
    if (disk_block(d, ADF_ROOT_BLOCK, root) && be32(root) == 2) {
        disk_name(root, d->label, (int)sizeof d->label);
        to_lower(d->label);
    }
    return 1;
}

typedef struct {
    disk_image disk[ADF_MAX_DISKS];
    int        count;
    const char *dir;
} disk_list;

static void disk_candidate(const char *name, u32 size, void *ctx)
{
    disk_list *l = (disk_list *)ctx;
    char path[ADF_PATH_CHARS];

    if (l->count >= ADF_MAX_DISKS) return;
    if ((int)strlen(l->dir) + (int)strlen(name) + 2 > (int)sizeof path) return;
    sprintf(path, "%s\\%s", l->dir, name);
    if (disk_open(&l->disk[l->count], path, size)) l->count++;
}

/* Case-insensitive "a > b", for the file-name order the candidates are put in. */
static int name_greater(const char *a, const char *b)
{
    while (*a != 0 && *b != 0) {
        char ca = *a;
        char cb = *b;
        if (ca >= 'A' && ca <= 'Z') ca = (char)(ca - 'A' + 'a');
        if (cb >= 'A' && cb <= 'Z') cb = (char)(cb - 'A' + 'a');
        if (ca != cb) return ca > cb;
        a++;
        b++;
    }
    return *a != 0;
}

/* 1..3 for the volume labels Desert1..3, which is what the runtime's dos.library shim maps to
 * disk1..3; 0 for anything else (not one of the game's disks). */
static int disk_volume(const disk_image *d)
{
    if (strncmp(d->label, "desert", 6) != 0) return 0;
    if (d->label[6] < '1' || d->label[6] > '3' || d->label[7] != 0) return 0;
    return d->label[6] - '0';
}

/* Creates every level of path; plat_mkdir makes one. */
static int make_dirs(const char *path)
{
    char tmp[ADF_PATH_CHARS];
    int i = 0;

    if (path == 0 || *path == 0) return 0;
    if (strlen(path) >= sizeof tmp) return 0;
    strcpy(tmp, path);
    while (tmp[i] != 0) {
        if (tmp[i] != '\\' && tmp[i] != '/') { i++; continue; }
        tmp[i] = 0;
        if (!(i == 2 && tmp[1] == ':')) {           /* "C:" is a drive, not a directory */
            if (!plat_mkdir(tmp)) return 0;
        }
        tmp[i] = path[i];
        i++;
    }
    return plat_mkdir(path) != 0;
}

static int write_file(const char *path, const u8 *data, u32 len)
{
    plat_file *f = plat_create(path);
    int ok;

    if (f == 0) return 0;
    ok = plat_write(f, 0, data, len) == len;
    plat_close(f);
    return ok;
}

/* One file of the volume: the OFS data chain, each block holding a 24-byte header and up to 488
 * bytes. The header's byte size is the authority, so the chain may be longer than the file. */
static int extract_file(const disk_image *d, u32 first, u32 size, const char *path)
{
    u8 blk[ADF_BLOCK];
    plat_file *out = plat_create(path);
    u32 block = first;
    u32 total = 0;
    int guard = 0;

    if (out == 0) return 0;
    while (block > 0 && block < d->blocks && total < size && guard++ < ADF_CHAIN_GUARD) {
        u32 n;
        if (!disk_block(d, block, blk) || be32(blk) != 8) { plat_close(out); return 0; }
        n = be32(blk + 12);
        if (n > 488u) { plat_close(out); return 0; }
        if (n > size - total) n = size - total;
        if (plat_write(out, total, blk + 24, n) != n) { plat_close(out); return 0; }
        total += n;
        block = be32(blk + 16);
    }
    plat_close(out);
    return total == size;
}

/* A directory block's hash table: 72 buckets in the standard layout, but the root says how many
 * and AmigaDOS 1.x wrote 0 there, so a zero/invalid count means the standard 72. Each bucket starts
 * a chain that continues through the entry's own next pointer at 0x1F0. */
static int extract_dir(const disk_image *d, u32 block, const char *dirPath, int depth, int *files)
{
    u8 dir[ADF_BLOCK];
    u32 htSize, i;

    if (depth > ADF_DIR_DEPTH) return 0;
    if (!disk_block(d, block, dir) || be32(dir) != 2) return 0;
    htSize = be32(dir + 12);
    if (htSize == 0 || htSize > 200) htSize = 72;

    for (i = 0; i < htSize; i++) {
        u32 b = be32(dir + 24 + i * 4);
        int guard = 0;
        while (b > 0 && b < d->blocks && guard++ < 200) {
            u8 hdr[ADF_BLOCK];
            u32 first;
            char name[ADF_NAME_CHARS + 1];
            char path[ADF_PATH_CHARS];

            if (!disk_block(d, b, hdr) || be32(hdr) != 2) break;
            first = be32(hdr + 16);
            disk_name(hdr, name, (int)sizeof name);
            if (name[0] == 0) break;
            if ((int)strlen(dirPath) + (int)strlen(name) + 2 > (int)sizeof path) return 0;
            sprintf(path, "%s\\%s", dirPath, name);
            if (first == 0) {                       /* a directory: its own hash table */
                if (!make_dirs(path)) return 0;
                if (!extract_dir(d, b, path, depth + 1, files)) return 0;
            } else {
                if (!extract_file(d, first, be32(hdr + 0x144), path)) return 0;
                (*files)++;
            }
            b = be32(hdr + 0x1F0);
        }
    }
    return 1;
}

/* --- Amiga hunk executable -> flat load image --------------------------------------------- */

#define HUNK_UNIT         999
#define HUNK_NAME         1000
#define HUNK_CODE         1001
#define HUNK_DATA         1002
#define HUNK_BSS          1003
#define HUNK_RELOC32      1004
#define HUNK_RELOC16      1005
#define HUNK_RELOC8       1006
#define HUNK_EXT          1007
#define HUNK_SYMBOL       1008
#define HUNK_DEBUG        1009
#define HUNK_END          1010
#define HUNK_HEADER       1011
#define HUNK_OVERLAY      1012
#define HUNK_BREAK        1013
#define HUNK_RELOC32SHORT 1020

typedef struct {
    const u8 *d;
    u32       len;
    u32       pos;
    int       bad;
} hunk_rd;

static u32 hr_u32(hunk_rd *r)
{
    u32 v;
    if (r->bad || r->pos + 4 > r->len) { r->bad = 1; return 0; }
    v = be32(r->d + r->pos);
    r->pos += 4;
    return v;
}

static u32 hr_u16(hunk_rd *r)
{
    u32 v;
    if (r->bad || r->pos + 2 > r->len) { r->bad = 1; return 0; }
    v = ((u32)r->d[r->pos] << 8) | (u32)r->d[r->pos + 1];
    r->pos += 2;
    return v;
}

static int hr_skip(hunk_rd *r, u32 n)
{
    if (r->bad || n > r->len - r->pos) { r->bad = 1; return 0; }
    r->pos += n;
    return 1;
}

/* Skips n longwords of a count-prefixed name or symbol block, refusing a count the file cannot hold
 * (n * 4 would otherwise wrap). */
static int hr_skip_longs(hunk_rd *r, u32 n)
{
    if (r->bad || n > r->len / 4) { r->bad = 1; return 0; }
    return hr_skip(r, n * 4);
}

/* Flattens the hunks into one image at `base` with every 32/16/8-bit relocation applied - a port of
 * src\assetExport\Hunk.cs, including what it does with a reference outside the hunk table. */
static int hunk_flatten(const u8 *d, u32 len, u32 base, u8 **outImage, u32 *outSize)
{
    hunk_rd r;
    u32 sizes[ADF_MAX_HUNKS];
    u32 addr[ADF_MAX_HUNKS];
    u32 tableSize, first, imageSize, cursor;
    int hunks = 0, cur = -1, i, named = 0;
    u8 *img;

    r.d = d;
    r.len = len;
    r.pos = 0;
    r.bad = 0;

    if (hr_u32(&r) != HUNK_HEADER) return 0;
    for (i = 0; i < 64; i++) {                      /* resident library names, then a 0 count */
        u32 n = hr_u32(&r);
        if (r.bad) return 0;
        if (n == 0) { named = 1; break; }
        if (!hr_skip_longs(&r, n)) return 0;
    }
    if (!named) return 0;
    tableSize = hr_u32(&r);
    first = hr_u32(&r);
    (void)hr_u32(&r);                               /* last hunk index; the table is the authority */
    if (r.bad || tableSize == 0 || tableSize > ADF_MAX_HUNKS) return 0;

    cursor = base;
    for (i = 0; i < (int)tableSize; i++) {
        u32 longs = hr_u32(&r);
        u32 bytes;
        if (r.bad || longs > r.len / 4) return 0;
        bytes = longs * 4;
        if (bytes > ADF_MAX_IMAGE) return 0;
        sizes[i] = bytes;
        addr[i] = cursor;
        cursor += bytes;
    }
    imageSize = addr[tableSize - 1] + sizes[tableSize - 1] - base;
    if (imageSize == 0 || imageSize > ADF_MAX_IMAGE) return 0;
    img = (u8 *)plat_alloc(imageSize);
    if (img == 0) return 0;
    memset(img, 0, imageSize);

    while (!r.bad && r.pos + 4 <= r.len) {
        u32 type = hr_u32(&r);
        switch (type) {
        case HUNK_CODE:
        case HUNK_DATA:
        case HUNK_BSS:
        {
            /* The header's size is what the loader allocates, the block holds what the file has
             * (the game's data hunk declares 47 932 bytes and stores 19 912). */
            u32 longs = hr_u32(&r);
            u32 payload;
            u32 off;
            if (r.bad || longs > r.len / 4) goto fail;
            payload = longs * 4;
            if (hunks >= (int)tableSize || payload > sizes[hunks]) goto fail;
            cur = hunks++;
            off = addr[cur] - base;
            if (type != HUNK_BSS) {
                if (payload > r.len - r.pos) goto fail;
                memcpy(img + off, r.d + r.pos, payload);
                r.pos += payload;
            }
            break;
        }
        case HUNK_RELOC32:
        case HUNK_RELOC32SHORT:
        {
            int shortOffsets = (type == HUNK_RELOC32SHORT);
            u32 baseOff;
            if (cur < 0) goto fail;
            baseOff = addr[cur] - base;
            for (;;) {
                u32 count = hr_u32(&r);
                u32 target, site, j;
                if (r.bad) goto fail;
                if (count == 0) break;
                target = hr_u32(&r);
                if (r.bad) goto fail;
                site = (target >= first && target - first < tableSize) ? addr[target - first]
                                                                      : addr[cur];
                for (j = 0; j < count; j++) {
                    u32 off = shortOffsets ? hr_u16(&r) : hr_u32(&r);
                    if (r.bad) goto fail;
                    if (off + 4 > sizes[cur]) goto fail;
                    be32_put(img + baseOff + off, be32(img + baseOff + off) + site);
                }
            }
            break;
        }
        case HUNK_RELOC16:
        case HUNK_RELOC8:
        {
            u32 baseOff;
            if (cur < 0) goto fail;
            baseOff = addr[cur] - base;
            for (;;) {
                u32 count = hr_u32(&r);
                u32 target, add, j;
                if (r.bad) goto fail;
                if (count == 0) break;
                target = hr_u32(&r);
                if (r.bad) goto fail;
                add = (target >= first && target - first < tableSize) ? addr[target - first] : 0;
                for (j = 0; j < count; j++) {
                    u32 off = hr_u32(&r);
                    u8 *p;
                    if (r.bad) goto fail;
                    if (off + (type == HUNK_RELOC16 ? 2u : 1u) > sizes[cur]) goto fail;
                    p = img + baseOff + off;
                    if (type == HUNK_RELOC16) {
                        u32 v = (((u32)p[0] << 8) | (u32)p[1]) + add;
                        p[0] = (u8)(v >> 8);
                        p[1] = (u8)v;
                    } else {
                        p[0] = (u8)(p[0] + add);
                    }
                }
            }
            break;
        }
        case HUNK_SYMBOL:
        {
            for (;;) {
                u32 n = hr_u32(&r);
                if (r.bad) goto fail;
                if (n == 0) break;
                if (!hr_skip_longs(&r, n)) goto fail;
                (void)hr_u32(&r);               /* the symbol's value: not part of the image */
            }
            break;
        }
        case HUNK_EXT:
        {
            for (;;) {
                u32 kind = hr_u32(&r);
                u32 names = 0;
                if (r.bad) goto fail;
                if (kind == 0) break;
                for (;;) {
                    u32 n = hr_u32(&r);
                    if (r.bad) goto fail;
                    if (n == 0) break;
                    if (!hr_skip_longs(&r, n)) goto fail;
                    names++;
                }
                if ((kind >> 24) == 0 && names > 0) (void)hr_u32(&r);   /* EXT_SYMBOL: a value */
            }
            break;
        }
        case HUNK_DEBUG:
        {
            u32 n = hr_u32(&r);
            if (r.bad || !hr_skip_longs(&r, n)) goto fail;
            break;
        }
        case HUNK_END:
        case HUNK_BREAK:
            cur = -1;
            break;
        case HUNK_NAME:
        {
            u32 n = hr_u32(&r);
            if (r.bad || !hr_skip_longs(&r, n)) goto fail;
            break;
        }
        case HUNK_UNIT:
        case HUNK_OVERLAY:
            goto fail;
        default:
            goto fail;
        }
    }
    if (r.bad || hunks != (int)tableSize) goto fail;

    *outImage = img;
    *outSize = imageSize;
    return 1;

fail:
    plat_free(img);
    return 0;
}

/* The game program - `dshell`, the only hunk executable on the disks - flattened to the image the
 * runtime boots. Written last: its presence is what makes a tree complete. */
static int flatten_game(const char *dataDir)
{
    char in[ADF_PATH_CHARS];
    char out[ADF_PATH_CHARS];
    plat_file *f;
    u32 size, imageSize;
    u8 *src, *img;
    int ok;

    sprintf(in, "%s\\disk1\\dshell", dataDir);
    f = plat_open(in);
    if (f == 0) return 0;
    size = plat_size(f);
    if (size < 16 || size > ADF_MAX_BYTES) { plat_close(f); return 0; }
    src = (u8 *)plat_alloc(size);
    if (src == 0) { plat_close(f); return 0; }
    if (plat_read(f, 0, src, size) != size) {
        plat_close(f);
        plat_free(src);
        return 0;
    }
    plat_close(f);
    if (!hunk_flatten(src, size, EMU_IMAGE_BASE, &img, &imageSize)) {
        plat_free(src);
        return 0;
    }
    plat_free(src);

    sprintf(out, "%s\\code\\dshell4k", dataDir);
    if (!make_dirs(out)) { plat_free(img); return 0; }
    sprintf(out, "%s\\code\\dshell4k\\dshell.img", dataDir);
    ok = write_file(out, img, imageSize);
    plat_free(img);
    if (ok) printf("assets: %s (%lu bytes, base 0x%lx)\n", out, (unsigned long)imageSize,
                   (unsigned long)EMU_IMAGE_BASE);
    return ok;
}

/* --- the two entry points ------------------------------------------------------------------ */

u32 rt_assets_ready(const char *dataDir)
{
    char path[ADF_PATH_CHARS];
    int i;

    if (dataDir == 0 || *dataDir == 0) return 0;
    for (i = 1; i <= RT_ASSETS_DISK_COUNT; i++) {
        sprintf(path, "%s\\disk%d", dataDir, i);
        if (plat_path_kind(path) != PLAT_PATH_DIR) return 0;
    }
    sprintf(path, "%s\\code\\dshell4k\\dshell.img", dataDir);
    return plat_path_kind(path) == PLAT_PATH_FILE;
}

static int asset_fail(int code, char *msg, u32 max, const char *text)
{
    if (msg != 0 && max > 0) {
        strncpy(msg, text, max - 1);
        msg[max - 1] = 0;
    }
    return code;
}

int rt_assets_ensure(const char *dataDir, const char *diskDir, char *msg, u32 max)
{
    static disk_list list;                  /* ~3 KB: not something a DOS stack wants */
    disk_image *order[ADF_MAX_DISKS];
    disk_image *byVol[RT_ASSETS_DISK_COUNT + 1];
    char path[ADF_PATH_CHARS];
    static char text[ADF_PATH_CHARS * 2];
    int i, vol, files = 0;

    if (msg != 0 && max > 0) msg[0] = 0;
    if (dataDir == 0 || *dataDir == 0)
        return asset_fail(RT_ASSETS_FAILED, msg, max, "No game data folder was given.");
    if (rt_assets_ready(dataDir)) return RT_ASSETS_OK;

    /* Only the three original disks make a complete data set: the volume label says which disk a
     * file belongs to (Desert1..3 is what the runtime's dos.library shim maps to disk1..3), and a
     * set that does not cover all three would leave files the engine asks for and does not find. */
    if (diskDir != 0 && *diskDir != 0) plat_mkdir(diskDir);   /* the folder the message names */
    memset(&list, 0, sizeof list);
    list.dir = diskDir != 0 ? diskDir : "";
    plat_dir_files(list.dir, disk_candidate, &list);
    /* The platform's listing order is its own; sort the candidates by name so one folder always
     * gives the same set, whichever disk each image turns out to be. */
    for (i = 0; i < list.count; i++) {
        int k = i;
        order[i] = &list.disk[i];
        while (k > 0 && name_greater(order[k - 1]->path, order[k]->path)) {
            disk_image *t = order[k - 1];
            order[k - 1] = order[k];
            order[k] = t;
            k--;
        }
    }
    for (i = 0; i <= RT_ASSETS_DISK_COUNT; i++) byVol[i] = 0;
    for (i = 0; i < list.count; i++) {
        vol = disk_volume(order[i]);
        if (vol != 0 && byVol[vol] == 0) byVol[vol] = order[i];
    }
    if (byVol[1] == 0 || byVol[2] == 0 || byVol[3] == 0)
        return asset_fail(RT_ASSETS_NO_DISKS, msg, max, RT_ASSETS_MSG_DISKS);

    printf("assets: extracting the game data from %s\\ into %s\\\n", diskDir, dataDir);
    for (vol = 1; vol <= RT_ASSETS_DISK_COUNT; vol++) {
        sprintf(path, "%s\\disk%d", dataDir, vol);
        if (!make_dirs(path)) {
            sprintf(text, "Cannot create '%s'. The game needs a writable folder next to the "
                          "executable to extract its data into.", path);
            return asset_fail(RT_ASSETS_FAILED, msg, max, text);
        }
        if (!extract_dir(byVol[vol], ADF_ROOT_BLOCK, path, 0, &files)) {
            sprintf(text, "Cannot extract '%s'. The game needs a writable folder next to the "
                          "executable to extract its data into.", byVol[vol]->path);
            return asset_fail(RT_ASSETS_FAILED, msg, max, text);
        }
    }
    if (!flatten_game(dataDir))
        return asset_fail(RT_ASSETS_NO_DISKS, msg, max, RT_ASSETS_MSG_DISKS);

    printf("assets: %d file(s) from 3 disk image(s)\n", files);
    return RT_ASSETS_OK;
}
