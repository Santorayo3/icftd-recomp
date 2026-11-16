<#
.SYNOPSIS
    Extracts the ICFTD Amiga disks and flattens the game executable for Ghidra.

.DESCRIPTION
      1. builds src\assetExport (ICFTD.AmigaExport)
      2. extracts every floppy image in -DiskDir into export\disk1 .. export\disk3
      3. flattens dshell (the only hunk executable on the disks) into a raw load
         image plus relocation and symbol lists under export\code\dshell (the Ghidra
         base-0 copy) and export\code\dshell4k (the runtime copy, relocated to 0x4000)

    The disk images are game data and are not part of the repository; any file whose
    size is a whole number of 512-byte blocks is treated as an 880K Amiga disk.

.EXAMPLE
    powershell -ExecutionPolicy Bypass -File tools\extract.ps1
.EXAMPLE
    powershell -ExecutionPolicy Bypass -File tools\extract.ps1 -RunGhidra
#>
param(
    [string]$DiskDir = "disks",
    [string]$OutDir = "export",
    [string]$Base = "0x0",
    [switch]$RunGhidra
)

$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
Push-Location $root
try {
    $proj = "src\assetExport\ICFTD.AmigaExport.csproj"
    dotnet build $proj --nologo -v:q | Out-Null
    if ($LASTEXITCODE -ne 0) { throw "build failed" }
    $exe = (Resolve-Path "src\assetExport\bin\Debug\net10.0\ICFTD.AmigaExport.exe").Path

    $images = Get-ChildItem $DiskDir -File |
        Where-Object { $_.Length -ge 51200 -and ($_.Length % 512) -eq 0 } |
        Sort-Object Name
    if ($images.Count -eq 0) { throw "no disk images in $DiskDir" }

    $n = 0
    foreach ($img in $images) {
        $n++
        $target = Join-Path $OutDir "disk$n"
        & $exe extract $img.FullName $target
    }

    # dshell is the game program; the other files are resource banks (see amiga_formats.md).
    $dshell = Join-Path $OutDir "disk1\dshell"
    if (-not (Test-Path $dshell)) { throw "dshell not found in $OutDir\disk1" }
    & $exe hunk $dshell (Join-Path $OutDir "code\dshell") $Base
    # The game runs the same image relocated to its own load address.
    & $exe hunk $dshell (Join-Path $OutDir "code\dshell4k") "0x4000"

    if ($RunGhidra) {
        & powershell -NoProfile -ExecutionPolicy Bypass -File (Join-Path $root 'tools\ghidra\run-ghidra.ps1')
    }
}
finally {
    Pop-Location
}
