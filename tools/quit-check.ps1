# The title's Quit Game farewell, measured on its own terms.
#
# A port feature: the original has no title screen and no quit notice, so there is nothing to diff
# against. What is checked is what the feature claims:
#
#   * a click on Quit Game does not close the application at once: the menu is replaced by a black
#     screen with the two requested lines in the game's own font, centred on the picture, and the
#     application closes after ten seconds of the machine's 50 Hz - 500 frames, not a frame early;
#   * the two lines are the requested text, in the order they were asked for;
#   * every line is broken to fit the 320-pixel picture (title_notice_wrap), in *every* language the
#     game offers, not just the English: a translation is longer than the English it was made from,
#     and a line wider than the picture used to be drawn off both edges;
#   * a measurement run (no --titlekey, so the title is never armed) never logs the notice and never
#     draws it - the seam is inert unless the game is being played;
#   * where a desktop can give the game a window, the screen itself is sampled while the notice is
#     up: black at the corners, white text pixels whose bounding box is at the centre of the
#     320x200 picture and inside its margin, and none of the title art's colours anywhere (a
#     headless machine SKIPs this part, like tools\settings-check.ps1).
#
# The menu is reached the way the other title checks reach it: `--titlekey 14` puts the menu up for
# the run's `--mouse` script, which clicks Quit Game.
#
#   powershell -ExecutionPolicy Bypass -File tools\quit-check.ps1
param(
    [string]$Exe = 'bin\win32\icftd-recomp.exe',
    [string]$DataDir = 'export',
    [string]$Image = 'export\code\dshell4k\dshell.img',
    [string]$Work = 'out\quit-check'
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
Set-Location $root

if (-not (Test-Path $Exe))   { Write-Output "quit: SKIP (no $Exe - build it with tools\build-host.ps1)"; exit 0 }
if (-not (Test-Path $Image)) { Write-Output "quit: SKIP (no $Image - run tools\extract.ps1)"; exit 0 }

New-Item -ItemType Directory -Force -Path $Work | Out-Null
Get-ChildItem $Work -Recurse -File -ErrorAction SilentlyContinue | Remove-Item -Force

$fail = 0
function Fail([string]$text) { Write-Output "FAIL quit: $text"; $script:fail++ }
function Ok([string]$text) { Write-Output "quit: $text" }

# Quit Game's button is at x 230..302, y 164..177 (title_button.c): a press and release at its
# centre. The menu is up after one title tick, so frame 40 is the same click the other checks use.
@'
40 266 171 1
44 266 171 0
'@ | Set-Content -Encoding ascii (Join-Path $Work 'clicks.txt')

$line1 = 'Check out my spiritual successor "It Returned to the Desert"'
$line2 = 'Available on Steam and itch.io'

# The settings file the executable reads is the one next to it (rt_config_ensure): the check owns it
# while it runs - a language is selected through it - and puts the player's own file back afterwards
# (tools\lang-check.ps1 does the same).
$ini = Join-Path (Split-Path -Parent (Resolve-Path $Exe)) 'icftd.ini'
$backup = Join-Path $Work 'icftd.ini.backup'
$hadIni = Test-Path $ini
if ($hadIni) { Copy-Item $ini $backup -Force }

function Set-Language([string]$code, [string]$fullscreen) {
    $text = "; quit-check`r`n`r`n[VIDEO]`r`nfullscreen=$fullscreen`r`n`r`n[GAME]`r`nlanguage=$code`r`n"
    Set-Content -LiteralPath $ini -Value $text -NoNewline -Encoding ascii
}

# Every language the game offers: English itself, plus one per two-letter `<code>.csv` beside the
# repository's `lang\` folder. The notice is measured in each of them, because it is a translation -
# longer than the English it was made from - that used to run off the 320-pixel picture.
$langs = @('en')
$langDir = Join-Path $root 'lang'
if (Test-Path $langDir) {
    Get-ChildItem $langDir -Filter '*.csv' |
        Where-Object { $_.BaseName -match '^[a-z]{2}$' } |
        ForEach-Object { if ($langs -notcontains $_.BaseName) { $langs += $_.BaseName } }
}

try {
    # --- 1. what the click does, for how long, and whether the text fits ----------------------
    $first = $true
    $widest = @{}
    foreach ($code in $langs) {
        Set-Language $code '1'
        $sw = [System.Diagnostics.Stopwatch]::StartNew()
        $out = (& $Exe $Image 3000000 --data $DataDir --titlekey 14 --mouse (Join-Path $Work 'clicks.txt') 2>&1 | Out-String)
        $sw.Stop()
        Set-Content -Path (Join-Path $Work "run-$code.log") -Value $out

        $start = [regex]::Match($out, 'title: quit game: showing the notice for (\d+) frame\(s\) \(frame (\d+)\)')
        $end = [regex]::Match($out, 'title: quit game: closing after (\d+) frame\(s\) \(frame (\d+)\)')
        if (-not $start.Success) { Fail "language ${code}: a click on Quit Game did not show the notice" }
        elseif (-not $end.Success) { Fail "language ${code}: the notice did not end" }
        else {
            $frames = [int]$start.Groups[1].Value
            $shown = [int]$end.Groups[1].Value
            $from = [int]$start.Groups[2].Value
            $to = [int]$end.Groups[2].Value
            if ($frames -ne 500 -or $shown -ne 500) {
                Fail ("{0}: the notice lasted {1} frame(s) (logged {2}), not the 500 of ten seconds" -f $code, $frames, $shown)
            } elseif ($to -ne $from + 500) {
                Fail ("{0}: the notice went from frame {1} to {2}, not 500 frames" -f $code, $from, $to)
            } elseif ($first) {
                Ok 'a click on Quit Game shows the notice for 500 frames, ten seconds at 50 Hz, then closes'
            }
        }
        if ($out -notmatch ('title: quit game: line 1: ' + [regex]::Escape($line1))) {
            Fail "language ${code}: the notice does not draw the requested successor line"
        } elseif ($out -notmatch ('title: quit game: line 2: ' + [regex]::Escape($line2))) {
            Fail "language ${code}: the notice does not draw the requested availability line"
        } elseif ($first) {
            Ok 'the notice draws the two requested lines'
        }

        # The picture is 320 pixels wide and the text is centred in a margin, so every line the
        # drawing uses has to be inside 320 - 2 * 8 pixels - the run says what it laid out.
        $fit = [regex]::Match($out, 'title: quit game: the (\d+)-pixel picture takes (\d+) line\(s\), widest (\d+) of (\d+)')
        if (-not $fit.Success) {
            Fail "language ${code}: the notice did not report its layout"
        } elseif ([int]$fit.Groups[1].Value -ne 320 -or [int]$fit.Groups[4].Value -ne 304) {
            Fail ("language ${code}: the notice reports a {0}-pixel picture with {1} usable, not 320 with 304" -f
                  $fit.Groups[1].Value, $fit.Groups[4].Value)
        } elseif ([int]$fit.Groups[2].Value -lt 1) {
            Fail "language ${code}: the notice laid out no line at all"
        } elseif ([int]$fit.Groups[3].Value -gt [int]$fit.Groups[4].Value) {
            Fail ("language ${code}: its widest line is {0} pixels, more than the {1} the picture gives it" -f
                  $fit.Groups[3].Value, $fit.Groups[4].Value)
        } else {
            Ok ("language {0}: {1} line(s), widest {2} of {3} pixels" -f
                $code, $fit.Groups[2].Value, $fit.Groups[3].Value, $fit.Groups[4].Value)
            $widest[$code] = [int]$fit.Groups[3].Value
        }

        if ($LASTEXITCODE -ne 0) { Fail ("language ${code}: the run exited with $LASTEXITCODE") }
        if ($out -notmatch 'recomp: stopped at 0xd870') { Fail "language ${code}: the run did not end on the title's hold point" }
        if ($first) {
            if ($sw.Elapsed.TotalSeconds -lt 9.0) {
                Fail ("the notice lasted {0:N1} s of wall time, not the ten seconds the machine paces" -f $sw.Elapsed.TotalSeconds)
            } else {
                Ok ("the ten seconds are real time, not 500 frames run as fast as the host can ({0:N1} s)" -f $sw.Elapsed.TotalSeconds)
            }
        }
        $first = $false
    }

    # --- 2. a measurement run is not disturbed -------------------------------------------------
    $plain = (& $Exe $Image 2000000 --data $DataDir 2>&1 | Out-String)
    Set-Content -Path (Join-Path $Work 'measurement.log') -Value $plain
    if ($plain -match 'quit game|showing the notice') {
        Fail 'a measurement run logged the quit notice (the seam is not inert)'
    } else {
        Ok 'a measurement run never shows the notice'
    }

    # --- 3. the screen itself, where a desktop can give the game a window ----------------------
    # The notice is sampled in the language whose line came closest to the margin, which is the one
    # that tests it hardest, and a 320x200 window makes the notice exactly the picture, not a scaled
    # 4:3 rectangle.
    $noticeLang = if ($widest.Count -gt 0) {
        ($widest.GetEnumerator() | Sort-Object Value -Descending | Select-Object -First 1).Key
    } else {
        'en'
    }
    Ok ("the screen is sampled in language {0}" -f $noticeLang)
    Set-Language $noticeLang '0'

$src = @'
using System;
using System.Drawing;
using System.Drawing.Imaging;
using System.Runtime.InteropServices;

public static class QuitNoticeCheck
{
    [StructLayout(LayoutKind.Sequential)]
    public struct RECT { public int Left, Top, Right, Bottom; }

    [DllImport("user32.dll", CharSet = CharSet.Unicode)]
    public static extern IntPtr FindWindow(string cls, string title);
    [DllImport("user32.dll")]
    public static extern bool GetClientRect(IntPtr hwnd, out RECT r);
    [DllImport("user32.dll")]
    public static extern bool PrintWindow(IntPtr hwnd, IntPtr dc, uint flags);

    public struct Stats
    {
        public int W, H, Black, White, MinX, MinY, MaxX, MaxY, CornerBlack;
    }

    /* The client area the window is drawing into. PW_CLIENTONLY (1) keeps the frame out. */
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

    /* Black and white shares, and the bounding box of the white text. */
    public static Stats Analyze(Bitmap bmp)
    {
        Stats s = new Stats();
        s.W = bmp.Width;
        s.H = bmp.Height;
        s.MinX = int.MaxValue; s.MinY = int.MaxValue;
        s.MaxX = -1; s.MaxY = -1;
        BitmapData d = bmp.LockBits(new Rectangle(0, 0, s.W, s.H), ImageLockMode.ReadOnly,
                                    PixelFormat.Format32bppArgb);
        try
        {
            byte[] raw = new byte[d.Stride * s.H];
            Marshal.Copy(d.Scan0, raw, 0, raw.Length);
            for (int y = 0; y < s.H; y++)
                for (int x = 0; x < s.W; x++)
                {
                    int o = y * d.Stride + x * 4;
                    int b = raw[o], g = raw[o + 1], r = raw[o + 2];
                    bool black = r < 24 && g < 24 && b < 24;
                    bool white = r > 224 && g > 224 && b > 224;
                    if (black) s.Black++;
                    if (white)
                    {
                        s.White++;
                        if (x < s.MinX) s.MinX = x;
                        if (x > s.MaxX) s.MaxX = x;
                        if (y < s.MinY) s.MinY = y;
                        if (y > s.MaxY) s.MaxY = y;
                    }
                    if ((x == 0 || x == s.W - 1) && (y == 0 || y == s.H - 1) && black)
                        s.CornerBlack++;
                }
        }
        finally { bmp.UnlockBits(d); }
        return s;
    }
}
'@
if (-not ('QuitNoticeCheck' -as [type])) {
    Add-Type -AssemblyName System.Drawing
    Add-Type -TypeDefinition $src -ReferencedAssemblies System.Drawing
}

    # A 320x200 windowed run (the file Set-Language just wrote has no window size in it, so the
    # game opens at the picture's own size and a size a previous run wrote back is not inherited).
    $winLog = Join-Path $Work 'window.log'
    $proc = Start-Process -FilePath (Resolve-Path $Exe).Path -PassThru `
                -RedirectStandardOutput $winLog -ArgumentList @(
                $Image, '3000000', '--data', $DataDir, '--window', '--titlekey', '14',
                '--mouse', (Join-Path $Work 'clicks.txt'))

    $stats = $null
    $sawWindow = $false
    for ($i = 0; $i -lt 120; $i++) {
        Start-Sleep -Milliseconds 200
        $h = [QuitNoticeCheck]::FindWindow('ICFTD', 'It Came from the Desert (recomp)')
        if ($h -ne [IntPtr]::Zero) {
            $sawWindow = $true
            $bmp = [QuitNoticeCheck]::Capture($h)
            if ($bmp -ne $null) {
                $s = [QuitNoticeCheck]::Analyze($bmp)
                if ($s.W -gt 0 -and $s.Black -ge [int]($s.W * $s.H * 0.95) -and $s.White -ge 100) {
                    $stats = $s
                    $bmp.Save((Join-Path $Work 'notice.png'), [System.Drawing.Imaging.ImageFormat]::Png)
                }
                $bmp.Dispose()
                if ($stats -ne $null) { break }
            }
        }
        if ($proc.HasExited) { break }
    }

    if (-not $sawWindow) {
        Ok 'the notice pixels are not measured (no desktop gave the game a window) - SKIP'
    } elseif ($stats -eq $null) {
        Fail 'the window never showed the black notice with the white text'
    } else {
        $total = $stats.W * $stats.H
        $blackShare = [double]$stats.Black / $total
        $cx = ($stats.MinX + $stats.MaxX) / 2.0
        $cy = ($stats.MinY + $stats.MaxY) / 2.0
        if ($stats.W -ne 320 -or $stats.H -ne 200) {
            Fail ("the notice window is {0}x{1}, not the title's 320x200" -f $stats.W, $stats.H)
        } elseif ($stats.CornerBlack -ne 4) {
            Fail ("only {0} of the 4 corners are black - the title art is still showing" -f $stats.CornerBlack)
        } elseif ($blackShare -lt 0.95) {
            Fail ("only {0:P1} of the screen is black, not the notice's background" -f $blackShare)
        } elseif ($stats.White -lt 100) {
            Fail ("only {0} white pixel(s) - the notice's text is missing" -f $stats.White)
        } elseif ($cx -lt 145 -or $cx -gt 175 -or $cy -lt 85 -or $cy -gt 115) {
            Fail ("the text's centre is {0:N1},{1:N1}, not the middle of the 320x200 picture" -f $cx, $cy)
        } elseif ($stats.MinX -lt 4 -or $stats.MaxX -gt 315 -or $stats.MinY -lt 4 -or $stats.MaxY -gt 195) {
            Fail ("the text spans x {0}..{1}, y {2}..{3} - it runs off the picture or its margin" -f
                  $stats.MinX, $stats.MaxX, $stats.MinY, $stats.MaxY)
        } else {
            Ok ("the screen is {0:P1} black with {1} white text pixels centred at {2:N0},{3:N0} inside x {4}..{5}" -f
                $blackShare, $stats.White, $cx, $cy, $stats.MinX, $stats.MaxX)
        }
    }

    if (-not $proc.WaitForExit(25000)) {
        Fail 'the windowed run did not close after the notice'
        try { $proc.Kill() } catch { }
    } else {
        # Start-Process's process object does not expose ExitCode here, so the run's own log is
        # what says it ended normally - on the title's hold point, as every played run does.
        $winOut = if (Test-Path $winLog) { Get-Content $winLog -Raw } else { '' }
        if ($winOut -notmatch 'title: quit game: closing after 500 frame\(s\)') {
            Fail 'the windowed run did not log the notice ending'
        } elseif ($winOut -notmatch 'recomp: stopped at 0xd870') {
            Fail 'the windowed run did not end on the title''s hold point'
        } else {
            Ok 'the window closed by itself after the notice'
        }
    }
} finally {
    if ($hadIni) { Copy-Item $backup $ini -Force }
    else { Remove-Item $ini -Force -ErrorAction SilentlyContinue }
}

if ($fail -ne 0) { Write-Output ("quit: {0} check(s) failed" -f $fail); exit 1 }
Write-Output 'quit: Quit Game shows the ten-second notice on black, every line inside the picture, and closes'
exit 0
