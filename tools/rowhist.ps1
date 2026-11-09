# Row histogram of an 8-bit BMP written by `icftd --intro`/`--start`.
#   powershell -ExecutionPolicy Bypass -File tools\rowhist.ps1 <file.bmp> [-From 0] [-To 120] [-Step 1]
# Prints the palette indices used per row (top 3 by count), which is how a sky gradient made of
# a forced channel plane shows up: one index for the flat part, a ditch of two per row below.
param(
    [Parameter(Mandatory = $true)][string]$Bmp,
    [int]$From = 0,
    [int]$To = -1,
    [int]$Step = 1
)
$ErrorActionPreference = 'Stop'
$b = [System.IO.File]::ReadAllBytes($Bmp)
$w = [int]$b[18] + ([int]$b[19] -shl 8)
$h = [int]$b[22] + ([int]$b[23] -shl 8)
$off = [int]$b[10] + ([int]$b[11] -shl 8)
if ($To -lt 0 -or $To -ge $h) { $To = $h - 1 }
"$Bmp  ${w}x${h}  bpp=$([int]$b[28])  rows $From..$To step $Step"
for ($y = $From; $y -le $To; $y += $Step) {
    $row = $off + ($h - 1 - $y) * $w
    $t = @{}
    for ($x = 0; $x -lt $w; $x++) {
        $v = [int]$b[$row + $x]
        if ($t.ContainsKey($v)) { $t[$v]++ } else { $t[$v] = 1 }
    }
    $top = $t.GetEnumerator() | Sort-Object -Property Value -Descending | Select-Object -First 3
    $s = ($top | ForEach-Object { "$($_.Key)x$($_.Value)" }) -join ' '
    "y {0,3}  {1}" -f $y, $s
}
