/* fn_0001c478 - 30 byte(s), 9 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001c478(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case 0x0001c478u: goto L_1C478;
    case 0x0001c47cu: goto L_1C47C;
    case 0x0001c480u: goto L_1C480;
    case 0x0001c484u: goto L_1C484;
    case 0x0001c488u: goto L_1C488;
    case 0x0001c48cu: goto L_1C48C;
    case 0x0001c490u: goto L_1C490;
    case 0x0001c492u: goto L_1C492;
    case 0x0001c494u: goto L_1C494;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1C478:
    /* 0001c478   4  link.w A5,#fffffffe */
    c->pc = 0x0001c478u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_1C47C:
    /* 0001c47c   4  jsr (ffff81ee,A4) */
    c->pc = 0x0001c47cu;
    /* vector 82 */
    rc_push32(c, m, 0x0001c480u);
    rc_depth++;
    c->pc = 0x0001d1dau;
    return;

L_1C480:
    /* 0001c480   4  jsr (ffff81ee,A4) */
    c->pc = 0x0001c480u;
    /* vector 82 */
    rc_push32(c, m, 0x0001c484u);
    rc_depth++;
    c->pc = 0x0001d1dau;
    return;

L_1C484:
    /* 0001c484   4  pea (00001420).l */
    c->pc = 0x0001c484u;
    rc_push32(c, m, 0x00001420u);

L_1C488:
    /* 0001c488   4  move.l (262a,A4),-(A7) */
    c->pc = 0x0001c488u;
    t0 = rc_rd32(c, m, (c->a[4] + 0x262au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C48C:
    /* 0001c48c   4  jsr (ffff8344,A4) */
    c->pc = 0x0001c48cu;
    /* vector 139: exec.library -210 */
    c->pc = 0x0001c490u;
    rc_os_call(c, m, 0, -210);

L_1C490:
    /* 0001c490   2  addq.w #8,A7 */
    c->pc = 0x0001c490u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1C492:
    /* 0001c492   2  unlk A5 */
    c->pc = 0x0001c492u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1C494:
    /* 0001c494   2  rts */
    c->pc = 0x0001c494u;
    rc_ret(c, m);
    return;

}
