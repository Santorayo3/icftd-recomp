/* Frame-indexed input script for the oracle (Phase B harness, docs\next-session.md task 1).
 *
 * A script line takes effect at its frame and holds until the next line, so a run is reproducible:
 *
 *     # frame  fire  joy0      joy1 (optional)
 *     100      1     0xFFFF
 *     110      0     0xFFFF
 *
 * `fire` drives CIA-A PRA bit 7 (/FIRE); `joy0`/`joy1` are the raw JOY0DAT/JOY1DAT words, which
 * are active low (0xFFFF = nothing pressed), exactly as the machine model returns them.
 */
#ifndef ICFTD_ORACLE_INPUT_H
#define ICFTD_ORACLE_INPUT_H

#include "types.h"
#include "machine.h"

/* Parses the script; returns 0 on a malformed line (with the line number printed). */
int  input_load(const char *path);

/* Applies the state that is in force at m->frame. Cheap: the cursor only moves forward. */
void input_apply(rt_machine *m);

int  input_active(void);

/* The fire level the script holds right now (0 before its first entry, and 0 without a script).
 * A host seam that adds another /FIRE source to m->fireDown needs it to put the script's own
 * level back when its own source is released. */
int  input_fire(void);

#endif
