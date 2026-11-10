/* The 68000 front end (src\oracle\cpu.c): Musashi plugged into the runtime.
 *
 * A development tool, not the product. It executes the *original* dshell binary so we can ask it
 * what it does and dump fixtures from it. The shipped game links src\runtime with the translated
 * dispatcher instead and contains no 68000 core.
 */
#ifndef ICFTD_ORACLE_CPU_H
#define ICFTD_ORACLE_CPU_H

#include "types.h"
#include "machine.h"

/* Runs the loaded image; returns the PC it stopped at. `maxInsns` = 0 means "until stopped". */
u32  oracle_run(rt_machine *m, long maxInsns);

/* Sets PC/A7/A4 to the state the exporter documents and runs from there. */
void oracle_boot(u32 entry, u32 a4);

#endif
