# The "Loading" line during the engine's long screen transitions, measured on its own terms.
#
# This is a port feature: the original has no overlay, so there is nothing to diff it against. What
# is checked is what the feature claims - the line is up while the engine's own resource loader is
# running (the bank opener, Sms_Load/Sms_Unpack and the LZ decruncher), and it is not up otherwise:
#
#   * the map -> location transition of ref\inputs\flight-crash-hospital-room.txt: the map leaves at
#     frame 1409, the loader runs to 1680 and the room appears at 1683, so the line must come up
#     inside that window and go down before the flight starts;
#   * the room -> map transition of ref\inputs\map-pointer.txt: the map's picture bank is unpacked
#     while the old room picture is still up (frames 1127..1200), then the map appears at 1203;
#   * a measurement run (no --mouse) never arms the seam: no line at all, and its RAM dump is
#     byte-identical to the armed run's - the feature writes no machine state.
#
# The seam is armed headlessly with --mouse (the same dev seam tools\mouse-check.ps1 uses; an empty
# script arms the port without moving the pointer). The recordings are game-derived and not in git,
# so the step SKIPs without them.
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
if (-not (Test-Path $flightInput)) { Write-Output "load: SKIP (no $flightInput)"; exit 0 }
if (-not (Test-Path $mapInput))    { Write-Output "load: SKIP (no $mapInput)"; exit 0 }

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

# --- the map -> location transition ---------------------------------------------------------
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

# --- the room -> map transition -------------------------------------------------------------
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

# --- the seam is inert in a measurement -----------------------------------------------------
$plain = (& $Exe 12500000 --input $flightInput --ramstop "$Work\plain" 2>&1 | Out-String)
$armed = (& $Exe 12500000 --input $flightInput --mouse "$Work\none.txt" --ramstop "$Work\armed" 2>&1 | Out-String)
Set-Content -Path "$Work\plain.txt" -Value $plain
if ($plain -match 'recomp: loading \(frame') {
    Fail 'a measurement run showed the line (the seam is not inert)'
} else {
    Ok 'a measurement run (no --mouse) never arms the seam'
}
if ((Test-Path "$Work\plain") -and (Test-Path "$Work\armed")) {
    $a = [System.IO.File]::ReadAllBytes((Resolve-Path "$Work\plain").Path)
    $b = [System.IO.File]::ReadAllBytes((Resolve-Path "$Work\armed").Path)
    $diff = 0
    if ($a.Length -ne $b.Length) { $diff = -1 }
    else { for ($i = 0; $i -lt $a.Length; $i++) { if ($a[$i] -ne $b[$i]) { $diff++ } } }
    if ($diff -ne 0) {
        Fail ("the armed run's RAM differs from the plain run's ({0} byte(s))" -f $diff)
    } else {
        Ok 'the armed run is byte-identical to the plain run over the whole RAM'
    }
} else {
    Fail 'the RAM dumps were not written'
}

if ($fail -ne 0) { Write-Output ("load: {0} check(s) failed" -f $fail); exit 1 }
Write-Output 'load: the line covers the long loads and nothing else'
exit 0
