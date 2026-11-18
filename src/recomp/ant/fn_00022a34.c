/* fn_00022a34 - 310 byte(s), 87 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00022a34(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00022a34u): goto L_22A34;
    case RC_ADDR(0x00022a38u): goto L_22A38;
    case RC_ADDR(0x00022a3au): goto L_22A3A;
    case RC_ADDR(0x00022a40u): goto L_22A40;
    case RC_ADDR(0x00022a44u): goto L_22A44;
    case RC_ADDR(0x00022a48u): goto L_22A48;
    case RC_ADDR(0x00022a4au): goto L_22A4A;
    case RC_ADDR(0x00022a4eu): goto L_22A4E;
    case RC_ADDR(0x00022a52u): goto L_22A52;
    case RC_ADDR(0x00022a54u): goto L_22A54;
    case RC_ADDR(0x00022a56u): goto L_22A56;
    case RC_ADDR(0x00022a58u): goto L_22A58;
    case RC_ADDR(0x00022a5eu): goto L_22A5E;
    case RC_ADDR(0x00022a62u): goto L_22A62;
    case RC_ADDR(0x00022a64u): goto L_22A64;
    case RC_ADDR(0x00022a68u): goto L_22A68;
    case RC_ADDR(0x00022a6au): goto L_22A6A;
    case RC_ADDR(0x00022a6eu): goto L_22A6E;
    case RC_ADDR(0x00022a72u): goto L_22A72;
    case RC_ADDR(0x00022a76u): goto L_22A76;
    case RC_ADDR(0x00022a7cu): goto L_22A7C;
    case RC_ADDR(0x00022a80u): goto L_22A80;
    case RC_ADDR(0x00022a86u): goto L_22A86;
    case RC_ADDR(0x00022a8au): goto L_22A8A;
    case RC_ADDR(0x00022a8eu): goto L_22A8E;
    case RC_ADDR(0x00022a92u): goto L_22A92;
    case RC_ADDR(0x00022a94u): goto L_22A94;
    case RC_ADDR(0x00022a98u): goto L_22A98;
    case RC_ADDR(0x00022a9cu): goto L_22A9C;
    case RC_ADDR(0x00022aa2u): goto L_22AA2;
    case RC_ADDR(0x00022aa4u): goto L_22AA4;
    case RC_ADDR(0x00022aa8u): goto L_22AA8;
    case RC_ADDR(0x00022aaau): goto L_22AAA;
    case RC_ADDR(0x00022aaeu): goto L_22AAE;
    case RC_ADDR(0x00022ab0u): goto L_22AB0;
    case RC_ADDR(0x00022ab2u): goto L_22AB2;
    case RC_ADDR(0x00022ab6u): goto L_22AB6;
    case RC_ADDR(0x00022abau): goto L_22ABA;
    case RC_ADDR(0x00022abcu): goto L_22ABC;
    case RC_ADDR(0x00022ac0u): goto L_22AC0;
    case RC_ADDR(0x00022ac6u): goto L_22AC6;
    case RC_ADDR(0x00022acau): goto L_22ACA;
    case RC_ADDR(0x00022ad0u): goto L_22AD0;
    case RC_ADDR(0x00022ad4u): goto L_22AD4;
    case RC_ADDR(0x00022adau): goto L_22ADA;
    case RC_ADDR(0x00022adeu): goto L_22ADE;
    case RC_ADDR(0x00022ae0u): goto L_22AE0;
    case RC_ADDR(0x00022ae4u): goto L_22AE4;
    case RC_ADDR(0x00022ae8u): goto L_22AE8;
    case RC_ADDR(0x00022aecu): goto L_22AEC;
    case RC_ADDR(0x00022af0u): goto L_22AF0;
    case RC_ADDR(0x00022af4u): goto L_22AF4;
    case RC_ADDR(0x00022af8u): goto L_22AF8;
    case RC_ADDR(0x00022afcu): goto L_22AFC;
    case RC_ADDR(0x00022afeu): goto L_22AFE;
    case RC_ADDR(0x00022b00u): goto L_22B00;
    case RC_ADDR(0x00022b04u): goto L_22B04;
    case RC_ADDR(0x00022b08u): goto L_22B08;
    case RC_ADDR(0x00022b0au): goto L_22B0A;
    case RC_ADDR(0x00022b0eu): goto L_22B0E;
    case RC_ADDR(0x00022b10u): goto L_22B10;
    case RC_ADDR(0x00022b14u): goto L_22B14;
    case RC_ADDR(0x00022b16u): goto L_22B16;
    case RC_ADDR(0x00022b1au): goto L_22B1A;
    case RC_ADDR(0x00022b20u): goto L_22B20;
    case RC_ADDR(0x00022b22u): goto L_22B22;
    case RC_ADDR(0x00022b26u): goto L_22B26;
    case RC_ADDR(0x00022b2au): goto L_22B2A;
    case RC_ADDR(0x00022b2cu): goto L_22B2C;
    case RC_ADDR(0x00022b30u): goto L_22B30;
    case RC_ADDR(0x00022b34u): goto L_22B34;
    case RC_ADDR(0x00022b38u): goto L_22B38;
    case RC_ADDR(0x00022b3au): goto L_22B3A;
    case RC_ADDR(0x00022b3eu): goto L_22B3E;
    case RC_ADDR(0x00022b42u): goto L_22B42;
    case RC_ADDR(0x00022b46u): goto L_22B46;
    case RC_ADDR(0x00022b4au): goto L_22B4A;
    case RC_ADDR(0x00022b4eu): goto L_22B4E;
    case RC_ADDR(0x00022b50u): goto L_22B50;
    case RC_ADDR(0x00022b54u): goto L_22B54;
    case RC_ADDR(0x00022b58u): goto L_22B58;
    case RC_ADDR(0x00022b5cu): goto L_22B5C;
    case RC_ADDR(0x00022b5eu): goto L_22B5E;
    case RC_ADDR(0x00022b62u): goto L_22B62;
    case RC_ADDR(0x00022b64u): goto L_22B64;
    case RC_ADDR(0x00022b66u): goto L_22B66;
    case RC_ADDR(0x00022b68u): goto L_22B68;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_22A34:
    /* 00022a34   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00022a34u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_22A38:
    /* 00022a38   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x00022a38u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22A3A:
    /* 00022a3a   6  pea (00010000).l */
    c->pc = RC_ADDR(0x00022a3au);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010000u);

