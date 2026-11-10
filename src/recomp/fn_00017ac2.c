/* fn_00017ac2 - 22 byte(s), 7 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00017ac2(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00017ac2u): goto L_17AC2;
    case RC_ADDR(0x00017ac6u): goto L_17AC6;
    case RC_ADDR(0x00017acau): goto L_17ACA;
    case RC_ADDR(0x00017aceu): goto L_17ACE;
    case RC_ADDR(0x00017ad0u): goto L_17AD0;
    case RC_ADDR(0x00017ad4u): goto L_17AD4;
    case RC_ADDR(0x00017ad6u): goto L_17AD6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_17AC2:
    /* 00017ac2   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00017ac2u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_17AC6:
    /* 00017ac6   4  pea (00017ad8) */
    c->pc = RC_ADDR(0x00017ac6u);
    rc_push32(c, m, RC_ADDR(0x00017ad8u));

L_17ACA:
    /* 00017aca   4  jsr (00016af2) */
    c->pc = RC_ADDR(0x00017acau);
    rc_push32(c, m, RC_ADDR(0x00017aceu));
    rc_depth++;
    c->pc = RC_ADDR(0x00016af2u);
    return;

L_17ACE:
    /* 00017ace   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00017aceu);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_17AD0:
    /* 00017ad0   4  move.l D0,(13b8,A4) */
    c->pc = RC_ADDR(0x00017ad0u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x13b8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_17AD4:
    /* 00017ad4   2  unlk A5 */
    c->pc = RC_ADDR(0x00017ad4u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_17AD6:
    /* 00017ad6   2  rts */
    c->pc = RC_ADDR(0x00017ad6u);
    rc_ret(c, m);
    return;

}
