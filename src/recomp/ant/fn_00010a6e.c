/* fn_00010a6e - 98 byte(s), 32 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00010a6e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00010a6eu): goto L_10A6E;
    case RC_ADDR(0x00010a72u): goto L_10A72;
    case RC_ADDR(0x00010a76u): goto L_10A76;
    case RC_ADDR(0x00010a7au): goto L_10A7A;
    case RC_ADDR(0x00010a7cu): goto L_10A7C;
    case RC_ADDR(0x00010a7eu): goto L_10A7E;
    case RC_ADDR(0x00010a82u): goto L_10A82;
    case RC_ADDR(0x00010a88u): goto L_10A88;
    case RC_ADDR(0x00010a8au): goto L_10A8A;
    case RC_ADDR(0x00010a8cu): goto L_10A8C;
    case RC_ADDR(0x00010a90u): goto L_10A90;
    case RC_ADDR(0x00010a92u): goto L_10A92;
    case RC_ADDR(0x00010a94u): goto L_10A94;
    case RC_ADDR(0x00010a98u): goto L_10A98;
    case RC_ADDR(0x00010a9cu): goto L_10A9C;
    case RC_ADDR(0x00010a9eu): goto L_10A9E;
    case RC_ADDR(0x00010aa2u): goto L_10AA2;
    case RC_ADDR(0x00010aa4u): goto L_10AA4;
    case RC_ADDR(0x00010aa8u): goto L_10AA8;
    case RC_ADDR(0x00010aacu): goto L_10AAC;
    case RC_ADDR(0x00010aaeu): goto L_10AAE;
    case RC_ADDR(0x00010ab0u): goto L_10AB0;
    case RC_ADDR(0x00010ab4u): goto L_10AB4;
    case RC_ADDR(0x00010ab6u): goto L_10AB6;
    case RC_ADDR(0x00010abau): goto L_10ABA;
    case RC_ADDR(0x00010abeu): goto L_10ABE;
    case RC_ADDR(0x00010ac0u): goto L_10AC0;
    case RC_ADDR(0x00010ac2u): goto L_10AC2;
    case RC_ADDR(0x00010ac4u): goto L_10AC4;
    case RC_ADDR(0x00010ac8u): goto L_10AC8;
    case RC_ADDR(0x00010acau): goto L_10ACA;
    case RC_ADDR(0x00010aceu): goto L_10ACE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_10A6E:
    /* 00010a6e   4  movem.l { D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 A7 },-(SP) */
    c->pc = RC_ADDR(0x00010a6eu);
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

L_10A72:
    /* 00010a72   4  lea (c6,A6),A2 */
    c->pc = RC_ADDR(0x00010a72u);
    rc_step(c, m, 8);
    c->a[2] = (c->a[6] + 0xc6u);

L_10A76:
    /* 00010a76   4  lea (e6,A6),A1 */
    c->pc = RC_ADDR(0x00010a76u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[6] + 0xe6u);

L_10A7A:
    /* 00010a7a   2  moveq #7,D7 */
    c->pc = RC_ADDR(0x00010a7au);
    rc_step(c, m, 4);
    c->d[7] = 0x00000007u;
    rc_set_nzvc(c, c->d[7], RC_L);

L_10A7C:
    /* 00010a7c   2  move.l (A2)+,(A1)+ */
    c->pc = RC_ADDR(0x00010a7cu);
    rc_step(c, m, 20);
    t3 = c->a[2];
    c->a[2] += 4u;
    t0 = rc_rd32(c, m, t3);
    t3 = c->a[1];
    c->a[1] += 4u;
    rc_wr32(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_L);

L_10A7E:
    /* 00010a7e   4  dbf D7,00010a7c */
    c->pc = RC_ADDR(0x00010a7eu);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 7, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 7, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_10A7C; }
    }

