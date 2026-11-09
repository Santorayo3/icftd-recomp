# Generated asset pack

`assets\game.pak` is built from the user's own Amiga disk images (`disks\`) and is
therefore not tracked by git. It contains the decoded pictures, palettes, scripts
and logic data of the original game.

The game creates it automatically on first start if it is missing. To rebuild it by
hand:

```powershell
powershell -ExecutionPolicy Bypass -File tools\gamepack.ps1
```

`tools\verify-pack.ps1` checks the pack against the exporter's own decoder.
