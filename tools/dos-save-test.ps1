# Builds and runs out\dos-save-test.c: the save path (DSAVE: -> saves\slot<N>\ICFTD) exercised
# through rt_os_call, the same seam the engine's own save routine goes through.
#
#   powershell -ExecutionPolicy Bypass -File tools\dos-save-test.ps1
#
# The test writes into <exe dir>\saves\slot3, i.e. bin\win32\saves\slot3.
param(
    [string]$WatcomHome = $(if ($env:WATCOM) { $env:WATCOM } else { "H:\Meine Programme\Open Watcom" })
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
$rt   = Join-Path $root 'src\runtime'
$obj  = Join-Path $root 'out\dos-save-obj'
$exe  = Join-Path $root 'bin\win32\dos-save-test.exe'

$env:WATCOM = $WatcomHome
$env:INCLUDE = @((Join-Path $WatcomHome 'h'), (Join-Path $WatcomHome 'h\nt')) -join ';'
$env:LIB = @((Join-Path $WatcomHome 'lib386'), (Join-Path $WatcomHome 'lib386\nt')) -join ';'
$env:PATH = @((Join-Path $WatcomHome 'binnt64'), (Join-Path $WatcomHome 'binnt')) -join ';'

if (Test-Path $obj) { Remove-Item $obj -Recurse -Force }
New-Item -ItemType Directory -Force -Path $obj | Out-Null

$sources = @(
    '..\..\out\dos-save-test.c',
    '..\..\src\runtime\amiga\memory.c',
    '..\..\src\runtime\amiga\machine.c',
    '..\..\src\runtime\amiga\blitter.c',
    '..\..\src\runtime\amiga\display.c',
    '..\..\src\runtime\config.c',
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
& $exe 2>&1 | Out-File -FilePath $log -Encoding utf8
$code = $LASTEXITCODE
Get-Content $log | Where-Object { $_ -match '^(ok|FAIL|PASS)' } | ForEach-Object { $_ }
Write-Host "dos-save-test: exit $code"
exit $code
