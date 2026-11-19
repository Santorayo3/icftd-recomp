/* The game's own text in another language - the settings view's Language row, icftd.ini [GAME]
 * language.
 *
 * A port feature: the original is English-only, so there is nothing to diff this against. What it
 * owes instead is that its claim is exact: with a language selected every string the engine draws
 * is that language's, and with English (the default) not a byte of the machine's state or of the
 * picture changes.
 *
 * Every translation is one file, `lang\<code>.csv` next to the executable: the interface, the
 * menus, the map's place names, the boot's messages and the port's own screens as well as the
 * game's story. Nothing is translated in the sources - lang.c holds the loader, the interface's
 * English vocabulary (rt_lang_key) and the rule for what a complete translation is, so adding a
 * language is a file, not a build. Each row is keyed by the FNV-1a id of the English text, so a
 * shipped translation never repeats the original's words (docs\port-features.md, "The translation
 * file").
 *
 * The engine builds its screens from strings it passes to a handful of layout routines
 * (FUN_00004F0A wraps a block, FUN_00005012 a narration page, FUN_00004E2E centres one line, ...),
 * so the text is swapped where those routines receive it: an English string that has a row in the
 * file is replaced by its translation before the routine lays it out. Everything downstream - the
 * wrap, the centring, the pen it draws with - then runs on the translated text with the game's own
 * font and the game's own arithmetic. That is also why the cursor and the pointer stay on the lines
 * they always did: the layout was never told which language it is drawing.
 *
 * The catalog is read on the host and copied into the machine's own RAM when a run starts
 * (rt_lang_open) and again whenever the settings view switches the language, because the engine can
 * only read strings that are in its address space. The copy goes above the emulated stack, in memory
 * the machine model never hands to the game, so the game's own RAM is the one an English run has
 * (docs\port-features.md, "The language").
 */
#ifndef ICFTD_LANG_H
#define ICFTD_LANG_H

#include "types.h"
#include "machine.h"

/* Selects a language by its code: "en" - and anything that is not a usable language code - is the
 * original's English, every other code reads `lang\<code>.csv`. Case insensitive; the settings
 * view's switch and host_lang_switch come through here as well as the ini's value.
 * 1 when a language is selected afterwards, i.e. the file was found, holds rows and is complete;
 * 0 when the run stays English (a missing or incomplete file is reported, so it is a one-line
 * diagnosis).
 *
 * The file is the only catalog there is: no translation is built into the binary. A row whose text
 * field is empty is a placeholder for the translator and changes nothing. */
u32 rt_lang_set(const char *code);

/* The languages the settings view may offer, browsed at start-up (rt_lang_scan): the original's
 * English, always first and needing no file, then every `lang\<code>.csv` whose name is a
 * two-letter code and whose rows cover *every* line the game needs - a complete translation, which
 * is the only kind this build offers. "Complete" is measured against the interface's own
 * vocabulary (rt_lang_key) plus, where the source text `lang\en.csv` is present, every id it
 * lists; a file that misses one is named on the console and left out of the list.
 *
 * rt_lang_available_count is never 0 (English), so a caller can index the list without a special
 * case. It scans first if that has not happened yet. */
u32 rt_lang_scan(void);
int rt_lang_available_count(void);
const char *rt_lang_available(int i);
int rt_lang_available_index(const char *code);

/* 1 when a language other than the original's is selected. */
u32 rt_lang_on(void);

/* The code in force, "en" for the original's English. */
const char *rt_lang_code(void);

/* The interface's English text: the lines the engine and the port's own screens draw which do not
 * come from the game's data bank (the menus, the map's place names, the boot's messages, the title,
 * the save slots, the OSD) and, at the end, the formats of the messages the program builds itself.
 * It is what tools\lang-export.ps1 adds to the source text (`--langkeys`) so a translator sees
 * every line, and it is English only: the translation is the file's. */
int rt_lang_key_count(void);
const char *rt_lang_key(int i);

/* The host's own strings (the title, the settings, the OSD line, ...): the translated text when a
 * language is selected, `en` itself otherwise. Never returns 0. */
const char *rt_lang_text(const char *en);

/* Copies the catalog into the machine's RAM and indexes it, for rt_lang_arg. Call after
 * rt_load_image and before the program boots; 1 when the index is up (0 leaves every string
 * English, which is what a run without a translation file does). */
u32 rt_lang_open(rt_machine *m);

/* The translated text for the string that lives at `arg` in the machine's memory, as a machine
 * address, or 0 when that string has no row (English text, a pointer that is not a string at all,
 * or English selected).
 *
 * An exact row answers with its one copy in the machine's RAM, so a routine that keeps the pointer
 * (FUN_00005012 stores the narration string for the pause screen) still finds the translated text
 * later. `writable` asks for a fresh copy instead, for the one routine that writes into the string
 * it is given (FUN_0000510E paginates by putting NULs at the breaks). */
u32 rt_lang_arg(rt_machine *m, u32 arg, int writable);

/* The English text that lives at `arg` in the machine's memory, when `arg` really is a printable
 * string there - 0 when it is not. The dump behind tools\lang-export.ps1 reads it to know which
 * strings a run hands to the text routines; rt_lang_arg accepts exactly what this accepts. The
 * pointer is into the machine's RAM and is only valid while that text does not change. */
const char *rt_lang_probe(rt_machine *m, u32 arg);

/* 1 when the text is one of the messages the program formats itself ("June 1, 1951 - 09:32 a.m.",
 * "ETA: 00:05", "Sleep for 3 hours.", ...), which rt_lang_arg rebuilds from the format the file
 * holds for it: the dump behind the export leaves those out, because a row for one clock time is a
 * row for that time. */
int rt_lang_is_message(const char *en);

void rt_lang_close(void);

#endif /* ICFTD_LANG_H */
