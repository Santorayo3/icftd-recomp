/* fn_000105fc - 158 byte(s), 49 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000105fc(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000105fcu): goto L_105FC;
    case RC_ADDR(0x00010600u): goto L_10600;
    case RC_ADDR(0x00010602u): goto L_10602;
    case RC_ADDR(0x00010606u): goto L_10606;
    case RC_ADDR(0x0001060au): goto L_1060A;
    case RC_ADDR(0x0001060cu): goto L_1060C;
    case RC_ADDR(0x00010610u): goto L_10610;
    case RC_ADDR(0x00010614u): goto L_10614;
    case RC_ADDR(0x00010616u): goto L_10616;
    case RC_ADDR(0x0001061au): goto L_1061A;
    case RC_ADDR(0x0001061eu): goto L_1061E;
    case RC_ADDR(0x00010622u): goto L_10622;
    case RC_ADDR(0x00010624u): goto L_10624;
    case RC_ADDR(0x00010628u): goto L_10628;
    case RC_ADDR(0x0001062cu): goto L_1062C;
    case RC_ADDR(0x0001062eu): goto L_1062E;
    case RC_ADDR(0x00010632u): goto L_10632;
    case RC_ADDR(0x00010636u): goto L_10636;
    case RC_ADDR(0x00010638u): goto L_10638;
    case RC_ADDR(0x0001063cu): goto L_1063C;
    case RC_ADDR(0x00010640u): goto L_10640;
    case RC_ADDR(0x00010642u): goto L_10642;
    case RC_ADDR(0x00010648u): goto L_10648;
    case RC_ADDR(0x0001064cu): goto L_1064C;
    case RC_ADDR(0x00010650u): goto L_10650;
    case RC_ADDR(0x00010652u): goto L_10652;
    case RC_ADDR(0x00010656u): goto L_10656;
    case RC_ADDR(0x0001065au): goto L_1065A;
    case RC_ADDR(0x0001065eu): goto L_1065E;
    case RC_ADDR(0x00010660u): goto L_10660;
    case RC_ADDR(0x00010662u): goto L_10662;
    case RC_ADDR(0x00010668u): goto L_10668;
    case RC_ADDR(0x0001066cu): goto L_1066C;
    case RC_ADDR(0x00010670u): goto L_10670;
    case RC_ADDR(0x00010674u): goto L_10674;
    case RC_ADDR(0x00010678u): goto L_10678;
    case RC_ADDR(0x0001067au): goto L_1067A;
    case RC_ADDR(0x0001067eu): goto L_1067E;
    case RC_ADDR(0x00010680u): goto L_10680;
    case RC_ADDR(0x00010684u): goto L_10684;
    case RC_ADDR(0x00010688u): goto L_10688;
    case RC_ADDR(0x0001068au): goto L_1068A;
    case RC_ADDR(0x0001068cu): goto L_1068C;
    case RC_ADDR(0x0001068eu): goto L_1068E;
    case RC_ADDR(0x00010690u): goto L_10690;
    case RC_ADDR(0x00010692u): goto L_10692;
    case RC_ADDR(0x00010694u): goto L_10694;
    case RC_ADDR(0x00010696u): goto L_10696;
    case RC_ADDR(0x00010698u): goto L_10698;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_105FC:
    /* 000105fc   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000105fcu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_10600:
    /* 00010600   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00010600u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_10602:
    /* 00010602   4  pea (000001ea).l */
    c->pc = RC_ADDR(0x00010602u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000001eau);

L_10606:
    /* 00010606   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x00010606u);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x0001060au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_1060A:
    /* 0001060a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001060au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1060C:
    /* 0001060c   4  move.l D0,(ffffa428,A4) */
    c->pc = RC_ADDR(0x0001060cu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x5bd8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10610:
    /* 00010610   4  tst.l (ffffa428,A4) */
    c->pc = RC_ADDR(0x00010610u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5bd8u));
    rc_set_nzvc(c, t0, RC_L);

L_10614:
    /* 00010614   2  beq 0001067a */
    c->pc = RC_ADDR(0x00010614u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1067A;

L_10616:
    /* 00010616   4  pea (00000002).l */
    c->pc = RC_ADDR(0x00010616u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000002u);

L_1061A:
    /* 0001061a   4  pea (00000408).l */
    c->pc = RC_ADDR(0x0001061au);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000408u);

L_1061E:
    /* 0001061e   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x0001061eu);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x00010622u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_10622:
    /* 00010622   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00010622u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_10624:
    /* 00010624   4  move.l D0,(14d6,A4) */
    c->pc = RC_ADDR(0x00010624u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x14d6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10628:
    /* 00010628   4  tst.l (14d6,A4) */
    c->pc = RC_ADDR(0x00010628u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x14d6u));
    rc_set_nzvc(c, t0, RC_L);

L_1062C:
    /* 0001062c   2  beq 0001067a */
    c->pc = RC_ADDR(0x0001062cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1067A;

L_1062E:
    /* 0001062e   4  pea (0001069a) */
    c->pc = RC_ADDR(0x0001062eu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001069au));

