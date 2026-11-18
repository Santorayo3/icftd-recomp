/* fn_0001f5ee - 106 byte(s), 30 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001f5ee(cpu_t *c, rt_machine *m)
{
    u32 t0, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f5eeu): goto L_1F5EE;
    case RC_ADDR(0x0001f5f2u): goto L_1F5F2;
    case RC_ADDR(0x0001f5f6u): goto L_1F5F6;
    case RC_ADDR(0x0001f5fcu): goto L_1F5FC;
    case RC_ADDR(0x0001f600u): goto L_1F600;
    case RC_ADDR(0x0001f604u): goto L_1F604;
    case RC_ADDR(0x0001f606u): goto L_1F606;
    case RC_ADDR(0x0001f608u): goto L_1F608;
    case RC_ADDR(0x0001f60au): goto L_1F60A;
    case RC_ADDR(0x0001f60eu): goto L_1F60E;
    case RC_ADDR(0x0001f612u): goto L_1F612;
    case RC_ADDR(0x0001f618u): goto L_1F618;
    case RC_ADDR(0x0001f61au): goto L_1F61A;
    case RC_ADDR(0x0001f61cu): goto L_1F61C;
    case RC_ADDR(0x0001f620u): goto L_1F620;
    case RC_ADDR(0x0001f624u): goto L_1F624;
    case RC_ADDR(0x0001f628u): goto L_1F628;
    case RC_ADDR(0x0001f62cu): goto L_1F62C;
    case RC_ADDR(0x0001f630u): goto L_1F630;
    case RC_ADDR(0x0001f634u): goto L_1F634;
    case RC_ADDR(0x0001f636u): goto L_1F636;
    case RC_ADDR(0x0001f638u): goto L_1F638;
    case RC_ADDR(0x0001f63cu): goto L_1F63C;
    case RC_ADDR(0x0001f640u): goto L_1F640;
    case RC_ADDR(0x0001f644u): goto L_1F644;
    case RC_ADDR(0x0001f648u): goto L_1F648;
    case RC_ADDR(0x0001f64au): goto L_1F64A;
    case RC_ADDR(0x0001f64eu): goto L_1F64E;
    case RC_ADDR(0x0001f652u): goto L_1F652;
    case RC_ADDR(0x0001f656u): goto L_1F656;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F5EE:
    /* 0001f5ee   4  link.w A5,#fffffff8 */
    c->pc = RC_ADDR(0x0001f5eeu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x8u;

L_1F5F2:
    /* 0001f5f2   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001f5f2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1F5F6:
    /* 0001f5f6   6  bset #2,(b,A0) */
    c->pc = RC_ADDR(0x0001f5f6u);
    rc_step(c, m, 20);
    t3 = (c->a[0] + 0xbu);
    t4 = 0x00000002u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_1F5FC:
    /* 0001f5fc   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001f5fcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1F600:
    /* 0001f600   4  tst.l (c,A0) */
    c->pc = RC_ADDR(0x0001f600u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    rc_set_nzvc(c, t0, RC_L);

L_1F604:
    /* 0001f604   2  bne 0001f60a */
    c->pc = RC_ADDR(0x0001f604u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1F60A;

L_1F606:
    /* 0001f606   2  unlk A5 */
    c->pc = RC_ADDR(0x0001f606u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1F608:
    /* 0001f608   2  rts */
    c->pc = RC_ADDR(0x0001f608u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_1F60A:
    /* 0001f60a   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001f60au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1F60E:
    /* 0001f60e   4  movea.l (c,A0),A1 */
    c->pc = RC_ADDR(0x0001f60eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_1F612:
    /* 0001f612   6  move.l (30,A1),(fffffff8,A5) */
    c->pc = RC_ADDR(0x0001f612u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[1] + 0x30u));
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F618:
    /* 0001f618   2  bne 0001f61c */
    c->pc = RC_ADDR(0x0001f618u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1F61C;

L_1F61A:
    /* 0001f61a   2  bra 0001f606 */
    c->pc = RC_ADDR(0x0001f61au);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1F606;

L_1F61C:
    /* 0001f61c   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001f61cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1F620:
    /* 0001f620   4  movea.l (c,A0),A1 */
    c->pc = RC_ADDR(0x0001f620u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_1F624:
    /* 0001f624   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001f624u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1F628:
    /* 0001f628   4  movea.l (c,A0),A6 */
    c->pc = RC_ADDR(0x0001f628u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[6] = t0;

L_1F62C:
    /* 0001f62c   4  move.w (c,A1),D0 */
    c->pc = RC_ADDR(0x0001f62cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[1] + 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F630:
    /* 0001f630   4  mulu.w (e,A6),D0 */
    c->pc = RC_ADDR(0x0001f630u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[6] + 0xeu));
    rc_mulu(c, 0, t0);

L_1F634:
    /* 0001f634   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x0001f634u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1F636:
    /* 0001f636   2  move.w D0,D1 */
    c->pc = RC_ADDR(0x0001f636u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F638:
    /* 0001f638   4  move.l D1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001f638u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F63C:
    /* 0001f63c   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0001f63cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F640:
    /* 0001f640   4  move.l (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x0001f640u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F644:
    /* 0001f644   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0001f644u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0001f648u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_1F648:
    /* 0001f648   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001f648u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1F64A:
    /* 0001f64a   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001f64au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1F64E:
    /* 0001f64e   4  movea.l (c,A0),A1 */
    c->pc = RC_ADDR(0x0001f64eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_1F652:
    /* 0001f652   4  clr.l (30,A1) */
    c->pc = RC_ADDR(0x0001f652u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[1] + 0x30u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1F656:
    /* 0001f656   2  bra 0001f606 */
    c->pc = RC_ADDR(0x0001f656u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1F606;

}
