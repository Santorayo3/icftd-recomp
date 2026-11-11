/* fn_0000d51e - 94 byte(s), 29 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000d51e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000d51eu): goto L_D51E;
    case RC_ADDR(0x0000d522u): goto L_D522;
    case RC_ADDR(0x0000d526u): goto L_D526;
    case RC_ADDR(0x0000d52au): goto L_D52A;
    case RC_ADDR(0x0000d52eu): goto L_D52E;
    case RC_ADDR(0x0000d530u): goto L_D530;
    case RC_ADDR(0x0000d534u): goto L_D534;
    case RC_ADDR(0x0000d538u): goto L_D538;
    case RC_ADDR(0x0000d53au): goto L_D53A;
    case RC_ADDR(0x0000d53eu): goto L_D53E;
    case RC_ADDR(0x0000d542u): goto L_D542;
    case RC_ADDR(0x0000d546u): goto L_D546;
    case RC_ADDR(0x0000d548u): goto L_D548;
    case RC_ADDR(0x0000d54cu): goto L_D54C;
    case RC_ADDR(0x0000d54eu): goto L_D54E;
    case RC_ADDR(0x0000d550u): goto L_D550;
    case RC_ADDR(0x0000d554u): goto L_D554;
    case RC_ADDR(0x0000d556u): goto L_D556;
    case RC_ADDR(0x0000d55au): goto L_D55A;
    case RC_ADDR(0x0000d55eu): goto L_D55E;
    case RC_ADDR(0x0000d560u): goto L_D560;
    case RC_ADDR(0x0000d562u): goto L_D562;
    case RC_ADDR(0x0000d566u): goto L_D566;
    case RC_ADDR(0x0000d568u): goto L_D568;
    case RC_ADDR(0x0000d56cu): goto L_D56C;
    case RC_ADDR(0x0000d570u): goto L_D570;
    case RC_ADDR(0x0000d574u): goto L_D574;
    case RC_ADDR(0x0000d578u): goto L_D578;
    case RC_ADDR(0x0000d57au): goto L_D57A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_D51E:
    /* 0000d51e   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000d51eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_D522:
    /* 0000d522   4  movem.l { A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x0000d522u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_D526:
    /* 0000d526   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0000d526u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D52A:
    /* 0000d52a   4  cmp.w (a,A5),D0 */
    c->pc = RC_ADDR(0x0000d52au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_D52E:
    /* 0000d52e   2  beq 0000d570 */
    c->pc = RC_ADDR(0x0000d52eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_D570;

L_D530:
    /* 0000d530   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0000d530u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D534:
    /* 0000d534   4  sub.w (a,A5),D0 */
    c->pc = RC_ADDR(0x0000d534u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_D538:
    /* 0000d538   2  move.w D0,D4 */
    c->pc = RC_ADDR(0x0000d538u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D53A:
    /* 0000d53a   4  and.w #f,D4 */
    c->pc = RC_ADDR(0x0000d53au);
    rc_step(c, m, 10);
    t0 = 0x0000000fu;
    t2 = t0 & rc_d_get(c, 4, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 4, RC_W, t2);

L_D53E:
    /* 0000d53e   4  move.w (a,A5),D0 */
    c->pc = RC_ADDR(0x0000d53eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D542:
    /* 0000d542   4  sub.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0000d542u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_D546:
    /* 0000d546   2  move.w D0,D5 */
    c->pc = RC_ADDR(0x0000d546u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 5, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D548:
    /* 0000d548   4  and.w #f,D5 */
    c->pc = RC_ADDR(0x0000d548u);
    rc_step(c, m, 10);
    t0 = 0x0000000fu;
    t2 = t0 & rc_d_get(c, 5, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 5, RC_W, t2);

L_D54C:
    /* 0000d54c   2  cmp.w D5,D4 */
    c->pc = RC_ADDR(0x0000d54cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_W);
    t1 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_D54E:
    /* 0000d54e   2  bge 0000d55e */
    c->pc = RC_ADDR(0x0000d54eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_D55E;

L_D550:
    /* 0000d550   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0000d550u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D554:
    /* 0000d554   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x0000d554u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_D556:
    /* 0000d556   4  and.w #f,D0 */
    c->pc = RC_ADDR(0x0000d556u);
    rc_step(c, m, 10);
    t0 = 0x0000000fu;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_D55A:
    /* 0000d55a   4  move.w D0,(8,A5) */
    c->pc = RC_ADDR(0x0000d55au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D55E:
    /* 0000d55e   2  cmp.w D5,D4 */
    c->pc = RC_ADDR(0x0000d55eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_W);
    t1 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_D560:
    /* 0000d560   2  ble 0000d570 */
    c->pc = RC_ADDR(0x0000d560u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_D570;

L_D562:
    /* 0000d562   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0000d562u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D566:
    /* 0000d566   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x0000d566u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_D568:
    /* 0000d568   4  and.w #f,D0 */
    c->pc = RC_ADDR(0x0000d568u);
    rc_step(c, m, 10);
    t0 = 0x0000000fu;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_D56C:
    /* 0000d56c   4  move.w D0,(8,A5) */
    c->pc = RC_ADDR(0x0000d56cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D570:
    /* 0000d570   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0000d570u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D574:
    /* 0000d574   4  movem.l (SP)+,{ D4 D5 } */
    c->pc = RC_ADDR(0x0000d574u);
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
    c->a[7] = t3;

L_D578:
    /* 0000d578   2  unlk A5 */
    c->pc = RC_ADDR(0x0000d578u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_D57A:
    /* 0000d57a   2  rts */
    c->pc = RC_ADDR(0x0000d57au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
