# Compares two oracle --state dumps: the first frame whose machine state differs, and (when the
# full RAM blobs for that frame exist) the byte ranges that differ.
#
#   powershell -ExecutionPolicy Bypass -File tools\state-diff.ps1 -A out\st\a -B out\st\b
#
# Parity is machine state, never images: this tool only ever looks at registers, the custom-chip
# register file and RAM bytes (docs\recomp-architecture.md, "Acceptance tests").
#
# Dump layout (src\oracle\state.c, little endian): "ICST" u32 version u32 recSize u32 records,
# then one 344-byte record per sampled frame:
#   frame, insns, D0-D7, A0-A7, SR, PC, RAM hash (lo, hi), custom[128]
param(
    [Parameter(Mandatory = $true)][string]$A,
    [Parameter(Mandatory = $true)][string]$B,
    [int]$MaxRanges = 24,
    # Compare the full RAM images at every frame that both sides dumped, not only at the first
    # frame whose hash differs. Needed to see a difference inside a blob whose hash still matches.
    [switch]$Blobs
)
$ErrorActionPreference = 'Stop'

Add-Type -TypeDefinition @'
using System;
using System.Collections.Generic;
public static class StDiff
{
    public static ulong Fnv(byte[] b)
    {
        ulong h = 1469598103934665603UL;
        for (int i = 0; i < b.Length; i++) { h ^= b[i]; h *= 1099511628211UL; }
        return h;
    }
    // Runs of differing bytes, merged, ascending. max = 0 means "all".
    public static List<long[]> Ranges(byte[] a, byte[] b, int max)
    {
        var list = new List<long[]>();
        int n = Math.Min(a.Length, b.Length);
        int i = 0;
        while (i < n && (max == 0 || list.Count < max))
        {
            while (i < n && a[i] == b[i]) i++;
            if (i >= n) break;
            int start = i;
            while (i < n && a[i] != b[i]) i++;
            list.Add(new long[] { start, i - start });
        }
        return list;
    }
}
'@

function Resolve-State([string]$p) {
    if (Test-Path -LiteralPath $p) { return (Resolve-Path -LiteralPath $p).Path }
    if (Test-Path -LiteralPath "$p.state") { return (Resolve-Path -LiteralPath "$p.state").Path }
    throw "no state dump at '$p' or '$p.state'"
}

function Field-Hex([byte[]]$d, [int]$base, [int]$off, [int]$len) {
    $v = [long]0
    for ($k = 0; $k -lt $len; $k++) { $v = $v -bor ([long]$d[$base + $off + $k] -shl (8 * $k)) }
    return ('0x{0:x}' -f $v)
}

function Read-Header([byte[]]$d, [string]$name) {
    if ($d.Length -lt 16) { throw "$name is too short to be a state dump" }
    $magic = [System.Text.Encoding]::ASCII.GetString($d, 0, 4)
    if ($magic -ne 'ICST') { throw "$name is not a state dump (magic '$magic')" }
    [pscustomobject]@{
        Version = [BitConverter]::ToUInt32($d, 4)
        RecSize = [BitConverter]::ToUInt32($d, 8)
        Count   = [BitConverter]::ToUInt32($d, 12)
    }
}

$pathA = Resolve-State $A
$pathB = Resolve-State $B
$dataA = [System.IO.File]::ReadAllBytes($pathA)
$dataB = [System.IO.File]::ReadAllBytes($pathB)

$headA = Read-Header $dataA $pathA
$headB = Read-Header $dataB $pathB
if ($headA.Version -ne 1 -or $headB.Version -ne 1) { throw "unsupported state version ($($headA.Version)/$($headB.Version))" }
if ($headA.RecSize -ne $headB.RecSize) { throw "record sizes differ ($($headA.RecSize) vs $($headB.RecSize)) - rebuild the oracle" }
$stRec = [int]$headA.RecSize
if ((16 + $headA.Count * $stRec) -ne $dataA.Length) { throw "$pathA is truncated ($($dataA.Length) bytes for $($headA.Count) records of $stRec)" }
if ((16 + $headB.Count * $stRec) -ne $dataB.Length) { throw "$pathB is truncated ($($dataB.Length) bytes for $($headB.Count) records of $stRec)" }

