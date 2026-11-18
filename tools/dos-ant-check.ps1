# The add-on "Antheads" under MS-DOS (docs\antheads.md, Phase 8), measured on machine state.
#
# The DOS front end links both engine builds and boots one at a time, exactly as the Windows one
# does. What this check claims:
#
#   * with the add-on's tree in the data folder the title's menu is the five-button one
#     (`Play Antheads 230,103`); without it, the shipped four (`title_button.c`);
#   * `--program ant` boots `ANTSHEL.IMG`, takes its own files from `ANT1..3` and runs the add-on's
#     intro (its `voice2`/`met`/`exp`), with the program's own name in the boot line;
#   * the add-on's machine state is the Windows build's: the 2 MiB RAM image at frame 300 is
#     byte-identical to `bin\win32\icftd-recomp.exe --program ant`'s at the same frame, which is
#     what "runs under DOSBox with the same machine state" means (RULE 0: machine state, not a
#     picture);
#   * the title's fifth button boots it from a played run (`--titlekey 15` is the same path through
#     the menu);
#   * the shared save slots work the same way: a slot holding the add-on's `ICFTD2` (13 014 bytes)
#     boots the add-on and loads it there, a slot holding the 1989 game's `ICFTD` (12 444) loads
#     into the 1989 program without a restart - the two never cross-load;
#   * a player who buys the add-on after the game: a data folder holding only the game's tree and
#     the six floppy images in `DISKS\` extracts the add-on's tree on the next start, without
#     `--extract`, and the five-button menu is there afterwards;
#   * `--program ant` without the add-on's data says what is missing and exits 1.
#
# The floppy images are game data and not in git, so the steps that need them SKIP without them.
#
#   powershell -ExecutionPolicy Bypass -File tools\dos-ant-check.ps1 [-Frames <n>]
param(
    [string]$DosBox = 'H:\Spiele\DosBox\DOSBox.exe',
    [string]$Exe = 'bin\dos\ICFTD.EXE',
    [string]$Win32Exe = 'bin\win32\icftd-recomp.exe',
    [string]$Work = 'out\dos-ant-check',
    [int]$TimeoutSec = 400,
    [int]$Frames = 300
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
Set-Location $root

$fail = 0
function Fail([string]$text) { Write-Output "dos-ant: FAIL - $text"; $script:fail++ }
function Ok([string]$text) { Write-Output "dos-ant: $text" }

if (-not (Test-Path $Exe)) { Write-Output "dos-ant: SKIP (no $Exe - build with tools\build-dos.ps1)"; exit 0 }
if (-not (Test-Path $DosBox)) { Write-Output "dos-ant: SKIP (no DOSBox at $DosBox)"; exit 0 }
if (-not (Test-Path 'export\ant\code\dshell4k\dshell.img')) {
    Write-Output 'dos-ant: SKIP (no add-on tree in export\ - run tools\extract.ps1 with the add-on disks)'
    exit 0
}
$exeFull = (Resolve-Path $Exe).Path

if (Test-Path $Work) { Remove-Item $Work -Recurse -Force }
New-Item -ItemType Directory -Force -Path $Work | Out-Null

# The tree tools\dos-pack.ps1 -Data stages: DISK1..3, ANT1..3, one NAMES.TXT, both images.
$both = Join-Path $Work 'both'
& (Join-Path $PSScriptRoot 'dos-pack.ps1') -Data $both | Out-Null
if (-not (Test-Path (Join-Path $both 'ANTSHEL.IMG'))) {
    Write-Output 'dos-ant: SKIP (tools\dos-pack.ps1 -Data staged no add-on tree)'
    exit 0
}
Copy-Item -LiteralPath $exeFull -Destination (Join-Path $both 'ICFTD.EXE')

# The same tree without the add-on: the release a player without those disks gets.
$plain = Join-Path $Work 'plain'
Copy-Item -LiteralPath $both -Destination $plain -Recurse -Force
foreach ($p in 'ANT1', 'ANT2', 'ANT3', 'ANTSHEL.IMG') { Remove-Item (Join-Path $plain $p) -Recurse -Force }

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

# --- the menu: five buttons with the add-on, the shipped four without ------------------------
# --titlekey 14 is the menu itself, for a scripted pointer: it draws the layout and its own line
# says what is where (title.c), so the claim is the log the build prints, not a picture.
$log = Invoke-Dos $both @('ICFTD.EXE --titlekey 14 --frames 220 --noaudio > FIVE.LOG') (Join-Path $both 'FIVE.LOG')
$five = 'title: menu: 5 button\(s\); New Game 230,84 73x14; Play Antheads 230,103 73x14; ' +
        'Load Game 230,122 73x14; Settings 230,141 73x14; Quit Game 230,164 73x14'
if ($log -match $five) { Ok 'the add-on tree gives the five-button menu (Play Antheads at 230,103)' }
else {
    Fail ("the five-button menu is not there: {0}" -f
          ([regex]::Match($log, 'title: menu: [^\r\n]*').Value))
}

$log = Invoke-Dos $plain @('ICFTD.EXE --titlekey 14 --frames 220 --noaudio > FOUR.LOG') (Join-Path $plain 'FOUR.LOG')
$four = 'title: menu: 4 button\(s\); New Game 230,85 73x14; Load Game 230,106 73x14; ' +
        'Settings 230,127 73x14; Quit Game 230,164 73x14'
if ($log -match $four) { Ok 'without the add-on the menu is the shipped four buttons' }
else {
    Fail ("the four-button menu is not the shipped one: {0}" -f
          ([regex]::Match($log, 'title: menu: [^\r\n]*').Value))
}

# --- --program ant: the add-on boots from its own tree --------------------------------------
# The RAM image is written at a vblank boundary, so the check below compares machine state and not
# the moment the run happened to stop.
$log = Invoke-Dos $both @("ICFTD.EXE --program ant --frames $Frames --noaudio --dump $Frames C:\ANT.RAM > ANT.LOG") (Join-Path $both 'ANT.LOG')
$bad = @()
if ($log -notmatch '\(base 16384, Antheads\)') { $bad += 'the boot line does not name Antheads' }
if ($log -notmatch 'open "voice2" -> C:\\ant1\\') { $bad += 'voice2 did not come from ANT1' }
if ($log -notmatch 'open "DES4:SCORES" -> C:\\ant1\\') { $bad += 'the score did not come from ANT1' }
if ($log -notmatch 'open "Desert1:OPEN" -> C:\\ant1\\') { $bad += 'the story did not come from ANT1' }
if ($log -notmatch '0 kind\(s\) answered with 0') { $bad += 'a library call was answered with 0' }
if ($log -notmatch 'RAM dump at frame') { $bad += 'no RAM dump was written' }
if ($bad.Count -eq 0) { Ok '--program ant boots ANTSHEL.IMG and runs the add-on from ANT1..3' }
else { Fail ($bad -join '; ') }

# --- the same machine state as the Windows build --------------------------------------------
$dosRam = Join-Path $both 'ANT.RAM'
if (-not (Test-Path $dosRam)) { Fail 'the DOS run wrote no RAM image' }
elseif (-not (Test-Path $Win32Exe)) {
    Write-Output "dos-ant: SKIP (no $Win32Exe - the RAM comparison needs the Windows build)"
} else {
    # The Windows build dumps its RAM at the same frame boundary (state.c). The instruction count
    # only has to be large enough to pass the frame; the blob is written where the frame is.
    $w = Join-Path $Work 'win32'
    New-Item -ItemType Directory -Force -Path $w | Out-Null
    $insns = [long]$Frames * 7000
    $run = & (Resolve-Path $Win32Exe).Path --program ant --state (Join-Path $w 'w') --ram $Frames $insns 2>&1 | Out-String
    $winRam = Join-Path $w ("w.{0}.ram" -f $Frames)
    if (-not (Test-Path $winRam)) {
        Fail ("the Windows build wrote no RAM image at frame {0}: {1}" -f $Frames,
              ([regex]::Match($run, 'recomp: stopped[^\r\n]*').Value))
    } else {
        $ha = (Get-FileHash -LiteralPath $winRam -Algorithm SHA256).Hash
        $hb = (Get-FileHash -LiteralPath $dosRam -Algorithm SHA256).Hash
        if ($ha -eq $hb) {
            Ok ("the add-on's frame-{0} RAM image is byte-identical to the Windows build's ({1} byte(s))" -f
                $Frames, (Get-Item -LiteralPath $dosRam).Length)
        } else {
            # Say where they part, so the difference can be bisected instead of guessed.
            $a = [IO.File]::ReadAllBytes($winRam)
            $b = [IO.File]::ReadAllBytes($dosRam)
            $n = [Math]::Min($a.Length, $b.Length)
            $first = -1
            $diffs = 0
            for ($i = 0; $i -lt $n; $i++) {
                if ($a[$i] -ne $b[$i]) { if ($first -lt 0) { $first = $i }; $diffs++ }
            }
            Fail ("{0} byte(s) of the frame-{1} RAM differ from the Windows build's, first at 0x{2:X}" -f
                  $diffs, $Frames, $first)
        }
    }
}

# --- the title's fifth button boots the add-on ----------------------------------------------
$log = Invoke-Dos $both @('ICFTD.EXE --titlekey 15 --frames 400 --noaudio > PLAY.LOG') (Join-Path $both 'PLAY.LOG')
$bad = @()
if ($log -notmatch 'title: playing Antheads') { $bad += 'the button did not take' }
if ($log -notmatch 'icftd: restarting as Antheads') { $bad += 'the front end did not boot the add-on' }
if ($log -notmatch 'open "voice2" -> C:\\ant1\\') { $bad += "the add-on's intro did not run" }
if ($log -match 'icftd: cannot load') { $bad += 'the add-on image could not be loaded' }
if ($bad.Count -eq 0) { Ok 'the fifth button boots the add-on and plays its intro' }
else { Fail ($bad -join '; ') }

# --- the shared save slots: each game's file loads in the build that wrote it ----------------
# The slots belong to the port, not to a build (Phase 7): the DOS front end registers both games'
# save files with the same gate as the fifth button, so the list can offer either. A save the
# add-on wrote must boot the add-on and be read back there, and a 1989 save must not.
$saves = Join-Path $Work 'saves'
Copy-Item -LiteralPath $both -Destination $saves -Recurse -Force
New-Item -ItemType Directory -Force -Path (Join-Path $saves 'SAVES\SLOT1') | Out-Null
New-Item -ItemType Directory -Force -Path (Join-Path $saves 'SAVES\SLOT2') | Out-Null
[IO.File]::WriteAllBytes((Join-Path $saves 'SAVES\SLOT1\ICFTD2'), (New-Object byte[] 13014))
[IO.File]::WriteAllBytes((Join-Path $saves 'SAVES\SLOT2\ICFTD'), (New-Object byte[] 12444))

$log = Invoke-Dos $saves @('ICFTD.EXE --slot 1 --titlekey 11 --frames 150 --noaudio > SAVEANT.LOG') (Join-Path $saves 'SAVEANT.LOG')
$bad = @()
if ($log -notmatch 'title: slot 1 is the add-on''s save - booting it to load') { $bad += 'the add-on slot was not recognised' }
if ($log -notmatch 'icftd: restarting as Antheads') { $bad += 'the add-on was not booted for the load' }
if ($log -notmatch 'open "ICFTD2" -> C:\\saves\\slot1\\ICFTD2 \(13014 bytes\)') { $bad += 'the add-on did not read ICFTD2 back' }
if ($bad.Count -eq 0) { Ok "the add-on's save boots the add-on and loads ICFTD2 there" }
else { Fail ($bad -join '; ') }

$log = Invoke-Dos $saves @('ICFTD.EXE --slot 2 --titlekey 11 --frames 150 --noaudio > SAVE89.LOG') (Join-Path $saves 'SAVE89.LOG')
$bad = @()
if ($log -notmatch 'title: loading save slot 2') { $bad += 'the 1989 slot was not taken' }
if ($log -match 'restarting as Antheads') { $bad += 'a 1989 save was booted as the add-on' }
if ($log -notmatch 'open "ICFTD" -> C:\\saves\\slot2\\ICFTD \(12444 bytes\)') { $bad += 'the 1989 program did not read ICFTD back' }
if ($bad.Count -eq 0) { Ok 'a 1989 save in the same list loads into the 1989 program, no restart' }
else { Fail ($bad -join '; ') }

# --- the add-on's disks arrive after the game ----------------------------------------------
$all = @(Get-ChildItem disks -Filter *.adf -File -ErrorAction SilentlyContinue | Sort-Object Name)
if ($all.Count -lt 6) {
    Write-Output 'dos-ant: SKIP (the six floppy images are not in disks\)'
} else {
    $later = Join-Path $Work 'later'
    Copy-Item -LiteralPath $plain -Destination $later -Recurse -Force
    New-Item -ItemType Directory -Force -Path (Join-Path $later 'DISKS') | Out-Null
    $i = 0
    foreach ($f in $all) { $i++; Copy-Item -LiteralPath $f.FullName -Destination (Join-Path $later ("DISKS\img{0}.adf" -f $i)) }
    $log = Invoke-Dos $later @('ICFTD.EXE --titlekey 14 --frames 240 --noaudio > LATER.LOG') (Join-Path $later 'LATER.LOG')
    $bad = @()
    if ($log -notmatch "assets: 82 file\(s\) from the add-on's 3 disk image\(s\)") {
        $bad += 'the add-on was not extracted on a normal start'
    }
    if ($log -match 'extracting the game data') { $bad += 'the game tree was extracted again' }
    if ($log -notmatch $five) { $bad += 'the five-button menu did not appear afterwards' }
    if (-not (Test-Path (Join-Path $later 'ANTSHEL.IMG'))) { $bad += 'no ANTSHEL.IMG was written' }
    if ($bad.Count -eq 0) { Ok 'add-on disks put in DISKS\ later are extracted on the next start; the menu gains the button' }
    else { Fail ($bad -join '; ') }
}

# --- --program ant without the add-on's data ------------------------------------------------
$log = Invoke-Dos $plain @('ICFTD.EXE --program ant --frames 50 --noaudio > NOANT.LOG',
                           'if errorlevel 1 echo icftd: exit code 1 >> NOANT.LOG',
                           'if not errorlevel 1 echo icftd: exit code 0 >> NOANT.LOG') (Join-Path $plain 'NOANT.LOG')
if ($log -notmatch "the add-on's data is not in the data folder") {
    Fail '--program ant without the add-on data did not say what is missing'
} elseif ($log -notmatch 'icftd: exit code 1') {
    Fail '--program ant without the add-on data did not exit 1'
} else { Ok '--program ant without the add-on data says so and exits 1' }

if ($fail -ne 0) { Write-Output ("dos-ant: {0} check(s) failed" -f $fail); exit 1 }
Write-Output 'dos-ant: the add-on boots under MS-DOS with the Windows build''s machine state'
exit 0
