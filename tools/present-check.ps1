# Presentation regression check: the raster side of the port, which the translation gate cannot see.
#
# Every rule here was written after a change that passed the translation gate and broke the picture:
#   - the picture must cover the screen (a bad DIW read once collapsed the map screen into a few
#     rows behind a huge black frame),
#   - it must change while the game is running (a stale framebuffer looks exactly like a freeze),
#   - it must change *where the input says it should* (the scrolling minigames),
#   - nothing outside the window the copper list programs may keep the previous screen's pixels
#     (the hospital windows 180 of the 200 buffer rows; the desert stayed under it),
#   - a screen built out of its own display regions must still show them (the fight's two health
#     bars are the only thing in the top and bottom bands, so coverage cannot stand in for them).
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

function Shot([string]$inputFile, [long]$insns, [string]$name, [string[]]$extra = @())
{
    $bmp = Join-Path $ShotDir "$name.bmp"
    if (Test-Path $bmp) { Remove-Item $bmp -Force }
    $null = & $Exe @extra --input $inputFile $insns --shot $bmp 2>&1
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

# Non-border pixels in a band of rows, every pixel (a 20-pixel-wide bar has to be counted, so the
# 4-pixel grid Coverage uses would miss it).
function Band($bmp, [int]$y0, [int]$y1)
{
    $n = 0
    for ($y = $y0; $y -le $y1; $y++) {
        for ($x = 0; $x -lt $bmp.Width; $x++) {
            $c = $bmp.GetPixel($x, $y)
            if ($c.R -gt 16 -or $c.G -gt 16 -or $c.B -gt 16) { $n++ }
        }
    }
    return $n
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

# A screen whose copper list windows fewer rows than the 200-row buffer must show the border below
# it, not the pixels of whatever screen was up before. The hospital's list ends at DIWSTOP 0xE0,
# i.e. 180 rows, and the 20 rows under it used to keep the previous screen's picture: that was the
# garbled band at the bottom of the minigame, and the coverage check cannot see it (the room covers
# the rest). The scene is entered with --call at a frame where the map has already put a picture in
# those rows - entering it earlier leaves them black, and then the check could not fail.
if (Test-Path 'ref\inputs\flight-crash-hospital-room.txt') {
    try {
        $h = Shot 'ref\inputs\flight-crash-hospital-room.txt' 27000000 'hospital' @('--call','0x1C19A:2500')
        try {
            $below = 0
            $ref = $h.GetPixel(0, 180).ToArgb()
            for ($y = 180; $y -lt $h.Height; $y += 2) {
                for ($x = 0; $x -lt $h.Width; $x += 4) {
                    if ($h.GetPixel($x, $y).ToArgb() -ne $ref) { $below++ }
                }
            }
            $cov = Coverage $h
            if ($below -ne 0) {
                Write-Output ("present: hospital FAIL - {0} pixel(s) below DIWSTOP are not the border colour (stale picture from the screen before)" -f $below)
                $fail++
            } elseif ($cov -lt 0.80) {
                Write-Output ("present: hospital FAIL - coverage {0:N3} < 0.80 (cropped or blank window)" -f $cov)
                $fail++
            } else {
                Write-Output ("present: hospital ok   - coverage {0:N3}, border below DIWSTOP clean" -f $cov)
            }
        }
        finally { $h.Dispose() }
    } catch { Write-Output "present: hospital FAIL - $_"; $fail++ }
} else {
    Write-Output 'present: hospital SKIP (no ref\inputs\flight-crash-hospital-room.txt)'
}

# The fight minigame's arena is framed by a health bar at the very top and one at the very bottom of
# the 200-row buffer, and both are drawn in a display region of their own. Coverage alone would not
# notice them missing, so they are counted: fewer than 1500 non-border pixels in either band means a
# dropped region, a border outside DIW or the wrong buffer. The fight is entered the way the bar's
# action script enters it (FUN_0000B46C, engine slot 41) after the sample loads this session fixed.
if (Test-Path 'ref\inputs\fight.txt') {
    $fa = $null; $fb = $null
    try {
        $fa = Shot 'ref\inputs\fight.txt' 7000000 'fight-a' @('--call', '0xF46C:1513')
        $fb = Shot 'ref\inputs\fight.txt' 7300000 'fight-b' @('--call', '0xF46C:1513')
        $cov = Coverage $fa
        $top = Band $fa 0 12
        $bot = Band $fa 188 199
        $d = Differ $fa $fb
        if ($cov -lt 0.90) {
            Write-Output ("present: fight   FAIL - coverage {0:N3} < 0.90 (arena not filling the screen)" -f $cov)
            $fail++
        } elseif ($top -lt 1500 -or $bot -lt 1500) {
            Write-Output ("present: fight   FAIL - health bars missing (top band {0}, bottom band {1} non-border pixel(s))" -f $top, $bot)
            $fail++
        } elseif ($d -lt 50) {
            Write-Output ("present: fight   FAIL - two frames 300k instructions apart are identical ($d)")
            $fail++
        } else {
            Write-Output ("present: fight   ok   - coverage {0:N3}, bars {1}/{2}, {3} pixel(s) of motion" -f $cov, $top, $bot, $d)
        }
    } catch { Write-Output "present: fight   FAIL - $_"; $fail++ }
    finally { if ($fa) { $fa.Dispose() }; if ($fb) { $fb.Dispose() } }
} else {
    Write-Output 'present: fight   SKIP (no ref\inputs\fight.txt)'
}

if ($fail -ne 0) { Write-Output "present: $fail check(s) failed"; exit 1 }
Write-Output 'present: all checks passed'
exit 0
