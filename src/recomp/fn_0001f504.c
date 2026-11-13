/* fn_0001f504 - 14 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001f504(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f504u): goto L_1F504;
    case RC_ADDR(0x0001f508u): goto L_1F508;
    case RC_ADDR(0x0001f50eu): goto L_1F50E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F504:
    /* 0001f504   4  movea.l (a,A5),A0 */
    c->pc = RC_ADDR(0x0001f504u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[0] = t0;

L_1F508:
    /* 0001f508   6  andi.w #fffd,(a,A0) */
    c->pc = RC_ADDR(0x0001f508u);
    rc_step(c, m, 20);
    t3 = (c->a[0] + 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 & 0x0000fffdu;
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_1F50E:
    /* 0001f50e   4  bra 0001f8ae */
    c->pc = RC_ADDR(0x0001f50eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0001f8aeu);
    return;

}
