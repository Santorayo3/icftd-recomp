# The title's settings menu, measured on its own terms.
#
# A port feature: the original has no title screen and no settings, so there is nothing to diff it
# against. What is checked is what the feature claims:
#
#   * a click on the Settings button replaces the buttons with the settings view, showing what
#     the game was started with (the icftd.ini the check writes: fullscreen on, music 10, sound 7);
#     with the add-on "Antheads" in the data folder the menu has five buttons and Settings is one
#     row lower, so the click's position is read from the layout the build logs;
#   * the fullscreen toggle flips the window mode and writes [VIDEO] fullscreen back to the ini;
#   * a minus/plus click steps that volume by one, changes the mixer's gain **now** (the log line is
#     the gain the machine is running with, not the number that was written) and rewrites its ini
#     entry;
#   * the language row steps through the codes the start-up scan found (English first, then every
#     complete `lang\<code>.csv`), cyclically in both directions, changes the view's own words at
#     once (the log line names the label the view now draws, read back from that language's file)
#     and writes [GAME] language; the same step on a staged release folder - `lang\` with the
#     shipped translations only, which is where the game writes the English source files itself on
#     its first start - has to work as well;
#   * Back closes the view and puts the main menu back, and reopening Settings shows the new state;
#   * the ini keeps everything the write does not own - the comments, the key order, and the key it
#     did not touch (sound=7 stays 7 while music changes);
#   * where a desktop can give the game a window, the toggle is measured as the window's own
#     geometry: 320x200, then the whole screen after the click, then 320x200 after the second one
#     (a headless machine SKIPs that part, like tools\keys-check.ps1).
#   * Alt+Enter is the same switch without a click, on the title's settings view as anywhere else:
#     the posted key takes the live window to the whole screen, writes [VIDEO] fullscreen, and the
#     click that follows says the view took the key's state (it switches the window *back*).
#
# The screen is only reachable from a played game, so the run uses the two dev seams the other title
# checks use: `--titlekey 14` puts the menu up for the run's `--mouse` script to click, and the
# script ends the run on Quit Game (a settings view nothing clicks out of is bounded by the title
# itself, and would show up here as its "left the menu open" line).
#
#   powershell -ExecutionPolicy Bypass -File tools\settings-check.ps1
param(
    [string]$Exe = 'bin\win32\icftd-recomp.exe',
    [string]$DataDir = 'export',
    [string]$Image = 'export\code\dshell4k\dshell.img',
    [string]$Work = 'out\settings-check'
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
Set-Location $root

if (-not (Test-Path $Exe))   { Write-Output "settings: SKIP (no $Exe - build it with tools\build-host.ps1)"; exit 0 }
if (-not (Test-Path $Image)) { Write-Output "settings: SKIP (no $Image - run tools\extract.ps1)"; exit 0 }

New-Item -ItemType Directory -Force -Path $Work | Out-Null
Get-ChildItem $Work -Recurse -File -ErrorAction SilentlyContinue | Remove-Item -Force

$fail = 0
function Fail([string]$text) { Write-Output "settings: FAIL - $text"; $script:fail++ }
function Ok([string]$text) { Write-Output "settings: $text" }

# A log the game is still writing to - the Alt+Enter run has to know when the settings view is up
# before it can post the key, so this reads the file sharing it with the process.
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

$ini = Join-Path (Split-Path -Parent (Resolve-Path $Exe)) 'icftd.ini'
$backup = Join-Path $Work 'icftd.ini.backup'
$hadIni = Test-Path $ini
if ($hadIni) { Copy-Item $ini $backup -Force }

# The settings the run must start from. sound=7 and music=10 are different numbers on purpose: the
# key no click touches has to survive the patch.
$startIni = @'
; ICFTD runtime settings. Written with these defaults on the first start.
; Sections use [BRACKETS]; ';' or '#' at the start of a line is a comment.

[VIDEO]
; false = window the size of the screen, one emulated pixel per desktop pixel
;            (320x200, and the scene's own overscan size where it uses one);
; true = fullscreen, the whole 4:3 picture scaled up to fit with the border art
;            either side.
fullscreen=true

[AUDIO]
; Volume 0..10, 0 = off, 10 = full.
sound=7
music=10
'@

# Where the controls are (title_button.c): the column is x 230..302; the four rows' labels start at
# y 74, 98, 122 and 146 with their control 8 rows below, so the toggle sits at y 82..95, the music
# buttons at 106..119, sound's at 130..143 and the language's at 154..167, and Back is at y 169..182
# (a little lower than in the slot list, where the fourth row has its room).
#
# The Settings button itself is where the menu's own layout puts it: without the add-on's disks at
# y 127..140, with them at y 141..154 (five buttons, the four others moved down). The build logs the
# rectangles it drew, so the click follows the layout instead of assuming one.
$settingsButton = @(266, 133)
$newGameButton  = @(266, 91)
$probe = (& $Exe $Image 400000 --data $DataDir --titlekey 14 2>&1 | Out-String)
$mm = [regex]::Match($probe, 'title: menu:.*?; Settings (\d+),(\d+) (\d+)x(\d+)')
if ($mm.Success) {
    $bx = [int]$mm.Groups[1].Value
    $by = [int]$mm.Groups[2].Value
    $bw = [int]$mm.Groups[3].Value
    $bh = [int]$mm.Groups[4].Value
    $settingsButton = @(($bx + [int]($bw / 2)), ($by + [int]($bh / 2)))
    Write-Output ("settings: the menu has {0} buttons, Settings at {1},{2}" -f
                  $(if ($probe -match 'Play Antheads') { 'five (the add-on is there)' } else { 'four' }),
                  $settingsButton[0], $settingsButton[1])
} else {
    Write-Output 'settings: SKIP the layout probe gave no menu line'
}
$nm = [regex]::Match($probe, 'title: menu:.*?New Game (\d+),(\d+) (\d+)x(\d+)')
if ($nm.Success) {
    $newGameButton = @(([int]$nm.Groups[1].Value + [int]([int]$nm.Groups[3].Value / 2)),
                       ([int]$nm.Groups[2].Value + [int]([int]$nm.Groups[4].Value / 2)))
}
$toggle         = @(256, 90)
$musicDown      = @(246, 112)
$musicUp        = @(284, 112)
$soundDown      = @(246, 136)
$langDown       = @(246, 160)
$langUp         = @(284, 160)
$back           = @(266, 174)
$quit           = @(266, 171)

# One click is a button-down line and a button-up line a few frames later: the menu reads the press
# edge, like the platform reports it.
$lines = New-Object System.Collections.Generic.List[string]
$frame = 40
function Click([int[]]$at)
{
    $script:lines.Add(("{0} {1} {2} 1" -f $script:frame, $at[0], $at[1]))
    $script:lines.Add(("{0} {1} {2} 0" -f ($script:frame + 4), $at[0], $at[1]))
    $script:frame += 20
}
Click $settingsButton     # 40  open the settings view
Click $toggle             # 60  fullscreen on -> off
Click $musicDown          # 80  10 -> 9
Click $musicDown          # 100 9 -> 8
Click $musicUp            # 120 8 -> 9
Click $soundDown          # 140 7 -> 6
Click $back               # 160 back to the buttons
Click $settingsButton     # 180 open again: must show the new state
Click $back               # 200 back again
Click $quit               # 220 Quit Game: ends the run
$lines | Set-Content -Encoding ascii (Join-Path $Work 'clicks.txt')

function Value([string]$path, [string]$key)
{
    $m = Select-String -Path $path -Pattern ('^\s*' + $key + '\s*=\s*(\S+)')
    if (-not $m) { return '<missing>' }
    return $m.Matches[0].Groups[1].Value
}

try {
    $startIni | Set-Content -Encoding ascii $ini
    $before = @(Get-Content $ini)

    $out = (& $Exe $Image 3000000 --data $DataDir --titlekey 14 --mouse (Join-Path $Work 'clicks.txt') 2>&1 | Out-String)
    Set-Content -Path (Join-Path $Work 'run.log') -Value $out

    # 1. The Settings button opens the view, on the settings the ini holds.
    if ($out -notmatch 'title: settings: music 10/10, sound 7/10, fullscreen on') {
        Fail 'a click on Settings did not open the view on the ini''s settings (music 10, sound 7, fullscreen on)'
    } else { Ok 'a click on Settings replaces the buttons with the view, showing the ini''s settings' }
    if ($out -match 'title: the script left the menu open') {
        Fail 'the script did not click its way out of a view (a click missed)'
    }

    # 2. The toggle: the platform is switched and the ini follows.
    if ($out -notmatch 'title: fullscreen off') { Fail 'the fullscreen toggle did not switch the window mode' }
    else { Ok 'the fullscreen toggle switches the window mode' }

    # 3. The volumes: the log's percentage is the mixer's gain, i.e. the change has taken effect.
    $want = @('title: music volume 9/10 \(90% gain',
              'title: music volume 8/10 \(80% gain',
              'title: music volume 9/10 \(90% gain',
              'title: sound volume 6/10 \(60% gain')
    $missingLines = @($want | Where-Object { $out -notmatch $_ })
    if ($missingLines.Count -ne 0) {
        foreach ($w in $missingLines) { Fail "no log line matching '$w'" }
    } else { Ok 'minus and plus step the volume by one and change the mixer''s gain at once' }

    # 4. Back restores the buttons, and reopening shows the new state.
    $backs = ([regex]::Matches($out, 'title: back to the main menu')).Count
    if ($backs -ne 2) { Fail ("Back closed the view {0} time(s), expected 2" -f $backs) }
    else { Ok 'Back puts the main menu back' }
    if ($out -notmatch 'title: settings: music 9/10, sound 6/10, fullscreen off') {
        Fail 'the reopened view does not show the settings that were just changed'
    } else { Ok 'the view reopens on the new state' }

    # 5. The file: the three values, and everything the write does not own.
    $after = @(Get-Content $ini)
    if ((Value $ini 'fullscreen') -ne '0') {
        Fail ("[VIDEO] fullscreen is '{0}', not 0" -f (Value $ini 'fullscreen'))
    } else { Ok 'the toggle wrote [VIDEO] fullscreen=0' }
    if ((Value $ini 'music') -ne '9') {
        Fail ("[AUDIO] music is '{0}', not 9" -f (Value $ini 'music'))
    } elseif ((Value $ini 'sound') -ne '6') {
        Fail ("[AUDIO] sound is '{0}', not 6" -f (Value $ini 'sound'))
    } else { Ok 'the volume steps wrote music=9 and sound=6' }

    $keptComments = @('; ICFTD runtime settings. Written with these defaults on the first start.',
                      '; Sections use [BRACKETS]; '';'' or ''#'' at the start of a line is a comment.',
                      '; Volume 0..10, 0 = off, 10 = full.')
    $lost = @($keptComments | Where-Object { $after -notcontains $_ })
    if ($lost.Count -ne 0) { Fail ("the write dropped comment line(s): {0}" -f ($lost -join ' | ')) }
    else { Ok 'the comments and the key order survive the write' }
    $beforeKeys = @($before | Where-Object { $_ -match '^\s*\w+\s*=' })
    $afterKeys = @($after | Where-Object { $_ -match '^\s*\w+\s*=' })
    if ($beforeKeys.Count -ne $afterKeys.Count) {
        Fail ("the write changed the number of keys: {0} -> {1}" -f $beforeKeys.Count, $afterKeys.Count)
    }

    # 5b. The language row: the codes the run found at start-up (English first, then every complete
    #     `lang\<code>.csv`), stepped through with the same minus/plus pictures the volumes have -
    #     cyclically in both directions, in force at once (the line says which word the view draws)
    #     and written back to icftd.ini like any other setting. The expected labels are read from
    #     the language files themselves, so a translator's wording is never mistaken for a failure.
    $offered = @()
    $off = [regex]::Match($out, 'language\(s\) offered:([ a-z0-9-]*)')
    if ($off.Success) { $offered = @($off.Groups[1].Value.Trim() -split '\s+' | Where-Object { $_ -ne '' }) }
    if ($offered.Count -lt 2) {
        Ok ("the run offers {0} language(s) - SKIP the language switch" -f $offered.Count)
    } else {
        if (-not ('LangId' -as [type])) {
            Add-Type -TypeDefinition @'
public static class LangId {
    public static ulong Hash(byte[] b) {
        ulong h = 14695981039346656037UL;
        foreach (byte c in b) { h ^= c; h *= 1099511628211UL; }
        return h;
    }
}
'@
        }
        # A line of `lang\<code>.csv`, by the English text it translates: the file names each row by
        # the FNV-1a id of that text, so the expected word is the file's own, never this script's.
        function Translation([string]$code, [string]$english)
        {
            $file = Join-Path (Join-Path $root 'lang') ("$code.csv")
            if (-not (Test-Path $file)) { return '' }
            $id = '{0:X16}' -f [LangId]::Hash([System.Text.Encoding]::UTF8.GetBytes($english))
            $row = Import-Csv -LiteralPath $file -Delimiter ';' -Header k, v -Encoding UTF8 |
                   Where-Object { $_.k -eq $id } | Select-Object -First 1
            if ($row -and $row.v) { return $row.v.Trim() }
            return ''
        }
        function LanguageLabel([string]$code)
        {
            $text = Translation $code 'Language'
            if ($text -ne '') { return $text }
            return $null
        }
        # The file's text as the screen has it: lang.c converts it to the font's own codes (the six
        # umlauts 0x80..0x85, "ss" for ß, the base letter for another accent) and --textlog writes a
        # byte it cannot print as '.'. Same rule as tools\lang-check.ps1, so an assertion can name
        # the file's own words.
        function Drawn([string]$text)
        {
            $fold = 'AAAAAAACEEEEIIIIDNOOOOOxOUUUUYTs' + 'aaaaaaaceeeeiiiidnooooo/ouuuuyty'
            $sb = New-Object System.Text.StringBuilder
            foreach ($ch in $text.ToCharArray()) {
                $cp = [int]$ch
                $code = @($cp)
                if ($cp -eq 0x00C4) { $code = 0x80 }
                elseif ($cp -eq 0x00D6) { $code = 0x81 }
                elseif ($cp -eq 0x00DC) { $code = 0x82 }
                elseif ($cp -eq 0x00E4) { $code = 0x83 }
                elseif ($cp -eq 0x00F6) { $code = 0x84 }
                elseif ($cp -eq 0x00FC) { $code = 0x85 }
                elseif ($cp -eq 0x00DF) { $code = 0x73, 0x73 }
                elseif ($cp -eq 0x2013 -or $cp -eq 0x2014) { $code = 0x2D }
                elseif ($cp -eq 0x2018 -or $cp -eq 0x2019) { $code = 0x27 }
                elseif ($cp -eq 0x201C -or $cp -eq 0x201D) { $code = 0x22 }
                elseif ($cp -ge 0x00C0 -and $cp -le 0x00FF) { $code = [int][char]$fold[$cp - 0x00C0] }
                elseif ($cp -ge 0x80) { $code = 0x3F }
                foreach ($b in $code) {
                    [void]$sb.Append($(if ($b -ge 32 -and $b -lt 127) { [char]$b } else { '.' }))
                }
            }
            return $sb.ToString()
        }
        $enLabel = 'Language'

        $n = $offered.Count
        $script:frame = 40
        $langLines = New-Object System.Collections.Generic.List[string]
        function LangClick([int[]]$at)
        {
            $script:langLines.Add(("{0} {1} {2} 1" -f $script:frame, $at[0], $at[1]))
            $script:langLines.Add(("{0} {1} {2} 0" -f ($script:frame + 4), $at[0], $at[1]))
            $script:frame += 20
        }
        LangClick $settingsButton
        for ($i = 0; $i -lt $n; $i++) { LangClick $langUp }   # all the way round: back to English
        LangClick $langDown                                    # minus from English: the last one
        LangClick $back
        LangClick $settingsButton                              # reopened: must show the new state
        LangClick $back
        LangClick $quit
        $langLines | Set-Content -Encoding ascii (Join-Path $Work 'clicks-lang.txt')

        $startIni | Set-Content -Encoding ascii $ini           # no [GAME]: the run starts English
        $out2 = (& $Exe $Image 3000000 --data $DataDir --titlekey 14 `
                 --mouse (Join-Path $Work 'clicks-lang.txt') 2>&1 | Out-String)
        Set-Content -Path (Join-Path $Work 'language.log') -Value $out2

        if ($out2 -notmatch ('title: settings:.*language en \(1 of {0}\)' -f $n)) {
            Fail 'the view did not open on English with the found languages listed'
        } else { Ok ("the language row lists the {0} language(s) the start-up scan found" -f $n) }

        $steps = @([regex]::Matches($out2, 'title: language ([a-z]{2}) \((\d+) of (\d+), frame') |
                   ForEach-Object { '{0}/{1}' -f $_.Groups[1].Value, $_.Groups[2].Value })
        $want = @()
        for ($i = 1; $i -le $n; $i++) { $want += ('{0}/{1}' -f $offered[($i % $n)], (($i % $n) + 1)) }
        $want += ('{0}/{1}' -f $offered[$n - 1], $n)
        if (($steps -join ' ') -ne ($want -join ' ')) {
            Fail ("the language steps were '{0}', expected '{1}' (cyclical in both directions)" -f
                  ($steps -join ' '), ($want -join ' '))
        } else { Ok 'plus and minus step the languages cyclically in both directions' }

        # The step is immediate: the view's own label is the new language's word from that moment.
        $labelsOk = $true
        foreach ($code in @($offered | Select-Object -Skip 1)) {
            $label = LanguageLabel $code
            if ($label -eq $null) { continue }
            if ($out2 -notmatch ('title: language {0} \(\d+ of \d+, frame \d+\) - the view now reads "{1}"' -f
                                 $code, [regex]::Escape($label))) {
                Fail ("switching to {0} did not change the view's own label to '{1}'" -f $code, $label)
                $labelsOk = $false
            }
        }
        if ($labelsOk -and $steps.Count -gt 0 -and
            $out2 -notmatch ('title: language en \(\d+ of \d+, frame \d+\) - the view now reads "{0}"' -f
                             [regex]::Escape($enLabel))) {
            Fail 'switching back to en did not put the view''s own label back to English'
            $labelsOk = $false
        }
        if ($labelsOk -and $steps.Count -gt 0) {
            Ok 'the switch changes the view''s own words at once'
        }
        if ($out2 -notmatch ('title: settings:.*language {0} \({1} of {1}\)' -f $offered[$n - 1], $n)) {
            Fail 'the reopened view does not show the language the last step selected'
        } else { Ok 'the view reopens on the language that was selected' }
        if ((Value $ini 'language') -ne $offered[$n - 1]) {
            Fail ("[GAME] language is '{0}', not '{1}'" -f (Value $ini 'language'), $offered[$n - 1])
        } else { Ok ("the language step wrote [GAME] language={0}" -f $offered[$n - 1]) }

        # 5c. The game itself, not only the view: a New Game started after the switch draws the new
        #     language's room menu (the intro's pages are tapped through, the same 60-frame cadence
        #     tools\lang-check.ps1 uses), and not the English one. 12M instructions reach the room.
        $roomEn = 'Make a Call'
        $roomText = Translation $offered[1] $roomEn
        if ($roomText -eq '') {
            Ok ("{0} does not translate the room menu - SKIP the game-side check" -f $offered[1])
        } else {
            $taps = @('# settings-check: fire taps')
            for ($f = 10; $f -le 20000; $f += 60) { $taps += "$f 1 0xFFFF"; $taps += "$($f + 6) 0 0xFFFF" }
            Set-Content -Path (Join-Path $Work 'advance.txt') -Value $taps -Encoding ascii
            $startIni | Set-Content -Encoding ascii $ini           # the run starts English
            @"
40 $($settingsButton[0]) $($settingsButton[1]) 1
44 $($settingsButton[0]) $($settingsButton[1]) 0
60 $($langUp[0]) $($langUp[1]) 1
64 $($langUp[0]) $($langUp[1]) 0
80 $($back[0]) $($back[1]) 1
84 $($back[0]) $($back[1]) 0
100 $($newGameButton[0]) $($newGameButton[1]) 1
104 $($newGameButton[0]) $($newGameButton[1]) 0
"@ | Set-Content -Encoding ascii (Join-Path $Work 'clicks-game.txt')
            $game = (& $Exe $Image 12000000 --data $DataDir --titlekey 14 --textlog `
                     --mouse (Join-Path $Work 'clicks-game.txt') `
                     --input (Join-Path $Work 'advance.txt') 2>&1 | Out-String)
            Set-Content -Path (Join-Path $Work 'language-game.log') -Value $game
            if ($game -notmatch ('title: language {0} \(2 of \d+, frame 60\)' -f $offered[1])) {
                Fail 'the run did not switch the language before starting the game'
            } elseif ($game -notmatch [regex]::Escape('"' + (Drawn $roomText) + '"')) {
                Fail ("the game started after the switch did not draw {0} ('{1}')" -f
                      $offered[1], $roomText)
            } elseif ($game -match [regex]::Escape('"' + $roomEn + '"')) {
                Fail 'the game started after the switch still drew the English room menu'
            } else {
                Ok ("the game started after the switch draws {0} ('{1}')" -f $offered[1], $roomText)
            }
        }
        # 5d. A release's first start. There `lang\` holds the shipped translations and nothing
        #     else - `en.csv` / `en_ant.csv` are written by the game itself on that start, so the
        #     completeness scan has no source text and the add-on's half cannot be measured. Picking
        #     a language then still has to work: that is the folder shape a player has, and it is
        #     the one the development tree never shows (its `lang\` carries both source files).
        $rel = Join-Path $Work 'release'
        if (Test-Path $rel) { Remove-Item -LiteralPath $rel -Recurse -Force }
        $relLang = Join-Path $rel 'lang'
        New-Item -ItemType Directory -Force -Path $relLang | Out-Null
        $code = $offered[1]
        Copy-Item -LiteralPath (Join-Path $root "lang\$code.csv") -Destination $relLang
        if (Test-Path (Join-Path $root "lang\${code}_ant.csv")) {
            Copy-Item -LiteralPath (Join-Path $root "lang\${code}_ant.csv") -Destination $relLang
        }
        Copy-Item -LiteralPath $Exe -Destination (Join-Path $rel 'It Came from the Desert.exe')
        $relExe = (Resolve-Path (Join-Path $rel 'It Came from the Desert.exe')).Path
        $script:frame = 40
        $firstLines = New-Object System.Collections.Generic.List[string]
        function FirstClick([int[]]$at)
        {
            $script:firstLines.Add(("{0} {1} {2} 1" -f $script:frame, $at[0], $at[1]))
            $script:firstLines.Add(("{0} {1} {2} 0" -f ($script:frame + 4), $at[0], $at[1]))
            $script:frame += 20
        }
        FirstClick $settingsButton
        FirstClick $langUp
        FirstClick $back
        FirstClick $quit
        $firstLines | Set-Content -Encoding ascii (Join-Path $Work 'clicks-first.txt')
        $firstClicks = (Resolve-Path (Join-Path $Work 'clicks-first.txt')).Path
        # Started from its own folder, as a double-click starts it - a run from the repository root
        # would find the development tree's `lang\en.csv` in the working directory and scan with a
        # source text, which is exactly what a release's first start does not have.
        Push-Location $rel
        try {
            $first = (& $relExe (Join-Path $root $Image) 3000000 --data (Join-Path $root $DataDir) `
                      --titlekey 14 --mouse $firstClicks 2>&1 | Out-String)
        }
        finally { Pop-Location }
        Set-Content -Path (Join-Path $Work 'first-start.log') -Value $first
        if ($first -match '\*\* crash') {
            Fail 'selecting a language on a release''s first start crashed the game'
        } elseif ($first -notmatch ('title: language {0} \(2 of \d+, frame \d+\)' -f $code)) {
            Fail 'selecting a language on a release''s first start did not take'
        } elseif ($first -match 'is not complete for Antheads') {
            Fail 'the first start measured the add-on''s half against an empty line list'
        } else {
            Ok 'a release''s first start selects a language, add-on''s half included'
        }
        $startIni | Set-Content -Encoding ascii $ini           # the rest of the check runs English
    }

    # 6. A measurement run never shows the menu.
    $plain = (& $Exe $Image 2000000 --data $DataDir 2>&1 | Out-String)
    Set-Content -Path (Join-Path $Work 'measurement.log') -Value $plain
    if ($plain -match 'title: settings|title: fullscreen|volume \d+/10|back to the main menu') {
        Fail 'a measurement run logged the settings menu (it is not inert)'
    } else { Ok 'a measurement run never shows the menu' }

    # 7. The window itself, where a desktop can give the game one: the toggle is not a file edit.
    #    The same click script runs with --window, and the window's own geometry is sampled while it
    #    runs: 320x200 first, the whole screen after the toggle, 320x200 again after the second one.
    #    No desktop (a headless machine) is a SKIP, like tools\keys-check.ps1.
    $startIni.Replace('fullscreen=true', 'fullscreen=false') | Set-Content -Encoding ascii $ini
    $sx = $settingsButton[0]
    $sy = $settingsButton[1]
    @"
40 $sx $sy 1
44 $sx $sy 0
60 256 90 1
64 256 90 0
120 256 90 1
124 256 90 0
160 266 170 1
164 266 170 0
180 266 171 1
184 266 171 0
"@ | Set-Content -Encoding ascii (Join-Path $Work 'geometry.txt')

    $win = @'
using System;
using System.Runtime.InteropServices;
public class ICFTDWindow {
    [StructLayout(LayoutKind.Sequential)] public struct RECT { public int Left, Top, Right, Bottom; }
    [DllImport("user32.dll", CharSet=CharSet.Unicode)] public static extern IntPtr FindWindow(string cls, string title);
    [DllImport("user32.dll")] public static extern bool GetClientRect(IntPtr h, out RECT r);
    [DllImport("user32.dll")] public static extern bool IsWindowVisible(IntPtr h);
    [DllImport("user32.dll")] public static extern bool PostMessage(IntPtr h, uint msg, IntPtr wp, IntPtr lp);
    [DllImport("user32.dll")] public static extern int GetSystemMetrics(int i);
}
'@
    if (-not ('ICFTDWindow' -as [type])) { Add-Type -TypeDefinition $win }
    $screenW = [ICFTDWindow]::GetSystemMetrics(0)
    $screenH = [ICFTDWindow]::GetSystemMetrics(1)

    $proc = Start-Process -FilePath (Resolve-Path $Exe).Path -PassThru -RedirectStandardOutput `
                (Join-Path $Work 'geometry.log') -ArgumentList @(
                $Image, '60000000', '--data', $DataDir, '--window', '--titlekey', '14',
                '--mouse', (Join-Path $Work 'geometry.txt'))
    $sizes = New-Object System.Collections.Generic.List[string]
    $seen = $false
    $hiddenRun = 0
    $hidden = $false
    for ($i = 0; $i -lt 120; $i++) {
        Start-Sleep -Milliseconds 50
        $h = [ICFTDWindow]::FindWindow('ICFTD', 'It Came from the Desert (recomp)')
        if ($h -ne [IntPtr]::Zero) {
            $seen = $true
            # The visible bit lives in the window style, so a mode change that builds the new style
            # without WS_VISIBLE hides the window the game is drawing into: the picture vanishes and
            # the taskbar shows no game, which reads as "the game closed". It cost a session.
            if ([ICFTDWindow]::IsWindowVisible($h)) { $hiddenRun = 0 }
            else { if (++$hiddenRun -ge 3) { $hidden = $true } }   # a mode change is one call; 150 ms hidden is not
            $r = New-Object ICFTDWindow+RECT
            [void][ICFTDWindow]::GetClientRect($h, [ref]$r)
            $size = "{0}x{1}" -f ($r.Right - $r.Left), ($r.Bottom - $r.Top)
            if ($sizes.Count -eq 0 -or $sizes[$sizes.Count - 1] -ne $size) { $sizes.Add($size) }
        }
        elseif ($proc.HasExited) { break }
        if ($seen -and $proc.HasExited) { break }
    }
    if (-not $seen) {
        Ok 'the window geometry is not measured (no desktop gave the game a window) - SKIP'
    } else {
        # The run ends with Quit Game's ten-second farewell, and its window is up until it closes:
        # the next run must not start while it is there, or FindWindow hands back the old window and
        # the key it posts lands in a game that is already saying goodbye.
        [void]$proc.WaitForExit(30000)
        Write-Output ("settings: the window was {0} (screen is {1}x{2})" -f ($sizes -join ' -> '), $screenW, $screenH)
        $want = @('320x200', ("{0}x{1}" -f $screenW, $screenH), '320x200')
        $ok = $sizes.Count -ge 3 -and $sizes[0] -eq $want[0] `
              -and ($sizes -contains $want[1]) -and ($sizes[$sizes.Count - 1] -eq $want[2])
        if (-not $ok) {
            Fail ("the fullscreen toggle did not take the live window {0} -> {1} -> {2}" -f
                  $want[0], $want[1], $want[2])
        } elseif ($hidden) {
            Fail 'a mode change hid the game window (the new style dropped WS_VISIBLE)'
        } else { Ok 'the toggle takes the live window to the whole screen and back, still visible' }

        # 8. Alt+Enter, the same switch with no click - and on the settings view, where it also has
        #    to leave the toggle showing what the window is. The run starts windowed, opens the view,
        #    and the key is posted once the view is up ("title: settings: ..." in its log), so the
        #    click that follows can only switch the window *back* if the view took the key's state.
        $startIni.Replace('fullscreen=true', 'fullscreen=false') | Set-Content -Encoding ascii $ini
        @"
40 $sx $sy 1
44 $sx $sy 0
250 256 90 1
254 256 90 0
300 266 170 1
304 266 170 0
340 266 171 1
344 266 171 0
"@ | Set-Content -Encoding ascii (Join-Path $Work 'alt-enter.txt')
        $altLog = Join-Path $Work 'alt-enter.log'
        $proc2 = Start-Process -FilePath (Resolve-Path $Exe).Path -PassThru -RedirectStandardOutput $altLog `
                    -ArgumentList @($Image, '60000000', '--data', $DataDir, '--window', '--titlekey', '14',
                                   '--mouse', (Join-Path $Work 'alt-enter.txt'))
        $h2 = [IntPtr]::Zero
        for ($i = 0; $i -lt 200; $i++) {
            Start-Sleep -Milliseconds 50
            $h2 = [ICFTDWindow]::FindWindow('ICFTD', 'It Came from the Desert (recomp)')
            if ($h2 -ne [IntPtr]::Zero) { break }
            if ($proc2.HasExited) { break }
        }
        $sizes2 = New-Object System.Collections.Generic.List[string]
        if ($h2 -ne [IntPtr]::Zero) {
            $r2 = New-Object ICFTDWindow+RECT
            [void][ICFTDWindow]::GetClientRect($h2, [ref]$r2)
            $sizes2.Add(("{0}x{1}" -f ($r2.Right - $r2.Left), ($r2.Bottom - $r2.Top)))
        }
        $viewUp = $false
        for ($i = 0; $i -lt 240 -and -not $viewUp; $i++) {
            Start-Sleep -Milliseconds 50
            if ((ReadLog $altLog) -match 'title: settings: music') { $viewUp = $true }
            if ($proc2.HasExited) { break }
        }
        if ($viewUp) {
            # Alt+Enter is a system key (WM_SYSKEYDOWN, VK_RETURN, scan 0x1C, the Alt context bit),
            # and a key is *level* state: the down has to live across a frame to be seen as a press.
            [void][ICFTDWindow]::PostMessage($h2, 0x0104, [IntPtr]13, [IntPtr]0x201C0001)
            Start-Sleep -Milliseconds 150
            [void][ICFTDWindow]::PostMessage($h2, 0x0105, [IntPtr]13, [IntPtr]0xC01C0001)
        }
        $deadline = [DateTime]::UtcNow.AddSeconds(14)
        while ([DateTime]::UtcNow -lt $deadline -and -not $proc2.HasExited -and $sizes2.Count -lt 3) {
            Start-Sleep -Milliseconds 50
            $hh = [ICFTDWindow]::FindWindow('ICFTD', 'It Came from the Desert (recomp)')
            if ($hh -eq [IntPtr]::Zero) { continue }
            $r2 = New-Object ICFTDWindow+RECT
            [void][ICFTDWindow]::GetClientRect($hh, [ref]$r2)
            $size2 = "{0}x{1}" -f ($r2.Right - $r2.Left), ($r2.Bottom - $r2.Top)
            if ($sizes2.Count -eq 0 -or $sizes2[$sizes2.Count - 1] -ne $size2) { $sizes2.Add($size2) }
        }
        [void]$proc2.WaitForExit(40000)
        $alt = Get-Content $altLog -Raw
        $want2 = @('320x200', ("{0}x{1}" -f $screenW, $screenH), '320x200')
        $geo2 = $sizes2.Count -ge 3 -and $sizes2[0] -eq $want2[0] -and $sizes2[1] -eq $want2[1] `
                -and $sizes2[2] -eq $want2[2]
        if (-not $viewUp) {
            Fail 'Alt+Enter: the settings view never came up (the run could not be measured)'
        } elseif ($alt -notmatch 'title: fullscreen on \(Alt\+Enter') {
            Fail 'Alt+Enter did not switch the window mode on the settings view'
        } elseif ($alt -notmatch 'title: fullscreen off \(frame \d+\)') {
            Fail 'the toggle click after Alt+Enter switched the window the wrong way (the view kept the old state)'
        } elseif ((Value $ini 'fullscreen') -ne '0') {
            Fail ("Alt+Enter left [VIDEO] fullscreen='{0}' in the ini, not the mode the toggle clicked back to" -f
                  (Value $ini 'fullscreen'))
        } elseif (-not $geo2) {
            Fail ("Alt+Enter did not take the live window {0} -> {1} -> {2} (saw {3})" -f
                  $want2[0], $want2[1], $want2[2], ($sizes2 -join ' -> '))
        } else {
            Ok 'Alt+Enter switches the window and the settings view takes its state (windowed -> screen -> windowed, ini follows)'
        }
    }
}
finally {
    if ($hadIni) { Copy-Item $backup $ini -Force }
    else { Remove-Item $ini -Force -ErrorAction SilentlyContinue }
}

if ($fail -ne 0) { Write-Output ("settings: {0} check(s) failed" -f $fail); exit 1 }
Write-Output 'settings: the menu opens, its four controls (the toggle, two volumes, the language) take effect and are saved, Back restores the menu, and Alt+Enter switches the window from anywhere'
exit 0
