/* fn_000225ee - 70 byte(s), 21 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000225ee(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000225eeu): goto L_225EE;
    case RC_ADDR(0x000225f2u): goto L_225F2;
    case RC_ADDR(0x000225f8u): goto L_225F8;
    case RC_ADDR(0x000225feu): goto L_225FE;
    case RC_ADDR(0x00022600u): goto L_22600;
    case RC_ADDR(0x00022604u): goto L_22604;
    case RC_ADDR(0x00022608u): goto L_22608;
    case RC_ADDR(0x0002260au): goto L_2260A;
    case RC_ADDR(0x0002260eu): goto L_2260E;
    case RC_ADDR(0x00022610u): goto L_22610;
    case RC_ADDR(0x00022614u): goto L_22614;
    case RC_ADDR(0x00022616u): goto L_22616;
    case RC_ADDR(0x00022618u): goto L_22618;
    case RC_ADDR(0x0002261cu): goto L_2261C;
    case RC_ADDR(0x00022620u): goto L_22620;
    case RC_ADDR(0x00022622u): goto L_22622;
    case RC_ADDR(0x00022626u): goto L_22626;
    case RC_ADDR(0x0002262au): goto L_2262A;
    case RC_ADDR(0x0002262cu): goto L_2262C;
    case RC_ADDR(0x00022630u): goto L_22630;
    case RC_ADDR(0x00022632u): goto L_22632;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_225EE:
    /* 000225ee   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000225eeu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_225F2:
    /* 000225f2   6  move.w #100,(3554,A4) */
    c->pc = RC_ADDR(0x000225f2u);
    rc_step(c, m, 16);
    t0 = 0x00000100u;
    rc_wr16(c, m, (c->a[4] + 0x3554u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_225F8:
    /* 000225f8   6  cmpi.w #c,(354a,A4) */
    c->pc = RC_ADDR(0x000225f8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x354au));
    rc_cmp(c, RC_W, t0, 0x0000000cu);

L_225FE:
    /* 000225fe   2  bge 00022630 */
    c->pc = RC_ADDR(0x000225feu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_22630;

L_22600:
    /* 00022600   4  addq.w #1,(354a,A4) */
    c->pc = RC_ADDR(0x00022600u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x354au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_22604:
    /* 00022604   4  move.w (354a,A4),D0 */
    c->pc = RC_ADDR(0x00022604u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x354au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_22608:
    /* 00022608   2  subq.w #8,D0 */
    c->pc = RC_ADDR(0x00022608u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000008u;
    rc_flags_sub(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_2260A:
    /* 0002260a   4  move.w D0,(354c,A4) */
    c->pc = RC_ADDR(0x0002260au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x354cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2260E:
    /* 0002260e   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0002260eu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_22610:
    /* 00022610   4  move.w (354a,A4),D1 */
    c->pc = RC_ADDR(0x00022610u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x354au));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_22614:
    /* 00022614   2  asl.w D1,D0 */
    c->pc = RC_ADDR(0x00022614u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_W), RC_W));

L_22616:
    /* 00022616   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x00022616u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_22618:
    /* 00022618   4  move.w D0,(354e,A4) */
    c->pc = RC_ADDR(0x00022618u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x354eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2261C:
    /* 0002261c   4  move.w (354e,A4),D0 */
    c->pc = RC_ADDR(0x0002261cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x354eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_22620:
    /* 00022620   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x00022620u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_22622:
    /* 00022622   4  move.w D0,(3552,A4) */
    c->pc = RC_ADDR(0x00022622u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x3552u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_22626:
    /* 00022626   4  move.w (354e,A4),D0 */
    c->pc = RC_ADDR(0x00022626u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x354eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2262A:
    /* 0002262a   2  subq.w #2,D0 */
    c->pc = RC_ADDR(0x0002262au);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_2262C:
    /* 0002262c   4  move.w D0,(3550,A4) */
    c->pc = RC_ADDR(0x0002262cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x3550u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_22630:
    /* 00022630   2  unlk A5 */
    c->pc = RC_ADDR(0x00022630u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_22632:
    /* 00022632   2  rts */
    c->pc = RC_ADDR(0x00022632u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
