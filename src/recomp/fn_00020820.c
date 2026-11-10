/* fn_00020820 - 18 byte(s), 8 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00020820(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00020820u): goto L_20820;
    case RC_ADDR(0x00020824u): goto L_20824;
    case RC_ADDR(0x00020826u): goto L_20826;
    case RC_ADDR(0x00020828u): goto L_20828;
    case RC_ADDR(0x0002082au): goto L_2082A;
    case RC_ADDR(0x0002082cu): goto L_2082C;
    case RC_ADDR(0x0002082eu): goto L_2082E;
    case RC_ADDR(0x00020830u): goto L_20830;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_20820:
    /* 00020820   4  movea.l (4,A7),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020820u);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[0] = t0;

L_20824:
    /* 00020824   2  move.l A0,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020824u);
    t0 = rc_a_get(c, 0, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20826:
    /* 00020826   2  tst.b (A0)+ */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020826u);
    t3 = c->a[0];
    c->a[0] += 1u;
    t0 = rc_rd8(c, m, t3);
    rc_set_nzvc(c, t0, RC_B);

L_20828:
    /* 00020828   2  bne 00020826 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020828u);
    if (rc_cond(c, 6)) { rc_tick(); goto L_20826; }

L_2082A:
    /* 0002082a   2  suba.l D0,A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002082au);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] -= t0;

L_2082C:
    /* 0002082c   2  move.l A0,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002082cu);
    t0 = rc_a_get(c, 0, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_2082E:
    /* 0002082e   2  subq.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002082eu);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_20830:
    /* 00020830   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020830u);
    rc_ret(c, m);
    return;

}
