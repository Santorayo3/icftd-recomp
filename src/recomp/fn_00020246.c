/* fn_00020246 - 32 byte(s), 9 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00020246(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case 0x00020246u: goto L_20246;
    case 0x0002024au: goto L_2024A;
    case 0x0002024eu: goto L_2024E;
    case 0x00020252u: goto L_20252;
    case 0x00020256u: goto L_20256;
    case 0x0002025au: goto L_2025A;
    case 0x0002025eu: goto L_2025E;
    case 0x00020262u: goto L_20262;
    case 0x00020264u: goto L_20264;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_20246:
    /* 00020246   4  link.w A5,#0 */
    c->pc = 0x00020246u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_2024A:
    /* 0002024a   4  clr.w (2ad8,A4) */
    c->pc = 0x0002024au;
    rc_wr16(c, m, (c->a[4] + 0x2ad8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2024E:
    /* 0002024e   4  clr.l (2ada,A4) */
    c->pc = 0x0002024eu;
    rc_wr32(c, m, (c->a[4] + 0x2adau), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_20252:
    /* 00020252   4  clr.l (2ade,A4) */
    c->pc = 0x00020252u;
    rc_wr32(c, m, (c->a[4] + 0x2adeu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_20256:
    /* 00020256   4  clr.w (2b18,A4) */
    c->pc = 0x00020256u;
    rc_wr16(c, m, (c->a[4] + 0x2b18u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2025A:
    /* 0002025a   4  clr.b (2ae2,A4) */
    c->pc = 0x0002025au;
    rc_wr8(c, m, (c->a[4] + 0x2ae2u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_2025E:
    /* 0002025e   4  clr.l (ac2,A4) */
    c->pc = 0x0002025eu;
    rc_wr32(c, m, (c->a[4] + 0xac2u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_20262:
    /* 00020262   2  unlk A5 */
    c->pc = 0x00020262u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_20264:
    /* 00020264   2  rts */
    c->pc = 0x00020264u;
    rc_ret(c, m);
    return;

}
