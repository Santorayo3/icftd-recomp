/* fn_000219fe - 166 byte(s), 50 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000219fe(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000219feu): goto L_219FE;
    case RC_ADDR(0x00021a02u): goto L_21A02;
    case RC_ADDR(0x00021a06u): goto L_21A06;
    case RC_ADDR(0x00021a0au): goto L_21A0A;
    case RC_ADDR(0x00021a0eu): goto L_21A0E;
    case RC_ADDR(0x00021a10u): goto L_21A10;
    case RC_ADDR(0x00021a14u): goto L_21A14;
    case RC_ADDR(0x00021a18u): goto L_21A18;
    case RC_ADDR(0x00021a1au): goto L_21A1A;
    case RC_ADDR(0x00021a1eu): goto L_21A1E;
    case RC_ADDR(0x00021a20u): goto L_21A20;
    case RC_ADDR(0x00021a26u): goto L_21A26;
    case RC_ADDR(0x00021a2cu): goto L_21A2C;
    case RC_ADDR(0x00021a30u): goto L_21A30;
    case RC_ADDR(0x00021a34u): goto L_21A34;
    case RC_ADDR(0x00021a36u): goto L_21A36;
    case RC_ADDR(0x00021a3au): goto L_21A3A;
    case RC_ADDR(0x00021a3eu): goto L_21A3E;
    case RC_ADDR(0x00021a42u): goto L_21A42;
    case RC_ADDR(0x00021a44u): goto L_21A44;
    case RC_ADDR(0x00021a48u): goto L_21A48;
    case RC_ADDR(0x00021a4cu): goto L_21A4C;
    case RC_ADDR(0x00021a50u): goto L_21A50;
    case RC_ADDR(0x00021a52u): goto L_21A52;
    case RC_ADDR(0x00021a56u): goto L_21A56;
    case RC_ADDR(0x00021a5au): goto L_21A5A;
    case RC_ADDR(0x00021a5eu): goto L_21A5E;
    case RC_ADDR(0x00021a62u): goto L_21A62;
    case RC_ADDR(0x00021a64u): goto L_21A64;
    case RC_ADDR(0x00021a68u): goto L_21A68;
    case RC_ADDR(0x00021a6au): goto L_21A6A;
    case RC_ADDR(0x00021a6cu): goto L_21A6C;
    case RC_ADDR(0x00021a70u): goto L_21A70;
    case RC_ADDR(0x00021a72u): goto L_21A72;
    case RC_ADDR(0x00021a74u): goto L_21A74;
    case RC_ADDR(0x00021a78u): goto L_21A78;
    case RC_ADDR(0x00021a7cu): goto L_21A7C;
    case RC_ADDR(0x00021a80u): goto L_21A80;
    case RC_ADDR(0x00021a82u): goto L_21A82;
    case RC_ADDR(0x00021a86u): goto L_21A86;
    case RC_ADDR(0x00021a8au): goto L_21A8A;
    case RC_ADDR(0x00021a8eu): goto L_21A8E;
    case RC_ADDR(0x00021a90u): goto L_21A90;
    case RC_ADDR(0x00021a94u): goto L_21A94;
    case RC_ADDR(0x00021a96u): goto L_21A96;
    case RC_ADDR(0x00021a98u): goto L_21A98;
    case RC_ADDR(0x00021a9cu): goto L_21A9C;
    case RC_ADDR(0x00021a9eu): goto L_21A9E;
    case RC_ADDR(0x00021aa0u): goto L_21AA0;
    case RC_ADDR(0x00021aa2u): goto L_21AA2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_219FE:
    /* 000219fe   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x000219feu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_21A02:
    /* 00021a02   4  movem.l { D4 D5 },-(SP) */
    c->pc = RC_ADDR(0x00021a02u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    c->a[7] = t3;

L_21A06:
    /* 00021a06   4  movea.l (8,A5),A2 */
    c->pc = RC_ADDR(0x00021a06u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[2] = t0;

L_21A0A:
    /* 00021a0a   4  tst.w (28,A2) */
    c->pc = RC_ADDR(0x00021a0au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x28u));
    rc_set_nzvc(c, t0, RC_W);

L_21A0E:
    /* 00021a0e   2  ble 00021a14 */
    c->pc = RC_ADDR(0x00021a0eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_21A14;

L_21A10:
    /* 00021a10   4  subq.w #1,(28,A2) */
    c->pc = RC_ADDR(0x00021a10u);
    rc_step(c, m, 16);
    t3 = (c->a[2] + 0x28u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_21A14:
    /* 00021a14   4  tst.w (28,A2) */
    c->pc = RC_ADDR(0x00021a14u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x28u));
    rc_set_nzvc(c, t0, RC_W);

L_21A18:
    /* 00021a18   2  ble 00021a20 */
    c->pc = RC_ADDR(0x00021a18u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_21A20;

L_21A1A:
    /* 00021a1a   4  clr.w (3506,A4) */
    c->pc = RC_ADDR(0x00021a1au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x3506u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_21A1E:
    /* 00021a1e   2  bra 00021a26 */
    c->pc = RC_ADDR(0x00021a1eu);
    rc_step(c, m, 10);
    goto L_21A26;

L_21A20:
    /* 00021a20   6  move.w #1,(3506,A4) */
    c->pc = RC_ADDR(0x00021a20u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x3506u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_21A26:
    /* 00021a26   6  move.l (4,A2),(fffffffc,A5) */
    c->pc = RC_ADDR(0x00021a26u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[2] + 0x4u));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_21A2C:
    /* 00021a2c   4  move.l A2,(838,A4) */
    c->pc = RC_ADDR(0x00021a2cu);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x838u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_21A30:
    /* 00021a30   4  tst.w (3506,A4) */
    c->pc = RC_ADDR(0x00021a30u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3506u));
    rc_set_nzvc(c, t0, RC_W);

L_21A34:
    /* 00021a34   2  beq 00021a82 */
    c->pc = RC_ADDR(0x00021a34u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_21A82;

L_21A36:
    /* 00021a36   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00021a36u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_21A3A:
    /* 00021a3a   4  move.w (2a,A2),D0 */
    c->pc = RC_ADDR(0x00021a3au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x2au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_21A3E:
    /* 00021a3e   4  cmp.w (c,A0),D0 */
    c->pc = RC_ADDR(0x00021a3eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0xcu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_21A42:
    /* 00021a42   2  bge 00021a82 */
    c->pc = RC_ADDR(0x00021a42u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_21A82;

L_21A44:
    /* 00021a44   4  move.w (2a,A2),D0 */
    c->pc = RC_ADDR(0x00021a44u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x2au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_21A48:
    /* 00021a48   4  muls.w #12,D0 */
    c->pc = RC_ADDR(0x00021a48u);
    rc_step(c, m, 42);
    t0 = 0x00000012u;
    rc_muls(c, 0, t0);

L_21A4C:
    /* 00021a4c   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00021a4cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_21A50:
    /* 00021a50   2  movea.l D0,A3 */
    c->pc = RC_ADDR(0x00021a50u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[3] = t0;

L_21A52:
    /* 00021a52   4  adda.l (1e,A0),A3 */
    c->pc = RC_ADDR(0x00021a52u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[0] + 0x1eu));
    c->a[3] += t0;

L_21A56:
    /* 00021a56   4  move.l (e,A3),-(A7) */
    c->pc = RC_ADDR(0x00021a56u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[3] + 0xeu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21A5A:
    /* 00021a5a   4  move.l (a,A3),-(A7) */
    c->pc = RC_ADDR(0x00021a5au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[3] + 0xau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21A5E:
    /* 00021a5e   4  move.l (6,A3),-(A7) */
    c->pc = RC_ADDR(0x00021a5eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[3] + 0x6u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21A62:
    /* 00021a62   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00021a62u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_21A64:
    /* 00021a64   4  move.b (4,A3),D0 */
    c->pc = RC_ADDR(0x00021a64u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[3] + 0x4u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_21A68:
    /* 00021a68   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00021a68u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_21A6A:
    /* 00021a6a   2  move.l (A3),-(A7) */
    c->pc = RC_ADDR(0x00021a6au);
    rc_step(c, m, 20);
    t0 = rc_rd32(c, m, c->a[3]);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21A6C:
    /* 00021a6c   4  move.b (5,A3),D0 */
    c->pc = RC_ADDR(0x00021a6cu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[3] + 0x5u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_21A70:
    /* 00021a70   2  ext.w D0 */
    c->pc = RC_ADDR(0x00021a70u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_21A72:
    /* 00021a72   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00021a72u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_21A74:
    /* 00021a74   4  jsr (00021350) */
    c->pc = RC_ADDR(0x00021a74u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00021a78u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021350u);
    return;

L_21A78:
    /* 00021a78   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00021a78u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_21A7C:
    /* 00021a7c   4  addq.w #1,(2a,A2) */
    c->pc = RC_ADDR(0x00021a7cu);
    rc_step(c, m, 16);
    t3 = (c->a[2] + 0x2au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_21A80:
    /* 00021a80   2  bra 00021a30 */
    c->pc = RC_ADDR(0x00021a80u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_21A30;

L_21A82:
    /* 00021a82   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00021a82u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_21A86:
    /* 00021a86   4  move.w (2a,A2),D0 */
    c->pc = RC_ADDR(0x00021a86u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x2au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_21A8A:
    /* 00021a8a   4  cmp.w (c,A0),D0 */
    c->pc = RC_ADDR(0x00021a8au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0xcu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_21A8E:
    /* 00021a8e   2  bne 00021aa0 */
    c->pc = RC_ADDR(0x00021a8eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_21AA0;

L_21A90:
    /* 00021a90   4  tst.w (28,A2) */
    c->pc = RC_ADDR(0x00021a90u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x28u));
    rc_set_nzvc(c, t0, RC_W);

L_21A94:
    /* 00021a94   2  bne 00021aa0 */
    c->pc = RC_ADDR(0x00021a94u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_21AA0;

L_21A96:
    /* 00021a96   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00021a96u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_21A98:
    /* 00021a98   4  movem.l (SP)+,{ A2 A3 } */
    c->pc = RC_ADDR(0x00021a98u);
    rc_step(c, m, 12);
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

L_21A9C:
    /* 00021a9c   2  unlk A5 */
    c->pc = RC_ADDR(0x00021a9cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_21A9E:
    /* 00021a9e   2  rts */
    c->pc = RC_ADDR(0x00021a9eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_21AA0:
    /* 00021aa0   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00021aa0u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_21AA2:
    /* 00021aa2   2  bra 00021a98 */
    c->pc = RC_ADDR(0x00021aa2u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_21A98;

}
