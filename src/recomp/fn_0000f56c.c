/* fn_0000f56c - 18 byte(s), 7 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000f56c(cpu_t *c, rt_machine *m)
{
    u32 t0, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000f56cu): goto L_F56C;
    case RC_ADDR(0x0000f56eu): goto L_F56E;
    case RC_ADDR(0x0000f572u): goto L_F572;
    case RC_ADDR(0x0000f574u): goto L_F574;
    case RC_ADDR(0x0000f576u): goto L_F576;
    case RC_ADDR(0x0000f57au): goto L_F57A;
    case RC_ADDR(0x0000f57cu): goto L_F57C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_F56C:
    /* 0000f56c   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0000f56cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_F56E:
    /* 0000f56e   4  clr.w (a,A6) */
    c->pc = RC_ADDR(0x0000f56eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[6] + 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_F572:
    /* 0000f572   2  moveq #3,D0 */
    c->pc = RC_ADDR(0x0000f572u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000003u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_F574:
    /* 0000f574   2  bsr 0000f57e */
    c->pc = RC_ADDR(0x0000f574u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000f576u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000f57eu);
    return;

L_F576:
    /* 0000f576   4  dbf D0,0000f574 */
    c->pc = RC_ADDR(0x0000f576u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_F574; }
    }

L_F57A:
    /* 0000f57a   2  move.l (A7)+,D0 */
    c->pc = RC_ADDR(0x0000f57au);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F57C:
    /* 0000f57c   2  rts */
    c->pc = RC_ADDR(0x0000f57cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
