/* fn_0001651e - 50 byte(s), 15 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001651e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001651eu): goto L_1651E;
    case RC_ADDR(0x00016522u): goto L_16522;
    case RC_ADDR(0x00016526u): goto L_16526;
    case RC_ADDR(0x0001652au): goto L_1652A;
    case RC_ADDR(0x0001652eu): goto L_1652E;
    case RC_ADDR(0x00016530u): goto L_16530;
    case RC_ADDR(0x00016532u): goto L_16532;
    case RC_ADDR(0x00016536u): goto L_16536;
    case RC_ADDR(0x0001653au): goto L_1653A;
    case RC_ADDR(0x0001653eu): goto L_1653E;
    case RC_ADDR(0x00016540u): goto L_16540;
    case RC_ADDR(0x00016544u): goto L_16544;
    case RC_ADDR(0x0001654au): goto L_1654A;
    case RC_ADDR(0x0001654cu): goto L_1654C;
    case RC_ADDR(0x0001654eu): goto L_1654E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1651E:
    /* 0001651e   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x0001651eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_16522:
    /* 00016522   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00016522u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_16526:
    /* 00016526   4  move.l (12ce,A4),-(A7) */
    c->pc = RC_ADDR(0x00016526u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x12ceu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1652A:
    /* 0001652a   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001652au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1652E:
    /* 0001652e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001652eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16530:
    /* 00016530   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00016530u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_16532:
    /* 00016532   4  lea (e38,A4),A0 */
    c->pc = RC_ADDR(0x00016532u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xe38u);

L_16536:
    /* 00016536   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00016536u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1653A:
    /* 0001653a   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x0001653au);
    rc_step(c, m, 18);
    /* vector 139 */
    rc_push32(c, m, RC_ADDR(0x0001653eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d9au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000216ccu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000216d0u);
    return;

L_1653E:
    /* 0001653e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001653eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_16540:
    /* 00016540   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00016540u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_16544:
    /* 00016544   6  cmpi.w #5,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00016544u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_1654A:
    /* 0001654a   2  blt 00016526 */
    c->pc = RC_ADDR(0x0001654au);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_16526; }

L_1654C:
    /* 0001654c   2  unlk A5 */
    c->pc = RC_ADDR(0x0001654cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1654E:
    /* 0001654e   2  rts */
    c->pc = RC_ADDR(0x0001654eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
