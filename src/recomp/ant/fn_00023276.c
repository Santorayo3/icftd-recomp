/* fn_00023276 - 26 byte(s), 12 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00023276(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00023276u): goto L_23276;
    case RC_ADDR(0x0002327au): goto L_2327A;
    case RC_ADDR(0x0002327cu): goto L_2327C;
    case RC_ADDR(0x0002327eu): goto L_2327E;
    case RC_ADDR(0x00023280u): goto L_23280;
    case RC_ADDR(0x00023282u): goto L_23282;
    case RC_ADDR(0x00023284u): goto L_23284;
    case RC_ADDR(0x00023286u): goto L_23286;
    case RC_ADDR(0x00023288u): goto L_23288;
    case RC_ADDR(0x0002328au): goto L_2328A;
    case RC_ADDR(0x0002328cu): goto L_2328C;
    case RC_ADDR(0x0002328eu): goto L_2328E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_23276:
    /* 00023276   4  movem.l { A3 A6 },-(SP) */
    c->pc = RC_ADDR(0x00023276u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[1]);
    c->a[7] = t3;

L_2327A:
    /* 0002327a   2  clr.l D4 */
    c->pc = RC_ADDR(0x0002327au);
    rc_step(c, m, 6);
    rc_d_set(c, 4, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_2327C:
    /* 0002327c   2  tst.l D0 */
    c->pc = RC_ADDR(0x0002327cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_2327E:
    /* 0002327e   2  bpl 00023284 */
    c->pc = RC_ADDR(0x0002327eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 10)) goto L_23284;

L_23280:
    /* 00023280   2  neg.l D0 */
    c->pc = RC_ADDR(0x00023280u);
    rc_step(c, m, 6);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_L, 0u, t1, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_23282:
    /* 00023282   2  addq.w #1,D4 */
    c->pc = RC_ADDR(0x00023282u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_23284:
    /* 00023284   2  tst.l D1 */
    c->pc = RC_ADDR(0x00023284u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_23286:
    /* 00023286   2  bpl 0002328a */
    c->pc = RC_ADDR(0x00023286u);
    rc_step(c, m, 10);
    if (rc_cond(c, 10)) goto L_2328A;

L_23288:
    /* 00023288   2  neg.l D1 */
    c->pc = RC_ADDR(0x00023288u);
    rc_step(c, m, 6);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_L, 0u, t1, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_2328A:
    /* 0002328a   2  bsr 000232a6 */
    c->pc = RC_ADDR(0x0002328au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0002328cu));
    rc_depth++;
    c->pc = RC_ADDR(0x000232a6u);
    return;

L_2328C:
    /* 0002328c   2  move.l D1,D0 */
    c->pc = RC_ADDR(0x0002328cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_2328E:
    /* 0002328e   2  bra 00023268 */
    c->pc = RC_ADDR(0x0002328eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023268u);
    return;

}
