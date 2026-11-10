/* fn_000211d4 - 26 byte(s), 12 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000211d4(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000211d4u): goto L_211D4;
    case RC_ADDR(0x000211d8u): goto L_211D8;
    case RC_ADDR(0x000211dau): goto L_211DA;
    case RC_ADDR(0x000211dcu): goto L_211DC;
    case RC_ADDR(0x000211deu): goto L_211DE;
    case RC_ADDR(0x000211e0u): goto L_211E0;
    case RC_ADDR(0x000211e2u): goto L_211E2;
    case RC_ADDR(0x000211e4u): goto L_211E4;
    case RC_ADDR(0x000211e6u): goto L_211E6;
    case RC_ADDR(0x000211e8u): goto L_211E8;
    case RC_ADDR(0x000211eau): goto L_211EA;
    case RC_ADDR(0x000211ecu): goto L_211EC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_211D4:
    /* 000211d4   4  movem.l { A3 A6 },-(SP) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000211d4u);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[1]);
    c->a[7] = t3;

L_211D8:
    /* 000211d8   2  clr.l D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000211d8u);
    rc_d_set(c, 4, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_211DA:
    /* 000211da   2  tst.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000211dau);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_211DC:
    /* 000211dc   2  bpl 000211e2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000211dcu);
    if (rc_cond(c, 10)) goto L_211E2;

L_211DE:
    /* 000211de   2  neg.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000211deu);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_L, 0u, t1, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_211E0:
    /* 000211e0   2  addq.w #1,D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000211e0u);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_211E2:
    /* 000211e2   2  tst.l D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000211e2u);
    t0 = rc_d_get(c, 1, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_211E4:
    /* 000211e4   2  bpl 000211e8 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000211e4u);
    if (rc_cond(c, 10)) goto L_211E8;

L_211E6:
    /* 000211e6   2  neg.l D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000211e6u);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_L, 0u, t1, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_211E8:
    /* 000211e8   2  bsr 00021204 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000211e8u);
    rc_push32(c, m, RC_ADDR(0x000211eau));
    rc_depth++;
    c->pc = RC_ADDR(0x00021204u);
    return;

L_211EA:
    /* 000211ea   2  move.l D1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000211eau);
    t0 = rc_d_get(c, 1, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_211EC:
    /* 000211ec   2  bra 000211c6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000211ecu);
    c->pc = RC_ADDR(0x000211c6u);
    return;

}