L_22A40:
    /* 00022a40   4  move.w (ffffd542,A4),D0 */
    c->pc = RC_ADDR(0x00022a40u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2abeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_22A44:
    /* 00022a44   4  muls.w #6,D0 */
    c->pc = RC_ADDR(0x00022a44u);
    rc_step(c, m, 42);
    t0 = 0x00000006u;
    rc_muls(c, 0, t0);

L_22A48:
    /* 00022a48   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00022a48u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22A4A:
    /* 00022a4a   4  jsr (00023732) */
    c->pc = RC_ADDR(0x00022a4au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00022a4eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023732u);
    return;

L_22A4E:
    /* 00022a4e   4  move.l D0,(452c,A4) */
    c->pc = RC_ADDR(0x00022a4eu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x452cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_22A52:
    /* 00022a52   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00022a52u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_22A54:
    /* 00022a54   2  bne 00022a6a */
    c->pc = RC_ADDR(0x00022a54u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_22A6A;

L_22A56:
    /* 00022a56   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00022a56u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_22A58:
    /* 00022a58   6  pea (00010000).l */
    c->pc = RC_ADDR(0x00022a58u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010000u);

L_22A5E:
    /* 00022a5e   4  jsr (00023568) */
    c->pc = RC_ADDR(0x00022a5eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00022a62u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023568u);
    return;

L_22A62:
    /* 00022a62   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00022a62u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_22A64:
    /* 00022a64   4  movea.l (4520,A4),A7 */
    c->pc = RC_ADDR(0x00022a64u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4520u));
    c->a[7] = t0;

L_22A68:
    /* 00022a68   2  rts */
    c->pc = RC_ADDR(0x00022a68u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_22A6A:
    /* 00022a6a   4  movea.l (452c,A4),A0 */
    c->pc = RC_ADDR(0x00022a6au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x452cu));
    c->a[0] = t0;

L_22A6E:
    /* 00022a6e   4  clr.w (4,A0) */
    c->pc = RC_ADDR(0x00022a6eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[0] + 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_22A72:
    /* 00022a72   4  movea.l (452c,A4),A0 */
    c->pc = RC_ADDR(0x00022a72u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x452cu));
    c->a[0] = t0;

L_22A76:
    /* 00022a76   6  move.w #1,(10,A0) */
    c->pc = RC_ADDR(0x00022a76u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[0] + 0x10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_22A7C:
    /* 00022a7c   4  movea.l (452c,A4),A0 */
    c->pc = RC_ADDR(0x00022a7cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x452cu));
    c->a[0] = t0;

L_22A80:
    /* 00022a80   6  move.w #1,(a,A0) */
    c->pc = RC_ADDR(0x00022a80u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[0] + 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_22A86:
    /* 00022a86   4  movea.l (4520,A4),A0 */
    c->pc = RC_ADDR(0x00022a86u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4520u));
    c->a[0] = t0;

L_22A8A:
    /* 00022a8a   4  move.l (4520,A4),D0 */
    c->pc = RC_ADDR(0x00022a8au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4520u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_22A8E:
    /* 00022a8e   4  sub.l (4,A0),D0 */
    c->pc = RC_ADDR(0x00022a8eu);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[0] + 0x4u));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_22A92:
    /* 00022a92   2  addq.l #8,D0 */
    c->pc = RC_ADDR(0x00022a92u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + 0x00000008u;
    rc_flags_add(c, RC_L, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_22A94:
    /* 00022a94   4  move.l D0,(4530,A4) */
    c->pc = RC_ADDR(0x00022a94u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x4530u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_22A98:
    /* 00022a98   4  movea.l (4530,A4),A0 */
    c->pc = RC_ADDR(0x00022a98u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4530u));
    c->a[0] = t0;

L_22A9C:
    /* 00022a9c   6  move.l #4d414e58,(A0) */
    c->pc = RC_ADDR(0x00022a9cu);
    rc_step(c, m, 20);
    t0 = 0x4d414e58u;
    rc_wr32(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22AA2:
    /* 00022aa2   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00022aa2u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_22AA4:
    /* 00022aa4   4  jsr (0002375a) */
    c->pc = RC_ADDR(0x00022aa4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00022aa8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002375au);
    return;

L_22AA8:
    /* 00022aa8   2  movea.l D0,A2 */
    c->pc = RC_ADDR(0x00022aa8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[2] = t0;

L_22AAA:
    /* 00022aaa   4  tst.l (ac,A2) */
    c->pc = RC_ADDR(0x00022aaau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0xacu));
    rc_set_nzvc(c, t0, RC_L);

L_22AAE:
    /* 00022aae   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00022aaeu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_22AB0:
    /* 00022ab0   2  beq 00022ae0 */
    c->pc = RC_ADDR(0x00022ab0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_22AE0;

L_22AB2:
    /* 00022ab2   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x00022ab2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22AB6:
    /* 00022ab6   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00022ab6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22ABA:
    /* 00022aba   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x00022abau);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22ABC:
    /* 00022abc   4  jsr (00022b6c) */
    c->pc = RC_ADDR(0x00022abcu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00022ac0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00022b6cu);
    return;

L_22AC0:
    /* 00022ac0   6  move.w #1,(4534,A4) */
    c->pc = RC_ADDR(0x00022ac0u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x4534u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_22AC6:
    /* 00022ac6   4  movea.l (452c,A4),A0 */
    c->pc = RC_ADDR(0x00022ac6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x452cu));
    c->a[0] = t0;

L_22ACA:
    /* 00022aca   6  ori.w #8000,(4,A0) */
    c->pc = RC_ADDR(0x00022acau);
    rc_step(c, m, 20);
    t3 = (c->a[0] + 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 | 0x00008000u;
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_22AD0:
    /* 00022ad0   4  movea.l (452c,A4),A0 */
    c->pc = RC_ADDR(0x00022ad0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x452cu));
    c->a[0] = t0;

L_22AD4:
    /* 00022ad4   6  ori.w #8000,(a,A0) */
    c->pc = RC_ADDR(0x00022ad4u);
    rc_step(c, m, 20);
    t3 = (c->a[0] + 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 | 0x00008000u;
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_22ADA:
    /* 00022ada   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00022adau);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_22ADE:
    /* 00022ade   2  bra 00022b22 */
    c->pc = RC_ADDR(0x00022adeu);
    rc_step(c, m, 10);
    goto L_22B22;

L_22AE0:
    /* 00022ae0   4  pea (5c,A2) */
    c->pc = RC_ADDR(0x00022ae0u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[2] + 0x5cu));

L_22AE4:
    /* 00022ae4   4  jsr (0002380c) */
    c->pc = RC_ADDR(0x00022ae4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00022ae8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002380cu);
    return;

L_22AE8:
    /* 00022ae8   4  pea (5c,A2) */
    c->pc = RC_ADDR(0x00022ae8u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[2] + 0x5cu));

L_22AEC:
    /* 00022aec   4  jsr (0002378e) */
    c->pc = RC_ADDR(0x00022aecu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00022af0u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002378eu);
    return;

L_22AF0:
    /* 00022af0   4  move.l D0,(4536,A4) */
    c->pc = RC_ADDR(0x00022af0u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x4536u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_22AF4:
    /* 00022af4   4  movea.l (4536,A4),A0 */
    c->pc = RC_ADDR(0x00022af4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4536u));
    c->a[0] = t0;

L_22AF8:
    /* 00022af8   4  tst.l (24,A0) */
    c->pc = RC_ADDR(0x00022af8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0x24u));
    rc_set_nzvc(c, t0, RC_L);

L_22AFC:
    /* 00022afc   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00022afcu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_22AFE:
    /* 00022afe   2  beq 00022b10 */
    c->pc = RC_ADDR(0x00022afeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_22B10;

L_22B00:
    /* 00022b00   4  movea.l (4536,A4),A0 */
    c->pc = RC_ADDR(0x00022b00u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4536u));
    c->a[0] = t0;

L_22B04:
    /* 00022b04   4  movea.l (24,A0),A1 */
    c->pc = RC_ADDR(0x00022b04u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0x24u));
    c->a[1] = t0;

L_22B08:
    /* 00022b08   2  move.l (A1),-(A7) */
    c->pc = RC_ADDR(0x00022b08u);
    rc_step(c, m, 20);
    t0 = rc_rd32(c, m, c->a[1]);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22B0A:
    /* 00022b0a   4  jsr (000234b2) */
    c->pc = RC_ADDR(0x00022b0au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00022b0eu));
    rc_depth++;
    c->pc = RC_ADDR(0x000234b2u);
    return;

L_22B0E:
    /* 00022b0e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00022b0eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_22B10:
    /* 00022b10   4  move.l (4536,A4),-(A7) */
    c->pc = RC_ADDR(0x00022b10u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4536u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22B14:
    /* 00022b14   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x00022b14u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22B16:
    /* 00022b16   4  jsr (00022da4) */
    c->pc = RC_ADDR(0x00022b16u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00022b1au));
    rc_depth++;
    c->pc = RC_ADDR(0x00022da4u);
    return;

L_22B1A:
    /* 00022b1a   6  move.l (4536,A4),(453a,A4) */
    c->pc = RC_ADDR(0x00022b1au);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4536u));
    rc_wr32(c, m, (c->a[4] + 0x453au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_22B20:
    /* 00022b20   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00022b20u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_22B22:
    /* 00022b22   4  jsr (000234e4) */
    c->pc = RC_ADDR(0x00022b22u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00022b26u));
    rc_depth++;
    c->pc = RC_ADDR(0x000234e4u);
    return;

L_22B26:
    /* 00022b26   4  movea.l (452c,A4),A0 */
    c->pc = RC_ADDR(0x00022b26u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x452cu));
    c->a[0] = t0;

