# Runs a DOS program under DOSBox with a generated config.
#
# The default runs the packaged game in bin\dos\game (tools\dos-pack.ps1): ICFTD.EXE, DSHELL.IMG,
# DISK1..3 and NAMES.TXT all in one directory, which is what the release looks like.  Pass -Mount
# and -Autoexec to run something else; the repository is always mounted as Y:, so the game can be
# pointed at the extracted data ("--data Y:\export") while iterating without restaging.
#
#   powershell -ExecutionPolicy Bypass -File tools\dos-run.ps1 [-Autoexec "..."] [-Mount <dir>]
param(
    [string]$DosBox = 'H:\Spiele\DosBox\DOSBox.exe',
    [string]$Mount = '',
    [string]$Autoexec = 'ICFTD.EXE --frames 300 > ICFTD.LOG',
    [string]$LogName = 'ICFTD.LOG',
    [int]$TimeoutSec = 240,
    [int]$MemSize = 16,
    [string]$Cycles = 'max',
    [string]$Core = 'dynamic',
    [string]$SbType = 'sb16',
    [int]$Hdma = 5
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
