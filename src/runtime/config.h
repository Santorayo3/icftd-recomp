/* icftd.ini - the settings a player may edit.
 *
 * Plain INI: "[SECTION]" lines and "key=value" entries, ';' or '#' at the start of a line is a
 * comment. The file is read through the platform file calls, so this module knows nothing about
 * paths or handles, and the values stay in memory (the file is closed after loading).
 */
#ifndef ICFTD_CONFIG_H
#define ICFTD_CONFIG_H

#include "types.h"

/* Loads <exe dir>\icftd.ini, or icftd.ini in the working directory when that does not exist.
 * Returns 1 when a file was read. Reading it again replaces the previous settings. */
u32 rt_config_load(void);

/* rt_config_load, and when there is no file at all, writes the defaults next to the executable
 * first and loads those. A fresh copy of the game therefore starts with a complete icftd.ini
 * instead of silently running on fallbacks. Returns 1 when settings are loaded. */
u32 rt_config_ensure(void);

/* Path the settings came from, "" when rt_config_load found nothing. */
const char *rt_config_path(void);

/* Value of key in section (both case insensitive), 0 when either is absent. */
const char *rt_config_get(const char *section, const char *key);

/* As rt_config_get, read as a flag: 1/true/yes/on, 0/false/no/off. Anything else (including a
 * missing entry) gives fallback. */
int rt_config_bool(const char *section, const char *key, int fallback);

/* As rt_config_get, read as a decimal number clamped to lo..hi. A missing entry, a word or a
 * malformed number gives fallback. */
int rt_config_int(const char *section, const char *key, int fallback, int lo, int hi);

void rt_config_free(void);

#endif /* ICFTD_CONFIG_H */
