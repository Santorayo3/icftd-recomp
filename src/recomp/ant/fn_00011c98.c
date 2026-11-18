/* fn_00011c98 - 270 byte(s), 73 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00011c98(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00011c98u): goto L_11C98;
    case RC_ADDR(0x00011c9cu): goto L_11C9C;
    case RC_ADDR(0x00011ca0u): goto L_11CA0;
    case RC_ADDR(0x00011ca4u): goto L_11CA4;
    case RC_ADDR(0x00011cacu): goto L_11CAC;
    case RC_ADDR(0x00011caeu): goto L_11CAE;
    case RC_ADDR(0x00011cb2u): goto L_11CB2;
    case RC_ADDR(0x00011cb6u): goto L_11CB6;
    case RC_ADDR(0x00011cbau): goto L_11CBA;
    case RC_ADDR(0x00011cbeu): goto L_11CBE;
    case RC_ADDR(0x00011cc2u): goto L_11CC2;
    case RC_ADDR(0x00011cc6u): goto L_11CC6;
    case RC_ADDR(0x00011ccau): goto L_11CCA;
    case RC_ADDR(0x00011cceu): goto L_11CCE;
    case RC_ADDR(0x00011cd2u): goto L_11CD2;
    case RC_ADDR(0x00011cd6u): goto L_11CD6;
    case RC_ADDR(0x00011cdau): goto L_11CDA;
    case RC_ADDR(0x00011cdeu): goto L_11CDE;
    case RC_ADDR(0x00011ce2u): goto L_11CE2;
    case RC_ADDR(0x00011ce6u): goto L_11CE6;
    case RC_ADDR(0x00011ceau): goto L_11CEA;
    case RC_ADDR(0x00011ceeu): goto L_11CEE;
    case RC_ADDR(0x00011cf4u): goto L_11CF4;
    case RC_ADDR(0x00011cf8u): goto L_11CF8;
    case RC_ADDR(0x00011cfcu): goto L_11CFC;
    case RC_ADDR(0x00011d00u): goto L_11D00;
    case RC_ADDR(0x00011d04u): goto L_11D04;
    case RC_ADDR(0x00011d06u): goto L_11D06;
    case RC_ADDR(0x00011d08u): goto L_11D08;
    case RC_ADDR(0x00011d0au): goto L_11D0A;
    case RC_ADDR(0x00011d0cu): goto L_11D0C;
    case RC_ADDR(0x00011d10u): goto L_11D10;
    case RC_ADDR(0x00011d14u): goto L_11D14;
    case RC_ADDR(0x00011d18u): goto L_11D18;
    case RC_ADDR(0x00011d1au): goto L_11D1A;
    case RC_ADDR(0x00011d1cu): goto L_11D1C;
    case RC_ADDR(0x00011d1eu): goto L_11D1E;
    case RC_ADDR(0x00011d20u): goto L_11D20;
    case RC_ADDR(0x00011d22u): goto L_11D22;
    case RC_ADDR(0x00011d26u): goto L_11D26;
    case RC_ADDR(0x00011d2au): goto L_11D2A;
    case RC_ADDR(0x00011d2eu): goto L_11D2E;
    case RC_ADDR(0x00011d30u): goto L_11D30;
    case RC_ADDR(0x00011d34u): goto L_11D34;
    case RC_ADDR(0x00011d36u): goto L_11D36;
    case RC_ADDR(0x00011d3au): goto L_11D3A;
    case RC_ADDR(0x00011d3eu): goto L_11D3E;
    case RC_ADDR(0x00011d42u): goto L_11D42;
    case RC_ADDR(0x00011d46u): goto L_11D46;
    case RC_ADDR(0x00011d4au): goto L_11D4A;
    case RC_ADDR(0x00011d4eu): goto L_11D4E;
    case RC_ADDR(0x00011d52u): goto L_11D52;
    case RC_ADDR(0x00011d56u): goto L_11D56;
    case RC_ADDR(0x00011d5au): goto L_11D5A;
    case RC_ADDR(0x00011d5eu): goto L_11D5E;
    case RC_ADDR(0x00011d62u): goto L_11D62;
    case RC_ADDR(0x00011d66u): goto L_11D66;
    case RC_ADDR(0x00011d6au): goto L_11D6A;
    case RC_ADDR(0x00011d6eu): goto L_11D6E;
    case RC_ADDR(0x00011d72u): goto L_11D72;
    case RC_ADDR(0x00011d76u): goto L_11D76;
    case RC_ADDR(0x00011d7au): goto L_11D7A;
    case RC_ADDR(0x00011d7eu): goto L_11D7E;
    case RC_ADDR(0x00011d82u): goto L_11D82;
    case RC_ADDR(0x00011d86u): goto L_11D86;
    case RC_ADDR(0x00011d8au): goto L_11D8A;
    case RC_ADDR(0x00011d8eu): goto L_11D8E;
    case RC_ADDR(0x00011d92u): goto L_11D92;
    case RC_ADDR(0x00011d96u): goto L_11D96;
    case RC_ADDR(0x00011d9au): goto L_11D9A;
    case RC_ADDR(0x00011d9eu): goto L_11D9E;
    case RC_ADDR(0x00011da0u): goto L_11DA0;
    case RC_ADDR(0x00011da2u): goto L_11DA2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_11C98:
    /* 00011c98   4  link.w A5,#ffffffee */
    c->pc = RC_ADDR(0x00011c98u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x12u;

L_11C9C:
    /* 00011c9c   4  clr.l (fffffff0,A5) */
    c->pc = RC_ADDR(0x00011c9cu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x10u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_11CA0:
    /* 00011ca0   4  addq.l #1,(fffffff0,A5) */
    c->pc = RC_ADDR(0x00011ca0u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x10u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_11CA4:
    /* 00011ca4   8  cmpi.l #c350,(fffffff0,A5) */
    c->pc = RC_ADDR(0x00011ca4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    rc_cmp(c, RC_L, t0, 0x0000c350u);

L_11CAC:
    /* 00011cac   2  blt 00011ca0 */
    c->pc = RC_ADDR(0x00011cacu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_11CA0; }

L_11CAE:
    /* 00011cae   4  jsr (ffff801a,A4) */
    c->pc = RC_ADDR(0x00011caeu);
    rc_step(c, m, 18);
    /* vector 4 */
    rc_push32(c, m, RC_ADDR(0x00011cb2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b10u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00000b9eu);
    return;

L_11CB2:
    /* 00011cb2   4  move.w #4,-(A7) */
    c->pc = RC_ADDR(0x00011cb2u);
    rc_step(c, m, 12);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_11CB6:
    /* 00011cb6   4  pea (0000005f).l */
    c->pc = RC_ADDR(0x00011cb6u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000005fu);

L_11CBA:
    /* 00011cba   4  pea (00011da6) */
    c->pc = RC_ADDR(0x00011cbau);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00011da6u));

L_11CBE:
    /* 00011cbe   4  jsr (ffff8026,A4) */
    c->pc = RC_ADDR(0x00011cbeu);
    rc_step(c, m, 18);
    /* vector 6 */
    rc_push32(c, m, RC_ADDR(0x00011cc2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b1cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00000ce4u);
    return;

L_11CC2:
    /* 00011cc2   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00011cc2u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_11CC6:
    /* 00011cc6   4  move.w #4,-(A7) */
    c->pc = RC_ADDR(0x00011cc6u);
    rc_step(c, m, 12);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_11CCA:
    /* 00011cca   4  pea (00000069).l */
    c->pc = RC_ADDR(0x00011ccau);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000069u);

L_11CCE:
    /* 00011cce   4  pea (00011dce) */
    c->pc = RC_ADDR(0x00011cceu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00011dceu));

L_11CD2:
    /* 00011cd2   4  jsr (ffff8026,A4) */
    c->pc = RC_ADDR(0x00011cd2u);
    rc_step(c, m, 18);
    /* vector 6 */
    rc_push32(c, m, RC_ADDR(0x00011cd6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b1cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00000ce4u);
    return;

L_11CD6:
    /* 00011cd6   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00011cd6u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_11CDA:
    /* 00011cda   4  move.w #4,-(A7) */
    c->pc = RC_ADDR(0x00011cdau);
    rc_step(c, m, 12);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_11CDE:
    /* 00011cde   4  pea (00000073).l */
    c->pc = RC_ADDR(0x00011cdeu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000073u);

L_11CE2:
    /* 00011ce2   4  pea (00011dfe) */
    c->pc = RC_ADDR(0x00011ce2u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00011dfeu));

L_11CE6:
    /* 00011ce6   4  jsr (ffff8026,A4) */
    c->pc = RC_ADDR(0x00011ce6u);
    rc_step(c, m, 18);
    /* vector 6 */
    rc_push32(c, m, RC_ADDR(0x00011ceau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b1cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00000ce4u);
    return;

L_11CEA:
    /* 00011cea   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00011ceau);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_11CEE:
    /* 00011cee   6  move.w #1,(ffffb24e,A4) */
    c->pc = RC_ADDR(0x00011ceeu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x4db2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11CF4:
    /* 00011cf4   4  jsr (00011a52) */
    c->pc = RC_ADDR(0x00011cf4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00011cf8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00011a52u);
    return;

L_11CF8:
    /* 00011cf8   4  move.w D0,(ffffffee,A5) */
    c->pc = RC_ADDR(0x00011cf8u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11CFC:
    /* 00011cfc   4  jsr (ffff8020,A4) */
    c->pc = RC_ADDR(0x00011cfcu);
    rc_step(c, m, 18);
    /* vector 5 */
    rc_push32(c, m, RC_ADDR(0x00011d00u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b16u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00000c80u);
    return;

L_11D00:
    /* 00011d00   4  tst.w (ffffffee,A5) */
    c->pc = RC_ADDR(0x00011d00u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_set_nzvc(c, t0, RC_W);

L_11D04:
    /* 00011d04   2  bne 00011d0c */
    c->pc = RC_ADDR(0x00011d04u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_11D0C;

L_11D06:
    /* 00011d06   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00011d06u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_11D08:
    /* 00011d08   2  unlk A5 */
    c->pc = RC_ADDR(0x00011d08u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_11D0A:
    /* 00011d0a   2  rts */
    c->pc = RC_ADDR(0x00011d0au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_11D0C:
    /* 00011d0c   4  move.l (ffffa430,A4),-(A7) */
    c->pc = RC_ADDR(0x00011d0cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5bd0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_11D10:
    /* 00011d10   4  pea (00011e2f) */
    c->pc = RC_ADDR(0x00011d10u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00011e2fu));

L_11D14:
    /* 00011d14   4  jsr (ffff8014,A4) */
    c->pc = RC_ADDR(0x00011d14u);
    rc_step(c, m, 18);
    /* vector 3 */
    rc_push32(c, m, RC_ADDR(0x00011d18u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b0au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000008a4u);
    return;

L_11D18:
    /* 00011d18   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00011d18u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_11D1A:
    /* 00011d1a   2  tst.w D0 */
    c->pc = RC_ADDR(0x00011d1au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_11D1C:
    /* 00011d1c   2  bne 00011d22 */
    c->pc = RC_ADDR(0x00011d1cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_11D22;

L_11D1E:
    /* 00011d1e   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00011d1eu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_11D20:
    /* 00011d20   2  bra 00011d08 */
    c->pc = RC_ADDR(0x00011d20u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_11D08;

L_11D22:
    /* 00011d22   4  pea (000003ee).l */
    c->pc = RC_ADDR(0x00011d22u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000003eeu);

L_11D26:
    /* 00011d26   4  move.l (ffffa430,A4),-(A7) */
    c->pc = RC_ADDR(0x00011d26u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5bd0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_11D2A:
    /* 00011d2a   4  jsr (ffff82b4,A4) */
    c->pc = RC_ADDR(0x00011d2au);
    rc_step(c, m, 18);
    /* vector 115 */
    rc_push32(c, m, RC_ADDR(0x00011d2eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023daau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022518u);
    return;

L_11D2E:
    /* 00011d2e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00011d2eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_11D30:
    /* 00011d30   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00011d30u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_11D34:
    /* 00011d34   2  beq 00011da0 */
    c->pc = RC_ADDR(0x00011d34u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_11DA0;

L_11D36:
    /* 00011d36   4  lea (ffff83da,A4),A0 */
    c->pc = RC_ADDR(0x00011d36u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7c26u);

L_11D3A:
    /* 00011d3a   4  move.l A0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00011d3au);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_11D3E:
    /* 00011d3e   4  lea (ffff849c,A4),A0 */
    c->pc = RC_ADDR(0x00011d3eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7b64u);

L_11D42:
    /* 00011d42   4  move.l A0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x00011d42u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_11D46:
    /* 00011d46   4  movea.l (fffffff4,A5),A0 */
    c->pc = RC_ADDR(0x00011d46u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_11D4A:
    /* 00011d4a   4  suba.l (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x00011d4au);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] -= t0;

L_11D4E:
    /* 00011d4e   4  move.l A0,(fffffff0,A5) */
    c->pc = RC_ADDR(0x00011d4eu);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_11D52:
    /* 00011d52   4  move.l (fffffff0,A5),-(A7) */
    c->pc = RC_ADDR(0x00011d52u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_11D56:
    /* 00011d56   4  move.l (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x00011d56u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_11D5A:
    /* 00011d5a   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00011d5au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_11D5E:
    /* 00011d5e   4  jsr (ffff834a,A4) */
    c->pc = RC_ADDR(0x00011d5eu);
    rc_step(c, m, 18);
    /* vector 140 */
    rc_push32(c, m, RC_ADDR(0x00011d62u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e40u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023548u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0002354cu);
    return;

L_11D62:
    /* 00011d62   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00011d62u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_11D66:
    /* 00011d66   4  lea (ffffd59e,A4),A0 */
    c->pc = RC_ADDR(0x00011d66u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x2a62u);

L_11D6A:
    /* 00011d6a   4  move.l A0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00011d6au);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_11D6E:
    /* 00011d6e   4  lea (7b2,A4),A0 */
    c->pc = RC_ADDR(0x00011d6eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x7b2u);

L_11D72:
    /* 00011d72   4  move.l A0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x00011d72u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_11D76:
    /* 00011d76   4  movea.l (fffffff4,A5),A0 */
    c->pc = RC_ADDR(0x00011d76u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_11D7A:
    /* 00011d7a   4  suba.l (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x00011d7au);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] -= t0;

L_11D7E:
    /* 00011d7e   4  move.l A0,(fffffff0,A5) */
    c->pc = RC_ADDR(0x00011d7eu);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_11D82:
    /* 00011d82   4  move.l (fffffff0,A5),-(A7) */
    c->pc = RC_ADDR(0x00011d82u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_11D86:
    /* 00011d86   4  move.l (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x00011d86u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_11D8A:
    /* 00011d8a   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00011d8au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_11D8E:
    /* 00011d8e   4  jsr (ffff834a,A4) */
    c->pc = RC_ADDR(0x00011d8eu);
    rc_step(c, m, 18);
    /* vector 140 */
    rc_push32(c, m, RC_ADDR(0x00011d92u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e40u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023548u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0002354cu);
    return;

L_11D92:
    /* 00011d92   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00011d92u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_11D96:
    /* 00011d96   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00011d96u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_11D9A:
    /* 00011d9a   4  jsr (ffff82ba,A4) */
    c->pc = RC_ADDR(0x00011d9au);
    rc_step(c, m, 18);
    /* vector 116 */
    rc_push32(c, m, RC_ADDR(0x00011d9eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023db0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022532u);
    return;

L_11D9E:
    /* 00011d9e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00011d9eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_11DA0:
    /* 00011da0   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00011da0u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_11DA2:
    /* 00011da2   4  bra 00011d08 */
    c->pc = RC_ADDR(0x00011da2u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_11D08;

}
