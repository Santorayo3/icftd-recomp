/* fn_0001f4f6 - 14 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001f4f6(cpu_t *c, rt_machine *m)
{
    u32 t0, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f4f6u): goto L_1F4F6;
    case RC_ADDR(0x0001f4fau): goto L_1F4FA;
    case RC_ADDR(0x0001f500u): goto L_1F500;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F4F6:
    /* 0001f4f6   4  movea.l (a,A5),A0 */
    c->pc = RC_ADDR(0x0001f4f6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[0] = t0;

L_1F4FA:
    /* 0001f4fa   6  bset #1,(b,A0) */
    c->pc = RC_ADDR(0x0001f4fau);
    rc_step(c, m, 20);
    t3 = (c->a[0] + 0xbu);
    t4 = 0x00000001u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_1F500:
    /* 0001f500   4  bra 0001f8ae */
    c->pc = RC_ADDR(0x0001f500u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0001f8aeu);
    return;

}
