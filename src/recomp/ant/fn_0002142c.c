/* fn_0002142c - 26 byte(s), 7 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0002142c(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0002142cu): goto L_2142C;
    case RC_ADDR(0x00021430u): goto L_21430;
    case RC_ADDR(0x00021434u): goto L_21434;
    case RC_ADDR(0x00021438u): goto L_21438;
    case RC_ADDR(0x0002143au): goto L_2143A;
    case RC_ADDR(0x0002143eu): goto L_2143E;
    case RC_ADDR(0x00021442u): goto L_21442;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2142C:
    /* 0002142c   4  movea.l (838,A4),A0 */
    c->pc = RC_ADDR(0x0002142cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x838u));
    c->a[0] = t0;

L_21430:
    /* 00021430   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x00021430u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21434:
    /* 00021434   4  jsr (0001fede) */
    c->pc = RC_ADDR(0x00021434u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00021438u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001fedeu);
    return;

L_21438:
    /* 00021438   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00021438u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_2143A:
    /* 0002143a   4  movea.l (838,A4),A0 */
    c->pc = RC_ADDR(0x0002143au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x838u));
    c->a[0] = t0;

L_2143E:
    /* 0002143e   4  clr.l (2c,A0) */
    c->pc = RC_ADDR(0x0002143eu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[0] + 0x2cu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_21442:
    /* 00021442   4  bra 00021950 */
    c->pc = RC_ADDR(0x00021442u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021950u);
    return;

}
