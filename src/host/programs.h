/* The engine builds this front end can boot.
 *
 * "It Came from the Desert" (1989) and its add-on "It Came from the Desert II - Antheads" (1990)
 * are two builds of the same engine, linked for the same address: one machine, one runtime, two
 * translated function tables (src\recomp\fn_table.c and src\recomp\ant\ant_table.c). A run picks
 * one at boot and rc_active names it; the table, the A4, the entry and the save geometry follow
 * (docs\antheads.md).
 */
#ifndef ICFTD_HOST_PROGRAMS_H
#define ICFTD_HOST_PROGRAMS_H

#include "../recomp/cpu.h"

/* Program ids, as --program and the title's switch name them. */
#define HOST_PROGRAM_ORIGINAL 0
#define HOST_PROGRAM_ANT      1

/* The descriptor of program `id` (HOST_PROGRAM_ORIGINAL or HOST_PROGRAM_ANT): the generated
 * rc_engine (src\recomp\fn_table.c) or ant_engine (src\recomp\ant\ant_table.c). */
const rc_program *host_program(int id);

#endif
