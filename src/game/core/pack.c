/* game.pak reader - see pack.h for the file layout. */
#include <string.h>
#include "pack.h"

u32 pak_hash(const char *name)
{
    u32 h = 2166136261UL;
    while (*name) {
        h ^= (u8)*name++;
        h *= 16777619UL;
    }
    return h;
}

static u16 le16(const u8 *p)
{
    return (u16)(p[0] | ((u16)p[1] << 8));
}

static u32 le32(const u8 *p)
{
    return (u32)p[0] | ((u32)p[1] << 8) | ((u32)p[2] << 16) | ((u32)p[3] << 24);
}

u32 pak_open(pak *p, const char *path)
{
    u8 header[0x18];
    u32 entries_at, names_at, i;

    if (p == NULLP) return 0;
    p->file = plat_open(path);
    p->entries = NULLP;
    p->names = NULLP;
    if (p->file == NULLP) return 0;

    if (plat_size(p->file) < 0x18) { pak_close(p); return 0; }
    if (plat_read(p->file, 0, header, 0x18) != 0x18) { pak_close(p); return 0; }
    if (le32(header) != PAK_MAGIC) { pak_close(p); return 0; }
    if (le16(header + 4) != 1) { pak_close(p); return 0; }

    p->count = le16(header + 6);
    entries_at = le32(header + 8);
    names_at = le32(header + 0x10);
    p->names_size = le32(header + 0x14);
    if (p->count == 0) { pak_close(p); return 0; }

    p->entries = (pak_entry *)plat_alloc(p->count * sizeof(pak_entry));
    if (p->entries == NULLP) { pak_close(p); return 0; }
    {
        /* Read the table as raw bytes first: the on-disk fields are little endian and
         * the struct layout must not be assumed to match them. */
        u8 *raw = (u8 *)plat_alloc(p->count * 16UL);
        if (raw == NULLP) { pak_close(p); return 0; }
        if (plat_read(p->file, entries_at, raw, p->count * 16UL) != p->count * 16UL) {
            plat_free(raw);
            pak_close(p);
            return 0;
        }
        for (i = 0; i < p->count; i++) {
            const u8 *r = raw + i * 16;
            p->entries[i].hash = le32(r);
            p->entries[i].offset = le32(r + 4);
            p->entries[i].size = le32(r + 8);
            p->entries[i].type = r[12];
            p->entries[i].flags = r[13];
            p->entries[i].aux = le16(r + 14);
        }
        plat_free(raw);
    }

    if (p->names_size > 0) {
        p->names = (char *)plat_alloc(p->names_size);
        if (p->names == NULLP) { pak_close(p); return 0; }
        if (plat_read(p->file, names_at, p->names, p->names_size) != p->names_size) {
            pak_close(p);
            return 0;
        }
    }
    return 1;
}

void pak_close(pak *p)
{
    if (p == NULLP) return;
    if (p->file != NULLP) plat_close(p->file);
    if (p->entries != NULLP) plat_free(p->entries);
    if (p->names != NULLP) plat_free(p->names);
    p->file = NULLP;
    p->entries = NULLP;
    p->names = NULLP;
    p->count = 0;
}

s32 pak_find(const pak *p, const char *name)
{
    u32 h, i;
    if (p == NULLP || p->entries == NULLP) return -1;
    h = pak_hash(name);
    for (i = 0; i < p->count; i++)
        if (p->entries[i].hash == h) return (s32)i;
    return -1;
}

s32 pak_find_type(const pak *p, u8 type, s32 from)
{
    s32 i;
    if (p == NULLP || p->entries == NULLP) return -1;
    if (from < 0) from = 0;
    for (i = from; (u32)i < p->count; i++)
        if (p->entries[i].type == type) return i;
    return -1;
}

const char *pak_name(const pak *p, s32 index)
{
    const char *s;
    s32 i;

    if (p == NULLP || p->names == NULLP || index < 0 || (u32)index >= p->count) return "";
    s = p->names;
    for (i = 0; i < index; i++) s += strlen(s) + 1;
    return s;
}

u8 pak_type(const pak *p, s32 index)
{
    if (p == NULLP || index < 0 || (u32)index >= p->count) return 0;
    return p->entries[index].type;
}

u32 pak_size(const pak *p, s32 index)
{
    if (p == NULLP || index < 0 || (u32)index >= p->count) return 0;
    return p->entries[index].size;
}

u32 pak_read(const pak *p, s32 index, void *dst, u32 len)
{
    const pak_entry *e;
    if (p == NULLP || index < 0 || (u32)index >= p->count) return 0;
    e = &p->entries[index];
    if (len > e->size) len = e->size;
    return plat_read(p->file, e->offset, dst, len);
}

u32 pic_header(const pak *p, s32 index, pic_hdr *hdr)
{
    u8 raw[12];
    if (hdr == NULLP || pak_type(p, index) != PAK_PICTURE) return 0;
    if (pak_read(p, index, raw, 12) != 12) return 0;
    hdr->w = (u16)((raw[0] << 8) | raw[1]);
    hdr->h = (u16)((raw[2] << 8) | raw[3]);
    hdr->palette = (u16)((raw[4] << 8) | raw[5]);
    hdr->planes = raw[6];
    hdr->flags = raw[7];
    hdr->hot_x = (s16)((raw[8] << 8) | raw[9]);
    hdr->hot_y = (s16)((raw[10] << 8) | raw[11]);
    return 1;
}

u32 pic_pixels(const pak *p, s32 index, const pic_hdr *hdr, u8 *dst, u32 len)
{
    u32 need;
    if (hdr == NULLP || dst == NULLP) return 0;
    need = (u32)hdr->w * (u32)hdr->h;
    if (need > len) need = len;
    return plat_read(p->file, p->entries[index].offset + 12, dst, need);
}

u32 pic_rows(const pak *p, s32 index, const pic_hdr *hdr, u32 first_row, u32 rows,
             u8 *dst, u32 len)
{
    u32 need;
    if (hdr == NULLP || dst == NULLP || first_row >= hdr->h) return 0;
    if (first_row + rows > hdr->h) rows = (u32)hdr->h - first_row;
    need = (u32)hdr->w * rows;
    if (need > len) { rows = len / hdr->w; need = (u32)hdr->w * rows; }
    if (rows == 0) return 0;
    return plat_read(p->file, p->entries[index].offset + 12 + (u32)hdr->w * first_row,
                     dst, need);
}

u32 pal_read(const pak *p, s32 index, u8 *rgb, u32 max_colours)
{
    u8 head[2];
    u32 colours;

    if (rgb == NULLP || pak_type(p, index) != PAK_PALETTE) return 0;
    if (pak_read(p, index, head, 2) != 2) return 0;
    colours = (u32)((head[0] << 8) | head[1]);
    if (colours > max_colours) colours = max_colours;
    if (colours == 0) return 0;
    if (plat_read(p->file, p->entries[index].offset + 2, rgb, colours * 3UL) != colours * 3UL)
        return 0;
    return colours;
}
