/* fn_0001ff18 - 182 byte(s), 65 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001ff18(cpu_t *c, rt_machine *m)
{
    u32 t0, t3, t4;

    switch (c->pc)
    {
    case 0x0001ff18u: goto L_1FF18;
    case 0x0001ff1cu: goto L_1FF1C;
    case 0x0001ff20u: goto L_1FF20;
    case 0x0001ff24u: goto L_1FF24;
    case 0x0001ff28u: goto L_1FF28;
    case 0x0001ff2au: goto L_1FF2A;
    case 0x0001ff2cu: goto L_1FF2C;
    case 0x0001ff2eu: goto L_1FF2E;
    case 0x0001ff30u: goto L_1FF30;
    case 0x0001ff32u: goto L_1FF32;
    case 0x0001ff36u: goto L_1FF36;
    case 0x0001ff38u: goto L_1FF38;
    case 0x0001ff3au: goto L_1FF3A;
    case 0x0001ff3eu: goto L_1FF3E;
    case 0x0001ff44u: goto L_1FF44;
    case 0x0001ff46u: goto L_1FF46;
    case 0x0001ff4au: goto L_1FF4A;
    case 0x0001ff50u: goto L_1FF50;
    case 0x0001ff52u: goto L_1FF52;
    case 0x0001ff54u: goto L_1FF54;
    case 0x0001ff56u: goto L_1FF56;
    case 0x0001ff5au: goto L_1FF5A;
    case 0x0001ff5cu: goto L_1FF5C;
    case 0x0001ff5eu: goto L_1FF5E;
    case 0x0001ff60u: goto L_1FF60;
    case 0x0001ff62u: goto L_1FF62;
    case 0x0001ff64u: goto L_1FF64;
    case 0x0001ff66u: goto L_1FF66;
    case 0x0001ff6au: goto L_1FF6A;
    case 0x0001ff6cu: goto L_1FF6C;
    case 0x0001ff70u: goto L_1FF70;
    case 0x0001ff72u: goto L_1FF72;
    case 0x0001ff74u: goto L_1FF74;
    case 0x0001ff76u: goto L_1FF76;
    case 0x0001ff78u: goto L_1FF78;
    case 0x0001ff7au: goto L_1FF7A;
    case 0x0001ff7cu: goto L_1FF7C;
    case 0x0001ff80u: goto L_1FF80;
    case 0x0001ff86u: goto L_1FF86;
    case 0x0001ff88u: goto L_1FF88;
    case 0x0001ff8cu: goto L_1FF8C;
    case 0x0001ff8eu: goto L_1FF8E;
    case 0x0001ff92u: goto L_1FF92;
    case 0x0001ff94u: goto L_1FF94;
    case 0x0001ff96u: goto L_1FF96;
    case 0x0001ff98u: goto L_1FF98;
    case 0x0001ff9eu: goto L_1FF9E;
    case 0x0001ffa2u: goto L_1FFA2;
    case 0x0001ffa4u: goto L_1FFA4;
    case 0x0001ffa6u: goto L_1FFA6;
    case 0x0001ffa8u: goto L_1FFA8;
    case 0x0001ffacu: goto L_1FFAC;
    case 0x0001ffaeu: goto L_1FFAE;
    case 0x0001ffb0u: goto L_1FFB0;
    case 0x0001ffb2u: goto L_1FFB2;
    case 0x0001ffb4u: goto L_1FFB4;
    case 0x0001ffb8u: goto L_1FFB8;
    case 0x0001ffbau: goto L_1FFBA;
    case 0x0001ffbcu: goto L_1FFBC;
    case 0x0001ffbeu: goto L_1FFBE;
    case 0x0001ffc0u: goto L_1FFC0;
    case 0x0001ffc4u: goto L_1FFC4;
    case 0x0001ffc6u: goto L_1FFC6;
    case 0x0001ffc8u: goto L_1FFC8;
    case 0x0001ffcau: goto L_1FFCA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1FF18:
    /* 0001ff18   4  link.w A5,#0 */
    c->pc = 0x0001ff18u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1FF1C:
    /* 0001ff1c   4  movem.l { D4 D5 },-(SP) */
    c->pc = 0x0001ff1cu;
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    c->a[7] = t3;

L_1FF20:
    /* 0001ff20   4  movea.l (8,A5),A2 */
    c->pc = 0x0001ff20u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[2] = t0;

L_1FF24:
    /* 0001ff24   4  movea.l (c,A5),A3 */
    c->pc = 0x0001ff24u;
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[3] = t0;

L_1FF28:
    /* 0001ff28   2  move.l A2,D0 */
    c->pc = 0x0001ff28u;
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FF2A:
    /* 0001ff2a   2  beq 0001ff30 */
    c->pc = 0x0001ff2au;
    if (rc_cond(c, 7)) goto L_1FF30;

