/* fn_0000ad1a - 28 byte(s), 8 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000ad1a(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000ad1au): goto L_AD1A;
    case RC_ADDR(0x0000ad1eu): goto L_AD1E;
    case RC_ADDR(0x0000ad24u): goto L_AD24;
    case RC_ADDR(0x0000ad28u): goto L_AD28;
    case RC_ADDR(0x0000ad2cu): goto L_AD2C;
    case RC_ADDR(0x0000ad2eu): goto L_AD2E;
    case RC_ADDR(0x0000ad32u): goto L_AD32;
    case RC_ADDR(0x0000ad34u): goto L_AD34;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_AD1A:
    /* 0000ad1a   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000ad1au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_AD1E:
    /* 0000ad1e   6  pea (00010002).l */
    c->pc = RC_ADDR(0x0000ad1eu);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010002u);

L_AD24:
    /* 0000ad24   4  pea (00000008).l */
    c->pc = RC_ADDR(0x0000ad24u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000008u);

L_AD28:
    /* 0000ad28   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x0000ad28u);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x0000ad2cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_AD2C:
    /* 0000ad2c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000ad2cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_AD2E:
    /* 0000ad2e   4  move.l D0,(cea,A4) */
    c->pc = RC_ADDR(0x0000ad2eu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0xceau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_AD32:
    /* 0000ad32   2  unlk A5 */
    c->pc = RC_ADDR(0x0000ad32u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_AD34:
    /* 0000ad34   2  rts */
    c->pc = RC_ADDR(0x0000ad34u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