L_22B2A:
    /* 00022b2a   2  move.l D0,(A0) */
    c->pc = RC_ADDR(0x00022b2au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22B2C:
    /* 00022b2c   4  jsr (0002350c) */
    c->pc = RC_ADDR(0x00022b2cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00022b30u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002350cu);
    return;

L_22B30:
    /* 00022b30   4  movea.l (452c,A4),A0 */
    c->pc = RC_ADDR(0x00022b30u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x452cu));
    c->a[0] = t0;

L_22B34:
    /* 00022b34   4  move.l D0,(6,A0) */
    c->pc = RC_ADDR(0x00022b34u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[0] + 0x6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_22B38:
    /* 00022b38   2  beq 00022b50 */
    c->pc = RC_ADDR(0x00022b38u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_22B50;

L_22B3A:
    /* 00022b3a   4  pea (000003ed).l */
    c->pc = RC_ADDR(0x00022b3au);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000003edu);

L_22B3E:
    /* 00022b3e   4  pea (00022b6a) */
    c->pc = RC_ADDR(0x00022b3eu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00022b6au));

L_22B42:
    /* 00022b42   4  jsr (000234fe) */
    c->pc = RC_ADDR(0x00022b42u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00022b46u));
    rc_depth++;
    c->pc = RC_ADDR(0x000234feu);
    return;

