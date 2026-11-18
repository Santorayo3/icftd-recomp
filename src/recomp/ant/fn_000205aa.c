/* fn_000205aa - 594 byte(s), 163 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000205aa(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000205aau): goto L_205AA;
    case RC_ADDR(0x000205aeu): goto L_205AE;
    case RC_ADDR(0x000205b2u): goto L_205B2;
    case RC_ADDR(0x000205b6u): goto L_205B6;
    case RC_ADDR(0x000205bau): goto L_205BA;
    case RC_ADDR(0x000205beu): goto L_205BE;
    case RC_ADDR(0x000205c2u): goto L_205C2;
    case RC_ADDR(0x000205c4u): goto L_205C4;
    case RC_ADDR(0x000205c6u): goto L_205C6;
    case RC_ADDR(0x000205c8u): goto L_205C8;
    case RC_ADDR(0x000205cau): goto L_205CA;
    case RC_ADDR(0x000205ceu): goto L_205CE;
    case RC_ADDR(0x000205d0u): goto L_205D0;
    case RC_ADDR(0x000205d2u): goto L_205D2;
    case RC_ADDR(0x000205d4u): goto L_205D4;
    case RC_ADDR(0x000205d6u): goto L_205D6;
    case RC_ADDR(0x000205d8u): goto L_205D8;
    case RC_ADDR(0x000205dcu): goto L_205DC;
    case RC_ADDR(0x000205deu): goto L_205DE;
    case RC_ADDR(0x000205e0u): goto L_205E0;
    case RC_ADDR(0x000205e4u): goto L_205E4;
    case RC_ADDR(0x000205ecu): goto L_205EC;
    case RC_ADDR(0x000205f4u): goto L_205F4;
    case RC_ADDR(0x000205fau): goto L_205FA;
    case RC_ADDR(0x00020600u): goto L_20600;
    case RC_ADDR(0x00020606u): goto L_20606;
    case RC_ADDR(0x0002060cu): goto L_2060C;
    case RC_ADDR(0x00020612u): goto L_20612;
    case RC_ADDR(0x00020618u): goto L_20618;
    case RC_ADDR(0x0002061cu): goto L_2061C;
    case RC_ADDR(0x00020620u): goto L_20620;
    case RC_ADDR(0x00020622u): goto L_20622;
    case RC_ADDR(0x00020626u): goto L_20626;
    case RC_ADDR(0x00020628u): goto L_20628;
    case RC_ADDR(0x0002062au): goto L_2062A;
    case RC_ADDR(0x0002062cu): goto L_2062C;
    case RC_ADDR(0x0002062eu): goto L_2062E;
    case RC_ADDR(0x00020632u): goto L_20632;
    case RC_ADDR(0x00020634u): goto L_20634;
    case RC_ADDR(0x00020638u): goto L_20638;
    case RC_ADDR(0x0002063au): goto L_2063A;
    case RC_ADDR(0x0002063cu): goto L_2063C;
    case RC_ADDR(0x00020640u): goto L_20640;
    case RC_ADDR(0x00020642u): goto L_20642;
    case RC_ADDR(0x00020644u): goto L_20644;
    case RC_ADDR(0x00020646u): goto L_20646;
    case RC_ADDR(0x00020648u): goto L_20648;
    case RC_ADDR(0x0002064au): goto L_2064A;
    case RC_ADDR(0x0002064eu): goto L_2064E;
    case RC_ADDR(0x00020654u): goto L_20654;
    case RC_ADDR(0x00020656u): goto L_20656;
    case RC_ADDR(0x0002065au): goto L_2065A;
    case RC_ADDR(0x0002065cu): goto L_2065C;
    case RC_ADDR(0x00020660u): goto L_20660;
    case RC_ADDR(0x00020664u): goto L_20664;
    case RC_ADDR(0x00020666u): goto L_20666;
    case RC_ADDR(0x0002066au): goto L_2066A;
    case RC_ADDR(0x0002066eu): goto L_2066E;
    case RC_ADDR(0x00020670u): goto L_20670;
    case RC_ADDR(0x00020672u): goto L_20672;
    case RC_ADDR(0x00020678u): goto L_20678;
    case RC_ADDR(0x0002067cu): goto L_2067C;
    case RC_ADDR(0x0002067eu): goto L_2067E;
    case RC_ADDR(0x00020684u): goto L_20684;
    case RC_ADDR(0x00020688u): goto L_20688;
    case RC_ADDR(0x0002068cu): goto L_2068C;
    case RC_ADDR(0x0002068eu): goto L_2068E;
    case RC_ADDR(0x00020690u): goto L_20690;
    case RC_ADDR(0x00020696u): goto L_20696;
    case RC_ADDR(0x0002069au): goto L_2069A;
    case RC_ADDR(0x0002069cu): goto L_2069C;
    case RC_ADDR(0x000206a2u): goto L_206A2;
    case RC_ADDR(0x000206a6u): goto L_206A6;
    case RC_ADDR(0x000206aau): goto L_206AA;
    case RC_ADDR(0x000206acu): goto L_206AC;
    case RC_ADDR(0x000206aeu): goto L_206AE;
    case RC_ADDR(0x000206b4u): goto L_206B4;
    case RC_ADDR(0x000206b8u): goto L_206B8;
    case RC_ADDR(0x000206bau): goto L_206BA;
    case RC_ADDR(0x000206c0u): goto L_206C0;
    case RC_ADDR(0x000206c6u): goto L_206C6;
    case RC_ADDR(0x000206ccu): goto L_206CC;
    case RC_ADDR(0x000206d2u): goto L_206D2;
    case RC_ADDR(0x000206d8u): goto L_206D8;
    case RC_ADDR(0x000206dcu): goto L_206DC;
    case RC_ADDR(0x000206deu): goto L_206DE;
    case RC_ADDR(0x000206e2u): goto L_206E2;
    case RC_ADDR(0x000206e4u): goto L_206E4;
    case RC_ADDR(0x000206e6u): goto L_206E6;
    case RC_ADDR(0x000206e8u): goto L_206E8;
    case RC_ADDR(0x000206ecu): goto L_206EC;
    case RC_ADDR(0x000206f0u): goto L_206F0;
    case RC_ADDR(0x000206f6u): goto L_206F6;
    case RC_ADDR(0x000206f8u): goto L_206F8;
    case RC_ADDR(0x000206fau): goto L_206FA;
    case RC_ADDR(0x000206fcu): goto L_206FC;
    case RC_ADDR(0x00020700u): goto L_20700;
    case RC_ADDR(0x00020702u): goto L_20702;
    case RC_ADDR(0x00020708u): goto L_20708;
    case RC_ADDR(0x0002070au): goto L_2070A;
    case RC_ADDR(0x0002070eu): goto L_2070E;
    case RC_ADDR(0x00020710u): goto L_20710;
    case RC_ADDR(0x00020714u): goto L_20714;
    case RC_ADDR(0x0002071au): goto L_2071A;
    case RC_ADDR(0x0002071cu): goto L_2071C;
    case RC_ADDR(0x00020720u): goto L_20720;
    case RC_ADDR(0x00020724u): goto L_20724;
    case RC_ADDR(0x00020726u): goto L_20726;
    case RC_ADDR(0x00020728u): goto L_20728;
    case RC_ADDR(0x0002072eu): goto L_2072E;
    case RC_ADDR(0x00020732u): goto L_20732;
    case RC_ADDR(0x00020734u): goto L_20734;
    case RC_ADDR(0x0002073au): goto L_2073A;
    case RC_ADDR(0x0002073eu): goto L_2073E;
    case RC_ADDR(0x00020742u): goto L_20742;
    case RC_ADDR(0x00020744u): goto L_20744;
    case RC_ADDR(0x00020746u): goto L_20746;
    case RC_ADDR(0x0002074cu): goto L_2074C;
    case RC_ADDR(0x00020750u): goto L_20750;
    case RC_ADDR(0x00020752u): goto L_20752;
    case RC_ADDR(0x00020758u): goto L_20758;
    case RC_ADDR(0x0002075eu): goto L_2075E;
    case RC_ADDR(0x00020764u): goto L_20764;
    case RC_ADDR(0x0002076au): goto L_2076A;
    case RC_ADDR(0x00020770u): goto L_20770;
    case RC_ADDR(0x00020774u): goto L_20774;
    case RC_ADDR(0x00020778u): goto L_20778;
    case RC_ADDR(0x0002077au): goto L_2077A;
    case RC_ADDR(0x0002077cu): goto L_2077C;
    case RC_ADDR(0x0002077eu): goto L_2077E;
    case RC_ADDR(0x00020780u): goto L_20780;
    case RC_ADDR(0x00020784u): goto L_20784;
    case RC_ADDR(0x00020786u): goto L_20786;
    case RC_ADDR(0x00020788u): goto L_20788;
    case RC_ADDR(0x0002078cu): goto L_2078C;
    case RC_ADDR(0x0002078eu): goto L_2078E;
    case RC_ADDR(0x00020790u): goto L_20790;
    case RC_ADDR(0x00020792u): goto L_20792;
    case RC_ADDR(0x00020794u): goto L_20794;
    case RC_ADDR(0x00020798u): goto L_20798;
    case RC_ADDR(0x0002079cu): goto L_2079C;
    case RC_ADDR(0x0002079eu): goto L_2079E;
    case RC_ADDR(0x000207a0u): goto L_207A0;
    case RC_ADDR(0x000207a6u): goto L_207A6;
    case RC_ADDR(0x000207acu): goto L_207AC;
    case RC_ADDR(0x000207b0u): goto L_207B0;
    case RC_ADDR(0x000207b2u): goto L_207B2;
    case RC_ADDR(0x000207b4u): goto L_207B4;
    case RC_ADDR(0x000207b6u): goto L_207B6;
    case RC_ADDR(0x000207bcu): goto L_207BC;
    case RC_ADDR(0x000207c2u): goto L_207C2;
    case RC_ADDR(0x000207cau): goto L_207CA;
    case RC_ADDR(0x000207ceu): goto L_207CE;
    case RC_ADDR(0x000207d4u): goto L_207D4;
    case RC_ADDR(0x000207d6u): goto L_207D6;
    case RC_ADDR(0x000207dau): goto L_207DA;
    case RC_ADDR(0x000207e2u): goto L_207E2;
    case RC_ADDR(0x000207e6u): goto L_207E6;
    case RC_ADDR(0x000207eau): goto L_207EA;
    case RC_ADDR(0x000207ecu): goto L_207EC;
    case RC_ADDR(0x000207f0u): goto L_207F0;
    case RC_ADDR(0x000207f6u): goto L_207F6;
    case RC_ADDR(0x000207f8u): goto L_207F8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_205AA:
    /* 000205aa   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000205aau);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_205AE:
    /* 000205ae   4  movem.l { D4 D5 A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x000205aeu);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_205B2:
    /* 000205b2   4  pea (00000002).l */
    c->pc = RC_ADDR(0x000205b2u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000002u);

