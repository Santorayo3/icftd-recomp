/* fn_0000e014 - 40 byte(s), 12 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000e014(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case 0x0000e014u: goto L_E014;
    case 0x0000e018u: goto L_E018;
    case 0x0000e01cu: goto L_E01C;
    case 0x0000e020u: goto L_E020;
    case 0x0000e024u: goto L_E024;
    case 0x0000e028u: goto L_E028;
    case 0x0000e02au: goto L_E02A;
    case 0x0000e02eu: goto L_E02E;
    case 0x0000e032u: goto L_E032;
    case 0x0000e036u: goto L_E036;
    case 0x0000e038u: goto L_E038;
    case 0x0000e03au: goto L_E03A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_E014:
    /* 0000e014   4  link.w A5,#0 */
    c->pc = 0x0000e014u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_E018:
    /* 0000e018   4  jsr (ffff80c8,A4) */
    c->pc = 0x0000e018u;
    /* vector 33 */
    rc_push32(c, m, 0x0000e01cu);
    rc_depth++;
    c->pc = 0x00009becu;
    return;

L_E01C:
    /* 0000e01c   4  move.l (72e,A4),-(A7) */
    c->pc = 0x0000e01cu;
    t0 = rc_rd32(c, m, (c->a[4] + 0x72eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_E020:
    /* 0000e020   4  move.l (722,A4),-(A7) */
    c->pc = 0x0000e020u;
    t0 = rc_rd32(c, m, (c->a[4] + 0x722u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_E024:
    /* 0000e024   4  jsr (ffff8344,A4) */
    c->pc = 0x0000e024u;
    /* vector 139: exec.library -210 */
    c->pc = 0x0000e028u;
    rc_os_call(c, m, 0, -210);

L_E028:
    /* 0000e028   2  addq.w #8,A7 */
    c->pc = 0x0000e028u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_E02A:
    /* 0000e02a   4  move.l (732,A4),-(A7) */
    c->pc = 0x0000e02au;
    t0 = rc_rd32(c, m, (c->a[4] + 0x732u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_E02E:
    /* 0000e02e   4  move.l (726,A4),-(A7) */
    c->pc = 0x0000e02eu;
    t0 = rc_rd32(c, m, (c->a[4] + 0x726u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_E032:
    /* 0000e032   4  jsr (ffff8344,A4) */
    c->pc = 0x0000e032u;
    /* vector 139: exec.library -210 */
    c->pc = 0x0000e036u;
    rc_os_call(c, m, 0, -210);

L_E036:
    /* 0000e036   2  addq.w #8,A7 */
    c->pc = 0x0000e036u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_E038:
    /* 0000e038   2  unlk A5 */
    c->pc = 0x0000e038u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_E03A:
    /* 0000e03a   2  rts */
    c->pc = 0x0000e03au;
    rc_ret(c, m);
    return;

}
