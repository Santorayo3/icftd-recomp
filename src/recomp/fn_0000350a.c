/* fn_0000350a - 40 byte(s), 11 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000350a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000350au): goto L_350A;
    case RC_ADDR(0x0000350eu): goto L_350E;
    case RC_ADDR(0x00003514u): goto L_3514;
    case RC_ADDR(0x00003518u): goto L_3518;
    case RC_ADDR(0x0000351au): goto L_351A;
    case RC_ADDR(0x0000351eu): goto L_351E;
    case RC_ADDR(0x00003524u): goto L_3524;
    case RC_ADDR(0x00003528u): goto L_3528;
    case RC_ADDR(0x0000352cu): goto L_352C;
    case RC_ADDR(0x0000352eu): goto L_352E;
    case RC_ADDR(0x00003530u): goto L_3530;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_350A:
    /* 0000350a   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x0000350au);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_350E:
    /* 0000350e   6  move.l (ffffcce6,A4),(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000350eu);
    t0 = rc_rd32(c, m, (c->a[4] - 0x331au));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3514:
    /* 00003514   4  tst.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x00003514u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_L);

L_3518:
    /* 00003518   2  beq 0000352e */
    c->pc = RC_ADDR(0x00003518u);
    if (rc_cond(c, 7)) goto L_352E;

L_351A:
    /* 0000351a   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0000351au);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_351E:
    /* 0000351e   6  andi.w #fffd,(a,A0) */
    c->pc = RC_ADDR(0x0000351eu);
    t3 = (c->a[0] + 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 & 0x0000fffdu;
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_3524:
    /* 00003524   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00003524u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_3528:
    /* 00003528   4  move.l (A0),(fffffffc,A5) */
    c->pc = RC_ADDR(0x00003528u);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_352C:
    /* 0000352c   2  bra 00003514 */
    c->pc = RC_ADDR(0x0000352cu);
    rc_tick();
    goto L_3514;

L_352E:
    /* 0000352e   2  unlk A5 */
    c->pc = RC_ADDR(0x0000352eu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_3530:
    /* 00003530   2  rts */
    c->pc = RC_ADDR(0x00003530u);
    rc_ret(c, m);
    return;

}
