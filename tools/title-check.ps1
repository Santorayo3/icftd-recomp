# The title screen's keys: each one must start its scene from the title's hold point, and Escape
# must restart the whole game (a fresh boot back to this menu).
#
# This is port code with no counterpart in the original, so there is no state to diff it against.
# What is checked is that the title's own launch sequence reaches the engine's scene entry, that
# the scene loads its data and draws, and that a scene which ends by itself comes back to the title.
# The three endings do not come back: their per-frame callback always answers 0, so the check looks
# for the word the key writes and the engine's own OPEN load instead.
#
# The Escape cases use --esc <frame>, a test seam that presses the key inside the run, plus a
# --mouse script that clicks the confirmation's Confirm button - the key asks first, and only that
# click restarts. A restart is
# a fresh boot on the port's menu (the 1989 program), and the title's score starts a second time:
# the frame count starts over, and the run ends on the title's hold point (the scripted menu takes
# the "no such key" quit).
# It is a regression check for the two things that broke while the feature was written:
#   - an injected call's arguments are never popped in a caller that no longer exists, so the
#     routine that resumes at the hold point returns into the first argument: the intro's
#     `unlk/rts` at 0x990A went into &"Overhead2.tiny" (0x27B84) and ran off through data.
#   - a translated stream continues through an `rts` (rc_ret only sets rc_returned), so without
#     rc_breakPc still armed the scene's return fell straight into the intro's setup instead of
#     back into the title.
#
# --titlekey <n> is the dev seam that presses the key (0 = start the game, 1..7 = the scenes,
# 8..10 = the three endings, 15 = the menu's "Play Antheads" button); it also ends the run when the
# title comes back, because a scripted run has no keyboard. It takes the choice after one menu
# frame, because that is what a real press does - and because key 0 is the path where the first menu
# frame's CIA tick runs the score player (see the note on the mirror).
#
# Escape is a restart on the port's own menu, whichever game was running: the menu is always drawn
# on the 1989 program's hold point, so Esc from the add-on boots that program again and the player
# finds both games on it. "Play Antheads" boots the add-on and plays its intro at once, which is why
# that run shows exactly one menu line - the add-on has no menu of its own here.
#
# The Load Game list is checked here too, because the slots are shared by the two games: one row per
# save file, a save the add-on wrote reading "Slot N (A)", and each row loading its own file in the
# build that wrote it (docs\antheads.md, Phase 7).
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
    # Escape asks before it leaves the game (a port feature): the key puts the confirmation up and
    # the script's click on Confirm is what restarts. Three starting points: an ending, the game's
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
       esc = 60; restart = $true },
    # The fifth button: New Game for the other build. A port feature with nothing to diff against,
    # so the claim is its own: a click (or --titlekey 15) boots the add-on's program and the run
    # goes straight into the add-on's intro - no menu of the add-on's own is ever drawn (one menu
    # line in the whole log), its own voices load from ant1, and the port answers the engine's
    # load screen at the end of that intro with "nothing to load".
    @{ key = 15; name = 'Play Antheads';  insns = 8000000; rasters = 1000; returns = $false
       start = 'title: playing Antheads'
       opens = @('voice2', 'met', 'exp', 'Desert1:OPEN')
       boots = 'Antheads'; a4 = '0002FAF6'; noMenu = $true
       also = 'title: a new game, nothing to load'
       from = 'export\ant1' },
    # Escape from an add-on game is "back to the menu" like anywhere else, and the menu is the
    # port's - the 1989 program's - so the player finds both games on it again.
    @{ key = 0; name = 'Antheads + Esc'; insns = 12000000; rasters = 1; returns = $false
       program = 'ant'
       start = 'title: starting the game \(frame \d+\)'
       opens = @('voice2')
       boots = 'It Came from the Desert'
       esc = 600; restart = $true }
)

