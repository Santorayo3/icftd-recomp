/* fn_00010084 - 68 byte(s), 23 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00010084(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x00010084u): goto L_10084;
    case RC_ADDR(0x00010088u): goto L_10088;
    case RC_ADDR(0x0001008cu): goto L_1008C;
    case RC_ADDR(0x00010090u): goto L_10090;
    case RC_ADDR(0x00010092u): goto L_10092;
    case RC_ADDR(0x00010094u): goto L_10094;
    case RC_ADDR(0x00010098u): goto L_10098;
    case RC_ADDR(0x0001009cu): goto L_1009C;
    case RC_ADDR(0x0001009eu): goto L_1009E;
    case RC_ADDR(0x000100a2u): goto L_100A2;
    case RC_ADDR(0x000100a4u): goto L_100A4;
    case RC_ADDR(0x000100a6u): goto L_100A6;
    case RC_ADDR(0x000100aau): goto L_100AA;
    case RC_ADDR(0x000100acu): goto L_100AC;
    case RC_ADDR(0x000100aeu): goto L_100AE;
    case RC_ADDR(0x000100b0u): goto L_100B0;
    case RC_ADDR(0x000100b2u): goto L_100B2;
    case RC_ADDR(0x000100b6u): goto L_100B6;
    case RC_ADDR(0x000100bau): goto L_100BA;
    case RC_ADDR(0x000100bcu): goto L_100BC;
    case RC_ADDR(0x000100c2u): goto L_100C2;
    case RC_ADDR(0x000100c4u): goto L_100C4;
    case RC_ADDR(0x000100c6u): goto L_100C6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_10084:
    /* 00010084   4  move.w #1080,D0 */
    c->pc = RC_ADDR(0x00010084u);
    t0 = 0x00001080u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10088:
    /* 00010088   4  sub.w (4,A6),D0 */
    c->pc = RC_ADDR(0x00010088u);
    t0 = rc_rd16(c, m, (c->a[6] + 0x4u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1008C:
    /* 0001008c   4  mulu.w (6,A2),D0 */
    c->pc = RC_ADDR(0x0001008cu);
    t0 = rc_rd16(c, m, (c->a[2] + 0x6u));
    rc_mulu(c, 0, t0);

L_10090:
    /* 00010090   2  moveq #13,D1 */
    c->pc = RC_ADDR(0x00010090u);
    c->d[1] = 0x00000013u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_10092:
    /* 00010092   2  lsr.l D1,D0 */
    c->pc = RC_ADDR(0x00010092u);
    c->d[0] = rc_shift(c, 1, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L);

L_10094:
    /* 00010094   4  move.w D0,(12,A1) */
    c->pc = RC_ADDR(0x00010094u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[1] + 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_10098:
    /* 00010098   4  move.w (0,A6),D0 */
    c->pc = RC_ADDR(0x00010098u);
    t0 = rc_rd16(c, m, (c->a[6] + 0x0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1009C:
    /* 0001009c   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x0001009cu);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1009E:
    /* 0001009e   4  mulu.w (8,A1),D0 */
    c->pc = RC_ADDR(0x0001009eu);
    t0 = rc_rd16(c, m, (c->a[1] + 0x8u));
    rc_mulu(c, 0, t0);

L_100A2:
    /* 000100a2   2  lsr.w #8,D0 */
    c->pc = RC_ADDR(0x000100a2u);
    c->d[0] = rc_shift(c, 1, 0, 0x00000008u, rc_d_get(c, 0, RC_W), RC_W);

L_100A4:
    /* 000100a4   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x000100a4u);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_100A6:
    /* 000100a6   4  move.l (14,A3),D1 */
    c->pc = RC_ADDR(0x000100a6u);
    t0 = rc_rd32(c, m, (c->a[3] + 0x14u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_100AA:
    /* 000100aa   2  lsr.l #1,D1 */
    c->pc = RC_ADDR(0x000100aau);
    c->d[1] = rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_100AC:
    /* 000100ac   2  mulu.w D1,D0 */
    c->pc = RC_ADDR(0x000100acu);
    t0 = rc_d_get(c, 1, RC_W);
    rc_mulu(c, 0, t0);

L_100AE:
    /* 000100ae   2  moveq #11,D1 */
    c->pc = RC_ADDR(0x000100aeu);
    c->d[1] = 0x00000011u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_100B0:
    /* 000100b0   2  lsr.l D1,D0 */
    c->pc = RC_ADDR(0x000100b0u);
    c->d[0] = rc_shift(c, 1, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L);

L_100B2:
    /* 000100b2   4  mulu.w (8,A2),D0 */
    c->pc = RC_ADDR(0x000100b2u);
    t0 = rc_rd16(c, m, (c->a[2] + 0x8u));
    rc_mulu(c, 0, t0);

L_100B6:
    /* 000100b6   4  move.w D0,(14,A1) */
    c->pc = RC_ADDR(0x000100b6u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[1] + 0x14u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_100BA:
    /* 000100ba   2  clr.l D0 */
    c->pc = RC_ADDR(0x000100bau);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_100BC:
    /* 000100bc   6  cmpi.w #2,(a,A1) */
    c->pc = RC_ADDR(0x000100bcu);
    t0 = rc_rd16(c, m, (c->a[1] + 0xau));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_100C2:
    /* 000100c2   2  bne 000100c6 */
    c->pc = RC_ADDR(0x000100c2u);
    if (rc_cond(c, 6)) goto L_100C6;

L_100C4:
    /* 000100c4   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x000100c4u);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_100C6:
    /* 000100c6   2  rts */
    c->pc = RC_ADDR(0x000100c6u);
    rc_ret(c, m);
    return;

}
