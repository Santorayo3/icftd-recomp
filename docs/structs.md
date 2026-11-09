# Structures of the original program

Generated from `docs/structs.csv` by `tools/structs.ps1`. The same data is applied
to the Ghidra database by `tools/ghidra/scripts/ApplyAnnotations.java`, so the
decompiler and the port agree on every offset.

## `move_node` (62 bytes, 0x3e)

| offset | type | name | note |
|---|---|---|---|
| 0x00 | `move_node*` | `next` | next node in the display list |
| 0x04 | `move_asset*` | `asset` | source asset (picture or script) |
| 0x08 | `u16` | `id` | id copied from the creation request; children are found by it |
| 0x0a | `s16` | `priority` | insert position: the list is kept sorted by this |
| 0x0c | `s16` | `screenX` | recomputed by DrawNode every frame |
| 0x0e | `s16` | `screenY` | recomputed by DrawNode every frame |
| 0x10 | `s32` | `x` | 16.16 fixed point |
| 0x14 | `s32` | `y` | 16.16 fixed point |
| 0x18 | `s32` | `vx` | 16.16 |
| 0x1c | `s32` | `vy` | 16.16 |
| 0x20 | `s32` | `ax` | 16.16 |
| 0x24 | `s32` | `ay` | 16.16 |
| 0x28 | `s16` | `wait` | frames before the script may run again |
| 0x2a | `s16` | `pc` | next command index |
| 0x2c | `move_node*` | `child` | child list for a script node |
| 0x30 | `u16` | `srcX` | source rectangle |
| 0x32 | `u16` | `srcY` |  |
| 0x34 | `u16` | `srcW` | defaults to the asset width |
| 0x36 | `u16` | `srcH` | defaults to the asset height |
| 0x38 | `u32` | `channel` | bit mask ANDed with the plane table before blitting |
| 0x3c | `s16` | `vscale` | vertical scale, 1 = normal |

## `move_asset` (56 bytes, 0x38)

| offset | type | name | note |
|---|---|---|---|
| 0x0b | `u8` | `flags` | bit 0 = leaf with a bitmap; bit 1 = do not recurse |
| 0x0c | `move_bitmap*` | `bitmap` | bitmap header (script assets keep a command count here) |

## `move_bitmap` (56 bytes, 0x38)

| offset | type | name | note |
|---|---|---|---|
| 0x00 | `u16` | `width` |  |
| 0x02 | `u16` | `height` |  |
| 0x08 | `s16` | `hotX` | x offset subtracted when placing |
| 0x0a | `s16` | `hotY` | y offset subtracted when placing |
| 0x0c | `u8` | `pixels` | pixel data starts here; passed as the blitter source base |
| 0x30 | `u32` | `maskSource` | read as a dword and passed to the blitter |
| 0x34 | `u32` | `channel` | default channel mask copied into move_node.channel |


