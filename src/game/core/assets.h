/* First-run asset preparation.
 *
 * The repository holds no game data, so game.pak is decoded from the user's own
 * Amiga floppy images (disks\*.adf) the first time the game starts.  Everything is
 * resolved from the executable's folder - never the working directory - so the game
 * works from bin\win32 inside the repository as well as from a distribution folder.
 */
#ifndef ICFTD_ASSETS_H
#define ICFTD_ASSETS_H

#include "types.h"

/* Path of the resolved game.pak; only valid after assets_prepare() returned 1. */
const char *assets_pack_path(void);

/* Makes sure the pack exists, running the asset exporter when it is missing or
 * force is set.  Returns 1 on success; otherwise prints what is missing. */
u32 assets_prepare(u32 force);

#endif /* ICFTD_ASSETS_H */
