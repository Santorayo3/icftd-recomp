/* fn_0001d564 - 106 byte(s), 30 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001d564(cpu_t *c, rt_machine *m)
{
    u32 t0, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001d564u): goto L_1D564;
    case RC_ADDR(0x0001d568u): goto L_1D568;
    case RC_ADDR(0x0001d56cu): goto L_1D56C;
    case RC_ADDR(0x0001d572u): goto L_1D572;
    case RC_ADDR(0x0001d576u): goto L_1D576;
    case RC_ADDR(0x0001d57au): goto L_1D57A;
    case RC_ADDR(0x0001d57cu): goto L_1D57C;
    case RC_ADDR(0x0001d57eu): goto L_1D57E;
    case RC_ADDR(0x0001d580u): goto L_1D580;
    case RC_ADDR(0x0001d584u): goto L_1D584;
    case RC_ADDR(0x0001d588u): goto L_1D588;
    case RC_ADDR(0x0001d58eu): goto L_1D58E;
    case RC_ADDR(0x0001d590u): goto L_1D590;
    case RC_ADDR(0x0001d592u): goto L_1D592;
    case RC_ADDR(0x0001d596u): goto L_1D596;
    case RC_ADDR(0x0001d59au): goto L_1D59A;
    case RC_ADDR(0x0001d59eu): goto L_1D59E;
    case RC_ADDR(0x0001d5a2u): goto L_1D5A2;
    case RC_ADDR(0x0001d5a6u): goto L_1D5A6;
    case RC_ADDR(0x0001d5aau): goto L_1D5AA;
    case RC_ADDR(0x0001d5acu): goto L_1D5AC;
    case RC_ADDR(0x0001d5aeu): goto L_1D5AE;
    case RC_ADDR(0x0001d5b2u): goto L_1D5B2;
    case RC_ADDR(0x0001d5b6u): goto L_1D5B6;
    case RC_ADDR(0x0001d5bau): goto L_1D5BA;
    case RC_ADDR(0x0001d5beu): goto L_1D5BE;
    case RC_ADDR(0x0001d5c0u): goto L_1D5C0;
    case RC_ADDR(0x0001d5c4u): goto L_1D5C4;
    case RC_ADDR(0x0001d5c8u): goto L_1D5C8;
    case RC_ADDR(0x0001d5ccu): goto L_1D5CC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1D564:
    /* 0001d564   4  link.w A5,#fffffff8 */
    c->pc = RC_ADDR(0x0001d564u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x8u;

L_1D568:
    /* 0001d568   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001d568u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1D56C:
    /* 0001d56c   6  bset #2,(b,A0) */
    c->pc = RC_ADDR(0x0001d56cu);
    rc_step(c, m);
    t3 = (c->a[0] + 0xbu);
    t4 = 0x00000002u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_1D572:
    /* 0001d572   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001d572u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1D576:
    /* 0001d576   4  tst.l (c,A0) */
    c->pc = RC_ADDR(0x0001d576u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    rc_set_nzvc(c, t0, RC_L);

L_1D57A:
    /* 0001d57a   2  bne 0001d580 */
    c->pc = RC_ADDR(0x0001d57au);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_1D580;

L_1D57C:
    /* 0001d57c   2  unlk A5 */
    c->pc = RC_ADDR(0x0001d57cu);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1D57E:
    /* 0001d57e   2  rts */
    c->pc = RC_ADDR(0x0001d57eu);
    rc_step(c, m);
    rc_ret(c, m);
    return;

L_1D580:
    /* 0001d580   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001d580u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1D584:
    /* 0001d584   4  movea.l (c,A0),A1 */
    c->pc = RC_ADDR(0x0001d584u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_1D588:
    /* 0001d588   6  move.l (30,A1),(fffffff8,A5) */
    c->pc = RC_ADDR(0x0001d588u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[1] + 0x30u));
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D58E:
    /* 0001d58e   2  bne 0001d592 */
    c->pc = RC_ADDR(0x0001d58eu);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_1D592;

L_1D590:
    /* 0001d590   2  bra 0001d57c */
    c->pc = RC_ADDR(0x0001d590u);
    rc_step(c, m);
    rc_tick();
    goto L_1D57C;

L_1D592:
    /* 0001d592   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001d592u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1D596:
    /* 0001d596   4  movea.l (c,A0),A1 */
    c->pc = RC_ADDR(0x0001d596u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_1D59A:
    /* 0001d59a   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001d59au);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1D59E:
    /* 0001d59e   4  movea.l (c,A0),A6 */
    c->pc = RC_ADDR(0x0001d59eu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[6] = t0;

L_1D5A2:
    /* 0001d5a2   4  move.w (c,A1),D0 */
    c->pc = RC_ADDR(0x0001d5a2u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[1] + 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D5A6:
    /* 0001d5a6   4  mulu.w (e,A6),D0 */
    c->pc = RC_ADDR(0x0001d5a6u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[6] + 0xeu));
    rc_mulu(c, 0, t0);

L_1D5AA:
    /* 0001d5aa   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x0001d5aau);
    rc_step(c, m);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1D5AC:
    /* 0001d5ac   2  move.w D0,D1 */
    c->pc = RC_ADDR(0x0001d5acu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D5AE:
    /* 0001d5ae   4  move.l D1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001d5aeu);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D5B2:
    /* 0001d5b2   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0001d5b2u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D5B6:
    /* 0001d5b6   4  move.l (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x0001d5b6u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D5BA:
    /* 0001d5ba   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x0001d5bau);
    rc_step(c, m);
    /* vector 139 */
    rc_push32(c, m, RC_ADDR(0x0001d5beu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d9au);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000216ccu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000216d0u);
    return;

L_1D5BE:
    /* 0001d5be   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001d5beu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1D5C0:
    /* 0001d5c0   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001d5c0u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1D5C4:
    /* 0001d5c4   4  movea.l (c,A0),A1 */
    c->pc = RC_ADDR(0x0001d5c4u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_1D5C8:
    /* 0001d5c8   4  clr.l (30,A1) */
    c->pc = RC_ADDR(0x0001d5c8u);
    rc_step(c, m);
    rc_wr32(c, m, (c->a[1] + 0x30u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1D5CC:
    /* 0001d5cc   2  bra 0001d57c */
    c->pc = RC_ADDR(0x0001d5ccu);
    rc_step(c, m);
    rc_tick();
    goto L_1D57C;

}
