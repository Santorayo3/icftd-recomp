/* fn_00001be6 - 160 byte(s), 51 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00001be6(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00001be6u): goto L_1BE6;
    case RC_ADDR(0x00001beau): goto L_1BEA;
    case RC_ADDR(0x00001beeu): goto L_1BEE;
    case RC_ADDR(0x00001bf0u): goto L_1BF0;
    case RC_ADDR(0x00001bf2u): goto L_1BF2;
    case RC_ADDR(0x00001bf4u): goto L_1BF4;
    case RC_ADDR(0x00001bf6u): goto L_1BF6;
    case RC_ADDR(0x00001bfau): goto L_1BFA;
    case RC_ADDR(0x00001bfcu): goto L_1BFC;
    case RC_ADDR(0x00001bfeu): goto L_1BFE;
    case RC_ADDR(0x00001c02u): goto L_1C02;
    case RC_ADDR(0x00001c06u): goto L_1C06;
    case RC_ADDR(0x00001c08u): goto L_1C08;
    case RC_ADDR(0x00001c0cu): goto L_1C0C;
    case RC_ADDR(0x00001c10u): goto L_1C10;
    case RC_ADDR(0x00001c14u): goto L_1C14;
    case RC_ADDR(0x00001c1au): goto L_1C1A;
    case RC_ADDR(0x00001c1eu): goto L_1C1E;
    case RC_ADDR(0x00001c22u): goto L_1C22;
    case RC_ADDR(0x00001c26u): goto L_1C26;
    case RC_ADDR(0x00001c28u): goto L_1C28;
    case RC_ADDR(0x00001c2au): goto L_1C2A;
    case RC_ADDR(0x00001c2eu): goto L_1C2E;
    case RC_ADDR(0x00001c30u): goto L_1C30;
    case RC_ADDR(0x00001c32u): goto L_1C32;
    case RC_ADDR(0x00001c36u): goto L_1C36;
    case RC_ADDR(0x00001c38u): goto L_1C38;
    case RC_ADDR(0x00001c3eu): goto L_1C3E;
    case RC_ADDR(0x00001c40u): goto L_1C40;
    case RC_ADDR(0x00001c44u): goto L_1C44;
    case RC_ADDR(0x00001c46u): goto L_1C46;
    case RC_ADDR(0x00001c48u): goto L_1C48;
    case RC_ADDR(0x00001c4au): goto L_1C4A;
    case RC_ADDR(0x00001c4eu): goto L_1C4E;
    case RC_ADDR(0x00001c50u): goto L_1C50;
    case RC_ADDR(0x00001c52u): goto L_1C52;
    case RC_ADDR(0x00001c54u): goto L_1C54;
    case RC_ADDR(0x00001c58u): goto L_1C58;
    case RC_ADDR(0x00001c5au): goto L_1C5A;
    case RC_ADDR(0x00001c5cu): goto L_1C5C;
    case RC_ADDR(0x00001c60u): goto L_1C60;
    case RC_ADDR(0x00001c62u): goto L_1C62;
    case RC_ADDR(0x00001c66u): goto L_1C66;
    case RC_ADDR(0x00001c6au): goto L_1C6A;
    case RC_ADDR(0x00001c6cu): goto L_1C6C;
    case RC_ADDR(0x00001c70u): goto L_1C70;
    case RC_ADDR(0x00001c76u): goto L_1C76;
    case RC_ADDR(0x00001c78u): goto L_1C78;
    case RC_ADDR(0x00001c7cu): goto L_1C7C;
    case RC_ADDR(0x00001c80u): goto L_1C80;
    case RC_ADDR(0x00001c82u): goto L_1C82;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1BE6:
    /* 00001be6   4  link.w A5,#ffffffee */
    c->pc = RC_ADDR(0x00001be6u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x12u;

L_1BEA:
    /* 00001bea   4  tst.l (8,A5) */
    c->pc = RC_ADDR(0x00001beau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_set_nzvc(c, t0, RC_L);

L_1BEE:
    /* 00001bee   2  bne 00001bf6 */
    c->pc = RC_ADDR(0x00001beeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1BF6;

L_1BF0:
    /* 00001bf0   2  moveq #ffffff9c,D0 */
    c->pc = RC_ADDR(0x00001bf0u);
    rc_step(c, m, 4);
    c->d[0] = 0xffffff9cu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1BF2:
    /* 00001bf2   2  unlk A5 */
    c->pc = RC_ADDR(0x00001bf2u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1BF4:
    /* 00001bf4   2  rts */
    c->pc = RC_ADDR(0x00001bf4u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_1BF6:
    /* 00001bf6   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00001bf6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1BFA:
    /* 00001bfa   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x00001bfau);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1BFC:
    /* 00001bfc   2  ext.w D0 */
    c->pc = RC_ADDR(0x00001bfcu);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_1BFE:
    /* 00001bfe   4  move.w D0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x00001bfeu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C02:
    /* 00001c02   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00001c02u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1C06:
    /* 00001c06   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00001c06u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1C08:
    /* 00001c08   4  move.b (27,A0),D0 */
    c->pc = RC_ADDR(0x00001c08u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x27u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1C0C:
    /* 00001c0c   4  move.w D0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00001c0cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C10:
    /* 00001c10   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00001c10u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1C14:
    /* 00001c14   6  move.l (28,A0),(ffffffee,A5) */
    c->pc = RC_ADDR(0x00001c14u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[0] + 0x28u));
    rc_wr32(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C1A:
    /* 00001c1a   4  clr.w (fffffff2,A5) */
    c->pc = RC_ADDR(0x00001c1au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0xeu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1C1E:
    /* 00001c1e   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00001c1eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C22:
    /* 00001c22   4  subq.w #1,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00001c22u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1C26:
    /* 00001c26   2  tst.w D0 */
    c->pc = RC_ADDR(0x00001c26u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1C28:
    /* 00001c28   2  beq 00001c78 */
    c->pc = RC_ADDR(0x00001c28u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1C78;

L_1C2A:
    /* 00001c2a   4  movea.l (ffffffee,A5),A0 */
    c->pc = RC_ADDR(0x00001c2au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x12u));
    c->a[0] = t0;

L_1C2E:
    /* 00001c2e   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00001c2eu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1C30:
    /* 00001c30   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x00001c30u);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1C32:
    /* 00001c32   4  cmp.w #ff,D0 */
    c->pc = RC_ADDR(0x00001c32u);
    rc_step(c, m, 8);
    t0 = 0x000000ffu;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1C36:
    /* 00001c36   2  bne 00001c40 */
    c->pc = RC_ADDR(0x00001c36u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1C40;

L_1C38:
    /* 00001c38   6  move.w #1,(ffffd6f2,A4) */
    c->pc = RC_ADDR(0x00001c38u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x290eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C3E:
    /* 00001c3e   2  bra 00001c6c */
    c->pc = RC_ADDR(0x00001c3eu);
    rc_step(c, m, 10);
    goto L_1C6C;

L_1C40:
    /* 00001c40   4  movea.l (ffffffee,A5),A0 */
    c->pc = RC_ADDR(0x00001c40u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x12u));
    c->a[0] = t0;

L_1C44:
    /* 00001c44   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00001c44u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1C46:
    /* 00001c46   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x00001c46u);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1C48:
    /* 00001c48   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00001c48u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C4A:
    /* 00001c4a   4  jsr (ffff808c,A4) */
    c->pc = RC_ADDR(0x00001c4au);
    rc_step(c, m, 18);
    /* vector 23 */
    rc_push32(c, m, RC_ADDR(0x00001c4eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b82u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000080a0u);
    return;

L_1C4E:
    /* 00001c4e   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00001c4eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1C50:
    /* 00001c50   2  tst.w D0 */
    c->pc = RC_ADDR(0x00001c50u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1C52:
    /* 00001c52   2  beq 00001c6c */
    c->pc = RC_ADDR(0x00001c52u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1C6C;

L_1C54:
    /* 00001c54   4  movea.l (ffffffee,A5),A0 */
    c->pc = RC_ADDR(0x00001c54u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x12u));
    c->a[0] = t0;

L_1C58:
    /* 00001c58   2  addq.l #2,A0 */
    c->pc = RC_ADDR(0x00001c58u);
    rc_step(c, m, 8);
    c->a[0] += 0x00000002u;

L_1C5A:
    /* 00001c5a   2  move.l A0,-(A7) */
    c->pc = RC_ADDR(0x00001c5au);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C5C:
    /* 00001c5c   4  jsr (00001a76) */
    c->pc = RC_ADDR(0x00001c5cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001c60u));
    rc_depth++;
    c->pc = RC_ADDR(0x00001a76u);
    return;

L_1C60:
    /* 00001c60   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00001c60u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1C62:
    /* 00001c62   4  move.w D0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x00001c62u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C66:
    /* 00001c66   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x00001c66u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C6A:
    /* 00001c6a   2  bra 00001bf2 */
    c->pc = RC_ADDR(0x00001c6au);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1BF2;

L_1C6C:
    /* 00001c6c   4  movea.l (ffffffee,A5),A0 */
    c->pc = RC_ADDR(0x00001c6cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x12u));
    c->a[0] = t0;

L_1C70:
    /* 00001c70   6  move.l (6,A0),(ffffffee,A5) */
    c->pc = RC_ADDR(0x00001c70u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[0] + 0x6u));
    rc_wr32(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C76:
    /* 00001c76   2  bra 00001c1e */
    c->pc = RC_ADDR(0x00001c76u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1C1E;

L_1C78:
    /* 00001c78   4  move.w (fffffff4,A5),-(A7) */
    c->pc = RC_ADDR(0x00001c78u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C7C:
    /* 00001c7c   4  jsr (00001bb0) */
    c->pc = RC_ADDR(0x00001c7cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001c80u));
    rc_depth++;
    c->pc = RC_ADDR(0x00001bb0u);
    return;

L_1C80:
    /* 00001c80   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00001c80u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1C82:
    /* 00001c82   4  bra 00001bf2 */
    c->pc = RC_ADDR(0x00001c82u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1BF2;

}
