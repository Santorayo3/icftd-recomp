/* fn_000215fa - 18 byte(s), 6 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000215fa(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000215fau): goto L_215FA;
    case RC_ADDR(0x000215feu): goto L_215FE;
    case RC_ADDR(0x00021602u): goto L_21602;
    case RC_ADDR(0x00021606u): goto L_21606;
    case RC_ADDR(0x00021608u): goto L_21608;
    case RC_ADDR(0x0002160au): goto L_2160A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_215FA:
    /* 000215fa   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000215fau);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_215FE:
    /* 000215fe   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000215feu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21602:
    /* 00021602   4  jsr (00021650) */
    c->pc = RC_ADDR(0x00021602u);
    rc_push32(c, m, RC_ADDR(0x00021606u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021650u);
    return;

L_21606:
    /* 00021606   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00021606u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_21608:
    /* 00021608   2  unlk A5 */
    c->pc = RC_ADDR(0x00021608u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_2160A:
    /* 0002160a   2  rts */
    c->pc = RC_ADDR(0x0002160au);
    rc_ret(c, m);
    return;

}
