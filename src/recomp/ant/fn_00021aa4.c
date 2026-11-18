/* fn_00021aa4 - 234 byte(s), 72 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00021aa4(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00021aa4u): goto L_21AA4;
    case RC_ADDR(0x00021aa8u): goto L_21AA8;
    case RC_ADDR(0x00021aaau): goto L_21AAA;
    case RC_ADDR(0x00021aaeu): goto L_21AAE;
    case RC_ADDR(0x00021ab4u): goto L_21AB4;
    case RC_ADDR(0x00021ab8u): goto L_21AB8;
    case RC_ADDR(0x00021abau): goto L_21ABA;
    case RC_ADDR(0x00021abeu): goto L_21ABE;
    case RC_ADDR(0x00021ac2u): goto L_21AC2;
    case RC_ADDR(0x00021ac8u): goto L_21AC8;
    case RC_ADDR(0x00021acau): goto L_21ACA;
    case RC_ADDR(0x00021aceu): goto L_21ACE;
    case RC_ADDR(0x00021ad0u): goto L_21AD0;
    case RC_ADDR(0x00021ad4u): goto L_21AD4;
    case RC_ADDR(0x00021adau): goto L_21ADA;
    case RC_ADDR(0x00021adcu): goto L_21ADC;
    case RC_ADDR(0x00021adeu): goto L_21ADE;
    case RC_ADDR(0x00021ae0u): goto L_21AE0;
    case RC_ADDR(0x00021ae2u): goto L_21AE2;
    case RC_ADDR(0x00021ae4u): goto L_21AE4;
    case RC_ADDR(0x00021ae8u): goto L_21AE8;
    case RC_ADDR(0x00021aecu): goto L_21AEC;
    case RC_ADDR(0x00021aeeu): goto L_21AEE;
    case RC_ADDR(0x00021af2u): goto L_21AF2;
    case RC_ADDR(0x00021af6u): goto L_21AF6;
    case RC_ADDR(0x00021af8u): goto L_21AF8;
    case RC_ADDR(0x00021afau): goto L_21AFA;
    case RC_ADDR(0x00021afeu): goto L_21AFE;
    case RC_ADDR(0x00021b02u): goto L_21B02;
    case RC_ADDR(0x00021b04u): goto L_21B04;
    case RC_ADDR(0x00021b08u): goto L_21B08;
    case RC_ADDR(0x00021b0au): goto L_21B0A;
    case RC_ADDR(0x00021b0cu): goto L_21B0C;
    case RC_ADDR(0x00021b10u): goto L_21B10;
    case RC_ADDR(0x00021b12u): goto L_21B12;
    case RC_ADDR(0x00021b14u): goto L_21B14;
    case RC_ADDR(0x00021b16u): goto L_21B16;
    case RC_ADDR(0x00021b1au): goto L_21B1A;
    case RC_ADDR(0x00021b1eu): goto L_21B1E;
    case RC_ADDR(0x00021b20u): goto L_21B20;
    case RC_ADDR(0x00021b24u): goto L_21B24;
    case RC_ADDR(0x00021b2au): goto L_21B2A;
    case RC_ADDR(0x00021b2cu): goto L_21B2C;
    case RC_ADDR(0x00021b2eu): goto L_21B2E;
    case RC_ADDR(0x00021b30u): goto L_21B30;
    case RC_ADDR(0x00021b32u): goto L_21B32;
    case RC_ADDR(0x00021b34u): goto L_21B34;
    case RC_ADDR(0x00021b38u): goto L_21B38;
    case RC_ADDR(0x00021b3cu): goto L_21B3C;
    case RC_ADDR(0x00021b3eu): goto L_21B3E;
    case RC_ADDR(0x00021b42u): goto L_21B42;
    case RC_ADDR(0x00021b46u): goto L_21B46;
    case RC_ADDR(0x00021b48u): goto L_21B48;
    case RC_ADDR(0x00021b4cu): goto L_21B4C;
    case RC_ADDR(0x00021b50u): goto L_21B50;
    case RC_ADDR(0x00021b54u): goto L_21B54;
    case RC_ADDR(0x00021b58u): goto L_21B58;
    case RC_ADDR(0x00021b5au): goto L_21B5A;
    case RC_ADDR(0x00021b5eu): goto L_21B5E;
    case RC_ADDR(0x00021b62u): goto L_21B62;
    case RC_ADDR(0x00021b66u): goto L_21B66;
    case RC_ADDR(0x00021b6au): goto L_21B6A;
    case RC_ADDR(0x00021b6eu): goto L_21B6E;
    case RC_ADDR(0x00021b72u): goto L_21B72;
    case RC_ADDR(0x00021b76u): goto L_21B76;
    case RC_ADDR(0x00021b7au): goto L_21B7A;
    case RC_ADDR(0x00021b7cu): goto L_21B7C;
    case RC_ADDR(0x00021b80u): goto L_21B80;
    case RC_ADDR(0x00021b84u): goto L_21B84;
    case RC_ADDR(0x00021b88u): goto L_21B88;
    case RC_ADDR(0x00021b8au): goto L_21B8A;
    case RC_ADDR(0x00021b8cu): goto L_21B8C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21AA4:
    /* 00021aa4   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00021aa4u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_21AA8:
    /* 00021aa8   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x00021aa8u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21AAA:
    /* 00021aaa   4  movea.l (8,A5),A2 */
    c->pc = RC_ADDR(0x00021aaau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[2] = t0;

L_21AAE:
    /* 00021aae   6  move.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00021aaeu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_21AB4:
    /* 00021ab4   4  jsr (0001fc3a) */
    c->pc = RC_ADDR(0x00021ab4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00021ab8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001fc3au);
    return;

L_21AB8:
    /* 00021ab8   2  move.l A2,D0 */
    c->pc = RC_ADDR(0x00021ab8u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21ABA:
    /* 00021aba   4  beq 00021b80 */
    c->pc = RC_ADDR(0x00021abau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_21B80;

L_21ABE:
    /* 00021abe   4  movea.l (4,A2),A0 */
    c->pc = RC_ADDR(0x00021abeu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0x4u));
    c->a[0] = t0;

L_21AC2:
    /* 00021ac2   6  btst #0,(b,A0) */
    c->pc = RC_ADDR(0x00021ac2u);
    rc_step(c, m, 16);
    t3 = (c->a[0] + 0xbu);
    t4 = 0x00000000u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_21AC8:
    /* 00021ac8   2  beq 00021b04 */
    c->pc = RC_ADDR(0x00021ac8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_21B04;

L_21ACA:
    /* 00021aca   4  tst.w (14,A5) */
    c->pc = RC_ADDR(0x00021acau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x14u));
    rc_set_nzvc(c, t0, RC_W);

L_21ACE:
    /* 00021ace   2  bne 00021adc */
    c->pc = RC_ADDR(0x00021aceu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_21ADC;

L_21AD0:
    /* 00021ad0   4  movea.l (4,A2),A0 */
    c->pc = RC_ADDR(0x00021ad0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0x4u));
    c->a[0] = t0;

L_21AD4:
    /* 00021ad4   6  btst #1,(b,A0) */
    c->pc = RC_ADDR(0x00021ad4u);
    rc_step(c, m, 16);
    t3 = (c->a[0] + 0xbu);
    t4 = 0x00000001u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_21ADA:
    /* 00021ada   2  beq 00021ae0 */
    c->pc = RC_ADDR(0x00021adau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_21AE0;

L_21ADC:
    /* 00021adc   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00021adcu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_21ADE:
    /* 00021ade   2  bra 00021ae2 */
    c->pc = RC_ADDR(0x00021adeu);
    rc_step(c, m, 10);
    goto L_21AE2;

L_21AE0:
    /* 00021ae0   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00021ae0u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_21AE2:
    /* 00021ae2   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00021ae2u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_21AE4:
    /* 00021ae4   4  move.l (14,A2),D0 */
    c->pc = RC_ADDR(0x00021ae4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0x14u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21AE8:
    /* 00021ae8   4  add.l (10,A5),D0 */
    c->pc = RC_ADDR(0x00021ae8u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_21AEC:
    /* 00021aec   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00021aecu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21AEE:
    /* 00021aee   4  move.l (10,A2),D0 */
    c->pc = RC_ADDR(0x00021aeeu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0x10u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21AF2:
    /* 00021af2   4  add.l (c,A5),D0 */
    c->pc = RC_ADDR(0x00021af2u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_21AF6:
    /* 00021af6   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00021af6u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21AF8:
    /* 00021af8   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x00021af8u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21AFA:
    /* 00021afa   4  jsr (0001fc6c) */
    c->pc = RC_ADDR(0x00021afau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00021afeu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001fc6cu);
    return;

L_21AFE:
    /* 00021afe   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00021afeu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_21B02:
    /* 00021b02   2  bra 00021b54 */
    c->pc = RC_ADDR(0x00021b02u);
    rc_step(c, m, 10);
    goto L_21B54;

L_21B04:
    /* 00021b04   4  tst.w (ffffd470,A4) */
    c->pc = RC_ADDR(0x00021b04u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2b90u));
    rc_set_nzvc(c, t0, RC_W);

L_21B08:
    /* 00021b08   2  bne 00021b1a */
    c->pc = RC_ADDR(0x00021b08u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_21B1A;

L_21B0A:
    /* 00021b0a   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x00021b0au);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21B0C:
    /* 00021b0c   4  jsr (000219fe) */
    c->pc = RC_ADDR(0x00021b0cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00021b10u));
    rc_depth++;
    c->pc = RC_ADDR(0x000219feu);
    return;

L_21B10:
    /* 00021b10   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00021b10u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_21B12:
    /* 00021b12   2  tst.w D0 */
    c->pc = RC_ADDR(0x00021b12u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_21B14:
    /* 00021b14   2  bne 00021b1a */
    c->pc = RC_ADDR(0x00021b14u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_21B1A;

L_21B16:
    /* 00021b16   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00021b16u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_21B1A:
    /* 00021b1a   4  tst.w (14,A5) */
    c->pc = RC_ADDR(0x00021b1au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x14u));
    rc_set_nzvc(c, t0, RC_W);

L_21B1E:
    /* 00021b1e   2  bne 00021b2c */
    c->pc = RC_ADDR(0x00021b1eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_21B2C;

L_21B20:
    /* 00021b20   4  movea.l (4,A2),A0 */
    c->pc = RC_ADDR(0x00021b20u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0x4u));
    c->a[0] = t0;

L_21B24:
    /* 00021b24   6  btst #1,(b,A0) */
    c->pc = RC_ADDR(0x00021b24u);
    rc_step(c, m, 16);
    t3 = (c->a[0] + 0xbu);
    t4 = 0x00000001u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_21B2A:
    /* 00021b2a   2  beq 00021b30 */
    c->pc = RC_ADDR(0x00021b2au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_21B30;

L_21B2C:
    /* 00021b2c   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00021b2cu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_21B2E:
    /* 00021b2e   2  bra 00021b32 */
    c->pc = RC_ADDR(0x00021b2eu);
    rc_step(c, m, 10);
    goto L_21B32;

L_21B30:
    /* 00021b30   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00021b30u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_21B32:
    /* 00021b32   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00021b32u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_21B34:
    /* 00021b34   4  move.l (14,A2),D0 */
    c->pc = RC_ADDR(0x00021b34u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0x14u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21B38:
    /* 00021b38   4  add.l (10,A5),D0 */
    c->pc = RC_ADDR(0x00021b38u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_21B3C:
    /* 00021b3c   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00021b3cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21B3E:
    /* 00021b3e   4  move.l (10,A2),D0 */
    c->pc = RC_ADDR(0x00021b3eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0x10u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21B42:
    /* 00021b42   4  add.l (c,A5),D0 */
    c->pc = RC_ADDR(0x00021b42u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_21B46:
    /* 00021b46   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00021b46u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21B48:
    /* 00021b48   4  move.l (2c,A2),-(A7) */
    c->pc = RC_ADDR(0x00021b48u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[2] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21B4C:
    /* 00021b4c   4  jsr (00021aa4) */
    c->pc = RC_ADDR(0x00021b4cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00021b50u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021aa4u);
    return;

L_21B50:
    /* 00021b50   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00021b50u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_21B54:
    /* 00021b54   4  tst.w (ffffd46e,A4) */
    c->pc = RC_ADDR(0x00021b54u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2b92u));
    rc_set_nzvc(c, t0, RC_W);

L_21B58:
    /* 00021b58   2  bne 00021b7a */
    c->pc = RC_ADDR(0x00021b58u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_21B7A;

L_21B5A:
    /* 00021b5a   4  move.l (20,A2),D0 */
    c->pc = RC_ADDR(0x00021b5au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0x20u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21B5E:
    /* 00021b5e   4  add.l D0,(18,A2) */
    c->pc = RC_ADDR(0x00021b5eu);
    rc_step(c, m, 24);
    t3 = (c->a[2] + 0x18u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_21B62:
    /* 00021b62   4  move.l (24,A2),D0 */
    c->pc = RC_ADDR(0x00021b62u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0x24u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21B66:
    /* 00021b66   4  add.l D0,(1c,A2) */
    c->pc = RC_ADDR(0x00021b66u);
    rc_step(c, m, 24);
    t3 = (c->a[2] + 0x1cu);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_21B6A:
    /* 00021b6a   4  move.l (18,A2),D0 */
    c->pc = RC_ADDR(0x00021b6au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0x18u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21B6E:
    /* 00021b6e   4  add.l D0,(10,A2) */
    c->pc = RC_ADDR(0x00021b6eu);
    rc_step(c, m, 24);
    t3 = (c->a[2] + 0x10u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_21B72:
    /* 00021b72   4  move.l (1c,A2),D0 */
    c->pc = RC_ADDR(0x00021b72u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0x1cu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21B76:
    /* 00021b76   4  add.l D0,(14,A2) */
    c->pc = RC_ADDR(0x00021b76u);
    rc_step(c, m, 24);
    t3 = (c->a[2] + 0x14u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_21B7A:
    /* 00021b7a   2  movea.l (A2),A2 */
    c->pc = RC_ADDR(0x00021b7au);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[2]);
    c->a[2] = t0;

L_21B7C:
    /* 00021b7c   4  bra 00021ab8 */
    c->pc = RC_ADDR(0x00021b7cu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_21AB8;

L_21B80:
    /* 00021b80   4  jsr (0001fc50) */
    c->pc = RC_ADDR(0x00021b80u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00021b84u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001fc50u);
    return;

L_21B84:
    /* 00021b84   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00021b84u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_21B88:
    /* 00021b88   2  movea.l (A7)+,A2 */
    c->pc = RC_ADDR(0x00021b88u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_21B8A:
    /* 00021b8a   2  unlk A5 */
    c->pc = RC_ADDR(0x00021b8au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_21B8C:
    /* 00021b8c   2  rts */
    c->pc = RC_ADDR(0x00021b8cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
