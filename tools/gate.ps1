<#
.SYNOPSIS
    One command that answers "is the project green?".

.DESCRIPTION
    Runs every gate in dependency order and prints a single summary. Anything that fails makes
    the script exit non-zero, so it can be used before a commit or after any sweep.

      1. exporter build        (src\assetExport, includes the 68000 harness)
      2. win32 game build      (Open Watcom, also republishes icftd-export.exe)
      3. ctest build           (host replay of the ported C functions)
      4. interpreter fixtures  (tools\harness-check.ps1: hand-checked 68k cases + SMS planes)
      5. port vs original      (tools\port-diff.ps1 -All: C port must match the interpreter)
      6. asset gates           (verify-pack, verify-frames: every row of ref\manifest.csv)

.PARAMETER Quick
    Skip the two builds; only run the checks (they are the slow, meaningful part).

.PARAMETER WithDos
    Also build the DOS target. Off by default: the recomp targets win32 only for now.

.EXAMPLE
    powershell -ExecutionPolicy Bypass -File tools\gate.ps1
#>
param(
    [switch]$Quick,
    [switch]$WithDos,
    [switch]$Verbose_Output
)

$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
Push-Location $root
$results = New-Object System.Collections.Generic.List[object]

function Step([string]$name, [scriptblock]$body) {
    $sw = [System.Diagnostics.Stopwatch]::StartNew()
    $ok = $true
    $detail = ''
    $global:LASTEXITCODE = 0
    # Native tools write warnings to stderr; with 'Stop' PowerShell would turn those into
    # exceptions, so the step body runs with 'Continue' and failures are judged by exit code.
    $prevEap = $ErrorActionPreference
    $ErrorActionPreference = 'Continue'
    try {
        $out = & $body 2>&1
        $text = ($out | Out-String)
        if ($Verbose_Output) { Write-Host $text }
        if ($LASTEXITCODE -ne 0) { $ok = $false; $detail = "exit $LASTEXITCODE" }
        if ($text -match '(?m)^\s*FAIL\b') { $ok = $false; $detail = ($text -split "`n" | Where-Object { $_ -match '^\s*FAIL' } | Select-Object -First 1).Trim() }
        if ($text -match 'error CS\d+|error!|Fehler beim Buildvorgang') { $ok = $false; $detail = 'build error' }
    }
    catch {
        $ok = $false
        $detail = $_.Exception.Message
    }
    finally {
        $ErrorActionPreference = $prevEap
    }
    $sw.Stop()
    $script:results.Add([pscustomobject]@{ Step = $name; Result = $(if ($ok) { 'PASS' } else { 'FAIL' }); Detail = $detail; Seconds = [Math]::Round($sw.Elapsed.TotalSeconds, 1) })
    if (-not $ok) { Write-Host ("FAIL {0} - {1}" -f $name, $detail) }
}

if (-not $Quick) {
    Step 'exporter build'   { dotnet build src\assetExport\ICFTD.AmigaExport.csproj --nologo -v:q }
    Step 'win32 build'      { powershell -ExecutionPolicy Bypass -File src\game\build.ps1 -Target win32 }
    Step 'ctest build'      { powershell -ExecutionPolicy Bypass -File tools\ctest\build.ps1 }
    if ($WithDos) { Step 'dos build' { powershell -ExecutionPolicy Bypass -File src\game\build.ps1 -Target dos } }
}

Step 'interpreter fixtures' { powershell -NoProfile -ExecutionPolicy Bypass -File tools\harness-check.ps1 }
Step 'port vs original'     { powershell -NoProfile -ExecutionPolicy Bypass -File tools\port-diff.ps1 -All -Random 20 }
Step 'asset gate: pack'     { powershell -NoProfile -ExecutionPolicy Bypass -File tools\verify-pack.ps1 }
Step 'asset gate: frames'   { powershell -NoProfile -ExecutionPolicy Bypass -File tools\verify-frames.ps1 }

Write-Host ''
$table = $results | Format-Table -AutoSize | Out-String
Write-Host $table
$failed = @($results | Where-Object { $_.Result -ne 'PASS' })
$summary = "gate: {0} step(s), {1} passed, {2} failed, {3:N1}s total" -f `
    $results.Count, ($results.Count - $failed.Count), $failed.Count, ($results | Measure-Object Seconds -Sum).Sum
Write-Host $summary

# UTF-8 so the summary can be read back by any tool (a cmd redirect would be UTF-16).
$lines = @($results | ForEach-Object { "{0,-22} {1}  {2,6:N1}s  {3}" -f $_.Step, $_.Result, $_.Seconds, $_.Detail })
$lines += $summary
[System.IO.File]::WriteAllLines((Join-Path $root 'out\gate-summary.txt'), $lines, (New-Object System.Text.UTF8Encoding($false)))

Pop-Location
if ($failed.Count -ne 0) { exit 1 }
