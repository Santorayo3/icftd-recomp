/* fn_0001d6e4 - 408 byte(s), 117 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001d6e4(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001d6e4u): goto L_1D6E4;
    case RC_ADDR(0x0001d6e8u): goto L_1D6E8;
    case RC_ADDR(0x0001d6ecu): goto L_1D6EC;
    case RC_ADDR(0x0001d6eeu): goto L_1D6EE;
    case RC_ADDR(0x0001d6f2u): goto L_1D6F2;
    case RC_ADDR(0x0001d6f4u): goto L_1D6F4;
    case RC_ADDR(0x0001d6fau): goto L_1D6FA;
    case RC_ADDR(0x0001d6fcu): goto L_1D6FC;
    case RC_ADDR(0x0001d700u): goto L_1D700;
    case RC_ADDR(0x0001d704u): goto L_1D704;
    case RC_ADDR(0x0001d708u): goto L_1D708;
    case RC_ADDR(0x0001d70cu): goto L_1D70C;
    case RC_ADDR(0x0001d70eu): goto L_1D70E;
    case RC_ADDR(0x0001d710u): goto L_1D710;
    case RC_ADDR(0x0001d716u): goto L_1D716;
    case RC_ADDR(0x0001d718u): goto L_1D718;
    case RC_ADDR(0x0001d71cu): goto L_1D71C;
    case RC_ADDR(0x0001d720u): goto L_1D720;
    case RC_ADDR(0x0001d722u): goto L_1D722;
    case RC_ADDR(0x0001d726u): goto L_1D726;
    case RC_ADDR(0x0001d728u): goto L_1D728;
    case RC_ADDR(0x0001d72cu): goto L_1D72C;
    case RC_ADDR(0x0001d72eu): goto L_1D72E;
    case RC_ADDR(0x0001d732u): goto L_1D732;
    case RC_ADDR(0x0001d736u): goto L_1D736;
    case RC_ADDR(0x0001d738u): goto L_1D738;
    case RC_ADDR(0x0001d73cu): goto L_1D73C;
    case RC_ADDR(0x0001d740u): goto L_1D740;
    case RC_ADDR(0x0001d742u): goto L_1D742;
    case RC_ADDR(0x0001d746u): goto L_1D746;
    case RC_ADDR(0x0001d74au): goto L_1D74A;
    case RC_ADDR(0x0001d74eu): goto L_1D74E;
    case RC_ADDR(0x0001d750u): goto L_1D750;
    case RC_ADDR(0x0001d754u): goto L_1D754;
    case RC_ADDR(0x0001d756u): goto L_1D756;
    case RC_ADDR(0x0001d75au): goto L_1D75A;
    case RC_ADDR(0x0001d75eu): goto L_1D75E;
    case RC_ADDR(0x0001d764u): goto L_1D764;
    case RC_ADDR(0x0001d76au): goto L_1D76A;
    case RC_ADDR(0x0001d76cu): goto L_1D76C;
    case RC_ADDR(0x0001d772u): goto L_1D772;
    case RC_ADDR(0x0001d778u): goto L_1D778;
    case RC_ADDR(0x0001d77au): goto L_1D77A;
    case RC_ADDR(0x0001d780u): goto L_1D780;
    case RC_ADDR(0x0001d784u): goto L_1D784;
    case RC_ADDR(0x0001d788u): goto L_1D788;
    case RC_ADDR(0x0001d78cu): goto L_1D78C;
    case RC_ADDR(0x0001d790u): goto L_1D790;
    case RC_ADDR(0x0001d792u): goto L_1D792;
    case RC_ADDR(0x0001d796u): goto L_1D796;
    case RC_ADDR(0x0001d79cu): goto L_1D79C;
    case RC_ADDR(0x0001d79eu): goto L_1D79E;
    case RC_ADDR(0x0001d7a4u): goto L_1D7A4;
    case RC_ADDR(0x0001d7a8u): goto L_1D7A8;
    case RC_ADDR(0x0001d7aau): goto L_1D7AA;
    case RC_ADDR(0x0001d7b0u): goto L_1D7B0;
    case RC_ADDR(0x0001d7b4u): goto L_1D7B4;
    case RC_ADDR(0x0001d7b6u): goto L_1D7B6;
    case RC_ADDR(0x0001d7bau): goto L_1D7BA;
    case RC_ADDR(0x0001d7beu): goto L_1D7BE;
    case RC_ADDR(0x0001d7c2u): goto L_1D7C2;
    case RC_ADDR(0x0001d7c4u): goto L_1D7C4;
    case RC_ADDR(0x0001d7c8u): goto L_1D7C8;
    case RC_ADDR(0x0001d7ccu): goto L_1D7CC;
    case RC_ADDR(0x0001d7d0u): goto L_1D7D0;
    case RC_ADDR(0x0001d7d2u): goto L_1D7D2;
    case RC_ADDR(0x0001d7d6u): goto L_1D7D6;
    case RC_ADDR(0x0001d7dcu): goto L_1D7DC;
    case RC_ADDR(0x0001d7deu): goto L_1D7DE;
    case RC_ADDR(0x0001d7e2u): goto L_1D7E2;
    case RC_ADDR(0x0001d7e6u): goto L_1D7E6;
    case RC_ADDR(0x0001d7eau): goto L_1D7EA;
    case RC_ADDR(0x0001d7eeu): goto L_1D7EE;
    case RC_ADDR(0x0001d7f2u): goto L_1D7F2;
    case RC_ADDR(0x0001d7f4u): goto L_1D7F4;
    case RC_ADDR(0x0001d7f6u): goto L_1D7F6;
    case RC_ADDR(0x0001d7fau): goto L_1D7FA;
    case RC_ADDR(0x0001d7fcu): goto L_1D7FC;
    case RC_ADDR(0x0001d800u): goto L_1D800;
    case RC_ADDR(0x0001d804u): goto L_1D804;
    case RC_ADDR(0x0001d808u): goto L_1D808;
    case RC_ADDR(0x0001d80au): goto L_1D80A;
    case RC_ADDR(0x0001d80eu): goto L_1D80E;
    case RC_ADDR(0x0001d810u): goto L_1D810;
    case RC_ADDR(0x0001d814u): goto L_1D814;
    case RC_ADDR(0x0001d816u): goto L_1D816;
    case RC_ADDR(0x0001d81cu): goto L_1D81C;
    case RC_ADDR(0x0001d81eu): goto L_1D81E;
    case RC_ADDR(0x0001d822u): goto L_1D822;
    case RC_ADDR(0x0001d824u): goto L_1D824;
    case RC_ADDR(0x0001d828u): goto L_1D828;
    case RC_ADDR(0x0001d82au): goto L_1D82A;
    case RC_ADDR(0x0001d82cu): goto L_1D82C;
    case RC_ADDR(0x0001d82eu): goto L_1D82E;
    case RC_ADDR(0x0001d832u): goto L_1D832;
    case RC_ADDR(0x0001d834u): goto L_1D834;
    case RC_ADDR(0x0001d836u): goto L_1D836;
    case RC_ADDR(0x0001d838u): goto L_1D838;
    case RC_ADDR(0x0001d83cu): goto L_1D83C;
    case RC_ADDR(0x0001d840u): goto L_1D840;
    case RC_ADDR(0x0001d842u): goto L_1D842;
    case RC_ADDR(0x0001d846u): goto L_1D846;
    case RC_ADDR(0x0001d848u): goto L_1D848;
    case RC_ADDR(0x0001d84cu): goto L_1D84C;
    case RC_ADDR(0x0001d84eu): goto L_1D84E;
    case RC_ADDR(0x0001d852u): goto L_1D852;
    case RC_ADDR(0x0001d862u): goto L_1D862;
    case RC_ADDR(0x0001d868u): goto L_1D868;
    case RC_ADDR(0x0001d86au): goto L_1D86A;
    case RC_ADDR(0x0001d86cu): goto L_1D86C;
    case RC_ADDR(0x0001d870u): goto L_1D870;
    case RC_ADDR(0x0001d874u): goto L_1D874;
    case RC_ADDR(0x0001d878u): goto L_1D878;
    case RC_ADDR(0x0001d87cu): goto L_1D87C;
    case RC_ADDR(0x0001d87eu): goto L_1D87E;
    case RC_ADDR(0x0001d882u): goto L_1D882;
    case RC_ADDR(0x0001d886u): goto L_1D886;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1D6E4:
    /* 0001d6e4   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001d6e4u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1D6E8:
    /* 0001d6e8   4  tst.w (7ac,A4) */
    c->pc = RC_ADDR(0x0001d6e8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7acu));
    rc_set_nzvc(c, t0, RC_W);

