/* fn_0000f608 - 62 byte(s), 23 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000f608(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000f608u): goto L_F608;
    case RC_ADDR(0x0000f60cu): goto L_F60C;
    case RC_ADDR(0x0000f610u): goto L_F610;
    case RC_ADDR(0x0000f614u): goto L_F614;
    case RC_ADDR(0x0000f616u): goto L_F616;
    case RC_ADDR(0x0000f618u): goto L_F618;
    case RC_ADDR(0x0000f61au): goto L_F61A;
    case RC_ADDR(0x0000f61eu): goto L_F61E;
    case RC_ADDR(0x0000f620u): goto L_F620;
    case RC_ADDR(0x0000f624u): goto L_F624;
    case RC_ADDR(0x0000f626u): goto L_F626;
    case RC_ADDR(0x0000f628u): goto L_F628;
    case RC_ADDR(0x0000f62au): goto L_F62A;
    case RC_ADDR(0x0000f62cu): goto L_F62C;
    case RC_ADDR(0x0000f62eu): goto L_F62E;
    case RC_ADDR(0x0000f630u): goto L_F630;
    case RC_ADDR(0x0000f632u): goto L_F632;
    case RC_ADDR(0x0000f634u): goto L_F634;
    case RC_ADDR(0x0000f636u): goto L_F636;
    case RC_ADDR(0x0000f63au): goto L_F63A;
    case RC_ADDR(0x0000f63eu): goto L_F63E;
    case RC_ADDR(0x0000f640u): goto L_F640;
    case RC_ADDR(0x0000f644u): goto L_F644;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_F608:
    /* 0000f608   4  movem.l { D7 A5 A6 },-(SP) */
    c->pc = RC_ADDR(0x0000f608u);
    rc_step(c, m);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[0]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[1]);
    c->a[7] = t3;

L_F60C:
    /* 0000f60c   4  movea.l (6,A6),A0 */
    c->pc = RC_ADDR(0x0000f60cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[6] + 0x6u));
    c->a[0] = t0;

L_F610:
    /* 0000f610   4  clr.w (3c,A6) */
    c->pc = RC_ADDR(0x0000f610u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[6] + 0x3cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_F614:
    /* 0000f614   2  tst.w D0 */
    c->pc = RC_ADDR(0x0000f614u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_F616:
    /* 0000f616   2  beq 0000f640 */
    c->pc = RC_ADDR(0x0000f616u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_F640;

L_F618:
    /* 0000f618   2  moveq #0,D2 */
    c->pc = RC_ADDR(0x0000f618u);
    rc_step(c, m);
    c->d[2] = 0x00000000u;
    rc_set_nzvc(c, c->d[2], RC_L);

L_F61A:
    /* 0000f61a   4  move.w (0,A6),D2 */
    c->pc = RC_ADDR(0x0000f61au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[6] + 0x0u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F61E:
    /* 0000f61e   2  asl.w #8,D2 */
    c->pc = RC_ADDR(0x0000f61eu);
    rc_step(c, m);
    rc_d_set(c, 2, RC_W, rc_shift(c, 0, 1, 0x00000008u, rc_d_get(c, 2, RC_W), RC_W));

L_F620:
    /* 0000f620   4  move.w D2,(38,A6) */
    c->pc = RC_ADDR(0x0000f620u);
    rc_step(c, m);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, (c->a[6] + 0x38u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_F624:
    /* 0000f624   2  asl.w #8,D1 */
    c->pc = RC_ADDR(0x0000f624u);
    rc_step(c, m);
    rc_d_set(c, 1, RC_W, rc_shift(c, 0, 1, 0x00000008u, rc_d_get(c, 1, RC_W), RC_W));

L_F626:
    /* 0000f626   2  sub.w D1,D2 */
    c->pc = RC_ADDR(0x0000f626u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_F628:
    /* 0000f628   2  bcc 0000f62c */
    c->pc = RC_ADDR(0x0000f628u);
    rc_step(c, m);
    if (rc_cond(c, 4)) goto L_F62C;

L_F62A:
    /* 0000f62a   2  neg.w D2 */
    c->pc = RC_ADDR(0x0000f62au);
    rc_step(c, m);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_F62C:
    /* 0000f62c   2  divu.w D0,D2 */
    c->pc = RC_ADDR(0x0000f62cu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_divu(c, m, 2, t0);

L_F62E:
    /* 0000f62e   2  swap D1 */
    c->pc = RC_ADDR(0x0000f62eu);
    rc_step(c, m);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_F630:
    /* 0000f630   2  move.w D2,D1 */
    c->pc = RC_ADDR(0x0000f630u);
    rc_step(c, m);
    t0 = rc_d_get(c, 2, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F632:
    /* 0000f632   2  bne 0000f636 */
    c->pc = RC_ADDR(0x0000f632u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_F636;

L_F634:
    /* 0000f634   2  addq.w #1,D1 */
    c->pc = RC_ADDR(0x0000f634u);
    rc_step(c, m);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_F636:
    /* 0000f636   4  move.l D1,(3a,A6) */
    c->pc = RC_ADDR(0x0000f636u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[6] + 0x3au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_F63A:
    /* 0000f63a   4  movem.l (SP)+,{ D1 D2 A0 } */
    c->pc = RC_ADDR(0x0000f63au);
    rc_step(c, m);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_F63E:
    /* 0000f63e   2  rts */
    c->pc = RC_ADDR(0x0000f63eu);
    rc_step(c, m);
    rc_ret(c, m);
    return;

L_F640:
    /* 0000f640   4  move.w D1,(0,A6) */
    c->pc = RC_ADDR(0x0000f640u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[6] + 0x0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_F644:
    /* 0000f644   2  bra 0000f63a */
    c->pc = RC_ADDR(0x0000f644u);
    rc_step(c, m);
    rc_tick();
    goto L_F63A;

}
