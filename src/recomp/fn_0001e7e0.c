/* fn_0001e7e0 - 180 byte(s), 57 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001e7e0(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001e7e0u): goto L_1E7E0;
    case RC_ADDR(0x0001e7e4u): goto L_1E7E4;
    case RC_ADDR(0x0001e7e6u): goto L_1E7E6;
    case RC_ADDR(0x0001e7eau): goto L_1E7EA;
    case RC_ADDR(0x0001e7eeu): goto L_1E7EE;
    case RC_ADDR(0x0001e7f2u): goto L_1E7F2;
    case RC_ADDR(0x0001e7f6u): goto L_1E7F6;
    case RC_ADDR(0x0001e7fau): goto L_1E7FA;
    case RC_ADDR(0x0001e7fcu): goto L_1E7FC;
    case RC_ADDR(0x0001e7feu): goto L_1E7FE;
    case RC_ADDR(0x0001e802u): goto L_1E802;
    case RC_ADDR(0x0001e804u): goto L_1E804;
    case RC_ADDR(0x0001e808u): goto L_1E808;
    case RC_ADDR(0x0001e80cu): goto L_1E80C;
    case RC_ADDR(0x0001e810u): goto L_1E810;
    case RC_ADDR(0x0001e814u): goto L_1E814;
    case RC_ADDR(0x0001e816u): goto L_1E816;
    case RC_ADDR(0x0001e81au): goto L_1E81A;
    case RC_ADDR(0x0001e81eu): goto L_1E81E;
    case RC_ADDR(0x0001e820u): goto L_1E820;
    case RC_ADDR(0x0001e822u): goto L_1E822;
    case RC_ADDR(0x0001e826u): goto L_1E826;
    case RC_ADDR(0x0001e82au): goto L_1E82A;
    case RC_ADDR(0x0001e82eu): goto L_1E82E;
    case RC_ADDR(0x0001e830u): goto L_1E830;
    case RC_ADDR(0x0001e834u): goto L_1E834;
    case RC_ADDR(0x0001e838u): goto L_1E838;
    case RC_ADDR(0x0001e83au): goto L_1E83A;
    case RC_ADDR(0x0001e83cu): goto L_1E83C;
    case RC_ADDR(0x0001e840u): goto L_1E840;
    case RC_ADDR(0x0001e844u): goto L_1E844;
    case RC_ADDR(0x0001e848u): goto L_1E848;
    case RC_ADDR(0x0001e84au): goto L_1E84A;
    case RC_ADDR(0x0001e84eu): goto L_1E84E;
    case RC_ADDR(0x0001e852u): goto L_1E852;
    case RC_ADDR(0x0001e854u): goto L_1E854;
    case RC_ADDR(0x0001e858u): goto L_1E858;
    case RC_ADDR(0x0001e85cu): goto L_1E85C;
    case RC_ADDR(0x0001e85eu): goto L_1E85E;
    case RC_ADDR(0x0001e860u): goto L_1E860;
    case RC_ADDR(0x0001e864u): goto L_1E864;
    case RC_ADDR(0x0001e868u): goto L_1E868;
    case RC_ADDR(0x0001e86au): goto L_1E86A;
    case RC_ADDR(0x0001e86cu): goto L_1E86C;
    case RC_ADDR(0x0001e86eu): goto L_1E86E;
    case RC_ADDR(0x0001e870u): goto L_1E870;
    case RC_ADDR(0x0001e874u): goto L_1E874;
    case RC_ADDR(0x0001e878u): goto L_1E878;
    case RC_ADDR(0x0001e87au): goto L_1E87A;
    case RC_ADDR(0x0001e87eu): goto L_1E87E;
    case RC_ADDR(0x0001e880u): goto L_1E880;
    case RC_ADDR(0x0001e884u): goto L_1E884;
    case RC_ADDR(0x0001e888u): goto L_1E888;
    case RC_ADDR(0x0001e88cu): goto L_1E88C;
    case RC_ADDR(0x0001e88eu): goto L_1E88E;
    case RC_ADDR(0x0001e890u): goto L_1E890;
    case RC_ADDR(0x0001e892u): goto L_1E892;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1E7E0:
    /* 0001e7e0   4  link.w A5,#fffffffc */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e7e0u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_1E7E4:
    /* 0001e7e4   2  move.l D4,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e7e4u);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E7E6:
    /* 0001e7e6   4  jsr (ffff811c,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e7e6u);
    /* vector 47 */
    rc_push32(c, m, RC_ADDR(0x0001e7eau));
    rc_depth++;
    c->pc = RC_ADDR(0x0000ed90u);
    return;

