param([string]$File, [string]$From, [string]$To)
$lo = [Convert]::ToInt32($From, 16)
$hi = [Convert]::ToInt32($To, 16)
foreach ($line in [System.IO.File]::ReadLines($File)) {
  if ($line.Length -lt 8) { continue }
  $addr = 0
  if ($line.StartsWith('; ---- ')) { continue }
  if ([int]::TryParse($line.Substring(0, 8), [System.Globalization.NumberStyles]::HexNumber, $null, [ref]$addr)) {
    if ($addr -ge $lo -and $addr -le $hi) { Write-Output $line }
  }
}
