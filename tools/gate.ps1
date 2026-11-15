<#
.SYNOPSIS
    One command that answers "is the project green?".

.DESCRIPTION
    The gate has two tiers, because the port's own scene replays cost minutes and say nothing
    about the translation. The default is the translation core; -Full adds the port checks.

      core (default, ~45 s with warm builds)

      1. exporter build        (src\assetExport - the formats AND the 68000 interpreter)
      2. oracle build          (tools\build-oracle.ps1 - the original binary on Musashi + runtime)
      3. interpreter fixtures  (tools\harness-check.ps1 - hand-checked 68k cases + SMS planes)
      4. translated vs interpreted (tools\recomp-fixtures.ps1 - src\recomp against rcmp, per fixture)

      port checks (-Full: minutes, the presenter alone takes two; needs bin\win32\icftd-recomp.exe)

      5. presentation          (tools\present-check.ps1 - the raster side, which the translation
                                gate cannot see)
      6. title menu            (tools\title-check.ps1 - the port's own digit keys start the
                                minigames from the title; skipped without that binary)
      7. map pointer           (tools\mouse-check.ps1 - the port's pointer control of the
                                situation map's cursor; skipped without its recorded session)
      8. room pointer          (tools\pointer-check.ps1 - the pointer shown on a room screen, and
                                a text menu line selected by hovering; skipped without its
                                recorded session)
      9. fight crosshair       (tools\crosshair-check.ps1 - the giant-ant fight's aiming aid marks
                                the point the engine's shot test reads)
     10. fullscreen border     (tools\border-check.ps1 - the bars either side of the 4:3 picture
                                are the port's artwork, point-sampled, not black)
     11. loading line          (tools\load-check.ps1 - the "Loading" line covers the engine's own
                                resource loads and nothing else)

    Steps 1-4 decide the translation, and they do it on machine state alone: no pixel, frame,
    capture or reference-image test can prove a translated function. Steps 5-11 cover the port's
    own surfaces - the presenter, the title menu, the map cursor, the room pointer, the fight's
    crosshair, the fullscreen border and the loading line - which have no counterpart in the
    original to diff against; they can only fail on their own terms.

    A change is validated by the check that covers it, not by the whole table: while working, run
    the one step (-Only) or the tier (-Full) the change touches. See docs\port-features.md, "The
    dev loop".

.PARAMETER Full
    Add the port-feature steps (5-11) to the core steps.

.PARAMETER Quick
    Skip the two builds; only run the checks.

.PARAMETER Only
    Run only the steps whose name matches this wildcard, instead of the tier. A group keyword
    selects a tier: 'core' (1-4), 'port' (5-11), 'build' (1-2).
    e.g. -Only pointer, -Only recomp, -Only port.

.EXAMPLE
    powershell -ExecutionPolicy Bypass -File tools\gate.ps1
    powershell -ExecutionPolicy Bypass -File tools\gate.ps1 -Full -Verbose_Output
    powershell -ExecutionPolicy Bypass -File tools\gate.ps1 -Only mouse
#>
param(
    [switch]$Full,
    [switch]$Quick,
    [string]$Only = '',
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

# One table, so the tier, -Full and -Only all select from the same list.
$all = @(
    @{ Name = 'exporter build';                       Port = $false; Build = $true;  Body = { dotnet build src\assetExport\ICFTD.AmigaExport.csproj --nologo -v:q } },
    @{ Name = 'oracle build';                         Port = $false; Build = $true;  Body = { powershell -NoProfile -ExecutionPolicy Bypass -File tools\build-oracle.ps1 } },
    @{ Name = 'interpreter fixtures';                 Port = $false; Build = $false; Body = { powershell -NoProfile -ExecutionPolicy Bypass -File tools\harness-check.ps1 } },
    @{ Name = 'translated vs interpreted (fixtures)'; Port = $false; Build = $false; Body = { powershell -NoProfile -ExecutionPolicy Bypass -File tools\recomp-fixtures.ps1 } },
    @{ Name = 'presentation (raster)';                Port = $true;  Build = $false; Body = { powershell -NoProfile -ExecutionPolicy Bypass -File tools\present-check.ps1 } },
    @{ Name = 'title menu (scenes)';                  Port = $true;  Build = $false; Body = { powershell -NoProfile -ExecutionPolicy Bypass -File tools\title-check.ps1 } },
    @{ Name = 'map pointer (cursor)';                 Port = $true;  Build = $false; Body = { powershell -NoProfile -ExecutionPolicy Bypass -File tools\mouse-check.ps1 } },
    @{ Name = 'room pointer (hover)';                 Port = $true;  Build = $false; Body = { powershell -NoProfile -ExecutionPolicy Bypass -File tools\pointer-check.ps1 } },
    @{ Name = 'fight crosshair (aim)';                Port = $true;  Build = $false; Body = { powershell -NoProfile -ExecutionPolicy Bypass -File tools\crosshair-check.ps1 } },
    @{ Name = 'fullscreen border (bars)';             Port = $true;  Build = $false; Body = { powershell -NoProfile -ExecutionPolicy Bypass -File tools\border-check.ps1 } },
    @{ Name = 'loading line (transitions)';           Port = $true;  Build = $false; Body = { powershell -NoProfile -ExecutionPolicy Bypass -File tools\load-check.ps1 } }
)

if ($Only) {
    switch ($Only.ToLowerInvariant()) {
        'core'  { $steps = @($all | Where-Object { -not $_.Port }) }
        'port'  { $steps = @($all | Where-Object { $_.Port }) }
        'build' { $steps = @($all | Where-Object { $_.Build }) }
        default { $steps = @($all | Where-Object { $_.Name -like "*$Only*" }) }
    }
    if ($steps.Count -eq 0) {
        Write-Host "gate: no step matches '$Only'"
        Pop-Location
        exit 2
    }
}
elseif ($Full) {
    $steps = $all
}
else {
    $steps = @($all | Where-Object { -not $_.Port })
}
if ($Quick) { $steps = @($steps | Where-Object { -not $_.Build }) }

foreach ($s in $steps) { Step $s.Name $s.Body }

Write-Host ''
$table = $results | Format-Table -AutoSize | Out-String
Write-Host $table
$failed = @($results | Where-Object { $_.Result -ne 'PASS' })
$total = [Math]::Round(($results | Measure-Object Seconds -Sum).Sum, 1)
$tier = if ($Only) { "only '$Only'" } elseif ($Full) { 'full' } else { 'core' }
$summary = "gate ($tier): $($results.Count) step(s), $($results.Count - $failed.Count) passed, $($failed.Count) failed, ${total}s total"
if (-not $Only -and -not $Full) {
    $summary += ' (-Full adds the port checks, -Only <step> runs one)'
}
Write-Host $summary
[System.IO.File]::WriteAllText((Join-Path $root 'out\gate-summary.txt'), $summary + "`r`n",
    (New-Object System.Text.UTF8Encoding($false)))
Pop-Location
if ($failed.Count -gt 0) { exit 1 }
