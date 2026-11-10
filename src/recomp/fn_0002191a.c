/* fn_0002191a - 26 byte(s), 8 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0002191a(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0002191au): goto L_2191A;
    case RC_ADDR(0x0002191eu): goto L_2191E;
    case RC_ADDR(0x00021922u): goto L_21922;
    case RC_ADDR(0x00021926u): goto L_21926;
    case RC_ADDR(0x0002192au): goto L_2192A;
    case RC_ADDR(0x0002192cu): goto L_2192C;
    case RC_ADDR(0x00021930u): goto L_21930;
    case RC_ADDR(0x00021932u): goto L_21932;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2191A:
    /* 0002191a   4  movea.l (4,A7),A1 */
    c->pc = RC_ADDR(0x0002191au);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[1] = t0;

L_2191E:
    /* 0002191e   4  movea.l (8,A7),A0 */
    c->pc = RC_ADDR(0x0002191eu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[7] + 0x8u));
    c->a[0] = t0;

L_21922:
    /* 00021922   4  move.l (c,A7),D0 */
    c->pc = RC_ADDR(0x00021922u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[7] + 0xcu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21926:
    /* 00021926   4  movea.l (ffffcba0,A4),A6 */
    c->pc = RC_ADDR(0x00021926u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3460u));
    c->a[6] = t0;

L_2192A:
    /* 0002192a   2  move.l D7,-(A7) */
    c->pc = RC_ADDR(0x0002192au);
    rc_step(c, m);
    t0 = rc_d_get(c, 7, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2192C:
    /* 0002192c   4  jsr (ffffffc4,A6) */
    c->pc = RC_ADDR(0x0002192cu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021930u);
    rc_push32(c, m, RC_ADDR(0x00021930u));
    rc_depth++;
    rc_os_call_a6(c, m, -60);

L_21930:
    /* 00021930   2  move.l (A7)+,D7 */
    c->pc = RC_ADDR(0x00021930u);
    rc_step(c, m);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 7, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21932:
    /* 00021932   2  rts */
    c->pc = RC_ADDR(0x00021932u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
