/* fn_0000f58c - 210 byte(s), 76 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000f58c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000f58cu): goto L_F58C;
    case RC_ADDR(0x0000f590u): goto L_F590;
    case RC_ADDR(0x0000f594u): goto L_F594;
    case RC_ADDR(0x0000f598u): goto L_F598;
    case RC_ADDR(0x0000f59au): goto L_F59A;
    case RC_ADDR(0x0000f59eu): goto L_F59E;
    case RC_ADDR(0x0000f5a2u): goto L_F5A2;
    case RC_ADDR(0x0000f5a6u): goto L_F5A6;
    case RC_ADDR(0x0000f5a8u): goto L_F5A8;
    case RC_ADDR(0x0000f5acu): goto L_F5AC;
    case RC_ADDR(0x0000f5aeu): goto L_F5AE;
    case RC_ADDR(0x0000f5b2u): goto L_F5B2;
    case RC_ADDR(0x0000f5b4u): goto L_F5B4;
    case RC_ADDR(0x0000f5b6u): goto L_F5B6;
    case RC_ADDR(0x0000f5b8u): goto L_F5B8;
    case RC_ADDR(0x0000f5bau): goto L_F5BA;
    case RC_ADDR(0x0000f5beu): goto L_F5BE;
    case RC_ADDR(0x0000f5c2u): goto L_F5C2;
    case RC_ADDR(0x0000f5c4u): goto L_F5C4;
    case RC_ADDR(0x0000f5c6u): goto L_F5C6;
    case RC_ADDR(0x0000f5c8u): goto L_F5C8;
    case RC_ADDR(0x0000f5cau): goto L_F5CA;
    case RC_ADDR(0x0000f5ceu): goto L_F5CE;
    case RC_ADDR(0x0000f5d0u): goto L_F5D0;
    case RC_ADDR(0x0000f5d4u): goto L_F5D4;
    case RC_ADDR(0x0000f5d6u): goto L_F5D6;
    case RC_ADDR(0x0000f5dau): goto L_F5DA;
    case RC_ADDR(0x0000f5dcu): goto L_F5DC;
    case RC_ADDR(0x0000f5e0u): goto L_F5E0;
    case RC_ADDR(0x0000f5e2u): goto L_F5E2;
    case RC_ADDR(0x0000f5e4u): goto L_F5E4;
    case RC_ADDR(0x0000f5e8u): goto L_F5E8;
    case RC_ADDR(0x0000f5ecu): goto L_F5EC;
    case RC_ADDR(0x0000f5eeu): goto L_F5EE;
    case RC_ADDR(0x0000f5f2u): goto L_F5F2;
    case RC_ADDR(0x0000f5f4u): goto L_F5F4;
    case RC_ADDR(0x0000f5f8u): goto L_F5F8;
    case RC_ADDR(0x0000f5fau): goto L_F5FA;
    case RC_ADDR(0x0000f5fcu): goto L_F5FC;
    case RC_ADDR(0x0000f5feu): goto L_F5FE;
    case RC_ADDR(0x0000f602u): goto L_F602;
    case RC_ADDR(0x0000f604u): goto L_F604;
    case RC_ADDR(0x0000f608u): goto L_F608;
    case RC_ADDR(0x0000f60au): goto L_F60A;
    case RC_ADDR(0x0000f60eu): goto L_F60E;
    case RC_ADDR(0x0000f610u): goto L_F610;
    case RC_ADDR(0x0000f612u): goto L_F612;
    case RC_ADDR(0x0000f614u): goto L_F614;
    case RC_ADDR(0x0000f616u): goto L_F616;
    case RC_ADDR(0x0000f618u): goto L_F618;
    case RC_ADDR(0x0000f61au): goto L_F61A;
    case RC_ADDR(0x0000f61eu): goto L_F61E;
    case RC_ADDR(0x0000f622u): goto L_F622;
    case RC_ADDR(0x0000f624u): goto L_F624;
    case RC_ADDR(0x0000f626u): goto L_F626;
    case RC_ADDR(0x0000f62au): goto L_F62A;
    case RC_ADDR(0x0000f62cu): goto L_F62C;
    case RC_ADDR(0x0000f62eu): goto L_F62E;
    case RC_ADDR(0x0000f630u): goto L_F630;
    case RC_ADDR(0x0000f632u): goto L_F632;
    case RC_ADDR(0x0000f636u): goto L_F636;
    case RC_ADDR(0x0000f638u): goto L_F638;
    case RC_ADDR(0x0000f63au): goto L_F63A;
    case RC_ADDR(0x0000f640u): goto L_F640;
    case RC_ADDR(0x0000f642u): goto L_F642;
    case RC_ADDR(0x0000f644u): goto L_F644;
    case RC_ADDR(0x0000f646u): goto L_F646;
    case RC_ADDR(0x0000f648u): goto L_F648;
    case RC_ADDR(0x0000f64au): goto L_F64A;
    case RC_ADDR(0x0000f64eu): goto L_F64E;
    case RC_ADDR(0x0000f650u): goto L_F650;
    case RC_ADDR(0x0000f652u): goto L_F652;
    case RC_ADDR(0x0000f656u): goto L_F656;
    case RC_ADDR(0x0000f658u): goto L_F658;
    case RC_ADDR(0x0000f65au): goto L_F65A;
    case RC_ADDR(0x0000f65cu): goto L_F65C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_F58C:
    /* 0000f58c   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000f58cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_F590:
    /* 0000f590   4  movem.l { A0 A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x0000f590u);
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

L_F594:
    /* 0000f594   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0000f594u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F598:
    /* 0000f598   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000f598u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_F59A:
    /* 0000f59a   4  divs.w #20,D0 */
    c->pc = RC_ADDR(0x0000f59au);
    rc_step(c, m, 162);
    t0 = 0x00000020u;
    rc_divs(c, m, 0, t0);

