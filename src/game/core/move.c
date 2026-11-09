#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "types.h"
#include "platform.h"
#include "pack.h"
#include "gfx.h"
#include "move.h"

/* One node of the display list.  A script node has label != NULL and children; a leaf
 * node has a bitmap and is blitted.  Field comments give the original's struct offsets
 * (see src/game/core/structs.h, generated from docs/structs.csv). */
typedef struct mv_node
{
    struct mv_node *next;
    struct mv_node *child;
    s32  asset;                 /* asset index, -1 for a script node */
    s32  pic;                   /* pack entry of the picture, -1 = none */
    u8  *px;
    s32  w, h;
    s32  hot_x, hot_y;

    s32  x, y;                  /* +0x10 / +0x14, 16.16 */
    s32  vx, vy;                /* +0x18 / +0x1c */
    s32  ax, ay;                /* +0x20 / +0x24 */
    u32  channel;               /* +0x38 */
    s32  vscale;                /* +0x3c, 1 = normal */
    s32  prio;                  /* +0x0a: draw order */
    s32  src_x, src_y, src_w, src_h;   /* +0x30 .. +0x36 */

    const mv_label *label;
    s32  pc;
    s32  wait;                  /* +0x28 */
} mv_node;

/* -------------------------------------------------------------- palettes ---- */
static u16 pal_want[MV_PAL_COLOURS];       /* DAT_00029CD8 */
static u16 pal_live[MV_PAL_COLOURS];       /* DAT_000298D2 */
static u16 pal_target[MV_PAL_COLOURS];     /* DAT_00029964 */
static s16 fade_work[MV_PAL_COLOURS * 3];  /* DAT_0002C156 */
static s16 fade_delta[MV_PAL_COLOURS * 3]; /* DAT_0002C216 */
static s32 fade_frames;                    /* DAT_0002C31A */
static s32 fade_divider = 1;               /* DAT_0002C31C */
static s32 fade_tick = 1;                  /* DAT_0002C31E */
static s32 fade_armed;                     /* DAT_00029922 */
static s32 fade_pending;                   /* DAT_000299A6 */
static s32 pal_dirty;                      /* DAT_0002C110 */
static u8  pal_rgb[MV_PAL_COLOURS * 3];

static s32 frozen;                         /* DAT_00026740 */
static s32 screen_depth = 5;               /* DAT_0002C10A */
static s32 trace;                          /* MV_TRACE=1 in the environment */
static mv_node *root;
static mv_script *script;
static pak *rt_pack;
static s32 frame_count;

/* ---------------------------------------------------------------- helpers ---- */

static u16 Be16(const u8 *d, u32 o) { return (u16)((d[o] << 8) | d[o + 1]); }
static u32 Be32(const u8 *d, u32 o)
{
    return ((u32)d[o] << 24) | ((u32)d[o + 1] << 16) | ((u32)d[o + 2] << 8) | d[o + 3];
}

/* FUN_0001D8F4 rotates a colour word left through its three nibbles, so each component
 * ends up in bits 8..11 of its own word before the delta is computed. */
static void UnpackColour(u16 c, s16 *rgb)
{
    u16 v = c;
    s32 i;
    for (i = 0; i < 3; i++)
    {
        u16 shifted = (u16)(v << 4);
        v = (u16)(shifted | (v >> 12));
        rgb[i] = (s16)(shifted & 0xF000);
        rgb[i] = (s16)(rgb[i] >> 4);
    }
}

static u16 PackColour(s16 r, s16 g, s16 b)
{
    return (u16)((((r >> 8) & 0xF) << 8) | (((g >> 8) & 0xF) << 4) | ((b >> 8) & 0xF));
}

static void PublishLive(void)
{
    s32 i;
    for (i = 0; i < MV_PAL_COLOURS; i++)
    {
        pal_rgb[i * 3 + 0] = (u8)(((pal_live[i] >> 8) & 0xF) << 4);
        pal_rgb[i * 3 + 1] = (u8)(((pal_live[i] >> 4) & 0xF) << 4);
        pal_rgb[i * 3 + 2] = (u8)((pal_live[i] & 0xF) << 4);
    }
}

