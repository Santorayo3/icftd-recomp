/* fn_0002324e - 40 byte(s), 17 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0002324e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0002324eu): goto L_2324E;
    case RC_ADDR(0x00023252u): goto L_23252;
    case RC_ADDR(0x00023254u): goto L_23254;
    case RC_ADDR(0x00023256u): goto L_23256;
    case RC_ADDR(0x00023258u): goto L_23258;
    case RC_ADDR(0x0002325au): goto L_2325A;
    case RC_ADDR(0x0002325cu): goto L_2325C;
    case RC_ADDR(0x0002325eu): goto L_2325E;
    case RC_ADDR(0x00023260u): goto L_23260;
    case RC_ADDR(0x00023262u): goto L_23262;
    case RC_ADDR(0x00023266u): goto L_23266;
    case RC_ADDR(0x00023268u): goto L_23268;
    case RC_ADDR(0x0002326au): goto L_2326A;
    case RC_ADDR(0x0002326cu): goto L_2326C;
    case RC_ADDR(0x0002326eu): goto L_2326E;
    case RC_ADDR(0x00023272u): goto L_23272;
    case RC_ADDR(0x00023274u): goto L_23274;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2324E:
    /* 0002324e   4  movem.l { A3 A6 },-(SP) */
    c->pc = RC_ADDR(0x0002324eu);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[1]);
    c->a[7] = t3;

L_23252:
    /* 00023252   2  clr.l D4 */
    c->pc = RC_ADDR(0x00023252u);
    rc_step(c, m, 6);
    rc_d_set(c, 4, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_23254:
    /* 00023254   2  tst.l D0 */
    c->pc = RC_ADDR(0x00023254u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_23256:
    /* 00023256   2  bpl 0002325c */
    c->pc = RC_ADDR(0x00023256u);
    rc_step(c, m, 10);
    if (rc_cond(c, 10)) goto L_2325C;

L_23258:
    /* 00023258   2  neg.l D0 */
    c->pc = RC_ADDR(0x00023258u);
    rc_step(c, m, 6);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_L, 0u, t1, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_2325A:
    /* 0002325a   2  addq.w #1,D4 */
    c->pc = RC_ADDR(0x0002325au);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_2325C:
    /* 0002325c   2  tst.l D1 */
    c->pc = RC_ADDR(0x0002325cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_2325E:
    /* 0002325e   2  bpl 00023266 */
    c->pc = RC_ADDR(0x0002325eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 10)) goto L_23266;

L_23260:
    /* 00023260   2  neg.l D1 */
    c->pc = RC_ADDR(0x00023260u);
    rc_step(c, m, 6);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_L, 0u, t1, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_23262:
    /* 00023262   4  eori.w #1,D4 */
    c->pc = RC_ADDR(0x00023262u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 ^ 0x00000001u;
    rc_d_set(c, 4, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_23266:
    /* 00023266   2  bsr 000232a6 */
    c->pc = RC_ADDR(0x00023266u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00023268u));
    rc_depth++;
    c->pc = RC_ADDR(0x000232a6u);
    return;

L_23268:
    /* 00023268   2  tst.w D4 */
    c->pc = RC_ADDR(0x00023268u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_2326A:
    /* 0002326a   2  beq 0002326e */
    c->pc = RC_ADDR(0x0002326au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2326E;

L_2326C:
    /* 0002326c   2  neg.l D0 */
    c->pc = RC_ADDR(0x0002326cu);
    rc_step(c, m, 6);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_L, 0u, t1, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_2326E:
    /* 0002326e   4  movem.l (SP)+,{ D1 D4 } */
    c->pc = RC_ADDR(0x0002326eu);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_23272:
    /* 00023272   2  tst.l D0 */
    c->pc = RC_ADDR(0x00023272u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_23274:
    /* 00023274   2  rts */
    c->pc = RC_ADDR(0x00023274u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
