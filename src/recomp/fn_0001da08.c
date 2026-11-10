/* fn_0001da08 - 24 byte(s), 8 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001da08(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case 0x0001da08u: goto L_1DA08;
    case 0x0001da0cu: goto L_1DA0C;
    case 0x0001da10u: goto L_1DA10;
    case 0x0001da14u: goto L_1DA14;
    case 0x0001da16u: goto L_1DA16;
    case 0x0001da18u: goto L_1DA18;
    case 0x0001da1au: goto L_1DA1A;
    case 0x0001da1eu: goto L_1DA1E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1DA08:
    /* 0001da08   4  movea.l (4,A7),A0 */
    c->pc = 0x0001da08u;
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[0] = t0;

L_1DA0C:
    /* 0001da0c   4  movea.l (8,A7),A1 */
    c->pc = 0x0001da0cu;
    t0 = rc_rd32(c, m, (c->a[7] + 0x8u));
    c->a[1] = t0;

L_1DA10:
    /* 0001da10   4  move.w (c,A7),D0 */
    c->pc = 0x0001da10u;
    t0 = rc_rd16(c, m, (c->a[7] + 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DA14:
    /* 0001da14   2  subq.w #1,D0 */
    c->pc = 0x0001da14u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1DA16:
    /* 0001da16   2  movea.l (A0)+,A6 */
    c->pc = 0x0001da16u;
    t3 = c->a[0];
    c->a[0] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[6] = t0;

L_1DA18:
    /* 0001da18   2  move.w (A1)+,(A6) */
    c->pc = 0x0001da18u;
    t3 = c->a[1];
    c->a[1] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_wr16(c, m, c->a[6], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DA1A:
    /* 0001da1a   4  dbf D0,0001da16 */
    c->pc = 0x0001da1au;
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1DA16; }
    }

L_1DA1E:
    /* 0001da1e   2  rts */
    c->pc = 0x0001da1eu;
    rc_ret(c, m);
    return;

}
