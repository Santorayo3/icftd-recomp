/* fn_000176ec - 106 byte(s), 28 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000176ec(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000176ecu): goto L_176EC;
    case RC_ADDR(0x000176eeu): goto L_176EE;
    case RC_ADDR(0x000176f0u): goto L_176F0;
    case RC_ADDR(0x000176f4u): goto L_176F4;
    case RC_ADDR(0x000176f8u): goto L_176F8;
    case RC_ADDR(0x000176fau): goto L_176FA;
    case RC_ADDR(0x000176feu): goto L_176FE;
    case RC_ADDR(0x00017700u): goto L_17700;
    case RC_ADDR(0x00017704u): goto L_17704;
    case RC_ADDR(0x00017706u): goto L_17706;
    case RC_ADDR(0x0001770cu): goto L_1770C;
    case RC_ADDR(0x0001770eu): goto L_1770E;
    case RC_ADDR(0x00017714u): goto L_17714;
    case RC_ADDR(0x0001771au): goto L_1771A;
    case RC_ADDR(0x00017720u): goto L_17720;
    case RC_ADDR(0x00017722u): goto L_17722;
    case RC_ADDR(0x00017726u): goto L_17726;
    case RC_ADDR(0x0001772au): goto L_1772A;
    case RC_ADDR(0x00017730u): goto L_17730;
    case RC_ADDR(0x00017734u): goto L_17734;
    case RC_ADDR(0x0001773au): goto L_1773A;
    case RC_ADDR(0x0001773cu): goto L_1773C;
    case RC_ADDR(0x00017742u): goto L_17742;
    case RC_ADDR(0x00017744u): goto L_17744;
    case RC_ADDR(0x0001774au): goto L_1774A;
    case RC_ADDR(0x0001774eu): goto L_1774E;
    case RC_ADDR(0x00017752u): goto L_17752;
    case RC_ADDR(0x00017754u): goto L_17754;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_176EC:
    /* 000176ec   2  bsr 000176c4 */
    c->pc = RC_ADDR(0x000176ecu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000176eeu));
    rc_depth++;
    c->pc = RC_ADDR(0x000176c4u);
    return;

L_176EE:
    /* 000176ee   2  beq 00017752 */
    c->pc = RC_ADDR(0x000176eeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_17752;

L_176F0:
    /* 000176f0   4  andi.b #7f,D0 */
    c->pc = RC_ADDR(0x000176f0u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_B);
    t2 = t1 & 0x0000007fu;
    rc_d_set(c, 0, RC_B, t2);
    rc_set_nzvc(c, t2, RC_B);

L_176F4:
    /* 000176f4   4  cmpi.b #4,D0 */
    c->pc = RC_ADDR(0x000176f4u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000004u);

L_176F8:
    /* 000176f8   2  beq 00017722 */
    c->pc = RC_ADDR(0x000176f8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_17722;

L_176FA:
    /* 000176fa   4  cmpi.b #2,D0 */
    c->pc = RC_ADDR(0x000176fau);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000002u);

L_176FE:
    /* 000176fe   2  bgt 00017752 */
    c->pc = RC_ADDR(0x000176feu);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_17752;

L_17700:
    /* 00017700   4  cmpi.b #1,D0 */
    c->pc = RC_ADDR(0x00017700u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000001u);

L_17704:
    /* 00017704   2  beq 00017722 */
    c->pc = RC_ADDR(0x00017704u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_17722;

L_17706:
    /* 00017706   6  cmpi.w #2,(14f2,A4) */
    c->pc = RC_ADDR(0x00017706u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x14f2u));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_1770C:
    /* 0001770c   2  bgt 00017752 */
    c->pc = RC_ADDR(0x0001770cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_17752;

L_1770E:
    /* 0001770e   6  move.w #1,(14f2,A4) */
    c->pc = RC_ADDR(0x0001770eu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x14f2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17714:
    /* 00017714   6  move.w #1,(fffffa2e,A4) */
    c->pc = RC_ADDR(0x00017714u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x5d2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1771A:
    /* 0001771a   6  move.w #1,(fffffa30,A4) */
    c->pc = RC_ADDR(0x0001771au);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x5d0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17720:
    /* 00017720   2  bra 00017752 */
    c->pc = RC_ADDR(0x00017720u);
    rc_step(c, m, 10);
    goto L_17752;

L_17722:
    /* 00017722   4  sub.w D2,(6fc,A4) */
    c->pc = RC_ADDR(0x00017722u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x6fcu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 2, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 2, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_17726:
    /* 00017726   4  sub.w D3,(6fe,A4) */
    c->pc = RC_ADDR(0x00017726u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x6feu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 3, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 3, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1772A:
    /* 0001772a   6  move.w #1,(14f2,A4) */
    c->pc = RC_ADDR(0x0001772au);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x14f2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17730:
    /* 00017730   4  move.w #1,D0 */
    c->pc = RC_ADDR(0x00017730u);
    rc_step(c, m, 8);
    t0 = 0x00000001u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17734:
    /* 00017734   6  cmpi.w #2,(fffffa2e,A4) */
    c->pc = RC_ADDR(0x00017734u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5d2u));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_1773A:
    /* 0001773a   2  bge 00017744 */
    c->pc = RC_ADDR(0x0001773au);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_17744;

L_1773C:
    /* 0001773c   6  cmpi.w #3,(fffffa30,A4) */
    c->pc = RC_ADDR(0x0001773cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5d0u));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_17742:
    /* 00017742   2  blt 0001774a */
    c->pc = RC_ADDR(0x00017742u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1774A;

L_17744:
    /* 00017744   6  move.w #1,(1adc,A4) */
    c->pc = RC_ADDR(0x00017744u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1adcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1774A:
    /* 0001774a   4  clr.w (fffffa2e,A4) */
    c->pc = RC_ADDR(0x0001774au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x5d2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1774E:
    /* 0001774e   4  clr.w (fffffa30,A4) */
    c->pc = RC_ADDR(0x0001774eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x5d0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17752:
    /* 00017752   2  clr.w D0 */
    c->pc = RC_ADDR(0x00017752u);
    rc_step(c, m, 4);
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17754:
    /* 00017754   2  rts */
    c->pc = RC_ADDR(0x00017754u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
