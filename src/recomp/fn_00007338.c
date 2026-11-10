/* fn_00007338 - 70 byte(s), 22 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00007338(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00007338u): goto L_7338;
    case RC_ADDR(0x0000733cu): goto L_733C;
    case RC_ADDR(0x00007340u): goto L_7340;
    case RC_ADDR(0x00007346u): goto L_7346;
    case RC_ADDR(0x0000734au): goto L_734A;
    case RC_ADDR(0x0000734cu): goto L_734C;
    case RC_ADDR(0x00007350u): goto L_7350;
    case RC_ADDR(0x00007354u): goto L_7354;
    case RC_ADDR(0x00007356u): goto L_7356;
    case RC_ADDR(0x0000735au): goto L_735A;
    case RC_ADDR(0x0000735cu): goto L_735C;
    case RC_ADDR(0x0000735eu): goto L_735E;
    case RC_ADDR(0x00007360u): goto L_7360;
    case RC_ADDR(0x00007364u): goto L_7364;
    case RC_ADDR(0x00007366u): goto L_7366;
    case RC_ADDR(0x00007368u): goto L_7368;
    case RC_ADDR(0x0000736au): goto L_736A;
    case RC_ADDR(0x0000736eu): goto L_736E;
    case RC_ADDR(0x00007372u): goto L_7372;
    case RC_ADDR(0x00007378u): goto L_7378;
    case RC_ADDR(0x0000737au): goto L_737A;
    case RC_ADDR(0x0000737cu): goto L_737C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_7338:
    /* 00007338   4  link.w A5,#fffffffa */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00007338u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x6u;

L_733C:
    /* 0000733c   4  clr.b (ffffffff,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000733cu);
    rc_wr8(c, m, (c->a[5] - 0x1u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_7340:
    /* 00007340   6  move.l (ffffef90,A4),(fffffffa,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00007340u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x1070u));
    rc_wr32(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_7346:
    /* 00007346   4  tst.l (fffffffa,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00007346u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    rc_set_nzvc(c, t0, RC_L);

L_734A:
    /* 0000734a   2  beq 0000737a */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000734au);
    if (rc_cond(c, 7)) goto L_737A;

L_734C:
    /* 0000734c   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000734cu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7350:
    /* 00007350   4  movea.l (fffffffa,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00007350u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[0] = t0;

L_7354:
    /* 00007354   2  move.l (A0),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00007354u);
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7356:
    /* 00007356   4  jsr (ffff82ba,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00007356u);
    /* vector 116 */
    rc_push32(c, m, RC_ADDR(0x0000735au));
    rc_depth++;
    c->pc = RC_ADDR(0x000208e8u);
    return;

L_735A:
    /* 0000735a   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000735au);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_735C:
    /* 0000735c   2  tst.w D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000735cu);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_735E:
    /* 0000735e   2  bne 0000736a */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000735eu);
    if (rc_cond(c, 6)) goto L_736A;

L_7360:
    /* 00007360   4  move.b (ffffffff,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00007360u);
    t0 = rc_rd8(c, m, (c->a[5] - 0x1u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_7364:
    /* 00007364   2  ext.w D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00007364u);
    rc_ext_w(c, 0);

L_7366:
    /* 00007366   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00007366u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_7368:
    /* 00007368   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00007368u);
    rc_ret(c, m);
    return;

L_736A:
    /* 0000736a   4  addq.b #1,(ffffffff,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000736au);
    t3 = (c->a[5] - 0x1u);
    t1 = rc_rd8(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_B, t1, 0x00000001u, t2, 0);
    rc_wr8(c, m, t3, t2);

L_736E:
    /* 0000736e   4  movea.l (fffffffa,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000736eu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[0] = t0;

L_7372:
    /* 00007372   6  move.l (8,A0),(fffffffa,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00007372u);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    rc_wr32(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_7378:
    /* 00007378   2  bra 00007346 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00007378u);
    rc_tick();
    goto L_7346;

L_737A:
    /* 0000737a   2  moveq #ffffffff,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000737au);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_737C:
    /* 0000737c   2  bra 00007366 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000737cu);
    rc_tick();
    goto L_7366;

}
