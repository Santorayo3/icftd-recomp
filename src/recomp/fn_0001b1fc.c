/* fn_0001b1fc - 36 byte(s), 10 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001b1fc(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case 0x0001b1fcu: goto L_1B1FC;
    case 0x0001b200u: goto L_1B200;
    case 0x0001b204u: goto L_1B204;
    case 0x0001b208u: goto L_1B208;
    case 0x0001b20cu: goto L_1B20C;
    case 0x0001b210u: goto L_1B210;
    case 0x0001b214u: goto L_1B214;
    case 0x0001b218u: goto L_1B218;
    case 0x0001b21cu: goto L_1B21C;
    case 0x0001b21eu: goto L_1B21E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1B1FC:
    /* 0001b1fc   4  link.w A5,#0 */
    c->pc = 0x0001b1fcu;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1B200:
    /* 0001b200   4  move.w #40,-(A7) */
    c->pc = 0x0001b200u;
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B204:
    /* 0001b204   4  move.w #3,-(A7) */
    c->pc = 0x0001b204u;
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B208:
    /* 0001b208   4  move.l (226c,A4),-(A7) */
    c->pc = 0x0001b208u;
    t0 = rc_rd32(c, m, (c->a[4] + 0x226cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B20C:
    /* 0001b20c   4  move.w (2256,A4),-(A7) */
    c->pc = 0x0001b20cu;
    t0 = rc_rd16(c, m, (c->a[4] + 0x2256u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B210:
    /* 0001b210   4  move.l (2248,A4),-(A7) */
    c->pc = 0x0001b210u;
    t0 = rc_rd32(c, m, (c->a[4] + 0x2248u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B214:
    /* 0001b214   4  jsr (ffff80d4,A4) */
    c->pc = 0x0001b214u;
    /* vector 35 */
    rc_push32(c, m, 0x0001b218u);
    rc_depth++;
    c->pc = 0x00009c3cu;
    return;

L_1B218:
    /* 0001b218   4  lea (e,A7),A7 */
    c->pc = 0x0001b218u;
    c->a[7] = (c->a[7] + 0xeu);

L_1B21C:
    /* 0001b21c   2  unlk A5 */
    c->pc = 0x0001b21cu;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1B21E:
    /* 0001b21e   2  rts */
    c->pc = 0x0001b21eu;
    rc_ret(c, m);
    return;

}
