/* fn_0000a80c - 64 byte(s), 18 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000a80c(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000a80cu): goto L_A80C;
    case RC_ADDR(0x0000a810u): goto L_A810;
    case RC_ADDR(0x0000a814u): goto L_A814;
    case RC_ADDR(0x0000a816u): goto L_A816;
    case RC_ADDR(0x0000a81cu): goto L_A81C;
    case RC_ADDR(0x0000a81eu): goto L_A81E;
    case RC_ADDR(0x0000a822u): goto L_A822;
    case RC_ADDR(0x0000a826u): goto L_A826;
    case RC_ADDR(0x0000a828u): goto L_A828;
    case RC_ADDR(0x0000a82cu): goto L_A82C;
    case RC_ADDR(0x0000a830u): goto L_A830;
    case RC_ADDR(0x0000a834u): goto L_A834;
    case RC_ADDR(0x0000a838u): goto L_A838;
    case RC_ADDR(0x0000a83cu): goto L_A83C;
    case RC_ADDR(0x0000a83eu): goto L_A83E;
    case RC_ADDR(0x0000a842u): goto L_A842;
    case RC_ADDR(0x0000a848u): goto L_A848;
    case RC_ADDR(0x0000a84au): goto L_A84A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_A80C:
    /* 0000a80c   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x0000a80cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_A810:
    /* 0000a810   4  tst.w (fffff8a2,A4) */
    c->pc = RC_ADDR(0x0000a810u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x75eu));
    rc_set_nzvc(c, t0, RC_W);

L_A814:
    /* 0000a814   2  beq 0000a848 */
    c->pc = RC_ADDR(0x0000a814u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_A848;

L_A816:
    /* 0000a816   6  cmpi.w #4,(fffff8a2,A4) */
    c->pc = RC_ADDR(0x0000a816u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x75eu));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_A81C:
    /* 0000a81c   2  blt 0000a828 */
    c->pc = RC_ADDR(0x0000a81cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_A828;

L_A81E:
    /* 0000a81e   4  lea (0000a84c),A0 */
    c->pc = RC_ADDR(0x0000a81eu);
    rc_step(c, m, 8);
    c->a[0] = RC_ADDR(0x0000a84cu);

L_A822:
    /* 0000a822   4  move.l A0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000a822u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_A826:
    /* 0000a826   2  bra 0000a830 */
    c->pc = RC_ADDR(0x0000a826u);
    rc_step(c, m, 10);
    goto L_A830;

L_A828:
    /* 0000a828   4  lea (0000a88a),A0 */
    c->pc = RC_ADDR(0x0000a828u);
    rc_step(c, m, 8);
    c->a[0] = RC_ADDR(0x0000a88au);

L_A82C:
    /* 0000a82c   4  move.l A0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000a82cu);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_A830:
    /* 0000a830   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0000a830u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_A834:
    /* 0000a834   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000a834u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_A838:
    /* 0000a838   4  jsr (ffff8038,A4) */
    c->pc = RC_ADDR(0x0000a838u);
    rc_step(c, m, 18);
    /* vector 9 */
    rc_push32(c, m, RC_ADDR(0x0000a83cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000024acu);
    return;

L_A83C:
    /* 0000a83c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000a83cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_A83E:
    /* 0000a83e   4  clr.w (fffff8a2,A4) */
    c->pc = RC_ADDR(0x0000a83eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x75eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A842:
    /* 0000a842   6  move.w #1,(fffff8a6,A4) */
    c->pc = RC_ADDR(0x0000a842u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x75au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_A848:
    /* 0000a848   2  unlk A5 */
    c->pc = RC_ADDR(0x0000a848u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_A84A:
    /* 0000a84a   2  rts */
    c->pc = RC_ADDR(0x0000a84au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