# Record fields to compare: offset, length, label. (Built as objects: "$a += , @(...)" is
# mis-parsed by PowerShell 5.1 when the inner array is nested.)
$fields = New-Object System.Collections.ArrayList
[void]$fields.Add([pscustomobject]@{ Off = 4; Len = 4; Name = 'insns' })
[void]$fields.Add([pscustomobject]@{ Off = 72; Len = 2; Name = 'sr' })
[void]$fields.Add([pscustomobject]@{ Off = 76; Len = 4; Name = 'pc' })
[void]$fields.Add([pscustomobject]@{ Off = 80; Len = 8; Name = 'ram hash' })
[void]$fields.Add([pscustomobject]@{ Off = 88; Len = 256; Name = 'custom regs' })
for ($i = 0; $i -lt 8; $i++) { [void]$fields.Add([pscustomobject]@{ Off = 8 + 4 * $i; Len = 4; Name = "d$i" }) }
for ($i = 0; $i -lt 8; $i++) { [void]$fields.Add([pscustomobject]@{ Off = 40 + 4 * $i; Len = 4; Name = "a$i" }) }

$records = [Math]::Min($headA.Count, $headB.Count)
$firstFrame = -1
$firstDifferences = @()

for ($r = 0; $r -lt $records; $r++) {
    $oa = 16 + $r * $stRec
    $ob = 16 + $r * $stRec
    $fa = [BitConverter]::ToUInt32($dataA, $oa)
    $fb = [BitConverter]::ToUInt32($dataB, $ob)
    if ($fa -ne $fb) { throw "record $r`: frame numbers differ ($fa vs $fb) - the two dumps used different --every values" }
    $diffs = @()
    foreach ($f in $fields) {
        $off = $f.Off; $len = $f.Len; $label = $f.Name
        $same = $true
        for ($k = 0; $k -lt $len; $k++) {
            if ($dataA[$oa + $off + $k] -ne $dataB[$ob + $off + $k]) { $same = $false; break }
        }
        if (-not $same) {
            if ($len -eq 256) { $diffs += "$label differ" }
            else { $diffs += ("{0} {1} vs {2}" -f $label, (Field-Hex $dataA $oa $off $len), (Field-Hex $dataB $ob $off $len)) }
        }
    }
    if ($diffs.Count -gt 0) {
        $firstFrame = $fa
        $firstDifferences = $diffs
        break
    }
}

Write-Output "state A: $pathA ($($headA.Count) frame record(s))"
Write-Output "state B: $pathB ($($headB.Count) frame record(s))"

if ($headA.Count -ne $headB.Count) {
    Write-Output "WARNING the dumps cover a different number of frames ($($headA.Count) vs $($headB.Count))"
    if ($firstFrame -lt 0) {
        # No state difference inside the common part, but one run is longer: that is a difference.
        $firstFrame = if ($headA.Count -gt $headB.Count) {
            [BitConverter]::ToUInt32($dataA, 16 + $records * $stRec)
        } else {
            [BitConverter]::ToUInt32($dataB, 16 + $records * $stRec)
        }
        $firstDifferences = @('one run has more frames')
    }
}

if ($firstFrame -ge 0) {
    Write-Output "DIFFERENT: first divergence at frame $firstFrame"
    foreach ($d in $firstDifferences) { Write-Output "    $d" }
}

# -Blobs: walk every frame both sides have a RAM image for. This is what turns "the hash matches"
# into "these bytes match", and it is the only way to see a change that a stale record hid.
if ($Blobs -and $firstFrame -lt 0) {
    $prefixA = $pathA -replace '\.state$', ''
    $prefixB = $pathB -replace '\.state$', ''
    $blobFrames = 0
    for ($r = 0; $r -lt $records; $r++) {
        $f = [BitConverter]::ToUInt32($dataA, 16 + $r * $stRec)
        $ramA = "$prefixA.$f.ram"
        $ramB = "$prefixB.$f.ram"
        if (-not ((Test-Path -LiteralPath $ramA) -and (Test-Path -LiteralPath $ramB))) { continue }
        $blobFrames++
        $bytesA = [System.IO.File]::ReadAllBytes($ramA)
        $bytesB = [System.IO.File]::ReadAllBytes($ramB)
        $diff = [StDiff]::Ranges($bytesA, $bytesB, 1)
        if ($diff.Count -gt 0) {
            $firstFrame = $f
            $firstDifferences = @('RAM bytes differ (see below)')
            break
        }
    }
    if ($firstFrame -lt 0) { Write-Output "blobs: $blobFrames frame(s) compared, all byte-identical" }
    else { Write-Output "DIFFERENT: first RAM difference at frame $firstFrame" }
}

