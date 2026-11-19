/* --langdump: see lang_dump.c. The front end starts it and ends it; lang_hook.c feeds it the
 * English string at each text seam. */
#ifndef ICFTD_HOST_LANG_DUMP_H
#define ICFTD_HOST_LANG_DUMP_H

#include "types.h"

/* Opens the file and writes its header. Nothing else happens with a path that cannot be written. */
void host_lang_dump(const char *path);

/* One distinct string, written with the escapes the exporter reads (it is an internal file, not
 * the translation file itself). */
void host_lang_dump_text(const char *en);

/* 1 while a dump is running: the front end installs the entry hook for it, even in an English
 * run, because the point of the dump is to record the English the game would otherwise draw. */
int host_lang_dump_on(void);

/* Closes the file and reports how many lines were written. Called at exit. */
void host_lang_dump_end(void);

#endif /* ICFTD_HOST_LANG_DUMP_H */
