# The translation file the game reads: every English text the game can draw, as a CSV with a
# semicolon separator — one record per line, `<English>;<German>` — ready to be handed to a
# translator and opened in a spreadsheet as two columns.
#
# The English field is the exact string the engine passes to its text routines, so a record is only
# used when the two match byte for byte: the translator edits the *German* field and leaves the
# English one alone. An empty German field is a placeholder - the game keeps its own text (its
# built-in German for the interface, English for the rest), so a half-finished file is usable.
#
# The records come from three places:
#
#   * a scripted run of the game with `--langdump`, which records every string the engine hands to
#     its text routines - the load screen, the intro's narration, the room menus, the travel lines.
#     Those live in memory only (the intro's bundle is compressed), so nothing else finds them;
#   * `desert.dat` (the rooms' script bank): its records are `<00> <length> <text>` (and `<00 1A>
#     <u32> <u16 length> <text>` for the long narration pages), and the engine hands the text after
#     the `^`-markers straight to the layout routines, so that is the record;
#   * `PHONE.DAT`, whose lines are `<speaker>:<text>` - the speaker picks a portrait picture and is
#     never drawn, the text after the colon is the record.
#
#   powershell -ExecutionPolicy Bypass -File tools\lang-export.ps1
#   powershell -ExecutionPolicy Bypass -File tools\lang-export.ps1 -SkipRun      # no game run
#   powershell -ExecutionPolicy Bypass -File tools\lang-export.ps1 -Out lang\de.csv -Ant
#
# `-Ant` adds the 1990 add-on's own bank (`Desert2.dat`, `PHONE2.DAT`) to the same file: the two
# games share one catalog, so one file translates both.
param(
    [string]$Exe = 'bin\win32\icftd-recomp.exe',
    [string]$DataDir = 'export',
    [string]$Image = 'export\code\dshell4k\dshell.img',
    [string]$Out = 'lang\de.csv',
    [string]$Work = 'out\lang-export',
    [int]$Insns = 60000000,
    [switch]$SkipRun,
    [switch]$Ant
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
Set-Location $root

# With its byte order mark, so a spreadsheet opens the file as UTF-8 and shows umlauts (the game
# strips it again, and the file still reads as UTF-8 everywhere else).
$utf8 = New-Object System.Text.UTF8Encoding($true)
$desert = Join-Path $DataDir 'disk2\desert.dat'
$phone = Join-Path $DataDir 'disk2\phone.dat'
if ($Ant) {
    if (-not (Test-Path $desert)) { $desert = Join-Path $DataDir 'ant\disk2\Desert2.dat' }
    if (-not (Test-Path $phone))  { $phone = Join-Path $DataDir 'ant\disk2\PHONE2.DAT' }
}

New-Item -ItemType Directory -Force -Path $Work | Out-Null
New-Item -ItemType Directory -Force -Path (Split-Path -Parent $Out) | Out-Null

$ui = New-Object System.Collections.ArrayList       # the run's rows, in the order they appeared
$story = New-Object System.Collections.ArrayList
$talk = New-Object System.Collections.ArrayList

# --- the escapes the loader decodes again ------------------------------------------------------
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

# One CSV field: quoted (with its quotes doubled) only when it has to be - a spreadsheet reads and
# writes exactly this. Comment records use the same rule, so a header that mentions ';' stays one
# field and the loader still sees it as a comment.
function CsvField([string]$text) {
    if ($text -match '[;"\r\n]') { return '"' + $text.Replace('"', '""') + '"' }
    return $text
}

# An English side is worth a row when it is prose: a letter or a quote first, and a lowercase
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
# layout routines what follows them, so a row starts there.
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

# --- 1. the strings only a run knows -----------------------------------------------------------
$dump = Join-Path $Work 'run.tsv'
if (-not $SkipRun) {
    if (-not (Test-Path $Exe)) { throw "no $Exe - build it with tools\build-host.ps1 (or pass -SkipRun)" }
    if (-not (Test-Path $Image)) { throw "no $Image - run tools\extract.ps1 (or pass -SkipRun)" }
    $taps = @('# lang-export: fire taps, long enough for the intro and a room')
    for ($f = 10; $f -le 20000; $f += 60) { $taps += "$f 1 0xFFFF"; $taps += "$($f + 6) 0 0xFFFF" }
    $tapsPath = Join-Path $Work 'advance.txt'
    Set-Content -Path $tapsPath -Value $taps -Encoding ascii
    Write-Output "lang-export: running $Insns instructions to collect the text the game draws"
    $log = Join-Path $Work 'run.log'
    # Note: not `$out` - PowerShell variables are case insensitive and `$Out` is the target path.
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

# --- 2. the rooms' script bank ----------------------------------------------------------------
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

# --- 3. the telephone dialogue ----------------------------------------------------------------
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

# --- the file ---------------------------------------------------------------------------------
# A row belongs in one section only: the run draws story records and menu labels alike, and the two
# data files are scanned for the same text.
$storySet = @{}
foreach ($t in $story) { $storySet[$t] = 1 }
foreach ($t in $talk) { $storySet[$t] = 1 }
$uiOnly = @()
foreach ($t in $ui) { if (-not $storySet.ContainsKey($t)) { $uiOnly += $t } }

$sb = New-Object System.Text.StringBuilder
[void]$sb.AppendLine('# Translation file for It Came from the Desert - icftd.ini [GAME] language=de')
[void]$sb.AppendLine('#')
[void]$sb.AppendLine('# One record per line, two fields: English ; German. The English field is what the')
[void]$sb.AppendLine('# game draws and is the key it looks the text up by - leave it exactly as it is.')
[void]$sb.AppendLine('# Translate the German field, for example:')
[void]$sb.AppendLine('#')
[void]$sb.AppendLine('# Look at Samples ; Proben ansehen')
[void]$sb.AppendLine('#')
[void]$sb.AppendLine('# An empty German field keeps what the game has (its own German for the interface and')
[void]$sb.AppendLine('# the room menus, English for everything else), so the file may be filled in gradually.')
[void]$sb.AppendLine('#')
[void]$sb.AppendLine('# Length matters: the engine wraps and centres with its own font, so a German line that')
[void]$sb.AppendLine('# is much longer than the English one will not fit its box. Keep it close. A field that')
[void]$sb.AppendLine('# holds the separator or a line break is quoted ("..." with "" for a quote) - a')
[void]$sb.AppendLine('# spreadsheet writes that by itself.')
[void]$sb.AppendLine('#')
[void]$sb.AppendLine('# Save it as CSV with a semicolon separator ("CSV UTF-8" in Excel); umlauts and ss')
[void]$sb.AppendLine('# are welcome in UTF-8 or ANSI. Records that start with # are comments.')
[void]$sb.AppendLine('# Put the file next to the game as lang\de.csv and set language=de in icftd.ini.')
[void]$sb.AppendLine('')
[void]$sb.AppendLine("# --- the interface, the menus and the messages ($($uiOnly.Count) record(s)) ---")
foreach ($t in $uiOnly) { [void]$sb.AppendLine((CsvField $t) + ';') }
[void]$sb.AppendLine('')
[void]$sb.AppendLine("# --- the story: the rooms, the people and the narration ($($story.Count) record(s)) ---")
foreach ($t in $story) { [void]$sb.AppendLine((CsvField $t) + ';') }
[void]$sb.AppendLine('')
[void]$sb.AppendLine("# --- the telephone dialogue ($($talk.Count) record(s)) ---")
foreach ($t in $talk) { [void]$sb.AppendLine((CsvField $t) + ';') }

$full = Join-Path $root $Out
[System.IO.File]::WriteAllText($full, $sb.ToString(), $utf8)
$total = $uiOnly.Count + $story.Count + $talk.Count
Write-Output ("lang-export: {0} record(s) written to {1} - {2} interface, {3} story, {4} telephone" -f `
              $total, $Out, $uiOnly.Count, $story.Count, $talk.Count)
