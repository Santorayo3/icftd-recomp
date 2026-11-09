<#
.SYNOPSIS
    Turns a WinUAE capture series into 320x200 BMPs the same shape as the game's frames.

.DESCRIPTION
    tools\winuae-capture.ps1 grabs the emulator's client area once per interval. The Amiga
    picture sits somewhere inside that rectangle at an integer scale, so this finds the
    bounding box of everything that is not near-black over the whole series (one frame may be
    mostly black, the union is not) and crops every frame to it before scaling down.

    Output names keep the capture index, so the manifest's elapsed_ms still applies.

.EXAMPLE
    powershell -ExecutionPolicy Bypass -File tools\capture-frames.ps1 -In out\cap-intro -Out out\cap-intro-320
#>
param(
    [Parameter(Mandatory = $true)][string]$In,
    [Parameter(Mandatory = $true)][string]$Out,
    [int]$Scale = 2,                 # the emulator upscales by this factor
    [string]$Crop = "",              # x,y,w,h to override the detected box
    [int]$ExcludeTop = 0,            # ignore the top N rows when detecting (window chrome)
    [int]$ExcludeBottom = 0          # ignore the bottom N rows (WinUAE status line)
)
$ErrorActionPreference = 'Stop'
Add-Type -AssemblyName System.Drawing

$root = Split-Path -Parent $PSScriptRoot
Push-Location $root
try {
    $files = @(Get-ChildItem -LiteralPath $In -Filter 'f*.png' | Sort-Object Name)
    if ($files.Count -eq 0) { throw "no f*.png in $In" }
    New-Item -ItemType Directory -Force -Path $Out | Out-Null

    if ($Crop) {
        $p = $Crop -split ','
        $rx = [int]$p[0]; $ry = [int]$p[1]; $rw = [int]$p[2]; $rh = [int]$p[3]
        "crop $rx,$ry $($rw)x$($rh) (given)"
    }
    else {
        # Union of the non-black boxes: a single frame can be almost black, the series cannot.
        $minX = [int]::MaxValue; $minY = [int]::MaxValue; $maxX = -1; $maxY = -1
        foreach ($f in $files) {
            $bmp = [System.Drawing.Bitmap]::FromFile($f.FullName)
            $y0 = $ExcludeTop
            $y1 = $bmp.Height - $ExcludeBottom
            for ($y = $y0; $y -lt $y1; $y += 2) {
                for ($x = 0; $x -lt $bmp.Width; $x += 2) {
                    $c = $bmp.GetPixel($x, $y)
                    if ($c.R -gt 16 -or $c.G -gt 16 -or $c.B -gt 16) {
                        if ($x -lt $minX) { $minX = $x }
                        if ($x -gt $maxX) { $maxX = $x }
                        if ($y -lt $minY) { $minY = $y }
                        if ($y -gt $maxY) { $maxY = $y }
                    }
                }
            }
            $bmp.Dispose()
        }
        if ($maxX -lt 0) { throw "every frame is black - wrong capture?" }
        $rx = $minX; $ry = $minY; $rw = $maxX - $minX + 1; $rh = $maxY - $minY + 1
        "crop $rx,$ry $($rw)x$($rh) (detected over $($files.Count) frames)"
    }

    $ow = [int]($rw / $Scale); $oh = [int]($rh / $Scale)
    "output ${ow}x${oh}"

    $n = 0
    foreach ($f in $files) {
        $src = [System.Drawing.Bitmap]::FromFile($f.FullName)
        $dst = New-Object System.Drawing.Bitmap $ow, $oh, ([System.Drawing.Imaging.PixelFormat]::Format24bppRgb)
        $g = [System.Drawing.Graphics]::FromImage($dst)
        $g.InterpolationMode = [System.Drawing.Drawing2D.InterpolationMode]::NearestNeighbor
        $g.PixelOffsetMode = [System.Drawing.Drawing2D.PixelOffsetMode]::Half
        $g.DrawImage($src, (New-Object System.Drawing.Rectangle 0, 0, $ow, $oh),
                     (New-Object System.Drawing.Rectangle $rx, $ry, $rw, $rh),
                     [System.Drawing.GraphicsUnit]::Pixel)
        $g.Dispose()
        $src.Dispose()

        $name = [System.IO.Path]::GetFileNameWithoutExtension($f.Name)
        $dst.Save((Join-Path $Out ($name + '.bmp')), [System.Drawing.Imaging.ImageFormat]::Bmp)
        $dst.Dispose()
        $n++
    }
    "wrote $n frame(s) -> $Out"
}
finally { Pop-Location }
