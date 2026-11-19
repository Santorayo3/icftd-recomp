# Presentation regression check: the raster side of the port, which the translation gate cannot see.
#
# Every rule here was written after a change that passed the translation gate and broke the picture:
#   - the picture must cover the screen (a bad DIW read once collapsed the map screen into a few
#     rows behind a huge black frame),
#   - it must change while the game is running (a stale framebuffer looks exactly like a freeze),
#   - it must change *where the input says it should* (the scrolling minigames),
#   - nothing outside the window the copper list programs may keep the previous screen's pixels
#     (the hospital windows 180 of the 200 buffer rows; the desert stayed under it),
#   - the same for the columns: the scrolling minigames' lists program a horizontal window too
#     (DIWSTRT 0x2C90 .. DIWSTOP 0xE0B0 = 288 of the 320 columns), and the 16 columns down each
#     side are the border - that is where the original hides the strip the renderer is still
#     drawing, so a presenter that fills them shows garbage,
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

# Pixels outside the columns [x0,x1) of a display window, in the rows the window covers, that are
# not the border colour (pen 0 = COLOR00, read at the top left corner where the border is).
function SideBorder($bmp, [int]$x0, [int]$x1, [int]$rows)
{
    if ($x0 -le 0 -and $x1 -ge $bmp.Width) { return 0 }
    $n = 0
    $ref = $bmp.GetPixel(0, 0).ToArgb()
    for ($y = 0; $y -lt $rows; $y++) {
        for ($x = 0; $x -lt $bmp.Width; $x++) {
            if ($x -ge $x0 -and $x -lt $x1) { continue }
            if ($bmp.GetPixel($x, $y).ToArgb() -ne $ref) { $n++ }
        }
    }
    return $n
}

$fail = 0
$cases = @(
    @{ name = 'intro';  file = 'ref\inputs\flight-crash-hospital-room.txt'; insns = 12000000; min = 0.90 },
    @{ name = 'map';    file = 'ref\inputs\flight-crash-hospital-room.txt'; insns = 25000000; min = 0.90 },
    # The flight's list windows 288 of the 320 columns and 180 of the 200 rows, so 81% of the
    # raster can be lit at most, and the desert's black sky takes some of that.
    @{ name = 'flight'; file = 'out\flight-live.txt';                      insns = 26500000; min = 0.78 }
)
foreach ($c in $cases) {
    if (-not (Test-Path $c.file)) { Write-Output ("present: {0,-7} SKIP (no {1})" -f $c.name, $c.file); continue }
    $bmp = $null
    try { $bmp = Shot $c.file $c.insns $c.name } catch { Write-Output "present: $($c.name) FAIL - $_"; $fail++; continue }
    $cov = Coverage $bmp
    # The flight, the ant nest and the hospital run on copper lists whose DIWSTRT/DIWSTOP program
    # 0x2C90..0xE0B0: columns 16..303 and rows 0..179. The 16 columns down each side are the
    # original's black frame - the one that hides the strip the scrolling renderer is still
    # drawing - so they must be the border colour, not picture.
    $side = 0
    if ($c.name -eq 'flight') { $side = SideBorder $bmp 16 304 180 }
    if ($side -ne 0) {
        Write-Output ("present: {0,-7} FAIL - {1} pixel(s) in the 16 columns the list's DIWSTRT/DIWSTOP leave outside the window are not the border (the unfetched strip is being shown)" -f $c.name, $side)
        $fail++
    } elseif ($cov -lt $c.min) {
        Write-Output ("present: {0,-7} FAIL - coverage {1:N3} < {2:N2} (blank screen or oversized border)" -f $c.name, $cov, $c.min)
        $fail++
    } else {
        Write-Output ("present: {0,-7} ok   - coverage {1:N3}" -f $c.name, $cov)
    }
    # The flight's raster is one of the two frames the motion check compares, so it is kept.
    if ($c.name -eq 'flight') { $flightShot = $bmp } else { $bmp.Dispose() }
}

