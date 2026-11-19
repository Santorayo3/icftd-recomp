# The port's own artwork

Two kinds of data live next to this file, and they have opposite rules because they have opposite
owners: nothing under the first heading may be shipped, and nothing under the second is derived
from the original game.

## `game.pak` - decoded from the user's disk images, never in git

`assets\game.pak` is built from the Amiga floppy images in `disks\`, so it holds the original
game's pictures, palettes, scripts and logic data. It is not tracked, and it must never be shipped.

```powershell
powershell -ExecutionPolicy Bypass -File tools\gamepack.ps1     # -> assets\game.pak
& src\assetExport\bin\Debug\net10.0\ICFTD.AmigaExport.exe pakinfo assets\game.pak
```

The pack is the container the port's data seam will use (`src\assetExport\Pack.cs`); today the
runtime still reads the files `tools\extract.ps1` writes into `export\` (Win32) or the `DISK1..3`
folders next to `ICFTD.EXE` (DOS), so no build reads the pack yet. Those are extracted game data as
well: a release ships neither them nor the pack - the player supplies the disk images and the tools
decode them locally.

## The port's own PNGs - tracked, and compiled into the executable

These are authored for the port, so they are in git and they *do* ship. There is no pack for them:
each one is converted into a generated C header that is committed next to the code that draws it,
so the game needs none of the original data to show its own screens.

| PNG | generated header | tool |
|---|---|---|
| `titlescreen.png` | `src\host\title_art.h` | `tools\mktitleart.ps1` |
| `btn_normal.png`, `btn_hover.png` | `src\host\title_buttons.h` | `tools\mktitlebuttons.ps1` |
| `minus_normal.png`, `minus_hover.png`, `plus_normal.png`, `plus_hover.png`, `toggle_on.png`, `toggle_off.png` | `src\host\settings_art.h` | `tools\mksettingsart.ps1` |
| `portrait_box.png` | `src\host\portrait_box_art.h` | `tools\mkportraitbox.ps1` |
| `quit_confirm.png` | `src\host\quit_confirm_art.h` | `tools\mkquitconfirm.ps1` |
| `autosave.png` | `src\runtime\amiga\osd_icon.h` | `tools\mkosdicon.ps1` |
| `crosshair.png` | `src\runtime\amiga\crosshair_art.h` | `tools\mkcrosshair.ps1` |
| `border.png` | `src\runtime\plat\win32\border_art.h` | `tools\mkborder.ps1` |
| `app_icon.png` | `bin\win32\res\icftd.ico` (build output, not committed) | `tools\mkappicon.ps1` |

`app_icon.png` is the exception to the table's shape: it is not drawn by the game but is the
executable's Windows icon, so it becomes a multi-size `.ico` in the build directory instead of a C
header. `tools\build-host.ps1` regenerates it when the PNG is newer and links it in with
`src\runtime\plat\win32\icftd.rc` (which also carries the version page).

(`src\runtime\amiga\pointer_art.h` is the same kind of table but has no PNG: its arrow is ASCII art
written into `tools\mkpointer.ps1`.)

The two toggle pictures, the four step pictures and the four button pictures are drawn on the same
three colours, so `tools\mksettingsart.ps1` writes the step and toggle tables as *pen offsets* rather
than raw palette indices: index 0 of each toggle is the cyan the artwork sits on, which it writes as
`TITLE_SETTINGS_TRANSPARENT` so the drawing code leaves those corners alone. The tool checks that the
pictures still agree on their outline, fills and knob colours, so a redraw that breaks one fails
instead of recolouring a control.

A changed PNG only reaches the game once its header is regenerated and the game rebuilt:

```powershell
powershell -ExecutionPolicy Bypass -File tools\mktitleart.ps1
powershell -ExecutionPolicy Bypass -File tools\build-host.ps1
```

`tools\art-check.ps1` enforces the invariant behind this: it regenerates every table and requires
the committed header to match the tool's output exactly (line endings aside), so a stale or
hand-edited table - a picture in the binary that no tracked PNG explains - fails the gate
(`tools\gate.ps1 -Full`). It also names any tracked PNG that no tool reads, because those are not
in the binary either.