L_1E7EA:
    /* 0001e7ea   4  jsr (00020246) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e7eau);
    rc_push32(c, m, RC_ADDR(0x0001e7eeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00020246u);
    return;

L_1E7EE:
    /* 0001e7ee   4  jsr (000204a6) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e7eeu);
    rc_push32(c, m, RC_ADDR(0x0001e7f2u));
    rc_depth++;
    c->pc = RC_ADDR(0x000204a6u);
    return;

L_1E7F2:
    /* 0001e7f2   4  pea (0001e894) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e7f2u);
    rc_push32(c, m, RC_ADDR(0x0001e894u));

L_1E7F6:
    /* 0001e7f6   4  jsr (ffff830e,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e7f6u);
    /* vector 130 */
    rc_push32(c, m, RC_ADDR(0x0001e7fau));
    rc_depth++;
    c->pc = RC_ADDR(0x0002144eu);
    return;

L_1E7FA:
    /* 0001e7fa   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e7fau);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1E7FC:
    /* 0001e7fc   2  move.l D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e7fcu);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E7FE:
    /* 0001e7fe   4  jsr (ffff82f6,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e7feu);
    /* vector 126 */
    rc_push32(c, m, RC_ADDR(0x0001e802u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021410u);
    return;

L_1E802:
    /* 0001e802   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e802u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1E804:
    /* 0001e804   4  move.l D0,(2a18,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e804u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x2a18u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E808:
    /* 0001e808   4  pea (00000021).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e808u);
    rc_push32(c, m, 0x00000021u);

L_1E80C:
    /* 0001e80c   4  pea (0001e895) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e80cu);
    rc_push32(c, m, RC_ADDR(0x0001e895u));

L_1E810:
    /* 0001e810   4  jsr (ffff834a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e810u);
    /* vector 140: exec.library -552 */
    c->pc = RC_ADDR(0x0001e814u);
    rc_os_call(c, m, 0, -552);

L_1E814:
    /* 0001e814   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e814u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1E816:
    /* 0001e816   4  move.l D0,(ffffcba0,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e816u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x3460u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E81A:
    /* 0001e81a   4  tst.l (ffffcba0,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e81au);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3460u));
    rc_set_nzvc(c, t0, RC_L);

L_1E81E:
    /* 0001e81e   2  bne 0001e822 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e81eu);
    if (rc_cond(c, 6)) goto L_1E822;

L_1E820:
    /* 0001e820   2  bsr 0001e7ce */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e820u);
    rc_push32(c, m, RC_ADDR(0x0001e822u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001e7ceu);
    return;

L_1E822:
    /* 0001e822   4  pea (00000021).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e822u);
    rc_push32(c, m, 0x00000021u);

L_1E826:
    /* 0001e826   4  pea (0001e8a6) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e826u);
    rc_push32(c, m, RC_ADDR(0x0001e8a6u));

L_1E82A:
    /* 0001e82a   4  jsr (ffff834a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e82au);
    /* vector 140: exec.library -552 */
    c->pc = RC_ADDR(0x0001e82eu);
    rc_os_call(c, m, 0, -552);

L_1E82E:
    /* 0001e82e   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e82eu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1E830:
    /* 0001e830   4  move.l D0,(ffffcba4,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e830u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x345cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E834:
    /* 0001e834   4  tst.l (ffffcba4,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e834u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x345cu));
    rc_set_nzvc(c, t0, RC_L);

L_1E838:
    /* 0001e838   2  bne 0001e83c */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e838u);
    if (rc_cond(c, 6)) goto L_1E83C;

