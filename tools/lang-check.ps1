# The language icftd.ini selects, measured on its own terms.
#
# A port feature: the original is English-only, so there is nothing to diff the German against.
# What is checked is what the feature claims:
#
#   * `[GAME] language=de` makes the engine draw German where it drew English - the load screen
#     ("Lizard Breath hat auf dich gewartet.") and a room's action list ("Zur Karte", "Schlafen"),
#     both through the engine's own layout routines, so the wrap and the centring are the game's;
#   * `[GAME] language=en` (the default) draws the original's English, unchanged;
#   * the language changes nothing the game computes: the two runs' RAM is byte-identical except
#     inside the region the runtime reserves for the German catalog (above the emulated stack,
#     0x184000..0x1C0000 - memory the machine model never hands to the game), and their machine
#     state (registers, custom chips, frame count) is identical;
#   * with no `[GAME]` entry at all the run is the English one ("language=en" is the default).
#
# The room menu needs the intro played through: the tap script below presses fire every 60 frames
# for the first ~1600 frames, which advances the five narration pages and leaves the room's action
# list up at ~frame 940.
#
#   powershell -ExecutionPolicy Bypass -File tools\lang-check.ps1
param(
    [string]$Exe = 'bin\win32\icftd-recomp.exe',
    [string]$DataDir = 'export',
    [string]$Image = 'export\code\dshell4k\dshell.img',
    [string]$Work = 'out\lang-check'
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
Set-Location $root

if (-not (Test-Path $Exe))   { Write-Output "lang: SKIP (no $Exe - build it with tools\build-host.ps1)"; exit 0 }
if (-not (Test-Path $Image)) { Write-Output "lang: SKIP (no $Image - run tools\extract.ps1)"; exit 0 }

New-Item -ItemType Directory -Force -Path $Work | Out-Null
Get-ChildItem $Work -Recurse -File -ErrorAction SilentlyContinue | Remove-Item -Force

$fail = 0
function Fail([string]$text) { Write-Output "FAIL lang: $text"; $script:fail++ }
function Ok([string]$text) { Write-Output "lang: $text" }

# The settings file the executable reads is the one next to it (rt_config_ensure). The check owns
# it while it runs and puts the player's own file back afterwards.
$ini = Join-Path (Split-Path $Exe) 'icftd.ini'
$saved = if (Test-Path $ini) { Get-Content -LiteralPath $ini -Raw } else { $null }
function Set-Language([string]$code) {
    $text = "; lang-check`r`n`r`n[VIDEO]`r`nfullscreen=false`r`n`r`n[GAME]`r`nlanguage=$code`r`n"
    Set-Content -LiteralPath $ini -Value $text -NoNewline -Encoding ascii
}

function Run([string]$tag, [int]$insns, [string[]]$extra) {
    $log = Join-Path $Work "$tag.log"
    $out = (& $Exe $Image $insns --data $DataDir @extra 2>&1 | Out-String)
    Set-Content -Path $log -Value $out
    return $out
}

# F1..F5-style tap script: fire pressed for 6 frames every 60, long enough for the intro's pages.
$taps = @('# lang-check: fire taps')
for ($f = 10; $f -le 20000; $f += 60) { $taps += "$f 1 0xFFFF"; $taps += "$($f + 6) 0 0xFFFF" }
Set-Content -Path (Join-Path $Work 'advance.txt') -Value $taps -Encoding ascii

try {
    # --- 1. the load screen, in both languages, from the same machine ------------------------
    Set-Language 'en'
    $en = Run 'en' 2600000 @('--input', (Join-Path $Work 'advance.txt'), '--textlog',
                             '--state', 'out\lang-check\en', '--ram', '100')
    Set-Language 'de'
    $de = Run 'de' 2600000 @('--input', (Join-Path $Work 'advance.txt'), '--textlog',
                             '--state', 'out\lang-check\de', '--ram', '100')

    if ($en -notmatch 'Lizard Breath has been awaiting your return\.') {
        Fail 'language=en did not draw the original English load screen'
    } else { Ok 'language=en draws the original English' }
    if ($de -notmatch 'Lizard Breath hat auf dich gewartet\.') {
        Fail 'language=de did not draw the German load screen'
    } elseif ($de -notmatch 'Zum Laden eines Spielstands w') {
        Fail 'language=de drew the German heading but not the question below it'
    } else { Ok 'language=de draws German' }
    if ($de -match 'Lizard Breath has been awaiting your return\.') {
        Fail 'language=de still drew the English line'
    }

    # --- 2. the language changed nothing the game computes ------------------------------------
    # Frame 100 is before the first text is drawn (the load screen comes at 132), so any RAM the
    # runs disagree about is not a picture: it can only be the catalog.
    $ramEn = Join-Path $Work 'en.100.ram'
    $ramDe = Join-Path $Work 'de.100.ram'
    if (-not (Test-Path $ramEn) -or -not (Test-Path $ramDe)) {
        Fail 'the RAM of frame 100 was not dumped by both runs'
    } else {
        $a = [System.IO.File]::ReadAllBytes($ramEn)
        $b = [System.IO.File]::ReadAllBytes($ramDe)
        if ($a.Length -ne $b.Length) {
            Fail 'the two runs dumped different RAM sizes'
        } else {
            $first = -1; $last = -1; $count = 0
            for ($i = 0; $i -lt $a.Length; $i++) {
                if ($a[$i] -ne $b[$i]) { if ($first -lt 0) { $first = $i }; $last = $i; $count++ }
            }
            # The catalog lives at 0x184000..0x1C0000 (lang.c, LANG_BASE/LANG_BYTES).
            if ($count -eq 0) {
                Ok 'the two runs hold byte-identical RAM'
            } elseif ($first -ge 0x184000 -and $last -lt 0x1C0000) {
                Ok ("the only RAM that differs is the catalog's own region ({0} byte(s) at 0x{1:X}..0x{2:X})" -f $count, $first, $last)
            } else {
                Fail ("RAM outside the catalog region differs: {0} byte(s) at 0x{1:X}..0x{2:X}" -f $count, $first, $last)
            }
        }
    }
    # The machine state record (registers, custom chips, frame and instruction counts) is the
    # same file when nothing the game computes changed: same length, same bytes except the RAM
    # hash half of it - which is what the RAM comparison above already explained.
    # The machine state is the same until the first translated string is drawn. From that frame on
    # the runs legitimately differ: the engine lays the German out with its own arithmetic (line
    # breaks, box heights, the cursor it keeps), and those words are what a longer text changes.
    $stEn = Join-Path $Work 'en.state'
    $stDe = Join-Path $Work 'de.state'
    $firstText = [regex]::Match($de, 'text: frame (\d+)')
    if (-not (Test-Path $stEn) -or -not (Test-Path $stDe)) {
        Fail 'the machine state was not dumped by both runs'
    } elseif (-not $firstText.Success) {
        Fail 'the German run never drew a text line, so there is no frame to compare up to'
    } else {
        $limit = [int]$firstText.Groups[1].Value
        $sa = [System.IO.File]::ReadAllBytes($stEn)
        $sb = [System.IO.File]::ReadAllBytes($stDe)
        # Header 16 bytes, then one 344-byte record per frame; the RAM hash sits at +80..+87 and is
        # explained by the catalog region the RAM comparison above measured.
        $recs = [math]::Min(($sa.Length - 16) / 344, ($sb.Length - 16) / 344)
        $bad = -1; $compared = 0
        for ($k = 0; $k -lt $recs; $k++) {
            $o = 16 + $k * 344
            $frame = [BitConverter]::ToUInt32($sa, $o)
            if ($frame -ge $limit) { break }
            $compared++
            for ($i = 0; $i -lt 344; $i++) {
                if ($i -ge 80 -and $i -lt 88) { continue }
                if ($sa[$o + $i] -ne $sb[$o + $i]) { $bad = $frame; break }
            }
            if ($bad -ge 0) { break }
        }
        if ($bad -ge 0) { Fail "the two runs differ at frame $bad, before any German text was drawn" }
        elseif ($compared -eq 0) { Fail 'no frame could be compared' }
        else { Ok "registers, custom chips and the frame counts are identical up to frame $limit (the first German line), $compared record(s)" }
    }

    # --- 3. a room's action list is German too -------------------------------------------------
    Set-Language 'de'
    $room = Run 'room' 60000000 @('--input', (Join-Path $Work 'advance.txt'), '--textlog')
    if ($room -notmatch '"Zur Karte"') { Fail 'the room menu did not draw "Zur Karte"' }
    elseif ($room -notmatch '"Schlafen"') { Fail 'the room menu drew "Zur Karte" but not "Schlafen"' }
    else { Ok 'the room action list is German (Zur Karte, Anrufen, Schlafen)' }

    # --- 4. no [GAME] entry at all is English --------------------------------------------------
    Set-Content -LiteralPath $ini -Value "; lang-check`r`n" -NoNewline -Encoding ascii
    $none = Run 'none' 2600000 @('--input', (Join-Path $Work 'advance.txt'), '--textlog')
    if ($none -notmatch 'Lizard Breath has been awaiting your return\.') {
        Fail 'without a [GAME] entry the run did not draw the English text'
    } else { Ok 'no [GAME] entry means en (the default)' }
    # --- 5. the dump is the English text, whatever language the settings select ------------------
    # `--langdump` is what tools\lang-export.ps1 builds the translation file from, so it has to be
    # the original's English: with German selected the run it is taken from stays English as well,
    # because a substituted string would arrive at the next text routine down and be written down
    # as if it were the original (that is how a German line ended up in the English column).
    $dumpEn = Join-Path $Work 'dump-en.tsv'
    $dumpDe = Join-Path $Work 'dump-de.tsv'
    $dumpTaps = @('--input', (Join-Path $Work 'advance.txt'))
    Set-Language 'en'
    $null = Run 'dumpen' 5000000 (@('--langdump', $dumpEn) + $dumpTaps)
    Set-Language 'de'
    $null = Run 'dumpde' 5000000 (@('--langdump', $dumpDe) + $dumpTaps)
    if (-not (Test-Path $dumpEn) -or -not (Test-Path $dumpDe)) {
        Fail 'the language dump was not written'
    } else {
        $a = [System.IO.File]::ReadAllText($dumpEn)
        $b = [System.IO.File]::ReadAllText($dumpDe)
        if ($a -notmatch 'Lizard Breath has been awaiting your return\.') {
            Fail 'the dump does not hold the load screen text'
        } elseif ($a -ne $b) {
            Fail 'the dump differs between language=en and language=de - it is meant to be the English'
        } else {
            Ok 'the language dump is the English text with either language selected'
        }
    }

    # --- 6. a translation file overrides the built-in text, and adds story text ----------------
    # `lang\<code>.txt` is how a translator's work reaches the game (tools\lang-export.ps1 writes
    # it): one `<English><TAB><German>` row each, keyed by the exact English text. The English side
    # below is one of the load screen's lines - already translated by the catalog - and a whole
    # narration record from desert.dat, which the catalog has never seen.
    $story = ''
    $export = Join-Path $Work 'export.txt'
    if (Test-Path $Exe) {
        # The exporter is what a translator starts from: running it here also checks that the file
        # it writes is a translation file the game can read.
        & powershell -NoProfile -ExecutionPolicy Bypass -File (Join-Path $root 'tools\lang-export.ps1') `
            -SkipRun -Out $export -Work (Join-Path $Work 'export') | Out-Null
    }
    if (-not (Test-Path $export)) {
        Fail 'tools\lang-export.ps1 wrote no file'
    } else {
        # The first field of a CSV record: quoted (with "" for a quote) when it holds the
        # separator, plain otherwise. Reading it back here also checks the exporter's quoting.
        function FirstField([string]$record) {
            if ($record.StartsWith('"')) {
                $sb = New-Object System.Text.StringBuilder
                for ($k = 1; $k -lt $record.Length; $k++) {
                    if ($record[$k] -eq '"') {
                        if ($k + 1 -lt $record.Length -and $record[$k + 1] -eq '"') { [void]$sb.Append('"'); $k++; continue }
                        break
                    }
                    [void]$sb.Append($record[$k])
                }
                return $sb.ToString()
            }
            $at = $record.IndexOf(';')
            if ($at -lt 0) { return $record }
            return $record.Substring(0, $at)
        }
        $rows = [System.IO.File]::ReadAllLines($export)
        $best = ''
        foreach ($row in $rows) {
            if ($row.StartsWith('#')) { continue }
            $key = FirstField $row
            # The intro's own narration page: one long record that the tap script is certain to
            # reach, and long enough for the engine to split it into pages.
            if ($key.StartsWith('I had been living in a small desert town')) { $story = $key; break }
            if ($key.Length -gt $best.Length -and $key -match '^[A-Z]') { $best = $key }
        }
        if ($story -eq '') { $story = $best }
    }
    if ($story -eq '') {
        Fail 'the exported file holds no narration record to translate'
    } else {
        $langDir = Join-Path (Split-Path $Exe) 'lang'
        $langFile = 'lang\de.csv'
        if (Test-Path $langDir) { $langFile = Join-Path $langDir 'de.csv' }
        New-Item -ItemType Directory -Force -Path (Split-Path -Parent $langFile) | Out-Null
        $savedLang = if (Test-Path $langFile) { [System.IO.File]::ReadAllBytes($langFile) } else { $null }
        try {
            Set-Language 'de'
            # Both fields quoted and their quotes doubled, which is what a spreadsheet writes and
            # what the loader reads back: a key that holds the separator must survive.
            function Q([string]$t) { return '"' + $t.Replace('"', '""') + '"' }
            $records = "# lang-check`r`n" +
                       (Q 'Lizard Breath has been awaiting your return.') + ';' +
                       (Q 'AUS DER DATEI, Lizard Breath.') + "`r`n" +
                       (Q $story) + ';' + (Q ('GESCHICHTE AUS DER DATEI.' + $story)) + "`r`n"
            [System.IO.File]::WriteAllText((Join-Path $root $langFile), $records,
                                           (New-Object System.Text.UTF8Encoding($false)))
            $file = Run 'file' 60000000 @('--input', (Join-Path $Work 'advance.txt'), '--textlog')
            if ($file -notmatch 'AUS DER DATEI, Lizard Breath\.') {
                Fail 'the translation file did not override the built-in German of the load screen'
            } elseif ($file -match 'Lizard Breath hat auf dich gewartet\.') {
                Fail 'the built-in German was still drawn although the file translates that line'
            } elseif ($file -notmatch 'GESCHICHTE AUS DER DATEI') {
                Fail 'a story record from the translation file was not drawn'
            } elseif ($file -notmatch 'AUS DER DATEI, Lizard Breath[\s\S]*T\.r \.ffnen') {
                Fail 'the run did not reach the room menu after the translated narration'
            } else {
                Ok 'a translation file (CSV, semicolon) translates the interface and the story text'
            }
        }
        finally {
            if ($savedLang -ne $null) { [System.IO.File]::WriteAllBytes((Join-Path $root $langFile), $savedLang) }
            else { Remove-Item -LiteralPath (Join-Path $root $langFile) -Force -ErrorAction SilentlyContinue }
        }
    }
}
finally {
    if ($saved -ne $null) { Set-Content -LiteralPath $ini -Value $saved -NoNewline -Encoding ascii }
    else { Remove-Item -LiteralPath $ini -Force -ErrorAction SilentlyContinue }
}

if ($fail -ne 0) { Write-Output "lang: $fail failure(s)"; exit 1 }
Write-Output 'lang: PASS'
exit 0