/* FUN_0001D87C: 32 colours of a .pal asset (3 bytes, components in the high nibbles). */
static void PaletteFromAsset(s32 index, u16 *dst)
{
    u8 buf[MV_PAL_COLOURS * 3];
    u32 n, i;

    memset(dst, 0, MV_PAL_COLOURS * sizeof(u16));
    if (index < 0) return;
    n = pal_read(rt_pack, index, buf, MV_PAL_COLOURS);
    for (i = 0; i < n && i < MV_PAL_COLOURS; i++)
        dst[i] = (u16)(((buf[i * 3 + 0] >> 4) << 8) |
                       ((buf[i * 3 + 1] >> 4) << 4) |
                        (buf[i * 3 + 2] >> 4));
    if (trace)
        printf("  pal from entry %d (%s): %d colours, first %02X%02X%02X %02X%02X%02X\n",
               (int)index, index >= 0 ? pak_name(rt_pack, index) : "-", (int)n,
               buf[0], buf[1], buf[2], buf[3], buf[4], buf[5]);
}

/* FUN_0001D8F4: delta = (live - target) / frames. */
static void FadeSetup(void)
{
    s32 i, c;

    if (fade_divider == 0) fade_divider = 1;
    if (fade_frames == 0) fade_frames = 1;
    fade_tick = 1;
    for (i = 0; i < MV_PAL_COLOURS; i++)
    {
        s16 cur[3], tgt[3];
        UnpackColour(pal_live[i], cur);
        UnpackColour(pal_target[i], tgt);
        pal_want[i] = pal_target[i];
        for (c = 0; c < 3; c++)
        {
            fade_work[i * 3 + c] = cur[c];
            fade_delta[i * 3 + c] = (s16)((cur[c] - tgt[c]) / fade_frames);
        }
    }
}

/* FUN_0001D96E: one fade step every `divider` vertical blanks. */
static void FadeStep(void)
{
    s32 i, c;

    if (--fade_tick != 0) return;
    fade_tick = fade_divider;
    if (fade_frames == 0) return;
    if (--fade_frames == 0)
    {
        memcpy(pal_live, pal_target, sizeof pal_live);
        PublishLive();
        fade_armed = 0;
        return;
    }
    for (i = 0; i < MV_PAL_COLOURS; i++)
    {
        for (c = 0; c < 3; c++)
            fade_work[i * 3 + c] = (s16)(fade_work[i * 3 + c] - fade_delta[i * 3 + c]);
        pal_live[i] = PackColour(fade_work[i * 3 + 0], fade_work[i * 3 + 1], fade_work[i * 3 + 2]);
    }
    PublishLive();
}

/* FUN_0001D7C4: publish a changed palette, then start a prepared fade. */
static void PaletteApply(void)
{
    if (pal_dirty)
    {
        pal_dirty = 0;
        memcpy(pal_live, pal_want, sizeof pal_live);
        PublishLive();
    }
    if (fade_pending)
    {
        fade_pending = 0;
        fade_armed = 0;
        FadeSetup();
        fade_armed = 1;
    }
}

const u8 *mv_palette(void) { return pal_rgb; }

/* --------------------------------------------------------------- the blit ---- */

/* Channel i takes source plane `nibble` when nibble < 8, keeps the destination when
 * nibble == 8 and is forced to 0/1 when nibble > 8 (FUN_0001E8C8's plane loop). */
static u8 ChannelBlend(u8 src, u8 dst, u32 channel)
{
    u8 out = dst;
    s32 i;

    for (i = 0; i < screen_depth && i < 8; i++)
    {
        s32 nib = (s32)(channel & 0xF);
        s32 bit;
        channel >>= 4;
        if (nib == 8) continue;
        bit = (nib < 8) ? (s32)((src >> nib) & 1) : (nib & 1);
        out = (u8)((out & ~(1 << i)) | ((u32)bit << i));
    }
    return out;
}

