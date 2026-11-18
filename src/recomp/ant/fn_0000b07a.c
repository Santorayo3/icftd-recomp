/* fn_0000b07a - 22 byte(s), 6 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000b07a(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000b07au): goto L_B07A;
    case RC_ADDR(0x0000b07eu): goto L_B07E;
    case RC_ADDR(0x0000b082u): goto L_B082;
    case RC_ADDR(0x0000b086u): goto L_B086;
    case RC_ADDR(0x0000b08cu): goto L_B08C;
    case RC_ADDR(0x0000b08eu): goto L_B08E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_B07A:
    /* 0000b07a   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000b07au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_B07E:
    /* 0000b07e   4  clr.l (ffffa422,A4) */
    c->pc = RC_ADDR(0x0000b07eu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x5bdeu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_B082:
    /* 0000b082   4  clr.w (fffff7ca,A4) */
    c->pc = RC_ADDR(0x0000b082u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x836u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_B086:
    /* 0000b086   6  move.w #ff,(fffff7cc,A4) */
    c->pc = RC_ADDR(0x0000b086u);
    rc_step(c, m, 16);
    t0 = 0x000000ffu;
    rc_wr16(c, m, (c->a[4] - 0x834u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_B08C:
    /* 0000b08c   2  unlk A5 */
    c->pc = RC_ADDR(0x0000b08cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_B08E:
    /* 0000b08e   2  rts */
    c->pc = RC_ADDR(0x0000b08eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
