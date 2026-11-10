/* fn_0001b1c2 - 22 byte(s), 7 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001b1c2(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001b1c2u): goto L_1B1C2;
    case RC_ADDR(0x0001b1c6u): goto L_1B1C6;
    case RC_ADDR(0x0001b1cau): goto L_1B1CA;
    case RC_ADDR(0x0001b1ceu): goto L_1B1CE;
    case RC_ADDR(0x0001b1d2u): goto L_1B1D2;
    case RC_ADDR(0x0001b1d4u): goto L_1B1D4;
    case RC_ADDR(0x0001b1d6u): goto L_1B1D6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1B1C2:
    /* 0001b1c2   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b1c2u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1B1C6:
    /* 0001b1c6   4  move.l (a1a,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b1c6u);
    t0 = rc_rd32(c, m, (c->a[4] + 0xa1au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B1CA:
    /* 0001b1ca   4  move.l (fffff2f8,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b1cau);
    t0 = rc_rd32(c, m, (c->a[4] - 0xd08u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B1CE:
    /* 0001b1ce   4  jsr (ffff8344,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b1ceu);
    /* vector 139: exec.library -210 */
    c->pc = RC_ADDR(0x0001b1d2u);
    rc_os_call(c, m, 0, -210);

L_1B1D2:
    /* 0001b1d2   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b1d2u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1B1D4:
    /* 0001b1d4   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b1d4u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1B1D6:
    /* 0001b1d6   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b1d6u);
    rc_ret(c, m);
    return;

}