/* PORTED: 0001dbd0 - place one node: screen position from the 16.16 base, then blend it */
static void DrawNode(const mv_node *n, s32 base_x, s32 base_y)
{
    s32 dx, dy, scale, rows, i, j;

    if (n->px == NULLP) return;
    dx = ((base_x + n->x + 0x8000) >> 16) - n->hot_x;
    dy = ((base_y + n->y + 0x8000) >> 16) - n->hot_y;
    scale = n->vscale == 0 ? 1 : (n->vscale < 0 ? -n->vscale : n->vscale);
    rows = n->src_h / scale;

    for (j = 0; j < rows; j++)
    {
        s32 py = dy + j;
        s32 sy = n->src_y + j * scale;
        if (py < 0 || py >= gfx_h || sy < 0 || sy >= n->h) continue;
        for (i = 0; i < n->src_w; i++)
        {
            s32 pxx = dx + i;
            s32 sx = n->src_x + i;
            if (pxx < 0 || pxx >= gfx_w || sx < 0 || sx >= n->w) continue;
            gfx_fb[py * gfx_w + pxx] =
                ChannelBlend(n->px[sy * n->w + sx], gfx_fb[py * gfx_w + pxx], n->channel);
        }
    }
}

/* ------------------------------------------------------------- the script --- */

static mv_node *NewNode(void)
{
    mv_node *n = (mv_node *)plat_alloc(sizeof(mv_node));
    if (n == NULLP) return NULLP;
    memset(n, 0, sizeof(mv_node));
    n->asset = -1;
    n->pic = -1;
    n->vscale = 1;
    n->channel = 0x88888888u;
    return n;
}

static void LoadPicture(mv_node *n)
{
    pic_hdr hdr;

    if (n->pic < 0 || !pic_header(rt_pack, n->pic, &hdr)) return;
    n->w = (s32)hdr.w;
    n->h = (s32)hdr.h;
    n->px = (u8 *)plat_alloc((u32)(n->w * n->h) + 4u);
    if (n->px == NULLP) return;
    if (pic_pixels(rt_pack, n->pic, &hdr, n->px, (u32)(n->w * n->h)) != (u32)(n->w * n->h))
    {
        plat_free(n->px);
        n->px = NULLP;
        return;
    }
    n->src_w = n->w;
    n->src_h = n->h;
    n->hot_x = (s32)hdr.hot_x;
    n->hot_y = (s32)hdr.hot_y;
}

static mv_node *FindChild(mv_node *parent, s32 asset)
{
    mv_node *c;
    for (c = parent->child; c != NULLP; c = c->next)
        if (c->asset == asset) return c;
    return NULLP;
}

/* PORTED: 0001dcb0 - insert into the display list; the original also allocates and fills
 * the node from the asset, which NewNode/LoadPicture do here. */
static void InsertChild(mv_node *parent, mv_node *o)
{
    mv_node **pp = &parent->child;
    while (*pp != NULLP && (*pp)->prio <= o->prio) pp = &(*pp)->next;
    o->next = *pp;
    *pp = o;
}

static void FreeNode(mv_node *n)
{
    while (n != NULLP)
    {
        mv_node *next = n->next;
        if (n->child != NULLP) FreeNode(n->child);
        if (n->px != NULLP) plat_free(n->px);
        plat_free(n);
        n = next;
    }
}

static void DropChildren(mv_node *parent, s32 asset)
{
    mv_node **pp = &parent->child;
    while (*pp != NULLP)
    {
        mv_node *c = *pp;
        if (asset < 0 || c->asset == asset)
        {
            *pp = c->next;
            if (c->px != NULLP) plat_free(c->px);
            plat_free(c);
            if (asset >= 0) return;
            continue;
        }
        pp = &c->next;
    }
}

/* PORTED: 0001f89c (the opcode switch; 0001f2ae tail-calls it) - executes one command;
 * returns 0 when it blocked (a wait). Opcodes that are still unknown are reported by
 * name, never silently ignored. */
