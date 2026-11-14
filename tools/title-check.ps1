# The title screen's digit keys: each one must start its minigame from the title's hold point.
#
# This is port code with no counterpart in the original, so there is no state to diff it against.
# What is checked is that the title's own launch sequence reaches the engine's scene entry, that
# the scene loads its data and draws, and that a scene which ends by itself comes back to the title.
# It is a regression check for the two things that broke while the feature was written:
#   - an injected call's arguments are never popped in a caller that no longer exists, so the
#     routine that resumes at the hold point returns into the first argument: the intro's
#     `unlk/rts` at 0x990A went into &"Overhead2.tiny" (0x27B84) and ran off through data.
#   - a translated stream continues through an `rts` (rc_ret only sets rc_returned), so without
#     rc_breakPc still armed the scene's return fell straight into the intro's setup instead of
#     back into the title.
#
# --titlekey <n> is the dev seam that presses the key (0 = start the game, 1..4 = the scenes); it
# also ends the run when the title comes back, because a scripted run has no keyboard. It takes the
# choice after one menu frame, because that is what a real press does - and because key 0 is the
# path where the first menu frame's CIA tick runs the score player (see the note on the mirror).
#
#   powershell -ExecutionPolicy Bypass -File tools\title-check.ps1
param(
    [string]$Exe = 'bin\win32\icftd-recomp.exe',
    [string]$DataDir = 'export',
    [string]$Image = 'export\code\dshell4k\dshell.img',
    [string]$LogDir = 'out\title-check'
)

$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
Set-Location $root

if (-not (Test-Path $Exe))    { Write-Output "title: SKIP (no $Exe - build it with tools\build-host.ps1)"; exit 0 }
if (-not (Test-Path $Image))  { Write-Output "title: SKIP (no $Image - run tools\extract.ps1)"; exit 0 }
New-Item -ItemType Directory -Force -Path $LogDir | Out-Null

# `opens` are the scene's own data, loaded after the key: they prove the engine's entry ran, not
# just that the title went away. `returns` means the scene ends by itself within the budget, so the
# run must show the title's score starting a second time (and stopping, scripted, at the hold pc).
$cases = @(
    @{ key = 0; name = 'start the game';  insns = 12000000; rasters = 1800; returns = $false
       start = 'title: starting the game \(frame \d+\)'
       opens = @('voice1', 'Desert1:OPEN', 'Desert1:sfx/o.rff') },
    @{ key = 1; name = 'Fight';           insns =  8000000; rasters = 1500; returns = $true
       start = 'title: Fight at frame \d+'
       opens = @('Desert3:FIGHT', 'hurt1', 'stab1') },
    @{ key = 2; name = 'Take a Flight';   insns =  3000000; rasters =  200; returns = $false
       start = 'title: Take a Flight at frame \d+'
       opens = @('Desert3:WANI') },
    @{ key = 3; name = 'Fire Game';       insns =  5000000; rasters =  350; returns = $false
       start = 'title: Fire Game at frame \d+'
       opens = @('Desert2:PEOPLE', 'Desert3:FIRE', 'Desert3:sfx/fire') },
    @{ key = 4; name = 'Escape Hospital'; insns =  4000000; rasters =  250; returns = $false
       start = 'title: Escape Hospital at frame \d+'
       opens = @('Desert3:HOSP', 'screeeems') }
)

$fail = 0
foreach ($c in $cases) {
    $log = Join-Path $LogDir ("key{0}.txt" -f $c.key)
    $out = & $Exe $Image $c.insns --titlekey $c.key --data $DataDir 2>&1 | Out-String
    Set-Content -Path $log -Value $out
    $problems = @()

    if ($out -notmatch 'title: the map screen''s score starts under the title') {
        $problems += 'the title never engaged (no map score under it)'
    }
    if ($out -notmatch $c.start) {
        $problems += ("key {0} did not start {1}" -f $c.key, $c.name)
    }
    foreach ($o in $c.opens) {
        if ($out -notmatch ('open "{0}"' -f [regex]::Escape($o))) {
            $problems += ("the scene never loaded {0}" -f $o)
        }
    }
    if ($out -match '(\d+) raster\(s\) presented') {
        $n = [int]$Matches[1]
        if ($n -lt $c.rasters) { $problems += ("only {0} raster(s) presented (expected >= {1})" -f $n, $c.rasters) }
    } else {
        $problems += 'the run presented no raster at all'
    }
    if ($out -match 'stack pointer went bad')             { $problems += 'the emulated stack pointer went bad' }
    if ($out -match 'accesses outside the RAM block')     { $problems += 'the program left the RAM block (ran off through data)' }
    if ($out -match 'PC ran below the image')             { $problems += 'the program jumped outside its image (a return address was wrong)' }
    # "call to 000000 has no code" is not a fault here: the score player's 0-byte voice object makes
    # that call in the original's own data (docs\next-session.md, 2026-11-12), title or no title.

    if ($c.returns) {
        $again = ([regex]::Matches($out, 'title: the map screen''s score starts under the title')).Count
        if ($again -lt 2) { $problems += 'the scene ended but the title did not come back' }
        if ($out -notmatch 'stopped at 0xd870') { $problems += 'the run did not end on the title''s hold point' }
    }

    if ($problems.Count -ne 0) {
        foreach ($p in $problems) { Write-Output ("title: {0,-15} FAIL - {1}" -f $c.name, $p) }
        $fail++
    } else {
        Write-Output ("title: {0,-15} ok   - key {1} starts it from the title{2}" -f $c.name, $c.key,
            $(if ($c.returns) { ' and it comes back' } else { '' }))
    }
}

if ($fail -ne 0) { Write-Output ("title: {0} check(s) failed" -f $fail); exit 1 }
Write-Output 'title: all keys start their scene from the title'
exit 0
