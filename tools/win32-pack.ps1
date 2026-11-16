# Stages a runnable Windows release in bin\win32\game and zips it:
#
#   ICFTD.EXE   the translated game (tools\build-host.ps1)
#   export\     empty: the extracted game data, written on the first start
#   disks\      empty: the player's three original Amiga floppy images go here
#   saves\      empty: the save slots (F1..F4 pick one, F5 cycles them)
#
# The release ships **no game data** - the player's own disks are the only source. On its first
# start the game extracts `disks\` into `export\` and boots (src\runtime\assets.c); without the
# three images it shows
#   Please put the three original 'It Came from the Desert' disk images in the 'disks' folder and restart.
# and exits. Later starts read `export\` and don't look at `disks\` again.
#
#   powershell -ExecutionPolicy Bypass -File tools\win32-pack.ps1 [-Out <dir>] [-NoBuild]
param(
    [string]$Out = '',
    [switch]$NoBuild
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
if ($Out -eq '') { $Out = Join-Path $root 'bin\win32\game' }
$exe = Join-Path $root 'bin\win32\icftd-recomp.exe'

if (-not $NoBuild) { & (Join-Path $PSScriptRoot 'build-host.ps1') }
if (-not (Test-Path $exe)) { throw "missing $exe - run tools\build-host.ps1 first" }

if (Test-Path $Out) { Remove-Item -LiteralPath $Out -Recurse -Force }
New-Item -ItemType Directory -Force -Path $Out | Out-Null
foreach ($d in 'export', 'disks', 'saves') {
    New-Item -ItemType Directory -Force -Path (Join-Path $Out $d) | Out-Null
}
Copy-Item -LiteralPath $exe -Destination (Join-Path $Out 'ICFTD.EXE')

$zip = Join-Path (Split-Path -Parent $Out) 'icftd-win32.zip'
if (Test-Path $zip) { Remove-Item -LiteralPath $zip -Force }
# Compress-Archive drops empty directories, and `export\`, `disks\` and `saves\` are exactly that -
# the release's whole point - so the entries are written here, explicitly.
try { Add-Type -AssemblyName System.IO.Compression.FileSystem -ErrorAction Stop } catch { }
$archive = [System.IO.Compression.ZipFile]::Open($zip, 'Create')
try {
    foreach ($d in 'export', 'disks', 'saves') { [void]$archive.CreateEntry("$d/") }
    [void][System.IO.Compression.ZipFileExtensions]::CreateEntryFromFile(
        $archive, (Join-Path $Out 'ICFTD.EXE'), 'ICFTD.EXE', 'Optimal')
}
finally { $archive.Dispose() }

$bytes = (Get-Item $zip).Length
Write-Host "-> $Out (ICFTD.EXE, empty export\ disks\ saves\)"
Write-Host "-> $zip ($([Math]::Round($bytes / 1024, 1)) KB)"
