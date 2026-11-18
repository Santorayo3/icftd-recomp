/* fn_00002752 - 82 byte(s), 25 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00002752(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00002752u): goto L_2752;
    case RC_ADDR(0x00002756u): goto L_2756;
    case RC_ADDR(0x0000275au): goto L_275A;
    case RC_ADDR(0x0000275cu): goto L_275C;
    case RC_ADDR(0x00002762u): goto L_2762;
    case RC_ADDR(0x00002764u): goto L_2764;
    case RC_ADDR(0x00002766u): goto L_2766;
    case RC_ADDR(0x0000276au): goto L_276A;
    case RC_ADDR(0x0000276cu): goto L_276C;
    case RC_ADDR(0x0000276eu): goto L_276E;
    case RC_ADDR(0x00002772u): goto L_2772;
    case RC_ADDR(0x00002778u): goto L_2778;
    case RC_ADDR(0x0000277au): goto L_277A;
    case RC_ADDR(0x0000277cu): goto L_277C;
    case RC_ADDR(0x00002780u): goto L_2780;
    case RC_ADDR(0x00002782u): goto L_2782;
    case RC_ADDR(0x00002784u): goto L_2784;
    case RC_ADDR(0x00002788u): goto L_2788;
    case RC_ADDR(0x0000278eu): goto L_278E;
    case RC_ADDR(0x00002792u): goto L_2792;
    case RC_ADDR(0x00002796u): goto L_2796;
    case RC_ADDR(0x0000279au): goto L_279A;
    case RC_ADDR(0x0000279cu): goto L_279C;
    case RC_ADDR(0x000027a0u): goto L_27A0;
    case RC_ADDR(0x000027a2u): goto L_27A2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2752:
    /* 00002752   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x00002752u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_2756:
    /* 00002756   4  tst.w (ffff83de,A4) */
    c->pc = RC_ADDR(0x00002756u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c22u));
    rc_set_nzvc(c, t0, RC_W);

L_275A:
    /* 0000275a   2  beq 000027a0 */
    c->pc = RC_ADDR(0x0000275au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_27A0;

L_275C:
    /* 0000275c   6  cmpi.w #9,(ffff83e2,A4) */
    c->pc = RC_ADDR(0x0000275cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1eu));
    rc_cmp(c, RC_W, t0, 0x00000009u);

L_2762:
    /* 00002762   2  ble 0000277a */
    c->pc = RC_ADDR(0x00002762u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_277A;

L_2764:
    /* 00002764   2  moveq #e,D0 */
    c->pc = RC_ADDR(0x00002764u);
    rc_step(c, m, 4);
    c->d[0] = 0x0000000eu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_2766:
    /* 00002766   4  sub.w (ffff83e2,A4),D0 */
    c->pc = RC_ADDR(0x00002766u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1eu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_276A:
    /* 0000276a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000276au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_276C:
    /* 0000276c   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000276cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_276E:
    /* 0000276e   4  lea (ffff8d9a,A4),A0 */
    c->pc = RC_ADDR(0x0000276eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7266u);

L_2772:
    /* 00002772   6  move.l (0,A0,D0.w),(fffffffc,A5) */
    c->pc = RC_ADDR(0x00002772u);
    rc_step(c, m, 30);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_2778:
    /* 00002778   2  bra 0000278e */
    c->pc = RC_ADDR(0x00002778u);
    rc_step(c, m, 10);
    goto L_278E;

L_277A:
    /* 0000277a   2  moveq #9,D0 */
    c->pc = RC_ADDR(0x0000277au);
    rc_step(c, m, 4);
    c->d[0] = 0x00000009u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_277C:
    /* 0000277c   4  sub.w (ffff83e2,A4),D0 */
    c->pc = RC_ADDR(0x0000277cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1eu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_2780:
    /* 00002780   2  ext.l D0 */
    c->pc = RC_ADDR(0x00002780u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_2782:
    /* 00002782   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00002782u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_2784:
    /* 00002784   4  lea (ffff8dae,A4),A0 */
    c->pc = RC_ADDR(0x00002784u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7252u);

L_2788:
    /* 00002788   6  move.l (0,A0,D0.w),(fffffffc,A5) */
    c->pc = RC_ADDR(0x00002788u);
    rc_step(c, m, 30);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_278E:
    /* 0000278e   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000278eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2792:
    /* 00002792   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00002792u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2796:
    /* 00002796   4  jsr (ffff8062,A4) */
    c->pc = RC_ADDR(0x00002796u);
    rc_step(c, m, 18);
    /* vector 16 */
    rc_push32(c, m, RC_ADDR(0x0000279au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b58u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00004852u);
    return;

L_279A:
    /* 0000279a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000279au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_279C:
    /* 0000279c   4  clr.w (ffff83de,A4) */
    c->pc = RC_ADDR(0x0000279cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7c22u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_27A0:
    /* 000027a0   2  unlk A5 */
    c->pc = RC_ADDR(0x000027a0u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_27A2:
    /* 000027a2   2  rts */
    c->pc = RC_ADDR(0x000027a2u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
