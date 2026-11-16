# The hospital escape's camera: a port feature, so there is no oracle path to diff against.
#
# The original holds the walking character between 120 and 200 px of the 288 px window (70..130 of
# the 180 rows) and only then scrolls, so on the original a walk is a step to the edge and then the
# screen being dragged along. The port keeps the character at the middle (144 across, 100 down -
# the original's own band midpoint) and the picture follows from one update to the next.
#
# What this check asserts is machine state, never a picture. --cameralog prints, once per update,
# the words the seam reads and writes: the player's world position (0x29ED0/0x29ED2), the picture's
# origin in the bitmap (0x29EC6/0x29EC8), the horizontal fine scroll (0x28CD4, the display's delay)
# and the request word it writes (0x297F2). The character's screen position is
# player - origin + fine across and player - origin down.
#
#   * while the character walks, its screen position stays at 144 +/- 7 across and 100 +/- 9 down
#     (the band plus one step of lag), and the origin moves with it - the picture scrolls;
#   * once it stands still the origin stops moving.
#
# The second half is the invariant every port feature owes: the same script played as a
# measurement (no --mouse, so rc_entryHook is never installed) must still show the ORIGINAL's
# camera. Its words are read from a --ramstop image: the character walks to screen x 193, i.e. to
# the 200 px edge of the original's band, and no camera line is printed at all.
#
# The hospital is reached the documented way, by entering its engine routine at a frame boundary
# (--call 0x1C19A:100, i.e. FUN_0001819a), so no recording is needed; the walk is a frame-indexed
# joystick script this check writes itself.
#
#   powershell -ExecutionPolicy Bypass -File tools\camera-check.ps1
param(
    [string]$Exe = 'bin\win32\icftd-recomp.exe',
    [string]$DataDir = 'export',
    [string]$Image = 'export\code\dshell4k\dshell.img',
    [string]$Work = 'out\camera-check'
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
Set-Location $root

if (-not (Test-Path $Exe))   { Write-Output "camera: SKIP (no $Exe - build it with tools\build-host.ps1)"; exit 0 }
if (-not (Test-Path $Image)) { Write-Output "camera: SKIP (no $Image - run tools\extract.ps1)"; exit 0 }

New-Item -ItemType Directory -Force -Path $Work | Out-Null

$fail = 0
function Fail([string]$t) { Write-Output "camera: FAIL - $t"; $script:fail++ }
function Ok([string]$t)   { Write-Output "camera: $t" }

# The walk: the scene's update starts around frame 416 with the entrance hole still loading, so the
# holds are placed well after it, and a /FIRE first - the scene waits for the button before it lets
# the character walk. 0x0003 right, 0x0001 down, 0x0300 left, 0x0100 up (JOY0DAT is active low;
# these are the words a real stick presents - src\host\main.c's g_joyDirs).
$walk = Join-Path $Work 'walk.txt'
@(
    '# the hospital camera check: fire, then hold right, down, left, up, then stand still',
    '420 1 0x0000',
    '424 0 0x0000',
    '500 0 0x0003',
    '800 0 0x0001',
    '1100 0 0x0300',
    '1400 0 0x0100',
    '1700 0 0x0000'
) | Set-Content -Encoding ascii $walk

# --mouse is the headless form of a played game: it installs the port's per-screen seams. It has
# no positions here, so the pointer itself stays unknown and every pointer-driven seam is inert.
$arm = Join-Path $Work 'arm.txt'
'# no pointer positions: this run only arms the port seams' | Set-Content -Encoding ascii $arm

$budget = 20000000          # reaches frame ~1960, i.e. the whole walk and 250 idle frames

# --- the played run: the port's camera ---------------------------------------------------------
$log = Join-Path $Work 'port.txt'
$p = Start-Process -FilePath $Exe -NoNewWindow -Wait -PassThru `
     -RedirectStandardOutput $log -RedirectStandardError (Join-Path $Work 'err.txt') `
     -ArgumentList @($Image, "$budget", '--call', '0x1C19A:100', '--input', $walk, '--mouse', $arm,
         '--cameralog', '--data', $DataDir)
$out = Get-Content $log -Raw

if ($p.ExitCode -ne 0) { Fail ("the played run exited {0}" -f $p.ExitCode) }
elseif ($out -notmatch 'camera: the hospital view follows the player') {
    Fail 'the camera seam never ran'
}

$s = @()
foreach ($m in [regex]::Matches($out, '(?m)^camera: frame (\d+) player (-?\d+),(-?\d+) origin (-?\d+),(-?\d+) fine (-?\d+) screen (-?\d+),(-?\d+) request ([0-9A-F]+)')) {
    $s += [pscustomobject]@{
        f = [int]$m.Groups[1].Value
        x = [int]$m.Groups[7].Value; y = [int]$m.Groups[8].Value
        ox = [int]$m.Groups[4].Value; oy = [int]$m.Groups[5].Value
    }
}
if ($s.Count -lt 200) { Fail ("only {0} camera update(s) were logged" -f $s.Count) }
else {
    Ok ("{0} updates logged, frames {1}..{2}" -f $s.Count, $s[0].f, $s[-1].f)

    # The character's screen position while it walks. 500..1100 is the right and the down hold,
    # i.e. after the entrance correction has settled and while the x camera is still free.
    $hold = @($s | Where-Object { $_.f -ge 500 -and $_.f -le 1100 })
    $bad = @($hold | Where-Object { $_.x -lt 137 -or $_.x -gt 151 -or $_.y -lt 91 -or $_.y -gt 109 })
    if ($bad.Count -ne 0) {
        Fail ("the character left the middle {0} time(s) while walking (x {1}..{2}, y {3}..{4})" -f
            $bad.Count, ($hold | Measure-Object x -Minimum).Minimum, ($hold | Measure-Object x -Maximum).Maximum,
            ($hold | Measure-Object y -Minimum).Minimum, ($hold | Measure-Object y -Maximum).Maximum)
    }
    else {
        Ok ("the character stays at the middle while walking (x {0}..{1} of 144, y {2}..{3} of 100)" -f
            ($hold | Measure-Object x -Minimum).Minimum, ($hold | Measure-Object x -Maximum).Maximum,
            ($hold | Measure-Object y -Minimum).Minimum, ($hold | Measure-Object y -Maximum).Maximum)
    }

    # ... and the picture follows it: the origin moves while the character walks.
    $right = @($s | Where-Object { $_.f -ge 500 -and $_.f -le 800 })
    $dx = ($right[-1].ox) - ($right[0].ox)
    if ($right.Count -lt 2 -or [Math]::Abs($dx) -lt 16) {
        Fail ("the picture did not follow the walk right (origin x moved {0} px)" -f $dx)
    }
    else { Ok ("the picture followed the walk right (origin x moved {0} px)" -f $dx) }

    $down = @($s | Where-Object { $_.f -ge 800 -and $_.f -le 1100 })
    $dy = ($down[-1].oy) - ($down[0].oy)
    if ($down.Count -lt 2 -or [Math]::Abs($dy) -lt 10) {
        Fail ("the picture did not follow the walk down (origin y moved {0} px)" -f $dy)
    }
    else { Ok ("the picture followed the walk down (origin y moved {0} px)" -f $dy) }

    # Standing still: the view stops. (A bit may still ask for a scroll the level's edge refuses -
    # the character walked into the corridor's end - so the claim is about the origin, not the bits.)
    $idle = @($s | Where-Object { $_.f -ge 1780 })
    $moving = @($idle | Where-Object { $_.ox -ne $idle[0].ox -or $_.oy -ne $idle[0].oy })
    if ($idle.Count -lt 20) { Fail 'no idle frames to look at' }
    elseif ($moving.Count -ne 0) {
        Fail ("the view kept moving with the character standing still (first at frame {0})" -f $moving[0].f)
    }
    else { Ok ("the view is still while the character stands still ({0} frames)" -f $idle.Count) }
}

# --- the measurement run: the original's camera -------------------------------------------------
# The same script without --mouse is a measurement, so rc_entryHook is never installed. Its words
# are read out of the RAM the run ends on, at frame ~780: the walk right has taken the character
# to the original's band edge, which is 49 px past the middle - the behaviour the port replaces.
$ram = Join-Path $Work 'orig.ram'
$mlog = Join-Path $Work 'measure.txt'
$p2 = Start-Process -FilePath $Exe -NoNewWindow -Wait -PassThru `
      -RedirectStandardOutput $mlog -RedirectStandardError (Join-Path $Work 'err.txt') `
      -ArgumentList @($Image, '8500000', '--call', '0x1C19A:100', '--input', $walk,
          '--data', $DataDir, '--ramstop', $ram)

if ($p2.ExitCode -ne 0) { Fail ("the measurement run exited {0}" -f $p2.ExitCode) }
elseif ((Get-Content $mlog -Raw) -match 'camera:') {
    Fail 'a measurement run installed the camera seam'
}
else { Ok 'a measurement run installs no camera seam' }

if (Test-Path $ram) {
    $b = [System.IO.File]::ReadAllBytes($ram)
    $BASE = 0x4000                        # the image loads at RC_BASE (tools\build-host.ps1)
    function S16([byte[]]$bytes, [int]$a) {
        $o = $BASE + $a
        $v = ([int]$bytes[$o] -shl 8) -bor [int]$bytes[$o + 1]
        if ($v -ge 32768) { $v -= 65536 }
        return $v
    }
    $screen = (S16 $b 0x29ED0) - (S16 $b 0x29EC6) + (S16 $b 0x28CD4)
    if ($screen -lt 180) {
        Fail ("the measurement run holds the character at screen x {0}, not the original's band edge" -f $screen)
    }
    else { Ok ("the measurement run still shows the original's camera (screen x {0} of 144)" -f $screen) }
}
else { Fail 'the measurement run wrote no RAM' }

if ($fail -ne 0) { Write-Output ("camera: {0} check(s) failed" -f $fail); exit 1 }
Write-Output 'camera: the hospital view follows the character at the middle, and a measurement keeps the original camera'
exit 0