L_1D6EC:
    /* 0001d6ec   2  bne 0001d710 */
    c->pc = RC_ADDR(0x0001d6ecu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1D710;

L_1D6EE:
    /* 0001d6ee   4  tst.w (ffffb24c,A4) */
    c->pc = RC_ADDR(0x0001d6eeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db4u));
    rc_set_nzvc(c, t0, RC_W);

L_1D6F2:
    /* 0001d6f2   2  beq 0001d710 */
    c->pc = RC_ADDR(0x0001d6f2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1D710;

L_1D6F4:
    /* 0001d6f4   6  cmpi.w #6,(7a6,A4) */
    c->pc = RC_ADDR(0x0001d6f4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7a6u));
    rc_cmp(c, RC_W, t0, 0x00000006u);

L_1D6FA:
    /* 0001d6fa   2  bne 0001d710 */
    c->pc = RC_ADDR(0x0001d6fau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1D710;

L_1D6FC:
    /* 0001d6fc   4  jsr (ffff812e,A4) */
    c->pc = RC_ADDR(0x0001d6fcu);
    rc_step(c, m, 18);
    /* vector 50 */
    rc_push32(c, m, RC_ADDR(0x0001d700u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c24u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000104f6u);
    return;

L_1D700:
    /* 0001d700   4  jsr (0001da6a) */
    c->pc = RC_ADDR(0x0001d700u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001d704u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001da6au);
    return;

L_1D704:
    /* 0001d704   4  addq.w #1,(7a4,A4) */
    c->pc = RC_ADDR(0x0001d704u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x7a4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1D708:
    /* 0001d708   4  clr.w (858,A4) */
    c->pc = RC_ADDR(0x0001d708u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x858u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D70C:
    /* 0001d70c   2  unlk A5 */
    c->pc = RC_ADDR(0x0001d70cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1D70E:
    /* 0001d70e   2  rts */
    c->pc = RC_ADDR(0x0001d70eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_1D710:
    /* 0001d710   6  cmpi.w #1,(ffffb24c,A4) */
    c->pc = RC_ADDR(0x0001d710u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db4u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_1D716:
    /* 0001d716   2  bne 0001d71c */
    c->pc = RC_ADDR(0x0001d716u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1D71C;

L_1D718:
    /* 0001d718   4  clr.w (7a4,A4) */
    c->pc = RC_ADDR(0x0001d718u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x7a4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D71C:
    /* 0001d71c   4  tst.w (ffffb24a,A4) */
    c->pc = RC_ADDR(0x0001d71cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db6u));
    rc_set_nzvc(c, t0, RC_W);

L_1D720:
    /* 0001d720   2  beq 0001d728 */
    c->pc = RC_ADDR(0x0001d720u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1D728;

L_1D722:
    /* 0001d722   4  tst.w (ffffb24e,A4) */
    c->pc = RC_ADDR(0x0001d722u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db2u));
    rc_set_nzvc(c, t0, RC_W);

L_1D726:
    /* 0001d726   2  bne 0001d73c */
    c->pc = RC_ADDR(0x0001d726u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1D73C;

L_1D728:
    /* 0001d728   4  tst.w (7ac,A4) */
    c->pc = RC_ADDR(0x0001d728u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7acu));
    rc_set_nzvc(c, t0, RC_W);

L_1D72C:
    /* 0001d72c   2  ble 0001d732 */
    c->pc = RC_ADDR(0x0001d72cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1D732;

L_1D72E:
    /* 0001d72e   4  subq.w #1,(7ac,A4) */
    c->pc = RC_ADDR(0x0001d72eu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x7acu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1D732:
    /* 0001d732   4  tst.w (7ac,A4) */
    c->pc = RC_ADDR(0x0001d732u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7acu));
    rc_set_nzvc(c, t0, RC_W);

L_1D736:
    /* 0001d736   2  bge 0001d73c */
    c->pc = RC_ADDR(0x0001d736u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1D73C;

L_1D738:
    /* 0001d738   4  addq.w #1,(7ac,A4) */
    c->pc = RC_ADDR(0x0001d738u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x7acu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1D73C:
    /* 0001d73c   4  tst.w (7ac,A4) */
    c->pc = RC_ADDR(0x0001d73cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7acu));
    rc_set_nzvc(c, t0, RC_W);

L_1D740:
    /* 0001d740   2  bne 0001d74a */
    c->pc = RC_ADDR(0x0001d740u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1D74A;

L_1D742:
    /* 0001d742   4  move.w (ffffb24a,A4),D0 */
    c->pc = RC_ADDR(0x0001d742u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D746:
    /* 0001d746   4  sub.w D0,(7ac,A4) */
    c->pc = RC_ADDR(0x0001d746u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x7acu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1D74A:
    /* 0001d74a   4  tst.w (ffffb24e,A4) */
    c->pc = RC_ADDR(0x0001d74au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db2u));
    rc_set_nzvc(c, t0, RC_W);

L_1D74E:
    /* 0001d74e   2  beq 0001d764 */
    c->pc = RC_ADDR(0x0001d74eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1D764;

L_1D750:
    /* 0001d750   4  tst.w (ffffb24a,A4) */
    c->pc = RC_ADDR(0x0001d750u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db6u));
    rc_set_nzvc(c, t0, RC_W);

L_1D754:
    /* 0001d754   2  beq 0001d764 */
    c->pc = RC_ADDR(0x0001d754u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1D764;

L_1D756:
    /* 0001d756   4  move.w (ffffb24a,A4),D0 */
    c->pc = RC_ADDR(0x0001d756u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D75A:
    /* 0001d75a   4  sub.w D0,(7ac,A4) */
    c->pc = RC_ADDR(0x0001d75au);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x7acu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1D75E:
    /* 0001d75e   6  move.w #1,(1dc8,A4) */
    c->pc = RC_ADDR(0x0001d75eu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1dc8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D764:
    /* 0001d764   6  cmpi.w #4,(7ac,A4) */
    c->pc = RC_ADDR(0x0001d764u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7acu));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_1D76A:
    /* 0001d76a   2  ble 0001d772 */
    c->pc = RC_ADDR(0x0001d76au);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1D772;

L_1D76C:
    /* 0001d76c   6  move.w #4,(7ac,A4) */
    c->pc = RC_ADDR(0x0001d76cu);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] + 0x7acu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D772:
    /* 0001d772   6  cmpi.w #fffc,(7ac,A4) */
    c->pc = RC_ADDR(0x0001d772u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7acu));
    rc_cmp(c, RC_W, t0, 0x0000fffcu);

L_1D778:
    /* 0001d778   2  bge 0001d780 */
    c->pc = RC_ADDR(0x0001d778u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1D780;

L_1D77A:
    /* 0001d77a   6  move.w #fffc,(7ac,A4) */
    c->pc = RC_ADDR(0x0001d77au);
    rc_step(c, m, 16);
    t0 = 0x0000fffcu;
    rc_wr16(c, m, (c->a[4] + 0x7acu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D780:
    /* 0001d780   4  move.w (7ac,A4),D0 */
    c->pc = RC_ADDR(0x0001d780u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7acu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D784:
    /* 0001d784   4  add.w D0,(7a8,A4) */
    c->pc = RC_ADDR(0x0001d784u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x7a8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1D788:
    /* 0001d788   4  move.w (7ac,A4),-(A7) */
    c->pc = RC_ADDR(0x0001d788u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7acu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D78C:
    /* 0001d78c   4  jsr (ffff81ca,A4) */
    c->pc = RC_ADDR(0x0001d78cu);
    rc_step(c, m, 18);
    /* vector 76 */
    rc_push32(c, m, RC_ADDR(0x0001d790u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cc0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001bd70u);
    return;

L_1D790:
    /* 0001d790   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001d790u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1D792:
    /* 0001d792   4  add.w D0,(7aa,A4) */
    c->pc = RC_ADDR(0x0001d792u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x7aau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1D796:
    /* 0001d796   6  cmpi.w #3c,(7a8,A4) */
    c->pc = RC_ADDR(0x0001d796u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7a8u));
    rc_cmp(c, RC_W, t0, 0x0000003cu);

L_1D79C:
    /* 0001d79c   2  blt 0001d7a4 */
    c->pc = RC_ADDR(0x0001d79cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1D7A4;

L_1D79E:
    /* 0001d79e   6  subi.w #3c,(7a8,A4) */
    c->pc = RC_ADDR(0x0001d79eu);
    rc_step(c, m, 20);
    t3 = (c->a[4] + 0x7a8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x0000003cu;
    rc_flags_sub(c, RC_W, t1, 0x0000003cu, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1D7A4:
    /* 0001d7a4   4  tst.w (7a8,A4) */
    c->pc = RC_ADDR(0x0001d7a4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7a8u));
    rc_set_nzvc(c, t0, RC_W);

L_1D7A8:
    /* 0001d7a8   2  bge 0001d7b0 */
    c->pc = RC_ADDR(0x0001d7a8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1D7B0;

L_1D7AA:
    /* 0001d7aa   6  addi.w #3c,(7a8,A4) */
    c->pc = RC_ADDR(0x0001d7aau);
    rc_step(c, m, 20);
    t3 = (c->a[4] + 0x7a8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x0000003cu;
    rc_flags_add(c, RC_W, t1, 0x0000003cu, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1D7B0:
    /* 0001d7b0   4  move.w (7a6,A4),D0 */
    c->pc = RC_ADDR(0x0001d7b0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7a6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D7B4:
    /* 0001d7b4   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001d7b4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1D7B6:
    /* 0001d7b6   4  bra 0001d862 */
    c->pc = RC_ADDR(0x0001d7b6u);
    rc_step(c, m, 10);
    goto L_1D862;

L_1D7BA:
    /* 0001d7ba   4  clr.w (7aa,A4) */
    c->pc = RC_ADDR(0x0001d7bau);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x7aau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D7BE:
    /* 0001d7be   4  tst.w (ffffb24a,A4) */
    c->pc = RC_ADDR(0x0001d7beu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db6u));
    rc_set_nzvc(c, t0, RC_W);

L_1D7C2:
    /* 0001d7c2   2  blt 0001d7c8 */
    c->pc = RC_ADDR(0x0001d7c2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1D7C8;

L_1D7C4:
    /* 0001d7c4   4  addq.w #1,(7a6,A4) */
    c->pc = RC_ADDR(0x0001d7c4u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x7a6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1D7C8:
    /* 0001d7c8   4  bra 0001d874 */
    c->pc = RC_ADDR(0x0001d7c8u);
    rc_step(c, m, 10);
    goto L_1D874;

L_1D7CC:
    /* 0001d7cc   4  tst.w (ffffb24a,A4) */
    c->pc = RC_ADDR(0x0001d7ccu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db6u));
    rc_set_nzvc(c, t0, RC_W);

L_1D7D0:
    /* 0001d7d0   2  bge 0001d7d6 */
    c->pc = RC_ADDR(0x0001d7d0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1D7D6;

L_1D7D2:
    /* 0001d7d2   4  clr.w (7a6,A4) */
    c->pc = RC_ADDR(0x0001d7d2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x7a6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D7D6:
    /* 0001d7d6   6  cmpi.w #3c,(7aa,A4) */
    c->pc = RC_ADDR(0x0001d7d6u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7aau));
    rc_cmp(c, RC_W, t0, 0x0000003cu);

L_1D7DC:
    /* 0001d7dc   2  blt 0001d7e6 */
    c->pc = RC_ADDR(0x0001d7dcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1D7E6;

L_1D7DE:
    /* 0001d7de   4  clr.w (7aa,A4) */
    c->pc = RC_ADDR(0x0001d7deu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x7aau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D7E2:
    /* 0001d7e2   4  addq.w #1,(7a6,A4) */
    c->pc = RC_ADDR(0x0001d7e2u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x7a6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1D7E6:
    /* 0001d7e6   4  bra 0001d874 */
    c->pc = RC_ADDR(0x0001d7e6u);
    rc_step(c, m, 10);
    goto L_1D874;

L_1D7EA:
    /* 0001d7ea   4  move.w (79e,A4),-(A7) */
    c->pc = RC_ADDR(0x0001d7eau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x79eu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D7EE:
    /* 0001d7ee   4  jsr (0001d88a) */
    c->pc = RC_ADDR(0x0001d7eeu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001d7f2u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d88au);
    return;

L_1D7F2:
    /* 0001d7f2   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001d7f2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1D7F4:
    /* 0001d7f4   2  bra 0001d874 */
    c->pc = RC_ADDR(0x0001d7f4u);
    rc_step(c, m, 10);
    goto L_1D874;

L_1D7F6:
    /* 0001d7f6   4  tst.w (ffffb24a,A4) */
    c->pc = RC_ADDR(0x0001d7f6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db6u));
    rc_set_nzvc(c, t0, RC_W);

L_1D7FA:
    /* 0001d7fa   2  ble 0001d800 */
    c->pc = RC_ADDR(0x0001d7fau);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1D800;

L_1D7FC:
    /* 0001d7fc   4  clr.w (7a6,A4) */
    c->pc = RC_ADDR(0x0001d7fcu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x7a6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D800:
    /* 0001d800   4  move.w (7a8,A4),D0 */
    c->pc = RC_ADDR(0x0001d800u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7a8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D804:
    /* 0001d804   4  sub.w (79e,A4),D0 */
    c->pc = RC_ADDR(0x0001d804u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x79eu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1D808:
    /* 0001d808   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001d808u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D80A:
    /* 0001d80a   4  jsr (ffff81ca,A4) */
    c->pc = RC_ADDR(0x0001d80au);
    rc_step(c, m, 18);
    /* vector 76 */
    rc_push32(c, m, RC_ADDR(0x0001d80eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cc0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001bd70u);
    return;

L_1D80E:
    /* 0001d80e   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001d80eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1D810:
    /* 0001d810   4  cmp.w #1,D0 */
    c->pc = RC_ADDR(0x0001d810u);
    rc_step(c, m, 8);
    t0 = 0x00000001u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1D814:
    /* 0001d814   2  bgt 0001d822 */
    c->pc = RC_ADDR(0x0001d814u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_1D822;

L_1D816:
    /* 0001d816   6  cmpi.w #a,(7aa,A4) */
    c->pc = RC_ADDR(0x0001d816u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7aau));
    rc_cmp(c, RC_W, t0, 0x0000000au);

L_1D81C:
    /* 0001d81c   2  ble 0001d822 */
    c->pc = RC_ADDR(0x0001d81cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1D822;

L_1D81E:
    /* 0001d81e   4  addq.w #1,(7a6,A4) */
    c->pc = RC_ADDR(0x0001d81eu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x7a6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1D822:
    /* 0001d822   2  bra 0001d874 */
    c->pc = RC_ADDR(0x0001d822u);
    rc_step(c, m, 10);
    goto L_1D874;

L_1D824:
    /* 0001d824   4  move.w (7a0,A4),-(A7) */
    c->pc = RC_ADDR(0x0001d824u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7a0u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D828:
    /* 0001d828   2  bsr 0001d88a */
    c->pc = RC_ADDR(0x0001d828u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001d82au));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d88au);
    return;

L_1D82A:
    /* 0001d82a   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001d82au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1D82C:
    /* 0001d82c   2  bra 0001d874 */
    c->pc = RC_ADDR(0x0001d82cu);
    rc_step(c, m, 10);
    goto L_1D874;

L_1D82E:
    /* 0001d82e   4  move.w (7a2,A4),-(A7) */
    c->pc = RC_ADDR(0x0001d82eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7a2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D832:
    /* 0001d832   2  bsr 0001d88a */
    c->pc = RC_ADDR(0x0001d832u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001d834u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d88au);
    return;

L_1D834:
    /* 0001d834   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001d834u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1D836:
    /* 0001d836   2  bra 0001d874 */
    c->pc = RC_ADDR(0x0001d836u);
    rc_step(c, m, 10);
    goto L_1D874;

L_1D838:
    /* 0001d838   4  move.w (7a8,A4),D0 */
    c->pc = RC_ADDR(0x0001d838u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7a8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D83C:
    /* 0001d83c   4  sub.w (7a2,A4),D0 */
    c->pc = RC_ADDR(0x0001d83cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7a2u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1D840:
    /* 0001d840   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001d840u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D842:
    /* 0001d842   4  jsr (ffff81ca,A4) */
    c->pc = RC_ADDR(0x0001d842u);
    rc_step(c, m, 18);
    /* vector 76 */
    rc_push32(c, m, RC_ADDR(0x0001d846u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cc0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001bd70u);
    return;

L_1D846:
    /* 0001d846   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001d846u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1D848:
    /* 0001d848   4  cmp.w #1,D0 */
    c->pc = RC_ADDR(0x0001d848u);
    rc_step(c, m, 8);
    t0 = 0x00000001u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1D84C:
    /* 0001d84c   2  ble 0001d852 */
    c->pc = RC_ADDR(0x0001d84cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1D852;

L_1D84E:
    /* 0001d84e   4  clr.w (7a6,A4) */
    c->pc = RC_ADDR(0x0001d84eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x7a6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D852:
    /* 0001d852   2  bra 0001d874 */
    c->pc = RC_ADDR(0x0001d852u);
    rc_step(c, m, 10);
    goto L_1D874;

L_1D862:
    /* 0001d862   6  cmp.l #7,D0 */
    c->pc = RC_ADDR(0x0001d862u);
    rc_step(c, m, 14);
    t0 = 0x00000007u;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1D868:
    /* 0001d868   2  bcc 0001d874 */
    c->pc = RC_ADDR(0x0001d868u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_1D874;

L_1D86A:
    /* 0001d86a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001d86au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1D86C:
    /* 0001d86c   4  move.w (0001d854),D0 */
    c->pc = RC_ADDR(0x0001d86cu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (RC_ADDR(0x0001d854u) + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D870:
    /* 0001d870   4  jmp (0001d872) */
    c->pc = RC_ADDR(0x0001d870u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (RC_ADDR(0x0001d872u) + t4);
    c->pc = t3;
    return;

L_1D874:
    /* 0001d874   4  jsr (0001d930) */
    c->pc = RC_ADDR(0x0001d874u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001d878u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d930u);
    return;

L_1D878:
    /* 0001d878   4  tst.w (ffffb258,A4) */
    c->pc = RC_ADDR(0x0001d878u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4da8u));
    rc_set_nzvc(c, t0, RC_W);

L_1D87C:
    /* 0001d87c   2  beq 0001d882 */
    c->pc = RC_ADDR(0x0001d87cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1D882;

L_1D87E:
    /* 0001d87e   4  clr.w (1dc8,A4) */
    c->pc = RC_ADDR(0x0001d87eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1dc8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D882:
    /* 0001d882   4  clr.w (ffffb258,A4) */
    c->pc = RC_ADDR(0x0001d882u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x4da8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D886:
    /* 0001d886   4  bra 0001d70c */
    c->pc = RC_ADDR(0x0001d886u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1D70C;

}
