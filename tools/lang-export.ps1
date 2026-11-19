# The translation files, in three steps.
#
# The game's text is looked up by a **key**, not by the English text itself: every string has a
# 64-bit FNV-1a id (sixteen hex digits) that `lang.c` computes the same way. That is what lets a
# finished translation be shipped without a copy of the original's script - which is the only reason
# the two are separate files:
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
# `-Pack` is the step whose result belongs in the repository: it keeps only the German side, so the
# file carries no English text at all. `-Work` rebuilds the translator's three-column file from
# `en.csv` and whatever `de.csv` already has, so nothing already translated is ever lost.
#
# The source text comes from three places:
#
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
# `-Ant` adds the 1990 add-on's own bank (`Desert2.dat`, `PHONE2.DAT`) to the same source: the two
# games share one catalog, so one file translates both.
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

$workFile = Join-Path $root ('lang\' + $Lang + '.work.csv')
$outFile = Join-Path $root ('lang\' + $Lang + '.csv')
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
    [void]$sb.AppendLine('# Translation work file for It Came from the Desert - ' + $Lang + ', icftd.ini [GAME] language=' + $Lang)
    [void]$sb.AppendLine('# Three columns: the id, the game''s own text, your translation.')
    [void]$sb.AppendLine('# Translate column 3 only - columns 1 and 2 must stay as they are.')
    [void]$sb.AppendLine('# An empty column 3 keeps what the game has (its German for the interface, English')
    [void]$sb.AppendLine('# for the story). Save as CSV with a semicolon separator, then run')
    [void]$sb.AppendLine('#   tools\lang-export.ps1 -Pack')
    [void]$sb.AppendLine('# which writes the file that belongs in the repository (column 3, keyed by the id).')
    $rows = 0
    foreach ($r in (ReadRecords $sourceFile)) {
        $id = if (IsId $r.Key) { $r.Key.ToUpper() } else { IdOf $r.English }
        $german = if ($done.ContainsKey($id)) { $done[$id] } else { '' }
        [void]$sb.AppendLine($id + ';' + (CsvField $r.German) + ';' + (CsvField $german))
        $rows++
    }
    [System.IO.File]::WriteAllText($workFile, $sb.ToString(), $utf8)
    Write-Output ("lang-export: {0} record(s) in {1} - {2} already translated" -f $rows, (Show $workFile), $done.Count)
    exit 0
}

# --- -Pack: the committed translation - the German side only, keyed by id -----------------------
if ($Pack) {
    $from = if (Test-Path $workFile) { $workFile } else { $outFile }
    if (-not (Test-Path $from)) { throw "no $(Show $workFile) - run tools\lang-export.ps1 -Work first" }
    $sb = New-Object System.Text.StringBuilder
    [void]$sb.AppendLine('# Translation for It Came from the Desert - icftd.ini [GAME] language=' + $Lang)
    [void]$sb.AppendLine('# Each record is the id of an English text and its ' + $Lang + ' translation. The id')
    [void]$sb.AppendLine('# is an FNV-1a hash of the English (sixteen hex digits) and is not the text itself,')
    [void]$sb.AppendLine('# so this file carries none of the original script.')
    [void]$sb.AppendLine('# Generated by tools\lang-export.ps1 -Pack from the translator''s work file.')
    [void]$sb.AppendLine('# Translate in ' + $Lang + '.work.csv and re-run -Pack, never in this file: it is')
    [void]$sb.AppendLine('# rewritten from that one.')
    [void]$sb.AppendLine('# An empty ' + $Lang + ' field keeps what the game has (its German for the')
    [void]$sb.AppendLine('# interface, English for the story).')
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
$desert = Join-Path $DataDir 'disk2\desert.dat'
$phone = Join-Path $DataDir 'disk2\phone.dat'
if ($Ant) {
    if (-not (Test-Path $desert)) { $desert = Join-Path $DataDir 'ant\disk2\Desert2.dat' }
    if (-not (Test-Path $phone))  { $phone = Join-Path $DataDir 'ant\disk2\PHONE2.DAT' }
}

New-Item -ItemType Directory -Force -Path $Scratch | Out-Null
New-Item -ItemType Directory -Force -Path (Split-Path -Parent $sourceFile) | Out-Null

$ui = New-Object System.Collections.ArrayList       # the run's records, in the order they appeared
$story = New-Object System.Collections.ArrayList
$talk = New-Object System.Collections.ArrayList

# An English text is worth a record when it is prose: a letter or a quote first, and a lowercase
# letter somewhere - a bank of pictures and offsets yields plenty of short printable runs
# ("BBB", "1-1A") that are not text. Room ids are the one shape that would pass anyway.
function Wanted([string]$text) {
    if ($text.Length -lt 4) { return $false }
    if ($text -notmatch '[a-z]') { return $false }
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

# 1. the strings only a run knows
$dump = Join-Path $Scratch 'run.tsv'
if (-not $SkipRun) {
    if (-not (Test-Path $Exe)) { throw "no $Exe - build it with tools\build-host.ps1 (or pass -SkipRun)" }
    if (-not (Test-Path $Image)) { throw "no $Image - run tools\extract.ps1 (or pass -SkipRun)" }
    $taps = @('# lang-export: fire taps, long enough for the intro and a room')
    for ($f = 10; $f -le 20000; $f += 60) { $taps += "$f 1 0xFFFF"; $taps += "$($f + 6) 0 0xFFFF" }
    $tapsPath = Join-Path $Scratch 'advance.txt'
    Set-Content -Path $tapsPath -Value $taps -Encoding ascii
    Write-Output "lang-export: running $Insns instructions to collect the text the game draws"
    $log = Join-Path $Scratch 'run.log'
    # Note: not `$out` - PowerShell variables are case insensitive.
    $runOut = (& $Exe $Image $Insns --data $DataDir --input $tapsPath --langdump $dump 2>&1 | Out-String)
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
        if ($en.Length -gt 0 -and -not $ui.Contains($en)) { [void]$ui.Add($en) }
    }
}

# 2. the rooms' script bank
if (Test-Path $desert) {
    $b = [System.IO.File]::ReadAllBytes($desert)
    $i = 0
    while ($i -lt $b.Length - 2) {
        if ($b[$i] -ne 0) { $i++; continue }
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
                    AddText $story ([System.Text.Encoding]::ASCII.GetString($b, $i + 8, $len))
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
                AddText $story ([System.Text.Encoding]::ASCII.GetString($b, $i + 2, $len))
                $i += 2 + $len
                continue
            }
        }
        $i++
    }
} else { Write-Output "lang-export: no $desert - skipping the rooms' text" }

