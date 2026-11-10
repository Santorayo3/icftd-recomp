/* fn_00020cde - 36 byte(s), 16 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00020cde(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00020cdeu): goto L_20CDE;
    case RC_ADDR(0x00020ce2u): goto L_20CE2;
    case RC_ADDR(0x00020ce4u): goto L_20CE4;
    case RC_ADDR(0x00020ce6u): goto L_20CE6;
    case RC_ADDR(0x00020ce8u): goto L_20CE8;
    case RC_ADDR(0x00020ceau): goto L_20CEA;
    case RC_ADDR(0x00020cecu): goto L_20CEC;
    case RC_ADDR(0x00020ceeu): goto L_20CEE;
    case RC_ADDR(0x00020cf0u): goto L_20CF0;
    case RC_ADDR(0x00020cf2u): goto L_20CF2;
    case RC_ADDR(0x00020cf4u): goto L_20CF4;
    case RC_ADDR(0x00020cf6u): goto L_20CF6;
    case RC_ADDR(0x00020cf8u): goto L_20CF8;
    case RC_ADDR(0x00020cfau): goto L_20CFA;
    case RC_ADDR(0x00020cfcu): goto L_20CFC;
    case RC_ADDR(0x00020d00u): goto L_20D00;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_20CDE:
    /* 00020cde   4  movem.l { A4 A5 A6 },-(SP) */
    c->pc = RC_ADDR(0x00020cdeu);
    rc_step(c, m);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[1]);
    c->a[7] = t3;

L_20CE2:
    /* 00020ce2   2  move.w D1,D2 */
    c->pc = RC_ADDR(0x00020ce2u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20CE4:
    /* 00020ce4   2  mulu.w D0,D2 */
    c->pc = RC_ADDR(0x00020ce4u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_mulu(c, 2, t0);

L_20CE6:
    /* 00020ce6   2  move.l D1,D3 */
    c->pc = RC_ADDR(0x00020ce6u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_L);
    rc_d_set(c, 3, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20CE8:
    /* 00020ce8   2  swap D3 */
    c->pc = RC_ADDR(0x00020ce8u);
    rc_step(c, m);
    t0 = c->d[3];
    c->d[3] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[3], RC_L);

L_20CEA:
    /* 00020cea   2  mulu.w D0,D3 */
    c->pc = RC_ADDR(0x00020ceau);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_mulu(c, 3, t0);

L_20CEC:
    /* 00020cec   2  swap D3 */
    c->pc = RC_ADDR(0x00020cecu);
    rc_step(c, m);
    t0 = c->d[3];
    c->d[3] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[3], RC_L);

L_20CEE:
    /* 00020cee   2  clr.w D3 */
    c->pc = RC_ADDR(0x00020ceeu);
    rc_step(c, m);
    rc_d_set(c, 3, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_20CF0:
    /* 00020cf0   2  add.l D3,D2 */
    c->pc = RC_ADDR(0x00020cf0u);
    rc_step(c, m);
    t0 = rc_d_get(c, 3, RC_L);
    t1 = rc_d_get(c, 2, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_L, t2);

L_20CF2:
    /* 00020cf2   2  swap D0 */
    c->pc = RC_ADDR(0x00020cf2u);
    rc_step(c, m);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_20CF4:
    /* 00020cf4   2  mulu.w D1,D0 */
    c->pc = RC_ADDR(0x00020cf4u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    rc_mulu(c, 0, t0);

L_20CF6:
    /* 00020cf6   2  swap D0 */
    c->pc = RC_ADDR(0x00020cf6u);
    rc_step(c, m);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_20CF8:
    /* 00020cf8   2  clr.w D0 */
    c->pc = RC_ADDR(0x00020cf8u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_20CFA:
    /* 00020cfa   2  add.l D2,D0 */
    c->pc = RC_ADDR(0x00020cfau);
    rc_step(c, m);
    t0 = rc_d_get(c, 2, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_20CFC:
    /* 00020cfc   4  movem.l (SP)+,{ D1 D2 D3 } */
    c->pc = RC_ADDR(0x00020cfcu);
    rc_step(c, m);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[3] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_20D00:
    /* 00020d00   2  rts */
    c->pc = RC_ADDR(0x00020d00u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
