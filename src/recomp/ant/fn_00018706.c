/* fn_00018706 - 70 byte(s), 18 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00018706(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00018706u): goto L_18706;
    case RC_ADDR(0x0001870au): goto L_1870A;
    case RC_ADDR(0x0001870eu): goto L_1870E;
    case RC_ADDR(0x00018710u): goto L_18710;
    case RC_ADDR(0x00018716u): goto L_18716;
    case RC_ADDR(0x0001871au): goto L_1871A;
    case RC_ADDR(0x0001871eu): goto L_1871E;
    case RC_ADDR(0x00018720u): goto L_18720;
    case RC_ADDR(0x00018724u): goto L_18724;
    case RC_ADDR(0x00018728u): goto L_18728;
    case RC_ADDR(0x0001872cu): goto L_1872C;
    case RC_ADDR(0x00018730u): goto L_18730;
    case RC_ADDR(0x00018734u): goto L_18734;
    case RC_ADDR(0x00018738u): goto L_18738;
    case RC_ADDR(0x0001873cu): goto L_1873C;
    case RC_ADDR(0x00018742u): goto L_18742;
    case RC_ADDR(0x00018748u): goto L_18748;
    case RC_ADDR(0x0001874au): goto L_1874A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_18706:
    /* 00018706   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00018706u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1870A:
    /* 0001870a   4  tst.w (1ac0,A4) */
    c->pc = RC_ADDR(0x0001870au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ac0u));
    rc_set_nzvc(c, t0, RC_W);

L_1870E:
    /* 0001870e   2  beq 00018748 */
    c->pc = RC_ADDR(0x0001870eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_18748;

L_18710:
    /* 00018710   6  move.w #23,(ffffd57a,A4) */
    c->pc = RC_ADDR(0x00018710u);
    rc_step(c, m, 16);
    t0 = 0x00000023u;
    rc_wr16(c, m, (c->a[4] - 0x2a86u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18716:
    /* 00018716   4  clr.w (1ac0,A4) */
    c->pc = RC_ADDR(0x00018716u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1ac0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1871A:
    /* 0001871a   4  tst.l (6ae,A4) */
    c->pc = RC_ADDR(0x0001871au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x6aeu));
    rc_set_nzvc(c, t0, RC_L);

L_1871E:
    /* 0001871e   2  beq 0001873c */
    c->pc = RC_ADDR(0x0001871eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1873C;

L_18720:
    /* 00018720   4  move.w (ffffd57a,A4),-(A7) */
    c->pc = RC_ADDR(0x00018720u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a86u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18724:
    /* 00018724   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x00018724u);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18728:
    /* 00018728   4  move.l (6b4,A4),-(A7) */
    c->pc = RC_ADDR(0x00018728u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x6b4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1872C:
    /* 0001872c   4  move.w (6b2,A4),-(A7) */
    c->pc = RC_ADDR(0x0001872cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6b2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18730:
    /* 00018730   4  move.l (6ae,A4),-(A7) */
    c->pc = RC_ADDR(0x00018730u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x6aeu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_18734:
    /* 00018734   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x00018734u);
    rc_step(c, m, 18);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x00018738u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af2cu);
    return;

L_18738:
    /* 00018738   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00018738u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_1873C:
    /* 0001873c   6  move.w #5,(ffffd57c,A4) */
    c->pc = RC_ADDR(0x0001873cu);
    rc_step(c, m, 16);
    t0 = 0x00000005u;
    rc_wr16(c, m, (c->a[4] - 0x2a84u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18742:
    /* 00018742   6  move.w #ffff,(ffffd57e,A4) */
    c->pc = RC_ADDR(0x00018742u);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] - 0x2a82u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18748:
    /* 00018748   2  unlk A5 */
    c->pc = RC_ADDR(0x00018748u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1874A:
    /* 0001874a   2  rts */
    c->pc = RC_ADDR(0x0001874au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
