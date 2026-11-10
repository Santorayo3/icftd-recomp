/* fn_00009eb6 - 12 byte(s), 4 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00009eb6(cpu_t *c, rt_machine *m)
{
    u32 t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x00009eb6u): goto L_9EB6;
    case RC_ADDR(0x00009eb8u): goto L_9EB8;
    case RC_ADDR(0x00009ebcu): goto L_9EBC;
    case RC_ADDR(0x00009ec0u): goto L_9EC0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_9EB6:
    /* 00009eb6   2  moveq #73,D1 */
    c->pc = RC_ADDR(0x00009eb6u);
    c->d[1] = 0x00000073u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_9EB8:
    /* 00009eb8   4  ori.b #55,D0 */
    c->pc = RC_ADDR(0x00009eb8u);
    t1 = rc_d_get(c, 0, RC_B);
    t2 = t1 | 0x00000055u;
    rc_d_set(c, 0, RC_B, t2);
    rc_set_nzvc(c, t2, RC_B);

L_9EBC:
    /* 00009ebc   4  ori.b #5d,D0 */
    c->pc = RC_ADDR(0x00009ebcu);
    t1 = rc_d_get(c, 0, RC_B);
    t2 = t1 | 0x0000005du;
    rc_d_set(c, 0, RC_B, t2);
    rc_set_nzvc(c, t2, RC_B);

L_9EC0:
    /* 00009ec0   2  rts */
    c->pc = RC_ADDR(0x00009ec0u);
    rc_ret(c, m);
    return;

}
