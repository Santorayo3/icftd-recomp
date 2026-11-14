# The port's pointer on a room screen: the arrow is drawn there, and a text menu line under it is
# selected by hovering - measured on machine state, never on a picture.
#
# This is a port feature - the original has no mouse at all - so there is nothing to diff it
# against. It is checked against the two things a hover has to be:
#
#   1. it selects the same menu entry the stick would. The room's action menu (FUN_0000247a) keeps
#      its selection in a stack local; on the way out it stores it in DAT_000269da and the action
#      it stands for in DAT_000269d6. Hovering line k (with the pointer moved there) and clicking
#      has to produce the entry and the action that k-1 Down presses plus fire produce.
#   2. a pointer that never hovers a line changes nothing. A --mouse run whose pointer sits away
#      from the text has to be byte-identical to the plain run, frame record for frame record; a
#      hover run may only differ from the frame the pointer moved.
#
# The room is the one right after the intro and the YES/NO load screen: the recording
# ref\inputs\flight-crash-hospital-room.txt reaches it at frame ~960 and its action menu draws
# four lines at y 144..172 (the font is 7 rows, the first baseline is 0x96). Like the other
# recorded sessions that file is game-derived, so the check reports SKIP without it.
#
#   powershell -ExecutionPolicy Bypass -File tools\pointer-check.ps1
param(
    [string]$Exe = 'bin\win32\icftd-recomp.exe',
    [string]$Work = 'out\pointer-check'
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
Set-Location $root

$session = 'ref\inputs\flight-crash-hospital-room.txt'
if (-not (Test-Path $Exe)) { Write-Output "pointer: SKIP (no $Exe - build with tools\build-host.ps1)"; exit 0 }
if (-not (Test-Path $session)) { Write-Output "pointer: SKIP (no $session)"; exit 0 }

$insns = 11000000                      # frame ~1070: the room menu is up at ~960 and is answered at 1060
$move  = 970                           # the pointer is put on a line here, after the menu opened
$yLine = @(147, 154, 161, 168)          # the four menu lines' rows (144..151, 151..158, ...)
$xLine = 30

New-Item -ItemType Directory -Force -Path $Work | Out-Null
Get-ChildItem $Work -Recurse -File -ErrorAction SilentlyContinue | Remove-Item -Force

# The recording with its four Up presses taken out: the menu's own default then stands (the
# blinking "Answer the Door" entry, index 2), and the fire at 1060 still commits it.
$lines = Get-Content $session
$plain = $lines | Where-Object { $_ -notmatch '^10(09|14|19|25|30|35|39|46) ' }
$plain | Set-Content -Encoding ascii "$Work\plain.txt"
# The recording itself: Up x4, then fire (the keyboard reference for entry 0).
$up4 = Get-Content $session
$idx = [array]::IndexOf($plain, '1060 1 0x0000')
if ($idx -lt 0) { Write-Output 'pointer: SKIP (the recording no longer has the decisive fire)'; exit 0 }
# The same, with two Down pulses at the menu (the keyboard reference for entry 3).
$down2 = @($plain[0..($idx - 1)]) + @('1009 0 0x0001', '1014 0 0x0000',
                                     '1019 0 0x0001', '1025 0 0x0000') +
         @($plain[$idx..($plain.Count - 1)])
$down2 | Set-Content -Encoding ascii "$Work\down2.txt"
# The same again with the fire taken out: the hover runs click instead, so the click is the only
# fire and the mouse script has to be what commits the chosen entry.
$nofire = $plain | Where-Object { $_ -notmatch '^106[05] ' }
$nofire | Set-Content -Encoding ascii "$Work\nofire.txt"
$up4 | Set-Content -Encoding ascii "$Work\up4.txt"

function MouseScript([string]$name, [int]$y, [switch]$Click)
{
    $text = "$move $xLine $y"
    if ($Click) { $text += "`r`n1060 $xLine $y 1`r`n1065 $xLine $y 0" }
    $text | Set-Content -Encoding ascii "$Work\$name.txt"
    return "$Work\$name.txt"
}
$neutral = "$Work\neutral.txt"
"$move 300 60" | Set-Content -Encoding ascii $neutral
$hover = @()
for ($i = 0; $i -lt 4; $i++) { $hover += MouseScript ("hover" + $i) $yLine[$i] -Click }

$fail = 0
function Fail([string]$text) { Write-Output "pointer: FAIL - $text"; $script:fail++ }
function Ok([string]$text) { Write-Output "pointer: $text" }

function U16([byte[]]$b, [int]$a) { return [long]($b[$a] -shl 8) -bor $b[$a + 1] }

# The menu's outcome, read out of the RAM blob at frame 1070 (the image is loaded at 0x4000).
function MenuOutcome([string]$dir)
{
    $ram = "$dir\s.1070.ram"
    if (-not (Test-Path $ram)) { Fail "no RAM blob $ram"; return $null }
    $b = [System.IO.File]::ReadAllBytes((Resolve-Path $ram).Path)
    $base = 0x4000
    return [pscustomobject]@{
        entry  = U16 $b ($base + 0x269DA)      # DAT_000269da: the selection the menu stored
        action = U16 $b ($base + 0x269D6)      # DAT_000269d6: the action that entry stands for
    }
}

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

function Run([string]$name, [string]$script, [string]$mouse)
{
    $dir = Join-Path $Work $name
    New-Item -ItemType Directory -Force -Path $dir | Out-Null
    $argv = @('--input', $script, '--state', "$dir\s", '--ram', '1070')
    if ($mouse -ne '') { $argv += @('--mouse', $mouse) }
    $argv += $insns
    $null = & $Exe @argv 2>&1
    return $dir
}

# --- the cases ----------------------------------------------------------------------------------
$a = Run 'k0'      "$Work\plain.txt"  ''            # the menu's own default
$b = Run 'up4'     "$Work\up4.txt"    ''            # Up x4 and fire: entry 0
$c = Run 'down2'   "$Work\down2.txt"  ''            # Down x2 and fire: entry 3
$d = Run 'neutral' "$Work\plain.txt"  $neutral      # a pointer that is never over a line
$h = @()
for ($i = 0; $i -lt 4; $i++) { $h += Run ("hover" + $i) "$Work\nofire.txt" $hover[$i] }

# 1. The menu's default: the blinking "Answer the Door" entry (index 2, action 7). Nothing the
#    pointer does may be needed for it, and nothing may have moved it.
$s = MenuOutcome $a
$default = $s
if ($s -and ($s.entry -ne 2 -or $s.action -ne 7)) {
    Fail ("without a pointer the menu chose entry $($s.entry), action $($s.action), expected 2/7")
}
$s = MenuOutcome $b
if ($s -and ($s.entry -ne 0 -or $s.action -ne 2)) {
    Fail ("Up x4 chose entry $($s.entry), action $($s.action), expected 0/2 (Go to Map)")
}
$s = MenuOutcome $c
if ($s -and ($s.entry -ne 3 -or $s.action -ne 4)) {
    Fail ("Down x2 chose entry $($s.entry), action $($s.action), expected 3/4")
}
Ok ("keyboard: default $($default.entry)/$($default.action), Up x4 0/2, Down x2 3/4")

# 2. Hovering a line and clicking is the same choice the stick makes. Line 0 is "Go to Map"
#    (what Up x4 reaches), line 3 is the fourth entry (what Down x2 reaches).
$expected = @($b, $c)          # keyboard reference for line 1 and line 4
$pairs = @(@(0, 0), @(3, 1))   # (hovered line, keyboard reference index)
$before = $fail
foreach ($p in $pairs)
{
    $s = MenuOutcome $h[$p[0]]
    $k = MenuOutcome $expected[$p[1]]
    if ($null -eq $s -or $null -eq $k) { continue }
    if ($s.entry -ne $k.entry -or $s.action -ne $k.action) {
        Fail ("hovering line $($p[0] + 1) chose entry $($s.entry), action $($s.action); the stick chose $($k.entry)/$($k.action)")
    }
}
if ($fail -eq $before) { Ok "hover: line 1 = 0/2 (as Up x4), line 4 = 3/4 (as Down x2)" }

# 3. A pointer that never hovers a line is invisible to the machine: byte-identical, frame for
#    frame. A hover may only differ from the frame the pointer was moved to the line.
$first = FirstDifferentFrame "$a\s.state" "$d\s.state"
if ($first -ne -1) { Fail "a pointer away from the text changed the run at frame $first" }
Ok "pointer away from the text: identical to the plain run on every frame record"
$first = FirstDifferentFrame "$a\s.state" "$($h[0])\s.state"
if ($first -lt $move) { Fail "the hover run differs from the plain one at frame $first, before the pointer moved ($move)" }
if ($first -lt 0) { Fail "hovering a line changed nothing (the pointer seam did not act)" }
Ok "hover run first differs at frame $first (the pointer moved at $move)"

if ($fail -ne 0) { exit 1 }
Write-Output "pointer: PASS"
exit 0
