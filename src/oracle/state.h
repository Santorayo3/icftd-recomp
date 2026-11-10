/* Canonical machine-state dump at frame boundaries (Phase B harness, docs\next-session.md task 1).
 *
 * A development tool. It records what the acceptance test compares - D0-D7, A0-A7, SR, PC, the
 * custom-chip register file and a hash of the whole RAM image - once per frame, so two runs can be
 * compared without ever looking at a picture. Full RAM blobs are written only for the frames named
 * on the command line, i.e. around the first divergence that tools\state-diff.ps1 reports.
 */
#ifndef ICFTD_ORACLE_STATE_H
#define ICFTD_ORACLE_STATE_H

#include "types.h"
#include "machine.h"

/* File layout (little endian): "ICST" u32 version u32 recSize u32 records, then the records. */
#define ST_MAGIC      "ICST"
#define ST_VERSION    1u
#define ST_HEADER     16u
#define ST_REC_SIZE   344u

/* Opens "<prefix>.state" for writing. `every` = sample every n-th frame (1 = every frame).
 * `ramFrames` = comma-separated frame numbers whose full RAM image is also dumped
 * ("12,40", 0 and empty allowed). Returns 0 when the file cannot be created. */
int  state_open(const char *prefix, int every, const char *ramFrames);

/* Called once per frame boundary; appends a record when the frame is sampled. */
void state_sample(rt_machine *m);

/* Patches the record count into the header and closes. */
void state_close(void);

/* 1 when a state file is being written, so the caller can skip the cost otherwise. */
int  state_active(void);

#endif
