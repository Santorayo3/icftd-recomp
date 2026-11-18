/* fn_0001f814 - 40 byte(s), 15 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001f814(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f814u): goto L_1F814;
    case RC_ADDR(0x0001f818u): goto L_1F818;
    case RC_ADDR(0x0001f81cu): goto L_1F81C;
    case RC_ADDR(0x0001f820u): goto L_1F820;
    case RC_ADDR(0x0001f822u): goto L_1F822;
    case RC_ADDR(0x0001f824u): goto L_1F824;
    case RC_ADDR(0x0001f826u): goto L_1F826;
    case RC_ADDR(0x0001f828u): goto L_1F828;
    case RC_ADDR(0x0001f82au): goto L_1F82A;
    case RC_ADDR(0x0001f82cu): goto L_1F82C;
    case RC_ADDR(0x0001f82eu): goto L_1F82E;
    case RC_ADDR(0x0001f830u): goto L_1F830;
    case RC_ADDR(0x0001f834u): goto L_1F834;
    case RC_ADDR(0x0001f838u): goto L_1F838;
    case RC_ADDR(0x0001f83au): goto L_1F83A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F814:
    /* 0001f814   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001f814u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1F818:
    /* 0001f818   4  movem.l { D4 D5 },-(SP) */
    c->pc = RC_ADDR(0x0001f818u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    c->a[7] = t3;

L_1F81C:
    /* 0001f81c   4  movea.l (ffffd29c,A4),A2 */
    c->pc = RC_ADDR(0x0001f81cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d64u));
    c->a[2] = t0;

L_1F820:
    /* 0001f820   2  move.l A2,D0 */
    c->pc = RC_ADDR(0x0001f820u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F822:
    /* 0001f822   2  beq 0001f830 */
    c->pc = RC_ADDR(0x0001f822u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1F830;

L_1F824:
    /* 0001f824   2  movea.l (A2),A3 */
    c->pc = RC_ADDR(0x0001f824u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[2]);
    c->a[3] = t0;

L_1F826:
    /* 0001f826   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x0001f826u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F828:
    /* 0001f828   2  bsr 0001f7bc */
    c->pc = RC_ADDR(0x0001f828u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f82au));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f7bcu);
    return;

L_1F82A:
    /* 0001f82a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001f82au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1F82C:
    /* 0001f82c   2  movea.l A3,A2 */
    c->pc = RC_ADDR(0x0001f82cu);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[2] = t0;

L_1F82E:
    /* 0001f82e   2  bra 0001f820 */
    c->pc = RC_ADDR(0x0001f82eu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1F820;

L_1F830:
    /* 0001f830   4  clr.l (ffffd29c,A4) */
    c->pc = RC_ADDR(0x0001f830u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x2d64u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1F834:
    /* 0001f834   4  movem.l (SP)+,{ A2 A3 } */
    c->pc = RC_ADDR(0x0001f834u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_1F838:
    /* 0001f838   2  unlk A5 */
    c->pc = RC_ADDR(0x0001f838u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1F83A:
    /* 0001f83a   2  rts */
    c->pc = RC_ADDR(0x0001f83au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