L_22B46:
    /* 00022b46   4  movea.l (452c,A4),A0 */
    c->pc = RC_ADDR(0x00022b46u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x452cu));
    c->a[0] = t0;

L_22B4A:
    /* 00022b4a   4  move.l D0,(c,A0) */
    c->pc = RC_ADDR(0x00022b4au);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[0] + 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_22B4E:
    /* 00022b4e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00022b4eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_22B50:
    /* 00022b50   4  move.l (453a,A4),-(A7) */
    c->pc = RC_ADDR(0x00022b50u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x453au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22B54:
    /* 00022b54   4  move.w (453e,A4),-(A7) */
    c->pc = RC_ADDR(0x00022b54u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x453eu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_22B58:
    /* 00022b58   4  jsr (00020886) */
    c->pc = RC_ADDR(0x00022b58u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00022b5cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00020886u);
    return;

L_22B5C:
    /* 00022b5c   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00022b5cu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_22B5E:
    /* 00022b5e   4  jsr (000232f6) */
    c->pc = RC_ADDR(0x00022b5eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00022b62u));
    rc_depth++;
    c->pc = RC_ADDR(0x000232f6u);
    return;

L_22B62:
    /* 00022b62   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00022b62u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_22B64:
    /* 00022b64   2  movea.l (A7)+,A2 */
    c->pc = RC_ADDR(0x00022b64u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_22B66:
    /* 00022b66   2  unlk A5 */
    c->pc = RC_ADDR(0x00022b66u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_22B68:
    /* 00022b68   2  rts */
    c->pc = RC_ADDR(0x00022b68u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
