/* fn_0000b258 - 36 byte(s), 10 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000b258(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case 0x0000b258u: goto L_B258;
    case 0x0000b25cu: goto L_B25C;
    case 0x0000b260u: goto L_B260;
    case 0x0000b264u: goto L_B264;
    case 0x0000b268u: goto L_B268;
    case 0x0000b26cu: goto L_B26C;
    case 0x0000b270u: goto L_B270;
    case 0x0000b274u: goto L_B274;
    case 0x0000b278u: goto L_B278;
    case 0x0000b27au: goto L_B27A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_B258:
    /* 0000b258   4  link.w A5,#0 */
    c->pc = 0x0000b258u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_B25C:
    /* 0000b25c   4  move.w #40,-(A7) */
    c->pc = 0x0000b25cu;
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B260:
    /* 0000b260   4  move.w #2,-(A7) */
    c->pc = 0x0000b260u;
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B264:
    /* 0000b264   4  move.l (406,A4),-(A7) */
    c->pc = 0x0000b264u;
    t0 = rc_rd32(c, m, (c->a[4] + 0x406u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B268:
    /* 0000b268   4  move.w (3fa,A4),-(A7) */
    c->pc = 0x0000b268u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x3fau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B26C:
    /* 0000b26c   4  move.l (3e8,A4),-(A7) */
    c->pc = 0x0000b26cu;
    t0 = rc_rd32(c, m, (c->a[4] + 0x3e8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B270:
    /* 0000b270   4  jsr (ffff80d4,A4) */
    c->pc = 0x0000b270u;
    /* vector 35 */
    rc_push32(c, m, 0x0000b274u);
    rc_depth++;
    c->pc = 0x00009c3cu;
    return;

L_B274:
    /* 0000b274   4  lea (e,A7),A7 */
    c->pc = 0x0000b274u;
    c->a[7] = (c->a[7] + 0xeu);

L_B278:
    /* 0000b278   2  unlk A5 */
    c->pc = 0x0000b278u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_B27A:
    /* 0000b27a   2  rts */
    c->pc = 0x0000b27au;
    rc_ret(c, m);
    return;

}
