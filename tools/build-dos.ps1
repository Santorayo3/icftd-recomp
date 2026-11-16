# Builds bin\dos\ICFTD.EXE: the TRANSLATED game for MS-DOS.
#
# Same runtime and same translated image as bin\win32\icftd-recomp.exe; only the platform layer
# differs (src\runtime\plat\dos) and the front end is src\host\dos_main.c, which is the game
# itself.  Built at RC_BASE 0x4000 like the Windows build.
#
# 32-bit DOS needs a protected-mode extender.  The linker binds DOS/32A, the open-source DOS/4GW
# replacement that Open Watcom ships (binw\dos32a.exe, stub32a.exe), so the executable runs
# unchanged under MS-DOS, DOSBox and Windows' NTVDM.
#
#   powershell -ExecutionPolicy Bypass -File tools\build-dos.ps1 [-WatcomHome <dir>] [-Full]
#
# Incremental like build-host.ps1: an object is recompiled only when it is missing or older than
# its source or any header under the source trees, and the link is skipped when nothing changed.
# Its object directory is its own (bin\dos\obj), so the -bt=dos objects never mix with the Windows
# ones; -Full wipes it and compiles everything.
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
$outDir = Join-Path $root 'bin\dos'
$out  = Join-Path $outDir 'ICFTD.EXE'

if (-not (Test-Path (Join-Path $mus 'm68kops.c'))) {
    Write-Host "m68kops.c missing - generating"; & (Join-Path $PSScriptRoot 'musashi-gen.ps1') -WatcomHome $WatcomHome
}

New-Item -ItemType Directory -Force -Path $outDir | Out-Null

$env:WATCOM = $WatcomHome
$env:EDPATH = Join-Path $WatcomHome 'eddat'
$env:INCLUDE = @((Join-Path $WatcomHome 'h'), (Join-Path $WatcomHome 'h\nt')) -join ';'
$env:LIB = @((Join-Path $WatcomHome 'lib386'), (Join-Path $WatcomHome 'lib386\dos')) -join ';'
$env:PATH = @((Join-Path $WatcomHome 'binnt64'), (Join-Path $WatcomHome 'binnt'),
              (Join-Path $WatcomHome 'binw')) -join ';'

$sources = @(
    (Join-Path $hs 'dos_main.c'),
    (Join-Path $hs 'title.c'),
    (Join-Path $hs 'title_button.c'),
    (Join-Path $hs 'cheat.c'),
    (Join-Path $hs 'hospital_camera.c'),
    (Join-Path $or 'cpu.c'),
    (Join-Path $or 'state.c'),
    (Join-Path $or 'input.c'),
    (Join-Path $rc 'cpu.c'),
    (Join-Path $rc 'hooks.c'),
    (Join-Path $rc 'fn_table.c'),
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
    (Join-Path $rt 'plat\dos\plat_dos.c'),
    (Join-Path $mus 'm68kcpu.c'),
    (Join-Path $mus 'm68kops.c'),
    (Join-Path $mus 'm68kdasm.c'),
    (Join-Path $mus 'softfloat\softfloat.c')
)
$sources += Get-ChildItem (Join-Path $rc 'fn_*.c') | ForEach-Object { $_.FullName } | Sort-Object

# Hundreds of sources do not fit one command line (the repo path has spaces, which Watcom splits
# on).  One object directory per source group: src\oracle\cpu.c and src\recomp\cpu.c are two
# different files with one name.
$objDir = Join-Path $outDir 'obj'

$wcl = Join-Path $WatcomHome 'binnt64\wcl386.exe'
# -4s: i486 code, stack calling convention (consistent across every object).  DOS has no
# 8.3-length limit on object names, but the object dir depth matters: the -i paths are relative
# to bin\dos\obj\<group>.  EMU_TRACE_RING=0 drops the per-instruction PC ring: a development aid
# whose store cost every emulated instruction, and nothing emulated depends on it.
$common = @('-bt=dos', '-q', '-4s', '-ox', '-zp8', '-zq', '-za99', '-c', '-dRC_BASE=0x4000',
            '-dEMU_TRACE_RING=0',
            '-i=..\..\..\..\src\runtime', '-i=..\..\..\..\src\runtime\amiga',
            '-i=..\..\..\..\src\recomp', '-i=..\..\..\..\src\oracle',
            '-i=..\..\..\..\third_party\musashi')
# -l=dos32a binds the DOS/32A stub: the executable is an LE image with the extender attached, so it
# runs like any DOS program.
$link = @('-bt=dos', '-l=dos32a', '-q', '-fe=..\ICFTD.EXE')

$groupOf = {
    param([string]$path)
    if ($path -like '*\src\oracle\*') { return 'oracle' }
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
    foreach ($g in 'rt', 'oracle', 'recomp', 'core') {
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
    if ($relink) {
        Push-Location $objDir
        try {
            & $wcl @link @objs 2>&1 | Out-Host
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
$size = (Get-Item $out).Length
Write-Host ("-> $out ($($sources.Count) source file(s), $($objs.Count) object(s), " +
            "$($plan.Stale.Count) compiled$(if (-not $relink) { ', link skipped' }), " +
            "$([Math]::Round($size / 1KB)) KB, $([Math]::Round($sw.Elapsed.TotalSeconds, 1)) s)")
