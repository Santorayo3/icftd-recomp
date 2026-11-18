# The add-on's "Fight Ant Head" scene: the same aiming aid and the same pointer control the 1989
# giant-ant fight has (docs\port-features.md, "The giant-ant fight's crosshair" and "The gun and the
# extinguisher"). Antheads adds a shooting scene the original does not have - the room action "Fight
# Ant Head", dispatcher case 0x10 -> FUN_0000d534, whose per-update script FUN_0000ca1a ramps and
# draws the pistol with FUN_0000cf24 and tests its shots in FUN_0000cf4e. It keeps the pistol in the
# giant-ant fight's own word pair (0x2c5c0/0x2c5c2, the add-on's AIM_X/AIM_Y row) and stores each
# shot at the same offset, 0x1b left and 0x3a up (0xd00c/0xd01e). So the port's claims are the
# fight's, in the add-on's words:
#
#   1. the aim is the pointer 0x1b right and 0x3a down of it, and the stick's axes are cleared -
#      the engine's own ramp cannot pull the gun away from the pointer;
#   2. the point the engine's shot test reads is the point the crosshair showed - the aim 0x1b left
#      and 0x3a up, which FUN_0000cf4e stores in 0x2c5d2/0x2c5dc and compares with the antennas;
#   3. the keyboard still aims it: with no pointer movement the scripted stick moves the aim;
#   4. a measurement run does not change: an armed run whose pointer was put down before the scene
#      produces the same frame records as a run with no seam, and shows the aid at the engine's own
#      aim (the pointer owns nothing); a pointer run differs only from the frame the pointer moved.
#   5. the add-on's column of the two rows the fight already has (ANT_SCENE_PC/AIM_SHOT_PC) is live
#      too: the same pointer aim, shot point and crosshair in the add-on's own giant-ant fight.
#
# The scene is reached the way a room action reaches it: FUN_0000d534 with the argument the
# dispatcher passes (`pea (0x83c,A4)` = model 0x2c332, runtime 0x30332); the fight is the fight's
# documented preset in the add-on's words. Their data is game-derived, so the check is a SKIP
# without the add-on's extracted disks.
#
#   powershell -ExecutionPolicy Bypass -File tools\anthead-check.ps1
param(
    [string]$Exe = 'bin\win32\icftd-recomp.exe',
    [string]$DataDir = 'export',
    [string]$Image = 'export\ant\code\dshell4k\dshell.img',
    [string]$Work = 'out\anthead-check'
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
Set-Location $root

if (-not (Test-Path $Exe))   { Write-Output "anthead: SKIP (no $Exe - build with tools\build-host.ps1)"; exit 0 }
if (-not (Test-Path $Image)) { Write-Output "anthead: SKIP (no $Image - run tools\extract.ps1 with the add-on disks)"; exit 0 }
if (-not (Test-Path (Join-Path $DataDir 'ant3'))) {
    Write-Output "anthead: SKIP (no $DataDir\ant3 - run tools\extract.ps1 with the add-on disks)"; exit 0
}

Add-Type -AssemblyName System.Drawing

# --- the art the build draws, read out of the generated header --------------------------------
$hdr = Get-Content 'src\runtime\amiga\crosshair_art.h' -Raw
$w  = [int]([regex]::Match($hdr, '#define CRS_W (\d+)').Groups[1].Value)
$h  = [int]([regex]::Match($hdr, '#define CRS_H (\d+)').Groups[1].Value)
$nc = [int]([regex]::Match($hdr, '#define CRS_COLOURS (\d+)').Groups[1].Value)
$palNums = [regex]::Match($hdr, 'g_crosshairPal\[CRS_COLOURS \* 3\] =\s*\{([^}]*)\}').Groups[1].Value
$pal = @($palNums -split ',' | Where-Object { $_.Trim() -ne '' } | ForEach-Object { [int]$_.Trim() })
$pixNums = [regex]::Match($hdr, 'g_crosshair\[CRS_H \* CRS_W\] =\s*\{([^}]*)\}').Groups[1].Value
$pix = @($pixNums -split ',' | Where-Object { $_.Trim() -ne '' } | ForEach-Object { [int]$_.Trim() })
if ($pal.Count -ne $nc * 3 -or $pix.Count -ne $w * $h) { Write-Output 'anthead: FAIL - cannot read the art header'; exit 1 }
$total = $pix | Where-Object { $_ -ne 0 } | Measure-Object | Select-Object -ExpandProperty Count

New-Item -ItemType Directory -Force -Path $Work | Out-Null
Get-ChildItem $Work -Recurse -File -ErrorAction SilentlyContinue | Remove-Item -Force

# --- the presets --------------------------------------------------------------------------------
# "Fight Ant Head": the scene's own entry with the dispatcher's argument (runtime 0x30332). It loads
# its assets and its first update runs at ~frame 530; it ends by itself at ~897 (its own countdown).
$insns = 12000000
$preset = @('--program', 'ant', '--call', '0x11534:300:0x30332', '--data', $DataDir)
$from = 722                            # the frame before the shot at 723

# The add-on's giant-ant fight: the 1989 preset's pokes in the add-on's own words (location 0x2B282,
# room 0x2B358, "!B12" at 0x2B386; the clock VBI 0x5B5E returning into the ant scene 0xA526). The
# fight is up from ~frame 1855.
$fightPreset = @('--program', 'ant',
                 '--poke', '999:0x2F282=0x11,0x2F358=0xC000000,0x2F386=0x21423132,0x2F38A=0',
                 '--call', '0x9B5E:1000:0x200:0xE526', '--data', $DataDir)
$fightInsns = 14000000
$fightFrom = 2140                      # pointer 200,120, the shot's own frame

$ram  = @(605, 722, 723, 690)          # two pointer aims, the shot frame, the stick's frame
$ramFight = @(2095, 2140, 2160)        # pointer 150,80; pointer 200,120; the shot stored

# The pointer: put down before the scene (armed, but owns nothing), then moved inside it.
$stale  = @('400 100 100 0')
$ptr    = @('400 100 100 0', '600 120 60 0', '700 200 120 0', '720 200 120 1')
$stick  = @('600 0 0x0003', '700 0 0x0000')
$fptr   = @('2000 150 80 0', '2100 200 120 0', '2120 200 120 1', '2160 200 120 0')

$fail = 0
function Fail([string]$t) { Write-Output "anthead: FAIL - $t"; $script:fail++ }
function Ok([string]$t)   { Write-Output "anthead: $t" }

# The add-on image is loaded at 0x4000: a model 0x2c5c0 is RAM + 0x4000 + 0x2c5c0.
$BASE = 0x4000
function U16([byte[]]$b, [int]$a) { return ([int]$b[$a] -shl 8) -bor [int]$b[$a + 1] }
function S16([byte[]]$b, [int]$a) { $v = U16 $b $a; if ($v -ge 0x8000) { $v -= 0x10000 }; return $v }
function Ram([string]$dir, [int]$frame) { [System.IO.File]::ReadAllBytes((Join-Path $dir "s.$frame.ram")) }
function Aim([byte[]]$b)   { return @([int](S16 $b ($BASE + 0x2C5C0)), [int](S16 $b ($BASE + 0x2C5C2))) }
function Axis([byte[]]$b)  { return @([int](S16 $b ($BASE + 0x26D40)), [int](S16 $b ($BASE + 0x26D42))) }
function Shot([byte[]]$b)  { return @([int](S16 $b ($BASE + 0x2C5D2)), [int](S16 $b ($BASE + 0x2C5DC))) }

# How many of the art's pixels are at (cx,cy) in the dumped raster - 0..14, all of them when the
# crosshair is drawn there. A picture is only ever asked to confirm where the overlay is; the
# position itself comes from the RAM words above.
function ArtPixels([string]$bmp, [int]$cx, [int]$cy)
{
    if (-not (Test-Path $bmp)) { return -1 }
    $img = [System.Drawing.Bitmap]::new((Resolve-Path $bmp).Path)
    $x0 = $cx - [int]($w / 2)
    $y0 = $cy - [int]($h / 2)
    $n = 0
    for ($r = 0; $r -lt $h; $r++) {
        for ($c = 0; $c -lt $w; $c++) {
            $v = $pix[$r * $w + $c]
            if ($v -eq 0) { continue }
            $p = $img.GetPixel($x0 + $c, $y0 + $r)
            if ($p.R -eq $pal[($v - 1) * 3] -and $p.G -eq $pal[($v - 1) * 3 + 1] -and
                $p.B -eq $pal[($v - 1) * 3 + 2]) { $n++ }
        }
    }
    $img.Dispose()
    return $n
}

# Not $a/$b: PowerShell names are case-insensitive, and bytes assigned to a name that is also a
# [string] parameter turn into "73 67 83 84 ..." (tools\aim-check.ps1).
function CompareStates([string]$fileA, [string]$fileB)
{
    $A = [System.IO.File]::ReadAllBytes($fileA)
    $B = [System.IO.File]::ReadAllBytes($fileB)
    $rec = [int][BitConverter]::ToUInt32($A, 8)
    $n = [Math]::Min([int][BitConverter]::ToUInt32($A, 12), [int][BitConverter]::ToUInt32($B, 12))
    $enc = [System.Text.Encoding]::GetEncoding(28591)     # byte for byte, one char per byte
    $differing = 0
    $first = -1
    for ($r = 0; $r -lt $n; $r++) {
        $o = 16 + $r * $rec
        $sa = $enc.GetString($A, $o, 80) + $enc.GetString($A, $o + 88, $rec - 88)
        $sb = $enc.GetString($B, $o, 80) + $enc.GetString($B, $o + 88, $rec - 88)
        if ($sa -ne $sb) {
            $differing++
            if ($first -lt 0) { $first = [int][BitConverter]::ToUInt32($A, $o) }
        }
    }
    return @{ records = $n; differing = $differing; first = $first }
}

function Run([string]$name, [string[]]$extra, [string[]]$usePreset, [int]$dumpAt, [int[]]$ramFrames, [long]$budget)
{
    $dir = Join-Path $Work $name
    New-Item -ItemType Directory -Force -Path $dir | Out-Null
    $argv = @($Image) + $usePreset + @('--state', (Join-Path $dir 's'), '--ram', ($ramFrames -join ','),
              '--dump', (Join-Path $dir 'd'), '1', '--dumpfrom', "$dumpAt")
    $argv += $extra
    $argv += [string]$budget
    $out = & $Exe @argv 2>&1 | Out-String
    Set-Content -Path (Join-Path $dir 'run.txt') -Value $out
    if ($out -match 'accesses outside the RAM block' -or $out -match 'stack pointer went bad') {
        Fail "$name left the machine (see $(Join-Path $dir 'run.txt'))"
    }
    return $dir
}

# --- the runs -----------------------------------------------------------------------------------
$stale | Set-Content -Encoding ascii (Join-Path $Work 'stale.txt')
$ptr   | Set-Content -Encoding ascii (Join-Path $Work 'ptr.txt')
$stick | Set-Content -Encoding ascii (Join-Path $Work 'stick.txt')
$fptr  | Set-Content -Encoding ascii (Join-Path $Work 'fptr.txt')

$plain  = Run 'plain'   @()                                            $preset      $from      $ram      $insns      # a measurement: no seam
$armed  = Run 'stale'   @('--mouse', (Join-Path $Work 'stale.txt'))    $preset      $from      $ram      $insns      # the pointer, put down early
$active = Run 'pointer' @('--mouse', (Join-Path $Work 'ptr.txt'))      $preset      $from      $ram      $insns      # the pointer aims and fires
$keys   = Run 'keys'    @('--input', (Join-Path $Work 'stick.txt'))    $preset      $from      $ram      $insns      # the stick alone
$fight  = Run 'fight'   @('--mouse', (Join-Path $Work 'fptr.txt'))     $fightPreset $fightFrom $ramFight $fightInsns # the add-on's giant-ant fight

# --- 1. the aim is the pointer, and the engine's ramp is not adding to it ---------------------
foreach ($a in @(@{ frame = 605; x = 147; y = 118 },     # pointer 120,60 + 0x1b/0x3a
                 @{ frame = 722; x = 227; y = 178 })) {  # pointer 200,120 + 0x1b/0x3a
    $b = Ram $active $a.frame
    $aim = Aim $b
    if ($aim[0] -ne $a.x -or $aim[1] -ne $a.y) {
        Fail ("the aim at frame {0} is {1},{2}; the pointer puts it at {3},{4}" -f $a.frame, $aim[0], $aim[1], $a.x, $a.y)
    } else {
        Ok ("the aim at frame {0} is {1},{2} - the pointer's point" -f $a.frame, $aim[0], $aim[1])
    }
    $axis = Axis $b
    if ($axis[0] -ne 0 -or $axis[1] -ne 0) {
        Fail ("the stick's axes are {0},{1} at frame {2} - the engine's ramp is still adding to the aim" -f $axis[0], $axis[1], $a.frame)
    }
}

# --- 2. the shot the engine tests is the point the crosshair showed --------------------------
$mark = @((227 - 0x1B), (178 - 0x3A))                    # the aim on frame 722, the last before the shot
$shot = Shot (Ram $active 723)
if ($shot[0] -ne $mark[0] -or $shot[1] -ne $mark[1]) {
    Fail ("the shot FUN_0000cf4e stored is {0},{1}; the crosshair showed {2},{3}" -f $shot[0], $shot[1], $mark[0], $mark[1])
} else {
    Ok ("the shot the engine stores is {0},{1} - the point the crosshair showed on frame 722" -f $shot[0], $shot[1])
}
$n = ArtPixels (Join-Path $active ("d{0:d6}.bmp" -f $from)) $mark[0] $mark[1]
if ($n -lt $total) { Fail ("only $n of $total crosshair pixels at $($mark[0]),$($mark[1]) on frame $from") }
else { Ok ("crosshair drawn at $($mark[0]),$($mark[1]) on frame $from ($n/$total pixels)") }

$first = Ram $armed $from
$firstAim = Aim $first
$firstMark = @(($firstAim[0] - 0x1B), ($firstAim[1] - 0x3A))
if ($firstAim[0] -eq 227) { Fail 'the armed run aims like the pointer run - the stale pointer took the gun' }
$n = ArtPixels (Join-Path $armed ("d{0:d6}.bmp" -f $from)) $firstMark[0] $firstMark[1]
if ($n -lt $total) {
    Fail ("the aid is not at the engine's own aim {0},{1} in the armed run" -f $firstMark[0], $firstMark[1])
} else {
    Ok ("a pointer put down before the scene leaves the engine's aim: the aid sits at $($firstMark[0]),$($firstMark[1])")
}

# --- 3. the keyboard still aims it -----------------------------------------------------------
$k = Ram $keys 690
$axis = Axis $k
$aim = Aim $k
if ($axis[0] -eq 0 -and $axis[1] -eq 0) {
    Fail "the input script's stick did not reach the scene at frame 690"
} elseif ($aim[0] -eq 0xA0 -and $aim[1] -eq 0xB4) {
    Fail "the aim stayed at the scene's own 160,180 while the stick was held"
} else {
    Ok ("the keyboard still aims - the stick moved it to {0},{1} by frame 690" -f $aim[0], $aim[1])
}

# --- 4. a measurement run does not change -----------------------------------------------------
$r = CompareStates (Join-Path $plain 's.state') (Join-Path $armed 's.state')
if ($r.differing -ne 0) {
    Fail ("a stale pointer changed the run - {0} of {1} frame records differ, first at {2}" -f $r.differing, $r.records, $r.first)
} elseif ($r.records -lt 800) {
    Fail ("only {0} frame records - the scene did not run" -f $r.records)
} else {
    Ok ("a pointer put down before the scene leaves all {0} frame records unchanged" -f $r.records)
}

$r = CompareStates (Join-Path $plain 's.state') (Join-Path $active 's.state')
if ($r.differing -eq 0) {
    Fail "the pointer run is identical to the measurement - the seam did nothing"
} elseif ($r.first -ge 0 -and $r.first -lt 600) {
    Fail ("the pointer run differs from the measurement at frame {0}, before the pointer moved (600)" -f $r.first)
} else {
    Ok ("the pointer run first differs at frame {0}, the pointer's first move in the scene (600)" -f $r.first)
}

$n = ArtPixels (Join-Path $plain ("d{0:d6}.bmp" -f $from)) $firstMark[0] $firstMark[1]
if ($n -lt 0) { Fail "the plain run dumped no frame $from" }
elseif ($n -ge $total) { Fail "the crosshair is in the measurement run's picture - the seam is not inert" }
else { Ok "the plain run's frame $from carries no crosshair ($n/$total pixels by coincidence)" }

# --- 5. the same rows in the add-on's column: its own giant-ant fight -------------------------
# The fight is the 1989 one translated, but its addresses are the add-on's; this is the check that
# the crosshair and the pointer reach it there too (the fight's own claims are tools\aim-check.ps1).
$b = Ram $fight 2095
$aim = Aim $b
if ($aim[0] -ne 177 -or $aim[1] -ne 138) {
    Fail ("the add-on's giant-ant fight aims at {0},{1} for pointer 150,80; expected 177,138" -f $aim[0], $aim[1])
} else {
    Ok "the add-on's giant-ant fight takes the pointer's aim: 150,80 -> 177,138"
}
$shot = Shot (Ram $fight 2160)
if ($shot[0] -ne 200 -or $shot[1] -ne 120) {
    Fail ("the add-on's giant-ant fight stores the shot at {0},{1}; the pointer was at 200,120" -f $shot[0], $shot[1])
} else {
    Ok "the add-on's giant-ant fight's shot is 200,120 - the pointer's point"
}
$n = ArtPixels (Join-Path $fight ("d{0:d6}.bmp" -f $fightFrom)) 200 120
if ($n -lt $total) { Fail ("only $n of $total crosshair pixels at 200,120 in the add-on's giant-ant fight") }
else { Ok "the crosshair is drawn at 200,120 in the add-on's giant-ant fight (frame $fightFrom)" }

if ($fail -ne 0) { exit 1 }
Write-Output 'anthead: PASS'
exit 0
