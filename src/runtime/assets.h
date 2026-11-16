/* First-start game data: the extracted tree in `export\`, and how it gets there.
 *
 * A release ships empty `export\` and `disks\` folders - no game data is distributed, the player's
 * own three Amiga floppy images are the only source. `rt_assets_ensure` answers "is the tree there,
 * and if not, make it" once, at startup, before the machine boots.
 */
#ifndef ICFTD_ASSETS_H
#define ICFTD_ASSETS_H

#include "types.h"

enum {
    RT_ASSETS_OK = 1,                 /* dataDir holds the extracted tree */
    RT_ASSETS_NO_DISKS = 0,           /* ... and the images to make it from were not there */
    RT_ASSETS_FAILED = -1             /* the images were there, writing dataDir failed */
};

/* The three images that make a complete data set. */
#define RT_ASSETS_DISK_COUNT 3

/* The text the player sees when the floppy images are not where they have to be - the one message
 * this feature owns, because there is nothing else a first start can say. */
#define RT_ASSETS_MSG_DISKS \
    "Please put the three original 'It Came from the Desert' disk images in the 'disks' folder and restart."

/* 1 when dataDir holds a complete extraction (disk1..3 and the flattened game program). The image
 * is written last, so an interrupted extraction does not count as complete. */
u32 rt_assets_ready(const char *dataDir);

/* Ensures dataDir holds the game data, extracting it from the AmigaDOS floppy images in diskDir
 * when it does not. Returns one of the three codes above; on anything but RT_ASSETS_OK `msg`
 * (when not null) holds the line to show the player. Does nothing and returns RT_ASSETS_OK when
 * the tree is already there. */
int rt_assets_ensure(const char *dataDir, const char *diskDir, char *msg, u32 max);

#endif /* ICFTD_ASSETS_H */
