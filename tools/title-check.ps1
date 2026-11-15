# The title screen's keys: each one must start its scene from the title's hold point, and Escape
# must restart the whole game (a fresh boot back to this menu).
#
# This is port code with no counterpart in the original, so there is no state to diff it against.
# What is checked is that the title's own launch sequence reaches the engine's scene entry, that
# the scene loads its data and draws, and that a scene which ends by itself comes back to the title.
# The three endings do not come back: their per-frame callback always answers 0, so the check looks
# for the word the key writes and the engine's own OPEN load instead.
#
# The Escape cases use --esc <frame>, a test seam that presses the key inside the run. A restart is
# a fresh boot on the same front end: the title's score starts a second time, the frame count starts
# over, and the run ends on the title's hold point (the scripted menu takes the "no such key" quit).
# It is a regression check for the two things that broke while the feature was written:
#   - an injected call's arguments are never popped in a caller that no longer exists, so the
#     routine that resumes at the hold point returns into the first argument: the intro's
#     `unlk/rts` at 0x990A went into &"Overhead2.tiny" (0x27B84) and ran off through data.
#   - a translated stream continues through an `rts` (rc_ret only sets rc_returned), so without
#     rc_breakPc still armed the scene's return fell straight into the intro's setup instead of
#     back into the title.
#
# --titlekey <n> is the dev seam that presses the key (0 = start the game, 1..7 = the scenes,
# 8..10 = the three endings); it also ends the run when the title comes back, because a scripted run
# has no keyboard. It takes the choice after one menu frame, because that is what a real press does -
# and because key 0 is the path where the first menu frame's CIA tick runs the score player (see the
# note on the mirror).
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
       opens = @('Desert3:HOSP', 'screeeems') },
    # The chicken race is the one scene that ends by itself but cannot come back without a fire
    # press: its closing narration waits for the button (FUN_0001CF48), and a scripted title run
    # has no keyboard. It is checked up to the point where the road, the dashboard and the sunset
    # bands are on the machine (the presenter's per-line palette), which is what the scene is.
    @{ key = 5; name = 'Chicken Race';    insns =  8000000; rasters = 1200; returns = $false
       start = 'title: Chicken Race at frame \d+'
       opens = @('Desert3:CHICK', 'carcrash', 'tankidle') }
    # The underground ant nest: FUN_0000BFCA opens Desert1:UNDER and spends ~150 frames loading
    # Tilz.pic and the first tunnel map before its loop starts, so the run must be long enough for
    # the scene to paint, not just to open the bank. It does come back on its own: with no input
    # the eight timed steps run out (measured: the scene returns to the title at frame ~670).
    @{ key = 6; name = 'Underground';     insns = 12000000; rasters =  300; returns = $true
       start = 'title: Underground at frame \d+'
       opens = @('Desert1:UNDER') }
    # The giant-ant fight is entered from a room, so its launch sets the three things the room would
    # have left behind (location 0x11, room 0x0c, the picture name "!B12") and installs the world
    # loop's clock VBI - without it the fire edge DAT_00026898 is never written and the pistol
    # cannot shoot. It ends by itself (measured: the fight runs ~1400 frames and returns).
    @{ key = 7; name = 'Giant Ant';       insns =  9000000; rasters = 1200; returns = $true
       start = 'title: Giant Ant at frame \d+'
       opens = @('Desert2:BACKS', 'Desert3:BIGANT', 'Desert3:sfx/ants', 'Desert3:sfx/gunshot') }
    # The three endings: W, C and T on the menu (keys 8..10 for this seam) write DAT_00022D68 and
    # enter FUN_0000A4D6, the world loop's dispatcher. Its per-frame callback always answers 0, so
    # an ending never returns and the title does not come back - the run must show the flag and the
    # engine's own OPEN load instead.
    @{ key = 8; name = 'Win Ending';      insns =  9000000; rasters =  300; returns = $false
       start = 'title: Win Ending at frame \d+'
       opens = @('Desert1:OPEN')
       ending = 1 },
    @{ key = 9; name = 'Nest Collapse';   insns =  9000000; rasters =  300; returns = $false
       start = 'title: Nest Collapse at frame \d+'
       opens = @('Desert1:OPEN')
       ending = 2 },
    @{ key = 10; name = 'Time Ran Out';   insns =  9000000; rasters =  300; returns = $false
       start = 'title: Time Ran Out at frame \d+'
       opens = @('Desert1:OPEN')
       ending = 3 }
    # Escape restarts the whole game (a port feature). Three starting points: an ending, the game's
    # own intro, and a minigame. The restart is a fresh boot, so the title's score starts a second
    # time and the run ends on the hold point with the frame count reset.
    @{ key = 8; name = 'Win Ending + Esc'; insns = 12000000; rasters = 1; returns = $false
       start = 'title: Win Ending at frame \d+'
       opens = @('Desert1:OPEN')
       ending = 1
       esc = 60; restart = $true },
    @{ key = 0; name = 'Game + Esc';       insns = 12000000; rasters = 1; returns = $false
       start = 'title: starting the game \(frame \d+\)'
       opens = @('voice1', 'Desert1:OPEN', 'Desert1:sfx/o.rff')
       esc = 200; restart = $true },
    @{ key = 1; name = 'Fight + Esc';      insns = 12000000; rasters = 1; returns = $false
       start = 'title: Fight at frame \d+'
       opens = @('Desert3:FIGHT')
       esc = 60; restart = $true }
)

$fail = 0
foreach ($c in $cases) {
    $log = Join-Path $LogDir ("key{0}{1}.txt" -f $c.key, $(if ($c.ContainsKey('restart')) { '-esc' } else { '' }))
    $runArgs = @($Image, $c.insns, '--titlekey', $c.key, '--data', $DataDir)
    if ($c.ContainsKey('esc')) { $runArgs += @('--esc', $c.esc) }
    $out = & $Exe @runArgs 2>&1 | Out-String
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
    if ($c.ContainsKey('ending')) {
        if ($out -notmatch ('title: ending {0}' -f $c.ending)) {
            $problems += ("the key did not write DAT_00022D68 = {0}" -f $c.ending)
        }
    }
    if ($c.ContainsKey('restart')) {
        if ($out -notmatch 'escape at frame \d+') { $problems += 'the escape seam never fired' }
        if ($out -notmatch 'restarting the game') { $problems += 'escape did not restart the game' }
        $again = ([regex]::Matches($out, 'title: the map screen''s score starts under the title')).Count
        if ($again -lt 2) { $problems += 'the title did not come back after the restart' }
        if ($out -notmatch 'stopped at 0xd870') {
            $problems += 'the restart did not end on the title''s hold point'
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
