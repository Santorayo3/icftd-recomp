<#
.SYNOPSIS
    Renders every reference frame listed in a manifest and diffs it against its capture.

.DESCRIPTION
    ref\manifest.csv is the data: one row per frame.

        name      label in the report (also the rendered file name)
        args      the complete command line after the exe, with two placeholders:
                    {pack}  the game.pak path
                    {out}   the .bmp to render
                    {trace} the .txt a trace row writes (kind=trace only)
                  Asset names must not contain spaces (the args are space-split).
        kind      bmp (default) or trace. A trace row compares the text the run wrote via
                  --trace instead of a frame, so a whole animation is covered by one row.
        reference the WinUAE capture (bmp) or a previously accepted trace (missing = SKIP)
        maxdiff   how many pixels (bmp) or lines (trace) may differ. WinUAE's 4-bit output
                  is off by up to 15/255, and the intro logo has a known 26-pixel
                  difference: allowed 128. Traces are expected to match exactly.

    Adding a scene is one row, not a new script. Exit code 0 = every present reference passed.

.EXAMPLE
    powershell -ExecutionPolicy Bypass -File tools\verify-frames.ps1
.EXAMPLE
    powershell -ExecutionPolicy Bypass -File tools\verify-frames.ps1 -Manifest ref\other.csv
#>
param(
    [string]$Manifest = "ref\manifest.csv",
    [string]$Pack = "assets\game.pak",
    [string]$Exe = "bin\win32\icftd.exe",
    [int]$Tolerance = 16,             # per-channel colour tolerance for the diff
    [string]$OutDir = "out\verify"
)
$ErrorActionPreference = 'Stop'

$root = Split-Path -Parent $PSScriptRoot
Push-Location $root
try {
    if (-not (Test-Path -LiteralPath $Manifest)) { throw "manifest not found: $Manifest" }
    if (-not (Test-Path -LiteralPath $Pack)) { throw "pack not found: $Pack" }
    if (-not (Test-Path -LiteralPath $Exe)) { throw "exe not found: $Exe (run src\game\build.ps1)" }
    New-Item -ItemType Directory -Force -Path $OutDir | Out-Null

    $fail = 0
    $checked = 0

    function Compare-Frame([string]$what, [string]$image, [string]$reference, [int]$MaxDiff) {
        if (-not (Test-Path -LiteralPath $reference)) {
            Write-Host ("{0,-8} SKIP  (no {1})" -f $what, $reference)
            return $false
        }
        $diff = Join-Path $OutDir ($what + '_diff.png')
        $out = & powershell -ExecutionPolicy Bypass -File (Join-Path $PSScriptRoot 'diff-frame.ps1') `
                            -A $image -B $reference -Tolerance $Tolerance -Out $diff 2>&1
        $code = $LASTEXITCODE
        $line = ($out | Select-String -Pattern 'differing' | Select-Object -First 1).Line
        $differing = -1
        if ($line -match 'differing:\s*(\d+)') { $differing = [int]$Matches[1] }
        $script:checked++
        if ($code -eq 0 -or ($differing -ge 0 -and $differing -le $MaxDiff)) {
            Write-Host ("{0,-8} PASS  {1}" -f $what, $line.Trim())
            return $true
        }
        Write-Host ("{0,-8} FAIL  {1}  (allowed {2})" -f $what, $line.Trim(), $MaxDiff)
        Write-Host ("         diff image: $diff")
        return $false
    }

    function Compare-Trace([string]$what, [string]$file, [string]$reference, [int]$MaxDiff) {
        if (-not (Test-Path -LiteralPath $reference)) {
            Write-Host ("{0,-8} SKIP  (no {1})" -f $what, $reference)
            return $false
        }
        $out = & powershell -ExecutionPolicy Bypass -File (Join-Path $PSScriptRoot 'trace-diff.ps1') `
                            -A $file -B $reference 2>&1
        $line = ($out | Select-String -Pattern 'differing' | Select-Object -First 1).Line
        $differing = -1
        if ($line -match '(\d+) differing line') { $differing = [int]$Matches[1] }
        $script:checked++
        if ($differing -ge 0 -and $differing -le $MaxDiff) {
            Write-Host ("{0,-8} PASS  {1}" -f $what, $line.Trim())
            return $true
        }
        Write-Host ("{0,-8} FAIL  {1}  (allowed {2})" -f $what, $line.Trim(), $MaxDiff)
        $out | Select-Object -First 30 | ForEach-Object { Write-Host $_ }
        return $false
    }

    foreach ($row in Import-Csv -LiteralPath $Manifest) {
        $name = $row.name.Trim()
        if ($name.Length -eq 0) { continue }
        $image = Join-Path $OutDir ($name + '.bmp')
        $tracefile = Join-Path $OutDir ($name + '.txt')
        $kind = 'bmp'
        if ($row.kind -and $row.kind.Trim().Length -gt 0) { $kind = $row.kind.Trim().ToLower() }

        $line = $row.args.Replace('{pack}', $Pack).Replace('{out}', $image).Replace('{trace}', $tracefile)
        $argv = @($line -split '\s+' | Where-Object { $_.Length -gt 0 })

        Write-Host ("--- {0} [{1}]: {2}" -f $name, $kind, $line)
        & $Exe @argv | Out-Null
        if ($LASTEXITCODE -ne 0) {
            Write-Host ("{0,-8} FAIL  the renderer exited {1}" -f $name, $LASTEXITCODE)
            $script:fail++
            continue
        }
        $max = 0
        if ($row.maxdiff -and $row.maxdiff.Trim().Length -gt 0) { $max = [int]$row.maxdiff.Trim() }
        if ($kind -eq 'trace') {
            if (-not (Compare-Trace $name $tracefile $row.reference $max)) { $script:fail++ }
        }
        elseif (-not (Compare-Frame $name $image $row.reference $max)) { $script:fail++ }
    }

    Write-Host ""
    if ($fail -gt 0) { Write-Host "$fail of $checked frame(s) differ"; exit 1 }
    Write-Host "all $checked frame(s) identical"
}
finally { Pop-Location }
