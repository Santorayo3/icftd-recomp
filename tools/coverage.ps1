<#
.SYNOPSIS
    Coverage of the recompilation, and the work queue for the next sweep.

.DESCRIPTION
    Three inputs, all generated or maintained already:
      re\model\functions.csv   every function with its size (from Ghidra)
      docs\annotations.csv     the names we have proven
      src\**\*.c               functions carrying a "PORTED: <addr>" tag

    Prints how much of the original is ported, how much is still anonymous, and the
    smallest unported functions with the fewest callers - which is what a sweep should
    start with, because they are the ones the differential harness can validate cheapest.

.PARAMETER Next
    How many candidates to list (default 20).

.EXAMPLE
    powershell -ExecutionPolicy Bypass -File tools\coverage.ps1
#>
param(
    [int]$Next = 20
)

$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
Push-Location $root
try {
    $fnCsv = 're\model\functions.csv'
    if (-not (Test-Path $fnCsv)) { throw "$fnCsv not found - run: powershell -File tools\ghidra\run-ghidra.ps1 -ModelOnly" }

    $functions = Import-Csv $fnCsv

    $ported = @{}
    Get-ChildItem -Recurse -Include *.c,*.h,*.cs -Path src | ForEach-Object {
        $file = $_.FullName
        Select-String -Path $file -Pattern 'PORTED:\s*([0-9a-fA-F]{6,8})' -AllMatches | ForEach-Object {
            foreach ($m in $_.Matches) { $ported[$m.Groups[1].Value.ToLower().PadLeft(8, '0')] = $file }
        }
    }

    $named = @{}
    if (Test-Path 'docs\annotations.csv') {
        Get-Content 'docs\annotations.csv' | Where-Object { $_ -match '^[0-9a-fA-F]{4,8},func,' } | ForEach-Object {
            $p = $_ -split ','
            $named[$p[0].ToLower().PadLeft(8, '0')] = $p[2]
        }
    }

    $totalBytes = ($functions | Measure-Object -Property size -Sum).Sum
    $portedFns = @($functions | Where-Object { $ported.ContainsKey($_.addr) })
    $portedBytes = ($portedFns | Measure-Object -Property size -Sum).Sum
    if (-not $portedBytes) { $portedBytes = 0 }

    Write-Host ''
    Write-Host ("functions          : {0}" -f $functions.Count)
    Write-Host ("code bytes         : {0}" -f [int]$totalBytes)
    Write-Host ("named              : {0} ({1:0.0}%)" -f $named.Count, (100.0 * $named.Count / $functions.Count))
    Write-Host ("ported             : {0} ({1:0.0}% of functions, {2:0.0}% of bytes)" -f `
        $portedFns.Count, (100.0 * $portedFns.Count / $functions.Count), (100.0 * $portedBytes / $totalBytes))
    Write-Host ''

    if ($portedFns.Count) {
        Write-Host 'ported functions:'
        foreach ($f in $portedFns | Sort-Object addr) {
            $name = if ($named.ContainsKey($f.addr)) { $named[$f.addr] } else { $f.signature }
            Write-Host ("  {0}  {1,5} bytes  {2}" -f $f.addr, $f.size, $name)
        }
        Write-Host ''
    }

    # S0 = leaves: no callees, small, not ported, not a library stub
    $cand = $functions |
        Where-Object { -not $ported.ContainsKey($_.addr) -and -not $named.ContainsKey($_.addr) -and
                       -not $_.callees -and $_.thunk -ne '1' } |
        Sort-Object { [int]$_.size }
    Write-Host ("next candidates (leaf functions, smallest first, {0} of {1}):" -f ([Math]::Min($Next, $cand.Count)), $cand.Count)
    $cand | Select-Object -First $Next | ForEach-Object {
        Write-Host ("  {0}  {1,5} bytes  {2,2} insns  called by {3}" -f `
            $_.addr, $_.size, $_.insns, (($_.callers -split ' ' | Where-Object { $_ }).Count))
    }
    Write-Host ''
}
finally {
    Pop-Location
}
