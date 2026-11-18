/* fn_0000d83c - 404 byte(s), 105 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000d83c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000d83cu): goto L_D83C;
    case RC_ADDR(0x0000d840u): goto L_D840;
    case RC_ADDR(0x0000d844u): goto L_D844;
    case RC_ADDR(0x0000d846u): goto L_D846;
    case RC_ADDR(0x0000d84au): goto L_D84A;
    case RC_ADDR(0x0000d84cu): goto L_D84C;
    case RC_ADDR(0x0000d850u): goto L_D850;
    case RC_ADDR(0x0000d854u): goto L_D854;
    case RC_ADDR(0x0000d858u): goto L_D858;
    case RC_ADDR(0x0000d85cu): goto L_D85C;
    case RC_ADDR(0x0000d860u): goto L_D860;
    case RC_ADDR(0x0000d864u): goto L_D864;
    case RC_ADDR(0x0000d868u): goto L_D868;
    case RC_ADDR(0x0000d86cu): goto L_D86C;
    case RC_ADDR(0x0000d86eu): goto L_D86E;
    case RC_ADDR(0x0000d872u): goto L_D872;
    case RC_ADDR(0x0000d876u): goto L_D876;
    case RC_ADDR(0x0000d87au): goto L_D87A;
    case RC_ADDR(0x0000d87eu): goto L_D87E;
    case RC_ADDR(0x0000d882u): goto L_D882;
    case RC_ADDR(0x0000d884u): goto L_D884;
    case RC_ADDR(0x0000d888u): goto L_D888;
    case RC_ADDR(0x0000d88cu): goto L_D88C;
    case RC_ADDR(0x0000d890u): goto L_D890;
    case RC_ADDR(0x0000d894u): goto L_D894;
    case RC_ADDR(0x0000d898u): goto L_D898;
    case RC_ADDR(0x0000d89au): goto L_D89A;
    case RC_ADDR(0x0000d8a0u): goto L_D8A0;
    case RC_ADDR(0x0000d8a6u): goto L_D8A6;
    case RC_ADDR(0x0000d8acu): goto L_D8AC;
    case RC_ADDR(0x0000d8b4u): goto L_D8B4;
    case RC_ADDR(0x0000d8bau): goto L_D8BA;
    case RC_ADDR(0x0000d8c0u): goto L_D8C0;
    case RC_ADDR(0x0000d8c4u): goto L_D8C4;
    case RC_ADDR(0x0000d8c8u): goto L_D8C8;
    case RC_ADDR(0x0000d8ceu): goto L_D8CE;
    case RC_ADDR(0x0000d8d4u): goto L_D8D4;
    case RC_ADDR(0x0000d8d8u): goto L_D8D8;
    case RC_ADDR(0x0000d8dau): goto L_D8DA;
    case RC_ADDR(0x0000d8dcu): goto L_D8DC;
    case RC_ADDR(0x0000d8e0u): goto L_D8E0;
    case RC_ADDR(0x0000d8e4u): goto L_D8E4;
    case RC_ADDR(0x0000d8e8u): goto L_D8E8;
    case RC_ADDR(0x0000d8eau): goto L_D8EA;
    case RC_ADDR(0x0000d8eeu): goto L_D8EE;
    case RC_ADDR(0x0000d8f2u): goto L_D8F2;
    case RC_ADDR(0x0000d8f6u): goto L_D8F6;
    case RC_ADDR(0x0000d8fau): goto L_D8FA;
    case RC_ADDR(0x0000d8fcu): goto L_D8FC;
    case RC_ADDR(0x0000d900u): goto L_D900;
    case RC_ADDR(0x0000d904u): goto L_D904;
    case RC_ADDR(0x0000d908u): goto L_D908;
    case RC_ADDR(0x0000d90eu): goto L_D90E;
    case RC_ADDR(0x0000d914u): goto L_D914;
    case RC_ADDR(0x0000d918u): goto L_D918;
    case RC_ADDR(0x0000d91cu): goto L_D91C;
    case RC_ADDR(0x0000d91eu): goto L_D91E;
    case RC_ADDR(0x0000d920u): goto L_D920;
    case RC_ADDR(0x0000d924u): goto L_D924;
    case RC_ADDR(0x0000d926u): goto L_D926;
    case RC_ADDR(0x0000d92au): goto L_D92A;
    case RC_ADDR(0x0000d92eu): goto L_D92E;
    case RC_ADDR(0x0000d930u): goto L_D930;
    case RC_ADDR(0x0000d934u): goto L_D934;
    case RC_ADDR(0x0000d938u): goto L_D938;
    case RC_ADDR(0x0000d93au): goto L_D93A;
    case RC_ADDR(0x0000d93eu): goto L_D93E;
    case RC_ADDR(0x0000d942u): goto L_D942;
    case RC_ADDR(0x0000d946u): goto L_D946;
    case RC_ADDR(0x0000d94au): goto L_D94A;
    case RC_ADDR(0x0000d94eu): goto L_D94E;
    case RC_ADDR(0x0000d952u): goto L_D952;
    case RC_ADDR(0x0000d956u): goto L_D956;
    case RC_ADDR(0x0000d95au): goto L_D95A;
    case RC_ADDR(0x0000d95eu): goto L_D95E;
    case RC_ADDR(0x0000d960u): goto L_D960;
    case RC_ADDR(0x0000d964u): goto L_D964;
    case RC_ADDR(0x0000d968u): goto L_D968;
    case RC_ADDR(0x0000d96cu): goto L_D96C;
    case RC_ADDR(0x0000d970u): goto L_D970;
    case RC_ADDR(0x0000d974u): goto L_D974;
    case RC_ADDR(0x0000d978u): goto L_D978;
    case RC_ADDR(0x0000d97cu): goto L_D97C;
    case RC_ADDR(0x0000d980u): goto L_D980;
    case RC_ADDR(0x0000d984u): goto L_D984;
    case RC_ADDR(0x0000d988u): goto L_D988;
    case RC_ADDR(0x0000d98cu): goto L_D98C;
    case RC_ADDR(0x0000d98eu): goto L_D98E;
    case RC_ADDR(0x0000d992u): goto L_D992;
    case RC_ADDR(0x0000d998u): goto L_D998;
    case RC_ADDR(0x0000d99cu): goto L_D99C;
    case RC_ADDR(0x0000d9a0u): goto L_D9A0;
    case RC_ADDR(0x0000d9a4u): goto L_D9A4;
    case RC_ADDR(0x0000d9a8u): goto L_D9A8;
    case RC_ADDR(0x0000d9acu): goto L_D9AC;
    case RC_ADDR(0x0000d9b0u): goto L_D9B0;
    case RC_ADDR(0x0000d9b4u): goto L_D9B4;
    case RC_ADDR(0x0000d9b8u): goto L_D9B8;
    case RC_ADDR(0x0000d9bcu): goto L_D9BC;
    case RC_ADDR(0x0000d9c0u): goto L_D9C0;
    case RC_ADDR(0x0000d9c4u): goto L_D9C4;
    case RC_ADDR(0x0000d9c8u): goto L_D9C8;
    case RC_ADDR(0x0000d9cau): goto L_D9CA;
    case RC_ADDR(0x0000d9ccu): goto L_D9CC;
    case RC_ADDR(0x0000d9ceu): goto L_D9CE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_D83C:
    /* 0000d83c   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x0000d83cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_D840:
    /* 0000d840   4  move.w (6e6,A4),D0 */
    c->pc = RC_ADDR(0x0000d840u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6e6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D844:
    /* 0000d844   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000d844u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_D846:
    /* 0000d846   4  divs.w #32,D0 */
    c->pc = RC_ADDR(0x0000d846u);
    rc_step(c, m, 162);
    t0 = 0x00000032u;
    rc_divs(c, m, 0, t0);

L_D84A:
    /* 0000d84a   2  addq.w #3,D0 */
    c->pc = RC_ADDR(0x0000d84au);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000003u;
    rc_flags_add(c, RC_W, t1, 0x00000003u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_D84C:
    /* 0000d84c   4  move.w D0,(1136,A4) */
    c->pc = RC_ADDR(0x0000d84cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1136u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D850:
    /* 0000d850   4  move.w (ffff8494,A4),D0 */
    c->pc = RC_ADDR(0x0000d850u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7b6cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D854:
    /* 0000d854   4  muls.w #32,D0 */
    c->pc = RC_ADDR(0x0000d854u);
    rc_step(c, m, 42);
    t0 = 0x00000032u;
    rc_muls(c, 0, t0);

L_D858:
    /* 0000d858   4  add.w #190,D0 */
    c->pc = RC_ADDR(0x0000d858u);
    rc_step(c, m, 10);
    t0 = 0x00000190u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_D85C:
    /* 0000d85c   4  move.w D0,(1138,A4) */
    c->pc = RC_ADDR(0x0000d85cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1138u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D860:
    /* 0000d860   4  pea (00000002).l */
    c->pc = RC_ADDR(0x0000d860u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000002u);

L_D864:
    /* 0000d864   4  pea (000003e8).l */
    c->pc = RC_ADDR(0x0000d864u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000003e8u);

L_D868:
    /* 0000d868   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x0000d868u);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x0000d86cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_D86C:
    /* 0000d86c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000d86cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_D86E:
    /* 0000d86e   4  move.l D0,(e70,A4) */
    c->pc = RC_ADDR(0x0000d86eu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0xe70u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_D872:
    /* 0000d872   4  clr.w (858,A4) */
    c->pc = RC_ADDR(0x0000d872u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x858u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_D876:
    /* 0000d876   4  pea (ffffffff).l */
    c->pc = RC_ADDR(0x0000d876u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0xffffffffu);

L_D87A:
    /* 0000d87a   4  pea (ffffa34e,A4) */
    c->pc = RC_ADDR(0x0000d87au);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] - 0x5cb2u));

L_D87E:
    /* 0000d87e   4  jsr (0000b0be) */
    c->pc = RC_ADDR(0x0000d87eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000d882u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000b0beu);
    return;

L_D882:
    /* 0000d882   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000d882u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_D884:
    /* 0000d884   4  movea.l (ffffa428,A4),A0 */
    c->pc = RC_ADDR(0x0000d884u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5bd8u));
    c->a[0] = t0;

L_D888:
    /* 0000d888   4  move.w #64,(A0) */
    c->pc = RC_ADDR(0x0000d888u);
    rc_step(c, m, 12);
    t0 = 0x00000064u;
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D88C:
    /* 0000d88c   4  jsr (0000f7f4) */
    c->pc = RC_ADDR(0x0000d88cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000d890u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000f7f4u);
    return;

L_D890:
    /* 0000d890   4  pea (0000d9d0) */
    c->pc = RC_ADDR(0x0000d890u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000d9d0u));

L_D894:
    /* 0000d894   4  jsr (ffff82ae,A4) */
    c->pc = RC_ADDR(0x0000d894u);
    rc_step(c, m, 18);
    /* vector 114 */
    rc_push32(c, m, RC_ADDR(0x0000d898u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023da4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022366u);
    return;

L_D898:
    /* 0000d898   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000d898u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_D89A:
    /* 0000d89a   6  move.w #140,(113a,A4) */
    c->pc = RC_ADDR(0x0000d89au);
    rc_step(c, m, 16);
    t0 = 0x00000140u;
    rc_wr16(c, m, (c->a[4] + 0x113au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D8A0:
    /* 0000d8a0   6  move.w #d8,(113c,A4) */
    c->pc = RC_ADDR(0x0000d8a0u);
    rc_step(c, m, 16);
    t0 = 0x000000d8u;
    rc_wr16(c, m, (c->a[4] + 0x113cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D8A6:
    /* 0000d8a6   6  move.w #5,(113e,A4) */
    c->pc = RC_ADDR(0x0000d8a6u);
    rc_step(c, m, 16);
    t0 = 0x00000005u;
    rc_wr16(c, m, (c->a[4] + 0x113eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D8AC:
    /* 0000d8ac   8  move.l #21c0,(1140,A4) */
    c->pc = RC_ADDR(0x0000d8acu);
    rc_step(c, m, 24);
    t0 = 0x000021c0u;
    rc_wr32(c, m, (c->a[4] + 0x1140u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_D8B4:
    /* 0000d8b4   6  move.w #9,(1144,A4) */
    c->pc = RC_ADDR(0x0000d8b4u);
    rc_step(c, m, 16);
    t0 = 0x00000009u;
    rc_wr16(c, m, (c->a[4] + 0x1144u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D8BA:
    /* 0000d8ba   6  move.w #65,(1146,A4) */
    c->pc = RC_ADDR(0x0000d8bau);
    rc_step(c, m, 16);
    t0 = 0x00000065u;
    rc_wr16(c, m, (c->a[4] + 0x1146u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D8C0:
    /* 0000d8c0   4  jsr (ffff81e2,A4) */
    c->pc = RC_ADDR(0x0000d8c0u);
    rc_step(c, m, 18);
    /* vector 80 */
    rc_push32(c, m, RC_ADDR(0x0000d8c4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cd8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001d53eu);
    return;

L_D8C4:
    /* 0000d8c4   4  jsr (ffff81e8,A4) */
    c->pc = RC_ADDR(0x0000d8c4u);
    rc_step(c, m, 18);
    /* vector 81 */
    rc_push32(c, m, RC_ADDR(0x0000d8c8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cdeu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001d598u);
    return;

L_D8C8:
    /* 0000d8c8   6  move.w #1,(1110,A4) */
    c->pc = RC_ADDR(0x0000d8c8u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1110u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D8CE:
    /* 0000d8ce   6  move.w #1,(110e,A4) */
    c->pc = RC_ADDR(0x0000d8ceu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x110eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D8D4:
    /* 0000d8d4   4  move.w (110e,A4),D0 */
    c->pc = RC_ADDR(0x0000d8d4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x110eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D8D8:
    /* 0000d8d8   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000d8d8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_D8DA:
    /* 0000d8da   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d8dau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D8DC:
    /* 0000d8dc   4  lea (fffffb1e,A4),A0 */
    c->pc = RC_ADDR(0x0000d8dcu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4e2u);

L_D8E0:
    /* 0000d8e0   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000d8e0u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D8E4:
    /* 0000d8e4   4  jsr (0000f730) */
    c->pc = RC_ADDR(0x0000d8e4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000d8e8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000f730u);
    return;

L_D8E8:
    /* 0000d8e8   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000d8e8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_D8EA:
    /* 0000d8ea   4  move.w #5,-(A7) */
    c->pc = RC_ADDR(0x0000d8eau);
    rc_step(c, m, 12);
    t0 = 0x00000005u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D8EE:
    /* 0000d8ee   4  move.w #8,-(A7) */
    c->pc = RC_ADDR(0x0000d8eeu);
    rc_step(c, m, 12);
    t0 = 0x00000008u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D8F2:
    /* 0000d8f2   4  pea (0000d9de) */
    c->pc = RC_ADDR(0x0000d8f2u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000d9deu));

L_D8F6:
    /* 0000d8f6   4  jsr (ffff81d0,A4) */
    c->pc = RC_ADDR(0x0000d8f6u);
    rc_step(c, m, 18);
    /* vector 77 */
    rc_push32(c, m, RC_ADDR(0x0000d8fau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cc6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001d222u);
    return;

L_D8FA:
    /* 0000d8fa   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000d8fau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_D8FC:
    /* 0000d8fc   4  jsr (0000f7a0) */
    c->pc = RC_ADDR(0x0000d8fcu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000d900u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000f7a0u);
    return;

L_D900:
    /* 0000d900   4  jsr (ffff81ac,A4) */
    c->pc = RC_ADDR(0x0000d900u);
    rc_step(c, m, 18);
    /* vector 71 */
    rc_push32(c, m, RC_ADDR(0x0000d904u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023ca2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001966eu);
    return;

L_D904:
    /* 0000d904   4  jsr (0000d9e8) */
    c->pc = RC_ADDR(0x0000d904u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000d908u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000d9e8u);
    return;

L_D908:
    /* 0000d908   6  move.w #2,(1132,A4) */
    c->pc = RC_ADDR(0x0000d908u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x1132u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D90E:
    /* 0000d90e   6  cmpi.w #8,(1116,A4) */
    c->pc = RC_ADDR(0x0000d90eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1116u));
    rc_cmp(c, RC_W, t0, 0x00000008u);

L_D914:
    /* 0000d914   4  bge 0000d99c */
    c->pc = RC_ADDR(0x0000d914u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_D99C;

L_D918:
    /* 0000d918   4  tst.w (fffffa32,A4) */
    /* a flag wait: rc_wait runs it natively and returns 1 when its exit branch is taken;
     * 0 means the three instructions below run instead (the reference path). */
    if (rc_wait(c, m, RC_ADDR(0x0000d918u), 12,
                RC_ADDR(0x0000d91cu), 10, 7,
                RC_ADDR(0x0000d91eu), 10,
                (c->a[4] - 0x5ceu), RC_W))
        goto L_D920;
    c->pc = RC_ADDR(0x0000d918u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5ceu));
    rc_set_nzvc(c, t0, RC_W);

L_D91C:
    /* 0000d91c   2  beq 0000d920 */
    c->pc = RC_ADDR(0x0000d91cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_D920;

L_D91E:
    /* 0000d91e   2  bra 0000d918 */
    c->pc = RC_ADDR(0x0000d91eu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_D918;

L_D920:
    /* 0000d920   4  tst.w (1132,A4) */
    c->pc = RC_ADDR(0x0000d920u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1132u));
    rc_set_nzvc(c, t0, RC_W);

L_D924:
    /* 0000d924   2  beq 0000d934 */
    c->pc = RC_ADDR(0x0000d924u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_D934;

L_D926:
    /* 0000d926   4  subq.w #1,(1132,A4) */
    c->pc = RC_ADDR(0x0000d926u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1132u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_D92A:
    /* 0000d92a   4  tst.w (1132,A4) */
    c->pc = RC_ADDR(0x0000d92au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1132u));
    rc_set_nzvc(c, t0, RC_W);

L_D92E:
    /* 0000d92e   2  bne 0000d934 */
    c->pc = RC_ADDR(0x0000d92eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_D934;

L_D930:
    /* 0000d930   4  jsr (ffff81b8,A4) */
    c->pc = RC_ADDR(0x0000d930u);
    rc_step(c, m, 18);
    /* vector 73 */
    rc_push32(c, m, RC_ADDR(0x0000d934u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023caeu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000197a8u);
    return;

L_D934:
    /* 0000d934   4  move.w (1148,A4),D0 */
    c->pc = RC_ADDR(0x0000d934u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1148u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D938:
    /* 0000d938   2  asl.w #4,D0 */
    c->pc = RC_ADDR(0x0000d938u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W));

L_D93A:
    /* 0000d93a   4  sub.w #20,D0 */
    c->pc = RC_ADDR(0x0000d93au);
    rc_step(c, m, 10);
    t0 = 0x00000020u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_D93E:
    /* 0000d93e   4  move.w D0,(e6c,A4) */
    c->pc = RC_ADDR(0x0000d93eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0xe6cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D942:
    /* 0000d942   4  move.w (114a,A4),D0 */
    c->pc = RC_ADDR(0x0000d942u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x114au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D946:
    /* 0000d946   4  muls.w #9,D0 */
    c->pc = RC_ADDR(0x0000d946u);
    rc_step(c, m, 42);
    t0 = 0x00000009u;
    rc_muls(c, 0, t0);

L_D94A:
    /* 0000d94a   4  sub.w #1b,D0 */
    c->pc = RC_ADDR(0x0000d94au);
    rc_step(c, m, 10);
    t0 = 0x0000001bu;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_D94E:
    /* 0000d94e   4  move.w D0,(e6e,A4) */
    c->pc = RC_ADDR(0x0000d94eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0xe6eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D952:
    /* 0000d952   4  jsr (ffff8188,A4) */
    c->pc = RC_ADDR(0x0000d952u);
    rc_step(c, m, 18);
    /* vector 65 */
    rc_push32(c, m, RC_ADDR(0x0000d956u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c7eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00013446u);
    return;

L_D956:
    /* 0000d956   4  move.w #e,-(A7) */
    c->pc = RC_ADDR(0x0000d956u);
    rc_step(c, m, 12);
    t0 = 0x0000000eu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D95A:
    /* 0000d95a   4  jsr (ffff8158,A4) */
    c->pc = RC_ADDR(0x0000d95au);
    rc_step(c, m, 18);
    /* vector 57 */
    rc_push32(c, m, RC_ADDR(0x0000d95eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c4eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00011facu);
    return;

L_D95E:
    /* 0000d95e   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000d95eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_D960:
    /* 0000d960   4  jsr (0000dbfc) */
    c->pc = RC_ADDR(0x0000d960u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000d964u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000dbfcu);
    return;

L_D964:
    /* 0000d964   4  jsr (0000dfca) */
    c->pc = RC_ADDR(0x0000d964u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000d968u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000dfcau);
    return;

L_D968:
    /* 0000d968   4  jsr (0000e2ca) */
    c->pc = RC_ADDR(0x0000d968u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000d96cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000e2cau);
    return;

L_D96C:
    /* 0000d96c   4  jsr (0000db82) */
    c->pc = RC_ADDR(0x0000d96cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000d970u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000db82u);
    return;

L_D970:
    /* 0000d970   4  jsr (ffff817c,A4) */
    c->pc = RC_ADDR(0x0000d970u);
    rc_step(c, m, 18);
    /* vector 63 */
    rc_push32(c, m, RC_ADDR(0x0000d974u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c72u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00012d68u);
    return;

L_D974:
    /* 0000d974   4  jsr (0000ee54) */
    c->pc = RC_ADDR(0x0000d974u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000d978u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000ee54u);
    return;

L_D978:
    /* 0000d978   4  jsr (0000d748) */
    c->pc = RC_ADDR(0x0000d978u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000d97cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000d748u);
    return;

L_D97C:
    /* 0000d97c   4  jsr (0000ebe2) */
    c->pc = RC_ADDR(0x0000d97cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000d980u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000ebe2u);
    return;

L_D980:
    /* 0000d980   4  jsr (ffff80e6,A4) */
    c->pc = RC_ADDR(0x0000d980u);
    rc_step(c, m, 18);
    /* vector 38 */
    rc_push32(c, m, RC_ADDR(0x0000d984u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bdcu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000b03eu);
    return;

L_D984:
    /* 0000d984   4  jsr (ffff83ce,A4) */
    c->pc = RC_ADDR(0x0000d984u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000d988u));
    rc_depth++;
    t3 = (c->a[4] - 0x7c32u);
    c->pc = t3;
    return;

L_D988:
    /* 0000d988   4  tst.w (1116,A4) */
    c->pc = RC_ADDR(0x0000d988u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1116u));
    rc_set_nzvc(c, t0, RC_W);

L_D98C:
    /* 0000d98c   2  beq 0000d992 */
    c->pc = RC_ADDR(0x0000d98cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_D992;

L_D98E:
    /* 0000d98e   4  addq.w #1,(1116,A4) */
    c->pc = RC_ADDR(0x0000d98eu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1116u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_D992:
    /* 0000d992   6  move.w #1,(fffffa32,A4) */
    c->pc = RC_ADDR(0x0000d992u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x5ceu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D998:
    /* 0000d998   4  bra 0000d90e */
    c->pc = RC_ADDR(0x0000d998u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_D90E;

L_D99C:
    /* 0000d99c   4  jsr (ffff812e,A4) */
    c->pc = RC_ADDR(0x0000d99cu);
    rc_step(c, m, 18);
    /* vector 50 */
    rc_push32(c, m, RC_ADDR(0x0000d9a0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c24u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000104f6u);
    return;

L_D9A0:
    /* 0000d9a0   4  jsr (0000f880) */
    c->pc = RC_ADDR(0x0000d9a0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000d9a4u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000f880u);
    return;

L_D9A4:
    /* 0000d9a4   4  jsr (ffff82a8,A4) */
    c->pc = RC_ADDR(0x0000d9a4u);
    rc_step(c, m, 18);
    /* vector 113 */
    rc_push32(c, m, RC_ADDR(0x0000d9a8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d9eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022308u);
    return;

L_D9A8:
    /* 0000d9a8   4  jsr (ffff81dc,A4) */
    c->pc = RC_ADDR(0x0000d9a8u);
    rc_step(c, m, 18);
    /* vector 79 */
    rc_push32(c, m, RC_ADDR(0x0000d9acu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cd2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001d51au);
    return;

L_D9AC:
    /* 0000d9ac   4  jsr (00013436) */
    c->pc = RC_ADDR(0x0000d9acu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000d9b0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00013436u);
    return;

L_D9B0:
    /* 0000d9b0   4  jsr (ffff81be,A4) */
    c->pc = RC_ADDR(0x0000d9b0u);
    rc_step(c, m, 18);
    /* vector 74 */
    rc_push32(c, m, RC_ADDR(0x0000d9b4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cb4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000197e8u);
    return;

L_D9B4:
    /* 0000d9b4   4  jsr (ffff8194,A4) */
    c->pc = RC_ADDR(0x0000d9b4u);
    rc_step(c, m, 18);
    /* vector 67 */
    rc_push32(c, m, RC_ADDR(0x0000d9b8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c8au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00018442u);
    return;

L_D9B8:
    /* 0000d9b8   4  jsr (ffff81ee,A4) */
    c->pc = RC_ADDR(0x0000d9b8u);
    rc_step(c, m, 18);
    /* vector 82 */
    rc_push32(c, m, RC_ADDR(0x0000d9bcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023ce4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001d60eu);
    return;

L_D9BC:
    /* 0000d9bc   4  pea (000003e8).l */
    c->pc = RC_ADDR(0x0000d9bcu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000003e8u);

L_D9C0:
    /* 0000d9c0   4  move.l (e70,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d9c0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe70u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D9C4:
    /* 0000d9c4   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0000d9c4u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0000d9c8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_D9C8:
    /* 0000d9c8   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000d9c8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_D9CA:
    /* 0000d9ca   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0000d9cau);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_D9CC:
    /* 0000d9cc   2  unlk A5 */
    c->pc = RC_ADDR(0x0000d9ccu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_D9CE:
    /* 0000d9ce   2  rts */
    c->pc = RC_ADDR(0x0000d9ceu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
