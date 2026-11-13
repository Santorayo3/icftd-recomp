/* fn_0001f38a - 26 byte(s), 7 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001f38a(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f38au): goto L_1F38A;
    case RC_ADDR(0x0001f38eu): goto L_1F38E;
    case RC_ADDR(0x0001f392u): goto L_1F392;
    case RC_ADDR(0x0001f396u): goto L_1F396;
    case RC_ADDR(0x0001f398u): goto L_1F398;
    case RC_ADDR(0x0001f39cu): goto L_1F39C;
    case RC_ADDR(0x0001f3a0u): goto L_1F3A0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F38A:
    /* 0001f38a   4  movea.l (fffffebe,A4),A0 */
    c->pc = RC_ADDR(0x0001f38au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x142u));
    c->a[0] = t0;

L_1F38E:
    /* 0001f38e   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x0001f38eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F392:
    /* 0001f392   4  jsr (0001de42) */
    c->pc = RC_ADDR(0x0001f392u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f396u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001de42u);
    return;

L_1F396:
    /* 0001f396   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001f396u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1F398:
    /* 0001f398   4  movea.l (fffffebe,A4),A0 */
    c->pc = RC_ADDR(0x0001f398u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x142u));
    c->a[0] = t0;

L_1F39C:
    /* 0001f39c   4  clr.l (2c,A0) */
    c->pc = RC_ADDR(0x0001f39cu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[0] + 0x2cu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1F3A0:
    /* 0001f3a0   4  bra 0001f8ae */
    c->pc = RC_ADDR(0x0001f3a0u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0001f8aeu);
    return;

}
