# Stages a runnable Windows release in bin\win32\game and zips it:
#
#   It Came from the Desert.exe   the translated game (tools\build-host.ps1)
#   export\                       empty: the extracted game data, written on the first start
#   disks\                        empty: the player's three original Amiga floppy images go here
#   saves\                        empty: the save slots (F1..F4 pick one, F5 cycles them)
#
# The release ships **no game data** - the player's own disks are the only source. On its first
# start the game extracts `disks\` into `export\` and boots (src\runtime\assets.c); without the
# three images it shows
#   Please put the three original 'It Came from the Desert' disk images in the 'disks' folder and restart.
# and exits. Later starts read `export\` and don't look at `disks\` again.
#
# The executable carries its own icon and version page (src\runtime\plat\win32\icftd.rc, linked in
# by tools\build-host.ps1), so the release is recognisable in Explorer under the game's name.
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
# The release's name, not the build's: the build keeps a development name (every check script and
# play.cmd run bin\win32\icftd-recomp.exe), and the copy that ships is the game's own.
$name = 'It Came from the Desert.exe'

if (-not $NoBuild) { & (Join-Path $PSScriptRoot 'build-host.ps1') }
if (-not (Test-Path $exe)) { throw "missing $exe - run tools\build-host.ps1 first" }

if (Test-Path $Out) { Remove-Item -LiteralPath $Out -Recurse -Force }
New-Item -ItemType Directory -Force -Path $Out | Out-Null
foreach ($d in 'export', 'disks', 'saves') {
    New-Item -ItemType Directory -Force -Path (Join-Path $Out $d) | Out-Null
}
Copy-Item -LiteralPath $exe -Destination (Join-Path $Out $name)

# The translations travel next to the executable, where the game looks for them first
# (lang.c, lang_read_file). `en.csv` is the source text - the game's own script - and `*.work.csv`
# is the translator's file: neither is a translation and neither may be shipped.
$langDir = Join-Path $root 'lang'
$langFiles = @()
if (Test-Path $langDir) {
    $langFiles = @(Get-ChildItem -LiteralPath $langDir -Filter '*.csv' -File |
                   Where-Object { $_.Name -ne 'en.csv' -and $_.Name -notlike '*.work.csv' })
}
if ($langFiles.Count -gt 0) {
    New-Item -ItemType Directory -Force -Path (Join-Path $Out 'lang') | Out-Null
    foreach ($f in $langFiles) {
        Copy-Item -LiteralPath $f.FullName -Destination (Join-Path $Out ('lang\' + $f.Name))
    }
    Write-Output ("win32-pack: {0} translation file(s) in lang\" -f $langFiles.Count)
}

$zip = Join-Path (Split-Path -Parent $Out) 'icftd-win32.zip'
if (Test-Path $zip) { Remove-Item -LiteralPath $zip -Force }
# Compress-Archive drops empty directories, and `export\`, `disks\` and `saves\` are exactly that -
# the release's whole point - so the entries are written here, explicitly.
try { Add-Type -AssemblyName System.IO.Compression.FileSystem -ErrorAction Stop } catch { }
$archive = [System.IO.Compression.ZipFile]::Open($zip, 'Create')
try {
    foreach ($d in 'export', 'disks', 'saves') { [void]$archive.CreateEntry("$d/") }
    if ($langFiles.Count -gt 0) {
        [void]$archive.CreateEntry('lang/')
        foreach ($f in $langFiles) {
            [void][System.IO.Compression.ZipFileExtensions]::CreateEntryFromFile(
                $archive, (Join-Path $Out ('lang\' + $f.Name)), ('lang/' + $f.Name), 'Optimal')
        }
    }
    [void][System.IO.Compression.ZipFileExtensions]::CreateEntryFromFile(
        $archive, (Join-Path $Out $name), $name, 'Optimal')
}
finally { $archive.Dispose() }

$bytes = (Get-Item $zip).Length
Write-Host "-> $Out ($name, empty export\ disks\ saves\)"
Write-Host "-> $zip ($([Math]::Round($bytes / 1024, 1)) KB)"