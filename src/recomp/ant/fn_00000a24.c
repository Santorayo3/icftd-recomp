/* fn_00000a24 - 226 byte(s), 67 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00000a24(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00000a24u): goto L_A24;
    case RC_ADDR(0x00000a28u): goto L_A28;
    case RC_ADDR(0x00000a2cu): goto L_A2C;
    case RC_ADDR(0x00000a30u): goto L_A30;
    case RC_ADDR(0x00000a34u): goto L_A34;
    case RC_ADDR(0x00000a36u): goto L_A36;
    case RC_ADDR(0x00000a3au): goto L_A3A;
    case RC_ADDR(0x00000a3cu): goto L_A3C;
    case RC_ADDR(0x00000a40u): goto L_A40;
    case RC_ADDR(0x00000a44u): goto L_A44;
    case RC_ADDR(0x00000a46u): goto L_A46;
    case RC_ADDR(0x00000a48u): goto L_A48;
    case RC_ADDR(0x00000a4au): goto L_A4A;
    case RC_ADDR(0x00000a4cu): goto L_A4C;
    case RC_ADDR(0x00000a50u): goto L_A50;
    case RC_ADDR(0x00000a54u): goto L_A54;
    case RC_ADDR(0x00000a58u): goto L_A58;
    case RC_ADDR(0x00000a5au): goto L_A5A;
    case RC_ADDR(0x00000a5eu): goto L_A5E;
    case RC_ADDR(0x00000a60u): goto L_A60;
    case RC_ADDR(0x00000a64u): goto L_A64;
    case RC_ADDR(0x00000a68u): goto L_A68;
    case RC_ADDR(0x00000a6au): goto L_A6A;
    case RC_ADDR(0x00000a6cu): goto L_A6C;
    case RC_ADDR(0x00000a6eu): goto L_A6E;
    case RC_ADDR(0x00000a72u): goto L_A72;
    case RC_ADDR(0x00000a76u): goto L_A76;
    case RC_ADDR(0x00000a7au): goto L_A7A;
    case RC_ADDR(0x00000a7cu): goto L_A7C;
    case RC_ADDR(0x00000a80u): goto L_A80;
    case RC_ADDR(0x00000a82u): goto L_A82;
    case RC_ADDR(0x00000a86u): goto L_A86;
    case RC_ADDR(0x00000a8au): goto L_A8A;
    case RC_ADDR(0x00000a8eu): goto L_A8E;
    case RC_ADDR(0x00000a92u): goto L_A92;
    case RC_ADDR(0x00000a96u): goto L_A96;
    case RC_ADDR(0x00000a9au): goto L_A9A;
    case RC_ADDR(0x00000a9eu): goto L_A9E;
    case RC_ADDR(0x00000aa2u): goto L_AA2;
    case RC_ADDR(0x00000aa4u): goto L_AA4;
    case RC_ADDR(0x00000aa6u): goto L_AA6;
    case RC_ADDR(0x00000aa8u): goto L_AA8;
    case RC_ADDR(0x00000aacu): goto L_AAC;
    case RC_ADDR(0x00000ab0u): goto L_AB0;
    case RC_ADDR(0x00000ab4u): goto L_AB4;
    case RC_ADDR(0x00000ab8u): goto L_AB8;
    case RC_ADDR(0x00000abcu): goto L_ABC;
    case RC_ADDR(0x00000ac0u): goto L_AC0;
    case RC_ADDR(0x00000ac4u): goto L_AC4;
    case RC_ADDR(0x00000ac6u): goto L_AC6;
    case RC_ADDR(0x00000acau): goto L_ACA;
    case RC_ADDR(0x00000aceu): goto L_ACE;
    case RC_ADDR(0x00000ad2u): goto L_AD2;
    case RC_ADDR(0x00000ad6u): goto L_AD6;
    case RC_ADDR(0x00000adau): goto L_ADA;
    case RC_ADDR(0x00000adcu): goto L_ADC;
    case RC_ADDR(0x00000ae0u): goto L_AE0;
    case RC_ADDR(0x00000ae4u): goto L_AE4;
    case RC_ADDR(0x00000ae8u): goto L_AE8;
    case RC_ADDR(0x00000aecu): goto L_AEC;
    case RC_ADDR(0x00000af0u): goto L_AF0;
    case RC_ADDR(0x00000af4u): goto L_AF4;
    case RC_ADDR(0x00000af6u): goto L_AF6;
    case RC_ADDR(0x00000afau): goto L_AFA;
    case RC_ADDR(0x00000afcu): goto L_AFC;
    case RC_ADDR(0x00000b00u): goto L_B00;
    case RC_ADDR(0x00000b02u): goto L_B02;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_A24:
    /* 00000a24   4  link.w A5,#fffffff6 */
    c->pc = RC_ADDR(0x00000a24u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xau;

L_A28:
    /* 00000a28   4  pea (fffffffe).l */
    c->pc = RC_ADDR(0x00000a28u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0xfffffffeu);

L_A2C:
    /* 00000a2c   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00000a2cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_A30:
    /* 00000a30   4  jsr (ffff8332,A4) */
    c->pc = RC_ADDR(0x00000a30u);
    rc_step(c, m, 18);
    /* vector 136 */
    rc_push32(c, m, RC_ADDR(0x00000a34u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e28u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000234ecu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000234f0u);
    return;

L_A34:
    /* 00000a34   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00000a34u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_A36:
    /* 00000a36   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00000a36u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_A3A:
    /* 00000a3a   2  beq 00000a4c */
    c->pc = RC_ADDR(0x00000a3au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_A4C;

L_A3C:
    /* 00000a3c   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00000a3cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_A40:
    /* 00000a40   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x00000a40u);
    rc_step(c, m, 18);
    /* vector 139 */
    rc_push32(c, m, RC_ADDR(0x00000a44u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e3au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023538u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0002353cu);
    return;

L_A44:
    /* 00000a44   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00000a44u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_A46:
    /* 00000a46   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00000a46u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_A48:
    /* 00000a48   2  unlk A5 */
    c->pc = RC_ADDR(0x00000a48u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_A4A:
    /* 00000a4a   2  rts */
    c->pc = RC_ADDR(0x00000a4au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_A4C:
    /* 00000a4c   4  pea (fffffffe).l */
    c->pc = RC_ADDR(0x00000a4cu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0xfffffffeu);

L_A50:
    /* 00000a50   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00000a50u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_A54:
    /* 00000a54   4  jsr (ffff8332,A4) */
    c->pc = RC_ADDR(0x00000a54u);
    rc_step(c, m, 18);
    /* vector 136 */
    rc_push32(c, m, RC_ADDR(0x00000a58u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e28u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000234ecu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000234f0u);
    return;

L_A58:
    /* 00000a58   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00000a58u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_A5A:
    /* 00000a5a   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00000a5au);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_A5E:
    /* 00000a5e   2  beq 00000a6e */
    c->pc = RC_ADDR(0x00000a5eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_A6E;

L_A60:
    /* 00000a60   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00000a60u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_A64:
    /* 00000a64   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x00000a64u);
    rc_step(c, m, 18);
    /* vector 139 */
    rc_push32(c, m, RC_ADDR(0x00000a68u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e3au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023538u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0002353cu);
    return;

L_A68:
    /* 00000a68   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00000a68u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_A6A:
    /* 00000a6a   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00000a6au);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_A6C:
    /* 00000a6c   2  bra 00000a48 */
    c->pc = RC_ADDR(0x00000a6cu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_A48;

L_A6E:
    /* 00000a6e   4  pea (000003ee).l */
    c->pc = RC_ADDR(0x00000a6eu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000003eeu);

L_A72:
    /* 00000a72   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00000a72u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_A76:
    /* 00000a76   4  jsr (ffff82b4,A4) */
    c->pc = RC_ADDR(0x00000a76u);
    rc_step(c, m, 18);
    /* vector 115 */
    rc_push32(c, m, RC_ADDR(0x00000a7au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023daau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022518u);
    return;

L_A7A:
    /* 00000a7a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00000a7au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_A7C:
    /* 00000a7c   4  move.l D0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00000a7cu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_A80:
    /* 00000a80   2  beq 00000aa8 */
    c->pc = RC_ADDR(0x00000a80u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_AA8;

L_A82:
    /* 00000a82   4  clr.w (fffffff6,A5) */
    c->pc = RC_ADDR(0x00000a82u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A86:
    /* 00000a86   4  pea (00000002).l */
    c->pc = RC_ADDR(0x00000a86u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000002u);

L_A8A:
    /* 00000a8a   4  pea (fffffff6,A5) */
    c->pc = RC_ADDR(0x00000a8au);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0xau));

L_A8E:
    /* 00000a8e   4  move.l (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x00000a8eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_A92:
    /* 00000a92   4  jsr (ffff834a,A4) */
    c->pc = RC_ADDR(0x00000a92u);
    rc_step(c, m, 18);
    /* vector 140 */
    rc_push32(c, m, RC_ADDR(0x00000a96u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e40u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023548u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0002354cu);
    return;

L_A96:
    /* 00000a96   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00000a96u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_A9A:
    /* 00000a9a   4  move.l (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x00000a9au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_A9E:
    /* 00000a9e   4  jsr (ffff82ba,A4) */
    c->pc = RC_ADDR(0x00000a9eu);
    rc_step(c, m, 18);
    /* vector 116 */
    rc_push32(c, m, RC_ADDR(0x00000aa2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023db0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022532u);
    return;

L_AA2:
    /* 00000aa2   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00000aa2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_AA4:
    /* 00000aa4   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00000aa4u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_AA6:
    /* 00000aa6   2  bra 00000a48 */
    c->pc = RC_ADDR(0x00000aa6u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_A48;

L_AA8:
    /* 00000aa8   4  jsr (00000b9e) */
    c->pc = RC_ADDR(0x00000aa8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00000aacu));
    rc_depth++;
    c->pc = RC_ADDR(0x00000b9eu);
    return;

L_AAC:
    /* 00000aac   4  move.w #4,-(A7) */
    c->pc = RC_ADDR(0x00000aacu);
    rc_step(c, m, 12);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_AB0:
    /* 00000ab0   4  pea (0000005f).l */
    c->pc = RC_ADDR(0x00000ab0u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000005fu);

L_AB4:
    /* 00000ab4   4  pea (00000b06) */
    c->pc = RC_ADDR(0x00000ab4u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00000b06u));

L_AB8:
    /* 00000ab8   4  jsr (00000ce4) */
    c->pc = RC_ADDR(0x00000ab8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00000abcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00000ce4u);
    return;

L_ABC:
    /* 00000abc   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00000abcu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_AC0:
    /* 00000ac0   4  tst.w (c,A5) */
    c->pc = RC_ADDR(0x00000ac0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_set_nzvc(c, t0, RC_W);

L_AC4:
    /* 00000ac4   2  beq 00000adc */
    c->pc = RC_ADDR(0x00000ac4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_ADC;

L_AC6:
    /* 00000ac6   4  move.w #4,-(A7) */
    c->pc = RC_ADDR(0x00000ac6u);
    rc_step(c, m, 12);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_ACA:
    /* 00000aca   4  pea (00000069).l */
    c->pc = RC_ADDR(0x00000acau);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000069u);

L_ACE:
    /* 00000ace   4  pea (00000b2a) */
    c->pc = RC_ADDR(0x00000aceu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00000b2au));

L_AD2:
    /* 00000ad2   4  jsr (00000ce4) */
    c->pc = RC_ADDR(0x00000ad2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00000ad6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000ce4u);
    return;

L_AD6:
    /* 00000ad6   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00000ad6u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_ADA:
    /* 00000ada   2  bra 00000ada */
    c->pc = RC_ADDR(0x00000adau);
    rc_step(c, m, 10);
    goto L_ADA;

L_ADC:
    /* 00000adc   4  move.w #4,-(A7) */
    c->pc = RC_ADDR(0x00000adcu);
    rc_step(c, m, 12);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_AE0:
    /* 00000ae0   4  pea (00000069).l */
    c->pc = RC_ADDR(0x00000ae0u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000069u);

L_AE4:
    /* 00000ae4   4  pea (00000b42) */
    c->pc = RC_ADDR(0x00000ae4u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00000b42u));

L_AE8:
    /* 00000ae8   4  jsr (00000ce4) */
    c->pc = RC_ADDR(0x00000ae8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00000aecu));
    rc_depth++;
    c->pc = RC_ADDR(0x00000ce4u);
    return;

L_AEC:
    /* 00000aec   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00000aecu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_AF0:
    /* 00000af0   4  tst.w (ffffb24e,A4) */
    c->pc = RC_ADDR(0x00000af0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db2u));
    rc_set_nzvc(c, t0, RC_W);

L_AF4:
    /* 00000af4   2  bne 00000afc */
    c->pc = RC_ADDR(0x00000af4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_AFC;

L_AF6:
    /* 00000af6   4  jsr (ffff8188,A4) */
    c->pc = RC_ADDR(0x00000af6u);
    rc_step(c, m, 18);
    /* vector 65 */
    rc_push32(c, m, RC_ADDR(0x00000afau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c7eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00013446u);
    return;

L_AFA:
    /* 00000afa   2  bra 00000af0 */
    c->pc = RC_ADDR(0x00000afau);
    rc_step(c, m, 10);
    rc_tick();
    goto L_AF0;

L_AFC:
    /* 00000afc   4  jsr (00000c80) */
    c->pc = RC_ADDR(0x00000afcu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00000b00u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000c80u);
    return;

L_B00:
    /* 00000b00   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00000b00u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_B02:
    /* 00000b02   4  bra 00000a48 */
    c->pc = RC_ADDR(0x00000b02u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_A48;

}
