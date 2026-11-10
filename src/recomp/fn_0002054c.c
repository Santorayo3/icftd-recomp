/* fn_0002054c - 70 byte(s), 21 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0002054c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0002054cu): goto L_2054C;
    case RC_ADDR(0x00020550u): goto L_20550;
    case RC_ADDR(0x00020556u): goto L_20556;
    case RC_ADDR(0x0002055cu): goto L_2055C;
    case RC_ADDR(0x0002055eu): goto L_2055E;
    case RC_ADDR(0x00020562u): goto L_20562;
    case RC_ADDR(0x00020566u): goto L_20566;
    case RC_ADDR(0x00020568u): goto L_20568;
    case RC_ADDR(0x0002056cu): goto L_2056C;
    case RC_ADDR(0x0002056eu): goto L_2056E;
    case RC_ADDR(0x00020572u): goto L_20572;
    case RC_ADDR(0x00020574u): goto L_20574;
    case RC_ADDR(0x00020576u): goto L_20576;
    case RC_ADDR(0x0002057au): goto L_2057A;
    case RC_ADDR(0x0002057eu): goto L_2057E;
    case RC_ADDR(0x00020580u): goto L_20580;
    case RC_ADDR(0x00020584u): goto L_20584;
    case RC_ADDR(0x00020588u): goto L_20588;
    case RC_ADDR(0x0002058au): goto L_2058A;
    case RC_ADDR(0x0002058eu): goto L_2058E;
    case RC_ADDR(0x00020590u): goto L_20590;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2054C:
    /* 0002054c   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002054cu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_20550:
    /* 00020550   6  move.w #100,(2b24,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020550u);
    t0 = 0x00000100u;
    rc_wr16(c, m, (c->a[4] + 0x2b24u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20556:
    /* 00020556   6  cmpi.w #c,(2b1a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020556u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2b1au));
    rc_cmp(c, RC_W, t0, 0x0000000cu);

L_2055C:
    /* 0002055c   2  bge 0002058e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002055cu);
    if (rc_cond(c, 12)) goto L_2058E;

L_2055E:
    /* 0002055e   4  addq.w #1,(2b1a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002055eu);
    t3 = (c->a[4] + 0x2b1au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_20562:
    /* 00020562   4  move.w (2b1a,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020562u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2b1au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20566:
    /* 00020566   2  subq.w #8,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020566u);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000008u;
    rc_flags_sub(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_20568:
    /* 00020568   4  move.w D0,(2b1c,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020568u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x2b1cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2056C:
    /* 0002056c   2  moveq #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002056cu);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_2056E:
    /* 0002056e   4  move.w (2b1a,A4),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002056eu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2b1au));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20572:
    /* 00020572   2  asl.w D1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020572u);
    c->d[0] = rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_W), RC_W);

L_20574:
    /* 00020574   2  subq.w #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020574u);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_20576:
    /* 00020576   4  move.w D0,(2b1e,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020576u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x2b1eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2057A:
    /* 0002057a   4  move.w (2b1e,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002057au);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2b1eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2057E:
    /* 0002057e   2  subq.w #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002057eu);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_20580:
    /* 00020580   4  move.w D0,(2b22,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020580u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x2b22u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20584:
    /* 00020584   4  move.w (2b1e,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020584u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2b1eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20588:
    /* 00020588   2  subq.w #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020588u);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_2058A:
    /* 0002058a   4  move.w D0,(2b20,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002058au);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x2b20u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2058E:
    /* 0002058e   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002058eu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_20590:
    /* 00020590   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020590u);
    rc_ret(c, m);
    return;

}