# ---- full RAM blobs for the first divergent frame ---------------------------------------------
# The oracle writes "<prefix>.<frame>.ram" for the frames named by --ram: the only place where a
# difference can be narrowed from "this frame" to "these bytes".
if ($firstFrame -ge 0) {
    $prefixA = $pathA -replace '\.state$', ''
    $prefixB = $pathB -replace '\.state$', ''
    $ramA = "$prefixA.$firstFrame.ram"
    $ramB = "$prefixB.$firstFrame.ram"
    if (-not ((Test-Path -LiteralPath $ramA) -and (Test-Path -LiteralPath $ramB))) {
        Write-Output ""
        Write-Output "no RAM blob for frame $firstFrame. Re-run both sides with the same budget, a separate"
        Write-Output "--state prefix and '--ram $firstFrame' to get byte ranges:"
        Write-Output "    bin\win32\icftd-oracle.exe <image> 0x4000 <insns> --state $prefixA --ram $firstFrame --input <script-A>"
        Write-Output "    bin\win32\icftd-oracle.exe <image> 0x4000 <insns> --state $prefixB --ram $firstFrame --input <script-B>"
        exit 1
    }

    $bytesA = [System.IO.File]::ReadAllBytes($ramA)
    $bytesB = [System.IO.File]::ReadAllBytes($ramB)
    if ($bytesA.Length -ne $bytesB.Length) { throw "RAM blobs differ in size ($($bytesA.Length) vs $($bytesB.Length))" }

    # A blob must still hash to its own record, else the byte comparison below means nothing.
    $checkA = New-Object System.Collections.ArrayList
    [void]$checkA.Add([pscustomobject]@{ Data = $dataA; Bytes = $bytesA; Name = 'A'; Header = $headA })
    [void]$checkA.Add([pscustomobject]@{ Data = $dataB; Bytes = $bytesB; Name = 'B'; Header = $headB })
    foreach ($side in $checkA) {
        $data = $side.Data; $bytes = $side.Bytes; $name = $side.Name; $head = $side.Header
        $off = -1
        for ($r = 0; $r -lt $head.Count; $r++) {
            if ([BitConverter]::ToUInt32($data, 16 + $r * $stRec) -eq $firstFrame) { $off = 16 + $r * $stRec; break }
        }
        if ($off -lt 0) { continue }
        $lo = [BitConverter]::ToUInt32($data, $off + 80)
        $hi = [BitConverter]::ToUInt32($data, $off + 84)
        $recorded = ([uint64]$hi -shl 32) -bor [uint64]$lo
        $actual = [StDiff]::Fnv($bytes)
        if ($actual -ne $recorded) {
            Write-Output ("NOTE blob {0} was modified: FNV 0x{1:x} but its record says 0x{2:x}" -f $name, $actual, $recorded)
        }
    }

    $all = [StDiff]::Ranges($bytesA, $bytesB, 0)
    $shown = [StDiff]::Ranges($bytesA, $bytesB, $MaxRanges)
    $total = 0
    foreach ($x in $all) { $total += $x[1] }
    Write-Output ""
    Write-Output "RAM at frame $firstFrame : $total differing byte(s) in $($all.Count) range(s)"
    foreach ($x in $shown) {
        $addr = $x[0]; $len = $x[1]
        $show = [Math]::Min(16, $len)
        $hexA = -join (0..($show - 1) | ForEach-Object { $bytesA[$addr + $_].ToString('x2') })
        $hexB = -join (0..($show - 1) | ForEach-Object { $bytesB[$addr + $_].ToString('x2') })
        if ($len -gt $show) { $hexA += '..'; $hexB += '..' }
        Write-Output ("    {0:x6}  {1,6} byte(s)  {2}  vs  {3}" -f $addr, $len, $hexA, $hexB)
    }
    if ($all.Count -gt $shown.Count) { Write-Output "    ... $($all.Count - $shown.Count) more range(s)" }
}

if ($firstFrame -ge 0) { exit 1 }
Write-Output "IDENTICAL: $records frame(s) - registers, the custom-chip register file and the RAM hash"
exit 0
