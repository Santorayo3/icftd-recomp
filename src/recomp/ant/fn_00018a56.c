/* fn_00018a56 - 200 byte(s), 53 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00018a56(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00018a56u): goto L_18A56;
    case RC_ADDR(0x00018a5au): goto L_18A5A;
    case RC_ADDR(0x00018a60u): goto L_18A60;
    case RC_ADDR(0x00018a66u): goto L_18A66;
    case RC_ADDR(0x00018a6au): goto L_18A6A;
    case RC_ADDR(0x00018a6eu): goto L_18A6E;
    case RC_ADDR(0x00018a72u): goto L_18A72;
    case RC_ADDR(0x00018a74u): goto L_18A74;
    case RC_ADDR(0x00018a7au): goto L_18A7A;
    case RC_ADDR(0x00018a80u): goto L_18A80;
    case RC_ADDR(0x00018a82u): goto L_18A82;
    case RC_ADDR(0x00018a88u): goto L_18A88;
    case RC_ADDR(0x00018a8eu): goto L_18A8E;
    case RC_ADDR(0x00018a90u): goto L_18A90;
    case RC_ADDR(0x00018a92u): goto L_18A92;
    case RC_ADDR(0x00018a98u): goto L_18A98;
    case RC_ADDR(0x00018a9cu): goto L_18A9C;
    case RC_ADDR(0x00018aa0u): goto L_18AA0;
    case RC_ADDR(0x00018aa2u): goto L_18AA2;
    case RC_ADDR(0x00018aa6u): goto L_18AA6;
    case RC_ADDR(0x00018aa8u): goto L_18AA8;
    case RC_ADDR(0x00018aacu): goto L_18AAC;
    case RC_ADDR(0x00018aaeu): goto L_18AAE;
    case RC_ADDR(0x00018ab0u): goto L_18AB0;
    case RC_ADDR(0x00018ab2u): goto L_18AB2;
    case RC_ADDR(0x00018ab4u): goto L_18AB4;
    case RC_ADDR(0x00018ab6u): goto L_18AB6;
    case RC_ADDR(0x00018ab8u): goto L_18AB8;
    case RC_ADDR(0x00018abcu): goto L_18ABC;
    case RC_ADDR(0x00018abeu): goto L_18ABE;
    case RC_ADDR(0x00018ac0u): goto L_18AC0;
    case RC_ADDR(0x00018ac4u): goto L_18AC4;
    case RC_ADDR(0x00018ac8u): goto L_18AC8;
    case RC_ADDR(0x00018accu): goto L_18ACC;
    case RC_ADDR(0x00018ad0u): goto L_18AD0;
    case RC_ADDR(0x00018ad6u): goto L_18AD6;
    case RC_ADDR(0x00018adcu): goto L_18ADC;
    case RC_ADDR(0x00018ae0u): goto L_18AE0;
    case RC_ADDR(0x00018ae4u): goto L_18AE4;
    case RC_ADDR(0x00018ae8u): goto L_18AE8;
    case RC_ADDR(0x00018aeau): goto L_18AEA;
    case RC_ADDR(0x00018aeeu): goto L_18AEE;
    case RC_ADDR(0x00018af2u): goto L_18AF2;
    case RC_ADDR(0x00018af6u): goto L_18AF6;
    case RC_ADDR(0x00018afau): goto L_18AFA;
    case RC_ADDR(0x00018afcu): goto L_18AFC;
    case RC_ADDR(0x00018b00u): goto L_18B00;
    case RC_ADDR(0x00018b04u): goto L_18B04;
    case RC_ADDR(0x00018b08u): goto L_18B08;
    case RC_ADDR(0x00018b0eu): goto L_18B0E;
    case RC_ADDR(0x00018b14u): goto L_18B14;
    case RC_ADDR(0x00018b1au): goto L_18B1A;
    case RC_ADDR(0x00018b1cu): goto L_18B1C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_18A56:
    /* 00018a56   4  link.w A5,#ffffffee */
    c->pc = RC_ADDR(0x00018a56u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x12u;

L_18A5A:
    /* 00018a5a   6  move.l (ffffd340,A4),(fffffffc,A5) */
    c->pc = RC_ADDR(0x00018a5au);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc0u));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_18A60:
    /* 00018a60   6  move.l (ffffd33c,A4),(fffffff8,A5) */
    c->pc = RC_ADDR(0x00018a60u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc4u));
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_18A66:
    /* 00018a66   4  movea.l (ffffd33c,A4),A0 */
    c->pc = RC_ADDR(0x00018a66u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc4u));
    c->a[0] = t0;

