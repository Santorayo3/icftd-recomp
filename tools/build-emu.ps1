# Builds bin\win32\icftd-emu.exe: the recompilation runtime bring-up tool (Musashi + our machine).
#   powershell -ExecutionPolicy Bypass -File tools\build-emu.ps1 [-WatcomHome <dir>]
# Kept out of src\game\build.ps1 on purpose: the 68k core is ~900 KB of C and would slow every
# gate run. The emulator is a tool, the gate tests the front end.
param(
    [string]$WatcomHome = $(if ($env:WATCOM) { $env:WATCOM } else { "H:\Meine Programme\Open Watcom" })
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
$core = Join-Path $root 'src\game\core'
$mus  = Join-Path $root 'third_party\musashi'
$out  = Join-Path $root 'bin\win32\icftd-emu.exe'

if (-not (Test-Path (Join-Path $mus 'm68kops.c'))) {
    Write-Host "m68kops.c missing - generating"; & (Join-Path $PSScriptRoot 'musashi-gen.ps1') -WatcomHome $WatcomHome
}

# bin\ is build output and not in git, so the output directory may not exist yet.
New-Item -ItemType Directory -Force -Path (Split-Path -Parent $out) | Out-Null

$env:WATCOM = $WatcomHome
$env:EDPATH = Join-Path $WatcomHome 'eddat'
$env:INCLUDE = @((Join-Path $WatcomHome 'h'), (Join-Path $WatcomHome 'h\nt')) -join ';'
$env:LIB = @((Join-Path $WatcomHome 'lib386'), (Join-Path $WatcomHome 'lib386\nt')) -join ';'
$env:PATH = @((Join-Path $WatcomHome 'binnt64'), (Join-Path $WatcomHome 'binnt')) -join ';'

$args = @(
    '-bt=nt', '-q', '-5s', '-ox', '-zp8', '-zq', '-za99',
    ('-i="' + $core + '"'),
    ('-i="' + (Join-Path $core 'emu') + '"'),
    ('-i="' + $mus + '"'),
    ('-fe="' + $out + '"'),
    ('"' + (Join-Path $root 'src\game\emu_main.c') + '"'),
    ('"' + (Join-Path $core 'emu\mem.c') + '"'),
    ('"' + (Join-Path $core 'emu\machine.c') + '"'),
    ('"' + (Join-Path $core 'emu\blit.c') + '"'),
    ('"' + (Join-Path $core 'emu\gfx.c') + '"'),
    ('"' + (Join-Path $mus 'm68kcpu.c') + '"'),
    ('"' + (Join-Path $mus 'm68kops.c') + '"'),
    ('"' + (Join-Path $mus 'm68kdasm.c') + '"'),
    ('"' + (Join-Path $mus 'softfloat\softfloat.c') + '"'),
    ('"' + (Join-Path $root 'src\game\plat\win32\plat_win32.c') + '"')
)
& (Join-Path $WatcomHome 'binnt64\wcl386.exe') @args 2>&1 | Out-Host
if ($LASTEXITCODE -ne 0) { throw "build failed ($LASTEXITCODE)" }
Write-Host "-> $out"

