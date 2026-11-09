<#
.SYNOPSIS
    Builds the ICFTD recomp for its platforms with Open Watcom.

.DESCRIPTION
    Windows  : 32-bit PE (OW has no x86-64 C code generator; a Win32 image runs
               natively on 64-bit Windows).  Model: flat, target nt.
    DOS      : 16-bit real mode EXE, large model, 486 instruction selection.

    Output goes to bin\<target>\.  The win32 target also publishes the asset
    exporter (src\assetExport) as a self-contained icftd-export.exe next to the
    game, so a fresh install can decode the user's disk images on first start
    without a .NET runtime installed.

    The exact command line is printed so the build can be reproduced by hand.
    Paths are quoted because the Watcom tools re-parse the command line and would
    otherwise split on the spaces in the project path (this machine has 8.3 short
    names disabled, so there is no short-path escape).

.EXAMPLE
    powershell -ExecutionPolicy Bypass -File src\game\build.ps1
.EXAMPLE
    powershell -ExecutionPolicy Bypass -File src\game\build.ps1 -Target dos -Debug
#>
param(
    [ValidateSet('all', 'win32', 'dos')]
    [string]$Target = 'all',
    [string]$WatcomHome = $(if ($env:WATCOM) { $env:WATCOM } else { "H:\Meine Programme\Open Watcom" }),
    [switch]$Debug,
    [switch]$NoConverter,
    [switch]$ForceConverter
)

$ErrorActionPreference = 'Stop'
$game = $PSScriptRoot
$root = Split-Path -Parent (Split-Path -Parent $game)
$binRoot = Join-Path $root 'bin'
$core = Join-Path $game 'core'

# The Watcom tools need their environment; do not rely on the shell having it.
$env:WATCOM = $WatcomHome
$env:EDPATH = Join-Path $WatcomHome 'eddat'
$env:INCLUDE = @(
    (Join-Path $WatcomHome 'h'),
    (Join-Path $WatcomHome 'h\nt'),
    (Join-Path $WatcomHome 'h\nt\directx'),
    (Join-Path $WatcomHome 'h\nt\ddk')
) -join ';'
$env:LIB = @(
    (Join-Path $WatcomHome 'lib386'),
    (Join-Path $WatcomHome 'lib386\nt'),
    (Join-Path $WatcomHome 'lib286'),
    (Join-Path $WatcomHome 'lib286\dos')
) -join ';'
$env:Path = (Join-Path $WatcomHome 'binnt64') + ';' + $env:Path

function Q([string]$p) { '"' + $p + '"' }

$srcsCore = @('main.c', 'assets.c', 'gfx.c', 'pack.c', 'move.c', 'sys\helpers.c', 'amiga\graphics.c', 'amiga\blitter.c') | ForEach-Object { Q (Join-Path $core $_) }

function Invoke-Target([string]$name, [string[]]$cmd, [string]$outDir) {
    New-Item -ItemType Directory -Force -Path $outDir | Out-Null
    Write-Host ""
    Write-Host "=== $name ==="
    Write-Host ($cmd -join ' ')
    Push-Location $outDir
    # Watcom writes warnings to stderr; with 'Stop' PowerShell would turn those into a
    # terminating error even though the build succeeded. Judge by the exit code instead.
    $prevEap = $ErrorActionPreference
    $ErrorActionPreference = 'Continue'
    try {
        & $cmd[0] @($cmd[1..($cmd.Count - 1)]) 2>&1 | Out-Host
        if ($LASTEXITCODE -ne 0) { throw "$name build failed with exit code $LASTEXITCODE" }
    }
    finally { $ErrorActionPreference = $prevEap; Pop-Location }
}

# The game decodes the user's disks itself, so it needs the exporter as a plain exe
# (no .NET install on the target machine).
function Publish-Converter([string]$dest) {
    $src = Join-Path $root 'src\assetExport'
    $newest = Get-ChildItem $src -Filter *.cs -File -Recurse |
              Where-Object { $_.FullName -notmatch '\\(bin|obj)\\' } |
              Sort-Object LastWriteTime -Descending | Select-Object -First 1
    if (-not ($Debug -or $ForceConverter) -and (Test-Path $dest) -and
        (-not $newest -or $newest.LastWriteTime -le (Get-Item $dest).LastWriteTime)) {
        Write-Host "-> $dest (up to date)"
        return
    }
    if (-not (Get-Command dotnet -ErrorAction SilentlyContinue)) {
        Write-Warning "dotnet not found - $dest not published; the game cannot decode assets on first start."
        return
    }
    Write-Host ""
    Write-Host "=== asset exporter ==="
    $prevEap = $ErrorActionPreference
    $ErrorActionPreference = 'Continue'
    & dotnet publish (Join-Path $src 'ICFTD.AmigaExport.csproj') -c Release -r win-x64 `
        --self-contained true -p:PublishSingleFile=true -p:AssemblyName=icftd-export `
        -p:DebugType=none -o (Split-Path -Parent $dest) --nologo -v:q 2>&1 | Out-Host
    $ErrorActionPreference = $prevEap
    if ($LASTEXITCODE -ne 0) { throw "publishing the asset exporter failed" }
    Write-Host "-> $dest"
}

if ($Target -in @('all', 'win32')) {
    $wcl = Join-Path $WatcomHome 'binnt64\wcl386.exe'
    $out = Join-Path $binRoot 'win32'
    $flags = @('-bt=nt', '-q', ('-i=' + (Q $core)))
    $flags += if ($Debug) { @('-d2', '-od', '-hw') } else { @('-5s', '-ox', '-zp8') }
    $cmd = @($wcl) + $flags + @('-fe=' + (Q (Join-Path $out 'icftd.exe'))) + $srcsCore +
           @(Q (Join-Path $game 'plat\win32\plat_win32.c'))
    Invoke-Target 'win32' $cmd $out
    Write-Host "-> $(Join-Path $out 'icftd.exe')"
    if (-not $NoConverter) { Publish-Converter (Join-Path $out 'icftd-export.exe') }
}

if ($Target -in @('all', 'dos')) {
    $wcl = Join-Path $WatcomHome 'binnt64\wcl.exe'
    $out = Join-Path $binRoot 'dos'
    $flags = @('-bt=dos', '-q', '-ml', ('-i=' + (Q $core)))
    $flags += if ($Debug) { @('-d2', '-od') } else { @('-4', '-ox', '-zp2') }
    $cmd = @($wcl) + $flags + @('-fe=' + (Q (Join-Path $out 'icftd.exe'))) + $srcsCore +
           @(Q (Join-Path $game 'plat\dos\plat_dos.c'))
    Invoke-Target 'dos' $cmd $out
    Write-Host "-> $(Join-Path $out 'icftd.exe')"
}