static s32 Exec(mv_node *self, const mv_cmd *c)
{
    mv_node *o;

    if (trace)
        printf("  f%d op %02X asset %d p1 %08X p2 %08X\n",
               (int)frame_count, (unsigned)c->opcode, (int)c->asset,
               (unsigned)c->p1, (unsigned)c->p2);

    switch (c->opcode)
    {
    case 0x01:                                   /* draw: create/find, then place */
        if (c->asset < 0) return 1;
        o = FindChild(self, c->asset);
        if (o == NULLP)
        {
            o = NewNode();
            if (o == NULLP) return 1;
            o->asset = c->asset;
            o->pic = script->asset[c->asset].pic;
            o->prio = (s32)(c->p3 >> 16);
            LoadPicture(o);
            InsertChild(self, o);
        }
        o->x = (s32)c->p1;
        o->y = (s32)c->p2;
        o->vx = o->vy = o->ax = o->ay = 0;
        return 1;

    case 0x02:                                   /* delete one object */
        DropChildren(self, c->asset);
        return 1;

    case 0x03:                                   /* delete every object */
        DropChildren(self, -1);
        return 1;

    case 0x04:                                   /* set velocity */
        o = FindChild(self, c->asset);
        if (o != NULLP) { o->vx = (s32)c->p1; o->vy = (s32)c->p2; o->ax = o->ay = 0; }
        return 1;

    case 0x08:                                   /* wait n frames */
        self->wait = (s32)(c->p1 >> 16);
        if (self->wait <= 0) self->wait = 0;
        return 0;

    case 0x0C:                                   /* palette from the asset, instantly */
        if (c->asset >= 0) PaletteFromAsset(script->asset[c->asset].pic, pal_want);
        pal_dirty = 1;
        fade_pending = 0;
        fade_armed = 0;
        return 1;

    case 0x0D:                                   /* fade the palette to the asset */
        if (c->asset >= 0) PaletteFromAsset(script->asset[c->asset].pic, pal_target);
        fade_frames = (s32)(c->p1 >> 16);
        fade_divider = (s32)(c->p2 >> 16);
        fade_pending = 1;
        return 1;

    case 0x0F:                                   /* blit depth */
        screen_depth = (s32)(c->p1 >> 16);
        if (screen_depth < 1 || screen_depth > 8) screen_depth = 5;
        return 1;

    case 0x10:                                   /* channel selector for one object */
        o = FindChild(self, c->asset);
        if (o != NULLP) o->channel = c->p1;
        return 1;

    case 0x11:                                   /* vertical sample step (0 -> 1) */
        o = FindChild(self, c->asset);
        if (o != NULLP)
        {
            s32 v = (s32)(c->p1 >> 16);
            o->vscale = v == 0 ? 1 : v;
        }
        return 1;

    case 0x12:                                   /* source rectangle origin */
        o = FindChild(self, c->asset);
        if (o != NULLP) { o->src_x = (s32)(c->p1 >> 16); o->src_y = (s32)(c->p2 >> 16); }
        return 1;

    case 0x13:                                   /* source rectangle size, clamped */
        o = FindChild(self, c->asset);
        if (o != NULLP)
        {
            s32 sw = (s32)(c->p1 >> 16), sh = (s32)(c->p2 >> 16);
            o->src_w = sw < o->w ? sw : o->w;
            o->src_h = sh < o->h ? sh : o->h;
        }
        return 1;

    case 0x17:                                   /* fill the wanted palette with one colour */
        {
            s32 i;
            for (i = 0; i < MV_PAL_COLOURS; i++) pal_want[i] = (u16)(c->p1 >> 16);
        }
        pal_dirty = 1;
        fade_pending = 0;
        fade_armed = 0;
        return 1;

    default:
        printf("move: opcode 0x%02X not implemented\n", (unsigned)c->opcode);
        return 1;
    }
}

/* PORTED: 0001f95c - run commands until one waits or the label ends. */
static void StepScript(mv_node *self)
{
    s32 run = 1;

    if (self->wait > 0) self->wait--;
    if (self->wait > 0) run = 0;
    while (run)
    {
        if (self->label == NULLP || self->pc >= self->label->count) break;
        run = Exec(self, &self->label->cmd[self->pc]);
        self->pc++;
    }
}

/* PORTED: 0001fa02 - walk the display list. */
static void Walk(mv_node *n, s32 base_x, s32 base_y)
{
    for (; n != NULLP; n = n->next)
    {
        if (n->label != NULLP)
        {
            StepScript(n);
            Walk(n->child, base_x + n->x, base_y + n->y);
        }
        else
        {
            DrawNode(n, base_x, base_y);
        }
        if (!frozen)
        {
            n->vx += n->ax;
            n->vy += n->ay;
            n->x += n->vx;
            n->y += n->vy;
        }
    }
}

/* ------------------------------------------------------------------ parse --- */

static s32 ReadName(const u8 *d, u32 size, u32 *pp, char *name, u32 nameSize)
{
    u32 p = *pp, len, i;

    if (p + 2 > size) return 0;
    len = Be16(d, p);
    p += 2;
    if (p + len > size) return 0;
    for (i = 0; i < len && i + 1 < nameSize; i++) name[i] = (char)d[p + i];
    name[i] = 0;
    *pp = p + len;
    return 1;
}

