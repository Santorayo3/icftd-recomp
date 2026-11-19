# The translation file (`lang\<code>.csv`)

`icftd.ini` `[GAME] language=de` makes the game draw German. The interface, the menus and the
messages are part of the build (`src\runtime\lang.c`); **the game's own story** — what a room
narrates, what the people say, the telephone dialogue — arrives as a file here, so it can go to a
translator without touching the source.

`de.csv` is generated, and is not committed (it holds the game's script):

```
powershell -ExecutionPolicy Bypass -File tools\lang-export.ps1
powershell -ExecutionPolicy Bypass -File tools\lang-export.ps1 -Out bin\win32\lang\de.csv
```

The second form writes it where it is found first, next to the executable. The game looks for
`lang\<code>.csv` next to the executable, then up to two folders above it (which is where this
repository keeps it, at the top next to `bin\`), then in the working directory. The file it used is
printed at start-up.

## The format

A CSV with a **semicolon** separator — every spreadsheet opens it as two columns:

| English | German |
|---|---|
| `Look at Samples` | `Proben ansehen` |

* The English column is the exact text the engine draws and is the key it looks the translation up
  by — leave it untouched. Translate the German column.
* A field that holds the separator or a line break is quoted (`"..."`, `""` for a quote inside it);
  the spreadsheet writes that by itself, you do not have to.
* An empty German field is a placeholder: the record is skipped and the game keeps its own text
  (the built-in German for the interface, English for the story). A half-finished file is usable
  and can be extended at any time.
* Save it as **CSV with a semicolon separator** — "CSV UTF-8" in Excel. Umlauts and ß are welcome;
  ANSI (which a plain "CSV" save writes) is read as well, UTF-16 is not.
* Records that start with `#` are comments.
* The game reads the file at start-up: restart it to hear the change. No rebuild, no other step.
* Keep the text close to the English length: the engine wraps and centres with its own font, so a
  much longer line does not fit the box it was laid out for.
* Times and the messages the program formats itself (`June 1, 1951 - 09:32 a.m.`, `ETA: 00:05`) are
  not in the file — the game builds them from their format.

Full description: [docs/port-features.md](../docs/port-features.md), "The language" and
"The translation file".
