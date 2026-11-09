<#
.SYNOPSIS
    Compares two MovE traces line by line and reports where they diverge.

.DESCRIPTION
    A trace written by `icftd.exe ... --trace <file>` is one event per line, with no
    addresses, so two runs (or two builds) are comparable as plain text. This prints the
    differing line count and the first few divergences with their neighbours, which is
    usually enough to name the object, the command or the palette entry that changed.

    Both parameters may be the same file path; the tool then just reports identical.

    Exit code: 0 identical, 1 different, 2 unreadable input.

.EXAMPLE
    powershell -ExecutionPolicy Bypass -File tools\trace-diff.ps1 -A out\node.txt -B ref\traces\logo.txt
#>
param(
    [Parameter(Mandatory = $true)][string]$A,
    [Parameter(Mandatory = $true)][string]$B,
    [int]$Show = 8,        # how many divergences to print
    [int]$Context = 1      # unchanged lines to print around each one
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
Push-Location $root
try {
    foreach ($p in @($A, $B)) {
        if (-not (Test-Path -LiteralPath $p)) { Write-Host "missing trace: $p"; exit 2 }
    }
    $la = @(Get-Content -LiteralPath $A)
    $lb = @(Get-Content -LiteralPath $B)

    $n = [Math]::Max($la.Count, $lb.Count)
    $bad = New-Object System.Collections.Generic.List[int]
    for ($i = 0; $i -lt $n; $i++) {
        $x = if ($i -lt $la.Count) { $la[$i] } else { '<eof>' }
        $y = if ($i -lt $lb.Count) { $lb[$i] } else { '<eof>' }
        if ($x -cne $y) { [void]$bad.Add($i) }
    }

    Write-Host ("trace: {0} differing line(s) of {1}" -f $bad.Count, $n)
    if ($bad.Count -eq 0) { exit 0 }

    $shown = 0
    $lastPrinted = -1
    foreach ($i in $bad) {
        if ($shown -ge $Show) { Write-Host ("  ... {0} more" -f ($bad.Count - $shown)); break }
        $from = [Math]::Max(0, $i - $Context)
        if ($from -gt $lastPrinted + 1) { Write-Host "  ---" }
        for ($k = $from; $k -le $i; $k++) {
            $tag = if ($k -eq $i) { '!' } else { ' ' }
            $xa = if ($k -lt $la.Count) { $la[$k] } else { '<eof>' }
            $xb = if ($k -lt $lb.Count) { $lb[$k] } else { '<eof>' }
            Write-Host ("  {0}{1,5} A: {2}" -f $tag, ($k + 1), $xa)
            if ($k -eq $i) { Write-Host ("  {0}{1,5} B: {2}" -f $tag, ($k + 1), $xb) }
        }
        $lastPrinted = $i
        $shown++
    }
    exit 1
}
finally { Pop-Location }