L_18A6A:
    /* 00018a6a   4  movea.l (8,A0),A1 */
    c->pc = RC_ADDR(0x00018a6au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    c->a[1] = t0;

L_18A6E:
    /* 00018a6e   4  cmpa.l (ffffface,A4),A1 */
    c->pc = RC_ADDR(0x00018a6eu);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] - 0x532u));
    rc_cmp(c, RC_L, c->a[1], t0);

L_18A72:
    /* 00018a72   2  bne 00018a82 */
    c->pc = RC_ADDR(0x00018a72u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_18A82;

L_18A74:
    /* 00018a74   6  move.l (ffffd340,A4),(fffffff4,A5) */
    c->pc = RC_ADDR(0x00018a74u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc0u));
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_18A7A:
    /* 00018a7a   6  move.l (ffffd33c,A4),(fffffff0,A5) */
    c->pc = RC_ADDR(0x00018a7au);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc4u));
    rc_wr32(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_18A80:
    /* 00018a80   2  bra 00018a8e */
    c->pc = RC_ADDR(0x00018a80u);
    rc_step(c, m, 10);
    goto L_18A8E;

L_18A82:
    /* 00018a82   6  move.l (ffffd340,A4),(fffffff0,A5) */
    c->pc = RC_ADDR(0x00018a82u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc0u));
    rc_wr32(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_18A88:
    /* 00018a88   6  move.l (ffffd33c,A4),(fffffff4,A5) */
    c->pc = RC_ADDR(0x00018a88u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc4u));
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_18A8E:
    /* 00018a8e   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00018a8eu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_18A90:
    /* 00018a90   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00018a90u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_18A92:
    /* 00018a92   6  pea (ccc43210).l */
    c->pc = RC_ADDR(0x00018a92u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0xccc43210u);

L_18A98:
    /* 00018a98   4  pea (000000ca).l */
    c->pc = RC_ADDR(0x00018a98u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000000cau);

