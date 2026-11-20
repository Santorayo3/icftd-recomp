# Stages a runnable Windows release in bin\win32\game and zips it:
#
#   It Came from the Desert.exe   the translated game (tools\build-host.ps1)
#   recomplauncher.json           RecompLauncher's file: how the launcher sets the game up, shows
#                                 its settings and starts it (repo root, see README)
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
#   powershell -ExecutionPolicy Bypass -File tools\win32-pack.ps1 [-Out <dir>] [-Version <x.y.z>] [-NoBuild]
param(
    [string]$Out = '',
    [string]$Version = '',
    [switch]$NoBuild
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
if ($Out -eq '') { $Out = Join-Path $root 'bin\win32\game' }
$exe = Join-Path $root 'bin\win32\icftd-recomp.exe'
# The release's name, not the build's: the build keeps a development name (every check script and
# play.cmd run bin\win32\icftd-recomp.exe), and the copy that ships is the game's own.
$name = 'It Came from the Desert.exe'
# The zip's name says what it is, because RecompLauncher picks the file for the player's PC out of
# the system and the processor in it: this is the 32-bit Windows build, and the MS-DOS one travels in
# its own file. The version is the executable's own version page (src\runtime\plat\win32\icftd.rc)
# unless it is given.
if ($Version -eq '') {
    $rc = Get-Content -LiteralPath (Join-Path $root 'src\runtime\plat\win32\icftd.rc') -Raw
    if ($rc -notmatch 'FILEVERSION\s+([0-9]+(?:\s*,\s*[0-9]+)+)') { throw 'no FILEVERSION in icftd.rc - give -Version' }
    $Version = ($Matches[1] -replace '\s', '') -replace ',', '.'
}

if (-not $NoBuild) { & (Join-Path $PSScriptRoot 'build-host.ps1') }
if (-not (Test-Path $exe)) { throw "missing $exe - run tools\build-host.ps1 first" }

if (Test-Path $Out) { Remove-Item -LiteralPath $Out -Recurse -Force }
New-Item -ItemType Directory -Force -Path $Out | Out-Null
foreach ($d in 'export', 'disks', 'saves') {
    New-Item -ItemType Directory -Force -Path (Join-Path $Out $d) | Out-Null
}
Copy-Item -LiteralPath $exe -Destination (Join-Path $Out $name)

# RecompLauncher's file, at the top of the release next to the executable: the launcher reads it to
# ask for the player's own disks, run the extraction (`--prepare`), show icftd.ini's settings and
# start the game. A release without it stops here rather than at the player's first start.
$rl = Join-Path $root 'recomplauncher.json'
if (-not (Test-Path $rl)) { throw "missing $rl - it ships in every release" }
Copy-Item -LiteralPath $rl -Destination (Join-Path $Out 'recomplauncher.json')

# The translations travel next to the executable, where the game looks for them first
# (lang.c, lang_read_file). A language's file is named after a two-letter code (lang.c, lang_scan),
# and the add-on's own half is `<code>_ant.csv`, so `??.csv` and `??_ant.csv` travel: `en.csv` /
# `en_ant.csv` are the source texts - the game's own script - and `*.work.csv` is the translator's
# file, and none of those may be shipped.
$langDir = Join-Path $root 'lang'
$langFiles = @()
if (Test-Path $langDir) {
    $langFiles = @(Get-ChildItem -LiteralPath $langDir -Filter '*.csv' -File |
                   Where-Object { $_.BaseName -match '^[A-Za-z]{2}(_ant)?$' -and
                                  $_.BaseName -notmatch '^en(_ant)?$' })
}
if ($langFiles.Count -gt 0) {
    New-Item -ItemType Directory -Force -Path (Join-Path $Out 'lang') | Out-Null
    foreach ($f in $langFiles) {
        Copy-Item -LiteralPath $f.FullName -Destination (Join-Path $Out ('lang\' + $f.Name))
    }
    Write-Output ("win32-pack: {0} translation file(s) in lang\" -f $langFiles.Count)
}

$zip = Join-Path (Split-Path -Parent $Out) ("ItCameFromTheDesert-{0}-windows-x86.zip" -f $Version)
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
    [void][System.IO.Compression.ZipFileExtensions]::CreateEntryFromFile(
        $archive, (Join-Path $Out 'recomplauncher.json'), 'recomplauncher.json', 'Optimal')
}
finally { $archive.Dispose() }

$bytes = (Get-Item $zip).Length
Write-Host "-> $Out ($name, recomplauncher.json, empty export\ disks\ saves\)"
Write-Host "-> $zip ($([Math]::Round($bytes / 1024, 1)) KB)"