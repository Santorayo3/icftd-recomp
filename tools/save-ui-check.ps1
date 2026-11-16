# The map's save-slot picker, measured on its own terms.
#
# A port feature: the original has one save file and no slot UI, so there is nothing to diff it
# against. What is checked is what the feature claims:
#
#   * a click on the SAVE GAME mark opens the list (the log edge), and while it is up the map's
#     own words do not move even though the pointer does - no scroll and no destination;
#   * Back closes the list and the map's cursor follows the pointer again;
#   * a click on a slot makes that slot active and runs the map's save path: the engine's own
#     `FUN_0001042a` then writes 12 444 bytes, and the file appears under `saves\slot10` (the slot
#     the script chose, not the one the command line started on);
#   * a measurement run (no --mouse, so the seam is never installed) never logs the picker.
#
# The recording is game-derived and not in git, so the step SKIPs without it. The engine's save
# prompt asks YES/NO, and YES is the stick pushed up (FUN_000101e4), so the save run holds up and
# then clicks. Slot 10's directory is backed up and restored, so a developer's own save survives.
#
#   powershell -ExecutionPolicy Bypass -File tools\save-ui-check.ps1
param(
    [string]$Exe = 'bin\win32\icftd-recomp.exe',
    [string]$Work = 'out\save-ui-check'
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
Set-Location $root

$mapInput = 'ref\inputs\map-pointer.txt'
if (-not (Test-Path $Exe)) { Write-Output "save-ui: SKIP (no $Exe - build with tools\build-host.ps1)"; exit 0 }
if (-not (Test-Path $mapInput)) { Write-Output "save-ui: SKIP (no $mapInput)"; exit 0 }

New-Item -ItemType Directory -Force -Path $Work | Out-Null
Get-ChildItem $Work -Recurse -File -ErrorAction SilentlyContinue | Remove-Item -Force

$fail = 0
function Fail([string]$text) { Write-Output "save-ui: FAIL - $text"; $script:fail++ }
function Ok([string]$text) { Write-Output "save-ui: $text" }

# The map words the picker must leave alone while it is up (image loaded at 0x4000).
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
    return [pscustomobject]@{
        curX = (& $s32 ($base + 0x28A54)); curY = (& $s32 ($base + 0x28A58))
        orgX = (& $s32 ($base + 0x28A4C)); orgY = (& $s32 ($base + 0x28A50))
    }
}

# The map starts at frame ~1202; the pointer at 290,177 is inside the mark's 259..317 x 170..185.
@'
1200 290 177 0
1300 290 177 1
1320 290 177 0
1400 20 20 0
'@ | Set-Content -Encoding ascii "$Work\open.txt"

$out = (& $Exe 15000000 --input $mapInput --mouse "$Work\open.txt" --savelog `
        --state "$Work\open-s" --ram 1310,1500 2>&1 | Out-String)
Set-Content -Path "$Work\open.log" -Value $out
if ($out -notmatch 'save: slot picker opened') {
    Fail 'a click on the mark did not open the picker'
} else { Ok 'a click on the mark opens the slot picker' }
$a = MapState "$Work\open-s.1310.ram"
$b = MapState "$Work\open-s.1500.ram"
if ($a -eq $null -or $b -eq $null) { Fail 'the picker run wrote no RAM dumps' }
elseif ($a.curX -ne $b.curX -or $a.curY -ne $b.curY -or $a.orgX -ne $b.orgX -or $a.orgY -ne $b.orgY) {
    Fail ("the pointer moved the map while the picker was up: {0},{1} @ {2},{3} -> {4},{5} @ {6},{7}" -f
          $a.curX, $a.curY, $a.orgX, $a.orgY, $b.curX, $b.curY, $b.orgX, $b.orgY)
} else { Ok 'the map cursor and picture stay put while the picker is up' }

# Back closes the list; the map resumes and follows the pointer to 40,40 (plus the 0x11/0x12 hot spot).
@'
1200 290 177 0
1300 290 177 1
1320 290 177 0
1500 160 150 1
1520 160 150 0
1700 40 40 0
'@ | Set-Content -Encoding ascii "$Work\back.txt"
$out = (& $Exe 17000000 --input $mapInput --mouse "$Work\back.txt" --savelog `
        --state "$Work\back-s" --ram 1450,1800 2>&1 | Out-String)
Set-Content -Path "$Work\back.log" -Value $out
if ($out -notmatch 'save: slot picker closed') { Fail 'Back did not close the picker' }
else { Ok 'Back closes the picker' }
$s = MapState "$Work\back-s.1800.ram"
if ($s -eq $null) { Fail 'the Back run wrote no RAM dump' }
elseif ($s.curX -ne 57 -or $s.curY -ne 58) {
    Fail ("after Back the cursor is {0},{1}, not the pointer's 57,58" -f $s.curX, $s.curY)
} else { Ok 'the map follows the pointer again after Back' }

# Choosing Slot 10 (the tenth 8 px row) makes it active and the engine's save writes 12 444 bytes.
$slotDir = Join-Path (Split-Path -Parent (Resolve-Path $Exe)) 'saves\slot10'
$slotSave = Join-Path $slotDir 'ICFTD'
$backup = Join-Path $Work 'slot10-backup'
if (Test-Path $backup) { Remove-Item $backup -Recurse -Force }
if (Test-Path $slotDir) { Copy-Item $slotDir $backup -Recurse -Force }
if (Test-Path $slotDir) { Remove-Item $slotDir -Recurse -Force }

try {
    @'
1200 290 177 0
1300 290 177 1
1320 290 177 0
1400 160 129 1
1440 160 129 0
2400 160 100 1
2450 160 100 0
'@ | Set-Content -Encoding ascii "$Work\slot.txt"
    @(Get-Content $mapInput) + @('1500 0 0x0100', '2300 0 0x0000') |
        Set-Content -Encoding ascii "$Work\slot-input.txt"
    $out = (& $Exe 30000000 --input "$Work\slot-input.txt" --mouse "$Work\slot.txt" --savelog 2>&1 | Out-String)
    Set-Content -Path "$Work\slot.log" -Value $out
    if ($out -notmatch 'save: save slot 10 selected') { Fail 'a click on Slot 10 did not select it' }
    elseif ($out -notmatch 'save: writing slot 10') { Fail 'the chosen slot did not run the save path' }
    else { Ok 'a click on Slot 10 selects it and runs the map save path' }

    if (-not (Test-Path $slotSave)) { Fail "no save appeared at $slotSave" }
    else {
        $len = (Get-Item $slotSave).Length
        if ($len -ne 12444) { Fail ("the save is {0} bytes, not 12444" -f $len) }
        else { Ok 'the engine wrote its 12 444-byte save into the chosen slot' }
    }
} finally {
    if (Test-Path $slotDir) { Remove-Item $slotDir -Recurse -Force }
    if (Test-Path $backup) { Copy-Item $backup $slotDir -Recurse -Force }
}

# A measurement run never installs the seam, so the picker never appears.
$out = (& $Exe 15000000 --input $mapInput --savelog 2>&1 | Out-String)
if ($out -match 'save: slot picker opened|save: writing slot') {
    Fail 'a measurement run logged the picker (the seam is not inert)'
} else { Ok 'a measurement run never shows the picker' }

if ($fail -ne 0) { Write-Output ("save-ui: {0} check(s) failed" -f $fail); exit 1 }
Write-Output 'save-ui: the list blocks the map, Back restores it, and a slot saves'
exit 0
