# The situation map's pointer control and the left button as /FIRE, measured on machine state
# (never on a picture).
#
# These are port features - the original moves the map cursor with the stick and has no mouse at
# all - so there is nothing to diff them against. They are checked on their own terms, against the
# words the map's own script (FUN_00003B1E) reads and writes, and against the key it replaces:
#
#   0x28A54/0x28A58  the cursor's screen position   (the arrow's tip is 0x11/0x12 up-left of it)
#   0x28A4C/0x28A50  the map picture's offset        (scrolls when the cursor is pushed past the
#                                                     travel window 0x19..0x136 x 0x19..0x28A48)
#   0x28A42          the destination under the cursor
#
# The cases: with no pointer the cursor must stay where the game put it; with a pointer it must
# follow it (plus the sprite's hot spot) and scroll the picture when pushed to the edge; a held
# stick must win over the pointer; nothing before the map starts may differ, because a measurement
# run must still see the original's machine state exactly; and a mouse click must be the same
# /FIRE as the space bar - the decisive fire press of the recorded session is replaced by a click
# and the whole run has to stay frame-for-frame identical.
#
# ref\inputs\map-pointer.txt is the start of ref\inputs\flight-crash-hospital-room.txt (new game,
# intro, the fire presses that reach the map) without the presses that leave it again - the map's
# script then keeps running, which is what the cursor can be observed on. Like the other recorded
# sessions it is game-derived, so it is not in git and the step reports SKIP without it.
#
#   powershell -ExecutionPolicy Bypass -File tools\mouse-check.ps1
param(
    [string]$Exe = 'bin\win32\icftd-recomp.exe',
    [string]$Work = 'out\mouse-check'
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
Set-Location $root

$mapInput = 'ref\inputs\map-pointer.txt'
if (-not (Test-Path $Exe)) { Write-Output "mouse: SKIP (no $Exe - build with tools\build-host.ps1)"; exit 0 }
if (-not (Test-Path $mapInput)) { Write-Output "mouse: SKIP (no $mapInput)"; exit 0 }

$insns = 11000000                        # frame ~2400: the map runs from frame ~1194
New-Item -ItemType Directory -Force -Path $Work | Out-Null
Get-ChildItem $Work -Recurse -File -ErrorAction SilentlyContinue | Remove-Item -Force

# The pointer positions the scripted cases feed, one "<frame> <x> <y> [<button>]" per line.
@'
# fed to --mouse: the pointer's framebuffer position per frame (the cursor's tip lands here)
1195 160 100
1260 40 40
1300 315 150
1360 5 150
1400 160 100
'@ | Set-Content -Encoding ascii "$Work\pointer.txt"
# The same run with the stick held: the map cursor must follow the stick, not the pointer.
@(Get-Content $mapInput) + @('1250 0 0x0003', '1300 0 0x0000') |
    Set-Content -Encoding ascii "$Work\stick.txt"
# The decisive fire press of the session (frame 1060 commits the menu's entry) taken out of the
# key script and fed as a click instead: the run has to end up bit-for-bit the same.
@(Get-Content $mapInput) | Where-Object { $_ -notmatch '^1060 ' -and $_ -notmatch '^1065 ' } |
    Set-Content -Encoding ascii "$Work\nokey.txt"
@'
1060 160 100 1
1065 160 100 0
'@ | Set-Content -Encoding ascii "$Work\click.txt"

$fail = 0
function Fail([string]$text) { Write-Output "mouse: FAIL - $text"; $script:fail++ }
function Ok([string]$text) { Write-Output "mouse: $text" }

# The words the map's script keeps, read out of a --ram blob (the image is loaded at 0x4000).
function MapState([string]$ram)
{
    if (-not (Test-Path $ram)) { Fail "no RAM blob $ram"; return $null }
    $b = [System.IO.File]::ReadAllBytes((Resolve-Path $ram).Path)
    $base = 0x4000
    $s32 = {
        param([int]$a)
        $v = [long]$b[$a]
        $v = ($v -shl 8) -bor $b[$a + 1]
        $v = ($v -shl 8) -bor $b[$a + 2]
        $v = ($v -shl 8) -bor $b[$a + 3]
        if ($v -ge 2147483648) { $v -= 4294967296 }
        return $v
    }
    $u16 = { param([int]$a) return [long]($b[$a] -shl 8) -bor $b[$a + 1] }
    return [pscustomobject]@{
        curX = (& $s32 ($base + 0x28A54)); curY = (& $s32 ($base + 0x28A58))
        orgX = (& $s32 ($base + 0x28A4C)); orgY = (& $s32 ($base + 0x28A50))
        loc  = (& $u16 ($base + 0x28A42))
    }
}

# The first frame whose record differs between two --state dumps, or -1.
function FirstDifferentFrame([string]$stateA, [string]$stateB)
{
    $A = [System.IO.File]::ReadAllBytes((Resolve-Path $stateA).Path)
    $B = [System.IO.File]::ReadAllBytes((Resolve-Path $stateB).Path)
    $rec = [BitConverter]::ToUInt32($A, 8)
    $n = [Math]::Min([BitConverter]::ToUInt32($A, 12), [BitConverter]::ToUInt32($B, 12))
    for ($i = 0; $i -lt $n; $i++)
    {
        $o = 16 + $i * $rec
        for ($k = 0; $k -lt $rec; $k++)
        {
            if ($A[$o + $k] -ne $B[$o + $k]) { return [int64][BitConverter]::ToUInt32($A, $o) }
        }
    }
    return [int64]-1
}

function Run([string]$name, [string]$script, [string[]]$extra)
{
    $dir = Join-Path $Work $name
    New-Item -ItemType Directory -Force -Path $dir | Out-Null
    $null = & $Exe --input $script @extra --state "$dir\s" --ram 1240,1290,1330 $insns 2>&1
    return $dir
}

# --- the cases ----------------------------------------------------------------------------------
$a = Run 'a' $mapInput @()
$b = Run 'b' $mapInput @('--mouse', "$Work\pointer.txt")
$c = Run 'c' "$Work\stick.txt" @('--mouse', "$Work\pointer.txt")
$d = Run 'd' "$Work\nokey.txt" @('--mouse', "$Work\click.txt")   # click instead of the key
$e = Run 'e' "$Work\nokey.txt" @()                               # ... and no fire at all

# 1. Without a pointer the map keeps the cursor the game placed, on the current destination.
$s = MapState "$a\s.1240.ram"
if ($s) {
    if ($s.curX -ne 178 -or $s.curY -ne 119) { Fail "no pointer: cursor $($s.curX),$($s.curY) is not the game's 178,119" }
    if ($s.orgX -ne -153 -or $s.orgY -ne -121) { Fail "no pointer: picture at $($s.orgX),$($s.orgY), not -153,-121" }
}
$s = MapState "$a\s.1330.ram"
if ($s -and ($s.curX -ne 178 -or $s.curY -ne 119)) {
    Fail "no pointer: cursor moved to $($s.curX),$($s.curY) on its own"
}

# 2. With a pointer the cursor follows it: the position plus the sprite's 0x11/0x12 hot spot.
$s = MapState "$b\s.1240.ram"
if ($s -and ($s.curX -ne 177 -or $s.curY -ne 118)) {
    Fail "pointer at 160,100 -> cursor $($s.curX),$($s.curY), expected 177,118"
}
$s = MapState "$b\s.1290.ram"
if ($s) {
    if ($s.curX -ne 57 -or $s.curY -ne 58) { Fail "pointer at 40,40 -> cursor $($s.curX),$($s.curY), expected 57,58" }
    if ($s.loc -eq 20) { Fail "pointer at 40,40: the destination under the cursor did not change (still $($s.loc))" }
}

# 3. Pushed past the travel window the cursor stays at the edge and the picture scrolls.
$s = MapState "$b\s.1330.ram"
if ($s) {
    if ($s.curX -ne 310 -or $s.curY -ne 168) { Fail "pointer at 315,150 -> cursor $($s.curX),$($s.curY), expected the clamped 310,168" }
    if ($s.orgX -ge -170) { Fail "pointer held at the right edge: picture still at $($s.orgX), expected it scrolled past -170" }
}

# 4. A held stick wins: the pointer sits at 40,40 but the cursor must move with the stick.
$s = MapState "$c\s.1290.ram"
if ($s -and $s.curX -le 178) {
    Fail "stick held right with the pointer at 40,40: cursor at $($s.curX), expected it past 178"
}

# 5. Nothing before the map runs may differ - the pointer seam must be invisible to a measurement.
$first = FirstDifferentFrame "$a\s.state" "$b\s.state"
if ($first -ge 0 -and $first -lt 1194) {
    Fail "pointer run differs from the plain one at frame $first, before the map starts (1194)"
}
Ok ("first differing frame (pointer vs none): $first")

# 6. The left button is /FIRE: the session's decisive press (frame 1060) fed as a click has to
#    produce the very same machine state, frame for frame. Without any fire it must differ there.
$first = FirstDifferentFrame "$a\s.state" "$d\s.state"
if ($first -ne -1) { Fail "a click at frame 1060 is not the same /FIRE as the key: state differs at frame $first" }
$first = FirstDifferentFrame "$a\s.state" "$e\s.state"
if ($first -lt 0 -or $first -gt 1065) {
    Fail "no fire at frame 1060 should change the run at 1060, but the first difference is at frame $first"
}
Ok "click = /FIRE: identical to the key run; without it the runs differ at frame $first"

if ($fail -ne 0) { exit 1 }
Write-Output "mouse: PASS"
exit 0
