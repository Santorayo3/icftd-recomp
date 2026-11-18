# The room screens' pointer in the add-on "Antheads": the arrow is up while a text menu is shown,
# and a line under it is selected by hovering - the same claim tools\pointer-check.ps1 makes for
# the 1989 game, made here on the add-on's own build.
#
# The add-on is a second build of the same engine. Its text menus reach the flip through a shared
# display stub, but a menu still names itself by the return address of its own call there (0x2D5A
# for the action list, 0x2FFC for "Look ..."; docs\antheads.md §6.1). With the stub's own return
# address (0x1F410) in that seam the port took a scene's display loop for a text menu, stopped
# recognising the real one - and on a room screen the arrow vanished as soon as the list appeared
# (the list's flip is what keeps the pointer up; the location picture is not redrawn on its passes)
# while no line could be picked. This is the regression check for that.
#
# The claim is machine state, not a picture: the action list keeps its selection in a stack local
# and stores it, with the action it stands for, when it settles - DAT_00029222 / DAT_0002921e in
# the add-on's image. Hovering line 2 and clicking has to produce what one Down press and a fire
# produce (entry 1, action 2), and the pointer has to be reported up on the room screen while the
# list is shown.
#
# The way in is the played one: New Game from the title runs the add-on's own intro, fire clicks
# carry it into the first room and the room's list comes up at ~frame 1604 (no recording needed).
# The add-on's data comes from the player's own disks (tools\extract.ps1), so this reports SKIP
# without it.
#
#   powershell -ExecutionPolicy Bypass -File tools\ant-pointer-check.ps1
param(
    [string]$Exe = 'bin\win32\icftd-recomp.exe',
    [string]$Data = 'export',
    [string]$Work = 'out\ant-pointer-check'
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
Set-Location $root

$image = Join-Path $Data 'ant\code\dshell4k\dshell.img'
$antData = Join-Path $Data 'ant1'
if (-not (Test-Path $Exe)) { Write-Output "ant pointer: SKIP (no $Exe - build with tools\build-host.ps1)"; exit 0 }
if (-not (Test-Path $image) -or -not (Test-Path $antData)) {
    Write-Output "ant pointer: SKIP (no add-on data - run tools\extract.ps1 with the add-on's disks)"
    exit 0
}

$insns = 14000000                      # the list is up from ~1604 and settles at 1640; this ends at ~3400
$move  = 1620                          # the pointer is put on the list's second line here
$click = 1640                          # ... and clicks it; the list settles in the next pass
$dump  = 1650                          # the words the list stores its outcome in
$xLine = 30
$yLine = 154                           # line 2: y 151..158 (lines are 7 rows from 144)

New-Item -ItemType Directory -Force -Path $Work | Out-Null
Get-ChildItem $Work -Recurse -File -ErrorAction SilentlyContinue | Remove-Item -Force

# The intro: a fire click every 120 frames from frame 200 reaches the first room and advances its
# conversation; the click at 1640 is the first one the text menu sees.
$clicks = @()
foreach ($f in 200, 320, 440, 560, 680, 800, 920, 1040, 1160, 1280, 1400, 1520) {
    $clicks += "$f 300 60 1"
    $clicks += "$($f + 5) 300 60 0"
}
# A pointer that never leaves the corner: the list's own default entry is what gets committed.
@('100 300 60') + $clicks + @("$click 300 60 1", "$($click + 5) 300 60 0") |
    Set-Content -Encoding ascii "$Work\neutral.txt"
# The same run with the pointer moved onto line 2 before the click.
@('100 300 60') + $clicks + @("$move $xLine $yLine", "$click $xLine $yLine 1",
                              "$($click + 5) $xLine $yLine 0") |
    Set-Content -Encoding ascii "$Work\hover.txt"
# The keyboard reference: one Down press (0x0001) held over a list pass, then the same click.
@("$move 0 0x0001", "$($move + 6) 0 0x0000") | Set-Content -Encoding ascii "$Work\down1.txt"

$fail = 0
function Fail([string]$text) { Write-Output "ant pointer: FAIL - $text"; $script:fail++ }
function Ok([string]$text) { Write-Output "ant pointer: $text" }

function U16([byte[]]$b, [int]$a) { return [long]($b[$a] -shl 8) -bor $b[$a + 1] }

# The list's outcome, read out of the RAM blob after the click (the image is loaded at 0x4000).
function MenuOutcome([string]$dir)
{
    $ram = "$dir\s.$dump.ram"
    if (-not (Test-Path $ram)) { Fail "no RAM blob $ram"; return $null }
    $b = [System.IO.File]::ReadAllBytes((Resolve-Path $ram).Path)
    $base = 0x4000
    return [pscustomobject]@{
        entry  = U16 $b ($base + 0x29222)      # DAT_00029222: the selection the list stored
        action = U16 $b ($base + 0x2921E)      # DAT_0002921e: the action that entry stands for
    }
}

function Run([string]$name, [string]$mouse, [string]$keyScript)
{
    $dir = Join-Path $Work $name
    New-Item -ItemType Directory -Force -Path $dir | Out-Null
    $argv = @($image, $insns, '--program', 'ant', '--data', $Data, '--titlekey', 0,
              '--mouse', $mouse, '--hoverlog', '--state', "$dir\s", '--ram', $dump)
    if ($keyScript -ne '') { $argv += @('--input', $keyScript) }
    $null = & $Exe @argv 2>&1 | Set-Content -Encoding ascii "$dir\log.txt"
    return $dir
}

# --- the cases ----------------------------------------------------------------------------------
$a = Run 'neutral' "$Work\neutral.txt" ''
$h = Run 'hover'   "$Work\hover.txt"   ''
$k = Run 'stick'   "$Work\neutral.txt" "$Work\down1.txt"

# 1. The list's own default stands without a pointer over it, and one Down press moves it one
#    entry on - so the words below are the menu's, not something the port wrote.
$n = MenuOutcome $a
if ($n -and ($n.entry -ne 0 -or $n.action -ne 0)) {
    Fail ("without a pointer the list settled on entry $($n.entry), action $($n.action), expected 0/0")
}
$s = MenuOutcome $k
if ($s -and ($s.entry -ne 1 -or $s.action -ne 2)) {
    Fail ("one Down press settled on entry $($s.entry), action $($s.action), expected 1/2")
}
if ($n -and $s) { Ok "keyboard: default $($n.entry)/$($n.action), Down 1 -> $($s.entry)/$($s.action)" }

# 2. The arrow is up on the room screen when the list appears. The port says so once, when it
#    becomes visible: the list's own passes do not redraw the location picture, so the list's flip
#    is the seam that keeps the pointer on screen. The mark is the list's own first recorded line,
#    so a shift of the intro does not move the check.
$hlog = Get-Content "$h\log.txt" -Raw
$first = -1
foreach ($m in [regex]::Matches($hlog, 'line menu 1 entry -?\d+ at -?\d+\.\.-?\d+ x -?\d+\.\.-?\d+ \(frame (\d+)\)')) {
    $first = [int]$m.Groups[1].Value
    break
}
if ($first -lt 0) {
    Fail 'the add-on room text menu never drew a line'
} else {
    $shown = -1
    foreach ($m in [regex]::Matches($hlog, 'pointer shown at \d+,\d+ on a room screen \(frame (\d+)\)')) {
        $f = [int]$m.Groups[1].Value
        if ($f -ge $first -and $f -le $first + 40) { $shown = $f; break }
    }
    if ($shown -lt 0) {
        Fail "the pointer was not shown on the room screen while the text menu was up (the list opened at frame $first)"
    } else {
        Ok "the pointer is up on the room screen while the text menu is shown (frame $shown, list at $first)"
    }
}

# 3. Hovering line 2 and clicking is the same choice one Down press makes.
$p = MenuOutcome $h
if ($p -and $s) {
    if ($p.entry -ne $s.entry -or $p.action -ne $s.action) {
        Fail ("hovering line 2 settled on entry $($p.entry), action $($p.action); the stick settled on $($s.entry)/$($s.action)")
    } else {
        Ok "hover: line 2 -> $($p.entry)/$($p.action), as the stick's Down 1"
    }
}
if ($hlog -notmatch 'hover 30,154 -> entry 1 of menu 1') {
    Fail 'the hover was not reported: the list did not take the pointer''s line'
}

if ($fail -ne 0) { exit 1 }
Write-Output "ant pointer: PASS"
exit 0
