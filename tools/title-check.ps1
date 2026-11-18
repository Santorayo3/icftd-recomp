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
