<#
.SYNOPSIS
    Compares two images and reports how far apart they are.

.DESCRIPTION
    The M2 acceptance test: rebuild a frame from the pack and compare it with a WinUAE capture of
    the same scene.  Prints the number of differing pixels, the largest per-channel difference and
    the bounding box of the differences, and (optionally) writes a difference image where differing
    pixels are magenta on a dimmed copy of the first image.

    Both files may be any format System.Drawing reads (bmp, png, gif, jpg ...).
    A WinUAE grab usually has borders around the 320x200 area; pass -CropB "x,y,w,h" to cut the
    reference down to the game rectangle before comparing.

.EXAMPLE
    powershell -ExecutionPolicy Bypass -File tools\diff-frame.ps1 -A out\shot.bmp -B ref\title.png

.EXAMPLE
    powershell -ExecutionPolicy Bypass -File tools\diff-frame.ps1 -A out\shot.bmp -B ref\title.png `
        -CropB "32,24,320,200" -Out out\diff.png
#>
param(
    [Parameter(Mandatory = $true)][string]$A,
    [Parameter(Mandatory = $true)][string]$B,
    [string]$CropA,
    [string]$CropB,
    [string]$Out,
    [int]$Tolerance = 0
)
$ErrorActionPreference = 'Stop'

Add-Type -AssemblyName System.Drawing

function Get-Pixels([string]$path, [string]$crop) {
    # Literal path: a capture name may contain '[' or ']', which PowerShell treats as wildcards.
    $img = [System.Drawing.Bitmap]::FromFile((Get-Item -LiteralPath $path).FullName)
    $src = $img
    if ($crop) {
        $p = $crop -split ','
        if ($p.Count -ne 4) { throw "crop must be 'x,y,w,h', got '$crop'" }
        $rect = New-Object System.Drawing.Rectangle ([int]$p[0]), ([int]$p[1]), ([int]$p[2]), ([int]$p[3])
        $src = $img.Clone($rect, [System.Drawing.Imaging.PixelFormat]::Format32bppRgb)
    }
    $bmp = New-Object System.Drawing.Bitmap $src.Width, $src.Height, ([System.Drawing.Imaging.PixelFormat]::Format32bppRgb)
    $g = [System.Drawing.Graphics]::FromImage($bmp)
    $g.DrawImage($src, 0, 0, $src.Width, $src.Height)
    $g.Dispose()
    if (-not [object]::ReferenceEquals($src, $img)) { $src.Dispose() }
    $img.Dispose()
    $rect = New-Object System.Drawing.Rectangle 0, 0, $bmp.Width, $bmp.Height
    $data = $bmp.LockBits($rect, [System.Drawing.Imaging.ImageLockMode]::ReadOnly, $bmp.PixelFormat)
    $bytes = New-Object byte[] ($data.Stride * $bmp.Height)
    [System.Runtime.InteropServices.Marshal]::Copy($data.Scan0, $bytes, 0, $bytes.Length)
    $bmp.UnlockBits($data)
    [pscustomobject]@{ W = $bmp.Width; H = $bmp.Height; Stride = $data.Stride; Pixels = $bytes; Bitmap = $bmp }
}

$ia = Get-Pixels $A $CropA
$ib = Get-Pixels $B $CropB

if ($ia.W -ne $ib.W -or $ia.H -ne $ib.H) {
    "size mismatch: A = $($ia.W)x$($ia.H), B = $($ib.W)x$($ib.H)"
}

$w = [Math]::Min($ia.W, $ib.W)
$h = [Math]::Min($ia.H, $ib.H)
$diffCount = 0
$maxDiff = 0
$minX = [int]::MaxValue; $minY = [int]::MaxValue; $maxX = -1; $maxY = -1

$mask = $null
if ($Out) {
    $mask = New-Object System.Drawing.Bitmap $w, $h, ([System.Drawing.Imaging.PixelFormat]::Format32bppRgb)
}

for ($y = 0; $y -lt $h; $y++) {
    $ra = $y * $ia.Stride
    $rb = $y * $ib.Stride
    for ($x = 0; $x -lt $w; $x++) {
        $o = $x * 4
        $db = [Math]::Abs([int]$ia.Pixels[$ra + $o]     - [int]$ib.Pixels[$rb + $o])
        $dg = [Math]::Abs([int]$ia.Pixels[$ra + $o + 1] - [int]$ib.Pixels[$rb + $o + 1])
        $dr = [Math]::Abs([int]$ia.Pixels[$ra + $o + 2] - [int]$ib.Pixels[$rb + $o + 2])
        $d = [Math]::Max($db, [Math]::Max($dg, $dr))
        if ($d -gt $maxDiff) { $maxDiff = $d }
        if ($d -gt $Tolerance) {
            $diffCount++
            if ($x -lt $minX) { $minX = $x }
            if ($x -gt $maxX) { $maxX = $x }
            if ($y -lt $minY) { $minY = $y }
            if ($y -gt $maxY) { $maxY = $y }
            if ($mask) { $mask.SetPixel($x, $y, [System.Drawing.Color]::Magenta) }
        }
        elseif ($mask) {
            $g2 = [int](($ia.Pixels[$ra + $o + 2] + $ia.Pixels[$ra + $o + 1] + $ia.Pixels[$ra + $o]) / 6)
            $mask.SetPixel($x, $y, [System.Drawing.Color]::FromArgb(255, $g2, $g2, $g2))
        }
    }
}

$total = $w * $h
$na = if ($CropA) { " cropped $CropA" } else { "" }
$nb = if ($CropB) { " cropped $CropB" } else { "" }
"compared: A=$A ($($ia.W)x$($ia.H))$na"
"          B=$B ($($ib.W)x$($ib.H))$nb"
"pixels:   $total   differing: $diffCount  ({0:N4} %)" -f (100.0 * $diffCount / [Math]::Max(1, $total))
"max channel difference: $maxDiff  (tolerance $Tolerance)"
if ($diffCount -gt 0) { "difference box: x $minX..$maxX  y $minY..$maxY" } else { "identical" }

if ($mask) {
    $dir = Split-Path -Parent $Out
    if ($dir -and -not (Test-Path $dir)) { New-Item -ItemType Directory -Force -Path $dir | Out-Null }
    $mask.Save($Out, [System.Drawing.Imaging.ImageFormat]::Png)
    $mask.Dispose()
    "difference image -> $Out"
}

$ia.Bitmap.Dispose()
$ib.Bitmap.Dispose()
if ($diffCount -eq 0) { exit 0 } else { exit 1 }
