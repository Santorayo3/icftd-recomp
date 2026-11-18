/* fn_0001e544 - 768 byte(s), 203 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001e544(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001e544u): goto L_1E544;
    case RC_ADDR(0x0001e548u): goto L_1E548;
    case RC_ADDR(0x0001e54cu): goto L_1E54C;
    case RC_ADDR(0x0001e54eu): goto L_1E54E;
    case RC_ADDR(0x0001e552u): goto L_1E552;
    case RC_ADDR(0x0001e556u): goto L_1E556;
    case RC_ADDR(0x0001e55au): goto L_1E55A;
    case RC_ADDR(0x0001e55cu): goto L_1E55C;
    case RC_ADDR(0x0001e562u): goto L_1E562;
    case RC_ADDR(0x0001e566u): goto L_1E566;
    case RC_ADDR(0x0001e56au): goto L_1E56A;
    case RC_ADDR(0x0001e56cu): goto L_1E56C;
    case RC_ADDR(0x0001e570u): goto L_1E570;
    case RC_ADDR(0x0001e574u): goto L_1E574;
    case RC_ADDR(0x0001e578u): goto L_1E578;
    case RC_ADDR(0x0001e57cu): goto L_1E57C;
    case RC_ADDR(0x0001e580u): goto L_1E580;
    case RC_ADDR(0x0001e584u): goto L_1E584;
    case RC_ADDR(0x0001e588u): goto L_1E588;
    case RC_ADDR(0x0001e58au): goto L_1E58A;
    case RC_ADDR(0x0001e58eu): goto L_1E58E;
    case RC_ADDR(0x0001e592u): goto L_1E592;
    case RC_ADDR(0x0001e594u): goto L_1E594;
    case RC_ADDR(0x0001e598u): goto L_1E598;
    case RC_ADDR(0x0001e59cu): goto L_1E59C;
    case RC_ADDR(0x0001e59eu): goto L_1E59E;
    case RC_ADDR(0x0001e5a2u): goto L_1E5A2;
    case RC_ADDR(0x0001e5a6u): goto L_1E5A6;
    case RC_ADDR(0x0001e5aau): goto L_1E5AA;
    case RC_ADDR(0x0001e5acu): goto L_1E5AC;
    case RC_ADDR(0x0001e5b0u): goto L_1E5B0;
    case RC_ADDR(0x0001e5b4u): goto L_1E5B4;
    case RC_ADDR(0x0001e5b6u): goto L_1E5B6;
    case RC_ADDR(0x0001e5bau): goto L_1E5BA;
    case RC_ADDR(0x0001e5c2u): goto L_1E5C2;
    case RC_ADDR(0x0001e5c4u): goto L_1E5C4;
    case RC_ADDR(0x0001e5ccu): goto L_1E5CC;
    case RC_ADDR(0x0001e5d0u): goto L_1E5D0;
    case RC_ADDR(0x0001e5d2u): goto L_1E5D2;
    case RC_ADDR(0x0001e5d6u): goto L_1E5D6;
    case RC_ADDR(0x0001e5deu): goto L_1E5DE;
    case RC_ADDR(0x0001e5e0u): goto L_1E5E0;
    case RC_ADDR(0x0001e5e8u): goto L_1E5E8;
    case RC_ADDR(0x0001e5ecu): goto L_1E5EC;
    case RC_ADDR(0x0001e5eeu): goto L_1E5EE;
    case RC_ADDR(0x0001e5f2u): goto L_1E5F2;
    case RC_ADDR(0x0001e5f6u): goto L_1E5F6;
    case RC_ADDR(0x0001e5f8u): goto L_1E5F8;
    case RC_ADDR(0x0001e5fcu): goto L_1E5FC;
    case RC_ADDR(0x0001e5feu): goto L_1E5FE;
    case RC_ADDR(0x0001e602u): goto L_1E602;
    case RC_ADDR(0x0001e604u): goto L_1E604;
    case RC_ADDR(0x0001e606u): goto L_1E606;
    case RC_ADDR(0x0001e60au): goto L_1E60A;
    case RC_ADDR(0x0001e612u): goto L_1E612;
    case RC_ADDR(0x0001e614u): goto L_1E614;
    case RC_ADDR(0x0001e61cu): goto L_1E61C;
    case RC_ADDR(0x0001e624u): goto L_1E624;
    case RC_ADDR(0x0001e626u): goto L_1E626;
    case RC_ADDR(0x0001e628u): goto L_1E628;
    case RC_ADDR(0x0001e62au): goto L_1E62A;
    case RC_ADDR(0x0001e62eu): goto L_1E62E;
    case RC_ADDR(0x0001e630u): goto L_1E630;
    case RC_ADDR(0x0001e632u): goto L_1E632;
    case RC_ADDR(0x0001e63au): goto L_1E63A;
    case RC_ADDR(0x0001e63cu): goto L_1E63C;
    case RC_ADDR(0x0001e644u): goto L_1E644;
    case RC_ADDR(0x0001e648u): goto L_1E648;
    case RC_ADDR(0x0001e64au): goto L_1E64A;
    case RC_ADDR(0x0001e64eu): goto L_1E64E;
    case RC_ADDR(0x0001e650u): goto L_1E650;
    case RC_ADDR(0x0001e654u): goto L_1E654;
    case RC_ADDR(0x0001e656u): goto L_1E656;
    case RC_ADDR(0x0001e658u): goto L_1E658;
    case RC_ADDR(0x0001e65cu): goto L_1E65C;
    case RC_ADDR(0x0001e65eu): goto L_1E65E;
    case RC_ADDR(0x0001e666u): goto L_1E666;
    case RC_ADDR(0x0001e66eu): goto L_1E66E;
    case RC_ADDR(0x0001e670u): goto L_1E670;
    case RC_ADDR(0x0001e674u): goto L_1E674;
    case RC_ADDR(0x0001e678u): goto L_1E678;
    case RC_ADDR(0x0001e67au): goto L_1E67A;
    case RC_ADDR(0x0001e680u): goto L_1E680;
    case RC_ADDR(0x0001e686u): goto L_1E686;
    case RC_ADDR(0x0001e688u): goto L_1E688;
    case RC_ADDR(0x0001e68cu): goto L_1E68C;
    case RC_ADDR(0x0001e68eu): goto L_1E68E;
    case RC_ADDR(0x0001e692u): goto L_1E692;
    case RC_ADDR(0x0001e694u): goto L_1E694;
    case RC_ADDR(0x0001e698u): goto L_1E698;
    case RC_ADDR(0x0001e69cu): goto L_1E69C;
    case RC_ADDR(0x0001e69eu): goto L_1E69E;
    case RC_ADDR(0x0001e6a0u): goto L_1E6A0;
    case RC_ADDR(0x0001e6a2u): goto L_1E6A2;
    case RC_ADDR(0x0001e6a6u): goto L_1E6A6;
    case RC_ADDR(0x0001e6aau): goto L_1E6AA;
    case RC_ADDR(0x0001e6aeu): goto L_1E6AE;
    case RC_ADDR(0x0001e6b2u): goto L_1E6B2;
    case RC_ADDR(0x0001e6b6u): goto L_1E6B6;
    case RC_ADDR(0x0001e6bcu): goto L_1E6BC;
    case RC_ADDR(0x0001e6c0u): goto L_1E6C0;
    case RC_ADDR(0x0001e6c2u): goto L_1E6C2;
    case RC_ADDR(0x0001e6c6u): goto L_1E6C6;
    case RC_ADDR(0x0001e6c8u): goto L_1E6C8;
    case RC_ADDR(0x0001e6ccu): goto L_1E6CC;
    case RC_ADDR(0x0001e6d4u): goto L_1E6D4;
    case RC_ADDR(0x0001e6d6u): goto L_1E6D6;
    case RC_ADDR(0x0001e6deu): goto L_1E6DE;
    case RC_ADDR(0x0001e6e2u): goto L_1E6E2;
    case RC_ADDR(0x0001e6e4u): goto L_1E6E4;
    case RC_ADDR(0x0001e6eau): goto L_1E6EA;
    case RC_ADDR(0x0001e6ecu): goto L_1E6EC;
    case RC_ADDR(0x0001e6f0u): goto L_1E6F0;
    case RC_ADDR(0x0001e6f2u): goto L_1E6F2;
    case RC_ADDR(0x0001e6f6u): goto L_1E6F6;
    case RC_ADDR(0x0001e6fau): goto L_1E6FA;
    case RC_ADDR(0x0001e6feu): goto L_1E6FE;
    case RC_ADDR(0x0001e700u): goto L_1E700;
    case RC_ADDR(0x0001e704u): goto L_1E704;
    case RC_ADDR(0x0001e706u): goto L_1E706;
    case RC_ADDR(0x0001e70au): goto L_1E70A;
    case RC_ADDR(0x0001e70cu): goto L_1E70C;
    case RC_ADDR(0x0001e710u): goto L_1E710;
    case RC_ADDR(0x0001e718u): goto L_1E718;
    case RC_ADDR(0x0001e71au): goto L_1E71A;
    case RC_ADDR(0x0001e722u): goto L_1E722;
    case RC_ADDR(0x0001e726u): goto L_1E726;
    case RC_ADDR(0x0001e728u): goto L_1E728;
    case RC_ADDR(0x0001e72eu): goto L_1E72E;
    case RC_ADDR(0x0001e730u): goto L_1E730;
    case RC_ADDR(0x0001e734u): goto L_1E734;
    case RC_ADDR(0x0001e736u): goto L_1E736;
    case RC_ADDR(0x0001e73au): goto L_1E73A;
    case RC_ADDR(0x0001e73eu): goto L_1E73E;
    case RC_ADDR(0x0001e742u): goto L_1E742;
    case RC_ADDR(0x0001e744u): goto L_1E744;
    case RC_ADDR(0x0001e748u): goto L_1E748;
    case RC_ADDR(0x0001e74cu): goto L_1E74C;
    case RC_ADDR(0x0001e74eu): goto L_1E74E;
    case RC_ADDR(0x0001e752u): goto L_1E752;
    case RC_ADDR(0x0001e756u): goto L_1E756;
    case RC_ADDR(0x0001e758u): goto L_1E758;
    case RC_ADDR(0x0001e75cu): goto L_1E75C;
    case RC_ADDR(0x0001e75eu): goto L_1E75E;
    case RC_ADDR(0x0001e764u): goto L_1E764;
    case RC_ADDR(0x0001e768u): goto L_1E768;
    case RC_ADDR(0x0001e76cu): goto L_1E76C;
    case RC_ADDR(0x0001e770u): goto L_1E770;
    case RC_ADDR(0x0001e774u): goto L_1E774;
    case RC_ADDR(0x0001e776u): goto L_1E776;
    case RC_ADDR(0x0001e77au): goto L_1E77A;
    case RC_ADDR(0x0001e77eu): goto L_1E77E;
    case RC_ADDR(0x0001e782u): goto L_1E782;
    case RC_ADDR(0x0001e786u): goto L_1E786;
    case RC_ADDR(0x0001e78au): goto L_1E78A;
    case RC_ADDR(0x0001e78eu): goto L_1E78E;
    case RC_ADDR(0x0001e792u): goto L_1E792;
    case RC_ADDR(0x0001e796u): goto L_1E796;
    case RC_ADDR(0x0001e79au): goto L_1E79A;
    case RC_ADDR(0x0001e79eu): goto L_1E79E;
    case RC_ADDR(0x0001e7a2u): goto L_1E7A2;
    case RC_ADDR(0x0001e7a6u): goto L_1E7A6;
    case RC_ADDR(0x0001e7aau): goto L_1E7AA;
    case RC_ADDR(0x0001e7aeu): goto L_1E7AE;
    case RC_ADDR(0x0001e7b2u): goto L_1E7B2;
    case RC_ADDR(0x0001e7b6u): goto L_1E7B6;
    case RC_ADDR(0x0001e7bau): goto L_1E7BA;
    case RC_ADDR(0x0001e7beu): goto L_1E7BE;
    case RC_ADDR(0x0001e7c2u): goto L_1E7C2;
    case RC_ADDR(0x0001e7c6u): goto L_1E7C6;
    case RC_ADDR(0x0001e7cau): goto L_1E7CA;
    case RC_ADDR(0x0001e7ceu): goto L_1E7CE;
    case RC_ADDR(0x0001e7d2u): goto L_1E7D2;
    case RC_ADDR(0x0001e7d6u): goto L_1E7D6;
    case RC_ADDR(0x0001e7dau): goto L_1E7DA;
    case RC_ADDR(0x0001e7deu): goto L_1E7DE;
    case RC_ADDR(0x0001e7e2u): goto L_1E7E2;
    case RC_ADDR(0x0001e7e4u): goto L_1E7E4;
    case RC_ADDR(0x0001e7e8u): goto L_1E7E8;
    case RC_ADDR(0x0001e7ecu): goto L_1E7EC;
    case RC_ADDR(0x0001e7f0u): goto L_1E7F0;
    case RC_ADDR(0x0001e7f2u): goto L_1E7F2;
    case RC_ADDR(0x0001e7f6u): goto L_1E7F6;
    case RC_ADDR(0x0001e7fau): goto L_1E7FA;
    case RC_ADDR(0x0001e7feu): goto L_1E7FE;
    case RC_ADDR(0x0001e802u): goto L_1E802;
    case RC_ADDR(0x0001e806u): goto L_1E806;
    case RC_ADDR(0x0001e80au): goto L_1E80A;
    case RC_ADDR(0x0001e80eu): goto L_1E80E;
    case RC_ADDR(0x0001e812u): goto L_1E812;
    case RC_ADDR(0x0001e816u): goto L_1E816;
    case RC_ADDR(0x0001e81au): goto L_1E81A;
    case RC_ADDR(0x0001e81eu): goto L_1E81E;
    case RC_ADDR(0x0001e822u): goto L_1E822;
    case RC_ADDR(0x0001e824u): goto L_1E824;
    case RC_ADDR(0x0001e826u): goto L_1E826;
    case RC_ADDR(0x0001e82au): goto L_1E82A;
    case RC_ADDR(0x0001e82eu): goto L_1E82E;
    case RC_ADDR(0x0001e832u): goto L_1E832;
    case RC_ADDR(0x0001e836u): goto L_1E836;
    case RC_ADDR(0x0001e83au): goto L_1E83A;
    case RC_ADDR(0x0001e83cu): goto L_1E83C;
    case RC_ADDR(0x0001e840u): goto L_1E840;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1E544:
    /* 0001e544   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x0001e544u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_1E548:
    /* 0001e548   4  move.w (2cb6,A4),D0 */
    c->pc = RC_ADDR(0x0001e548u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2cb6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E54C:
    /* 0001e54c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001e54cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1E54E:
    /* 0001e54e   4  divs.w #2,D0 */
    c->pc = RC_ADDR(0x0001e54eu);
    rc_step(c, m, 162);
    t0 = 0x00000002u;
    rc_divs(c, m, 0, t0);

L_1E552:
    /* 0001e552   4  move.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001e552u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E556:
    /* 0001e556   4  tst.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001e556u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_set_nzvc(c, t0, RC_W);

L_1E55A:
    /* 0001e55a   2  bne 0001e562 */
    c->pc = RC_ADDR(0x0001e55au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1E562;

L_1E55C:
    /* 0001e55c   6  move.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001e55cu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E562:
    /* 0001e562   4  pea (2cc8,A4) */
    c->pc = RC_ADDR(0x0001e562u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2cc8u));

L_1E566:
    /* 0001e566   4  jsr (ffff8182,A4) */
    c->pc = RC_ADDR(0x0001e566u);
    rc_step(c, m, 18);
    /* vector 64 */
    rc_push32(c, m, RC_ADDR(0x0001e56au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c78u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000133e6u);
    return;

L_1E56A:
    /* 0001e56a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001e56au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1E56C:
    /* 0001e56c   4  tst.w (3078,A4) */
    c->pc = RC_ADDR(0x0001e56cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3078u));
    rc_set_nzvc(c, t0, RC_W);

L_1E570:
    /* 0001e570   4  beq 0001e674 */
    c->pc = RC_ADDR(0x0001e570u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1E674;

L_1E574:
    /* 0001e574   4  move.w (3078,A4),D0 */
    c->pc = RC_ADDR(0x0001e574u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3078u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E578:
    /* 0001e578   4  addq.w #1,(3078,A4) */
    c->pc = RC_ADDR(0x0001e578u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x3078u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1E57C:
    /* 0001e57c   4  cmp.w #12,D0 */
    c->pc = RC_ADDR(0x0001e57cu);
    rc_step(c, m, 8);
    t0 = 0x00000012u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1E580:
    /* 0001e580   4  bge 0001e65e */
    c->pc = RC_ADDR(0x0001e580u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1E65E;

L_1E584:
    /* 0001e584   4  move.w (2ca2,A4),D0 */
    c->pc = RC_ADDR(0x0001e584u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2ca2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E588:
    /* 0001e588   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001e588u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1E58A:
    /* 0001e58a   4  sub.l D0,(3068,A4) */
    c->pc = RC_ADDR(0x0001e58au);
    rc_step(c, m, 24);
    t3 = (c->a[4] + 0x3068u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_L);
    rc_flags_sub(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_1E58E:
    /* 0001e58e   4  move.w (2ca2,A4),D0 */
    c->pc = RC_ADDR(0x0001e58eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2ca2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E592:
    /* 0001e592   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001e592u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1E594:
    /* 0001e594   4  sub.l D0,(306c,A4) */
    c->pc = RC_ADDR(0x0001e594u);
    rc_step(c, m, 24);
    t3 = (c->a[4] + 0x306cu);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_L);
    rc_flags_sub(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_1E598:
    /* 0001e598   4  move.w (2ca2,A4),D0 */
    c->pc = RC_ADDR(0x0001e598u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2ca2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E59C:
    /* 0001e59c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001e59cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1E59E:
    /* 0001e59e   4  sub.l D0,(3074,A4) */
    c->pc = RC_ADDR(0x0001e59eu);
    rc_step(c, m, 24);
    t3 = (c->a[4] + 0x3074u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_L);
    rc_flags_sub(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_1E5A2:
    /* 0001e5a2   4  move.w (2ca2,A4),D0 */
    c->pc = RC_ADDR(0x0001e5a2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2ca2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E5A6:
    /* 0001e5a6   4  muls.w #3,D0 */
    c->pc = RC_ADDR(0x0001e5a6u);
    rc_step(c, m, 42);
    t0 = 0x00000003u;
    rc_muls(c, 0, t0);

L_1E5AA:
    /* 0001e5aa   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001e5aau);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1E5AC:
    /* 0001e5ac   4  sub.l D0,(3070,A4) */
    c->pc = RC_ADDR(0x0001e5acu);
    rc_step(c, m, 24);
    t3 = (c->a[4] + 0x3070u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_L);
    rc_flags_sub(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_1E5B0:
    /* 0001e5b0   4  tst.l (3074,A4) */
    c->pc = RC_ADDR(0x0001e5b0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3074u));
    rc_set_nzvc(c, t0, RC_L);

L_1E5B4:
    /* 0001e5b4   2  bge 0001e5ba */
    c->pc = RC_ADDR(0x0001e5b4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1E5BA;

L_1E5B6:
    /* 0001e5b6   4  clr.l (3074,A4) */
    c->pc = RC_ADDR(0x0001e5b6u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] + 0x3074u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1E5BA:
    /* 0001e5ba   8  cmpi.l #16f,(3074,A4) */
    c->pc = RC_ADDR(0x0001e5bau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3074u));
    rc_cmp(c, RC_L, t0, 0x0000016fu);

L_1E5C2:
    /* 0001e5c2   2  ble 0001e5cc */
    c->pc = RC_ADDR(0x0001e5c2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1E5CC;

L_1E5C4:
    /* 0001e5c4   8  move.l #16f,(3074,A4) */
    c->pc = RC_ADDR(0x0001e5c4u);
    rc_step(c, m, 24);
    t0 = 0x0000016fu;
    rc_wr32(c, m, (c->a[4] + 0x3074u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E5CC:
    /* 0001e5cc   4  tst.l (3070,A4) */
    c->pc = RC_ADDR(0x0001e5ccu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3070u));
    rc_set_nzvc(c, t0, RC_L);

L_1E5D0:
    /* 0001e5d0   2  bge 0001e5d6 */
    c->pc = RC_ADDR(0x0001e5d0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1E5D6;

L_1E5D2:
    /* 0001e5d2   4  clr.l (3070,A4) */
    c->pc = RC_ADDR(0x0001e5d2u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] + 0x3070u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1E5D6:
    /* 0001e5d6   8  cmpi.l #16b,(3070,A4) */
    c->pc = RC_ADDR(0x0001e5d6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3070u));
    rc_cmp(c, RC_L, t0, 0x0000016bu);

L_1E5DE:
    /* 0001e5de   2  ble 0001e5e8 */
    c->pc = RC_ADDR(0x0001e5deu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1E5E8;

L_1E5E0:
    /* 0001e5e0   8  move.l #16b,(3070,A4) */
    c->pc = RC_ADDR(0x0001e5e0u);
    rc_step(c, m, 24);
    t0 = 0x0000016bu;
    rc_wr32(c, m, (c->a[4] + 0x3070u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E5E8:
    /* 0001e5e8   4  tst.l (3068,A4) */
    c->pc = RC_ADDR(0x0001e5e8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3068u));
    rc_set_nzvc(c, t0, RC_L);

L_1E5EC:
    /* 0001e5ec   2  bge 0001e61c */
    c->pc = RC_ADDR(0x0001e5ecu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1E61C;

L_1E5EE:
    /* 0001e5ee   4  clr.l (3068,A4) */
    c->pc = RC_ADDR(0x0001e5eeu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] + 0x3068u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1E5F2:
    /* 0001e5f2   4  move.w (2ca2,A4),D0 */
    c->pc = RC_ADDR(0x0001e5f2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2ca2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E5F6:
    /* 0001e5f6   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001e5f6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1E5F8:
    /* 0001e5f8   4  divs.w #4,D0 */
    c->pc = RC_ADDR(0x0001e5f8u);
    rc_step(c, m, 162);
    t0 = 0x00000004u;
    rc_divs(c, m, 0, t0);

L_1E5FC:
    /* 0001e5fc   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001e5fcu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E5FE:
    /* 0001e5fe   4  jsr (ffff818e,A4) */
    c->pc = RC_ADDR(0x0001e5feu);
    rc_step(c, m, 18);
    /* vector 66 */
    rc_push32(c, m, RC_ADDR(0x0001e602u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c84u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00013988u);
    return;

L_1E602:
    /* 0001e602   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001e602u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1E604:
    /* 0001e604   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001e604u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1E606:
    /* 0001e606   4  sub.l D0,(3060,A4) */
    c->pc = RC_ADDR(0x0001e606u);
    rc_step(c, m, 24);
    t3 = (c->a[4] + 0x3060u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_L);
    rc_flags_sub(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_1E60A:
    /* 0001e60a   8  cmpi.l #1,(3060,A4) */
    c->pc = RC_ADDR(0x0001e60au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3060u));
    rc_cmp(c, RC_L, t0, 0x00000001u);

L_1E612:
    /* 0001e612   2  bge 0001e61c */
    c->pc = RC_ADDR(0x0001e612u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1E61C;

L_1E614:
    /* 0001e614   8  move.l #1,(3060,A4) */
    c->pc = RC_ADDR(0x0001e614u);
    rc_step(c, m, 24);
    t0 = 0x00000001u;
    rc_wr32(c, m, (c->a[4] + 0x3060u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E61C:
    /* 0001e61c   8  cmpi.l #16f,(3068,A4) */
    c->pc = RC_ADDR(0x0001e61cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3068u));
    rc_cmp(c, RC_L, t0, 0x0000016fu);

L_1E624:
    /* 0001e624   2  ble 0001e62a */
    c->pc = RC_ADDR(0x0001e624u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1E62A;

L_1E626:
    /* 0001e626   2  unlk A5 */
    c->pc = RC_ADDR(0x0001e626u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1E628:
    /* 0001e628   2  rts */
    c->pc = RC_ADDR(0x0001e628u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_1E62A:
    /* 0001e62a   4  tst.l (306c,A4) */
    c->pc = RC_ADDR(0x0001e62au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x306cu));
    rc_set_nzvc(c, t0, RC_L);

L_1E62E:
    /* 0001e62e   2  bge 0001e632 */
    c->pc = RC_ADDR(0x0001e62eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1E632;

L_1E630:
    /* 0001e630   2  bra 0001e626 */
    c->pc = RC_ADDR(0x0001e630u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1E626;

L_1E632:
    /* 0001e632   8  cmpi.l #16f,(306c,A4) */
    c->pc = RC_ADDR(0x0001e632u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x306cu));
    rc_cmp(c, RC_L, t0, 0x0000016fu);

L_1E63A:
    /* 0001e63a   2  ble 0001e65c */
    c->pc = RC_ADDR(0x0001e63au);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1E65C;

L_1E63C:
    /* 0001e63c   8  move.l #16f,(306c,A4) */
    c->pc = RC_ADDR(0x0001e63cu);
    rc_step(c, m, 24);
    t0 = 0x0000016fu;
    rc_wr32(c, m, (c->a[4] + 0x306cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E644:
    /* 0001e644   4  move.w (2ca2,A4),D0 */
    c->pc = RC_ADDR(0x0001e644u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2ca2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E648:
    /* 0001e648   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001e648u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1E64A:
    /* 0001e64a   4  divs.w #4,D0 */
    c->pc = RC_ADDR(0x0001e64au);
    rc_step(c, m, 162);
    t0 = 0x00000004u;
    rc_divs(c, m, 0, t0);

L_1E64E:
    /* 0001e64e   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001e64eu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E650:
    /* 0001e650   4  jsr (ffff818e,A4) */
    c->pc = RC_ADDR(0x0001e650u);
    rc_step(c, m, 18);
    /* vector 66 */
    rc_push32(c, m, RC_ADDR(0x0001e654u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c84u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00013988u);
    return;

L_1E654:
    /* 0001e654   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001e654u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1E656:
    /* 0001e656   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001e656u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1E658:
    /* 0001e658   4  sub.l D0,(3064,A4) */
    c->pc = RC_ADDR(0x0001e658u);
    rc_step(c, m, 24);
    t3 = (c->a[4] + 0x3064u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_L);
    rc_flags_sub(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_1E65C:
    /* 0001e65c   2  bra 0001e670 */
    c->pc = RC_ADDR(0x0001e65cu);
    rc_step(c, m, 10);
    goto L_1E670;

L_1E65E:
    /* 0001e65e   8  move.l #2710,(3070,A4) */
    c->pc = RC_ADDR(0x0001e65eu);
    rc_step(c, m, 24);
    t0 = 0x00002710u;
    rc_wr32(c, m, (c->a[4] + 0x3070u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E666:
    /* 0001e666   8  move.l #2710,(3074,A4) */
    c->pc = RC_ADDR(0x0001e666u);
    rc_step(c, m, 24);
    t0 = 0x00002710u;
    rc_wr32(c, m, (c->a[4] + 0x3074u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E66E:
    /* 0001e66e   2  bra 0001e626 */
    c->pc = RC_ADDR(0x0001e66eu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1E626;

L_1E670:
    /* 0001e670   4  bra 0001e764 */
    c->pc = RC_ADDR(0x0001e670u);
    rc_step(c, m, 10);
    goto L_1E764;

L_1E674:
    /* 0001e674   4  tst.w (2ca6,A4) */
    c->pc = RC_ADDR(0x0001e674u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2ca6u));
    rc_set_nzvc(c, t0, RC_W);

L_1E678:
    /* 0001e678   2  beq 0001e688 */
    c->pc = RC_ADDR(0x0001e678u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1E688;

L_1E67A:
    /* 0001e67a   6  move.w (2cb6,A4),(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001e67au);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2cb6u));
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E680:
    /* 0001e680   6  move.w (305c,A4),(ffffb24a,A4) */
    c->pc = RC_ADDR(0x0001e680u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x305cu));
    rc_wr16(c, m, (c->a[4] - 0x4db6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E686:
    /* 0001e686   2  bra 0001e6a6 */
    c->pc = RC_ADDR(0x0001e686u);
    rc_step(c, m, 10);
    goto L_1E6A6;

L_1E688:
    /* 0001e688   4  tst.w (ffffb24a,A4) */
    c->pc = RC_ADDR(0x0001e688u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db6u));
    rc_set_nzvc(c, t0, RC_W);

L_1E68C:
    /* 0001e68c   2  bne 0001e6a6 */
    c->pc = RC_ADDR(0x0001e68cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1E6A6;

L_1E68E:
    /* 0001e68e   4  tst.w (2cb6,A4) */
    c->pc = RC_ADDR(0x0001e68eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2cb6u));
    rc_set_nzvc(c, t0, RC_W);

L_1E692:
    /* 0001e692   2  beq 0001e6a6 */
    c->pc = RC_ADDR(0x0001e692u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1E6A6;

L_1E694:
    /* 0001e694   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0001e694u);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E698:
    /* 0001e698   4  jsr (ffff81a6,A4) */
    c->pc = RC_ADDR(0x0001e698u);
    rc_step(c, m, 18);
    /* vector 70 */
    rc_push32(c, m, RC_ADDR(0x0001e69cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c9cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000187eeu);
    return;

L_1E69C:
    /* 0001e69c   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001e69cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1E69E:
    /* 0001e69e   2  moveq #1,D1 */
    c->pc = RC_ADDR(0x0001e69eu);
    rc_step(c, m, 4);
    c->d[1] = 0x00000001u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1E6A0:
    /* 0001e6a0   2  sub.w D0,D1 */
    c->pc = RC_ADDR(0x0001e6a0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1E6A2:
    /* 0001e6a2   4  move.w D1,(ffffb24a,A4) */
    c->pc = RC_ADDR(0x0001e6a2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x4db6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E6A6:
    /* 0001e6a6   4  tst.w (ffffb24a,A4) */
    c->pc = RC_ADDR(0x0001e6a6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db6u));
    rc_set_nzvc(c, t0, RC_W);

L_1E6AA:
    /* 0001e6aa   4  beq 0001e75e */
    c->pc = RC_ADDR(0x0001e6aau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1E75E;

L_1E6AE:
    /* 0001e6ae   4  tst.w (2cb6,A4) */
    c->pc = RC_ADDR(0x0001e6aeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2cb6u));
    rc_set_nzvc(c, t0, RC_W);

L_1E6B2:
    /* 0001e6b2   4  beq 0001e75e */
    c->pc = RC_ADDR(0x0001e6b2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1E75E;

L_1E6B6:
    /* 0001e6b6   6  move.w (ffffb24a,A4),(305c,A4) */
    c->pc = RC_ADDR(0x0001e6b6u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db6u));
    rc_wr16(c, m, (c->a[4] + 0x305cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E6BC:
    /* 0001e6bc   4  tst.w (ffffb24a,A4) */
    c->pc = RC_ADDR(0x0001e6bcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db6u));
    rc_set_nzvc(c, t0, RC_W);

L_1E6C0:
    /* 0001e6c0   2  bge 0001e706 */
    c->pc = RC_ADDR(0x0001e6c0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1E706;

L_1E6C2:
    /* 0001e6c2   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001e6c2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E6C6:
    /* 0001e6c6   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001e6c6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1E6C8:
    /* 0001e6c8   4  add.l D0,(3060,A4) */
    c->pc = RC_ADDR(0x0001e6c8u);
    rc_step(c, m, 24);
    t3 = (c->a[4] + 0x3060u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_1E6CC:
    /* 0001e6cc   8  cmpi.l #69,(3060,A4) */
    c->pc = RC_ADDR(0x0001e6ccu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3060u));
    rc_cmp(c, RC_L, t0, 0x00000069u);

L_1E6D4:
    /* 0001e6d4   2  ble 0001e6ec */
    c->pc = RC_ADDR(0x0001e6d4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1E6EC;

L_1E6D6:
    /* 0001e6d6   8  move.l #69,(3060,A4) */
    c->pc = RC_ADDR(0x0001e6d6u);
    rc_step(c, m, 24);
    t0 = 0x00000069u;
    rc_wr32(c, m, (c->a[4] + 0x3060u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E6DE:
    /* 0001e6de   4  tst.w (2ca6,A4) */
    c->pc = RC_ADDR(0x0001e6deu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2ca6u));
    rc_set_nzvc(c, t0, RC_W);

L_1E6E2:
    /* 0001e6e2   2  beq 0001e6ea */
    c->pc = RC_ADDR(0x0001e6e2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1E6EA;

L_1E6E4:
    /* 0001e6e4   6  move.w #1,(3078,A4) */
    c->pc = RC_ADDR(0x0001e6e4u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x3078u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E6EA:
    /* 0001e6ea   2  bra 0001e704 */
    c->pc = RC_ADDR(0x0001e6eau);
    rc_step(c, m, 10);
    goto L_1E704;

L_1E6EC:
    /* 0001e6ec   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001e6ecu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E6F0:
    /* 0001e6f0   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001e6f0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1E6F2:
    /* 0001e6f2   4  sub.l D0,(3064,A4) */
    c->pc = RC_ADDR(0x0001e6f2u);
    rc_step(c, m, 24);
    t3 = (c->a[4] + 0x3064u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_L);
    rc_flags_sub(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_1E6F6:
    /* 0001e6f6   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001e6f6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E6FA:
    /* 0001e6fa   4  muls.w #5,D0 */
    c->pc = RC_ADDR(0x0001e6fau);
    rc_step(c, m, 42);
    t0 = 0x00000005u;
    rc_muls(c, 0, t0);

L_1E6FE:
    /* 0001e6fe   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001e6feu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1E700:
    /* 0001e700   4  add.l D0,(3070,A4) */
    c->pc = RC_ADDR(0x0001e700u);
    rc_step(c, m, 24);
    t3 = (c->a[4] + 0x3070u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_1E704:
    /* 0001e704   2  bra 0001e748 */
    c->pc = RC_ADDR(0x0001e704u);
    rc_step(c, m, 10);
    goto L_1E748;

L_1E706:
    /* 0001e706   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001e706u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E70A:
    /* 0001e70a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001e70au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1E70C:
    /* 0001e70c   4  add.l D0,(3064,A4) */
    c->pc = RC_ADDR(0x0001e70cu);
    rc_step(c, m, 24);
    t3 = (c->a[4] + 0x3064u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_1E710:
    /* 0001e710   8  cmpi.l #69,(3064,A4) */
    c->pc = RC_ADDR(0x0001e710u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3064u));
    rc_cmp(c, RC_L, t0, 0x00000069u);

L_1E718:
    /* 0001e718   2  ble 0001e730 */
    c->pc = RC_ADDR(0x0001e718u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1E730;

L_1E71A:
    /* 0001e71a   8  move.l #69,(3064,A4) */
    c->pc = RC_ADDR(0x0001e71au);
    rc_step(c, m, 24);
    t0 = 0x00000069u;
    rc_wr32(c, m, (c->a[4] + 0x3064u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E722:
    /* 0001e722   4  tst.w (2ca6,A4) */
    c->pc = RC_ADDR(0x0001e722u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2ca6u));
    rc_set_nzvc(c, t0, RC_W);

L_1E726:
    /* 0001e726   2  beq 0001e72e */
    c->pc = RC_ADDR(0x0001e726u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1E72E;

L_1E728:
    /* 0001e728   6  move.w #1,(3078,A4) */
    c->pc = RC_ADDR(0x0001e728u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x3078u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E72E:
    /* 0001e72e   2  bra 0001e748 */
    c->pc = RC_ADDR(0x0001e72eu);
    rc_step(c, m, 10);
    goto L_1E748;

L_1E730:
    /* 0001e730   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001e730u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E734:
    /* 0001e734   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001e734u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1E736:
    /* 0001e736   4  sub.l D0,(3060,A4) */
    c->pc = RC_ADDR(0x0001e736u);
    rc_step(c, m, 24);
    t3 = (c->a[4] + 0x3060u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_L);
    rc_flags_sub(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_1E73A:
    /* 0001e73a   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001e73au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E73E:
    /* 0001e73e   4  muls.w #5,D0 */
    c->pc = RC_ADDR(0x0001e73eu);
    rc_step(c, m, 42);
    t0 = 0x00000005u;
    rc_muls(c, 0, t0);

L_1E742:
    /* 0001e742   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001e742u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1E744:
    /* 0001e744   4  sub.l D0,(3070,A4) */
    c->pc = RC_ADDR(0x0001e744u);
    rc_step(c, m, 24);
    t3 = (c->a[4] + 0x3070u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_L);
    rc_flags_sub(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_1E748:
    /* 0001e748   4  tst.l (3060,A4) */
    c->pc = RC_ADDR(0x0001e748u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3060u));
    rc_set_nzvc(c, t0, RC_L);

L_1E74C:
    /* 0001e74c   2  bge 0001e752 */
    c->pc = RC_ADDR(0x0001e74cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1E752;

L_1E74E:
    /* 0001e74e   4  clr.l (3060,A4) */
    c->pc = RC_ADDR(0x0001e74eu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] + 0x3060u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1E752:
    /* 0001e752   4  tst.l (3064,A4) */
    c->pc = RC_ADDR(0x0001e752u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3064u));
    rc_set_nzvc(c, t0, RC_L);

L_1E756:
    /* 0001e756   2  bge 0001e75c */
    c->pc = RC_ADDR(0x0001e756u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1E75C;

L_1E758:
    /* 0001e758   4  clr.l (3064,A4) */
    c->pc = RC_ADDR(0x0001e758u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] + 0x3064u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1E75C:
    /* 0001e75c   2  bra 0001e764 */
    c->pc = RC_ADDR(0x0001e75cu);
    rc_step(c, m, 10);
    goto L_1E764;

L_1E75E:
    /* 0001e75e   6  move.w #1,(305c,A4) */
    c->pc = RC_ADDR(0x0001e75eu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x305cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E764:
    /* 0001e764   4  jsr (ffff83ce,A4) */
    c->pc = RC_ADDR(0x0001e764u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001e768u));
    rc_depth++;
    t3 = (c->a[4] - 0x7c32u);
    c->pc = t3;
    return;

L_1E768:
    /* 0001e768   4  pea (0000001c).l */
    c->pc = RC_ADDR(0x0001e768u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000001cu);

L_1E76C:
    /* 0001e76c   4  pea (2de0,A4) */
    c->pc = RC_ADDR(0x0001e76cu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2de0u));

L_1E770:
    /* 0001e770   4  jsr (ffff83b0,A4) */
    c->pc = RC_ADDR(0x0001e770u);
    rc_step(c, m, 18);
    /* vector 157 */
    rc_push32(c, m, RC_ADDR(0x0001e774u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023ea6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002398cu);
    return;

L_1E774:
    /* 0001e774   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001e774u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1E776:
    /* 0001e776   4  pea (00000001).l */
    c->pc = RC_ADDR(0x0001e776u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000001u);

L_1E77A:
    /* 0001e77a   4  move.l (3074,A4),-(A7) */
    c->pc = RC_ADDR(0x0001e77au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3074u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E77E:
    /* 0001e77e   4  pea (2de0,A4) */
    c->pc = RC_ADDR(0x0001e77eu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2de0u));

L_1E782:
    /* 0001e782   4  jsr (00023836) */
    c->pc = RC_ADDR(0x0001e782u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001e786u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023836u);
    return;

L_1E786:
    /* 0001e786   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001e786u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_1E78A:
    /* 0001e78a   4  move.l (3060,A4),-(A7) */
    c->pc = RC_ADDR(0x0001e78au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3060u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E78E:
    /* 0001e78e   4  move.l (3068,A4),-(A7) */
    c->pc = RC_ADDR(0x0001e78eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3068u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E792:
    /* 0001e792   4  pea (2de0,A4) */
    c->pc = RC_ADDR(0x0001e792u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2de0u));

L_1E796:
    /* 0001e796   4  jsr (00023818) */
    c->pc = RC_ADDR(0x0001e796u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001e79au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023818u);
    return;

L_1E79A:
    /* 0001e79a   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001e79au);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_1E79E:
    /* 0001e79e   4  pea (0000006f).l */
    c->pc = RC_ADDR(0x0001e79eu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000006fu);

L_1E7A2:
    /* 0001e7a2   4  move.l (3068,A4),-(A7) */
    c->pc = RC_ADDR(0x0001e7a2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3068u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E7A6:
    /* 0001e7a6   4  pea (2de0,A4) */
    c->pc = RC_ADDR(0x0001e7a6u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2de0u));

L_1E7AA:
    /* 0001e7aa   4  jsr (00023818) */
    c->pc = RC_ADDR(0x0001e7aau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001e7aeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023818u);
    return;

L_1E7AE:
    /* 0001e7ae   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001e7aeu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_1E7B2:
    /* 0001e7b2   4  pea (0000006f).l */
    c->pc = RC_ADDR(0x0001e7b2u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000006fu);

L_1E7B6:
    /* 0001e7b6   4  move.l (306c,A4),-(A7) */
    c->pc = RC_ADDR(0x0001e7b6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x306cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E7BA:
    /* 0001e7ba   4  pea (2de0,A4) */
    c->pc = RC_ADDR(0x0001e7bau);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2de0u));

L_1E7BE:
    /* 0001e7be   4  jsr (00023818) */
    c->pc = RC_ADDR(0x0001e7beu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001e7c2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023818u);
    return;

L_1E7C2:
    /* 0001e7c2   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001e7c2u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_1E7C6:
    /* 0001e7c6   4  move.l (3064,A4),-(A7) */
    c->pc = RC_ADDR(0x0001e7c6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3064u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E7CA:
    /* 0001e7ca   4  move.l (306c,A4),-(A7) */
    c->pc = RC_ADDR(0x0001e7cau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x306cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E7CE:
    /* 0001e7ce   4  pea (2de0,A4) */
    c->pc = RC_ADDR(0x0001e7ceu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2de0u));

L_1E7D2:
    /* 0001e7d2   4  jsr (00023818) */
    c->pc = RC_ADDR(0x0001e7d2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001e7d6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023818u);
    return;

L_1E7D6:
    /* 0001e7d6   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001e7d6u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_1E7DA:
    /* 0001e7da   4  pea (2de0,A4) */
    c->pc = RC_ADDR(0x0001e7dau);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2de0u));

L_1E7DE:
    /* 0001e7de   4  jsr (0002382a) */
    c->pc = RC_ADDR(0x0001e7deu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001e7e2u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002382au);
    return;

L_1E7E2:
    /* 0001e7e2   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001e7e2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1E7E4:
    /* 0001e7e4   4  pea (0000001e).l */
    c->pc = RC_ADDR(0x0001e7e4u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000001eu);

L_1E7E8:
    /* 0001e7e8   4  pea (2de0,A4) */
    c->pc = RC_ADDR(0x0001e7e8u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2de0u));

L_1E7EC:
    /* 0001e7ec   4  jsr (ffff83b0,A4) */
    c->pc = RC_ADDR(0x0001e7ecu);
    rc_step(c, m, 18);
    /* vector 157 */
    rc_push32(c, m, RC_ADDR(0x0001e7f0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023ea6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002398cu);
    return;

L_1E7F0:
    /* 0001e7f0   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001e7f0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1E7F2:
    /* 0001e7f2   4  pea (00000001).l */
    c->pc = RC_ADDR(0x0001e7f2u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000001u);

L_1E7F6:
    /* 0001e7f6   4  move.l (3074,A4),-(A7) */
    c->pc = RC_ADDR(0x0001e7f6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3074u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E7FA:
    /* 0001e7fa   4  pea (2de0,A4) */
    c->pc = RC_ADDR(0x0001e7fau);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2de0u));

L_1E7FE:
    /* 0001e7fe   4  jsr (00023836) */
    c->pc = RC_ADDR(0x0001e7feu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001e802u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023836u);
    return;

L_1E802:
    /* 0001e802   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001e802u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_1E806:
    /* 0001e806   4  pea (0000006f).l */
    c->pc = RC_ADDR(0x0001e806u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000006fu);

L_1E80A:
    /* 0001e80a   4  move.l (3070,A4),-(A7) */
    c->pc = RC_ADDR(0x0001e80au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3070u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E80E:
    /* 0001e80e   4  pea (2de0,A4) */
    c->pc = RC_ADDR(0x0001e80eu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2de0u));

L_1E812:
    /* 0001e812   4  jsr (00023818) */
    c->pc = RC_ADDR(0x0001e812u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001e816u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023818u);
    return;

L_1E816:
    /* 0001e816   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001e816u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_1E81A:
    /* 0001e81a   4  pea (0000006f).l */
    c->pc = RC_ADDR(0x0001e81au);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000006fu);

L_1E81E:
    /* 0001e81e   4  move.l (3070,A4),D0 */
    c->pc = RC_ADDR(0x0001e81eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3070u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E822:
    /* 0001e822   2  addq.l #4,D0 */
    c->pc = RC_ADDR(0x0001e822u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + 0x00000004u;
    rc_flags_add(c, RC_L, t1, 0x00000004u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1E824:
    /* 0001e824   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001e824u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E826:
    /* 0001e826   4  pea (2de0,A4) */
    c->pc = RC_ADDR(0x0001e826u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2de0u));

L_1E82A:
    /* 0001e82a   4  jsr (00023818) */
    c->pc = RC_ADDR(0x0001e82au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001e82eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023818u);
    return;

L_1E82E:
    /* 0001e82e   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001e82eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_1E832:
    /* 0001e832   4  pea (2de0,A4) */
    c->pc = RC_ADDR(0x0001e832u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2de0u));

L_1E836:
    /* 0001e836   4  jsr (0002382a) */
    c->pc = RC_ADDR(0x0001e836u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001e83au));
    rc_depth++;
    c->pc = RC_ADDR(0x0002382au);
    return;

L_1E83A:
    /* 0001e83a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001e83au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1E83C:
    /* 0001e83c   4  jsr (ffff83ce,A4) */
    c->pc = RC_ADDR(0x0001e83cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001e840u));
    rc_depth++;
    t3 = (c->a[4] - 0x7c32u);
    c->pc = t3;
    return;

L_1E840:
    /* 0001e840   4  bra 0001e626 */
    c->pc = RC_ADDR(0x0001e840u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1E626;

}
