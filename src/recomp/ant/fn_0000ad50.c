/* fn_0000ad50 - 328 byte(s), 91 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000ad50(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000ad50u): goto L_AD50;
    case RC_ADDR(0x0000ad54u): goto L_AD54;
    case RC_ADDR(0x0000ad58u): goto L_AD58;
    case RC_ADDR(0x0000ad5cu): goto L_AD5C;
    case RC_ADDR(0x0000ad60u): goto L_AD60;
    case RC_ADDR(0x0000ad62u): goto L_AD62;
    case RC_ADDR(0x0000ad66u): goto L_AD66;
    case RC_ADDR(0x0000ad6au): goto L_AD6A;
    case RC_ADDR(0x0000ad6eu): goto L_AD6E;
    case RC_ADDR(0x0000ad72u): goto L_AD72;
    case RC_ADDR(0x0000ad76u): goto L_AD76;
    case RC_ADDR(0x0000ad7au): goto L_AD7A;
    case RC_ADDR(0x0000ad7eu): goto L_AD7E;
    case RC_ADDR(0x0000ad82u): goto L_AD82;
    case RC_ADDR(0x0000ad86u): goto L_AD86;
    case RC_ADDR(0x0000ad8au): goto L_AD8A;
    case RC_ADDR(0x0000ad8cu): goto L_AD8C;
    case RC_ADDR(0x0000ad8eu): goto L_AD8E;
    case RC_ADDR(0x0000ad92u): goto L_AD92;
    case RC_ADDR(0x0000ad96u): goto L_AD96;
    case RC_ADDR(0x0000ad9au): goto L_AD9A;
    case RC_ADDR(0x0000ad9eu): goto L_AD9E;
    case RC_ADDR(0x0000ada2u): goto L_ADA2;
    case RC_ADDR(0x0000ada6u): goto L_ADA6;
    case RC_ADDR(0x0000adaau): goto L_ADAA;
    case RC_ADDR(0x0000adaeu): goto L_ADAE;
    case RC_ADDR(0x0000adb2u): goto L_ADB2;
    case RC_ADDR(0x0000adb6u): goto L_ADB6;
    case RC_ADDR(0x0000adbau): goto L_ADBA;
    case RC_ADDR(0x0000adbeu): goto L_ADBE;
    case RC_ADDR(0x0000adc2u): goto L_ADC2;
    case RC_ADDR(0x0000adc6u): goto L_ADC6;
    case RC_ADDR(0x0000adc8u): goto L_ADC8;
    case RC_ADDR(0x0000adcau): goto L_ADCA;
    case RC_ADDR(0x0000adceu): goto L_ADCE;
    case RC_ADDR(0x0000add2u): goto L_ADD2;
    case RC_ADDR(0x0000add6u): goto L_ADD6;
    case RC_ADDR(0x0000addau): goto L_ADDA;
    case RC_ADDR(0x0000addcu): goto L_ADDC;
    case RC_ADDR(0x0000ade0u): goto L_ADE0;
    case RC_ADDR(0x0000ade4u): goto L_ADE4;
    case RC_ADDR(0x0000ade8u): goto L_ADE8;
    case RC_ADDR(0x0000adecu): goto L_ADEC;
    case RC_ADDR(0x0000adf0u): goto L_ADF0;
    case RC_ADDR(0x0000adf4u): goto L_ADF4;
    case RC_ADDR(0x0000adf8u): goto L_ADF8;
    case RC_ADDR(0x0000adfcu): goto L_ADFC;
    case RC_ADDR(0x0000ae00u): goto L_AE00;
    case RC_ADDR(0x0000ae04u): goto L_AE04;
    case RC_ADDR(0x0000ae08u): goto L_AE08;
    case RC_ADDR(0x0000ae0cu): goto L_AE0C;
    case RC_ADDR(0x0000ae10u): goto L_AE10;
    case RC_ADDR(0x0000ae12u): goto L_AE12;
    case RC_ADDR(0x0000ae16u): goto L_AE16;
    case RC_ADDR(0x0000ae1au): goto L_AE1A;
    case RC_ADDR(0x0000ae1eu): goto L_AE1E;
    case RC_ADDR(0x0000ae22u): goto L_AE22;
    case RC_ADDR(0x0000ae26u): goto L_AE26;
    case RC_ADDR(0x0000ae2cu): goto L_AE2C;
    case RC_ADDR(0x0000ae30u): goto L_AE30;
    case RC_ADDR(0x0000ae32u): goto L_AE32;
    case RC_ADDR(0x0000ae36u): goto L_AE36;
    case RC_ADDR(0x0000ae38u): goto L_AE38;
    case RC_ADDR(0x0000ae3cu): goto L_AE3C;
    case RC_ADDR(0x0000ae3eu): goto L_AE3E;
    case RC_ADDR(0x0000ae42u): goto L_AE42;
    case RC_ADDR(0x0000ae44u): goto L_AE44;
    case RC_ADDR(0x0000ae48u): goto L_AE48;
    case RC_ADDR(0x0000ae4cu): goto L_AE4C;
    case RC_ADDR(0x0000ae50u): goto L_AE50;
    case RC_ADDR(0x0000ae54u): goto L_AE54;
    case RC_ADDR(0x0000ae56u): goto L_AE56;
    case RC_ADDR(0x0000ae5au): goto L_AE5A;
    case RC_ADDR(0x0000ae5cu): goto L_AE5C;
    case RC_ADDR(0x0000ae60u): goto L_AE60;
    case RC_ADDR(0x0000ae64u): goto L_AE64;
    case RC_ADDR(0x0000ae66u): goto L_AE66;
    case RC_ADDR(0x0000ae68u): goto L_AE68;
    case RC_ADDR(0x0000ae6cu): goto L_AE6C;
    case RC_ADDR(0x0000ae72u): goto L_AE72;
    case RC_ADDR(0x0000ae76u): goto L_AE76;
    case RC_ADDR(0x0000ae7au): goto L_AE7A;
    case RC_ADDR(0x0000ae7eu): goto L_AE7E;
    case RC_ADDR(0x0000ae82u): goto L_AE82;
    case RC_ADDR(0x0000ae86u): goto L_AE86;
    case RC_ADDR(0x0000ae88u): goto L_AE88;
    case RC_ADDR(0x0000ae8au): goto L_AE8A;
    case RC_ADDR(0x0000ae8eu): goto L_AE8E;
    case RC_ADDR(0x0000ae92u): goto L_AE92;
    case RC_ADDR(0x0000ae94u): goto L_AE94;
    case RC_ADDR(0x0000ae96u): goto L_AE96;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_AD50:
    /* 0000ad50   4  link.w A5,#ffffffe0 */
    c->pc = RC_ADDR(0x0000ad50u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x20u;

L_AD54:
    /* 0000ad54   4  pea (000003ed).l */
    c->pc = RC_ADDR(0x0000ad54u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000003edu);

L_AD58:
    /* 0000ad58   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000ad58u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AD5C:
    /* 0000ad5c   4  jsr (ffff82b4,A4) */
    c->pc = RC_ADDR(0x0000ad5cu);
    rc_step(c, m, 18);
    /* vector 115 */
    rc_push32(c, m, RC_ADDR(0x0000ad60u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023daau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022518u);
    return;

L_AD60:
    /* 0000ad60   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000ad60u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_AD62:
    /* 0000ad62   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000ad62u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_AD66:
    /* 0000ad66   4  beq 0000ae94 */
    c->pc = RC_ADDR(0x0000ad66u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_AE94;

L_AD6A:
    /* 0000ad6a   4  pea (00000004).l */
    c->pc = RC_ADDR(0x0000ad6au);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000004u);

L_AD6E:
    /* 0000ad6e   4  move.l (ffff9574,A4),-(A7) */
    c->pc = RC_ADDR(0x0000ad6eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x6a8cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AD72:
    /* 0000ad72   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0000ad72u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AD76:
    /* 0000ad76   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x0000ad76u);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x0000ad7au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_AD7A:
    /* 0000ad7a   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0000ad7au);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_AD7E:
    /* 0000ad7e   4  pea (0000ae98) */
    c->pc = RC_ADDR(0x0000ad7eu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000ae98u));

L_AD82:
    /* 0000ad82   4  move.l (ffff9574,A4),-(A7) */
    c->pc = RC_ADDR(0x0000ad82u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x6a8cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AD86:
    /* 0000ad86   4  jsr (ffff82de,A4) */
    c->pc = RC_ADDR(0x0000ad86u);
    rc_step(c, m, 18);
    /* vector 122 */
    rc_push32(c, m, RC_ADDR(0x0000ad8au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dd4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002298au);
    return;

L_AD8A:
    /* 0000ad8a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000ad8au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_AD8C:
    /* 0000ad8c   2  tst.w D0 */
    c->pc = RC_ADDR(0x0000ad8cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_AD8E:
    /* 0000ad8e   4  bne 0000ae8a */
    c->pc = RC_ADDR(0x0000ad8eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_AE8A;

L_AD92:
    /* 0000ad92   4  pea (00000004).l */
    c->pc = RC_ADDR(0x0000ad92u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000004u);

L_AD96:
    /* 0000ad96   4  move.l (ffff9574,A4),-(A7) */
    c->pc = RC_ADDR(0x0000ad96u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x6a8cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AD9A:
    /* 0000ad9a   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0000ad9au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AD9E:
    /* 0000ad9e   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x0000ad9eu);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x0000ada2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_ADA2:
    /* 0000ada2   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0000ada2u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_ADA6:
    /* 0000ada6   4  pea (00000004).l */
    c->pc = RC_ADDR(0x0000ada6u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000004u);

L_ADAA:
    /* 0000adaa   4  move.l (ffff9574,A4),-(A7) */
    c->pc = RC_ADDR(0x0000adaau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x6a8cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_ADAE:
    /* 0000adae   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0000adaeu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_ADB2:
    /* 0000adb2   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x0000adb2u);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x0000adb6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_ADB6:
    /* 0000adb6   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0000adb6u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_ADBA:
    /* 0000adba   4  pea (0000ae9d) */
    c->pc = RC_ADDR(0x0000adbau);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000ae9du));

L_ADBE:
    /* 0000adbe   4  move.l (ffff9574,A4),-(A7) */
    c->pc = RC_ADDR(0x0000adbeu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x6a8cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_ADC2:
    /* 0000adc2   4  jsr (ffff82de,A4) */
    c->pc = RC_ADDR(0x0000adc2u);
    rc_step(c, m, 18);
    /* vector 122 */
    rc_push32(c, m, RC_ADDR(0x0000adc6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dd4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002298au);
    return;

L_ADC6:
    /* 0000adc6   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000adc6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_ADC8:
    /* 0000adc8   2  tst.w D0 */
    c->pc = RC_ADDR(0x0000adc8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_ADCA:
    /* 0000adca   4  bne 0000ae8a */
    c->pc = RC_ADDR(0x0000adcau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_AE8A;

L_ADCE:
    /* 0000adce   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0000adceu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_ADD2:
    /* 0000add2   4  pea (0000aea2) */
    c->pc = RC_ADDR(0x0000add2u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000aea2u));

L_ADD6:
    /* 0000add6   4  jsr (0000aeac) */
    c->pc = RC_ADDR(0x0000add6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000addau));
    rc_depth++;
    c->pc = RC_ADDR(0x0000aeacu);
    return;

L_ADDA:
    /* 0000adda   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000addau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_ADDC:
    /* 0000addc   4  pea (00000004).l */
    c->pc = RC_ADDR(0x0000addcu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000004u);

L_ADE0:
    /* 0000ade0   4  pea (fffffff8,A5) */
    c->pc = RC_ADDR(0x0000ade0u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x8u));

L_ADE4:
    /* 0000ade4   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0000ade4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_ADE8:
    /* 0000ade8   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x0000ade8u);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x0000adecu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_ADEC:
    /* 0000adec   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0000adecu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_ADF0:
    /* 0000adf0   4  pea (00000014).l */
    c->pc = RC_ADDR(0x0000adf0u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000014u);

L_ADF4:
    /* 0000adf4   4  pea (ffffffe4,A5) */
    c->pc = RC_ADDR(0x0000adf4u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x1cu));

L_ADF8:
    /* 0000adf8   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0000adf8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_ADFC:
    /* 0000adfc   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x0000adfcu);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x0000ae00u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_AE00:
    /* 0000ae00   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0000ae00u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_AE04:
    /* 0000ae04   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0000ae04u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AE08:
    /* 0000ae08   4  pea (0000aea7) */
    c->pc = RC_ADDR(0x0000ae08u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000aea7u));

L_AE0C:
    /* 0000ae0c   4  jsr (0000aeac) */
    c->pc = RC_ADDR(0x0000ae0cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000ae10u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000aeacu);
    return;

L_AE10:
    /* 0000ae10   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000ae10u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_AE12:
    /* 0000ae12   4  pea (00000004).l */
    c->pc = RC_ADDR(0x0000ae12u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000004u);

L_AE16:
    /* 0000ae16   4  move.l (10,A5),-(A7) */
    c->pc = RC_ADDR(0x0000ae16u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AE1A:
    /* 0000ae1a   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0000ae1au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AE1E:
    /* 0000ae1e   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x0000ae1eu);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x0000ae22u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_AE22:
    /* 0000ae22   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0000ae22u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_AE26:
    /* 0000ae26   6  pea (00010002).l */
    c->pc = RC_ADDR(0x0000ae26u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010002u);

L_AE2C:
    /* 0000ae2c   4  movea.l (10,A5),A0 */
    c->pc = RC_ADDR(0x0000ae2cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[0] = t0;

L_AE30:
    /* 0000ae30   2  move.l (A0),-(A7) */
    c->pc = RC_ADDR(0x0000ae30u);
    rc_step(c, m, 20);
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AE32:
    /* 0000ae32   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x0000ae32u);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x0000ae36u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_AE36:
    /* 0000ae36   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000ae36u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_AE38:
    /* 0000ae38   4  move.l D0,(ffffffe0,A5) */
    c->pc = RC_ADDR(0x0000ae38u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x20u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_AE3C:
    /* 0000ae3c   2  beq 0000ae56 */
    c->pc = RC_ADDR(0x0000ae3cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_AE56;

L_AE3E:
    /* 0000ae3e   4  movea.l (10,A5),A0 */
    c->pc = RC_ADDR(0x0000ae3eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[0] = t0;

L_AE42:
    /* 0000ae42   2  move.l (A0),-(A7) */
    c->pc = RC_ADDR(0x0000ae42u);
    rc_step(c, m, 20);
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AE44:
    /* 0000ae44   4  move.l (ffffffe0,A5),-(A7) */
    c->pc = RC_ADDR(0x0000ae44u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x20u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AE48:
    /* 0000ae48   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0000ae48u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AE4C:
    /* 0000ae4c   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x0000ae4cu);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x0000ae50u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_AE50:
    /* 0000ae50   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0000ae50u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_AE54:
    /* 0000ae54   2  bra 0000ae5c */
    c->pc = RC_ADDR(0x0000ae54u);
    rc_step(c, m, 10);
    goto L_AE5C;

L_AE56:
    /* 0000ae56   4  movea.l (10,A5),A0 */
    c->pc = RC_ADDR(0x0000ae56u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[0] = t0;

L_AE5A:
    /* 0000ae5a   2  clr.l (A0) */
    c->pc = RC_ADDR(0x0000ae5au);
    rc_step(c, m, 20);
    rc_wr32(c, m, c->a[0], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_AE5C:
    /* 0000ae5c   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0000ae5cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AE60:
    /* 0000ae60   4  jsr (ffff82ba,A4) */
    c->pc = RC_ADDR(0x0000ae60u);
    rc_step(c, m, 18);
    /* vector 116 */
    rc_push32(c, m, RC_ADDR(0x0000ae64u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023db0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022532u);
    return;

L_AE64:
    /* 0000ae64   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000ae64u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_AE66:
    /* 0000ae66   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x0000ae66u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_AE68:
    /* 0000ae68   4  move.w (fffffff0,A5),D1 */
    c->pc = RC_ADDR(0x0000ae68u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_AE6C:
    /* 0000ae6c   6  move.l #369e99,D0 */
    c->pc = RC_ADDR(0x0000ae6cu);
    rc_step(c, m, 12);
    t0 = 0x00369e99u;
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_AE72:
    /* 0000ae72   4  jsr (ffff8302,A4) */
    c->pc = RC_ADDR(0x0000ae72u);
    rc_step(c, m, 18);
    /* vector 128 */
    rc_push32(c, m, RC_ADDR(0x0000ae76u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023df8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002329cu);
    return;

L_AE76:
    /* 0000ae76   4  move.l D0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000ae76u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_AE7A:
    /* 0000ae7a   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x0000ae7au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_AE7E:
    /* 0000ae7e   4  move.w (fffffffa,A5),(A0) */
    c->pc = RC_ADDR(0x0000ae7eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_AE82:
    /* 0000ae82   4  move.l (ffffffe0,A5),D0 */
    c->pc = RC_ADDR(0x0000ae82u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x20u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_AE86:
    /* 0000ae86   2  unlk A5 */
    c->pc = RC_ADDR(0x0000ae86u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_AE88:
    /* 0000ae88   2  rts */
    c->pc = RC_ADDR(0x0000ae88u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_AE8A:
    /* 0000ae8a   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0000ae8au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AE8E:
    /* 0000ae8e   4  jsr (ffff82ba,A4) */
    c->pc = RC_ADDR(0x0000ae8eu);
    rc_step(c, m, 18);
    /* vector 116 */
    rc_push32(c, m, RC_ADDR(0x0000ae92u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023db0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022532u);
    return;

L_AE92:
    /* 0000ae92   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000ae92u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_AE94:
    /* 0000ae94   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0000ae94u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_AE96:
    /* 0000ae96   2  bra 0000ae86 */
    c->pc = RC_ADDR(0x0000ae96u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_AE86;

}