L_205B6:
    /* 000205b6   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000205b6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_205BA:
    /* 000205ba   4  movea.l (8,A5),A1 */
    c->pc = RC_ADDR(0x000205bau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[1] = t0;

L_205BE:
    /* 000205be   4  move.w (2,A0),D0 */
    c->pc = RC_ADDR(0x000205beu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_205C2:
    /* 000205c2   2  mulu.w (A1),D0 */
    c->pc = RC_ADDR(0x000205c2u);
    rc_step(c, m, 42);
    t0 = rc_rd16(c, m, c->a[1]);
    rc_mulu(c, 0, t0);

L_205C4:
    /* 000205c4   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x000205c4u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_205C6:
    /* 000205c6   2  move.w D0,D1 */
    c->pc = RC_ADDR(0x000205c6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_205C8:
    /* 000205c8   2  move.l D1,-(A7) */
    c->pc = RC_ADDR(0x000205c8u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_205CA:
    /* 000205ca   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x000205cau);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x000205ceu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_205CE:
    /* 000205ce   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000205ceu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_205D0:
    /* 000205d0   2  movea.l D0,A2 */
    c->pc = RC_ADDR(0x000205d0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[2] = t0;

L_205D2:
    /* 000205d2   2  move.l A2,D0 */
    c->pc = RC_ADDR(0x000205d2u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_205D4:
    /* 000205d4   2  bne 000205e0 */
    c->pc = RC_ADDR(0x000205d4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_205E0;

L_205D6:
    /* 000205d6   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000205d6u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_205D8:
    /* 000205d8   4  movem.l (SP)+,{ D4 D5 D6 A2 A3 } */
    c->pc = RC_ADDR(0x000205d8u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[6] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_205DC:
    /* 000205dc   2  unlk A5 */
    c->pc = RC_ADDR(0x000205dcu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_205DE:
    /* 000205de   2  rts */
    c->pc = RC_ADDR(0x000205deu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_205E0:
    /* 000205e0   4  jsr (ffff83ce,A4) */
    c->pc = RC_ADDR(0x000205e0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000205e4u));
    rc_depth++;
    t3 = (c->a[4] - 0x7c32u);
    c->pc = t3;
    return;

L_205E4:
    /* 000205e4   8  move.w #ffff,(00dff046).l */
    c->pc = RC_ADDR(0x000205e4u);
    rc_step(c, m, 20);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, 0x00dff046u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_205EC:
    /* 000205ec   8  move.w #ffff,(00dff044).l */
    c->pc = RC_ADDR(0x000205ecu);
    rc_step(c, m, 20);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, 0x00dff044u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_205F4:
    /* 000205f4   6  clr.w (00dff066).l */
    c->pc = RC_ADDR(0x000205f4u);
    rc_step(c, m, 20);
    rc_wr16(c, m, 0x00dff066u, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_205FA:
    /* 000205fa   6  clr.w (00dff042).l */
    c->pc = RC_ADDR(0x000205fau);
    rc_step(c, m, 20);
    rc_wr16(c, m, 0x00dff042u, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_20600:
    /* 00020600   6  clr.w (00dff040).l */
    c->pc = RC_ADDR(0x00020600u);
    rc_step(c, m, 20);
    rc_wr16(c, m, 0x00dff040u, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_20606:
    /* 00020606   6  clr.w (00dff060).l */
    c->pc = RC_ADDR(0x00020606u);
    rc_step(c, m, 20);
    rc_wr16(c, m, 0x00dff060u, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2060C:
    /* 0002060c   6  clr.w (00dff062).l */
    c->pc = RC_ADDR(0x0002060cu);
    rc_step(c, m, 20);
    rc_wr16(c, m, 0x00dff062u, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_20612:
    /* 00020612   6  clr.w (00dff064).l */
    c->pc = RC_ADDR(0x00020612u);
    rc_step(c, m, 20);
    rc_wr16(c, m, 0x00dff064u, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_20618:
    /* 00020618   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00020618u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_2061C:
    /* 0002061c   4  move.w (2,A0),D0 */
    c->pc = RC_ADDR(0x0002061cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20620:
    /* 00020620   2  asl.w #6,D0 */
    c->pc = RC_ADDR(0x00020620u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000006u, rc_d_get(c, 0, RC_W), RC_W));

L_20622:
    /* 00020622   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00020622u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_20626:
    /* 00020626   2  move.w (A0),D1 */
    c->pc = RC_ADDR(0x00020626u);
    rc_step(c, m, 8);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20628:
    /* 00020628   2  lsr.w #1,D1 */
    c->pc = RC_ADDR(0x00020628u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_2062A:
    /* 0002062a   2  move.w D0,D5 */
    c->pc = RC_ADDR(0x0002062au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 5, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2062C:
    /* 0002062c   2  or.w D1,D5 */
    c->pc = RC_ADDR(0x0002062cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t2 = t0 | rc_d_get(c, 5, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 5, RC_W, t2);

L_2062E:
    /* 0002062e   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0002062eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_20632:
    /* 00020632   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00020632u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_20634:
    /* 00020634   4  move.b (5,A0),D0 */
    c->pc = RC_ADDR(0x00020634u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x5u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_20638:
    /* 00020638   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x00020638u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_2063A:
    /* 0002063a   2  move.b D0,D4 */
    c->pc = RC_ADDR(0x0002063au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_B);
    rc_d_set(c, 4, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_2063C:
    /* 0002063c   4  cmp.b #2,D4 */
    c->pc = RC_ADDR(0x0002063cu);
    rc_step(c, m, 8);
    t0 = 0x00000002u;
    t1 = rc_d_get(c, 4, RC_B);
    rc_cmp(c, RC_B, t1, t0);

L_20640:
    /* 00020640   2  bls 00020644 */
    c->pc = RC_ADDR(0x00020640u);
    rc_step(c, m, 10);
    if (rc_cond(c, 3)) goto L_20644;

L_20642:
    /* 00020642   2  moveq #2,D4 */
    c->pc = RC_ADDR(0x00020642u);
    rc_step(c, m, 4);
    c->d[4] = 0x00000002u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_20644:
    /* 00020644   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00020644u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_20646:
    /* 00020646   2  move.b D4,D0 */
    c->pc = RC_ADDR(0x00020646u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_B);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_20648:
    /* 00020648   2  asl.l #3,D0 */
    c->pc = RC_ADDR(0x00020648u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000003u, rc_d_get(c, 0, RC_L), RC_L));

L_2064A:
    /* 0002064a   4  move.l (c,A5),D1 */
    c->pc = RC_ADDR(0x0002064au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_2064E:
    /* 0002064e   6  and.l #7,D1 */
    c->pc = RC_ADDR(0x0002064eu);
    rc_step(c, m, 16);
    t0 = 0x00000007u;
    t2 = t0 & rc_d_get(c, 1, RC_L);
    rc_set_nzvc(c, t2, RC_L);
    rc_d_set(c, 1, RC_L, t2);

L_20654:
    /* 00020654   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00020654u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_20656:
    /* 00020656   4  lea (ffffd30c,A4),A0 */
    c->pc = RC_ADDR(0x00020656u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x2cf4u);

L_2065A:
    /* 0002065a   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x0002065au);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_2065C:
    /* 0002065c   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0002065cu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_20660:
    /* 00020660   4  bset #8,D1 */
    c->pc = RC_ADDR(0x00020660u);
    rc_step(c, m, 12);
    t4 = 0x00000008u;
    t0 = rc_d_get(c, 1, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 1, RC_L, t2);

L_20664:
    /* 00020664   2  move.w D1,D6 */
    c->pc = RC_ADDR(0x00020664u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20666:
    /* 00020666   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00020666u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_2066A:
    /* 0002066a   4  movea.l (8,A0),A3 */
    c->pc = RC_ADDR(0x0002066au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    c->a[3] = t0;

L_2066E:
    /* 0002066e   2  move.l A3,D0 */
    c->pc = RC_ADDR(0x0002066eu);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 3, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20670:
    /* 00020670   2  ble 0002067e */
    c->pc = RC_ADDR(0x00020670u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_2067E;

L_20672:
    /* 00020672   6  move.l A3,(00dff050).l */
    c->pc = RC_ADDR(0x00020672u);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 3, RC_L);
    rc_wr32(c, m, 0x00dff050u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20678:
    /* 00020678   4  bset #b,D6 */
    c->pc = RC_ADDR(0x00020678u);
    rc_step(c, m, 12);
    t4 = 0x0000000bu;
    t0 = rc_d_get(c, 6, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 6, RC_L, t2);

L_2067C:
    /* 0002067c   2  bra 00020684 */
    c->pc = RC_ADDR(0x0002067cu);
    rc_step(c, m, 10);
    goto L_20684;

L_2067E:
    /* 0002067e   6  move.w A3,(00dff074).l */
    c->pc = RC_ADDR(0x0002067eu);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 3, RC_W);
    rc_wr16(c, m, 0x00dff074u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20684:
    /* 00020684   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00020684u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_20688:
    /* 00020688   4  movea.l (c,A0),A3 */
    c->pc = RC_ADDR(0x00020688u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[3] = t0;

L_2068C:
    /* 0002068c   2  move.l A3,D0 */
    c->pc = RC_ADDR(0x0002068cu);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 3, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_2068E:
    /* 0002068e   2  ble 0002069c */
    c->pc = RC_ADDR(0x0002068eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_2069C;

L_20690:
    /* 00020690   6  move.l A3,(00dff04c).l */
    c->pc = RC_ADDR(0x00020690u);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 3, RC_L);
    rc_wr32(c, m, 0x00dff04cu, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20696:
    /* 00020696   4  bset #a,D6 */
    c->pc = RC_ADDR(0x00020696u);
    rc_step(c, m, 12);
    t4 = 0x0000000au;
    t0 = rc_d_get(c, 6, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 6, RC_L, t2);

L_2069A:
    /* 0002069a   2  bra 000206a2 */
    c->pc = RC_ADDR(0x0002069au);
    rc_step(c, m, 10);
    goto L_206A2;

L_2069C:
    /* 0002069c   6  move.w A3,(00dff072).l */
    c->pc = RC_ADDR(0x0002069cu);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 3, RC_W);
    rc_wr16(c, m, 0x00dff072u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_206A2:
    /* 000206a2   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000206a2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_206A6:
    /* 000206a6   4  movea.l (10,A0),A3 */
    c->pc = RC_ADDR(0x000206a6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0x10u));
    c->a[3] = t0;

L_206AA:
    /* 000206aa   2  move.l A3,D0 */
    c->pc = RC_ADDR(0x000206aau);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 3, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_206AC:
    /* 000206ac   2  ble 000206ba */
    c->pc = RC_ADDR(0x000206acu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_206BA;

L_206AE:
    /* 000206ae   6  move.l A3,(00dff048).l */
    c->pc = RC_ADDR(0x000206aeu);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 3, RC_L);
    rc_wr32(c, m, 0x00dff048u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_206B4:
    /* 000206b4   4  bset #9,D6 */
    c->pc = RC_ADDR(0x000206b4u);
    rc_step(c, m, 12);
    t4 = 0x00000009u;
    t0 = rc_d_get(c, 6, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 6, RC_L, t2);

L_206B8:
    /* 000206b8   2  bra 000206c0 */
    c->pc = RC_ADDR(0x000206b8u);
    rc_step(c, m, 10);
    goto L_206C0;

L_206BA:
    /* 000206ba   6  move.w A3,(00dff070).l */
    c->pc = RC_ADDR(0x000206bau);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 3, RC_W);
    rc_wr16(c, m, 0x00dff070u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_206C0:
    /* 000206c0   6  move.l A2,(00dff054).l */
    c->pc = RC_ADDR(0x000206c0u);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff054u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_206C6:
    /* 000206c6   6  move.w D6,(00dff040).l */
    c->pc = RC_ADDR(0x000206c6u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 6, RC_W);
    rc_wr16(c, m, 0x00dff040u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_206CC:
    /* 000206cc   6  clr.w (00dff042).l */
    c->pc = RC_ADDR(0x000206ccu);
    rc_step(c, m, 20);
    rc_wr16(c, m, 0x00dff042u, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_206D2:
    /* 000206d2   6  move.w D5,(00dff058).l */
    c->pc = RC_ADDR(0x000206d2u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 5, RC_W);
    rc_wr16(c, m, 0x00dff058u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_206D8:
    /* 000206d8   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000206d8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_206DC:
    /* 000206dc   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000206dcu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_206DE:
    /* 000206de   4  move.b (5,A0),D0 */
    c->pc = RC_ADDR(0x000206deu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x5u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_206E2:
    /* 000206e2   2  subq.w #3,D0 */
    c->pc = RC_ADDR(0x000206e2u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000003u;
    rc_flags_sub(c, RC_W, t1, 0x00000003u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_206E4:
    /* 000206e4   2  move.b D0,D4 */
    c->pc = RC_ADDR(0x000206e4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_B);
    rc_d_set(c, 4, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_206E6:
    /* 000206e6   2  tst.b D0 */
    c->pc = RC_ADDR(0x000206e6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_B);
    rc_set_nzvc(c, t0, RC_B);

L_206E8:
    /* 000206e8   4  ble 00020770 */
    c->pc = RC_ADDR(0x000206e8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_20770;

L_206EC:
    /* 000206ec   4  jsr (ffff83ce,A4) */
    c->pc = RC_ADDR(0x000206ecu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000206f0u));
    rc_depth++;
    t3 = (c->a[4] - 0x7c32u);
    c->pc = t3;
    return;

L_206F0:
    /* 000206f0   6  clr.w (00dff040).l */
    c->pc = RC_ADDR(0x000206f0u);
    rc_step(c, m, 20);
    rc_wr16(c, m, 0x00dff040u, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_206F6:
    /* 000206f6   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000206f6u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_206F8:
    /* 000206f8   2  move.b D4,D0 */
    c->pc = RC_ADDR(0x000206f8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_B);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_206FA:
    /* 000206fa   2  asl.l #3,D0 */
    c->pc = RC_ADDR(0x000206fau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000003u, rc_d_get(c, 0, RC_L), RC_L));

L_206FC:
    /* 000206fc   4  move.l (c,A5),D1 */
    c->pc = RC_ADDR(0x000206fcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20700:
    /* 00020700   2  lsr.l #2,D1 */
    c->pc = RC_ADDR(0x00020700u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 1, 0, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_20702:
    /* 00020702   6  and.l #6,D1 */
    c->pc = RC_ADDR(0x00020702u);
    rc_step(c, m, 16);
    t0 = 0x00000006u;
    t2 = t0 & rc_d_get(c, 1, RC_L);
    rc_set_nzvc(c, t2, RC_L);
    rc_d_set(c, 1, RC_L, t2);

L_20708:
    /* 00020708   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00020708u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_2070A:
    /* 0002070a   4  lea (ffffd30c,A4),A0 */
    c->pc = RC_ADDR(0x0002070au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x2cf4u);

L_2070E:
    /* 0002070e   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x0002070eu);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_20710:
    /* 00020710   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00020710u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_20714:
    /* 00020714   6  or.l #900,D1 */
    c->pc = RC_ADDR(0x00020714u);
    rc_step(c, m, 16);
    t0 = 0x00000900u;
    t2 = t0 | rc_d_get(c, 1, RC_L);
    rc_set_nzvc(c, t2, RC_L);
    rc_d_set(c, 1, RC_L, t2);

L_2071A:
    /* 0002071a   2  move.w D1,D6 */
    c->pc = RC_ADDR(0x0002071au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2071C:
    /* 0002071c   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0002071cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_20720:
    /* 00020720   4  movea.l (14,A0),A3 */
    c->pc = RC_ADDR(0x00020720u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0x14u));
    c->a[3] = t0;

L_20724:
    /* 00020724   2  move.l A3,D0 */
    c->pc = RC_ADDR(0x00020724u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 3, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20726:
    /* 00020726   2  ble 00020734 */
    c->pc = RC_ADDR(0x00020726u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_20734;

L_20728:
    /* 00020728   6  move.l A3,(00dff04c).l */
    c->pc = RC_ADDR(0x00020728u);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 3, RC_L);
    rc_wr32(c, m, 0x00dff04cu, t0);
    rc_set_nzvc(c, t0, RC_L);

L_2072E:
    /* 0002072e   4  bset #a,D6 */
    c->pc = RC_ADDR(0x0002072eu);
    rc_step(c, m, 12);
    t4 = 0x0000000au;
    t0 = rc_d_get(c, 6, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 6, RC_L, t2);

L_20732:
    /* 00020732   2  bra 0002073a */
    c->pc = RC_ADDR(0x00020732u);
    rc_step(c, m, 10);
    goto L_2073A;

L_20734:
    /* 00020734   6  move.w A3,(00dff072).l */
    c->pc = RC_ADDR(0x00020734u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 3, RC_W);
    rc_wr16(c, m, 0x00dff072u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2073A:
    /* 0002073a   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0002073au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_2073E:
    /* 0002073e   4  movea.l (18,A0),A3 */
    c->pc = RC_ADDR(0x0002073eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0x18u));
    c->a[3] = t0;

L_20742:
    /* 00020742   2  move.l A3,D0 */
    c->pc = RC_ADDR(0x00020742u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 3, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20744:
    /* 00020744   2  ble 00020752 */
    c->pc = RC_ADDR(0x00020744u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_20752;

L_20746:
    /* 00020746   6  move.l A3,(00dff048).l */
    c->pc = RC_ADDR(0x00020746u);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 3, RC_L);
    rc_wr32(c, m, 0x00dff048u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_2074C:
    /* 0002074c   4  bset #9,D6 */
    c->pc = RC_ADDR(0x0002074cu);
    rc_step(c, m, 12);
    t4 = 0x00000009u;
    t0 = rc_d_get(c, 6, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 6, RC_L, t2);

L_20750:
    /* 00020750   2  bra 00020758 */
    c->pc = RC_ADDR(0x00020750u);
    rc_step(c, m, 10);
    goto L_20758;

L_20752:
    /* 00020752   6  move.w A3,(00dff070).l */
    c->pc = RC_ADDR(0x00020752u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 3, RC_W);
    rc_wr16(c, m, 0x00dff070u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20758:
    /* 00020758   6  move.l A2,(00dff054).l */
    c->pc = RC_ADDR(0x00020758u);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff054u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_2075E:
    /* 0002075e   6  move.l A2,(00dff050).l */
    c->pc = RC_ADDR(0x0002075eu);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff050u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20764:
    /* 00020764   6  move.w D6,(00dff040).l */
    c->pc = RC_ADDR(0x00020764u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 6, RC_W);
    rc_wr16(c, m, 0x00dff040u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2076A:
    /* 0002076a   6  move.w D5,(00dff058).l */
    c->pc = RC_ADDR(0x0002076au);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 5, RC_W);
    rc_wr16(c, m, 0x00dff058u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20770:
    /* 00020770   4  jsr (ffff83ce,A4) */
    c->pc = RC_ADDR(0x00020770u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00020774u));
    rc_depth++;
    t3 = (c->a[4] - 0x7c32u);
    c->pc = t3;
    return;

L_20774:
    /* 00020774   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00020774u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_20778:
    /* 00020778   2  move.w (A0),D0 */
    c->pc = RC_ADDR(0x00020778u);
    rc_step(c, m, 8);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2077A:
    /* 0002077a   2  asl.w #3,D0 */
    c->pc = RC_ADDR(0x0002077au);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000003u, rc_d_get(c, 0, RC_W), RC_W));

L_2077C:
    /* 0002077c   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x0002077cu);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_2077E:
    /* 0002077e   2  move.w D0,D1 */
    c->pc = RC_ADDR(0x0002077eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20780:
    /* 00020780   4  move.l (10,A5),D0 */
    c->pc = RC_ADDR(0x00020780u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20784:
    /* 00020784   2  cmp.l D1,D0 */
    c->pc = RC_ADDR(0x00020784u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_20786:
    /* 00020786   2  bls 00020798 */
    c->pc = RC_ADDR(0x00020786u);
    rc_step(c, m, 10);
    if (rc_cond(c, 3)) goto L_20798;

L_20788:
    /* 00020788   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00020788u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_2078C:
    /* 0002078c   2  move.w (A0),D0 */
    c->pc = RC_ADDR(0x0002078cu);
    rc_step(c, m, 8);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2078E:
    /* 0002078e   2  asl.w #3,D0 */
    c->pc = RC_ADDR(0x0002078eu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000003u, rc_d_get(c, 0, RC_W), RC_W));

L_20790:
    /* 00020790   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00020790u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_20792:
    /* 00020792   2  move.w D0,D1 */
    c->pc = RC_ADDR(0x00020792u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20794:
    /* 00020794   4  move.l D1,(10,A5) */
    c->pc = RC_ADDR(0x00020794u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[5] + 0x10u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_20798:
    /* 00020798   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00020798u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_2079C:
    /* 0002079c   2  move.w (A0),D0 */
    c->pc = RC_ADDR(0x0002079cu);
    rc_step(c, m, 8);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2079E:
    /* 0002079e   2  subq.w #2,D0 */
    c->pc = RC_ADDR(0x0002079eu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_207A0:
    /* 000207a0   6  move.w D0,(00dff066).l */
    c->pc = RC_ADDR(0x000207a0u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, 0x00dff066u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_207A6:
    /* 000207a6   6  move.w D0,(00dff064).l */
    c->pc = RC_ADDR(0x000207a6u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, 0x00dff064u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_207AC:
    /* 000207ac   4  move.l (10,A5),D0 */
    c->pc = RC_ADDR(0x000207acu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_207B0:
    /* 000207b0   2  lsr.l #4,D0 */
    c->pc = RC_ADDR(0x000207b0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 0, RC_L), RC_L));

L_207B2:
    /* 000207b2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000207b2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_207B4:
    /* 000207b4   2  add.l A2,D0 */
    c->pc = RC_ADDR(0x000207b4u);
    rc_step(c, m, 6);
    t0 = rc_a_get(c, 2, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_207B6:
    /* 000207b6   6  move.l D0,(00dff054).l */
    c->pc = RC_ADDR(0x000207b6u);
    rc_step(c, m, 20);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, 0x00dff054u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_207BC:
    /* 000207bc   6  move.l D0,(00dff050).l */
    c->pc = RC_ADDR(0x000207bcu);
    rc_step(c, m, 20);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, 0x00dff050u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_207C2:
    /* 000207c2   8  move.w #9c0,(00dff040).l */
    c->pc = RC_ADDR(0x000207c2u);
    rc_step(c, m, 20);
    t0 = 0x000009c0u;
    rc_wr16(c, m, 0x00dff040u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_207CA:
    /* 000207ca   4  move.l (10,A5),D0 */
    c->pc = RC_ADDR(0x000207cau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_207CE:
    /* 000207ce   6  and.l #f,D0 */
    c->pc = RC_ADDR(0x000207ceu);
    rc_step(c, m, 16);
    t0 = 0x0000000fu;
    t2 = t0 & rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t2, RC_L);
    rc_d_set(c, 0, RC_L, t2);

L_207D4:
    /* 000207d4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000207d4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_207D6:
    /* 000207d6   4  lea (ffffd2ec,A4),A0 */
    c->pc = RC_ADDR(0x000207d6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x2d14u);

L_207DA:
    /* 000207da   8  move.w (0,A0,D0.w),(00dff072).l */
    c->pc = RC_ADDR(0x000207dau);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, 0x00dff072u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_207E2:
    /* 000207e2   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000207e2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_207E6:
    /* 000207e6   4  move.w (2,A0),D0 */
    c->pc = RC_ADDR(0x000207e6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_207EA:
    /* 000207ea   2  asl.w #6,D0 */
    c->pc = RC_ADDR(0x000207eau);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000006u, rc_d_get(c, 0, RC_W), RC_W));

L_207EC:
    /* 000207ec   4  bset #0,D0 */
    c->pc = RC_ADDR(0x000207ecu);
    rc_step(c, m, 12);
    t4 = 0x00000000u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 0, RC_L, t2);

L_207F0:
    /* 000207f0   6  move.w D0,(00dff058).l */
    c->pc = RC_ADDR(0x000207f0u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, 0x00dff058u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_207F6:
    /* 000207f6   2  move.l A2,D0 */
    c->pc = RC_ADDR(0x000207f6u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_207F8:
    /* 000207f8   4  bra 000205d8 */
    c->pc = RC_ADDR(0x000207f8u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_205D8;

}
