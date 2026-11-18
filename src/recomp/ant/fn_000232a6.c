/* fn_000232a6 - 80 byte(s), 36 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000232a6(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000232a6u): goto L_232A6;
    case RC_ADDR(0x000232aau): goto L_232AA;
    case RC_ADDR(0x000232acu): goto L_232AC;
    case RC_ADDR(0x000232aeu): goto L_232AE;
    case RC_ADDR(0x000232b0u): goto L_232B0;
    case RC_ADDR(0x000232b2u): goto L_232B2;
    case RC_ADDR(0x000232b4u): goto L_232B4;
    case RC_ADDR(0x000232b6u): goto L_232B6;
    case RC_ADDR(0x000232b8u): goto L_232B8;
    case RC_ADDR(0x000232bau): goto L_232BA;
    case RC_ADDR(0x000232bcu): goto L_232BC;
    case RC_ADDR(0x000232beu): goto L_232BE;
    case RC_ADDR(0x000232c0u): goto L_232C0;
    case RC_ADDR(0x000232c2u): goto L_232C2;
    case RC_ADDR(0x000232c4u): goto L_232C4;
    case RC_ADDR(0x000232c6u): goto L_232C6;
    case RC_ADDR(0x000232c8u): goto L_232C8;
    case RC_ADDR(0x000232cau): goto L_232CA;
    case RC_ADDR(0x000232ceu): goto L_232CE;
    case RC_ADDR(0x000232d0u): goto L_232D0;
    case RC_ADDR(0x000232d2u): goto L_232D2;
    case RC_ADDR(0x000232d4u): goto L_232D4;
    case RC_ADDR(0x000232d6u): goto L_232D6;
    case RC_ADDR(0x000232d8u): goto L_232D8;
    case RC_ADDR(0x000232dau): goto L_232DA;
    case RC_ADDR(0x000232dcu): goto L_232DC;
    case RC_ADDR(0x000232deu): goto L_232DE;
    case RC_ADDR(0x000232e0u): goto L_232E0;
    case RC_ADDR(0x000232e2u): goto L_232E2;
    case RC_ADDR(0x000232e4u): goto L_232E4;
    case RC_ADDR(0x000232e6u): goto L_232E6;
    case RC_ADDR(0x000232e8u): goto L_232E8;
    case RC_ADDR(0x000232eau): goto L_232EA;
    case RC_ADDR(0x000232ecu): goto L_232EC;
    case RC_ADDR(0x000232f0u): goto L_232F0;
    case RC_ADDR(0x000232f4u): goto L_232F4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_232A6:
    /* 000232a6   4  movem.l { A4 A5 },-(SP) */
    c->pc = RC_ADDR(0x000232a6u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[2]);
    c->a[7] = t3;

