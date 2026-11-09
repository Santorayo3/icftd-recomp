<#
.SYNOPSIS
    Builds whatever is missing and starts the game.

.DESCRIPTION
    The only command a fresh checkout needs once the Amiga disk images are in disks\:
      1. builds bin\win32\icftd.exe and bin\win32\icftd-export.exe when they are
         missing or older than the sources
      2. starts the game, which decodes assets\game.pak from disks\ on first run

    Needs Open Watcom for the game itself (see src\game\build.ps1) and the .NET SDK
    for the asset exporter. A distribution folder with the two exes already built
    does not need either.

.EXAMPLE
    powershell -ExecutionPolicy Bypass -File tools\start.ps1
.EXAMPLE
    powershell -ExecutionPolicy Bypass -File tools\start.ps1 --browse
.EXAMPLE
    powershell -ExecutionPolicy Bypass -File tools\start.ps1 -Rebuild
#>
param(
    [switch]$Rebuild,
    [switch]$BuildOnly,
    [Parameter(ValueFromRemainingArguments = $true)]
    [string[]]$GameArgs
)

$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
$out = Join-Path $root 'bin\win32'
$exe = Join-Path $out 'icftd.exe'
$conv = Join-Path $out 'icftd-export.exe'

function Get-NewestSource([string[]]$dirs) {
    Get-ChildItem $dirs -File -Recurse -ErrorAction SilentlyContinue |
        Sort-Object LastWriteTime -Descending | Select-Object -First 1
}

$newest = Get-NewestSource @((Join-Path $root 'src\game\core'), (Join-Path $root 'src\game\plat\win32'))
$newestConv = Get-NewestSource @(Join-Path $root 'src\assetExport')
$stale = -not (Test-Path $exe) -or -not (Test-Path $conv) -or
         ($newest -and $newest.LastWriteTime -gt (Get-Item $exe).LastWriteTime) -or
         ($newestConv -and $newestConv.LastWriteTime -gt (Get-Item $conv).LastWriteTime)

if ($Rebuild -or $stale) {
    & (Join-Path $root 'src\game\build.ps1') -Target win32 -ForceConverter:$Rebuild
    if ($LASTEXITCODE -ne 0) { throw "build failed with exit code $LASTEXITCODE" }
}

if ($BuildOnly) {
    Write-Host "built: $exe"
    exit 0
}

$disks = Join-Path $root 'disks'
$images = @()
if (Test-Path $disks) {
    $images = Get-ChildItem $disks -File |
        Where-Object { $_.Length -ge 51200 -and ($_.Length % 512) -eq 0 }
}
if ($images.Count -eq 0 -and -not (Test-Path (Join-Path $root 'assets\game.pak'))) {
    Write-Host ""
    Write-Host "No Amiga disk images in $disks" -ForegroundColor Yellow
    Write-Host "Put the three 'It Came from the Desert' ADFs there (see disks\README.md) and run this again."
    exit 2
}

Write-Host "starting $exe $($GameArgs -join ' ')"
& $exe @GameArgs
exit $LASTEXITCODE
