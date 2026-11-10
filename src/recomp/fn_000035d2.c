/* fn_000035d2 - 62 byte(s), 16 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000035d2(cpu_t *c, rt_machine *m)
{
    u32 t0, t1;

    switch (c->pc)
    {
    case RC_ADDR(0x000035d2u): goto L_35D2;
    case RC_ADDR(0x000035d6u): goto L_35D6;
    case RC_ADDR(0x000035deu): goto L_35DE;
    case RC_ADDR(0x000035e0u): goto L_35E0;
    case RC_ADDR(0x000035e8u): goto L_35E8;
    case RC_ADDR(0x000035ecu): goto L_35EC;
    case RC_ADDR(0x000035eeu): goto L_35EE;
    case RC_ADDR(0x000035f2u): goto L_35F2;
    case RC_ADDR(0x000035f6u): goto L_35F6;
    case RC_ADDR(0x000035fau): goto L_35FA;
    case RC_ADDR(0x000035fcu): goto L_35FC;
    case RC_ADDR(0x00003602u): goto L_3602;
    case RC_ADDR(0x00003606u): goto L_3606;
    case RC_ADDR(0x00003608u): goto L_3608;
    case RC_ADDR(0x0000360cu): goto L_360C;
    case RC_ADDR(0x0000360eu): goto L_360E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_35D2:
    /* 000035d2   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000035d2u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_35D6:
    /* 000035d6   8  cmpi.l #fffffec1,(ffffeff6,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000035d6u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x100au));
    rc_cmp(c, RC_L, t0, 0xfffffec1u);

L_35DE:
    /* 000035de   2  bge 000035e8 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000035deu);
    if (rc_cond(c, 12)) goto L_35E8;

L_35E0:
    /* 000035e0   8  move.l #fffffec1,(ffffeff6,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000035e0u);
    t0 = 0xfffffec1u;
    rc_wr32(c, m, (c->a[4] - 0x100au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_35E8:
    /* 000035e8   4  tst.l (ffffeff6,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000035e8u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x100au));
    rc_set_nzvc(c, t0, RC_L);

L_35EC:
    /* 000035ec   2  ble 000035f2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000035ecu);
    if (rc_cond(c, 15)) goto L_35F2;

L_35EE:
    /* 000035ee   4  clr.l (ffffeff6,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000035eeu);
    rc_wr32(c, m, (c->a[4] - 0x100au), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_35F2:
    /* 000035f2   4  move.l (ffffeffa,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000035f2u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x1006u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_35F6:
    /* 000035f6   4  cmp.l (fffff006,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000035f6u);
    t0 = rc_rd32(c, m, (c->a[4] - 0xffau));
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_35FA:
    /* 000035fa   2  bge 00003602 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000035fau);
    if (rc_cond(c, 12)) goto L_3602;

L_35FC:
    /* 000035fc   6  move.l (fffff006,A4),(ffffeffa,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000035fcu);
    t0 = rc_rd32(c, m, (c->a[4] - 0xffau));
    rc_wr32(c, m, (c->a[4] - 0x1006u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3602:
    /* 00003602   4  tst.l (ffffeffa,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00003602u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x1006u));
    rc_set_nzvc(c, t0, RC_L);

L_3606:
    /* 00003606   2  ble 0000360c */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00003606u);
    if (rc_cond(c, 15)) goto L_360C;

L_3608:
    /* 00003608   4  clr.l (ffffeffa,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00003608u);
    rc_wr32(c, m, (c->a[4] - 0x1006u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_360C:
    /* 0000360c   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000360cu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_360E:
    /* 0000360e   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000360eu);
    rc_ret(c, m);
    return;

}
