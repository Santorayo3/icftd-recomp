# The translation files, in three steps.
#
# Every translation lives in one file per language, and it holds *all* of it - the interface, the
# menus, the map's place names, the boot's messages and the port's own screens as well as the
# game's story. The game's text is looked up by a **key**, not by the English text itself: every
# string has a 64-bit FNV-1a id (sixteen hex digits) that `lang.c` computes the same way. That is
# what lets a finished translation be shipped without a copy of the original's script - which is the
# only reason the two are separate files:
#
#   lang\en.csv         <id>;<English>              the source text   (not committed: game script)
#   lang\de.work.csv    <id>;<English>;<German>     the translator's  (not committed: has English)
#   lang\de.csv         <id>;<German>               the translation   (committed)
#
# The ids are stable for as long as the English text is, so a translation file stays valid when the
# source is regenerated.
#
#   powershell -ExecutionPolicy Bypass -File tools\lang-export.ps1              # -> lang\en.csv
#   powershell -ExecutionPolicy Bypass -File tools\lang-export.ps1 -Work        # -> lang\de.work.csv
#   powershell -ExecutionPolicy Bypass -File tools\lang-export.ps1 -Pack        # -> lang\de.csv
#
# Another language is the same three steps with -Lang fr: its work file is `lang\fr.work.csv`, its
# translation `lang\fr.csv`, and `icftd.ini` [GAME] language=fr draws it.
#
# `-Pack` is the step whose result belongs in the repository: it keeps only the German side, so the
# file carries no English text at all. `-Work` rebuilds the translator's three-column file from
# `en.csv` and whatever `de.csv` already has, so nothing already translated is ever lost - a row
# the source no longer knows is kept as it is.
#
# The source text comes from four places:
#
#   * the interface's own vocabulary, which `--langkeys` prints: the lines the engine draws from its
#     program (the room menus, the map's place names, the boot's messages, the save/load screen)
#     and the ones the port's screens draw (the title, the settings, the save slots, the OSD).
#     That is also where the *formats* of the messages the program builds itself live ("Sleep for
#     %d hours.", "June %d, 1951 - %02d:%02d %s"), which the engine fills in at run time;
#   * a scripted run of the game with `--langdump`, which records every string the engine hands to
#     its text routines - the load screen, the intro's narration, the room menus, the travel lines.
#     Those live in memory only (the intro's bundle is compressed), so nothing else finds them. The
#     run stays English while it dumps, whatever [GAME] language says;
#   * `desert.dat` (the rooms' script bank): its records are `<00> <length> <text>` (and `<00 1A>
#     <u32> <u16 length> <text>` for the long narration pages), and the engine hands the text after
#     the `^`-markers straight to the layout routines, so that is the record;
#   * `PHONE.DAT`, whose lines are `<speaker>:<text>` - the speaker picks a portrait picture and is
#     never drawn, the text after the colon is the record.
#
# `-Ant` is the 1990 add-on's own half: it reads `Desert2.dat`/`phone2.dat` and runs the add-on's
# build for the strings only the program knows (its intro), writing `en_ant.csv`, `de_ant.work.csv`
# and `de_ant.csv` instead of the base files. Rows the base source already lists are left out - the
# game merges `<code>_ant.csv` over `<code>.csv`, so the shared lines stay in one file.
param(
    [string]$Exe = 'bin\win32\icftd-recomp.exe',
    [string]$DataDir = 'export',
    [string]$Image = 'export\code\dshell4k\dshell.img',
    [string]$Lang = 'de',
    [string]$Source = 'lang\en.csv',
    [string]$Scratch = 'out\lang-export',
    [int]$Insns = 60000000,
    [switch]$SkipRun,
    [switch]$Ant,
    [switch]$Work,
    [switch]$Pack
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
Set-Location $root

# -Ant writes the add-on's own half: its source is `en_ant.csv`, its translator's file
# `de_ant.work.csv`, its translation `de_ant.csv` (the game merges that into the catalog when the
# add-on runs), and the run that dumps the strings it only knows boots the add-on's image.
if ($Ant) {
    if (-not $PSBoundParameters.ContainsKey('Source')) { $Source = 'lang\en_ant.csv' }
    if (-not $PSBoundParameters.ContainsKey('Image')) {
        $Image = Join-Path $DataDir 'ant\code\dshell4k\dshell.img'
    }
}

# FNV-1a over the bytes of the English text - the id `lang.c` (lang_hash64) computes as well.
# In C# because PowerShell's own 64-bit arithmetic would lose bits.
if (-not ('LangId' -as [type])) {
    Add-Type -TypeDefinition @'
public static class LangId {
    public static ulong Hash(byte[] b) {
        ulong h = 14695981039346656037UL;
        foreach (byte c in b) { h ^= c; h *= 1099511628211UL; }
        return h;
    }
}
'@
}

function IdOf([string]$text) {
    return ('{0:X16}' -f [LangId]::Hash([System.Text.Encoding]::UTF8.GetBytes($text)))
}

# Sixteen hex digits name a text by its id; anything else is the English text itself (the older
# form, which the game still accepts and which -Pack migrates).
function IsId([string]$key) { return $key -match '^[0-9A-Fa-f]{16}$' }

# The fields of one CSV record, quotes removed ("" is a quote inside a quoted field).
function ParseCsv([string]$record) {
    $fields = New-Object System.Collections.ArrayList
    $sb = New-Object System.Text.StringBuilder
    $i = 0
    while ($i -le $record.Length) {
        $quoted = $false
        [void]$sb.Clear()
        if ($i -lt $record.Length -and $record[$i] -eq '"') { $quoted = $true; $i++ }
        while ($i -lt $record.Length) {
            $ch = $record[$i]
            if ($quoted) {
                if ($ch -eq '"') {
                    if ($i + 1 -lt $record.Length -and $record[$i + 1] -eq '"') { [void]$sb.Append('"'); $i += 2; continue }
                    $i++; $quoted = $false; continue
                }
                [void]$sb.Append($ch); $i++
            }
            elseif ($ch -eq ';') { break }
            else { [void]$sb.Append($ch); $i++ }
        }
        [void]$fields.Add($sb.ToString())
        if ($i -lt $record.Length -and $record[$i] -eq ';') { $i++ } else { break }
    }
    return $fields
}

# One CSV field: quoted (with its quotes doubled) only when it has to be - a spreadsheet reads and
# writes exactly this.
function CsvField([string]$text) {
    if ($text -match '[;"\r\n]') { return '"' + $text.Replace('"', '""') + '"' }
    return $text
}

# The English a record of the dump wrote, with the escapes it used (\t, \n, \\, \xHH).
function Unescape([string]$text) {
    $sb = New-Object System.Text.StringBuilder
    for ($i = 0; $i -lt $text.Length; $i++) {
        $ch = $text[$i]
        if ($ch -eq '\' -and $i + 1 -lt $text.Length) {
            $next = $text[$i + 1]
            if ($next -eq 'n') { [void]$sb.Append("`n"); $i++ }
            elseif ($next -eq 't') { [void]$sb.Append("`t"); $i++ }
            elseif ($next -eq '\') { [void]$sb.Append('\'); $i++ }
            elseif ($next -eq 'x' -and $i + 3 -lt $text.Length) {
                [void]$sb.Append([char][Convert]::ToInt32($text.Substring($i + 2, 2), 16)); $i += 3
            }
            else { [void]$sb.Append($ch) }
        }
        else { [void]$sb.Append($ch) }
    }
    return $sb.ToString()
}

# With its byte order mark, so a spreadsheet opens the file as UTF-8 and shows umlauts (the game
# strips it again, and the file still reads as UTF-8 everywhere else).
$utf8 = New-Object System.Text.UTF8Encoding($true)

$suffix = if ($Ant) { '_ant' } else { '' }
$title = if ($Ant) { 'It Came from the Desert II - Antheads' } else { 'It Came from the Desert' }
$antArg = if ($Ant) { ' -Ant' } else { '' }
$workFile = Join-Path $root ('lang\' + $Lang + $suffix + '.work.csv')
$outFile = Join-Path $root ('lang\' + $Lang + $suffix + '.csv')
$sourceFile = Join-Path $root $Source

# A record's key and its German, whatever shape the file has: two fields (<key>;<German>) or three
# (<id>;<English>;<German>, the translator's file).
function ReadRecords([string]$path) {
    $records = New-Object System.Collections.ArrayList
    if (-not (Test-Path $path)) { return $records }
    foreach ($line in [System.IO.File]::ReadAllLines($path, [System.Text.Encoding]::UTF8)) {
        if ($line.StartsWith('#')) { continue }
        $f = ParseCsv $line
        if ($f.Count -lt 2) { continue }
        if ($f.Count -ge 3) { [void]$records.Add(@{ Key = $f[0]; English = $f[1]; German = $f[2] }) }
        else { [void]$records.Add(@{ Key = $f[0]; English = ''; German = $f[1] }) }
    }
    return $records
}

function Show([string]$path) { return $path.Substring($root.Length).TrimStart('\') }

# --- -Work: the translator's three-column file, from en.csv and what is translated already -------
if ($Work) {
    if (-not (Test-Path $sourceFile)) {
        throw "no $Source - run tools\lang-export.ps1 first (it needs the game data)"
    }
    $done = @{}
    foreach ($r in (ReadRecords $outFile)) {
        $id = if (IsId $r.Key) { $r.Key.ToUpper() } else { IdOf $r.Key }
        if ($r.German.Length -gt 0) { $done[$id] = $r.German }
    }
    $sb = New-Object System.Text.StringBuilder
    [void]$sb.AppendLine('# Translation work file for ' + $title + ' - ' + $Lang + ', icftd.ini [GAME] language=' + $Lang)
    [void]$sb.AppendLine('# Three columns: the id, the game''s own text, your translation.')
    [void]$sb.AppendLine('# Translate column 3 only - columns 1 and 2 must stay as they are.')
    [void]$sb.AppendLine('# An empty column 3 keeps the game''s own English, which is what an unfinished')
    [void]$sb.AppendLine('# file looks like. Save as CSV with a semicolon separator, then run')
    [void]$sb.AppendLine('#   tools\lang-export.ps1' + $antArg + ' -Pack -Lang ' + $Lang)
    [void]$sb.AppendLine('# which writes the file the game reads (column 3, keyed by the id).')
    $known = @{}
    $rows = 0
    foreach ($r in (ReadRecords $sourceFile)) {
        # A two-column source record is <id>;<English>, which ReadRecords reports as the German
        # field - the name is the translator's file's, where that column is the translation.
        $id = if (IsId $r.Key) { $r.Key.ToUpper() } else { IdOf $r.German }
        $known[$id] = 1
        $german = if ($done.ContainsKey($id)) { $done[$id] } else { '' }
        [void]$sb.AppendLine($id + ';' + (CsvField $r.German) + ';' + (CsvField $german))
        $rows++
    }
    # A translated row the source does not know - its English text is no longer in the game's data,
    # or it names its text by the text itself - is kept as it is, so -Pack writes it back.
    foreach ($r in (ReadRecords $outFile)) {
        $id = if (IsId $r.Key) { $r.Key.ToUpper() } else { IdOf $r.Key }
        if ($known.ContainsKey($id) -or $r.German.Length -eq 0) { continue }
        [void]$sb.AppendLine($id + ';;' + (CsvField $r.German))
        $known[$id] = 1
        $rows++
    }
    [System.IO.File]::WriteAllText($workFile, $sb.ToString(), $utf8)
    Write-Output ("lang-export: {0} record(s) in {1} - {2} already translated" -f $rows, (Show $workFile), $done.Count)
    exit 0
}

# --- -Pack: the translation the game reads - the translated side only, keyed by id --------------
if ($Pack) {
    $from = if (Test-Path $workFile) { $workFile } else { $outFile }
    if (-not (Test-Path $from)) { throw "no $(Show $workFile) - run tools\lang-export.ps1 -Work first" }
    $sb = New-Object System.Text.StringBuilder
    [void]$sb.AppendLine('# Complete translation for ' + $title + ' - icftd.ini [GAME] language=' + $Lang)
    [void]$sb.AppendLine('# Each record is the id of an English text and its translation into ' + $Lang + ' - the')
    [void]$sb.AppendLine('# interface, the menus, the map''s places, the messages and the whole story. The id')
    [void]$sb.AppendLine('# is an FNV-1a hash of the English (sixteen hex digits) and is not the text itself,')
    [void]$sb.AppendLine('# so this file carries none of the original script.')
    [void]$sb.AppendLine('# Generated by tools\lang-export.ps1' + $antArg + ' -Pack from the translator''s work file.')
    [void]$sb.AppendLine('# Translate in ' + $Lang + $suffix + '.work.csv and re-run -Pack, never in this file: it')
    [void]$sb.AppendLine('# is rewritten from that one.')
    [void]$sb.AppendLine('# A line without a record here - or whose record is empty - is drawn in English.')
    $rows = 0
    foreach ($r in (ReadRecords $from)) {
        if ($r.German.Length -eq 0) { continue }
        $id = if (IsId $r.Key) { $r.Key.ToUpper() } else { IdOf $r.Key }
        [void]$sb.AppendLine($id + ';' + (CsvField $r.German))
        $rows++
    }
    [System.IO.File]::WriteAllText($outFile, $sb.ToString(), $utf8)
    Write-Output ("lang-export: {0} translated record(s) in {1} - no English text in it" -f $rows, (Show $outFile))
    exit 0
}

# --- the source text ---------------------------------------------------------------------------
if ($Ant) {
    # The add-on's own banks, from the tree extract.ps1 writes (`ant2`, the add-on's disk 2). A
    # nested export made with `-OutDir export\ant` is the same layout one folder down; the older
    # `ant\disk2` is the scratch tree docs\antheads.md §3.5 names.
    $desert = Join-Path $DataDir 'ant2\Desert2.dat'
    if (-not (Test-Path $desert)) { $desert = Join-Path $DataDir 'ant\disk2\Desert2.dat' }
    $phone = Join-Path $DataDir 'ant2\phone2.dat'
    if (-not (Test-Path $phone)) { $phone = Join-Path $DataDir 'ant\disk2\PHONE2.DAT' }
} else {
    $desert = Join-Path $DataDir 'disk2\desert.dat'
    $phone = Join-Path $DataDir 'disk2\phone.dat'
}

New-Item -ItemType Directory -Force -Path $Scratch | Out-Null
New-Item -ItemType Directory -Force -Path (Split-Path -Parent $sourceFile) | Out-Null

$ui = New-Object System.Collections.ArrayList       # the run's records, in the order they appeared
$iface = New-Object System.Collections.ArrayList    # the interface's own text (--langkeys)
$story = New-Object System.Collections.ArrayList
$talk = New-Object System.Collections.ArrayList

# An English text is worth a record when it is prose: a letter or a quote first, and a lowercase
# letter somewhere - a bank of pictures and offsets yields plenty of short printable runs
# ("BBB", "1-1A") that are not text. Room ids are the one shape that would pass anyway.
function Wanted([string]$text) {
    if ($text.Length -lt 4) { return $false }
    if ($text -cnotmatch '[a-z]') { return $false }
    if ($text -match '^\d+-\d+[A-Za-z]$') { return $false }
    if ($text -notmatch '^[A-Za-z0-9"''(\[]') { return $false }
    return $true
}

# `^ >50 Some text` - the room script's markers pick a speaker and a voice; the engine hands the
# layout routines what follows them, so a record starts there.
function StripMarkers([string]$text) {
    while ($text -match '^\^\s*([>+-]\d+\s*)+') { $text = $text -replace '^\^\s*([>+-]\d+\s*)+', '' }
    if ($text -match '^\^') { $text = $text -replace '^\^\s*', '' }
    return $text
}

function AddText($list, [string]$text) {
    $text = StripMarkers $text
    if (-not (Wanted $text)) { return }
    if (-not $list.Contains($text)) { [void]$list.Add($text) }
}

# A record reached through its own 16-bit length is known to be text: the length check is the
# filter, so a sentence that opens with an ellipsis ("...so your kid brother...") is kept, which
# Wanted would discard as a non-letter first character.
function AddRecord($list, [string]$text) {
    $text = StripMarkers $text
    # A bank record may open with a script command (`/1Accept Treatment`) or with a voice/tag byte
    # and the note marker (`#*Note: ...`, `3*I am away...`): the engine runs the command and draws
    # the rest, so the rest is the text a translator sees.
    $text = $text -replace '^/\d+', ''
    $text = $text -replace '^.\*', ''
    $text = $text -replace '^\*', ''
    if ($text.Length -lt 4 -or $text -cnotmatch '[a-z]') { return }
    if ($text -match '^\d+-\d+[A-Za-z]$') { return }
    if (-not $list.Contains($text)) { [void]$list.Add($text) }
}

# 1. the interface's own vocabulary - the lines the engine draws from its program and the port's
#    screens draw, which no data file holds. `--langkeys` prints it without running the game, so
#    this one needs the executable but neither disks nor a scene. The add-on's half needs none of
#    it: the interface is the base catalog's (en.csv), and the add-on file only carries what that
#    catalog does not.
if (-not $Ant) {
    if (-not (Test-Path $Exe)) { throw "no $Exe - build it with tools\build-host.ps1 (it lists the interface's text)" }
    $keys = Join-Path $Scratch 'keys.tsv'
    & $Exe --langkeys $keys | Out-Null
    if (-not (Test-Path $keys)) { throw "$Exe did not write $keys" }
    foreach ($line in [System.IO.File]::ReadAllLines($keys)) {
        if ($line.Length -eq 0 -or $line.StartsWith('#')) { continue }
        $en = Unescape $line
        if ($en.Length -gt 0 -and -not $iface.Contains($en)) { [void]$iface.Add($en) }
    }
}

# 2. the strings only a run knows
$dump = Join-Path $Scratch 'run.tsv'
if (-not $SkipRun) {
    if (-not (Test-Path $Image)) { throw "no $Image - run tools\extract.ps1 (or pass -SkipRun)" }
    $taps = @('# lang-export: fire taps, long enough for the intro and a room')
    for ($f = 10; $f -le 20000; $f += 60) { $taps += "$f 1 0xFFFF"; $taps += "$($f + 6) 0 0xFFFF" }
    $tapsPath = Join-Path $Scratch 'advance.txt'
    Set-Content -Path $tapsPath -Value $taps -Encoding ascii
    Write-Output "lang-export: running $Insns instructions to collect the text the game draws"
    $log = Join-Path $Scratch 'run.log'
    # Note: not `$out` - PowerShell variables are case insensitive.
    $runArgs = @($Image, $Insns, '--data', $DataDir, '--input', $tapsPath, '--langdump', $dump)
    if ($Ant) { $runArgs += @('--program', 'ant') }
    $runOut = (& $Exe @runArgs 2>&1 | Out-String)
    Set-Content -Path $log -Value $runOut
    if ($runOut -notmatch 'distinct line\(s\) dumped') {
        Write-Output 'lang-export: the run did not finish - see ' $log
    }
}
if (Test-Path $dump) {
    foreach ($line in [System.IO.File]::ReadAllLines($dump)) {
        if ($line.Length -eq 0 -or $line.StartsWith('#')) { continue }
        $tabAt = $line.IndexOf("`t")
        if ($tabAt -lt 0) { continue }
        $en = Unescape ($line.Substring(0, $tabAt))
        # The dump also records strings that are not drawn prose (a room id on its way to a lookup);
        # Wanted is the same filter the bank scan uses.
        if ($en.Length -gt 0 -and -not $ui.Contains($en) -and (Wanted $en)) { [void]$ui.Add($en) }
    }
}

# 3. the rooms' script bank
if (Test-Path $desert) {
    $b = [System.IO.File]::ReadAllBytes($desert)
    $i = 0
    while ($i -lt $b.Length - 2) {
        if ($b[$i] -ne 0) { $i++; continue }
        # <u32 nameLen> <speaker> <u16 length> <text>: a speech record. The add-on's bank writes
        # the speaker's initials (BE, MAY, BAR, I, ...) before the text, and the length is 16 bits,
        # so a speech over 255 bytes has a first length byte that is not 0 - the one-byte form
        # below would miss it (measured on Desert2.dat: "Okay, okay...a good newsman", 451 bytes).
        if ($i + 7 -le $b.Length) {
            $nl = [int]$b[$i] * 16777216 + [int]$b[$i+1] * 65536 + [int]$b[$i+2] * 256 + [int]$b[$i+3]
            if ($nl -ge 1 -and $nl -le 12) {
                $nameOk = $true
                for ($k = 0; $k -lt $nl; $k++) {
                    $c = $b[$i + 4 + $k]
                    if ($c -lt 0x20 -or $c -gt 0x7E) { $nameOk = $false; break }
                }
                if ($nameOk) {
                    $lenAt = $i + 4 + $nl
                    if ($lenAt + 2 -le $b.Length) {
                        $len = $b[$lenAt] * 256 + $b[$lenAt + 1]
                        $start = $lenAt + 2
                        if ($len -gt 8 -and $start + $len -le $b.Length) {
                            $ok = $true
                            for ($k = 0; $k -lt $len; $k++) {
                                $c = $b[$start + $k]
                                if ($c -lt 0x20 -or $c -gt 0x7E) { $ok = $false; break }
                            }
                            if ($ok) {
                                AddRecord $story ([System.Text.Encoding]::ASCII.GetString($b, $start, $len))
                                $i = $start + $len
                                continue
                            }
                        }
                    }
                }
            }
        }
        # <00 1A> <u32> <u16 length> <text>: the long narration pages
        if ($b[$i + 1] -eq 0x1A -and $i + 8 -le $b.Length) {
            $len = $b[$i + 6] * 256 + $b[$i + 7]
            if ($len -gt 8 -and $i + 8 + $len -le $b.Length) {
                $ok = $true
                for ($k = 0; $k -lt $len; $k++) {
                    $c = $b[$i + 8 + $k]
                    if ($c -lt 0x20 -or $c -gt 0x7E) { $ok = $false; break }
                }
                if ($ok) {
                    AddRecord $story ([System.Text.Encoding]::ASCII.GetString($b, $i + 8, $len))
                    $i += 8 + $len
                    continue
                }
            }
        }
        # <00 length> <text>
        $len = $b[$i + 1]
        if ($len -ge 4 -and $i + 2 + $len -le $b.Length) {
            $ok = $true
            for ($k = 0; $k -lt $len; $k++) {
                $c = $b[$i + 2 + $k]
                if ($c -lt 0x20 -or $c -gt 0x7E) { $ok = $false; break }
            }
            if ($ok) {
                AddRecord $story ([System.Text.Encoding]::ASCII.GetString($b, $i + 2, $len))
                $i += 2 + $len
                continue
            }
        }
        $i++
    }

    # A record whose text is longer than 255 bytes is not reached by the `<00 length>` walk above:
    # its 16-bit length starts with a non-zero byte, and the byte before that may be printable, so
    # the maximal printable run begins one or two bytes before the text. The record is still a text
    # followed by a 16-bit length, so a run whose preceding word equals its own length is one - and
    # a leading '.' (a sentence continuing "...so your kid brother...") is text, not junk.
    $runStart = -1
    for ($i = 0; $i -le $b.Length; $i++) {
        $printable = ($i -lt $b.Length -and $b[$i] -ge 0x20 -and $b[$i] -le 0x7E)
        if ($printable -and $runStart -lt 0) { $runStart = $i }
        if ($printable -or $runStart -lt 0) { continue }
        $runLen = $i - $runStart
        if ($runLen -ge 9) {
            $at = -1; $len = 0
            if ($runStart -ge 2) {
                $word = $b[$runStart - 2] * 256 + $b[$runStart - 1]
                if ($word -eq $runLen) { $at = $runStart; $len = $word }
                elseif ($word -eq $runLen - 1) { $at = $runStart; $len = $word }
            }
            if ($at -lt 0 -and $runStart -ge 1) {
                $word = $b[$runStart - 1] * 256 + $b[$runStart]
                if ($word -eq $runLen - 1) { $at = $runStart + 1; $len = $word }
                elseif ($word -eq $runLen - 2) { $at = $runStart + 1; $len = $word }
            }
            if ($at -ge 0 -and $len -ge 4) {
                AddRecord $story ([System.Text.Encoding]::ASCII.GetString($b, $at, $len))
            }
        }
        $runStart = -1
    }
} else { Write-Output "lang-export: no $desert - skipping the rooms' text" }

# 3b. the add-on's own program: its narration, radio bulletins, telephone lines and endings live
#     in the executable as NUL-terminated strings, not in the rooms' bank. Each one ends with a
#     small binary tag whose last four printable bytes are `]Nu`; the text is what follows. The
#     formats the engine builds itself are already in the interface vocabulary (they carry a `%`
#     and are recognised by lang.c), and a compiler's version/error strings are not text.
if (Test-Path $Image) {
    $pb = [System.IO.File]::ReadAllBytes($Image)
    $runStart = -1
    for ($i = 0; $i -le $pb.Length; $i++) {
        $printable = ($i -lt $pb.Length -and $pb[$i] -ge 0x20 -and $pb[$i] -le 0x7E)
        if ($printable -and $runStart -lt 0) { $runStart = $i }
        if ($printable -or $runStart -lt 0) { continue }
        $runLen = $i - $runStart
        if ($runLen -ge 8) {
            $text = [System.Text.Encoding]::ASCII.GetString($pb, $runStart, $runLen)
            # The entry's binary header ends in `]Nu`; where it does not, the last few header bytes
            # may still be printable, so the text starts at the first capital-plus-lowercase pair
            # (or an opening quote) within the first eight characters.
            $tag = $text.LastIndexOf(']Nu')
            if ($tag -ge 0 -and $tag + 3 -lt $text.Length) {
                $text = $text.Substring($tag + 3)
            } else {
                for ($k = 0; $k -le [Math]::Min(7, $text.Length - 2); $k++) {
                    $rest = $text.Substring($k)
                    if ($rest -cmatch '^[A-Z][a-z]' -or $rest -cmatch '^["''(]') {
                        $text = $rest
                        break
                    }
                }
            }
            $text = $text.Trim()
            $words = @([regex]::Matches($text, "[A-Za-z][A-Za-z'-]{1,}")).Count
            $odd = @([regex]::Matches($text, '[`&@\\{}|~^_=<>\[\]]')).Count
            if ($text -notmatch '%[A-Za-z]' -and
                $text -cmatch '[a-z]' -and $text -match ' ' -and
                $words -ge 3 -and $odd -eq 0 -and
                $text -notmatch '^(MovE v|Version \d|PO\.lE|no math library|Sonix Music|Nu lE)') {
                AddRecord $story $text
            }
        }
        $runStart = -1
    }
}

# 4. the telephone dialogue
if (Test-Path $phone) {
    foreach ($line in [System.IO.File]::ReadAllLines($phone)) {
        $text = $line.TrimEnd("`r")
        if ($text.Length -lt 3) { continue }
        $text = $text -replace '^[>+]\d+\s+', ''          # a call's condition markers
        # the engine splits the speaker off at the first colon within the first three characters
        $colon = -1
        for ($k = 0; $k -lt [Math]::Min(3, $text.Length); $k++) { if ($text[$k] -eq ':') { $colon = $k; break } }
        if ($colon -lt 0) { continue }
        # The 1989 file writes `O:Let me see...`, the add-on's `O: The lab?...` - the engine
        # skips the space, so the record starts at the first word either way.
        AddText $talk $text.Substring($colon + 1).TrimStart()
    }
} else { Write-Output "lang-export: no $phone - skipping the telephone dialogue" }

# --- the source file: <id>;<English> -----------------------------------------------------------
# One record belongs in one section only: the run draws story records and menu labels alike, the
# interface's own list repeats lines the run and the data files also hold, and the two data files
# are scanned for the same text. A line that appears twice would be a row a translator fills in
# twice, so the first section that names it keeps it.
$uiOnly = @()
foreach ($t in $ui) { $uiOnly += $t }
$seen = @{}
$secIface = New-Object System.Collections.ArrayList
$secUi    = New-Object System.Collections.ArrayList
$secStory = New-Object System.Collections.ArrayList
$secTalk  = New-Object System.Collections.ArrayList
foreach ($section in @(@($iface, $secIface), @($uiOnly, $secUi), @($story, $secStory), @($talk, $secTalk))) {
    foreach ($t in $section[0]) {
        if ($seen.ContainsKey($t)) { continue }
        $seen[$t] = 1
        [void]$section[1].Add($t)
    }
}

# The add-on's half carries only what the base catalog does not: `lang\en.csv`, when it is here,
# already lists every shared line (the interface included), so a row for one of those would only
# repeat the base translation - or disagree with it.
$baseIds = @{}
if ($Ant) {
    $baseSource = Join-Path $root 'lang\en.csv'
    if (Test-Path $baseSource) {
        foreach ($line in [System.IO.File]::ReadAllLines($baseSource, [System.Text.Encoding]::UTF8)) {
            if ($line.Length -eq 0 -or $line.StartsWith('#')) { continue }
            $f = ParseCsv $line
            if ($f.Count -ge 2) { $baseIds[$f[0].ToUpper()] = 1 }
        }
    }
    foreach ($list in @($secIface, $secUi, $secStory, $secTalk)) {
        $keep = @($list | Where-Object { -not $baseIds.ContainsKey((IdOf $_)) })
        $list.Clear()
        foreach ($t in $keep) { [void]$list.Add($t) }
    }
}

$sb = New-Object System.Text.StringBuilder
if ($Ant) {
    [void]$sb.AppendLine('# Source text of It Came from the Desert II - Antheads - the id and the English text')
    [void]$sb.AppendLine('# of the add-on''s own lines (its rooms, people and narration). NOT committed: this')
    [void]$sb.AppendLine('# is the game''s own script. The interface and every line the two games share are in')
    [void]$sb.AppendLine('# en.csv: the game merges this half into the one catalog when the add-on runs.')
} else {
    [void]$sb.AppendLine('# Source text of It Came from the Desert - the id and the English text of every')
    [void]$sb.AppendLine('# string the game can draw. NOT committed: this is the game''s own script.')
}
[void]$sb.AppendLine('# tools\lang-export.ps1 -Work builds the translator''s file from it, -Pack writes')
[void]$sb.AppendLine('# the translation the game reads.')
[void]$sb.AppendLine('#')
[void]$sb.AppendLine('# The id is an FNV-1a hash of the English text (sixteen hex digits), and lang.c')
[void]$sb.AppendLine('# computes the same value, so a translation file never repeats the original''s')
[void]$sb.AppendLine('# words.')
[void]$sb.AppendLine('')
if ($secIface.Count + $secUi.Count -gt 0) {
    [void]$sb.AppendLine("# --- the interface, the menus and the messages ($($secIface.Count + $secUi.Count) record(s)) ---")
    foreach ($t in $secIface) { [void]$sb.AppendLine((IdOf $t) + ';' + (CsvField $t)) }
    foreach ($t in $secUi) { [void]$sb.AppendLine((IdOf $t) + ';' + (CsvField $t)) }
    [void]$sb.AppendLine('')
}
[void]$sb.AppendLine("# --- the story: the rooms, the people and the narration ($($secStory.Count) record(s)) ---")
foreach ($t in $secStory) { [void]$sb.AppendLine((IdOf $t) + ';' + (CsvField $t)) }
[void]$sb.AppendLine('')
[void]$sb.AppendLine("# --- the telephone dialogue ($($secTalk.Count) record(s)) ---")
foreach ($t in $secTalk) { [void]$sb.AppendLine((IdOf $t) + ';' + (CsvField $t)) }

[System.IO.File]::WriteAllText($sourceFile, $sb.ToString(), $utf8)
$total = $secIface.Count + $secUi.Count + $secStory.Count + $secTalk.Count
Write-Output ("lang-export: {0} record(s) written to {1} - {2} interface, {3} story, {4} telephone" -f `
              $total, $Source, ($secIface.Count + $secUi.Count), $secStory.Count, $secTalk.Count)
Write-Output 'lang-export: next: -Work for the translator''s file, then -Pack for the translation'
