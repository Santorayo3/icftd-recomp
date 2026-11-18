/* fn_00023a54 - 10 byte(s), 2 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00023a54(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00023a54u): goto L_23A54;
    case RC_ADDR(0x00023a5au): goto L_23A5A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_23A54:
    /* 00023a54   6  move.l #ffffffdc,-(A7) */
    c->pc = RC_ADDR(0x00023a54u);
    rc_step(c, m, 20);
    t0 = 0xffffffdcu;
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_23A5A:
    /* 00023a5a   4  jmp (00023a5e) */
    c->pc = RC_ADDR(0x00023a5au);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023a5eu);
    return;

}
