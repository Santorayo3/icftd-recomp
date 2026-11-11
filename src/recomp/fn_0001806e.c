/* fn_0001806e - 64 byte(s), 18 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001806e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001806eu): goto L_1806E;
    case RC_ADDR(0x00018072u): goto L_18072;
    case RC_ADDR(0x00018078u): goto L_18078;
    case RC_ADDR(0x0001807cu): goto L_1807C;
    case RC_ADDR(0x00018080u): goto L_18080;
    case RC_ADDR(0x00018082u): goto L_18082;
    case RC_ADDR(0x00018084u): goto L_18084;
    case RC_ADDR(0x00018088u): goto L_18088;
    case RC_ADDR(0x0001808cu): goto L_1808C;
    case RC_ADDR(0x0001808eu): goto L_1808E;
    case RC_ADDR(0x00018090u): goto L_18090;
    case RC_ADDR(0x00018094u): goto L_18094;
    case RC_ADDR(0x0001809au): goto L_1809A;
    case RC_ADDR(0x0001809eu): goto L_1809E;
    case RC_ADDR(0x000180a2u): goto L_180A2;
    case RC_ADDR(0x000180a8u): goto L_180A8;
    case RC_ADDR(0x000180aau): goto L_180AA;
    case RC_ADDR(0x000180acu): goto L_180AC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1806E:
    /* 0001806e   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x0001806eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_18072:
    /* 00018072   6  move.w #29,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00018072u);
    rc_step(c, m, 16);
    t0 = 0x00000029u;
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18078:
    /* 00018078   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00018078u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1807C:
    /* 0001807c   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001807cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18080:
    /* 00018080   2  ext.l D0 */
    c->pc = RC_ADDR(0x00018080u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_18082:
    /* 00018082   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00018082u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_18084:
    /* 00018084   4  lea (282,A4),A0 */
    c->pc = RC_ADDR(0x00018084u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x282u);

L_18088:
    /* 00018088   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x00018088u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1808C:
    /* 0001808c   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001808cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1808E:
    /* 0001808e   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001808eu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_18090:
    /* 00018090   4  movea.l (a12,A4),A1 */
    c->pc = RC_ADDR(0x00018090u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0xa12u));
    c->a[1] = t0;

L_18094:
    /* 00018094   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x00018094u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1809A:
    /* 0001809a   4  addq.w #2,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001809au);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1809E:
    /* 0001809e   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001809eu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_180A2:
    /* 000180a2   6  cmpi.w #20,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000180a2u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000020u);

L_180A8:
    /* 000180a8   2  blt 0001807c */
    c->pc = RC_ADDR(0x000180a8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1807C; }

L_180AA:
    /* 000180aa   2  unlk A5 */
    c->pc = RC_ADDR(0x000180aau);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_180AC:
    /* 000180ac   2  rts */
    c->pc = RC_ADDR(0x000180acu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
