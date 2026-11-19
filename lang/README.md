# Translations (`lang\`)

`icftd.ini` `[GAME] language=de` makes the game draw German. **Every** translated line is in a file
here — the interface, the menus, the map's place names, the boot's messages and the port's own
screens as well as the game's own story (what a room narrates, what the people say, the telephone
dialogue). One file per language: `de.csv` is German, `fr.csv` would be French.

Nothing is translated in the source any more. `src\runtime\lang.c` holds the loader and the
**interface's English vocabulary** — the list of lines the exporter has to know about — and the
translation itself is only ever the file.

## Three files, and what may be committed

The game does not look a string up *by* its English text, it looks it up by a **key**: a 64-bit
FNV-1a id of that text, printed as sixteen hex digits (`6C026B1480B9CCC4`). That is what makes it
possible to ship a translation without shipping the original's script.

| file | content | in the repository? |
|---|---|---|
| `lang\en.csv` | `<id>;<English>` — every text the game can draw | **no**: it is the game's own script |
| `lang\de.work.csv` | `<id>;<English>;<German>` — the translator's file | **no**: it has the English column |
| `lang\de.csv` | `<id>;<German>` — the translation | **yes** |

`en.csv` and `*.work.csv` are in `.gitignore`; every `<code>.csv` is meant to be committed. The ids
do not change as long as the English text does not, so a translation stays valid when the source is
regenerated.

## The workflow

```
# 1. the source text, from your own game data  -> lang\en.csv      (once per game data version)
powershell -ExecutionPolicy Bypass -File tools\lang-export.ps1

# 2. the translator's file, keeping what is already translated  -> lang\de.work.csv
powershell -ExecutionPolicy Bypass -File tools\lang-export.ps1 -Work

# 3. the committed translation, English stripped off            -> lang\de.csv
powershell -ExecutionPolicy Bypass -File tools\lang-export.ps1 -Pack
```

**Another language is the same three steps with `-Lang fr`**: `-Work` writes `lang\fr.work.csv`,
`-Pack` writes `lang\fr.csv`, and `icftd.ini` `[GAME] language=fr` draws it. Nothing in the game
has to be rebuilt for it — the file is the whole catalog.

Translate **column 3 of `de.work.csv`** — or its equivalent in a spreadsheet — and re-run `-Pack`.
Step 2 never loses work: it merges `en.csv` with whatever `de.csv` already has, and a translated
row the source no longer knows (a line that left the game's data) is kept as it is.

The format is a CSV with a **semicolon** separator, so every spreadsheet shows it as columns:

* Semicolon separator, `"CSV UTF-8"` when saving. `;`, `"` and line breaks in a field are quoted the
  way CSV quotes them — the spreadsheet does that by itself.
* An empty text field is a placeholder: the record is skipped and the line is drawn in English. A
  half-finished file is usable, and a missing row is the same as an empty one.
* One group of rows is a **format**, the shape of a message the program builds itself at run time —
  `Sleep for %d hours.`, `June %d, 1951 - %02d:%02d %s`, `Sorry, %s has been destroyed.`,
  `Sorry, %s is closed. It will open again at %d:00 %s.`, `ETA: %02d:%02d`, `REEL %d`, and the two
  halves of the clock's `a.m.`/`p.m.`. Keep their `%` marks, in the same order: the game fills the
  numbers in. A row whose `%` marks do not match its English one is ignored (that line stays
  English) rather than reading the wrong argument.
* Umlauts and ß are welcome; UTF-8 and ANSI (which a plain "CSV" save writes) both work, UTF-16 does
  not. Records that start with `#` are comments.
* The game reads the file at start-up — restart it, no rebuild. It prints the file it used and its
  size, so a translation that does not appear can be diagnosed.

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