L_F59E:
    /* 0000f59e   4  muls.w #27,D0 */
    c->pc = RC_ADDR(0x0000f59eu);
    rc_step(c, m, 42);
    t0 = 0x00000027u;
    rc_muls(c, 0, t0);

L_F5A2:
    /* 0000f5a2   4  move.w (a,A5),D1 */
    c->pc = RC_ADDR(0x0000f5a2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F5A6:
    /* 0000f5a6   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000f5a6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_F5A8:
    /* 0000f5a8   4  divs.w #1b,D1 */
    c->pc = RC_ADDR(0x0000f5a8u);
    rc_step(c, m, 162);
    t0 = 0x0000001bu;
    rc_divs(c, m, 1, t0);

L_F5AC:
    /* 0000f5ac   2  add.w D1,D0 */
    c->pc = RC_ADDR(0x0000f5acu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_F5AE:
    /* 0000f5ae   4  add.w #28,D0 */
    c->pc = RC_ADDR(0x0000f5aeu);
    rc_step(c, m, 10);
    t0 = 0x00000028u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_F5B2:
    /* 0000f5b2   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000f5b2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_F5B4:
    /* 0000f5b4   2  move.l D0,D5 */
    c->pc = RC_ADDR(0x0000f5b4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 5, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F5B6:
    /* 0000f5b6   2  move.l D5,D0 */
    c->pc = RC_ADDR(0x0000f5b6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F5B8:
    /* 0000f5b8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000f5b8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_F5BA:
    /* 0000f5ba   4  movea.l (fffffaa0,A4),A0 */
    c->pc = RC_ADDR(0x0000f5bau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x560u));
    c->a[0] = t0;

L_F5BE:
    /* 0000f5be   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000f5beu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F5C2:
    /* 0000f5c2   2  lsr.w #1,D1 */
    c->pc = RC_ADDR(0x0000f5c2u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_F5C4:
    /* 0000f5c4   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0000f5c4u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_F5C6:
    /* 0000f5c6   2  move.w D1,D0 */
    c->pc = RC_ADDR(0x0000f5c6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F5C8:
    /* 0000f5c8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000f5c8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_F5CA:
    /* 0000f5ca   4  movea.l (fffffabc,A4),A0 */
    c->pc = RC_ADDR(0x0000f5cau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x544u));
    c->a[0] = t0;

L_F5CE:
    /* 0000f5ce   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x0000f5ceu);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_F5D0:
    /* 0000f5d0   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000f5d0u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F5D4:
    /* 0000f5d4   2  move.l D1,D4 */
    c->pc = RC_ADDR(0x0000f5d4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_L);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F5D6:
    /* 0000f5d6   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0000f5d6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F5DA:
    /* 0000f5da   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000f5dau);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_F5DC:
    /* 0000f5dc   4  divs.w #20,D0 */
    c->pc = RC_ADDR(0x0000f5dcu);
    rc_step(c, m, 162);
    t0 = 0x00000020u;
    rc_divs(c, m, 0, t0);

L_F5E0:
    /* 0000f5e0   2  swap D0 */
    c->pc = RC_ADDR(0x0000f5e0u);
    rc_step(c, m, 4);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_F5E2:
    /* 0000f5e2   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000f5e2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_F5E4:
    /* 0000f5e4   4  divs.w #8,D0 */
    c->pc = RC_ADDR(0x0000f5e4u);
    rc_step(c, m, 162);
    t0 = 0x00000008u;
    rc_divs(c, m, 0, t0);

L_F5E8:
    /* 0000f5e8   4  move.w (a,A5),D1 */
    c->pc = RC_ADDR(0x0000f5e8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F5EC:
    /* 0000f5ec   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000f5ecu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_F5EE:
    /* 0000f5ee   4  divs.w #1b,D1 */
    c->pc = RC_ADDR(0x0000f5eeu);
    rc_step(c, m, 162);
    t0 = 0x0000001bu;
    rc_divs(c, m, 1, t0);

L_F5F2:
    /* 0000f5f2   2  swap D1 */
    c->pc = RC_ADDR(0x0000f5f2u);
    rc_step(c, m, 4);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_F5F4:
    /* 0000f5f4   4  muls.w (fffffa9c,A4),D1 */
    c->pc = RC_ADDR(0x0000f5f4u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] - 0x564u));
    rc_muls(c, 1, t0);

L_F5F8:
    /* 0000f5f8   2  add.w D1,D0 */
    c->pc = RC_ADDR(0x0000f5f8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_F5FA:
    /* 0000f5fa   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000f5fau);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_F5FC:
    /* 0000f5fc   2  add.l D0,D4 */
    c->pc = RC_ADDR(0x0000f5fcu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_F5FE:
    /* 0000f5fe   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0000f5feu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F602:
    /* 0000f602   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000f602u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_F604:
    /* 0000f604   4  divs.w #8,D0 */
    c->pc = RC_ADDR(0x0000f604u);
    rc_step(c, m, 162);
    t0 = 0x00000008u;
    rc_divs(c, m, 0, t0);

L_F608:
    /* 0000f608   2  swap D0 */
    c->pc = RC_ADDR(0x0000f608u);
    rc_step(c, m, 4);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_F60A:
    /* 0000f60a   4  move.w #80,D1 */
    c->pc = RC_ADDR(0x0000f60au);
    rc_step(c, m, 8);
    t0 = 0x00000080u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F60E:
    /* 0000f60e   2  asr.w D0,D1 */
    c->pc = RC_ADDR(0x0000f60eu);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 0, 0, (c->d[0] & 63u), rc_d_get(c, 1, RC_W), RC_W));

L_F610:
    /* 0000f610   2  move.b D1,D7 */
    c->pc = RC_ADDR(0x0000f610u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_B);
    rc_d_set(c, 7, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_F612:
    /* 0000f612   2  moveq #0,D6 */
    c->pc = RC_ADDR(0x0000f612u);
    rc_step(c, m, 4);
    c->d[6] = 0x00000000u;
    rc_set_nzvc(c, c->d[6], RC_L);

L_F614:
    /* 0000f614   2  moveq #0,D5 */
    c->pc = RC_ADDR(0x0000f614u);
    rc_step(c, m, 4);
    c->d[5] = 0x00000000u;
    rc_set_nzvc(c, c->d[5], RC_L);

L_F616:
    /* 0000f616   2  move.l D5,D0 */
    c->pc = RC_ADDR(0x0000f616u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F618:
    /* 0000f618   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000f618u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_F61A:
    /* 0000f61a   4  lea (fffffaa8,A4),A0 */
    c->pc = RC_ADDR(0x0000f61au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x558u);

L_F61E:
    /* 0000f61e   4  move.l (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000f61eu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F622:
    /* 0000f622   2  movea.l D4,A0 */
    c->pc = RC_ADDR(0x0000f622u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[0] = t0;

L_F624:
    /* 0000f624   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0000f624u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_F626:
    /* 0000f626   4  move.b (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x0000f626u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_F62A:
    /* 0000f62a   2  move.b D7,D1 */
    c->pc = RC_ADDR(0x0000f62au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_B);
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_F62C:
    /* 0000f62c   2  ext.w D1 */
    c->pc = RC_ADDR(0x0000f62cu);
    rc_step(c, m, 4);
    rc_ext_w(c, 1);

L_F62E:
    /* 0000f62e   2  and.w D1,D0 */
    c->pc = RC_ADDR(0x0000f62eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_F630:
    /* 0000f630   2  beq 0000f636 */
    c->pc = RC_ADDR(0x0000f630u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_F636;

L_F632:
    /* 0000f632   4  bset #5,D6 */
    c->pc = RC_ADDR(0x0000f632u);
    rc_step(c, m, 12);
    t4 = 0x00000005u;
    t0 = rc_d_get(c, 6, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 6, RC_L, t2);

L_F636:
    /* 0000f636   2  asr.w #1,D6 */
    c->pc = RC_ADDR(0x0000f636u);
    rc_step(c, m, 6);
    rc_d_set(c, 6, RC_W, rc_shift(c, 0, 0, 0x00000001u, rc_d_get(c, 6, RC_W), RC_W));

L_F638:
    /* 0000f638   2  addq.l #1,D5 */
    c->pc = RC_ADDR(0x0000f638u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 5, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 5, RC_L, t2);

L_F63A:
    /* 0000f63a   6  cmp.l #5,D5 */
    c->pc = RC_ADDR(0x0000f63au);
    rc_step(c, m, 14);
    t0 = 0x00000005u;
    t1 = rc_d_get(c, 5, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_F640:
    /* 0000f640   2  blt 0000f616 */
    c->pc = RC_ADDR(0x0000f640u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_F616; }

L_F642:
    /* 0000f642   2  move.w D6,D0 */
    c->pc = RC_ADDR(0x0000f642u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F644:
    /* 0000f644   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000f644u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_F646:
    /* 0000f646   2  moveq #1,D1 */
    c->pc = RC_ADDR(0x0000f646u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000001u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_F648:
    /* 0000f648   2  asl.l D0,D1 */
    c->pc = RC_ADDR(0x0000f648u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, (c->d[0] & 63u), rc_d_get(c, 1, RC_L), RC_L));

L_F64A:
    /* 0000f64a   4  and.l (ffff9cf8,A4),D1 */
    c->pc = RC_ADDR(0x0000f64au);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] - 0x6308u));
    t2 = t0 & rc_d_get(c, 1, RC_L);
    rc_set_nzvc(c, t2, RC_L);
    rc_d_set(c, 1, RC_L, t2);

L_F64E:
    /* 0000f64e   2  beq 0000f65a */
    c->pc = RC_ADDR(0x0000f64eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_F65A;

L_F650:
    /* 0000f650   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0000f650u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_F652:
    /* 0000f652   4  movem.l (SP)+,{ D4 D5 D6 D7 } */
    c->pc = RC_ADDR(0x0000f652u);
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

L_F656:
    /* 0000f656   2  unlk A5 */
    c->pc = RC_ADDR(0x0000f656u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_F658:
    /* 0000f658   2  rts */
    c->pc = RC_ADDR(0x0000f658u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_F65A:
    /* 0000f65a   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0000f65au);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_F65C:
    /* 0000f65c   2  bra 0000f652 */
    c->pc = RC_ADDR(0x0000f65cu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_F652;

}
