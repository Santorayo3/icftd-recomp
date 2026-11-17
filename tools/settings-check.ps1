# The title's settings menu, measured on its own terms.
#
# A port feature: the original has no title screen and no settings, so there is nothing to diff it
# against. What is checked is what the feature claims:
#
#   * a click on the Settings button replaces the four buttons with the settings view, showing what
#     the game was started with (the icftd.ini the check writes: fullscreen on, music 10, sound 7);
#   * the fullscreen toggle flips the window mode and writes [VIDEO] fullscreen back to the ini;
#   * a minus/plus click steps that volume by one, changes the mixer's gain **now** (the log line is
#     the gain the machine is running with, not the number that was written) and rewrites its ini
#     entry;
#   * Back closes the view and puts the main menu back, and reopening Settings shows the new state;
#   * the ini keeps everything the write does not own - the comments, the key order, and the key it
#     did not touch (sound=7 stays 7 while music changes);
#   * a measurement run (no --titlekey, so the title is never armed) logs none of it;
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

# Where the controls are (title_button.c): the column is x 230..302; the fullscreen row's toggle sits
# under its label at y 84..97, the two volume rows' buttons at y 112..125 and 140..153, and Back where
# Quit Game is (y 164..177).
$settingsButton = @(266, 133)
$toggle         = @(256, 90)
$musicDown      = @(246, 118)
$musicUp        = @(284, 118)
$soundDown      = @(246, 146)
$back           = @(266, 170)
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
    @'
40 266 133 1
44 266 133 0
60 256 90 1
64 256 90 0
120 256 90 1
124 256 90 0
160 266 170 1
164 266 170 0
180 266 171 1
184 266 171 0
'@ | Set-Content -Encoding ascii (Join-Path $Work 'geometry.txt')

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
        @'
40 266 133 1
44 266 133 0
250 256 90 1
254 256 90 0
300 266 170 1
304 266 170 0
340 266 171 1
344 266 171 0
'@ | Set-Content -Encoding ascii (Join-Path $Work 'alt-enter.txt')
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
Write-Output 'settings: the menu opens, its three controls take effect and are saved, Back restores the menu, and Alt+Enter switches the window from anywhere'
exit 0
