/* fn_0002193e - 22 byte(s), 6 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0002193e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0002193eu): goto L_2193E;
    case RC_ADDR(0x00021944u): goto L_21944;
    case RC_ADDR(0x00021946u): goto L_21946;
    case RC_ADDR(0x00021948u): goto L_21948;
    case RC_ADDR(0x0002194cu): goto L_2194C;
    case RC_ADDR(0x00021950u): goto L_21950;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2193E:
    /* 0002193e   6  cmp.l #1c,D0 */
    c->pc = RC_ADDR(0x0002193eu);
    rc_step(c, m, 14);
    t0 = 0x0000001cu;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_21944:
    /* 00021944   2  bcc 00021950 */
    c->pc = RC_ADDR(0x00021944u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_21950;

L_21946:
    /* 00021946   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00021946u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_21948:
    /* 00021948   4  move.w (00021906),D0 */
    c->pc = RC_ADDR(0x00021948u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (RC_ADDR(0x00021906u) + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2194C:
    /* 0002194c   4  jmp (0002194e) */
    c->pc = RC_ADDR(0x0002194cu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (RC_ADDR(0x0002194eu) + t4);
    c->pc = t3;
    return;

L_21950:
    /* 00021950   4  bra 0002136c */
    c->pc = RC_ADDR(0x00021950u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0002136cu);
    return;

}
