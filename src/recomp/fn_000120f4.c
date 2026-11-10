/* fn_000120f4 - 62 byte(s), 16 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000120f4(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000120f4u): goto L_120F4;
    case RC_ADDR(0x000120f8u): goto L_120F8;
    case RC_ADDR(0x000120fcu): goto L_120FC;
    case RC_ADDR(0x00012102u): goto L_12102;
    case RC_ADDR(0x00012106u): goto L_12106;
    case RC_ADDR(0x0001210cu): goto L_1210C;
    case RC_ADDR(0x00012110u): goto L_12110;
    case RC_ADDR(0x00012116u): goto L_12116;
    case RC_ADDR(0x0001211au): goto L_1211A;
    case RC_ADDR(0x0001211eu): goto L_1211E;
    case RC_ADDR(0x00012120u): goto L_12120;
    case RC_ADDR(0x00012124u): goto L_12124;
    case RC_ADDR(0x00012128u): goto L_12128;
    case RC_ADDR(0x0001212cu): goto L_1212C;
    case RC_ADDR(0x0001212eu): goto L_1212E;
    case RC_ADDR(0x00012130u): goto L_12130;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_120F4:
    /* 000120f4   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x000120f4u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_120F8:
    /* 000120f8   4  movea.l (ffffcb0c,A4),A0 */
    c->pc = RC_ADDR(0x000120f8u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34f4u));
    c->a[0] = t0;

L_120FC:
    /* 000120fc   6  move.l (4,A0),(fffffffc,A5) */
    c->pc = RC_ADDR(0x000120fcu);
    t0 = rc_rd32(c, m, (c->a[0] + 0x4u));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_12102:
    /* 00012102   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00012102u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_12106:
    /* 00012106   6  move.l (e32,A4),(4,A0) */
    c->pc = RC_ADDR(0x00012106u);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe32u));
    rc_wr32(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1210C:
    /* 0001210c   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001210cu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_12110:
    /* 00012110   6  move.w (e36,A4),(8,A0) */
    c->pc = RC_ADDR(0x00012110u);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe36u));
    rc_wr16(c, m, (c->a[0] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12116:
    /* 00012116   4  move.l (ffffcb0c,A4),-(A7) */
    c->pc = RC_ADDR(0x00012116u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34f4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1211A:
    /* 0001211a   4  jsr (ffff8374,A4) */
    c->pc = RC_ADDR(0x0001211au);
    /* vector 147 */
    rc_push32(c, m, RC_ADDR(0x0001211eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021898u);
    return;

L_1211E:
    /* 0001211e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001211eu);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_12120:
    /* 00012120   4  pea (00000190).l */
    c->pc = RC_ADDR(0x00012120u);
    rc_push32(c, m, RC_ADDR(0x00000190u));

L_12124:
    /* 00012124   4  move.l (e04,A4),-(A7) */
    c->pc = RC_ADDR(0x00012124u);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe04u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_12128:
    /* 00012128   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x00012128u);
    /* vector 139: exec.library -210 */
    c->pc = RC_ADDR(0x0001212cu);
    rc_os_call(c, m, 0, -210);

L_1212C:
    /* 0001212c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001212cu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1212E:
    /* 0001212e   2  unlk A5 */
    c->pc = RC_ADDR(0x0001212eu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_12130:
    /* 00012130   2  rts */
    c->pc = RC_ADDR(0x00012130u);
    rc_ret(c, m);
    return;

}
