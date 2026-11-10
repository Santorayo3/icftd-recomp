/* fn_00015058 - 36 byte(s), 12 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00015058(cpu_t *c, rt_machine *m)
{
    u32 t0, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00015058u): goto L_15058;
    case RC_ADDR(0x0001505cu): goto L_1505C;
    case RC_ADDR(0x00015060u): goto L_15060;
    case RC_ADDR(0x00015062u): goto L_15062;
    case RC_ADDR(0x00015064u): goto L_15064;
    case RC_ADDR(0x00015068u): goto L_15068;
    case RC_ADDR(0x0001506cu): goto L_1506C;
    case RC_ADDR(0x0001506eu): goto L_1506E;
    case RC_ADDR(0x00015070u): goto L_15070;
    case RC_ADDR(0x00015074u): goto L_15074;
    case RC_ADDR(0x00015078u): goto L_15078;
    case RC_ADDR(0x0001507au): goto L_1507A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_15058:
    /* 00015058   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00015058u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1505C:
    /* 0001505c   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0001505cu);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15060:
    /* 00015060   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015060u);
    rc_ext_l(c, 0);

L_15062:
    /* 00015062   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00015062u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_15064:
    /* 00015064   4  lea (11f4,A4),A0 */
    c->pc = RC_ADDR(0x00015064u);
    c->a[0] = (c->a[4] + 0x11f4u);

L_15068:
    /* 00015068   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00015068u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1506C:
    /* 0001506c   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001506cu);
    rc_ext_l(c, 1);

L_1506E:
    /* 0001506e   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001506eu);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_15070:
    /* 00015070   4  lea (ffffb292,A4),A0 */
    c->pc = RC_ADDR(0x00015070u);
    c->a[0] = (c->a[4] - 0x4d6eu);

L_15074:
    /* 00015074   4  move.w (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x00015074u);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15078:
    /* 00015078   2  unlk A5 */
    c->pc = RC_ADDR(0x00015078u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1507A:
    /* 0001507a   2  rts */
    c->pc = RC_ADDR(0x0001507au);
    rc_ret(c, m);
    return;

}
