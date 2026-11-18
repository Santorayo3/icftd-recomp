/* fn_00022ea4 - 142 byte(s), 48 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00022ea4(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00022ea4u): goto L_22EA4;
    case RC_ADDR(0x00022ea8u): goto L_22EA8;
    case RC_ADDR(0x00022eacu): goto L_22EAC;
    case RC_ADDR(0x00022eb0u): goto L_22EB0;
    case RC_ADDR(0x00022eb6u): goto L_22EB6;
    case RC_ADDR(0x00022eb8u): goto L_22EB8;
    case RC_ADDR(0x00022ebcu): goto L_22EBC;
    case RC_ADDR(0x00022ebeu): goto L_22EBE;
    case RC_ADDR(0x00022ec0u): goto L_22EC0;
    case RC_ADDR(0x00022ec4u): goto L_22EC4;
    case RC_ADDR(0x00022ec6u): goto L_22EC6;
    case RC_ADDR(0x00022ecau): goto L_22ECA;
    case RC_ADDR(0x00022eccu): goto L_22ECC;
    case RC_ADDR(0x00022eceu): goto L_22ECE;
    case RC_ADDR(0x00022ed0u): goto L_22ED0;
    case RC_ADDR(0x00022ed2u): goto L_22ED2;
    case RC_ADDR(0x00022ed6u): goto L_22ED6;
    case RC_ADDR(0x00022ed8u): goto L_22ED8;
    case RC_ADDR(0x00022edau): goto L_22EDA;
    case RC_ADDR(0x00022edcu): goto L_22EDC;
    case RC_ADDR(0x00022ee0u): goto L_22EE0;
    case RC_ADDR(0x00022ee4u): goto L_22EE4;
    case RC_ADDR(0x00022ee6u): goto L_22EE6;
    case RC_ADDR(0x00022eeau): goto L_22EEA;
    case RC_ADDR(0x00022eecu): goto L_22EEC;
    case RC_ADDR(0x00022eeeu): goto L_22EEE;
    case RC_ADDR(0x00022ef0u): goto L_22EF0;
    case RC_ADDR(0x00022ef6u): goto L_22EF6;
    case RC_ADDR(0x00022efau): goto L_22EFA;
    case RC_ADDR(0x00022efcu): goto L_22EFC;
    case RC_ADDR(0x00022efeu): goto L_22EFE;
    case RC_ADDR(0x00022f02u): goto L_22F02;
    case RC_ADDR(0x00022f06u): goto L_22F06;
    case RC_ADDR(0x00022f08u): goto L_22F08;
    case RC_ADDR(0x00022f0cu): goto L_22F0C;
    case RC_ADDR(0x00022f10u): goto L_22F10;
    case RC_ADDR(0x00022f12u): goto L_22F12;
    case RC_ADDR(0x00022f14u): goto L_22F14;
    case RC_ADDR(0x00022f18u): goto L_22F18;
    case RC_ADDR(0x00022f1au): goto L_22F1A;
    case RC_ADDR(0x00022f1cu): goto L_22F1C;
    case RC_ADDR(0x00022f20u): goto L_22F20;
    case RC_ADDR(0x00022f22u): goto L_22F22;
    case RC_ADDR(0x00022f24u): goto L_22F24;
    case RC_ADDR(0x00022f28u): goto L_22F28;
    case RC_ADDR(0x00022f2au): goto L_22F2A;
    case RC_ADDR(0x00022f2eu): goto L_22F2E;
    case RC_ADDR(0x00022f30u): goto L_22F30;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_22EA4:
    /* 00022ea4   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00022ea4u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_22EA8:
    /* 00022ea8   4  movem.l { D5 A3 },-(SP) */
    c->pc = RC_ADDR(0x00022ea8u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_22EAC:
    /* 00022eac   4  movea.l (e,A5),A2 */
    c->pc = RC_ADDR(0x00022eacu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xeu));
    c->a[2] = t0;

