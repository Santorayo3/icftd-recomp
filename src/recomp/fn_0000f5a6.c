/* fn_0000f5a6 - 18 byte(s), 7 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000f5a6(cpu_t *c, rt_machine *m)
{
    u32 t0, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000f5a6u): goto L_F5A6;
    case RC_ADDR(0x0000f5a8u): goto L_F5A8;
    case RC_ADDR(0x0000f5acu): goto L_F5AC;
    case RC_ADDR(0x0000f5aeu): goto L_F5AE;
    case RC_ADDR(0x0000f5b0u): goto L_F5B0;
    case RC_ADDR(0x0000f5b4u): goto L_F5B4;
    case RC_ADDR(0x0000f5b6u): goto L_F5B6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_F5A6:
    /* 0000f5a6   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0000f5a6u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_F5A8:
    /* 0000f5a8   4  clr.w (a,A6) */
    c->pc = RC_ADDR(0x0000f5a8u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[6] + 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_F5AC:
    /* 0000f5ac   2  moveq #3,D0 */
    c->pc = RC_ADDR(0x0000f5acu);
    rc_step(c, m);
    c->d[0] = 0x00000003u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_F5AE:
    /* 0000f5ae   2  bsr 0000f5b8 */
    c->pc = RC_ADDR(0x0000f5aeu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0000f5b0u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000f5b8u);
    return;

L_F5B0:
    /* 0000f5b0   4  dbf D0,0000f5ae */
    c->pc = RC_ADDR(0x0000f5b0u);
    rc_step(c, m);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_F5AE; }
    }

L_F5B4:
    /* 0000f5b4   2  move.l (A7)+,D0 */
    c->pc = RC_ADDR(0x0000f5b4u);
    rc_step(c, m);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F5B6:
    /* 0000f5b6   2  rts */
    c->pc = RC_ADDR(0x0000f5b6u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
