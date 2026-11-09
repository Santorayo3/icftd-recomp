<#
.SYNOPSIS
    Summarises a frame series captured by tools\winuae-capture.ps1.

.DESCRIPTION
    Prints one line per frame: client size, the non-black content box, and how much the frame
    differs from the previous one (0 = same picture).  That is enough to pick the frames worth
    keeping as references without opening them one by one.

    Also writes <OutDir>\analyse.csv with the same numbers.

.EXAMPLE
    powershell -ExecutionPolicy Bypass -File tools\capture-analyse.ps1 -Dir out\capture-intro
#>
param(
    [string]$Dir = "out\capture",
    [int]$Grid = 48,                 # signature resolution (Grid x Grid samples)
    [int]$BlackCut = 8,              # channel value below which a pixel counts as black
    [switch]$Quiet                   # only print frames that differ
)
$ErrorActionPreference = 'Stop'
Add-Type -AssemblyName System.Drawing

$root = Split-Path -Parent $PSScriptRoot
Push-Location $root
try {
    if (-not (Test-Path -LiteralPath $Dir)) { throw "no such capture folder: $Dir" }
    $files = Get-ChildItem -LiteralPath $Dir -Filter 'f*.png' | Sort-Object Name
    if ($files.Count -eq 0) { throw "no frames in $Dir" }

    $rows = New-Object System.Collections.Generic.List[string]
    $rows.Add('frame,w,h,content_x0,content_y0,content_x1,content_y1,diff_prev,colours')

    $prevSig = $null
    $prevName = ''
    $index = 0
    foreach ($f in $files) {
        $bmp = [System.Drawing.Bitmap]::FromFile($f.FullName)
        try {
            $w = $bmp.Width; $h = $bmp.Height
            # Sample a fixed grid once; the same samples serve the bbox and the signature.
            $sig = New-Object 'int[]' ($Grid * $Grid * 3)
            $minx = $w; $maxx = -1; $miny = $h; $maxy = -1
            $stepX = [Math]::Max(1, [int]($w / $Grid))
            $stepY = [Math]::Max(1, [int]($h / $Grid))
            for ($gy = 0; $gy -lt $Grid; $gy++) {
                $y = [Math]::Min($h - 1, $gy * $stepY + [int]($stepY / 2))
                for ($gx = 0; $gx -lt $Grid; $gx++) {
                    $x = [Math]::Min($w - 1, $gx * $stepX + [int]($stepX / 2))
                    $c = $bmp.GetPixel($x, $y)
                    $i = ($gy * $Grid + $gx) * 3
                    $sig[$i] = $c.R; $sig[$i + 1] = $c.G; $sig[$i + 2] = $c.B
                    if ($c.R -gt $BlackCut -or $c.G -gt $BlackCut -or $c.B -gt $BlackCut) {
                        if ($x -lt $minx) { $minx = $x }
                        if ($x -gt $maxx) { $maxx = $x }
                        if ($y -lt $miny) { $miny = $y }
                        if ($y -gt $maxy) { $maxy = $y }
                    }
                }
            }

            # Mean absolute difference per channel against the previous frame's grid.
            $diff = 0
            if ($prevSig) {
                $sum = 0
                for ($i = 0; $i -lt $sig.Length; $i++) { $sum += [Math]::Abs($sig[$i] - $prevSig[$i]) }
                $diff = [int]($sum / $sig.Length)
            }
            else { $diff = -1 }

            if ($maxx -lt 0) { $minx = -1; $miny = -1; $maxx = -1; $maxy = -1 }

            # Distinct colours separate a correct OCS picture (<= 32, or 64 for 6 planes)
            # from emulator noise, which shows hundreds while keeping the right palette.
            $seen = @{}
            for ($y = 0; $y -lt $h; $y += 4) {
                for ($x = 0; $x -lt $w; $x += 4) {
                    $c = $bmp.GetPixel($x, $y)
                    # PowerShel 5.1 truncates `-shl` on a Byte, so widen to int first.
                    $seen[(([int]$c.R -shl 16) -bor ([int]$c.G -shl 8) -bor [int]$c.B)] = 1
                }
            }
            $colours = $seen.Count

            $rows.Add("$($f.Name),$w,$h,$minx,$miny,$maxx,$maxy,$diff,$colours")
            if (-not $Quiet -or $diff -ne 0) {
                '{0,-10} {1,4}x{2,-4} content {3,4},{4,-4}..{5,4},{6,-4}  diff {7,-4} colours {8}' -f `
                    $f.Name, $w, $h, $minx, $miny, $maxx, $maxy, $diff, $colours
            }
            $prevSig = $sig
            $prevName = $f.Name
            $index++
        }
        finally { $bmp.Dispose() }
    }

    $rows | Set-Content -Path (Join-Path $Dir 'analyse.csv') -Encoding ASCII
    "frames: $index  -> $(Join-Path $Dir 'analyse.csv')"
}
finally { Pop-Location }
