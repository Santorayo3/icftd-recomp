/* fn_000082ce - 70 byte(s), 22 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000082ce(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000082ceu): goto L_82CE;
    case RC_ADDR(0x000082d2u): goto L_82D2;
    case RC_ADDR(0x000082d6u): goto L_82D6;
    case RC_ADDR(0x000082dcu): goto L_82DC;
    case RC_ADDR(0x000082e0u): goto L_82E0;
    case RC_ADDR(0x000082e2u): goto L_82E2;
    case RC_ADDR(0x000082e6u): goto L_82E6;
    case RC_ADDR(0x000082eau): goto L_82EA;
    case RC_ADDR(0x000082ecu): goto L_82EC;
    case RC_ADDR(0x000082f0u): goto L_82F0;
    case RC_ADDR(0x000082f2u): goto L_82F2;
    case RC_ADDR(0x000082f4u): goto L_82F4;
    case RC_ADDR(0x000082f6u): goto L_82F6;
    case RC_ADDR(0x000082fau): goto L_82FA;
    case RC_ADDR(0x000082fcu): goto L_82FC;
    case RC_ADDR(0x000082feu): goto L_82FE;
    case RC_ADDR(0x00008300u): goto L_8300;
    case RC_ADDR(0x00008304u): goto L_8304;
    case RC_ADDR(0x00008308u): goto L_8308;
    case RC_ADDR(0x0000830eu): goto L_830E;
    case RC_ADDR(0x00008310u): goto L_8310;
    case RC_ADDR(0x00008312u): goto L_8312;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_82CE:
    /* 000082ce   4  link.w A5,#fffffffa */
    c->pc = RC_ADDR(0x000082ceu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x6u;

L_82D2:
    /* 000082d2   4  clr.b (ffffffff,A5) */
    c->pc = RC_ADDR(0x000082d2u);
    rc_step(c, m, 16);
    rc_wr8(c, m, (c->a[5] - 0x1u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_82D6:
    /* 000082d6   6  move.l (fffff738,A4),(fffffffa,A5) */
    c->pc = RC_ADDR(0x000082d6u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x8c8u));
    rc_wr32(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_82DC:
    /* 000082dc   4  tst.l (fffffffa,A5) */
    c->pc = RC_ADDR(0x000082dcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    rc_set_nzvc(c, t0, RC_L);

L_82E0:
    /* 000082e0   2  beq 00008310 */
    c->pc = RC_ADDR(0x000082e0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_8310;

L_82E2:
    /* 000082e2   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000082e2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_82E6:
    /* 000082e6   4  movea.l (fffffffa,A5),A0 */
    c->pc = RC_ADDR(0x000082e6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[0] = t0;

L_82EA:
    /* 000082ea   2  move.l (A0),-(A7) */
    c->pc = RC_ADDR(0x000082eau);
    rc_step(c, m, 20);
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_82EC:
    /* 000082ec   4  jsr (ffff82de,A4) */
    c->pc = RC_ADDR(0x000082ecu);
    rc_step(c, m, 18);
    /* vector 122 */
    rc_push32(c, m, RC_ADDR(0x000082f0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dd4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002298au);
    return;

L_82F0:
    /* 000082f0   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000082f0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_82F2:
    /* 000082f2   2  tst.w D0 */
    c->pc = RC_ADDR(0x000082f2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_82F4:
    /* 000082f4   2  bne 00008300 */
    c->pc = RC_ADDR(0x000082f4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_8300;

L_82F6:
    /* 000082f6   4  move.b (ffffffff,A5),D0 */
    c->pc = RC_ADDR(0x000082f6u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] - 0x1u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_82FA:
    /* 000082fa   2  ext.w D0 */
    c->pc = RC_ADDR(0x000082fau);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_82FC:
    /* 000082fc   2  unlk A5 */
    c->pc = RC_ADDR(0x000082fcu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_82FE:
    /* 000082fe   2  rts */
    c->pc = RC_ADDR(0x000082feu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_8300:
    /* 00008300   4  addq.b #1,(ffffffff,A5) */
    c->pc = RC_ADDR(0x00008300u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x1u);
    t1 = rc_rd8(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_B, t1, 0x00000001u, t2, 0);
    rc_wr8(c, m, t3, t2);

L_8304:
    /* 00008304   4  movea.l (fffffffa,A5),A0 */
    c->pc = RC_ADDR(0x00008304u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[0] = t0;

L_8308:
    /* 00008308   6  move.l (8,A0),(fffffffa,A5) */
    c->pc = RC_ADDR(0x00008308u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    rc_wr32(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_830E:
    /* 0000830e   2  bra 000082dc */
    c->pc = RC_ADDR(0x0000830eu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_82DC;

L_8310:
    /* 00008310   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x00008310u);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_8312:
    /* 00008312   2  bra 000082fc */
    c->pc = RC_ADDR(0x00008312u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_82FC;

}
