# Stages a runnable MS-DOS release in bin\dos\game:
#
#   ICFTD.EXE     the translated game (tools\build-dos.ps1)
#   DSHELL.IMG    the image, flattened at 0x4000
#   DISK1..3\     the extracted game data, every file renamed to a legal DOS 8.3 name
#   NAMES.TXT     long name = 8.3 name, read by the DOS platform layer
#
# The game asks for AmigaDOS names; a few of them (fonts\newnem.font, sfx/screeeems, ...) are not
# legal on FAT, so the release renames them and NAMES.TXT records the mapping.  The runtime retries
# a failed open through that map, which is why the game finds its font on DOS.
#
#   powershell -ExecutionPolicy Bypass -File tools\dos-pack.ps1 [-Out <dir>]
param(
    [string]$Out = ''
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
if ($Out -eq '') { $Out = Join-Path $root 'bin\dos\game' }
$exe = Join-Path $root 'bin\dos\ICFTD.EXE'
$img = Join-Path $root 'export\code\dshell4k\dshell.img'
if (-not (Test-Path $exe)) { throw "missing $exe - run tools\build-dos.ps1 first" }
if (-not (Test-Path $img)) { throw "missing $img - run tools\extract.ps1 first" }

if (Test-Path $Out) { Remove-Item $Out -Recurse -Force }
New-Item -ItemType Directory -Force -Path $Out | Out-Null

Copy-Item -LiteralPath $exe -Destination (Join-Path $Out 'ICFTD.EXE')
Copy-Item -LiteralPath $img -Destination (Join-Path $Out 'DSHELL.IMG')

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

$map = @{}
foreach ($d in 1..3) {
    $src = Join-Path $root "export\disk$d"
    if (-not (Test-Path $src)) { throw "missing $src - run tools\extract.ps1 first" }
    $dst = Join-Path $Out "DISK$d"

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

$lines = @('; long name = DOS 8.3 name, for the files MS-DOS could not hold')
foreach ($k in ($map.Keys | Sort-Object)) { $lines += "$k=$($map[$k])" }
Set-Content -Path (Join-Path $Out 'NAMES.TXT') -Value $lines -Encoding ascii

# A DOSBox config that gives the game a 486/Pentium-class machine: the dynamic core and as many
# cycles as the host can manage.  A stock DOSBox setting (cycles=3000) is a 386 emulation and the
# game crawls - start it with  dosbox -conf ICFTD.CONF.
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
    "mount c `"$Out`"",
    'c:',
    'ICFTD.EXE'
)
Set-Content -Path (Join-Path $Out 'ICFTD.CONF') -Value $conf -Encoding ascii

$count = @(Get-ChildItem -LiteralPath $Out -Recurse -File).Count
Write-Host "-> $Out ($count file(s), $($map.Count) renamed)"
