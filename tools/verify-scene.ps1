<#
.SYNOPSIS
    Compatibility entry point: the reference frames now live in ref\manifest.csv.

.DESCRIPTION
    The three frames (room, scene, logo) used to be hard-coded here. They are rows in
    ref\manifest.csv now, so adding a scene is data instead of a new script. This wrapper
    keeps the old name, parameters and output working for anything that still calls it.

    See tools\verify-frames.ps1 for the engine.

.EXAMPLE
    powershell -ExecutionPolicy Bypass -File tools\verify-scene.ps1
#>
param(
    [string]$Manifest = "ref\manifest.csv",
    [string]$Pack = "assets\game.pak",
    [string]$Exe = "bin\win32\icftd.exe",
    [int]$Tolerance = 16,
    [string]$OutDir = "out\verify"
)

# A child process with -ExecutionPolicy Bypass, like every other cross-script call here.
& powershell -NoProfile -ExecutionPolicy Bypass -File (Join-Path $PSScriptRoot 'verify-frames.ps1') `
    -Manifest $Manifest -Pack $Pack -Exe $Exe -Tolerance $Tolerance -OutDir $OutDir
exit $LASTEXITCODE
