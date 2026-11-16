# Converts the settings menu's controls into the C tables src\host\settings_art.h.
#
#   powershell -ExecutionPolicy Bypass -File tools\mksettingsart.ps1
#
# Six pictures: the minus and plus buttons in their normal and hover state, and the fullscreen
# toggle in its on and off state. They are kept byte-exact, like tools\mktitlebuttons.ps1: one byte
# per pixel, the PNG's own palette index - except that the index is written out as the *pen offset*
# the drawing code uses, not as the file's own index, so a reordered palette cannot silently
# recolour a control. The offsets are the six colours the six pictures are drawn with, in the order
# title_settings_palette() installs them:
#
#   0 outline     the pictures' black border (every picture has it)
#   1 fill        the buttons' fill, which is also the toggle's off track
#   2 hover       the buttons' fill under the pointer, and the knob's shading
#   3 on          the toggle's on track
#   4 knob        the toggle's knob
#   5 edge        the knob's edge
#
# The toggle is drawn on a cyan surround (the rounded rectangle's corners); that colour is written
# as TITLE_SETTINGS_TRANSPARENT and the drawing code leaves those pixels alone. Every relation
# between the pictures above is checked here, so a redrawn picture that breaks one fails loudly
# instead of drawing the wrong colour.
param(
    [string]$MinusNormal = "assets\minus_normal.png",
    [string]$MinusHover  = "assets\minus_hover.png",
    [string]$PlusNormal  = "assets\plus_normal.png",
    [string]$PlusHover   = "assets\plus_hover.png",
    [string]$ToggleOn    = "assets\toggle_on.png",
    [string]$ToggleOff   = "assets\toggle_off.png",
    [string]$Out         = "src\host\settings_art.h"
)

Add-Type -AssemblyName System.Drawing

function Read-Indexed([string]$path)
{
    $im = [System.Drawing.Bitmap]::FromFile((Resolve-Path $path))
    try {
        $w = $im.Width
        $h = $im.Height
        $fmt = $im.PixelFormat
        $rect = New-Object System.Drawing.Rectangle 0, 0, $w, $h
        if ($fmt -eq [System.Drawing.Imaging.PixelFormat]::Format8bppIndexed) {
            $lock = [System.Drawing.Imaging.PixelFormat]::Format8bppIndexed
        } elseif ($fmt -eq [System.Drawing.Imaging.PixelFormat]::Format4bppIndexed) {
            $lock = [System.Drawing.Imaging.PixelFormat]::Format4bppIndexed
        } else {
            throw "$path is $fmt; save it as an indexed PNG (4 or 8 bits per pixel)"
        }
        $data = $im.LockBits($rect, [System.Drawing.Imaging.ImageLockMode]::ReadOnly, $lock)
        try {
            $raw = New-Object byte[] ($data.Stride * $h)
            [System.Runtime.InteropServices.Marshal]::Copy($data.Scan0, $raw, 0, $raw.Length)
            $stride = $data.Stride
        } finally {
            $im.UnlockBits($data)
        }
        $idx = New-Object byte[] ($w * $h)
        for ($y = 0; $y -lt $h; $y++) {
            for ($x = 0; $x -lt $w; $x++) {
                if ($lock -eq [System.Drawing.Imaging.PixelFormat]::Format8bppIndexed) {
                    $v = $raw[$y * $stride + $x]
                } else {
                    $b = $raw[$y * $stride + [int][Math]::Floor($x / 2)]
                    $v = if (($x % 2) -eq 0) { ($b -shr 4) -band 0x0F } else { $b -band 0x0F }
                }
                $idx[$y * $w + $x] = [byte]$v
            }
        }
        $pal = @()
        foreach ($c in $im.Palette.Entries) { $pal += , @([int]$c.R, [int]$c.G, [int]$c.B) }
        return @{ w = $w; h = $h; idx = $idx; pal = $pal }
    } finally {
        $im.Dispose()
    }
}

function ColoursUsed($img)
{
    $seen = @{}
    foreach ($b in $img.idx) { $seen[[int]$b] = $true }
    return @($seen.Keys | Sort-Object)
}

function SameColour($a, $b)
{
    return $a[0] -eq $b[0] -and $a[1] -eq $b[1] -and $a[2] -eq $b[2]
}

