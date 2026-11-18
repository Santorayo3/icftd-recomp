/* fn_00010dea - 40 byte(s), 11 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00010dea(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00010deau): goto L_10DEA;
    case RC_ADDR(0x00010deeu): goto L_10DEE;
    case RC_ADDR(0x00010df2u): goto L_10DF2;
    case RC_ADDR(0x00010df4u): goto L_10DF4;
    case RC_ADDR(0x00010df8u): goto L_10DF8;
    case RC_ADDR(0x00010dfau): goto L_10DFA;
    case RC_ADDR(0x00010dfeu): goto L_10DFE;
    case RC_ADDR(0x00010e04u): goto L_10E04;
    case RC_ADDR(0x00010e06u): goto L_10E06;
    case RC_ADDR(0x00010e0cu): goto L_10E0C;
    case RC_ADDR(0x00010e10u): goto L_10E10;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_10DEA:
    /* 00010dea   4  movem.l { D6 A7 },-(SP) */
    c->pc = RC_ADDR(0x00010deau);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[0]);
    c->a[7] = t3;

L_10DEE:
    /* 00010dee   4  lea (3e,A6),A1 */
    c->pc = RC_ADDR(0x00010deeu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[6] + 0x3eu);

L_10DF2:
    /* 00010df2   2  ext.w D0 */
    c->pc = RC_ADDR(0x00010df2u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_10DF4:
    /* 00010df4   4  mulu.w #16,D0 */
    c->pc = RC_ADDR(0x00010df4u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_mulu(c, 0, t0);

L_10DF8:
    /* 00010df8   2  adda.w D0,A1 */
    c->pc = RC_ADDR(0x00010df8u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[1] += rc_ext(t0, RC_W);

L_10DFA:
    /* 00010dfa   4  clr.b (0,A1) */
    c->pc = RC_ADDR(0x00010dfau);
    rc_step(c, m, 16);
    rc_wr8(c, m, (c->a[1] + 0x0u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_10DFE:
    /* 00010dfe   6  cmpi.b #1,(1,A1) */
    c->pc = RC_ADDR(0x00010dfeu);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[1] + 0x1u));
    rc_cmp(c, RC_B, t0, 0x00000001u);

L_10E04:
    /* 00010e04   2  bne 00010e0c */
    c->pc = RC_ADDR(0x00010e04u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_10E0C;

L_10E06:
    /* 00010e06   6  move.b #2,(0,A1) */
    c->pc = RC_ADDR(0x00010e06u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr8(c, m, (c->a[1] + 0x0u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_10E0C:
    /* 00010e0c   4  movem.l (SP)+,{ D0 A1 } */
    c->pc = RC_ADDR(0x00010e0cu);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_10E10:
    /* 00010e10   2  rts */
    c->pc = RC_ADDR(0x00010e10u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
