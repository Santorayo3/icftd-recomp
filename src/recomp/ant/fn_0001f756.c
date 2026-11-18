/* fn_0001f756 - 66 byte(s), 22 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001f756(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f756u): goto L_1F756;
    case RC_ADDR(0x0001f75au): goto L_1F75A;
    case RC_ADDR(0x0001f75cu): goto L_1F75C;
    case RC_ADDR(0x0001f760u): goto L_1F760;
    case RC_ADDR(0x0001f762u): goto L_1F762;
    case RC_ADDR(0x0001f764u): goto L_1F764;
    case RC_ADDR(0x0001f768u): goto L_1F768;
    case RC_ADDR(0x0001f76cu): goto L_1F76C;
    case RC_ADDR(0x0001f76eu): goto L_1F76E;
    case RC_ADDR(0x0001f772u): goto L_1F772;
    case RC_ADDR(0x0001f774u): goto L_1F774;
    case RC_ADDR(0x0001f778u): goto L_1F778;
    case RC_ADDR(0x0001f77cu): goto L_1F77C;
    case RC_ADDR(0x0001f780u): goto L_1F780;
    case RC_ADDR(0x0001f782u): goto L_1F782;
    case RC_ADDR(0x0001f786u): goto L_1F786;
    case RC_ADDR(0x0001f78au): goto L_1F78A;
    case RC_ADDR(0x0001f78cu): goto L_1F78C;
    case RC_ADDR(0x0001f790u): goto L_1F790;
    case RC_ADDR(0x0001f792u): goto L_1F792;
    case RC_ADDR(0x0001f794u): goto L_1F794;
    case RC_ADDR(0x0001f796u): goto L_1F796;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F756:
    /* 0001f756   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001f756u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1F75A:
    /* 0001f75a   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x0001f75au);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F75C:
    /* 0001f75c   4  movea.l (8,A5),A2 */
    c->pc = RC_ADDR(0x0001f75cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[2] = t0;

L_1F760:
    /* 0001f760   2  move.l A2,D0 */
    c->pc = RC_ADDR(0x0001f760u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F762:
    /* 0001f762   2  beq 0001f792 */
    c->pc = RC_ADDR(0x0001f762u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1F792;

L_1F764:
    /* 0001f764   4  pea (c,A2) */
    c->pc = RC_ADDR(0x0001f764u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[2] + 0xcu));

L_1F768:
    /* 0001f768   4  jsr (ffff82a2,A4) */
    c->pc = RC_ADDR(0x0001f768u);
    rc_step(c, m, 18);
    /* vector 112 */
    rc_push32(c, m, RC_ADDR(0x0001f76cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d98u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022138u);
    return;

L_1F76C:
    /* 0001f76c   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001f76cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1F76E:
    /* 0001f76e   4  tst.l (38,A2) */
    c->pc = RC_ADDR(0x0001f76eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0x38u));
    rc_set_nzvc(c, t0, RC_L);

L_1F772:
    /* 0001f772   2  beq 0001f782 */
    c->pc = RC_ADDR(0x0001f772u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1F782;

L_1F774:
    /* 0001f774   4  pea (00000080).l */
    c->pc = RC_ADDR(0x0001f774u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000080u);

L_1F778:
    /* 0001f778   4  move.l (38,A2),-(A7) */
    c->pc = RC_ADDR(0x0001f778u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[2] + 0x38u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F77C:
    /* 0001f77c   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0001f77cu);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0001f780u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_1F780:
    /* 0001f780   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001f780u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1F782:
    /* 0001f782   4  clr.l (38,A2) */
    c->pc = RC_ADDR(0x0001f782u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[2] + 0x38u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1F786:
    /* 0001f786   4  pea (0000003c).l */
    c->pc = RC_ADDR(0x0001f786u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000003cu);

L_1F78A:
    /* 0001f78a   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x0001f78au);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F78C:
    /* 0001f78c   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0001f78cu);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0001f790u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_1F790:
    /* 0001f790   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001f790u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1F792:
    /* 0001f792   2  movea.l (A7)+,A2 */
    c->pc = RC_ADDR(0x0001f792u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_1F794:
    /* 0001f794   2  unlk A5 */
    c->pc = RC_ADDR(0x0001f794u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1F796:
    /* 0001f796   2  rts */
    c->pc = RC_ADDR(0x0001f796u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