L_22EB0:
    /* 00022eb0   6  cmpi.w #4,(12,A5) */
    c->pc = RC_ADDR(0x00022eb0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x12u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_22EB6:
    /* 00022eb6   2  bne 00022ec0 */
    c->pc = RC_ADDR(0x00022eb6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_22EC0;

L_22EB8:
    /* 00022eb8   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00022eb8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_22EBC:
    /* 00022ebc   2  move.l (A0),D4 */
    c->pc = RC_ADDR(0x00022ebcu);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_22EBE:
    /* 00022ebe   2  bra 00022edc */
    c->pc = RC_ADDR(0x00022ebeu);
    rc_step(c, m, 10);
    goto L_22EDC;

L_22EC0:
    /* 00022ec0   4  tst.w (c,A5) */
    c->pc = RC_ADDR(0x00022ec0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_set_nzvc(c, t0, RC_W);

L_22EC4:
    /* 00022ec4   2  ble 00022ed2 */
    c->pc = RC_ADDR(0x00022ec4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_22ED2;

L_22EC6:
    /* 00022ec6   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00022ec6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_22ECA:
    /* 00022eca   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00022ecau);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_22ECC:
    /* 00022ecc   2  move.w (A0),D0 */
    c->pc = RC_ADDR(0x00022eccu);
    rc_step(c, m, 8);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_22ECE:
    /* 00022ece   2  move.l D0,D4 */
    c->pc = RC_ADDR(0x00022eceu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_22ED0:
    /* 00022ed0   2  bra 00022edc */
    c->pc = RC_ADDR(0x00022ed0u);
    rc_step(c, m, 10);
    goto L_22EDC;

L_22ED2:
    /* 00022ed2   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00022ed2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_22ED6:
    /* 00022ed6   2  move.w (A0),D0 */
    c->pc = RC_ADDR(0x00022ed6u);
    rc_step(c, m, 8);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_22ED8:
    /* 00022ed8   2  ext.l D0 */
    c->pc = RC_ADDR(0x00022ed8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_22EDA:
    /* 00022eda   2  move.l D0,D4 */
    c->pc = RC_ADDR(0x00022edau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_22EDC:
    /* 00022edc   4  clr.w (12,A5) */
    c->pc = RC_ADDR(0x00022edcu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] + 0x12u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_22EE0:
    /* 00022ee0   4  tst.w (c,A5) */
    c->pc = RC_ADDR(0x00022ee0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_set_nzvc(c, t0, RC_W);

L_22EE4:
    /* 00022ee4   2  bge 00022ef6 */
    c->pc = RC_ADDR(0x00022ee4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_22EF6;

L_22EE6:
    /* 00022ee6   4  neg.w (c,A5) */
    c->pc = RC_ADDR(0x00022ee6u);
    rc_step(c, m, 16);
    t3 = (c->a[5] + 0xcu);
    t1 = rc_rd16(c, m, t3);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_wr16(c, m, t3, t2);

L_22EEA:
    /* 00022eea   2  tst.l D4 */
    c->pc = RC_ADDR(0x00022eeau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_22EEC:
    /* 00022eec   2  bge 00022ef6 */
    c->pc = RC_ADDR(0x00022eecu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_22EF6;

L_22EEE:
    /* 00022eee   2  neg.l D4 */
    c->pc = RC_ADDR(0x00022eeeu);
    rc_step(c, m, 6);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_L, 0u, t1, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_22EF0:
    /* 00022ef0   6  move.w #1,(12,A5) */
    c->pc = RC_ADDR(0x00022ef0u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] + 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_22EF6:
    /* 00022ef6   4  move.w (c,A5),D1 */
    c->pc = RC_ADDR(0x00022ef6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_22EFA:
    /* 00022efa   2  ext.l D1 */
    c->pc = RC_ADDR(0x00022efau);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_22EFC:
    /* 00022efc   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00022efcu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_22EFE:
    /* 00022efe   4  jsr (00023290) */
    c->pc = RC_ADDR(0x00022efeu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00022f02u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023290u);
    return;

L_22F02:
    /* 00022f02   4  lea (ffffd4ae,A4),A0 */
    c->pc = RC_ADDR(0x00022f02u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x2b52u);

L_22F06:
    /* 00022f06   2  subq.l #1,A2 */
    c->pc = RC_ADDR(0x00022f06u);
    rc_step(c, m, 8);
    c->a[2] -= 0x00000001u;

L_22F08:
    /* 00022f08   4  move.b (0,A0,D0.w),(A2) */
    c->pc = RC_ADDR(0x00022f08u);
    rc_step(c, m, 18);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_wr8(c, m, c->a[2], t0);
    rc_set_nzvc(c, t0, RC_B);

L_22F0C:
    /* 00022f0c   4  move.w (c,A5),D1 */
    c->pc = RC_ADDR(0x00022f0cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_22F10:
    /* 00022f10   2  ext.l D1 */
    c->pc = RC_ADDR(0x00022f10u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_22F12:
    /* 00022f12   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00022f12u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_22F14:
    /* 00022f14   4  jsr (ffff8302,A4) */
    c->pc = RC_ADDR(0x00022f14u);
    rc_step(c, m, 18);
    /* vector 128 */
    rc_push32(c, m, RC_ADDR(0x00022f18u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023df8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002329cu);
    return;

L_22F18:
    /* 00022f18   2  move.l D0,D4 */
    c->pc = RC_ADDR(0x00022f18u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_22F1A:
    /* 00022f1a   2  bne 00022ef6 */
    c->pc = RC_ADDR(0x00022f1au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_22EF6; }

L_22F1C:
    /* 00022f1c   4  tst.w (12,A5) */
    c->pc = RC_ADDR(0x00022f1cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x12u));
    rc_set_nzvc(c, t0, RC_W);

L_22F20:
    /* 00022f20   2  beq 00022f28 */
    c->pc = RC_ADDR(0x00022f20u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_22F28;

L_22F22:
    /* 00022f22   2  subq.l #1,A2 */
    c->pc = RC_ADDR(0x00022f22u);
    rc_step(c, m, 8);
    c->a[2] -= 0x00000001u;

L_22F24:
    /* 00022f24   4  move.b #2d,(A2) */
    c->pc = RC_ADDR(0x00022f24u);
    rc_step(c, m, 12);
    t0 = 0x0000002du;
    rc_wr8(c, m, c->a[2], t0);
    rc_set_nzvc(c, t0, RC_B);

L_22F28:
    /* 00022f28   2  move.l A2,D0 */
    c->pc = RC_ADDR(0x00022f28u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_22F2A:
    /* 00022f2a   4  movem.l (SP)+,{ D4 A2 } */
    c->pc = RC_ADDR(0x00022f2au);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_22F2E:
    /* 00022f2e   2  unlk A5 */
    c->pc = RC_ADDR(0x00022f2eu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_22F30:
    /* 00022f30   2  rts */
    c->pc = RC_ADDR(0x00022f30u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
