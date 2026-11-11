/* fn_0000994e - 28 byte(s), 8 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000994e(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000994eu): goto L_994E;
    case RC_ADDR(0x00009952u): goto L_9952;
    case RC_ADDR(0x00009958u): goto L_9958;
    case RC_ADDR(0x0000995cu): goto L_995C;
    case RC_ADDR(0x00009960u): goto L_9960;
    case RC_ADDR(0x00009962u): goto L_9962;
    case RC_ADDR(0x00009966u): goto L_9966;
    case RC_ADDR(0x00009968u): goto L_9968;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_994E:
    /* 0000994e   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000994eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_9952:
    /* 00009952   6  pea (00010002).l */
    c->pc = RC_ADDR(0x00009952u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010002u);

L_9958:
    /* 00009958   4  pea (00000008).l */
    c->pc = RC_ADDR(0x00009958u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000008u);

L_995C:
    /* 0000995c   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x0000995cu);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x00009960u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d8eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002168cu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021690u);
    return;

L_9960:
    /* 00009960   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00009960u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_9962:
    /* 00009962   4  move.l D0,(2ec,A4) */
    c->pc = RC_ADDR(0x00009962u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x2ecu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_9966:
    /* 00009966   2  unlk A5 */
    c->pc = RC_ADDR(0x00009966u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_9968:
    /* 00009968   2  rts */
    c->pc = RC_ADDR(0x00009968u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