# A running game's picture must change; a stale framebuffer is what a frozen display looks like.
# The flight's raster above (26.5M instructions) is the second frame, so the check costs one replay
# rather than two: the two rasters are 500k instructions apart.
if ($flightShot -ne $null -and (Test-Path 'out\flight-live.txt')) {
    $b = $null
    try {
        $b = Shot 'out\flight-live.txt' 26000000 'move'
        $d = Differ $flightShot $b
        if ($d -lt 50) { Write-Output "present: motion  FAIL - two frames 500k instructions apart are identical ($d)"; $fail++ }
        else { Write-Output "present: motion  ok   - $d pixel(s) differ between two frames 500k instructions apart" }
    } catch { Write-Output "present: motion  FAIL - $_"; $fail++ }
    finally { if ($b) { $b.Dispose() } }
} elseif (-not (Test-Path 'out\flight-live.txt')) {
    Write-Output 'present: motion  SKIP (no out\flight-live.txt)'
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
            $side = SideBorder $h 16 304 180
            if ($below -ne 0) {
                Write-Output ("present: hospital FAIL - {0} pixel(s) below DIWSTOP are not the border colour (stale picture from the screen before)" -f $below)
                $fail++
            } elseif ($side -ne 0) {
                Write-Output ("present: hospital FAIL - {0} pixel(s) in the 16 columns outside the list's horizontal window are not the border" -f $side)
                $fail++
            } elseif ($cov -lt 0.78) {
                Write-Output ("present: hospital FAIL - coverage {0:N3} < 0.78 (cropped or blank window)" -f $cov)
                $fail++
            } else {
                Write-Output ("present: hospital ok   - coverage {0:N3}, border below DIWSTOP and beside the window clean" -f $cov)
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

# The chicken race is the one screen whose copper list holds more than one palette down its rows:
# a mountain strip at the top, a dual-playfield horizon strip under it, thirteen COLOR00/12/13/14
# writes for the sunset bands, then the engine's own bitmap with the road and the dashboard picture
# under it. A presenter that keeps one palette for the frame (the last COLORxx in the list) paints
# the whole picture in the border's black; one that keeps the ViewPort bitmap's bytes/row shears the
# road (the list's DDFSTRT/DDFSTOP make 46 bytes per line, which is what the scene's own drawing
# bitmap at 0x2BCF0 says, not the 42 of the ViewPort's); one that reads DHeight instead of the
# list's DIW window stops at row 200 and cuts the bottom of the cockpit; and one that ignores
# BPLCON0's DBLPF bit folds the horizon strip's two playfields into a single five-plane index and
# paints it in colours that segment never programs; and one that takes the ViewPort's DWidth as the
# raster width drops the right-hand 48 columns of the screen - which is where the narration text of
# the scene's closing page ends. All five are checked here:
#
#   - the picture must cover the screen (coverage),
#   - it must be 368 columns wide (DIWSTRT 0x1D61 .. DIWSTOP 0xF5D1), not the ViewPort's 320,
#   - it must be 216 rows tall (DIWSTRT 0x1D .. DIWSTOP 0xF5), not the ViewPort's 200,
#   - the sunset bands must carry *different* colours (only a per-line palette can),
#   - the horizon strip must use only its segment's own colours, and show both of its ranges
#     (playfield 1's tans in front of playfield 2's ridge, which needs BPLCON2's PF2PRI),
#   - the road surface must be filled (AreaEnd's crossings have to be sorted before they are
#     paired, or the polygon fills as a sliver and the road reads as the ground),
#   - and the cockpit must be there, including below row 200.
if (Test-Path 'ref\inputs\chicken.txt') {
    $ch = $null
    try {
        $ch = Shot 'ref\inputs\chicken.txt' 5500000 'chicken' @('--call', '0x1FA3E:1513')
        $cov = Coverage $ch
        $bands = @(70, 90, 120, 145) | ForEach-Object {
            $y = $_
            $counts = @{}
            for ($x = 0; $x -lt $ch.Width; $x++) {
                $c = $ch.GetPixel($x, $y)
                $k = '{0:X2}{1:X2}{2:X2}' -f $c.R, $c.G, $c.B
                $counts[$k] = 1 + $counts[$k]
            }
            ($counts.GetEnumerator() | Sort-Object Value -Descending | Select-Object -First 1).Name
        }
        $distinct = ($bands | Select-Object -Unique).Count
        $dash = Band $ch 178 199
        $cockpitBottom = Band $ch 200 212
        # The horizon strip (rows 38..62) is a dual-playfield picture: three playfield-1 planes in
        # colours 0..7 of the segment's palette and two playfield-2 planes in colours 8..15, with
        # playfield 2 in front. Its colours are therefore exactly the eleven the list programs for
        # that segment - anything else means the odd planes were folded into one five-plane index.
        $stripPalette = @('0099DD', '554433', '775544', '996644', 'AA6633', 'BB7755', 'CC8855',
                          'EE9977', '000000', '996666', '775577')
        $strangers = @{}
        for ($y = 40; $y -le 60; $y++) {
            for ($x = 0; $x -lt $ch.Width; $x++) {
                $c = $ch.GetPixel($x, $y)
                $k = '{0:X2}{1:X2}{2:X2}' -f $c.R, $c.G, $c.B
                if ($stripPalette -notcontains $k) { $strangers[$k] = 1 }
            }
        }
        # Two ranges, one behind the other: playfield 1's seven tans (the range in front, BPLCON2's
        # PF2PRI is clear) and playfield 2's colours (the ridge and sky behind it). Only a presenter
        # that honours the priority bit shows both; with playfield 2 always in front the tans - which
        # cover a third of the strip - never reach the screen.
        $tanPx = 0
        $backPx = 0
        $tans = @('554433', '775544', '996644', 'AA6633', 'BB7755', 'CC8855', 'EE9977')
        $backs = @('996666', '775577', '0099DD')
        for ($y = 40; $y -le 60; $y++) {
            for ($x = 0; $x -lt $ch.Width; $x++) {
                $c = $ch.GetPixel($x, $y)
                $k = '{0:X2}{1:X2}{2:X2}' -f $c.R, $c.G, $c.B
                if ($tans -contains $k) { $tanPx++ }
                elseif ($backs -contains $k) { $backPx++ }
            }
        }
        # The road surface is an AreaEnd fill in pen 28 (and its centre line in pen 30), whose colours
        # are what the thirteen raster bars program: COLOR28/30 alternate 444/445 and so on down the
        # screen. The fill used to pair its scanline crossings in polygon order instead of sorted, so
        # only the bottom rows of the road were painted and the surface read as the ground's brown.
        $roadGrey = 0
        for ($y = 100; $y -le 160; $y++) {
            for ($x = 0; $x -lt $ch.Width; $x++) {
                $c = $ch.GetPixel($x, $y)
                $k = '{0:X2}{1:X2}{2:X2}' -f $c.R, $c.G, $c.B
                if ($k -eq '444444' -or $k -eq '444455') { $roadGrey++ }
            }
        }
        if ($cov -lt 0.90) {
            Write-Output ("present: chicken FAIL - coverage {0:N3} < 0.90 (blank or sheared screen)" -f $cov)
            $fail++
        } elseif ($ch.Width -ne 368) {
            Write-Output ("present: chicken FAIL - the raster is {0} columns; the list's DIW window (0x1D61..0xF5D1) is 368, so its narration text is being clipped" -f $ch.Width)
            $fail++
        } elseif ($ch.Height -ne 216) {
            Write-Output ("present: chicken FAIL - the raster is {0} rows; the list's DIW window (0x1D..0xF5) is 216" -f $ch.Height)
            $fail++
        } elseif ($distinct -lt 2) {
            Write-Output ("present: chicken FAIL - the sunset bands all carry the same colour ({0}) - the frame's palette is flat" -f ($bands -join ' '))
            $fail++
        } elseif ($strangers.Count -gt 0) {
            Write-Output ("present: chicken FAIL - the horizon strip carries colours its segment never programs ({0}) - dual playfield folded into one index" -f (($strangers.Keys | Sort-Object) -join ' '))
            $fail++
        } elseif ($tanPx -lt 200 -or $backPx -lt 200) {
            Write-Output ("present: chicken FAIL - the horizon strip shows one range only ({0} px of playfield 1's tans, {1} px of playfield 2's colours)" -f $tanPx, $backPx)
            $fail++
        } elseif ($roadGrey -lt 2000) {
            Write-Output ("present: chicken FAIL - the road surface is not filled ({0} px of its pen-28 grey in rows 100..160) - AreaEnd paired its crossings unsorted" -f $roadGrey)
            $fail++
        } elseif ($dash -lt 2000) {
            Write-Output ("present: chicken FAIL - the dashboard picture is missing ({0} non-border pixel(s) in rows 178..199)" -f $dash)
            $fail++
        } elseif ($cockpitBottom -lt 1000) {
            Write-Output ("present: chicken FAIL - rows 200..212 are empty ({0} px) - the cockpit below the ViewPort's 200 rows was cut" -f $cockpitBottom)
            $fail++
        } else {
            Write-Output ("present: chicken ok   - {0}x{1}, coverage {2:N3}, bands {3} ({4} distinct), horizon tans {5}/{6} px, road {7} px, dashboard {8} px, cockpit below row 200 {9} px" -f $ch.Width, $ch.Height, $cov, ($bands -join ' '), $distinct, $tanPx, $backPx, $roadGrey, $dash, $cockpitBottom)
        }
    } catch { Write-Output "present: chicken FAIL - $_"; $fail++ }
    finally { if ($ch) { $ch.Dispose() } }
} else {
    Write-Output 'present: chicken SKIP (no ref\inputs\chicken.txt)'
}

# The underground ant nest (UNDER, FUN_0000BFCA) is a scene of the WGame runner FUN_000107A6, so it
# runs the copper list that runner installs from the template at 0x24A90 - the flight's list, with
# DIWSTRT 0x2C90 / DIWSTOP 0xE0B0 and 5 planes at BPL1MOD 2 - and patches the five plane pointers
# into the scrolled 320x216 bitmap every frame. The window is 288 of the 320 columns and 180 of the
# 200 rows, so:
#   - the raster must stay 320x200 with the tunnel in rows 0..179 (coverage and non-border pixels),
#   - rows 180..199 must be the border, not the screen that was up before,
#   - the 16 columns down each side must be the border too: that is where the original hides the
#     tile strip the renderer is still drawing while the nest scrolls,
#   - the tunnel must be the scene's own red palette, not a stale picture from the intro.
if (Test-Path 'ref\inputs\under.txt') {
    $un = $null
    try {
        $un = Shot 'ref\inputs\under.txt' 8000000 'under' @('--call', '0xFFCA:1513')
        $cov = Coverage $un
        $tunnel = Band $un 0 179
        $side = SideBorder $un 16 304 180
        $below = 0
        $ref = $un.GetPixel(0, 185).ToArgb()
        for ($y = 180; $y -lt $un.Height; $y += 2) {
            for ($x = 0; $x -lt $un.Width; $x += 4) {
                if ($un.GetPixel($x, $y).ToArgb() -ne $ref) { $below++ }
            }
        }
        $reds = @('AA1111', 'BB2222', '771111', 'CC0000')
        $wallPx = 0
        for ($y = 0; $y -le 179; $y += 2) {
            for ($x = 0; $x -lt $un.Width; $x += 2) {
                $c = $un.GetPixel($x, $y)
                $k = '{0:X2}{1:X2}{2:X2}' -f $c.R, $c.G, $c.B
                if ($reds -contains $k) { $wallPx++ }
            }
        }
        if ($un.Height -ne 200) {
            Write-Output ("present: under   FAIL - the raster is {0} rows; the ViewPort's screen is 200" -f $un.Height)
            $fail++
        } elseif ($cov -lt 0.25) {
            Write-Output ("present: under   FAIL - coverage {0:N3} < 0.25 (blank screen or a collapsed window)" -f $cov)
            $fail++
        } elseif ($tunnel -lt 15000) {
            Write-Output ("present: under   FAIL - only {0} non-border pixel(s) in rows 0..179 (the tunnel is missing)" -f $tunnel)
            $fail++
        } elseif ($below -ne 0) {
            Write-Output ("present: under   FAIL - {0} pixel(s) below the list's 180-row window are not the border (stale picture)" -f $below)
            $fail++
        } elseif ($side -ne 0) {
            Write-Output ("present: under   FAIL - {0} pixel(s) in the 16 columns outside the list's horizontal window are not the border (the strip the renderer is still drawing)" -f $side)
            $fail++
        } elseif ($wallPx -lt 3000) {
            Write-Output ("present: under   FAIL - only {0} pixel(s) of the tile palette's reds (a stale palette or the wrong bitmap)" -f $wallPx)
            $fail++
        } else {
            Write-Output ("present: under   ok   - 320x200, coverage {0:N3}, tunnel {1} px, wall reds {2} px, border below row 180 and beside the window clean" -f $cov, $tunnel, $wallPx)
        }
    } catch { Write-Output "present: under   FAIL - $_"; $fail++ }
    finally { if ($un) { $un.Dispose() } }
} else {
    Write-Output 'present: under   SKIP (no ref\inputs\under.txt)'
}

if ($fail -ne 0) { Write-Output "present: $fail check(s) failed"; exit 1 }
if ($flightShot) { $flightShot.Dispose() }
Write-Output 'present: all checks passed'
exit 0
