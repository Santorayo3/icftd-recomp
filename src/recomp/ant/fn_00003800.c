/* fn_00003800 - 134 byte(s), 36 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00003800(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00003800u): goto L_3800;
    case RC_ADDR(0x00003804u): goto L_3804;
    case RC_ADDR(0x0000380au): goto L_380A;
    case RC_ADDR(0x0000380cu): goto L_380C;
    case RC_ADDR(0x00003812u): goto L_3812;
    case RC_ADDR(0x00003814u): goto L_3814;
    case RC_ADDR(0x00003818u): goto L_3818;
    case RC_ADDR(0x0000381cu): goto L_381C;
    case RC_ADDR(0x0000381eu): goto L_381E;
    case RC_ADDR(0x00003820u): goto L_3820;
    case RC_ADDR(0x00003824u): goto L_3824;
    case RC_ADDR(0x00003828u): goto L_3828;
    case RC_ADDR(0x0000382au): goto L_382A;
    case RC_ADDR(0x0000382cu): goto L_382C;
    case RC_ADDR(0x00003830u): goto L_3830;
    case RC_ADDR(0x00003836u): goto L_3836;
    case RC_ADDR(0x0000383au): goto L_383A;
    case RC_ADDR(0x0000383cu): goto L_383C;
    case RC_ADDR(0x0000383eu): goto L_383E;
    case RC_ADDR(0x00003842u): goto L_3842;
    case RC_ADDR(0x00003846u): goto L_3846;
    case RC_ADDR(0x0000384au): goto L_384A;
    case RC_ADDR(0x0000384cu): goto L_384C;
    case RC_ADDR(0x0000384eu): goto L_384E;
    case RC_ADDR(0x00003852u): goto L_3852;
    case RC_ADDR(0x00003856u): goto L_3856;
    case RC_ADDR(0x0000385au): goto L_385A;
    case RC_ADDR(0x00003860u): goto L_3860;
    case RC_ADDR(0x00003862u): goto L_3862;
    case RC_ADDR(0x00003868u): goto L_3868;
    case RC_ADDR(0x0000386eu): goto L_386E;
    case RC_ADDR(0x00003874u): goto L_3874;
    case RC_ADDR(0x0000387au): goto L_387A;
    case RC_ADDR(0x0000387eu): goto L_387E;
    case RC_ADDR(0x00003882u): goto L_3882;
    case RC_ADDR(0x00003884u): goto L_3884;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_3800:
    /* 00003800   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00003800u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_3804:
    /* 00003804   6  cmpi.b #32,(fffff862,A4) */
    c->pc = RC_ADDR(0x00003804u);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[4] - 0x79eu));
    rc_cmp(c, RC_B, t0, 0x00000032u);

L_380A:
    /* 0000380a   2  bge 00003882 */
    c->pc = RC_ADDR(0x0000380au);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_3882;

L_380C:
    /* 0000380c   6  cmpi.w #1,(ffff83fc,A4) */
    c->pc = RC_ADDR(0x0000380cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c04u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_3812:
    /* 00003812   2  bne 00003882 */
    c->pc = RC_ADDR(0x00003812u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_3882;

L_3814:
    /* 00003814   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00003814u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3818:
    /* 00003818   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00003818u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_381C:
    /* 0000381c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000381cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_381E:
    /* 0000381e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000381eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_3820:
    /* 00003820   4  lea (85c,A4),A0 */
    c->pc = RC_ADDR(0x00003820u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x85cu);

L_3824:
    /* 00003824   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x00003824u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3828:
    /* 00003828   2  ext.l D1 */
    c->pc = RC_ADDR(0x00003828u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_382A:
    /* 0000382a   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0000382au);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_382C:
    /* 0000382c   4  lea (89c,A4),A1 */
    c->pc = RC_ADDR(0x0000382cu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x89cu);

L_3830:
    /* 00003830   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x00003830u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3836:
    /* 00003836   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00003836u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_383A:
    /* 0000383a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000383au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_383C:
    /* 0000383c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000383cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_383E:
    /* 0000383e   4  lea (7f6,A4),A0 */
    c->pc = RC_ADDR(0x0000383eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x7f6u);

L_3842:
    /* 00003842   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00003842u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3846:
    /* 00003846   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00003846u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_384A:
    /* 0000384a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000384au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_384C:
    /* 0000384c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000384cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_384E:
    /* 0000384e   4  lea (8dc,A4),A0 */
    c->pc = RC_ADDR(0x0000384eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x8dcu);

L_3852:
    /* 00003852   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00003852u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3856:
    /* 00003856   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00003856u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_385A:
    /* 0000385a   6  cmpi.w #20,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000385au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000020u);

L_3860:
    /* 00003860   2  blt 00003818 */
    c->pc = RC_ADDR(0x00003860u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_3818; }

L_3862:
    /* 00003862   6  move.w #1,(91c,A4) */
    c->pc = RC_ADDR(0x00003862u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x91cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3868:
    /* 00003868   6  move.w #1,(91e,A4) */
    c->pc = RC_ADDR(0x00003868u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x91eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_386E:
    /* 0000386e   6  move.w #14,(920,A4) */
    c->pc = RC_ADDR(0x0000386eu);
    rc_step(c, m, 16);
    t0 = 0x00000014u;
    rc_wr16(c, m, (c->a[4] + 0x920u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3874:
    /* 00003874   6  move.w #1,(922,A4) */
    c->pc = RC_ADDR(0x00003874u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x922u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_387A:
    /* 0000387a   4  clr.w (ffffd2a2,A4) */
    c->pc = RC_ADDR(0x0000387au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x2d5eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_387E:
    /* 0000387e   4  clr.w (ffff83fc,A4) */
    c->pc = RC_ADDR(0x0000387eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7c04u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3882:
    /* 00003882   2  unlk A5 */
    c->pc = RC_ADDR(0x00003882u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_3884:
    /* 00003884   2  rts */
    c->pc = RC_ADDR(0x00003884u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
