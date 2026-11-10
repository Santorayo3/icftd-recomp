/* fn_0001d4fa - 94 byte(s), 28 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001d4fa(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001d4fau): goto L_1D4FA;
    case RC_ADDR(0x0001d4feu): goto L_1D4FE;
    case RC_ADDR(0x0001d502u): goto L_1D502;
    case RC_ADDR(0x0001d506u): goto L_1D506;
    case RC_ADDR(0x0001d508u): goto L_1D508;
    case RC_ADDR(0x0001d50au): goto L_1D50A;
    case RC_ADDR(0x0001d50eu): goto L_1D50E;
    case RC_ADDR(0x0001d512u): goto L_1D512;
    case RC_ADDR(0x0001d518u): goto L_1D518;
    case RC_ADDR(0x0001d51cu): goto L_1D51C;
    case RC_ADDR(0x0001d51eu): goto L_1D51E;
    case RC_ADDR(0x0001d522u): goto L_1D522;
    case RC_ADDR(0x0001d526u): goto L_1D526;
    case RC_ADDR(0x0001d52au): goto L_1D52A;
    case RC_ADDR(0x0001d52eu): goto L_1D52E;
    case RC_ADDR(0x0001d530u): goto L_1D530;
    case RC_ADDR(0x0001d532u): goto L_1D532;
    case RC_ADDR(0x0001d534u): goto L_1D534;
    case RC_ADDR(0x0001d538u): goto L_1D538;
    case RC_ADDR(0x0001d53au): goto L_1D53A;
    case RC_ADDR(0x0001d53cu): goto L_1D53C;
    case RC_ADDR(0x0001d540u): goto L_1D540;
    case RC_ADDR(0x0001d544u): goto L_1D544;
    case RC_ADDR(0x0001d546u): goto L_1D546;
    case RC_ADDR(0x0001d54cu): goto L_1D54C;
    case RC_ADDR(0x0001d550u): goto L_1D550;
    case RC_ADDR(0x0001d554u): goto L_1D554;
    case RC_ADDR(0x0001d556u): goto L_1D556;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1D4FA:
    /* 0001d4fa   4  link.w A5,#fffffffc */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d4fau);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_1D4FE:
    /* 0001d4fe   4  clr.w (ffffcb1c,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d4feu);
    rc_wr16(c, m, (c->a[4] - 0x34e4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D502:
    /* 0001d502   4  movea.l (8,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d502u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1D506:
    /* 0001d506   2  tst.b (A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d506u);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_set_nzvc(c, t0, RC_B);

L_1D508:
    /* 0001d508   2  bne 0001d512 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d508u);
    if (rc_cond(c, 6)) goto L_1D512;

L_1D50A:
    /* 0001d50a   4  lea (0001d558),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d50au);
    c->a[0] = RC_ADDR(0x0001d558u);

L_1D50E:
    /* 0001d50e   4  move.l A0,(8,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d50eu);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D512:
    /* 0001d512   6  move.l (ffffcb18,A4),(fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d512u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34e8u));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D518:
    /* 0001d518   4  tst.l (fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d518u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_L);

L_1D51C:
    /* 0001d51c   2  beq 0001d546 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d51cu);
    if (rc_cond(c, 7)) goto L_1D546;

L_1D51E:
    /* 0001d51e   4  movea.l (fffffffc,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d51eu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1D522:
    /* 0001d522   4  move.l (4,A0),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d522u);
    t0 = rc_rd32(c, m, (c->a[0] + 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D526:
    /* 0001d526   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d526u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D52A:
    /* 0001d52a   4  jsr (ffff82ba,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d52au);
    /* vector 116 */
    rc_push32(c, m, RC_ADDR(0x0001d52eu));
    rc_depth++;
    c->pc = RC_ADDR(0x000208e8u);
    return;

L_1D52E:
    /* 0001d52e   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d52eu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1D530:
    /* 0001d530   2  tst.w D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d530u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1D532:
    /* 0001d532   2  bne 0001d53c */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d532u);
    if (rc_cond(c, 6)) goto L_1D53C;

L_1D534:
    /* 0001d534   4  move.l (fffffffc,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d534u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D538:
    /* 0001d538   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d538u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1D53A:
    /* 0001d53a   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d53au);
    rc_ret(c, m);
    return;

L_1D53C:
    /* 0001d53c   4  movea.l (fffffffc,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d53cu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1D540:
    /* 0001d540   4  move.l (A0),(fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d540u);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D544:
    /* 0001d544   2  bra 0001d518 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d544u);
    rc_tick();
    goto L_1D518;

L_1D546:
    /* 0001d546   6  move.w #1,(ffffcb1c,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d546u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x34e4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D54C:
    /* 0001d54c   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d54cu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D550:
    /* 0001d550   4  jsr (0001d476) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d550u);
    rc_push32(c, m, RC_ADDR(0x0001d554u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d476u);
    return;

L_1D554:
    /* 0001d554   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d554u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1D556:
    /* 0001d556   2  bra 0001d538 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d556u);
    rc_tick();
    goto L_1D538;

}
