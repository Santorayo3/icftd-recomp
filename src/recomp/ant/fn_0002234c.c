/* fn_0002234c - 26 byte(s), 11 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0002234c(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0002234cu): goto L_2234C;
    case RC_ADDR(0x00022350u): goto L_22350;
    case RC_ADDR(0x00022354u): goto L_22354;
    case RC_ADDR(0x00022356u): goto L_22356;
    case RC_ADDR(0x00022358u): goto L_22358;
    case RC_ADDR(0x0002235au): goto L_2235A;
    case RC_ADDR(0x0002235cu): goto L_2235C;
    case RC_ADDR(0x0002235eu): goto L_2235E;
    case RC_ADDR(0x00022360u): goto L_22360;
    case RC_ADDR(0x00022362u): goto L_22362;
    case RC_ADDR(0x00022364u): goto L_22364;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2234C:
    /* 0002234c   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0002234cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_22350:
    /* 00022350   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00022350u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_22354:
    /* 00022354   2  move.b (A0)+,D0 */
    c->pc = RC_ADDR(0x00022354u);
    rc_step(c, m, 8);
    t3 = c->a[0];
    c->a[0] += 1u;
    t0 = rc_rd8(c, m, t3);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_22356:
    /* 00022356   2  lsl.l #8,D0 */
    c->pc = RC_ADDR(0x00022356u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 1, 1, 0x00000008u, rc_d_get(c, 0, RC_L), RC_L));

L_22358:
    /* 00022358   2  move.b (A0)+,D0 */
    c->pc = RC_ADDR(0x00022358u);
    rc_step(c, m, 8);
    t3 = c->a[0];
    c->a[0] += 1u;
    t0 = rc_rd8(c, m, t3);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_2235A:
    /* 0002235a   2  lsl.l #8,D0 */
    c->pc = RC_ADDR(0x0002235au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 1, 1, 0x00000008u, rc_d_get(c, 0, RC_L), RC_L));

L_2235C:
    /* 0002235c   2  move.b (A0)+,D0 */
    c->pc = RC_ADDR(0x0002235cu);
    rc_step(c, m, 8);
    t3 = c->a[0];
    c->a[0] += 1u;
    t0 = rc_rd8(c, m, t3);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_2235E:
    /* 0002235e   2  lsl.l #8,D0 */
    c->pc = RC_ADDR(0x0002235eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 1, 1, 0x00000008u, rc_d_get(c, 0, RC_L), RC_L));

L_22360:
    /* 00022360   2  move.b (A0)+,D0 */
    c->pc = RC_ADDR(0x00022360u);
    rc_step(c, m, 8);
    t3 = c->a[0];
    c->a[0] += 1u;
    t0 = rc_rd8(c, m, t3);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_22362:
    /* 00022362   2  unlk A5 */
    c->pc = RC_ADDR(0x00022362u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_22364:
    /* 00022364   2  rts */
    c->pc = RC_ADDR(0x00022364u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
