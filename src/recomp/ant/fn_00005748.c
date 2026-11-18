/* fn_00005748 - 128 byte(s), 36 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00005748(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00005748u): goto L_5748;
    case RC_ADDR(0x0000574cu): goto L_574C;
    case RC_ADDR(0x00005750u): goto L_5750;
    case RC_ADDR(0x00005756u): goto L_5756;
    case RC_ADDR(0x0000575au): goto L_575A;
    case RC_ADDR(0x0000575eu): goto L_575E;
    case RC_ADDR(0x00005762u): goto L_5762;
    case RC_ADDR(0x00005764u): goto L_5764;
    case RC_ADDR(0x00005766u): goto L_5766;
    case RC_ADDR(0x00005768u): goto L_5768;
    case RC_ADDR(0x0000576eu): goto L_576E;
    case RC_ADDR(0x00005772u): goto L_5772;
    case RC_ADDR(0x00005776u): goto L_5776;
    case RC_ADDR(0x0000577au): goto L_577A;
    case RC_ADDR(0x0000577eu): goto L_577E;
    case RC_ADDR(0x00005782u): goto L_5782;
    case RC_ADDR(0x00005784u): goto L_5784;
    case RC_ADDR(0x00005788u): goto L_5788;
    case RC_ADDR(0x0000578cu): goto L_578C;
    case RC_ADDR(0x0000578eu): goto L_578E;
    case RC_ADDR(0x00005792u): goto L_5792;
    case RC_ADDR(0x00005796u): goto L_5796;
    case RC_ADDR(0x00005798u): goto L_5798;
    case RC_ADDR(0x000057a0u): goto L_57A0;
    case RC_ADDR(0x000057a2u): goto L_57A2;
    case RC_ADDR(0x000057a6u): goto L_57A6;
    case RC_ADDR(0x000057a8u): goto L_57A8;
    case RC_ADDR(0x000057acu): goto L_57AC;
    case RC_ADDR(0x000057aeu): goto L_57AE;
    case RC_ADDR(0x000057b2u): goto L_57B2;
    case RC_ADDR(0x000057b6u): goto L_57B6;
    case RC_ADDR(0x000057bau): goto L_57BA;
    case RC_ADDR(0x000057beu): goto L_57BE;
    case RC_ADDR(0x000057c0u): goto L_57C0;
    case RC_ADDR(0x000057c4u): goto L_57C4;
    case RC_ADDR(0x000057c6u): goto L_57C6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_5748:
    /* 00005748   4  link.w A5,#fffffff8 */
    c->pc = RC_ADDR(0x00005748u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x8u;

L_574C:
    /* 0000574c   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0000574cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5750:
    /* 00005750   6  move.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00005750u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_5756:
    /* 00005756   4  clr.l (fffffff8,A5) */
    c->pc = RC_ADDR(0x00005756u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_575A:
    /* 0000575a   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000575au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_575E:
    /* 0000575e   4  jsr (000054be) */
    c->pc = RC_ADDR(0x0000575eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00005762u));
    rc_depth++;
    c->pc = RC_ADDR(0x000054beu);
    return;

L_5762:
    /* 00005762   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00005762u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_5764:
    /* 00005764   2  tst.w D0 */
    c->pc = RC_ADDR(0x00005764u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_5766:
    /* 00005766   2  beq 00005798 */
    c->pc = RC_ADDR(0x00005766u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_5798;

L_5768:
    /* 00005768   6  move.l (8,A5),(fffffff8,A5) */
    c->pc = RC_ADDR(0x00005768u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_576E:
    /* 0000576e   4  move.l (fffffa1c,A4),D0 */
    c->pc = RC_ADDR(0x0000576eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5e4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_5772:
    /* 00005772   4  add.l D0,(8,A5) */
    c->pc = RC_ADDR(0x00005772u);
    rc_step(c, m, 24);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_5776:
    /* 00005776   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00005776u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_577A:
    /* 0000577a   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0000577au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_577E:
    /* 0000577e   4  cmp.w (c,A5),D0 */
    c->pc = RC_ADDR(0x0000577eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_5782:
    /* 00005782   2  bne 00005796 */
    c->pc = RC_ADDR(0x00005782u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_5796;

L_5784:
    /* 00005784   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00005784u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_5788:
    /* 00005788   4  addq.l #1,(8,A5) */
    c->pc = RC_ADDR(0x00005788u);
    rc_step(c, m, 24);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_578C:
    /* 0000578c   2  clr.b (A0) */
    c->pc = RC_ADDR(0x0000578cu);
    rc_step(c, m, 12);
    rc_wr8(c, m, c->a[0], 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_578E:
    /* 0000578e   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0000578eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5792:
    /* 00005792   4  addq.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00005792u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_5796:
    /* 00005796   2  bra 0000575a */
    c->pc = RC_ADDR(0x00005796u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_575A;

L_5798:
    /* 00005798   8  cmpi.l #14,(fffffa1c,A4) */
    c->pc = RC_ADDR(0x00005798u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5e4u));
    rc_cmp(c, RC_L, t0, 0x00000014u);

L_57A0:
    /* 000057a0   2  bcc 000057c0 */
    c->pc = RC_ADDR(0x000057a0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_57C0;

L_57A2:
    /* 000057a2   4  tst.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x000057a2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_set_nzvc(c, t0, RC_W);

L_57A6:
    /* 000057a6   2  bne 000057c0 */
    c->pc = RC_ADDR(0x000057a6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_57C0;

L_57A8:
    /* 000057a8   4  tst.l (fffffff8,A5) */
    c->pc = RC_ADDR(0x000057a8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_set_nzvc(c, t0, RC_L);

L_57AC:
    /* 000057ac   2  beq 000057c0 */
    c->pc = RC_ADDR(0x000057acu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_57C0;

L_57AE:
    /* 000057ae   4  subq.l #1,(8,A5) */
    c->pc = RC_ADDR(0x000057aeu);
    rc_step(c, m, 24);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_57B2:
    /* 000057b2   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000057b2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_57B6:
    /* 000057b6   4  move.b #20,(A0) */
    c->pc = RC_ADDR(0x000057b6u);
    rc_step(c, m, 12);
    t0 = 0x00000020u;
    rc_wr8(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_B);

L_57BA:
    /* 000057ba   4  movea.l (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x000057bau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] = t0;

L_57BE:
    /* 000057be   2  clr.b (A0) */
    c->pc = RC_ADDR(0x000057beu);
    rc_step(c, m, 12);
    rc_wr8(c, m, c->a[0], 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_57C0:
    /* 000057c0   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x000057c0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_57C4:
    /* 000057c4   2  unlk A5 */
    c->pc = RC_ADDR(0x000057c4u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_57C6:
    /* 000057c6   2  rts */
    c->pc = RC_ADDR(0x000057c6u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
