/* fn_0001f75e - 74 byte(s), 20 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001f75e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f75eu): goto L_1F75E;
    case RC_ADDR(0x0001f762u): goto L_1F762;
    case RC_ADDR(0x0001f766u): goto L_1F766;
    case RC_ADDR(0x0001f768u): goto L_1F768;
    case RC_ADDR(0x0001f76au): goto L_1F76A;
    case RC_ADDR(0x0001f76eu): goto L_1F76E;
    case RC_ADDR(0x0001f774u): goto L_1F774;
    case RC_ADDR(0x0001f778u): goto L_1F778;
    case RC_ADDR(0x0001f77eu): goto L_1F77E;
    case RC_ADDR(0x0001f780u): goto L_1F780;
    case RC_ADDR(0x0001f786u): goto L_1F786;
    case RC_ADDR(0x0001f78cu): goto L_1F78C;
    case RC_ADDR(0x0001f790u): goto L_1F790;
    case RC_ADDR(0x0001f792u): goto L_1F792;
    case RC_ADDR(0x0001f794u): goto L_1F794;
    case RC_ADDR(0x0001f798u): goto L_1F798;
    case RC_ADDR(0x0001f79cu): goto L_1F79C;
    case RC_ADDR(0x0001f79eu): goto L_1F79E;
    case RC_ADDR(0x0001f7a0u): goto L_1F7A0;
    case RC_ADDR(0x0001f7a4u): goto L_1F7A4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F75E:
    /* 0001f75e   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001f75eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1F762:
    /* 0001f762   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001f762u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F766:
    /* 0001f766   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001f766u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1F768:
    /* 0001f768   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001f768u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1F76A:
    /* 0001f76a   4  lea (ffffff0e,A4),A0 */
    c->pc = RC_ADDR(0x0001f76au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0xf2u);

L_1F76E:
    /* 0001f76e   6  move.w (12,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001f76eu);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] + 0x12u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F774:
    /* 0001f774   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001f774u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1F778:
    /* 0001f778   6  cmpi.w #20,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001f778u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000020u);

L_1F77E:
    /* 0001f77e   2  blt 0001f762 */
    c->pc = RC_ADDR(0x0001f77eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1F762; }

L_1F780:
    /* 0001f780   6  move.w #1,(ffffff4e,A4) */
    c->pc = RC_ADDR(0x0001f780u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0xb2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F786:
    /* 0001f786   6  move.w #1,(ffffff50,A4) */
    c->pc = RC_ADDR(0x0001f786u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0xb0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F78C:
    /* 0001f78c   4  move.l (14,A5),D0 */
    c->pc = RC_ADDR(0x0001f78cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x14u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F790:
    /* 0001f790   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x0001f790u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1F792:
    /* 0001f792   2  asr.l D1,D0 */
    c->pc = RC_ADDR(0x0001f792u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_1F794:
    /* 0001f794   4  move.w D0,(ffffff52,A4) */
    c->pc = RC_ADDR(0x0001f794u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0xaeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F798:
    /* 0001f798   4  move.l (18,A5),D0 */
    c->pc = RC_ADDR(0x0001f798u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x18u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F79C:
    /* 0001f79c   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x0001f79cu);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1F79E:
    /* 0001f79e   2  asr.l D1,D0 */
    c->pc = RC_ADDR(0x0001f79eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_1F7A0:
    /* 0001f7a0   4  move.w D0,(ffffff54,A4) */
    c->pc = RC_ADDR(0x0001f7a0u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0xacu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F7A4:
    /* 0001f7a4   4  bra 0001f8ae */
    c->pc = RC_ADDR(0x0001f7a4u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0001f8aeu);
    return;

}
