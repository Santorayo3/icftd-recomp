/* fn_0001b9a4 - 118 byte(s), 34 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001b9a4(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001b9a4u): goto L_1B9A4;
    case RC_ADDR(0x0001b9a8u): goto L_1B9A8;
    case RC_ADDR(0x0001b9aeu): goto L_1B9AE;
    case RC_ADDR(0x0001b9b4u): goto L_1B9B4;
    case RC_ADDR(0x0001b9b8u): goto L_1B9B8;
    case RC_ADDR(0x0001b9bau): goto L_1B9BA;
    case RC_ADDR(0x0001b9beu): goto L_1B9BE;
    case RC_ADDR(0x0001b9c0u): goto L_1B9C0;
    case RC_ADDR(0x0001b9c2u): goto L_1B9C2;
    case RC_ADDR(0x0001b9c6u): goto L_1B9C6;
    case RC_ADDR(0x0001b9c8u): goto L_1B9C8;
    case RC_ADDR(0x0001b9ccu): goto L_1B9CC;
    case RC_ADDR(0x0001b9ceu): goto L_1B9CE;
    case RC_ADDR(0x0001b9d2u): goto L_1B9D2;
    case RC_ADDR(0x0001b9d8u): goto L_1B9D8;
    case RC_ADDR(0x0001b9dau): goto L_1B9DA;
    case RC_ADDR(0x0001b9deu): goto L_1B9DE;
    case RC_ADDR(0x0001b9e0u): goto L_1B9E0;
    case RC_ADDR(0x0001b9e2u): goto L_1B9E2;
    case RC_ADDR(0x0001b9e6u): goto L_1B9E6;
    case RC_ADDR(0x0001b9e8u): goto L_1B9E8;
    case RC_ADDR(0x0001b9ecu): goto L_1B9EC;
    case RC_ADDR(0x0001b9eeu): goto L_1B9EE;
    case RC_ADDR(0x0001b9f2u): goto L_1B9F2;
    case RC_ADDR(0x0001b9f8u): goto L_1B9F8;
    case RC_ADDR(0x0001b9fcu): goto L_1B9FC;
    case RC_ADDR(0x0001ba02u): goto L_1BA02;
    case RC_ADDR(0x0001ba04u): goto L_1BA04;
    case RC_ADDR(0x0001ba08u): goto L_1BA08;
    case RC_ADDR(0x0001ba0cu): goto L_1BA0C;
    case RC_ADDR(0x0001ba10u): goto L_1BA10;
    case RC_ADDR(0x0001ba14u): goto L_1BA14;
    case RC_ADDR(0x0001ba16u): goto L_1BA16;
    case RC_ADDR(0x0001ba18u): goto L_1BA18;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1B9A4:
    /* 0001b9a4   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x0001b9a4u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_1B9A8:
    /* 0001b9a8   6  move.l (ffffcbbc,A4),(b00,A4) */
    c->pc = RC_ADDR(0x0001b9a8u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3444u));
    rc_wr32(c, m, (c->a[4] + 0xb00u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B9AE:
    /* 0001b9ae   6  move.l (ffffcbb8,A4),(b04,A4) */
    c->pc = RC_ADDR(0x0001b9aeu);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3448u));
    rc_wr32(c, m, (c->a[4] + 0xb04u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B9B4:
    /* 0001b9b4   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001b9b4u);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1B9B8:
    /* 0001b9b8   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001b9b8u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1B9BA:
    /* 0001b9ba   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001b9bau);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B9BE:
    /* 0001b9be   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001b9beu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_1B9C0:
    /* 0001b9c0   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x0001b9c0u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_1B9C2:
    /* 0001b9c2   4  adda.l (ffffcbb8,A4),A0 */
    c->pc = RC_ADDR(0x0001b9c2u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3448u));
    c->a[0] += t0;

L_1B9C6:
    /* 0001b9c6   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001b9c6u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1B9C8:
    /* 0001b9c8   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001b9c8u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B9CC:
    /* 0001b9cc   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001b9ccu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_1B9CE:
    /* 0001b9ce   4  lea (fffff33a,A4),A1 */
    c->pc = RC_ADDR(0x0001b9ceu);
    c->a[1] = (c->a[4] - 0xcc6u);

L_1B9D2:
    /* 0001b9d2   6  move.l (8,A0),(0,A1,D0.w) */
    c->pc = RC_ADDR(0x0001b9d2u);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B9D8:
    /* 0001b9d8   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001b9d8u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1B9DA:
    /* 0001b9da   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001b9dau);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B9DE:
    /* 0001b9de   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001b9deu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_1B9E0:
    /* 0001b9e0   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x0001b9e0u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_1B9E2:
    /* 0001b9e2   4  adda.l (ffffcbbc,A4),A0 */
    c->pc = RC_ADDR(0x0001b9e2u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3444u));
    c->a[0] += t0;

L_1B9E6:
    /* 0001b9e6   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001b9e6u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1B9E8:
    /* 0001b9e8   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001b9e8u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B9EC:
    /* 0001b9ec   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001b9ecu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_1B9EE:
    /* 0001b9ee   4  lea (fffff326,A4),A1 */
    c->pc = RC_ADDR(0x0001b9eeu);
    c->a[1] = (c->a[4] - 0xcdau);

L_1B9F2:
    /* 0001b9f2   6  move.l (8,A0),(0,A1,D0.w) */
    c->pc = RC_ADDR(0x0001b9f2u);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B9F8:
    /* 0001b9f8   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001b9f8u);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1B9FC:
    /* 0001b9fc   6  cmpi.w #5,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001b9fcu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_1BA02:
    /* 0001ba02   2  bcs 0001b9b8 */
    c->pc = RC_ADDR(0x0001ba02u);
    if (rc_cond(c, 5)) { rc_tick(); goto L_1B9B8; }

L_1BA04:
    /* 0001ba04   4  movea.l (ffffcbbc,A4),A0 */
    c->pc = RC_ADDR(0x0001ba04u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3444u));
    c->a[0] = t0;

L_1BA08:
    /* 0001ba08   4  move.w (fffff2ce,A4),(A0) */
    c->pc = RC_ADDR(0x0001ba08u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd32u));
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BA0C:
    /* 0001ba0c   4  movea.l (ffffcbb8,A4),A0 */
    c->pc = RC_ADDR(0x0001ba0cu);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3448u));
    c->a[0] = t0;

L_1BA10:
    /* 0001ba10   4  move.w (fffff2ce,A4),(A0) */
    c->pc = RC_ADDR(0x0001ba10u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd32u));
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BA14:
    /* 0001ba14   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0001ba14u);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1BA16:
    /* 0001ba16   2  unlk A5 */
    c->pc = RC_ADDR(0x0001ba16u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1BA18:
    /* 0001ba18   2  rts */
    c->pc = RC_ADDR(0x0001ba18u);
    rc_ret(c, m);
    return;

}
