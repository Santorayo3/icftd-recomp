<#
.SYNOPSIS
    One command that answers "is the project green?".

.DESCRIPTION
    The gate for the *recompilation*: it builds the two things the project is made of and proves
    that the oracle still agrees with its own fixtures.

      1. exporter build        (src\assetExport - the formats AND the 68000 interpreter/oracle)
      2. emulator build        (tools\build-emu.ps1 - Phase A: the original binary on Musashi)
      3. interpreter fixtures  (tools\harness-check.ps1 - hand-checked 68k cases + SMS planes)

    There is no pixel, frame, capture or reference-image step, by design: correctness is decided by
    machine state (translated function == interpreted function, interpreted build == translated
    build at every frame boundary). See docs\recomp-architecture.md, "Acceptance tests - machine
    state, never images".

.PARAMETER Quick
    Skip the two builds; only run the checks.

.EXAMPLE
    powershell -ExecutionPolicy Bypass -File tools\gate.ps1
#>
param(
    [switch]$Quick,
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

if (-not (Test-Path (Join-Path $root 'out'))) { New-Item -ItemType Directory -Path (Join-Path $root 'out') | Out-Null }

if (-not $Quick) {
    Step 'exporter build'  { dotnet build src\assetExport\ICFTD.AmigaExport.csproj --nologo -v:q }
    Step 'emulator build'  { powershell -NoProfile -ExecutionPolicy Bypass -File tools\build-emu.ps1 }
}

Step 'interpreter fixtures' { powershell -NoProfile -ExecutionPolicy Bypass -File tools\harness-check.ps1 }

Write-Host ''
$table = $results | Format-Table -AutoSize | Out-String
Write-Host $table
$failed = @($results | Where-Object { $_.Result -ne 'PASS' })
$total = [Math]::Round(($results | Measure-Object Seconds -Sum).Sum, 1)
$summary = "gate: $($results.Count) step(s), $($results.Count - $failed.Count) passed, $($failed.Count) failed, ${total}s total"
Write-Host $summary
[System.IO.File]::WriteAllText((Join-Path $root 'out\gate-summary.txt'), $summary + "`r`n",
    (New-Object System.Text.UTF8Encoding($false)))
Pop-Location
if ($failed.Count -gt 0) { exit 1 }
