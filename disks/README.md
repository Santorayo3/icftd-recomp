# Put your own disk images here

This folder is where the original floppy images go. They are copyrighted game data,
so nothing in here is tracked by git (`.gitignore` ignores every file except this
README).

Copy the three Amiga disks into this folder:

```
disks/
  It Came from the Desert (1989)(Cinemaware)(Disk 1 of 3)[!].adf
  It Came from the Desert (1989)(Cinemaware)(Disk 2 of 3)[!].adf
  It Came from the Desert (1989)(Cinemaware)(Disk 3 of 3)[!].adf
```

Names and extensions do not matter: a file counts as a disk image when its size is
at least 100 blocks and a whole number of 512-byte blocks (a raw 880 KB Amiga disk).
READMEs and other small files in this folder are ignored.

## What happens next

Starting the game (`bin\win32\icftd.exe`, or `tools\start.ps1` on a fresh checkout)
decodes everything it needs from these images into `assets\game.pak` on the first
run. To force a re-export, run `bin\win32\icftd.exe --convert`.

## Files the directories do not list

Nothing is hidden any more, but `WANI` (183 016 bytes), `hurt2`, `jet`, `stab1` and disk 1's `devs/`
and `l/` entries used to be reported as *unlisted*: `ICFTD.AmigaExport.exe list <adf>` printed them
as `(orphan)` and the extractor dropped them into the disk root. The directory always listed them —
an OFS bucket points at the first file of a hash chain and each entry continues the chain through a
longword at offset `0x1F0` of its 512-byte header block, which the reader was looking for at
`0x1A0` (always zero). Every file whose name collided with an earlier one in the same bucket was cut
off and then "recovered" as an orphan: `dthatstheguy`→`hurt2`, `exp`→`stab1`, `ants`→`jet`,
`CHICK`→`WANI`, with the parent directory in `0x1F4` (`sfx` or the root).

That mattered: the engine opens these by name, `Desert3:WANI` from the flight routine
`FUN_000107a6` and `Desert3:sfx/hurt2`/`stab1` from the fight's sample loader, so a file in the
wrong directory is a file the game cannot find — the flight showed "Unresolvable file read/write
error! The game is unplayable." and the bar-room fight silently never started. `list` now reports no
orphan on any of the three disks, and the files are where the directory says they are.

`AmigaFs.ReadRoot` still recovers a header block that no bucket reaches (marked `(orphan)` by
`list`), because an unreferenced header with a complete data chain is still file content the game
may open by name. On these three images there is nothing left to recover.

