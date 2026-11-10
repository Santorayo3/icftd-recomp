# The program model (`re/model`)

Ghidra already found every function and byte. What was missing was a *machine-readable*
description of the program, so that "what does `param_2 + 0x38` mean" becomes a lookup
instead of an afternoon in the disassembly.

`tools/ghidra/scripts/ExportModel.java` and `tools/ghidra/scripts/FieldMap.java` produce
that description. They run headless against the existing project:

```powershell
powershell -ExecutionPolicy Bypass -File tools\ghidra\run-ghidra.ps1 -ModelOnly
```

(`-ModelOnly` loads the saved project with `-noanalysis`; it does not re-analyse. The files
are also produced at the end of a full run.)

## Files

| file | rows (current) | contents |
|---|---|---|
| `functions.csv` | 750 | `addr,size,params,signature,thunk,external,insns,callers,callees` |
| `xrefs.csv` | 27 778 | `from,to,type,call,jump,read,write,flow,function` — every reference, with flags |
| `globals.csv` | 1 937 | `addr,size,name,type,refs` — data symbols with a size |
| `strings.csv` | 573 | `addr,refs,value` — the real text, in one place |
| `types.json` | 0 | structs/unions/enums in the database (empty until we define types) |
| `fields.csv` | 3 437 accesses | `function,base,offset,size,kind,count,addresses` — the field map |
| `fieldsummary.csv` | 1 069 buckets | `base,offset,size,accesses,reads,writes` |

`functions.csv` sums to 121 362 bytes over 750 functions, against the 121 424 code bytes
measured independently — i.e. the function set is complete (the difference is padding and
the 2 thunks).

## The field map

`fields.csv` is the useful one. For every memory access the decompiler emitted it records
*base + constant offset, access size, read or write*, which is the struct layout:

```
function,base,offset,size,kind,count,addresses
FUN_0001dcb0,param_2,0xb,1,r,1,0001dcf2      <- *(byte *)(param_2 + 0xb), a flag
FUN_0001dcb0,param_2,0xc,4,r,3,0001dcfe ...   <- a pointer stored at +0xc
FUN_0001dcb0,tmp10000033,0x36,2,w,1,0001dd0e
```

How the address was resolved: peel the arithmetic the decompiler wraps addresses in
(`COPY`, `CAST`, `INT_ZEXT/SEXT`, `INT_ADD/SUB`, `PTRSUB`, `PTRADD`, `SUBPIECE`,
`MULTIEQUAL`) until we reach either a constant (a global) or named storage.

| base | meaning |
|---|---|
| `param_1`, `param_2`, `this->…` | storage the decompiler named — trust these |
| `tmp<hex>` | an unnamed pointer. The same `tmp` **inside one function** is the same object, so its offsets cluster into one struct. Not comparable across functions. |
| `mem` | the address was a constant → a global; `offset` is the absolute address (`0x29f16`), joinable with `globals.csv` |
| `unaff_A5`, `unaff_A6` | stack, frame pointer never assigned — usually noise |
| `reg` | a raw CPU register |

Caveats: only accesses through an address the decompiler can express as *base + constant*
are recorded. Pure variable indexing (`array[i]`) contributes its base but no offset. 22 of
3 459 accesses stayed unresolved; 6 of 752 functions failed to decompile.

## Querying it

```powershell
tools\fieldmap.ps1 FUN_0001DCB0            # every field access inside one function
tools\fieldmap.ps1 -Base param_2 -Top 25   # which offsets are used through param_2
tools\fieldmap.ps1 -Offset 0x38            # who touches offset 0x38
```

## Validation against things we already ported by hand

The map was not trusted until it reproduced layouts derived from the assembly:

* `FUN_0001dcb0` (create-and-insert node, 190 bytes) — `param_2+0xb` byte flag,
  `param_2+0xc` pointer, and the allocated node as `tmp…`: `+0` next, `+0x0a` sort key,
  `+0x36` — matching the decompiled C line for line.
* `FUN_0001dbd0` (`DrawNode`) reads `param_1+0x38` (4 bytes, channel selector) and
  `param_1+0x3c` (2 bytes, vertical scale) — exactly the offsets used in
  the disassembly, not any port of it.
* `FUN_0001d6cc` / `FUN_0001db40` / `FUN_0001f89c` read and write `0x38` and `0x3c` — the
  MovE opcodes that set channel and vscale.

