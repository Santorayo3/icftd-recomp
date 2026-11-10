/* fn_0002170a - 22 byte(s), 5 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0002170a(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0002170au): goto L_2170A;
    case RC_ADDR(0x0002170eu): goto L_2170E;
    case RC_ADDR(0x00021714u): goto L_21714;
    case RC_ADDR(0x00021718u): goto L_21718;
    case RC_ADDR(0x0002171cu): goto L_2171C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2170A:
    /* 0002170a   4  movea.l (4,A7),A0 */
    c->pc = RC_ADDR(0x0002170au);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[0] = t0;

L_2170E:
    /* 0002170e   6  movem.l (SP)+,{ D0 A1 } */
    c->pc = RC_ADDR(0x0002170eu);
    rc_step(c, m);
    t3 = (c->a[7] + 0x8u);
    t0 = rc_rd32(c, m, t3);
    c->d[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;
    t3 += 4u;

L_21714:
    /* 00021714   4  move.l (10,A7),D1 */
    c->pc = RC_ADDR(0x00021714u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[7] + 0x10u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21718:
    /* 00021718   4  movea.l (3af4,A4),A6 */
    c->pc = RC_ADDR(0x00021718u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3af4u));
    c->a[6] = t0;

L_2171C:
    /* 0002171c   4  jmp (fffffe44,A6) */
    c->pc = RC_ADDR(0x0002171cu);
    rc_step(c, m);
    rc_os_call_a6(c, m, -444);
    return;

}
