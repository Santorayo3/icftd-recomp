/* fn_000067dc - 74 byte(s), 24 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000067dc(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000067dcu): goto L_67DC;
    case RC_ADDR(0x000067e0u): goto L_67E0;
    case RC_ADDR(0x000067e4u): goto L_67E4;
    case RC_ADDR(0x000067e6u): goto L_67E6;
    case RC_ADDR(0x000067eau): goto L_67EA;
    case RC_ADDR(0x000067eeu): goto L_67EE;
    case RC_ADDR(0x000067f0u): goto L_67F0;
    case RC_ADDR(0x000067f2u): goto L_67F2;
    case RC_ADDR(0x000067f6u): goto L_67F6;
    case RC_ADDR(0x000067fau): goto L_67FA;
    case RC_ADDR(0x000067feu): goto L_67FE;
    case RC_ADDR(0x00006802u): goto L_6802;
    case RC_ADDR(0x00006804u): goto L_6804;
    case RC_ADDR(0x00006806u): goto L_6806;
    case RC_ADDR(0x00006808u): goto L_6808;
    case RC_ADDR(0x0000680au): goto L_680A;
    case RC_ADDR(0x0000680cu): goto L_680C;
    case RC_ADDR(0x00006810u): goto L_6810;
    case RC_ADDR(0x00006816u): goto L_6816;
    case RC_ADDR(0x00006818u): goto L_6818;
    case RC_ADDR(0x0000681cu): goto L_681C;
    case RC_ADDR(0x0000681eu): goto L_681E;
    case RC_ADDR(0x00006820u): goto L_6820;
    case RC_ADDR(0x00006824u): goto L_6824;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_67DC:
    /* 000067dc   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x000067dcu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_67E0:
    /* 000067e0   4  tst.l (8,A5) */
    c->pc = RC_ADDR(0x000067e0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_set_nzvc(c, t0, RC_L);

L_67E4:
    /* 000067e4   2  beq 00006820 */
    c->pc = RC_ADDR(0x000067e4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_6820;

L_67E6:
    /* 000067e6   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x000067e6u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_67EA:
    /* 000067ea   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000067eau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_67EE:
    /* 000067ee   2  ext.l D0 */
    c->pc = RC_ADDR(0x000067eeu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_67F0:
    /* 000067f0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000067f0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_67F2:
    /* 000067f2   4  lea (fffff81c,A4),A0 */
    c->pc = RC_ADDR(0x000067f2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7e4u);

L_67F6:
    /* 000067f6   4  movea.l (8,A5),A1 */
    c->pc = RC_ADDR(0x000067f6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[1] = t0;

L_67FA:
    /* 000067fa   4  suba.l (fffff812,A4),A1 */
    c->pc = RC_ADDR(0x000067fau);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] - 0x7eeu));
    c->a[1] -= t0;

L_67FE:
    /* 000067fe   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x000067feu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6802:
    /* 00006802   2  cmp.w A1,D1 */
    c->pc = RC_ADDR(0x00006802u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 1, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_6804:
    /* 00006804   2  bne 0000680c */
    c->pc = RC_ADDR(0x00006804u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_680C;

L_6806:
    /* 00006806   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00006806u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_6808:
    /* 00006808   2  unlk A5 */
    c->pc = RC_ADDR(0x00006808u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_680A:
    /* 0000680a   2  rts */
    c->pc = RC_ADDR(0x0000680au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_680C:
    /* 0000680c   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000680cu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_6810:
    /* 00006810   6  cmpi.w #14,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00006810u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000014u);

L_6816:
    /* 00006816   2  blt 000067ea */
    c->pc = RC_ADDR(0x00006816u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_67EA; }

L_6818:
    /* 00006818   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00006818u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_681C:
    /* 0000681c   2  bsr 000067ac */
    c->pc = RC_ADDR(0x0000681cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000681eu));
    rc_depth++;
    c->pc = RC_ADDR(0x000067acu);
    return;

L_681E:
    /* 0000681e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000681eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_6820:
    /* 00006820   4  move.l (8,A5),D0 */
    c->pc = RC_ADDR(0x00006820u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_6824:
    /* 00006824   2  bra 00006808 */
    c->pc = RC_ADDR(0x00006824u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_6808;

}
