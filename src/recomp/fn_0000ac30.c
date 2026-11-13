/* fn_0000ac30 - 468 byte(s), 138 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000ac30(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000ac30u): goto L_AC30;
    case RC_ADDR(0x0000ac34u): goto L_AC34;
    case RC_ADDR(0x0000ac36u): goto L_AC36;
    case RC_ADDR(0x0000ac3au): goto L_AC3A;
    case RC_ADDR(0x0000ac3cu): goto L_AC3C;
    case RC_ADDR(0x0000ac3eu): goto L_AC3E;
    case RC_ADDR(0x0000ac42u): goto L_AC42;
    case RC_ADDR(0x0000ac46u): goto L_AC46;
    case RC_ADDR(0x0000ac4au): goto L_AC4A;
    case RC_ADDR(0x0000ac4eu): goto L_AC4E;
    case RC_ADDR(0x0000ac52u): goto L_AC52;
    case RC_ADDR(0x0000ac56u): goto L_AC56;
    case RC_ADDR(0x0000ac5au): goto L_AC5A;
    case RC_ADDR(0x0000ac60u): goto L_AC60;
    case RC_ADDR(0x0000ac62u): goto L_AC62;
    case RC_ADDR(0x0000ac66u): goto L_AC66;
    case RC_ADDR(0x0000ac68u): goto L_AC68;
    case RC_ADDR(0x0000ac6cu): goto L_AC6C;
    case RC_ADDR(0x0000ac70u): goto L_AC70;
    case RC_ADDR(0x0000ac72u): goto L_AC72;
    case RC_ADDR(0x0000ac74u): goto L_AC74;
    case RC_ADDR(0x0000ac78u): goto L_AC78;
    case RC_ADDR(0x0000ac7cu): goto L_AC7C;
    case RC_ADDR(0x0000ac80u): goto L_AC80;
    case RC_ADDR(0x0000ac82u): goto L_AC82;
    case RC_ADDR(0x0000ac86u): goto L_AC86;
    case RC_ADDR(0x0000ac88u): goto L_AC88;
    case RC_ADDR(0x0000ac8cu): goto L_AC8C;
    case RC_ADDR(0x0000ac92u): goto L_AC92;
    case RC_ADDR(0x0000ac94u): goto L_AC94;
    case RC_ADDR(0x0000ac98u): goto L_AC98;
    case RC_ADDR(0x0000ac9au): goto L_AC9A;
    case RC_ADDR(0x0000ac9eu): goto L_AC9E;
    case RC_ADDR(0x0000aca4u): goto L_ACA4;
    case RC_ADDR(0x0000aca8u): goto L_ACA8;
    case RC_ADDR(0x0000acaau): goto L_ACAA;
    case RC_ADDR(0x0000acaeu): goto L_ACAE;
    case RC_ADDR(0x0000acb0u): goto L_ACB0;
    case RC_ADDR(0x0000acb2u): goto L_ACB2;
    case RC_ADDR(0x0000acb6u): goto L_ACB6;
    case RC_ADDR(0x0000acbau): goto L_ACBA;
    case RC_ADDR(0x0000acbeu): goto L_ACBE;
    case RC_ADDR(0x0000acc2u): goto L_ACC2;
    case RC_ADDR(0x0000acc4u): goto L_ACC4;
    case RC_ADDR(0x0000acc8u): goto L_ACC8;
    case RC_ADDR(0x0000accau): goto L_ACCA;
    case RC_ADDR(0x0000acccu): goto L_ACCC;
    case RC_ADDR(0x0000acd0u): goto L_ACD0;
    case RC_ADDR(0x0000acd4u): goto L_ACD4;
    case RC_ADDR(0x0000acd6u): goto L_ACD6;
    case RC_ADDR(0x0000acd8u): goto L_ACD8;
    case RC_ADDR(0x0000acdcu): goto L_ACDC;
    case RC_ADDR(0x0000acdeu): goto L_ACDE;
    case RC_ADDR(0x0000ace0u): goto L_ACE0;
    case RC_ADDR(0x0000ace4u): goto L_ACE4;
    case RC_ADDR(0x0000ace8u): goto L_ACE8;
    case RC_ADDR(0x0000acecu): goto L_ACEC;
    case RC_ADDR(0x0000acf0u): goto L_ACF0;
    case RC_ADDR(0x0000acf2u): goto L_ACF2;
    case RC_ADDR(0x0000acf6u): goto L_ACF6;
    case RC_ADDR(0x0000acf8u): goto L_ACF8;
    case RC_ADDR(0x0000acfcu): goto L_ACFC;
    case RC_ADDR(0x0000ad00u): goto L_AD00;
    case RC_ADDR(0x0000ad04u): goto L_AD04;
    case RC_ADDR(0x0000ad0au): goto L_AD0A;
    case RC_ADDR(0x0000ad0eu): goto L_AD0E;
    case RC_ADDR(0x0000ad14u): goto L_AD14;
    case RC_ADDR(0x0000ad18u): goto L_AD18;
    case RC_ADDR(0x0000ad1eu): goto L_AD1E;
    case RC_ADDR(0x0000ad22u): goto L_AD22;
    case RC_ADDR(0x0000ad26u): goto L_AD26;
    case RC_ADDR(0x0000ad2au): goto L_AD2A;
    case RC_ADDR(0x0000ad2eu): goto L_AD2E;
    case RC_ADDR(0x0000ad30u): goto L_AD30;
    case RC_ADDR(0x0000ad32u): goto L_AD32;
    case RC_ADDR(0x0000ad34u): goto L_AD34;
    case RC_ADDR(0x0000ad38u): goto L_AD38;
    case RC_ADDR(0x0000ad3au): goto L_AD3A;
    case RC_ADDR(0x0000ad3cu): goto L_AD3C;
    case RC_ADDR(0x0000ad3eu): goto L_AD3E;
    case RC_ADDR(0x0000ad42u): goto L_AD42;
    case RC_ADDR(0x0000ad48u): goto L_AD48;
    case RC_ADDR(0x0000ad4cu): goto L_AD4C;
    case RC_ADDR(0x0000ad50u): goto L_AD50;
    case RC_ADDR(0x0000ad54u): goto L_AD54;
    case RC_ADDR(0x0000ad58u): goto L_AD58;
    case RC_ADDR(0x0000ad5au): goto L_AD5A;
    case RC_ADDR(0x0000ad5cu): goto L_AD5C;
    case RC_ADDR(0x0000ad5eu): goto L_AD5E;
    case RC_ADDR(0x0000ad62u): goto L_AD62;
    case RC_ADDR(0x0000ad64u): goto L_AD64;
    case RC_ADDR(0x0000ad66u): goto L_AD66;
    case RC_ADDR(0x0000ad68u): goto L_AD68;
    case RC_ADDR(0x0000ad6cu): goto L_AD6C;
    case RC_ADDR(0x0000ad72u): goto L_AD72;
    case RC_ADDR(0x0000ad74u): goto L_AD74;
    case RC_ADDR(0x0000ad78u): goto L_AD78;
    case RC_ADDR(0x0000ad7cu): goto L_AD7C;
    case RC_ADDR(0x0000ad7eu): goto L_AD7E;
    case RC_ADDR(0x0000ad82u): goto L_AD82;
    case RC_ADDR(0x0000ad86u): goto L_AD86;
    case RC_ADDR(0x0000ad9au): goto L_AD9A;
    case RC_ADDR(0x0000ada0u): goto L_ADA0;
    case RC_ADDR(0x0000ada2u): goto L_ADA2;
    case RC_ADDR(0x0000ada4u): goto L_ADA4;
    case RC_ADDR(0x0000ada8u): goto L_ADA8;
    case RC_ADDR(0x0000adacu): goto L_ADAC;
    case RC_ADDR(0x0000adb0u): goto L_ADB0;
    case RC_ADDR(0x0000adb4u): goto L_ADB4;
    case RC_ADDR(0x0000adb8u): goto L_ADB8;
    case RC_ADDR(0x0000adbau): goto L_ADBA;
    case RC_ADDR(0x0000adbeu): goto L_ADBE;
    case RC_ADDR(0x0000adc0u): goto L_ADC0;
    case RC_ADDR(0x0000adc2u): goto L_ADC2;
    case RC_ADDR(0x0000adc6u): goto L_ADC6;
    case RC_ADDR(0x0000adcau): goto L_ADCA;
    case RC_ADDR(0x0000adceu): goto L_ADCE;
    case RC_ADDR(0x0000add2u): goto L_ADD2;
    case RC_ADDR(0x0000add6u): goto L_ADD6;
    case RC_ADDR(0x0000addau): goto L_ADDA;
    case RC_ADDR(0x0000addcu): goto L_ADDC;
    case RC_ADDR(0x0000addeu): goto L_ADDE;
    case RC_ADDR(0x0000ade2u): goto L_ADE2;
    case RC_ADDR(0x0000ade6u): goto L_ADE6;
    case RC_ADDR(0x0000ade8u): goto L_ADE8;
    case RC_ADDR(0x0000adecu): goto L_ADEC;
    case RC_ADDR(0x0000adf0u): goto L_ADF0;
    case RC_ADDR(0x0000adf4u): goto L_ADF4;
    case RC_ADDR(0x0000adf6u): goto L_ADF6;
    case RC_ADDR(0x0000adfau): goto L_ADFA;
    case RC_ADDR(0x0000adfcu): goto L_ADFC;
    case RC_ADDR(0x0000adfeu): goto L_ADFE;
    case RC_ADDR(0x0000ae02u): goto L_AE02;
    case RC_ADDR(0x0000ae06u): goto L_AE06;
    case RC_ADDR(0x0000ae0au): goto L_AE0A;
    case RC_ADDR(0x0000ae0eu): goto L_AE0E;
    case RC_ADDR(0x0000ae12u): goto L_AE12;
    case RC_ADDR(0x0000ae14u): goto L_AE14;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_AC30:
    /* 0000ac30   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x0000ac30u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_AC34:
    /* 0000ac34   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000ac34u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_AC36:
    /* 0000ac36   4  move.w (3d0,A4),D0 */
    c->pc = RC_ADDR(0x0000ac36u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3d0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_AC3A:
    /* 0000ac3a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000ac3au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_AC3C:
    /* 0000ac3c   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000ac3cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_AC3E:
    /* 0000ac3e   4  lea (34a,A4),A0 */
    c->pc = RC_ADDR(0x0000ac3eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x34au);

L_AC42:
    /* 0000ac42   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000ac42u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AC46:
    /* 0000ac46   4  movea.l (fffffebe,A4),A0 */
    c->pc = RC_ADDR(0x0000ac46u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x142u));
    c->a[0] = t0;