L_1E83A:
    /* 0001e83a   2  bsr 0001e7ce */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e83au);
    rc_push32(c, m, RC_ADDR(0x0001e83cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001e7ceu);
    return;

L_1E83C:
    /* 0001e83c   4  pea (00000021).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e83cu);
    rc_push32(c, m, 0x00000021u);

L_1E840:
    /* 0001e840   4  pea (0001e8b5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e840u);
    rc_push32(c, m, RC_ADDR(0x0001e8b5u));

L_1E844:
    /* 0001e844   4  jsr (ffff834a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e844u);
    /* vector 140: exec.library -552 */
    c->pc = RC_ADDR(0x0001e848u);
    rc_os_call(c, m, 0, -552);

L_1E848:
    /* 0001e848   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e848u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1E84A:
    /* 0001e84a   4  move.l D0,(ffffcba8,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e84au);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x3458u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E84E:
    /* 0001e84e   4  tst.l (ffffcba8,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e84eu);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3458u));
    rc_set_nzvc(c, t0, RC_L);

L_1E852:
    /* 0001e852   2  bne 0001e858 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e852u);
    if (rc_cond(c, 6)) goto L_1E858;

L_1E854:
    /* 0001e854   4  jsr (0001e7ce) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e854u);
    rc_push32(c, m, RC_ADDR(0x0001e858u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001e7ceu);
    return;

L_1E858:
    /* 0001e858   4  jsr (0001e292) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e858u);
    rc_push32(c, m, RC_ADDR(0x0001e85cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001e292u);
    return;

L_1E85C:
    /* 0001e85c   2  tst.w D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e85cu);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1E85E:
    /* 0001e85e   2  bne 0001e864 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e85eu);
    if (rc_cond(c, 6)) goto L_1E864;

L_1E860:
    /* 0001e860   4  jsr (0001e7ce) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e860u);
    rc_push32(c, m, RC_ADDR(0x0001e864u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001e7ceu);
    return;

L_1E864:
    /* 0001e864   4  jsr (0001e3f6) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e864u);
    rc_push32(c, m, RC_ADDR(0x0001e868u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001e3f6u);
    return;

L_1E868:
    /* 0001e868   2  moveq #0,D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e868u);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_1E86A:
    /* 0001e86a   2  move.w D4,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e86au);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E86C:
    /* 0001e86c   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e86cu);
    rc_ext_l(c, 0);

L_1E86E:
    /* 0001e86e   2  asl.l #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e86eu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_1E870:
    /* 0001e870   4  lea (2a1c,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e870u);
    c->a[0] = (c->a[4] + 0x2a1cu);

L_1E874:
    /* 0001e874   4  clr.l (0,A0,D0.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e874u);
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1E878:
    /* 0001e878   2  addq.w #1,D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e878u);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_1E87A:
    /* 0001e87a   4  cmp.w #10,D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e87au);
    t0 = 0x00000010u;
    t1 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1E87E:
    /* 0001e87e   2  blt 0001e86a */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e87eu);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1E86A; }

L_1E880:
    /* 0001e880   4  move.l (a,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e880u);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E884:
    /* 0001e884   4  move.w (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e884u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E888:
    /* 0001e888   4  jsr (ffff8008,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e888u);
    /* vector 1 */
    rc_push32(c, m, RC_ADDR(0x0001e88cu));
    rc_depth++;
    c->pc = RC_ADDR(0x000000e4u);
    return;

L_1E88C:
    /* 0001e88c   2  addq.w #6,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e88cu);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_1E88E:
    /* 0001e88e   2  move.l (A7)+,D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e88eu);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E890:
    /* 0001e890   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e890u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1E892:
    /* 0001e892   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e892u);
    rc_ret(c, m);
    return;

}
