/* fn_000033d8 - 28 byte(s), 10 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000033d8(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000033d8u): goto L_33D8;
    case RC_ADDR(0x000033dcu): goto L_33DC;
    case RC_ADDR(0x000033e0u): goto L_33E0;
    case RC_ADDR(0x000033e2u): goto L_33E2;
    case RC_ADDR(0x000033e4u): goto L_33E4;
    case RC_ADDR(0x000033e8u): goto L_33E8;
    case RC_ADDR(0x000033ecu): goto L_33EC;
    case RC_ADDR(0x000033eeu): goto L_33EE;
    case RC_ADDR(0x000033f0u): goto L_33F0;
    case RC_ADDR(0x000033f2u): goto L_33F2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_33D8:
    /* 000033d8   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x000033d8u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_33DC:
    /* 000033dc   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000033dcu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_33E0:
    /* 000033e0   2  bsr 00003398 */
    c->pc = RC_ADDR(0x000033e0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000033e2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00003398u);
    return;

L_33E2:
    /* 000033e2   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000033e2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_33E4:
    /* 000033e4   4  jsr (ffff8224,A4) */
    c->pc = RC_ADDR(0x000033e4u);
    rc_step(c, m, 18);
    /* vector 91 */
    rc_push32(c, m, RC_ADDR(0x000033e8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c7au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001d7c4u);
    return;

L_33E8:
    /* 000033e8   4  tst.w (fffffecc,A4) */
    c->pc = RC_ADDR(0x000033e8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x134u));
    rc_set_nzvc(c, t0, RC_W);

L_33EC:
    /* 000033ec   2  beq 000033f0 */
    c->pc = RC_ADDR(0x000033ecu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_33F0;

L_33EE:
    /* 000033ee   2  bra 000033e8 */
    c->pc = RC_ADDR(0x000033eeu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_33E8;

L_33F0:
    /* 000033f0   2  unlk A5 */
    c->pc = RC_ADDR(0x000033f0u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_33F2:
    /* 000033f2   2  rts */
    c->pc = RC_ADDR(0x000033f2u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
