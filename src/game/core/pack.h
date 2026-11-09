/* game.pak reader.
 *
 * The pack is produced by `ICFTD.AmigaExport gamepack` and holds every resource of the
 * twelve game banks plus the standalone data files, keyed by name.  Names use the form
 *
 *     <volume>/<file>/<resource>      e.g. "Desert3/FIGHT/Guy1.win"
 *     <volume>/<file>                 e.g. "Desert2/desert.dat"
 *
 * which keeps the original volume semantics visible: the game asks for "Desert2:BACKS"
 * and the port resolves DES4: to Desert1: before hashing.
 *
 * Layout (all little endian):
 *   0x00 u32 magic 'ICFP'   0x04 u16 version   0x06 u16 count
 *   0x08 u32 entries_offset 0x0C u32 data_offset
 *   0x10 u32 names_offset   0x14 u32 names_size
 *   entries: u32 hash, u32 offset, u32 size, u8 type, u8 flags, u16 aux
 */
#ifndef ICFTD_PACK_H
#define ICFTD_PACK_H

#include "types.h"
#include "platform.h"

#define PAK_MAGIC   0x50464349UL   /* 'I','C','F','P' */

#define PAK_PICTURE 1
#define PAK_PALETTE 2
#define PAK_SCRIPT  3
#define PAK_RAW     4

typedef struct {
    u32 hash;
    u32 offset;
    u32 size;
    u8  type;
    u8  flags;
    u16 aux;
} pak_entry;

typedef struct {
    plat_file *file;
    u32        count;
    pak_entry *entries;
    char      *names;
    u32        names_size;
} pak;

/* Opens the pack; returns 0 on failure. */
u32  pak_open(pak *p, const char *path);
void pak_close(pak *p);

/* Index of the first entry with that name, or -1. */
s32  pak_find(const pak *p, const char *name);

/* Index of the first entry of the given type, starting at `from` (inclusive), or -1. */
s32  pak_find_type(const pak *p, u8 type, s32 from);

const char *pak_name(const pak *p, s32 index);
u8   pak_type(const pak *p, s32 index);
u32  pak_size(const pak *p, s32 index);

/* Reads up to len bytes of the entry into dst; returns the number of bytes read. */
u32  pak_read(const pak *p, s32 index, void *dst, u32 len);

/* FNV-1a, the same function the pack builder uses. */
u32  pak_hash(const char *name);

/* --- typed helpers -------------------------------------------------------- */

typedef struct {
    u16 w, h;
    u16 palette;      /* pack index of the palette entry */
    u8  planes;
    u8  flags;
    s16 hot_x, hot_y; /* subtracted from the object's position, like the record's +12/+14 */
    u16 key;          /* transparent colour: Sms_Load stores it at bitmap + 6 */
    u32 channel;      /* default plane channel: Sms_Load stores it at bitmap + 0x34 */
} pic_hdr;

#define PIC_HDR_BYTES 20u

/* Reads the picture header. Returns 0 on failure, a type mismatch or a pack written
 * before the key/channel fields existed (rebuild it with --convert). */
u32 pic_header(const pak *p, s32 index, pic_hdr *hdr);

/* Reads the pixel bytes of a picture (w*h, one byte per pixel) into dst. */
u32 pic_pixels(const pak *p, s32 index, const pic_hdr *hdr, u8 *dst, u32 len);

/* Reads rows [first_row, first_row+rows) of a picture into dst; len must be w*rows.
 * Pictures larger than the screen (608x216 tile maps, the 640x400 map screen) are
 * consumed band by band so no oversized buffer is ever needed. */
u32 pic_rows(const pak *p, s32 index, const pic_hdr *hdr, u32 first_row, u32 rows,
             u8 *dst, u32 len);

/* Reads a palette entry into rgb (3 bytes per colour, at most max_colours).
 * Returns the number of colours read, or 0 on failure. */
u32 pal_read(const pak *p, s32 index, u8 *rgb, u32 max_colours);

#endif /* ICFTD_PACK_H */
