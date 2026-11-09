param(
    [string]$Pack = "assets\game.pak",
    [string]$Exe = "bin\win32\icftd.exe",
    [string]$ExportPng = "export\png"
)
# Compares every picture in game.pak with the .idx8 file the exporter produced for the
# same resource.  The exporter decodes straight from the ADF; the game reads the pack.
# Equal FNV-1a hashes prove the pack builder and the C reader agree pixel for pixel.
$ErrorActionPreference = 'Stop'

function Fnv1a([byte[]]$data) {
    # 32-bit FNV-1a; do the multiply in 64 bit and wrap explicitly.
    [uint64]$h = 2166136261
    foreach ($b in $data) {
        $h = $h -bxor [uint64]$b
        $h = ($h * 16777619) % 4294967296
    }
    return [uint32]$h
}

if (-not (Test-Path $Pack)) { throw "pack not found: $Pack" }
if (-not (Test-Path $Exe)) { throw "exe not found: $Exe (run src\game\build.ps1)" }

$lines = & $Exe --checksum $Pack
if ($LASTEXITCODE -ne 0) { throw "checksum run failed" }

$ok = 0; $bad = 0; $missing = 0
$badList = New-Object System.Collections.Generic.List[string]

foreach ($line in $lines) {
    if ($line -match '^#') { continue }
    if ($line -notmatch '^(\S+)\s+(\d+)\s+(\d+)\s+([0-9a-f]{8})$') { continue }
    $name = $Matches[1]; $w = [int]$Matches[2]; $h = [int]$Matches[3]; $hash = [Convert]::ToUInt32($Matches[4], 16)

    $parts = $name -split '/'
    if ($parts.Count -lt 3) { continue }
    $bank = $parts[1]
    $res = ($parts[2..($parts.Count - 1)] -join '/')
    $safe = ($res.ToCharArray() | ForEach-Object { if ('<>:"/\|?*'.Contains($_)) { '_' } else { $_ } }) -join ''
    $file = Join-Path (Join-Path $ExportPng $bank) ($safe + '.idx8')
    if (-not (Test-Path $file)) { $missing++; continue }

    $data = [System.IO.File]::ReadAllBytes($file)
    if ($data.Length -ne $w * $h) { $bad++; $badList.Add("$name size $($data.Length) != $($w)x$h"); continue }
    $mine = Fnv1a $data
    if ($mine -eq $hash) { $ok++ } else { $bad++; $badList.Add(("{0} hash {1:X8} != {2:X8}" -f $name, $hash, $mine)) }
}

"pictures verified: $ok   mismatches: $bad   missing .idx8: $missing"
foreach ($b in ($badList | Select-Object -First 20)) { "  $b" }
if ($bad -gt 0) { exit 1 }
