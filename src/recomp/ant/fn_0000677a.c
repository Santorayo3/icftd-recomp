/* fn_0000677a - 50 byte(s), 14 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000677a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000677au): goto L_677A;
    case RC_ADDR(0x0000677eu): goto L_677E;
    case RC_ADDR(0x00006782u): goto L_6782;
    case RC_ADDR(0x00006786u): goto L_6786;
    case RC_ADDR(0x00006788u): goto L_6788;
    case RC_ADDR(0x0000678au): goto L_678A;
    case RC_ADDR(0x0000678eu): goto L_678E;
    case RC_ADDR(0x00006792u): goto L_6792;
    case RC_ADDR(0x00006796u): goto L_6796;
    case RC_ADDR(0x0000679cu): goto L_679C;
    case RC_ADDR(0x0000679eu): goto L_679E;
    case RC_ADDR(0x000067a2u): goto L_67A2;
    case RC_ADDR(0x000067a8u): goto L_67A8;
    case RC_ADDR(0x000067aau): goto L_67AA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_677A:
    /* 0000677a   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x0000677au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_677E:
    /* 0000677e   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0000677eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6782:
    /* 00006782   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00006782u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6786:
    /* 00006786   2  ext.l D0 */
    c->pc = RC_ADDR(0x00006786u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_6788:
    /* 00006788   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00006788u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_678A:
    /* 0000678a   4  lea (fffff81c,A4),A0 */
    c->pc = RC_ADDR(0x0000678au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7e4u);

L_678E:
    /* 0000678e   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000678eu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6792:
    /* 00006792   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00006792u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_6796:
    /* 00006796   6  cmpi.w #14,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00006796u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000014u);

L_679C:
    /* 0000679c   2  blt 00006782 */
    c->pc = RC_ADDR(0x0000679cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_6782; }

L_679E:
    /* 0000679e   4  clr.w (fffff81a,A4) */
    c->pc = RC_ADDR(0x0000679eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7e6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_67A2:
    /* 000067a2   6  move.w #1,(ffff8466,A4) */
    c->pc = RC_ADDR(0x000067a2u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7b9au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_67A8:
    /* 000067a8   2  unlk A5 */
    c->pc = RC_ADDR(0x000067a8u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_67AA:
    /* 000067aa   2  rts */
    c->pc = RC_ADDR(0x000067aau);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