L_AC4A:
    /* 0000ac4a   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x0000ac4au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AC4E:
    /* 0000ac4e   4  jsr (ffff822a,A4) */
    c->pc = RC_ADDR(0x0000ac4eu);
    rc_step(c, m, 18);
    /* vector 92 */
    rc_push32(c, m, RC_ADDR(0x0000ac52u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001dd6eu);
    return;

L_AC52:
    /* 0000ac52   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0000ac52u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_AC56:
    /* 0000ac56   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000ac56u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_AC5A:
    /* 0000ac5a   6  cmpi.w #1,(3d6,A4) */
    c->pc = RC_ADDR(0x0000ac5au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3d6u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_AC60:
    /* 0000ac60   2  bne 0000ac68 */
    c->pc = RC_ADDR(0x0000ac60u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_AC68;

L_AC62:
    /* 0000ac62   4  clr.w (3d6,A4) */
    c->pc = RC_ADDR(0x0000ac62u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x3d6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_AC66:
    /* 0000ac66   2  bra 0000ac8c */
    c->pc = RC_ADDR(0x0000ac66u);
    rc_step(c, m, 10);
    goto L_AC8C;

L_AC68:
    /* 0000ac68   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0000ac68u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_AC6C:
    /* 0000ac6c   4  move.w (3d0,A4),D0 */
    c->pc = RC_ADDR(0x0000ac6cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3d0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_AC70:
    /* 0000ac70   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000ac70u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_AC72:
    /* 0000ac72   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000ac72u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_AC74:
    /* 0000ac74   4  lea (34a,A4),A1 */
    c->pc = RC_ADDR(0x0000ac74u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x34au);

L_AC78:
    /* 0000ac78   4  movea.l (0,A1,D0.w),A6 */
    c->pc = RC_ADDR(0x0000ac78u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[1] + 0x0u + t4));
    c->a[6] = t0;

L_AC7C:
    /* 0000ac7c   4  move.w (c,A6),D0 */
    c->pc = RC_ADDR(0x0000ac7cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[6] + 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_AC80:
    /* 0000ac80   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x0000ac80u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_AC82:
    /* 0000ac82   4  move.w (2a,A0),D1 */
    c->pc = RC_ADDR(0x0000ac82u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2au));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_AC86:
    /* 0000ac86   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x0000ac86u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_AC88:
    /* 0000ac88   4  blt 0000ae12 */
    c->pc = RC_ADDR(0x0000ac88u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_AE12;

L_AC8C:
    /* 0000ac8c   6  cmpi.w #8,(3d0,A4) */
    c->pc = RC_ADDR(0x0000ac8cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3d0u));
    rc_cmp(c, RC_W, t0, 0x00000008u);

L_AC92:
    /* 0000ac92   2  bne 0000aca8 */
    c->pc = RC_ADDR(0x0000ac92u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_ACA8;

L_AC94:
    /* 0000ac94   4  tst.w (ffff96a0,A4) */
    c->pc = RC_ADDR(0x0000ac94u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x6960u));
    rc_set_nzvc(c, t0, RC_W);

L_AC98:
    /* 0000ac98   2  bne 0000ac9e */
    c->pc = RC_ADDR(0x0000ac98u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_AC9E;

L_AC9A:
    /* 0000ac9a   4  jsr (0000b314) */
    c->pc = RC_ADDR(0x0000ac9au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000ac9eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000b314u);
    return;

L_AC9E:
    /* 0000ac9e   6  move.w #1,(ffff96a0,A4) */
    c->pc = RC_ADDR(0x0000ac9eu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x6960u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_ACA4:
    /* 0000aca4   4  bra 0000ae12 */
    c->pc = RC_ADDR(0x0000aca4u);
    rc_step(c, m, 10);
    goto L_AE12;

L_ACA8:
    /* 0000aca8   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000aca8u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_ACAA:
    /* 0000acaa   4  move.w (3d0,A4),D0 */
    c->pc = RC_ADDR(0x0000acaau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3d0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_ACAE:
    /* 0000acae   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000acaeu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_ACB0:
    /* 0000acb0   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000acb0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_ACB2:
    /* 0000acb2   4  lea (34a,A4),A0 */
    c->pc = RC_ADDR(0x0000acb2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x34au);

L_ACB6:
    /* 0000acb6   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000acb6u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_ACBA:
    /* 0000acba   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000acbau);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_ACBE:
    /* 0000acbe   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x0000acbeu);
    rc_step(c, m, 18);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x0000acc2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cbcu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_ACC2:
    /* 0000acc2   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000acc2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_ACC4:
    /* 0000acc4   4  move.w (3d0,A4),D0 */
    c->pc = RC_ADDR(0x0000acc4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3d0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_ACC8:
    /* 0000acc8   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000acc8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_ACCA:
    /* 0000acca   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000accau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_ACCC:
    /* 0000accc   4  lea (38a,A4),A0 */
    c->pc = RC_ADDR(0x0000acccu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x38au);

L_ACD0:
    /* 0000acd0   4  tst.l (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000acd0u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_L);

L_ACD4:
    /* 0000acd4   2  beq 0000acf2 */
    c->pc = RC_ADDR(0x0000acd4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_ACF2;

L_ACD6:
    /* 0000acd6   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000acd6u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_ACD8:
    /* 0000acd8   4  move.w (3d0,A4),D0 */
    c->pc = RC_ADDR(0x0000acd8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3d0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_ACDC:
    /* 0000acdc   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000acdcu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_ACDE:
    /* 0000acde   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000acdeu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_ACE0:
    /* 0000ace0   4  lea (38a,A4),A0 */
    c->pc = RC_ADDR(0x0000ace0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x38au);

L_ACE4:
    /* 0000ace4   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000ace4u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_ACE8:
    /* 0000ace8   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000ace8u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_ACEC:
    /* 0000acec   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x0000acecu);
    rc_step(c, m, 18);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x0000acf0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cbcu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_ACF0:
    /* 0000acf0   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000acf0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_ACF2:
    /* 0000acf2   4  move.w (3ce,A4),D0 */
    c->pc = RC_ADDR(0x0000acf2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3ceu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_ACF6:
    /* 0000acf6   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000acf6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_ACF8:
    /* 0000acf8   4  bra 0000ad9a */
    c->pc = RC_ADDR(0x0000acf8u);
    rc_step(c, m, 10);
    goto L_AD9A;

L_ACFC:
    /* 0000acfc   4  clr.w (3d0,A4) */
    c->pc = RC_ADDR(0x0000acfcu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x3d0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_AD00:
    /* 0000ad00   4  bra 0000adac */
    c->pc = RC_ADDR(0x0000ad00u);
    rc_step(c, m, 10);
    goto L_ADAC;

L_AD04:
    /* 0000ad04   6  move.w #1,(3d0,A4) */
    c->pc = RC_ADDR(0x0000ad04u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x3d0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_AD0A:
    /* 0000ad0a   4  bra 0000adac */
    c->pc = RC_ADDR(0x0000ad0au);
    rc_step(c, m, 10);
    goto L_ADAC;

L_AD0E:
    /* 0000ad0e   6  move.w #3,(3d0,A4) */
    c->pc = RC_ADDR(0x0000ad0eu);
    rc_step(c, m, 16);
    t0 = 0x00000003u;
    rc_wr16(c, m, (c->a[4] + 0x3d0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_AD14:
    /* 0000ad14   4  bra 0000adac */
    c->pc = RC_ADDR(0x0000ad14u);
    rc_step(c, m, 10);
    goto L_ADAC;

L_AD18:
    /* 0000ad18   6  move.w #2,(3d0,A4) */
    c->pc = RC_ADDR(0x0000ad18u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x3d0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_AD1E:
    /* 0000ad1e   4  bra 0000adac */
    c->pc = RC_ADDR(0x0000ad1eu);
    rc_step(c, m, 10);
    goto L_ADAC;

L_AD22:
    /* 0000ad22   4  move.w (ffff96a2,A4),D0 */
    c->pc = RC_ADDR(0x0000ad22u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x695eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_AD26:
    /* 0000ad26   4  muls.w #60,D0 */
    c->pc = RC_ADDR(0x0000ad26u);
    rc_step(c, m, 42);
    t0 = 0x00000060u;
    rc_muls(c, 0, t0);

L_AD2A:
    /* 0000ad2a   4  move.w (3d2,A4),D1 */
    c->pc = RC_ADDR(0x0000ad2au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3d2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_AD2E:
    /* 0000ad2e   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000ad2eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_AD30:
    /* 0000ad30   2  asl.l #5,D1 */
    c->pc = RC_ADDR(0x0000ad30u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000005u, rc_d_get(c, 1, RC_L), RC_L));

L_AD32:
    /* 0000ad32   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x0000ad32u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_AD34:
    /* 0000ad34   4  move.w (3d4,A4),D1 */
    c->pc = RC_ADDR(0x0000ad34u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3d4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_AD38:
    /* 0000ad38   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000ad38u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_AD3A:
    /* 0000ad3a   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0000ad3au);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_AD3C:
    /* 0000ad3c   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x0000ad3cu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_AD3E:
    /* 0000ad3e   4  lea (ffff94c0,A4),A0 */
    c->pc = RC_ADDR(0x0000ad3eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6b40u);

L_AD42:
    /* 0000ad42   6  move.w (0,A0,D0.w),(3d0,A4) */
    c->pc = RC_ADDR(0x0000ad42u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] + 0x3d0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_AD48:
    /* 0000ad48   4  addq.w #1,(3d4,A4) */
    c->pc = RC_ADDR(0x0000ad48u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x3d4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_AD4C:
    /* 0000ad4c   4  move.w (ffff96a2,A4),D0 */
    c->pc = RC_ADDR(0x0000ad4cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x695eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_AD50:
    /* 0000ad50   4  muls.w #60,D0 */
    c->pc = RC_ADDR(0x0000ad50u);
    rc_step(c, m, 42);
    t0 = 0x00000060u;
    rc_muls(c, 0, t0);

L_AD54:
    /* 0000ad54   4  move.w (3d2,A4),D1 */
    c->pc = RC_ADDR(0x0000ad54u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3d2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_AD58:
    /* 0000ad58   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000ad58u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_AD5A:
    /* 0000ad5a   2  asl.l #5,D1 */
    c->pc = RC_ADDR(0x0000ad5au);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000005u, rc_d_get(c, 1, RC_L), RC_L));

L_AD5C:
    /* 0000ad5c   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x0000ad5cu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_AD5E:
    /* 0000ad5e   4  move.w (3d4,A4),D1 */
    c->pc = RC_ADDR(0x0000ad5eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3d4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_AD62:
    /* 0000ad62   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000ad62u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_AD64:
    /* 0000ad64   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0000ad64u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_AD66:
    /* 0000ad66   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x0000ad66u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_AD68:
    /* 0000ad68   4  lea (ffff94c0,A4),A0 */
    c->pc = RC_ADDR(0x0000ad68u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6b40u);

L_AD6C:
    /* 0000ad6c   6  cmpi.w #ff,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000ad6cu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x000000ffu);

L_AD72:
    /* 0000ad72   2  bne 0000ad86 */
    c->pc = RC_ADDR(0x0000ad72u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_AD86;

L_AD74:
    /* 0000ad74   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0000ad74u);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_AD78:
    /* 0000ad78   4  jsr (ffff8188,A4) */
    c->pc = RC_ADDR(0x0000ad78u);
    rc_step(c, m, 18);
    /* vector 65 */
    rc_push32(c, m, RC_ADDR(0x0000ad7cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bdeu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00016ee0u);
    return;

L_AD7C:
    /* 0000ad7c   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000ad7cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_AD7E:
    /* 0000ad7e   4  move.w D0,(3d2,A4) */
    c->pc = RC_ADDR(0x0000ad7eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x3d2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_AD82:
    /* 0000ad82   4  clr.w (3d4,A4) */
    c->pc = RC_ADDR(0x0000ad82u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x3d4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_AD86:
    /* 0000ad86   2  bra 0000adac */
    c->pc = RC_ADDR(0x0000ad86u);
    rc_step(c, m, 10);
    goto L_ADAC;

L_AD9A:
    /* 0000ad9a   6  cmp.l #9,D0 */
    c->pc = RC_ADDR(0x0000ad9au);
    rc_step(c, m, 14);
    t0 = 0x00000009u;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_ADA0:
    /* 0000ada0   2  bcc 0000adac */
    c->pc = RC_ADDR(0x0000ada0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_ADAC;

L_ADA2:
    /* 0000ada2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000ada2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_ADA4:
    /* 0000ada4   4  move.w (0000ad88),D0 */
    c->pc = RC_ADDR(0x0000ada4u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (RC_ADDR(0x0000ad88u) + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_ADA8:
    /* 0000ada8   4  jmp (0000adaa) */
    c->pc = RC_ADDR(0x0000ada8u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (RC_ADDR(0x0000adaau) + t4);
    c->pc = t3;
    return;

L_ADAC:
    /* 0000adac   4  move.w #a,-(A7) */
    c->pc = RC_ADDR(0x0000adacu);
    rc_step(c, m, 12);
    t0 = 0x0000000au;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_ADB0:
    /* 0000adb0   4  move.w (3cc,A4),-(A7) */
    c->pc = RC_ADDR(0x0000adb0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3ccu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_ADB4:
    /* 0000adb4   4  move.w (3ca,A4),-(A7) */
    c->pc = RC_ADDR(0x0000adb4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3cau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_ADB8:
    /* 0000adb8   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000adb8u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_ADBA:
    /* 0000adba   4  move.w (3d0,A4),D0 */
    c->pc = RC_ADDR(0x0000adbau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3d0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_ADBE:
    /* 0000adbe   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000adbeu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_ADC0:
    /* 0000adc0   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000adc0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_ADC2:
    /* 0000adc2   4  lea (34a,A4),A0 */
    c->pc = RC_ADDR(0x0000adc2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x34au);

L_ADC6:
    /* 0000adc6   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000adc6u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_ADCA:
    /* 0000adca   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000adcau);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_ADCE:
    /* 0000adce   4  jsr (ffff8272,A4) */
    c->pc = RC_ADDR(0x0000adceu);
    rc_step(c, m, 18);
    /* vector 104 */
    rc_push32(c, m, RC_ADDR(0x0000add2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cc8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f914u);
    return;

L_ADD2:
    /* 0000add2   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000add2u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_ADD6:
    /* 0000add6   4  move.w (3d0,A4),D0 */
    c->pc = RC_ADDR(0x0000add6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3d0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_ADDA:
    /* 0000adda   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000addau);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_ADDC:
    /* 0000addc   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000addcu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_ADDE:
    /* 0000adde   4  lea (38a,A4),A0 */
    c->pc = RC_ADDR(0x0000addeu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x38au);

L_ADE2:
    /* 0000ade2   4  tst.l (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000ade2u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_L);

L_ADE6:
    /* 0000ade6   2  beq 0000ae12 */
    c->pc = RC_ADDR(0x0000ade6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_AE12;

L_ADE8:
    /* 0000ade8   4  move.w #28,-(A7) */
    c->pc = RC_ADDR(0x0000ade8u);
    rc_step(c, m, 12);
    t0 = 0x00000028u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_ADEC:
    /* 0000adec   4  move.w (3cc,A4),-(A7) */
    c->pc = RC_ADDR(0x0000adecu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3ccu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_ADF0:
    /* 0000adf0   4  move.w (3ca,A4),-(A7) */
    c->pc = RC_ADDR(0x0000adf0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3cau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_ADF4:
    /* 0000adf4   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000adf4u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_ADF6:
    /* 0000adf6   4  move.w (3d0,A4),D0 */
    c->pc = RC_ADDR(0x0000adf6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3d0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_ADFA:
    /* 0000adfa   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000adfau);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_ADFC:
    /* 0000adfc   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000adfcu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_ADFE:
    /* 0000adfe   4  lea (38a,A4),A0 */
    c->pc = RC_ADDR(0x0000adfeu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x38au);

L_AE02:
    /* 0000ae02   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000ae02u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AE06:
    /* 0000ae06   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000ae06u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_AE0A:
    /* 0000ae0a   4  jsr (ffff8272,A4) */
    c->pc = RC_ADDR(0x0000ae0au);
    rc_step(c, m, 18);
    /* vector 104 */
    rc_push32(c, m, RC_ADDR(0x0000ae0eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cc8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f914u);
    return;

L_AE0E:
    /* 0000ae0e   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000ae0eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_AE12:
    /* 0000ae12   2  unlk A5 */
    c->pc = RC_ADDR(0x0000ae12u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_AE14:
    /* 0000ae14   2  rts */
    c->pc = RC_ADDR(0x0000ae14u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
