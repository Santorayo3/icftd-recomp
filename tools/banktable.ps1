param([string]$Bank)
$b = [System.IO.File]::ReadAllBytes($Bank)
$count = ([int]$b[0] -shl 8) -bor $b[1]
$tableSize = ([int]$b[2] -shl 24) -bor ([int]$b[3] -shl 16) -bor ([int]$b[4] -shl 8) -bor $b[5]
$base = 6 + $tableSize
Write-Output "count=$count tableSize=$tableSize base=$base"
$p = 6
for ($i = 0; $i -lt $count; $i++) {
  $s = $p
  while ($b[$p] -ne 0) { $p++ }
  $name = [System.Text.Encoding]::ASCII.GetString($b, $s, $p - $s)
  $p++
  $off = ([int]$b[$p] -shl 24) -bor ([int]$b[$p+1] -shl 16) -bor ([int]$b[$p+2] -shl 8) -bor $b[$p+3]
  $p += 4
  $size = ([int]$b[$p] -shl 24) -bor ([int]$b[$p+1] -shl 16) -bor ([int]$b[$p+2] -shl 8) -bor $b[$p+3]
  $p += 4
  $a = $base + $off
  $tag = ''
  if ($size -ge 4) { $tag = [System.Text.Encoding]::ASCII.GetString($b, $a, 4) }
  Write-Output ("{0,-16} off={1,-8} size={2,-8} tag={3}" -f $name, $off, $size, ($tag -replace '[^\x20-\x7e]','.'))
}
