/* The translated game's CPU context, and the only things emitted code may call.
 *
 * There is no instruction decoder in this layer: every instruction of every translated function
 * *is* C (docs\recomp-architecture.md, "B - it runs fast"). What lives here is the 68000 register
 * file, big-endian access to the runtime's address space, the flag rules, and the two call seams -
 * a translated function and an Amiga library call. The runtime never looks at a CPU register and
 * this layer never includes m68k.h.
 *
 * Addresses in emitted code are written as `RC_ADDR(<image offset>)`: the translation is the same
 * machine code whatever address the image is loaded at, and only that offset changes. The fixture
 * replay compiles with RC_BASE 0 (it runs the base-0 image rcmp runs); the game is built for the
 * 0x4000 layout, which is the one the original binary was linked for and the oracle is validated in.
 */
#ifndef ICFTD_RECOMP_CPU_H
#define ICFTD_RECOMP_CPU_H

#include <setjmp.h>

#include "types.h"
#include "machine.h"

#ifndef RC_BASE
#define RC_BASE 0x00000000u
#endif
#define RC_ADDR(v) ((v) + RC_BASE)

/* CCR bits, in the low byte of SR. */
#define RC_X 0x10u
#define RC_N 0x08u
#define RC_Z 0x04u
#define RC_V 0x02u
#define RC_C 0x01u

/* Operand sizes in bytes, as the 68000 encodes them. */
#define RC_B 1
#define RC_W 2
#define RC_L 4

/* Library indices, in the order rt_init() creates the bases (src\runtime\amiga\machine.c). */
#define RC_LIB_EXEC     0

typedef struct cpu_t
{
    u32 d[8];
    u32 a[8];
    u32 pc;                 /* the instruction being executed, for diagnostics only */
    u16 sr;
} cpu_t;

/* --- memory ---------------------------------------------------------------------------------
 * 24-bit, big-endian, unaligned-safe: emulated memory is never cast to a host pointer. */
u32  rc_rd8 (cpu_t *c, rt_machine *m, u32 addr);
u32  rc_rd16(cpu_t *c, rt_machine *m, u32 addr);
u32  rc_rd32(cpu_t *c, rt_machine *m, u32 addr);
void rc_wr8 (cpu_t *c, rt_machine *m, u32 addr, u32 v);
void rc_wr16(cpu_t *c, rt_machine *m, u32 addr, u32 v);
void rc_wr32(cpu_t *c, rt_machine *m, u32 addr, u32 v);

/* --- stack -------------------------------------------------------------------------------- */
void rc_push32(cpu_t *c, rt_machine *m, u32 v);
void rc_push16(cpu_t *c, rt_machine *m, u32 v);
u32  rc_pop32(cpu_t *c, rt_machine *m);
u32  rc_pop16(cpu_t *c, rt_machine *m);

/* --- registers as operands ----------------------------------------------------------------
 * Writes merge into the low bits exactly as the 68000 does; a word write to An sign-extends. */
u32  rc_d_get(const cpu_t *c, int reg, int size);
void rc_d_set(cpu_t *c, int reg, int size, u32 v);
u32  rc_a_get(const cpu_t *c, int reg, int size);
void rc_a_set(cpu_t *c, int reg, int size, u32 v);
u32  rc_ext(u32 v, int size);          /* sign-extend a size-byte value */
u32  rc_trunc(u32 v, int size);

/* --- flags ---------------------------------------------------------------------------------
 * Names follow the interpreter (src\assetExport\Cpu68k\Cpu68k.cs) so the two cannot drift. */
void rc_set_nzvc(cpu_t *c, u32 v, int size);   /* N/Z from v, V=C=0: MOVE, logic ops, TST, CLR */
void rc_set_z(cpu_t *c, int z);                /* Z only: BTST, BCHG, BCLR, BSET */
void rc_flags_add(cpu_t *c, int size, u32 dst, u32 src, u32 res, int keepZ);
void rc_flags_sub(cpu_t *c, int size, u32 dst, u32 src, u32 res, int keepZ);
void rc_cmp(cpu_t *c, int size, u32 dst, u32 src);   /* sub flags, X untouched, result dropped */
int  rc_cond(const cpu_t *c, int cc);                /* 0 T, 1 F, 2 HI .. 15 LE */

/* --- the rest of the instruction set ------------------------------------------------------- */
void rc_ext_w(cpu_t *c, int reg);                    /* ext.w Dn */
void rc_ext_l(cpu_t *c, int reg);                    /* ext.l Dn */
void rc_mulu(cpu_t *c, int reg, u32 src);            /* mulu.w <ea>,Dn */
void rc_muls(cpu_t *c, int reg, u32 src);
void rc_divu(cpu_t *c, rt_machine *m, int reg, u32 src);
void rc_divs(cpu_t *c, rt_machine *m, int reg, u32 src);
u32  rc_shift(cpu_t *c, int type, int left, u32 count, u32 value, int size);

/* --- calls ---------------------------------------------------------------------------------
 * `jsr <const>` -> rc_call(): fn_table lookup, else the development interpreter.
 * `jsr (d16,A6)` -> rc_os_call(): the return address is pushed, the runtime shim runs, A7 pops. */
typedef void (*rc_fn)(cpu_t *c, rt_machine *m);

void rc_call(cpu_t *c, rt_machine *m, u32 addr);
/* Reported by the generated dispatch when an address is not an instruction of that function. */
void rc_bad_entry(cpu_t *c, rt_machine *m);
void rc_os_call(cpu_t *c, rt_machine *m, int lib, s32 lvo);
/* `jsr/jmp (d16,A6)`: the library is whatever A6 points at, so it is resolved at run time. */
void rc_os_call_a6(cpu_t *c, rt_machine *m, s32 lvo);

/* Set by the development build only (src\oracle\interpret.c): runs code that is not translated
 * yet, so a partial translation still runs. The shipped build leaves both null. */
extern void (*rc_interpreter)(cpu_t *c, rt_machine *m, u32 addr);
extern int  (*rc_stub_host)(cpu_t *c, rt_machine *m, int lib, s32 lvo);
/* Development flag: a library call no shim handles answers 0 instead of stopping the run. That is
 * what the interpreter does with allowOsStubs, so a fixture replay can compare against it. */
extern int  rc_allow_unmodelled;
/* Development harness: a translated function that never returns (a busy-wait no fixture releases)
 * is aborted from the memory accessors, which every real loop performs. Null in the shipped build. */
extern jmp_buf *rc_abort;
extern unsigned long rc_ops, rc_opsLimit;
/* Call depth, the same counter the reference core keeps: a translated jsr/bsr counts one, an rts
 * uncounts it. A harness replay sets rc_stopOnReturn and the driver stops at the entry's own rts. */
extern int rc_depth;
extern int rc_stopOnReturn;
/* Emitted at every rts. */
void rc_ret(cpu_t *c, rt_machine *m);
/* Emitted at every backward branch: a spin loop that touches no memory still has to be stoppable. */
void rc_tick(void);

#endif
