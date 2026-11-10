/* fn_0001b926 - 36 byte(s), 11 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001b926(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case 0x0001b926u: goto L_1B926;
    case 0x0001b92au: goto L_1B92A;
    case 0x0001b92eu: goto L_1B92E;
    case 0x0001b932u: goto L_1B932;
    case 0x0001b936u: goto L_1B936;
    case 0x0001b938u: goto L_1B938;
    case 0x0001b93cu: goto L_1B93C;
    case 0x0001b940u: goto L_1B940;
    case 0x0001b944u: goto L_1B944;
    case 0x0001b946u: goto L_1B946;
    case 0x0001b948u: goto L_1B948;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1B926:
    /* 0001b926   4  link.w A5,#fffffffe */
    c->pc = 0x0001b926u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_1B92A:
    /* 0001b92a   4  move.l (a1a,A4),-(A7) */
    c->pc = 0x0001b92au;
    t0 = rc_rd32(c, m, (c->a[4] + 0xa1au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B92E:
    /* 0001b92e   4  move.l (fffff2f8,A4),-(A7) */
    c->pc = 0x0001b92eu;
    t0 = rc_rd32(c, m, (c->a[4] - 0xd08u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B932:
    /* 0001b932   4  jsr (ffff8344,A4) */
    c->pc = 0x0001b932u;
    /* vector 139: exec.library -210 */
    c->pc = 0x0001b936u;
    rc_os_call(c, m, 0, -210);

L_1B936:
    /* 0001b936   2  addq.w #8,A7 */
    c->pc = 0x0001b936u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1B938:
    /* 0001b938   4  move.l (fffff31c,A4),-(A7) */
    c->pc = 0x0001b938u;
    t0 = rc_rd32(c, m, (c->a[4] - 0xce4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B93C:
    /* 0001b93c   4  move.l (fffff314,A4),-(A7) */
    c->pc = 0x0001b93cu;
    t0 = rc_rd32(c, m, (c->a[4] - 0xcecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B940:
    /* 0001b940   4  jsr (ffff8344,A4) */
    c->pc = 0x0001b940u;
    /* vector 139: exec.library -210 */
    c->pc = 0x0001b944u;
    rc_os_call(c, m, 0, -210);

L_1B944:
    /* 0001b944   2  addq.w #8,A7 */
    c->pc = 0x0001b944u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1B946:
    /* 0001b946   2  unlk A5 */
    c->pc = 0x0001b946u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1B948:
    /* 0001b948   2  rts */
    c->pc = 0x0001b948u;
    rc_ret(c, m);
    return;

}