int mv_parse(const u8 *d, u32 size, mv_script *s)
{
    u32 p = 6;
    s32 a, l, c;

    memset(s, 0, sizeof *s);
    if (size < 10 || d[0] != 'M' || d[1] != 'o' || d[2] != 'v' || d[3] != 'E') return 0;
    s->assetCount = Be16(d, p); p += 2;
    s->labelCount = Be16(d, p); p += 2;
    if (s->assetCount > MV_MAX_ASSETS || s->labelCount > MV_MAX_LABELS) return 0;

    for (a = 0; a < s->assetCount; a++)
    {
        s->asset[a].pic = -1;
        if (!ReadName(d, size, &p, s->asset[a].name, MV_NAME)) return 0;
    }
    for (l = 0; l < s->labelCount; l++)
        if (!ReadName(d, size, &p, s->label[l].name, MV_NAME)) return 0;
    p += (u32)s->assetCount * 2;                    /* per-asset words, not used */

    for (l = 0; l < s->labelCount; l++)
    {
        u32 head = p;
        if (p + 16 > size) return 0;
        p += 16;
        s->label[l].count = Be16(d, head + 2);
        if (s->label[l].count > MV_MAX_CMD) return 0;
        for (c = 0; c < s->label[l].count; c++)
        {
            mv_cmd *cmd = &s->label[l].cmd[c];
            s32 idx;
            if (p + 16 > size) return 0;
            idx = (s32)(s16)Be16(d, p);
            cmd->asset = (idx >= 0 && idx < s->assetCount) ? idx : -1;
            cmd->flag = d[p + 2];
            cmd->opcode = d[p + 3];
            cmd->p1 = Be32(d, p + 4);
            cmd->p2 = Be32(d, p + 8);
            cmd->p3 = Be32(d, p + 12);
            p += 16;
        }
    }
    s->entry = (p + 2 <= size) ? (s32)Be16(d, p) : -1;
    return 1;
}

s32 mv_resolve(mv_script *s, pak *p, const char *prefix)
{
    s32 i, found = 0;
    char full[96];
    trace = getenv("MV_TRACE") != NULLP;

    for (i = 0; i < s->assetCount; i++)
    {
        sprintf(full, "%s%s", prefix != NULLP ? prefix : "", s->asset[i].name);
        s->asset[i].pic = pak_find(p, full);
        if (s->asset[i].pic >= 0) found++;
        if (trace)
            printf("  asset %2d %-22s -> %d %s\n", (int)i, s->asset[i].name,
                   (int)s->asset[i].pic,
                   s->asset[i].pic >= 0 ? pak_name(p, s->asset[i].pic) : "");
    }
    return found;
}

s32 mv_find_label(const mv_script *s, const char *name)
{
    s32 i;
    for (i = 0; i < s->labelCount; i++)
        if (strcmp(s->label[i].name, name) == 0) return i;
    return -1;
}

int mv_start(pak *p, mv_script *s, const char *labelName)
{
    s32 l = mv_find_label(s, labelName);

    rt_pack = p;
    script = s;
    trace = getenv("MV_TRACE") != NULLP;
    if (l < 0 && s->entry >= s->assetCount) l = s->entry - s->assetCount;
    if (l < 0 || l >= s->labelCount) return 0;
    if (root != NULLP) { FreeNode(root); root = NULLP; }
    root = NewNode();
    if (root == NULLP) return 0;
    root->label = &s->label[l];
    frame_count = 0;
    return 1;
}

s32 mv_done(void)
{
    if (root == NULLP) return 1;
    return (root->pc >= root->label->count && root->wait == 0) ? 1 : 0;
}

void mv_tick(void)
{
    if (root == NULLP) return;
    Walk(root, 0, 0);
    PaletteApply();
    if (fade_armed) FadeStep();
    frame_count++;
}

s32 mv_frame(void) { return frame_count; }

void mv_report(void)
{
    s32 i;
    printf("   frame %d  fade=%d armed=%d depth=%d\n",
           (int)frame_count, (int)fade_frames, (int)fade_armed, (int)screen_depth);
    printf("   live:");
    for (i = 0; i < 16; i++) printf(" %04X", pal_live[i]);
    printf("\n   want:");
    for (i = 0; i < 16; i++) printf(" %04X", pal_want[i]);
    printf("\n");
}
