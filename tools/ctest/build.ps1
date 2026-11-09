<#
.SYNOPSIS
    Builds tools\ctest\ctest.exe - the host-side replay of the ported C functions.

.DESCRIPTION
    Same Open Watcom win32 toolchain as the game, but a console program: it loads a binary
    fixture (written by `rcmp --emit-raw`), calls the port with typed arguments and prints a
    canonical dump that tools\port-diff.ps1 compares against the interpreter's dump.

.EXAMPLE
    powershell -ExecutionPolicy Bypass -File tools\ctest\build.ps1
#>
param(
    [string]$WatcomHome = $(if ($env:WATCOM) { $env:WATCOM } else { "H:\Meine Programme\Open Watcom" }),
    [switch]$Debug
)

$ErrorActionPreference = 'Stop'
$here = $PSScriptRoot
$root = Split-Path -Parent (Split-Path -Parent $here)
$out = Join-Path $root 'bin\win32'

$env:WATCOM = $WatcomHome
$env:INCLUDE = @((Join-Path $WatcomHome 'h'), (Join-Path $WatcomHome 'h\nt')) -join ';'
$env:Path = (Join-Path $WatcomHome 'binnt64') + ';' + $env:Path

function Q([string]$p) { '"' + $p + '"' }

$wcl = Join-Path $WatcomHome 'binnt64\wcl386.exe'
if (-not (Test-Path $wcl)) { throw "wcl386.exe not found under $WatcomHome" }

New-Item -ItemType Directory -Force $out | Out-Null

$flags = if ($Debug) { @('-bt=nt', '-q', '-5s', '-d2', '-od') } else { @('-bt=nt', '-q', '-5s', '-ox') }
$srcs = @(
    (Join-Path $here 'ctest.c'),
    (Join-Path $here 'cases.c'),
    (Join-Path $root 'src\game\core\sys\helpers.c')
) | ForEach-Object { Q $_ }

$cmd = @((Q $wcl)) + $flags + @('-fe=' + (Q (Join-Path $out 'ctest.exe'))) + $srcs
Write-Host ('ctest: ' + ($cmd -join ' '))
$line = $cmd -join ' '
cmd /c $line
if ($LASTEXITCODE -ne 0) { throw "ctest build failed ($LASTEXITCODE)" }
Write-Host ('-> ' + (Join-Path $out 'ctest.exe'))