## Next step this enables

The same scripts are the feedback loop for annotations: once `ApplyAnnotations` defines the
structs and names the A4 globals, `types.json` fills in and most `tmp…` buckets become
`node->…` instead. Re-running `tools\decompile-quality.ps1` then shows whether the model
improved.


# Writing knowledge back

`re/model` is what Ghidra says. The curated layer is two CSV files that we maintain:

| file | contents |
|---|---|
| `docs/structs.csv` | `struct,size,offset,type,name,comment` — one row per field, gaps allowed |
| `docs/annotations.csv` | `addr,kind,name,ret,params,datatype,comment` — `kind` = `func` or `global` |

`tools\ghidra\scripts\ApplyAnnotations.java` applies both, then everything that depends on
types is regenerated in one go:

```powershell
powershell -ExecutionPolicy Bypass -File tools\ghidra\run-ghidra.ps1 -Annotated
```

That is `-process dshell.img -noanalysis` (no re-analysis, about a minute): apply →
`DecompileAll` → `ProgramStats` → `ExportModel` → `FieldMap`. So the loop is
*annotate → apply → measure*, and the measure is `tools\decompile-quality.ps1`.

Type expressions in both files: `u8 s8 u16 s16 u32 s32 void`, `name*` for a pointer to a
structure, `u16[32]` for an array.

## Measured effect

| metric | before | after |
|---|---|---|
| named functions | 0 | **85** |
| anonymous `DAT_0002…` globals | 9 042 | 8 867 |
| raw field casts `*(type *)(p + 0xNN)` | 1 684 | **1 601** |
| `types.json` | empty | 3 structures |
| reachable struct fields in the decompile | 0 | 30 |

Smaller than it could be because only 8 game functions and 19 globals are annotated so far;
the other 66 names are the Amiga library stubs, which do not reduce cast noise. What the
numbers under-report is readability, which was the point. `Move_DrawNode` now decompiles to
nearly the same C that was hand-ported into `move.c`:

```c
// before
void FUN_0001dbd0(int param_1,int param_2,int param_3,undefined4 param_4) {
  iVar1 = *(int *)(param_1 + 4);
  *(short *)(param_1 + 0xc) = (short)((uint)(param_2 + 0x8000) >> 0x10)
                            - *(short *)(*(int *)(iVar1 + 0xc) + 8);

// after
void Move_DrawNode(move_node *param_1,int param_2,int param_3,int param_4) {
  pmVar1 = param_1->asset;
  param_1->screenX = (short)((uint)(param_2 + 0x8000) >> 0x10) - pmVar1->bitmap->hotX;
  (*(code *)g_engineBlit)(&pmVar1->bitmap->pixels,param_1->srcX,param_1->srcY,...
      g_planeOrMask[(ushort)g_screenDepth] |
      param_1->channel & g_planeAndMask[(ushort)g_screenDepth],...
```

## Where the names come from

Only two sources are allowed, both evidence:

* **behaviour the engine has** (`src/assetExport/Sms.cs` and the disassembly) —
  so `Move_DrawNode`, `move_node`, the palette arrays;
* **the Amiga ABI** — `docs/os-calls.csv` records, for each stub, the LVO it jumps to; the
  66 identified stubs are now `os_dos_Open`, `os_graphics_RectFill`, … in the decompile.

Anything else stays `FUN_xxxxxx` until it is proven. `docs/annotations.csv` is the place to
add it, with a comment saying what proved it.

## Structure layouts in the port

`docs/structs.csv` is also the source for the C side:

```powershell
powershell -ExecutionPolicy Bypass -File tools\structs.ps1
```

writes `docs\structs.md` (exact 68k padding, so offsets match the original) and
`docs\structs.md` (for reading). Generated - edit the CSV.

## Coverage and the work queue

```powershell
powershell -ExecutionPolicy Bypass -File tools\coverage.ps1
```

joins `re\model\functions.csv`, `docs\annotations.csv` and the `PORTED: <addr>` tags in
`src\`, and prints the coverage plus the next candidates: unported *leaf* functions, smallest
first, because those are the ones a differential fixture can validate cheapest.

Current state: 750 functions / 121 362 code bytes, 75 named (10 %), 5 ported (0.7 %),
391 leaf candidates.


