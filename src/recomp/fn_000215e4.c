/* fn_000215e4 - 22 byte(s), 7 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000215e4(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000215e4u): goto L_215E4;
    case RC_ADDR(0x000215e8u): goto L_215E8;
    case RC_ADDR(0x000215ecu): goto L_215EC;
    case RC_ADDR(0x000215f0u): goto L_215F0;
    case RC_ADDR(0x000215f4u): goto L_215F4;
    case RC_ADDR(0x000215f6u): goto L_215F6;
    case RC_ADDR(0x000215f8u): goto L_215F8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_215E4:
    /* 000215e4   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000215e4u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_215E8:
    /* 000215e8   4  pea (00000030).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000215e8u);
    rc_push32(c, m, 0x00000030u);

L_215EC:
    /* 000215ec   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000215ecu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_215F0:
    /* 000215f0   4  jsr (0002160c) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000215f0u);
    rc_push32(c, m, RC_ADDR(0x000215f4u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002160cu);
    return;

L_215F4:
    /* 000215f4   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000215f4u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_215F6:
    /* 000215f6   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000215f6u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_215F8:
    /* 000215f8   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000215f8u);
    rc_ret(c, m);
    return;

}
