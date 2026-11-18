<#
.SYNOPSIS
    Extracts the ICFTD Amiga disks and flattens the game executable for Ghidra.

.DESCRIPTION
      1. builds src\assetExport (ICFTD.AmigaExport)
      2. extracts every floppy image in -DiskDir into the tree the game extracts for
         itself: export\disk1 .. disk3 for the 1989 game and export\ant1 .. ant3 for
         the 1990 add-on "Antheads", which label their disks Desert1..3 alike and are
         told apart by their contents (src\runtime\assets.c, docs\antheads.md §4.1).
         An image that is neither is exported to export\other<N> with a warning.
      3. flattens dshell (the only hunk executable on the disks) into a raw load
         image plus relocation and symbol lists under export\code\dshell (the Ghidra
         base-0 copy) and export\code\dshell4k (the runtime copy, relocated to 0x4000);
         the add-on's program becomes export\ant\code\dshell4k

    The disk images are game data and are not part of the repository; any file whose
    size is a whole number of 512-byte blocks is treated as an 880K Amiga disk.

.EXAMPLE
    powershell -ExecutionPolicy Bypass -File tools\extract.ps1
.EXAMPLE
    powershell -ExecutionPolicy Bypass -File tools\extract.ps1 -RunGhidra
#>
param(
    [string]$DiskDir = "disks",
    [string]$OutDir = "export",
    [string]$Base = "0x0",
    [switch]$RunGhidra
)

# The volume label of an AmigaDOS OFS floppy: the root block's name (length byte at 432, the
# characters at 433) - the field src\runtime\assets.c's disk_volume() reads.
function Get-VolumeLabel([string]$path) {
    $b = New-Object byte[] 512
    $fs = [IO.File]::OpenRead($path)
    try {
        [void]$fs.Seek(880 * 512, [IO.SeekOrigin]::Begin)
        $got = 0
        while ($got -lt 512) {
            $r = $fs.Read($b, $got, 512 - $got)
            if ($r -le 0) { break }
            $got += $r
        }
    }
    finally { $fs.Close() }
    $len = [int]$b[432]
    if ($len -lt 1 -or $len -gt 30) { return '' }
    return [Text.Encoding]::ASCII.GetString($b, 433, $len)
}

$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
Push-Location $root
try {
    $proj = "src\assetExport\ICFTD.AmigaExport.csproj"
    dotnet build $proj --nologo -v:q | Out-Null
    if ($LASTEXITCODE -ne 0) { throw "build failed" }
    $exe = (Resolve-Path "src\assetExport\bin\Debug\net10.0\ICFTD.AmigaExport.exe").Path

    $images = Get-ChildItem $DiskDir -File |
        Where-Object { $_.Length -ge 51200 -and ($_.Length % 512) -eq 0 } |
        Sort-Object Name
    if ($images.Count -eq 0) { throw "no disk images in $DiskDir" }

    # The add-on's tree is only ever written here, so it goes first: an export made without the
    # add-on's images must not leave yesterday's tree behind for the packer to stage.
    foreach ($t in 'ant1', 'ant2', 'ant3', 'ant') {
        $p = Join-Path $OutDir $t
        if (Test-Path $p) { Remove-Item -LiteralPath $p -Recurse -Force }
    }

    $n = 0
    foreach ($img in $images) {
        $n++
        $tmp = Join-Path $OutDir "_img$n"
        if (Test-Path $tmp) { Remove-Item -LiteralPath $tmp -Recurse -Force }
        & $exe extract $img.FullName $tmp

        # Both builds label their disks Desert1..3, so the label names the disk and only the
        # contents say whose it is - the rule src\runtime\assets.c applies. The add-on is
        # recognised by the size of one file per disk: its program is 170 972 bytes where the
        # 1989 game's is 160 332, and its data banks are 400 681 (disk 2) and 71 752 (disk 3)
        # where the 1989 ones are 388 436 and 60 349 (docs\antheads.md §1).
        $label = Get-VolumeLabel $img.FullName
        $vol = 0
        if ($label -match '^[Dd]esert([1-3])$') { $vol = [int]$Matches[1] }
        $marks = @{ 1 = @('dshell', 170972); 2 = @('BACKS', 400681); 3 = @('HOSP', 71752) }
        $tree = ''
        if ($vol -ne 0) {
            $mark = $marks[$vol]
            $file = Get-ChildItem -LiteralPath $tmp -File | Where-Object { $_.Name -eq $mark[0] }
            if ($file -and $file.Length -eq $mark[1]) { $tree = "ant$vol" } else { $tree = "disk$vol" }
        }
        if ($tree -eq '') {
            Write-Warning "$($img.Name): not a disk of either build (label '$label') - exported to $OutDir\other$n"
            $tree = "other$n"
        }
        $target = Join-Path $OutDir $tree
        if (Test-Path $target) { Remove-Item -LiteralPath $target -Recurse -Force }
        Move-Item -LiteralPath $tmp -Destination $target
    }

    # dshell is the game program; the other files are resource banks (see amiga_formats.md).
    $dshell = Join-Path $OutDir "disk1\dshell"
    if (-not (Test-Path $dshell)) { throw "dshell not found in $OutDir\disk1" }
    & $exe hunk $dshell (Join-Path $OutDir "code\dshell") $Base
    # The game runs the same image relocated to its own load address.
    & $exe hunk $dshell (Join-Path $OutDir "code\dshell4k") "0x4000"
    # The add-on's program is a second build of the same engine and loads at the same address.
    $antDshell = Join-Path $OutDir "ant1\dshell"
    if (Test-Path -LiteralPath $antDshell) {
        & $exe hunk $antDshell (Join-Path $OutDir "ant\code\dshell4k") "0x4000"
    }

    if ($RunGhidra) {
        & powershell -NoProfile -ExecutionPolicy Bypass -File (Join-Path $root 'tools\ghidra\run-ghidra.ps1')
    }
}
finally {
    Pop-Location
}
