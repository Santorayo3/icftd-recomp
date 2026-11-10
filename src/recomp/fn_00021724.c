/* fn_00021724 - 16 byte(s), 4 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00021724(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00021724u): goto L_21724;
    case RC_ADDR(0x00021728u): goto L_21728;
    case RC_ADDR(0x0002172cu): goto L_2172C;
    case RC_ADDR(0x00021730u): goto L_21730;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21724:
    /* 00021724   4  movea.l (3af4,A4),A6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021724u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3af4u));
    c->a[6] = t0;

L_21728:
    /* 00021728   4  movea.l (4,A7),A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021728u);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[1] = t0;

L_2172C:
    /* 0002172c   4  move.l (8,A7),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002172cu);
    t0 = rc_rd32(c, m, (c->a[7] + 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21730:
    /* 00021730   4  jmp (fffffdd8,A6) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021730u);
    rc_os_call_a6(c, m, -552);
    return;

}
