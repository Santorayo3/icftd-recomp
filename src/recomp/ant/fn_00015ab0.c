/* fn_00015ab0 - 222 byte(s), 58 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00015ab0(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x00015ab0u): goto L_15AB0;
    case RC_ADDR(0x00015ab4u): goto L_15AB4;
    case RC_ADDR(0x00015abau): goto L_15ABA;
    case RC_ADDR(0x00015ac0u): goto L_15AC0;
    case RC_ADDR(0x00015ac6u): goto L_15AC6;
    case RC_ADDR(0x00015acau): goto L_15ACA;
    case RC_ADDR(0x00015accu): goto L_15ACC;
    case RC_ADDR(0x00015ad0u): goto L_15AD0;
    case RC_ADDR(0x00015ad4u): goto L_15AD4;
    case RC_ADDR(0x00015ad8u): goto L_15AD8;
    case RC_ADDR(0x00015adcu): goto L_15ADC;
    case RC_ADDR(0x00015ae0u): goto L_15AE0;
    case RC_ADDR(0x00015ae4u): goto L_15AE4;
    case RC_ADDR(0x00015ae6u): goto L_15AE6;
    case RC_ADDR(0x00015ae8u): goto L_15AE8;
    case RC_ADDR(0x00015aeau): goto L_15AEA;
    case RC_ADDR(0x00015aeeu): goto L_15AEE;
    case RC_ADDR(0x00015af2u): goto L_15AF2;
    case RC_ADDR(0x00015af6u): goto L_15AF6;
    case RC_ADDR(0x00015afau): goto L_15AFA;
    case RC_ADDR(0x00015afcu): goto L_15AFC;
    case RC_ADDR(0x00015afeu): goto L_15AFE;
    case RC_ADDR(0x00015b00u): goto L_15B00;
    case RC_ADDR(0x00015b04u): goto L_15B04;
    case RC_ADDR(0x00015b06u): goto L_15B06;
    case RC_ADDR(0x00015b0au): goto L_15B0A;
    case RC_ADDR(0x00015b0eu): goto L_15B0E;
    case RC_ADDR(0x00015b12u): goto L_15B12;
    case RC_ADDR(0x00015b16u): goto L_15B16;
    case RC_ADDR(0x00015b18u): goto L_15B18;
    case RC_ADDR(0x00015b1cu): goto L_15B1C;
    case RC_ADDR(0x00015b22u): goto L_15B22;
    case RC_ADDR(0x00015b24u): goto L_15B24;
    case RC_ADDR(0x00015b2au): goto L_15B2A;
    case RC_ADDR(0x00015b2cu): goto L_15B2C;
    case RC_ADDR(0x00015b32u): goto L_15B32;
    case RC_ADDR(0x00015b34u): goto L_15B34;
    case RC_ADDR(0x00015b3au): goto L_15B3A;
    case RC_ADDR(0x00015b3cu): goto L_15B3C;
    case RC_ADDR(0x00015b42u): goto L_15B42;
    case RC_ADDR(0x00015b46u): goto L_15B46;
    case RC_ADDR(0x00015b48u): goto L_15B48;
    case RC_ADDR(0x00015b4au): goto L_15B4A;
    case RC_ADDR(0x00015b4cu): goto L_15B4C;
    case RC_ADDR(0x00015b50u): goto L_15B50;
    case RC_ADDR(0x00015b52u): goto L_15B52;
    case RC_ADDR(0x00015b56u): goto L_15B56;
    case RC_ADDR(0x00015b58u): goto L_15B58;
    case RC_ADDR(0x00015b5eu): goto L_15B5E;
    case RC_ADDR(0x00015b64u): goto L_15B64;
    case RC_ADDR(0x00015b6au): goto L_15B6A;
    case RC_ADDR(0x00015b6eu): goto L_15B6E;
    case RC_ADDR(0x00015b70u): goto L_15B70;
    case RC_ADDR(0x00015b76u): goto L_15B76;
    case RC_ADDR(0x00015b7cu): goto L_15B7C;
    case RC_ADDR(0x00015b82u): goto L_15B82;
    case RC_ADDR(0x00015b88u): goto L_15B88;
    case RC_ADDR(0x00015b8cu): goto L_15B8C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_15AB0:
    /* 00015ab0   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00015ab0u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_15AB4:
    /* 00015ab4   6  move.w #1,(1846,A4) */
    c->pc = RC_ADDR(0x00015ab4u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1846u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15ABA:
    /* 00015aba   6  move.w #1,(6e8,A4) */
    c->pc = RC_ADDR(0x00015abau);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x6e8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15AC0:
    /* 00015ac0   6  move.w #1,(14f2,A4) */
    c->pc = RC_ADDR(0x00015ac0u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x14f2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15AC6:
    /* 00015ac6   4  move.w (6fc,A4),D0 */
    c->pc = RC_ADDR(0x00015ac6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6fcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15ACA:
    /* 00015aca   2  lsr.w #4,D0 */
    c->pc = RC_ADDR(0x00015acau);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W));

L_15ACC:
    /* 00015acc   4  add.w (1148,A4),D0 */
    c->pc = RC_ADDR(0x00015accu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1148u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_15AD0:
    /* 00015ad0   4  move.w D0,(1ad0,A4) */
    c->pc = RC_ADDR(0x00015ad0u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1ad0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15AD4:
    /* 00015ad4   4  move.w (6fc,A4),D0 */
    c->pc = RC_ADDR(0x00015ad4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6fcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15AD8:
    /* 00015ad8   4  and.w #f,D0 */
    c->pc = RC_ADDR(0x00015ad8u);
    rc_step(c, m, 10);
    t0 = 0x0000000fu;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_15ADC:
    /* 00015adc   4  move.w D0,(1ad4,A4) */
    c->pc = RC_ADDR(0x00015adcu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1ad4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15AE0:
    /* 00015ae0   4  move.w (6fe,A4),D0 */
    c->pc = RC_ADDR(0x00015ae0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6feu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15AE4:
    /* 00015ae4   2  swap D0 */
    c->pc = RC_ADDR(0x00015ae4u);
    rc_step(c, m, 4);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_15AE6:
    /* 00015ae6   2  clr.w D0 */
    c->pc = RC_ADDR(0x00015ae6u);
    rc_step(c, m, 4);
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15AE8:
    /* 00015ae8   2  swap D0 */
    c->pc = RC_ADDR(0x00015ae8u);
    rc_step(c, m, 4);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_15AEA:
    /* 00015aea   4  divu.w #a,D0 */
    c->pc = RC_ADDR(0x00015aeau);
    rc_step(c, m, 144);
    t0 = 0x0000000au;
    rc_divu(c, m, 0, t0);

L_15AEE:
    /* 00015aee   4  add.w (114a,A4),D0 */
    c->pc = RC_ADDR(0x00015aeeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x114au));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_15AF2:
    /* 00015af2   4  move.w D0,(1ad2,A4) */
    c->pc = RC_ADDR(0x00015af2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1ad2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15AF6:
    /* 00015af6   4  move.w (6fe,A4),D0 */
    c->pc = RC_ADDR(0x00015af6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6feu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15AFA:
    /* 00015afa   2  swap D0 */
    c->pc = RC_ADDR(0x00015afau);
    rc_step(c, m, 4);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_15AFC:
    /* 00015afc   2  clr.w D0 */
    c->pc = RC_ADDR(0x00015afcu);
    rc_step(c, m, 4);
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15AFE:
    /* 00015afe   2  swap D0 */
    c->pc = RC_ADDR(0x00015afeu);
    rc_step(c, m, 4);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_15B00:
    /* 00015b00   4  divu.w #a,D0 */
    c->pc = RC_ADDR(0x00015b00u);
    rc_step(c, m, 144);
    t0 = 0x0000000au;
    rc_divu(c, m, 0, t0);

L_15B04:
    /* 00015b04   2  swap D0 */
    c->pc = RC_ADDR(0x00015b04u);
    rc_step(c, m, 4);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_15B06:
    /* 00015b06   4  move.w D0,(1ad6,A4) */
    c->pc = RC_ADDR(0x00015b06u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1ad6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15B0A:
    /* 00015b0a   4  jsr (00018254) */
    c->pc = RC_ADDR(0x00015b0au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00015b0eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00018254u);
    return;

L_15B0E:
    /* 00015b0e   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x00015b0eu);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15B12:
    /* 00015b12   4  jsr (ffff80ce,A4) */
    c->pc = RC_ADDR(0x00015b12u);
    rc_step(c, m, 18);
    /* vector 34 */
    rc_push32(c, m, RC_ADDR(0x00015b16u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bc4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af96u);
    return;

L_15B16:
    /* 00015b16   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00015b16u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_15B18:
    /* 00015b18   4  clr.w (1b44,A4) */
    c->pc = RC_ADDR(0x00015b18u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1b44u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15B1C:
    /* 00015b1c   6  cmpi.w #2bca,(6ee,A4) */
    c->pc = RC_ADDR(0x00015b1cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6eeu));
    rc_cmp(c, RC_W, t0, 0x00002bcau);

L_15B22:
    /* 00015b22   2  bls 00015b42 */
    c->pc = RC_ADDR(0x00015b22u);
    rc_step(c, m, 10);
    if (rc_cond(c, 3)) goto L_15B42;

L_15B24:
    /* 00015b24   6  cmpi.w #2e4a,(6ee,A4) */
    c->pc = RC_ADDR(0x00015b24u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6eeu));
    rc_cmp(c, RC_W, t0, 0x00002e4au);

L_15B2A:
    /* 00015b2a   2  bcc 00015b42 */
    c->pc = RC_ADDR(0x00015b2au);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_15B42;

L_15B2C:
    /* 00015b2c   6  cmpi.w #1446,(6f0,A4) */
    c->pc = RC_ADDR(0x00015b2cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6f0u));
    rc_cmp(c, RC_W, t0, 0x00001446u);

L_15B32:
    /* 00015b32   2  bls 00015b42 */
    c->pc = RC_ADDR(0x00015b32u);
    rc_step(c, m, 10);
    if (rc_cond(c, 3)) goto L_15B42;

L_15B34:
    /* 00015b34   6  cmpi.w #1766,(6f0,A4) */
    c->pc = RC_ADDR(0x00015b34u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6f0u));
    rc_cmp(c, RC_W, t0, 0x00001766u);

L_15B3A:
    /* 00015b3a   2  bcc 00015b42 */
    c->pc = RC_ADDR(0x00015b3au);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_15B42;

L_15B3C:
    /* 00015b3c   6  move.w #1,(1b44,A4) */
    c->pc = RC_ADDR(0x00015b3cu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1b44u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15B42:
    /* 00015b42   4  tst.w (1adc,A4) */
    c->pc = RC_ADDR(0x00015b42u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1adcu));
    rc_set_nzvc(c, t0, RC_W);

L_15B46:
    /* 00015b46   2  beq 00015b4c */
    c->pc = RC_ADDR(0x00015b46u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_15B4C;

L_15B48:
    /* 00015b48   2  unlk A5 */
    c->pc = RC_ADDR(0x00015b48u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_15B4A:
    /* 00015b4a   2  rts */
    c->pc = RC_ADDR(0x00015b4au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_15B4C:
    /* 00015b4c   4  tst.w (1b44,A4) */
    c->pc = RC_ADDR(0x00015b4cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b44u));
    rc_set_nzvc(c, t0, RC_W);

L_15B50:
    /* 00015b50   2  beq 00015b6a */
    c->pc = RC_ADDR(0x00015b50u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_15B6A;

L_15B52:
    /* 00015b52   4  tst.w (1ac2,A4) */
    c->pc = RC_ADDR(0x00015b52u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ac2u));
    rc_set_nzvc(c, t0, RC_W);

L_15B56:
    /* 00015b56   2  beq 00015b6a */
    c->pc = RC_ADDR(0x00015b56u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_15B6A;

L_15B58:
    /* 00015b58   6  move.w #1,(1b40,A4) */
    c->pc = RC_ADDR(0x00015b58u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1b40u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15B5E:
    /* 00015b5e   6  move.w #1,(14e8,A4) */
    c->pc = RC_ADDR(0x00015b5eu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x14e8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15B64:
    /* 00015b64   6  move.w #1,(856,A4) */
    c->pc = RC_ADDR(0x00015b64u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x856u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15B6A:
    /* 00015b6a   4  tst.w (1b2c,A4) */
    c->pc = RC_ADDR(0x00015b6au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b2cu));
    rc_set_nzvc(c, t0, RC_W);

L_15B6E:
    /* 00015b6e   2  bne 00015b7c */
    c->pc = RC_ADDR(0x00015b6eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_15B7C;

L_15B70:
    /* 00015b70   6  move.w #1,(14e8,A4) */
    c->pc = RC_ADDR(0x00015b70u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x14e8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15B76:
    /* 00015b76   6  move.w #1,(1b42,A4) */
    c->pc = RC_ADDR(0x00015b76u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1b42u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15B7C:
    /* 00015b7c   6  move.w (6ee,A4),(6f2,A4) */
    c->pc = RC_ADDR(0x00015b7cu);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6eeu));
    rc_wr16(c, m, (c->a[4] + 0x6f2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15B82:
    /* 00015b82   6  move.w (6f0,A4),(6f4,A4) */
    c->pc = RC_ADDR(0x00015b82u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6f0u));
    rc_wr16(c, m, (c->a[4] + 0x6f4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15B88:
    /* 00015b88   4  clr.w (14f0,A4) */
    c->pc = RC_ADDR(0x00015b88u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x14f0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15B8C:
    /* 00015b8c   2  bra 00015b48 */
    c->pc = RC_ADDR(0x00015b8cu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_15B48;

}
