/* fn_0000f7f4 - 80 byte(s), 22 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000f7f4(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000f7f4u): goto L_F7F4;
    case RC_ADDR(0x0000f7f8u): goto L_F7F8;
    case RC_ADDR(0x0000f7fcu): goto L_F7FC;
    case RC_ADDR(0x0000f800u): goto L_F800;
    case RC_ADDR(0x0000f804u): goto L_F804;
    case RC_ADDR(0x0000f808u): goto L_F808;
    case RC_ADDR(0x0000f80cu): goto L_F80C;
    case RC_ADDR(0x0000f810u): goto L_F810;
    case RC_ADDR(0x0000f814u): goto L_F814;
    case RC_ADDR(0x0000f818u): goto L_F818;
    case RC_ADDR(0x0000f81cu): goto L_F81C;
    case RC_ADDR(0x0000f820u): goto L_F820;
    case RC_ADDR(0x0000f824u): goto L_F824;
    case RC_ADDR(0x0000f826u): goto L_F826;
    case RC_ADDR(0x0000f82au): goto L_F82A;
    case RC_ADDR(0x0000f82eu): goto L_F82E;
    case RC_ADDR(0x0000f832u): goto L_F832;
    case RC_ADDR(0x0000f836u): goto L_F836;
    case RC_ADDR(0x0000f83au): goto L_F83A;
    case RC_ADDR(0x0000f83eu): goto L_F83E;
    case RC_ADDR(0x0000f840u): goto L_F840;
    case RC_ADDR(0x0000f842u): goto L_F842;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_F7F4:
    /* 0000f7f4   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000f7f4u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_F7F8:
    /* 0000f7f8   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000f7f8u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_F7FC:
    /* 0000f7fc   4  pea (0000f854) */
    c->pc = RC_ADDR(0x0000f7fcu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000f854u));

L_F800:
    /* 0000f800   4  pea (0000f848) */
    c->pc = RC_ADDR(0x0000f800u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000f848u));

L_F804:
    /* 0000f804   4  jsr (ffff800e,A4) */
    c->pc = RC_ADDR(0x0000f804u);
    rc_step(c, m, 18);
    /* vector 2 */
    rc_push32(c, m, RC_ADDR(0x0000f808u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b04u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000068au);
    return;

L_F808:
    /* 0000f808   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0000f808u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_F80C:
    /* 0000f80c   4  pea (112a,A4) */
    c->pc = RC_ADDR(0x0000f80cu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x112au));

L_F810:
    /* 0000f810   4  pea (1126,A4) */
    c->pc = RC_ADDR(0x0000f810u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x1126u));

L_F814:
    /* 0000f814   4  pea (0000f85a) */
    c->pc = RC_ADDR(0x0000f814u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000f85au));

L_F818:
    /* 0000f818   4  jsr (ffff80bc,A4) */
    c->pc = RC_ADDR(0x0000f818u);
    rc_step(c, m, 18);
    /* vector 31 */
    rc_push32(c, m, RC_ADDR(0x0000f81cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000ad50u);
    return;

L_F81C:
    /* 0000f81c   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0000f81cu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_F820:
    /* 0000f820   4  move.l D0,(111e,A4) */
    c->pc = RC_ADDR(0x0000f820u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x111eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_F824:
    /* 0000f824   2  beq 0000f83e */
    c->pc = RC_ADDR(0x0000f824u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_F83E;

L_F826:
    /* 0000f826   4  pea (112e,A4) */
    c->pc = RC_ADDR(0x0000f826u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x112eu));

L_F82A:
    /* 0000f82a   4  pea (1128,A4) */
    c->pc = RC_ADDR(0x0000f82au);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x1128u));

L_F82E:
    /* 0000f82e   4  pea (0000f86c) */
    c->pc = RC_ADDR(0x0000f82eu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000f86cu));

L_F832:
    /* 0000f832   4  jsr (ffff80bc,A4) */
    c->pc = RC_ADDR(0x0000f832u);
    rc_step(c, m, 18);
    /* vector 31 */
    rc_push32(c, m, RC_ADDR(0x0000f836u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000ad50u);
    return;

L_F836:
    /* 0000f836   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0000f836u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_F83A:
    /* 0000f83a   4  move.l D0,(1122,A4) */
    c->pc = RC_ADDR(0x0000f83au);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x1122u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_F83E:
    /* 0000f83e   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0000f83eu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_F840:
    /* 0000f840   2  unlk A5 */
    c->pc = RC_ADDR(0x0000f840u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_F842:
    /* 0000f842   2  rts */
    c->pc = RC_ADDR(0x0000f842u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
