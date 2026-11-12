# Builds the translated game's development harness: bin\win32\recomp-check.exe
#
# The target links exactly what the shipped game links - src\runtime + src\recomp - and no 68000
# core. recomp-check is the differential replay: it runs one translated function on an ICFX fixture
# and prints the same canonical dump `rcmp --dump` prints, so tools\recomp-fixtures.ps1 can diff
# them (registers + every touched memory byte).
#
#   powershell -ExecutionPolicy Bypass -File tools\build-recomp.ps1 [-WatcomHome <dir>] [-Base 0]
#
# -Base is the address the image is loaded at, and it only changes RC_BASE (src\recomp\cpu.h): the
# fixture replay runs the base-0 image, so it is the default; the game build passes 0x4000.
param(
    [string]$WatcomHome = $(if ($env:WATCOM) { $env:WATCOM } else { "H:\Meine Programme\Open Watcom" }),
    [string]$Base = '0',
    [string]$Exe = 'recomp-check.exe',
    [string]$ObjDir = 'recomp-obj'
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
$rt   = Join-Path $root 'src\runtime'
$rc   = Join-Path $root 'src\recomp'
$out  = Join-Path $root "bin\win32\$Exe"

New-Item -ItemType Directory -Force -Path (Split-Path -Parent $out) | Out-Null

$env:WATCOM = $WatcomHome
$env:INCLUDE = @((Join-Path $WatcomHome 'h'), (Join-Path $WatcomHome 'h\nt')) -join ';'
$env:LIB = @((Join-Path $WatcomHome 'lib386'), (Join-Path $WatcomHome 'lib386\nt')) -join ';'
$env:PATH = @((Join-Path $WatcomHome 'binnt64'), (Join-Path $WatcomHome 'binnt')) -join ';'

$sources = @(
    (Join-Path $rc 'cpu.c'),
    (Join-Path $rc 'hooks.c'),
    (Join-Path $rc 'fn_table.c'),
    (Join-Path $rc 'check.c'),
    (Join-Path $rt 'amiga\memory.c'),
    (Join-Path $rt 'amiga\machine.c'),
    (Join-Path $rt 'amiga\blitter.c'),
    (Join-Path $rt 'amiga\display.c'),
    (Join-Path $rt 'amiga\audio.c'),
    (Join-Path $rt 'amiga\slots.c'),
    (Join-Path $rt 'amiga\bus_cycles.c'),
    (Join-Path $rt 'plat\win32\plat_win32.c')
)
# Every translated function: one file per function, discovered so the script never needs editing.
$sources += Get-ChildItem (Join-Path $rc 'fn_*.c') | ForEach-Object { $_.FullName } | Sort-Object

# Hundreds of sources do not fit in one command line, so compile in batches into an object
# directory and link once. Watcom splits unquoted arguments on spaces, and the repository path has
# spaces, so the compiler runs from the object directory and sees only relative paths.
$objDir = Join-Path $root "bin\win32\$ObjDir"
if (Test-Path $objDir) { Remove-Item $objDir -Recurse -Force }
New-Item -ItemType Directory -Force -Path $objDir | Out-Null

$wcl = Join-Path $WatcomHome 'binnt64\wcl386.exe'
$rel = @($sources | ForEach-Object { '..\..\..\' + $_.Substring($root.Length + 1) })
$common = @('-bt=nt', '-q', '-5s', '-ox', '-zp8', '-zq', '-za99', '-c', "-dRC_BASE=$Base",
            '-i=..\..\..\src\runtime', '-i=..\..\..\src\runtime\amiga', '-i=..\..\..\src\recomp')

$prevEap = $ErrorActionPreference
$ErrorActionPreference = 'Continue'
Push-Location $objDir
try {
    $batch = 40
    for ($i = 0; $i -lt $rel.Count; $i += $batch) {
        $last = [Math]::Min($i + $batch - 1, $rel.Count - 1)
        & $wcl @common @($rel[$i..$last]) 2>&1 | Out-Host
        if ($LASTEXITCODE -ne 0) { $ErrorActionPreference = $prevEap; throw "compile failed (batch at $i)" }
    }
    $objs = @(Get-ChildItem $objDir -Filter *.obj | ForEach-Object { $_.Name })
    & $wcl '-bt=nt' '-q' "-fe=..\$Exe" @objs 2>&1 | Out-Host
    $code = $LASTEXITCODE
}
finally {
    Pop-Location
    $ErrorActionPreference = $prevEap
}
if ($code -ne 0) { throw "link failed ($code)" }
Write-Host "-> $out ($($sources.Count) source file(s), $($objs.Count) object(s))"