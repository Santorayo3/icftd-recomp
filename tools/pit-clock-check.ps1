# Checks the DOS profiler's 8254 clock on the host, against a simulated machine.
#
# src\runtime\plat\dos\pitclock.h holds the whole algorithm, so it can be compiled without DOSBox or
# port I/O: this builds tools\pit-clock-check.c (which simulates the counter in modes 2 and 3, the
# BIOS tick and its handler delay, racing latches, corrupt counter readings and a midnight reset) and
# runs it. Every case compares the clock against the simulated time itself, so a pass means "no
# drift", not "looks plausible".
#
# Covers: intervals of 100, 500 and 1000 ms started on and around timer boundaries; sparse and
# frequent sampling of the same interval; both PIT modes; an inconsistent (tick moved across the
# latch) snapshot; a counter reading that steps backwards; a BIOS tick whose handler is late; the
# midnight tick reset; and a minute of irregular sampling against an independent reference.
#
#   powershell -ExecutionPolicy Bypass -File tools\pit-clock-check.ps1 [-WatcomHome <dir>]
param(
    [string]$WatcomHome = $(if ($env:WATCOM) { $env:WATCOM } else { "H:\Meine Programme\Open Watcom" })
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
$out = Join-Path $root 'out'
$exe = Join-Path $out 'pit-clock-check.exe'

$cc = Join-Path $WatcomHome 'binnt64\wcl386.exe'
if (-not (Test-Path $cc)) { Write-Host "pit-clock: SKIP (no Open Watcom at $WatcomHome)"; exit 0 }

New-Item -ItemType Directory -Force -Path $out | Out-Null
$env:WATCOM = $WatcomHome
$env:EDPATH = Join-Path $WatcomHome 'eddat'
$env:INCLUDE = @((Join-Path $WatcomHome 'h'), (Join-Path $WatcomHome 'h\nt')) -join ';'
$env:LIB = @((Join-Path $WatcomHome 'lib386'), (Join-Path $WatcomHome 'lib386\nt')) -join ';'
$env:PATH = @((Join-Path $WatcomHome 'binnt64'), (Join-Path $WatcomHome 'binnt')) -join ';'

Push-Location $root
try {
    # Relative paths: the checkout's own path may contain spaces, and wcl386 splits -i= and -fe= at
    # the first space.
    $args = @('-q', '-bt=nt', '-ox', '-i=src\runtime', '-i=src\runtime\plat\dos',
              '-fe=out\pit-clock-check.exe', 'tools\pit-clock-check.c')
    & $cc @args
    if ($LASTEXITCODE -ne 0) { throw "pit-clock: compile failed ($LASTEXITCODE)" }
    & .\out\pit-clock-check.exe
    if ($LASTEXITCODE -ne 0) { throw "pit-clock: $LASTEXITCODE check(s) failed" }
}
finally { Pop-Location }
