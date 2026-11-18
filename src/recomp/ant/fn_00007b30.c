/* fn_00007b30 - 318 byte(s), 90 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00007b30(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00007b30u): goto L_7B30;
    case RC_ADDR(0x00007b34u): goto L_7B34;
    case RC_ADDR(0x00007b38u): goto L_7B38;
    case RC_ADDR(0x00007b3au): goto L_7B3A;
    case RC_ADDR(0x00007b3eu): goto L_7B3E;
    case RC_ADDR(0x00007b42u): goto L_7B42;
    case RC_ADDR(0x00007b48u): goto L_7B48;
    case RC_ADDR(0x00007b4cu): goto L_7B4C;
    case RC_ADDR(0x00007b50u): goto L_7B50;
    case RC_ADDR(0x00007b54u): goto L_7B54;
    case RC_ADDR(0x00007b58u): goto L_7B58;
    case RC_ADDR(0x00007b5cu): goto L_7B5C;
    case RC_ADDR(0x00007b60u): goto L_7B60;
    case RC_ADDR(0x00007b66u): goto L_7B66;
    case RC_ADDR(0x00007b6au): goto L_7B6A;
    case RC_ADDR(0x00007b6cu): goto L_7B6C;
    case RC_ADDR(0x00007b6eu): goto L_7B6E;
    case RC_ADDR(0x00007b70u): goto L_7B70;
    case RC_ADDR(0x00007b74u): goto L_7B74;
    case RC_ADDR(0x00007b78u): goto L_7B78;
    case RC_ADDR(0x00007b7cu): goto L_7B7C;
    case RC_ADDR(0x00007b82u): goto L_7B82;
    case RC_ADDR(0x00007b86u): goto L_7B86;
    case RC_ADDR(0x00007b8au): goto L_7B8A;
    case RC_ADDR(0x00007b8cu): goto L_7B8C;
    case RC_ADDR(0x00007b8eu): goto L_7B8E;
    case RC_ADDR(0x00007b92u): goto L_7B92;
    case RC_ADDR(0x00007b98u): goto L_7B98;
    case RC_ADDR(0x00007b9cu): goto L_7B9C;
    case RC_ADDR(0x00007ba0u): goto L_7BA0;
    case RC_ADDR(0x00007ba4u): goto L_7BA4;
    case RC_ADDR(0x00007ba8u): goto L_7BA8;
    case RC_ADDR(0x00007baau): goto L_7BAA;
    case RC_ADDR(0x00007bacu): goto L_7BAC;
    case RC_ADDR(0x00007bb0u): goto L_7BB0;
    case RC_ADDR(0x00007bb4u): goto L_7BB4;
    case RC_ADDR(0x00007bb8u): goto L_7BB8;
    case RC_ADDR(0x00007bbcu): goto L_7BBC;
    case RC_ADDR(0x00007bc0u): goto L_7BC0;
    case RC_ADDR(0x00007bc6u): goto L_7BC6;
    case RC_ADDR(0x00007bcau): goto L_7BCA;
    case RC_ADDR(0x00007bceu): goto L_7BCE;
    case RC_ADDR(0x00007bd0u): goto L_7BD0;
    case RC_ADDR(0x00007bd2u): goto L_7BD2;
    case RC_ADDR(0x00007bd6u): goto L_7BD6;
    case RC_ADDR(0x00007bdau): goto L_7BDA;
    case RC_ADDR(0x00007bdeu): goto L_7BDE;
    case RC_ADDR(0x00007be2u): goto L_7BE2;
    case RC_ADDR(0x00007be4u): goto L_7BE4;
    case RC_ADDR(0x00007be6u): goto L_7BE6;
    case RC_ADDR(0x00007be8u): goto L_7BE8;
    case RC_ADDR(0x00007becu): goto L_7BEC;
    case RC_ADDR(0x00007bf0u): goto L_7BF0;
    case RC_ADDR(0x00007bf6u): goto L_7BF6;
    case RC_ADDR(0x00007bf8u): goto L_7BF8;
    case RC_ADDR(0x00007bfcu): goto L_7BFC;
    case RC_ADDR(0x00007bfeu): goto L_7BFE;
    case RC_ADDR(0x00007c02u): goto L_7C02;
    case RC_ADDR(0x00007c04u): goto L_7C04;
    case RC_ADDR(0x00007c06u): goto L_7C06;
    case RC_ADDR(0x00007c0au): goto L_7C0A;
    case RC_ADDR(0x00007c0eu): goto L_7C0E;
    case RC_ADDR(0x00007c12u): goto L_7C12;
    case RC_ADDR(0x00007c16u): goto L_7C16;
    case RC_ADDR(0x00007c1au): goto L_7C1A;
    case RC_ADDR(0x00007c1cu): goto L_7C1C;
    case RC_ADDR(0x00007c20u): goto L_7C20;
    case RC_ADDR(0x00007c22u): goto L_7C22;
    case RC_ADDR(0x00007c24u): goto L_7C24;
    case RC_ADDR(0x00007c28u): goto L_7C28;
    case RC_ADDR(0x00007c2cu): goto L_7C2C;
    case RC_ADDR(0x00007c30u): goto L_7C30;
    case RC_ADDR(0x00007c34u): goto L_7C34;
    case RC_ADDR(0x00007c36u): goto L_7C36;
    case RC_ADDR(0x00007c38u): goto L_7C38;
    case RC_ADDR(0x00007c3cu): goto L_7C3C;
    case RC_ADDR(0x00007c3eu): goto L_7C3E;
    case RC_ADDR(0x00007c40u): goto L_7C40;
    case RC_ADDR(0x00007c44u): goto L_7C44;
    case RC_ADDR(0x00007c46u): goto L_7C46;
    case RC_ADDR(0x00007c4au): goto L_7C4A;
    case RC_ADDR(0x00007c4eu): goto L_7C4E;
    case RC_ADDR(0x00007c52u): goto L_7C52;
    case RC_ADDR(0x00007c56u): goto L_7C56;
    case RC_ADDR(0x00007c58u): goto L_7C58;
    case RC_ADDR(0x00007c5cu): goto L_7C5C;
    case RC_ADDR(0x00007c60u): goto L_7C60;
    case RC_ADDR(0x00007c64u): goto L_7C64;
    case RC_ADDR(0x00007c6au): goto L_7C6A;
    case RC_ADDR(0x00007c6cu): goto L_7C6C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_7B30:
    /* 00007b30   4  link.w A5,#fffffff4 */
    c->pc = RC_ADDR(0x00007b30u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xcu;

L_7B34:
    /* 00007b34   4  tst.w (fffffa14,A4) */
    c->pc = RC_ADDR(0x00007b34u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5ecu));
    rc_set_nzvc(c, t0, RC_W);

