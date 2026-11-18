/* fn_0001bf14 - 132 byte(s), 41 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001bf14(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001bf14u): goto L_1BF14;
    case RC_ADDR(0x0001bf18u): goto L_1BF18;
    case RC_ADDR(0x0001bf1cu): goto L_1BF1C;
    case RC_ADDR(0x0001bf20u): goto L_1BF20;
    case RC_ADDR(0x0001bf22u): goto L_1BF22;
    case RC_ADDR(0x0001bf26u): goto L_1BF26;
    case RC_ADDR(0x0001bf2au): goto L_1BF2A;
    case RC_ADDR(0x0001bf2eu): goto L_1BF2E;
    case RC_ADDR(0x0001bf30u): goto L_1BF30;
    case RC_ADDR(0x0001bf34u): goto L_1BF34;
    case RC_ADDR(0x0001bf38u): goto L_1BF38;
    case RC_ADDR(0x0001bf3cu): goto L_1BF3C;
    case RC_ADDR(0x0001bf3eu): goto L_1BF3E;
    case RC_ADDR(0x0001bf42u): goto L_1BF42;
    case RC_ADDR(0x0001bf46u): goto L_1BF46;
    case RC_ADDR(0x0001bf4au): goto L_1BF4A;
    case RC_ADDR(0x0001bf4cu): goto L_1BF4C;
    case RC_ADDR(0x0001bf50u): goto L_1BF50;
    case RC_ADDR(0x0001bf54u): goto L_1BF54;
    case RC_ADDR(0x0001bf56u): goto L_1BF56;
    case RC_ADDR(0x0001bf58u): goto L_1BF58;
    case RC_ADDR(0x0001bf5cu): goto L_1BF5C;
    case RC_ADDR(0x0001bf5eu): goto L_1BF5E;
    case RC_ADDR(0x0001bf60u): goto L_1BF60;
    case RC_ADDR(0x0001bf64u): goto L_1BF64;
    case RC_ADDR(0x0001bf66u): goto L_1BF66;
    case RC_ADDR(0x0001bf68u): goto L_1BF68;
    case RC_ADDR(0x0001bf6cu): goto L_1BF6C;
    case RC_ADDR(0x0001bf6eu): goto L_1BF6E;
    case RC_ADDR(0x0001bf70u): goto L_1BF70;
    case RC_ADDR(0x0001bf74u): goto L_1BF74;
    case RC_ADDR(0x0001bf78u): goto L_1BF78;
    case RC_ADDR(0x0001bf7au): goto L_1BF7A;
    case RC_ADDR(0x0001bf7eu): goto L_1BF7E;
    case RC_ADDR(0x0001bf82u): goto L_1BF82;
    case RC_ADDR(0x0001bf86u): goto L_1BF86;
    case RC_ADDR(0x0001bf88u): goto L_1BF88;
    case RC_ADDR(0x0001bf8cu): goto L_1BF8C;
    case RC_ADDR(0x0001bf90u): goto L_1BF90;
    case RC_ADDR(0x0001bf94u): goto L_1BF94;
    case RC_ADDR(0x0001bf96u): goto L_1BF96;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1BF14:
    /* 0001bf14   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001bf14u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1BF18:
    /* 0001bf18   4  movem.l { A0 A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x0001bf18u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_1BF1C:
    /* 0001bf1c   4  move.l (8,A5),D0 */
    c->pc = RC_ADDR(0x0001bf1cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BF20:
    /* 0001bf20   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001bf20u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1BF22:
    /* 0001bf22   4  lea (2710,A4),A0 */
    c->pc = RC_ADDR(0x0001bf22u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2710u);

L_1BF26:
    /* 0001bf26   4  move.w (0,A0,D0.w),D6 */
    c->pc = RC_ADDR(0x0001bf26u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BF2A:
    /* 0001bf2a   4  move.l (8,A5),D0 */
    c->pc = RC_ADDR(0x0001bf2au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BF2E:
    /* 0001bf2e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001bf2eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1BF30:
    /* 0001bf30   4  lea (2728,A4),A0 */
    c->pc = RC_ADDR(0x0001bf30u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2728u);

L_1BF34:
    /* 0001bf34   4  move.w (0,A0,D0.w),D7 */
    c->pc = RC_ADDR(0x0001bf34u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 7, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BF38:
    /* 0001bf38   4  move.l (8,A5),D0 */
    c->pc = RC_ADDR(0x0001bf38u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BF3C:
    /* 0001bf3c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001bf3cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1BF3E:
    /* 0001bf3e   4  lea (27a0,A4),A0 */
    c->pc = RC_ADDR(0x0001bf3eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x27a0u);

L_1BF42:
    /* 0001bf42   4  move.w (0,A0,D0.w),D4 */
    c->pc = RC_ADDR(0x0001bf42u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BF46:
    /* 0001bf46   4  move.l (8,A5),D0 */
    c->pc = RC_ADDR(0x0001bf46u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BF4A:
    /* 0001bf4a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001bf4au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1BF4C:
    /* 0001bf4c   4  lea (27b8,A4),A0 */
    c->pc = RC_ADDR(0x0001bf4cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x27b8u);

L_1BF50:
    /* 0001bf50   4  move.w (0,A0,D0.w),D5 */
    c->pc = RC_ADDR(0x0001bf50u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 5, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BF54:
    /* 0001bf54   2  cmp.w D4,D6 */
    c->pc = RC_ADDR(0x0001bf54u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    t1 = rc_d_get(c, 6, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1BF56:
    /* 0001bf56   2  bge 0001bf5c */
    c->pc = RC_ADDR(0x0001bf56u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1BF5C;

L_1BF58:
    /* 0001bf58   4  add.w #1e,D5 */
    c->pc = RC_ADDR(0x0001bf58u);
    rc_step(c, m, 10);
    t0 = 0x0000001eu;
    t1 = rc_d_get(c, 5, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 5, RC_W, t2);

L_1BF5C:
    /* 0001bf5c   2  cmp.w D4,D6 */
    c->pc = RC_ADDR(0x0001bf5cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    t1 = rc_d_get(c, 6, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1BF5E:
    /* 0001bf5e   2  ble 0001bf64 */
    c->pc = RC_ADDR(0x0001bf5eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1BF64;

L_1BF60:
    /* 0001bf60   4  add.w #a,D5 */
    c->pc = RC_ADDR(0x0001bf60u);
    rc_step(c, m, 10);
    t0 = 0x0000000au;
    t1 = rc_d_get(c, 5, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 5, RC_W, t2);

L_1BF64:
    /* 0001bf64   2  cmp.w D5,D7 */
    c->pc = RC_ADDR(0x0001bf64u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_W);
    t1 = rc_d_get(c, 7, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1BF66:
    /* 0001bf66   2  bge 0001bf6c */
    c->pc = RC_ADDR(0x0001bf66u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1BF6C;

L_1BF68:
    /* 0001bf68   4  add.w #c,D4 */
    c->pc = RC_ADDR(0x0001bf68u);
    rc_step(c, m, 10);
    t0 = 0x0000000cu;
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_1BF6C:
    /* 0001bf6c   2  cmp.w D5,D7 */
    c->pc = RC_ADDR(0x0001bf6cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_W);
    t1 = rc_d_get(c, 7, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1BF6E:
    /* 0001bf6e   2  ble 0001bf74 */
    c->pc = RC_ADDR(0x0001bf6eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1BF74;

L_1BF70:
    /* 0001bf70   4  add.w #24,D4 */
    c->pc = RC_ADDR(0x0001bf70u);
    rc_step(c, m, 10);
    t0 = 0x00000024u;
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_1BF74:
    /* 0001bf74   4  move.l (8,A5),D0 */
    c->pc = RC_ADDR(0x0001bf74u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BF78:
    /* 0001bf78   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001bf78u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1BF7A:
    /* 0001bf7a   4  lea (27a0,A4),A0 */
    c->pc = RC_ADDR(0x0001bf7au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x27a0u);

L_1BF7E:
    /* 0001bf7e   4  move.w D4,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001bf7eu);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 4, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BF82:
    /* 0001bf82   4  move.l (8,A5),D0 */
    c->pc = RC_ADDR(0x0001bf82u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BF86:
    /* 0001bf86   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001bf86u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1BF88:
    /* 0001bf88   4  lea (27b8,A4),A0 */
    c->pc = RC_ADDR(0x0001bf88u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x27b8u);

L_1BF8C:
    /* 0001bf8c   4  move.w D5,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001bf8cu);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 5, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BF90:
    /* 0001bf90   4  movem.l (SP)+,{ D4 D5 D6 D7 } */
    c->pc = RC_ADDR(0x0001bf90u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
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
    c->a[7] = t3;

L_1BF94:
    /* 0001bf94   2  unlk A5 */
    c->pc = RC_ADDR(0x0001bf94u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1BF96:
    /* 0001bf96   2  rts */
    c->pc = RC_ADDR(0x0001bf96u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
