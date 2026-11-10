/* fn_0001c7d2 - 42 byte(s), 10 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001c7d2(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case 0x0001c7d2u: goto L_1C7D2;
    case 0x0001c7d6u: goto L_1C7D6;
    case 0x0001c7dau: goto L_1C7DA;
    case 0x0001c7deu: goto L_1C7DE;
    case 0x0001c7e4u: goto L_1C7E4;
    case 0x0001c7eau: goto L_1C7EA;
    case 0x0001c7eeu: goto L_1C7EE;
    case 0x0001c7f4u: goto L_1C7F4;
    case 0x0001c7f8u: goto L_1C7F8;
    case 0x0001c7fau: goto L_1C7FA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1C7D2:
    /* 0001c7d2   4  link.w A5,#0 */
    c->pc = 0x0001c7d2u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1C7D6:
    /* 0001c7d6   4  clr.w (26a2,A4) */
    c->pc = 0x0001c7d6u;
    rc_wr16(c, m, (c->a[4] + 0x26a2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1C7DA:
    /* 0001c7da   4  clr.w (26a6,A4) */
    c->pc = 0x0001c7dau;
    rc_wr16(c, m, (c->a[4] + 0x26a6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1C7DE:
    /* 0001c7de   6  move.w #14,(269c,A4) */
    c->pc = 0x0001c7deu;
    t0 = 0x00000014u;
    rc_wr16(c, m, (c->a[4] + 0x269cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C7E4:
    /* 0001c7e4   6  move.w #11,(227c,A4) */
    c->pc = 0x0001c7e4u;
    t0 = 0x00000011u;
    rc_wr16(c, m, (c->a[4] + 0x227cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C7EA:
    /* 0001c7ea   4  clr.w (227e,A4) */
    c->pc = 0x0001c7eau;
    rc_wr16(c, m, (c->a[4] + 0x227eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1C7EE:
    /* 0001c7ee   6  move.w #ffec,(26a8,A4) */
    c->pc = 0x0001c7eeu;
    t0 = 0x0000ffecu;
    rc_wr16(c, m, (c->a[4] + 0x26a8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C7F4:
    /* 0001c7f4   4  clr.w (269e,A4) */
    c->pc = 0x0001c7f4u;
    rc_wr16(c, m, (c->a[4] + 0x269eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1C7F8:
    /* 0001c7f8   2  unlk A5 */
    c->pc = 0x0001c7f8u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1C7FA:
    /* 0001c7fa   2  rts */
    c->pc = 0x0001c7fau;
    rc_ret(c, m);
    return;

}
