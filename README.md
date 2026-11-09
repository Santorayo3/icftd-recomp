# It Came from the Desert — Amiga recompilation

Recompiling the 1989 Cinemaware game "It Came from the Desert" from its three original
Amiga floppy images. Current target: **Windows (32-bit PE, Open Watcom)**. The 16-bit DOS
target exists and still builds, but is on hold until the Windows version is finished.

**No game data is in this repository.** The disk images are copyrighted, and so is
everything decoded from them (`assets/`, `export/`, `re/`, `ref/`); `.gitignore` keeps all
of it out of git. You supply the images, the build decodes them locally.

## Quick start

```powershell
# 1. copy the three Amiga disk images into disks\   (see disks\README.md)
# 2. build what is missing and start:
powershell -ExecutionPolicy Bypass -File tools\start.ps1
```

`start.ps1` builds `bin\win32\icftd.exe` and the asset exporter when they are missing or
older than the sources. The game takes care of the data itself: when `assets\game.pak` is
missing it decodes it from `disks\*.adf` on start, so after the first run the executable
is all you need.

```powershell
bin\win32\icftd.exe             # start; decodes the assets on first run
bin\win32\icftd.exe --convert   # re-decode assets\game.pak (e.g. after new disks)
bin\win32\icftd.exe --browse    # M1: step through every picture in the pack
bin\win32\icftd.exe --demo      # M0 demo: palette ramp, 50 Hz loop
```

```
disks/*.adf  ->  export/disks          extracted filesystems, game program flattened for Ghidra
re/                                    Ghidra project, decompiled C, disassembly, reports
src/assetExport                        ADF filesystem, banks, SMS/LZ codecs, hunk loader, game.pak
src/game                               the recompilation (portable core + platform layers)
assets/game.pak                        build output: all pictures, palettes, scripts, data
docs/recomp-plan.md                    architecture, milestones, tools, risks
docs/port-ledger.csv                   all 752 decompiled functions with port status
bin/win32/icftd.exe                    build output: the game
bin/win32/icftd-export.exe             build output: asset exporter (used on first start)
```

`bin\win32\` is self-contained (`icftd.exe` + `icftd-export.exe`, no .NET needed) and can
be zipped as a release; such a user only has to put their disk images into a `disks\`
folder next to the two exes.

## Build (from scratch)

`tools\start.ps1` is enough for normal work. Rebuilding everything by hand:

```powershell
# game + asset exporter (Open Watcom at H:\Meine Programme\Open Watcom, .NET SDK 10)
powershell -ExecutionPolicy Bypass -File src\game\build.ps1               # win32 + dos
powershell -ExecutionPolicy Bypass -File src\game\build.ps1 -Target win32

# reverse-engineering pipeline, only needed when working on the decompilation:
# 1. disks -> export\  (needs the ADFs in disks\)
powershell -ExecutionPolicy Bypass -File tools\extract.ps1

# 2. decompile (Ghidra at H:\Meine Programme\Ghidra, ~2 min)
powershell -ExecutionPolicy Bypass -File tools\ghidra\run-ghidra.ps1

# 3. assets -> assets\game.pak  (the game does this itself on first start)
powershell -ExecutionPolicy Bypass -File tools\gamepack.ps1 -Verbose
```

## Running

```powershell
bin\win32\icftd.exe                            # start; assets decoded on first run
bin\win32\icftd.exe --browse                   # M1: step through every picture
bin\win32\icftd.exe --gfx-test out\gfx.bmp     # M2: exercise every drawing primitive
bin\win32\icftd.exe --match ref\scene1.bmp     # M2: which picture is this frame?
```

Browse keys: right/space/enter next, left previous, up/down ±10 pictures, ESC quit.

## Tests

```powershell
# pack reader vs the exporter's own decode; must print "547 verified, 0 mismatches"
powershell -ExecutionPolicy Bypass -File tools\verify-pack.ps1

# render one picture through the real game code path to PNG
powershell -ExecutionPolicy Bypass -File tools\show-picture.ps1 -Name "Desert2/BACKS/!B14" -Out out.png
powershell -ExecutionPolicy Bypass -File tools\show-picture.ps1 -Index 197 -Out out.png

# M2: compare a rebuilt frame against a reference capture (exit 0 = identical)
powershell -ExecutionPolicy Bypass -File tools\ref-frame.ps1 -In <winuae-grab.png> -Out ref\scene1.bmp
powershell -ExecutionPolicy Bypass -File tools\diff-frame.ps1 -A out\shot.bmp -B ref\scene1.bmp `
    -Tolerance 16 -Out out\diff.png
powershell -ExecutionPolicy Bypass -File tools\make-winuae-config.ps1 -Rom "<kickstart.rom>"
"E:\Meine Programme\WinUAE\winuae64.exe" -f tools\icftd.uae     # boot the original
powershell -ExecutionPolicy Bypass -File tools\freeze-frame.ps1 -Title WinUAE -Out ref\title.png
```

## Where to start reading

* `docs/recomp-plan.md` — what exists, what the engine looks like, the milestone plan
* `re/README.md` — the Ghidra setup, dshell memory layout (A4 = 0x29A56), known artifacts
* `src/assetExport/amiga_formats.md` — disk, hunk, resource and picture formats
* `re/decomp_all/dshell/INDEX.txt` — function map with callers and callees

## Status

| milestone | state |
|---|---|
| M0 toolchain + framebuffer skeleton | done, both binaries build |
| extraction + Ghidra decompilation | done (752 functions, no undefined bytes) |
| M1 asset pack (`game.pak`) + picture browser | done — 547 pictures, 0 mismatches |
| M2 video parity + Amiga graphics subset | **done** — `Desert2/BACKS/!B28` reproduces the WinUAE reference frame with 0 differing pixels |
| audio, DOS 16-bit | postponed |

## What is not in git

`disks/`, `export/`, `assets/`, `re/`, `ref/` and `bin/` are game data, derived from it, or
build output; `.gitignore` excludes them (only `disks/README.md` and `assets/README.md` are
tracked, as placeholders and instructions). Everything in them can be regenerated from the
original floppy images with the commands above.
