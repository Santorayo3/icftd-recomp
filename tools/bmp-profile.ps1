# Per-frame colour profile of a BMP series (8-bit palettised or 24-bit), by direct byte reads.
# tools\cap-timeline.ps1 does the same through System.Drawing and returns zeros for indexed BMPs,
# so this one decodes the header itself - it is fast enough to profile a few thousand frames.
param(
    [Parameter(Mandatory = $true)][string]$Dir,
    [string]$Pattern = 'f*.bmp',
    [int]$From = 0,
    [int]$To = 999999,
    [Parameter(Mandatory = $true)][string]$Out
)
$ErrorActionPreference = 'Stop'

$rows = New-Object System.Collections.Generic.List[string]
$rows.Add('index,meanR,meanG,meanB,black,change')

$prev = $null
$files = Get-ChildItem -LiteralPath $Dir -Filter $Pattern | Sort-Object Name
foreach ($f in $files) {
    $idx = 0
    if ($f.BaseName -match '(\d+)$') { $idx = [int]$Matches[1] }
    if ($idx -lt $From -or $idx -gt $To) { continue }

    $b = [System.IO.File]::ReadAllBytes($f.FullName)
    $off = [BitConverter]::ToInt32($b, 10)
    $w = [BitConverter]::ToInt32($b, 18)
    $h = [BitConverter]::ToInt32($b, 22)
    if ($h -lt 0) { $h = -$h }
    $bpp = [BitConverter]::ToInt16($b, 28)
    $n = $w * $h
    $r = 0L; $g = 0L; $bl = 0L; $dark = 0L
    if ($bpp -eq 8) {
        $pal = 54
        for ($i = 0; $i -lt $n; $i++) {
            $p = $pal + 4 * [int]$b[$off + $i]
            $r += $b[$p + 2]; $g += $b[$p + 1]; $bl += $b[$p]
            if (($b[$p + 2] -bor $b[$p + 1] -bor $b[$p]) -eq 0) { $dark++ }
        }
    } else {
        for ($i = 0; $i -lt $n; $i++) {
            $p = $off + 3 * $i
            $bl += $b[$p]; $g += $b[$p + 1]; $r += $b[$p + 2]
            if (($b[$p] -bor $b[$p + 1] -bor $b[$p + 2]) -eq 0) { $dark++ }
        }
    }
    $mr = [math]::Round($r / $n, 1); $mg = [math]::Round($g / $n, 1); $mb = [math]::Round($bl / $n, 1)
    $sh = [math]::Round($dark / $n, 3)
    $ch = 0.0
    if ($null -ne $prev) { $ch = [math]::Round([math]::Abs($mr - $prev[0]) + [math]::Abs($mg - $prev[1]) + [math]::Abs($mb - $prev[2]) + 100 * [math]::Abs($sh - $prev[3]), 1) }
    $prev = @($mr, $mg, $mb, $sh)
    $rows.Add("$idx,$mr,$mg,$mb,$sh,$ch")
}

[System.IO.File]::WriteAllLines((Join-Path (Get-Location) $Out), [string[]]$rows.ToArray())
Write-Output ("profiled {0} frame(s) -> {1}" -f ($rows.Count - 1), $Out)
