# Runs bin\win32\icftd-emu.exe with a hard time limit and never blocks the terminal.
#
# Two lessons baked in here:
#   * redirect into FILES, not into a pipeline - `| Out-File` keeps the caller waiting until the
#     process exits, so any run that does not finish hangs the whole task;
#   * always enforce -TimeoutSec and kill the process. The emulated program can spin forever
#     inside a native loop of a shim (a blit with a garbage size), which the instruction budget
#     never sees.
#
#   powershell -ExecutionPolicy Bypass -File tools\emu-run.ps1 [-Insns 4000000] [-Log out\emu-run.txt]
#             [-Dump out\shot [-DumpCount 16]] [-Window] [-DosLog] [-Trace] [-Progress]
#             [-TimeoutSec 60] [-EmuArgs '--anything']
param(
    [string]$Image = 'export\code\dshell4k\dshell.img',
    [string]$Entry = '0x4000',
    [long]$Insns = 4000000,
    [string]$Log = 'out\emu-run.txt',
    [string]$Dump = '',
    [int]$DumpCount = 16,
    [int]$DumpEvery = 1,
    [string]$Watch = '',
    [switch]$Window,
    [switch]$DosLog,
    [switch]$Trace,
    [switch]$Progress,
    [switch]$DffLog,
    [int]$TimeoutSec = 60,
    [string[]]$EmuArgs = @()
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
$exe = Join-Path $root 'bin\win32\icftd-emu.exe'
if (-not (Test-Path $exe)) { throw "missing $exe - run tools\build-emu.ps1" }
$logPath = Join-Path $root $Log
$errPath = "$logPath.err"
New-Item -ItemType Directory -Force -Path (Split-Path -Parent $logPath) | Out-Null
Remove-Item $logPath, $errPath -ErrorAction SilentlyContinue

$emuArgs = @($Image, $Entry, "$Insns")
if ($Trace)    { $emuArgs += '--trace' }
if ($DosLog)   { $emuArgs += '--doslog' }
if ($Progress) { $emuArgs += '--progress' }
if ($DffLog)   { $emuArgs += '--dfflog' }
if ($Window)   { $emuArgs += '--window' }
if ($Watch -ne '') { $emuArgs += @('--watch', $Watch) }
if ($Dump -ne '') { $emuArgs += @('--dump', $Dump, "$DumpCount", '--every', "$DumpEvery") }
$emuArgs += $EmuArgs

# Rebuild when a core source is newer than the exe: running a stale binary has already cost a
# debugging cycle and the build is a few seconds.
$src = Join-Path $root 'src\game\core\emu'
$newest = Get-ChildItem $src -Recurse -Include *.c, *.h |
          Sort-Object LastWriteTime -Descending | Select-Object -First 1
foreach ($f in @((Join-Path $root 'src\game\emu_main.c'), (Join-Path $root 'src\game\plat\win32\plat_win32.c')))
{
    $i = Get-Item $f -ErrorAction SilentlyContinue
    if ($i -and ($newest -eq $null -or $i.LastWriteTime -gt $newest.LastWriteTime)) { $newest = $i }
}
if ($newest -and $newest.LastWriteTime -gt (Get-Item $exe).LastWriteTime)
{
    "rebuilding (source newer: $($newest.Name))"
    & (Join-Path $PSScriptRoot 'build-emu.ps1') | Out-Host
    if (-not (Test-Path $exe)) { throw 'build failed' }
}

$p = Start-Process -FilePath $exe -ArgumentList $emuArgs -NoNewWindow -PassThru `
                   -RedirectStandardOutput $logPath -RedirectStandardError $errPath
$timedOut = -not $p.WaitForExit($TimeoutSec * 1000)
if ($timedOut)
{
    try { $p.Kill() } catch { }
    Start-Sleep -Milliseconds 300
}
$lines = 0
if (Test-Path $logPath) { $lines = (Get-Content $logPath | Measure-Object).Count }
if ($timedOut)
{
    "emu TIMEOUT after $TimeoutSec s (killed) log=$logPath lines=$lines"
    exit 2
}
"emu exit=$($p.ExitCode) log=$logPath lines=$lines"
