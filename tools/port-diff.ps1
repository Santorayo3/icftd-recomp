<#
.SYNOPSIS
    Differential check: run one original function in the 68000 interpreter and the same
    function in the C port, on the same fixture, and compare the results.

.DESCRIPTION
    rcmp executes the bytes from dshell.img and writes a canonical dump; ctest executes the
    hand-written C port on the same fixture (via its adapter in tools\ctest\cases.c) and
    writes the same dump shape. Only the parts the port is responsible for are compared: the
    registers the adapter declares and every changed memory range. A7 and the CCR are stack
    and flag bookkeeping of the 68k and are checked by the interpreter's own fixtures.

    -Random N repeats each case that declares random ranges (third column of
    tools\ctest\cases.txt) with seeds 1..N, so a port is checked on many inputs rather than
    one pinned example.

.PARAMETER All
    Run every case listed in tools\ctest\cases.txt.

.EXAMPLE
    powershell -ExecutionPolicy Bypass -File tools\port-diff.ps1 -All
.EXAMPLE
    powershell -ExecutionPolicy Bypass -File tools\port-diff.ps1 -All -Random 50
.EXAMPLE
    powershell -ExecutionPolicy Bypass -File tools\port-diff.ps1 00020820
#>
param(
    [string]$Addr,
    [string]$Fixture,
    [switch]$All,
    [int]$Random = 0,
    [switch]$Show
)

$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
Push-Location $root
try {
    $exporter = 'src\assetExport\bin\Debug\net10.0\ICFTD.AmigaExport.exe'
    $ctest = 'bin\win32\ctest.exe'
    if (-not (Test-Path $exporter)) { throw "build the exporter first: dotnet build src\assetExport\ICFTD.AmigaExport.csproj" }
    if (-not (Test-Path $ctest)) { throw "build the test harness first: powershell -File tools\ctest\build.ps1" }

    function Normalise([string[]]$lines, [string[]]$kinds) {
        # Keep only what the port declared it is answerable for; "memory" is always compared.
        $keep = @('entry', 'mem') + $kinds
        $lines | Where-Object {
            $k = ($_ -split ' ')[0]
            $keep -contains $k
        }
    }

    function Compare-One([string]$addr, [string]$fixture, [string]$rand, [int]$seed) {
        $tag = if ($seed -gt 0) { "$addr/seed$seed" } else { $addr }
        $fx = Join-Path $env:TEMP "pd-$addr-$seed.fx"
        $a = Join-Path $env:TEMP "pd-$addr-$seed-orig.txt"

        $extra = @()
        if ($rand) { $extra += @('--rand', $rand) }
        if ($seed -gt 0) { $extra += @('--seed', "$seed") }
        & $exporter rcmp $addr --fixture $fixture --dump $a --emit-raw $fx @extra | Out-Null
        if (-not (Test-Path $a)) { return "FAIL $tag (interpreter produced no dump)" }

        $b = & $ctest $addr --fixture $fx 2>&1
        $portRaw = @($b | ForEach-Object { "$_" })
        # The port declares its contract by what it prints; the original is cut down to match.
        $kinds = @($portRaw | Where-Object { $_ -match '^(d[0-7]|a[0-7]) ' } |
                                     ForEach-Object { ($_ -split ' ')[0] } | Sort-Object -Unique)
        $orig = Normalise (Get-Content $a) $kinds
        $port = Normalise $portRaw $kinds

        if ($Show) {
            Write-Host "--- original ($tag) ---"; $orig | ForEach-Object { Write-Host $_ }
            Write-Host "--- port ---";            $port | ForEach-Object { Write-Host $_ }
        }

        $diff = Compare-Object $orig $port -SyncWindow 0
        if ($null -eq $diff) { return "PASS $tag" }

        $detail = ($diff | ForEach-Object { "$($_.SideIndicator) $($_.InputObject)" }) -join '; '
        return "FAIL $tag -> $detail"
    }

    $rows = @()
    if ($All) {
        $casesFile = 'tools\ctest\cases.txt'
        if (-not (Test-Path $casesFile)) { throw "$casesFile missing" }
        foreach ($line in Get-Content $casesFile) {
            $t = $line.Trim()
            if ($t.Length -eq 0 -or $t.StartsWith('#')) { continue }
            $parts = @($t -split '\s+' | Where-Object { $_.Length -gt 0 })
            $rand = if ($parts.Count -gt 2) { $parts[2] } else { '' }
            $rows += , @($parts[0], $parts[1], $rand)
        }
    }
    else {
        if (-not $Addr) { throw "give an address, or -All" }
        $fx = if ($Fixture) { $Fixture } else { "ref\fixtures\$Addr.json" }
        if (-not (Test-Path $fx)) { throw "no fixture $fx" }
        $rows += , @($Addr, $fx, '')
    }

    $checks = 0
    $failed = 0
    foreach ($r in $rows) {
        $runs = 1
        if ($Random -gt 0 -and $r[2]) { $runs = $Random }
        $caseFail = 0
        for ($seed = 0; $seed -lt $runs; $seed++) {
            $result = Compare-One $r[0] $r[1] $r[2] $seed
            $checks++
            if ($result.StartsWith('FAIL')) { $failed++; $caseFail++; Write-Host $result }
            elseif ($seed -eq 0) { Write-Host $result }
        }
        if ($runs -gt 1 -and $caseFail -eq 0) {
            Write-Host ("PASS {0} on {1} random seed(s)" -f $r[0], ($runs - 1))
        }
    }
    Write-Host ("port-diff: {0} check(s), {1} failure(s)" -f $checks, $failed)
    if ($failed -ne 0) { exit 1 }
}
finally { Pop-Location }