$mn = Read-Indexed $MinusNormal
$mh = Read-Indexed $MinusHover
$pn = Read-Indexed $PlusNormal
$ph = Read-Indexed $PlusHover
$on = Read-Indexed $ToggleOn
$off = Read-Indexed $ToggleOff

foreach ($p in @(@{ name = $MinusNormal; img = $mn }, @{ name = $MinusHover; img = $mh },
                 @{ name = $PlusNormal; img = $pn }, @{ name = $PlusHover; img = $ph })) {
    if ($p.img.w -ne $mn.w -or $p.img.h -ne $mn.h) {
        throw "$($p.name) is $($p.img.w)x$($p.img.h); the four step pictures must all be $($mn.w)x$($mn.h)"
    }
    foreach ($i in (ColoursUsed $p.img)) {
        if ($i -gt 1) { throw "$($p.name) uses palette index $i; a step button is outline (0) and fill (1)" }
    }
}
foreach ($p in @(@{ name = $ToggleOn; img = $on }, @{ name = $ToggleOff; img = $off })) {
    if ($p.img.w -ne $on.w -or $p.img.h -ne $on.h) {
        throw "$($p.name) is $($p.img.w)x$($p.img.h); both toggle states must be $($on.w)x$($on.h)"
    }
    if ($p.img.pal.Count -lt 6) { throw "$($p.name) has $($p.img.pal.Count) palette entries; a toggle has 6" }
    foreach ($i in (ColoursUsed $p.img)) {
        if ($i -gt 5) { throw "$($p.name) uses palette index $i; a toggle is indices 0..5" }
    }
}

# The colour relations the six pen offsets depend on.
if (-not (SameColour $mn.pal[0] $pn.pal[0]) -or -not (SameColour $mn.pal[0] $mh.pal[0]) -or
    -not (SameColour $mn.pal[0] $ph.pal[0])) {
    throw "the four step pictures do not share one outline colour"
}
if (-not (SameColour $mn.pal[1] $pn.pal[1])) { throw "$MinusNormal and $PlusNormal have different fills" }
if (-not (SameColour $mh.pal[1] $ph.pal[1])) { throw "$MinusHover and $PlusHover have different fills" }
if (-not (SameColour $on.pal[1] $mn.pal[0])) { throw "$ToggleOn's outline is not the step pictures' outline" }
if (-not (SameColour $off.pal[1] $mn.pal[0])) { throw "$ToggleOff's outline is not the step pictures' outline" }
if (-not (SameColour $off.pal[2] $mn.pal[1])) { throw "$ToggleOff's track is not the step pictures' fill" }
if (-not (SameColour $on.pal[3] $mh.pal[1])) { throw "$ToggleOn's knob shading is not the step pictures' hover fill" }
if (-not (SameColour $off.pal[3] $mh.pal[1])) { throw "$ToggleOff's knob shading is not the step pictures' hover fill" }
if (-not (SameColour $on.pal[4] $off.pal[4])) { throw "the two toggle states have different knobs" }
if (-not (SameColour $on.pal[5] $off.pal[5])) { throw "the two toggle states have different knob edges" }
if (-not (SameColour $on.pal[0] $off.pal[0])) { throw "the two toggle states are drawn on different surrounds" }
foreach ($c in @($on.pal[1], $on.pal[2], $on.pal[3], $on.pal[4], $on.pal[5],
                 $off.pal[2], $off.pal[3], $off.pal[4], $off.pal[5])) {
    if (SameColour $on.pal[0] $c) { throw "the toggle's surround shares a colour with the toggle itself" }
}

# The pen offsets, in the order title_settings_palette() installs them.
$pal = @(
    $mn.pal[0],     # 0 outline
    $mn.pal[1],     # 1 fill
    $mh.pal[1],     # 2 hover
    $on.pal[2],     # 3 on
    $on.pal[4],     # 4 knob
    $on.pal[5]      # 5 edge
)

# The PNG's palette index -> the pen offset above. A step picture never has an index past 1, a
# toggle never past 5, so the maps are fixed once the relations are checked.
$stepNormal = @{ 0 = 0; 1 = 1 }
$stepHover  = @{ 0 = 0; 1 = 2 }
$mapToggleOn  = @{ 0 = 0xFF; 1 = 0; 2 = 3; 3 = 2; 4 = 4; 5 = 5 }
$mapToggleOff = @{ 0 = 0xFF; 1 = 0; 2 = 1; 3 = 2; 4 = 4; 5 = 5 }

