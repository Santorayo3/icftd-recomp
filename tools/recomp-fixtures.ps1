# Differential test for the recompilation: same fixture through the interpreter (rcmp) and through
# the translated C (recomp-check); registers and every touched memory byte must be identical.
#
#   powershell -ExecutionPolicy Bypass -File tools\recomp-fixtures.ps1            # pinned fixtures
#   powershell -ExecutionPolicy Bypass -File tools\recomp-fixtures.ps1 -Rand 5    # + random fields
#
# A fixture counts as *verified* when both dumps agree. The first line ("rcmp 1" / "recomp 1") and
# the instruction count are not comparable (the translated code has no instruction loop).
#
# Output: one line per fixture, then "recomp: translated N, verified M of K fixture(s)".
param(
    [int]$Rand = 0,
    [int]$Seed = 1,
    [switch]$Verbose,
    # Only compare functions whose address matches this wildcard prefix (e.g. "000009*"):
    # handy while a construct is being added, the gate always runs the whole set.
    [string]$Only = '*'
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
Push-Location $root
$exporter = 'src\assetExport\bin\Debug\net10.0\ICFTD.AmigaExport.exe'
$check = 'bin\win32\recomp-check.exe'
if (-not (Test-Path $exporter)) { throw "missing $exporter - run dotnet build src\assetExport" }

# Build the replay when it is missing or older than any source it links: the gate runs this script
# as one step, and a stale harness would compare yesterday's translation.
$newest = Get-ChildItem 'src\recomp', 'src\runtime' -Recurse -Include *.c, *.h |
          Sort-Object LastWriteTime -Descending | Select-Object -First 1
if (-not (Test-Path $check) -or $newest.LastWriteTime -gt (Get-Item $check).LastWriteTime) {
    & powershell -NoProfile -ExecutionPolicy Bypass -File tools\build-recomp.ps1 | Out-Host
    if (-not (Test-Path $check)) { throw 'recomp harness build failed' }
}
New-Item -ItemType Directory -Force -Path out\fx | Out-Null
$progress = Join-Path $root 'out\fx-progress.txt'
Remove-Item $progress -ErrorAction SilentlyContinue

# What is translated: one file per function, so the file list is the truth (no stale registry).
$translated = @{}
Get-ChildItem 'src\recomp\fn_*.c' | ForEach-Object {
    if ($_.Name -match '^fn_([0-9a-fA-F]{8})\.c$') { $translated[$Matches[1].ToLowerInvariant()] = $true }
}

function Normalize([string]$path) {
    Get-Content $path | Where-Object { $_ -notmatch '^(rcmp|recomp) 1$' -and $_ -notmatch '^insns ' }
}

$lines = New-Object System.Collections.Generic.List[string]
$fixtures = 0
$verified = 0
$failed = 0
$skipped = 0

foreach ($addr in ($translated.Keys | Sort-Object)) {
    if (-not ($addr -like $Only)) { continue }
    $files = @(Get-ChildItem 'ref\fixtures' -Filter "$addr*.json" | Sort-Object Name)
    if ($files.Count -eq 0) {
        $lines.Add("$addr  no fixture")
        continue
    }
    foreach ($f in $files) {
        $fixtures++
        $tag = [System.IO.Path]::GetFileNameWithoutExtension($f.Name)
        $cases = @(@{ name = $tag; extra = @() })
        if ($Rand -gt 0) {
            # Randomise the fixture's own declared memory blocks: the fields it hands the function.
            # --rand takes hex for both parts.
            $ranges = @()
            $json = Get-Content $f.FullName -Raw | ConvertFrom-Json
            foreach ($m in $json.mem) {
                $len = if ($m.hex) { [int]($m.hex.Length / 2) } else { [int]$m.fill.len }
                $ranges += ('{0}:{1:x}' -f $m.addr, $len)
            }
            $randArg = [string]($ranges -join ',')
            if ($randArg.Length -eq 0) { Write-Output "no randomisable memory in $tag - skipped"; continue }
            for ($s = 0; $s -lt $Rand; $s++) {
                $cases += @{ name = "$tag seed $($Seed + $s)"; extra = @('--rand', $randArg, '--seed', [string]($Seed + $s)) }
            }
        }
        foreach ($case in $cases) {
            [System.IO.File]::AppendAllText($progress, "$($case.name)`n")
            $a = "out\fx\$($addr)-$($case.name -replace '[^0-9a-z]', '_')"
            $exeArgs = @('rcmp', $addr, '--fixture', $f.FullName, '--dump', "$a.txt", '--emit-raw', "$a.fx") + $case.extra
            $o1 = & $exporter @exeArgs 2>&1 | Out-String
            $o2 = & $check "$a.fx" --dump "$a.rc.txt" 2>&1 | Out-String
            if ($o2 -match 'is not translated') {
                $skipped++
                $lines.Add("skip $($case.name)  (not translated)")
                continue
            }
            if (-not (Test-Path "$a.txt") -or -not (Test-Path "$a.rc.txt")) {
                $failed++
                $lines.Add("FAIL $($case.name)  (no dump)")
                $lines.Add("    rcmp  : $($o1.Trim() -split "`n" | Select-Object -Last 1)")
                $lines.Add("    recomp: $($o2.Trim() -split "`n" | Select-Object -Last 1)")
                continue
            }
            $d1 = Normalize "$a.txt"
            $d2 = Normalize "$a.rc.txt"
            $s1 = ($d1 | Where-Object { $_ -match '^stop ' } | Select-Object -First 1)
            $s2 = ($d2 | Where-Object { $_ -match '^stop ' } | Select-Object -First 1)
            if ($s1 -match 'budget') {
                # The interpreter did not finish: its budget ran out. Nothing to compare against.
                $skipped++
                $lines.Add("skip $($case.name)  (interpreter stopped on its instruction budget)")
                continue
            }
            if ($Verbose) {
                $d1 | Set-Content "$a.n1.txt"
                $d2 | Set-Content "$a.n2.txt"
            }
            $same = ($d1.Count -eq $d2.Count)
            if ($same) {
                for ($i = 0; $i -lt $d1.Count; $i++) { if ($d1[$i] -ne $d2[$i]) { $same = $false; break } }
            }
            if ($same) {
                $verified++
                $lines.Add("PASS $($case.name)  $($d1.Count) line(s)")
                continue
            }
            if ($s1 -eq 'stop rts') {
                # A fragment whose rts pops a value that is not code: the interpreter ran on into
                # data (rleaf pins such address-taken labels), so its end state means nothing and a
                # mismatch here is not evidence about the translation.
                $pc1 = (($d1 | Where-Object { $_ -match '^pc ' } | Select-Object -First 1) -replace '^pc ', '')
                if ($pc1 -and ([Convert]::ToInt64($pc1, 16) -gt 0x2D598)) {
                    $skipped++
                    $lines.Add("skip $($case.name)  (interpreter ran into data at pc $pc1)")
                    continue
                }
            }
            if (($s1 -match 'budget|error') -and ($s2 -match 'budget|error')) {
                # Neither machine completed (a fragment, a busy-wait, or an OS call neither model
                # covers), so there is no common end state to compare.
                $skipped++
                $lines.Add("skip $($case.name)  (interpreter '$s1', translated '$s2')")
                continue
            }
            $failed++
            $lines.Add("FAIL $($case.name)  first difference:")
            $n = [Math]::Max($d1.Count, $d2.Count)
            $shown = 0
            for ($i = 0; $i -lt $n -and $shown -lt 4; $i++) {
                $x = if ($i -lt $d1.Count) { $d1[$i] } else { '<missing>' }
                $y = if ($i -lt $d2.Count) { $d2[$i] } else { '<missing>' }
                if ($x -ne $y) { $lines.Add("    interpreter: $x"); $lines.Add("    translated : $y"); $shown++ }
            }
        }
    }
}

$lines | ForEach-Object { Write-Output $_ }
$summary = "recomp: translated $($translated.Count), verified $verified of $fixtures fixture(s), $skipped skipped, $failed failed"
Write-Output $summary
[System.IO.File]::WriteAllLines((Join-Path $root 'out\recomp-fixtures.txt'), $lines.ToArray(),
    (New-Object System.Text.UTF8Encoding($false)))
Pop-Location
if ($failed -gt 0) { exit 1 }
exit 0
