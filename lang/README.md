# Translations (`lang\`)

`icftd.ini` `[GAME] language=de` makes the game draw German. The interface, the menus and the
messages are part of the build (`src\runtime\lang.c`); **the game's own story** — what a room
narrates, what the people say, the telephone dialogue — arrives as a file here.

## Three files, and what may be committed

The game does not look a string up *by* its English text, it looks it up by a **key**: a 64-bit
FNV-1a id of that text, printed as sixteen hex digits (`6C026B1480B9CCC4`). That is what makes it
possible to ship a translation without shipping the original's script.

| file | content | in the repository? |
|---|---|---|
| `lang\en.csv` | `<id>;<English>` — every text the game can draw | **no**: it is the game's own script |
| `lang\de.work.csv` | `<id>;<English>;<German>` — the translator's file | **no**: it has the English column |
| `lang\de.csv` | `<id>;<German>` — the translation | **yes** |

`en.csv` and `*.work.csv` are in `.gitignore`; `de.csv` is meant to be committed. The ids do not
change as long as the English text does not, so a translation stays valid when the source is
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

Translate **column 3 of `de.work.csv`** — or its equivalent in a spreadsheet — and re-run `-Pack`.
Step 2 never loses work: it merges `en.csv` with whatever `de.csv` already has.

The format is a CSV with a **semicolon** separator, so every spreadsheet shows it as columns:

* Semicolon separator, `"CSV UTF-8"` when saving. `;`, `"` and line breaks in a field are quoted the
  way CSV quotes them — the spreadsheet does that by itself.
* An empty German field is a placeholder: the record is skipped and the game keeps its own text (the
  built-in German for the interface, English for the story). A half-finished file is usable.
* Umlauts and ß are welcome; UTF-8 and ANSI (which a plain "CSV" save writes) both work, UTF-16 does
  not. Records that start with `#` are comments.
* The game reads the file at start-up — restart it, no rebuild. It prints the file it used and its
  size, so a translation that does not appear can be diagnosed.

**Mind the spreadsheet:** a save re-writes the whole file, so open the file you are translating and
do not keep a second copy open elsewhere — a stale window saving over a newer file silently drops
what was added in between. `de.work.csv` is the safe place to work, because `-Pack` can always
rebuild `de.csv` from it; the reverse is not true.

## Copyright, in plain terms

* The **English column is the game's script**, decoded from `desert.dat`/`PHONE.DAT`. Redistributing
  it is exactly what this repository's `.gitignore` forbids ("nothing that is game artwork, that
  contains it, or that was decoded from it may be committed") — that is why `en.csv` and the work
  file are ignored, and why the shipped file is keyed by an id instead: an id is a fact about the
  text, not the text.
* The **German text is a translation**, and two separate rights meet in it. One is the translator's:
  a translation is protected as its own work (§3 UrhG), and if you commissioned it, whether those
  rights came to you is what your contract with the translator says — in Germany the author stays
  the natural person and the rights have to be granted explicitly (§31 UrhG), so "paid for" alone is
  not the same as "assigned". The other is the original's: a translation is also a derivative of the
  game's script, and *publishing* it needs the rights holder's consent (§23 UrhG). Holding the
  translation rights settles the first, not the second.
* What the port itself ships is the **interface** German in `lang.c` — short functional labels,
  prompts and messages ("Look North", "Game Paused", "Die Tür ist abgeschlossen"), not the story.
* So committing `de.csv` (or shipping it in a release) reproduces no game text — the ids see to
  that — and the remaining question is the same one the game data itself raises: whether the story
  may be published in German. Whoever publishes it decides that; keeping it out of the repository
  and offering it as a separate file a player drops into `lang\` is the cautious route. (Not legal
  advice — ask the rights holder or a lawyer.)

Full description: [docs/port-features.md](../docs/port-features.md), "The language" and
"The translation file".
