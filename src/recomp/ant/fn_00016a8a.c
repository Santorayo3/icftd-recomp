/* fn_00016a8a - 192 byte(s), 68 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00016a8a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00016a8au): goto L_16A8A;
    case RC_ADDR(0x00016a8eu): goto L_16A8E;
    case RC_ADDR(0x00016a90u): goto L_16A90;
    case RC_ADDR(0x00016a94u): goto L_16A94;
    case RC_ADDR(0x00016a96u): goto L_16A96;
    case RC_ADDR(0x00016a9au): goto L_16A9A;
    case RC_ADDR(0x00016a9cu): goto L_16A9C;
    case RC_ADDR(0x00016a9eu): goto L_16A9E;
    case RC_ADDR(0x00016aa0u): goto L_16AA0;
    case RC_ADDR(0x00016aa4u): goto L_16AA4;
    case RC_ADDR(0x00016aa8u): goto L_16AA8;
    case RC_ADDR(0x00016aacu): goto L_16AAC;
    case RC_ADDR(0x00016aaeu): goto L_16AAE;
    case RC_ADDR(0x00016ab0u): goto L_16AB0;
    case RC_ADDR(0x00016ab2u): goto L_16AB2;
    case RC_ADDR(0x00016ab6u): goto L_16AB6;
    case RC_ADDR(0x00016abau): goto L_16ABA;
    case RC_ADDR(0x00016abeu): goto L_16ABE;
    case RC_ADDR(0x00016ac0u): goto L_16AC0;
    case RC_ADDR(0x00016ac2u): goto L_16AC2;
    case RC_ADDR(0x00016ac4u): goto L_16AC4;
    case RC_ADDR(0x00016ac6u): goto L_16AC6;
    case RC_ADDR(0x00016acau): goto L_16ACA;
    case RC_ADDR(0x00016accu): goto L_16ACC;
    case RC_ADDR(0x00016aceu): goto L_16ACE;
    case RC_ADDR(0x00016ad0u): goto L_16AD0;
    case RC_ADDR(0x00016ad4u): goto L_16AD4;
    case RC_ADDR(0x00016ad6u): goto L_16AD6;
    case RC_ADDR(0x00016ad8u): goto L_16AD8;
    case RC_ADDR(0x00016adau): goto L_16ADA;
    case RC_ADDR(0x00016adeu): goto L_16ADE;
    case RC_ADDR(0x00016ae0u): goto L_16AE0;
    case RC_ADDR(0x00016ae4u): goto L_16AE4;
    case RC_ADDR(0x00016ae6u): goto L_16AE6;
    case RC_ADDR(0x00016ae8u): goto L_16AE8;
    case RC_ADDR(0x00016aeau): goto L_16AEA;
    case RC_ADDR(0x00016aecu): goto L_16AEC;
    case RC_ADDR(0x00016aeeu): goto L_16AEE;
    case RC_ADDR(0x00016af2u): goto L_16AF2;
    case RC_ADDR(0x00016af6u): goto L_16AF6;
    case RC_ADDR(0x00016afau): goto L_16AFA;
    case RC_ADDR(0x00016afcu): goto L_16AFC;
    case RC_ADDR(0x00016afeu): goto L_16AFE;
    case RC_ADDR(0x00016b00u): goto L_16B00;
    case RC_ADDR(0x00016b02u): goto L_16B02;
    case RC_ADDR(0x00016b06u): goto L_16B06;
    case RC_ADDR(0x00016b08u): goto L_16B08;
    case RC_ADDR(0x00016b0au): goto L_16B0A;
    case RC_ADDR(0x00016b0cu): goto L_16B0C;
    case RC_ADDR(0x00016b10u): goto L_16B10;
    case RC_ADDR(0x00016b12u): goto L_16B12;
    case RC_ADDR(0x00016b14u): goto L_16B14;
    case RC_ADDR(0x00016b16u): goto L_16B16;
    case RC_ADDR(0x00016b1au): goto L_16B1A;
    case RC_ADDR(0x00016b1cu): goto L_16B1C;
    case RC_ADDR(0x00016b20u): goto L_16B20;
    case RC_ADDR(0x00016b22u): goto L_16B22;
    case RC_ADDR(0x00016b24u): goto L_16B24;
    case RC_ADDR(0x00016b28u): goto L_16B28;
    case RC_ADDR(0x00016b2eu): goto L_16B2E;
    case RC_ADDR(0x00016b32u): goto L_16B32;
    case RC_ADDR(0x00016b36u): goto L_16B36;
    case RC_ADDR(0x00016b3au): goto L_16B3A;
    case RC_ADDR(0x00016b3cu): goto L_16B3C;
    case RC_ADDR(0x00016b40u): goto L_16B40;
    case RC_ADDR(0x00016b44u): goto L_16B44;
    case RC_ADDR(0x00016b46u): goto L_16B46;
    case RC_ADDR(0x00016b48u): goto L_16B48;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_16A8A:
    /* 00016a8a   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00016a8au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_16A8E:
    /* 00016a8e   2  move.l D4,-(A7) */
    c->pc = RC_ADDR(0x00016a8eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16A90:
    /* 00016a90   4  clr.w (1ab2,A4) */
    c->pc = RC_ADDR(0x00016a90u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1ab2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_16A94:
    /* 00016a94   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x00016a94u);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_16A96:
    /* 00016a96   4  bra 00016b3c */
    c->pc = RC_ADDR(0x00016a96u);
    rc_step(c, m, 10);
    goto L_16B3C;

L_16A9A:
    /* 00016a9a   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x00016a9au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16A9C:
    /* 00016a9c   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016a9cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16A9E:
    /* 00016a9e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016a9eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16AA0:
    /* 00016aa0   4  lea (1c0e,A4),A0 */
    c->pc = RC_ADDR(0x00016aa0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c0eu);

L_16AA4:
    /* 00016aa4   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00016aa4u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_16AA8:
    /* 00016aa8   4  bne 00016b3a */
    c->pc = RC_ADDR(0x00016aa8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_16B3A;

L_16AAC:
    /* 00016aac   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x00016aacu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16AAE:
    /* 00016aae   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016aaeu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16AB0:
    /* 00016ab0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016ab0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16AB2:
    /* 00016ab2   4  lea (1bde,A4),A0 */
    c->pc = RC_ADDR(0x00016ab2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1bdeu);

L_16AB6:
    /* 00016ab6   4  move.w (6ee,A4),D1 */
    c->pc = RC_ADDR(0x00016ab6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6eeu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16ABA:
    /* 00016aba   4  cmp.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00016abau);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_16ABE:
    /* 00016abe   2  ble 00016b3a */
    c->pc = RC_ADDR(0x00016abeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_16B3A;

L_16AC0:
    /* 00016ac0   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x00016ac0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16AC2:
    /* 00016ac2   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016ac2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16AC4:
    /* 00016ac4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016ac4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16AC6:
    /* 00016ac6   4  lea (1bde,A4),A0 */
    c->pc = RC_ADDR(0x00016ac6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1bdeu);

L_16ACA:
    /* 00016aca   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00016acau);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16ACC:
    /* 00016acc   2  move.l A0,-(A7) */
    c->pc = RC_ADDR(0x00016accu);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16ACE:
    /* 00016ace   2  move.w D4,-(A7) */
    c->pc = RC_ADDR(0x00016aceu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 4, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_16AD0:
    /* 00016ad0   4  jsr (000168d8) */
    c->pc = RC_ADDR(0x00016ad0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00016ad4u));
    rc_depth++;
    c->pc = RC_ADDR(0x000168d8u);
    return;

L_16AD4:
    /* 00016ad4   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00016ad4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_16AD6:
    /* 00016ad6   2  movea.l (A7)+,A0 */
    c->pc = RC_ADDR(0x00016ad6u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;

L_16AD8:
    /* 00016ad8   2  move.l (A7)+,D1 */
    c->pc = RC_ADDR(0x00016ad8u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_16ADA:
    /* 00016ada   4  move.w (0,A0,D1.w),D2 */
    c->pc = RC_ADDR(0x00016adau);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16ADE:
    /* 00016ade   2  add.w D0,D2 */
    c->pc = RC_ADDR(0x00016adeu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_16AE0:
    /* 00016ae0   4  move.w (6ee,A4),D0 */
    c->pc = RC_ADDR(0x00016ae0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6eeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16AE4:
    /* 00016ae4   2  cmp.w D2,D0 */
    c->pc = RC_ADDR(0x00016ae4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_16AE6:
    /* 00016ae6   2  bge 00016b3a */
    c->pc = RC_ADDR(0x00016ae6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_16B3A;

L_16AE8:
    /* 00016ae8   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x00016ae8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16AEA:
    /* 00016aea   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016aeau);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16AEC:
    /* 00016aec   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016aecu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16AEE:
    /* 00016aee   4  lea (1be6,A4),A0 */
    c->pc = RC_ADDR(0x00016aeeu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1be6u);

L_16AF2:
    /* 00016af2   4  move.w (6f0,A4),D1 */
    c->pc = RC_ADDR(0x00016af2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6f0u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16AF6:
    /* 00016af6   4  cmp.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00016af6u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_16AFA:
    /* 00016afa   2  ble 00016b3a */
    c->pc = RC_ADDR(0x00016afau);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_16B3A;

L_16AFC:
    /* 00016afc   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x00016afcu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16AFE:
    /* 00016afe   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016afeu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16B00:
    /* 00016b00   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016b00u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16B02:
    /* 00016b02   4  lea (1be6,A4),A0 */
    c->pc = RC_ADDR(0x00016b02u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1be6u);

L_16B06:
    /* 00016b06   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00016b06u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16B08:
    /* 00016b08   2  move.l A0,-(A7) */
    c->pc = RC_ADDR(0x00016b08u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16B0A:
    /* 00016b0a   2  move.w D4,-(A7) */
    c->pc = RC_ADDR(0x00016b0au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 4, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_16B0C:
    /* 00016b0c   4  jsr (000168fc) */
    c->pc = RC_ADDR(0x00016b0cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00016b10u));
    rc_depth++;
    c->pc = RC_ADDR(0x000168fcu);
    return;

L_16B10:
    /* 00016b10   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00016b10u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_16B12:
    /* 00016b12   2  movea.l (A7)+,A0 */
    c->pc = RC_ADDR(0x00016b12u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;

L_16B14:
    /* 00016b14   2  move.l (A7)+,D1 */
    c->pc = RC_ADDR(0x00016b14u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_16B16:
    /* 00016b16   4  move.w (0,A0,D1.w),D2 */
    c->pc = RC_ADDR(0x00016b16u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16B1A:
    /* 00016b1a   2  add.w D0,D2 */
    c->pc = RC_ADDR(0x00016b1au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_16B1C:
    /* 00016b1c   4  move.w (6f0,A4),D0 */
    c->pc = RC_ADDR(0x00016b1cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6f0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16B20:
    /* 00016b20   2  cmp.w D2,D0 */
    c->pc = RC_ADDR(0x00016b20u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_16B22:
    /* 00016b22   2  bge 00016b3a */
    c->pc = RC_ADDR(0x00016b22u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_16B3A;

L_16B24:
    /* 00016b24   4  move.w D4,(1c3e,A4) */
    c->pc = RC_ADDR(0x00016b24u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 4, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1c3eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16B28:
    /* 00016b28   6  move.w #1,(1ab2,A4) */
    c->pc = RC_ADDR(0x00016b28u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1ab2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16B2E:
    /* 00016b2e   4  clr.w (6e8,A4) */
    c->pc = RC_ADDR(0x00016b2eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x6e8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_16B32:
    /* 00016b32   4  clr.w (fffffa30,A4) */
    c->pc = RC_ADDR(0x00016b32u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x5d0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_16B36:
    /* 00016b36   4  clr.w (fffffa2e,A4) */
    c->pc = RC_ADDR(0x00016b36u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x5d2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_16B3A:
    /* 00016b3a   2  addq.w #1,D4 */
    c->pc = RC_ADDR(0x00016b3au);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_16B3C:
    /* 00016b3c   4  cmp.w (1ca0,A4),D4 */
    c->pc = RC_ADDR(0x00016b3cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ca0u));
    t1 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_16B40:
    /* 00016b40   4  blt 00016a9a */
    c->pc = RC_ADDR(0x00016b40u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_16A9A; }

L_16B44:
    /* 00016b44   2  move.l (A7)+,D4 */
    c->pc = RC_ADDR(0x00016b44u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_16B46:
    /* 00016b46   2  unlk A5 */
    c->pc = RC_ADDR(0x00016b46u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_16B48:
    /* 00016b48   2  rts */
    c->pc = RC_ADDR(0x00016b48u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
