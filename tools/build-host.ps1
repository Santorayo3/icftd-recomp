# Builds bin\win32\icftd-recomp.exe: the TRANSLATED game.
#
# Same runtime as the oracle, same 50 Hz tick and the same Musashi core behind it for the 24
# functions the translator refuses - what differs is who executes the instruction stream:
# src\recomp\fn_<addr>.c instead of the original binary, read instruction by instruction.
#
# Built at RC_BASE 0x4000 because that is the layout the program was linked for (see
# docs\next-session.md, "The load address"). The fixture replay (tools\build-recomp.ps1) keeps
# RC_BASE 0.
#
# Incremental: only sources whose .obj is missing or older than the source or any header under
# src\runtime, src\recomp, src\oracle, src\host (or third_party\musashi) are compiled, and the link
# is skipped when nothing changed. -Full restores the clean build (wipe the objects, compile all).
#
#   powershell -ExecutionPolicy Bypass -File tools\build-host.ps1 [-WatcomHome <dir>] [-Full]
param(
    [string]$WatcomHome = $(if ($env:WATCOM) { $env:WATCOM } else { "H:\Meine Programme\Open Watcom" }),
    [switch]$Full
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
$rt   = Join-Path $root 'src\runtime'
$rc   = Join-Path $root 'src\recomp'
$or   = Join-Path $root 'src\oracle'
$hs   = Join-Path $root 'src\host'
$mus  = Join-Path $root 'third_party\musashi'
$plat = Join-Path $root 'src\runtime\plat\win32'
$out  = Join-Path $root 'bin\win32\icftd-recomp.exe'

if (-not (Test-Path (Join-Path $mus 'm68kops.c'))) {
    Write-Host "m68kops.c missing - generating"; & (Join-Path $PSScriptRoot 'musashi-gen.ps1') -WatcomHome $WatcomHome
}

New-Item -ItemType Directory -Force -Path (Split-Path -Parent $out) | Out-Null

$env:WATCOM = $WatcomHome
$env:EDPATH = Join-Path $WatcomHome 'eddat'
# The DirectX headers ship inside Open Watcom (h\nt\directx): plat_win32.c's true-colour
# presenter is built from them (docs\display-rate.md, phase 3).
$env:INCLUDE = @((Join-Path $WatcomHome 'h'), (Join-Path $WatcomHome 'h\nt'),
                 (Join-Path $WatcomHome 'h\nt\directx')) -join ';'
$env:LIB = @((Join-Path $WatcomHome 'lib386'), (Join-Path $WatcomHome 'lib386\nt')) -join ';'
$env:PATH = @((Join-Path $WatcomHome 'binnt64'), (Join-Path $WatcomHome 'binnt')) -join ';'

# The executable's own resources: the application icon (assets\app_icon.png resampled by
# tools\mkappicon.ps1) and the version page, compiled by wrc into bin\win32\res\icftd.res and linked
# in with the objects. Both are build output; the PNG is the tracked source. wrc writes its .res next
# to the current directory and wants no spaces on the command line, so it runs in bin\win32\res and
# the icon is found there.
$resDir = Join-Path $root 'bin\win32\res'
$ico    = Join-Path $resDir 'icftd.ico'
$res    = Join-Path $resDir 'icftd.res'
$rcFile = Join-Path $plat 'icftd.rc'
$png    = Join-Path $root 'assets\app_icon.png'
if (-not (Test-Path $png)) { throw "missing $png - the application icon, see tools\mkappicon.ps1" }
New-Item -ItemType Directory -Force -Path $resDir | Out-Null
if (-not (Test-Path $ico) -or (Get-Item $ico).LastWriteTimeUtc -lt (Get-Item $png).LastWriteTimeUtc) {
    & (Join-Path $PSScriptRoot 'mkappicon.ps1') -Png $png -Out $ico | Out-Host
}
$resStale = -not (Test-Path $res) -or @(@($rcFile, $ico) |
    Where-Object { (Get-Item $_).LastWriteTimeUtc -gt (Get-Item $res).LastWriteTimeUtc }).Count -gt 0
if ($resStale) {
    # wrc writes <input>.res next to the .rc it was given, so the .rc is copied into the build
    # directory first: the .res is build output and does not belong in the source tree next to it.
    Copy-Item -LiteralPath $rcFile -Destination (Join-Path $resDir 'icftd.rc') -Force
    $wrc = Join-Path $WatcomHome 'binnt64\wrc.exe'
    Push-Location $resDir
    try {
        & $wrc -q -bt=nt -r -zku8 'icftd.rc' 2>&1 | Out-Host
        if ($LASTEXITCODE -ne 0) { throw "resource compile failed ($LASTEXITCODE)" }
    }
    finally { Pop-Location }
}

$sources = @(
    (Join-Path $hs 'main.c'),
    (Join-Path $hs 'programs.c'),
    (Join-Path $hs 'seams.c'),
    (Join-Path $hs 'lang_hook.c'),
    (Join-Path $hs 'lang_dump.c'),
    (Join-Path $hs 'title.c'),
    (Join-Path $hs 'title_button.c'),
    (Join-Path $hs 'cheat.c'),
    (Join-Path $hs 'time_freeze.c'),
    (Join-Path $hs 'hospital_camera.c'),
    (Join-Path $hs 'save_button.c'),
    (Join-Path $hs 'save_ui.c'),
    (Join-Path $hs 'quit_confirm.c'),
    (Join-Path $or 'cpu.c'),
    (Join-Path $or 'state.c'),
    (Join-Path $or 'input.c'),
    (Join-Path $rt 'assets.c'),
    (Join-Path $rc 'cpu.c'),
    (Join-Path $rc 'hooks.c'),
    (Join-Path $rc 'fn_table.c'),
    (Join-Path $rc 'ant\ant_table.c'),
    (Join-Path $rt 'amiga\memory.c'),
    (Join-Path $rt 'amiga\machine.c'),
    (Join-Path $rt 'amiga\blitter.c'),
    (Join-Path $rt 'amiga\display.c'),
    (Join-Path $rt 'amiga\audio.c'),
    (Join-Path $rt 'amiga\slots.c'),
    (Join-Path $rt 'amiga\copper.c'),
    (Join-Path $rt 'amiga\bus_cycles.c'),
    (Join-Path $rt 'amiga\inst_len.c'),
    (Join-Path $rt 'config.c'),
    (Join-Path $rt 'lang.c'),
    (Join-Path $rt 'lang_source.c'),
    (Join-Path $rt 'plat\win32\plat_win32.c'),
    (Join-Path $rt 'plat\win32\border.c'),
    (Join-Path $mus 'm68kcpu.c'),
    (Join-Path $mus 'm68kops.c'),
    (Join-Path $mus 'm68kdasm.c'),
    (Join-Path $mus 'softfloat\softfloat.c')
)
$sources += Get-ChildItem (Join-Path $rc 'fn_*.c') | ForEach-Object { $_.FullName } | Sort-Object
# The add-on "Antheads" is a second build of the same engine: its own generated set, in its own
# directory (docs\antheads.md). One image is loaded at a time; both tables are linked.
$sources += Get-ChildItem (Join-Path $rc 'ant\fn_*.c') | ForEach-Object { $_.FullName } | Sort-Object
# Hand-written replacements for hot generated functions (the override seam, docs\recomp-architecture.md):
# the dispatch consults rc_native_fns (src\recomp\cpu.c) before the generated table.
$sources += Get-ChildItem (Join-Path $rc 'patches') -Filter *.c | ForEach-Object { $_.FullName } | Sort-Object

# Hundreds of sources do not fit in one command line, so compile in batches from an object
# directory with relative paths (the repo path has spaces, which Watcom splits on unquoted).
# src\oracle\cpu.c and src\recomp\cpu.c are two different files with one name: an object file is
# named after the source, so each group gets its own directory or one would overwrite the other.
$objDir = Join-Path $root 'bin\win32\recomp-obj-host'

$wcl = Join-Path $WatcomHome 'binnt64\wcl386.exe'
$wlink = Join-Path $WatcomHome 'binnt64\wlink.exe'
$common = @('-bt=nt', '-q', '-5s', '-ox', '-zp8', '-zq', '-za99', '-c', '-dRC_BASE=0x4000',
            '-i=..\..\..\..\src\runtime', '-i=..\..\..\..\src\runtime\amiga',
            '-i=..\..\..\..\src\recomp', '-i=..\..\..\..\src\oracle',
            '-i=..\..\..\..\third_party\musashi')
# The link goes through a directive file: two translated programs are ~1 600 objects, and one
# Windows command line stops at 32 767 characters.
$link = @('-bt=nt', '-q', '-fe=..\icftd-recomp.exe')

$groupOf = {
    param([string]$path)
    if ($path -like '*\src\oracle\*') { return 'oracle' }
    if ($path -like '*\src\recomp\ant\*') { return 'ant' }
    if ($path -like '*\src\recomp\*') { return 'recomp' }
    if ($path -like '*\third_party\*') { return 'core' }
    return 'rt'
}
$objectOf = {
    param([string]$path)
    $name = [System.IO.Path]::GetFileNameWithoutExtension($path) + '.obj'
    return Join-Path (Join-Path $objDir (& $groupOf $path)) $name
}

. (Join-Path $PSScriptRoot 'build-common.ps1')
$sw = [System.Diagnostics.Stopwatch]::StartNew()
$plan = Select-StaleSources -ObjDir $objDir -Sources $sources -ObjectOf $objectOf -Full:$Full `
    -HeaderRoots @($rt, $rc, $or, $hs, $mus) -Stamp (($common + $link) -join ' ')

$prevEap = $ErrorActionPreference
$ErrorActionPreference = 'Continue'
$code = 0
try {
    foreach ($g in 'rt', 'oracle', 'recomp', 'ant', 'core') {
        $rel = @($plan.Stale | Where-Object { (& $groupOf $_) -eq $g } | ForEach-Object { '..\..\..\..\' + $_.Substring($root.Length + 1) })
        if ($rel.Count -eq 0) { continue }
        Push-Location (Join-Path $objDir $g)
        try {
            $batch = 40
            for ($i = 0; $i -lt $rel.Count; $i += $batch) {
                $last = [Math]::Min($i + $batch - 1, $rel.Count - 1)
                & $wcl @common @($rel[$i..$last]) 2>&1 | Out-Host
                if ($LASTEXITCODE -ne 0) { throw "compile failed ($g, batch at $i)" }
            }
        }
        finally { Pop-Location }
    }
    # Sorted, because the link list used to come from directory enumeration (alphabetical) and the
    # linker lays objects out in the order they are given: this keeps the binary identical to a
    # build made before the object directory was kept between runs.
    $objs = @($plan.Objects | ForEach-Object { $_.Substring($objDir.Length + 1) } | Sort-Object)
    $relink = Test-BuildNeeded -Plan $plan -Output $out
    # The resource is not an object, so a changed icon or version page relinks on its own.
    if (-not $relink -and (Get-Item $res).LastWriteTimeUtc -gt (Get-Item $out).LastWriteTimeUtc) { $relink = $true }
    if ($relink) {
        Push-Location $objDir
        try {
            # One `file` line per object, plus the executable's resource. wlink's directive file
            # has no command-line length limit, which the object list needs (32 767 characters).
            $directives = @('option quiet', 'system nt', 'name ..\icftd-recomp.exe')
            $directives += @($objs | ForEach-Object { "file $_" })
            $directives += 'option resource=..\res\icftd.res'
            Set-Content -LiteralPath 'link.lnk' -Value $directives -Encoding ASCII
            & $wlink '@link.lnk' 2>&1 | Out-Host
            $code = $LASTEXITCODE
        }
        finally { Pop-Location }
    }
    if ($code -eq 0) {
        Clear-BuildErrors -ObjDir $objDir
        Set-BuildStamp -ObjDir $objDir -Stamp (($common + $link) -join ' ')
    }
}
finally {
    $ErrorActionPreference = $prevEap
}
$sw.Stop()
if ($code -ne 0) { throw "link failed ($code)" }
Write-Host ("-> $out ($($sources.Count) source file(s), $($objs.Count) object(s), " +
            "$($plan.Stale.Count) compiled$(if (-not $relink) { ', link skipped' }), " +
            "$([Math]::Round($sw.Elapsed.TotalSeconds, 1)) s)")