$fail = 0
foreach ($c in $cases) {
    $log = Join-Path $LogDir ("key{0}{1}.txt" -f $c.key, $(if ($c.ContainsKey('restart')) { '-esc' } else { '' }))
    if ($c.ContainsKey('program')) { $log = Join-Path $LogDir ("key{0}-{1}.txt" -f $c.key, $c.program) }
    $runArgs = @($Image, $c.insns, '--titlekey', $c.key, '--data', $DataDir)
    if ($c.ContainsKey('program')) {
        # --program picks the build's own image out of the data folder; the 1989 one would run with
        # the add-on's table.
        $runArgs[0] = Join-Path $DataDir 'ant\code\dshell4k\dshell.img'
        $runArgs += @('--program', $c.program)
    }
    if ($c.ContainsKey('esc')) {
        # The confirmation's Confirm button: the popup is 173x72 at the middle of the 320x200
        # picture, its buttons at y 102..115 (src\host\quit_confirm.c), so Confirm's centre is
        # 120,109. The click lands a few frames after the key, because the popup is not up yet on
        # the key's own frame.
        $clicks = Join-Path $LogDir (([IO.Path]::GetFileNameWithoutExtension($log)) + '-confirm.txt')
        @(
            ("{0} 120 109 0" -f ($c.esc + 1)),
            ("{0} 120 109 1" -f ($c.esc + 3)),
            ("{0} 120 109 0" -f ($c.esc + 5))
        ) | Set-Content -Encoding ascii $clicks
        $runArgs += @('--esc', $c.esc, '--mouse', $clicks)
    }
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
    if ($c.ContainsKey('from')) {
        if ($out -notmatch ('open "[^"]+" -> ' + [regex]::Escape($c.from) + '\\')) {
            $problems += ("the other build's own files were not the ones loaded ({0})" -f $c.from)
        }
    }
    if ($c.ContainsKey('boots')) {
        if ($out -notmatch ('recomp: restarting as ' + [regex]::Escape($c.boots))) {
            $problems += ("the menu did not boot {0}" -f $c.boots)
        }
    }
    if ($c.ContainsKey('a4')) {
        if ($out -notmatch ('A4=' + $c.a4)) {
            $problems += ("the booted run is not on that build (A4 is not {0})" -f $c.a4)
        }
    }
    if ($c.ContainsKey('noMenu')) {
        # The add-on's own intro runs from the start: the port's menu is drawn once, before it.
        $menus = ([regex]::Matches($out, 'title: menu:')).Count
        if ($menus -ne 1) {
            $problems += ("the title menu was drawn {0} time(s), not once (the add-on showed one)" -f $menus)
        }
    }
    if ($c.ContainsKey('also')) {
        if ($out -notmatch $c.also) { $problems += ("missing: {0}" -f $c.also) }
    }
    if ($c.ContainsKey('ending')) {
        if ($out -notmatch ('title: ending {0}' -f $c.ending)) {
            $problems += ("the key did not write DAT_00022D68 = {0}" -f $c.ending)
        }
    }
    if ($c.ContainsKey('restart')) {
        if ($out -notmatch 'escape at frame \d+') { $problems += 'the escape seam never fired' }
        if ($out -notmatch 'quit: confirmation shown \(frame \d+\)') {
            $problems += 'Escape did not put the confirmation up'
        }
        if ($out -notmatch 'quit: confirmation confirmed') {
            $problems += 'the click on Confirm was not taken'
        }
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

# --- the menu's layout: four buttons, or five when the add-on is there -------------------------
# The fifth button is not drawn for a player who does not own the add-on, and the four that remain
# are the ones the menu has always had - same rows, same column, same size. The rectangles are what
# the drawing reads (title_button.c's tables), and the title logs them, so a log line is the claim:
#   * without the add-on's tree in the data folder: 85 / 106 / 127 / 164, i.e. today's menu;
#   * with it: 84 / 103 / 122 / 141 / 164 - the fifth row in between and the other four moved
#     down, Quit Game still at the bottom of the panel;
#   * a game already running the add-on gets the four again: its New Game plays it, so there is no
#     second game to list.
$fourButtons = 'title: menu: 4 button\(s\); New Game 230,85 73x14; Load Game 230,106 73x14; ' +
               'Settings 230,127 73x14; Quit Game 230,164 73x14'
$fiveButtons = 'title: menu: 5 button\(s\); New Game 230,84 73x14; Play Antheads 230,103 73x14; ' +
               'Load Game 230,122 73x14; Settings 230,141 73x14; Quit Game 230,164 73x14'

# A data folder holding the 1989 game only: the four files of its tree are copied, and an empty
# disks folder keeps the extractor from putting the add-on back (rt_assets_ensure extracts any
# complete add-on set it finds there). 2.7 MB, so a copy is cheaper than the subtleties of links.
$plain = Join-Path $LogDir 'plain'
$noDisks = Join-Path $LogDir 'no-disks'
if (Test-Path $plain) { Remove-Item $plain -Recurse -Force }
New-Item -ItemType Directory -Force -Path $plain, $noDisks | Out-Null
foreach ($d in 'code', 'disk1', 'disk2', 'disk3') {
    Copy-Item (Join-Path $DataDir $d) (Join-Path $plain $d) -Recurse -Force
}
$outFour = (& $Exe $Image 400000 --titlekey 14 --data $plain --disks $noDisks 2>&1 | Out-String)
Set-Content -Path (Join-Path $LogDir 'layout-4.txt') -Value $outFour
if ($outFour -match $fourButtons) {
    Write-Output 'title: without the add-on the menu is the four buttons it has always had'
} else {
    $got = [regex]::Match($outFour, 'title: menu: [^\r\n]*').Value
    Write-Output ("title: menu (no add-on) FAIL - the layout is not the shipped one: {0}" -f $got)
    $fail++
}

$outFive = (& $Exe $Image 400000 --titlekey 14 --data $DataDir 2>&1 | Out-String)
Set-Content -Path (Join-Path $LogDir 'layout-5.txt') -Value $outFive
if ($outFive -match $fiveButtons) {
    Write-Output 'title: with the add-on the menu has five buttons and the four others moved down'
} else {
    $got = [regex]::Match($outFive, 'title: menu: [^\r\n]*').Value
    Write-Output ("title: menu (add-on)   FAIL - the layout is not the five-button one: {0}" -f $got)
    $fail++
}
$outBack = (& $Exe (Join-Path $DataDir 'ant\code\dshell4k\dshell.img') 400000 --program ant `
            --titlekey 14 --data $DataDir 2>&1 | Out-String)
Set-Content -Path (Join-Path $LogDir 'layout-ant.txt') -Value $outBack
if ($outBack -match $fourButtons) {
    Write-Output 'title: a game already running the add-on gets the four buttons - New Game plays it'
} else {
    $got = [regex]::Match($outBack, 'title: menu: [^\r\n]*').Value
    Write-Output ("title: menu (add-on)   FAIL - the add-on's own menu is not the four buttons: {0}" -f $got)
    $fail++
}

# --- the rectangle is the hit box -----------------------------------------------------------------
# The layout is not just a picture: a click on the fifth rectangle's centre (266,110) has to start
# the add-on's game. Without the add-on the same click lands on Load Game, because that rectangle is
# where Load Game is in the four-button menu - which is what "the button is not there" means for a
# pointer (and why the click is the sharper claim: a rectangle that moved without its hit box
# moving, or the other way round, shows up here).
"40 266 110 1`r`n44 266 110 0" | Set-Content -Encoding ascii (Join-Path $LogDir 'click5.txt')
$click = (& $Exe $Image 4000000 --titlekey 14 --mouse (Join-Path $LogDir 'click5.txt') `
          --data $DataDir 2>&1 | Out-String)
Set-Content -Path (Join-Path $LogDir 'click-5.txt') -Value $click
if ($click -match 'title: playing Antheads \(frame 40\)' -and
    $click -match 'recomp: restarting as Antheads') {
    Write-Output 'title: a click on the fifth rectangle starts the add-on''s game'
} else {
    Write-Output 'title: menu (add-on)   FAIL - a click on the fifth rectangle did not play the add-on'
    $fail++
}
$click4 = (& $Exe $Image 1000000 --titlekey 14 --mouse (Join-Path $LogDir 'click5.txt') `
           --data $plain --disks $noDisks 2>&1 | Out-String)
Set-Content -Path (Join-Path $LogDir 'click-4.txt') -Value $click4
if ($click4 -match 'title: load game: \d+ save slot\(s\) \(frame 40\)' -and
    $click4 -notmatch 'playing Antheads') {
    Write-Output 'title: without the add-on the same click hits Load Game - there is no fifth button'
} else {
    Write-Output 'title: menu (no add-on) FAIL - the same click did not hit the four-button menu'
    $fail++
}
# The seam says so instead of waiting for a button that is not drawn - with no add-on's tree, and
# with the add-on already running (its own New Game plays it; there is no second game to offer).
$noAddon = (& $Exe $Image 400000 --titlekey 15 --data $plain --disks $noDisks 2>&1 | Out-String)
Set-Content -Path (Join-Path $LogDir 'key15-4.txt') -Value $noAddon
$noAddon2 = (& $Exe (Join-Path $DataDir 'ant\code\dshell4k\dshell.img') 400000 --program ant `
             --titlekey 15 --data $DataDir 2>&1 | Out-String)
Set-Content -Path (Join-Path $LogDir 'key15-ant.txt') -Value $noAddon2
if ($noAddon -match 'is the add-on''s game, which this run does not offer' -and
    $noAddon -notmatch 'playing Antheads' -and
    $noAddon2 -match 'is the add-on''s game, which this run does not offer') {
    Write-Output 'title: --titlekey 15 without an add-on to play says so and ends the run'
} else {
    Write-Output 'title: menu (no add-on) FAIL - --titlekey 15 waited for a button that is not there'
    $fail++
}

# --- the shared save slots: "(A)" for a save the add-on wrote, and no cross-loading --------------
# The slots belong to the port, not to a build: both games save into saves\slot<N>, each under the
# name its own code uses - "ICFTD", 12 444 bytes and "ICFTD2", 13 014 (docs\antheads.md, Phase 7).
# The Load Game list draws one row per save *file*: "Slot N" for the 1989 game's, "Slot N (A)" for
# the add-on's, and a slot both games saved in has both rows - each row loads the file it names, in
# the build that wrote it. Nothing can cross-load: the 1989 program only ever opens ICFTD and the
# add-on only ever opens ICFTD2. More files than rows page through the last row ("More").
#
# The whole saves directory is put aside for the run and restored afterwards, so the rows are the
# three planted files and nothing else - and a developer's own saves survive.
$savesDir  = Join-Path (Split-Path -Parent (Resolve-Path $Exe)) 'saves'
$savedBack = Join-Path $LogDir 'saves-all'

function Plant-Save([int]$slot, [string]$name, [int]$bytes)
{
    $dir = Join-Path $savesDir ("slot{0}" -f $slot)
    New-Item -ItemType Directory -Force -Path $dir | Out-Null
    # The engine's own load reads the whole file into its two ranges, so a file of the right size
    # is what the port's slot state recognises: the content is the engine's business.
    [System.IO.File]::WriteAllBytes((Join-Path $dir $name), (New-Object byte[] $bytes))
}

function Row-Y([int]$row) { return 80 + $row * 8 + 4 }   # the row's middle

function Title-Run([string]$tag, [int]$insns, [string[]]$mouse, [string[]]$extra, [string]$data,
                    [string]$image = '')
{
    $script = Join-Path $LogDir ("slots-{0}.txt" -f $tag)
    $mouse | Set-Content -Encoding ascii $script
    if ($image -eq '') { $image = $Image }
    $argv = @($image, "$insns", '--data', $data, '--titlekey', '14', '--mouse', $script, '--doslog')
    $argv += $extra
    $text = (& $Exe @argv 2>&1 | Out-String)
    Set-Content -Path (Join-Path $LogDir ("slots-{0}.log" -f $tag)) -Value $text
    return $text
}

# The Load Game view's own line, parsed: the slots that hold a save and the ones the add-on wrote.
function Slot-Lists([string]$log)
{
    $line = ($log -split "`r?`n" | Where-Object { $_ -match 'title: slots: ' } | Select-Object -First 1)
    if ($line -eq $null) { return $null }
    $m = [regex]::Match($line, 'title: slots: saved in(.*?); \(A\) on(.*?) \(frame')
    if (-not $m.Success) { return $null }
    $saved = @($m.Groups[1].Value.Trim() -split '\s+' | Where-Object { $_ -ne '' })
    $ant = @($m.Groups[2].Value.Trim() -split '\s+' | Where-Object { $_ -ne '' })
    return [pscustomobject]@{ saved = $saved; ant = $ant; line = $line.Trim() }
}

# Opens Load Game (the five-button menu's row, y 122..136) and clicks the row at $rowY.
function Load-Slot([string]$tag, [int]$insns, [int]$rowY, [string[]]$extra = @(), [string]$image = '')
{
    return Title-Run $tag $insns @("40 266 129 1", "44 266 129 0",
                                   "100 266 $rowY 1", "140 266 $rowY 0") $extra $DataDir $image
}

try {
    if (Test-Path $savedBack) { Remove-Item $savedBack -Recurse -Force }
    if (Test-Path $savesDir) {
        Copy-Item $savesDir $savedBack -Recurse -Force
        Remove-Item $savesDir -Recurse -Force
    }
    New-Item -ItemType Directory -Force -Path $savesDir | Out-Null

    Plant-Save 8 'ICFTD' 12444        # rows: 0 = Slot 8, 1 = Slot 9 (A),
    Plant-Save 9 'ICFTD2' 13014       #       2 = Slot 10, 3 = Slot 10 (A)
    Plant-Save 10 'ICFTD' 12444
    Plant-Save 10 'ICFTD2' 13014

    # Slot 8: the 1989 game's own save, loaded in the program that wrote it.
    $out = Load-Slot 'orig' 3000000 (Row-Y 0)
    $lists = Slot-Lists $out
    if ($lists -eq $null -or ($lists.saved -join ' ') -ne '8 9 10' -or
        ($lists.ant -join ' ') -ne '9 10') {
        Write-Output ("title: slots (list)   FAIL - the list does not name the files the slots hold" +
                      $(if ($lists) { ": " + $lists.line } else { '' }))
        $fail++
    } elseif ($out -notmatch 'title: save slot 8 selected' -or
              $out -notmatch 'emu: open "ICFTD" -> .*slot8\\ICFTD \(12444 bytes\)' -or
              $out -match 'restarting as' -or $out -match 'open "ICFTD2"') {
        Write-Output 'title: slots (1989)   FAIL - the 1989 save did not load in the 1989 program'
        $fail++
    } else {
        Write-Output 'title: a row "Slot N" loads the 1989 file in the 1989 program'
    }

    # Slot 9: the add-on's file only - the "(A)" row boots Antheads and its own load reads ICFTD2.
    $out = Load-Slot 'ant' 2000000 (Row-Y 1)
    if ($out -notmatch "title: slot 9 is the add-on's save - booting it to load" -or
        $out -notmatch 'title: save slot 9 selected: Antheads' -or
        $out -notmatch 'recomp: restarting as Antheads' -or
        $out -notmatch 'open "ICFTD2" -> .*slot9\\ICFTD2 \(13014 bytes\)' -or
        $out -match 'open "ICFTD"') {
        Write-Output 'title: slots (add-on)  FAIL - the add-on''s save did not load in Antheads'
        $fail++
    } else {
        Write-Output 'title: a row "Slot N (A)" boots Antheads and is read by its own load'
    }

    # Slot 10 holds both files, so it has both rows: the "(A)" row is the add-on's, and the plain
    # row under the same name is the 1989 game's. Neither asks a question.
    $out = Load-Slot 'both-ant' 2000000 (Row-Y 3)
    if ($out -notmatch 'title: save slot 10 selected: Antheads' -or
        $out -notmatch 'recomp: restarting as Antheads' -or
        $out -notmatch 'open "ICFTD2" -> .*slot10\\ICFTD2 \(13014 bytes\)' -or
        $out -match 'open "ICFTD"') {
        Write-Output 'title: slots (both, A)  FAIL - the "(A)" row did not load the add-on''s file'
        $fail++
    } else {
        Write-Output 'title: in a slot both games saved in, the "(A)" row loads Antheads'
    }
    $out = Load-Slot 'both-orig' 3000000 (Row-Y 2)
    if ($out -notmatch 'title: save slot 10 selected' -or $out -match 'selected: Antheads' -or
        $out -notmatch 'open "ICFTD" -> .*slot10\\ICFTD \(12444 bytes\)' -or
        $out -match 'restarting as' -or $out -match 'open "ICFTD2"') {
        Write-Output 'title: slots (both, 1989) FAIL - the plain row did not load the 1989 file'
        $fail++
    } else {
        Write-Output 'title: the same slot''s plain row loads the 1989 file in the 1989 program'
    }

    # The other direction: the add-on's own menu offers the 1989 save, and its row boots the 1989
    # program. Its Load Game row is the four-button menu's (y 106..120).
    $antImage = Join-Path $DataDir 'ant\code\dshell4k\dshell.img'
    if (Test-Path $antImage) {
        $out = Title-Run 'ant-menu' 3000000 @("40 266 112 1", "44 266 112 0",
                                              "100 266 $(Row-Y 0) 1", "140 266 $(Row-Y 0) 0") `
                         @('--program', 'ant') $DataDir $antImage
        if ($out -notmatch "title: slot 8 is the 1989 game's save - booting it to load" -or
            $out -notmatch 'recomp: restarting as It Came from the Desert' -or
            $out -notmatch 'open "ICFTD" -> .*slot8\\ICFTD \(12444 bytes\)' -or
            $out -match 'open "ICFTD2"') {
            Write-Output 'title: slots (add-on menu) FAIL - a 1989 save did not boot the 1989 program'
            $fail++
        } else {
            Write-Output 'title: from the add-on''s own menu a 1989 save boots the 1989 game'
        }
    }

    # More files than rows: every slot saved, plus one the add-on wrote - eleven files in ten rows,
    # so the last row pages. The eleventh file (slot 9's, the only "(A)" one) is page 2's first row,
    # which is how a crowded list still reaches every save.
    Get-ChildItem $savesDir -Recurse -File | Remove-Item -Force
    foreach ($n in 1..10) { Plant-Save $n 'ICFTD' 12444 }
    Plant-Save 9 'ICFTD2' 13014
    $out = Title-Run 'more' 2000000 @("40 266 129 1", "44 266 129 0",
                                      "100 266 $(Row-Y 9) 1", "140 266 $(Row-Y 9) 0",
                                      "200 266 $(Row-Y 0) 1", "240 266 $(Row-Y 0) 0") @() $DataDir
    if ($out -notmatch 'title: slots: page 2' -or
        $out -notmatch 'title: save slot 9 selected: Antheads' -or
        $out -notmatch 'open "ICFTD2" -> .*slot9\\ICFTD2 \(13014 bytes\)') {
        Write-Output 'title: slots (more)    FAIL - the eleventh file is not reachable through "More"'
        $fail++
    } else {
        Write-Output 'title: more files than rows page through the last row, and every file is reachable'
    }
} finally {
    if (Test-Path $savesDir) { Remove-Item $savesDir -Recurse -Force }
    if (Test-Path $savedBack) { Copy-Item $savedBack $savesDir -Recurse -Force }
}

# --- the picture itself, where a desktop can give the game a window ----------------------------
# A rectangle in a log is the input to the drawing, not the drawing. Where a window can be sampled,
# each button's top edge is the art's own black outline: 73 black pixels inside the column, at
# exactly the rows above, and no such run anywhere else in the panel. A headless machine SKIPs it,
# like tools\quit-check.ps1 and tools\settings-check.ps1.
$ini = Join-Path (Split-Path -Parent (Resolve-Path $Exe)) 'icftd.ini'
$backup = Join-Path $LogDir 'icftd.ini.backup'
$hadIni = Test-Path $ini
if ($hadIni) { Copy-Item $ini $backup -Force }
$src = @'
using System;
using System.Drawing;
using System.Drawing.Imaging;
using System.Runtime.InteropServices;

public static class TitleMenuCheck
{
    [StructLayout(LayoutKind.Sequential)]
    public struct RECT { public int Left, Top, Right, Bottom; }

    [DllImport("user32.dll", CharSet = CharSet.Unicode)]
    public static extern IntPtr FindWindow(string cls, string title);
    [DllImport("user32.dll")]
    public static extern bool GetClientRect(IntPtr hwnd, out RECT r);
    [DllImport("user32.dll")]
    public static extern bool PrintWindow(IntPtr hwnd, IntPtr dc, uint flags);

    public static Bitmap Capture(IntPtr hwnd)
    {
        RECT r;
        if (!GetClientRect(hwnd, out r)) return null;
        int w = r.Right - r.Left, h = r.Bottom - r.Top;
        if (w <= 0 || h <= 0) return null;
        Bitmap bmp = new Bitmap(w, h, PixelFormat.Format32bppArgb);
        using (Graphics g = Graphics.FromImage(bmp))
        {
            IntPtr dc = g.GetHdc();
            bool ok = PrintWindow(hwnd, dc, 1);
            g.ReleaseHdc(dc);
            if (!ok) { bmp.Dispose(); return null; }
        }
        return bmp;
    }

    /* The longest run of near-black pixels in the picture row y, between x0 and x1. A button's
     * top edge is its 73-pixel black outline; the panel behind it is not black. */
    public static int BlackRun(Bitmap bmp, int y, int x0, int x1)
    {
        if (y < 0 || y >= bmp.Height) return -1;
        int run = 0, best = 0;
        for (int x = Math.Max(0, x0); x <= Math.Min(bmp.Width - 1, x1); x++)
        {
            Color c = bmp.GetPixel(x, y);
            if (c.R < 24 && c.G < 24 && c.B < 24) { run++; if (run > best) best = run; }
            else run = 0;
        }
        return best;
    }
}
'@
if (-not ('TitleMenuCheck' -as [type])) {
    Add-Type -AssemblyName System.Drawing
    Add-Type -TypeDefinition $src -ReferencedAssemblies System.Drawing
}

# A 320x200 windowed run, so a picture pixel is a menu pixel: the window size a previous run may
# have left in the ini is dropped, and fullscreen is off (tools\quit-check.ps1 does the same).
$iniText = if (Test-Path $ini) { Get-Content $ini -Raw } else { '' }
($iniText -replace '(?m)^\s*fullscreen\s*=.*$', 'fullscreen=0' `
         -replace '(?m)^\s*window_(width|height)\s*=.*\r?\n?', '') | Set-Content -Encoding ascii $ini

function ReadLog([string]$path)
{
    $fs = $null
    $sr = $null
    try {
        $fs = [System.IO.File]::Open($path, 'Open', 'Read', [System.IO.FileShare]::ReadWrite)
        $sr = New-Object System.IO.StreamReader($fs)
        return $sr.ReadToEnd()
    } catch { return '' }
    finally { if ($sr) { $sr.Close() }; if ($fs) { $fs.Close() } }
}

function MenuRuns([string]$dataDir, [string]$disksDir, [string]$tag, [int[]]$rows)
{
    $log = Join-Path $LogDir ("window-{0}.log" -f $tag)
    $runArgs = @($Image, '4000000', '--data', $dataDir, '--window', '--titlekey', '14')
    if ($disksDir -ne '') { $runArgs += @('--disks', $disksDir) }
    $proc = Start-Process -FilePath (Resolve-Path $Exe).Path -PassThru `
                -RedirectStandardOutput $log -ArgumentList $runArgs
    $bmp = $null
    $exited = $false
    for ($i = 0; $i -lt 200; $i++) {
        Start-Sleep -Milliseconds 50
        # The window exists while the game is booting, when the screen still shows the intro: the
        # sample has to wait for the menu's own line, i.e. for the picture it is about to measure.
        if ((ReadLog $log) -notmatch 'title: menu: \d+ button') {
            if ($proc.HasExited) { $exited = $true; break }
            continue
        }
        $h = [TitleMenuCheck]::FindWindow('ICFTD', 'It Came from the Desert (recomp)')
        if ($h -ne [IntPtr]::Zero) {
            $shot = [TitleMenuCheck]::Capture($h)
            if ($shot -ne $null) { $bmp = $shot; break }
        }
    }
    $res = @{ saw = ($bmp -ne $null); runs = @{} }
    if ($bmp -ne $null) {
        if ($bmp.Width -eq 320 -and $bmp.Height -eq 200) {
            $bmp.Save((Join-Path $LogDir ("menu-{0}.png" -f $tag)), [System.Drawing.Imaging.ImageFormat]::Png)
            foreach ($y in $rows) { $res.runs[$y] = [TitleMenuCheck]::BlackRun($bmp, $y, 230, 302) }
        } else {
            $res.saw = $false
            $res.size = "{0}x{1}" -f $bmp.Width, $bmp.Height
        }
        $bmp.Dispose()
    }
    if (-not $exited -and -not $proc.WaitForExit(20000)) { try { $proc.Kill() } catch { } }
    return $res
}

try {
    # The five-button menu: 84, 103, 122, 141 and 164 have a 73-pixel black top edge, and the gaps
    # between them (98, 117, 136, 155) have none.
    $with = MenuRuns $DataDir '' '5' @(84, 103, 122, 141, 164, 98, 117, 136, 155)
    if (-not $with.saw) {
        Write-Output 'title: the menu pixels are not measured (no desktop gave the game a window) - SKIP'
    } else {
        $bad = @()
        foreach ($y in 84, 103, 122, 141, 164) {
            if ($with.runs[$y] -lt 70) { $bad += ("no button at y {0} (run {1})" -f $y, $with.runs[$y]) }
        }
        foreach ($y in 98, 117, 136, 155) {
            if ($with.runs[$y] -ge 40) { $bad += ("a button where there is none (y {0}, run {1})" -f $y, $with.runs[$y]) }
        }
        if ($bad.Count -ne 0) {
            Write-Output ("title: menu (add-on)   FAIL - {0}" -f ($bad -join '; '))
            $fail++
        } else {
            Write-Output 'title: five buttons are drawn where the layout says, and nowhere else'
        }
        # The four-button menu: the same rows the menu has always had, and nothing at 84 or 141.
        $without = MenuRuns $plain $noDisks '4' @(85, 106, 127, 164, 84, 103, 141)
        if (-not $without.saw) {
            Write-Output 'title: the four-button menu pixels are not measured - SKIP'
        } else {
            $bad = @()
            foreach ($y in 85, 106, 127, 164) {
                if ($without.runs[$y] -lt 70) { $bad += ("no button at y {0} (run {1})" -f $y, $without.runs[$y]) }
            }
            foreach ($y in 84, 103, 141) {
                if ($without.runs[$y] -ge 40) { $bad += ("a fifth button is drawn (y {0}, run {1})" -f $y, $without.runs[$y]) }
            }
            if ($bad.Count -ne 0) {
                Write-Output ("title: menu (no add-on) FAIL - {0}" -f ($bad -join '; '))
                $fail++
            } else {
                Write-Output 'title: without the add-on the four buttons are exactly where they were'
            }
        }
    }
} finally {
    if ($hadIni) { Copy-Item $backup $ini -Force }
    else { Remove-Item $ini -Force -ErrorAction SilentlyContinue }
}

if ($fail -ne 0) { Write-Output ("title: {0} check(s) failed" -f $fail); exit 1 }
Write-Output 'title: all keys start their scene from the title'
exit 0