L_232AA:
    /* 000232aa   2  swap D1 */
    c->pc = RC_ADDR(0x000232aau);
    rc_step(c, m, 4);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_232AC:
    /* 000232ac   2  tst.w D1 */
    c->pc = RC_ADDR(0x000232acu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_232AE:
    /* 000232ae   2  bne 000232d0 */
    c->pc = RC_ADDR(0x000232aeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_232D0;

L_232B0:
    /* 000232b0   2  swap D1 */
    c->pc = RC_ADDR(0x000232b0u);
    rc_step(c, m, 4);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_232B2:
    /* 000232b2   2  move.w D1,D3 */
    c->pc = RC_ADDR(0x000232b2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_232B4:
    /* 000232b4   2  move.w D0,D2 */
    c->pc = RC_ADDR(0x000232b4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_232B6:
    /* 000232b6   2  clr.w D0 */
    c->pc = RC_ADDR(0x000232b6u);
    rc_step(c, m, 4);
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_232B8:
    /* 000232b8   2  swap D0 */
    c->pc = RC_ADDR(0x000232b8u);
    rc_step(c, m, 4);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_232BA:
    /* 000232ba   2  divu.w D3,D0 */
    c->pc = RC_ADDR(0x000232bau);
    rc_step(c, m, 140);
    t0 = rc_d_get(c, 3, RC_W);
    rc_divu(c, m, 0, t0);

L_232BC:
    /* 000232bc   2  move.l D0,D1 */
    c->pc = RC_ADDR(0x000232bcu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_232BE:
    /* 000232be   2  swap D0 */
    c->pc = RC_ADDR(0x000232beu);
    rc_step(c, m, 4);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_232C0:
    /* 000232c0   2  move.w D2,D1 */
    c->pc = RC_ADDR(0x000232c0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_232C2:
    /* 000232c2   2  divu.w D3,D1 */
    c->pc = RC_ADDR(0x000232c2u);
    rc_step(c, m, 140);
    t0 = rc_d_get(c, 3, RC_W);
    rc_divu(c, m, 1, t0);

L_232C4:
    /* 000232c4   2  move.w D1,D0 */
    c->pc = RC_ADDR(0x000232c4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_232C6:
    /* 000232c6   2  clr.w D1 */
    c->pc = RC_ADDR(0x000232c6u);
    rc_step(c, m, 4);
    rc_d_set(c, 1, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_232C8:
    /* 000232c8   2  swap D1 */
    c->pc = RC_ADDR(0x000232c8u);
    rc_step(c, m, 4);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_232CA:
    /* 000232ca   4  movem.l (SP)+,{ D2 D3 } */
    c->pc = RC_ADDR(0x000232cau);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[3] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_232CE:
    /* 000232ce   2  rts */
    c->pc = RC_ADDR(0x000232ceu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_232D0:
    /* 000232d0   2  swap D1 */
    c->pc = RC_ADDR(0x000232d0u);
    rc_step(c, m, 4);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_232D2:
    /* 000232d2   2  move.l D1,D3 */
    c->pc = RC_ADDR(0x000232d2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_L);
    rc_d_set(c, 3, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_232D4:
    /* 000232d4   2  move.l D0,D1 */
    c->pc = RC_ADDR(0x000232d4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_232D6:
    /* 000232d6   2  clr.w D1 */
    c->pc = RC_ADDR(0x000232d6u);
    rc_step(c, m, 4);
    rc_d_set(c, 1, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_232D8:
    /* 000232d8   2  swap D1 */
    c->pc = RC_ADDR(0x000232d8u);
    rc_step(c, m, 4);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_232DA:
    /* 000232da   2  swap D0 */
    c->pc = RC_ADDR(0x000232dau);
    rc_step(c, m, 4);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_232DC:
    /* 000232dc   2  clr.w D0 */
    c->pc = RC_ADDR(0x000232dcu);
    rc_step(c, m, 4);
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_232DE:
    /* 000232de   2  moveq #f,D2 */
    c->pc = RC_ADDR(0x000232deu);
    rc_step(c, m, 4);
    c->d[2] = 0x0000000fu;
    rc_set_nzvc(c, c->d[2], RC_L);

L_232E0:
    /* 000232e0   2  add.l D0,D0 */
    c->pc = RC_ADDR(0x000232e0u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_232E2:
    /* 000232e2   2  addx.l D1,D1 */
    c->pc = RC_ADDR(0x000232e2u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0 + ((c->sr & RC_X) ? 1u : 0u);
    rc_flags_addx(c, RC_L, t1, t0, ((c->sr & RC_X) ? 1u : 0u), t2);
    rc_d_set(c, 1, RC_L, t2);

L_232E4:
    /* 000232e4   2  cmp.l D1,D3 */
    c->pc = RC_ADDR(0x000232e4u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 3, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_232E6:
    /* 000232e6   2  bhi 000232ec */
    c->pc = RC_ADDR(0x000232e6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 2)) goto L_232EC;

L_232E8:
    /* 000232e8   2  sub.l D3,D1 */
    c->pc = RC_ADDR(0x000232e8u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 3, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_232EA:
    /* 000232ea   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x000232eau);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_232EC:
    /* 000232ec   4  dbf D2,000232e0 */
    c->pc = RC_ADDR(0x000232ecu);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 2, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 2, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_232E0; }
    }

L_232F0:
    /* 000232f0   4  movem.l (SP)+,{ D2 D3 } */
    c->pc = RC_ADDR(0x000232f0u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[3] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_232F4:
    /* 000232f4   2  rts */
    c->pc = RC_ADDR(0x000232f4u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
