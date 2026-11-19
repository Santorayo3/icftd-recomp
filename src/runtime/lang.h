/* The game's own text in another language - icftd.ini [GAME] language.
 *
 * A port feature: the original is English-only, so there is nothing to diff this against. What it
 * owes instead is that its claim is exact: with language=de every string the engine draws is the
 * German one, and with language=en (the default) not a byte of the machine's state or of the
 * picture changes.
 *
 * The engine builds its screens from strings it passes to a handful of layout routines
 * (FUN_00004F0A wraps a block, FUN_00005012 a narration page, FUN_00004E2E centres one line, ...),
 * so the text is swapped where those routines receive it: an English string that has an entry in
 * the catalog is replaced by its German counterpart before the routine lays it out. Everything
 * downstream - the wrap, the centring, the pen it draws with - then runs on the German text with
 * the game's own font and the game's own arithmetic. That is also why the cursor and the pointer
 * stay on the lines they always did: the layout was never told which language it is drawing.
 *
 * The catalog lives here, on the host, and is copied into the machine's own RAM when a run starts
 * (rt_lang_open), because the engine can only read strings that are in its address space. The copy
 * goes above the emulated stack, in memory the machine model never hands to the game, so the game's
 * own RAM is the one an English run has (docs\port-features.md, "The language").
 */
#ifndef ICFTD_LANG_H
#define ICFTD_LANG_H

#include "types.h"
#include "machine.h"

/* Selects the language an icftd.ini value names: "de" is German, "en" - and anything else - the
 * original's English. Case insensitive. 1 when German is selected afterwards.
 *
 * German merges two sources: the catalog in lang.c and the translator's file `lang\de.csv` (a CSV
 * with a semicolon separator, `<English>;<German>`), whose records win over catalog entries with
 * the same English text. The file is read here, once, so a new translation needs no rebuild. */
u32 rt_lang_set(const char *code);

/* 1 when a language other than the original's is selected. */
u32 rt_lang_on(void);

/* The code the run was started with, "en" before rt_lang_set. */
const char *rt_lang_code(void);

/* The host's own strings (the title, the settings, the OSD line, ...): the German text when that
 * is selected, `en` itself otherwise. Never returns 0. */
const char *rt_lang_text(const char *en);

/* Copies the catalog into the machine's RAM and indexes it, for rt_lang_arg. Call after
 * rt_load_image and before the program boots; 1 when the index is up (0 leaves every string
 * English, which is what a build without the catalog doing [GAME] language=de would do). */
u32 rt_lang_open(rt_machine *m);

/* The German text for the string that lives at `arg` in the machine's memory, as a machine
 * address, or 0 when that string has no entry (English text, a pointer that is not a string at
 * all, or English selected).
 *
 * An exact catalog entry answers with its one copy in the machine's RAM, so a routine that keeps
 * the pointer (FUN_00005012 stores the narration string for the pause screen) still finds the
 * German text later. `writable` asks for a fresh copy instead, for the one routine that writes
 * into the string it is given (FUN_0000510E paginates by putting NULs at the breaks). */
u32 rt_lang_arg(rt_machine *m, u32 arg, int writable);

/* The English text that lives at `arg` in the machine's memory, when `arg` really is a printable
 * string there - 0 when it is not. The dump behind tools\lang-export.ps1 reads it to know which
 * strings a run hands to the text routines; rt_lang_arg accepts exactly what this accepts. The
 * pointer is into the machine's RAM and is only valid while that text does not change. */
const char *rt_lang_probe(rt_machine *m, u32 arg);

/* 1 when the text is one of the messages the program formats itself ("June 1, 1951 - 09:32 a.m.",
 * "ETA: 00:05", "Sleep for 3 hours.", ...), which rt_lang_arg rebuilds from the pattern: the dump
 * behind the export leaves those out, because a row for one clock time is a row for that time. */
int rt_lang_is_message(const char *en);

void rt_lang_close(void);

#endif /* ICFTD_LANG_H */
