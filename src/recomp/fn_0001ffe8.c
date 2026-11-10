/* fn_0001ffe8 - 8 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001ffe8(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case 0x0001ffe8u: goto L_1FFE8;
    case 0x0001ffecu: goto L_1FFEC;
    case 0x0001ffeeu: goto L_1FFEE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1FFE8:
    /* 0001ffe8   4  movem.l (SP)+,{ D4 D5 A2 } */
    c->pc = 0x0001ffe8u;
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_1FFEC:
    /* 0001ffec   2  unlk A5 */
    c->pc = 0x0001ffecu;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1FFEE:
    /* 0001ffee   2  rts */
    c->pc = 0x0001ffeeu;
    rc_ret(c, m);
    return;

}
