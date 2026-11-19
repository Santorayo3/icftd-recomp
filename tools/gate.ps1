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
         and the native patches  (recomp-check --collide - src\recomp\patches against the generated
                                translation of the same 68000 routine, per case: D0, CCR, A7, the
                                bytes written and the cycles charged)
         and the flag waits      (recomp-check --wait - the hospital's polling loop through
                                rc_wait and as its translation, from one machine state: registers,
                                RAM, the frame budget and the debt a vblank leaves in it, the
                                instruction count, the copper's beam state, and how often the CIA
                                handler was asked for)

      port checks (-Full: minutes, the presenter alone takes two; needs bin\win32\icftd-recomp.exe)

      5. presentation          (tools\present-check.ps1 - the raster side, which the translation
                                gate cannot see)
      6. title menu            (tools\title-check.ps1 - the port's own digit keys start the
                                minigames from the title, the fifth button switches to the
                                add-on "Antheads" when its disks are there, and the shared save
                                slots mark a save the add-on wrote "(A)" and load it in the build
                                that wrote it; skipped without that binary)
      7. title settings        (tools\settings-check.ps1 - the Settings button opens the view, its
                                toggle, two volumes and language row change the machine and are
                                written back to icftd.ini, Back restores the menu)
      8. map pointer           (tools\mouse-check.ps1 - the port's pointer control of the
                                situation map's cursor; skipped without its recorded session)
      9. room pointer          (tools\pointer-check.ps1 - the pointer shown on a room screen, and
                                a text menu line selected by hovering; skipped without its
                                recorded session)
     9b. room pointer (add-on) (tools\ant-pointer-check.ps1 - the same hover on Antheads' own room
                                text menu, which the add-on reaches through a shared display stub;
                                skipped without the add-on's extracted data)
     10. fight crosshair       (tools\crosshair-check.ps1 - the giant-ant fight's aiming aid marks
                                the point the engine's shot test reads)
    10b. ant-head fight (add-on) (tools\anthead-check.ps1 - the same aid and pointer control in
                                Antheads' own "Fight Ant Head" scene; skipped without its disks)
     11. fullscreen border     (tools\border-check.ps1 - the bars either side of the 4:3 picture
                                are the port's artwork, point-sampled, not black)
     12. loading line          (tools\load-check.ps1 - the "Loading" line covers the engine's own
                                resource loads and nothing else)
     13. pointer aim           (tools\aim-check.ps1 - the pointer moves the giant-ant fight's gun
                                and the fire game's extinguisher, inside the engine's own travel)
     14. minigame cheat        (tools\cheat-check.ps1 - left Ctrl+W ends each of the seven scenes
                                in the words its own success path writes, and no run without it
                                changes)
     15. hospital camera       (tools\camera-check.ps1 - the escape's view keeps the character at
                                the middle of the window while it walks, and a measurement run
                                keeps the original's camera)
     16. art tables            (tools\art-check.ps1 - every picture the executable draws is what its
                                tracked PNG generates, and no game-derived art is compiled in)
     17. map save picker       (tools\save-ui-check.ps1 - a click opens the slot list, the map
                                stays put, Back resumes, a slot writes the engine's own save, and
                                a slot holding the add-on's ICFTD2 is a saved slot)
     18. WASD keys             (tools\keys-check.ps1 - A/S/D/W are the same input the arrow
                                cluster produces, and a direction outlives a release of either key)
     19. title quit notice     (tools\quit-check.ps1 - a click on Quit Game shows the two requested
                                lines on black for ten seconds, then the application closes; the
                                screen is sampled where a desktop gives the game a window)

     20. clock freeze          (tools\time-freeze-check.ps1 - left Ctrl+T on the map holds the
                                engine's clock: the date and time do not move, a travel adds no
                                time, the real keys do it in a window, a save that carries the pause
                                word loads running, and no run without the key changes)

     21. profiler clock        (tools\pit-clock-check.ps1 - the DOS front end's 8254 clock, checked
                                against a simulated machine: the same elapsed time at any sampling rate,
                                both PIT modes, racing latches, late BIOS ticks and midnight)

     22. language              (tools\lang-check.ps1 - [GAME] language: en draws the original's line
                                 and de the line lang\de.csv holds from the same machine, the RAM
                                 differs only in the catalog's own region, the machine state is
                                 record-for-record identical up to the first translated line, a
                                 room's action list is translated too, and one file carries both the
                                 interface and the story; the settings view's language row - the
                                 scan of lang\??.csv, its cyclical step, the immediate switch and
                                 the game that follows it - is tools\settings-check.ps1's)

    Steps 1-4 decide the translation, and they do it on machine state alone: no pixel, frame,
    capture or reference-image test can prove a translated function. Steps 5-22 cover the port's
    own surfaces - the presenter, the title menu and its settings and farewell, the map cursor, the
    save picker, the room pointer, the fight's crosshair, the fullscreen border, the loading line,
    the two aims, the Ctrl+W cheat, the hospital's camera, the art tables, the keys, the Ctrl+T
    clock freeze and the language - which have no counterpart in the original to diff against; they
    can only fail on their own terms.

    The window presenter has a check of its own, tools\window-check.ps1, and it is deliberately
    *not* in the table: it needs a desktop, it drives the real pointer (Alt+Tab, a corner drag, the
    close box) and it measures the one scene whose screen is the game's own, which is minutes of
    clicking for something a build almost never changes. Run it by hand when the presentation, the
    picture scaling, the border art or the window's own size is touched.

    A change is validated by the check that covers it, not by the whole table: while working, run
    the one step (-Only) or the tier (-Full) the change touches. See docs\port-features.md, "The
    dev loop".

    Cost. Most port steps are emulation: each replays a scene for 5-27 million instructions at
    roughly 700 000 per second, so the port tier is about nine minutes and four steps - title menu,
    pointer aim, title settings, presentation - are six of those; the remaining twelve are seconds
    each. Every step announces itself on its way in and its result on its way out (the same line is
    left in out\gate-progress.txt), so a long run no longer reads as a hang.

.PARAMETER Full
    Add the port-feature steps (5-21) to the core steps.

.PARAMETER Quick
    Skip the two builds; only run the checks.

.PARAMETER Only
    Run only the steps whose name matches this wildcard, instead of the tier. A group keyword
    selects a tier:     'core' (1-4), 'port' (5-22), 'build' (1-2).
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
    # A port step is often a minute of emulation and the step's own output is buffered, so the run
    # used to sit silent for the whole table and read as a hang. Announce the step before it starts
    # and note the result the moment it lands; out\gate-progress.txt carries the same line for a run
    # whose output nobody is watching.
    $label = "gate: [$($script:results.Count + 1)/$($script:totalSteps)] $name"
    Write-Host "$label ..."
    try { [System.IO.File]::WriteAllText($script:progressPath, "$label ...`r`n") } catch { }
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
    $line = "gate: [$($script:results.Count)/$($script:totalSteps)] $name -> " +
            $(if ($ok) { 'PASS' } else { 'FAIL' }) + " ($([Math]::Round($sw.Elapsed.TotalSeconds, 1))s)"
    if (-not $ok) { $line += " - $detail" }
    Write-Host $line
    try { [System.IO.File]::WriteAllText($script:progressPath, "$line`r`n") } catch { }
}

if (-not (Test-Path (Join-Path $root 'out'))) { New-Item -ItemType Directory -Path (Join-Path $root 'out') | Out-Null }

# One table, so the tier, -Full and -Only all select from the same list.
$all = @(
    @{ Name = 'exporter build';                       Port = $false; Build = $true;  Body = { dotnet build src\assetExport\ICFTD.AmigaExport.csproj --nologo -v:q } },
    @{ Name = 'oracle build';                         Port = $false; Build = $true;  Body = { powershell -NoProfile -ExecutionPolicy Bypass -File tools\build-oracle.ps1 } },
    @{ Name = 'interpreter fixtures';                 Port = $false; Build = $false; Body = { powershell -NoProfile -ExecutionPolicy Bypass -File tools\harness-check.ps1 } },
    @{ Name = 'translated vs interpreted (fixtures)'; Port = $false; Build = $false; Body = { powershell -NoProfile -ExecutionPolicy Bypass -File tools\recomp-fixtures.ps1 } },
    @{ Name = 'native patches (vs translation)';      Port = $false; Build = $false; Body = { bin\win32\recomp-check.exe --collide 6000 } },
    @{ Name = 'flag wait (vs translation)';           Port = $false; Build = $false; Body = { bin\win32\recomp-check.exe --wait 4000 } },
    @{ Name = 'presentation (raster)';                Port = $true;  Build = $false; Body = { powershell -NoProfile -ExecutionPolicy Bypass -File tools\present-check.ps1 } },
    @{ Name = 'title menu (scenes)';                  Port = $true;  Build = $false; Body = { powershell -NoProfile -ExecutionPolicy Bypass -File tools\title-check.ps1 } },
    @{ Name = 'title settings (menu, volumes)';       Port = $true;  Build = $false; Body = { powershell -NoProfile -ExecutionPolicy Bypass -File tools\settings-check.ps1 } },
    @{ Name = 'map pointer (cursor)';                 Port = $true;  Build = $false; Body = { powershell -NoProfile -ExecutionPolicy Bypass -File tools\mouse-check.ps1 } },
    @{ Name = 'map save picker (slots)';              Port = $true;  Build = $false; Body = { powershell -NoProfile -ExecutionPolicy Bypass -File tools\save-ui-check.ps1 } },
    @{ Name = 'room pointer (hover)';                 Port = $true;  Build = $false; Body = { powershell -NoProfile -ExecutionPolicy Bypass -File tools\pointer-check.ps1 } },
    @{ Name = 'room pointer (add-on)';                Port = $true;  Build = $false; Body = { powershell -NoProfile -ExecutionPolicy Bypass -File tools\ant-pointer-check.ps1 } },
    @{ Name = 'fight crosshair (aim)';                Port = $true;  Build = $false; Body = { powershell -NoProfile -ExecutionPolicy Bypass -File tools\crosshair-check.ps1 } },
    @{ Name = 'ant-head fight (aim)';                 Port = $true;  Build = $false; Body = { powershell -NoProfile -ExecutionPolicy Bypass -File tools\anthead-check.ps1 } },
    @{ Name = 'fullscreen border (bars)';             Port = $true;  Build = $false; Body = { powershell -NoProfile -ExecutionPolicy Bypass -File tools\border-check.ps1 } },
    @{ Name = 'loading line (transitions)';           Port = $true;  Build = $false; Body = { powershell -NoProfile -ExecutionPolicy Bypass -File tools\load-check.ps1 } },
    @{ Name = 'pointer aim (gun, extinguisher)';      Port = $true;  Build = $false; Body = { powershell -NoProfile -ExecutionPolicy Bypass -File tools\aim-check.ps1 } },
    @{ Name = 'minigame cheat (Ctrl+W)';              Port = $true;  Build = $false; Body = { powershell -NoProfile -ExecutionPolicy Bypass -File tools\cheat-check.ps1 } },
    @{ Name = 'hospital camera (follow)';             Port = $true;  Build = $false; Body = { powershell -NoProfile -ExecutionPolicy Bypass -File tools\camera-check.ps1 } },
    @{ Name = 'WASD keys (aliases)';                  Port = $true;  Build = $false; Body = { powershell -NoProfile -ExecutionPolicy Bypass -File tools\keys-check.ps1 } },
    @{ Name = 'art tables (shipping)';                Port = $true;  Build = $false; Body = { powershell -NoProfile -ExecutionPolicy Bypass -File tools\art-check.ps1 } },
    @{ Name = 'title quit notice (farewell)';         Port = $true;  Build = $false; Body = { powershell -NoProfile -ExecutionPolicy Bypass -File tools\quit-check.ps1 } },
    @{ Name = 'clock freeze (Ctrl+T)';                Port = $true;  Build = $false; Body = { powershell -NoProfile -ExecutionPolicy Bypass -File tools\time-freeze-check.ps1 } },
    @{ Name = 'profiler clock (8254)';                 Port = $true;  Build = $false; Body = { powershell -NoProfile -ExecutionPolicy Bypass -File tools\pit-clock-check.ps1 } },
    @{ Name = 'language ([GAME] language)';            Port = $true;  Build = $false; Body = { powershell -NoProfile -ExecutionPolicy Bypass -File tools\lang-check.ps1 } }
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

$script:totalSteps = $steps.Count
$script:progressPath = Join-Path $root 'out\gate-progress.txt'
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
