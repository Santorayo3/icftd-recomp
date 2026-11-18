/* fn_00014a28 - 546 byte(s), 150 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00014a28(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00014a28u): goto L_14A28;
    case RC_ADDR(0x00014a2cu): goto L_14A2C;
    case RC_ADDR(0x00014a32u): goto L_14A32;
    case RC_ADDR(0x00014a38u): goto L_14A38;
    case RC_ADDR(0x00014a3eu): goto L_14A3E;
    case RC_ADDR(0x00014a42u): goto L_14A42;
    case RC_ADDR(0x00014a46u): goto L_14A46;
    case RC_ADDR(0x00014a4au): goto L_14A4A;
    case RC_ADDR(0x00014a4eu): goto L_14A4E;
    case RC_ADDR(0x00014a52u): goto L_14A52;
    case RC_ADDR(0x00014a56u): goto L_14A56;
    case RC_ADDR(0x00014a5au): goto L_14A5A;
    case RC_ADDR(0x00014a5eu): goto L_14A5E;
    case RC_ADDR(0x00014a62u): goto L_14A62;
    case RC_ADDR(0x00014a66u): goto L_14A66;
    case RC_ADDR(0x00014a6au): goto L_14A6A;
    case RC_ADDR(0x00014a6cu): goto L_14A6C;
    case RC_ADDR(0x00014a6eu): goto L_14A6E;
    case RC_ADDR(0x00014a72u): goto L_14A72;
    case RC_ADDR(0x00014a76u): goto L_14A76;
    case RC_ADDR(0x00014a7au): goto L_14A7A;
    case RC_ADDR(0x00014a7cu): goto L_14A7C;
    case RC_ADDR(0x00014a80u): goto L_14A80;
    case RC_ADDR(0x00014a84u): goto L_14A84;
    case RC_ADDR(0x00014a88u): goto L_14A88;
    case RC_ADDR(0x00014a8cu): goto L_14A8C;
    case RC_ADDR(0x00014a90u): goto L_14A90;
    case RC_ADDR(0x00014a94u): goto L_14A94;
    case RC_ADDR(0x00014a98u): goto L_14A98;
    case RC_ADDR(0x00014a9cu): goto L_14A9C;
    case RC_ADDR(0x00014aa0u): goto L_14AA0;
    case RC_ADDR(0x00014aa4u): goto L_14AA4;
    case RC_ADDR(0x00014aa8u): goto L_14AA8;
    case RC_ADDR(0x00014aaau): goto L_14AAA;
    case RC_ADDR(0x00014aacu): goto L_14AAC;
    case RC_ADDR(0x00014aaeu): goto L_14AAE;
    case RC_ADDR(0x00014ab2u): goto L_14AB2;
    case RC_ADDR(0x00014ab6u): goto L_14AB6;
    case RC_ADDR(0x00014abau): goto L_14ABA;
    case RC_ADDR(0x00014ac0u): goto L_14AC0;
    case RC_ADDR(0x00014ac4u): goto L_14AC4;
    case RC_ADDR(0x00014acau): goto L_14ACA;
    case RC_ADDR(0x00014aceu): goto L_14ACE;
    case RC_ADDR(0x00014ad2u): goto L_14AD2;
    case RC_ADDR(0x00014ad6u): goto L_14AD6;
    case RC_ADDR(0x00014adau): goto L_14ADA;
    case RC_ADDR(0x00014adeu): goto L_14ADE;
    case RC_ADDR(0x00014ae0u): goto L_14AE0;
    case RC_ADDR(0x00014ae2u): goto L_14AE2;
    case RC_ADDR(0x00014ae6u): goto L_14AE6;
    case RC_ADDR(0x00014aeau): goto L_14AEA;
    case RC_ADDR(0x00014aecu): goto L_14AEC;
    case RC_ADDR(0x00014af0u): goto L_14AF0;
    case RC_ADDR(0x00014af2u): goto L_14AF2;
    case RC_ADDR(0x00014af6u): goto L_14AF6;
    case RC_ADDR(0x00014af8u): goto L_14AF8;
    case RC_ADDR(0x00014afcu): goto L_14AFC;
    case RC_ADDR(0x00014b00u): goto L_14B00;
    case RC_ADDR(0x00014b02u): goto L_14B02;
    case RC_ADDR(0x00014b08u): goto L_14B08;
    case RC_ADDR(0x00014b0au): goto L_14B0A;
    case RC_ADDR(0x00014b0eu): goto L_14B0E;
    case RC_ADDR(0x00014b10u): goto L_14B10;
    case RC_ADDR(0x00014b14u): goto L_14B14;
    case RC_ADDR(0x00014b16u): goto L_14B16;
    case RC_ADDR(0x00014b1cu): goto L_14B1C;
    case RC_ADDR(0x00014b1eu): goto L_14B1E;
    case RC_ADDR(0x00014b22u): goto L_14B22;
    case RC_ADDR(0x00014b24u): goto L_14B24;
    case RC_ADDR(0x00014b26u): goto L_14B26;
    case RC_ADDR(0x00014b28u): goto L_14B28;
    case RC_ADDR(0x00014b2cu): goto L_14B2C;
    case RC_ADDR(0x00014b30u): goto L_14B30;
    case RC_ADDR(0x00014b32u): goto L_14B32;
    case RC_ADDR(0x00014b36u): goto L_14B36;
    case RC_ADDR(0x00014b3au): goto L_14B3A;
    case RC_ADDR(0x00014b3cu): goto L_14B3C;
    case RC_ADDR(0x00014b40u): goto L_14B40;
    case RC_ADDR(0x00014b46u): goto L_14B46;
    case RC_ADDR(0x00014b48u): goto L_14B48;
    case RC_ADDR(0x00014b4cu): goto L_14B4C;
    case RC_ADDR(0x00014b50u): goto L_14B50;
    case RC_ADDR(0x00014b52u): goto L_14B52;
    case RC_ADDR(0x00014b54u): goto L_14B54;
    case RC_ADDR(0x00014b58u): goto L_14B58;
    case RC_ADDR(0x00014b5cu): goto L_14B5C;
    case RC_ADDR(0x00014b5eu): goto L_14B5E;
    case RC_ADDR(0x00014b62u): goto L_14B62;
    case RC_ADDR(0x00014b64u): goto L_14B64;
    case RC_ADDR(0x00014b68u): goto L_14B68;
    case RC_ADDR(0x00014b6au): goto L_14B6A;
    case RC_ADDR(0x00014b6cu): goto L_14B6C;
    case RC_ADDR(0x00014b70u): goto L_14B70;
    case RC_ADDR(0x00014b72u): goto L_14B72;
    case RC_ADDR(0x00014b78u): goto L_14B78;
    case RC_ADDR(0x00014b7au): goto L_14B7A;
    case RC_ADDR(0x00014b80u): goto L_14B80;
    case RC_ADDR(0x00014b82u): goto L_14B82;
    case RC_ADDR(0x00014b88u): goto L_14B88;
    case RC_ADDR(0x00014b8cu): goto L_14B8C;
    case RC_ADDR(0x00014b8eu): goto L_14B8E;
    case RC_ADDR(0x00014b90u): goto L_14B90;
    case RC_ADDR(0x00014b94u): goto L_14B94;
    case RC_ADDR(0x00014b98u): goto L_14B98;
    case RC_ADDR(0x00014b9au): goto L_14B9A;
    case RC_ADDR(0x00014b9eu): goto L_14B9E;
    case RC_ADDR(0x00014ba0u): goto L_14BA0;
    case RC_ADDR(0x00014ba6u): goto L_14BA6;
    case RC_ADDR(0x00014bacu): goto L_14BAC;
    case RC_ADDR(0x00014bb0u): goto L_14BB0;
    case RC_ADDR(0x00014bb4u): goto L_14BB4;
    case RC_ADDR(0x00014bb8u): goto L_14BB8;
    case RC_ADDR(0x00014bbeu): goto L_14BBE;
    case RC_ADDR(0x00014bc2u): goto L_14BC2;
    case RC_ADDR(0x00014bc6u): goto L_14BC6;
    case RC_ADDR(0x00014bcau): goto L_14BCA;
    case RC_ADDR(0x00014bceu): goto L_14BCE;
    case RC_ADDR(0x00014bd2u): goto L_14BD2;
    case RC_ADDR(0x00014bd6u): goto L_14BD6;
    case RC_ADDR(0x00014bd8u): goto L_14BD8;
    case RC_ADDR(0x00014bdcu): goto L_14BDC;
    case RC_ADDR(0x00014be0u): goto L_14BE0;
    case RC_ADDR(0x00014be2u): goto L_14BE2;
    case RC_ADDR(0x00014be6u): goto L_14BE6;
    case RC_ADDR(0x00014beau): goto L_14BEA;
    case RC_ADDR(0x00014beeu): goto L_14BEE;
    case RC_ADDR(0x00014bf0u): goto L_14BF0;
    case RC_ADDR(0x00014bf4u): goto L_14BF4;
    case RC_ADDR(0x00014bfau): goto L_14BFA;
    case RC_ADDR(0x00014bfeu): goto L_14BFE;
    case RC_ADDR(0x00014c00u): goto L_14C00;
    case RC_ADDR(0x00014c04u): goto L_14C04;
    case RC_ADDR(0x00014c08u): goto L_14C08;
    case RC_ADDR(0x00014c0eu): goto L_14C0E;
    case RC_ADDR(0x00014c12u): goto L_14C12;
    case RC_ADDR(0x00014c18u): goto L_14C18;
    case RC_ADDR(0x00014c1au): goto L_14C1A;
    case RC_ADDR(0x00014c1eu): goto L_14C1E;
    case RC_ADDR(0x00014c20u): goto L_14C20;
    case RC_ADDR(0x00014c26u): goto L_14C26;
    case RC_ADDR(0x00014c2au): goto L_14C2A;
    case RC_ADDR(0x00014c2cu): goto L_14C2C;
    case RC_ADDR(0x00014c30u): goto L_14C30;
    case RC_ADDR(0x00014c32u): goto L_14C32;
    case RC_ADDR(0x00014c36u): goto L_14C36;
    case RC_ADDR(0x00014c3au): goto L_14C3A;
    case RC_ADDR(0x00014c3cu): goto L_14C3C;
    case RC_ADDR(0x00014c40u): goto L_14C40;
    case RC_ADDR(0x00014c42u): goto L_14C42;
    case RC_ADDR(0x00014c46u): goto L_14C46;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_14A28:
    /* 00014a28   4  link.w A5,#fffffff8 */
    c->pc = RC_ADDR(0x00014a28u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x8u;

L_14A2C:
    /* 00014a2c   6  move.w (a,A5),(1ab8,A4) */
    c->pc = RC_ADDR(0x00014a2cu);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_wr16(c, m, (c->a[4] + 0x1ab8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14A32:
    /* 00014a32   6  move.w #ffff,(1aba,A4) */
    c->pc = RC_ADDR(0x00014a32u);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x1abau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14A38:
    /* 00014a38   6  move.w (8,A5),(1ab6,A4) */
    c->pc = RC_ADDR(0x00014a38u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_wr16(c, m, (c->a[4] + 0x1ab6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14A3E:
    /* 00014a3e   4  pea (574,A4) */
    c->pc = RC_ADDR(0x00014a3eu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x574u));

L_14A42:
    /* 00014a42   4  move.w #20,-(A7) */
    c->pc = RC_ADDR(0x00014a42u);
    rc_step(c, m, 12);
    t0 = 0x00000020u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14A46:
    /* 00014a46   4  pea (00014c4a) */
    c->pc = RC_ADDR(0x00014a46u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00014c4au));

L_14A4A:
    /* 00014a4a   4  jsr (ffff819a,A4) */
    c->pc = RC_ADDR(0x00014a4au);
    rc_step(c, m, 18);
    /* vector 68 */
    rc_push32(c, m, RC_ADDR(0x00014a4eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c90u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001850eu);
    return;

L_14A4E:
    /* 00014a4e   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00014a4eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_14A52:
    /* 00014a52   4  pea (5f4,A4) */
    c->pc = RC_ADDR(0x00014a52u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x5f4u));

L_14A56:
    /* 00014a56   4  move.w #8,-(A7) */
    c->pc = RC_ADDR(0x00014a56u);
    rc_step(c, m, 12);
    t0 = 0x00000008u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14A5A:
    /* 00014a5a   4  pea (00014c4f) */
    c->pc = RC_ADDR(0x00014a5au);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00014c4fu));

L_14A5E:
    /* 00014a5e   4  jsr (ffff819a,A4) */
    c->pc = RC_ADDR(0x00014a5eu);
    rc_step(c, m, 18);
    /* vector 68 */
    rc_push32(c, m, RC_ADDR(0x00014a62u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c90u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001850eu);
    return;

L_14A62:
    /* 00014a62   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00014a62u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_14A66:
    /* 00014a66   4  move.w (ffff83e2,A4),D0 */
    c->pc = RC_ADDR(0x00014a66u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14A6A:
    /* 00014a6a   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014a6au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_14A6C:
    /* 00014a6c   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00014a6cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_14A6E:
    /* 00014a6e   4  lea (ffff84a2,A4),A0 */
    c->pc = RC_ADDR(0x00014a6eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7b5eu);

L_14A72:
    /* 00014a72   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00014a72u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_14A76:
    /* 00014a76   4  jsr (ffff82d2,A4) */
    c->pc = RC_ADDR(0x00014a76u);
    rc_step(c, m, 18);
    /* vector 120 */
    rc_push32(c, m, RC_ADDR(0x00014a7au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dc8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000228c2u);
    return;

L_14A7A:
    /* 00014a7a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00014a7au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_14A7C:
    /* 00014a7c   4  move.w D0,(6ba,A4) */
    c->pc = RC_ADDR(0x00014a7cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x6bau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14A80:
    /* 00014a80   4  move.w (6ba,A4),D0 */
    c->pc = RC_ADDR(0x00014a80u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6bau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14A84:
    /* 00014a84   4  muls.w #a,D0 */
    c->pc = RC_ADDR(0x00014a84u);
    rc_step(c, m, 42);
    t0 = 0x0000000au;
    rc_muls(c, 0, t0);

L_14A88:
    /* 00014a88   4  move.w D0,(6b8,A4) */
    c->pc = RC_ADDR(0x00014a88u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x6b8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14A8C:
    /* 00014a8c   4  clr.w (6ac,A4) */
    c->pc = RC_ADDR(0x00014a8cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x6acu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14A90:
    /* 00014a90   4  clr.w (6c6,A4) */
    c->pc = RC_ADDR(0x00014a90u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x6c6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14A94:
    /* 00014a94   4  clr.w (6aa,A4) */
    c->pc = RC_ADDR(0x00014a94u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x6aau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14A98:
    /* 00014a98   4  clr.w (856,A4) */
    c->pc = RC_ADDR(0x00014a98u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x856u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14A9C:
    /* 00014a9c   4  clr.w (6c8,A4) */
    c->pc = RC_ADDR(0x00014a9cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x6c8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14AA0:
    /* 00014aa0   4  clr.w (6c4,A4) */
    c->pc = RC_ADDR(0x00014aa0u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x6c4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14AA4:
    /* 00014aa4   4  tst.w (6b8,A4) */
    c->pc = RC_ADDR(0x00014aa4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6b8u));
    rc_set_nzvc(c, t0, RC_W);

L_14AA8:
    /* 00014aa8   2  bne 00014aae */
    c->pc = RC_ADDR(0x00014aa8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_14AAE;

L_14AAA:
    /* 00014aaa   2  unlk A5 */
    c->pc = RC_ADDR(0x00014aaau);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_14AAC:
    /* 00014aac   2  rts */
    c->pc = RC_ADDR(0x00014aacu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_14AAE:
    /* 00014aae   4  move.w (6b8,A4),D0 */
    c->pc = RC_ADDR(0x00014aaeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6b8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14AB2:
    /* 00014ab2   4  sub.w #a,D0 */
    c->pc = RC_ADDR(0x00014ab2u);
    rc_step(c, m, 10);
    t0 = 0x0000000au;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_14AB6:
    /* 00014ab6   4  move.w D0,(6e4,A4) */
    c->pc = RC_ADDR(0x00014ab6u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x6e4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14ABA:
    /* 00014aba   6  move.w #1,(1ac0,A4) */
    c->pc = RC_ADDR(0x00014abau);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1ac0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14AC0:
    /* 00014ac0   4  clr.w (6e2,A4) */
    c->pc = RC_ADDR(0x00014ac0u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x6e2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14AC4:
    /* 00014ac4   6  move.w #ffff,(1abc,A4) */
    c->pc = RC_ADDR(0x00014ac4u);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x1abcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14ACA:
    /* 00014aca   4  clr.w (6ca,A4) */
    c->pc = RC_ADDR(0x00014acau);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x6cau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14ACE:
    /* 00014ace   4  clr.w (1abe,A4) */
    c->pc = RC_ADDR(0x00014aceu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1abeu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14AD2:
    /* 00014ad2   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00014ad2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14AD6:
    /* 00014ad6   4  bra 00014bc2 */
    c->pc = RC_ADDR(0x00014ad6u);
    rc_step(c, m, 10);
    goto L_14BC2;

L_14ADA:
    /* 00014ada   4  move.w (ffff83e2,A4),D0 */
    c->pc = RC_ADDR(0x00014adau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14ADE:
    /* 00014ade   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014adeu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_14AE0:
    /* 00014ae0   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00014ae0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_14AE2:
    /* 00014ae2   4  lea (ffff84de,A4),A0 */
    c->pc = RC_ADDR(0x00014ae2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7b22u);

L_14AE6:
    /* 00014ae6   4  move.l (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00014ae6u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_14AEA:
    /* 00014aea   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00014aeau);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_14AEC:
    /* 00014aec   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00014aecu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14AF0:
    /* 00014af0   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x00014af0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_14AF2:
    /* 00014af2   4  move.b (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x00014af2u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_14AF6:
    /* 00014af6   2  ext.w D0 */
    c->pc = RC_ADDR(0x00014af6u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_14AF8:
    /* 00014af8   4  move.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00014af8u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14AFC:
    /* 00014afc   4  tst.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x00014afcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_W);

L_14B00:
    /* 00014b00   2  beq 00014b48 */
    c->pc = RC_ADDR(0x00014b00u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_14B48;

L_14B02:
    /* 00014b02   6  cmpi.w #9,(ffff83e2,A4) */
    c->pc = RC_ADDR(0x00014b02u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1eu));
    rc_cmp(c, RC_W, t0, 0x00000009u);

L_14B08:
    /* 00014b08   2  ble 00014b16 */
    c->pc = RC_ADDR(0x00014b08u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_14B16;

L_14B0A:
    /* 00014b0a   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00014b0au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14B0E:
    /* 00014b0e   2  lsr.w #1,D0 */
    c->pc = RC_ADDR(0x00014b0eu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_14B10:
    /* 00014b10   4  move.w D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00014b10u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14B14:
    /* 00014b14   2  bra 00014b36 */
    c->pc = RC_ADDR(0x00014b14u);
    rc_step(c, m, 10);
    goto L_14B36;

L_14B16:
    /* 00014b16   6  cmpi.w #4,(ffff83e2,A4) */
    c->pc = RC_ADDR(0x00014b16u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1eu));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_14B1C:
    /* 00014b1c   2  ble 00014b32 */
    c->pc = RC_ADDR(0x00014b1cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_14B32;

L_14B1E:
    /* 00014b1e   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00014b1eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14B22:
    /* 00014b22   2  swap D0 */
    c->pc = RC_ADDR(0x00014b22u);
    rc_step(c, m, 4);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_14B24:
    /* 00014b24   2  clr.w D0 */
    c->pc = RC_ADDR(0x00014b24u);
    rc_step(c, m, 4);
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14B26:
    /* 00014b26   2  swap D0 */
    c->pc = RC_ADDR(0x00014b26u);
    rc_step(c, m, 4);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_14B28:
    /* 00014b28   4  divu.w #3,D0 */
    c->pc = RC_ADDR(0x00014b28u);
    rc_step(c, m, 144);
    t0 = 0x00000003u;
    rc_divu(c, m, 0, t0);

L_14B2C:
    /* 00014b2c   4  move.w D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00014b2cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14B30:
    /* 00014b30   2  bra 00014b36 */
    c->pc = RC_ADDR(0x00014b30u);
    rc_step(c, m, 10);
    goto L_14B36;

L_14B32:
    /* 00014b32   4  clr.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x00014b32u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14B36:
    /* 00014b36   4  tst.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x00014b36u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_set_nzvc(c, t0, RC_W);

L_14B3A:
    /* 00014b3a   2  bcc 00014b40 */
    c->pc = RC_ADDR(0x00014b3au);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_14B40;

L_14B3C:
    /* 00014b3c   4  clr.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x00014b3cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14B40:
    /* 00014b40   6  move.w (fffffffa,A5),(fffffff8,A5) */
    c->pc = RC_ADDR(0x00014b40u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14B46:
    /* 00014b46   2  bra 00014b4c */
    c->pc = RC_ADDR(0x00014b46u);
    rc_step(c, m, 10);
    goto L_14B4C;

L_14B48:
    /* 00014b48   4  clr.w (fffffff8,A5) */
    c->pc = RC_ADDR(0x00014b48u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14B4C:
    /* 00014b4c   4  move.w (ffff83e2,A4),D0 */
    c->pc = RC_ADDR(0x00014b4cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14B50:
    /* 00014b50   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014b50u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_14B52:
    /* 00014b52   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00014b52u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_14B54:
    /* 00014b54   4  lea (ffff84a2,A4),A0 */
    c->pc = RC_ADDR(0x00014b54u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7b5eu);

L_14B58:
    /* 00014b58   4  move.l (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00014b58u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_14B5C:
    /* 00014b5c   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00014b5cu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_14B5E:
    /* 00014b5e   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00014b5eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14B62:
    /* 00014b62   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x00014b62u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_14B64:
    /* 00014b64   4  move.b (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x00014b64u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_14B68:
    /* 00014b68   2  ext.w D0 */
    c->pc = RC_ADDR(0x00014b68u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_14B6A:
    /* 00014b6a   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x00014b6au);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_14B6C:
    /* 00014b6c   4  cmp.w (a,A5),D0 */
    c->pc = RC_ADDR(0x00014b6cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_14B70:
    /* 00014b70   2  bne 00014bbe */
    c->pc = RC_ADDR(0x00014b70u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_14BBE;

L_14B72:
    /* 00014b72   6  cmpi.w #6,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00014b72u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_W, t0, 0x00000006u);

L_14B78:
    /* 00014b78   2  bcc 00014ba6 */
    c->pc = RC_ADDR(0x00014b78u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_14BA6;

L_14B7A:
    /* 00014b7a   6  cmpi.w #14,(a,A5) */
    c->pc = RC_ADDR(0x00014b7au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_cmp(c, RC_W, t0, 0x00000014u);

L_14B80:
    /* 00014b80   2  beq 00014ba6 */
    c->pc = RC_ADDR(0x00014b80u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_14BA6;

L_14B82:
    /* 00014b82   6  move.w #5,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00014b82u);
    rc_step(c, m, 16);
    t0 = 0x00000005u;
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14B88:
    /* 00014b88   4  move.w (ffff83e2,A4),D0 */
    c->pc = RC_ADDR(0x00014b88u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14B8C:
    /* 00014b8c   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014b8cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_14B8E:
    /* 00014b8e   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00014b8eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_14B90:
    /* 00014b90   4  lea (ffff84de,A4),A0 */
    c->pc = RC_ADDR(0x00014b90u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7b22u);

L_14B94:
    /* 00014b94   4  move.l (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00014b94u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_14B98:
    /* 00014b98   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00014b98u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_14B9A:
    /* 00014b9a   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00014b9au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14B9E:
    /* 00014b9e   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x00014b9eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_14BA0:
    /* 00014ba0   6  move.b #5,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x00014ba0u);
    rc_step(c, m, 18);
    t0 = 0x00000005u;
    t4 = c->d[1];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_14BA6:
    /* 00014ba6   6  move.w (fffffff8,A5),(6ca,A4) */
    c->pc = RC_ADDR(0x00014ba6u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_wr16(c, m, (c->a[4] + 0x6cau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14BAC:
    /* 00014bac   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00014bacu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14BB0:
    /* 00014bb0   4  sub.w (6ca,A4),D0 */
    c->pc = RC_ADDR(0x00014bb0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6cau));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_14BB4:
    /* 00014bb4   4  move.w D0,(1abc,A4) */
    c->pc = RC_ADDR(0x00014bb4u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1abcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14BB8:
    /* 00014bb8   6  move.w (fffffffe,A5),(1abe,A4) */
    c->pc = RC_ADDR(0x00014bb8u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_wr16(c, m, (c->a[4] + 0x1abeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14BBE:
    /* 00014bbe   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00014bbeu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_14BC2:
    /* 00014bc2   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00014bc2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14BC6:
    /* 00014bc6   4  cmp.w (6ba,A4),D0 */
    c->pc = RC_ADDR(0x00014bc6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6bau));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_14BCA:
    /* 00014bca   4  bcs 00014ada */
    c->pc = RC_ADDR(0x00014bcau);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_14ADA; }

L_14BCE:
    /* 00014bce   4  clr.w (1ab4,A4) */
    c->pc = RC_ADDR(0x00014bceu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1ab4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14BD2:
    /* 00014bd2   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00014bd2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14BD6:
    /* 00014bd6   2  bra 00014be6 */
    c->pc = RC_ADDR(0x00014bd6u);
    rc_step(c, m, 10);
    goto L_14BE6;

L_14BD8:
    /* 00014bd8   4  move.w (fffffffe,A5),-(A7) */
    c->pc = RC_ADDR(0x00014bd8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14BDC:
    /* 00014bdc   4  jsr (00014858) */
    c->pc = RC_ADDR(0x00014bdcu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00014be0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00014858u);
    return;

L_14BE0:
    /* 00014be0   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00014be0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_14BE2:
    /* 00014be2   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00014be2u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_14BE6:
    /* 00014be6   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00014be6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14BEA:
    /* 00014bea   4  cmp.w (6b8,A4),D0 */
    c->pc = RC_ADDR(0x00014beau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6b8u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_14BEE:
    /* 00014bee   2  bcs 00014bd8 */
    c->pc = RC_ADDR(0x00014beeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_14BD8; }

L_14BF0:
    /* 00014bf0   4  clr.w (1ab6,A4) */
    c->pc = RC_ADDR(0x00014bf0u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1ab6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14BF4:
    /* 00014bf4   6  move.w #1,(1ab4,A4) */
    c->pc = RC_ADDR(0x00014bf4u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1ab4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14BFA:
    /* 00014bfa   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00014bfau);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14BFE:
    /* 00014bfe   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00014bfeu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_14C00:
    /* 00014c00   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00014c00u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14C04:
    /* 00014c04   4  lea (68c,A4),A0 */
    c->pc = RC_ADDR(0x00014c04u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x68cu);

L_14C08:
    /* 00014c08   6  move.b #ff,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00014c08u);
    rc_step(c, m, 18);
    t0 = 0x000000ffu;
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_14C0E:
    /* 00014c0e   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00014c0eu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_14C12:
    /* 00014c12   6  cmpi.w #1e,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00014c12u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x0000001eu);

L_14C18:
    /* 00014c18   2  bcs 00014bfe */
    c->pc = RC_ADDR(0x00014c18u);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_14BFE; }

L_14C1A:
    /* 00014c1a   4  tst.w (1abc,A4) */
    c->pc = RC_ADDR(0x00014c1au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1abcu));
    rc_set_nzvc(c, t0, RC_W);

L_14C1E:
    /* 00014c1e   2  bge 00014c26 */
    c->pc = RC_ADDR(0x00014c1eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_14C26;

L_14C20:
    /* 00014c20   6  move.w #19,(1abc,A4) */
    c->pc = RC_ADDR(0x00014c20u);
    rc_step(c, m, 16);
    t0 = 0x00000019u;
    rc_wr16(c, m, (c->a[4] + 0x1abcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14C26:
    /* 00014c26   4  move.w (1abc,A4),D0 */
    c->pc = RC_ADDR(0x00014c26u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1abcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14C2A:
    /* 00014c2a   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014c2au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_14C2C:
    /* 00014c2c   4  divs.w #2,D0 */
    c->pc = RC_ADDR(0x00014c2cu);
    rc_step(c, m, 162);
    t0 = 0x00000002u;
    rc_divs(c, m, 0, t0);

L_14C30:
    /* 00014c30   2  addq.w #3,D0 */
    c->pc = RC_ADDR(0x00014c30u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000003u;
    rc_flags_add(c, RC_W, t1, 0x00000003u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_14C32:
    /* 00014c32   4  move.w D0,(718,A4) */
    c->pc = RC_ADDR(0x00014c32u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x718u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14C36:
    /* 00014c36   4  move.w (1abc,A4),D0 */
    c->pc = RC_ADDR(0x00014c36u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1abcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14C3A:
    /* 00014c3a   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014c3au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_14C3C:
    /* 00014c3c   4  divs.w #2,D0 */
    c->pc = RC_ADDR(0x00014c3cu);
    rc_step(c, m, 162);
    t0 = 0x00000002u;
    rc_divs(c, m, 0, t0);

L_14C40:
    /* 00014c40   2  addq.w #4,D0 */
    c->pc = RC_ADDR(0x00014c40u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000004u;
    rc_flags_add(c, RC_W, t1, 0x00000004u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_14C42:
    /* 00014c42   4  move.w D0,(716,A4) */
    c->pc = RC_ADDR(0x00014c42u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x716u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14C46:
    /* 00014c46   4  bra 00014aaa */
    c->pc = RC_ADDR(0x00014c46u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_14AAA;

}