L_1FF2C:
    /* 0001ff2c   2  move.l A3,D0 */
    c->pc = 0x0001ff2cu;
    t0 = rc_a_get(c, 3, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FF2E:
    /* 0001ff2e   2  bne 0001ff3a */
    c->pc = 0x0001ff2eu;
    if (rc_cond(c, 6)) goto L_1FF3A;

L_1FF30:
    /* 0001ff30   2  moveq #0,D0 */
    c->pc = 0x0001ff30u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1FF32:
    /* 0001ff32   4  movem.l (SP)+,{ A2 A3 } */
    c->pc = 0x0001ff32u;
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_1FF36:
    /* 0001ff36   2  unlk A5 */
    c->pc = 0x0001ff36u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1FF38:
    /* 0001ff38   2  rts */
    c->pc = 0x0001ff38u;
    rc_ret(c, m);
    return;

L_1FF3A:
    /* 0001ff3a   4  movea.l (4,A2),A0 */
    c->pc = 0x0001ff3au;
    t0 = rc_rd32(c, m, (c->a[2] + 0x4u));
    c->a[0] = t0;

L_1FF3E:
    /* 0001ff3e   6  btst #0,(b,A0) */
    c->pc = 0x0001ff3eu;
    t4 = 0x00000000u;
    t3 = (c->a[0] + 0xbu);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_1FF44:
    /* 0001ff44   2  beq 0001ff7c */
    c->pc = 0x0001ff44u;
    if (rc_cond(c, 7)) goto L_1FF7C;

L_1FF46:
    /* 0001ff46   4  movea.l (4,A3),A0 */
    c->pc = 0x0001ff46u;
    t0 = rc_rd32(c, m, (c->a[3] + 0x4u));
    c->a[0] = t0;

L_1FF4A:
    /* 0001ff4a   6  btst #0,(b,A0) */
    c->pc = 0x0001ff4au;
    t4 = 0x00000000u;
    t3 = (c->a[0] + 0xbu);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_1FF50:
    /* 0001ff50   2  beq 0001ff66 */
    c->pc = 0x0001ff50u;
    if (rc_cond(c, 7)) goto L_1FF66;

L_1FF52:
    /* 0001ff52   2  move.l A3,-(A7) */
    c->pc = 0x0001ff52u;
    t0 = rc_a_get(c, 3, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FF54:
    /* 0001ff54   2  move.l A2,-(A7) */
    c->pc = 0x0001ff54u;
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FF56:
    /* 0001ff56   4  jsr (0001fe4e) */
    c->pc = 0x0001ff56u;
    rc_push32(c, m, 0x0001ff5au);
    rc_depth++;
    c->pc = 0x0001fe4eu;
    return;

L_1FF5A:
    /* 0001ff5a   2  addq.w #8,A7 */
    c->pc = 0x0001ff5au;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1FF5C:
    /* 0001ff5c   2  tst.w D0 */
    c->pc = 0x0001ff5cu;
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1FF5E:
    /* 0001ff5e   2  beq 0001ff64 */
    c->pc = 0x0001ff5eu;
    if (rc_cond(c, 7)) goto L_1FF64;

L_1FF60:
    /* 0001ff60   2  moveq #1,D0 */
    c->pc = 0x0001ff60u;
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1FF62:
    /* 0001ff62   2  bra 0001ff32 */
    c->pc = 0x0001ff62u;
    rc_tick();
    goto L_1FF32;

L_1FF64:
    /* 0001ff64   2  bra 0001ff7a */
    c->pc = 0x0001ff64u;
    goto L_1FF7A;

L_1FF66:
    /* 0001ff66   4  move.l (2c,A3),-(A7) */
    c->pc = 0x0001ff66u;
    t0 = rc_rd32(c, m, (c->a[3] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FF6A:
    /* 0001ff6a   2  move.l A2,-(A7) */
    c->pc = 0x0001ff6au;
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FF6C:
    /* 0001ff6c   4  jsr (0001fec4) */
    c->pc = 0x0001ff6cu;
    rc_push32(c, m, 0x0001ff70u);
    rc_depth++;
    c->pc = 0x0001fec4u;
    return;

L_1FF70:
    /* 0001ff70   2  addq.w #8,A7 */
    c->pc = 0x0001ff70u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1FF72:
    /* 0001ff72   2  tst.w D0 */
    c->pc = 0x0001ff72u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1FF74:
    /* 0001ff74   2  beq 0001ff7a */
    c->pc = 0x0001ff74u;
    if (rc_cond(c, 7)) goto L_1FF7A;

L_1FF76:
    /* 0001ff76   2  moveq #1,D0 */
    c->pc = 0x0001ff76u;
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1FF78:
    /* 0001ff78   2  bra 0001ff32 */
    c->pc = 0x0001ff78u;
    rc_tick();
    goto L_1FF32;

L_1FF7A:
    /* 0001ff7a   2  bra 0001ffc8 */
    c->pc = 0x0001ff7au;
    goto L_1FFC8;

L_1FF7C:
    /* 0001ff7c   4  movea.l (4,A3),A0 */
    c->pc = 0x0001ff7cu;
    t0 = rc_rd32(c, m, (c->a[3] + 0x4u));
    c->a[0] = t0;

L_1FF80:
    /* 0001ff80   6  btst #0,(b,A0) */
    c->pc = 0x0001ff80u;
    t4 = 0x00000000u;
    t3 = (c->a[0] + 0xbu);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_1FF86:
    /* 0001ff86   2  beq 0001ffa8 */
    c->pc = 0x0001ff86u;
    if (rc_cond(c, 7)) goto L_1FFA8;

L_1FF88:
    /* 0001ff88   4  move.l (2c,A2),-(A7) */
    c->pc = 0x0001ff88u;
    t0 = rc_rd32(c, m, (c->a[2] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FF8C:
    /* 0001ff8c   2  move.l A3,-(A7) */
    c->pc = 0x0001ff8cu;
    t0 = rc_a_get(c, 3, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FF8E:
    /* 0001ff8e   4  jsr (0001fec4) */
    c->pc = 0x0001ff8eu;
    rc_push32(c, m, 0x0001ff92u);
    rc_depth++;
    c->pc = 0x0001fec4u;
    return;

L_1FF92:
    /* 0001ff92   2  addq.w #8,A7 */
    c->pc = 0x0001ff92u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1FF94:
    /* 0001ff94   2  tst.w D0 */
    c->pc = 0x0001ff94u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1FF96:
    /* 0001ff96   2  beq 0001ffa6 */
    c->pc = 0x0001ff96u;
    if (rc_cond(c, 7)) goto L_1FFA6;

L_1FF98:
    /* 0001ff98   6  move.l (ffffcd1a,A4),(ffffcd16,A4) */
    c->pc = 0x0001ff98u;
    t0 = rc_rd32(c, m, (c->a[4] - 0x32e6u));
    rc_wr32(c, m, (c->a[4] - 0x32eau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FF9E:
    /* 0001ff9e   4  move.l A3,(ffffcd1a,A4) */
    c->pc = 0x0001ff9eu;
    t0 = rc_a_get(c, 3, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x32e6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FFA2:
    /* 0001ffa2   2  moveq #1,D0 */
    c->pc = 0x0001ffa2u;
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1FFA4:
    /* 0001ffa4   2  bra 0001ff32 */
    c->pc = 0x0001ffa4u;
    rc_tick();
    goto L_1FF32;

L_1FFA6:
    /* 0001ffa6   2  bra 0001ffc8 */
    c->pc = 0x0001ffa6u;
    goto L_1FFC8;

L_1FFA8:
    /* 0001ffa8   4  movea.l (2c,A2),A2 */
    c->pc = 0x0001ffa8u;
    t0 = rc_rd32(c, m, (c->a[2] + 0x2cu));
    c->a[2] = t0;

L_1FFAC:
    /* 0001ffac   2  move.l A2,D0 */
    c->pc = 0x0001ffacu;
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FFAE:
    /* 0001ffae   2  beq 0001ffc8 */
    c->pc = 0x0001ffaeu;
    if (rc_cond(c, 7)) goto L_1FFC8;

L_1FFB0:
    /* 0001ffb0   2  move.l A3,-(A7) */
    c->pc = 0x0001ffb0u;
    t0 = rc_a_get(c, 3, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FFB2:
    /* 0001ffb2   2  move.l A2,-(A7) */
    c->pc = 0x0001ffb2u;
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FFB4:
    /* 0001ffb4   4  jsr (0001ff18) */
    c->pc = 0x0001ffb4u;
    rc_push32(c, m, 0x0001ffb8u);
    rc_depth++;
    c->pc = 0x0001ff18u;
    return;

L_1FFB8:
    /* 0001ffb8   2  addq.w #8,A7 */
    c->pc = 0x0001ffb8u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1FFBA:
    /* 0001ffba   2  tst.w D0 */
    c->pc = 0x0001ffbau;
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1FFBC:
    /* 0001ffbc   2  beq 0001ffc4 */
    c->pc = 0x0001ffbcu;
    if (rc_cond(c, 7)) goto L_1FFC4;

L_1FFBE:
    /* 0001ffbe   2  moveq #1,D0 */
    c->pc = 0x0001ffbeu;
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1FFC0:
    /* 0001ffc0   4  bra 0001ff32 */
    c->pc = 0x0001ffc0u;
    rc_tick();
    goto L_1FF32;

L_1FFC4:
    /* 0001ffc4   2  movea.l (A2),A2 */
    c->pc = 0x0001ffc4u;
    t0 = rc_rd32(c, m, c->a[2]);
    c->a[2] = t0;

L_1FFC6:
    /* 0001ffc6   2  bra 0001ffac */
    c->pc = 0x0001ffc6u;
    rc_tick();
    goto L_1FFAC;

L_1FFC8:
    /* 0001ffc8   2  moveq #0,D0 */
    c->pc = 0x0001ffc8u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1FFCA:
    /* 0001ffca   4  bra 0001ff32 */
    c->pc = 0x0001ffcau;
    rc_tick();
    goto L_1FF32;

}