L_10A82:
    /* 00010a82   6  move.l (c,A6),(10,A6) */
    c->pc = RC_ADDR(0x00010a82u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[6] + 0xcu));
    rc_wr32(c, m, (c->a[6] + 0x10u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10A88:
    /* 00010a88   2  movea.l A6,A4 */
    c->pc = RC_ADDR(0x00010a88u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 6, RC_L);
    c->a[4] = t0;

L_10A8A:
    /* 00010a8a   2  clr.b D7 */
    c->pc = RC_ADDR(0x00010a8au);
    rc_step(c, m, 4);
    rc_d_set(c, 7, RC_B, 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_10A8C:
    /* 00010a8c   4  tst.l (26,A4) */
    c->pc = RC_ADDR(0x00010a8cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x26u));
    rc_set_nzvc(c, t0, RC_L);

L_10A90:
    /* 00010a90   2  beq 00010a98 */
    c->pc = RC_ADDR(0x00010a90u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_10A98;

L_10A92:
    /* 00010a92   2  move.b D7,D0 */
    c->pc = RC_ADDR(0x00010a92u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_B);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_10A94:
    /* 00010a94   4  bsr 00010dea */
    c->pc = RC_ADDR(0x00010a94u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00010a98u));
    rc_depth++;
    c->pc = RC_ADDR(0x00010deau);
    return;

L_10A98:
    /* 00010a98   4  clr.l (a6,A4) */
    c->pc = RC_ADDR(0x00010a98u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] + 0xa6u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_10A9C:
    /* 00010a9c   2  clr.l D0 */
    c->pc = RC_ADDR(0x00010a9cu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_10A9E:
    /* 00010a9e   4  move.b (f7,A4),D0 */
    c->pc = RC_ADDR(0x00010a9eu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[4] + 0xf7u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_10AA2:
    /* 00010aa2   2  addq.b #1,D0 */
    c->pc = RC_ADDR(0x00010aa2u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_B);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_B, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_B, t2);

L_10AA4:
    /* 00010aa4   4  move.l D0,(b6,A4) */
    c->pc = RC_ADDR(0x00010aa4u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0xb6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10AA8:
    /* 00010aa8   4  move.b (f6,A4),D0 */
    c->pc = RC_ADDR(0x00010aa8u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[4] + 0xf6u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_10AAC:
    /* 00010aac   2  beq 00010aba */
    c->pc = RC_ADDR(0x00010aacu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_10ABA;

L_10AAE:
    /* 00010aae   2  subq.b #1,D0 */
    c->pc = RC_ADDR(0x00010aaeu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_B);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_B, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_B, t2);

L_10AB0:
    /* 00010ab0   4  lea (40,A0),A3 */
    c->pc = RC_ADDR(0x00010ab0u);
    rc_step(c, m, 8);
    c->a[3] = (c->a[0] + 0x40u);

L_10AB4:
    /* 00010ab4   2  asl.w #1,D0 */
    c->pc = RC_ADDR(0x00010ab4u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_10AB6:
    /* 00010ab6   4  move.l (0,A3,D0.w),D0 */
    c->pc = RC_ADDR(0x00010ab6u);
    rc_step(c, m, 18);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd32(c, m, (c->a[3] + 0x0u + t4));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_10ABA:
    /* 00010aba   4  move.l D0,(96,A4) */
    c->pc = RC_ADDR(0x00010abau);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x96u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10ABE:
    /* 00010abe   2  addq.l #4,A0 */
    c->pc = RC_ADDR(0x00010abeu);
    rc_step(c, m, 8);
    c->a[0] += 0x00000004u;

L_10AC0:
    /* 00010ac0   2  addq.l #4,A4 */
    c->pc = RC_ADDR(0x00010ac0u);
    rc_step(c, m, 8);
    c->a[4] += 0x00000004u;

L_10AC2:
    /* 00010ac2   2  addq.b #1,D7 */
    c->pc = RC_ADDR(0x00010ac2u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 7, RC_B);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_B, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 7, RC_B, t2);

L_10AC4:
    /* 00010ac4   4  cmpi.b #4,D7 */
    c->pc = RC_ADDR(0x00010ac4u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 7, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000004u);

L_10AC8:
    /* 00010ac8   2  bcs 00010a8c */
    c->pc = RC_ADDR(0x00010ac8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_10A8C; }

L_10ACA:
    /* 00010aca   4  movem.l (SP)+,{ D0 D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 } */
    c->pc = RC_ADDR(0x00010acau);
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

L_10ACE:
    /* 00010ace   2  rts */
    c->pc = RC_ADDR(0x00010aceu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
