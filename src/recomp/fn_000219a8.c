/* fn_000219a8 - 10 byte(s), 2 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000219a8(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000219a8u): goto L_219A8;
    case RC_ADDR(0x000219aeu): goto L_219AE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_219A8:
    /* 000219a8   6  move.l #ffffffac,-(A7) */
    c->pc = RC_ADDR(0x000219a8u);
    rc_step(c, m, 20);
    t0 = 0xffffffacu;
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_219AE:
    /* 000219ae   4  jmp (000219bc) */
    c->pc = RC_ADDR(0x000219aeu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000219bcu);
    return;

}
