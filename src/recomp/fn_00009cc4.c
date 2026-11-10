/* fn_00009cc4 - 46 byte(s), 14 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00009cc4(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case 0x00009cc4u: goto L_9CC4;
    case 0x00009cc8u: goto L_9CC8;
    case 0x00009cccu: goto L_9CCC;
    case 0x00009cceu: goto L_9CCE;
    case 0x00009cd0u: goto L_9CD0;
    case 0x00009cd4u: goto L_9CD4;
    case 0x00009cd8u: goto L_9CD8;
    case 0x00009cdau: goto L_9CDA;
    case 0x00009cdeu: goto L_9CDE;
    case 0x00009ce2u: goto L_9CE2;
    case 0x00009ce6u: goto L_9CE6;
    case 0x00009ceau: goto L_9CEA;
    case 0x00009ceeu: goto L_9CEE;
    case 0x00009cf0u: goto L_9CF0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_9CC4:
    /* 00009cc4   4  link.w A5,#0 */
    c->pc = 0x00009cc4u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_9CC8:
    /* 00009cc8   4  tst.w (fffff022,A4) */
    c->pc = 0x00009cc8u;
    t0 = rc_rd16(c, m, (c->a[4] - 0xfdeu));
    rc_set_nzvc(c, t0, RC_W);

L_9CCC:
    /* 00009ccc   2  bne 00009ce6 */
    c->pc = 0x00009cccu;
    if (rc_cond(c, 6)) goto L_9CE6;

L_9CCE:
    /* 00009cce   2  clr.l -(A7) */
    c->pc = 0x00009cceu;
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_9CD0:
    /* 00009cd0   4  move.l (8,A5),-(A7) */
    c->pc = 0x00009cd0u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9CD4:
    /* 00009cd4   4  pea (ffffffff).l */
    c->pc = 0x00009cd4u;
    rc_push32(c, m, 0xffffffffu);

L_9CD8:
    /* 00009cd8   2  clr.l -(A7) */
    c->pc = 0x00009cd8u;
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_9CDA:
    /* 00009cda   4  move.l (ffffa202,A4),-(A7) */
    c->pc = 0x00009cdau;
    t0 = rc_rd32(c, m, (c->a[4] - 0x5dfeu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9CDE:
    /* 00009cde   4  jsr (0000eea8) */
    c->pc = 0x00009cdeu;
    rc_push32(c, m, 0x00009ce2u);
    rc_depth++;
    c->pc = 0x0000eea8u;
    return;

L_9CE2:
    /* 00009ce2   4  lea (14,A7),A7 */
    c->pc = 0x00009ce2u;
    c->a[7] = (c->a[7] + 0x14u);

L_9CE6:
    /* 00009ce6   4  movea.l (ffffa208,A4),A0 */
    c->pc = 0x00009ce6u;
    t0 = rc_rd32(c, m, (c->a[4] - 0x5df8u));
    c->a[0] = t0;

L_9CEA:
    /* 00009cea   4  move.w (fffff024,A4),(A0) */
    c->pc = 0x00009ceau;
    t0 = rc_rd16(c, m, (c->a[4] - 0xfdcu));
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9CEE:
    /* 00009cee   2  unlk A5 */
    c->pc = 0x00009ceeu;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_9CF0:
    /* 00009cf0   2  rts */
    c->pc = 0x00009cf0u;
    rc_ret(c, m);
    return;

}
