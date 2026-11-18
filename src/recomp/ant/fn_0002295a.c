/* fn_0002295a - 24 byte(s), 8 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0002295a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x0002295au): goto L_2295A;
    case RC_ADDR(0x0002295cu): goto L_2295C;
    case RC_ADDR(0x00022960u): goto L_22960;
    case RC_ADDR(0x00022964u): goto L_22964;
    case RC_ADDR(0x00022966u): goto L_22966;
    case RC_ADDR(0x0002296au): goto L_2296A;
    case RC_ADDR(0x0002296cu): goto L_2296C;
    case RC_ADDR(0x00022970u): goto L_22970;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2295A:
    /* 0002295a   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0002295au);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_2295C:
    /* 0002295c   4  move.b (5,A7),D0 */
    c->pc = RC_ADDR(0x0002295cu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[7] + 0x5u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_22960:
    /* 00022960   4  cmp.b #60,D0 */
    c->pc = RC_ADDR(0x00022960u);
    rc_step(c, m, 8);
    t0 = 0x00000060u;
    t1 = rc_d_get(c, 0, RC_B);
    rc_cmp(c, RC_B, t1, t0);

L_22964:
    /* 00022964   2  bls 00022970 */
    c->pc = RC_ADDR(0x00022964u);
    rc_step(c, m, 10);
    if (rc_cond(c, 3)) goto L_22970;

L_22966:
    /* 00022966   4  cmp.b #7a,D0 */
    c->pc = RC_ADDR(0x00022966u);
    rc_step(c, m, 8);
    t0 = 0x0000007au;
    t1 = rc_d_get(c, 0, RC_B);
    rc_cmp(c, RC_B, t1, t0);

L_2296A:
    /* 0002296a   2  bhi 00022970 */
    c->pc = RC_ADDR(0x0002296au);
    rc_step(c, m, 10);
    if (rc_cond(c, 2)) goto L_22970;

L_2296C:
    /* 0002296c   4  sub.b #20,D0 */
    c->pc = RC_ADDR(0x0002296cu);
    rc_step(c, m, 10);
    t0 = 0x00000020u;
    t1 = rc_d_get(c, 0, RC_B);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_B, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_B, t2);

L_22970:
    /* 00022970   2  rts */
    c->pc = RC_ADDR(0x00022970u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
