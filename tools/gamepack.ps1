<#
.SYNOPSIS  Builds assets\game.pak from the floppy images.

.DESCRIPTION
    Rebuilds src\assetExport and runs its `gamepack` command, which decodes every
    resource of the 13 game banks (SMS pictures to chunky 8-bit, palettes deduplicated)
    and stores scripts and logic data byte identical to the Amiga files.
    Run tools\verify-pack.ps1 afterwards to prove the pack matches the exporter's own
    decode.

.EXAMPLE  powershell -ExecutionPolicy Bypass -File tools\gamepack.ps1
.EXAMPLE  powershell -ExecutionPolicy Bypass -File tools\gamepack.ps1 -Verbose
#>
param(
    [string]$DiskDir = "disks",
    [string]$Out = "assets\game.pak",
    [switch]$Verbose
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
Push-Location $root
try {
    dotnet build "src\assetExport\ICFTD.AmigaExport.csproj" --nologo -v:q | Out-Null
    if ($LASTEXITCODE -ne 0) { throw "exporter build failed" }
    $exe = (Resolve-Path "src\assetExport\bin\Debug\net10.0\ICFTD.AmigaExport.exe").Path
    $args = @("gamepack", $DiskDir, $Out)
    if ($Verbose) { $args += "-v" }
    & $exe @args
    if ($LASTEXITCODE -ne 0) { throw "gamepack failed" }
}
finally { Pop-Location }
