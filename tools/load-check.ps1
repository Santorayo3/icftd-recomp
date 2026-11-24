# The "Loading" line during the engine's long screen transitions, and the loader's fast-forward,
# measured on their own terms.
#
# These are port features: the original has no overlay and no fast-forward, so there is nothing to
# diff them against. What is checked is what each feature claims -
#
#   * the line is up while the engine's own resource loader is running (the bank opener,
#     Sms_Load/Sms_Unpack and the LZ decruncher), and it is not up otherwise:
#       - the map -> location transition of ref\inputs\flight-crash-hospital-room.txt: the map
#         leaves at frame 1409, the loader runs to 1680 and the room appears at 1683, so the line
#         must come up inside that window and go down before the flight starts;
#       - the room -> map transition of ref\inputs\map-pointer.txt: the map's picture bank is
#         unpacked while the old room picture is still up (frames 1127..1200), then the map appears
#         at 1203;
#       - a measurement run (no --mouse) never arms the seam: no line at all, and its RAM dump is
#         byte-identical to the armed run's - the feature writes no machine state;
#   * the loader's fast-forward shortens a transition's wall time without moving the machine: a
#     windowed --titlekey 12 run of the boot load (frames 42..142) takes clearly less than the
#     182 frames' 20 ms each, and its RAM at frame 182 matches the unpaced --mouse run's outside
#     the dead-stack window below the stack pointer (the known artifact, 0x17F000..0x17FFFF).
#
# The seam is armed headlessly with --mouse (the same dev seam tools\mouse-check.ps1 uses; an empty
# script arms the port without moving the pointer). The recordings are game-derived and not in git,
# so those cases SKIP without them; the fast-forward case needs a desktop (it measures a windowed
# run) and SKIPs where a window cannot be opened.
#
#   powershell -ExecutionPolicy Bypass -File tools\load-check.ps1
param(
    [string]$Exe = 'bin\win32\icftd-recomp.exe',
    [string]$Work = 'out\load-check'
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
Set-Location $root

$flightInput = 'ref\inputs\flight-crash-hospital-room.txt'
$mapInput = 'ref\inputs\map-pointer.txt'
if (-not (Test-Path $Exe))  { Write-Output "load: SKIP (no $Exe - build with tools\build-host.ps1)"; exit 0 }

New-Item -ItemType Directory -Force -Path $Work | Out-Null
Get-ChildItem $Work -Recurse -File -ErrorAction SilentlyContinue | Remove-Item -Force
'# arms the port seams without moving the pointer' | Set-Content -Encoding ascii "$Work\none.txt"

$fail = 0
function Fail([string]$text) { Write-Output "load: FAIL - $text"; $script:fail++ }
function Ok([string]$text) { Write-Output "load: $text" }

# The edges the front end logs: "recomp: loading (frame N)" / "recomp: loading done (frame N)".
function Episodes([string]$out)
{
    $start = $null
    foreach ($m in [regex]::Matches($out, '(?m)^recomp: loading( done)? \(frame (\d+)\)'))
    {
        $f = [int]$m.Groups[2].Value
        if (-not $m.Groups[1].Success) { $start = $f }
        elseif ($start -ne $null) { [pscustomobject]@{ Start = $start; End = $f }; $start = $null }
    }
}

# Bytes that differ between two RAM dumps. -Stack leaves out the dead-stack window below the stack
# pointer (0x17F000..0x17FFFF), where the engine leaves stale frames and two differently-shaped runs
# differ by a byte (docs\port-features.md, the crosshair's known artifact).
function RamDiff([string]$aPath, [string]$bPath, [switch]$Stack)
{
    $a = [System.IO.File]::ReadAllBytes((Resolve-Path $aPath).Path)
    $b = [System.IO.File]::ReadAllBytes((Resolve-Path $bPath).Path)
    if ($a.Length -ne $b.Length) { return -1 }
    $n = 0
    for ($i = 0; $i -lt $a.Length; $i++) {
        if ($a[$i] -ne $b[$i]) {
            if (-not $Stack -or $i -lt 0x17F000 -or $i -gt 0x17FFFF) { $n++ }
        }
    }
    return $n
}

# --- the map -> location transition ---------------------------------------------------------
if (Test-Path $flightInput) {
    $out = (& $Exe 12500000 --input $flightInput --mouse "$Work\none.txt" 2>&1 | Out-String)
    Set-Content -Path "$Work\flight.txt" -Value $out
    $eps = @(Episodes $out)
    $loc = $eps | Where-Object { $_.Start -ge 1400 -and $_.Start -le 1460 }
    if ($loc -eq $null) {
        Fail 'the location load never showed the line (no "loading" edge in frames 1400..1460)'
    } elseif ($loc.End -lt 1670 -or $loc.End -gt 1700) {
        Fail ("the line left at frame {0}, not at the end of the load (1670..1700)" -f $loc.End)
    } else {
        Ok ("map -> location: line up at frame {0}, down at {1} (the room appears at 1683)" -f $loc.Start, $loc.End)
    }
    if (($eps | Where-Object { $_.Start -ge 1700 }) -ne $null) {
        Fail 'the line came up again after the transition, with no load behind it'
    } else {
        Ok 'no line during the flight and the hospital room (frames 1700+)'
    }
} else {
    Ok "map -> location: SKIP (no $flightInput)"
}

# --- the room -> map transition -------------------------------------------------------------
if (Test-Path $mapInput) {
    $out = (& $Exe 12500000 --input $mapInput --mouse "$Work\none.txt" 2>&1 | Out-String)
    Set-Content -Path "$Work\map.txt" -Value $out
    $eps = @(Episodes $out)
    $map = $eps | Where-Object { $_.Start -ge 1120 -and $_.Start -le 1180 }
    if ($map -eq $null) {
        Fail 'the map load never showed the line (no "loading" edge in frames 1120..1180)'
    } elseif ($map.End -lt 1195 -or $map.End -gt 1220) {
        Fail ("the line left at frame {0}, not at the end of the map load (1195..1220)" -f $map.End)
    } else {
        Ok ("room -> map: line up at frame {0}, down at {1} (the map appears at 1203)" -f $map.Start, $map.End)
    }
} else {
    Ok "room -> map: SKIP (no $mapInput)"
}

# --- the seam is inert in a measurement -----------------------------------------------------
if (Test-Path $flightInput) {
    $plain = (& $Exe 12500000 --input $flightInput --ramstop "$Work\plain" 2>&1 | Out-String)
    $armed = (& $Exe 12500000 --input $flightInput --mouse "$Work\none.txt" --ramstop "$Work\armed" 2>&1 | Out-String)
    Set-Content -Path "$Work\plain.txt" -Value $plain
    if ($plain -match 'recomp: loading \(frame') {
        Fail 'a measurement run showed the line (the seam is not inert)'
    } else {
        Ok 'a measurement run (no --mouse) never arms the seam'
    }
    if ((Test-Path "$Work\plain") -and (Test-Path "$Work\armed")) {
        $diff = RamDiff "$Work\plain" "$Work\armed"
        if ($diff -ne 0) {
            Fail ("the armed run's RAM differs from the plain run's ({0} byte(s))" -f $diff)
        } else {
            Ok 'the armed run is byte-identical to the plain run over the whole RAM'
        }
    } else {
        Fail 'the RAM dumps were not written'
    }
} else {
    Ok "measurement inertness: SKIP (no $flightInput)"
}

# --- the loader's fast-forward --------------------------------------------------------------
# --titlekey 12 starts the game from the menu and the engine's boot load runs at frames 42..142;
# --stopat 1,600,000 ends on frame 182, just after it. 182 frames at the Amiga's 20 ms are 3.64 s,
# and only the load's frames are allowed to be shorter. The windowed run is what the player gets
# (the fast-forward is a platform-pacing switch, so it needs the window); the --mouse run is the
# reference, never paced and never fast-forwarded.
$stopAt = 1600000
$loadEdges = 'recomp: loading \(frame 42\)[\s\S]*recomp: loading done \(frame 142\)'
$sw = [System.Diagnostics.Stopwatch]::StartNew()
$win = (& $Exe $stopAt --titlekey 12 --window --ramstop "$Work\fast" 2>&1 | Out-String)
$sw.Stop()
Set-Content -Path "$Work\fast.txt" -Value $win
if ($win -match 'cannot open a window') {
    Ok 'fast-forward: SKIP (no desktop to open a window on)'
} else {
    if ($win -notmatch $loadEdges) {
        Fail 'the windowed boot load did not log the line (frames 42..142)'
    } else {
        Ok 'fast-forward: the windowed run still logs the boot load (42..142)'
    }
    # 182 frames * 20 ms = 3,640 ms. The load is 100 of them; with the fast-forward the whole span
    # must be well under the paced time, with headroom for window creation and a slow host.
    if ($sw.ElapsedMilliseconds -ge 2900) {
        Fail ("the windowed run took {0} ms for 182 frames - the loader is not fast-forwarding (paced would be 3640 ms)" -f $sw.ElapsedMilliseconds)
    } else {
        Ok ("fast-forward: frames 0..182 took {0} ms instead of 3640 ms" -f $sw.ElapsedMilliseconds)
    }
    $ref = (& $Exe $stopAt --titlekey 12 --mouse "$Work\none.txt" --ramstop "$Work\ref" 2>&1 | Out-String)
    if ((Test-Path "$Work\fast") -and (Test-Path "$Work\ref")) {
        $diff = RamDiff "$Work\fast" "$Work\ref" -Stack
        if ($diff -ne 0) {
            Fail ("the fast-forwarded run's RAM differs from the unpaced run's outside the dead stack ({0} byte(s))" -f $diff)
        } else {
            $all = RamDiff "$Work\fast" "$Work\ref"
            Ok ("fast-forward: machine state at frame 182 is the unpaced run's (0 byte(s) outside 0x17F000..0x17FFFF, {0} dead-stack byte(s))" -f $all)
        }
    } else {
        Fail 'the fast-forward RAM dumps were not written'
    }
}

if ($fail -ne 0) { Write-Output ("load: {0} check(s) failed" -f $fail); exit 1 }
Write-Output 'load: the line covers the long loads, and the loader runs at host speed'
exit 0
