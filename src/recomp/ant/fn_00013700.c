/* fn_00013700 - 102 byte(s), 26 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00013700(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00013700u): goto L_13700;
    case RC_ADDR(0x00013704u): goto L_13704;
    case RC_ADDR(0x00013708u): goto L_13708;
    case RC_ADDR(0x0001370eu): goto L_1370E;
    case RC_ADDR(0x00013712u): goto L_13712;
    case RC_ADDR(0x00013716u): goto L_13716;
    case RC_ADDR(0x00013718u): goto L_13718;
    case RC_ADDR(0x0001371cu): goto L_1371C;
    case RC_ADDR(0x00013720u): goto L_13720;
    case RC_ADDR(0x00013726u): goto L_13726;
    case RC_ADDR(0x0001372au): goto L_1372A;
    case RC_ADDR(0x00013730u): goto L_13730;
    case RC_ADDR(0x00013734u): goto L_13734;
    case RC_ADDR(0x00013738u): goto L_13738;
    case RC_ADDR(0x0001373cu): goto L_1373C;
    case RC_ADDR(0x00013740u): goto L_13740;
    case RC_ADDR(0x00013744u): goto L_13744;
    case RC_ADDR(0x00013748u): goto L_13748;
    case RC_ADDR(0x0001374cu): goto L_1374C;
    case RC_ADDR(0x00013750u): goto L_13750;
    case RC_ADDR(0x00013754u): goto L_13754;
    case RC_ADDR(0x00013758u): goto L_13758;
    case RC_ADDR(0x0001375cu): goto L_1375C;
    case RC_ADDR(0x00013760u): goto L_13760;
    case RC_ADDR(0x00013762u): goto L_13762;
    case RC_ADDR(0x00013764u): goto L_13764;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_13700:
    /* 00013700   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00013700u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_13704:
    /* 00013704   4  move.l A4,(ffffd5ac,A4) */
    c->pc = RC_ADDR(0x00013704u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 4, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x2a54u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_13708:
    /* 00013708   6  pea (00010001).l */
    c->pc = RC_ADDR(0x00013708u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010001u);

L_1370E:
    /* 0001370e   4  pea (00000016).l */
    c->pc = RC_ADDR(0x0001370eu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000016u);

L_13712:
    /* 00013712   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x00013712u);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x00013716u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_13716:
    /* 00013716   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00013716u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_13718:
    /* 00013718   4  move.l D0,(17fa,A4) */
    c->pc = RC_ADDR(0x00013718u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x17fau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1371C:
    /* 0001371c   4  movea.l (17fa,A4),A0 */
    c->pc = RC_ADDR(0x0001371cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x17fau));
    c->a[0] = t0;

L_13720:
    /* 00013720   6  move.b #2,(8,A0) */
    c->pc = RC_ADDR(0x00013720u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr8(c, m, (c->a[0] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_13726:
    /* 00013726   4  movea.l (17fa,A4),A0 */
    c->pc = RC_ADDR(0x00013726u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x17fau));
    c->a[0] = t0;

L_1372A:
    /* 0001372a   6  move.b #c4,(9,A0) */
    c->pc = RC_ADDR(0x0001372au);
    rc_step(c, m, 16);
    t0 = 0x000000c4u;
    rc_wr8(c, m, (c->a[0] + 0x9u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_13730:
    /* 00013730   4  movea.l (17fa,A4),A0 */
    c->pc = RC_ADDR(0x00013730u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x17fau));
    c->a[0] = t0;

L_13734:
    /* 00013734   4  lea (00013766),A1 */
    c->pc = RC_ADDR(0x00013734u);
    rc_step(c, m, 8);
    c->a[1] = RC_ADDR(0x00013766u);

L_13738:
    /* 00013738   4  move.l A1,(a,A0) */
    c->pc = RC_ADDR(0x00013738u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[0] + 0xau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1373C:
    /* 0001373c   4  lea (ffffd5ac,A4),A0 */
    c->pc = RC_ADDR(0x0001373cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x2a54u);

L_13740:
    /* 00013740   4  movea.l (17fa,A4),A1 */
    c->pc = RC_ADDR(0x00013740u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x17fau));
    c->a[1] = t0;

L_13744:
    /* 00013744   4  move.l A0,(e,A1) */
    c->pc = RC_ADDR(0x00013744u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[1] + 0xeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_13748:
    /* 00013748   4  lea (000136e8),A0 */
    c->pc = RC_ADDR(0x00013748u);
    rc_step(c, m, 8);
    c->a[0] = RC_ADDR(0x000136e8u);

L_1374C:
    /* 0001374c   4  movea.l (17fa,A4),A1 */
    c->pc = RC_ADDR(0x0001374cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x17fau));
    c->a[1] = t0;

L_13750:
    /* 00013750   4  move.l A0,(12,A1) */
    c->pc = RC_ADDR(0x00013750u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[1] + 0x12u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_13754:
    /* 00013754   4  move.l (17fa,A4),-(A7) */
    c->pc = RC_ADDR(0x00013754u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x17fau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_13758:
    /* 00013758   4  pea (00000005).l */
    c->pc = RC_ADDR(0x00013758u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000005u);

L_1375C:
    /* 0001375c   4  jsr (ffff8350,A4) */
    c->pc = RC_ADDR(0x0001375cu);
    rc_step(c, m, 18);
    /* vector 141 */
    rc_push32(c, m, RC_ADDR(0x00013760u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e46u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002355au);
    return;

L_13760:
    /* 00013760   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00013760u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_13762:
    /* 00013762   2  unlk A5 */
    c->pc = RC_ADDR(0x00013762u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_13764:
    /* 00013764   2  rts */
    c->pc = RC_ADDR(0x00013764u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
