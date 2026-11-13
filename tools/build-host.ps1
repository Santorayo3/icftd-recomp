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
#   powershell -ExecutionPolicy Bypass -File tools\build-host.ps1 [-WatcomHome <dir>]
param(
    [string]$WatcomHome = $(if ($env:WATCOM) { $env:WATCOM } else { "H:\Meine Programme\Open Watcom" })
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
$rt   = Join-Path $root 'src\runtime'
$rc   = Join-Path $root 'src\recomp'
$or   = Join-Path $root 'src\oracle'
$hs   = Join-Path $root 'src\host'
$mus  = Join-Path $root 'third_party\musashi'
$out  = Join-Path $root 'bin\win32\icftd-recomp.exe'

if (-not (Test-Path (Join-Path $mus 'm68kops.c'))) {
    Write-Host "m68kops.c missing - generating"; & (Join-Path $PSScriptRoot 'musashi-gen.ps1') -WatcomHome $WatcomHome
}

New-Item -ItemType Directory -Force -Path (Split-Path -Parent $out) | Out-Null

$env:WATCOM = $WatcomHome
$env:EDPATH = Join-Path $WatcomHome 'eddat'
$env:INCLUDE = @((Join-Path $WatcomHome 'h'), (Join-Path $WatcomHome 'h\nt')) -join ';'
$env:LIB = @((Join-Path $WatcomHome 'lib386'), (Join-Path $WatcomHome 'lib386\nt')) -join ';'
$env:PATH = @((Join-Path $WatcomHome 'binnt64'), (Join-Path $WatcomHome 'binnt')) -join ';'

$sources = @(
    (Join-Path $hs 'main.c'),
    (Join-Path $hs 'title.c'),
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
    (Join-Path $rt 'plat\win32\plat_win32.c'),
    (Join-Path $mus 'm68kcpu.c'),
    (Join-Path $mus 'm68kops.c'),
    (Join-Path $mus 'm68kdasm.c'),
    (Join-Path $mus 'softfloat\softfloat.c')
)
$sources += Get-ChildItem (Join-Path $rc 'fn_*.c') | ForEach-Object { $_.FullName } | Sort-Object

# Hundreds of sources do not fit in one command line, so compile in batches from an object
# directory with relative paths (the repo path has spaces, which Watcom splits on unquoted).
# src\oracle\cpu.c and src\recomp\cpu.c are two different files with one name: an object file is
# named after the source, so each group gets its own directory or one would overwrite the other.
$objDir = Join-Path $root 'bin\win32\recomp-obj-host'
if (Test-Path $objDir) { Remove-Item $objDir -Recurse -Force }
foreach ($g in 'rt', 'oracle', 'recomp', 'core') {
    New-Item -ItemType Directory -Force -Path (Join-Path $objDir $g) | Out-Null
}

$wcl = Join-Path $WatcomHome 'binnt64\wcl386.exe'
$common = @('-bt=nt', '-q', '-5s', '-ox', '-zp8', '-zq', '-za99', '-c', '-dRC_BASE=0x4000',
            '-i=..\..\..\..\src\runtime', '-i=..\..\..\..\src\runtime\amiga',
            '-i=..\..\..\..\src\recomp', '-i=..\..\..\..\src\oracle',
            '-i=..\..\..\..\third_party\musashi')

function Group-Of([string]$path) {
    if ($path -like '*\src\oracle\*') { return 'oracle' }
    if ($path -like '*\src\recomp\*') { return 'recomp' }
    if ($path -like '*\third_party\*') { return 'core' }
    return 'rt'
}

$prevEap = $ErrorActionPreference
$ErrorActionPreference = 'Continue'
try {
    foreach ($g in 'rt', 'oracle', 'recomp', 'core') {
        $rel = @($sources | Where-Object { (Group-Of $_) -eq $g } | ForEach-Object { '..\..\..\..\' + $_.Substring($root.Length + 1) })
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
    $objs = @(Get-ChildItem $objDir -Recurse -Filter *.obj |
              ForEach-Object { $_.Directory.Name + '\' + $_.Name })
    Push-Location $objDir
    try {
        & $wcl '-bt=nt' '-q' '-fe=..\icftd-recomp.exe' @objs 2>&1 | Out-Host
        $code = $LASTEXITCODE
    }
    finally { Pop-Location }
}
finally {
    $ErrorActionPreference = $prevEap
}
if ($code -ne 0) { throw "link failed ($code)" }
Write-Host "-> $out ($($sources.Count) source file(s), $($objs.Count) object(s))"
