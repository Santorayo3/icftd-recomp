/* fn_0000f692 - 30 byte(s), 11 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000f692(cpu_t *c, rt_machine *m)
{
    u32 t0, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000f692u): goto L_F692;
    case RC_ADDR(0x0000f696u): goto L_F696;
    case RC_ADDR(0x0000f698u): goto L_F698;
    case RC_ADDR(0x0000f69au): goto L_F69A;
    case RC_ADDR(0x0000f69cu): goto L_F69C;
    case RC_ADDR(0x0000f6a0u): goto L_F6A0;
    case RC_ADDR(0x0000f6a2u): goto L_F6A2;
    case RC_ADDR(0x0000f6a4u): goto L_F6A4;
    case RC_ADDR(0x0000f6a8u): goto L_F6A8;
    case RC_ADDR(0x0000f6aau): goto L_F6AA;
    case RC_ADDR(0x0000f6aeu): goto L_F6AE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_F692:
    /* 0000f692   4  movem.l { D7 A6 },-(SP) */
    c->pc = RC_ADDR(0x0000f692u);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[0]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[1]);
    c->a[7] = t3;

L_F696:
    /* 0000f696   2  clr.w D1 */
    c->pc = RC_ADDR(0x0000f696u);
    rc_d_set(c, 1, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_F698:
    /* 0000f698   2  move.b D0,D1 */
    c->pc = RC_ADDR(0x0000f698u);
    t0 = rc_d_get(c, 0, RC_B);
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_F69A:
    /* 0000f69a   2  asl.w #2,D1 */
    c->pc = RC_ADDR(0x0000f69au);
    c->d[1] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_W), RC_W);

L_F69C:
    /* 0000f69c   4  lea (28,A6,D1.w),A0 */
    c->pc = RC_ADDR(0x0000f69cu);
    t4 = rc_ext(c->d[1], RC_W);
    c->a[0] = (c->a[6] + 0x28u + t4);

L_F6A0:
    /* 0000f6a0   2  tst.w (A0) */
    c->pc = RC_ADDR(0x0000f6a0u);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_set_nzvc(c, t0, RC_W);

L_F6A2:
    /* 0000f6a2   2  beq 0000f6aa */
    c->pc = RC_ADDR(0x0000f6a2u);
    if (rc_cond(c, 7)) goto L_F6AA;

L_F6A4:
    /* 0000f6a4   4  bsr 0000f5b8 */
    c->pc = RC_ADDR(0x0000f6a4u);
    rc_push32(c, m, RC_ADDR(0x0000f6a8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000f5b8u);
    return;

L_F6A8:
    /* 0000f6a8   2  clr.w (A0) */
    c->pc = RC_ADDR(0x0000f6a8u);
    rc_wr16(c, m, c->a[0], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_F6AA:
    /* 0000f6aa   4  movem.l (SP)+,{ D1 A0 } */
    c->pc = RC_ADDR(0x0000f6aau);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_F6AE:
    /* 0000f6ae   2  rts */
    c->pc = RC_ADDR(0x0000f6aeu);
    rc_ret(c, m);
    return;

}
