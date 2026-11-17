# Runs a DOS program under DOSBox with a generated config.
#
# The default runs the packaged release in bin\dos\game (tools\dos-pack.ps1): ICFTD.EXE with an
# empty `DISKS\` that the game fills itself on its first start, which is what the release looks like.
# The repository is mounted as Y:, so a fresh release folder is given the player's own images with
# `--disks Y:\disks` (the default autoexec does that); pass -Mount and -Autoexec to run something
# else, e.g. the extracted tree of a development run ("--data Y:\export").
#
#   powershell -ExecutionPolicy Bypass -File tools\dos-run.ps1 [-Autoexec "..."] [-Mount <dir>]
#
# -Audio is the game's own volume ([AUDIO] sound/music, 0..10) in the mounted folder's ICFTD.INI;
# the measurement runs use 1, which is what docs\dos-hospital-perf.txt is taken at. The file is
# created when the mount has none, because a fresh package (tools\dos-pack.ps1) has no ICFTD.INI and
# the game then writes its own default of 10.
#
# -MixerVolume is DOSBox's own master volume in percent, set from the autoexec before the program
# starts. It scales the host output only - the emulated Paula mixer, the Sound Blaster ring and the
# game's own gain run exactly as before - so a measurement can be quiet without changing a figure.
param(
    [string]$DosBox = 'H:\Spiele\DosBox\DOSBox.exe',
    [string]$Mount = '',
    [string]$Autoexec = 'ICFTD.EXE --disks Y:\disks --frames 300 > ICFTD.LOG',
    [string]$LogName = 'ICFTD.LOG',
    [int]$TimeoutSec = 240,
    [int]$MemSize = 16,
    [string]$Cycles = 'max',
    [string]$Core = 'dynamic',
    [string]$SbType = 'sb16',
    [int]$Hdma = 5,
    [int]$Audio = 1,
    [int]$MixerVolume = 10
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
if ($Mount -eq '') {
    $game = Join-Path $root 'bin\dos\game'
    $Mount = if (Test-Path (Join-Path $game 'ICFTD.EXE')) { $game } else { Join-Path $root 'bin\dos' }
}
$conf = Join-Path $root 'out\dosbox.conf'

$log = Join-Path $Mount $LogName
if (Test-Path $log) { Remove-Item $log -Force -ErrorAction SilentlyContinue }

# The game's own volume, so a measurement is at the level it says it is. A fresh package has no
# ICFTD.INI (tools\dos-pack.ps1 stages an empty release) and the game would write sound=10/music=10.
$ini = Join-Path $Mount 'ICFTD.INI'
$want = @(
    '; ICFTD runtime settings (written by tools\dos-run.ps1 for this run).',
    '',
    '[AUDIO]',
    '; Volume 0..10, 0 = off, 10 = full.',
    "sound=$Audio",
    "music=$Audio"
)
if (Test-Path $ini) {
    $text = Get-Content $ini -Raw
    if ($text -match '(?m)^\s*sound\s*=.*$') { $text = $text -replace '(?m)^\s*sound\s*=.*$', "sound=$Audio" }
    else { $text += "`r`n[AUDIO]`r`nsound=$Audio`r`n" }
    if ($text -match '(?m)^\s*music\s*=.*$') { $text = $text -replace '(?m)^\s*music\s*=.*$', "music=$Audio" }
    else { $text += "music=$Audio`r`n" }
    Set-Content -Path $ini -Value $text -Encoding ascii -NoNewline
}
else {
    Set-Content -Path $ini -Value $want -Encoding ascii
}
Write-Host ("audio: [AUDIO] sound=$Audio music=$Audio; DOSBox mixer ${MixerVolume}%")

New-Item -ItemType Directory -Force -Path (Split-Path -Parent $conf) | Out-Null
$lines = @(
    '[sdl]',
    'fullscreen=false',
    'output=surface',
    '[dosbox]',
    "memsize=$MemSize",
    '[cpu]',
    "core=$Core",
    "cycles=$Cycles",
    # The card DOSBox emulates is the one BLASTER is derived from; sbtype=none leaves the variable
    # unset, which is how the "no sound" path is tested.
    '[sblaster]',
    "sbtype=$SbType",
    'sbbase=220',
    'irq=5',
    'dma=1',
    "hdma=$Hdma",
    '[mixer]',
    'rate=44100',
    'blocksize=1024',
    '[autoexec]',
    # Host output only: the emulated mixer, the card and the game's gain are untouched, so the run
    # stays measurement-identical while the speakers stay quiet.
    "MIXER MASTER ${MixerVolume}:${MixerVolume} /NOSHOW",
    "mount c `"$Mount`"",
    "mount y `"$root`"",
    'c:',
    $Autoexec,
    'exit'
)
Set-Content -Path $conf -Value $lines -Encoding ascii

$p = Start-Process -FilePath $DosBox -ArgumentList "-conf `"$conf`"" -PassThru
$sw = [Diagnostics.Stopwatch]::StartNew()
$timedOut = -not $p.WaitForExit($TimeoutSec * 1000)
$sw.Stop()
if ($timedOut) { try { $p.Kill() } catch {} }
Write-Host ("wall clock: {0:N1} s" -f $sw.Elapsed.TotalSeconds)

if (Test-Path $log) {
    Write-Host "--- $LogName ($((Get-Item $log).Length) bytes) ---"
    Get-Content $log | Select-Object -Last 80
} else {
    Write-Host "no $LogName - the program did not run"
}
$crash = Join-Path $Mount 'RCRASH.TXT'
if (Test-Path $crash) { Write-Host "--- RCRASH.TXT ---"; Get-Content $crash }
if ($timedOut) { Write-Host "TIMEOUT after $TimeoutSec s" }
