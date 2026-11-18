/* fn_00004a78 - 16 byte(s), 5 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00004a78(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case RC_ADDR(0x00004a78u): goto L_4A78;
    case RC_ADDR(0x00004a7cu): goto L_4A7C;
    case RC_ADDR(0x00004a80u): goto L_4A80;
    case RC_ADDR(0x00004a84u): goto L_4A84;
    case RC_ADDR(0x00004a86u): goto L_4A86;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_4A78:
    /* 00004a78   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00004a78u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_4A7C:
    /* 00004a7c   4  jsr (00004952) */
    c->pc = RC_ADDR(0x00004a7cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00004a80u));
    rc_depth++;
    c->pc = RC_ADDR(0x00004952u);
    return;

L_4A80:
    /* 00004a80   4  jsr (ffff8284,A4) */
    c->pc = RC_ADDR(0x00004a80u);
    rc_step(c, m, 18);
    /* vector 107 */
    rc_push32(c, m, RC_ADDR(0x00004a84u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d7au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021320u);
    return;

L_4A84:
    /* 00004a84   2  unlk A5 */
    c->pc = RC_ADDR(0x00004a84u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_4A86:
    /* 00004a86   2  rts */
    c->pc = RC_ADDR(0x00004a86u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
