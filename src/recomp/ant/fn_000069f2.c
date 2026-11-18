/* fn_000069f2 - 254 byte(s), 75 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000069f2(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000069f2u): goto L_69F2;
    case RC_ADDR(0x000069f6u): goto L_69F6;
    case RC_ADDR(0x000069fcu): goto L_69FC;
    case RC_ADDR(0x00006a00u): goto L_6A00;
    case RC_ADDR(0x00006a04u): goto L_6A04;
    case RC_ADDR(0x00006a06u): goto L_6A06;
    case RC_ADDR(0x00006a08u): goto L_6A08;
    case RC_ADDR(0x00006a0au): goto L_6A0A;
    case RC_ADDR(0x00006a0cu): goto L_6A0C;
    case RC_ADDR(0x00006a10u): goto L_6A10;
    case RC_ADDR(0x00006a14u): goto L_6A14;
    case RC_ADDR(0x00006a18u): goto L_6A18;
    case RC_ADDR(0x00006a1cu): goto L_6A1C;
    case RC_ADDR(0x00006a1eu): goto L_6A1E;
    case RC_ADDR(0x00006a22u): goto L_6A22;
    case RC_ADDR(0x00006a26u): goto L_6A26;
    case RC_ADDR(0x00006a2au): goto L_6A2A;
    case RC_ADDR(0x00006a2eu): goto L_6A2E;
    case RC_ADDR(0x00006a30u): goto L_6A30;
    case RC_ADDR(0x00006a34u): goto L_6A34;
    case RC_ADDR(0x00006a38u): goto L_6A38;
    case RC_ADDR(0x00006a3au): goto L_6A3A;
    case RC_ADDR(0x00006a3eu): goto L_6A3E;
    case RC_ADDR(0x00006a42u): goto L_6A42;
    case RC_ADDR(0x00006a44u): goto L_6A44;
    case RC_ADDR(0x00006a48u): goto L_6A48;
    case RC_ADDR(0x00006a4cu): goto L_6A4C;
    case RC_ADDR(0x00006a50u): goto L_6A50;
    case RC_ADDR(0x00006a54u): goto L_6A54;
    case RC_ADDR(0x00006a56u): goto L_6A56;
    case RC_ADDR(0x00006a58u): goto L_6A58;
    case RC_ADDR(0x00006a5cu): goto L_6A5C;
    case RC_ADDR(0x00006a60u): goto L_6A60;
    case RC_ADDR(0x00006a62u): goto L_6A62;
    case RC_ADDR(0x00006a66u): goto L_6A66;
    case RC_ADDR(0x00006a6au): goto L_6A6A;
    case RC_ADDR(0x00006a6eu): goto L_6A6E;
    case RC_ADDR(0x00006a70u): goto L_6A70;
    case RC_ADDR(0x00006a74u): goto L_6A74;
    case RC_ADDR(0x00006a78u): goto L_6A78;
    case RC_ADDR(0x00006a7cu): goto L_6A7C;
    case RC_ADDR(0x00006a7eu): goto L_6A7E;
    case RC_ADDR(0x00006a82u): goto L_6A82;
    case RC_ADDR(0x00006a86u): goto L_6A86;
    case RC_ADDR(0x00006a88u): goto L_6A88;
    case RC_ADDR(0x00006a8cu): goto L_6A8C;
    case RC_ADDR(0x00006a8eu): goto L_6A8E;
    case RC_ADDR(0x00006a92u): goto L_6A92;
    case RC_ADDR(0x00006a96u): goto L_6A96;
    case RC_ADDR(0x00006a98u): goto L_6A98;
    case RC_ADDR(0x00006a9cu): goto L_6A9C;
    case RC_ADDR(0x00006aa0u): goto L_6AA0;
    case RC_ADDR(0x00006aa2u): goto L_6AA2;
    case RC_ADDR(0x00006aa6u): goto L_6AA6;
    case RC_ADDR(0x00006aaau): goto L_6AAA;
    case RC_ADDR(0x00006aacu): goto L_6AAC;
    case RC_ADDR(0x00006ab2u): goto L_6AB2;
    case RC_ADDR(0x00006ab4u): goto L_6AB4;
    case RC_ADDR(0x00006ab8u): goto L_6AB8;
    case RC_ADDR(0x00006abau): goto L_6ABA;
    case RC_ADDR(0x00006abeu): goto L_6ABE;
    case RC_ADDR(0x00006ac2u): goto L_6AC2;
    case RC_ADDR(0x00006ac4u): goto L_6AC4;
    case RC_ADDR(0x00006ac8u): goto L_6AC8;
    case RC_ADDR(0x00006accu): goto L_6ACC;
    case RC_ADDR(0x00006aceu): goto L_6ACE;
    case RC_ADDR(0x00006ad2u): goto L_6AD2;
    case RC_ADDR(0x00006ad6u): goto L_6AD6;
    case RC_ADDR(0x00006ad8u): goto L_6AD8;
    case RC_ADDR(0x00006adau): goto L_6ADA;
    case RC_ADDR(0x00006adeu): goto L_6ADE;
    case RC_ADDR(0x00006ae2u): goto L_6AE2;
    case RC_ADDR(0x00006ae6u): goto L_6AE6;
    case RC_ADDR(0x00006aeau): goto L_6AEA;
    case RC_ADDR(0x00006aecu): goto L_6AEC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_69F2:
    /* 000069f2   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x000069f2u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_69F6:
    /* 000069f6   6  move.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000069f6u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_69FC:
    /* 000069fc   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000069fcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_6A00:
    /* 00006a00   4  cmpi.b #5e,(A0) */
    c->pc = RC_ADDR(0x00006a00u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x0000005eu);

