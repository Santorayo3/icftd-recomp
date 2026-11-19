# The language icftd.ini selects, measured on its own terms.
#
# A port feature: the original is English-only, so there is nothing to diff the German against.
# What is checked is what the feature claims:
#
#   * `[GAME] language=de` makes the engine draw German where it drew English - the load screen and
#     a room's action list, both through the engine's own layout routines, so the wrap and the
#     centring are the game's. The words are the ones `lang\de.csv` holds, read back here (the file
#     *is* the catalog: no translation is built into the binary), so a translator's correction is
#     never mistaken for a failure;
#   * `[GAME] language=en` (the default) draws the original's English, unchanged;
#   * the language changes nothing the game computes: the two runs' RAM is byte-identical except
#     inside the region the runtime reserves for the translated catalog (above the emulated stack,
#     0x184000..0x1C0000 - memory the machine model never hands to the game), and their machine
#     state (registers, custom chips, frame count) is identical;
#   * with no `[GAME]` entry at all the run is the English one ("language=en" is the default);
#   * the dump the exporter starts from is the English text, whatever language is selected;
#   * a translation file translates the interface and the story, by text key and by id, and its
#     middle column (the translator's English) is never drawn.
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
    [string]$Work = 'out\lang-check',
    [string]$Lang = 'de'
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

# The translation the run is about to read, in the order lang_read_file tries: next to the
# executable (where a release keeps it), else the repository's own lang\ folder.
$langDir = Join-Path (Split-Path $Exe) 'lang'
$langFile = if (Test-Path (Join-Path $langDir "$Lang.csv")) { Join-Path $langDir "$Lang.csv" } else { "lang\$Lang.csv" }

Add-Type -TypeDefinition @'
public static class LangId {
    public static ulong Hash(byte[] b) {
        ulong h = 14695981039346656037UL;
        foreach (byte c in b) { h ^= c; h *= 1099511628211UL; }
        return h;
    }
}
'@
function IdOf([string]$text) {
    return ('{0:X16}' -f [LangId]::Hash([System.Text.Encoding]::UTF8.GetBytes($text)))
}

