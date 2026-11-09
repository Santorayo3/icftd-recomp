# Generates Musashi's m68kops.c / m68kops.h with the vendored m68kmake, using the same
# Watcom environment that src\game\build.ps1 sets up.
#   powershell -ExecutionPolicy Bypass -File tools\musashi-gen.ps1 [-WatcomHome <dir>]
param(
    [string]$WatcomHome = $(if ($env:WATCOM) { $env:WATCOM } else { "H:\Meine Programme\Open Watcom" })
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
$mus = Join-Path $root 'third_party\musashi'
if (-not (Test-Path (Join-Path $mus 'm68k_in.c'))) { throw "musashi not vendored at $mus" }

$env:WATCOM = $WatcomHome
$env:EDPATH = Join-Path $WatcomHome 'eddat'
$env:INCLUDE = @((Join-Path $WatcomHome 'h'), (Join-Path $WatcomHome 'h\nt')) -join ';'
$env:LIB = @((Join-Path $WatcomHome 'lib386'), (Join-Path $WatcomHome 'lib386\nt')) -join ';'
$env:PATH = @((Join-Path $WatcomHome 'binnt64'), (Join-Path $WatcomHome 'binnt')) -join ';'

Push-Location $mus
try {
    & (Join-Path $WatcomHome 'binnt64\wcl386.exe') -bt=nt -q -fe=m68kmake.exe m68kmake.c
    if ($LASTEXITCODE -ne 0) { throw "m68kmake build failed ($LASTEXITCODE)" }
    & .\m68kmake.exe . m68k_in.c
    if ($LASTEXITCODE -ne 0) { throw "m68kmake run failed ($LASTEXITCODE)" }
}
finally { Pop-Location }
Get-ChildItem (Join-Path $mus 'm68kops.*') | Select-Object Name, Length
