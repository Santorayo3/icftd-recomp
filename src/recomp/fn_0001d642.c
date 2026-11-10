/* fn_0001d642 - 138 byte(s), 45 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001d642(cpu_t *c, rt_machine *m)
{
    u32 t0, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001d642u): goto L_1D642;
    case RC_ADDR(0x0001d646u): goto L_1D646;
    case RC_ADDR(0x0001d648u): goto L_1D648;
    case RC_ADDR(0x0001d64cu): goto L_1D64C;
    case RC_ADDR(0x0001d650u): goto L_1D650;
    case RC_ADDR(0x0001d654u): goto L_1D654;
    case RC_ADDR(0x0001d656u): goto L_1D656;
    case RC_ADDR(0x0001d658u): goto L_1D658;
    case RC_ADDR(0x0001d65au): goto L_1D65A;
    case RC_ADDR(0x0001d65cu): goto L_1D65C;
    case RC_ADDR(0x0001d65eu): goto L_1D65E;
    case RC_ADDR(0x0001d660u): goto L_1D660;
    case RC_ADDR(0x0001d664u): goto L_1D664;
    case RC_ADDR(0x0001d666u): goto L_1D666;
    case RC_ADDR(0x0001d668u): goto L_1D668;
    case RC_ADDR(0x0001d66au): goto L_1D66A;
    case RC_ADDR(0x0001d670u): goto L_1D670;
    case RC_ADDR(0x0001d674u): goto L_1D674;
    case RC_ADDR(0x0001d678u): goto L_1D678;
    case RC_ADDR(0x0001d67au): goto L_1D67A;
    case RC_ADDR(0x0001d67eu): goto L_1D67E;
    case RC_ADDR(0x0001d682u): goto L_1D682;
    case RC_ADDR(0x0001d684u): goto L_1D684;
    case RC_ADDR(0x0001d686u): goto L_1D686;
    case RC_ADDR(0x0001d688u): goto L_1D688;
    case RC_ADDR(0x0001d68cu): goto L_1D68C;
    case RC_ADDR(0x0001d690u): goto L_1D690;
    case RC_ADDR(0x0001d694u): goto L_1D694;
    case RC_ADDR(0x0001d696u): goto L_1D696;
    case RC_ADDR(0x0001d69au): goto L_1D69A;
    case RC_ADDR(0x0001d69eu): goto L_1D69E;
    case RC_ADDR(0x0001d6a0u): goto L_1D6A0;
    case RC_ADDR(0x0001d6a4u): goto L_1D6A4;
    case RC_ADDR(0x0001d6a6u): goto L_1D6A6;
    case RC_ADDR(0x0001d6a8u): goto L_1D6A8;
    case RC_ADDR(0x0001d6aau): goto L_1D6AA;
    case RC_ADDR(0x0001d6acu): goto L_1D6AC;
    case RC_ADDR(0x0001d6b2u): goto L_1D6B2;
    case RC_ADDR(0x0001d6b8u): goto L_1D6B8;
    case RC_ADDR(0x0001d6bau): goto L_1D6BA;
    case RC_ADDR(0x0001d6bcu): goto L_1D6BC;
    case RC_ADDR(0x0001d6c0u): goto L_1D6C0;
    case RC_ADDR(0x0001d6c2u): goto L_1D6C2;
    case RC_ADDR(0x0001d6c8u): goto L_1D6C8;
    case RC_ADDR(0x0001d6cau): goto L_1D6CA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1D642:
    /* 0001d642   4  link.w A5,#fffffff6 */
    c->pc = RC_ADDR(0x0001d642u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xau;

L_1D646:
    /* 0001d646   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x0001d646u);
    rc_step(c, m);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D648:
    /* 0001d648   4  movea.l (8,A5),A2 */
    c->pc = RC_ADDR(0x0001d648u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[2] = t0;

L_1D64C:
    /* 0001d64c   4  clr.l (fffffff8,A5) */
    c->pc = RC_ADDR(0x0001d64cu);
    rc_step(c, m);
    rc_wr32(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1D650:
    /* 0001d650   4  clr.w (ffffcb1c,A4) */
    c->pc = RC_ADDR(0x0001d650u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0x34e4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D654:
    /* 0001d654   2  move.l A2,D0 */
    c->pc = RC_ADDR(0x0001d654u);
    rc_step(c, m);
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D656:
    /* 0001d656   2  bne 0001d660 */
    c->pc = RC_ADDR(0x0001d656u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_1D660;

L_1D658:
    /* 0001d658   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001d658u);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1D65A:
    /* 0001d65a   2  movea.l (A7)+,A2 */
    c->pc = RC_ADDR(0x0001d65au);
    rc_step(c, m);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_1D65C:
    /* 0001d65c   2  unlk A5 */
    c->pc = RC_ADDR(0x0001d65cu);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1D65E:
    /* 0001d65e   2  rts */
    c->pc = RC_ADDR(0x0001d65eu);
    rc_step(c, m);
    rc_ret(c, m);
    return;

L_1D660:
    /* 0001d660   4  tst.l (c,A2) */
    c->pc = RC_ADDR(0x0001d660u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[2] + 0xcu));
    rc_set_nzvc(c, t0, RC_L);

L_1D664:
    /* 0001d664   2  beq 0001d66a */
    c->pc = RC_ADDR(0x0001d664u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1D66A;

L_1D666:
    /* 0001d666   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0001d666u);
    rc_step(c, m);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1D668:
    /* 0001d668   2  bra 0001d65a */
    c->pc = RC_ADDR(0x0001d668u);
    rc_step(c, m);
    rc_tick();
    goto L_1D65A;

L_1D66A:
    /* 0001d66a   6  pea (00010000).l */
    c->pc = RC_ADDR(0x0001d66au);
    rc_step(c, m);
    rc_push32(c, m, 0x00010000u);

L_1D670:
    /* 0001d670   4  pea (0000003c).l */
    c->pc = RC_ADDR(0x0001d670u);
    rc_step(c, m);
    rc_push32(c, m, 0x0000003cu);

L_1D674:
    /* 0001d674   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x0001d674u);
    rc_step(c, m);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x0001d678u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d8eu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002168cu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021690u);
    return;

L_1D678:
    /* 0001d678   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001d678u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1D67A:
    /* 0001d67a   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001d67au);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D67E:
    /* 0001d67e   4  tst.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001d67eu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_L);

L_1D682:
    /* 0001d682   2  bne 0001d688 */
    c->pc = RC_ADDR(0x0001d682u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_1D688;

L_1D684:
    /* 0001d684   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001d684u);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1D686:
    /* 0001d686   2  bra 0001d65a */
    c->pc = RC_ADDR(0x0001d686u);
    rc_step(c, m);
    rc_tick();
    goto L_1D65A;

L_1D688:
    /* 0001d688   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0001d688u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D68C:
    /* 0001d68c   4  move.l (4,A2),-(A7) */
    c->pc = RC_ADDR(0x0001d68cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[2] + 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D690:
    /* 0001d690   4  jsr (00020064) */
    c->pc = RC_ADDR(0x0001d690u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001d694u));
    rc_depth++;
    c->pc = RC_ADDR(0x00020064u);
    return;

L_1D694:
    /* 0001d694   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001d694u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1D696:
    /* 0001d696   4  move.w D0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x0001d696u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D69A:
    /* 0001d69a   4  tst.w (fffffff6,A5) */
    c->pc = RC_ADDR(0x0001d69au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_set_nzvc(c, t0, RC_W);

L_1D69E:
    /* 0001d69e   2  bne 0001d6ac */
    c->pc = RC_ADDR(0x0001d69eu);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_1D6AC;

L_1D6A0:
    /* 0001d6a0   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0001d6a0u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D6A4:
    /* 0001d6a4   2  bsr 0001d6cc */
    c->pc = RC_ADDR(0x0001d6a4u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001d6a6u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d6ccu);
    return;

L_1D6A6:
    /* 0001d6a6   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001d6a6u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1D6A8:
    /* 0001d6a8   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001d6a8u);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1D6AA:
    /* 0001d6aa   2  bra 0001d65a */
    c->pc = RC_ADDR(0x0001d6aau);
    rc_step(c, m);
    rc_tick();
    goto L_1D65A;

L_1D6AC:
    /* 0001d6ac   6  move.l (fffffffc,A5),(c,A2) */
    c->pc = RC_ADDR(0x0001d6acu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_wr32(c, m, (c->a[2] + 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D6B2:
    /* 0001d6b2   6  btst #2,(b,A2) */
    c->pc = RC_ADDR(0x0001d6b2u);
    rc_step(c, m);
    t4 = 0x00000002u;
    t3 = (c->a[2] + 0xbu);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_1D6B8:
    /* 0001d6b8   2  bne 0001d6c2 */
    c->pc = RC_ADDR(0x0001d6b8u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_1D6C2;

L_1D6BA:
    /* 0001d6ba   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x0001d6bau);
    rc_step(c, m);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D6BC:
    /* 0001d6bc   4  jsr (0001d5ce) */
    c->pc = RC_ADDR(0x0001d6bcu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001d6c0u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d5ceu);
    return;

L_1D6C0:
    /* 0001d6c0   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001d6c0u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1D6C2:
    /* 0001d6c2   6  move.w #1,(ffffcb1c,A4) */
    c->pc = RC_ADDR(0x0001d6c2u);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x34e4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D6C8:
    /* 0001d6c8   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0001d6c8u);
    rc_step(c, m);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1D6CA:
    /* 0001d6ca   2  bra 0001d65a */
    c->pc = RC_ADDR(0x0001d6cau);
    rc_step(c, m);
    rc_tick();
    goto L_1D65A;

}
