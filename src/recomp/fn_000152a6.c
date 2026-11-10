/* fn_000152a6 - 108 byte(s), 38 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000152a6(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000152a6u): goto L_152A6;
    case RC_ADDR(0x000152aau): goto L_152AA;
    case RC_ADDR(0x000152acu): goto L_152AC;
    case RC_ADDR(0x000152b0u): goto L_152B0;
    case RC_ADDR(0x000152b2u): goto L_152B2;
    case RC_ADDR(0x000152b4u): goto L_152B4;
    case RC_ADDR(0x000152b8u): goto L_152B8;
    case RC_ADDR(0x000152bcu): goto L_152BC;
    case RC_ADDR(0x000152beu): goto L_152BE;
    case RC_ADDR(0x000152c0u): goto L_152C0;
    case RC_ADDR(0x000152c4u): goto L_152C4;
    case RC_ADDR(0x000152c8u): goto L_152C8;
    case RC_ADDR(0x000152cau): goto L_152CA;
    case RC_ADDR(0x000152ccu): goto L_152CC;
    case RC_ADDR(0x000152d0u): goto L_152D0;
    case RC_ADDR(0x000152d4u): goto L_152D4;
    case RC_ADDR(0x000152d8u): goto L_152D8;
    case RC_ADDR(0x000152dcu): goto L_152DC;
    case RC_ADDR(0x000152deu): goto L_152DE;
    case RC_ADDR(0x000152e2u): goto L_152E2;
    case RC_ADDR(0x000152e4u): goto L_152E4;
    case RC_ADDR(0x000152e6u): goto L_152E6;
    case RC_ADDR(0x000152e8u): goto L_152E8;
    case RC_ADDR(0x000152eau): goto L_152EA;
    case RC_ADDR(0x000152ecu): goto L_152EC;
    case RC_ADDR(0x000152f0u): goto L_152F0;
    case RC_ADDR(0x000152f2u): goto L_152F2;
    case RC_ADDR(0x000152f4u): goto L_152F4;
    case RC_ADDR(0x000152f8u): goto L_152F8;
    case RC_ADDR(0x000152fcu): goto L_152FC;
    case RC_ADDR(0x000152feu): goto L_152FE;
    case RC_ADDR(0x00015300u): goto L_15300;
    case RC_ADDR(0x00015302u): goto L_15302;
    case RC_ADDR(0x00015306u): goto L_15306;
    case RC_ADDR(0x00015308u): goto L_15308;
    case RC_ADDR(0x0001530cu): goto L_1530C;
    case RC_ADDR(0x0001530eu): goto L_1530E;
    case RC_ADDR(0x00015310u): goto L_15310;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_152A6:
    /* 000152a6   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000152a6u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_152AA:
    /* 000152aa   2  move.l D4,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000152aau);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_152AC:
    /* 000152ac   4  move.w (1244,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000152acu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1244u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_152B0:
    /* 000152b0   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000152b0u);
    rc_ext_l(c, 0);

L_152B2:
    /* 000152b2   2  asl.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000152b2u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_152B4:
    /* 000152b4   4  lea (123c,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000152b4u);
    c->a[0] = (c->a[4] + 0x123cu);

L_152B8:
    /* 000152b8   4  move.w (8,A5),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000152b8u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_152BC:
    /* 000152bc   2  ext.l D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000152bcu);
    rc_ext_l(c, 1);

L_152BE:
    /* 000152be   2  asl.l #1,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000152beu);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_152C0:
    /* 000152c0   4  lea (ffffb240,A4),A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000152c0u);
    c->a[1] = (c->a[4] - 0x4dc0u);

L_152C4:
    /* 000152c4   4  move.w (a,A5),D2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000152c4u);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_152C8:
    /* 000152c8   2  ext.l D2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000152c8u);
    rc_ext_l(c, 2);

L_152CA:
    /* 000152ca   2  asl.l #1,D2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000152cau);
    c->d[2] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_L), RC_L);

L_152CC:
    /* 000152cc   4  lea (ffffb240,A4),A6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000152ccu);
    c->a[6] = (c->a[4] - 0x4dc0u);

L_152D0:
    /* 000152d0   4  move.w (0,A1,D1.w),D3 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000152d0u);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_152D4:
    /* 000152d4   4  sub.w (0,A6,D2.w),D3 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000152d4u);
    t4 = c->d[2];
    t0 = rc_rd16(c, m, (c->a[6] + 0x0u + t4));
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 3, RC_W, t2);

L_152D8:
    /* 000152d8   4  move.w (0,A0,D0.w),D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000152d8u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_152DC:
    /* 000152dc   2  sub.w D3,D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000152dcu);
    t0 = rc_d_get(c, 3, RC_W);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_152DE:
    /* 000152de   4  cmp.w #7,D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000152deu);
    t0 = 0x00000007u;
    t1 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_152E2:
    /* 000152e2   2  ble 000152e6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000152e2u);
    if (rc_cond(c, 15)) goto L_152E6;

L_152E4:
    /* 000152e4   2  subq.w #8,D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000152e4u);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 - 0x00000008u;
    rc_flags_sub(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_152E6:
    /* 000152e6   2  tst.w D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000152e6u);
    t0 = rc_d_get(c, 4, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_152E8:
    /* 000152e8   2  bge 000152ec */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000152e8u);
    if (rc_cond(c, 12)) goto L_152EC;

L_152EA:
    /* 000152ea   2  addq.w #8,D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000152eau);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 + 0x00000008u;
    rc_flags_add(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_152EC:
    /* 000152ec   4  move.w (1244,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000152ecu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1244u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_152F0:
    /* 000152f0   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000152f0u);
    rc_ext_l(c, 0);

L_152F2:
    /* 000152f2   2  asl.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000152f2u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_152F4:
    /* 000152f4   4  lea (123c,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000152f4u);
    c->a[0] = (c->a[4] + 0x123cu);

L_152F8:
    /* 000152f8   4  move.w D4,(0,A0,D0.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000152f8u);
    t0 = rc_d_get(c, 4, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_152FC:
    /* 000152fc   2  move.w D4,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000152fcu);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_152FE:
    /* 000152fe   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000152feu);
    rc_ext_l(c, 0);

L_15300:
    /* 00015300   2  asl.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00015300u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_15302:
    /* 00015302   4  lea (ffffb21a,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00015302u);
    c->a[0] = (c->a[4] - 0x4de6u);

L_15306:
    /* 00015306   2  move.l D0,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00015306u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_15308:
    /* 00015308   4  move.w (0,A0,D1.w),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00015308u);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1530C:
    /* 0001530c   2  move.l (A7)+,D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001530cu);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1530E:
    /* 0001530e   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001530eu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_15310:
    /* 00015310   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00015310u);
    rc_ret(c, m);
    return;

}
