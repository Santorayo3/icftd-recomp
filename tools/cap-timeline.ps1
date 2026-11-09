<#
.SYNOPSIS
    Prints a per-frame brightness profile of a converted capture, to locate scene changes.

.DESCRIPTION
    A capture is one PNG per interval, with tools\winuae-capture.ps1's manifest.csv giving the
    elapsed time. This walks a converted frame directory (320x200 BMPs from
    tools\capture-frames.ps1, or the raw PNGs) and reports, per frame, the mean brightness and
    the share of pixels that are not black - enough to spot when a scene appears, fades or is
    replaced.

.EXAMPLE
    powershell -ExecutionPolicy Bypass -File tools\cap-timeline.ps1 -In out\cap-early-320 -Manifest out\cap-early\manifest.csv -From 180 -To 380
#>
param(
    [Parameter(Mandatory = $true)][string]$In,
    [string]$Manifest = "",
    [int]$From = 0,
    [int]$To = 999999,
    [int]$Step = 1,
    [string]$Pattern = 'f*.*',
    [int]$Height = 200,              # rows to measure (game area)
    [string]$Out = ""
)
$ErrorActionPreference = 'Stop'
Add-Type -AssemblyName System.Drawing

$root = Split-Path -Parent $PSScriptRoot
Push-Location $root
try {
    $times = @{}
    if ($Manifest -and (Test-Path -LiteralPath $Manifest)) {
        foreach ($r in Import-Csv -LiteralPath $Manifest) { if ($r.file) { $times[[int]$r.index] = [int]$r.elapsed_ms } }
    }

    $files = @(Get-ChildItem -LiteralPath $In -Filter $Pattern | Sort-Object Name)
    $lines = New-Object System.Collections.Generic.List[string]
    $lines.Add('index,elapsed_ms,brightness,nonblack_pct')

    foreach ($f in $files) {
        $idx = $null
        if ($f.Name -match 'f0*(\d+)') { $idx = [int]$Matches[1] }
        if ($null -eq $idx -or $idx -lt $From -or $idx -gt $To) { continue }
        if ($Step -gt 1 -and ($idx % $Step) -ne 0) { continue }

        $bmp = [System.Drawing.Bitmap]::FromFile($f.FullName)
        $sum = 0; $n = 0; $total = 0
        $h = [Math]::Min($Height, $bmp.Height)
        for ($y = 2; $y -lt $h - 2; $y += 2) {
            for ($x = 2; $x -lt $bmp.Width - 2; $x += 2) {
                $c = $bmp.GetPixel($x, $y)
                $v = ($c.R + $c.G + $c.B) / 3
                $sum += $v
                if ($c.R -gt 24 -or $c.G -gt 24 -or $c.B -gt 24) { $n++ }
                $total++
            }
        }
        $bmp.Dispose()

        $ms = if ($times.ContainsKey($idx)) { $times[$idx] } else { '' }
        $line = '{0},{1},{2},{3}' -f $idx, $ms, [int]($sum / $total), [int](100 * $n / $total)
        $lines.Add($line)
        if (-not $Out) { $line }
    }

    if ($Out) {
        [System.IO.File]::WriteAllLines((Join-Path $root $Out), $lines, (New-Object System.Text.UTF8Encoding($false)))
        "wrote $($lines.Count - 1) row(s) -> $Out"
    }
}
finally { Pop-Location }