L_18A9C:
    /* 00018a9c   4  movea.l (fffffff4,A5),A0 */
    c->pc = RC_ADDR(0x00018a9cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_18AA0:
    /* 00018aa0   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00018aa0u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_18AA2:
    /* 00018aa2   4  move.w (2,A0),D0 */
    c->pc = RC_ADDR(0x00018aa2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18AA6:
    /* 00018aa6   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00018aa6u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_18AA8:
    /* 00018aa8   4  movea.l (fffffff4,A5),A0 */
    c->pc = RC_ADDR(0x00018aa8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_18AAC:
    /* 00018aac   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00018aacu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_18AAE:
    /* 00018aae   2  move.w (A0),D0 */
    c->pc = RC_ADDR(0x00018aaeu);
    rc_step(c, m, 8);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18AB0:
    /* 00018ab0   2  asl.l #3,D0 */
    c->pc = RC_ADDR(0x00018ab0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000003u, rc_d_get(c, 0, RC_L), RC_L));

L_18AB2:
    /* 00018ab2   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00018ab2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_18AB4:
    /* 00018ab4   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00018ab4u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_18AB6:
    /* 00018ab6   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00018ab6u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_18AB8:
    /* 00018ab8   4  move.l (fffffff0,A5),-(A7) */
    c->pc = RC_ADDR(0x00018ab8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_18ABC:
    /* 00018abc   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00018abcu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_18ABE:
    /* 00018abe   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00018abeu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_18AC0:
    /* 00018ac0   4  move.l (fffffff4,A5),-(A7) */
    c->pc = RC_ADDR(0x00018ac0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_18AC4:
    /* 00018ac4   4  jsr (ffff8260,A4) */
    c->pc = RC_ADDR(0x00018ac4u);
    rc_step(c, m, 18);
    /* vector 101 */
    rc_push32(c, m, RC_ADDR(0x00018ac8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d56u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00020940u);
    return;

L_18AC8:
    /* 00018ac8   4  lea (30,A7),A7 */
    c->pc = RC_ADDR(0x00018ac8u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x30u);

L_18ACC:
    /* 00018acc   4  jsr (00018a02) */
    c->pc = RC_ADDR(0x00018accu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00018ad0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00018a02u);
    return;

L_18AD0:
    /* 00018ad0   6  subi.w #a,(ffffd288,A4) */
    c->pc = RC_ADDR(0x00018ad0u);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x2d78u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x0000000au;
    rc_flags_sub(c, RC_W, t1, 0x0000000au, t2, 0);
    rc_wr16(c, m, t3, t2);

L_18AD6:
    /* 00018ad6   6  move.w (e,A5),(9e2,A4) */
    c->pc = RC_ADDR(0x00018ad6u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] + 0xeu));
    rc_wr16(c, m, (c->a[4] + 0x9e2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18ADC:
    /* 00018adc   4  move.w (c,A5),-(A7) */
    c->pc = RC_ADDR(0x00018adcu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18AE0:
    /* 00018ae0   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00018ae0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_18AE4:
    /* 00018ae4   4  jsr (ffff8074,A4) */
    c->pc = RC_ADDR(0x00018ae4u);
    rc_step(c, m, 18);
    /* vector 19 */
    rc_push32(c, m, RC_ADDR(0x00018ae8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b6au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000564cu);
    return;

L_18AE8:
    /* 00018ae8   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00018ae8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_18AEA:
    /* 00018aea   4  jsr (000189ec) */
    c->pc = RC_ADDR(0x00018aeau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00018aeeu));
    rc_depth++;
    c->pc = RC_ADDR(0x000189ecu);
    return;

L_18AEE:
    /* 00018aee   4  move.w (c,A5),-(A7) */
    c->pc = RC_ADDR(0x00018aeeu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18AF2:
    /* 00018af2   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00018af2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_18AF6:
    /* 00018af6   4  jsr (ffff8074,A4) */
    c->pc = RC_ADDR(0x00018af6u);
    rc_step(c, m, 18);
    /* vector 19 */
    rc_push32(c, m, RC_ADDR(0x00018afau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b6au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000564cu);
    return;

L_18AFA:
    /* 00018afa   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00018afau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_18AFC:
    /* 00018afc   4  jsr (000189ec) */
    c->pc = RC_ADDR(0x00018afcu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00018b00u));
    rc_depth++;
    c->pc = RC_ADDR(0x000189ecu);
    return;

L_18B00:
    /* 00018b00   4  jsr (ffff804a,A4) */
    c->pc = RC_ADDR(0x00018b00u);
    rc_step(c, m, 18);
    /* vector 12 */
    rc_push32(c, m, RC_ADDR(0x00018b04u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b40u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000036d2u);
    return;

L_18B04:
    /* 00018b04   4  clr.w (9e2,A4) */
    c->pc = RC_ADDR(0x00018b04u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x9e2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18B08:
    /* 00018b08   6  addi.w #a,(ffffd288,A4) */
    c->pc = RC_ADDR(0x00018b08u);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x2d78u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x0000000au;
    rc_flags_add(c, RC_W, t1, 0x0000000au, t2, 0);
    rc_wr16(c, m, t3, t2);

L_18B0E:
    /* 00018b0e   6  move.l (fffffffc,A5),(ffffd340,A4) */
    c->pc = RC_ADDR(0x00018b0eu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_wr32(c, m, (c->a[4] - 0x2cc0u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_18B14:
    /* 00018b14   6  move.l (fffffff8,A5),(ffffd33c,A4) */
    c->pc = RC_ADDR(0x00018b14u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_wr32(c, m, (c->a[4] - 0x2cc4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_18B1A:
    /* 00018b1a   2  unlk A5 */
    c->pc = RC_ADDR(0x00018b1au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_18B1C:
    /* 00018b1c   2  rts */
    c->pc = RC_ADDR(0x00018b1cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
