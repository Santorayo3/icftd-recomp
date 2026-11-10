/* fn_00015034 - 36 byte(s), 12 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00015034(cpu_t *c, rt_machine *m)
{
    u32 t0, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00015034u): goto L_15034;
    case RC_ADDR(0x00015038u): goto L_15038;
    case RC_ADDR(0x0001503cu): goto L_1503C;
    case RC_ADDR(0x0001503eu): goto L_1503E;
    case RC_ADDR(0x00015040u): goto L_15040;
    case RC_ADDR(0x00015044u): goto L_15044;
    case RC_ADDR(0x00015048u): goto L_15048;
    case RC_ADDR(0x0001504au): goto L_1504A;
    case RC_ADDR(0x0001504cu): goto L_1504C;
    case RC_ADDR(0x00015050u): goto L_15050;
    case RC_ADDR(0x00015054u): goto L_15054;
    case RC_ADDR(0x00015056u): goto L_15056;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_15034:
    /* 00015034   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00015034u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_15038:
    /* 00015038   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00015038u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1503C:
    /* 0001503c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001503cu);
    rc_ext_l(c, 0);

L_1503E:
    /* 0001503e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001503eu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_15040:
    /* 00015040   4  lea (11f4,A4),A0 */
    c->pc = RC_ADDR(0x00015040u);
    c->a[0] = (c->a[4] + 0x11f4u);

L_15044:
    /* 00015044   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00015044u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15048:
    /* 00015048   2  ext.l D1 */
    c->pc = RC_ADDR(0x00015048u);
    rc_ext_l(c, 1);

L_1504A:
    /* 0001504a   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001504au);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_1504C:
    /* 0001504c   4  lea (ffffb27c,A4),A0 */
    c->pc = RC_ADDR(0x0001504cu);
    c->a[0] = (c->a[4] - 0x4d84u);

L_15050:
    /* 00015050   4  move.w (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x00015050u);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15054:
    /* 00015054   2  unlk A5 */
    c->pc = RC_ADDR(0x00015054u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_15056:
    /* 00015056   2  rts */
    c->pc = RC_ADDR(0x00015056u);
    rc_ret(c, m);
    return;

}
