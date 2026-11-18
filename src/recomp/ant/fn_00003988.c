/* fn_00003988 - 12 byte(s), 5 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00003988(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case RC_ADDR(0x00003988u): goto L_3988;
    case RC_ADDR(0x0000398cu): goto L_398C;
    case RC_ADDR(0x0000398eu): goto L_398E;
    case RC_ADDR(0x00003990u): goto L_3990;
    case RC_ADDR(0x00003992u): goto L_3992;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_3988:
    /* 00003988   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00003988u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_398C:
    /* 0000398c   2  bsr 00003912 */
    c->pc = RC_ADDR(0x0000398cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000398eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00003912u);
    return;

L_398E:
    /* 0000398e   2  bsr 00003960 */
    c->pc = RC_ADDR(0x0000398eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00003990u));
    rc_depth++;
    c->pc = RC_ADDR(0x00003960u);
    return;

L_3990:
    /* 00003990   2  unlk A5 */
    c->pc = RC_ADDR(0x00003990u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_3992:
    /* 00003992   2  rts */
    c->pc = RC_ADDR(0x00003992u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
