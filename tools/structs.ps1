<#
.SYNOPSIS
    Turn docs\structs.csv into a C header and a readable Markdown reference.

.DESCRIPTION
    docs\structs.csv is the single place where structure layouts are recorded. This script
    emits:

      src\game\core\structs.h   the original layouts, packed exactly as the 68k had them
      docs\structs.md           the same thing for reading

    Both are generated; edit the CSV, not the outputs.

.EXAMPLE
    powershell -ExecutionPolicy Bypass -File tools\structs.ps1
#>
param(
    [string]$Csv = 'docs\structs.csv',
    [string]$Header = 'src\game\core\structs.h',
    [string]$Markdown = 'docs\structs.md'
)

$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
Push-Location $root
try {
    if (-not (Test-Path $Csv)) { throw "$Csv not found" }

    $rows = Get-Content $Csv | Where-Object { $_.Trim().Length -gt 0 -and -not $_.Trim().StartsWith('#') -and -not $_.StartsWith('struct,') }
    $fields = foreach ($line in $rows) {
        $p = $line -split ',', 6
        [pscustomobject]@{
            Struct  = $p[0].Trim()
            Size    = [Convert]::ToInt32($p[1].Trim(), 16)
            Offset  = [Convert]::ToInt32($p[2].Trim(), 16)
            Type    = $p[3].Trim()
            Name    = $p[4].Trim()
            Comment = if ($p.Count -gt 5) { $p[5].Trim() } else { '' }
        }
    }

    function Convert-TypeToC([string]$t, [string]$name) {
        if ($t -match '^(.+)\[(\d+)\]$') {
            $base = Convert-TypeToC $Matches[1] "x"
            return ($base -replace '\bx\b', "$name[$($Matches[2])]")
        }
        if ($t -match '^(.+)\*$') { return "struct $($Matches[1]) *$name" }
        $map = @{ u8 = 'uint8_t'; s8 = 'int8_t'; u16 = 'uint16_t'; s16 = 'int16_t'
                  u32 = 'uint32_t'; s32 = 'int32_t'; void = 'void' }
        if ($map.ContainsKey($t)) { return "$($map[$t]) $name" }
        return "struct $t $name"
    }

    $order = @()
    foreach ($f in $fields) { if ($order -notcontains $f.Struct) { $order += $f.Struct } }

    $h = New-Object System.Text.StringBuilder
    [void]$h.AppendLine('/* Generated from docs/structs.csv by tools/structs.ps1 - do not edit.')
    [void]$h.AppendLine(' *')
    [void]$h.AppendLine(' * These are the layouts of the ORIGINAL program, as recovered from the')
    [void]$h.AppendLine(' * assembly and confirmed against the decompiler''s field map (re/model).')
    [void]$h.AppendLine(' * Field order, widths and padding are the 68k''s, so byte offsets match;')
    [void]$h.AppendLine(' * that is what lets a port read the real data instead of rebuilding it.')
    [void]$h.AppendLine(' */')
    [void]$h.AppendLine('#ifndef ICFTD_STRUCTS_H')
    [void]$h.AppendLine('#define ICFTD_STRUCTS_H')
    [void]$h.AppendLine('')
    [void]$h.AppendLine('#include <stdint.h>')
    [void]$h.AppendLine('')

    foreach ($s in $order) {
        $mine = @($fields | Where-Object { $_.Struct -eq $s } | Sort-Object Offset)
        $total = ($mine | Select-Object -First 1).Size
        [void]$h.AppendLine("/* $s - $total bytes (0x$($total.ToString('x'))) */")
        [void]$h.AppendLine("struct $s {")
        $at = 0
        foreach ($f in $mine) {
            if ($f.Offset -gt $at) {
                $gap = $f.Offset - $at
                [void]$h.AppendLine(("    uint8_t _pad_{0:x2}[{1}];" -f $at, $gap))
            }
            $decl = Convert-TypeToC $f.Type $f.Name
            $note = "+0x{0:x2}" -f $f.Offset
            if ($f.Comment) { $note = "$note  $($f.Comment)" }
            [void]$h.AppendLine(("    {0,-34} /* {1} */" -f "$decl;", $note))
            # width of this field, for the running offset
            $w = switch -Regex ($f.Type) {
                '\*$' { 4; break }
                '^u8$' { 1; break }
                '^s8$' { 1; break }
                '^u16$' { 2; break }
                '^s16$' { 2; break }
                '^u32$' { 4; break }
                '^s32$' { 4; break }
                default { 4 }
            }
            $at = $f.Offset + $w
        }
        if ($total -gt $at) { [void]$h.AppendLine(("    uint8_t _pad_{0:x2}[{1}];" -f $at, ($total - $at))) }
        [void]$h.AppendLine('};')
        [void]$h.AppendLine('')
    }
    [void]$h.AppendLine('#endif /* ICFTD_STRUCTS_H */')

    New-Item -ItemType Directory -Force -Path (Split-Path -Parent $Header) | Out-Null
    Set-Content -Path $Header -Value $h.ToString() -Encoding ASCII
    Write-Host "header  : $Header"

    $md = New-Object System.Text.StringBuilder
    [void]$md.AppendLine('# Structures of the original program')
    [void]$md.AppendLine('')
    [void]$md.AppendLine('Generated from `docs/structs.csv` by `tools/structs.ps1`. The same data is applied')
    [void]$md.AppendLine('to the Ghidra database by `tools/ghidra/scripts/ApplyAnnotations.java`, so the')
    [void]$md.AppendLine('decompiler and the port agree on every offset.')
    [void]$md.AppendLine('')
    foreach ($s in $order) {
        $mine = @($fields | Where-Object { $_.Struct -eq $s } | Sort-Object Offset)
        $total = ($mine | Select-Object -First 1).Size
        [void]$md.AppendLine("## ``$s`` ($total bytes, 0x$($total.ToString('x')))")
        [void]$md.AppendLine('')
        [void]$md.AppendLine('| offset | type | name | note |')
        [void]$md.AppendLine('|---|---|---|---|')
        foreach ($f in $mine) {
            [void]$md.AppendLine(("| 0x{0:x2} | ``{1}`` | ``{2}`` | {3} |" -f $f.Offset, $f.Type, $f.Name, $f.Comment))
        }
        [void]$md.AppendLine('')
    }
    Set-Content -Path $Markdown -Value $md.ToString() -Encoding ASCII
    Write-Host "markdown: $Markdown"
    Write-Host ("{0} structures, {1} fields" -f $order.Count, $fields.Count)
}
finally {
    Pop-Location
}
