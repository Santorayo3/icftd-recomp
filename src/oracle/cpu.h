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

/* The same three pieces, for a driver that interleaves this core with translated code
 * (src\host): one instruction (1 = keep running), one vertical blank, and the register file
 * transfer in both directions - d0-d7, a0-a7, sr, pc. */
int  oracle_step(rt_machine *m);
void oracle_tick(rt_machine *m);
/* Runs one interrupt handler to its rts with the interrupted register file saved and restored,
 * so it can be used as the machine's on_cia hook (a CIA timer expiry) from either front end. */
void oracle_run_icr(rt_machine *m, u32 code, u32 data);
/* The last executed PCs, oldest first. */
void oracle_ring_print(rt_machine *m);
void oracle_regs_get(u32 *r);
void oracle_regs_set(const u32 *r);

/* Enters one of the engine's own routines once, at a frame boundary, exactly like the host's
 * `--call`: the frame gets the argument followed by EMU_EXIT_PC, so the run stops when the
 * routine returns. Used to reach a scene in both front ends without playing to it. */
void oracle_call_at(u32 pc, u32 frame, u32 arg, long insns, u32 atPc);

/* Writes Musashi's 68000 per-opcode cycle table (64 KB, indexed by the opcode word) so the
 * translated build charges the same costs. Call after oracle_boot. 1 = written. */
int oracle_dump_cycle_table(const char *path);
int oracle_dump_inst_len(const char *path);

/* Cycles the instruction at `pc` takes: the project's single definition of time. The translated
 * build bakes the same number in at translation time (tools\gen-cycles.ps1 -> CycleTable.cs). */
u32 oracle_cycle_cost(u32 pc);

/* The same base count with the instruction's bus words walked through the chip bus (slots.c):
 * this is what both front ends charge to the frame budget. */
u32 oracle_instruction_cost(rt_machine *m, u32 pc);

/* --bustable: writes the measured bus words per opcode (opcode count min max sum per line). */
int oracle_bus_dump(const char *path);

#endif
