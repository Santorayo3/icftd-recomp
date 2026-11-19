# Escape asks before it leaves the game, measured on its own terms.
#
# A port feature: the original has no title screen to go back to, so there is nothing to diff
# against. What is checked is what the feature claims:
#
#   * Escape in a played game does not leave it: the confirmation comes up with the requested text
#     ("Quit to title menu?", the buttons "Confirm" and "Cancel"), and nothing restarts yet;
#   * a click on Confirm takes the escape exactly as the key used to - the machine restarts onto
#     the port's title (the run ends on the title's hold point, its score started twice);
#   * a click on Cancel only closes the popup: no restart, the game keeps running;
#   * a measurement run (no --titlekey, so the title is never armed) keeps the old meaning of
#     Escape - the confirmation is never shown and the run stops;
#   * the picture itself, from a headless --dump: the raster differs from the same frame without
#     the popup only inside the plaque, the plaque's cyan surround is transparent (the reference's
#     pixels show through), and the mustard interior and white text are really there.
#
# The keys are pressed the way the other port checks press them: `--titlekey 0` starts the game,
# `--esc <frame>` presses Escape (a dev seam like --call), and `--mouse` clicks the popup.
#
#   powershell -ExecutionPolicy Bypass -File tools\quit-confirm-check.ps1
param(
    [string]$Exe = 'bin\win32\icftd-recomp.exe',
    [string]$DataDir = 'export',
    [string]$Image = 'export\code\dshell4k\dshell.img',
    [string]$Work = 'out\quit-confirm-check'
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
Set-Location $root

if (-not (Test-Path $Exe))   { Write-Output "quit-confirm: SKIP (no $Exe - build it with tools\build-host.ps1)"; exit 0 }
if (-not (Test-Path $Image)) { Write-Output "quit-confirm: SKIP (no $Image - run tools\extract.ps1)"; exit 0 }

New-Item -ItemType Directory -Force -Path $Work | Out-Null
Get-ChildItem $Work -Recurse -File -ErrorAction SilentlyContinue | Remove-Item -Force

$fail = 0
function Fail([string]$text) { Write-Output "FAIL quit-confirm: $text"; $script:fail++ }
function Ok([string]$text) { Write-Output "quit-confirm: $text" }

# The popup is 173x72 at the middle of the 320x200 picture (src\host\quit_confirm.c): its two
# buttons sit at y 102..115, Confirm at x 84..156 and Cancel at x 163..235, so their centres are
# 120,109 and 199,109.
$confirmX = 120; $cancelX = 199; $buttonY = 109

# The confirmation's labels are the port's own vocabulary, translated with the rest of the game;
# the run is put in English so the log says the words this check asks for. The ini is the one next
# to the executable, which is the one the game reads - put back afterwards.
$ini = Join-Path (Split-Path -Parent (Resolve-Path $Exe)) 'icftd.ini'
$hadIni = Test-Path $ini
$iniBackup = Join-Path $Work 'icftd.ini.backup'
if ($hadIni) { Copy-Item $ini $iniBackup -Force }
$iniText = if ($hadIni) { Get-Content $ini -Raw } else { "; quit-confirm-check`r`n[GAME]`r`n" }
if ($iniText -match '(?m)^\s*language\s*=') {
    $iniText = $iniText -replace '(?m)^\s*language\s*=.*$', 'language=en'
} elseif ($iniText -match '(?m)^\s*\[GAME\]\s*$') {
    $iniText = $iniText -replace '(?m)^(\s*\[GAME\]\s*)$', "`$1`r`nlanguage=en"
} else {
    $iniText = $iniText.TrimEnd() + "`r`n`r`n[GAME]`r`nlanguage=en`r`n"
}
Set-Content -LiteralPath $ini -Value $iniText -NoNewline -Encoding ascii

try {
    # --- 1. Escape asks, and Confirm takes the escape -----------------------------------------
    $click = Join-Path $Work 'confirm.txt'
    @("201 $confirmX $buttonY 0", "203 $confirmX $buttonY 1", "205 $confirmX $buttonY 0") |
        Set-Content -Encoding ascii $click
    $out = (& $Exe $Image 12000000 --data $DataDir --titlekey 0 --esc 200 --mouse $click 2>&1 |
            Out-String)
    Set-Content -Path (Join-Path $Work 'confirm.log') -Value $out

    if ($out -notmatch "quit: confirmation shown \(frame 200\): 'Quit to title menu\?' \[Confirm\] \[Cancel\]") {
        Fail 'Escape did not show the requested question and buttons'
    } else { Ok 'Escape shows "Quit to title menu?" with the Confirm and Cancel buttons' }

    if ($out -notmatch 'quit: confirmation confirmed \(frame 203\)') {
        Fail 'the click on Confirm was not taken'
    } else { Ok 'a click on Confirm takes the escape' }

    if ($out -notmatch 'recomp: restarting the game') {
        Fail 'Confirm did not restart the game'
    } elseif (([regex]::Matches($out, 'title: the map screen''s score starts under the title')).Count -lt 2) {
        Fail 'Confirm did not bring the title back'
    } elseif ($out -notmatch 'stopped at 0xd870') {
        Fail 'the restart did not end on the title''s hold point'
    } else {
        Ok 'Confirm restarts the machine onto the title screen, as Escape used to'
    }

    # --- 2. Cancel only closes it ---------------------------------------------------------------
    $click = Join-Path $Work 'cancel.txt'
    @("201 $cancelX $buttonY 0", "203 $cancelX $buttonY 1", "205 $cancelX $buttonY 0") |
        Set-Content -Encoding ascii $click
    $out = (& $Exe $Image 12000000 --data $DataDir --titlekey 0 --esc 200 --mouse $click 2>&1 |
            Out-String)
    Set-Content -Path (Join-Path $Work 'cancel.log') -Value $out

    if ($out -notmatch 'quit: confirmation cancelled \(button, frame 203\)') {
        Fail 'the click on Cancel did not close the popup'
    } elseif ($out -match 'recomp: restarting the game') {
        Fail 'Cancel restarted the game'
    } elseif ([regex]::Matches($out, 'title: the map screen''s score starts under the title').Count -ne 1) {
        Fail 'Cancel disturbed the title''s own run (it came back without a restart)'
    } else {
        $m = [regex]::Match($out, 'stopped at [0-9a-fx]+ after \d+ instruction\(s\), frame (\d+)')
        if (-not $m.Success -or [int]$m.Groups[1].Value -lt 1000) {
            Fail 'the game did not keep running after Cancel'
        } else {
            Ok ("Cancel only closes the popup; the game runs on to frame {0}" -f $m.Groups[1].Value)
        }
    }

    # --- 3. a measurement run is not disturbed --------------------------------------------------
    $out = (& $Exe $Image 3000000 --data $DataDir --esc 200 2>&1 | Out-String)
    Set-Content -Path (Join-Path $Work 'measurement.log') -Value $out
    if ($out -match 'quit: confirmation') {
        Fail 'a measurement run showed the confirmation (the seam is not inert)'
    } elseif ($out -match 'recomp: restarting the game') {
        Fail 'Escape restarted a measurement run'
    } elseif ($out -notmatch 'escape at frame 200') {
        Fail 'the escape seam never fired in the measurement run'
    } else {
        Ok 'a measurement run is not asked and stops, as Escape always did'
    }

    # --- 4. the picture itself -----------------------------------------------------------------
    # Two rasters of the same frame: one with the popup (Escape at 200, the confirm click pushed to
    # 215 so the dump at 205 is still under it) and one without. The frames are the same machine
    # state - the key does not touch the game - so the only difference is the overlay.
    $late = Join-Path $Work 'confirm-late.txt'
    @("201 $confirmX $buttonY 0", "215 $confirmX $buttonY 1", "217 $confirmX $buttonY 0") |
        Set-Content -Encoding ascii $late
    $refPrefix = Join-Path $Work 'ref-'
    $popPrefix = Join-Path $Work 'pop-'
    $null = & $Exe $Image 12000000 --data $DataDir --titlekey 0 --mouse $late `
                --dump $refPrefix 1 --dumpfrom 205 2>&1
    $popOut = (& $Exe $Image 12000000 --data $DataDir --titlekey 0 --esc 200 --mouse $late `
                --dump $popPrefix 1 --dumpfrom 205 2>&1 | Out-String)
    Set-Content -Path (Join-Path $Work 'picture.log') -Value $popOut

    $refBmp = Join-Path $Work 'ref-000205.bmp'
    $popBmp = Join-Path $Work 'pop-000205.bmp'
    if (-not (Test-Path $refBmp) -or -not (Test-Path $popBmp)) {
        Fail 'the two rasters of frame 205 were not written'
    } else {
        Add-Type -AssemblyName System.Drawing
        Add-Type -TypeDefinition @'
using System;
using System.Drawing;
using System.Drawing.Imaging;
using System.Runtime.InteropServices;

public static class QuitConfirmRaster
{
    public struct Stats
    {
        public int W, H, OutsideChanged, InsideChanged, Mustard, White, Transparent, TransparentChanged;
    }

    static byte[] Pixels(string path, out int w, out int h)
    {
        using (Bitmap bmp = new Bitmap(path))
        {
            w = bmp.Width;
            h = bmp.Height;
            BitmapData d = bmp.LockBits(new Rectangle(0, 0, w, h), ImageLockMode.ReadOnly,
                                        PixelFormat.Format32bppArgb);
            try
            {
                byte[] raw = new byte[d.Stride * h];
                Marshal.Copy(d.Scan0, raw, 0, raw.Length);
                return raw;
            }
            finally { bmp.UnlockBits(d); }
        }
    }

    /* The art's own palette indices, one per pixel. */
    static byte[] Indexed(string path, out int w, out int h)
    {
        using (Bitmap bmp = new Bitmap(path))
        {
            w = bmp.Width;
            h = bmp.Height;
            bool four = bmp.PixelFormat == PixelFormat.Format4bppIndexed;
            BitmapData d = bmp.LockBits(new Rectangle(0, 0, w, h), ImageLockMode.ReadOnly,
                                        bmp.PixelFormat);
            try
            {
                byte[] raw = new byte[d.Stride * h];
                Marshal.Copy(d.Scan0, raw, 0, raw.Length);
                byte[] idx = new byte[w * h];
                for (int y = 0; y < h; y++)
                    for (int x = 0; x < w; x++)
                        idx[y * w + x] = four
                            ? (byte)(((x & 1) == 0 ? raw[y * d.Stride + x / 2] >> 4
                                                   : raw[y * d.Stride + x / 2]) & 0x0F)
                            : raw[y * d.Stride + x];
                return idx;
            }
            finally { bmp.UnlockBits(d); }
        }
    }

    /* The plaque is 173x72 in the middle of the picture. Inside it, the mustard interior and the
     * white text are what the artwork contributes; the pixels the PNG marks with its top-left key
     * colour (the cyan surround) must leave the reference's own pixels untouched. */
    public static Stats Compare(string refPath, string popPath, string pngPath)
    {
        Stats s = new Stats();
        int w1, h1, w2, h2, aw, ah;
        byte[] a = Pixels(refPath, out w1, out h1);
        byte[] b = Pixels(popPath, out w2, out h2);
        byte[] art = Indexed(pngPath, out aw, out ah);
        byte key = art[0];
        s.W = w1; s.H = h1;
        int x0 = (w1 - aw) / 2, y0 = (h1 - ah) / 2;
        int stride = w1 * 4;
        for (int y = 0; y < h1; y++)
            for (int x = 0; x < w1; x++)
            {
                int o = y * stride + x * 4;
                bool same = a[o] == b[o] && a[o + 1] == b[o + 1] && a[o + 2] == b[o + 2];
                bool inside = x >= x0 && x < x0 + aw && y >= y0 && y < y0 + ah;
                if (!same) { if (inside) s.InsideChanged++; else s.OutsideChanged++; }
                if (inside)
                {
                    if (b[o + 2] == 181 && b[o + 1] == 132 && b[o + 0] == 0) s.Mustard++;
                    if (b[o] > 224 && b[o + 1] > 224 && b[o + 2] > 224) s.White++;
                    if (art[(y - y0) * aw + (x - x0)] == key)
                    {
                        s.Transparent++;
                        if (!same) s.TransparentChanged++;
                    }
                }
            }
        return s;
    }
}
'@ -ReferencedAssemblies System.Drawing
        $s = [QuitConfirmRaster]::Compare((Resolve-Path $refBmp).Path, (Resolve-Path $popBmp).Path,
                                         (Resolve-Path 'assets\quit_confirm.png').Path)
        if ($s.W -ne 320 -or $s.H -ne 200) {
            Fail ("the raster is {0}x{1}, not the 320x200 picture" -f $s.W, $s.H)
        } elseif ($s.OutsideChanged -ne 0) {
            Fail ("the popup changed {0} pixel(s) outside its plaque" -f $s.OutsideChanged)
        } elseif ($s.InsideChanged -lt 4000) {
            Fail ("only {0} pixel(s) of the plaque were drawn" -f $s.InsideChanged)
        } elseif ($s.Transparent -eq 0) {
            Fail 'the picture has no key colour, so nothing can be transparent'
        } elseif ($s.TransparentChanged -ne 0) {
            Fail ("{0} of the plaque's {1} cyan key pixels were painted instead of showing the picture through" -f
                  $s.TransparentChanged, $s.Transparent)
        } elseif ($s.Mustard -lt 1000) {
            Fail ("only {0} mustard pixel(s) - the plaque's interior is missing" -f $s.Mustard)
        } elseif ($s.White -lt 200) {
            Fail ("only {0} white pixel(s) - the question and the labels are missing" -f $s.White)
        } else {
            Ok ("the plaque is drawn inside its 173x72 rect ($($s.InsideChanged) pixel(s)), all " +
                "$($s.Transparent) cyan key pixels are transparent, and its mustard and white text are there")
        }
    }
} finally {
    if ($hadIni) { Copy-Item $iniBackup $ini -Force }
    else { Remove-Item $ini -Force -ErrorAction SilentlyContinue }
}

if ($fail -ne 0) { Write-Output ("quit-confirm: {0} check(s) failed" -f $fail); exit 1 }
Write-Output 'quit-confirm: Escape asks first; Confirm restarts onto the title, Cancel stays in the game'
exit 0
