/* fn_00021476 - 14 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00021476(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00021476u): goto L_21476;
    case RC_ADDR(0x0002147cu): goto L_2147C;
    case RC_ADDR(0x00021480u): goto L_21480;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21476:
    /* 00021476   6  movem.l (SP)+,{ D1 D2 D3 } */
    c->pc = RC_ADDR(0x00021476u);
    t3 = (c->a[7] + 0x4u);
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[3] = t0;
    t3 += 4u;

L_2147C:
    /* 0002147c   4  movea.l (3af8,A4),A6 */
    c->pc = RC_ADDR(0x0002147cu);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3af8u));
    c->a[6] = t0;

L_21480:
    /* 00021480   4  jmp (ffffffd6,A6) */
    c->pc = RC_ADDR(0x00021480u);
    rc_os_call_a6(c, m, -42);
    return;

}
