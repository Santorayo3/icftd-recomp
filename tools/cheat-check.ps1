# The Ctrl+W minigame cheat: a port feature, so there is no oracle path to diff against. What it
# claims is a machine state, and that is what this check reads.
#
# For each of the seven minigames the title starts, a played run is given the Ctrl+W request while
# the scene is up (--cheat <frame> feeds the same input_state the platform reports for the chord),
# and the words the scene's own success path writes must be there afterwards:
#
#   Fight            DAT_0002991e = 1, DAT_000230f6 = 1  (the update's "fight over" and its result)
#   Take a Flight    DAT_0002991e = 1, DAT_0002a552 = 1, DAT_0002a544 = 1
#                    (FUN_00017b9c's landing at the nest, 0x17c78)
#   Fire Game        DAT_0002991e = 1, DAT_00029cc0 = 1  (no fire left; FUN_0000b7b2's flag)
#   Escape Hospital  DAT_0002991e = 1, DAT_0002a170 = 8  (FUN_0001819a's own loop exit)
#   Chicken Race     DAT_0002bcd4 = 1, DAT_0002bcd0 = 1  (Ice swerved: the narration's win)
#   Underground      DAT_0002991e = 1, DAT_0002a170 = 8  (FUN_0000bfca's own loop exit)
#   Giant Ant        DAT_0002991e = 1, DAT_00029cc0 = 1  (FUN_00007934's exit and success)
#
# The runs go through --titlekey <n>, so they start each scene the way a player does, and --ramstop
# writes the RAM the run ends on. The scenes that return come back to the title and end there; the
# chicken race's win narration waits for /FIRE, and the flight's landing continues into the nest, so
# those two runs end at their instruction budget.
#
# The second claim is the invariant every port feature owes: a run with the seam installed but no
# key must not change the machine. The fight's documented preset is run twice (-with and without
# --cheat), and every frame record up to the request must be byte-identical. A plain measurement
# never installs the hook at all.
#
#   powershell -ExecutionPolicy Bypass -File tools\cheat-check.ps1
param(
    [string]$Exe = 'bin\win32\icftd-recomp.exe',
    [string]$DataDir = 'export',
    [string]$Image = 'export\code\dshell4k\dshell.img',
    [string]$Work = 'out\cheat-check'
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
Set-Location $root

if (-not (Test-Path $Exe))   { Write-Output "cheat: SKIP (no $Exe - build it with tools\build-host.ps1)"; exit 0 }
if (-not (Test-Path $Image)) { Write-Output "cheat: SKIP (no $Image - run tools\extract.ps1)"; exit 0 }

New-Item -ItemType Directory -Force -Path $Work | Out-Null

$BASE = 0x4000                       # the image loads at RC_BASE (tools\build-host.ps1)
function U16([byte[]]$b, [int]$a) { return [int](($b[$BASE + $a] -shl 8) -bor $b[$BASE + $a + 1]) }

# key = --titlekey choice, cheat = --cheat frame, budget = instruction count. The request is made
# at a frame where the scene's update has been running for a while; the request is only held for
# three frames (CHEAT_REQUEST_FRAMES), so it is not a poke that lingers.
$cases = @(
    @{ key = 1; name = 'Fight';           cheat =  600; budget =  6000000
       words = @(@(0x2991E, 1, 'DAT_0002991e'), @(0x230F6, 1, 'DAT_000230f6')) },
    @{ key = 2; name = 'Take a Flight';   cheat =  600; budget = 12000000
       words = @(@(0x2991E, 1, 'DAT_0002991e'), @(0x2A552, 1, 'DAT_0002a552'),
                 @(0x2A544, 1, 'DAT_0002a544')) },
    @{ key = 3; name = 'Fire Game';       cheat =  600; budget =  6000000
       words = @(@(0x2991E, 1, 'DAT_0002991e'), @(0x29CC0, 1, 'DAT_00029cc0')) },
    @{ key = 4; name = 'Escape Hospital'; cheat =  600; budget =  8000000
       words = @(@(0x2991E, 1, 'DAT_0002991e'), @(0x2A170, 8, 'DAT_0002a170')) },
    @{ key = 5; name = 'Chicken Race';    cheat =  600; budget =  8000000
       words = @(@(0x2BCD4, 1, 'DAT_0002bcd4'), @(0x2BCD0, 1, 'DAT_0002bcd0')) },
    @{ key = 6; name = 'Underground';     cheat =  600; budget =  8000000
       words = @(@(0x2991E, 1, 'DAT_0002991e'), @(0x2A170, 8, 'DAT_0002a170')) },
    @{ key = 7; name = 'Giant Ant';       cheat =  600; budget =  8000000
       words = @(@(0x2991E, 1, 'DAT_0002991e'), @(0x29CC0, 1, 'DAT_00029cc0')) }
)

$fail = 0
function Fail([string]$t) { Write-Output "cheat: FAIL - $t"; $script:fail++ }
function Ok([string]$t)   { Write-Output "cheat: $t" }

foreach ($c in $cases) {
    $ram = Join-Path $Work ("{0}.ram" -f $c.key)
    $log = Join-Path $Work ("{0}.txt" -f $c.key)
    if (Test-Path $ram) { Remove-Item $ram -Force }
    $p = Start-Process -FilePath $Exe -NoNewWindow -Wait -PassThru -RedirectStandardError (Join-Path $Work 'err.txt') `
         -RedirectStandardOutput $log -ArgumentList @($Image, '--titlekey', $c.key, '--cheat', $c.cheat,
             '--ramstop', $ram, '--data', $DataDir, $c.budget)
    $out = Get-Content $log -Raw

    if ($p.ExitCode -ne 0) { Fail ("{0}: the run exited {1}" -f $c.name, $p.ExitCode); continue }
    if ($out -notmatch ('cheat: Ctrl\+W ends the {0} in its success state' -f [regex]::Escape($c.name))) {
        Fail ("{0}: the cheat never ended the scene" -f $c.name)
    }
    if (-not (Test-Path $ram)) { Fail ("{0}: no RAM dump" -f $c.name); continue }

    $b = [System.IO.File]::ReadAllBytes($ram)
    # A counter may be past its target by the time the scene tears down (the underground loop adds
    # one after the update that set 8), so the claim is "at least the success value".
    $bad = @()
    foreach ($w in $c.words) {
        $have = U16 $b $w[0]
        if ($have -lt $w[1]) { $bad += ("{0} = {1} (want >= {2})" -f $w[2], $have, $w[1]) }
    }
    if ($bad.Count -ne 0) { Fail ("{0}: {1}" -f $c.name, ($bad -join ', ')) }
    else {
        $list = @($c.words | ForEach-Object { "{0} = {1}" -f $_[2], $_[1] }) -join ', '
        Ok ("{0,-15} success state: {1}" -f $c.name, $list)
    }
}

# --- the seam is inert until the request ------------------------------------------------------
# The fight's documented preset, once with the seam installed and once without. Every frame record
# (frame, insns, registers, SR, PC, RAM hash, custom chips) before the request must be identical.
$plainDir = Join-Path $Work 'plain'
$armedDir = Join-Path $Work 'armed'
New-Item -ItemType Directory -Force -Path $plainDir, $armedDir | Out-Null
Get-ChildItem $plainDir, $armedDir -File -ErrorAction SilentlyContinue | Remove-Item -Force

$fightInsns = 12000000
$fightCheat = 2500
$p1 = Start-Process -FilePath $Exe -NoNewWindow -Wait -PassThru -RedirectStandardOutput (Join-Path $Work 'plain.txt') `
      -RedirectStandardError (Join-Path $Work 'err.txt') `
      -ArgumentList @($Image, '--call', '0xF46C:1513', '--data', $DataDir,
          '--state', (Join-Path $plainDir 's'), $fightInsns)
$p2 = Start-Process -FilePath $Exe -NoNewWindow -Wait -PassThru -RedirectStandardOutput (Join-Path $Work 'armed.txt') `
      -RedirectStandardError (Join-Path $Work 'err.txt') `
      -ArgumentList @($Image, '--call', '0xF46C:1513', '--data', $DataDir,
          '--state', (Join-Path $armedDir 's'), '--cheat', $fightCheat, $fightInsns)

if ($p1.ExitCode -ne 0 -or $p2.ExitCode -ne 0) {
    Fail 'the fight inertness runs did not finish'
} else {
    $A = [System.IO.File]::ReadAllBytes((Join-Path $plainDir 's.state'))
    $B = [System.IO.File]::ReadAllBytes((Join-Path $armedDir 's.state'))
    $rec = [BitConverter]::ToUInt32($A, 8)
    $na = [BitConverter]::ToUInt32($A, 12)
    $nb = [BitConverter]::ToUInt32($B, 12)
    $first = -1
    for ($i = 0; $i -lt [Math]::Min($na, $nb); $i++) {
        $frame = [BitConverter]::ToUInt32($A, 16 + $i * $rec)
        if ($frame -ge $fightCheat) { break }
        $diff = $false
        for ($k = 0; $k -lt $rec; $k++) {
            if ($A[16 + $i * $rec + $k] -ne $B[16 + $i * $rec + $k]) { $diff = $true; break }
        }
        if ($diff) { $first = $frame; break }
    }
    if ($first -ge 0) { Fail ("the armed run differs from the plain run at frame $first") }
    else { Ok ("the armed run is identical to the plain one on every frame record before the request") }

    $plainOut = Get-Content (Join-Path $Work 'plain.txt') -Raw
    if ($plainOut -match 'cheat: Ctrl\+W') { Fail 'a plain measurement run ended a minigame' }
    else { Ok 'a plain measurement run never ends a scene' }
}

if ($fail -ne 0) { Write-Output ("cheat: {0} check(s) failed" -f $fail); exit 1 }
Write-Output 'cheat: Ctrl+W ends every minigame in its own success state, and no run without it changes the machine'
exit 0

