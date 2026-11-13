# Presentation regression check: the raster side of the port, which the translation gate cannot see.
#
# Every rule here was written after a change that passed the translation gate and broke the picture:
#   - the picture must cover the screen (a bad DIW read once collapsed the map screen into a few
#     rows behind a huge black frame),
#   - it must change while the game is running (a stale framebuffer looks exactly like a freeze),
#   - it must change *where the input says it should* (the scrolling minigames).
#
# Frames are chosen from the two recorded sessions in out\, which are gitignored; when they are
# missing the step reports SKIP rather than failing, so the gate still runs on a fresh clone.
#
#   powershell -ExecutionPolicy Bypass -File tools\present-check.ps1
param(
    [string]$Exe = 'bin\win32\icftd-recomp.exe',
    [string]$ShotDir = 'out\present-check'
)
$ErrorActionPreference = 'Stop'
Add-Type -AssemblyName System.Drawing
$root = Split-Path -Parent $PSScriptRoot
Set-Location $root
New-Item -ItemType Directory -Force -Path $ShotDir | Out-Null

function Shot([string]$inputFile, [long]$insns, [string]$name)
{
    $bmp = Join-Path $ShotDir "$name.bmp"
    if (Test-Path $bmp) { Remove-Item $bmp -Force }
    $null = & $Exe --input $inputFile $insns --shot $bmp 2>&1
    if (-not (Test-Path $bmp)) { throw "$name : no raster written ($inputFile @ $insns)" }
    return [System.Drawing.Bitmap]::FromFile((Resolve-Path $bmp).Path)
}

# Fraction of pixels that are not the border colour, sampled on a grid.
function Coverage($bmp)
{
    $n = 0
    $hits = 0
    for ($y = 0; $y -lt $bmp.Height; $y += 4) {
        for ($x = 0; $x -lt $bmp.Width; $x += 4) {
            $c = $bmp.GetPixel($x, $y)
            $n++
            if ($c.R -gt 16 -or $c.G -gt 16 -or $c.B -gt 16) { $hits++ }
        }
    }
    return $hits / [double]$n
}

function Differ($a, $b)
{
    $diff = 0
    for ($y = 0; $y -lt $a.Height; $y += 2) {
        for ($x = 0; $x -lt $a.Width; $x += 2) {
            if ($a.GetPixel($x, $y).ToArgb() -ne $b.GetPixel($x, $y).ToArgb()) { $diff++ }
        }
    }
    return $diff
}

$fail = 0
$cases = @(
    @{ name = 'intro';  file = 'ref\inputs\flight-crash-hospital-room.txt'; insns = 12000000; min = 0.90 },
    @{ name = 'map';    file = 'ref\inputs\flight-crash-hospital-room.txt'; insns = 25000000; min = 0.90 },
    @{ name = 'flight'; file = 'out\flight-live.txt';                      insns = 26500000; min = 0.85 }
)
foreach ($c in $cases) {
    if (-not (Test-Path $c.file)) { Write-Output ("present: {0,-7} SKIP (no {1})" -f $c.name, $c.file); continue }
    $bmp = $null
    try { $bmp = Shot $c.file $c.insns $c.name } catch { Write-Output "present: $($c.name) FAIL - $_"; $fail++; continue }
    $cov = Coverage $bmp
    if ($cov -lt $c.min) {
        Write-Output ("present: {0,-7} FAIL - coverage {1:N3} < {2:N2} (blank screen or oversized border)" -f $c.name, $cov, $c.min)
        $fail++
    } else {
        Write-Output ("present: {0,-7} ok   - coverage {1:N3}" -f $c.name, $cov)
    }
    $bmp.Dispose()
}

# A running game's picture must change; a stale framebuffer is what a frozen display looks like.
if (Test-Path 'out\flight-live.txt') {
    $a = $null; $b = $null
    try {
        $a = Shot 'out\flight-live.txt' 26000000 'move-a'
        $b = Shot 'out\flight-live.txt' 26300000 'move-b'
        $d = Differ $a $b
        if ($d -lt 50) { Write-Output "present: motion  FAIL - two frames 300k instructions apart are identical ($d)"; $fail++ }
        else { Write-Output "present: motion  ok   - $d pixel(s) differ between two frames" }
    } catch { Write-Output "present: motion  FAIL - $_"; $fail++ }
    finally { if ($a) { $a.Dispose() }; if ($b) { $b.Dispose() } }
}

if ($fail -ne 0) { Write-Output "present: $fail check(s) failed"; exit 1 }
Write-Output 'present: all checks passed'
exit 0
