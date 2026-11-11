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

Disk 3 carries four files whose header blocks and data chains are complete but
which no directory chain reaches: `WANI` (183 016 bytes), `hurt2`, `jet` and
`stab1`. Disk 1 is the same for its `devs/` and `l/` directories. The game still
opens them by name — the flight routine `FUN_000107a6` asks for `Desert3:WANI`,
and without it the engine shows "Unresolvable file read/write error! The game is
unplayable." and waits forever.

`tools\extract.ps1` therefore recovers every header block no directory reaches
(`AmigaFs.ReadOrphans`): files are placed in the root, recovered directories keep
their own names. `ICFTD.AmigaExport.exe list <adf>` marks them `(orphan)`, so the
recovery is visible rather than silent.

