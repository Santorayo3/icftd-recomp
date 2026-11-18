/* fn_000076c4 - 60 byte(s), 18 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000076c4(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000076c4u): goto L_76C4;
    case RC_ADDR(0x000076c8u): goto L_76C8;
    case RC_ADDR(0x000076ccu): goto L_76CC;
    case RC_ADDR(0x000076d0u): goto L_76D0;
    case RC_ADDR(0x000076d4u): goto L_76D4;
    case RC_ADDR(0x000076d6u): goto L_76D6;
    case RC_ADDR(0x000076d8u): goto L_76D8;
    case RC_ADDR(0x000076dcu): goto L_76DC;
    case RC_ADDR(0x000076e0u): goto L_76E0;
    case RC_ADDR(0x000076e4u): goto L_76E4;
    case RC_ADDR(0x000076e6u): goto L_76E6;
    case RC_ADDR(0x000076e8u): goto L_76E8;
    case RC_ADDR(0x000076ecu): goto L_76EC;
    case RC_ADDR(0x000076f0u): goto L_76F0;
    case RC_ADDR(0x000076f4u): goto L_76F4;
    case RC_ADDR(0x000076fau): goto L_76FA;
    case RC_ADDR(0x000076fcu): goto L_76FC;
    case RC_ADDR(0x000076feu): goto L_76FE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_76C4:
    /* 000076c4   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x000076c4u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_76C8:
    /* 000076c8   4  clr.w (a5c,A4) */
    c->pc = RC_ADDR(0x000076c8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xa5cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_76CC:
    /* 000076cc   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x000076ccu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_76D0:
    /* 000076d0   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000076d0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_76D4:
    /* 000076d4   2  ext.l D0 */
    c->pc = RC_ADDR(0x000076d4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_76D6:
    /* 000076d6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000076d6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_76D8:
    /* 000076d8   4  lea (a48,A4),A0 */
    c->pc = RC_ADDR(0x000076d8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xa48u);

L_76DC:
    /* 000076dc   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x000076dcu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_76E0:
    /* 000076e0   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000076e0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_76E4:
    /* 000076e4   2  ext.l D0 */
    c->pc = RC_ADDR(0x000076e4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_76E6:
    /* 000076e6   2  asl.l #3,D0 */
    c->pc = RC_ADDR(0x000076e6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000003u, rc_d_get(c, 0, RC_L), RC_L));

L_76E8:
    /* 000076e8   4  lea (9f8,A4),A0 */
    c->pc = RC_ADDR(0x000076e8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x9f8u);

L_76EC:
    /* 000076ec   4  clr.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x000076ecu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_76F0:
    /* 000076f0   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000076f0u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_76F4:
    /* 000076f4   6  cmpi.w #a,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000076f4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x0000000au);

L_76FA:
    /* 000076fa   2  blt 000076d0 */
    c->pc = RC_ADDR(0x000076fau);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_76D0; }

L_76FC:
    /* 000076fc   2  unlk A5 */
    c->pc = RC_ADDR(0x000076fcu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_76FE:
    /* 000076fe   2  rts */
    c->pc = RC_ADDR(0x000076feu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
