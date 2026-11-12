# Reads a WinUAE savestate (the .uss written by statefile_quit in tools\icftd-reference.uae) and
# pulls one memory chunk out of it as raw bytes, so it can be compared with our own --ram dumps.
#
# The format is IFF-style chunks (savestate.cpp, save_chunk): name[4], size(u32), flags(u32), data.
# size counts the data plus 12 bytes, or plus 16 when the chunk is zlib-compressed (flags bit 0), in
# which case the data starts with the uncompressed length. Every chunk is padded to a multiple of 4.
#
#   powershell -ExecutionPolicy Bypass -File tools\refstate.ps1 -State out\ref-quit.uss -List
#   powershell -ExecutionPolicy Bypass -File tools\refstate.ps1 -State out\ref-quit.uss -Out out\ref-chip.bin
param(
    [Parameter(Mandatory = $true)][string]$State,
    [string]$Chunk = 'chip',
    [string]$Out,
    [switch]$List
)
$ErrorActionPreference = 'Stop'

$bytes = [IO.File]::ReadAllBytes((Resolve-Path $State).Path)
$script:b = $bytes

function U32([int]$at)
{
    return ([int]$script:b[$at] -shl 24) -bor ([int]$script:b[$at + 1] -shl 16) -bor
           ([int]$script:b[$at + 2] -shl 8) -bor ([int]$script:b[$at + 3])
}

function U32le([int]$at)
{
    return ([int]$script:b[$at + 3] -shl 24) -bor ([int]$script:b[$at + 2] -shl 16) -bor
           ([int]$script:b[$at + 1] -shl 8) -bor ([int]$script:b[$at])
}

# The size field is written by save_u32t (target endianness). Detect it from the first chunk name,
# which must be printable ASCII ("ASF " first).
$be = $true
if ($bytes[0] -lt 0x20 -or $bytes[0] -gt 0x7E) { $be = $false }
function U32any([int]$at) { if ($be) { return U32 $at } else { return U32le $at } }

$chunks = @()
$pos = 0
while ($pos + 12 -le $bytes.Length)
{
    $name = ''
    for ($i = 0; $i -lt 4; $i++)
    {
        $c = $bytes[$pos + $i]
        if ($c -lt 0x20 -or $c -gt 0x7E) { $name = $null; break }
        $name += [char]$c
    }
    if ($name -eq $null) { break }
    $size = U32any ($pos + 4)
    $flags = U32any ($pos + 8)
    $compressed = ($flags -band 1) -ne 0
    $payloadLen = $size - $(if ($compressed) { 16 } else { 12 })
    if ($payloadLen -lt 0 -or $pos + 12 + $payloadLen -gt $bytes.Length) { break }
    $chunks += [pscustomobject]@{
        Name = $name; Size = $size; Flags = $flags; Compressed = $compressed
        Data = $pos + 12; Length = $payloadLen
    }
    $pad = 4 - ($payloadLen -band 3)
    $pos = $pos + 12 + $payloadLen + $pad
}

if ($List -or -not $Out)
{
    "chunk count: $($chunks.Count)"
    foreach ($c in $chunks)
    {
        "  {0}  size {1,10}  {2}  {3}" -f $c.Name, $c.Size,
            $(if ($c.Compressed) { 'zlib' } else { 'raw ' }), $c.Length
    }
}

if (-not $Out) { return }

$want = $chunks | Where-Object { $_.Name -eq $Chunk }
if (-not $want) { throw "no chunk named '$Chunk' in $State" }
if ($want.Count -gt 1) { throw "$($want.Count) chunks named '$Chunk' in $State" }

$off = $want.Data
$len = $want.Length
if ($want.Compressed)
{
    # data = u32 uncompressed length + zlib stream; strip the 2-byte zlib header and inflate.
    $raw = New-Object byte[] ($len - 4)
    [Array]::Copy($bytes, $off + 4, $raw, 0, $len - 4)
    $ms = New-Object IO.MemoryStream(,$raw)
    $ms.Position = 2
    $ds = New-Object IO.Compression.DeflateStream($ms, [IO.Compression.CompressionMode]::Decompress)
    $mem = New-Object IO.MemoryStream
    $ds.CopyTo($mem)
    $ds.Dispose(); $ms.Dispose()
    $raw = $mem.ToArray()
    $mem.Dispose()
}
else
{
    $raw = New-Object byte[] $len
    [Array]::Copy($bytes, $off, $raw, 0, $len)
}

[IO.File]::WriteAllBytes((Join-Path (Get-Location) $Out), $raw)
"wrote {0} byte(s) of chunk '{1}' to {2}" -f $raw.Length, $Chunk, $Out
