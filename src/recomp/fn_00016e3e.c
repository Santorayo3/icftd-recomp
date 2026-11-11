/* fn_00016e3e - 24 byte(s), 7 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00016e3e(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00016e3eu): goto L_16E3E;
    case RC_ADDR(0x00016e42u): goto L_16E42;
    case RC_ADDR(0x00016e46u): goto L_16E46;
    case RC_ADDR(0x00016e4au): goto L_16E4A;
    case RC_ADDR(0x00016e4cu): goto L_16E4C;
    case RC_ADDR(0x00016e52u): goto L_16E52;
    case RC_ADDR(0x00016e54u): goto L_16E54;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_16E3E:
    /* 00016e3e   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00016e3eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_16E42:
    /* 00016e42   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x00016e42u);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_16E46:
    /* 00016e46   4  jsr (ffff80bc,A4) */
    c->pc = RC_ADDR(0x00016e46u);
    rc_step(c, m, 18);
    /* vector 31 */
    rc_push32(c, m, RC_ADDR(0x00016e4au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b12u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00009ba6u);
    return;

L_16E4A:
    /* 00016e4a   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00016e4au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_16E4C:
    /* 00016e4c   6  move.w #1,(10c6,A4) */
    c->pc = RC_ADDR(0x00016e4cu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x10c6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16E52:
    /* 00016e52   2  unlk A5 */
    c->pc = RC_ADDR(0x00016e52u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_16E54:
    /* 00016e54   2  rts */
    c->pc = RC_ADDR(0x00016e54u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
