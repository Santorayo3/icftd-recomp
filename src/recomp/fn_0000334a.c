/* fn_0000334a - 16 byte(s), 6 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000334a(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case 0x0000334au: goto L_334A;
    case 0x0000334eu: goto L_334E;
    case 0x00003352u: goto L_3352;
    case 0x00003354u: goto L_3354;
    case 0x00003356u: goto L_3356;
    case 0x00003358u: goto L_3358;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_334A:
    /* 0000334a   4  link.w A5,#0 */
    c->pc = 0x0000334au;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_334E:
    /* 0000334e   4  tst.w (ffffce40,A4) */
    c->pc = 0x0000334eu;
    t0 = rc_rd16(c, m, (c->a[4] - 0x31c0u));
    rc_set_nzvc(c, t0, RC_W);

L_3352:
    /* 00003352   2  beq 00003356 */
    c->pc = 0x00003352u;
    if (rc_cond(c, 7)) goto L_3356;

L_3354:
    /* 00003354   2  bra 0000334e */
    c->pc = 0x00003354u;
    rc_tick();
    goto L_334E;

L_3356:
    /* 00003356   2  unlk A5 */
    c->pc = 0x00003356u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_3358:
    /* 00003358   2  rts */
    c->pc = 0x00003358u;
    rc_ret(c, m);
    return;

}
