/* fn_000109fc - 114 byte(s), 41 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000109fc(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000109fcu): goto L_109FC;
    case RC_ADDR(0x00010a00u): goto L_10A00;
    case RC_ADDR(0x00010a02u): goto L_10A02;
    case RC_ADDR(0x00010a06u): goto L_10A06;
    case RC_ADDR(0x00010a08u): goto L_10A08;
    case RC_ADDR(0x00010a0au): goto L_10A0A;
    case RC_ADDR(0x00010a0eu): goto L_10A0E;
    case RC_ADDR(0x00010a12u): goto L_10A12;
    case RC_ADDR(0x00010a16u): goto L_10A16;
    case RC_ADDR(0x00010a1au): goto L_10A1A;
    case RC_ADDR(0x00010a1cu): goto L_10A1C;
    case RC_ADDR(0x00010a1eu): goto L_10A1E;
    case RC_ADDR(0x00010a20u): goto L_10A20;
    case RC_ADDR(0x00010a22u): goto L_10A22;
    case RC_ADDR(0x00010a26u): goto L_10A26;
    case RC_ADDR(0x00010a28u): goto L_10A28;
    case RC_ADDR(0x00010a2au): goto L_10A2A;
    case RC_ADDR(0x00010a2cu): goto L_10A2C;
    case RC_ADDR(0x00010a2eu): goto L_10A2E;
    case RC_ADDR(0x00010a32u): goto L_10A32;
    case RC_ADDR(0x00010a34u): goto L_10A34;
    case RC_ADDR(0x00010a38u): goto L_10A38;
    case RC_ADDR(0x00010a3au): goto L_10A3A;
    case RC_ADDR(0x00010a3eu): goto L_10A3E;
    case RC_ADDR(0x00010a40u): goto L_10A40;
    case RC_ADDR(0x00010a46u): goto L_10A46;
    case RC_ADDR(0x00010a48u): goto L_10A48;
    case RC_ADDR(0x00010a4au): goto L_10A4A;
    case RC_ADDR(0x00010a4cu): goto L_10A4C;
    case RC_ADDR(0x00010a4eu): goto L_10A4E;
    case RC_ADDR(0x00010a52u): goto L_10A52;
    case RC_ADDR(0x00010a54u): goto L_10A54;
    case RC_ADDR(0x00010a56u): goto L_10A56;
    case RC_ADDR(0x00010a5au): goto L_10A5A;
    case RC_ADDR(0x00010a5cu): goto L_10A5C;
    case RC_ADDR(0x00010a5eu): goto L_10A5E;
    case RC_ADDR(0x00010a60u): goto L_10A60;
    case RC_ADDR(0x00010a62u): goto L_10A62;
    case RC_ADDR(0x00010a66u): goto L_10A66;
    case RC_ADDR(0x00010a68u): goto L_10A68;
    case RC_ADDR(0x00010a6cu): goto L_10A6C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_109FC:
    /* 000109fc   4  movem.l { D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 A7 },-(SP) */
    c->pc = RC_ADDR(0x000109fcu);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[4]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[0]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[0]);
    c->a[7] = t3;

L_10A00:
    /* 00010a00   2  movea.l A0,A3 */
    c->pc = RC_ADDR(0x00010a00u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 0, RC_L);
    c->a[3] = t0;

L_10A02:
    /* 00010a02   4  lea (c6,A6),A1 */
    c->pc = RC_ADDR(0x00010a02u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[6] + 0xc6u);

