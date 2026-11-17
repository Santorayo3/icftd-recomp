# Builds the translated game's development harness: bin\win32\recomp-check.exe
#
# The target links exactly what the shipped game links - src\runtime + src\recomp - and no 68000
# core. recomp-check is the differential replay: it runs one translated function on an ICFX fixture
# and prints the same canonical dump `rcmp --dump` prints, so tools\recomp-fixtures.ps1 can diff
# them (registers + every touched memory byte).
#
#   powershell -ExecutionPolicy Bypass -File tools\build-recomp.ps1 [-WatcomHome <dir>] [-Base 0] [-Full]
#
# -Base is the address the image is loaded at, and it only changes RC_BASE (src\recomp\cpu.h): the
# fixture replay runs the base-0 image, so it is the default; the game build passes 0x4000.
#
# Incremental like build-host.ps1: an object is recompiled only when it is missing or older than
# its source or any header under the source trees, and the link is skipped when nothing changed.
# The RC_BASE/value set is stamped into the object directory, so a different -Base never reuses
# objects built for another one; -Full wipes the directory and compiles everything.
param(
    [string]$WatcomHome = $(if ($env:WATCOM) { $env:WATCOM } else { "H:\Meine Programme\Open Watcom" }),
    [string]$Base = '0',
    [string]$Exe = 'recomp-check.exe',
    [string]$ObjDir = 'recomp-obj',
    [switch]$Full
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
    (Join-Path $rt 'amiga\copper.c'),
    (Join-Path $rt 'amiga\bus_cycles.c'),
    (Join-Path $rt 'amiga\inst_len.c'),
    (Join-Path $rt 'plat\win32\plat_win32.c'),
    (Join-Path $rt 'plat\win32\border.c')
)
# Every translated function: one file per function, discovered so the script never needs editing.
$sources += Get-ChildItem (Join-Path $rc 'fn_*.c') | ForEach-Object { $_.FullName } | Sort-Object
# Hand-written replacements for hot generated functions (the override seam, docs\recomp-architecture.md):
# the dispatch consults rc_native_fns (src\recomp\cpu.c) before the generated table.
$sources += Get-ChildItem (Join-Path $rc 'patches') -Filter *.c | ForEach-Object { $_.FullName } | Sort-Object

# Hundreds of sources do not fit in one command line, so compile in batches into an object
# directory and link once. Watcom splits unquoted arguments on spaces, and the repository path has
# spaces, so the compiler runs from the object directory and sees only relative paths. The file
# names are unique across the two trees (fn_<addr>.c plus a handful of known files), so one flat
# directory is enough here.
$objDir = Join-Path $root "bin\win32\$ObjDir"

$wcl = Join-Path $WatcomHome 'binnt64\wcl386.exe'
$common = @('-bt=nt', '-q', '-5s', '-ox', '-zp8', '-zq', '-za99', '-c', "-dRC_BASE=$Base",
            '-i=..\..\..\src\runtime', '-i=..\..\..\src\runtime\amiga', '-i=..\..\..\src\recomp')
$link = @('-bt=nt', '-q', "-fe=..\$Exe")

$objectOf = {
    param([string]$path)
    return Join-Path $objDir ([System.IO.Path]::GetFileNameWithoutExtension($path) + '.obj')
}

. (Join-Path $PSScriptRoot 'build-common.ps1')
$sw = [System.Diagnostics.Stopwatch]::StartNew()
$plan = Select-StaleSources -ObjDir $objDir -Sources $sources -ObjectOf $objectOf -Full:$Full `
    -HeaderRoots @((Join-Path $root 'src\runtime'), (Join-Path $root 'src\recomp'),
                   (Join-Path $root 'src\oracle'), (Join-Path $root 'src\host')) `
    -Stamp (($common + $link) -join ' ')

$prevEap = $ErrorActionPreference
$ErrorActionPreference = 'Continue'
$code = 0
Push-Location $objDir
try {
    $stale = @($plan.Stale | ForEach-Object { '..\..\..\' + $_.Substring($root.Length + 1) })
    $batch = 40
    for ($i = 0; $i -lt $stale.Count; $i += $batch) {
        $last = [Math]::Min($i + $batch - 1, $stale.Count - 1)
        & $wcl @common @($stale[$i..$last]) 2>&1 | Out-Host
        if ($LASTEXITCODE -ne 0) { $ErrorActionPreference = $prevEap; throw "compile failed (batch at $i)" }
    }
    # Sorted, because the link list used to come from directory enumeration (alphabetical) and the
    # linker lays objects out in the order they are given: this keeps the binary identical to a
    # build made before the object directory was kept between runs.
    $objs = @($plan.Objects | ForEach-Object { $_.Substring($objDir.Length + 1) } | Sort-Object)
    $relink = Test-BuildNeeded -Plan $plan -Output $out
    if ($relink) {
        & $wcl @link @objs 2>&1 | Out-Host
        $code = $LASTEXITCODE
    }
    if ($code -eq 0) {
        Clear-BuildErrors -ObjDir $objDir
        Set-BuildStamp -ObjDir $objDir -Stamp (($common + $link) -join ' ')
    }
}
finally {
    Pop-Location
    $ErrorActionPreference = $prevEap
}
$sw.Stop()
if ($code -ne 0) { throw "link failed ($code)" }
Write-Host ("-> $out ($($sources.Count) source file(s), $($objs.Count) object(s), " +
            "$($plan.Stale.Count) compiled$(if (-not $relink) { ', link skipped' }), " +
            "$([Math]::Round($sw.Elapsed.TotalSeconds, 1)) s)")