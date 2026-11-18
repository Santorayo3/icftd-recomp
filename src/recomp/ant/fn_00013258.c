/* fn_00013258 - 64 byte(s), 19 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00013258(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00013258u): goto L_13258;
    case RC_ADDR(0x0001325cu): goto L_1325C;
    case RC_ADDR(0x00013260u): goto L_13260;
    case RC_ADDR(0x00013262u): goto L_13262;
    case RC_ADDR(0x00013264u): goto L_13264;
    case RC_ADDR(0x0001326au): goto L_1326A;
    case RC_ADDR(0x0001326eu): goto L_1326E;
    case RC_ADDR(0x00013270u): goto L_13270;
    case RC_ADDR(0x00013276u): goto L_13276;
    case RC_ADDR(0x0001327au): goto L_1327A;
    case RC_ADDR(0x0001327cu): goto L_1327C;
    case RC_ADDR(0x00013280u): goto L_13280;
    case RC_ADDR(0x00013282u): goto L_13282;
    case RC_ADDR(0x00013286u): goto L_13286;
    case RC_ADDR(0x00013288u): goto L_13288;
    case RC_ADDR(0x0001328cu): goto L_1328C;
    case RC_ADDR(0x0001328eu): goto L_1328E;
    case RC_ADDR(0x00013292u): goto L_13292;
    case RC_ADDR(0x00013296u): goto L_13296;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_13258:
    /* 00013258   4  move.w #28,D0 */
    c->pc = RC_ADDR(0x00013258u);
    rc_step(c, m, 8);
    t0 = 0x00000028u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1325C:
    /* 0001325c   4  move.w (fffffa94,A4),D1 */
    c->pc = RC_ADDR(0x0001325cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x56cu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13260:
    /* 00013260   2  lsl.w #1,D1 */
    c->pc = RC_ADDR(0x00013260u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_13262:
    /* 00013262   2  sub.w D1,D0 */
    c->pc = RC_ADDR(0x00013262u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_13264:
    /* 00013264   6  move.w D0,(00dff066).l */
    c->pc = RC_ADDR(0x00013264u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, 0x00dff066u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1326A:
    /* 0001326a   4  move.w (fffffa9c,A4),D0 */
    c->pc = RC_ADDR(0x0001326au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x564u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1326E:
    /* 0001326e   2  sub.w D1,D0 */
    c->pc = RC_ADDR(0x0001326eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_13270:
    /* 00013270   6  move.w D0,(00dff064).l */
    c->pc = RC_ADDR(0x00013270u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, 0x00dff064u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13276:
    /* 00013276   4  lea (fffffaa8,A4),A3 */
    c->pc = RC_ADDR(0x00013276u);
    rc_step(c, m, 8);
    c->a[3] = (c->a[4] - 0x558u);

L_1327A:
    /* 0001327a   2  movea.l (A3)+,A1 */
    c->pc = RC_ADDR(0x0001327au);
    rc_step(c, m, 12);
    t3 = c->a[3];
    c->a[3] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;

L_1327C:
    /* 0001327c   4  lea (ffffface,A4),A6 */
    c->pc = RC_ADDR(0x0001327cu);
    rc_step(c, m, 8);
    c->a[6] = (c->a[4] - 0x532u);

L_13280:
    /* 00013280   2  movea.l (A6)+,A2 */
    c->pc = RC_ADDR(0x00013280u);
    rc_step(c, m, 12);
    t3 = c->a[6];
    c->a[6] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_13282:
    /* 00013282   4  move.w (17e2,A4),D5 */
    c->pc = RC_ADDR(0x00013282u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17e2u));
    rc_d_set(c, 5, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13286:
    /* 00013286   2  clr.l D3 */
    c->pc = RC_ADDR(0x00013286u);
    rc_step(c, m, 6);
    rc_d_set(c, 3, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_13288:
    /* 00013288   4  move.w (fffffa94,A4),D3 */
    c->pc = RC_ADDR(0x00013288u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x56cu));
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1328C:
    /* 0001328c   2  lsl.w #1,D3 */
    c->pc = RC_ADDR(0x0001328cu);
    rc_step(c, m, 6);
    rc_d_set(c, 3, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 3, RC_W), RC_W));

L_1328E:
    /* 0001328e   4  move.w #4,D2 */
    c->pc = RC_ADDR(0x0001328eu);
    rc_step(c, m, 8);
    t0 = 0x00000004u;
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13292:
    /* 00013292   4  movea.l (fffffabc,A4),A5 */
    c->pc = RC_ADDR(0x00013292u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x544u));
    c->a[5] = t0;

L_13296:
    /* 00013296   2  rts */
    c->pc = RC_ADDR(0x00013296u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
