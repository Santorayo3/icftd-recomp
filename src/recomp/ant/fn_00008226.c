/* fn_00008226 - 86 byte(s), 27 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00008226(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00008226u): goto L_8226;
    case RC_ADDR(0x0000822au): goto L_822A;
    case RC_ADDR(0x0000822eu): goto L_822E;
    case RC_ADDR(0x00008232u): goto L_8232;
    case RC_ADDR(0x00008234u): goto L_8234;
    case RC_ADDR(0x00008236u): goto L_8236;
    case RC_ADDR(0x0000823au): goto L_823A;
    case RC_ADDR(0x0000823eu): goto L_823E;
    case RC_ADDR(0x00008242u): goto L_8242;
    case RC_ADDR(0x00008244u): goto L_8244;
    case RC_ADDR(0x00008248u): goto L_8248;
    case RC_ADDR(0x0000824au): goto L_824A;
    case RC_ADDR(0x0000824cu): goto L_824C;
    case RC_ADDR(0x00008250u): goto L_8250;
    case RC_ADDR(0x00008254u): goto L_8254;
    case RC_ADDR(0x00008256u): goto L_8256;
    case RC_ADDR(0x0000825au): goto L_825A;
    case RC_ADDR(0x0000825cu): goto L_825C;
    case RC_ADDR(0x0000825eu): goto L_825E;
    case RC_ADDR(0x00008262u): goto L_8262;
    case RC_ADDR(0x00008266u): goto L_8266;
    case RC_ADDR(0x0000826au): goto L_826A;
    case RC_ADDR(0x0000826cu): goto L_826C;
    case RC_ADDR(0x00008270u): goto L_8270;
    case RC_ADDR(0x00008276u): goto L_8276;
    case RC_ADDR(0x00008278u): goto L_8278;
    case RC_ADDR(0x0000827au): goto L_827A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_8226:
    /* 00008226   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00008226u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_822A:
    /* 0000822a   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0000822au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_822E:
    /* 0000822e   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0000822eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8232:
    /* 00008232   2  ext.l D0 */
    c->pc = RC_ADDR(0x00008232u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_8234:
    /* 00008234   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00008234u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_8236:
    /* 00008236   4  lea (ffff8420,A4),A0 */
    c->pc = RC_ADDR(0x00008236u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7be0u);

L_823A:
    /* 0000823a   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000823au);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_823E:
    /* 0000823e   4  cmp.w (ffff83e2,A4),D1 */
    c->pc = RC_ADDR(0x0000823eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1eu));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_8242:
    /* 00008242   2  bne 0000826c */
    c->pc = RC_ADDR(0x00008242u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_826C;

L_8244:
    /* 00008244   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00008244u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8248:
    /* 00008248   2  ext.l D0 */
    c->pc = RC_ADDR(0x00008248u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_824A:
    /* 0000824a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000824au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_824C:
    /* 0000824c   4  lea (ffffd6d0,A4),A0 */
    c->pc = RC_ADDR(0x0000824cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x2930u);

L_8250:
    /* 00008250   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00008250u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_8254:
    /* 00008254   2  bne 0000826c */
    c->pc = RC_ADDR(0x00008254u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_826C;

L_8256:
    /* 00008256   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00008256u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_825A:
    /* 0000825a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000825au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_825C:
    /* 0000825c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000825cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_825E:
    /* 0000825e   4  lea (ffff8440,A4),A0 */
    c->pc = RC_ADDR(0x0000825eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7bc0u);

L_8262:
    /* 00008262   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00008262u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_8266:
    /* 00008266   4  jsr (0000803e) */
    c->pc = RC_ADDR(0x00008266u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000826au));
    rc_depth++;
    c->pc = RC_ADDR(0x0000803eu);
    return;

L_826A:
    /* 0000826a   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000826au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_826C:
    /* 0000826c   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000826cu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_8270:
    /* 00008270   6  cmpi.w #10,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00008270u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000010u);

L_8276:
    /* 00008276   2  blt 0000822e */
    c->pc = RC_ADDR(0x00008276u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_822E; }

L_8278:
    /* 00008278   2  unlk A5 */
    c->pc = RC_ADDR(0x00008278u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_827A:
    /* 0000827a   2  rts */
    c->pc = RC_ADDR(0x0000827au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
