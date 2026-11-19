# Translations (`lang\`)

The game finds its translations itself: **every `<code>.csv` in this folder is a language**, where
`<code>` is a two-letter name (`de.csv` is German, `fr.csv` would be French) and the file holds
**every** translated line — the interface, the menus, the map's place names, the boot's messages and
the port's own screens as well as the game's own story (what a room narrates, what the people say,
the telephone dialogue). At start-up the game browses the folder, keeps the files that are
**complete**, and offers them in the title menu's settings: **Settings → Language**, with the two
letter name between the minus and plus buttons. That row writes `icftd.ini` `[GAME] language=<code>`,
so the next start uses it too.

**The add-on has its own half.** `de.csv` translates the 1989 game; the add-on *Antheads* has a
second script, and its lines live in `de_ant.csv` (the language code and `_ant`). The game loads
`<code>.csv` first and then merges `<code>_ant.csv` over it, so the interface and every line the two
games share come from one file and only the add-on's own rooms, people and narration need the second.
That second file is optional: without it the add-on's story is drawn in English while the rest of the
game stays translated.

Nothing has to be rebuilt or configured: drop `fr.csv` into `lang\`, start the game, and `fr` is one
of the languages the row steps through. A file that is *not* complete is left out (and named on the
console with the number of missing lines), and `[GAME] language` naming it leaves the run in English —
a half-finished file would draw a mixture of two languages, which reads as a broken translation
rather than as an unfinished one.

Nothing is translated in the source any more. `src\runtime\lang.c` holds the loader, the
**interface's English vocabulary** — the list of lines the exporter has to know about — and the rule
for what "complete" means; the translation itself is only ever the file.

## What "complete" means

* every line of the interface's own vocabulary: the engine's menus, the map's place names, the boot's
  messages, the save/load screen and the port's own screens (the title, the settings, the save slots,
  the OSD), plus the **formats** of the messages the program builds itself (`Sleep for %d hours.`,
  `June %d, 1951 - %02d:%02d %s`, …), whose `%` marks have to come in the same order as the
  English ones;
* and, when the source text `lang\en.csv` is there, every id it lists — the game's own script. The
  game writes that file itself, from the player's own extracted data, at the first start (see
  below), so a release normally has it too; only a folder the game cannot write is measured against
  the interface alone.

`<code>_ant.csv` is measured against `lang\en_ant.csv` when that source is there: every id it lists
**that `en.csv` does not already cover** (the shared lines are the base file's). A half-finished
add-on file is skipped and named on the console, exactly like a half-finished language; the add-on's
text then stays English while `de.csv` keeps working.

`tools\lang-export.ps1` never writes an incomplete file: `-Pack` takes the work file and keeps its
translated side, and `-Work` puts back every row the translation already has, so a translation that
was packed once stays complete when the source is regenerated.

## Three files, and what may be committed

The game does not look a string up *by* its English text, it looks it up by a **key**: a 64-bit
FNV-1a id of that text, printed as sixteen hex digits (`6C026B1480B9CCC4`). That is what makes it
possible to ship a translation without shipping the original's script.

| file | content | in the repository? |
|---|---|---|
| `lang\en.csv` | `<id>;<English>` — every text the 1989 game can draw | **no**: it is the game's own script |
| `lang\en_ant.csv` | `<id>;<English>` — the add-on's own lines (the shared ones are in `en.csv`) | **no**: it is the game's own script |
| `lang\de.work.csv` | `<id>;<English>;<German>` — the translator's file | **no**: it has the English column |
| `lang\de_ant.work.csv` | the same for the add-on's half | **no**: it has the English column |
| `lang\de.csv` | `<id>;<German>` — the translation | **yes** |
| `lang\de_ant.csv` | `<id>;<German>` — the add-on's half | **yes** |

`en.csv`, `en_ant.csv` and `*.work.csv` are in `.gitignore`; every `<code>.csv` and `<code>_ant.csv`
is meant to be committed. The ids do not change as long as the English text does not, so a
translation stays valid when the source is regenerated. A work file is not a language name
(`de.work.csv` is not two letters and `.csv`), so the game never picks it up — and `de_ant.csv` is an
overlay, not a language the settings row offers.

### Where the two English files come from

They are the game's own script and are never shipped. You get them from the game data you own:

* **A player** gets them automatically: on the first start, once the data has been extracted from
  their own floppy images, the game writes `lang\en.csv` and (when the add-on's disks are there)
  `lang\en_ant.csv` next to the translations. A file that is already there is never overwritten, so
  a translator's copy stays as it is.
* **A development tree** writes the same bytes with `tools\lang-export.ps1` (step 1 below); the two
  writers are asserted byte-identical by `tools\lang-check.ps1`, because an id *is* the English text
  — a difference would silently make every translation incomplete.

## The workflow

```
# 1. the source text, from your own game data  -> lang\en.csv      (once per game data version)
powershell -ExecutionPolicy Bypass -File tools\lang-export.ps1

# 2. the translator's file, keeping what is already translated  -> lang\de.work.csv
powershell -ExecutionPolicy Bypass -File tools\lang-export.ps1 -Work

# 3. the committed translation, English stripped off            -> lang\de.csv
powershell -ExecutionPolicy Bypass -File tools\lang-export.ps1 -Pack

