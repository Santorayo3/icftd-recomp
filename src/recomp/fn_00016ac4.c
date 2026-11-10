/* fn_00016ac4 - 46 byte(s), 13 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00016ac4(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00016ac4u): goto L_16AC4;
    case RC_ADDR(0x00016ac8u): goto L_16AC8;
    case RC_ADDR(0x00016acau): goto L_16ACA;
    case RC_ADDR(0x00016aceu): goto L_16ACE;
    case RC_ADDR(0x00016ad2u): goto L_16AD2;
    case RC_ADDR(0x00016ad6u): goto L_16AD6;
    case RC_ADDR(0x00016adau): goto L_16ADA;
    case RC_ADDR(0x00016adeu): goto L_16ADE;
    case RC_ADDR(0x00016ae2u): goto L_16AE2;
    case RC_ADDR(0x00016ae6u): goto L_16AE6;
    case RC_ADDR(0x00016aeau): goto L_16AEA;
    case RC_ADDR(0x00016aeeu): goto L_16AEE;
    case RC_ADDR(0x00016af0u): goto L_16AF0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_16AC4:
    /* 00016ac4   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00016ac4u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_16AC8:
    /* 00016ac8   2  bsr 00016a8c */
    c->pc = RC_ADDR(0x00016ac8u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00016acau));
    rc_depth++;
    c->pc = RC_ADDR(0x00016a8cu);
    return;

L_16ACA:
    /* 00016aca   4  move.l D0,(1350,A4) */
    c->pc = RC_ADDR(0x00016acau);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x1350u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_16ACE:
    /* 00016ace   4  move.l (1348,A4),-(A7) */
    c->pc = RC_ADDR(0x00016aceu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1348u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16AD2:
    /* 00016ad2   4  move.l (1344,A4),-(A7) */
    c->pc = RC_ADDR(0x00016ad2u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1344u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16AD6:
    /* 00016ad6   4  move.l (1350,A4),-(A7) */
    c->pc = RC_ADDR(0x00016ad6u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1350u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16ADA:
    /* 00016ada   4  jsr (0001e504) */
    c->pc = RC_ADDR(0x00016adau);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00016adeu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001e504u);
    return;

L_16ADE:
    /* 00016ade   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00016adeu);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_16AE2:
    /* 00016ae2   4  movea.l (1350,A4),A0 */
    c->pc = RC_ADDR(0x00016ae2u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1350u));
    c->a[0] = t0;

L_16AE6:
    /* 00016ae6   4  move.l D0,(24,A0) */
    c->pc = RC_ADDR(0x00016ae6u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[0] + 0x24u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_16AEA:
    /* 00016aea   4  move.l (1350,A4),D0 */
    c->pc = RC_ADDR(0x00016aeau);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1350u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_16AEE:
    /* 00016aee   2  unlk A5 */
    c->pc = RC_ADDR(0x00016aeeu);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_16AF0:
    /* 00016af0   2  rts */
    c->pc = RC_ADDR(0x00016af0u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
