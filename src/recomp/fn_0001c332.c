/* fn_0001c332 - 82 byte(s), 27 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001c332(cpu_t *c, rt_machine *m)
{
    u32 t0, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001c332u): goto L_1C332;
    case RC_ADDR(0x0001c336u): goto L_1C336;
    case RC_ADDR(0x0001c33au): goto L_1C33A;
    case RC_ADDR(0x0001c33eu): goto L_1C33E;
    case RC_ADDR(0x0001c340u): goto L_1C340;
    case RC_ADDR(0x0001c344u): goto L_1C344;
    case RC_ADDR(0x0001c348u): goto L_1C348;
    case RC_ADDR(0x0001c34au): goto L_1C34A;
    case RC_ADDR(0x0001c34cu): goto L_1C34C;
    case RC_ADDR(0x0001c350u): goto L_1C350;
    case RC_ADDR(0x0001c354u): goto L_1C354;
    case RC_ADDR(0x0001c356u): goto L_1C356;
    case RC_ADDR(0x0001c35au): goto L_1C35A;
    case RC_ADDR(0x0001c35eu): goto L_1C35E;
    case RC_ADDR(0x0001c360u): goto L_1C360;
    case RC_ADDR(0x0001c362u): goto L_1C362;
    case RC_ADDR(0x0001c366u): goto L_1C366;
    case RC_ADDR(0x0001c36au): goto L_1C36A;
    case RC_ADDR(0x0001c36cu): goto L_1C36C;
    case RC_ADDR(0x0001c36eu): goto L_1C36E;
    case RC_ADDR(0x0001c372u): goto L_1C372;
    case RC_ADDR(0x0001c374u): goto L_1C374;
    case RC_ADDR(0x0001c378u): goto L_1C378;
    case RC_ADDR(0x0001c37au): goto L_1C37A;
    case RC_ADDR(0x0001c37cu): goto L_1C37C;
    case RC_ADDR(0x0001c380u): goto L_1C380;
    case RC_ADDR(0x0001c382u): goto L_1C382;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1C332:
    /* 0001c332   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c332u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1C336:
    /* 0001c336   4  lea (ffffc7c8,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c336u);
    c->a[0] = (c->a[4] - 0x3838u);

L_1C33A:
    /* 0001c33a   4  cmpi.w #180,(A0)+ */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c33au);
    t3 = c->a[0];
    c->a[0] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_cmp(c, RC_W, t0, 0x00000180u);

L_1C33E:
    /* 0001c33e   2  bne 0001c33a */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c33eu);
    if (rc_cond(c, 6)) { rc_tick(); goto L_1C33A; }

L_1C340:
    /* 0001c340   4  lea (22c4,A4),A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c340u);
    c->a[1] = (c->a[4] + 0x22c4u);

L_1C344:
    /* 0001c344   4  move.w #f,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c344u);
    t0 = 0x0000000fu;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C348:
    /* 0001c348   2  move.w (A1)+,(A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c348u);
    t3 = c->a[1];
    c->a[1] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C34A:
    /* 0001c34a   2  addq.l #4,A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c34au);
    c->a[0] += 0x00000004u;

L_1C34C:
    /* 0001c34c   4  dbf D0,0001c348 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c34cu);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1C348; }
    }

L_1C350:
    /* 0001c350   4  cmpi.w #180,(A0)+ */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c350u);
    t3 = c->a[0];
    c->a[0] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_cmp(c, RC_W, t0, 0x00000180u);

L_1C354:
    /* 0001c354   2  bne 0001c350 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c354u);
    if (rc_cond(c, 6)) { rc_tick(); goto L_1C350; }

L_1C356:
    /* 0001c356   4  lea (2304,A4),A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c356u);
    c->a[1] = (c->a[4] + 0x2304u);

L_1C35A:
    /* 0001c35a   4  move.w #7,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c35au);
    t0 = 0x00000007u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C35E:
    /* 0001c35e   2  move.w (A1)+,(A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c35eu);
    t3 = c->a[1];
    c->a[1] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C360:
    /* 0001c360   2  addq.l #4,A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c360u);
    c->a[0] += 0x00000004u;

L_1C362:
    /* 0001c362   4  dbf D0,0001c35e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c362u);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1C35E; }
    }

L_1C366:
    /* 0001c366   4  cmpi.w #180,(A0)+ */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c366u);
    t3 = c->a[0];
    c->a[0] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_cmp(c, RC_W, t0, 0x00000180u);

L_1C36A:
    /* 0001c36a   2  bne 0001c366 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c36au);
    if (rc_cond(c, 6)) { rc_tick(); goto L_1C366; }

L_1C36C:
    /* 0001c36c   2  addq.l #4,A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c36cu);
    c->a[0] += 0x00000004u;

L_1C36E:
    /* 0001c36e   4  lea (2344,A4),A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c36eu);
    c->a[1] = (c->a[4] + 0x2344u);

L_1C372:
    /* 0001c372   2  addq.l #2,A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c372u);
    c->a[1] += 0x00000002u;

L_1C374:
    /* 0001c374   4  move.w #1a,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c374u);
    t0 = 0x0000001au;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C378:
    /* 0001c378   2  move.w (A1)+,(A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c378u);
    t3 = c->a[1];
    c->a[1] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C37A:
    /* 0001c37a   2  addq.l #4,A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c37au);
    c->a[0] += 0x00000004u;

L_1C37C:
    /* 0001c37c   4  dbf D0,0001c378 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c37cu);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1C378; }
    }

L_1C380:
    /* 0001c380   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c380u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1C382:
    /* 0001c382   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001c382u);
    rc_ret(c, m);
    return;

}
