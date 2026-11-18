/* fn_000212f2 - 46 byte(s), 17 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000212f2(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x000212f2u): goto L_212F2;
    case RC_ADDR(0x000212f4u): goto L_212F4;
    case RC_ADDR(0x000212f6u): goto L_212F6;
    case RC_ADDR(0x000212f8u): goto L_212F8;
    case RC_ADDR(0x000212fcu): goto L_212FC;
    case RC_ADDR(0x00021300u): goto L_21300;
    case RC_ADDR(0x00021302u): goto L_21302;
    case RC_ADDR(0x00021304u): goto L_21304;
    case RC_ADDR(0x00021306u): goto L_21306;
    case RC_ADDR(0x00021308u): goto L_21308;
    case RC_ADDR(0x0002130cu): goto L_2130C;
    case RC_ADDR(0x00021310u): goto L_21310;
    case RC_ADDR(0x00021312u): goto L_21312;
    case RC_ADDR(0x00021316u): goto L_21316;
    case RC_ADDR(0x00021318u): goto L_21318;
    case RC_ADDR(0x0002131cu): goto L_2131C;
    case RC_ADDR(0x0002131eu): goto L_2131E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_212F2:
    /* 000212f2   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x000212f2u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_212F4:
    /* 000212f4   2  bsr 00021282 */
    c->pc = RC_ADDR(0x000212f4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000212f6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021282u);
    return;

L_212F6:
    /* 000212f6   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000212f6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_212F8:
    /* 000212f8   4  move.l (4,A2),-(A7) */
    c->pc = RC_ADDR(0x000212f8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[2] + 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_212FC:
    /* 000212fc   4  jsr (ffff82d2,A4) */
    c->pc = RC_ADDR(0x000212fcu);
    rc_step(c, m, 18);
    /* vector 120 */
    rc_push32(c, m, RC_ADDR(0x00021300u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dc8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000228c2u);
    return;

L_21300:
    /* 00021300   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00021300u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_21302:
    /* 00021302   2  ext.l D0 */
    c->pc = RC_ADDR(0x00021302u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_21304:
    /* 00021304   2  addq.l #1,D0 */
    c->pc = RC_ADDR(0x00021304u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_21306:
    /* 00021306   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00021306u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21308:
    /* 00021308   4  move.l (4,A2),-(A7) */
    c->pc = RC_ADDR(0x00021308u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[2] + 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2130C:
    /* 0002130c   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0002130cu);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x00021310u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_21310:
    /* 00021310   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00021310u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_21312:
    /* 00021312   4  pea (00000026).l */
    c->pc = RC_ADDR(0x00021312u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000026u);

L_21316:
    /* 00021316   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x00021316u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21318:
    /* 00021318   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x00021318u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0002131cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_2131C:
    /* 0002131c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0002131cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_2131E:
    /* 0002131e   2  bra 000212ec */
    c->pc = RC_ADDR(0x0002131eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000212ecu);
    return;

}
