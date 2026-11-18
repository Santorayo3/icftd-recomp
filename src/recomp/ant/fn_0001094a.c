/* fn_0001094a - 32 byte(s), 10 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001094a(cpu_t *c, rt_machine *m)
{
    u32 t0, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001094au): goto L_1094A;
    case RC_ADDR(0x0001094eu): goto L_1094E;
    case RC_ADDR(0x00010952u): goto L_10952;
    case RC_ADDR(0x00010958u): goto L_10958;
    case RC_ADDR(0x0001095au): goto L_1095A;
    case RC_ADDR(0x0001095cu): goto L_1095C;
    case RC_ADDR(0x0001095eu): goto L_1095E;
    case RC_ADDR(0x00010960u): goto L_10960;
    case RC_ADDR(0x00010964u): goto L_10964;
    case RC_ADDR(0x00010968u): goto L_10968;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1094A:
    /* 0001094a   4  movem.l { A6 A7 },-(SP) */
    c->pc = RC_ADDR(0x0001094au);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[0]);
    c->a[7] = t3;

L_1094E:
    /* 0001094e   4  clr.w (3c,A6) */
    c->pc = RC_ADDR(0x0001094eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[6] + 0x3cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_10952:
    /* 00010952   6  bset #0,(1c,A6) */
    c->pc = RC_ADDR(0x00010952u);
    rc_step(c, m, 20);
    t3 = (c->a[6] + 0x1cu);
    t4 = 0x00000000u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_10958:
    /* 00010958   2  tst.w D0 */
    c->pc = RC_ADDR(0x00010958u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1095A:
    /* 0001095a   2  bne 0001095e */
    c->pc = RC_ADDR(0x0001095au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1095E;

L_1095C:
    /* 0001095c   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0001095cu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1095E:
    /* 0001095e   2  clr.w D1 */
    c->pc = RC_ADDR(0x0001095eu);
    rc_step(c, m, 4);
    rc_d_set(c, 1, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_10960:
    /* 00010960   4  bsr 00010e74 */
    c->pc = RC_ADDR(0x00010960u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00010964u));
    rc_depth++;
    c->pc = RC_ADDR(0x00010e74u);
    return;

L_10964:
    /* 00010964   4  movem.l (SP)+,{ D0 D1 } */
    c->pc = RC_ADDR(0x00010964u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_10968:
    /* 00010968   2  rts */
    c->pc = RC_ADDR(0x00010968u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
