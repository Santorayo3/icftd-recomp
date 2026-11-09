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
