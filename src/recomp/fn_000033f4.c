/* fn_000033f4 - 98 byte(s), 25 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000033f4(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000033f4u): goto L_33F4;
    case RC_ADDR(0x000033f8u): goto L_33F8;
    case RC_ADDR(0x000033feu): goto L_33FE;
    case RC_ADDR(0x00003400u): goto L_3400;
    case RC_ADDR(0x00003406u): goto L_3406;
    case RC_ADDR(0x00003408u): goto L_3408;
    case RC_ADDR(0x0000340cu): goto L_340C;
    case RC_ADDR(0x00003410u): goto L_3410;
    case RC_ADDR(0x00003412u): goto L_3412;
    case RC_ADDR(0x00003414u): goto L_3414;
    case RC_ADDR(0x00003418u): goto L_3418;
    case RC_ADDR(0x0000341cu): goto L_341C;
    case RC_ADDR(0x0000341eu): goto L_341E;
    case RC_ADDR(0x00003420u): goto L_3420;
    case RC_ADDR(0x00003424u): goto L_3424;
    case RC_ADDR(0x0000342au): goto L_342A;
    case RC_ADDR(0x0000342eu): goto L_342E;
    case RC_ADDR(0x00003434u): goto L_3434;
    case RC_ADDR(0x00003436u): goto L_3436;
    case RC_ADDR(0x0000343cu): goto L_343C;
    case RC_ADDR(0x00003442u): goto L_3442;
    case RC_ADDR(0x00003448u): goto L_3448;
    case RC_ADDR(0x0000344eu): goto L_344E;
    case RC_ADDR(0x00003452u): goto L_3452;
    case RC_ADDR(0x00003454u): goto L_3454;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_33F4:
    /* 000033f4   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x000033f4u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_33F8:
    /* 000033f8   6  cmpi.b #32,(fffff0ba,A4) */
    c->pc = RC_ADDR(0x000033f8u);
    rc_step(c, m);
    t0 = rc_rd8(c, m, (c->a[4] - 0xf46u));
    rc_cmp(c, RC_B, t0, 0x00000032u);

L_33FE:
    /* 000033fe   2  bge 00003452 */
    c->pc = RC_ADDR(0x000033feu);
    rc_step(c, m);
    if (rc_cond(c, 12)) goto L_3452;

L_3400:
    /* 00003400   6  cmpi.w #1,(ffff83dc,A4) */
    c->pc = RC_ADDR(0x00003400u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c24u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_3406:
    /* 00003406   2  bne 00003452 */
    c->pc = RC_ADDR(0x00003406u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_3452;

L_3408:
    /* 00003408   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00003408u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_340C:
    /* 0000340c   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0000340cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3410:
    /* 00003410   2  ext.l D0 */
    c->pc = RC_ADDR(0x00003410u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_3412:
    /* 00003412   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00003412u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_3414:
    /* 00003414   4  lea (fffffece,A4),A0 */
    c->pc = RC_ADDR(0x00003414u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x132u);

L_3418:
    /* 00003418   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x00003418u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_341C:
    /* 0000341c   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000341cu);
    rc_step(c, m);
    rc_ext_l(c, 1);

L_341E:
    /* 0000341e   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0000341eu);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_3420:
    /* 00003420   4  lea (ffffff0e,A4),A1 */
    c->pc = RC_ADDR(0x00003420u);
    rc_step(c, m);
    c->a[1] = (c->a[4] - 0xf2u);

L_3424:
    /* 00003424   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x00003424u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_342A:
    /* 0000342a   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000342au);
    rc_step(c, m);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_342E:
    /* 0000342e   6  cmpi.w #20,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000342eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000020u);

L_3434:
    /* 00003434   2  blt 0000340c */
    c->pc = RC_ADDR(0x00003434u);
    rc_step(c, m);
    if (rc_cond(c, 13)) { rc_tick(); goto L_340C; }

L_3436:
    /* 00003436   6  move.w #1,(ffffff4e,A4) */
    c->pc = RC_ADDR(0x00003436u);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0xb2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_343C:
    /* 0000343c   6  move.w #1,(ffffff50,A4) */
    c->pc = RC_ADDR(0x0000343cu);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0xb0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3442:
    /* 00003442   6  move.w #14,(ffffff52,A4) */
    c->pc = RC_ADDR(0x00003442u);
    rc_step(c, m);
    t0 = 0x00000014u;
    rc_wr16(c, m, (c->a[4] - 0xaeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3448:
    /* 00003448   6  move.w #1,(ffffff54,A4) */
    c->pc = RC_ADDR(0x00003448u);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0xacu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_344E:
    /* 0000344e   4  clr.w (ffff83dc,A4) */
    c->pc = RC_ADDR(0x0000344eu);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0x7c24u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3452:
    /* 00003452   2  unlk A5 */
    c->pc = RC_ADDR(0x00003452u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_3454:
    /* 00003454   2  rts */
    c->pc = RC_ADDR(0x00003454u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
