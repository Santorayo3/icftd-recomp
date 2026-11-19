/* The game's own source text, written from the player's own data.
 *
 * A translation is keyed by the id of the English text, so the translator needs the English side
 * first - the file the exporter builds for the development tree (`lang\en.csv` and, for the add-on,
 * `lang\en_ant.csv`). Nothing of that may be shipped (it is the game's own script), but the player
 * has the only legitimate source of it: the extracted data. `rt_lang_source_write` reads that tree
 * and writes the two files, so a translation can be started without a developer checkout.
 */
#ifndef ICFTD_LANG_SOURCE_H
#define ICFTD_LANG_SOURCE_H

#include "types.h"

/* Writes `en.csv` (the 1989 game) and, when the add-on's tree is in dataDir, `en_ant.csv` into
 * `dir` - the language folder the game reads its translations from. `force` 0 leaves a file that
 * is already there alone (never overwrite an editor's), 1 rewrites it. `layout` is one of
 * RT_ASSETS_WINDOWS / RT_ASSETS_DOS (assets.h); the DOS tree names the same files 8.3. Returns how
 * many files were written, or -1 when a file could not be written (msg says which). */
int rt_lang_source_write(const char *dataDir, int layout, const char *dir, int force, char *msg,
                         u32 max);

#endif /* ICFTD_LANG_SOURCE_H */