# 3. the telephone dialogue
if (Test-Path $phone) {
    foreach ($line in [System.IO.File]::ReadAllLines($phone)) {
        $text = $line.TrimEnd("`r")
        if ($text.Length -lt 3) { continue }
        $text = $text -replace '^[>+]\d+\s+', ''          # a call's condition markers
        # the engine splits the speaker off at the first colon within the first three characters
        $colon = -1
        for ($k = 0; $k -lt [Math]::Min(3, $text.Length); $k++) { if ($text[$k] -eq ':') { $colon = $k; break } }
        if ($colon -lt 0) { continue }
        AddText $talk $text.Substring($colon + 1)
    }
} else { Write-Output "lang-export: no $phone - skipping the telephone dialogue" }

# --- the source file: <id>;<English> -----------------------------------------------------------
# One record belongs in one section only: the run draws story records and menu labels alike, and the
# two data files are scanned for the same text.
$storySet = @{}
foreach ($t in $story) { $storySet[$t] = 1 }
foreach ($t in $talk) { $storySet[$t] = 1 }
$uiOnly = @()
foreach ($t in $ui) { if (-not $storySet.ContainsKey($t)) { $uiOnly += $t } }

$sb = New-Object System.Text.StringBuilder
[void]$sb.AppendLine('# Source text of It Came from the Desert - the id and the English text of every')
[void]$sb.AppendLine('# string the game can draw. NOT committed: this is the game''s own script.')
[void]$sb.AppendLine('# tools\lang-export.ps1 -Work builds the translator''s file from it, -Pack writes')
[void]$sb.AppendLine('# the translation that belongs in the repository.')
[void]$sb.AppendLine('#')
[void]$sb.AppendLine('# The id is an FNV-1a hash of the English text (sixteen hex digits), and lang.c')
[void]$sb.AppendLine('# computes the same value, so a translation file never repeats the original''s')
[void]$sb.AppendLine('# words.')
[void]$sb.AppendLine('')
[void]$sb.AppendLine("# --- the interface, the menus and the messages ($($uiOnly.Count) record(s)) ---")
foreach ($t in $uiOnly) { [void]$sb.AppendLine((IdOf $t) + ';' + (CsvField $t)) }
[void]$sb.AppendLine('')
[void]$sb.AppendLine("# --- the story: the rooms, the people and the narration ($($story.Count) record(s)) ---")
foreach ($t in $story) { [void]$sb.AppendLine((IdOf $t) + ';' + (CsvField $t)) }
[void]$sb.AppendLine('')
[void]$sb.AppendLine("# --- the telephone dialogue ($($talk.Count) record(s)) ---")
foreach ($t in $talk) { [void]$sb.AppendLine((IdOf $t) + ';' + (CsvField $t)) }

[System.IO.File]::WriteAllText($sourceFile, $sb.ToString(), $utf8)
$total = $uiOnly.Count + $story.Count + $talk.Count
Write-Output ("lang-export: {0} record(s) written to {1} - {2} interface, {3} story, {4} telephone" -f `
              $total, $Source, $uiOnly.Count, $story.Count, $talk.Count)
Write-Output 'lang-export: next: -Work for the translator''s file, then -Pack for the translation'
