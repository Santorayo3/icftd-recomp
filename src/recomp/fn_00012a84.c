/* fn_00012a84 - 386 byte(s), 115 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00012a84(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00012a84u): goto L_12A84;
    case RC_ADDR(0x00012a88u): goto L_12A88;
    case RC_ADDR(0x00012a8cu): goto L_12A8C;
    case RC_ADDR(0x00012a8eu): goto L_12A8E;
    case RC_ADDR(0x00012a92u): goto L_12A92;
    case RC_ADDR(0x00012a96u): goto L_12A96;
    case RC_ADDR(0x00012a9au): goto L_12A9A;
    case RC_ADDR(0x00012a9eu): goto L_12A9E;
    case RC_ADDR(0x00012aa2u): goto L_12AA2;
    case RC_ADDR(0x00012aa4u): goto L_12AA4;
    case RC_ADDR(0x00012aa8u): goto L_12AA8;
    case RC_ADDR(0x00012aacu): goto L_12AAC;
    case RC_ADDR(0x00012ab0u): goto L_12AB0;
    case RC_ADDR(0x00012ab6u): goto L_12AB6;
    case RC_ADDR(0x00012ab8u): goto L_12AB8;
    case RC_ADDR(0x00012abcu): goto L_12ABC;
    case RC_ADDR(0x00012ac0u): goto L_12AC0;
    case RC_ADDR(0x00012ac4u): goto L_12AC4;
    case RC_ADDR(0x00012ac8u): goto L_12AC8;
    case RC_ADDR(0x00012accu): goto L_12ACC;
    case RC_ADDR(0x00012ad0u): goto L_12AD0;
    case RC_ADDR(0x00012ad4u): goto L_12AD4;
    case RC_ADDR(0x00012ad8u): goto L_12AD8;
    case RC_ADDR(0x00012adcu): goto L_12ADC;
    case RC_ADDR(0x00012adeu): goto L_12ADE;
    case RC_ADDR(0x00012ae2u): goto L_12AE2;
    case RC_ADDR(0x00012ae6u): goto L_12AE6;
    case RC_ADDR(0x00012aeau): goto L_12AEA;
    case RC_ADDR(0x00012af0u): goto L_12AF0;
    case RC_ADDR(0x00012af2u): goto L_12AF2;
    case RC_ADDR(0x00012af6u): goto L_12AF6;
    case RC_ADDR(0x00012afau): goto L_12AFA;
    case RC_ADDR(0x00012afeu): goto L_12AFE;
    case RC_ADDR(0x00012b02u): goto L_12B02;
    case RC_ADDR(0x00012b06u): goto L_12B06;
    case RC_ADDR(0x00012b0au): goto L_12B0A;
    case RC_ADDR(0x00012b0cu): goto L_12B0C;
    case RC_ADDR(0x00012b0eu): goto L_12B0E;
    case RC_ADDR(0x00012b12u): goto L_12B12;
    case RC_ADDR(0x00012b16u): goto L_12B16;
    case RC_ADDR(0x00012b1au): goto L_12B1A;
    case RC_ADDR(0x00012b1cu): goto L_12B1C;
    case RC_ADDR(0x00012b20u): goto L_12B20;
    case RC_ADDR(0x00012b22u): goto L_12B22;
    case RC_ADDR(0x00012b24u): goto L_12B24;
    case RC_ADDR(0x00012b28u): goto L_12B28;
    case RC_ADDR(0x00012b2au): goto L_12B2A;
    case RC_ADDR(0x00012b2cu): goto L_12B2C;
    case RC_ADDR(0x00012b30u): goto L_12B30;
    case RC_ADDR(0x00012b36u): goto L_12B36;
    case RC_ADDR(0x00012b3au): goto L_12B3A;
    case RC_ADDR(0x00012b40u): goto L_12B40;
    case RC_ADDR(0x00012b44u): goto L_12B44;
    case RC_ADDR(0x00012b48u): goto L_12B48;
    case RC_ADDR(0x00012b4cu): goto L_12B4C;
    case RC_ADDR(0x00012b50u): goto L_12B50;
    case RC_ADDR(0x00012b54u): goto L_12B54;
    case RC_ADDR(0x00012b56u): goto L_12B56;
    case RC_ADDR(0x00012b58u): goto L_12B58;
    case RC_ADDR(0x00012b5cu): goto L_12B5C;
    case RC_ADDR(0x00012b5eu): goto L_12B5E;
    case RC_ADDR(0x00012b60u): goto L_12B60;
    case RC_ADDR(0x00012b62u): goto L_12B62;
    case RC_ADDR(0x00012b64u): goto L_12B64;
    case RC_ADDR(0x00012b68u): goto L_12B68;
    case RC_ADDR(0x00012b6cu): goto L_12B6C;
    case RC_ADDR(0x00012b6eu): goto L_12B6E;
    case RC_ADDR(0x00012b70u): goto L_12B70;
    case RC_ADDR(0x00012b72u): goto L_12B72;
    case RC_ADDR(0x00012b76u): goto L_12B76;
    case RC_ADDR(0x00012b78u): goto L_12B78;
    case RC_ADDR(0x00012b7au): goto L_12B7A;
    case RC_ADDR(0x00012b7cu): goto L_12B7C;
    case RC_ADDR(0x00012b80u): goto L_12B80;
    case RC_ADDR(0x00012b84u): goto L_12B84;
    case RC_ADDR(0x00012b88u): goto L_12B88;
    case RC_ADDR(0x00012b8cu): goto L_12B8C;
    case RC_ADDR(0x00012b90u): goto L_12B90;
    case RC_ADDR(0x00012b94u): goto L_12B94;
    case RC_ADDR(0x00012b96u): goto L_12B96;
    case RC_ADDR(0x00012b98u): goto L_12B98;
    case RC_ADDR(0x00012b9cu): goto L_12B9C;
    case RC_ADDR(0x00012b9eu): goto L_12B9E;
    case RC_ADDR(0x00012ba0u): goto L_12BA0;
    case RC_ADDR(0x00012ba2u): goto L_12BA2;
    case RC_ADDR(0x00012ba4u): goto L_12BA4;
    case RC_ADDR(0x00012ba8u): goto L_12BA8;
    case RC_ADDR(0x00012bacu): goto L_12BAC;
    case RC_ADDR(0x00012baeu): goto L_12BAE;
    case RC_ADDR(0x00012bb0u): goto L_12BB0;
    case RC_ADDR(0x00012bb2u): goto L_12BB2;
    case RC_ADDR(0x00012bb6u): goto L_12BB6;
    case RC_ADDR(0x00012bb8u): goto L_12BB8;
    case RC_ADDR(0x00012bbau): goto L_12BBA;
    case RC_ADDR(0x00012bbcu): goto L_12BBC;
    case RC_ADDR(0x00012bc0u): goto L_12BC0;
    case RC_ADDR(0x00012bc4u): goto L_12BC4;
    case RC_ADDR(0x00012bc6u): goto L_12BC6;
    case RC_ADDR(0x00012bcau): goto L_12BCA;
    case RC_ADDR(0x00012bccu): goto L_12BCC;
    case RC_ADDR(0x00012bceu): goto L_12BCE;
    case RC_ADDR(0x00012bd2u): goto L_12BD2;
    case RC_ADDR(0x00012bd6u): goto L_12BD6;
    case RC_ADDR(0x00012bdau): goto L_12BDA;
    case RC_ADDR(0x00012bdeu): goto L_12BDE;
    case RC_ADDR(0x00012be4u): goto L_12BE4;
    case RC_ADDR(0x00012be8u): goto L_12BE8;
    case RC_ADDR(0x00012beau): goto L_12BEA;
    case RC_ADDR(0x00012becu): goto L_12BEC;
    case RC_ADDR(0x00012bf0u): goto L_12BF0;
    case RC_ADDR(0x00012bf4u): goto L_12BF4;
    case RC_ADDR(0x00012bf8u): goto L_12BF8;
    case RC_ADDR(0x00012bfcu): goto L_12BFC;
    case RC_ADDR(0x00012c02u): goto L_12C02;
    case RC_ADDR(0x00012c04u): goto L_12C04;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_12A84:
    /* 00012a84   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00012a84u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_12A88:
    /* 00012a88   4  tst.w (fffffd64,A4) */
    c->pc = RC_ADDR(0x00012a88u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x29cu));
    rc_set_nzvc(c, t0, RC_W);

