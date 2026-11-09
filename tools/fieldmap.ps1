<#
.SYNOPSIS
    Query the Ghidra model exports (re\model) from the command line.

.DESCRIPTION
    The field map is the useful one: it records, for every memory access the decompiler
    emitted, "base + constant offset, size, read/write". That is the struct layout we
    otherwise dig out of the assembly by hand.

    base naming:
      param_1, param_2, this->x  the decompiler named the storage
      tmp<hex>                   an unnamed pointer; the same tmp in the same function
                                 is the same object, so offsets cluster into a struct
      mem                        the address is a constant => a global (offset is the
                                 absolute address, e.g. 29f16)
      unaff_A5 / unaff_A6        stack (frame pointer never assigned) - usually noise
      reg                        a raw CPU register

.PARAMETER Function
    Show every field access inside one function, e.g. FUN_0001DCB0.

.PARAMETER Base
    Show all offsets accessed through one base, across the whole program.

.PARAMETER Offset
    Show everyone who touches one offset (hex or decimal), e.g. 0x38.

.PARAMETER Top
    How many rows to print (default 40).

.EXAMPLE
    .\tools\fieldmap.ps1 FUN_0001DCB0
.EXAMPLE
    .\tools\fieldmap.ps1 -Base param_2 -Top 25
.EXAMPLE
    .\tools\fieldmap.ps1 -Offset 0x38
#>
param(
    [string]$Function,
    [string]$Base,
    [string]$Offset,
    [int]$Top = 40
)

$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
$csv = Join-Path $root 're\model\fields.csv'
if (-not (Test-Path $csv)) {
    throw "re\model\fields.csv not found - run: powershell -File tools\ghidra\run-ghidra.ps1 -ModelOnly"
}

function ConvertTo-Number([string]$s) {
    if ($s -match '^0x') { return [Convert]::ToInt64($s.Substring(2), 16) }
    if ($s -match '^[0-9]+$') { return [int64]$s }
    return [Convert]::ToInt64($s, 16)
}

$rows = Import-Csv $csv
$wantOffset = $null
if ($Offset) { $wantOffset = ConvertTo-Number $Offset }

$sel = $rows
if ($Function) { $sel = $sel | Where-Object { $_.function -like "*$Function*" } }
if ($Base) { $sel = $sel | Where-Object { $_.base -eq $Base } }
if ($null -ne $wantOffset) { $sel = $sel | Where-Object { (ConvertTo-Number $_.offset) -eq $wantOffset } }

if (-not $sel) { Write-Host 'no matching access'; exit 0 }

$sel |
    Group-Object { '{0}|{1}|{2}|{3}' -f $_.function, $_.base, (ConvertTo-Number $_.offset), $_.size } |
    ForEach-Object {
        $p = $_.Name -split '\|'
        [pscustomobject]@{
            function = $p[0]
            base     = $p[1]
            offset   = [int64]$p[2]
            size     = [int]$p[3]
            reads    = ($_.Group | Where-Object { $_.kind -eq 'r' } | Measure-Object -Property count -Sum).Sum
            writes   = ($_.Group | Where-Object { $_.kind -eq 'w' } | Measure-Object -Property count -Sum).Sum
        }
    } |
    Sort-Object function, offset |
    Select-Object -First $Top |
    Format-Table @{ Label = 'function'; Expression = { $_.function } },
                 @{ Label = 'base'; Expression = { $_.base } },
                 @{ Label = 'offset'; Expression = { '0x{0:x}' -f $_.offset } },
                 @{ Label = 'size'; Expression = { $_.size } },
                 @{ Label = 'reads'; Expression = { $_.reads } },
                 @{ Label = 'writes'; Expression = { $_.writes } } -AutoSize