# the add-on's own half: the same three steps plus -Ant
powershell -ExecutionPolicy Bypass -File tools\lang-export.ps1 -Ant            # -> lang\en_ant.csv
powershell -ExecutionPolicy Bypass -File tools\lang-export.ps1 -Ant -Work      # -> lang\de_ant.work.csv
powershell -ExecutionPolicy Bypass -File tools\lang-export.ps1 -Ant -Pack      # -> lang\de_ant.csv
```

`-Ant` reads the add-on's banks (`ant2\Desert2.dat`, `ant2\phone2.dat`), scans the add-on's program
for the strings it carries itself (the intro, the radio bulletins, the telephone lines and the
endings), and leaves out every id `en.csv` already lists, so the two source files do not overlap.

**Another language is the same three steps with `-Lang fr`**: `-Work` writes `lang\fr.work.csv`,
`-Pack` writes `lang\fr.csv` — and the game offers `fr` in Settings → Language from the next start
on (and `icftd.ini` `[GAME] language=fr` selects it without the menu). Nothing in the game has to be
rebuilt for it — the file is the whole catalog.

Translate **column 3 of `de.work.csv`** — or its equivalent in a spreadsheet — and re-run `-Pack`.
Step 2 never loses work: it merges `en.csv` with whatever `de.csv` already has, and a translated
row the source no longer knows (a line that left the game's data) is kept as it is.

The format is a CSV with a **semicolon** separator, so every spreadsheet shows it as columns:

* Semicolon separator, `"CSV UTF-8"` when saving. `;`, `"` and line breaks in a field are quoted the
  way CSV quotes them — the spreadsheet does that by itself.
* An empty text field is a placeholder: the loader skips the record and the line stays English — but
  a file that still holds one is not complete, so the settings row does not offer it (and
  `[GAME] language` naming it keeps the run English). A missing row counts the same.
* One group of rows is a **format**, the shape of a message the program builds itself at run time —
  `Sleep for %d hours.`, `June %d, 1951 - %02d:%02d %s`, `January %d, 1956 - %02d:%02d %s`,
  `Sorry, %s has been destroyed.`, `Sorry, %s is closed. It will open again at %d:00 %s.`,
  `The number %d. Hmmmmmm, wonder what that could mean.`, `There's just one other thing. I don't
  know if this means anything, but the number %d keeps going through my head.`, `ETA: %02d:%02d`,
  `REEL %d`, and the two halves of the clock's `a.m.`/`p.m.`. Keep their `%` marks, in the same order: the game fills the
  numbers in. A row whose `%` marks do not match its English one is ignored (that line stays
  English) rather than reading the wrong argument.
* Umlauts and ß are welcome; UTF-8 and ANSI (which a plain "CSV" save writes) both work, UTF-16 does
  not. Records that start with `#` are comments.
* The game reads the files at start-up — restart it, no rebuild. The folder it browsed, every
  language it offers and the file each one lives in are printed, so a translation that does not
  appear can be diagnosed (an incomplete one says how many lines it is missing).

**The font is ASCII.** `Ä Ö Ü ä ö ü` are six glyphs of the port's own, `ß` is drawn as "ss", and
any other accented Latin letter is drawn as its base letter (`é` → `e`, `ñ` → `n`, `Å` → `A`) — a
word stays readable where a `?` would not. Letters outside Latin-1 (Polish `ł`, Czech `ř`, Greek,
Cyrillic, ...) come out as `?`.

**Mind the spreadsheet:** a save re-writes the whole file, so open the file you are translating and
do not keep a second copy open elsewhere — a stale window saving over a newer file silently drops
what was added in between. `de.work.csv` is the safe place to work, because `-Pack` can always
rebuild `de.csv` from it; the reverse is not true.

## Copyright, in plain terms

* The **English column is the game's script**, decoded from `desert.dat`/`PHONE.DAT`, out of the
  running program and out of the interface vocabulary in `lang.c`. Redistributing it is exactly what
  this repository's `.gitignore` forbids ("nothing that is game artwork, that contains it, or that
  was decoded from it may be committed") — that is why `en.csv` and the work file are ignored, and
  why the shipped file is keyed by an id instead: an id is a fact about the text, not the text.
* The **German text is a translation**, and two separate rights meet in it. One is the translator's:
  a translation is protected as its own work (§3 UrhG), and if you commissioned it, whether those
  rights came to you is what your contract with the translator says — in Germany the author stays
  the natural person and the rights have to be granted explicitly (§31 UrhG), so "paid for" alone is
  not the same as "assigned". The other is the original's: a translation is also a derivative of the
  game's script, and *publishing* it needs the rights holder's consent (§23 UrhG). Holding the
  translation rights settles the first, not the second.
* The interface rows in the file are short functional labels, prompts and messages ("Look North",
  "Game Paused", "Die Tür ist abgeschlossen"), not the story — the same kind of text the port used
  to build in.
* So committing `de.csv` (or shipping it in a release) reproduces no game text — the ids see to
  that — and the remaining question is the same one the game data itself raises: whether the story
  may be published in German. Whoever publishes it decides that; keeping it out of the repository
  and offering it as a separate file a player drops into `lang\` is the cautious route. (Not legal
  advice — ask the rights holder or a lawyer.)

Full description: [docs/port-features.md](../docs/port-features.md), "The language" and
"The translation file".