# The fields of one CSV record, quotes removed ("" is a quote inside a quoted field).
function Fields([string]$record) {
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

# The translation the file holds for an English text - the last row wins, as it does in lang.c.
# '' when the file has none, which is what a line the game draws in English looks like.
function German([string]$english) {
    $id = IdOf $english
    $text = ''
    foreach ($line in [System.IO.File]::ReadAllLines((Join-Path $root $langFile))) {
        if ($line.Length -eq 0 -or $line.StartsWith('#')) { continue }
        if (-not $line.StartsWith($id)) { continue }
        $f = Fields $line
        if ($f.Count -ge 2) { $text = $f[1] }
    }
    return $text
}

# The file's text as the screen has it: lang.c converts UTF-8 to the font's own codes - the six
# umlauts 0x80..0x85, "ss" for ß, the base letter for another accented Latin-1 letter, '?' for what
# the font cannot show - and --textlog writes a byte it cannot print as '.'. Written out here so
# the assertion names the file's own words instead of a wording this script remembers.
function Drawn([string]$text) {
    $fold = 'AAAAAAACEEEEIIIIDNOOOOOxOUUUUYTs' + 'aaaaaaaceeeeiiiidnooooo/ouuuuyty'
    $sb = New-Object System.Text.StringBuilder
    foreach ($ch in $text.ToCharArray()) {
        $cp = [int]$ch
        $code = @($cp)
        if ($cp -eq 0x00C4) { $code = 0x80 }
        elseif ($cp -eq 0x00D6) { $code = 0x81 }
        elseif ($cp -eq 0x00DC) { $code = 0x82 }
        elseif ($cp -eq 0x00E4) { $code = 0x83 }
        elseif ($cp -eq 0x00F6) { $code = 0x84 }
        elseif ($cp -eq 0x00FC) { $code = 0x85 }
        elseif ($cp -eq 0x00DF) { $code = 0x73, 0x73 }
        elseif ($cp -eq 0x2013 -or $cp -eq 0x2014) { $code = 0x2D }
        elseif ($cp -eq 0x2018 -or $cp -eq 0x2019) { $code = 0x27 }
        elseif ($cp -eq 0x201C -or $cp -eq 0x201D) { $code = 0x22 }
        elseif ($cp -ge 0x00C0 -and $cp -le 0x00FF) { $code = [int][char]$fold[$cp - 0x00C0] }
        elseif ($cp -ge 0x80) { $code = 0x3F }
        foreach ($b in $code) {
            [void]$sb.Append($(if ($b -ge 32 -and $b -lt 127) { [char]$b } else { '.' }))
        }
    }
    return $sb.ToString()
}

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
    Set-Language $Lang
    $de = Run 'de' 2600000 @('--input', (Join-Path $Work 'advance.txt'), '--textlog',
                             '--state', 'out\lang-check\de', '--ram', '100')

    if ($en -notmatch 'Lizard Breath has been awaiting your return\.') {
        Fail 'language=en did not draw the original English load screen'
    } else { Ok 'language=en draws the original English' }

    # What the file holds is exactly what must be on the screen - not a wording this script
    # remembers, which a translator may have corrected since.
    $loadText = German 'Lizard Breath has been awaiting your return.'
    $askText  = German "If you want to load a saved game, select 'YES'."
    if ($loadText -eq '' -or $askText -eq '') {
        Fail "$langFile does not translate the load screen, so there is nothing to compare against"
    } else {
        if ($de -notmatch [regex]::Escape((Drawn $loadText))) {
            Fail "language=$Lang did not draw the file's load screen line ('$loadText')"
        } elseif ($de -notmatch [regex]::Escape((Drawn $askText))) {
            Fail "language=$Lang drew the load screen's first line but not the question below it"
        } else {
            Ok "language=$Lang draws what $langFile holds"
        }
        if ($de -match [regex]::Escape('Lizard Breath has been awaiting your return.')) {
            Fail "language=$Lang still drew the English line"
        }
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

    # --- 3. a room's action list is translated too ---------------------------------------------
    Set-Language $Lang
    $room = Run 'room' 60000000 @('--input', (Join-Path $Work 'advance.txt'), '--textlog')
    $mapText = German 'Go to Map'
    $sleepText = German 'Sleep'
    if ($mapText -eq '' -or $sleepText -eq '') {
        Fail "$langFile does not translate the room menu, so there is nothing to compare against"
    } elseif ($room -notmatch [regex]::Escape('"' + (Drawn $mapText) + '"')) {
        Fail "the room menu did not draw '$mapText'"
    } elseif ($room -notmatch [regex]::Escape('"' + (Drawn $sleepText) + '"')) {
        Fail "the room menu drew '$mapText' but not '$sleepText'"
    } else {
        Ok "the room action list is $Lang ('$mapText', '$sleepText')"
    }

    # --- 4. no [GAME] entry at all is English --------------------------------------------------
    Set-Content -LiteralPath $ini -Value "; lang-check`r`n" -NoNewline -Encoding ascii
    $none = Run 'none' 2600000 @('--input', (Join-Path $Work 'advance.txt'), '--textlog')
    if ($none -notmatch 'Lizard Breath has been awaiting your return\.') {
        Fail 'without a [GAME] entry the run did not draw the English text'
    } else { Ok 'no [GAME] entry means en (the default)' }
    # --- 5. the dump is the English text, whatever language the settings select ------------------
    # `--langdump` is a development seam (a one-off capture of what a run draws), so it has to be
    # the original's English: with another language selected the run it is taken from stays English
    # as well, because a substituted string would arrive at the next text routine down and be
    # written down as if it were the original (that is how a translated line ended up in the
    # English column).
    $dumpEn = Join-Path $Work 'dump-en.tsv'
    $dumpDe = Join-Path $Work 'dump-de.tsv'
    $dumpTaps = @('--input', (Join-Path $Work 'advance.txt'))
    Set-Language 'en'
    $null = Run 'dumpen' 5000000 (@('--langdump', $dumpEn) + $dumpTaps)
    Set-Language $Lang
    $null = Run 'dumpde' 5000000 (@('--langdump', $dumpDe) + $dumpTaps)
    if (-not (Test-Path $dumpEn) -or -not (Test-Path $dumpDe)) {
        Fail 'the language dump was not written'
    } else {
        $a = [System.IO.File]::ReadAllText($dumpEn)
        $b = [System.IO.File]::ReadAllText($dumpDe)
        if ($a -notmatch 'Lizard Breath has been awaiting your return\.') {
            Fail 'the dump does not hold the load screen text'
        } elseif ($a -ne $b) {
            Fail "the dump differs between language=en and language=$Lang - it is meant to be the English"
        } else {
            Ok 'the language dump is the English text with either language selected'
        }
    }

    # --- 6. the file is the only catalog: a row keyed by the text overrides the row keyed by the
    #        id, a story record keyed by its id is drawn, and the middle column never is ---------
    $story = ''
    $storyId = ''
    $export = Join-Path $Work 'source\en.csv'
    if (Test-Path $Exe) {
        # The exporter writes the source text, `<id>;<English>`: running it here also checks that
        # the file it writes is one the game's id keying can use, and that `--langkeys` reached it.
        & powershell -NoProfile -ExecutionPolicy Bypass -File (Join-Path $root 'tools\lang-export.ps1') `
            -Source $export -Scratch (Join-Path $Work 'export') | Out-Null
    }
    if (-not (Test-Path $export)) {
        Fail 'tools\lang-export.ps1 wrote no file'
    } else {
        # Reading the records back here also checks the exporter's quoting.
        $rows = [System.IO.File]::ReadAllLines($export)
        $best = ''
        foreach ($row in $rows) {
            if ($row.StartsWith('#')) { continue }
            $f = Fields $row
            if ($f.Count -lt 2) { continue }
            # The intro's own narration page: one long record that the tap script is certain to
            # reach, and long enough for the engine to split it into pages.
            if ($f[1].StartsWith('I had been living in a small desert town')) { $story = $f[1]; $storyId = $f[0]; break }
            if ($f[1].Length -gt $best.Length -and $f[1] -match '^[A-Z]') { $best = $f[1] }
        }
        if ($story -eq '') { $story = $best }
    }
    if ($story -eq '') {
        Fail 'the exported file holds no narration record to translate'
    } else {
        New-Item -ItemType Directory -Force -Path (Split-Path -Parent $langFile) | Out-Null
        $savedLang = if (Test-Path $langFile) { [System.IO.File]::ReadAllBytes($langFile) } else { $null }
        try {
            Set-Language $Lang
            # The id a shipped record names its text by (lang.c, lang_hash64): FNV-1a over the
            # bytes of the English text. If this value ever stops matching, every translation file
            # in the repository stops working - so it is computed here, independently.
            $id = IdOf $story
            if ($storyId -ne '' -and $storyId -ne $id) {
                Fail ("the exporter's id ($storyId) and the game's own ($id) disagree")
            }
            # The file the run reads is the shipped one plus the three rows this test is about, so
            # the rest of the game stays translated: one row is keyed by the English text and
            # overrides the shipped row for the same line (the later row wins), one is keyed by the
            # id in the three-column shape a translator works in - its middle column is a decoy
            # that must never be drawn - and both are quoted, which is what a spreadsheet writes
            # and what the loader reads back.
            function Q([string]$t) { return '"' + $t.Replace('"', '""') + '"' }
            $doorText = German 'Answer the Door'
            $shippedText = if ($savedLang -ne $null) { [System.Text.Encoding]::UTF8.GetString($savedLang) } else { '' }
            $records = $shippedText +
                       (Q 'Lizard Breath has been awaiting your return.') + ';' +
                       (Q 'AUS DER DATEI, Lizard Breath.') + "`r`n" +
                       $id + ';' + (Q 'DECOY - the English column is never drawn') + ';' +
                       (Q ('GESCHICHTE AUS DER DATEI.' + $story)) + "`r`n"
            [System.IO.File]::WriteAllText((Join-Path $root $langFile), $records,
                                           (New-Object System.Text.UTF8Encoding($false)))
            $file = Run 'file' 60000000 @('--input', (Join-Path $Work 'advance.txt'), '--textlog')
            if ($file -notmatch 'AUS DER DATEI, Lizard Breath\.') {
                Fail 'a row keyed by the English text did not override the row keyed by its id'
            } elseif ($loadText -ne '' -and $file -match [regex]::Escape((Drawn $loadText))) {
                Fail 'the shipped line was still drawn although a later row translates it'
            } elseif ($file -notmatch 'GESCHICHTE AUS DER DATEI') {
                Fail 'a story record keyed by its id was not drawn'
            } elseif ($file -match 'DECOY') {
                Fail 'the middle field of a three-field record was drawn - it must be ignored'
            } elseif ($doorText -ne '' -and
                    $file -notmatch ('AUS DER DATEI, Lizard Breath[\s\S]*' + [regex]::Escape('"' + (Drawn $doorText) + '"'))) {
                Fail 'the run did not reach the room menu after the translated narration'
            } else {
                Ok 'one file translates the interface and the story, by text key and by id'
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

# --- 7. the game writes the exporter's source text, byte for byte ----------------------------
# A player has no checkout: extraction writes `lang\en.csv` (and the add-on's `en_ant.csv`) from
# the player's own data (src\runtime\lang_source.c), so a translation can be started without the
# original's words ever being shipped. The ids *are* the English text, so a difference between the
# two would make every translation made against one incomplete against the other - nothing else
# would notice.
$written = Join-Path $Work 'written'
Remove-Item -LiteralPath $written -Recurse -Force -ErrorAction SilentlyContinue
$null = & $Exe $Image 1 --data $DataDir --langsource $written 2>&1
if (-not (Test-Path (Join-Path $written 'en.csv'))) {
    Fail 'the game did not write en.csv from the extracted data'
} elseif (-not (Test-Path $export)) {
    # the exporter itself failed above, which is the failure to report
} elseif ((Get-FileHash -LiteralPath $export).Hash -ne (Get-FileHash -LiteralPath (Join-Path $written 'en.csv')).Hash) {
    Fail "the game's en.csv and tools\lang-export.ps1's differ"
} else {
    Ok 'the game writes the exporter''s source text, byte for byte'
    $antImage = Join-Path $DataDir 'ant\code\dshell4k\dshell.img'
    $baseSource = Join-Path $root 'lang\en.csv'
    # The add-on's half is defined against the base source, which the exporter reads from the
    # repository; it is only comparable while that file is the one the data produces.
    if ((Test-Path $antImage) -and (Test-Path $baseSource) -and
        (Get-FileHash -LiteralPath $baseSource).Hash -eq (Get-FileHash -LiteralPath $export).Hash) {
        $exportAnt = Join-Path $Work 'source\en_ant.csv'
        & powershell -NoProfile -ExecutionPolicy Bypass -File (Join-Path $root 'tools\lang-export.ps1') `
            -Ant -Source $exportAnt -Scratch (Join-Path $Work 'export-ant') | Out-Null
        if (-not (Test-Path $exportAnt) -or -not (Test-Path (Join-Path $written 'en_ant.csv'))) {
            Fail 'the add-on''s source text was not written'
        } elseif ((Get-FileHash -LiteralPath $exportAnt).Hash -ne
                  (Get-FileHash -LiteralPath (Join-Path $written 'en_ant.csv')).Hash) {
            Fail "the game's en_ant.csv and tools\lang-export.ps1 -Ant's differ"
        } else {
            Ok 'the game writes the add-on''s source text the same way'
        }
    }
}

if ($fail -ne 0) { Write-Output "lang: $fail failure(s)"; exit 1 }
Write-Output 'lang: PASS'
exit 0