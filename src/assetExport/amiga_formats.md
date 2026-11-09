# ICFTD Amiga data formats

Reverse engineered from the three 880K ADFs (`disk/`) and the game program `dshell`
(Amiga hunk executable on disk 1). The 68k disassembly of `dshell` is in
`re/dshell_disasm.txt`.

## 1. Disk images

* All three are standard 880K DD ADFs, AmigaDOS **OFS** (`DOS\0`).
* Field order is big-endian. The disks carry no usable `sec_type`, so a header block
  with `first_data == 0` is a directory and one with `first_data != 0` is a file;
  file data is followed through the OFS data chains (`next_data` at +16).

| disk | files |
|---|---|
| 1 | ANI, dshell, HDesert, HD_INSTALL, INSTS, OPEN, SCORES, UNDER |
| 2 | BACKS, desert.dat, PEOPLE, phone.dat, rs |
| 3 | BACKS1, BIGANT, CHICK, FIGHT, FIRE, HOSP |

`HDesert` / `HD_INSTALL` are AmigaDOS scripts, `dshell` is the game program (hunks:
code 137,816 B, data 19,912 B, BSS 4 B, entry `jmp $20918`).

## 2. Resource containers

Same layout as the DOS files:

```
u16 count, u32 tableSize, count x (ASCIIZ name, u32 offset, u32 size)
payload base = 6 + tableSize, every offset is relative to that base
```

## 3. "LZ" records — variable width LZW

`dshell` 0x2069C (`Decode`):

```
'L' 'Z'          magic
u8               tag byte, later written into the last output byte
u32 (BE)         unpacked size
bit stream       from offset 7
```

LZW with 9..12 bit codes, MSB-first bit order:

* first code is a literal byte (the dictionary restarts whenever the code width grows)
* `code == (1<<n)-2`  → restart the dictionary (node count back to 256) and widen to n+1
  (capped at 12)
* `code == (1<<n)-1`  → end of stream
* `code >= nodeCount` → "KwKwK": the string is the previous byte plus the previous string
* every other code walks `symbol[]`/`child[]` to a leaf, the string is emitted root first,
  and a new node `{child = previous code, symbol = first byte of this string}` is added

## 4. "SMS" records — bitmaps

```
' S' 'M' 'S' 0
u32  handle/index
u16  width, u16 height, u16 x, u16 y
u8   mode   (low nibble = plane count; 5 = 32 colours)
u8   type
u16  colour
6 bytes  (CC C4 32 10 00 00 or ... FF 01)
```

Followed by:

* optionally a palette block of `n * 3` bytes, each component a 4-bit value scaled by
  16 (`0xF0` = full). Length varies per bank/record (128 bytes for BACKS, 129 for the
  43-colour BACKS1 palettes, ...).
* the bitmap: `0xAE <value> <count>` is a run of *value* repeated *count+1* times,
  every other byte is literal.

`dshell` 0x20122 (`RLE`) expands the bitmap **column major** through a row-pointer
table: per plane, byte column by byte column, the rows are consecutive. So the byte
index of pixel byte (`p`, `col`, `y`) is

```
offset = (p * rowBytes + col) * height + y
```

with `rowBytes = ((width + 15) / 16) * 2` (word aligned). Bit 7 of a byte is the
left-most pixel, plane 0 is the least significant colour bit.

Total plane bytes = `rowBytes * height * planes` — for the 320x200 backdrops that is
40,000 bytes (5 planes), which is what the RLE stream expands to.

## 5. Palettes

Files/records named `*.pal` (`BurnMe.pal`, `B&W.pal`, ...) hold a 6-byte id, an SMS
header, then raw 12-bit RGB triples. Banks that lack a palette use the bank's `.pal`
record — every picture in a bank shares it.

## 6. Scripts

Records starting with `MovE` are engine scripts; after the tag come length-prefixed
strings (`u8 len`, bytes) naming the pictures/sprites/windows of the scene, exactly as
in the DOS build (`Mine.Spic`, `MineP1.win`, ...).

## 7. `dshell` - hunk executable

`00 00 03 F3` (`HUNK_HEADER`), no resident-library names, `tableSize 3`,
`first 0`, `last 2`, then one longword size per hunk (in **longwords**).

| hunk | type | header size | stored payload | address | note |
|---|---|---|---|---|---|
| 0 | `HUNK_CODE` | 137,816 | 137,816 | `0x000000` | code + strings + tables |
| 1 | `HUNK_DATA` | 47,932 | 19,912 | `0x021A58` | tail is loader-zeroed BSS |
| 2 | `HUNK_BSS` | 4 | - | `0x02D594` | |

The header size of a hunk is what the loader *allocates*; the size in the hunk block
is what the file *stores*. They differ for the data hunk, which is how the program
gets its BSS (the 4-byte `HUNK_BSS` hunk is irrelevant). Flattened image: 185,752
bytes (`ICFTD.AmigaExport hunk dshell out 0x0` -> `.img`, `.rel`, `.sym`,
`.hunks.txt`).

Entry: `0x0` is `jmp $20918`; startup `FUN_00020918` zeroes `0x26820..0x2D590` and
opens `dos.library` (`jsr -$198(a6)` with `A6` = `*(long*)4`).

`FUN_0002098a` is `lea ($7ffe).l,A4`; with the data hunk at `0x21A58` that makes
**A4 = `0x29A56`** the small-data base, so all globals are `(offset,A4)`:

```
A4 - 0x3236 = 0x26820   start of BSS (data hunk payload end)
A4 + 0x3B3A = 0x2D590   end of BSS (exactly the end of the cleared range)
```

Relocations (`HUNK_RELOC32`, 622 entries): 619 in the data hunk holding code
addresses (a 616-entry table from `0x21E98`, plus 3 entries at `0x26114` pointing
into the zeroed BSS at `0x2BBAA`, `0x2BA6A`, `0x2BB0A`), 3 in the code hunk
(`0x2` entry jmp, `0x1E390` jsr target, `0x2098C` the A4 immediate). The `.rel` file
is `site width patchedValue hunkRef rawValue`; the `.img` already has every
relocation applied.

Gotcha that cost a session: hunk addresses must be taken from the **header** sizes,
not accumulated from the payloads actually read, and a relocation can reference a
hunk that appears later in the file (the code hunk's A4 immediate references the data
hunk). Both were wrong at first and moved A4 to a nonsense address.

