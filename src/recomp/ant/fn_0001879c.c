/* fn_0001879c - 82 byte(s), 24 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001879c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001879cu): goto L_1879C;
    case RC_ADDR(0x000187a0u): goto L_187A0;
    case RC_ADDR(0x000187a2u): goto L_187A2;
    case RC_ADDR(0x000187a8u): goto L_187A8;
    case RC_ADDR(0x000187acu): goto L_187AC;
    case RC_ADDR(0x000187aeu): goto L_187AE;
    case RC_ADDR(0x000187b0u): goto L_187B0;
    case RC_ADDR(0x000187b4u): goto L_187B4;
    case RC_ADDR(0x000187b8u): goto L_187B8;
    case RC_ADDR(0x000187bau): goto L_187BA;
    case RC_ADDR(0x000187c0u): goto L_187C0;
    case RC_ADDR(0x000187c2u): goto L_187C2;
    case RC_ADDR(0x000187c4u): goto L_187C4;
    case RC_ADDR(0x000187cau): goto L_187CA;
    case RC_ADDR(0x000187ccu): goto L_187CC;
    case RC_ADDR(0x000187d2u): goto L_187D2;
    case RC_ADDR(0x000187d4u): goto L_187D4;
    case RC_ADDR(0x000187dau): goto L_187DA;
    case RC_ADDR(0x000187dcu): goto L_187DC;
    case RC_ADDR(0x000187e2u): goto L_187E2;
    case RC_ADDR(0x000187e4u): goto L_187E4;
    case RC_ADDR(0x000187e8u): goto L_187E8;
    case RC_ADDR(0x000187eau): goto L_187EA;
    case RC_ADDR(0x000187ecu): goto L_187EC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1879C:
    /* 0001879c   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001879cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_187A0:
    /* 000187a0   2  move.l D1,-(A7) */
    c->pc = RC_ADDR(0x000187a0u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_187A2:
    /* 000187a2   6  move.w (00dff006).l,D0 */
    c->pc = RC_ADDR(0x000187a2u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, 0x00dff006u);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_187A8:
    /* 000187a8   4  add.l (ffffd38a,A4),D1 */
    c->pc = RC_ADDR(0x000187a8u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2c76u));
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_187AC:
    /* 000187ac   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x000187acu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_187AE:
    /* 000187ae   2  move.w D0,D1 */
    c->pc = RC_ADDR(0x000187aeu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_187B0:
    /* 000187b0   4  andi.w #3f,D1 */
    c->pc = RC_ADDR(0x000187b0u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 & 0x0000003fu;
    rc_d_set(c, 1, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_187B4:
    /* 000187b4   4  dbf D1,000187b4 */
    c->pc = RC_ADDR(0x000187b4u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 1, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 1, RC_W, t2);
        if (t2 != 0xFFFFu) goto L_187B4;
    }

L_187B8:
    /* 000187b8   2  clr.l D1 */
    c->pc = RC_ADDR(0x000187b8u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_187BA:
    /* 000187ba   6  move.w (00dff006).l,D1 */
    c->pc = RC_ADDR(0x000187bau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, 0x00dff006u);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_187C0:
    /* 000187c0   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x000187c0u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_187C2:
    /* 000187c2   2  clr.l D1 */
    c->pc = RC_ADDR(0x000187c2u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_187C4:
    /* 000187c4   6  move.b (00bfe801).l,D1 */
    c->pc = RC_ADDR(0x000187c4u);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, 0x00bfe801u);
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_187CA:
    /* 000187ca   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x000187cau);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_187CC:
    /* 000187cc   6  move.b (00bfe901).l,D1 */
    c->pc = RC_ADDR(0x000187ccu);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, 0x00bfe901u);
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_187D2:
    /* 000187d2   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x000187d2u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_187D4:
    /* 000187d4   6  move.b (00bfd800).l,D1 */
    c->pc = RC_ADDR(0x000187d4u);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, 0x00bfd800u);
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_187DA:
    /* 000187da   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x000187dau);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_187DC:
    /* 000187dc   6  move.b (00bfd900).l,D1 */
    c->pc = RC_ADDR(0x000187dcu);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, 0x00bfd900u);
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_187E2:
    /* 000187e2   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x000187e2u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_187E4:
    /* 000187e4   4  add.l D0,(ffffd38a,A4) */
    c->pc = RC_ADDR(0x000187e4u);
    rc_step(c, m, 24);
    t3 = (c->a[4] - 0x2c76u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_187E8:
    /* 000187e8   2  move.l (A7)+,D1 */
    c->pc = RC_ADDR(0x000187e8u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_187EA:
    /* 000187ea   2  unlk A5 */
    c->pc = RC_ADDR(0x000187eau);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_187EC:
    /* 000187ec   2  rts */
    c->pc = RC_ADDR(0x000187ecu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