L_7B38:
    /* 00007b38   2  beq 00007b42 */
    c->pc = RC_ADDR(0x00007b38u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_7B42;

L_7B3A:
    /* 00007b3a   4  clr.w (fffffa14,A4) */
    c->pc = RC_ADDR(0x00007b3au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x5ecu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7B3E:
    /* 00007b3e   4  bra 00007c6a */
    c->pc = RC_ADDR(0x00007b3eu);
    rc_step(c, m, 10);
    goto L_7C6A;

L_7B42:
    /* 00007b42   6  move.w (fffffa0a,A4),(fffffffa,A5) */
    c->pc = RC_ADDR(0x00007b42u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5f6u));
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7B48:
    /* 00007b48   4  tst.l (8,A5) */
    c->pc = RC_ADDR(0x00007b48u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_set_nzvc(c, t0, RC_L);

L_7B4C:
    /* 00007b4c   4  beq 00007c64 */
    c->pc = RC_ADDR(0x00007b4cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_7C64;

L_7B50:
    /* 00007b50   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00007b50u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_7B54:
    /* 00007b54   4  tst.b (12,A0) */
    c->pc = RC_ADDR(0x00007b54u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x12u));
    rc_set_nzvc(c, t0, RC_B);

L_7B58:
    /* 00007b58   4  beq 00007c64 */
    c->pc = RC_ADDR(0x00007b58u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_7C64;

L_7B5C:
    /* 00007b5c   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00007b5cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7B60:
    /* 00007b60   6  move.w #1,(fffffa16,A4) */
    c->pc = RC_ADDR(0x00007b60u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x5eau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7B66:
    /* 00007b66   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00007b66u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7B6A:
    /* 00007b6a   2  ext.l D0 */
    c->pc = RC_ADDR(0x00007b6au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_7B6C:
    /* 00007b6c   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00007b6cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_7B6E:
    /* 00007b6e   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x00007b6eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_7B70:
    /* 00007b70   4  adda.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00007b70u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] += t0;

L_7B74:
    /* 00007b74   4  tst.b (12,A0) */
    c->pc = RC_ADDR(0x00007b74u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x12u));
    rc_set_nzvc(c, t0, RC_B);

L_7B78:
    /* 00007b78   4  beq 00007c60 */
    c->pc = RC_ADDR(0x00007b78u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_7C60;

L_7B7C:
    /* 00007b7c   6  cmpi.w #a,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00007b7cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x0000000au);

L_7B82:
    /* 00007b82   4  bge 00007c60 */
    c->pc = RC_ADDR(0x00007b82u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_7C60;

L_7B86:
    /* 00007b86   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00007b86u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7B8A:
    /* 00007b8a   2  ext.l D0 */
    c->pc = RC_ADDR(0x00007b8au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_7B8C:
    /* 00007b8c   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00007b8cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_7B8E:
    /* 00007b8e   4  add.l (8,A5),D0 */
    c->pc = RC_ADDR(0x00007b8eu);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_7B92:
    /* 00007b92   6  add.l #12,D0 */
    c->pc = RC_ADDR(0x00007b92u);
    rc_step(c, m, 16);
    t0 = 0x00000012u;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_7B98:
    /* 00007b98   4  move.l D0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x00007b98u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_7B9C:
    /* 00007b9c   4  move.l (fffffff4,A5),-(A7) */
    c->pc = RC_ADDR(0x00007b9cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7BA0:
    /* 00007ba0   4  move.l (10,A5),-(A7) */
    c->pc = RC_ADDR(0x00007ba0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7BA4:
    /* 00007ba4   4  jsr (00007a94) */
    c->pc = RC_ADDR(0x00007ba4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00007ba8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00007a94u);
    return;

L_7BA8:
    /* 00007ba8   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00007ba8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_7BAA:
    /* 00007baa   2  tst.w D0 */
    c->pc = RC_ADDR(0x00007baau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_7BAC:
    /* 00007bac   4  beq 00007c58 */
    c->pc = RC_ADDR(0x00007bacu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_7C58;

L_7BB0:
    /* 00007bb0   4  tst.w (fffffa18,A4) */
    c->pc = RC_ADDR(0x00007bb0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5e8u));
    rc_set_nzvc(c, t0, RC_W);

L_7BB4:
    /* 00007bb4   4  beq 00007c4a */
    c->pc = RC_ADDR(0x00007bb4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_7C4A;

L_7BB8:
    /* 00007bb8   4  tst.w (14,A5) */
    c->pc = RC_ADDR(0x00007bb8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x14u));
    rc_set_nzvc(c, t0, RC_W);

L_7BBC:
    /* 00007bbc   4  beq 00007c4a */
    c->pc = RC_ADDR(0x00007bbcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_7C4A;

L_7BC0:
    /* 00007bc0   6  move.w #1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00007bc0u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7BC6:
    /* 00007bc6   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x00007bc6u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7BCA:
    /* 00007bca   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00007bcau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7BCE:
    /* 00007bce   2  ext.l D0 */
    c->pc = RC_ADDR(0x00007bceu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_7BD0:
    /* 00007bd0   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00007bd0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_7BD2:
    /* 00007bd2   4  lea (ffff8bc4,A4),A0 */
    c->pc = RC_ADDR(0x00007bd2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x743cu);

L_7BD6:
    /* 00007bd6   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00007bd6u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7BDA:
    /* 00007bda   4  move.l (fffffff4,A5),-(A7) */
    c->pc = RC_ADDR(0x00007bdau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7BDE:
    /* 00007bde   4  jsr (ffff82de,A4) */
    c->pc = RC_ADDR(0x00007bdeu);
    rc_step(c, m, 18);
    /* vector 122 */
    rc_push32(c, m, RC_ADDR(0x00007be2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dd4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002298au);
    return;

L_7BE2:
    /* 00007be2   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00007be2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_7BE4:
    /* 00007be4   2  tst.w D0 */
    c->pc = RC_ADDR(0x00007be4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_7BE6:
    /* 00007be6   2  bne 00007bec */
    c->pc = RC_ADDR(0x00007be6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_7BEC;

L_7BE8:
    /* 00007be8   4  clr.w (fffffff8,A5) */
    c->pc = RC_ADDR(0x00007be8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7BEC:
    /* 00007bec   4  addq.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00007becu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_7BF0:
    /* 00007bf0   6  cmpi.w #7,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00007bf0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_W, t0, 0x00000007u);

L_7BF6:
    /* 00007bf6   2  blt 00007bca */
    c->pc = RC_ADDR(0x00007bf6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_7BCA; }

L_7BF8:
    /* 00007bf8   4  tst.w (fffffff8,A5) */
    c->pc = RC_ADDR(0x00007bf8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_7BFC:
    /* 00007bfc   2  beq 00007c1c */
    c->pc = RC_ADDR(0x00007bfcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_7C1C;

L_7BFE:
    /* 00007bfe   4  move.w (a5c,A4),D0 */
    c->pc = RC_ADDR(0x00007bfeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xa5cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7C02:
    /* 00007c02   2  ext.l D0 */
    c->pc = RC_ADDR(0x00007c02u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_7C04:
    /* 00007c04   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00007c04u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_7C06:
    /* 00007c06   4  lea (a48,A4),A0 */
    c->pc = RC_ADDR(0x00007c06u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xa48u);

L_7C0A:
    /* 00007c0a   4  move.w (a5c,A4),D1 */
    c->pc = RC_ADDR(0x00007c0au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xa5cu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7C0E:
    /* 00007c0e   4  muls.w #70,D1 */
    c->pc = RC_ADDR(0x00007c0eu);
    rc_step(c, m, 42);
    t0 = 0x00000070u;
    rc_muls(c, 1, t0);

L_7C12:
    /* 00007c12   4  sub.w #32,D1 */
    c->pc = RC_ADDR(0x00007c12u);
    rc_step(c, m, 10);
    t0 = 0x00000032u;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_7C16:
    /* 00007c16   4  move.w D1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00007c16u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 1, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7C1A:
    /* 00007c1a   2  bra 00007c2c */
    c->pc = RC_ADDR(0x00007c1au);
    rc_step(c, m, 10);
    goto L_7C2C;

L_7C1C:
    /* 00007c1c   4  move.w (a5c,A4),D0 */
    c->pc = RC_ADDR(0x00007c1cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xa5cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7C20:
    /* 00007c20   2  ext.l D0 */
    c->pc = RC_ADDR(0x00007c20u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_7C22:
    /* 00007c22   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00007c22u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_7C24:
    /* 00007c24   4  lea (a48,A4),A0 */
    c->pc = RC_ADDR(0x00007c24u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xa48u);

L_7C28:
    /* 00007c28   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00007c28u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7C2C:
    /* 00007c2c   4  move.l (fffffff4,A5),-(A7) */
    c->pc = RC_ADDR(0x00007c2cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7C30:
    /* 00007c30   4  move.w (a5c,A4),D0 */
    c->pc = RC_ADDR(0x00007c30u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xa5cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7C34:
    /* 00007c34   2  ext.l D0 */
    c->pc = RC_ADDR(0x00007c34u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_7C36:
    /* 00007c36   2  asl.l #3,D0 */
    c->pc = RC_ADDR(0x00007c36u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000003u, rc_d_get(c, 0, RC_L), RC_L));

L_7C38:
    /* 00007c38   4  lea (9f8,A4),A0 */
    c->pc = RC_ADDR(0x00007c38u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x9f8u);

L_7C3C:
    /* 00007c3c   2  add.l A0,D0 */
    c->pc = RC_ADDR(0x00007c3cu);
    rc_step(c, m, 6);
    t0 = rc_a_get(c, 0, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_7C3E:
    /* 00007c3e   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00007c3eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7C40:
    /* 00007c40   4  jsr (ffff82cc,A4) */
    c->pc = RC_ADDR(0x00007c40u);
    rc_step(c, m, 18);
    /* vector 119 */
    rc_push32(c, m, RC_ADDR(0x00007c44u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dc2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000228b2u);
    return;

L_7C44:
    /* 00007c44   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00007c44u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_7C46:
    /* 00007c46   4  addq.w #1,(a5c,A4) */
    c->pc = RC_ADDR(0x00007c46u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xa5cu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_7C4A:
    /* 00007c4a   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x00007c4au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7C4E:
    /* 00007c4e   4  move.l (fffffff4,A5),-(A7) */
    c->pc = RC_ADDR(0x00007c4eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7C52:
    /* 00007c52   4  jsr (0000791a) */
    c->pc = RC_ADDR(0x00007c52u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00007c56u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000791au);
    return;

L_7C56:
    /* 00007c56   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00007c56u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_7C58:
    /* 00007c58   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00007c58u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_7C5C:
    /* 00007c5c   4  bra 00007b66 */
    c->pc = RC_ADDR(0x00007c5cu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_7B66;

L_7C60:
    /* 00007c60   4  clr.w (fffffa16,A4) */
    c->pc = RC_ADDR(0x00007c60u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x5eau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7C64:
    /* 00007c64   6  move.w (fffffffa,A5),(fffffa0a,A4) */
    c->pc = RC_ADDR(0x00007c64u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_wr16(c, m, (c->a[4] - 0x5f6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7C6A:
    /* 00007c6a   2  unlk A5 */
    c->pc = RC_ADDR(0x00007c6au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_7C6C:
    /* 00007c6c   2  rts */
    c->pc = RC_ADDR(0x00007c6cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