L_10A06:
    /* 00010a06   2  move.l D0,D6 */
    c->pc = RC_ADDR(0x00010a06u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 6, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_10A08:
    /* 00010a08   2  clr.b D7 */
    c->pc = RC_ADDR(0x00010a08u);
    rc_step(c, m, 4);
    rc_d_set(c, 7, RC_B, 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_10A0A:
    /* 00010a0a   4  clr.l (0,A1) */
    c->pc = RC_ADDR(0x00010a0au);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[1] + 0x0u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_10A0E:
    /* 00010a0e   4  clr.b (10,A1) */
    c->pc = RC_ADDR(0x00010a0eu);
    rc_step(c, m, 16);
    rc_wr8(c, m, (c->a[1] + 0x10u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_10A12:
    /* 00010a12   4  clr.b (11,A1) */
    c->pc = RC_ADDR(0x00010a12u);
    rc_step(c, m, 16);
    rc_wr8(c, m, (c->a[1] + 0x11u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_10A16:
    /* 00010a16   4  move.l (30,A0),D0 */
    c->pc = RC_ADDR(0x00010a16u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0x30u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_10A1A:
    /* 00010a1a   2  beq 00010a5c */
    c->pc = RC_ADDR(0x00010a1au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_10A5C;

L_10A1C:
    /* 00010a1c   2  add.l A3,D0 */
    c->pc = RC_ADDR(0x00010a1cu);
    rc_step(c, m, 6);
    t0 = rc_a_get(c, 3, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_10A1E:
    /* 00010a1e   2  movea.l D0,A2 */
    c->pc = RC_ADDR(0x00010a1eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[2] = t0;

L_10A20:
    /* 00010a20   2  move.l D6,D5 */
    c->pc = RC_ADDR(0x00010a20u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_L);
    rc_d_set(c, 5, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_10A22:
    /* 00010a22   4  move.l A2,(0,A1) */
    c->pc = RC_ADDR(0x00010a22u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, (c->a[1] + 0x0u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10A26:
    /* 00010a26   2  tst.l D5 */
    c->pc = RC_ADDR(0x00010a26u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_10A28:
    /* 00010a28   2  ble 00010a5c */
    c->pc = RC_ADDR(0x00010a28u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_10A5C;

L_10A2A:
    /* 00010a2a   2  move.w (A2)+,D0 */
    c->pc = RC_ADDR(0x00010a2au);
    rc_step(c, m, 8);
    t3 = c->a[2];
    c->a[2] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10A2C:
    /* 00010a2c   2  beq 00010a22 */
    c->pc = RC_ADDR(0x00010a2cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_10A22; }

L_10A2E:
    /* 00010a2e   4  cmpi.w #ffff,D0 */
    c->pc = RC_ADDR(0x00010a2eu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_10A32:
    /* 00010a32   2  beq 00010a5c */
    c->pc = RC_ADDR(0x00010a32u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_10A5C;

L_10A34:
    /* 00010a34   4  cmpi.w #8200,D0 */
    c->pc = RC_ADDR(0x00010a34u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t0, 0x00008200u);

L_10A38:
    /* 00010a38   2  bcc 00010a22 */
    c->pc = RC_ADDR(0x00010a38u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) { rc_tick(); goto L_10A22; }

L_10A3A:
    /* 00010a3a   4  cmpi.w #8100,D0 */
    c->pc = RC_ADDR(0x00010a3au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t0, 0x00008100u);

L_10A3E:
    /* 00010a3e   2  bcc 00010a54 */
    c->pc = RC_ADDR(0x00010a3eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_10A54;

L_10A40:
    /* 00010a40   6  andi.l #ff,D0 */
    c->pc = RC_ADDR(0x00010a40u);
    rc_step(c, m, 14);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 & 0x000000ffu;
    rc_d_set(c, 0, RC_L, t2);
    rc_set_nzvc(c, t2, RC_L);

L_10A46:
    /* 00010a46   2  sub.l D0,D5 */
    c->pc = RC_ADDR(0x00010a46u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    t1 = rc_d_get(c, 5, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 5, RC_L, t2);

L_10A48:
    /* 00010a48   2  bpl 00010a22 */
    c->pc = RC_ADDR(0x00010a48u);
    rc_step(c, m, 10);
    if (rc_cond(c, 10)) { rc_tick(); goto L_10A22; }

L_10A4A:
    /* 00010a4a   2  move.l D5,D0 */
    c->pc = RC_ADDR(0x00010a4au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_10A4C:
    /* 00010a4c   2  neg.l D0 */
    c->pc = RC_ADDR(0x00010a4cu);
    rc_step(c, m, 6);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_L, 0u, t1, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_10A4E:
    /* 00010a4e   4  move.b D0,(11,A1) */
    c->pc = RC_ADDR(0x00010a4eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_B);
    rc_wr8(c, m, (c->a[1] + 0x11u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_10A52:
    /* 00010a52   2  bra 00010a22 */
    c->pc = RC_ADDR(0x00010a52u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_10A22;

L_10A54:
    /* 00010a54   2  addq.b #1,D0 */
    c->pc = RC_ADDR(0x00010a54u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_B);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_B, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_B, t2);

L_10A56:
    /* 00010a56   4  move.b D0,(10,A1) */
    c->pc = RC_ADDR(0x00010a56u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_B);
    rc_wr8(c, m, (c->a[1] + 0x10u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_10A5A:
    /* 00010a5a   2  bra 00010a22 */
    c->pc = RC_ADDR(0x00010a5au);
    rc_step(c, m, 10);
    rc_tick();
    goto L_10A22;

L_10A5C:
    /* 00010a5c   2  addq.l #4,A0 */
    c->pc = RC_ADDR(0x00010a5cu);
    rc_step(c, m, 8);
    c->a[0] += 0x00000004u;

L_10A5E:
    /* 00010a5e   2  addq.l #4,A1 */
    c->pc = RC_ADDR(0x00010a5eu);
    rc_step(c, m, 8);
    c->a[1] += 0x00000004u;

L_10A60:
    /* 00010a60   2  addq.b #1,D7 */
    c->pc = RC_ADDR(0x00010a60u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 7, RC_B);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_B, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 7, RC_B, t2);

L_10A62:
    /* 00010a62   4  cmpi.b #4,D7 */
    c->pc = RC_ADDR(0x00010a62u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 7, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000004u);

L_10A66:
    /* 00010a66   2  bne 00010a0a */
    c->pc = RC_ADDR(0x00010a66u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_10A0A; }

L_10A68:
    /* 00010a68   4  movem.l (SP)+,{ D0 D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 } */
    c->pc = RC_ADDR(0x00010a68u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[3] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[6] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[7] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[6] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_10A6C:
    /* 00010a6c   2  rts */
    c->pc = RC_ADDR(0x00010a6cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
