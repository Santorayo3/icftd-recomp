# Stages the runnable MS-DOS release in bin\dos\game:
#
#   ICFTD.EXE     the translated game (tools\build-dos.ps1)
#   DISKS\        empty: the player's three original Amiga floppy images go here
#   SAVES\        empty: the save slots (F1..F4 pick one, F5 cycles them)
#   ICFTD.CONF    a DOSBox config that gives it a 486/Pentium-class machine
#
# The release ships **no game data** - the player's own disks are the only source. On its first
# start the game extracts `DISKS\` itself into the 8.3 tree it runs from (`DISK1..3`, `NAMES.TXT`,
# `DSHELL.IMG`; src\runtime\assets.c) and boots; without the three images it prints
#   Please put the three original 'It Came from the Desert' disk images in the 'disks' folder and restart.
# and exits. Later starts read the extracted tree and do not look at `DISKS\` again.
#
# The game asks for AmigaDOS names; a few of them (fonts\newnem.font, sfx/screeeems, ...) are not
# legal on FAT, so the extractor renames them and NAMES.TXT records the mapping. The runtime retries
# a failed open through that map, which is why the game finds its font on DOS.
#
# -Data <dir> writes that extracted tree instead of the release, from the `export\` tree
# tools\extract.ps1 produces and with the same naming the first start applies. It is the reference
# tools\dos-extract-check.ps1 compares an extraction against, so the naming rules live in exactly
# one place.
#
# The 1990 add-on "Antheads" is staged beside the game when the export tree holds all of it:
# `ANT1..3` and `ANTSHEL.IMG`, with one `NAMES.TXT` covering both trees (docs\antheads.md §4.4).
#
#   powershell -ExecutionPolicy Bypass -File tools\dos-pack.ps1 [-Out <dir>] [-Data <dir>]
param(
    [string]$Out = '',
    [string]$Data = ''
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot

# 8.3 name for a long name, unique within its directory (the directory name set is pre-seeded).
function Get-ShortName([string]$name, $used) {
    $base = $name
    $ext = ''
    $dot = $name.LastIndexOf('.')
    if ($dot -gt 0) { $base = $name.Substring(0, $dot); $ext = $name.Substring($dot + 1) }
    $base = $base.ToUpperInvariant()
    $ext = $ext.ToUpperInvariant()
    if ($base.Length -gt 8) { $base = $base.Substring(0, 6) }
    if ($ext.Length -gt 3) { $ext = $ext.Substring(0, 3) }
    $n = 0
    while ($true) {
        if ($n -eq 0) { $stem = $base }
        else {
            $stem = if ($base.Length -gt 6) { $base.Substring(0, 6) } else { $base }
            $stem = "$stem~$n"
        }
        $cand = if ($ext -ne '') { "$stem.$ext" } else { $stem }
        if (-not $used.ContainsKey($cand)) { $used[$cand] = $true; return $cand }
        $n++
    }
}

# A DOSBox config that gives the game a 486/Pentium-class machine: the dynamic core and as many
# cycles as the host can manage.  A stock DOSBox setting (cycles=3000) is a 386 emulation and the
# game crawls - start it with  dosbox -conf ICFTD.CONF.
function Write-Conf([string]$dir) {
    $conf = @(
        '[sdl]',
        'fullscreen=false',
        'output=surface',
        '[dosbox]',
        'memsize=16',
        '[cpu]',
        'core=dynamic',
        'cycles=max',
        '[autoexec]',
        "mount c `"$dir`"",
        'c:',
        'ICFTD.EXE'
    )
    Set-Content -Path (Join-Path $dir 'ICFTD.CONF') -Value $conf -Encoding ascii
}

# The order the name map is written in: src\runtime\assets.c's name_less, where '-' and '.' carry
# no weight and everything else compares by code point ("DISK-VALIDATOR" after "DISKFONT.LIBRARY",
# and "HDINSTALL2" before "HD_INSTALL"). Sort-Object compares by culture instead, which places '_'
# - and, on another machine's culture, other characters - differently; the file has to come out the
# same bytes from both tools, so the rule is spelled out here rather than borrowed.
function Compare-LongName([string]$a, [string]$b) {
    $c = [string]::CompareOrdinal(($a -replace '[-.]', ''), ($b -replace '[-.]', ''))
    if ($c -ne 0) { return $c }
    return [string]::CompareOrdinal($a, $b)
}

function Sort-LongNames([string[]]$names) {
    $order = @($names)
    for ($i = 1; $i -lt $order.Count; $i++) {
        $k = $order[$i]
        $j = $i
        while ($j -gt 0 -and (Compare-LongName $order[$j - 1] $k) -gt 0) { $order[$j] = $order[$j - 1]; $j-- }
        $order[$j] = $k
    }
    return $order
}

# One extracted tree -> its 8.3 copy under $dst, appending every renamed long name to $map - one
# map for the whole data folder, which is what the first start writes too.
function Stage-Tree([string]$src, [string]$dst, $map) {
    $srcDirs = @($src) + @(Get-ChildItem -LiteralPath $src -Recurse -Directory | ForEach-Object { $_.FullName })
    foreach ($sd in $srcDirs) {
        $rel = $sd.Substring($src.Length)
        if ($rel.StartsWith('\')) { $rel = $rel.Substring(1) }
        $td = if ($rel -eq '') { $dst } else { Join-Path $dst $rel }
        if ((Split-Path -Leaf $td).Length -gt 8 -or (Split-Path -Leaf $td).Contains('.')) {
            Write-Warning "directory name is not 8.3: $rel"
        }
        New-Item -ItemType Directory -Force -Path $td | Out-Null

        $used = @{}
        Get-ChildItem -LiteralPath $td -Directory -ErrorAction SilentlyContinue |
            ForEach-Object { $used[$_.Name.ToUpperInvariant()] = $true }

        foreach ($file in @(Get-ChildItem -LiteralPath $sd -File)) {
            $short = Get-ShortName $file.Name $used
            $long = $file.Name.ToUpperInvariant()
            if ($short -ne $long) {
                if ($map.ContainsKey($long) -and $map[$long] -ne $short) {
                    Write-Warning "name maps differently per directory: $($file.Name)"
                } else {
                    $map[$long] = $short
                }
            }
            Copy-Item -LiteralPath $file.FullName -Destination (Join-Path $td $short)
        }
    }
}

if ($Data -ne '') {
    if ($Out -ne '') { throw '-Out stages the release, -Data stages the extracted tree - give one' }
    $img = Join-Path $root 'export\code\dshell4k\dshell.img'
    if (-not (Test-Path $img)) { throw "missing $img - run tools\extract.ps1 first" }

    if (Test-Path $Data) { Remove-Item -LiteralPath $Data -Recurse -Force }
    New-Item -ItemType Directory -Force -Path $Data | Out-Null
    Copy-Item -LiteralPath $img -Destination (Join-Path $Data 'DSHELL.IMG')

    $map = @{}
    foreach ($d in 1..3) {
        $src = Join-Path $root "export\disk$d"
        if (-not (Test-Path $src)) { throw "missing $src - run tools\extract.ps1 first" }
        Stage-Tree $src (Join-Path $Data "DISK$d") $map
    }

    # The add-on, when the export tree holds all of it - the same "never half-used" rule the first
    # start applies, so a release staged from a partial export tree matches what a player with one
    # add-on image gets.
    $antImg = Join-Path $root 'export\ant\code\dshell4k\dshell.img'
    $antSrc = @(1..3 | ForEach-Object { Join-Path $root "export\ant$_" })
    if ((Test-Path $antImg) -and -not ($antSrc | Where-Object { -not (Test-Path $_) })) {
        Copy-Item -LiteralPath $antImg -Destination (Join-Path $Data 'ANTSHEL.IMG')
        foreach ($d in 1..3) { Stage-Tree (Join-Path $root "export\ant$d") (Join-Path $Data "ANT$d") $map }
    }

    $lines = @('; long name = DOS 8.3 name, for the files MS-DOS could not hold')
    foreach ($k in (Sort-LongNames @($map.Keys))) { $lines += "$k=$($map[$k])" }
    Set-Content -Path (Join-Path $Data 'NAMES.TXT') -Value $lines -Encoding ascii

    $count = @(Get-ChildItem -LiteralPath $Data -Recurse -File).Count
    Write-Host "-> $Data ($count file(s), $($map.Count) renamed)"
    return
}

if ($Out -eq '') { $Out = Join-Path $root 'bin\dos\game' }
$exe = Join-Path $root 'bin\dos\ICFTD.EXE'
if (-not (Test-Path $exe)) { throw "missing $exe - run tools\build-dos.ps1 first" }

if (Test-Path $Out) { Remove-Item -LiteralPath $Out -Recurse -Force }
New-Item -ItemType Directory -Force -Path $Out | Out-Null
foreach ($d in 'DISKS', 'SAVES') {
    New-Item -ItemType Directory -Force -Path (Join-Path $Out $d) | Out-Null
}
Copy-Item -LiteralPath $exe -Destination (Join-Path $Out 'ICFTD.EXE')

# The translations travel next to the executable, where the game looks for them first
# (lang.c, lang_read_file). A language's file is named after a two-letter code (lang.c, lang_scan),
# and the add-on's own half is `<code>_ant.csv`, so `??.csv` and `??_ant.csv` travel: `en.csv` /
# `en_ant.csv` are the source texts - the game's own script - and `*.work.csv` is the translator's
# file, and none of those may be shipped. DOS needs 8.3 names, and `de.csv` and `de_ant.csv` are.
$langDir = Join-Path $root 'lang'
$langFiles = @()
if (Test-Path $langDir) {
    $langFiles = @(Get-ChildItem -LiteralPath $langDir -Filter '*.csv' -File |
                   Where-Object { $_.BaseName -match '^[A-Za-z]{2}(_ant)?$' -and
                                  $_.BaseName -notmatch '^en(_ant)?$' })
}
if ($langFiles.Count -gt 0) {
    New-Item -ItemType Directory -Force -Path (Join-Path $Out 'LANG') | Out-Null
    foreach ($f in $langFiles) {
        Copy-Item -LiteralPath $f.FullName -Destination (Join-Path $Out ('LANG\' + $f.Name.ToUpper()))
    }
}
Write-Conf $Out

Write-Host ("-> $Out (ICFTD.EXE, empty DISKS\ SAVES\, ICFTD.CONF{0})" -f `
            $(if ($langFiles.Count -gt 0) { ', LANG\' + $langFiles.Count + ' translation(s)' } else { '' }))
