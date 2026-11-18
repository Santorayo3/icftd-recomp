# Writes the application icon (bin\win32\res\icftd.ico) from assets\app_icon.png: the picture
# Explorer, the taskbar and the window title show for the Windows build.
#
#   powershell -ExecutionPolicy Bypass -File tools\mkappicon.ps1
#
# The source is one 512x512 PNG - the port's own artwork, tracked in assets\ - and Windows wants a
# multi-resolution .ico, because the shell picks 16 (title bar, list view), 32 (desktop), 48
# (medium icons) or 256 (large icons) and scales whatever it finds when the size is missing. So the
# picture is resampled to the standard ladder and every size is stored at its own resolution.
#
# The 256 entry is PNG-compressed (what every icon tool does; the format allows it and Vista and
# later read it), the smaller ones are stored as a plain 32bpp DIB with an empty AND mask, because
# 32bpp alpha is what they use for transparency and the DIB form is understood by every shell that
# can display the icon at all. The .ico is build output, not a tracked file: it is regenerated from
# the PNG whenever the PNG is newer, so the PNG stays the one source of the picture.
param(
    [string]$Png = "assets\app_icon.png",
    [string]$Out = "bin\win32\res\icftd.ico",
    [int[]]$Sizes = @(16, 24, 32, 48, 64, 128, 256)
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
Set-Location $root

if (-not (Test-Path $Png)) { throw "no $Png - the application icon lives in assets\" }
Add-Type -AssemblyName System.Drawing

$src = [System.Drawing.Bitmap]::FromFile((Resolve-Path $Png).Path)

function Resize-IconBitmap {
    param([System.Drawing.Bitmap]$Bitmap, [int]$Size)

    $dst = New-Object System.Drawing.Bitmap $Size, $Size, ([System.Drawing.Imaging.PixelFormat]::Format32bppArgb)
    $g = [System.Drawing.Graphics]::FromImage($dst)
    try {
        # SourceCopy: the resampled pixels are the picture's own, alpha included - the default
        # Over draws onto the transparent black the new bitmap starts as and fringes the edges.
        $g.CompositingMode = [System.Drawing.Drawing2D.CompositingMode]::SourceCopy
        $g.InterpolationMode = [System.Drawing.Drawing2D.InterpolationMode]::HighQualityBicubic
        $g.PixelOffsetMode = [System.Drawing.Drawing2D.PixelOffsetMode]::HighQuality
        $g.SmoothingMode = [System.Drawing.Drawing2D.SmoothingMode]::HighQuality
        $g.DrawImage($Bitmap, (New-Object System.Drawing.Rectangle 0, 0, $Size, $Size))
    }
    finally { $g.Dispose() }
    return $dst
}

function Get-BgraRows {
    param([System.Drawing.Bitmap]$Bitmap, [int]$Size)

    $rect = New-Object System.Drawing.Rectangle 0, 0, $Size, $Size
    $data = $Bitmap.LockBits($rect, [System.Drawing.Imaging.ImageLockMode]::ReadOnly,
                             [System.Drawing.Imaging.PixelFormat]::Format32bppArgb)
    try {
        $raw = New-Object byte[] ($data.Stride * $Size)
        [System.Runtime.InteropServices.Marshal]::Copy($data.Scan0, $raw, 0, $raw.Length)
        return [pscustomobject]@{ Pixels = $raw; Stride = $data.Stride }
    }
    finally { $Bitmap.UnlockBits($data) }
}

# A DIB icon entry: BITMAPINFOHEADER, the pixels bottom-up, then the 1bpp AND mask. The header's
# height covers both, which is what makes the shell read it as an icon rather than a bitmap.
function Get-DibEntry {
    param([System.Drawing.Bitmap]$Bitmap, [int]$Size)

    $rows = Get-BgraRows -Bitmap $Bitmap -Size $Size
    $maskRow = [int]([Math]::Ceiling($Size / 32.0) * 4)
    $ms = New-Object System.IO.MemoryStream
    $bw = New-Object System.IO.BinaryWriter($ms)
    try {
        $bw.Write([int]40)                                  # biSize
        $bw.Write([int]$Size)                               # biWidth
        $bw.Write([int]($Size * 2))                         # biHeight: XOR + AND
        $bw.Write([int16]1)                                 # biPlanes
        $bw.Write([int16]32)                                # biBitCount
        $bw.Write([int]0)                                   # biCompression: BI_RGB
        $bw.Write([int]($Size * $Size * 4 + $maskRow * $Size))
        $bw.Write([int]0); $bw.Write([int]0)                # ppm
        $bw.Write([int]0); $bw.Write([int]0)                # palette
        for ($y = $Size - 1; $y -ge 0; $y--) {
            $bw.Write($rows.Pixels, $y * $rows.Stride, $Size * 4)
        }
        $bw.Write((New-Object byte[] ($maskRow * $Size)), 0, $maskRow * $Size)
        $bw.Flush()
        return ,$ms.ToArray()
    }
    finally { $bw.Dispose() }
}

function Get-PngEntry {
    param([System.Drawing.Bitmap]$Bitmap)

    $ms = New-Object System.IO.MemoryStream
    try {
        $Bitmap.Save($ms, [System.Drawing.Imaging.ImageFormat]::Png)
        return ,$ms.ToArray()
    }
    finally { $ms.Dispose() }
}

$frames = New-Object System.Collections.Generic.List[object]
foreach ($size in $Sizes) {
    $bmp = Resize-IconBitmap -Bitmap $src -Size $size
    try {
        $data = if ($size -ge 256) { Get-PngEntry -Bitmap $bmp } else { Get-DibEntry -Bitmap $bmp -Size $size }
        $frames.Add([pscustomobject]@{ Size = $size; Data = $data })
    }
    finally { $bmp.Dispose() }
}
$src.Dispose()

$outPath = Join-Path (Get-Location) $Out
New-Item -ItemType Directory -Force -Path (Split-Path -Parent $outPath) | Out-Null
$ico = New-Object System.IO.MemoryStream
$bw = New-Object System.IO.BinaryWriter($ico)
try {
    $bw.Write([int16]0); $bw.Write([int16]1); $bw.Write([int16]$frames.Count)
    $offset = 6 + 16 * $frames.Count
    foreach ($f in $frames) {
        # 0 means 256 in an ICONDIRENTRY's width and height bytes.
        $dim = if ($f.Size -ge 256) { 0 } else { $f.Size }
        $bw.Write([byte]$dim); $bw.Write([byte]$dim)
        $bw.Write([byte]0); $bw.Write([byte]0)              # palette entries, reserved
        $bw.Write([int16]1); $bw.Write([int16]32)           # planes, bit count
        $bw.Write([int]$f.Data.Length); $bw.Write([int]$offset)
        $offset += $f.Data.Length
    }
    foreach ($f in $frames) { $bw.Write($f.Data, 0, $f.Data.Length) }
    $bw.Flush()
    [System.IO.File]::WriteAllBytes($outPath, $ico.ToArray())
}
finally { $bw.Dispose() }

Write-Output ("wrote $Out ({0}, {1} bytes)" -f ($Sizes -join '/'), (Get-Item $outPath).Length)
