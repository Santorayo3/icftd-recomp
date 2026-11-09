<#
.SYNOPSIS
    Turns a WinUAE screenshot into a 320x200 BMP the recompilation can diff against.

.DESCRIPTION
    WinUAE grabs are upscaled (x2) and have black borders.  This crops the game area and reduces
    it to 320x200 with nearest-neighbour sampling, which is exact because the upscale was a plain
    pixel replication.

    Without -Crop the non-black bounding box is used; pass -Crop for screens whose content does
    not fill the frame (logos on a black background).

.EXAMPLE
    powershell -ExecutionPolicy Bypass -File tools\ref-frame.ps1 `
        -In "C:\Users\Public\Documents\Amiga Files\WinUAE\Screenshots\...Disk 2 of 3)[!]_001.png" `
        -Out ref\scene1.bmp
#>
param(
    [Parameter(Mandatory = $true)][string]$In,
    [Parameter(Mandatory = $true)][string]$Out,
    [string]$Crop,
    [int]$Scale = 2
)
$ErrorActionPreference = 'Stop'
Add-Type -AssemblyName System.Drawing

$src = [System.Drawing.Bitmap]::FromFile((Get-Item -LiteralPath $In).FullName)

if ($Crop) {
    $p = $Crop -split ','
    $rx = [int]$p[0]; $ry = [int]$p[1]; $rw = [int]$p[2]; $rh = [int]$p[3]
}
else {
    # bounding box of anything that is not near-black
    $minX = $src.Width; $minY = $src.Height; $maxX = -1; $maxY = -1
    for ($y = 0; $y -lt $src.Height; $y++) {
        for ($x = 0; $x -lt $src.Width; $x++) {
            $c = $src.GetPixel($x, $y)
            if ($c.R -gt 8 -or $c.G -gt 8 -or $c.B -gt 8) {
                if ($x -lt $minX) { $minX = $x }
                if ($x -gt $maxX) { $maxX = $x }
                if ($y -lt $minY) { $minY = $y }
                if ($y -gt $maxY) { $maxY = $y }
            }
        }
    }
    if ($maxX -lt 0) { throw "image is completely black" }
    $rx = $minX; $ry = $minY; $rw = $maxX - $minX + 1; $rh = $maxY - $minY + 1
}

$ow = [int]($rw / $Scale)
$oh = [int]($rh / $Scale)
if ($ow -ne 320 -or $oh -ne 200) {
    Write-Warning "cropped area is ${rw}x${rh} -> ${ow}x${oh} after /$Scale, expected 320x200"
}

$dst = New-Object System.Drawing.Bitmap $ow, $oh, ([System.Drawing.Imaging.PixelFormat]::Format24bppRgb)
$g = [System.Drawing.Graphics]::FromImage($dst)
$g.InterpolationMode = [System.Drawing.Drawing2D.InterpolationMode]::NearestNeighbor
$g.PixelOffsetMode = [System.Drawing.Drawing2D.PixelOffsetMode]::Half
$g.DrawImage($src, (New-Object System.Drawing.Rectangle 0, 0, $ow, $oh),
             $rx, $ry, $rw, $rh, [System.Drawing.GraphicsUnit]::Pixel)
$g.Dispose()
$src.Dispose()

$dir = Split-Path -Parent $Out
if ($dir -and -not (Test-Path -LiteralPath $dir)) { New-Item -ItemType Directory -Force -Path $dir | Out-Null }
$dst.Save($Out, [System.Drawing.Imaging.ImageFormat]::Bmp)
$dst.Dispose()

"crop ($rx,$ry,$rw,$rh) / $Scale -> ${ow}x${oh} -> $Out"
