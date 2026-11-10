/* fn_0000dec4 - 36 byte(s), 11 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000dec4(cpu_t *c, rt_machine *m)
{
    u32 t0, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000dec4u): goto L_DEC4;
    case RC_ADDR(0x0000dec8u): goto L_DEC8;
    case RC_ADDR(0x0000deceu): goto L_DECE;
    case RC_ADDR(0x0000ded2u): goto L_DED2;
    case RC_ADDR(0x0000ded4u): goto L_DED4;
    case RC_ADDR(0x0000ded6u): goto L_DED6;
    case RC_ADDR(0x0000dedau): goto L_DEDA;
    case RC_ADDR(0x0000dedeu): goto L_DEDE;
    case RC_ADDR(0x0000dee2u): goto L_DEE2;
    case RC_ADDR(0x0000dee4u): goto L_DEE4;
    case RC_ADDR(0x0000dee6u): goto L_DEE6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_DEC4:
    /* 0000dec4   4  link.w A5,#fffffffc */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dec4u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_DEC8:
    /* 0000dec8   6  move.w (8,A5),(710,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dec8u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_wr16(c, m, (c->a[4] + 0x710u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DECE:
    /* 0000dece   4  move.w (710,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000deceu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x710u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DED2:
    /* 0000ded2   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ded2u);
    rc_ext_l(c, 0);

L_DED4:
    /* 0000ded4   2  asl.l #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ded4u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_DED6:
    /* 0000ded6   4  lea (ffff9ae0,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ded6u);
    c->a[0] = (c->a[4] - 0x6520u);

L_DEDA:
    /* 0000deda   4  move.l (0,A0,D0.w),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dedau);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_DEDE:
    /* 0000dede   4  jsr (ffff81b8,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dedeu);
    /* vector 73 */
    rc_push32(c, m, RC_ADDR(0x0000dee2u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001b732u);
    return;

L_DEE2:
    /* 0000dee2   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dee2u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_DEE4:
    /* 0000dee4   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dee4u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_DEE6:
    /* 0000dee6   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dee6u);
    rc_ret(c, m);
    return;

}
