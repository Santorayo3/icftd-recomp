/* fn_0000737e - 42 byte(s), 12 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000737e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000737eu): goto L_737E;
    case RC_ADDR(0x00007382u): goto L_7382;
    case RC_ADDR(0x00007388u): goto L_7388;
    case RC_ADDR(0x0000738cu): goto L_738C;
    case RC_ADDR(0x00007390u): goto L_7390;
    case RC_ADDR(0x00007392u): goto L_7392;
    case RC_ADDR(0x00007394u): goto L_7394;
    case RC_ADDR(0x00007398u): goto L_7398;
    case RC_ADDR(0x0000739eu): goto L_739E;
    case RC_ADDR(0x000073a0u): goto L_73A0;
    case RC_ADDR(0x000073a4u): goto L_73A4;
    case RC_ADDR(0x000073a6u): goto L_73A6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_737E:
    /* 0000737e   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x0000737eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_7382:
    /* 00007382   6  move.l (ffffef90,A4),(fffffffc,A5) */
    c->pc = RC_ADDR(0x00007382u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x1070u));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_7388:
    /* 00007388   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00007388u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_738C:
    /* 0000738c   4  subq.w #1,(8,A5) */
    c->pc = RC_ADDR(0x0000738cu);
    rc_step(c, m, 16);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_7390:
    /* 00007390   2  tst.w D0 */
    c->pc = RC_ADDR(0x00007390u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_7392:
    /* 00007392   2  beq 000073a0 */
    c->pc = RC_ADDR(0x00007392u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_73A0;

L_7394:
    /* 00007394   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00007394u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_7398:
    /* 00007398   6  move.l (8,A0),(fffffffc,A5) */
    c->pc = RC_ADDR(0x00007398u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_739E:
    /* 0000739e   2  bra 00007388 */
    c->pc = RC_ADDR(0x0000739eu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_7388;

L_73A0:
    /* 000073a0   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x000073a0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_73A4:
    /* 000073a4   2  unlk A5 */
    c->pc = RC_ADDR(0x000073a4u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_73A6:
    /* 000073a6   2  rts */
    c->pc = RC_ADDR(0x000073a6u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
