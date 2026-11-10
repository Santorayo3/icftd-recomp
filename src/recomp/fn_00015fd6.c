/* fn_00015fd6 - 22 byte(s), 6 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00015fd6(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case 0x00015fd6u: goto L_15FD6;
    case 0x00015fdau: goto L_15FDA;
    case 0x00015fe0u: goto L_15FE0;
    case 0x00015fe6u: goto L_15FE6;
    case 0x00015fe8u: goto L_15FE8;
    case 0x00015feau: goto L_15FEA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_15FD6:
    /* 00015fd6   4  jsr (00016e8e) */
    c->pc = 0x00015fd6u;
    rc_push32(c, m, 0x00015fdau);
    rc_depth++;
    c->pc = 0x00016e8eu;
    return;

L_15FDA:
    /* 00015fda   6  andi.l #ffff,D0 */
    c->pc = 0x00015fdau;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 & 0x0000ffffu;
    rc_d_set(c, 0, RC_L, t2);
    rc_set_nzvc(c, t2, RC_L);

L_15FE0:
    /* 00015fe0   6  cmpi.l #2710,D0 */
    c->pc = 0x00015fe0u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t0, 0x00002710u);

L_15FE6:
    /* 00015fe6   2  blt 00015fec */
    c->pc = 0x00015fe6u;
    if (rc_cond(c, 13))
    {
        c->pc = 0x00015fecu;
        return;
    }

L_15FE8:
    /* 00015fe8   2  clr.l D0 */
    c->pc = 0x00015fe8u;
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_15FEA:
    /* 00015fea   2  rts */
    c->pc = 0x00015feau;
    rc_ret(c, m);
    return;

}
