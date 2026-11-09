<#
.SYNOPSIS
    Ranks the engine globals by how many swept functions touch them.

.DESCRIPTION
    Reads the ledger written by `rleaf --ledger --reads` and counts, per engine-state word
    address, how many functions write it and how many read it. The result is the worklist for
    naming globals in docs\annotations.csv: the top of the list is state that a port cannot
    avoid, the tail is one-off locals that happen to live in the data hunk.

    Columns `writes` and `reads` hold `addr:len` and `addr` entries, `;` separated.

    Both outputs are written by the script itself (out\global-heat.csv, out\global-heat.txt),
    so nothing depends on how the caller redirects.

.EXAMPLE
    powershell -NoProfile -ExecutionPolicy Bypass -File tools\global-heat.ps1 -Top 40
#>
[CmdletBinding()]
param(
    [string] $Ledger = 'out\leaf-ledger.csv',
    [int]    $Top = 40,
    [string] $Out = 'out\global-heat',
    # Runs longer than this are not the function's own body; they walk a shared error path.
    [int]    $MaxInsns = 5000
)

$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot

function Rooted([string] $p) {
    if ([System.IO.Path]::IsPathRooted($p)) { return $p }
    return (Join-Path $root $p)
}

function Log([string] $text) {
    [System.IO.File]::WriteAllText(($script:basePath + '.txt'), $text, (New-Object System.Text.UTF8Encoding($false)))
}

$script:basePath = Rooted $Out

try {
    $rows = @(Import-Csv -Path (Rooted $Ledger))
    if ($rows.Count -eq 0) { throw "no rows in $Ledger - run: rleaf out\leaves.txt --os-basic --reads --ledger out\leaf-ledger.csv" }

    $all = $rows.Count
    $rows = @($rows | Where-Object { [int] $_.insns -le $MaxInsns })

    $stats = @{}
    function Note($key, $func, $kind) {
        if (-not $stats.ContainsKey($key)) {
            $stats[$key] = @{ W = New-Object 'System.Collections.Generic.HashSet[string]'
                              R = New-Object 'System.Collections.Generic.HashSet[string]' }
        }
        [void] $stats[$key][$kind].Add($func)
    }

    # Data hunk bounds (re\model and Harness.cs agree on these).
    $winLo = [Convert]::ToInt32('21a58', 16)
    $winHi = [Convert]::ToInt32('2d598', 16)
    # A wide fill would swamp the ranking; only its start matters for naming the global.
    $maxSpan = 64

    foreach ($row in $rows) {
        $func = $row.addr
        if ($row.writes) {
            foreach ($w in ($row.writes -split ';' | Where-Object { $_ })) {
                $parts = $w -split ':'
                $base = [Convert]::ToInt32($parts[0], 16)
                $len = [Convert]::ToInt32($parts[1], 16)
                $end = [Math]::Min($base + [Math]::Min($len, $maxSpan), $winHi)
                for ($a = $base - ($base % 2); $a -lt $end; $a += 2) {
                    if ($a -ge $winLo) { Note ('{0:x6}' -f $a) $func 'W' }
                }
            }
        }
        if ($row.reads) {
            foreach ($r in ($row.reads -split ';' | Where-Object { $_ })) {
                $a = [Convert]::ToInt32($r, 16)
                $a -= ($a % 2)
                if ($a -ge $winLo -and $a -lt $winHi) { Note ('{0:x6}' -f $a) $func 'R' }
            }
        }
    }

    $flat = foreach ($kv in $stats.GetEnumerator()) {
        [pscustomobject]@{
            addr    = $kv.Key
            writers = $kv.Value.W.Count
            readers = $kv.Value.R.Count
            touched = $kv.Value.W.Count + $kv.Value.R.Count
        }
    }

    $sorted = @($flat | Sort-Object -Property touched, readers, writers -Descending)

    $csv = New-Object System.Collections.Generic.List[string]
    $csv.Add('addr,writers,readers,touched')
    foreach ($r in $sorted) { $csv.Add(('{0},{1},{2},{3}' -f $r.addr, $r.writers, $r.readers, $r.touched)) }
    # Cast to string[]: binding a generic List to WriteAllLines reports a bogus PathTooLong.
    $lines = [string[]] $csv.ToArray()
    [System.IO.File]::WriteAllLines(($script:basePath + '.csv'), $lines, (New-Object System.Text.UTF8Encoding($false)))

    $sb = New-Object System.Text.StringBuilder
    [void] $sb.AppendLine(('{0} distinct engine-state words touched by {1} functions ({2} runs longer than {3} insns excluded)' -f $sorted.Count, $rows.Count, ($all - $rows.Count), $MaxInsns))
    [void] $sb.AppendLine('')
    [void] $sb.AppendLine('addr      writers readers touched')
    foreach ($r in ($sorted | Select-Object -First $Top)) {
        [void] $sb.AppendLine(('{0}  {1,7} {2,7} {3,7}' -f $r.addr, $r.writers, $r.readers, $r.touched))
    }
    Log $sb.ToString()
    Write-Output $sb.ToString()
}
catch {
    Log ("global-heat failed:`r`n" + ($_ | Out-String))
    Write-Output $_
    exit 1
}
