/* fn_0001f8d4 - 64 byte(s), 25 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001f8d4(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f8d4u): goto L_1F8D4;
    case RC_ADDR(0x0001f8d8u): goto L_1F8D8;
    case RC_ADDR(0x0001f8dcu): goto L_1F8DC;
    case RC_ADDR(0x0001f8deu): goto L_1F8DE;
    case RC_ADDR(0x0001f8e0u): goto L_1F8E0;
    case RC_ADDR(0x0001f8e2u): goto L_1F8E2;
    case RC_ADDR(0x0001f8e4u): goto L_1F8E4;
    case RC_ADDR(0x0001f8e8u): goto L_1F8E8;
    case RC_ADDR(0x0001f8eau): goto L_1F8EA;
    case RC_ADDR(0x0001f8ecu): goto L_1F8EC;
    case RC_ADDR(0x0001f8eeu): goto L_1F8EE;
    case RC_ADDR(0x0001f8f0u): goto L_1F8F0;
    case RC_ADDR(0x0001f8f4u): goto L_1F8F4;
    case RC_ADDR(0x0001f8f6u): goto L_1F8F6;
    case RC_ADDR(0x0001f8f8u): goto L_1F8F8;
    case RC_ADDR(0x0001f8fau): goto L_1F8FA;
    case RC_ADDR(0x0001f8fcu): goto L_1F8FC;
    case RC_ADDR(0x0001f8feu): goto L_1F8FE;
    case RC_ADDR(0x0001f900u): goto L_1F900;
    case RC_ADDR(0x0001f904u): goto L_1F904;
    case RC_ADDR(0x0001f906u): goto L_1F906;
    case RC_ADDR(0x0001f908u): goto L_1F908;
    case RC_ADDR(0x0001f90cu): goto L_1F90C;
    case RC_ADDR(0x0001f910u): goto L_1F910;
    case RC_ADDR(0x0001f912u): goto L_1F912;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F8D4:
    /* 0001f8d4   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001f8d4u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1F8D8:
    /* 0001f8d8   4  move.w (e,A5),D0 */
    c->pc = RC_ADDR(0x0001f8d8u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F8DC:
    /* 0001f8dc   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001f8dcu);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1F8DE:
    /* 0001f8de   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x0001f8deu);
    rc_step(c, m);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1F8E0:
    /* 0001f8e0   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x0001f8e0u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_1F8E2:
    /* 0001f8e2   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001f8e2u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F8E4:
    /* 0001f8e4   4  move.w (c,A5),D0 */
    c->pc = RC_ADDR(0x0001f8e4u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F8E8:
    /* 0001f8e8   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001f8e8u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1F8EA:
    /* 0001f8ea   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x0001f8eau);
    rc_step(c, m);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1F8EC:
    /* 0001f8ec   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x0001f8ecu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_1F8EE:
    /* 0001f8ee   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001f8eeu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F8F0:
    /* 0001f8f0   4  move.w (a,A5),D0 */
    c->pc = RC_ADDR(0x0001f8f0u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F8F4:
    /* 0001f8f4   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001f8f4u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1F8F6:
    /* 0001f8f6   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x0001f8f6u);
    rc_step(c, m);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1F8F8:
    /* 0001f8f8   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x0001f8f8u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_1F8FA:
    /* 0001f8fa   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001f8fau);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F8FC:
    /* 0001f8fc   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0001f8fcu);
    rc_step(c, m);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1F8FE:
    /* 0001f8fe   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0001f8feu);
    rc_step(c, m);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1F900:
    /* 0001f900   4  move.b (9,A5),D0 */
    c->pc = RC_ADDR(0x0001f900u);
    rc_step(c, m);
    t0 = rc_rd8(c, m, (c->a[5] + 0x9u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1F904:
    /* 0001f904   2  ext.w D0 */
    c->pc = RC_ADDR(0x0001f904u);
    rc_step(c, m);
    rc_ext_w(c, 0);

L_1F906:
    /* 0001f906   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001f906u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F908:
    /* 0001f908   4  jsr (0001f2ae) */
    c->pc = RC_ADDR(0x0001f908u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001f90cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_1F90C:
    /* 0001f90c   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x0001f90cu);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0x14u);

L_1F910:
    /* 0001f910   2  unlk A5 */
    c->pc = RC_ADDR(0x0001f910u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1F912:
    /* 0001f912   2  rts */
    c->pc = RC_ADDR(0x0001f912u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
