/* fn_00002414 - 50 byte(s), 15 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00002414(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00002414u): goto L_2414;
    case RC_ADDR(0x00002418u): goto L_2418;
    case RC_ADDR(0x0000241cu): goto L_241C;
    case RC_ADDR(0x00002420u): goto L_2420;
    case RC_ADDR(0x00002422u): goto L_2422;
    case RC_ADDR(0x00002424u): goto L_2424;
    case RC_ADDR(0x00002428u): goto L_2428;
    case RC_ADDR(0x0000242cu): goto L_242C;
    case RC_ADDR(0x00002430u): goto L_2430;
    case RC_ADDR(0x00002432u): goto L_2432;
    case RC_ADDR(0x00002436u): goto L_2436;
    case RC_ADDR(0x0000243cu): goto L_243C;
    case RC_ADDR(0x0000243eu): goto L_243E;
    case RC_ADDR(0x00002442u): goto L_2442;
    case RC_ADDR(0x00002444u): goto L_2444;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2414:
    /* 00002414   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00002414u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_2418:
    /* 00002418   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002418u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_241C:
    /* 0000241c   4  move.w (ffff8516,A4),D0 */
    c->pc = RC_ADDR(0x0000241cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7aeau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2420:
    /* 00002420   2  ext.l D0 */
    c->pc = RC_ADDR(0x00002420u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_2422:
    /* 00002422   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00002422u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_2424:
    /* 00002424   4  lea (ffff8506,A4),A0 */
    c->pc = RC_ADDR(0x00002424u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x7afau);

L_2428:
    /* 00002428   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00002428u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_242C:
    /* 0000242c   4  jsr (ffff805c,A4) */
    c->pc = RC_ADDR(0x0000242cu);
    rc_step(c, m);
    /* vector 15 */
    rc_push32(c, m, RC_ADDR(0x00002430u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ab2u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004328u);
    return;

L_2430:
    /* 00002430   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00002430u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_2432:
    /* 00002432   4  addq.w #1,(ffff8516,A4) */
    c->pc = RC_ADDR(0x00002432u);
    rc_step(c, m);
    t3 = (c->a[4] - 0x7aeau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_2436:
    /* 00002436   6  cmpi.w #3,(ffff8516,A4) */
    c->pc = RC_ADDR(0x00002436u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7aeau));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_243C:
    /* 0000243c   2  ble 00002442 */
    c->pc = RC_ADDR(0x0000243cu);
    rc_step(c, m);
    if (rc_cond(c, 15)) goto L_2442;

L_243E:
    /* 0000243e   4  clr.w (ffff8516,A4) */
    c->pc = RC_ADDR(0x0000243eu);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0x7aeau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2442:
    /* 00002442   2  unlk A5 */
    c->pc = RC_ADDR(0x00002442u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_2444:
    /* 00002444   2  rts */
    c->pc = RC_ADDR(0x00002444u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
