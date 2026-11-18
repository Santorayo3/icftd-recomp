/* fn_00004a9c - 48 byte(s), 14 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00004a9c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00004a9cu): goto L_4A9C;
    case RC_ADDR(0x00004aa0u): goto L_4AA0;
    case RC_ADDR(0x00004aa4u): goto L_4AA4;
    case RC_ADDR(0x00004aa8u): goto L_4AA8;
    case RC_ADDR(0x00004aaau): goto L_4AAA;
    case RC_ADDR(0x00004aacu): goto L_4AAC;
    case RC_ADDR(0x00004ab0u): goto L_4AB0;
    case RC_ADDR(0x00004ab4u): goto L_4AB4;
    case RC_ADDR(0x00004ab8u): goto L_4AB8;
    case RC_ADDR(0x00004abeu): goto L_4ABE;
    case RC_ADDR(0x00004ac0u): goto L_4AC0;
    case RC_ADDR(0x00004ac4u): goto L_4AC4;
    case RC_ADDR(0x00004ac8u): goto L_4AC8;
    case RC_ADDR(0x00004acau): goto L_4ACA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_4A9C:
    /* 00004a9c   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00004a9cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_4AA0:
    /* 00004aa0   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00004aa0u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4AA4:
    /* 00004aa4   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00004aa4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4AA8:
    /* 00004aa8   2  ext.l D0 */
    c->pc = RC_ADDR(0x00004aa8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_4AAA:
    /* 00004aaa   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00004aaau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_4AAC:
    /* 00004aac   4  lea (9ca,A4),A0 */
    c->pc = RC_ADDR(0x00004aacu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x9cau);

L_4AB0:
    /* 00004ab0   4  clr.l (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00004ab0u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_4AB4:
    /* 00004ab4   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00004ab4u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_4AB8:
    /* 00004ab8   6  cmpi.w #4,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00004ab8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_4ABE:
    /* 00004abe   2  blt 00004aa4 */
    c->pc = RC_ADDR(0x00004abeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_4AA4; }

L_4AC0:
    /* 00004ac0   4  clr.l (9da,A4) */
    c->pc = RC_ADDR(0x00004ac0u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] + 0x9dau), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_4AC4:
    /* 00004ac4   4  clr.l (9de,A4) */
    c->pc = RC_ADDR(0x00004ac4u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] + 0x9deu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_4AC8:
    /* 00004ac8   2  unlk A5 */
    c->pc = RC_ADDR(0x00004ac8u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_4ACA:
    /* 00004aca   2  rts */
    c->pc = RC_ADDR(0x00004acau);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
