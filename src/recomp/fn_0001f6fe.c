/* fn_0001f6fe - 14 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001f6fe(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f6feu): goto L_1F6FE;
    case RC_ADDR(0x0001f702u): goto L_1F702;
    case RC_ADDR(0x0001f708u): goto L_1F708;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F6FE:
    /* 0001f6fe   4  jsr (0001db1e) */
    c->pc = RC_ADDR(0x0001f6feu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f702u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001db1eu);
    return;

L_1F702:
    /* 0001f702   6  move.w #1,(28c2,A4) */
    c->pc = RC_ADDR(0x0001f702u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x28c2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F708:
    /* 0001f708   4  bra 0001f8ae */
    c->pc = RC_ADDR(0x0001f708u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0001f8aeu);
    return;

}
