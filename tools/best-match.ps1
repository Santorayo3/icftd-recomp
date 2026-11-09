<#
.SYNOPSIS
    Finds the frame in a rendered series that best matches a reference frame.

.DESCRIPTION
    A capture and a render have no shared clock, so alignment has to come from the pictures.
    Both are reduced to a tiny grey signature (BlockX x BlockY cells, each the mean of its cell)
    and compared by mean absolute difference, which is enough to tell one scene from another and
    is fast enough to sweep hundreds of frames.

    Use it before diffing: pick the reference frame you care about, let this name the render
    frame, then diff that pair to see what is actually wrong.

.EXAMPLE
    powershell -ExecutionPolicy Bypass -File tools\best-match.ps1 `
        -Ref out\cap-early-320\f00260.bmp -Dir out\render -From 150 -To 400 -Step 2
#>
param(
    [Parameter(Mandatory = $true)][string]$Ref,
    [Parameter(Mandatory = $true)][string]$Dir,
    [string]$Pattern = 'f*.bmp',
    [int]$From = 0,
    [int]$To = 100000,
    [int]$Step = 1,
    [int]$BlockX = 16,
    [int]$BlockY = 10,
    [int]$Show = 5
)
$ErrorActionPreference = 'Stop'
Add-Type -AssemblyName System.Drawing

$root = Split-Path -Parent $PSScriptRoot
Push-Location $root
try {
    function Signature([string]$path) {
        $bmp = [System.Drawing.Bitmap]::FromFile((Get-Item -LiteralPath $path).FullName)
        $sig = New-Object 'double[]' ($BlockX * $BlockY)
        $cw = $bmp.Width / $BlockX
        $ch = $bmp.Height / $BlockY
        for ($by = 0; $by -lt $BlockY; $by++) {
            for ($bx = 0; $bx -lt $BlockX; $bx++) {
                # 4 samples per cell is plenty for a scene signature
                $sum = 0.0
                for ($sy = 0; $sy -lt 2; $sy++) {
                    for ($sx = 0; $sx -lt 2; $sx++) {
                        $x = [int](($bx + ($sx + 0.5) / 2) * $cw)
                        $y = [int](($by + ($sy + 0.5) / 2) * $ch)
                        if ($x -ge $bmp.Width) { $x = $bmp.Width - 1 }
                        if ($y -ge $bmp.Height) { $y = $bmp.Height - 1 }
                        $c = $bmp.GetPixel($x, $y)
                        $sum += ($c.R + $c.G + $c.B) / 3.0
                    }
                }
                $sig[$by * $BlockX + $bx] = $sum / 4.0
            }
        }
        $bmp.Dispose()
        return $sig
    }

    $refSig = Signature $Ref
    $results = New-Object System.Collections.Generic.List[object]

    foreach ($f in @(Get-ChildItem -LiteralPath $Dir -Filter $Pattern | Sort-Object Name)) {
        if ($f.Name -notmatch '(\d+)') { continue }
        $idx = [int]$Matches[1]
        if ($idx -lt $From -or $idx -gt $To) { continue }
        if ($Step -gt 1 -and ($idx % $Step) -ne 0) { continue }

        $sig = Signature $f.FullName
        $d = 0.0
        for ($i = 0; $i -lt $sig.Length; $i++) { $d += [Math]::Abs($sig[$i] - $refSig[$i]) }
        $results.Add([pscustomobject]@{ index = $idx; file = $f.Name; score = [Math]::Round($d / $sig.Length, 2) })
    }

    $results | Sort-Object score | Select-Object -First $Show | Format-Table -AutoSize | Out-String -Width 120 | Write-Host
}
finally { Pop-Location }