L_10632:
    /* 00010632   4  jsr (ffff8374,A4) */
    c->pc = RC_ADDR(0x00010632u);
    rc_step(c, m, 18);
    /* vector 147 */
    rc_push32(c, m, RC_ADDR(0x00010636u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e6au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000237d6u);
    return;

L_10636:
    /* 00010636   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00010636u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_10638:
    /* 00010638   4  move.l D0,(14de,A4) */
    c->pc = RC_ADDR(0x00010638u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x14deu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1063C:
    /* 0001063c   4  tst.l (14de,A4) */
    c->pc = RC_ADDR(0x0001063cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x14deu));
    rc_set_nzvc(c, t0, RC_L);

L_10640:
    /* 00010640   2  beq 0001067a */
    c->pc = RC_ADDR(0x00010640u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1067A;

L_10642:
    /* 00010642   6  move.l (ffffa42c,A4),(14d2,A4) */
    c->pc = RC_ADDR(0x00010642u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5bd4u));
    rc_wr32(c, m, (c->a[4] + 0x14d2u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10648:
    /* 00010648   4  clr.l (14ce,A4) */
    c->pc = RC_ADDR(0x00010648u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] + 0x14ceu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1064C:
    /* 0001064c   4  pea (14c0,A4) */
    c->pc = RC_ADDR(0x0001064cu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x14c0u));

L_10650:
    /* 00010650   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00010650u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_10652:
    /* 00010652   4  move.l (14de,A4),-(A7) */
    c->pc = RC_ADDR(0x00010652u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x14deu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10656:
    /* 00010656   4  jsr (ffff830e,A4) */
    c->pc = RC_ADDR(0x00010656u);
    rc_step(c, m, 18);
    /* vector 130 */
    rc_push32(c, m, RC_ADDR(0x0001065au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e04u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023488u);
    return;

L_1065A:
    /* 0001065a   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001065au);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_1065E:
    /* 0001065e   2  tst.l D0 */
    c->pc = RC_ADDR(0x0001065eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_10660:
    /* 00010660   2  bne 0001067a */
    c->pc = RC_ADDR(0x00010660u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1067A;

L_10662:
    /* 00010662   6  move.l (ffffa42c,A4),(14da,A4) */
    c->pc = RC_ADDR(0x00010662u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5bd4u));
    rc_wr32(c, m, (c->a[4] + 0x14dau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10668:
    /* 00010668   4  jsr (000106fa) */
    c->pc = RC_ADDR(0x00010668u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001066cu));
    rc_depth++;
    c->pc = RC_ADDR(0x000106fau);
    return;

L_1066C:
    /* 0001066c   4  pea (00000081).l */
    c->pc = RC_ADDR(0x0001066cu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000081u);

L_10670:
    /* 00010670   4  move.l (14de,A4),-(A7) */
    c->pc = RC_ADDR(0x00010670u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x14deu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10674:
    /* 00010674   4  jsr (ffff8308,A4) */
    c->pc = RC_ADDR(0x00010674u);
    rc_step(c, m, 18);
    /* vector 129 */
    rc_push32(c, m, RC_ADDR(0x00010678u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dfeu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002347cu);
    return;

L_10678:
    /* 00010678   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00010678u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1067A:
    /* 0001067a   4  tst.l (14da,A4) */
    c->pc = RC_ADDR(0x0001067au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x14dau));
    rc_set_nzvc(c, t0, RC_L);

L_1067E:
    /* 0001067e   2  bne 00010684 */
    c->pc = RC_ADDR(0x0001067eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_10684;

L_10680:
    /* 00010680   4  jsr (00010596) */
    c->pc = RC_ADDR(0x00010680u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00010684u));
    rc_depth++;
    c->pc = RC_ADDR(0x00010596u);
    return;

L_10684:
    /* 00010684   4  tst.l (14da,A4) */
    c->pc = RC_ADDR(0x00010684u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x14dau));
    rc_set_nzvc(c, t0, RC_L);

L_10688:
    /* 00010688   2  beq 0001068e */
    c->pc = RC_ADDR(0x00010688u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1068E;

L_1068A:
    /* 0001068a   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0001068au);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1068C:
    /* 0001068c   2  bra 00010690 */
    c->pc = RC_ADDR(0x0001068cu);
    rc_step(c, m, 10);
    goto L_10690;

L_1068E:
    /* 0001068e   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001068eu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_10690:
    /* 00010690   2  move.b D0,D1 */
    c->pc = RC_ADDR(0x00010690u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_B);
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_10692:
    /* 00010692   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00010692u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_10694:
    /* 00010694   2  move.b D1,D0 */
    c->pc = RC_ADDR(0x00010694u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_B);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_10696:
    /* 00010696   2  unlk A5 */
    c->pc = RC_ADDR(0x00010696u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_10698:
    /* 00010698   2  rts */
    c->pc = RC_ADDR(0x00010698u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
