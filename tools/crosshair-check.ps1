# The giant-ant fight's aiming crosshair: it marks the point the engine's shot test reads - measured
# on machine state, never on the look of the picture.
#
# The fight is a port feature only in its *drawing*: the original has no aiming aid, but the fight's
# aim and its hit test are the engine's own. FUN_00007934 keeps the pistol at DAT_00029AE0/0x29AE2
# and FUN_000086a0 tests a shot at that pair 0x1b left and 0x3a up, storing the point in
# DAT_00029AF2/0x29AFC for FUN_0000823a to compare with the antennas' rectangles. So the claim has
# two halves, both of them the engine's numbers:
#
#   1. the crosshair's centre is that point, and it follows the aim when the stick moves it;
#   2. the point a *fired* shot stores is the point the crosshair showed on the frame before - the
#      pistol moves after the shot is tested (FUN_000084e4 runs last), so the mark the player aims
#      with is exactly the one the next trigger pull uses.
#
# And the invariant every port feature owes: a measurement run does not change. The same run without
# the seam must produce the same frame records, and its picture must not carry the crosshair.
#
# The scene is reached the way docs\port-features.md lists it - the room state it needs poked in and
# FUN_0000551C (the world loop's clock VBI, whose FUN_0000A500 is the only writer of the fire edge
# DAT_00026898) called with the fight as its return address. That file is game-derived, so the check
# is a SKIP without the extracted data.
#
#   powershell -ExecutionPolicy Bypass -File tools\crosshair-check.ps1
param(
    [string]$Exe = 'bin\win32\icftd-recomp.exe',
    [string]$DataDir = 'export',
    [string]$Image = 'export\code\dshell4k\dshell.img',
    [string]$Work = 'out\crosshair-check'
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
Set-Location $root

if (-not (Test-Path $Exe))   { Write-Output "crosshair: SKIP (no $Exe - build with tools\build-host.ps1)"; exit 0 }
if (-not (Test-Path $Image)) { Write-Output "crosshair: SKIP (no $Image - run tools\extract.ps1)"; exit 0 }

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
if ($pal.Count -ne $nc * 3 -or $pix.Count -ne $w * $h) { Write-Output 'crosshair: FAIL - cannot read the art header'; exit 1 }

# --- the preset (docs\port-features.md) ------------------------------------------------------
$insns = 14000000                      # frame ~3400: the fight is up from ~1700
$poke  = '999:0x2CA38=0x11,0x2CB10=0xC000000,0x2CB3E=0x21423132,0x2CB42=0'
$call  = '0x951C:1000:0x200:0xCC5C'    # FUN_0000551C, returning into FUN_00008C5C
$fire  = 2120                          # the trigger, once the stick is back in the middle
$from  = 2095                          # the dump window covers the aim moving and the shot
$count = 40
$ram   = @(2095, 2121, 2130)           # before the stick, the frame the mark is aimed on, after the shot

New-Item -ItemType Directory -Force -Path $Work | Out-Null
Get-ChildItem $Work -Recurse -File -ErrorAction SilentlyContinue | Remove-Item -Force
@"
2050 0 0x0003
2100 0 0x0000
$fire 1 0x0000
2140 0 0x0000
"@ | Set-Content -Encoding ascii "$Work\aim.txt"
"1 300 60" | Set-Content -Encoding ascii "$Work\neutral.txt"   # --mouse: arms the seam, no pointer use

$fail = 0
function Fail([string]$t) { Write-Output "crosshair: FAIL - $t"; $script:fail++ }
function Ok([string]$t)   { Write-Output "crosshair: $t" }

function U16([byte[]]$b, [int]$a) { return [long](($b[$a] -shl 8) -bor $b[$a + 1]) }
function S16([byte[]]$b, [int]$a) { $v = [int](($b[$a] -shl 8) -bor $b[$a + 1]); if ($v -ge 0x8000) { $v -= 0x10000 }; return $v }

# The image is loaded at 0x4000: DAT_00029ae0 is RAM + 0x4000 + 0x29ae0 (docs\next-session.md).
$BASE = 0x4000
function Ram([string]$dir, [int]$frame) { [System.IO.File]::ReadAllBytes((Join-Path $dir "s.$frame.ram")) }
function AimX([byte[]]$b)     { return [int](U16 $b ($BASE + 0x29AE0)) }
function AimY([byte[]]$b)     { return [int](U16 $b ($BASE + 0x29AE2)) }
function ShotX([byte[]]$b)    { return [int](S16 $b ($BASE + 0x29AF2)) }
function ShotY([byte[]]$b)    { return [int](S16 $b ($BASE + 0x29AFC)) }
function Fired([byte[]]$b)    { return [int](U16 $b ($BASE + 0x29CBE)) }

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

function Run([string]$name, [string]$mouse)
{
    $dir = Join-Path $Work $name
    New-Item -ItemType Directory -Force -Path $dir | Out-Null
    $argv = @($Image, '--poke', $poke, '--call', $call, '--input', "$Work\aim.txt",
              '--data', $DataDir, '--state', (Join-Path $dir 's'),
              '--ram', ($ram -join ','), '--dump', (Join-Path $dir 'd'), '--dumpfrom', "$from",
              "$count", "$insns")
    if ($mouse -ne '') { $argv += @('--mouse', $mouse) }
    $out = & $Exe @argv 2>&1 | Out-String
    Set-Content -Path (Join-Path $dir 'run.txt') -Value $out
    return $dir
}

# --- the two runs ----------------------------------------------------------------------------
$meas = Run 'plain' ''                       # a measurement: the seam is not armed
$feat = Run 'armed' "$Work\neutral.txt"      # the played game, headless (--mouse arms the seam)

$total = $pix | Where-Object { $_ -ne 0 } | Measure-Object | Select-Object -ExpandProperty Count

# --- 1. the mark is the engine's own shot point, and it follows the aim ----------------------
$beforeShot = Ram $feat $ram[1]
$afterShot  = Ram $feat $ram[2]
$firstFrame = Ram $feat $ram[0]

if ((Fired $beforeShot) -ne 0) { Fail "a shot was already fired at frame $($ram[1]) - the preset no longer separates the two" }
if ((Fired $afterShot) -eq 0)  { Fail "no shot at frame $($ram[2]): the fire never reached FUN_000086a0" }

$aimAtMark = @((AimX $beforeShot), (AimY $beforeShot))
$mark      = @(($aimAtMark[0] - 0x1B), ($aimAtMark[1] - 0x3A))
$shot      = @((ShotX $afterShot), (ShotY $afterShot))
if ($shot[0] -ne $mark[0] -or $shot[1] -ne $mark[1]) {
    Fail ("the shot FUN_000086a0 stored is $($shot[0]),$($shot[1]); the mark was aimed at $($mark[0]),$($mark[1])")
} else {
    Ok ("the shot the engine stores is $($shot[0]),$($shot[1]) - the point the crosshair showed on frame $($ram[1])")
}

$n = ArtPixels (Join-Path $feat ("d{0:d6}.bmp" -f $ram[1])) $mark[0] $mark[1]
if ($n -lt $total) { Fail ("only $n of $total crosshair pixels at $($mark[0]),$($mark[1]) on frame $($ram[1])") }
else { Ok ("crosshair drawn at $($mark[0]),$($mark[1]) on frame $($ram[1]) ($n/$total pixels)") }

$aimFirst = @((AimX $firstFrame), (AimY $firstFrame))
$markFirst = @(($aimFirst[0] - 0x1B), ($aimFirst[1] - 0x3A))
if ($aimFirst[0] -eq $aimAtMark[0]) { Fail "the aim did not move between frames $($ram[0]) and $($ram[1]) - the check proves nothing" }
$n = ArtPixels (Join-Path $feat ("d{0:d6}.bmp" -f $ram[0])) $markFirst[0] $markFirst[1]
if ($n -lt $total) { Fail ("only $n of $total crosshair pixels at $($markFirst[0]),$($markFirst[1]) on frame $($ram[0])") }
else { Ok ("the mark follows the aim: $($aimFirst[0]),$($aimFirst[1]) -> $($markFirst[0]),$($markFirst[1]) on frame $($ram[0])") }

# --- 2. a measurement run does not change ----------------------------------------------------
# Same frame records, and no crosshair anywhere on the frame the armed run drew it on.
$A = [System.IO.File]::ReadAllBytes((Join-Path $meas 's.state'))
$B = [System.IO.File]::ReadAllBytes((Join-Path $feat 's.state'))
$rec = [BitConverter]::ToUInt32($A, 8)
$nrec = [Math]::Min([BitConverter]::ToUInt32($A, 12), [BitConverter]::ToUInt32($B, 12))
$fields = @(@(4, 4, 'insns'), @(72, 2, 'sr'), @(76, 4, 'pc'), @(88, 256, 'custom'))
for ($i = 0; $i -lt 8; $i++) { $fields += , @((8 + 4 * $i), 4, "d$i") }
for ($i = 0; $i -lt 8; $i++) { $fields += , @((40 + 4 * $i), 4, "a$i") }
$first = -1
for ($r = 0; $r -lt $nrec; $r++) {
    $o = 16 + $r * $rec
    foreach ($f in $fields) {
        $bad = $false
        for ($k = 0; $k -lt $f[1]; $k++) { if ($A[$o + $f[0] + $k] -ne $B[$o + $f[0] + $k]) { $bad = $true; break } }
        if ($bad) { $first = [BitConverter]::ToUInt32($A, $o); break }
    }
    if ($first -ge 0) { break }
}
if ($first -ge 0) { Fail "the armed run differs from the measurement at frame $first" }
else { Ok "armed and plain runs agree on every frame record ($nrec frames)" }

$n = ArtPixels (Join-Path $meas ("d{0:d6}.bmp" -f $ram[1])) $mark[0] $mark[1]
if ($n -lt 0) { Fail "the plain run dumped no frame $($ram[1])" }
elseif ($n -ge $total) { Fail "the crosshair is in the measurement run's picture - the seam is not inert" }
else { Ok "the plain run's frame $($ram[1]) carries no crosshair ($n/$total pixels by coincidence)" }

if ($fail -ne 0) { exit 1 }
Write-Output 'crosshair: PASS'
exit 0
