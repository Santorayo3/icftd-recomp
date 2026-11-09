/* MovE script runtime - a port of the original's display-list engine.
 *
 * The engine does not "play an animation": a scene is a tree of nodes.  A node whose asset
 * flags have bit 0 clear is a *script* node - it owns a label (a list of commands) plus a
 * child list.  Every display frame walks the tree depth first:
 *
 *   FUN_0001FA02(list, baseX, baseY, flags):
 *     for each node:
 *       if it is a script node:  FUN_0001F95C(node)       run commands until a wait
 *                                walk its children with (baseX + node->x, ...)
 *       else:                    FUN_0001DBD0(node, ...)  blit it
 *       if not frozen:           vel += acc;  pos += vel
 *
 * FUN_0001F89C is the command dispatcher; FUN_0001DBD0 places an object at
 * ((x + 0x8000) >> 16) - hotspot and blits `w` x `h / |vscale|` from (srcX, srcY),
 * sampling every |vscale|-th source row.  The 32-bit value from command 0x10 is fed to
 * the blitter nibble by nibble: nibble < 8 selects a source plane, 8 leaves the
 * destination plane alone, > 8 forces the plane to (nibble & 1).
 *
 * Palettes (FUN_0001D87C / FUN_0001D7C4 / FUN_0001D8F4 / FUN_0001D96E):
 *   0x0C  convert a .pal asset straight into the wanted palette
 *   0x0D  convert it into the fade target; the fade then walks live -= (live-target)/frames
 *         once every `divider` vertical blanks, per colour and per component
 *   0x17  fill the wanted palette with one colour
 */
#ifndef MOVE_H
#define MOVE_H

#include "types.h"
#include "pack.h"

#define MV_MAX_ASSETS   64
#define MV_MAX_LABELS   32
#define MV_MAX_CMD      96
#define MV_NAME         26
#define MV_PAL_COLOURS  32

typedef struct mv_cmd
{
    u8  opcode;
    u8  flag;
    s16 idx;                    /* raw asset index from the record, may address a label */
    s32 asset;                  /* index into mv_script.asset, -1 = none */
    u32 p1, p2, p3;             /* the three 32-bit arguments, 16.16 where it matters */
} mv_cmd;

typedef struct mv_asset
{
    char name[MV_NAME];
    s32  pic;                   /* pack entry index, -1 if unresolved */
} mv_asset;

typedef struct mv_label
{
    char   name[MV_NAME];
    s32    count;
    mv_cmd cmd[MV_MAX_CMD];
} mv_label;

typedef struct mv_script
{
    mv_asset asset[MV_MAX_ASSETS];
    s32      assetCount;
    mv_label label[MV_MAX_LABELS];
    s32      labelCount;
    s32      entry;
} mv_script;

/* Parses a "MovE" container the way FUN_0001DE7A reads it. */
int mv_parse(const u8 *data, u32 size, mv_script *s);

/* Resolves the asset names against the pack; `prefix` is the bank path ("Bank/"). */
s32 mv_resolve(mv_script *s, pak *p, const char *prefix);

s32 mv_find_label(const mv_script *s, const char *name);

/* Starts the runtime on one label of the script. */
int  mv_start(pak *p, mv_script *s, const char *labelName);

/* Runs one display frame. */
void mv_tick(void);

/* How many frames have run so far. */
s32  mv_frame(void);

/* Non-zero once the driver label has run out of commands. */
s32  mv_done(void);

/* The 32 colours the runtime shows, 3 bytes each (nibble << 4). */
const u8 *mv_palette(void);

void mv_report(void);

/* Text trace of a run (--trace): one line per command, draw, palette load and frame, no
 * addresses, so two runs diff as plain text. */
void mv_trace_open(const char *path);
void mv_trace_close(void);
void mv_trace_note(const char *text);

#endif
