/* fn_0001d598 - 118 byte(s), 34 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001d598(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001d598u): goto L_1D598;
    case RC_ADDR(0x0001d59cu): goto L_1D59C;
    case RC_ADDR(0x0001d5a2u): goto L_1D5A2;
    case RC_ADDR(0x0001d5a8u): goto L_1D5A8;
    case RC_ADDR(0x0001d5acu): goto L_1D5AC;
    case RC_ADDR(0x0001d5aeu): goto L_1D5AE;
    case RC_ADDR(0x0001d5b2u): goto L_1D5B2;
    case RC_ADDR(0x0001d5b4u): goto L_1D5B4;
    case RC_ADDR(0x0001d5b6u): goto L_1D5B6;
    case RC_ADDR(0x0001d5bau): goto L_1D5BA;
    case RC_ADDR(0x0001d5bcu): goto L_1D5BC;
    case RC_ADDR(0x0001d5c0u): goto L_1D5C0;
    case RC_ADDR(0x0001d5c2u): goto L_1D5C2;
    case RC_ADDR(0x0001d5c6u): goto L_1D5C6;
    case RC_ADDR(0x0001d5ccu): goto L_1D5CC;
    case RC_ADDR(0x0001d5ceu): goto L_1D5CE;
    case RC_ADDR(0x0001d5d2u): goto L_1D5D2;
    case RC_ADDR(0x0001d5d4u): goto L_1D5D4;
    case RC_ADDR(0x0001d5d6u): goto L_1D5D6;
    case RC_ADDR(0x0001d5dau): goto L_1D5DA;
    case RC_ADDR(0x0001d5dcu): goto L_1D5DC;
    case RC_ADDR(0x0001d5e0u): goto L_1D5E0;
    case RC_ADDR(0x0001d5e2u): goto L_1D5E2;
    case RC_ADDR(0x0001d5e6u): goto L_1D5E6;
    case RC_ADDR(0x0001d5ecu): goto L_1D5EC;
    case RC_ADDR(0x0001d5f0u): goto L_1D5F0;
    case RC_ADDR(0x0001d5f6u): goto L_1D5F6;
    case RC_ADDR(0x0001d5f8u): goto L_1D5F8;
    case RC_ADDR(0x0001d5fcu): goto L_1D5FC;
    case RC_ADDR(0x0001d600u): goto L_1D600;
    case RC_ADDR(0x0001d604u): goto L_1D604;
    case RC_ADDR(0x0001d608u): goto L_1D608;
    case RC_ADDR(0x0001d60au): goto L_1D60A;
    case RC_ADDR(0x0001d60cu): goto L_1D60C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1D598:
    /* 0001d598   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x0001d598u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_1D59C:
    /* 0001d59c   6  move.l (ffffd340,A4),(14fa,A4) */
    c->pc = RC_ADDR(0x0001d59cu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc0u));
    rc_wr32(c, m, (c->a[4] + 0x14fau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D5A2:
    /* 0001d5a2   6  move.l (ffffd33c,A4),(14fe,A4) */
    c->pc = RC_ADDR(0x0001d5a2u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc4u));
    rc_wr32(c, m, (c->a[4] + 0x14feu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D5A8:
    /* 0001d5a8   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001d5a8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D5AC:
    /* 0001d5ac   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001d5acu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1D5AE:
    /* 0001d5ae   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001d5aeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D5B2:
    /* 0001d5b2   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001d5b2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1D5B4:
    /* 0001d5b4   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x0001d5b4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_1D5B6:
    /* 0001d5b6   4  adda.l (ffffd33c,A4),A0 */
    c->pc = RC_ADDR(0x0001d5b6u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc4u));
    c->a[0] += t0;

L_1D5BA:
    /* 0001d5ba   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001d5bau);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1D5BC:
    /* 0001d5bc   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001d5bcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D5C0:
    /* 0001d5c0   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001d5c0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1D5C2:
    /* 0001d5c2   4  lea (fffffae2,A4),A1 */
    c->pc = RC_ADDR(0x0001d5c2u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x51eu);

L_1D5C6:
    /* 0001d5c6   6  move.l (8,A0),(0,A1,D0.w) */
    c->pc = RC_ADDR(0x0001d5c6u);
    rc_step(c, m, 30);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D5CC:
    /* 0001d5cc   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001d5ccu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1D5CE:
    /* 0001d5ce   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001d5ceu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D5D2:
    /* 0001d5d2   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001d5d2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1D5D4:
    /* 0001d5d4   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x0001d5d4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_1D5D6:
    /* 0001d5d6   4  adda.l (ffffd340,A4),A0 */
    c->pc = RC_ADDR(0x0001d5d6u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc0u));
    c->a[0] += t0;

L_1D5DA:
    /* 0001d5da   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001d5dau);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1D5DC:
    /* 0001d5dc   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001d5dcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D5E0:
    /* 0001d5e0   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001d5e0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1D5E2:
    /* 0001d5e2   4  lea (ffffface,A4),A1 */
    c->pc = RC_ADDR(0x0001d5e2u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x532u);

L_1D5E6:
    /* 0001d5e6   6  move.l (8,A0),(0,A1,D0.w) */
    c->pc = RC_ADDR(0x0001d5e6u);
    rc_step(c, m, 30);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D5EC:
    /* 0001d5ec   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001d5ecu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1D5F0:
    /* 0001d5f0   6  cmpi.w #5,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001d5f0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_1D5F6:
    /* 0001d5f6   2  bcs 0001d5ac */
    c->pc = RC_ADDR(0x0001d5f6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_1D5AC; }

L_1D5F8:
    /* 0001d5f8   4  movea.l (ffffd340,A4),A0 */
    c->pc = RC_ADDR(0x0001d5f8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc0u));
    c->a[0] = t0;

L_1D5FC:
    /* 0001d5fc   4  move.w (fffffa76,A4),(A0) */
    c->pc = RC_ADDR(0x0001d5fcu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x58au));
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D600:
    /* 0001d600   4  movea.l (ffffd33c,A4),A0 */
    c->pc = RC_ADDR(0x0001d600u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc4u));
    c->a[0] = t0;

L_1D604:
    /* 0001d604   4  move.w (fffffa76,A4),(A0) */
    c->pc = RC_ADDR(0x0001d604u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x58au));
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D608:
    /* 0001d608   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0001d608u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1D60A:
    /* 0001d60a   2  unlk A5 */
    c->pc = RC_ADDR(0x0001d60au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1D60C:
    /* 0001d60c   2  rts */
    c->pc = RC_ADDR(0x0001d60cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
