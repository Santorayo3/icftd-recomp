# The shipping invariant: everything the executable draws that is not the game's own picture is
# built from the port's tracked PNGs (assets\*.png), and nothing from the floppy images is compiled
# in at all.
#
# The game's art never reaches the binary: it stays in the extracted filesystems (export\disk<N>,
# which the runtime opens at run time) and in assets\game.pak, which is decoded from the user's own
# disks. The port's own art is the opposite - it *is* compiled in, as one generated table per PNG,
# because a shipped game must show its title screen and pointer without any of the original data.
# That is only true if each table is exactly its PNG: a table generated once and then forgotten
# would ship a picture nobody can find in the repository, and a table generated from something
# outside assets\ could carry data the project has no right to ship.
#
# So this check regenerates every table from its PNG with the tool that owns it (the same tools\
# mk*.ps1 scripts a developer runs) and requires the committed header to be the same text, line
# endings aside (the tools write LF; a clone with core.autocrlf=true checks them out as CRLF). It
# also requires every PNG a table is made from to be tracked by git: an untracked PNG would make
# the shipped table unreproducible from a clone.
#
# The pointer arrow (tools\mkpointer.ps1) has no PNG - it is ASCII art written in the tool itself -
# and is checked the same way, so a hand edit of the header cannot survive either.
#
#   powershell -ExecutionPolicy Bypass -File tools\art-check.ps1
param(
    [string]$Work = 'out\art-check'
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
Set-Location $root

# Content hash of a text file with CR dropped: the tools write LF, but a clone with
# core.autocrlf=true materialises the committed header with CRLF, and that is not a difference.
function Read-Normalized([string]$path) {
    $bytes = [System.IO.File]::ReadAllBytes((Resolve-Path -LiteralPath $path).Path)
    $kept = New-Object byte[] $bytes.Length
    $n = 0
    foreach ($b in $bytes) { if ($b -ne 13) { $kept[$n++] = $b } }
    $sha = [System.Security.Cryptography.SHA256]::Create()
    try { return [BitConverter]::ToString($sha.ComputeHash($kept, 0, $n)) } finally { $sha.Dispose() }
}

# header <- the tool that writes it, and the PNGs that tool reads.
$art = @(
    @{ Header = 'src\runtime\plat\win32\border_art.h';    Tool = 'tools\mkborder.ps1';       Pngs = @('assets\border.png') },
    @{ Header = 'src\runtime\amiga\crosshair_art.h';      Tool = 'tools\mkcrosshair.ps1';    Pngs = @('assets\crosshair.png') },
    @{ Header = 'src\runtime\amiga\osd_icon.h';           Tool = 'tools\mkosdicon.ps1';      Pngs = @('assets\autosave.png') },
    @{ Header = 'src\host\title_art.h';                   Tool = 'tools\mktitleart.ps1';     Pngs = @('assets\titlescreen.png') },
    @{ Header = 'src\host\title_buttons.h';               Tool = 'tools\mktitlebuttons.ps1'; Pngs = @('assets\btn_normal.png', 'assets\btn_hover.png') },
    @{ Header = 'src\host\settings_art.h';                Tool = 'tools\mksettingsart.ps1';  Pngs = @('assets\minus_normal.png', 'assets\minus_hover.png', 'assets\plus_normal.png', 'assets\plus_hover.png', 'assets\toggle_on.png', 'assets\toggle_off.png') },
    @{ Header = 'src\host\portrait_box_art.h';            Tool = 'tools\mkportraitbox.ps1';  Pngs = @('assets\portrait_box.png') },
    @{ Header = 'src\runtime\amiga\pointer_art.h';        Tool = 'tools\mkpointer.ps1';      Pngs = @() }
)

if (Test-Path $Work) { Remove-Item -LiteralPath $Work -Recurse -Force }
New-Item -ItemType Directory -Force -Path $Work | Out-Null

$fail = 0
function Fail([string]$text) { Write-Output "art: FAIL - $text"; $script:fail++ }

$have = Get-Command git -ErrorAction SilentlyContinue
$tracked = @()
if ($have) {
    $tracked = @(& git ls-files 'assets/*.png' 2>$null | ForEach-Object { $_.Replace('/', '\') })
} else {
    Write-Output 'art: note - git not found, the tracked-PNG assertion is skipped'
}

foreach ($a in $art) {
    $leaf = Split-Path -Leaf $a.Header
    $regen = Join-Path $Work $leaf
    if (-not (Test-Path $a.Header)) { Fail "missing $($a.Header) - run tools\build-host.ps1 or $($a.Tool)"; continue }

    foreach ($png in $a.Pngs) {
        if (-not (Test-Path $png)) { Fail "$($a.Header) is made from $png, which is missing" }
        elseif ($have -and $tracked -notcontains $png) { Fail "$png is not tracked by git, so $($a.Header) cannot be reproduced from a clone" }
    }

    Set-Location $root
    $out = & (Join-Path $root $a.Tool) -Out $regen 2>&1 | Out-String
    Set-Location $root
    if (-not (Test-Path $regen)) { Fail "$($a.Tool) wrote no $regen - $($out.Trim())"; continue }

    # Line endings are not picture data: the tools write LF, and a clone with core.autocrlf=true
    # materialises the committed header with CRLF. Compare the content, not the EOL style.
    $want = (Read-Normalized $a.Header)
    $got  = (Read-Normalized $regen)
    if ($want -ne $got) {
        Fail ("$($a.Header) is not what $($a.Tool) makes from $($a.Pngs -join ', ')" +
              " - regenerate it (the committed table is stale or hand edited)")
    }
}

# A tracked PNG no tool reads is not an error - artwork can be staged before the code that shows it -
# but it does not ship in the binary either, so say so rather than let it look accounted for.
$used = @($art | ForEach-Object { $_.Pngs } | ForEach-Object { $_ })
# The executable's Windows icon is a resource, not a C table: tools\mkappicon.ps1 makes a .ico in the
# build directory and tools\build-host.ps1 regenerates it on every build, so there is no committed
# artifact to compare - but it does ship, so it is not "unread" either.
$used += 'assets\app_icon.png'
if ($have) {
    foreach ($png in $tracked) {
        if ($used -notcontains $png) { Write-Output "art: note - $png is tracked but no tool reads it (it is not in the binary)" }
    }
}

if ($fail -ne 0) { Write-Output ("art: {0} check(s) failed" -f $fail); exit 1 }
Write-Output ("art: {0} table(s) match their PNGs, and every one is tracked" -f $art.Count)
exit 0
