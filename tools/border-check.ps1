# The border behind the game view (a port feature): the platform's own pixels, none of the machine's.
#
#   powershell -ExecutionPolicy Bypass -File tools\border-check.ps1
#
# Fullscreen keeps the 320x200 picture at 4:3; the bars either side are painted with the port's
# artwork (border.c) instead of black. There is nothing in the original to diff this against, so
# the feature has to hold on its own terms - three claims, all measured:
#
#   1. src\runtime\plat\win32\border_art.h is assets\border.png byte for byte. The header is
#      generated (tools\mkborder.ps1) and the picture is not in git, so this is what catches a
#      stale table or a converter that drops a channel.
#   2. The shipped border_paint is point sampling and nothing else: for several window sizes -
#      including one smaller than the picture, so the downscale is covered - every output pixel
#      equals the input pixel at (x*W/w, y*H/h). An interpolating scale fails this on the first
#      non-uniform pixel, which is the "do not blur the pixel art" requirement.
#   3. On a widescreen window the bars are curtain, not black: at 16:9 and 16:10 every bar pixel
#      comes from the artwork's curtain. (A 21:9 window honestly reports the fraction instead: the
#      artwork's own black centre shows next to the picture there, by the way it was drawn.)
#
# Claim 2 runs the real C: border.c is compiled with the build scripts' flags and a generated
# driver dumps the frame the platform would put on the screen. SKIPs when the picture or Open
# Watcom is missing; the picture is user-supplied, the compiler is what the other steps need too.
param(
    [string]$Png = 'assets\border.png',
    [string]$Header = 'src\runtime\plat\win32\border_art.h',
    [string]$Work = 'out\border-check',
    [string]$WatcomHome = $(if ($env:WATCOM) { $env:WATCOM } else { 'H:\Meine Programme\Open Watcom' })
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
Set-Location $root

# window, and the least share of the bar that must be curtain ('' = report only). 2048x1152 is this
# machine's screen, 3840x2160 the common 4K panel, 1680x1050 is 16:10, 2560x1080 is 21:9, 320x200
# is the windowed size (no bars) and 256x144 scales the picture down.
$sizes = @(
    @{ w = 2048; h = 1152; min = 0.99 },
    @{ w = 1920; h = 1080; min = 0.99 },
    @{ w = 3840; h = 2160; min = 0.99 },
    @{ w = 1680; h = 1050; min = 0.99 },
    @{ w = 2560; h = 1080; min = $null },
    @{ w = 320;  h = 200;  min = $null },
    @{ w = 256;  h = 144;  min = 0.99 }
)

if (-not (Test-Path $Header)) { Write-Output "FAIL border: no $Header - run tools\mkborder.ps1"; exit 1 }
if (-not (Test-Path $Png)) { Write-Output "border: SKIP (no $Png)"; exit 0 }

Add-Type -AssemblyName System.Drawing
Add-Type -TypeDefinition @'
using System;
using System.Drawing;
using System.Drawing.Imaging;
using System.Globalization;
using System.IO;
using System.Text;
using System.Text.RegularExpressions;

public static class BorderCheck
{
    static int[] s_img;
    static int s_w, s_h;

    static string Hex(int rgb) { return "#" + rgb.ToString("x6"); }

    static int[] LoadHeader(string path, out int w, out int h, out int runs)
    {
        string text = File.ReadAllText(path);
        w = int.Parse(Regex.Match(text, @"#define BORDER_W (\d+)").Groups[1].Value);
        h = int.Parse(Regex.Match(text, @"#define BORDER_H (\d+)").Groups[1].Value);
        runs = int.Parse(Regex.Match(text, @"#define BORDER_RUNS (\d+)").Groups[1].Value);
        Match m = Regex.Match(text, @"g_borderRuns\[BORDER_RUNS \* 4\]\s*=\s*\{(.*?)\};",
                              RegexOptions.Singleline);
        if (!m.Success) throw new Exception("no g_borderRuns table in " + path);
        char[] sep = new char[] { ',', ' ', '\r', '\n', '\t' };
        string[] parts = m.Groups[1].Value.Split(sep, StringSplitOptions.RemoveEmptyEntries);
        if (parts.Length != runs * 4)
            throw new Exception(path + " holds " + parts.Length + " values for " + runs + " runs");
        int[] img = new int[w * h];
        int n = 0;
        for (int i = 0; i < runs && n < img.Length; i++)
        {
            int count = int.Parse(parts[i * 4]);
            int rgb = (int.Parse(parts[i * 4 + 1]) << 16) | (int.Parse(parts[i * 4 + 2]) << 8) |
                       int.Parse(parts[i * 4 + 3]);
            for (int k = 0; k < count && n < img.Length; k++) img[n++] = rgb;
        }
        if (n != img.Length)
            throw new Exception("the runs decode to " + n + " of " + img.Length + " pixels");
        return img;
    }

    static int[] LoadPng(string path, out int w, out int h)
    {
        using (Bitmap bmp = new Bitmap(path))
        {
            w = bmp.Width;
            h = bmp.Height;
            int[] img = new int[w * h];
            BitmapData d = bmp.LockBits(new Rectangle(0, 0, w, h), ImageLockMode.ReadOnly,
                                        PixelFormat.Format32bppArgb);
            try
            {
                byte[] raw = new byte[d.Stride * h];
                System.Runtime.InteropServices.Marshal.Copy(d.Scan0, raw, 0, raw.Length);
                for (int y = 0; y < h; y++)
                    for (int x = 0; x < w; x++)
                    {
                        int o = y * d.Stride + x * 4;
                        img[y * w + x] = (raw[o + 2] << 16) | (raw[o + 1] << 8) | raw[o];
                    }
            }
            finally { bmp.UnlockBits(d); }
            return img;
        }
    }

    // The header must be the picture, and the decoded image is what the paint check compares with.
    public static string Header(string headerPath, string pngPath)
    {
        StringBuilder sb = new StringBuilder();
        int hw, hh, runs, pw, ph;
        s_img = LoadHeader(headerPath, out hw, out hh, out runs);
        s_w = hw;
        s_h = hh;
        int[] png = LoadPng(pngPath, out pw, out ph);
        if (hw != pw || hh != ph)
        {
            sb.AppendLine(string.Format("FAIL border: the art table is {0}x{1}, {2} is {3}x{4}",
                                        hw, hh, pngPath, pw, ph));
            return sb.ToString();
        }
        int bad = 0;
        string first = "";
        for (int i = 0; i < png.Length; i++)
            if (s_img[i] != png[i])
            {
                if (bad == 0)
                    first = string.Format("pixel {0},{1}: table {2}, picture {3}",
                                          i % hw, i / hw, Hex(s_img[i]), Hex(png[i]));
                bad++;
            }
        if (bad != 0)
            sb.AppendLine(string.Format("FAIL border: the art table differs from {0} in {1} pixel(s) " +
                                        "({2}) - re-run tools\\mkborder.ps1", pngPath, bad, first));
        else
            sb.AppendLine(string.Format("border: art {0}x{1}, {2} run(s), identical to {3}",
                                        hw, hh, runs, pngPath));
        return sb.ToString();
    }

    // One dumped frame against the point-sampled picture, and the bars against "curtain, not black".
    public static string Paint(string rgbPath, int w, int h, double minCurtain)
    {
        StringBuilder sb = new StringBuilder();
        byte[] raw = File.ReadAllBytes(rgbPath);
        if (raw.Length != w * h * 3)
            return string.Format("FAIL border: {0} holds {1} bytes, wanted {2}",
                                 rgbPath, raw.Length, w * h * 3);

        // The picture rect plat_present fits into the window (the largest 4:3 rectangle, centred).
        int picW, picH, picX, picY;
        if (h * 4 / 3 > w) { picW = w; picH = w * 3 / 4; }
        else { picW = h * 4 / 3; picH = h; }
        picX = (w - picW) / 2;
        picY = (h - picH) / 2;

        int bad = 0;
        string first = "";
        long bar = 0, curtain = 0;
        for (int y = 0; y < h; y++)
        {
            int sy = y * s_h / h;
            bool rowBar = y < picY || y >= picY + picH;
            for (int x = 0; x < w; x++)
            {
                int want = s_img[sy * s_w + x * s_w / w];
                int o = (y * w + x) * 3;
                int got = (raw[o] << 16) | (raw[o + 1] << 8) | raw[o + 2];
                if (got != want)
                {
                    if (bad == 0)
                        first = string.Format("pixel {0},{1}: painted {2}, picture {3} at {4}",
                                              x, y, Hex(got), Hex(want), Hex(x * s_w / w));
                    bad++;
                }
                if (rowBar || x < picX || x >= picX + picW)
                {
                    bar++;
                    if (got != 0) curtain++;
                }
            }
        }
        if (bad != 0)
        {
            sb.AppendLine(string.Format("FAIL border: {0}x{1} is not point sampling - {2} pixel(s) " +
                                        "off ({3})", w, h, bad, first));
            return sb.ToString();
        }
        double share = bar == 0 ? 1.0 : (double)curtain / bar;
        if (minCurtain != 0.0 && share < minCurtain)
            sb.AppendLine(string.Format(CultureInfo.InvariantCulture,
                                        "FAIL border: {0}x{1} leaves the bars {2:P1} curtain, " +
                                        "wanted {3:P0} - the picture would sit on black",
                                        w, h, share, minCurtain));
        else
            sb.AppendLine(string.Format(CultureInfo.InvariantCulture,
                                        "border: {0}x{1} point-sampled, {2:P1} of the {3} bar " +
                                        "pixel(s) are curtain", w, h, share, bar));
        return sb.ToString();
    }
}
'@ -ReferencedAssemblies System.Drawing

$report = [System.Text.StringBuilder]::new()
[void]$report.Append([BorderCheck]::Header((Resolve-Path $Header).Path, (Resolve-Path $Png).Path))

# Claim 2 and 3 need the shipped function, so they need a compiler.
$wcl = Join-Path $WatcomHome 'binnt64\wcl386.exe'
if (-not (Test-Path $wcl)) {
    [void]$report.AppendLine("border: paint SKIP (no $wcl)")
} else {
    $env:WATCOM = $WatcomHome
    $env:INCLUDE = @((Join-Path $WatcomHome 'h'), (Join-Path $WatcomHome 'h\nt')) -join ';'
    $env:LIB = @((Join-Path $WatcomHome 'lib386'), (Join-Path $WatcomHome 'lib386\nt')) -join ';'
    $env:PATH = @((Join-Path $WatcomHome 'binnt64'), (Join-Path $WatcomHome 'binnt')) -join ';'

    New-Item -ItemType Directory -Force -Path $Work | Out-Null
    $main = @'
/* Generated by tools\border-check.ps1: paints a frame the way plat_win32 presents one, so the
 * pixels border_paint produces can be compared with the picture. */
#include <stdio.h>
#include <stdlib.h>
#include "types.h"
#include "border.h"

int main(int argc, char **argv)
{
    int w, h, x, y;
    u32 *buf;
    FILE *f;

    if (argc < 4) return 2;
    w = atoi(argv[1]);
    h = atoi(argv[2]);
    if (w <= 0 || h <= 0) return 2;
    f = fopen(argv[3], "wb");
    if (!f) return 3;
    buf = (u32 *)malloc((size_t)w * (size_t)h * sizeof(u32));
    if (buf == 0) { fclose(f); return 4; }
    border_paint(buf, w, h);
    for (y = 0; y < h; y++)
        for (x = 0; x < w; x++)
        {
            u32 c = buf[(u32)y * (u32)w + (u32)x];
            fputc((int)((c >> 16) & 0xFF), f);
            fputc((int)((c >> 8) & 0xFF), f);
            fputc((int)(c & 0xFF), f);
        }
    free(buf);
    fclose(f);
    return 0;
}
'@
    Set-Content -Path (Join-Path $Work 'main.c') -Value $main -Encoding Ascii

    Push-Location $Work
    $built = $false
    $prevEap = $ErrorActionPreference
    # Native tools write warnings to stderr; with 'Stop' PowerShell would turn those into
    # exceptions (the build scripts set 'Continue' around their compiler calls for the same reason).
    $ErrorActionPreference = 'Continue'
    try {
        # The build scripts' own flags; the compiler runs from the work directory because the
        # repository path has spaces and Watcom splits unquoted arguments on them.
        & $wcl '-bt=nt' '-q' '-5s' '-ox' '-zp8' '-zq' '-za99' '-i=..\..\src\runtime' `
               '-i=..\..\src\runtime\plat\win32' 'main.c' '..\..\src\runtime\plat\win32\border.c' `
               '-fe=border-check.exe' 2>&1 | Out-Null
        $built = $LASTEXITCODE -eq 0 -and (Test-Path 'border-check.exe')
    } finally {
        $ErrorActionPreference = $prevEap
        Pop-Location
    }
    if (-not $built) {
        [void]$report.AppendLine('FAIL border: the check driver did not build')
    } else {
        foreach ($s in $sizes) {
            $rgb = Join-Path (Resolve-Path $Work).Path ("{0}x{1}.rgb" -f $s.w, $s.h)
            if (Test-Path $rgb) { Remove-Item $rgb -Force }
            & (Join-Path (Resolve-Path $Work).Path 'border-check.exe') $s.w $s.h $rgb | Out-Null
            if ($LASTEXITCODE -ne 0 -or -not (Test-Path $rgb)) {
                [void]$report.AppendLine(("FAIL border: no frame for {0}x{1}" -f $s.w, $s.h))
                continue
            }
            $min = if ($null -eq $s.min) { 0.0 } else { [double]$s.min }
            [void]$report.Append([BorderCheck]::Paint($rgb, [int]$s.w, [int]$s.h, $min))
        }
    }
}

$text = $report.ToString().Replace("`r`n", "`n").TrimEnd()
Write-Output $text
if ($text -match '(?m)^FAIL') { exit 1 }
exit 0
