/* First-start game data: the extracted tree, and how it gets there.
 *
 * A release ships empty data folders - no game data is distributed, the player's own three Amiga
 * floppy images are the only source. `rt_assets_ensure` answers "is the tree there, and if not,
 * make it" once, at startup, before the machine boots.
 *
 * Two trees are extractable from the same reader: the Windows export (`disk1..3\` under their
 * AmigaDOS names, the game program under `code\dshell4k\`) and the MS-DOS release, which cannot
 * hold those names (`DISK1..3\` with 8.3 names, `NAMES.TXT` recording long=short, `DSHELL.IMG` in
 * the data folder). The layout is a parameter, not a second extractor.
 *
 * Each layout holds two builds of the engine when the player owns both: the 1989 game (required)
 * and the 1990 add-on "Antheads" (optional, `ant1..3\` / `ANT1..3\`; docs\antheads.md §4).
 */
#ifndef ICFTD_ASSETS_H
#define ICFTD_ASSETS_H

#include "types.h"

enum {
    RT_ASSETS_OK = 1,                 /* dataDir holds the extracted tree */
    RT_ASSETS_NO_DISKS = 0,           /* ... and the images to make it from were not there */
    RT_ASSETS_FAILED = -1             /* the images were there, writing dataDir failed */
};

/* Which tree `dataDir` holds, or is to be given. */
enum {
    RT_ASSETS_WINDOWS = 0,            /* disk1..3\ and code\dshell4k\dshell.img */
    RT_ASSETS_DOS = 1                 /* DISK1..3\, NAMES.TXT, DSHELL.IMG */
};

/* The three images that make a complete data set. */
#define RT_ASSETS_DISK_COUNT 3

/* The text the player sees when the floppy images are not where they have to be - the one message
 * this feature owns, because there is nothing else a first start can say. */
#define RT_ASSETS_MSG_DISKS \
    "Please put the three original 'It Came from the Desert' disk images in the 'disks' folder and restart."

/* 1 when dataDir holds a complete extraction for `layout` (the disk folders and the flattened game
 * program; for DOS the name map too). The image is written last, so an interrupted extraction does
 * not count as complete. */
u32 rt_assets_ready(const char *dataDir, int layout);

/* 1 when dataDir holds the same for the optional second build, the add-on "Antheads": `ant1..3` and
 * `ant\code\dshell4k\dshell.img` (DOS: `ANT1..3`, `ANTSHEL.IMG`). The add-on's disks carry the same
 * volume labels as the game's, so which build a disk belongs to is decided by its content. */
u32 rt_assets_addon_ready(const char *dataDir, int layout);

/* Ensures dataDir holds the game data in `layout`, extracting it from the AmigaDOS floppy images in
 * diskDir when it does not. The add-on's tree is extracted too when all three of its disks are
 * there - it is optional, and a set that is not complete is ignored rather than half-used. Returns
 * one of the three codes above, which speak for the game itself: on anything but RT_ASSETS_OK `msg`
 * (when not null) holds the line to show the player. Does nothing and returns RT_ASSETS_OK when
 * both trees are already there. */
int rt_assets_ensure(const char *dataDir, const char *diskDir, int layout, char *msg, u32 max);

#endif /* ICFTD_ASSETS_H */
