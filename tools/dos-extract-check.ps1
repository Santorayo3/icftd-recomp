# The DOS first start, measured as a byte identity - not as a picture.
#
# A port feature: the original has no first start at all (it boots from the disks it shipped on),
# so there is nothing to diff. What is checked is what the feature claims:
#
#   * from an empty release folder plus the player's three floppy images, `ICFTD.EXE --extract`
#     writes exactly the tree `tools\dos-pack.ps1 -Data` stages: every file byte-identical under
#     its 8.3 path, the same `NAMES.TXT`, and the 185 752-byte `DSHELL.IMG` in the data folder;
#   * the add-on's three disks are extracted beside the game's (`ANT1..3`, `ANTSHEL.IMG`, the same
#     `NAMES.TXT`) - the disks carry the game's volume labels, so they are recognised by their
#     contents (docs\antheads.md §4.1);
#   * one add-on image alone changes nothing: the tree is the game's, without `ANT1` or
#     `ANTSHEL.IMG` - the add-on's set is never half-used (§4.3);
#   * a second start does nothing: no extraction line, and every byte of the tree unchanged;
#   * an empty `disks\` folder prints the message and exits 1, writing no game data;
#   * the same floppy image twice is refused before anything is written;
#   * a headless run from the extracted tree dumps the same RAM as one from the reference tree, and
#     so does a first start that extracts and boots in one process.
#
# The floppy images are game data and not in git, so the step SKIPs without them.
#
#   powershell -ExecutionPolicy Bypass -File tools\dos-extract-check.ps1 [-Frames <n>]
param(
    [string]$DosBox = 'H:\Spiele\DosBox\DOSBox.exe',
    [string]$Exe = 'bin\dos\ICFTD.EXE',
    [string]$Work = 'out\dos-extract-check',
    [int]$TimeoutSec = 240,
    [int]$Frames = 300
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
Set-Location $root

$fail = 0
function Fail([string]$text) { Write-Output "dos-extract: FAIL - $text"; $script:fail++ }
function Ok([string]$text) { Write-Output "dos-extract: $text" }

if (-not (Test-Path $Exe)) { Write-Output "dos-extract: SKIP (no $Exe - build with tools\build-dos.ps1)"; exit 0 }
if (-not (Test-Path $DosBox)) { Write-Output "dos-extract: SKIP (no DOSBox at $DosBox)"; exit 0 }
if (-not (Test-Path 'export\disk1')) {
    Write-Output 'dos-extract: SKIP (no export\ tree - run tools\extract.ps1)'; exit 0
}
$all = @(Get-ChildItem disks -Filter *.adf -File -ErrorAction SilentlyContinue | Sort-Object Name)
$disks = @($all | Where-Object { $_.Name -notmatch 'Antheads' })
$antDisks = @($all | Where-Object { $_.Name -match 'Antheads' } | Sort-Object Name)
if ($disks.Count -lt 3) { Write-Output 'dos-extract: SKIP (no three floppy images in disks\)'; exit 0 }
$haveAnt = $antDisks.Count -ge 3
$exeFull = (Resolve-Path $Exe).Path

if (Test-Path $Work) { Remove-Item $Work -Recurse -Force }
New-Item -ItemType Directory -Force -Path $Work | Out-Null

# The reference: the extracted tree the packer stages (the naming rules the first start applies),
# with the executable beside it so a run can boot it.
$reference = Join-Path $Work 'reference'
& (Join-Path $PSScriptRoot 'dos-pack.ps1') -Data $reference | Out-Null
if (-not (Test-Path (Join-Path $reference 'DSHELL.IMG'))) {
    Write-Output 'dos-extract: SKIP (tools\dos-pack.ps1 -Data staged no tree)'; exit 0
}
Copy-Item -LiteralPath $exeFull -Destination (Join-Path $reference 'ICFTD.EXE')
# The reference and the floppy folder have to hold the same two sets, or there is nothing to compare.
$refAnt = Test-Path (Join-Path $reference 'ANTSHEL.IMG')
if ($refAnt -ne $haveAnt) {
    Write-Output 'dos-extract: SKIP (export\ and disks\ disagree about the add-on - run tools\extract.ps1)'
    exit 0
}

# Runs DOSBox with the folder mounted as C: and the scripted commands as its autoexec; returns the
# mounted log. `if errorlevel` is the only way the DOS side can report its exit code.
function Invoke-Dos([string]$dir, [string[]]$commands, [string]$log)
{
    $conf = Join-Path $Work ("dosbox-" + [IO.Path]::GetFileNameWithoutExtension($log) + ".conf")
    $lines = @('[sdl]', 'fullscreen=false', 'output=surface',
               '[dosbox]', 'memsize=16',
               '[cpu]', 'core=dynamic', 'cycles=max',
               '[autoexec]', "mount c `"$dir`"", 'c:') + $commands + @('exit')
    Set-Content -Path $conf -Value $lines -Encoding ascii
    $p = Start-Process -FilePath $DosBox -ArgumentList "-conf `"$conf`"" -PassThru
    if (-not $p.WaitForExit($TimeoutSec * 1000)) {
        try { $p.Kill() } catch {}
        Fail "DOSBox timed out in $dir"
    }
    if (Test-Path $log) { return (Get-Content $log -Raw) }
    return ''
}

# The release's own `--extract` invocation: the log, and the exit code the DOS shell saw.
$withExit = @('ICFTD.EXE --extract > EX.LOG',
              'if errorlevel 1 echo icftd: exit code 1 >> EX.LOG',
              'if not errorlevel 1 echo icftd: exit code 0 >> EX.LOG')

# Every file of a tree, keyed by its uppercased relative path (FAT is case-insensitive, and a
# DOSBox-mounted folder does not keep the case the disk had). The executable, the settings, the
# DOSBox config and this check's own logs are not part of the tree.
function TreeHashes([string]$dir)
{
    $full = (Resolve-Path $dir).Path
    $skip = @('ICFTD.EXE', 'ICFTD.CONF', 'ICFTD.INI')
    $map = @{}
    Get-ChildItem $full -Recurse -File -Force | ForEach-Object {
        $rel = $_.FullName.Substring($full.Length).TrimStart('\').ToUpperInvariant()
        if ($skip -contains $_.Name.ToUpperInvariant()) { return }
        if ($rel.StartsWith('DISKS\')) { return }       # the player's floppy images
        if ($_.Extension.ToUpperInvariant() -eq '.LOG' -or $_.Extension.ToUpperInvariant() -eq '.RAM') { return }
        $map[$rel] = (Get-FileHash -LiteralPath $_.FullName -Algorithm SHA256).Hash
    }
    return $map
}

function TreeEqual($mine, $theirs, [string]$what)
{
    $bad = 0
    foreach ($k in ($theirs.Keys | Sort-Object)) {
        if (-not $mine.ContainsKey($k)) { Fail "$what is missing $k"; $bad++; if ($bad -ge 8) { return } }
        elseif ($mine[$k] -ne $theirs[$k]) { Fail "$what differs at $k"; $bad++; if ($bad -ge 8) { return } }
    }
    foreach ($k in ($mine.Keys | Sort-Object)) {
        if (-not $theirs.ContainsKey($k)) { Fail "$what has an extra $k"; $bad++; if ($bad -ge 8) { return } }
    }
}

# --- first start: an empty release folder plus the three images -------------------------------
# A release folder filled exactly like a player's: the game's three images, and the add-on's when
# the folder has them.
function Fill-Disks([string]$dir, [bool]$withAddon)
{
    New-Item -ItemType Directory -Force -Path (Join-Path $dir 'DISKS') | Out-Null
    for ($i = 0; $i -lt 3; $i++) {
        Copy-Item -LiteralPath $disks[$i].FullName -Destination (Join-Path $dir ("DISKS\D$($i + 1).ADF"))
    }
    if ($withAddon) {
        for ($i = 0; $i -lt 3; $i++) {
            Copy-Item -LiteralPath $antDisks[$i].FullName -Destination (Join-Path $dir ("DISKS\A$($i + 1).ADF"))
        }
    }
}

$first = Join-Path $Work 'first'
New-Item -ItemType Directory -Force -Path $first | Out-Null
Copy-Item -LiteralPath $exeFull -Destination (Join-Path $first 'ICFTD.EXE')
Fill-Disks $first $haveAnt
$log = Invoke-Dos $first $withExit (Join-Path $first 'EX.LOG')
if ($log -notmatch 'assets: 78 file\(s\) from 3 disk image\(s\)') { Fail 'the first start did not report 78 extracted files' }
if ($haveAnt -and $log -notmatch "assets: 82 file\(s\) from the add-on's 3 disk image\(s\)") {
    Fail 'the first start did not report the add-on extraction'
}
if ($log -notmatch 'icftd: exit code 0') { Fail 'the first start did not exit 0' }
if ($log -match 'Please put the three original') { Fail 'the first start asked for disks it had' }
$theirs = TreeHashes $reference
$mine = TreeHashes $first
TreeEqual $mine $theirs 'the extracted tree'
if ((Test-Path (Join-Path $first 'DSHELL.IMG')) -and
    (Get-Item (Join-Path $first 'DSHELL.IMG')).Length -eq 185752) {
    Ok 'the extracted tree is byte-identical to the tree tools\dos-pack.ps1 -Data stages (8.3 paths, NAMES.TXT, DSHELL.IMG)'
} else { Fail 'no 185 752-byte DSHELL.IMG in the data folder' }
if ($haveAnt) {
    if ((Test-Path (Join-Path $first 'ANTSHEL.IMG')) -and
        (Get-Item (Join-Path $first 'ANTSHEL.IMG')).Length -eq 196712) {
        Ok 'the add-on tree is byte-identical too (ANT1..3, ANTSHEL.IMG, one NAMES.TXT for both)'
    } else { Fail 'no 196 712-byte ANTSHEL.IMG in the data folder' }
}

# --- the add-on's disks arrive after the game's ----------------------------------------------
# A player who owns the game first and the add-on afterwards: the next start adds the add-on's
# tree and leaves the game's alone, NAMES.TXT included - the map is one file for both trees and is
# rewritten from what is already there (assets.c, read_names).
if ($haveAnt) {
    $later = Join-Path $Work 'later'
    New-Item -ItemType Directory -Force -Path $later | Out-Null
    Copy-Item -LiteralPath $exeFull -Destination (Join-Path $later 'ICFTD.EXE')
    Fill-Disks $later $false
    $null = Invoke-Dos $later $withExit (Join-Path $later 'EX.LOG')
    for ($i = 0; $i -lt 3; $i++) {
        Copy-Item -LiteralPath $antDisks[$i].FullName -Destination (Join-Path $later ("DISKS\A$($i + 1).ADF"))
    }
    $log = Invoke-Dos $later $withExit (Join-Path $later 'EX.LOG')
    if ($log -notmatch "assets: 82 file\(s\) from the add-on's 3 disk image\(s\)") {
        Fail 'a later start did not extract the add-on'
    } elseif ($log -match 'extracting the game data') {
        Fail 'a later start extracted the game again'
    } else {
        TreeEqual (TreeHashes $later) (TreeHashes $reference) 'the tree after the add-on arrived later'
        Ok 'add-on disks added later are extracted, and the game tree and its name map keep their entries'
    }
}

# --- one add-on image changes nothing --------------------------------------------------------
# The add-on is optional and never half-used: with one of its disks in `disks\` the folder must
# extract exactly what the game's own three images extract, and nothing of the add-on.
if ($haveAnt) {
    $plain = Join-Path $Work 'plain'
    New-Item -ItemType Directory -Force -Path $plain | Out-Null
    Copy-Item -LiteralPath $exeFull -Destination (Join-Path $plain 'ICFTD.EXE')
    Fill-Disks $plain $false
    $null = Invoke-Dos $plain $withExit (Join-Path $plain 'EX.LOG')

    $one = Join-Path $Work 'oneant'
    New-Item -ItemType Directory -Force -Path $one | Out-Null
    Copy-Item -LiteralPath $exeFull -Destination (Join-Path $one 'ICFTD.EXE')
    Fill-Disks $one $false
    Copy-Item -LiteralPath $antDisks[0].FullName -Destination (Join-Path $one 'DISKS\A1.ADF')
    $log = Invoke-Dos $one $withExit (Join-Path $one 'EX.LOG')
    if ($log -match 'add-on') { Fail 'one add-on image was extracted' }
    elseif ((Test-Path (Join-Path $one 'ANT1')) -or (Test-Path (Join-Path $one 'ANTSHEL.IMG'))) {
        Fail 'one add-on image wrote the add-on tree'
    } else {
        TreeEqual (TreeHashes $one) (TreeHashes $plain) 'the tree with one add-on image'
        Ok 'one add-on image extracts nothing of the add-on and changes no file'
    }
}

# --- a second start does nothing --------------------------------------------------------------
$before = TreeHashes $first
$log = Invoke-Dos $first $withExit (Join-Path $first 'EX.LOG')
$after = TreeHashes $first
if ($log -match 'assets: extracting') { Fail 'a second start extracted again' }
else { Ok 'a second start extracts nothing' }
if ($before.Count -ne $after.Count) { Fail 'a second start changed the tree' } else {
    $changed = 0
    foreach ($k in $before.Keys) { if (-not $after.ContainsKey($k) -or $after[$k] -ne $before[$k]) { $changed++ } }
    if ($changed -ne 0) { Fail ("a second start rewrote {0} file(s)" -f $changed) }
    else { Ok 'a second start leaves every file untouched' }
}

# --- no disks at all --------------------------------------------------------------------------
$none = Join-Path $Work 'nodisks'
New-Item -ItemType Directory -Force -Path $none | Out-Null
Copy-Item -LiteralPath $exeFull -Destination (Join-Path $none 'ICFTD.EXE')
$log = Invoke-Dos $none $withExit (Join-Path $none 'EX.LOG')
if ($log -notmatch "Please put the three original 'It Came from the Desert' disk images") {
    Fail 'an empty disks folder did not print the message'
} elseif ($log -notmatch 'icftd: exit code 1') { Fail 'an empty disks folder did not exit 1' }
elseif ((Test-Path (Join-Path $none 'DSHELL.IMG')) -or (Test-Path (Join-Path $none 'DISK1')) -or
        (Test-Path (Join-Path $none 'NAMES.TXT'))) {
    Fail 'an empty disks folder still wrote game data'
} else { Ok 'an empty disks folder prints the message, exits 1 and writes nothing' }

# --- the same image twice ---------------------------------------------------------------------
$dup = Join-Path $Work 'twice'
New-Item -ItemType Directory -Force -Path (Join-Path $dup 'DISKS') | Out-Null
Copy-Item -LiteralPath $exeFull -Destination (Join-Path $dup 'ICFTD.EXE')
Copy-Item -LiteralPath $disks[0].FullName -Destination (Join-Path $dup 'DISKS\D1.ADF')
Copy-Item -LiteralPath $disks[0].FullName -Destination (Join-Path $dup 'DISKS\D2.ADF')
Copy-Item -LiteralPath $disks[2].FullName -Destination (Join-Path $dup 'DISKS\D3.ADF')
$log = Invoke-Dos $dup $withExit (Join-Path $dup 'EX.LOG')
if ($log -notmatch "Please put the three original") { Fail 'an incomplete disk set was not refused' }
elseif ($log -match 'assets: extracting') { Fail 'an incomplete disk set started writing' }
elseif ((Test-Path (Join-Path $dup 'DSHELL.IMG')) -or (Test-Path (Join-Path $dup 'DISK1'))) {
    Fail 'an incomplete disk set wrote game data'
} else { Ok 'the same image twice is refused before anything is written' }

# --- the extracted tree boots the same machine as the reference tree -------------------------
$packed = Join-Path $Work 'packed'
Copy-Item -LiteralPath $reference -Destination $packed -Recurse -Force
$dumpCmds = @("ICFTD.EXE --frames $Frames --noaudio --dump $Frames C:\D.RAM")
$null = Invoke-Dos $packed $dumpCmds (Join-Path $packed 'NODUMP.LOG')
$null = Invoke-Dos $first $dumpCmds (Join-Path $first 'NODUMP.LOG')
$ramGame = Join-Path $packed 'D.RAM'
$ramMine = Join-Path $first 'D.RAM'
if (-not (Test-Path $ramGame)) { Fail 'the reference tree wrote no RAM dump' }
elseif (-not (Test-Path $ramMine)) { Fail 'the extracted tree wrote no RAM dump' }
elseif ((Get-FileHash $ramGame -Algorithm SHA256).Hash -ne (Get-FileHash $ramMine -Algorithm SHA256).Hash) {
    Fail ("the RAM dump of $Frames frames differs from the reference tree's")
} else {
    Ok ("the extracted tree's {0}-frame RAM dump is identical to the reference tree's" -f $Frames)
}

# --- first start and boot in one process -----------------------------------------------------
# What a player does: an empty release folder, the images in `disks\`, and the executable started.
# The extraction runs before the machine boots, so its own run has to reach the same machine.
$boot = Join-Path $Work 'boot'
New-Item -ItemType Directory -Force -Path $boot | Out-Null
Copy-Item -LiteralPath $exeFull -Destination (Join-Path $boot 'ICFTD.EXE')
Fill-Disks $boot $haveAnt
$null = Invoke-Dos $boot $dumpCmds (Join-Path $boot 'NODUMP.LOG')
$ramBoot = Join-Path $boot 'D.RAM'
if (-not (Test-Path $ramBoot)) { Fail 'the first start did not reach the machine' }
elseif ((Get-FileHash $ramGame -Algorithm SHA256).Hash -ne (Get-FileHash $ramBoot -Algorithm SHA256).Hash) {
    Fail ("the first start's {0}-frame RAM dump differs from the reference tree's" -f $Frames)
} else {
    Ok 'a first start extracts and then boots the same machine'
}

if ($fail -ne 0) { Write-Output ("dos-extract: {0} check(s) failed" -f $fail); exit 1 }
Write-Output 'dos-extract: the first start writes the release tree and boots the same machine'
exit 0