L_12A8C:
    /* 00012a8c   2  beq 00012b06 */
    c->pc = RC_ADDR(0x00012a8cu);
    if (rc_cond(c, 7)) goto L_12B06;

L_12A8E:
    /* 00012a8e   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00012a8eu);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12A92:
    /* 00012a92   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00012a92u);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_12A96:
    /* 00012a96   4  lea (fffff37c,A4),A0 */
    c->pc = RC_ADDR(0x00012a96u);
    c->a[0] = (c->a[4] - 0xc84u);

L_12A9A:
    /* 00012a9a   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00012a9au);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12A9E:
    /* 00012a9e   4  cmp.w (fffffd8a,A4),D1 */
    c->pc = RC_ADDR(0x00012a9eu);
    t0 = rc_rd16(c, m, (c->a[4] - 0x276u));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_12AA2:
    /* 00012aa2   2  bcs 00012ab8 */
    c->pc = RC_ADDR(0x00012aa2u);
    if (rc_cond(c, 5)) goto L_12AB8;

L_12AA4:
    /* 00012aa4   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00012aa4u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12AA8:
    /* 00012aa8   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00012aa8u);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_12AAC:
    /* 00012aac   4  lea (fffff384,A4),A0 */
    c->pc = RC_ADDR(0x00012aacu);
    c->a[0] = (c->a[4] - 0xc7cu);

