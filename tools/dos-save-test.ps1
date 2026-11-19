# Builds and runs tools\dos-save-test.c: the save path (DSAVE: -> saves\slot<N>\ICFTD and
# \ICFTD2) exercised through rt_os_call, the same seam the engine's own save routines go through.
#
#   powershell -ExecutionPolicy Bypass -File tools\dos-save-test.ps1
#
# The test writes into <exe dir>\saves\slot3, slot4 and slot5, i.e. bin\win32\saves\slot3..5. Those
# three are emptied for the run and put back afterwards, so a developer's own saves survive.
param(
    [string]$WatcomHome = $(if ($env:WATCOM) { $env:WATCOM } else { "H:\Meine Programme\Open Watcom" })
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
$rt   = Join-Path $root 'src\runtime'
$obj  = Join-Path $root 'out\dos-save-obj'
$exe  = Join-Path $root 'bin\win32\dos-save-test.exe'

$env:WATCOM = $WatcomHome
# The DirectX headers ship inside Open Watcom (h\nt\directx): plat_win32.c's true-colour
# presenter is built from them (docs\display-rate.md, phase 3).
$env:INCLUDE = @((Join-Path $WatcomHome 'h'), (Join-Path $WatcomHome 'h\nt'),
                 (Join-Path $WatcomHome 'h\nt\directx')) -join ';'
$env:LIB = @((Join-Path $WatcomHome 'lib386'), (Join-Path $WatcomHome 'lib386\nt')) -join ';'
$env:PATH = @((Join-Path $WatcomHome 'binnt64'), (Join-Path $WatcomHome 'binnt')) -join ';'

if (Test-Path $obj) { Remove-Item $obj -Recurse -Force }
New-Item -ItemType Directory -Force -Path $obj | Out-Null

$sources = @(
    '..\..\tools\dos-save-test.c',
    '..\..\src\runtime\amiga\memory.c',
    '..\..\src\runtime\amiga\machine.c',
    '..\..\src\runtime\amiga\blitter.c',
    '..\..\src\runtime\amiga\display.c',
    '..\..\src\runtime\amiga\slots.c',
    '..\..\src\runtime\amiga\copper.c',
    '..\..\src\runtime\amiga\audio.c',
    '..\..\src\runtime\amiga\bus_cycles.c',
    '..\..\src\runtime\amiga\inst_len.c',
    '..\..\src\runtime\config.c',
    '..\..\src\runtime\plat\win32\border.c',
    '..\..\src\runtime\plat\win32\plat_win32.c'
)
# Watcom splits unquoted arguments on spaces and the repository path has them, so everything is
# relative to the object directory.
$wcl = Join-Path $WatcomHome 'binnt64\wcl386.exe'
$common = @('-bt=nt', '-q', '-5s', '-ox', '-zp8', '-zq', '-za99',
            '-fe=..\..\bin\win32\dos-save-test.exe',
            '-i=..\..\src\runtime', '-i=..\..\src\runtime\amiga')

Push-Location $obj
try {
    & $wcl @common @sources 2>&1 | Out-Host
    $code = $LASTEXITCODE
}
finally { Pop-Location }
if ($code -ne 0) { throw "build failed ($code)" }

$log = Join-Path $root 'out\dos-save-test.log'

# The three slots the test owns. A save a developer left there would make "nothing saved yet" false,
# so they are emptied first and copied back afterwards.
$saves = Join-Path (Split-Path -Parent $exe) 'saves'
$keep  = Join-Path $root 'out\dos-save-backup'
if (Test-Path $keep) { Remove-Item $keep -Recurse -Force }
New-Item -ItemType Directory -Force -Path $keep | Out-Null
foreach ($n in 3, 4, 5) {
    $dir = Join-Path $saves ("slot{0}" -f $n)
    if (Test-Path $dir) {
        Copy-Item $dir (Join-Path $keep ("slot{0}" -f $n)) -Recurse -Force
        Remove-Item $dir -Recurse -Force
    }
}
try {
    & $exe 2>&1 | Out-File -FilePath $log -Encoding utf8
    $code = $LASTEXITCODE
} finally {
    foreach ($n in 3, 4, 5) {
        $dir = Join-Path $saves ("slot{0}" -f $n)
        if (Test-Path $dir) { Remove-Item $dir -Recurse -Force }
        $back = Join-Path $keep ("slot{0}" -f $n)
        if (Test-Path $back) { Copy-Item $back $dir -Recurse -Force }
    }
}
Get-Content $log | Where-Object { $_ -match '^(ok|FAIL|PASS)' } | ForEach-Object { $_ }
Write-Host "dos-save-test: exit $code"
exit $code