function Emit-Picture([System.Text.StringBuilder]$sb, [string]$name, $img, $map, [string]$what,
                      [string]$dims)
{
    [void]$sb.AppendLine("/* $what */")
    [void]$sb.AppendLine("static const u8 $name[$dims] =")
    [void]$sb.AppendLine("{")
    for ($y = 0; $y -lt $img.h; $y++) {
        $line = "    "
        for ($x = 0; $x -lt $img.w; $x++) {
            $line += ("{0}," -f $map[[int]$img.idx[$y * $img.w + $x]])
        }
        [void]$sb.AppendLine($line.TrimEnd())
    }
    [void]$sb.AppendLine("};")
    [void]$sb.AppendLine("")
}

$sb = New-Object System.Text.StringBuilder
[void]$sb.AppendLine("/* Generated by tools\mksettingsart.ps1 from $MinusNormal, $MinusHover, $PlusNormal,")
[void]$sb.AppendLine(" * $PlusHover, $ToggleOn and $ToggleOff - do not edit.")
[void]$sb.AppendLine(" *")
[void]$sb.AppendLine(" * One byte per pixel: the offset of the pen to draw it with, counted from")
[void]$sb.AppendLine(" * TITLE_SETTINGS_PEN_FIRST (see title_settings_palette), or TITLE_SETTINGS_TRANSPARENT where")
[void]$sb.AppendLine(" * the toggle's cyan surround leaves the picture underneath alone. */")
[void]$sb.AppendLine("#define TITLE_STEP_W $($mn.w)")
[void]$sb.AppendLine("#define TITLE_STEP_H $($mn.h)")
[void]$sb.AppendLine("#define TITLE_TOGGLE_W $($on.w)")
[void]$sb.AppendLine("#define TITLE_TOGGLE_H $($on.h)")
[void]$sb.AppendLine("#define TITLE_SETTINGS_COLOURS $($pal.Count)")
[void]$sb.AppendLine("#define TITLE_SETTINGS_TRANSPARENT 0xFF")
[void]$sb.AppendLine("")
[void]$sb.AppendLine("/* The six pens the pictures are drawn with, RGB, in offset order: the pictures' own colours. */")
[void]$sb.AppendLine("static const u8 g_titleSettingsPal[TITLE_SETTINGS_COLOURS * 3] =")
[void]$sb.AppendLine("{")
$pl = @()
foreach ($c in $pal) { $pl += ("{0},{1},{2}" -f $c[0], $c[1], $c[2]) }
for ($i = 0; $i -lt $pl.Count; $i += 3) {
    [void]$sb.AppendLine("    " + (($pl[$i..([Math]::Min($i + 2, $pl.Count - 1))]) -join ', ') + ",")
}
[void]$sb.AppendLine("};")
[void]$sb.AppendLine("")
Emit-Picture $sb "g_titleMinusNormal" $mn $stepNormal "The minus button, its normal state." "TITLE_STEP_H * TITLE_STEP_W"
Emit-Picture $sb "g_titleMinusHover"  $mh $stepHover  "The minus button under the pointer." "TITLE_STEP_H * TITLE_STEP_W"
Emit-Picture $sb "g_titlePlusNormal"  $pn $stepNormal "The plus button, its normal state." "TITLE_STEP_H * TITLE_STEP_W"
Emit-Picture $sb "g_titlePlusHover"   $ph $stepHover  "The plus button under the pointer." "TITLE_STEP_H * TITLE_STEP_W"
Emit-Picture $sb "g_titleToggleOn"    $on $mapToggleOn   "The fullscreen toggle, on: the knob at the right." "TITLE_TOGGLE_H * TITLE_TOGGLE_W"
Emit-Picture $sb "g_titleToggleOff"   $off $mapToggleOff  "The fullscreen toggle, off: the knob at the left." "TITLE_TOGGLE_H * TITLE_TOGGLE_W"

$text = $sb.ToString().Replace("`r`n", "`n")
[IO.File]::WriteAllText((Join-Path (Get-Location) $Out), $text, (New-Object System.Text.UTF8Encoding($false)))
Write-Output "wrote $Out ($($mn.w)x$($mn.h) steps, $($on.w)x$($on.h) toggle, $($pal.Count) pens)"
