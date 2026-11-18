/* fn_00001b22 - 142 byte(s), 42 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00001b22(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00001b22u): goto L_1B22;
    case RC_ADDR(0x00001b26u): goto L_1B26;
    case RC_ADDR(0x00001b2au): goto L_1B2A;
    case RC_ADDR(0x00001b2cu): goto L_1B2C;
    case RC_ADDR(0x00001b2eu): goto L_1B2E;
    case RC_ADDR(0x00001b30u): goto L_1B30;
    case RC_ADDR(0x00001b34u): goto L_1B34;
    case RC_ADDR(0x00001b36u): goto L_1B36;
    case RC_ADDR(0x00001b3au): goto L_1B3A;
    case RC_ADDR(0x00001b3eu): goto L_1B3E;
    case RC_ADDR(0x00001b42u): goto L_1B42;
    case RC_ADDR(0x00001b48u): goto L_1B48;
    case RC_ADDR(0x00001b4cu): goto L_1B4C;
    case RC_ADDR(0x00001b50u): goto L_1B50;
    case RC_ADDR(0x00001b52u): goto L_1B52;
    case RC_ADDR(0x00001b54u): goto L_1B54;
    case RC_ADDR(0x00001b58u): goto L_1B58;
    case RC_ADDR(0x00001b5eu): goto L_1B5E;
    case RC_ADDR(0x00001b60u): goto L_1B60;
    case RC_ADDR(0x00001b64u): goto L_1B64;
    case RC_ADDR(0x00001b66u): goto L_1B66;
    case RC_ADDR(0x00001b6au): goto L_1B6A;
    case RC_ADDR(0x00001b6eu): goto L_1B6E;
    case RC_ADDR(0x00001b70u): goto L_1B70;
    case RC_ADDR(0x00001b72u): goto L_1B72;
    case RC_ADDR(0x00001b76u): goto L_1B76;
    case RC_ADDR(0x00001b78u): goto L_1B78;
    case RC_ADDR(0x00001b7au): goto L_1B7A;
    case RC_ADDR(0x00001b7eu): goto L_1B7E;
    case RC_ADDR(0x00001b80u): goto L_1B80;
    case RC_ADDR(0x00001b84u): goto L_1B84;
    case RC_ADDR(0x00001b88u): goto L_1B88;
    case RC_ADDR(0x00001b8au): goto L_1B8A;
    case RC_ADDR(0x00001b8eu): goto L_1B8E;
    case RC_ADDR(0x00001b92u): goto L_1B92;
    case RC_ADDR(0x00001b94u): goto L_1B94;
    case RC_ADDR(0x00001b96u): goto L_1B96;
    case RC_ADDR(0x00001b9au): goto L_1B9A;
    case RC_ADDR(0x00001ba0u): goto L_1BA0;
    case RC_ADDR(0x00001ba4u): goto L_1BA4;
    case RC_ADDR(0x00001baau): goto L_1BAA;
    case RC_ADDR(0x00001bacu): goto L_1BAC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1B22:
    /* 00001b22   4  link.w A5,#fffffff6 */
    c->pc = RC_ADDR(0x00001b22u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xau;

L_1B26:
    /* 00001b26   4  tst.l (8,A5) */
    c->pc = RC_ADDR(0x00001b26u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_set_nzvc(c, t0, RC_L);

L_1B2A:
    /* 00001b2a   2  bne 00001b30 */
    c->pc = RC_ADDR(0x00001b2au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1B30;

L_1B2C:
    /* 00001b2c   2  unlk A5 */
    c->pc = RC_ADDR(0x00001b2cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1B2E:
    /* 00001b2e   2  rts */
    c->pc = RC_ADDR(0x00001b2eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_1B30:
    /* 00001b30   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00001b30u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1B34:
    /* 00001b34   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00001b34u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1B36:
    /* 00001b36   4  move.b (27,A0),D0 */
    c->pc = RC_ADDR(0x00001b36u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x27u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1B3A:
    /* 00001b3a   4  move.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00001b3au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B3E:
    /* 00001b3e   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00001b3eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1B42:
    /* 00001b42   6  move.l (28,A0),(fffffff6,A5) */
    c->pc = RC_ADDR(0x00001b42u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[0] + 0x28u));
    rc_wr32(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B48:
    /* 00001b48   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x00001b48u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1B4C:
    /* 00001b4c   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00001b4cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B50:
    /* 00001b50   2  ext.l D0 */
    c->pc = RC_ADDR(0x00001b50u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1B52:
    /* 00001b52   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00001b52u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B54:
    /* 00001b54   4  lea (ffffd6fc,A4),A0 */
    c->pc = RC_ADDR(0x00001b54u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x2904u);

L_1B58:
    /* 00001b58   6  cmpi.w #ffff,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00001b58u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_1B5E:
    /* 00001b5e   2  beq 00001b66 */
    c->pc = RC_ADDR(0x00001b5eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1B66;

L_1B60:
    /* 00001b60   4  addq.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00001b60u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1B64:
    /* 00001b64   2  bra 00001b4c */
    c->pc = RC_ADDR(0x00001b64u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1B4C;

L_1B66:
    /* 00001b66   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00001b66u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B6A:
    /* 00001b6a   4  subq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00001b6au);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1B6E:
    /* 00001b6e   2  tst.w D0 */
    c->pc = RC_ADDR(0x00001b6eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1B70:
    /* 00001b70   2  beq 00001bac */
    c->pc = RC_ADDR(0x00001b70u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1BAC;

L_1B72:
    /* 00001b72   4  movea.l (fffffff6,A5),A0 */
    c->pc = RC_ADDR(0x00001b72u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xau));
    c->a[0] = t0;

L_1B76:
    /* 00001b76   2  addq.l #2,A0 */
    c->pc = RC_ADDR(0x00001b76u);
    rc_step(c, m, 8);
    c->a[0] += 0x00000002u;

L_1B78:
    /* 00001b78   2  move.l A0,-(A7) */
    c->pc = RC_ADDR(0x00001b78u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B7A:
    /* 00001b7a   4  jsr (00001a50) */
    c->pc = RC_ADDR(0x00001b7au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001b7eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00001a50u);
    return;

L_1B7E:
    /* 00001b7e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00001b7eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1B80:
    /* 00001b80   4  move.w D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00001b80u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B84:
    /* 00001b84   4  tst.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x00001b84u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_set_nzvc(c, t0, RC_W);

L_1B88:
    /* 00001b88   2  blt 00001ba0 */
    c->pc = RC_ADDR(0x00001b88u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1BA0;

L_1B8A:
    /* 00001b8a   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00001b8au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B8E:
    /* 00001b8e   4  addq.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00001b8eu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1B92:
    /* 00001b92   2  ext.l D0 */
    c->pc = RC_ADDR(0x00001b92u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1B94:
    /* 00001b94   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00001b94u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B96:
    /* 00001b96   4  lea (ffffd6fc,A4),A0 */
    c->pc = RC_ADDR(0x00001b96u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x2904u);

L_1B9A:
    /* 00001b9a   6  move.w (fffffffa,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00001b9au);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BA0:
    /* 00001ba0   4  movea.l (fffffff6,A5),A0 */
    c->pc = RC_ADDR(0x00001ba0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xau));
    c->a[0] = t0;

L_1BA4:
    /* 00001ba4   6  move.l (6,A0),(fffffff6,A5) */
    c->pc = RC_ADDR(0x00001ba4u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[0] + 0x6u));
    rc_wr32(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BAA:
    /* 00001baa   2  bra 00001b66 */
    c->pc = RC_ADDR(0x00001baau);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1B66;

L_1BAC:
    /* 00001bac   4  bra 00001b2c */
    c->pc = RC_ADDR(0x00001bacu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1B2C;

}