L_6A04:
    /* 00006a04   2  bne 00006a0c */
    c->pc = RC_ADDR(0x00006a04u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_6A0C;

L_6A06:
    /* 00006a06   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00006a06u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_6A08:
    /* 00006a08   2  unlk A5 */
    c->pc = RC_ADDR(0x00006a08u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_6A0A:
    /* 00006a0a   2  rts */
    c->pc = RC_ADDR(0x00006a0au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_6A0C:
    /* 00006a0c   4  tst.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00006a0cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_set_nzvc(c, t0, RC_W);

L_6A10:
    /* 00006a10   4  beq 00006ae2 */
    c->pc = RC_ADDR(0x00006a10u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_6AE2;

L_6A14:
    /* 00006a14   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00006a14u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_6A18:
    /* 00006a18   4  cmpi.b #40,(A0) */
    c->pc = RC_ADDR(0x00006a18u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x00000040u);

L_6A1C:
    /* 00006a1c   2  bne 00006a92 */
    c->pc = RC_ADDR(0x00006a1cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_6A92;

L_6A1E:
    /* 00006a1e   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00006a1eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_6A22:
    /* 00006a22   4  addq.l #1,(8,A5) */
    c->pc = RC_ADDR(0x00006a22u);
    rc_step(c, m, 24);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_6A26:
    /* 00006a26   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00006a26u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_6A2A:
    /* 00006a2a   4  cmpi.b #30,(A0) */
    c->pc = RC_ADDR(0x00006a2au);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x00000030u);

L_6A2E:
    /* 00006a2e   2  blt 00006a8e */
    c->pc = RC_ADDR(0x00006a2eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_6A8E;

L_6A30:
    /* 00006a30   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00006a30u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_6A34:
    /* 00006a34   4  cmpi.b #39,(A0) */
    c->pc = RC_ADDR(0x00006a34u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x00000039u);

L_6A38:
    /* 00006a38   2  bgt 00006a8e */
    c->pc = RC_ADDR(0x00006a38u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_6A8E;

L_6A3A:
    /* 00006a3a   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00006a3au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6A3E:
    /* 00006a3e   4  jsr (ffff82d8,A4) */
    c->pc = RC_ADDR(0x00006a3eu);
    rc_step(c, m, 18);
    /* vector 121 */
    rc_push32(c, m, RC_ADDR(0x00006a42u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dceu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000228d4u);
    return;

L_6A42:
    /* 00006a42   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00006a42u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_6A44:
    /* 00006a44   4  move.w D0,(fffff816,A4) */
    c->pc = RC_ADDR(0x00006a44u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x7eau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6A48:
    /* 00006a48   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00006a48u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_6A4C:
    /* 00006a4c   4  addq.l #1,(8,A5) */
    c->pc = RC_ADDR(0x00006a4cu);
    rc_step(c, m, 24);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_6A50:
    /* 00006a50   4  cmpi.b #2f,(A0) */
    c->pc = RC_ADDR(0x00006a50u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x0000002fu);

L_6A54:
    /* 00006a54   2  beq 00006a58 */
    c->pc = RC_ADDR(0x00006a54u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_6A58;

L_6A56:
    /* 00006a56   2  bra 00006a48 */
    c->pc = RC_ADDR(0x00006a56u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_6A48;

L_6A58:
    /* 00006a58   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00006a58u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6A5C:
    /* 00006a5c   4  jsr (ffff82d8,A4) */
    c->pc = RC_ADDR(0x00006a5cu);
    rc_step(c, m, 18);
    /* vector 121 */
    rc_push32(c, m, RC_ADDR(0x00006a60u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dceu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000228d4u);
    return;

L_6A60:
    /* 00006a60   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00006a60u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_6A62:
    /* 00006a62   4  move.w D0,(fffff818,A4) */
    c->pc = RC_ADDR(0x00006a62u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x7e8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6A66:
    /* 00006a66   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00006a66u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6A6A:
    /* 00006a6a   4  jsr (0000690c) */
    c->pc = RC_ADDR(0x00006a6au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00006a6eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000690cu);
    return;

L_6A6E:
    /* 00006a6e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00006a6eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_6A70:
    /* 00006a70   4  move.l D0,(8,A5) */
    c->pc = RC_ADDR(0x00006a70u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6A74:
    /* 00006a74   4  move.w (fffff816,A4),D0 */
    c->pc = RC_ADDR(0x00006a74u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7eau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6A78:
    /* 00006a78   4  cmp.w (ffff83e6,A4),D0 */
    c->pc = RC_ADDR(0x00006a78u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1au));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_6A7C:
    /* 00006a7c   2  bgt 00006a8c */
    c->pc = RC_ADDR(0x00006a7cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_6A8C;

L_6A7E:
    /* 00006a7e   4  move.w (fffff818,A4),D0 */
    c->pc = RC_ADDR(0x00006a7eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7e8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6A82:
    /* 00006a82   4  cmp.w (ffff83e6,A4),D0 */
    c->pc = RC_ADDR(0x00006a82u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1au));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_6A86:
    /* 00006a86   2  ble 00006a8c */
    c->pc = RC_ADDR(0x00006a86u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_6A8C;

L_6A88:
    /* 00006a88   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00006a88u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6A8C:
    /* 00006a8c   2  bra 00006a92 */
    c->pc = RC_ADDR(0x00006a8cu);
    rc_step(c, m, 10);
    goto L_6A92;

L_6A8E:
    /* 00006a8e   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00006a8eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6A92:
    /* 00006a92   4  tst.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00006a92u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_set_nzvc(c, t0, RC_W);

L_6A96:
    /* 00006a96   2  bne 00006abe */
    c->pc = RC_ADDR(0x00006a96u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_6ABE;

L_6A98:
    /* 00006a98   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00006a98u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6A9C:
    /* 00006a9c   4  jsr (00006952) */
    c->pc = RC_ADDR(0x00006a9cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00006aa0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00006952u);
    return;

L_6AA0:
    /* 00006aa0   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00006aa0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_6AA2:
    /* 00006aa2   4  move.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00006aa2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6AA6:
    /* 00006aa6   4  tst.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x00006aa6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_W);

L_6AAA:
    /* 00006aaa   2  bge 00006ab4 */
    c->pc = RC_ADDR(0x00006aaau);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_6AB4;

L_6AAC:
    /* 00006aac   6  move.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00006aacu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6AB2:
    /* 00006ab2   2  bra 00006abe */
    c->pc = RC_ADDR(0x00006ab2u);
    rc_step(c, m, 10);
    goto L_6ABE;

L_6AB4:
    /* 00006ab4   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00006ab4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6AB8:
    /* 00006ab8   2  ext.l D0 */
    c->pc = RC_ADDR(0x00006ab8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_6ABA:
    /* 00006aba   4  add.l D0,(8,A5) */
    c->pc = RC_ADDR(0x00006abau);
    rc_step(c, m, 24);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_6ABE:
    /* 00006abe   4  tst.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00006abeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_set_nzvc(c, t0, RC_W);

L_6AC2:
    /* 00006ac2   2  beq 00006ad2 */
    c->pc = RC_ADDR(0x00006ac2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_6AD2;

L_6AC4:
    /* 00006ac4   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00006ac4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6AC8:
    /* 00006ac8   4  jsr (0000690c) */
    c->pc = RC_ADDR(0x00006ac8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00006accu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000690cu);
    return;

L_6ACC:
    /* 00006acc   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00006accu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_6ACE:
    /* 00006ace   4  move.l D0,(8,A5) */
    c->pc = RC_ADDR(0x00006aceu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6AD2:
    /* 00006ad2   4  tst.l (8,A5) */
    c->pc = RC_ADDR(0x00006ad2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_set_nzvc(c, t0, RC_L);

L_6AD6:
    /* 00006ad6   2  bne 00006ade */
    c->pc = RC_ADDR(0x00006ad6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_6ADE;

L_6AD8:
    /* 00006ad8   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00006ad8u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_6ADA:
    /* 00006ada   4  bra 00006a08 */
    c->pc = RC_ADDR(0x00006adau);
    rc_step(c, m, 10);
    rc_tick();
    goto L_6A08;

L_6ADE:
    /* 00006ade   4  bra 00006a0c */
    c->pc = RC_ADDR(0x00006adeu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_6A0C;

L_6AE2:
    /* 00006ae2   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00006ae2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6AE6:
    /* 00006ae6   4  jsr (000067dc) */
    c->pc = RC_ADDR(0x00006ae6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00006aeau));
    rc_depth++;
    c->pc = RC_ADDR(0x000067dcu);
    return;

L_6AEA:
    /* 00006aea   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00006aeau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_6AEC:
    /* 00006aec   4  bra 00006a08 */
    c->pc = RC_ADDR(0x00006aecu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_6A08;

}
