# The Ctrl+T clock freeze: a port feature, so there is no oracle path to diff against. What it
# claims is machine state - the engine's own date and time - and that is what this check reads.
#
# The engine's clock is FUN_00005406: the clock VBI FUN_000054cc calls it every 0x50 vblanks, it
# counts the minute DAT_00021e24 up and cascades into the hour DAT_00021e22, the day DAT_00021e1e
# and the hour the map prints (DAT_00026870/0x26872); travelling (FUN_00003b1e, 0x3208) and
# sleeping (FUN_0000579c, 0x4204) add to the minute word directly, before calling it. The freeze
# holds the engine's own pause word DAT_00021e26 - the gate FUN_00005406 tests at 0x4006 - and puts
# the five time words back at every frame boundary, which is what undoes the two direct adds.
#
# The map is reached without a save and without a recording: the world loop's own entry FUN_000043b8
# is injected at frame 300 (chained after FUN_0000551c, which installs the clock VBI), so the run has
# a live map and a live clock. --timefreeze <frame> raises the chord's input state at that frame
# boundary, so the toggle goes through the same test the platform's Ctrl+T does.
#
#   1. frozen, the clock does not move: the five words at frame 400, 600 and 900 are identical and
#      the pause gate is 1;
#   2. unfrozen, it moves again: the words still agree at 600 while frozen, and the minute has
#      advanced by frame 900, with the gate back at 0;
#   3. a travel adds no time while frozen: the same pointer-driven travel (the map cursor over a
#      destination, then a click) lands in the destination with the travel's minutes added when the
#      clock runs, and with the clock exactly as it was frozen when it does not;
#   4. a frozen run is the plain run until the key: every frame record up to the freeze frame is
#      byte-identical, and a run with no --timefreeze never writes the gate - the seam is inert.
#
#   powershell -ExecutionPolicy Bypass -File tools\time-freeze-check.ps1
param(
    [string]$Exe = 'bin\win32\icftd-recomp.exe',
    [string]$DataDir = 'export',
    [string]$Image = 'export\code\dshell4k\dshell.img',
    [string]$Work = 'out\time-freeze'
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
Set-Location $root

if (-not (Test-Path $Exe))   { Write-Output "freeze: SKIP (no $Exe - build it with tools\build-host.ps1)"; exit 0 }
if (-not (Test-Path $Image)) { Write-Output "freeze: SKIP (no $Image - run tools\extract.ps1)"; exit 0 }

New-Item -ItemType Directory -Force -Path $Work | Out-Null
Get-ChildItem $Work -File -ErrorAction SilentlyContinue | Remove-Item -Force

$BASE = 0x4000                    # the image loads at RC_BASE (tools\build-host.ps1)
$BUDGET = 4000000                 # ~1 150 frames: the map is up from 362, the freeze at 400

# The world loop's entry, chained behind the clock VBI's installer: FUN_0000551c returns into
# FUN_000043b8, whose own return (the map script's exit) finds the END sentinel and stops the run.
$MAPCALL = @('--call', '0x951C:300:0x200:0x83B8')

# The engine's clock, at model addresses.
$MIN = 0x21E24                    # DAT_00021e24, the minute
$HOUR = 0x21E22                   # DAT_00021e22, the hour
$DAY = 0x21E1E                    # DAT_00021e1e, days left in June
$GATE = 0x21E26                   # DAT_00021e26, FUN_00005406's pause gate
$DISP_H = 0x26870                 # DAT_00026870, the hour the map prints
$DISP_AP = 0x26872                # DAT_00026872, its AM/PM string (a long)
$LOC = 0x28A3A                    # DAT_00028a3a, the location the run is at

function U16([byte[]]$b, [int]$a) { return ([int]$b[$BASE + $a] * 256 + [int]$b[$BASE + $a + 1]) }
# The save file holds the image's own bytes, so it has no load address: same reader, no $BASE.
function File16([byte[]]$b, [int]$a) { return ([int]$b[$a] * 256 + [int]$b[$a + 1]) }
function U32([byte[]]$b, [int]$a) {
    return ([long]$b[$BASE + $a] * 16777216 + [int]$b[$BASE + $a + 1] * 65536 +
            [int]$b[$BASE + $a + 2] * 256 + [int]$b[$BASE + $a + 3])
}

# The date and time as one line of text, so a failure says what moved.
function Clock([byte[]]$b) {
    return ("day {0}, {1}:{2:D2}, printed {3} (AM/PM @0x{4:X}), gate {5}" -f
            (U16 $b $DAY), (U16 $b $HOUR), (U16 $b $MIN), (U16 $b $DISP_H), (U32 $b $DISP_AP),
            (U16 $b $GATE))
}
function SameClock([byte[]]$a, [byte[]]$b) {
    return (U16 $a $DAY) -eq (U16 $b $DAY) -and (U16 $a $HOUR) -eq (U16 $b $HOUR) -and
           (U16 $a $MIN) -eq (U16 $b $MIN) -and (U16 $a $DISP_H) -eq (U16 $b $DISP_H) -and
           (U32 $a $DISP_AP) -eq (U32 $b $DISP_AP)
}

$fail = 0
function Fail([string]$t) { Write-Output "freeze: FAIL - $t"; $script:fail++ }
function Ok([string]$t)   { Write-Output "freeze: $t" }

function Run([string]$name, [string[]]$extra) {
    $log = Join-Path $Work ("{0}.txt" -f $name)
    $runArgs = @($Image, "$BUDGET", '--data', $DataDir) + $extra
    $p = Start-Process -FilePath $Exe -NoNewWindow -Wait -PassThru `
         -RedirectStandardOutput $log -RedirectStandardError (Join-Path $Work 'err.txt') `
         -ArgumentList $runArgs
    if ($p.ExitCode -ne 0) { throw ("{0}: the run exited {1}" -f $name, $p.ExitCode) }
    return (Get-Content $log -Raw)
}

# --- 1. frozen, the clock does not move -------------------------------------------------------
try {
    $log = Run 'frozen' (@($MAPCALL) + @('--timefreeze', '400',
               '--state', (Join-Path $Work 'frz'), '--ram', '400,600,900'))
    if ($log -notmatch 'time frozen at frame \d+, OSD "Time frozen"') {
        Fail 'the key did not report the OSD line "Time frozen"'
    } else { Ok 'the chord freezes the clock and says so: OSD "Time frozen"' }

    $w400 = [System.IO.File]::ReadAllBytes((Join-Path $Work 'frz.400.ram'))
    $w600 = [System.IO.File]::ReadAllBytes((Join-Path $Work 'frz.600.ram'))
    $w900 = [System.IO.File]::ReadAllBytes((Join-Path $Work 'frz.900.ram'))
    if (-not (SameClock $w400 $w600) -or -not (SameClock $w400 $w900)) {
        Fail ("the clock moved while frozen: frame 400 has {0}, 600 {1}, 900 {2}" -f
              (Clock $w400), (Clock $w600), (Clock $w900))
    } elseif ((U16 $w900 $GATE) -ne 1) {
        Fail ("the engine's clock pause is {0} while frozen, not 1" -f (U16 $w900 $GATE))
    } else {
        Ok ("frames 400..900 hold the clock at {0}" -f (Clock $w900))
    }
} catch { Fail $_.Exception.Message }

# --- 2. unfrozen, it moves again --------------------------------------------------------------
try {
    $log = Run 'resumed' (@($MAPCALL) + @('--timefreeze', '400,700',
               '--state', (Join-Path $Work 'unf'), '--ram', '400,600,900'))
    if ($log -notmatch 'time frozen at frame \d+, OSD "Time frozen"') {
        Fail 'the unfreeze run never froze the clock'
    }
    if ($log -notmatch 'time unfrozen at frame \d+, OSD "Time unfrozen"') {
        Fail 'the chord did not report the OSD line "Time unfrozen"'
    } else { Ok 'the chord unfreezes the clock and says so: OSD "Time unfrozen"' }

    $w400 = [System.IO.File]::ReadAllBytes((Join-Path $Work 'unf.400.ram'))
    $w600 = [System.IO.File]::ReadAllBytes((Join-Path $Work 'unf.600.ram'))
    $w900 = [System.IO.File]::ReadAllBytes((Join-Path $Work 'unf.900.ram'))
    if (-not (SameClock $w400 $w600)) {
        Fail ("the clock moved before the unfreeze: frame 400 has {0}, 600 {1}" -f
              (Clock $w400), (Clock $w600))
    } elseif ((U16 $w600 $GATE) -ne 1) {
        Fail ("the clock is not paused at frame 600 while frozen (gate {0})" -f (U16 $w600 $GATE))
    } elseif ((U16 $w900 $MIN) -le (U16 $w400 $MIN) -and (U16 $w900 $HOUR) -eq (U16 $w400 $HOUR)) {
        Fail ("the clock did not resume after the unfreeze: frame 400 {0}, 900 {1}" -f
              (Clock $w400), (Clock $w900))
    } elseif ((U16 $w900 $GATE) -ne 0) {
        Fail ("the engine's clock pause is still {0} after unfreezing" -f (U16 $w900 $GATE))
    } else {
        Ok ("frozen at 400..600 and running again by 900: {0}" -f (Clock $w900))
    }
} catch { Fail $_.Exception.Message }

# --- 3. a travel adds no time while frozen -----------------------------------------------------
# The map cursor is placed by the pointer (pointer + the map's own hot spot), over the destination
# location's rectangle in the map picture; a click is /FIRE, which the map's script reads. The
# injected map starts at location 23 with the picture scrolled to it, so destination 24 sits at
# screen x 244, y 76.
$mouse = Join-Path $Work 'travel.mouse'
@'
480 150 100 0
500 244 76 0
520 244 76 1
560 244 76 0
'@ | Set-Content -Encoding ascii $mouse
$travelArgs = @($MAPCALL) + @('--mouse', $mouse)

function DayMinutes([byte[]]$b) { return (U16 $b $HOUR) * 60 + (U16 $b $MIN) }

try {
    $ctlDir = Join-Path $Work 'ctl'
    $frzDir = Join-Path $Work 'tfz'
    New-Item -ItemType Directory -Force -Path $ctlDir, $frzDir | Out-Null

    # 480 is before the pointer moves (500), so both runs start from the same clock; the run ends
    # itself when the map's script returns after the travel (the injected call's END sentinel).
    $ctlLog = Run 'travel-plain' ($travelArgs + @('--state', (Join-Path $ctlDir 's'),
                 '--ram', '480', '--ramstop', (Join-Path $ctlDir 'end.ram')))
    $frzLog = Run 'travel-frozen' ($travelArgs + @('--timefreeze', '400',
                 '--state', (Join-Path $frzDir 's'), '--ram', '480',
                 '--ramstop', (Join-Path $frzDir 'end.ram')))

    $ctlBefore = [System.IO.File]::ReadAllBytes((Join-Path $ctlDir 's.480.ram'))
    $ctlEnd = [System.IO.File]::ReadAllBytes((Join-Path $ctlDir 'end.ram'))
    $frzBefore = [System.IO.File]::ReadAllBytes((Join-Path $frzDir 's.480.ram'))
    $frzEnd = [System.IO.File]::ReadAllBytes((Join-Path $frzDir 'end.ram'))

    if ((U16 $frzEnd $LOC) -ne 24 -or (U16 $ctlEnd $LOC) -ne 24) {
        Fail ("the travel did not happen: the run ended at location {0} (frozen) / {1} (plain), not 24" -f
              (U16 $frzEnd $LOC), (U16 $ctlEnd $LOC))
    } else {
        Ok "the pointer's click takes the map's own travel path: both runs end at location 24"

        # The minute word only covers an hour, so the comparison is minutes since midnight.
        $ctlJump = (DayMinutes $ctlEnd) - (DayMinutes $ctlBefore)
        $frzJump = (DayMinutes $frzEnd) - (DayMinutes $frzBefore)
        if ($ctlJump -lt 5) {
            Fail ("with the clock running, the travel added {0} minute(s) at most: frame 480 {1} -> end {2}" -f
                  $ctlJump, (Clock $ctlBefore), (Clock $ctlEnd))
        } else {
            Ok ("with the clock running the same travel moves it {0} minute(s): {1} -> {2}" -f
                $ctlJump, (Clock $ctlBefore), (Clock $ctlEnd))
        }
        if (-not (SameClock $frzBefore $frzEnd)) {
            Fail ("the travel advanced the frozen clock: frame 480 {0}, after the travel {1}" -f
                  (Clock $frzBefore), (Clock $frzEnd))
        } elseif ((U16 $frzEnd $GATE) -ne 1) {
            Fail ("the engine's clock pause is {0} after the travel, not 1" -f (U16 $frzEnd $GATE))
        } else {
            Ok ("the same travel while frozen moves it {0} minute(s): {1} -> {2}" -f
                $frzJump, (Clock $frzBefore), (Clock $frzEnd))
        }
    }
} catch { Fail $_.Exception.Message }

# --- 4. a frozen run is the plain run until the key, and the gate is otherwise untouched --------
# The same injected map, once plain and once with the seam armed at frame 400. Every frame record
# (frame, insns, registers, SR, PC, RAM hash, custom chips) up to and including 400 must be equal,
# and the plain run must end with the gate still 0 - nothing of the feature is on its path.
try {
    $plainDir = Join-Path $Work 'plain'
    $armedDir = Join-Path $Work 'armed'
    New-Item -ItemType Directory -Force -Path $plainDir, $armedDir | Out-Null

    $plainLog = Run 'plain' (@($MAPCALL) + @('--state', (Join-Path $plainDir 's'),
                 '--ramstop', (Join-Path $plainDir 'end.ram')))
    $armedLog = Run 'armed' (@($MAPCALL) + @('--timefreeze', '400',
                 '--state', (Join-Path $armedDir 's'), '--ramstop', (Join-Path $armedDir 'end.ram')))

    $A = [System.IO.File]::ReadAllBytes((Join-Path $plainDir 's.state'))
    $B = [System.IO.File]::ReadAllBytes((Join-Path $armedDir 's.state'))
    $rec = [BitConverter]::ToUInt32($A, 8)
    $na = [BitConverter]::ToUInt32($A, 12)
    $nb = [BitConverter]::ToUInt32($B, 12)
    $first = -1
    for ($i = 0; $i -lt [Math]::Min($na, $nb); $i++) {
        $frame = [BitConverter]::ToUInt32($A, 16 + $i * $rec)
        if ($frame -gt 400) { break }
        $diff = $false
        for ($k = 0; $k -lt $rec; $k++) {
            if ($A[16 + $i * $rec + $k] -ne $B[16 + $i * $rec + $k]) { $diff = $true; break }
        }
        if ($diff) { $first = $frame; break }
    }
    if ($first -ge 0) { Fail ("the frozen run differs from the plain run at frame $first, before the key") }
    else { Ok 'the frozen run is the plain run on every frame record up to the freeze frame' }

    if ($plainLog -match 'time (un)?frozen') { Fail 'a plain measurement run froze the clock' }
    $plainEnd = [System.IO.File]::ReadAllBytes((Join-Path $plainDir 'end.ram'))
    if ((U16 $plainEnd $GATE) -ne 0) {
        Fail ("a run with no key left the engine's clock pause at {0}" -f (U16 $plainEnd $GATE))
    } else { Ok 'a run without the key never writes the clock pause and the clock keeps running' }
} catch { Fail $_.Exception.Message }

# --- 5. the key itself, in a window ----------------------------------------------------------
# The seam above raises the chord's input_state; this leg presses the keys: left Ctrl and T are
# posted to the game's window while the map is up, so the platform's own WM_KEYDOWN mapping and the
# map condition (`g_mapFrame`, the test the pointer uses) are what the log proves. Where no desktop
# gives the game a window, the leg is a SKIP, as the other window-sampling checks are.
$src = @'
using System;
using System.Runtime.InteropServices;
public static class TimeFreezeKeys
{
    [DllImport("user32.dll", CharSet = CharSet.Unicode)]
    public static extern IntPtr FindWindow(string cls, string title);
    [DllImport("user32.dll")]
    public static extern bool PostMessage(IntPtr h, uint msg, IntPtr w, IntPtr l);
}
'@
try {
    if (-not ('TimeFreezeKeys' -as [type])) { Add-Type -TypeDefinition $src }
    $winMouse = Join-Path $Work 'window.mouse'
    "0 150 100 0" | Set-Content -Encoding ascii $winMouse
    $winLog = Join-Path $Work 'window.txt'
    $winRam = Join-Path $Work 'window.ram'
    $proc = Start-Process -FilePath (Resolve-Path $Exe).Path -PassThru -RedirectStandardOutput $winLog `
            -ArgumentList (@($Image, "$BUDGET", '--data', $DataDir, '--window') + $MAPCALL +
                           @('--mouse', $winMouse, '--ramstop', $winRam))

    $h = [IntPtr]::Zero
    for ($i = 0; $i -lt 100 -and $h -eq [IntPtr]::Zero -and -not $proc.HasExited; $i++) {
        Start-Sleep -Milliseconds 200
        $h = [TimeFreezeKeys]::FindWindow('ICFTD', 'It Came from the Desert (recomp)')
    }

    if ($h -eq [IntPtr]::Zero) {
        Ok 'the key itself is not measured (no desktop gave the game a window) - SKIP'
        try { $proc.Kill() } catch { }
    } else {
        # Wait for the injected map entry (the run says so in its log), then a moment for the map's
        # first update: the chord is ignored on any other screen, which the same leg shows below.
        for ($i = 0; $i -lt 100 -and $proc.HasExited -eq $false; $i++) {
            Start-Sleep -Milliseconds 100
            if ((Get-Content $winLog -Raw) -match 'returns into the program at 0083B8') { break }
        }
        Start-Sleep -Milliseconds 1500

        function Press-Chord {
            [void][TimeFreezeKeys]::PostMessage($h, 0x100, [IntPtr]0x11, [IntPtr]0)         # Ctrl down
            [void][TimeFreezeKeys]::PostMessage($h, 0x100, [IntPtr]0x54, [IntPtr]1)         # T down
            Start-Sleep -Milliseconds 200
            [void][TimeFreezeKeys]::PostMessage($h, 0x101, [IntPtr]0x54, [IntPtr]0xC0000001) # T up
            [void][TimeFreezeKeys]::PostMessage($h, 0x101, [IntPtr]0x11, [IntPtr]0xC0000001) # Ctrl up
        }
        Press-Chord
        $froze = $false
        for ($i = 0; $i -lt 50 -and -not $froze; $i++) {
            Start-Sleep -Milliseconds 100
            $froze = (Get-Content $winLog -Raw) -match 'time frozen at frame \d+, OSD "Time frozen"'
        }
        Start-Sleep -Milliseconds 500
        Press-Chord
        $thawed = $false
        for ($i = 0; $i -lt 50 -and -not $thawed; $i++) {
            Start-Sleep -Milliseconds 100
            $thawed = (Get-Content $winLog -Raw) -match 'time unfrozen at frame \d+, OSD "Time unfrozen"'
        }
        [void][TimeFreezeKeys]::PostMessage($h, 0x10, [IntPtr]0, [IntPtr]0)                 # WM_CLOSE
        if (-not $proc.WaitForExit(30000)) { Fail 'the windowed run did not close'; try { $proc.Kill() } catch { } }

        $winText = Get-Content $winLog -Raw
        if ($froze -and $thawed) {
            Ok 'left Ctrl+T typed in the window freezes and unfreezes, with both OSD lines'
            if (-not (Test-Path $winRam)) { Fail 'the windowed run wrote no RAM at exit' }
            elseif ((U16 ([System.IO.File]::ReadAllBytes($winRam)) $GATE) -ne 0) {
                Fail 'the windowed run left the clock paused after unfreezing'
            } else { Ok 'the windowed game ends with the clock running again (pause gate 0)' }
        } elseif (-not $froze) {
            Fail 'Ctrl+T typed in the game window did not freeze the clock'
        } else {
            Fail 'the second Ctrl+T typed in the game window did not unfreeze the clock'
        }
    }
} catch { Fail $_.Exception.Message }

# --- 6. a game saved while frozen loads running ------------------------------------------------
# The save is a raw image of 0x021E18..0x021E90 and 0x02686C..0x029890 (docs\savegames.md), and the
# first range holds the pause gate - so a save written while the clock was frozen carries the port's
# pause word. A loaded game must not inherit it. Fixture: the first save on disk, copied into slot 10
# with that word set, so the file is exactly "a save made while frozen"; the run then has to end
# with the gate clear and the clock past the minute the file holds.
$slotDir = Join-Path (Split-Path -Parent (Resolve-Path $Exe)) 'saves\slot10'
$backup = Join-Path $Work 'slot10-backup'
if (Test-Path $backup) { Remove-Item $backup -Recurse -Force }
if (Test-Path $slotDir) { Copy-Item $slotDir $backup -Recurse -Force }

$source = Get-ChildItem (Join-Path (Split-Path -Parent (Resolve-Path $Exe)) 'saves') -Directory `
          -ErrorAction SilentlyContinue |
          Where-Object { $_.Name -ne 'slot10' -and (Test-Path (Join-Path $_.FullName 'ICFTD')) } |
          Sort-Object Name | Select-Object -First 1
if ($source -eq $null) {
    Ok 'a loaded game is not measured (no save on disk to make the fixture from) - SKIP'
} else {
    try {
        if (Test-Path $slotDir) { Remove-Item $slotDir -Recurse -Force }
        New-Item -ItemType Directory -Force -Path $slotDir | Out-Null
        $file = [System.IO.File]::ReadAllBytes((Join-Path $source.FullName 'ICFTD'))
        # File offset 0 is image 0x021E18, so the pause word DAT_00021e26 is at 0x0E (big endian).
        $file[0x0E] = 0x00
        $file[0x0F] = 0x01
        [System.IO.File]::WriteAllBytes((Join-Path $slotDir 'ICFTD'), $file)

        $ram = Join-Path $Work 'loaded.ram'
        Run 'loaded' (@('--titlekey', '11', '--slot', '10', '--ramstop', $ram)) | Out-Null
        $end = [System.IO.File]::ReadAllBytes($ram)
        # The save's own date and time: range 1 starts at image 0x021E18 (file offset 0), range 2 at
        # 0x02686C (file offset 120), where the printed hour DAT_00026870 is two bytes in.
        $fileMin = (14 - (File16 $file 0x06)) * 1440 + (File16 $file 0x0A) * 60 + (File16 $file 0x0C)
        $filePrinted = File16 $file 124
        $endMin = (14 - (U16 $end $DAY)) * 1440 + (U16 $end $HOUR) * 60 + (U16 $end $MIN)
        if ((U16 $end $GATE) -ne 0) {
            Fail ("a save carrying the frozen pause word loads paused (gate {0} at the end)" -f
                  (U16 $end $GATE))
        } elseif ($endMin -eq $fileMin -and (U16 $end $DISP_H) -eq $filePrinted) {
            Fail ("the loaded game's clock did not run: the save holds {0} (printed {1}), the run ended at {2} (printed {3})" -f
                  $fileMin, $filePrinted, $endMin, (U16 $end $DISP_H))
        } else {
            Ok ("a save carrying the frozen pause word loads running: {0} (printed {1}) -> {2} (printed {3}), gate 0" -f
                $fileMin, $filePrinted, $endMin, (U16 $end $DISP_H))
        }
    } catch { Fail $_.Exception.Message }
    finally {
        if (Test-Path $slotDir) { Remove-Item $slotDir -Recurse -Force }
        if (Test-Path $backup) { Copy-Item $backup $slotDir -Recurse -Force }
    }
}

if ($fail -ne 0) { Write-Output ("freeze: {0} check(s) failed" -f $fail); exit 1 }
Write-Output 'freeze: Ctrl+T holds the game clock on the map, a travel adds no time while it is held, and no run without the key changes'
exit 0
