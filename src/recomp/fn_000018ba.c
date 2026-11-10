/* fn_000018ba - 34 byte(s), 12 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000018ba(cpu_t *c, rt_machine *m)
{
    u32 t0, t1;

    switch (c->pc)
    {
    case RC_ADDR(0x000018bau): goto L_18BA;
    case RC_ADDR(0x000018beu): goto L_18BE;
    case RC_ADDR(0x000018c2u): goto L_18C2;
    case RC_ADDR(0x000018c6u): goto L_18C6;
    case RC_ADDR(0x000018c8u): goto L_18C8;
    case RC_ADDR(0x000018ccu): goto L_18CC;
    case RC_ADDR(0x000018d0u): goto L_18D0;
    case RC_ADDR(0x000018d2u): goto L_18D2;
    case RC_ADDR(0x000018d4u): goto L_18D4;
    case RC_ADDR(0x000018d6u): goto L_18D6;
    case RC_ADDR(0x000018d8u): goto L_18D8;
    case RC_ADDR(0x000018dau): goto L_18DA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_18BA:
    /* 000018ba   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000018bau);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_18BE:
    /* 000018be   4  move.w (8,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000018beu);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18C2:
    /* 000018c2   4  cmp.w (ffff83cc,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000018c2u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c34u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_18C6:
    /* 000018c6   2  bgt 000018d2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000018c6u);
    if (rc_cond(c, 14)) goto L_18D2;

L_18C8:
    /* 000018c8   4  move.w (a,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000018c8u);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18CC:
    /* 000018cc   4  cmp.w (ffff83cc,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000018ccu);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c34u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_18D0:
    /* 000018d0   2  bgt 000018d8 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000018d0u);
    if (rc_cond(c, 14)) goto L_18D8;

L_18D2:
    /* 000018d2   2  moveq #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000018d2u);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_18D4:
    /* 000018d4   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000018d4u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_18D6:
    /* 000018d6   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000018d6u);
    rc_ret(c, m);
    return;

L_18D8:
    /* 000018d8   2  moveq #0,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000018d8u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_18DA:
    /* 000018da   2  bra 000018d4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000018dau);
    rc_tick();
    goto L_18D4;

}
