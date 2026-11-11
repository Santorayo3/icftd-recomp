/* fn_00011626 - 192 byte(s), 49 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00011626(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00011626u): goto L_11626;
    case RC_ADDR(0x0001162au): goto L_1162A;
    case RC_ADDR(0x0001162eu): goto L_1162E;
    case RC_ADDR(0x00011632u): goto L_11632;
    case RC_ADDR(0x00011634u): goto L_11634;
    case RC_ADDR(0x00011636u): goto L_11636;
    case RC_ADDR(0x00011638u): goto L_11638;
    case RC_ADDR(0x0001163eu): goto L_1163E;
    case RC_ADDR(0x00011644u): goto L_11644;
    case RC_ADDR(0x0001164cu): goto L_1164C;
    case RC_ADDR(0x00011654u): goto L_11654;
    case RC_ADDR(0x00011658u): goto L_11658;
    case RC_ADDR(0x0001165au): goto L_1165A;
    case RC_ADDR(0x0001165cu): goto L_1165C;
    case RC_ADDR(0x0001165eu): goto L_1165E;
    case RC_ADDR(0x00011662u): goto L_11662;
    case RC_ADDR(0x00011666u): goto L_11666;
    case RC_ADDR(0x00011668u): goto L_11668;
    case RC_ADDR(0x0001166cu): goto L_1166C;
    case RC_ADDR(0x0001166eu): goto L_1166E;
    case RC_ADDR(0x00011670u): goto L_11670;
    case RC_ADDR(0x00011672u): goto L_11672;
    case RC_ADDR(0x00011676u): goto L_11676;
    case RC_ADDR(0x0001167au): goto L_1167A;
    case RC_ADDR(0x0001167cu): goto L_1167C;
    case RC_ADDR(0x00011684u): goto L_11684;
    case RC_ADDR(0x0001168cu): goto L_1168C;
    case RC_ADDR(0x0001168eu): goto L_1168E;
    case RC_ADDR(0x00011690u): goto L_11690;
    case RC_ADDR(0x00011696u): goto L_11696;
    case RC_ADDR(0x0001169au): goto L_1169A;
    case RC_ADDR(0x0001169cu): goto L_1169C;
    case RC_ADDR(0x000116a0u): goto L_116A0;
    case RC_ADDR(0x000116a4u): goto L_116A4;
    case RC_ADDR(0x000116a6u): goto L_116A6;
    case RC_ADDR(0x000116a8u): goto L_116A8;
    case RC_ADDR(0x000116acu): goto L_116AC;
    case RC_ADDR(0x000116b2u): goto L_116B2;
    case RC_ADDR(0x000116b8u): goto L_116B8;
    case RC_ADDR(0x000116beu): goto L_116BE;
    case RC_ADDR(0x000116c0u): goto L_116C0;
    case RC_ADDR(0x000116c2u): goto L_116C2;
    case RC_ADDR(0x000116c8u): goto L_116C8;
    case RC_ADDR(0x000116ceu): goto L_116CE;
    case RC_ADDR(0x000116d4u): goto L_116D4;
    case RC_ADDR(0x000116dcu): goto L_116DC;
    case RC_ADDR(0x000116deu): goto L_116DE;
    case RC_ADDR(0x000116e2u): goto L_116E2;
    case RC_ADDR(0x000116e4u): goto L_116E4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_11626:
    /* 00011626   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00011626u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1162A:
    /* 0001162a   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x0001162au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_1162E:
    /* 0001162e   4  move.w #28,D0 */
    c->pc = RC_ADDR(0x0001162eu);
    rc_step(c, m, 8);
    t0 = 0x00000028u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11632:
    /* 00011632   2  move.w (A0),D1 */
    c->pc = RC_ADDR(0x00011632u);
    rc_step(c, m, 8);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11634:
    /* 00011634   2  addq.w #2,D1 */
    c->pc = RC_ADDR(0x00011634u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_11636:
    /* 00011636   2  sub.w D1,D0 */
    c->pc = RC_ADDR(0x00011636u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_11638:
    /* 00011638   6  move.w D0,(00dff066).l */
    c->pc = RC_ADDR(0x00011638u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, 0x00dff066u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1163E:
    /* 0001163e   6  move.w D0,(00dff060).l */
    c->pc = RC_ADDR(0x0001163eu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, 0x00dff060u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11644:
    /* 00011644   8  move.w #ffff,(00dff062).l */
    c->pc = RC_ADDR(0x00011644u);
    rc_step(c, m, 20);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, 0x00dff062u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1164C:
    /* 0001164c   8  move.w #ffff,(00dff064).l */
    c->pc = RC_ADDR(0x0001164cu);
    rc_step(c, m, 20);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, 0x00dff064u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11654:
    /* 00011654   4  move.w (2,A0),D2 */
    c->pc = RC_ADDR(0x00011654u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11658:
    /* 00011658   2  lsl.w #6,D2 */
    c->pc = RC_ADDR(0x00011658u);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 1, 0x00000006u, rc_d_get(c, 2, RC_W), RC_W));

L_1165A:
    /* 0001165a   2  lsr.w #1,D1 */
    c->pc = RC_ADDR(0x0001165au);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_1165C:
    /* 0001165c   2  or.w D1,D2 */
    c->pc = RC_ADDR(0x0001165cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t2 = t0 | rc_d_get(c, 2, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 2, RC_W, t2);

L_1165E:
    /* 0001165e   4  movea.l (24,A0),A3 */
    c->pc = RC_ADDR(0x0001165eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0x24u));
    c->a[3] = t0;

L_11662:
    /* 00011662   4  lea (fffff326,A4),A1 */
    c->pc = RC_ADDR(0x00011662u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0xcdau);

L_11666:
    /* 00011666   2  clr.l D1 */
    c->pc = RC_ADDR(0x00011666u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_11668:
    /* 00011668   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00011668u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1166C:
    /* 0001166c   2  move.w D0,D3 */
    c->pc = RC_ADDR(0x0001166cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1166E:
    /* 0001166e   2  lsr.w #4,D0 */
    c->pc = RC_ADDR(0x0001166eu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W));

L_11670:
    /* 00011670   2  lsl.w #1,D0 */
    c->pc = RC_ADDR(0x00011670u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_11672:
    /* 00011672   4  move.w (a,A5),D1 */
    c->pc = RC_ADDR(0x00011672u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11676:
    /* 00011676   4  mulu.w #28,D1 */
    c->pc = RC_ADDR(0x00011676u);
    rc_step(c, m, 42);
    t0 = 0x00000028u;
    rc_mulu(c, 1, t0);

L_1167A:
    /* 0001167a   2  add.w D0,D1 */
    c->pc = RC_ADDR(0x0001167au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1167C:
    /* 0001167c   8  move.w #ffff,(00dff044).l */
    c->pc = RC_ADDR(0x0001167cu);
    rc_step(c, m, 20);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, 0x00dff044u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11684:
    /* 00011684   8  move.w #0,(00dff046).l */
    c->pc = RC_ADDR(0x00011684u);
    rc_step(c, m, 20);
    t0 = 0x00000000u;
    rc_wr16(c, m, 0x00dff046u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1168C:
    /* 0001168c   2  asl.w #6,D3 */
    c->pc = RC_ADDR(0x0001168cu);
    rc_step(c, m, 6);
    rc_d_set(c, 3, RC_W, rc_shift(c, 0, 1, 0x00000006u, rc_d_get(c, 3, RC_W), RC_W));

L_1168E:
    /* 0001168e   2  asl.w #6,D3 */
    c->pc = RC_ADDR(0x0001168eu);
    rc_step(c, m, 6);
    rc_d_set(c, 3, RC_W, rc_shift(c, 0, 1, 0x00000006u, rc_d_get(c, 3, RC_W), RC_W));

L_11690:
    /* 00011690   6  move.w D3,(00dff042).l */
    c->pc = RC_ADDR(0x00011690u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 3, RC_W);
    rc_wr16(c, m, 0x00dff042u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11696:
    /* 00011696   4  move.w (10,A5),D4 */
    c->pc = RC_ADDR(0x00011696u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1169A:
    /* 0001169a   2  moveq #4,D0 */
    c->pc = RC_ADDR(0x0001169au);
    rc_step(c, m, 4);
    c->d[0] = 0x00000004u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1169C:
    /* 0001169c   4  ori.w #b0a,D3 */
    c->pc = RC_ADDR(0x0001169cu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 | 0x00000b0au;
    rc_d_set(c, 3, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_116A0:
    /* 000116a0   4  and.w #fb0a,D3 */
    c->pc = RC_ADDR(0x000116a0u);
    rc_step(c, m, 10);
    t0 = 0x0000fb0au;
    t2 = t0 & rc_d_get(c, 3, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 3, RC_W, t2);

L_116A4:
    /* 000116a4   2  lsr.w #1,D4 */
    c->pc = RC_ADDR(0x000116a4u);
    rc_step(c, m, 6);
    rc_d_set(c, 4, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 4, RC_W), RC_W));

L_116A6:
    /* 000116a6   2  bcc 000116ac */
    c->pc = RC_ADDR(0x000116a6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_116AC;

L_116A8:
    /* 000116a8   4  ori.w #fca,D3 */
    c->pc = RC_ADDR(0x000116a8u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 | 0x00000fcau;
    rc_d_set(c, 3, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_116AC:
    /* 000116ac   6  move.w D3,(00dff040).l */
    c->pc = RC_ADDR(0x000116acu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 3, RC_W);
    rc_wr16(c, m, 0x00dff040u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_116B2:
    /* 000116b2   6  move.l A3,(00dff050).l */
    c->pc = RC_ADDR(0x000116b2u);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 3, RC_L);
    rc_wr32(c, m, 0x00dff050u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_116B8:
    /* 000116b8   6  move.l A3,(00dff04c).l */
    c->pc = RC_ADDR(0x000116b8u);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 3, RC_L);
    rc_wr32(c, m, 0x00dff04cu, t0);
    rc_set_nzvc(c, t0, RC_L);

L_116BE:
    /* 000116be   2  movea.l (A1)+,A2 */
    c->pc = RC_ADDR(0x000116beu);
    rc_step(c, m, 12);
    t3 = c->a[1];
    c->a[1] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_116C0:
    /* 000116c0   2  adda.l D1,A2 */
    c->pc = RC_ADDR(0x000116c0u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[2] += t0;

L_116C2:
    /* 000116c2   6  move.l A2,(00dff048).l */
    c->pc = RC_ADDR(0x000116c2u);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff048u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_116C8:
    /* 000116c8   6  move.l A2,(00dff054).l */
    c->pc = RC_ADDR(0x000116c8u);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff054u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_116CE:
    /* 000116ce   6  move.w D2,(00dff058).l */
    c->pc = RC_ADDR(0x000116ceu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, 0x00dff058u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_116D4:
    /* 000116d4   8  btst #6,(00dff002).l */
    c->pc = RC_ADDR(0x000116d4u);
    rc_step(c, m, 20);
    t3 = 0x00dff002u;
    t4 = 0x00000006u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_116DC:
    /* 000116dc   2  bne 000116d4 */
    c->pc = RC_ADDR(0x000116dcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_116D4; }

L_116DE:
    /* 000116de   4  dbf D0,000116a0 */
    c->pc = RC_ADDR(0x000116deu);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_116A0; }
    }

L_116E2:
    /* 000116e2   2  unlk A5 */
    c->pc = RC_ADDR(0x000116e2u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_116E4:
    /* 000116e4   2  rts */
    c->pc = RC_ADDR(0x000116e4u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
