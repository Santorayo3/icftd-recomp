# The gun (giant-ant fight) and the fire extinguisher (fire game), moved with the pointer.
#
# Both scenes are the original's and both read the stick the same way: FUN_00011BF0 (called at the
# top of every update) decodes JOY0DAT into DAT_00024A80/0x24A82 and /FIRE into DAT_00024A84, and
# the scene keeps its aim in DAT_00029AE0/0x29AE2 - FUN_000084E4/FUN_000086A0 in the fight,
# FUN_0000B97C/FUN_0000BADE in the fire game. The port lets the pointer write that aim as well, so
# the claim is machine state, in the words the engine itself reads:
#
#   1. the aim IS the pointer: DAT_00029AE0/0x29AE2 = pointer + 0x1B/0x3A in the fight (the pair is
#      the pistol's position and the shot is tested 0x1B left and 0x3A up of it - the point the
#      port's crosshair is drawn at), and = pointer in the fire game (the extinguisher sprite is
#      drawn at the aim, which is where the spray starts);
#   2. the point the scene acts on is the pointer: the shot FUN_000086A0 stores in
#      DAT_00029AF2/0x29AFC, and the spray FUN_0000BADE stores there, are the pointer's position;
#   3. the keyboard still has it: with no pointer movement the input script's stick moves the aim,
#      through the scene's own axes;
#   4. a measurement run is not disturbed: a --mouse run whose pointer was put down before the scene
#      produces the same frame records as a run with no seam at all, and a pointer run differs from
#      it only from the frame the pointer moved in.
#
# Both scenes are reached the way docs\port-features.md lists them (the room state poked in plus the
# world loop's clock VBI for the fight, the injection of FUN_0000BE34 for the fire game). The data
# they load is game-derived, so the check is a SKIP without the extracted disks.
#
#   powershell -ExecutionPolicy Bypass -File tools\aim-check.ps1
param(
    [string]$Exe = 'bin\win32\icftd-recomp.exe',
    [string]$DataDir = 'export',
    [string]$Image = 'export\code\dshell4k\dshell.img',
    [string]$Work = 'out\aim-check'
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
Set-Location $root

if (-not (Test-Path $Exe))   { Write-Output "aim: SKIP (no $Exe - build with tools\build-host.ps1)"; exit 0 }
if (-not (Test-Path $Image)) { Write-Output "aim: SKIP (no $Image - run tools\extract.ps1)"; exit 0 }

New-Item -ItemType Directory -Force -Path $Work | Out-Null
Get-ChildItem $Work -Recurse -File -ErrorAction SilentlyContinue | Remove-Item -Force

$fail = 0
function Fail([string]$t) { Write-Output "aim: FAIL - $t"; $script:fail++ }
function Ok([string]$t)   { Write-Output "aim: $t" }

# The image is loaded at 0x4000: DAT_00029ae0 is RAM + 0x4000 + 0x29ae0 (docs\next-session.md).
$BASE = 0x4000
# The casts matter: PowerShell shifts a [byte] inside its own type, so $b[$a] -shl 8 is 0 for every
# value >= 0x100 and a word would read as its low byte only.
function U16([byte[]]$b, [int]$a) { return ([int]$b[$a] -shl 8) -bor [int]$b[$a + 1] }
function S16([byte[]]$b, [int]$a) { $v = U16 $b $a; if ($v -ge 0x8000) { $v -= 0x10000 }; return $v }
function Ram([string]$dir, [int]$frame) { [System.IO.File]::ReadAllBytes((Join-Path $dir "s.$frame.ram")) }
function Aim([byte[]]$b)   { return @([int](U16 $b ($BASE + 0x29AE0)), [int](U16 $b ($BASE + 0x29AE2))) }
function Acted([byte[]]$b) { return @([int](S16 $b ($BASE + 0x29AF2)), [int](S16 $b ($BASE + 0x29AFC))) }
function Axis([byte[]]$b)  { return @([int](S16 $b ($BASE + 0x24A80)), [int](S16 $b ($BASE + 0x24A82))) }

# How many frame records differ between two --state dumps, and the first frame that differs. A record
# is frame, insns, D0-D7, A0-A7, SR, PC, the RAM hash, then the custom chips (state.c); the hash is
# left out, because a run whose RAM differs only in dead stack bytes is the known artifact and not a
# divergence of the measurement.
function CompareStates([string]$fileA, [string]$fileB)
{
    # Not $a/$b: PowerShell names are case-insensitive, so $A would be the [string] parameter and
    # assigning the bytes to it would turn them into "73 67 83 84 ..." instead of a byte[].
    $A = [System.IO.File]::ReadAllBytes($fileA)
    $B = [System.IO.File]::ReadAllBytes($fileB)
    $rec = [int][BitConverter]::ToUInt32($A, 8)
    $n = [Math]::Min([int][BitConverter]::ToUInt32($A, 12), [int][BitConverter]::ToUInt32($B, 12))
    $enc = [System.Text.Encoding]::GetEncoding(28591)     # byte for byte, one char per byte
    $differing = 0
    $first = -1
    for ($r = 0; $r -lt $n; $r++) {
        $o = 16 + $r * $rec
        $sa = $enc.GetString($A, $o, 80) + $enc.GetString($A, $o + 88, $rec - 88)
        $sb = $enc.GetString($B, $o, 80) + $enc.GetString($B, $o + 88, $rec - 88)
        if ($sa -ne $sb) {
            $differing++
            if ($first -lt 0) { $first = [int][BitConverter]::ToUInt32($A, $o) }
        }
    }
    return @{ records = $n; differing = $differing; first = $first }
}

function Run([string]$name, [string[]]$extra, [int[]]$ram)
{
    $dir = Join-Path $Work $name
    New-Item -ItemType Directory -Force -Path $dir | Out-Null
    $argv = @($Image) + $script:preset + @('--data', $DataDir, '--state', (Join-Path $dir 's'))
    if ($ram.Count -ne 0) { $argv += @('--ram', ($ram -join ',')) }
    $argv += $extra
    $argv += [string]$script:budget
    $out = & $Exe @argv 2>&1 | Out-String
    Set-Content -Path (Join-Path $dir 'run.txt') -Value $out
    if ($out -match 'accesses outside the RAM block' -or $out -match 'stack pointer went bad') {
        Fail "$name left the machine (see $(Join-Path $dir 'run.txt'))"
    }
    return $dir
}

# One scenario. `preset` reaches the scene and `budget` is the run's instruction limit; the four runs
# are the keyboard's, a plain measurement, a measurement armed with a pointer put down before the
# scene, and the pointer's own. `move` is the frame the pointer first moves during the scene.
function Scenario([hashtable]$s)
{
    $script:preset = $s.preset
    $script:budget = $s.budget
    $dir = Join-Path $Work $s.name
    New-Item -ItemType Directory -Force -Path $dir | Out-Null

    $s.stick | Set-Content -Encoding ascii (Join-Path $dir 'stick.txt')
    $s.ptr   | Set-Content -Encoding ascii (Join-Path $dir 'ptr.txt')
    '1 300 60' | Set-Content -Encoding ascii (Join-Path $dir 'stale.txt')
    $aimInput = @()
    if ($s.aimInput.Count -ne 0) {
        $s.aimInput | Set-Content -Encoding ascii (Join-Path $dir 'aim.txt')
        $aimInput = @('--input', (Join-Path $dir 'aim.txt'))
    }

    $keyRun = Run "$($s.name)\keys"    @('--input', (Join-Path $dir 'stick.txt')) $s.ramKeys
    $plain  = Run "$($s.name)\plain"   $aimInput $s.ramAim
    $stale  = Run "$($s.name)\stale"   ($aimInput + @('--mouse', (Join-Path $dir 'stale.txt'))) $s.ramAim
    $active = Run "$($s.name)\pointer" ($aimInput + @('--mouse', (Join-Path $dir 'ptr.txt')))   $s.ramAim

    # 1. the pointer's position is the aim, at every position the script puts it at.
    for ($i = 0; $i -lt $s.aims.Count; $i++) {
        $a = $s.aims[$i]
        $b = Ram $active $a.frame
        $aim = Aim $b
        if ($aim[0] -ne $a.x -or $aim[1] -ne $a.y) {
            Fail ("{0}: the aim at frame {1} is {2},{3}; the pointer puts it at {4},{5}" -f $s.scene, $a.frame, $aim[0], $aim[1], $a.x, $a.y)
        } else {
            Ok ("{0}: the aim at frame {1} is {2},{3}" -f $s.scene, $a.frame, $aim[0], $aim[1])
        }
        $axis = Axis $b
        if ($axis[0] -ne 0 -or $axis[1] -ne 0) {
            Fail ("{0}: the stick's axes are {1},{2} at frame {3} - the engine's ramp is still adding to the aim" -f $s.scene, $axis[0], $axis[1], $a.frame)
        }
    }

    # 2. what the scene did is the pointer's point: the shot / spray the engine stored.
    $acted = Acted (Ram $active $s.acted.frame)
    if ($acted[0] -ne $s.acted.x -or $acted[1] -ne $s.acted.y) {
        Fail ("{0}: the engine's {1} point is {2},{3}, not the pointer's {4},{5}" -f $s.scene, $s.acted.what, $acted[0], $acted[1], $s.acted.x, $s.acted.y)
    } else {
        Ok ("{0}: the {1} the engine stores is {2},{3} - the aim the pointer set" -f $s.scene, $s.acted.what, $acted[0], $acted[1])
    }

    # 3. the keyboard still moves it: the stick's own axes, and an aim the engine moved off its init.
    $k = Ram $keyRun $s.keysFrame
    $axis = Axis $k
    $aim = Aim $k
    if ($axis[0] -eq 0 -and $axis[1] -eq 0) {
        Fail ("{0}: the input script's stick did not reach the scene at frame {1}" -f $s.scene, $s.keysFrame)
    } elseif ($aim[0] -eq $s.initial[0] -and $aim[1] -eq $s.initial[1]) {
        Fail ("{0}: the aim stayed at the scene's own {1},{2} while the stick was held" -f $s.scene, $s.initial[0], $s.initial[1])
    } else {
        Ok ("{0}: the keyboard still aims - the stick moved it to {1},{2} by frame {3}" -f $s.scene, $aim[0], $aim[1], $s.keysFrame)
    }

    # 4. a measurement run does not change, and the pointer changes nothing before it moves.
    $r = CompareStates (Join-Path $plain 's.state') (Join-Path $stale 's.state')
    if ($r.differing -ne 0) {
        Fail ("{0}: a stale pointer changed the run - {1} of {2} frame records differ, first at {3}" -f $s.scene, $r.differing, $r.records, $r.first)
    } else {
        Ok ("{0}: a pointer put down before the scene leaves all {1} frame records unchanged" -f $s.scene, $r.records)
    }
    $r = CompareStates (Join-Path $plain 's.state') (Join-Path $active 's.state')
    if ($r.differing -eq 0) {
        Fail ("{0}: the pointer run is identical to the measurement - the seam did nothing" -f $s.scene)
    } elseif ($r.first -ge 0 -and $r.first -lt $s.move) {
        Fail ("{0}: the pointer run differs from the measurement at frame {1}, before the pointer moved ({2})" -f $s.scene, $r.first, $s.move)
    } else {
        Ok ("{0}: the pointer run first differs at frame {1}, the pointer's first move ({2})" -f $s.scene, $r.first, $s.move)
    }
}

# --- the giant-ant fight ------------------------------------------------------------------------
# The documented preset: the room's location/room/picture name poked in, then FUN_0000551C (the
# world loop's clock VBI, whose FUN_0000A500 is the only writer of the fire edge DAT_00026898)
# called with the fight as its return address. The fight is up from ~frame 1700, its aim starts at
# 0xA0,0x78, and the shot is tested 0x1B left and 0x3A up of the aim - the crosshair's point. The
# trigger is a scripted /FIRE (the pointer script carries no button), so the shot point is the aim
# the pointer set and nothing else.
Scenario @{
    name    = 'fight'
    scene   = 'giant-ant fight'
    preset  = @('--poke', '999:0x2CA38=0x11,0x2CB10=0xC000000,0x2CB3E=0x21423132,0x2CB42=0',
                '--call', '0x951C:1000:0x200:0xCC5C')
    budget  = 14000000
    move    = 2000
    initial = @(0xA0, 0x78)
    stick   = @('2050 0 0x0003', '2100 0 0x0000')          # the stick right, as the crosshair check
    aimInput = @('2120 1 0x0000', '2140 0 0x0000')          # one trigger pull, no stick
    ptr     = @('2000 150 80', '2100 200 120')
    keysFrame = 2095
    ramKeys = @(2095)
    ramAim  = @(2095, 2140)
    aims    = @(@{ frame = 2095; x = 177; y = 138 },     # pointer 150,80 + 0x1b/0x3a
                @{ frame = 2140; x = 227; y = 178 })     # pointer 200,120 + 0x1b/0x3a
    acted   = @{ frame = 2140; what = 'shot'; x = 200; y = 120 }
}

# --- the fire game ------------------------------------------------------------------------------
# FUN_0000BE34 loads PEOPLE/BACKS/FIRE and runs FUN_0000B528 as the scene's script; the extinguisher
# (FUN_0000B97C) starts once the sprites are loaded, ~frame 1900 of this preset. The aim starts at
# 0xA0,0xB4, it is where the extinguisher sprite is drawn, and it is the point the spray starts
# from. The pointer script holds the button (a scripted click is /FIRE, which is DAT_00024A84
# here), so both sprays are the pointer's own.
#
# The hand is the aim, and FUN_0000B97C accelerates it only inside x 0x28..0x12c, y 0xa5..0xf0
# (damped outside) - the rectangle a held stick comes to rest in. The pointer's screen spans that
# rectangle, so the two runs below assert both ends of it: the pointer's corners are the stick's
# stops (40,165) and (300,240), which is why the mouse can no longer float the hand above the room
# and can reach the low flames the keyboard reaches.
Scenario @{
    name    = 'fire'
    scene   = 'fire game'
    preset  = @('--call', '0xFE34:1000')
    # 10 M and not 9: the pointer run sprays at frame 2080 and extinguishes flames, so the scene
    # does more per frame than the keyboard's run and would not reach the last frame read below
    # (2180) inside 9 M instructions.
    budget  = 10000000
    move    = 1960
    initial = @(0xA0, 0xB4)
    stick   = @('1960 0 0x0003', '2100 0 0x0000')
    aimInput = @()
    ptr     = @('1960 100 50 1', '2000 100 50 0', '2040 200 100 1', '2100 200 100 0',
                '2120 0 0 0', '2160 319 199 0')
    keysFrame = 1980
    ramKeys = @(1980)
    ramAim  = @(1980, 2080, 2140, 2180)
    aims    = @(@{ frame = 1980; x = 121; y = 183 },     # pointer 100,50
                @{ frame = 2080; x = 203; y = 202 },     # pointer 200,100
                @{ frame = 2140; x = 40;  y = 165 },     # pointer 0,0: the stick's own stops
                @{ frame = 2180; x = 300; y = 240 })     # pointer 319,199
    acted   = @{ frame = 2080; what = 'spray'; x = 203; y = 202 }
}

if ($fail -ne 0) { exit 1 }
Write-Output 'aim: PASS'
exit 0
