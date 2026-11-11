# Measures how fast the DOS build is, in the only currency that matters for the port: the wall time
# one engine frame takes on a modelled machine, compared with the time the ORIGINAL needs for the
# same frame (about 20 frames/s, i.e. 50 ms - the engine consumes its whole 141,875-cycle vblank
# budget every frame, measured with the oracle).
#
#   powershell -ExecutionPolicy Bypass -File tools\perf-dos.ps1 [-NoBuild] [-Clocks 66000,100000]
#
# Why the wall clock and not an in-game timer:
#   * DOSBox `cycles` is the number of instruction-equivalents it emulates per MILLISECOND, so
#     66000 = ~66M/s = a 486DX2-66 and 100000 = a 486DX4-100 (30000 would be a 30M/s machine).
#   * At a fixed clock the emulated machine is the limiter (verified: 100000 halves to 200000), so
#     wall time per frame IS the modelled machine's time. No cycle table is needed or wanted.
#   * The in-game 8254 helpers (plat_pit_now/plat_ticks_ms) extend a 16-bit counter snapshot and
#     truncate anything longer than 65,536 counts (55 ms) - a frame at these clocks is longer, so
#     they must not be used for frame-scale numbers.
#
# Two frame counts per clock, differenced, so the ~35M-instruction startup drops out.
param(
    [switch]$NoBuild,
    [string]$Clocks = '66000,100000',
    [string]$DosBox = 'H:\Spiele\DosBox\DOSBox.exe'
)

$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
Set-Location $root
$ps  = 'C:\Windows\System32\WindowsPowerShell\v1.0\powershell.exe'
$run = Join-Path $root 'tools\dos-run.ps1'

if (-not $NoBuild) {
    & $ps -NoProfile -ExecutionPolicy Bypass -File (Join-Path $root 'tools\build-dos.ps1') | Out-Null
    & $ps -NoProfile -ExecutionPolicy Bypass -File (Join-Path $root 'tools\dos-pack.ps1') | Out-Null
}

Write-Output ("{0,-10} {1,10} {2,10} {3,12} {4,12}" -f 'cycles', 'ms/frame', 'frame/s', '% of 20 fps', '% of 50 Hz')
foreach ($clk in ($Clocks -split ',')) {
    $clk = [int]$clk.Trim()
    # 200 frames apart; at 100000 that is ~12 s of emulation.
    $w = @()
    foreach ($f in 60, 260) {
        $o = (& $ps -NoProfile -ExecutionPolicy Bypass -File $run -Cycles $clk -DosBox $DosBox `
                -Autoexec "ICFTD.EXE --frames $f > ICFTD.LOG" -TimeoutSec 1800 2>&1 | Out-String)
        if ($o -match 'wall clock: ([\d.,]+)') { $w += [double](($matches[1]) -replace ',', '.') }
        else { throw "no wall clock for frames=$f at cycles=$clk" }
    }
    $ms = ($w[1] - $w[0]) / 200 * 1000
    Write-Output ("{0,-10} {1,10:N1} {2,10:N2} {3,11:N0}% {4,11:N0}%" -f `
        $clk, $ms, (1000 / $ms), (50 / $ms * 100), (20 / $ms * 100))
}
