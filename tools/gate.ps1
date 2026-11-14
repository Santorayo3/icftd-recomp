<#
.SYNOPSIS
    One command that answers "is the project green?".

.DESCRIPTION
    The gate for the *recompilation*: it builds what the project is made of and proves that the
    oracle still agrees with its own fixtures and that the translated functions agree with the
    interpreter.

      1. exporter build        (src\assetExport - the formats AND the 68000 interpreter)
      2. oracle build          (tools\build-oracle.ps1 - the original binary on Musashi + runtime)
      3. interpreter fixtures  (tools\harness-check.ps1 - hand-checked 68k cases + SMS planes)
      4. translated vs interpreted (tools\recomp-fixtures.ps1 - src\recomp against rcmp, per fixture)
      5. presentation          (tools\present-check.ps1 - the raster side, which the translation
                                gate cannot see; needs bin\win32\icftd-recomp.exe from build-host)
      6. title menu            (tools\title-check.ps1 - the port's own digit keys start the
                                minigames from the title; skipped without that binary)
      7. map pointer           (tools\mouse-check.ps1 - the port's pointer control of the
                                situation map's cursor; skipped without its recorded session)
      8. room pointer          (tools\pointer-check.ps1 - the pointer shown on a room screen, and
                                a text menu line selected by hovering; skipped without its
                                recorded session)
      9. fight crosshair       (tools\crosshair-check.ps1 - the giant-ant fight's aiming aid marks
                                the point the engine's shot test reads)

    Steps 1-4 decide the translation, and they do it on machine state alone: no pixel, frame,
    capture or reference-image test can prove a translated function. Steps 5-9 cover the port's
    own surfaces - the presenter, the title menu, the map cursor, the room pointer and the fight's
    crosshair - which have no counterpart in the original to diff against; they can only fail on
    their own terms.

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
    Step 'oracle build'    { powershell -NoProfile -ExecutionPolicy Bypass -File tools\build-oracle.ps1 }
}

Step 'interpreter fixtures' { powershell -NoProfile -ExecutionPolicy Bypass -File tools\harness-check.ps1 }
Step 'translated vs interpreted (fixtures)' { powershell -NoProfile -ExecutionPolicy Bypass -File tools\recomp-fixtures.ps1 }
Step 'presentation (raster)' { powershell -NoProfile -ExecutionPolicy Bypass -File tools\present-check.ps1 }
Step 'title menu (scenes)' { powershell -NoProfile -ExecutionPolicy Bypass -File tools\title-check.ps1 }
Step 'map pointer (cursor)' { powershell -NoProfile -ExecutionPolicy Bypass -File tools\mouse-check.ps1 }
Step 'room pointer (hover)' { powershell -NoProfile -ExecutionPolicy Bypass -File tools\pointer-check.ps1 }
Step 'fight crosshair (aim)' { powershell -NoProfile -ExecutionPolicy Bypass -File tools\crosshair-check.ps1 }

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