L_12AB0:
    /* 00012ab0   6  move.w #4b00,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00012ab0u);
    t0 = 0x00004b00u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12AB6:
    /* 00012ab6   2  bra 00012ac8 */
    c->pc = RC_ADDR(0x00012ab6u);
    goto L_12AC8;

L_12AB8:
    /* 00012ab8   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00012ab8u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12ABC:
    /* 00012abc   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00012abcu);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_12AC0:
    /* 00012ac0   4  lea (fffff384,A4),A0 */
    c->pc = RC_ADDR(0x00012ac0u);
    c->a[0] = (c->a[4] - 0xc7cu);

L_12AC4:
    /* 00012ac4   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00012ac4u);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_12AC8:
    /* 00012ac8   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00012ac8u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12ACC:
    /* 00012acc   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00012accu);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_12AD0:
    /* 00012ad0   4  lea (fffff37e,A4),A0 */
    c->pc = RC_ADDR(0x00012ad0u);
    c->a[0] = (c->a[4] - 0xc82u);

L_12AD4:
    /* 00012ad4   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00012ad4u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12AD8:
    /* 00012ad8   4  cmp.w (fffffd8c,A4),D1 */
    c->pc = RC_ADDR(0x00012ad8u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x274u));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_12ADC:
    /* 00012adc   2  bcs 00012af2 */
    c->pc = RC_ADDR(0x00012adcu);
    if (rc_cond(c, 5)) goto L_12AF2;

L_12ADE:
    /* 00012ade   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00012adeu);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12AE2:
    /* 00012ae2   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00012ae2u);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_12AE6:
    /* 00012ae6   4  lea (fffff386,A4),A0 */
    c->pc = RC_ADDR(0x00012ae6u);
    c->a[0] = (c->a[4] - 0xc7au);

L_12AEA:
    /* 00012aea   6  move.w #2ee0,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00012aeau);
    t0 = 0x00002ee0u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12AF0:
    /* 00012af0   2  bra 00012b02 */
    c->pc = RC_ADDR(0x00012af0u);
    goto L_12B02;

