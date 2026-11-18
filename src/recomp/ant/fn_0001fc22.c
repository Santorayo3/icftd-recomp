/* fn_0001fc22 - 24 byte(s), 8 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001fc22(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001fc22u): goto L_1FC22;
    case RC_ADDR(0x0001fc26u): goto L_1FC26;
    case RC_ADDR(0x0001fc28u): goto L_1FC28;
    case RC_ADDR(0x0001fc2cu): goto L_1FC2C;
    case RC_ADDR(0x0001fc30u): goto L_1FC30;
    case RC_ADDR(0x0001fc34u): goto L_1FC34;
    case RC_ADDR(0x0001fc36u): goto L_1FC36;
    case RC_ADDR(0x0001fc38u): goto L_1FC38;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1FC22:
    /* 0001fc22   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001fc22u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1FC26:
    /* 0001fc26   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0001fc26u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1FC28:
    /* 0001fc28   4  move.w #20,-(A7) */
    c->pc = RC_ADDR(0x0001fc28u);
    rc_step(c, m, 12);
    t0 = 0x00000020u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FC2C:
    /* 0001fc2c   4  pea (331a,A4) */
    c->pc = RC_ADDR(0x0001fc2cu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x331au));

L_1FC30:
    /* 0001fc30   4  jsr (00022946) */
    c->pc = RC_ADDR(0x0001fc30u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001fc34u));
    rc_depth++;
    c->pc = RC_ADDR(0x00022946u);
    return;

L_1FC34:
    /* 0001fc34   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001fc34u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1FC36:
    /* 0001fc36   2  unlk A5 */
    c->pc = RC_ADDR(0x0001fc36u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1FC38:
    /* 0001fc38   2  rts */
    c->pc = RC_ADDR(0x0001fc38u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
