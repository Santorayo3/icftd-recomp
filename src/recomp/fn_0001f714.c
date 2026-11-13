/* fn_0001f714 - 22 byte(s), 7 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001f714(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f714u): goto L_1F714;
    case RC_ADDR(0x0001f718u): goto L_1F718;
    case RC_ADDR(0x0001f71au): goto L_1F71A;
    case RC_ADDR(0x0001f71cu): goto L_1F71C;
    case RC_ADDR(0x0001f71eu): goto L_1F71E;
    case RC_ADDR(0x0001f722u): goto L_1F722;
    case RC_ADDR(0x0001f726u): goto L_1F726;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F714:
    /* 0001f714   4  move.l (10,A5),D0 */
    c->pc = RC_ADDR(0x0001f714u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F718:
    /* 0001f718   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x0001f718u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1F71A:
    /* 0001f71a   2  asr.l D1,D0 */
    c->pc = RC_ADDR(0x0001f71au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_1F71C:
    /* 0001f71c   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x0001f71cu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1F71E:
    /* 0001f71e   4  movea.l (fffffebe,A4),A0 */
    c->pc = RC_ADDR(0x0001f71eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x142u));
    c->a[0] = t0;

L_1F722:
    /* 0001f722   4  move.w D0,(2a,A0) */
    c->pc = RC_ADDR(0x0001f722u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[0] + 0x2au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F726:
    /* 0001f726   4  bra 0001f8ae */
    c->pc = RC_ADDR(0x0001f726u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0001f8aeu);
    return;

}
