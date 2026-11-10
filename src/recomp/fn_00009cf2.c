/* fn_00009cf2 - 26 byte(s), 9 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00009cf2(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00009cf2u): goto L_9CF2;
    case RC_ADDR(0x00009cf6u): goto L_9CF6;
    case RC_ADDR(0x00009cfau): goto L_9CFA;
    case RC_ADDR(0x00009cfeu): goto L_9CFE;
    case RC_ADDR(0x00009d00u): goto L_9D00;
    case RC_ADDR(0x00009d04u): goto L_9D04;
    case RC_ADDR(0x00009d06u): goto L_9D06;
    case RC_ADDR(0x00009d08u): goto L_9D08;
    case RC_ADDR(0x00009d0au): goto L_9D0A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_9CF2:
    /* 00009cf2   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009cf2u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_9CF6:
    /* 00009cf6   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009cf6u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9CFA:
    /* 00009cfa   4  jsr (ffff810a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009cfau);
    /* vector 44 */
    rc_push32(c, m, RC_ADDR(0x00009cfeu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000e804u);
    return;

L_9CFE:
    /* 00009cfe   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009cfeu);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_9D00:
    /* 00009d00   4  move.l (c,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009d00u);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9D04:
    /* 00009d04   2  bsr 00009cc4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009d04u);
    rc_push32(c, m, RC_ADDR(0x00009d06u));
    rc_depth++;
    c->pc = RC_ADDR(0x00009cc4u);
    return;

L_9D06:
    /* 00009d06   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009d06u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_9D08:
    /* 00009d08   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009d08u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_9D0A:
    /* 00009d0a   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009d0au);
    rc_ret(c, m);
    return;

}