L_12AF2:
    /* 00012af2   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00012af2u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12AF6:
    /* 00012af6   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00012af6u);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_12AFA:
    /* 00012afa   4  lea (fffff386,A4),A0 */
    c->pc = RC_ADDR(0x00012afau);
    c->a[0] = (c->a[4] - 0xc7au);

L_12AFE:
    /* 00012afe   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00012afeu);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_12B02:
    /* 00012b02   4  bra 00012c02 */
    c->pc = RC_ADDR(0x00012b02u);
    goto L_12C02;

L_12B06:
    /* 00012b06   4  move.w (ffff83c8,A4),D0 */
    c->pc = RC_ADDR(0x00012b06u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12B0A:
    /* 00012b0a   2  ext.l D0 */
    c->pc = RC_ADDR(0x00012b0au);
    rc_ext_l(c, 0);

L_12B0C:
    /* 00012b0c   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00012b0cu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_12B0E:
    /* 00012b0e   4  lea (ffff8440,A4),A0 */
    c->pc = RC_ADDR(0x00012b0eu);
    c->a[0] = (c->a[4] - 0x7bc0u);

L_12B12:
    /* 00012b12   4  move.l (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00012b12u);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_12B16:
    /* 00012b16   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00012b16u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12B1A:
    /* 00012b1a   2  ext.l D0 */
    c->pc = RC_ADDR(0x00012b1au);
    rc_ext_l(c, 0);

L_12B1C:
    /* 00012b1c   4  divs.w #a,D0 */
    c->pc = RC_ADDR(0x00012b1cu);
    t0 = 0x0000000au;
    rc_divs(c, m, 0, t0);

L_12B20:
    /* 00012b20   2  ext.l D0 */
    c->pc = RC_ADDR(0x00012b20u);
    rc_ext_l(c, 0);

L_12B22:
    /* 00012b22   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x00012b22u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_12B24:
    /* 00012b24   4  move.b (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x00012b24u);
    t4 = c->d[1];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_12B28:
    /* 00012b28   2  ext.w D0 */
    c->pc = RC_ADDR(0x00012b28u);
    rc_ext_w(c, 0);

L_12B2A:
    /* 00012b2a   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x00012b2au);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_12B2C:
    /* 00012b2c   4  move.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00012b2cu);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12B30:
    /* 00012b30   6  cmpi.w #7,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00012b30u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000007u);

L_12B36:
    /* 00012b36   4  ble 00012bc6 */
    c->pc = RC_ADDR(0x00012b36u);
    if (rc_cond(c, 15)) goto L_12BC6;

L_12B3A:
    /* 00012b3a   6  cmpi.w #b,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00012b3au);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x0000000bu);

L_12B40:
    /* 00012b40   4  bge 00012bc6 */
    c->pc = RC_ADDR(0x00012b40u);
    if (rc_cond(c, 12)) goto L_12BC6;

L_12B44:
    /* 00012b44   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00012b44u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12B48:
    /* 00012b48   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00012b48u);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_12B4C:
    /* 00012b4c   4  lea (fffff384,A4),A0 */
    c->pc = RC_ADDR(0x00012b4cu);
    c->a[0] = (c->a[4] - 0xc7cu);

L_12B50:
    /* 00012b50   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x00012b50u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12B54:
    /* 00012b54   2  ext.l D1 */
    c->pc = RC_ADDR(0x00012b54u);
    rc_ext_l(c, 1);

L_12B56:
    /* 00012b56   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x00012b56u);
    c->d[1] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L);

L_12B58:
    /* 00012b58   4  lea (ffffb3b8,A4),A1 */
    c->pc = RC_ADDR(0x00012b58u);
    c->a[1] = (c->a[4] - 0x4c48u);

L_12B5C:
    /* 00012b5c   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00012b5cu);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_12B5E:
    /* 00012b5e   2  move.l A0,-(A7) */
    c->pc = RC_ADDR(0x00012b5eu);
    t0 = rc_a_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_12B60:
    /* 00012b60   2  move.l D1,-(A7) */
    c->pc = RC_ADDR(0x00012b60u);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_12B62:
    /* 00012b62   2  move.l A1,-(A7) */
    c->pc = RC_ADDR(0x00012b62u);
    t0 = rc_a_get(c, 1, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_12B64:
    /* 00012b64   4  move.w #280,-(A7) */
    c->pc = RC_ADDR(0x00012b64u);
    t0 = 0x00000280u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_12B68:
    /* 00012b68   4  jsr (ffff8188,A4) */
    c->pc = RC_ADDR(0x00012b68u);
    /* vector 65 */
    rc_push32(c, m, RC_ADDR(0x00012b6cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00016ee0u);
    return;

L_12B6C:
    /* 00012b6c   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00012b6cu);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_12B6E:
    /* 00012b6e   2  movea.l (A7)+,A0 */
    c->pc = RC_ADDR(0x00012b6eu);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;

L_12B70:
    /* 00012b70   2  move.l (A7)+,D1 */
    c->pc = RC_ADDR(0x00012b70u);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_12B72:
    /* 00012b72   4  move.w (0,A0,D1.w),D2 */
    c->pc = RC_ADDR(0x00012b72u);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12B76:
    /* 00012b76   2  add.w D0,D2 */
    c->pc = RC_ADDR(0x00012b76u);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_12B78:
    /* 00012b78   2  movea.l (A7)+,A0 */
    c->pc = RC_ADDR(0x00012b78u);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;

L_12B7A:
    /* 00012b7a   2  move.l (A7)+,D0 */
    c->pc = RC_ADDR(0x00012b7au);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_12B7C:
    /* 00012b7c   4  sub.w #140,D2 */
    c->pc = RC_ADDR(0x00012b7cu);
    t0 = 0x00000140u;
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_12B80:
    /* 00012b80   4  move.w D2,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00012b80u);
    t0 = rc_d_get(c, 2, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12B84:
    /* 00012b84   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00012b84u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12B88:
    /* 00012b88   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00012b88u);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_12B8C:
    /* 00012b8c   4  lea (fffff386,A4),A0 */
    c->pc = RC_ADDR(0x00012b8cu);
    c->a[0] = (c->a[4] - 0xc7au);

L_12B90:
    /* 00012b90   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x00012b90u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12B94:
    /* 00012b94   2  ext.l D1 */
    c->pc = RC_ADDR(0x00012b94u);
    rc_ext_l(c, 1);

L_12B96:
    /* 00012b96   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x00012b96u);
    c->d[1] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L);

L_12B98:
    /* 00012b98   4  lea (ffffb3ba,A4),A1 */
    c->pc = RC_ADDR(0x00012b98u);
    c->a[1] = (c->a[4] - 0x4c46u);

L_12B9C:
    /* 00012b9c   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00012b9cu);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_12B9E:
    /* 00012b9e   2  move.l A0,-(A7) */
    c->pc = RC_ADDR(0x00012b9eu);
    t0 = rc_a_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_12BA0:
    /* 00012ba0   2  move.l D1,-(A7) */
    c->pc = RC_ADDR(0x00012ba0u);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_12BA2:
    /* 00012ba2   2  move.l A1,-(A7) */
    c->pc = RC_ADDR(0x00012ba2u);
    t0 = rc_a_get(c, 1, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_12BA4:
    /* 00012ba4   4  move.w #190,-(A7) */
    c->pc = RC_ADDR(0x00012ba4u);
    t0 = 0x00000190u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_12BA8:
    /* 00012ba8   4  jsr (ffff8188,A4) */
    c->pc = RC_ADDR(0x00012ba8u);
    /* vector 65 */
    rc_push32(c, m, RC_ADDR(0x00012bacu));
    rc_depth++;
    c->pc = RC_ADDR(0x00016ee0u);
    return;

L_12BAC:
    /* 00012bac   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00012bacu);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_12BAE:
    /* 00012bae   2  movea.l (A7)+,A0 */
    c->pc = RC_ADDR(0x00012baeu);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;

L_12BB0:
    /* 00012bb0   2  move.l (A7)+,D1 */
    c->pc = RC_ADDR(0x00012bb0u);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_12BB2:
    /* 00012bb2   4  move.w (0,A0,D1.w),D2 */
    c->pc = RC_ADDR(0x00012bb2u);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12BB6:
    /* 00012bb6   2  add.w D0,D2 */
    c->pc = RC_ADDR(0x00012bb6u);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_12BB8:
    /* 00012bb8   2  movea.l (A7)+,A0 */
    c->pc = RC_ADDR(0x00012bb8u);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;

L_12BBA:
    /* 00012bba   2  move.l (A7)+,D0 */
    c->pc = RC_ADDR(0x00012bbau);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_12BBC:
    /* 00012bbc   4  sub.w #c8,D2 */
    c->pc = RC_ADDR(0x00012bbcu);
    t0 = 0x000000c8u;
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_12BC0:
    /* 00012bc0   4  move.w D2,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00012bc0u);
    t0 = rc_d_get(c, 2, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12BC4:
    /* 00012bc4   2  bra 00012c02 */
    c->pc = RC_ADDR(0x00012bc4u);
    goto L_12C02;

L_12BC6:
    /* 00012bc6   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00012bc6u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12BCA:
    /* 00012bca   2  ext.l D0 */
    c->pc = RC_ADDR(0x00012bcau);
    rc_ext_l(c, 0);

L_12BCC:
    /* 00012bcc   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00012bccu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_12BCE:
    /* 00012bce   4  lea (ffffb3b8,A4),A0 */
    c->pc = RC_ADDR(0x00012bceu);
    c->a[0] = (c->a[4] - 0x4c48u);

L_12BD2:
    /* 00012bd2   4  move.w (8,A5),D1 */
    c->pc = RC_ADDR(0x00012bd2u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12BD6:
    /* 00012bd6   4  muls.w #16,D1 */
    c->pc = RC_ADDR(0x00012bd6u);
    t0 = 0x00000016u;
    rc_muls(c, 1, t0);

L_12BDA:
    /* 00012bda   4  lea (fffff384,A4),A1 */
    c->pc = RC_ADDR(0x00012bdau);
    c->a[1] = (c->a[4] - 0xc7cu);

L_12BDE:
    /* 00012bde   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x00012bdeu);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12BE4:
    /* 00012be4   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00012be4u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12BE8:
    /* 00012be8   2  ext.l D0 */
    c->pc = RC_ADDR(0x00012be8u);
    rc_ext_l(c, 0);

L_12BEA:
    /* 00012bea   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00012beau);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_12BEC:
    /* 00012bec   4  lea (ffffb3ba,A4),A0 */
    c->pc = RC_ADDR(0x00012becu);
    c->a[0] = (c->a[4] - 0x4c46u);

L_12BF0:
    /* 00012bf0   4  move.w (8,A5),D1 */
    c->pc = RC_ADDR(0x00012bf0u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12BF4:
    /* 00012bf4   4  muls.w #16,D1 */
    c->pc = RC_ADDR(0x00012bf4u);
    t0 = 0x00000016u;
    rc_muls(c, 1, t0);

L_12BF8:
    /* 00012bf8   4  lea (fffff386,A4),A1 */
    c->pc = RC_ADDR(0x00012bf8u);
    c->a[1] = (c->a[4] - 0xc7au);

L_12BFC:
    /* 00012bfc   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x00012bfcu);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12C02:
    /* 00012c02   2  unlk A5 */
    c->pc = RC_ADDR(0x00012c02u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_12C04:
    /* 00012c04   2  rts */
    c->pc = RC_ADDR(0x00012c04u);
    rc_ret(c, m);
    return;

}
