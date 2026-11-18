/* fn_000055d8 - 116 byte(s), 35 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000055d8(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x000055d8u): goto L_55D8;
    case RC_ADDR(0x000055dcu): goto L_55DC;
    case RC_ADDR(0x000055e0u): goto L_55E0;
    case RC_ADDR(0x000055e6u): goto L_55E6;
    case RC_ADDR(0x000055eau): goto L_55EA;
    case RC_ADDR(0x000055eeu): goto L_55EE;
    case RC_ADDR(0x000055f2u): goto L_55F2;
    case RC_ADDR(0x000055f4u): goto L_55F4;
    case RC_ADDR(0x000055f8u): goto L_55F8;
    case RC_ADDR(0x000055fcu): goto L_55FC;
    case RC_ADDR(0x00005600u): goto L_5600;
    case RC_ADDR(0x00005604u): goto L_5604;
    case RC_ADDR(0x00005608u): goto L_5608;
    case RC_ADDR(0x0000560cu): goto L_560C;
    case RC_ADDR(0x00005610u): goto L_5610;
    case RC_ADDR(0x00005612u): goto L_5612;
    case RC_ADDR(0x00005616u): goto L_5616;
    case RC_ADDR(0x0000561au): goto L_561A;
    case RC_ADDR(0x0000561cu): goto L_561C;
    case RC_ADDR(0x00005620u): goto L_5620;
    case RC_ADDR(0x00005622u): goto L_5622;
    case RC_ADDR(0x00005624u): goto L_5624;
    case RC_ADDR(0x00005628u): goto L_5628;
    case RC_ADDR(0x0000562au): goto L_562A;
    case RC_ADDR(0x0000562cu): goto L_562C;
    case RC_ADDR(0x00005630u): goto L_5630;
    case RC_ADDR(0x00005632u): goto L_5632;
    case RC_ADDR(0x00005634u): goto L_5634;
    case RC_ADDR(0x00005638u): goto L_5638;
    case RC_ADDR(0x0000563au): goto L_563A;
    case RC_ADDR(0x0000563cu): goto L_563C;
    case RC_ADDR(0x00005640u): goto L_5640;
    case RC_ADDR(0x00005644u): goto L_5644;
    case RC_ADDR(0x00005648u): goto L_5648;
    case RC_ADDR(0x0000564au): goto L_564A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_55D8:
    /* 000055d8   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000055d8u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_55DC:
    /* 000055dc   4  movea.l (ffffd298,A4),A0 */
    c->pc = RC_ADDR(0x000055dcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[0] = t0;

L_55E0:
    /* 000055e0   6  move.l (ffffd340,A4),(4,A0) */
    c->pc = RC_ADDR(0x000055e0u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc0u));
    rc_wr32(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_55E6:
    /* 000055e6   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000055e6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_55EA:
    /* 000055ea   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x000055eau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_55EE:
    /* 000055ee   4  jsr (ffff83b0,A4) */
    c->pc = RC_ADDR(0x000055eeu);
    rc_step(c, m, 18);
    /* vector 157 */
    rc_push32(c, m, RC_ADDR(0x000055f2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023ea6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002398cu);
    return;

L_55F2:
    /* 000055f2   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000055f2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_55F4:
    /* 000055f4   4  move.l (18,A5),-(A7) */
    c->pc = RC_ADDR(0x000055f4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x18u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_55F8:
    /* 000055f8   4  move.l (14,A5),-(A7) */
    c->pc = RC_ADDR(0x000055f8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x14u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_55FC:
    /* 000055fc   4  move.l (10,A5),-(A7) */
    c->pc = RC_ADDR(0x000055fcu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5600:
    /* 00005600   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x00005600u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5604:
    /* 00005604   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x00005604u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5608:
    /* 00005608   4  jsr (ffff83aa,A4) */
    c->pc = RC_ADDR(0x00005608u);
    rc_step(c, m, 18);
    /* vector 156 */
    rc_push32(c, m, RC_ADDR(0x0000560cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023ea0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002397au);
    return;

L_560C:
    /* 0000560c   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x0000560cu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_5610:
    /* 00005610   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00005610u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_5612:
    /* 00005612   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x00005612u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5616:
    /* 00005616   4  jsr (ffff83b0,A4) */
    c->pc = RC_ADDR(0x00005616u);
    rc_step(c, m, 18);
    /* vector 157 */
    rc_push32(c, m, RC_ADDR(0x0000561au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023ea6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002398cu);
    return;

L_561A:
    /* 0000561a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000561au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_561C:
    /* 0000561c   4  move.l (18,A5),D0 */
    c->pc = RC_ADDR(0x0000561cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x18u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_5620:
    /* 00005620   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x00005620u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_5622:
    /* 00005622   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00005622u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5624:
    /* 00005624   4  move.l (14,A5),D0 */
    c->pc = RC_ADDR(0x00005624u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x14u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_5628:
    /* 00005628   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x00005628u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_562A:
    /* 0000562a   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0000562au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_562C:
    /* 0000562c   4  move.l (10,A5),D0 */
    c->pc = RC_ADDR(0x0000562cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_5630:
    /* 00005630   2  addq.l #1,D0 */
    c->pc = RC_ADDR(0x00005630u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_5632:
    /* 00005632   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00005632u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5634:
    /* 00005634   4  move.l (c,A5),D0 */
    c->pc = RC_ADDR(0x00005634u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_5638:
    /* 00005638   2  addq.l #1,D0 */
    c->pc = RC_ADDR(0x00005638u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_563A:
    /* 0000563a   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0000563au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_563C:
    /* 0000563c   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x0000563cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5640:
    /* 00005640   4  jsr (ffff83aa,A4) */
    c->pc = RC_ADDR(0x00005640u);
    rc_step(c, m, 18);
    /* vector 156 */
    rc_push32(c, m, RC_ADDR(0x00005644u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023ea0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002397au);
    return;

L_5644:
    /* 00005644   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00005644u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_5648:
    /* 00005648   2  unlk A5 */
    c->pc = RC_ADDR(0x00005648u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_564A:
    /* 0000564a   2  rts */
    c->pc = RC_ADDR(0x0000564au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
