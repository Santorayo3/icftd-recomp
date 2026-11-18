/* fn_0002273e - 336 byte(s), 90 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0002273e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0002273eu): goto L_2273E;
    case RC_ADDR(0x00022742u): goto L_22742;
    case RC_ADDR(0x00022746u): goto L_22746;
    case RC_ADDR(0x0002274au): goto L_2274A;
    case RC_ADDR(0x0002274eu): goto L_2274E;
    case RC_ADDR(0x00022752u): goto L_22752;
    case RC_ADDR(0x00022756u): goto L_22756;
    case RC_ADDR(0x0002275au): goto L_2275A;
    case RC_ADDR(0x0002275eu): goto L_2275E;
    case RC_ADDR(0x00022762u): goto L_22762;
    case RC_ADDR(0x00022766u): goto L_22766;
    case RC_ADDR(0x0002276au): goto L_2276A;
    case RC_ADDR(0x0002276eu): goto L_2276E;
    case RC_ADDR(0x00022770u): goto L_22770;
    case RC_ADDR(0x00022772u): goto L_22772;
    case RC_ADDR(0x00022776u): goto L_22776;
    case RC_ADDR(0x0002277au): goto L_2277A;
    case RC_ADDR(0x0002277eu): goto L_2277E;
    case RC_ADDR(0x00022782u): goto L_22782;
    case RC_ADDR(0x00022788u): goto L_22788;
    case RC_ADDR(0x0002278cu): goto L_2278C;
    case RC_ADDR(0x00022790u): goto L_22790;
    case RC_ADDR(0x00022792u): goto L_22792;
    case RC_ADDR(0x00022796u): goto L_22796;
    case RC_ADDR(0x0002279au): goto L_2279A;
    case RC_ADDR(0x0002279eu): goto L_2279E;
    case RC_ADDR(0x000227a4u): goto L_227A4;
    case RC_ADDR(0x000227a8u): goto L_227A8;
    case RC_ADDR(0x000227acu): goto L_227AC;
    case RC_ADDR(0x000227b0u): goto L_227B0;
    case RC_ADDR(0x000227b4u): goto L_227B4;
    case RC_ADDR(0x000227b8u): goto L_227B8;
    case RC_ADDR(0x000227bcu): goto L_227BC;
    case RC_ADDR(0x000227c0u): goto L_227C0;
    case RC_ADDR(0x000227c4u): goto L_227C4;
    case RC_ADDR(0x000227c8u): goto L_227C8;
    case RC_ADDR(0x000227ccu): goto L_227CC;
    case RC_ADDR(0x000227ceu): goto L_227CE;
    case RC_ADDR(0x000227d2u): goto L_227D2;
    case RC_ADDR(0x000227d6u): goto L_227D6;
    case RC_ADDR(0x000227dau): goto L_227DA;
    case RC_ADDR(0x000227deu): goto L_227DE;
    case RC_ADDR(0x000227e0u): goto L_227E0;
    case RC_ADDR(0x000227e4u): goto L_227E4;
    case RC_ADDR(0x000227e6u): goto L_227E6;
    case RC_ADDR(0x000227eau): goto L_227EA;
    case RC_ADDR(0x000227eeu): goto L_227EE;
    case RC_ADDR(0x000227f0u): goto L_227F0;
    case RC_ADDR(0x000227f4u): goto L_227F4;
    case RC_ADDR(0x000227f6u): goto L_227F6;
    case RC_ADDR(0x000227fau): goto L_227FA;
    case RC_ADDR(0x000227feu): goto L_227FE;
    case RC_ADDR(0x00022802u): goto L_22802;
    case RC_ADDR(0x00022806u): goto L_22806;
    case RC_ADDR(0x00022808u): goto L_22808;
    case RC_ADDR(0x0002280cu): goto L_2280C;
    case RC_ADDR(0x0002280eu): goto L_2280E;
    case RC_ADDR(0x00022812u): goto L_22812;
    case RC_ADDR(0x00022814u): goto L_22814;
    case RC_ADDR(0x00022816u): goto L_22816;
    case RC_ADDR(0x0002281au): goto L_2281A;
    case RC_ADDR(0x0002281eu): goto L_2281E;
    case RC_ADDR(0x00022820u): goto L_22820;
    case RC_ADDR(0x00022824u): goto L_22824;
    case RC_ADDR(0x00022826u): goto L_22826;
    case RC_ADDR(0x00022828u): goto L_22828;
    case RC_ADDR(0x0002282au): goto L_2282A;
    case RC_ADDR(0x0002282cu): goto L_2282C;
    case RC_ADDR(0x00022830u): goto L_22830;
    case RC_ADDR(0x00022834u): goto L_22834;
    case RC_ADDR(0x00022838u): goto L_22838;
    case RC_ADDR(0x0002283cu): goto L_2283C;
    case RC_ADDR(0x00022840u): goto L_22840;
    case RC_ADDR(0x00022846u): goto L_22846;
    case RC_ADDR(0x00022848u): goto L_22848;
    case RC_ADDR(0x0002284eu): goto L_2284E;
    case RC_ADDR(0x00022852u): goto L_22852;
    case RC_ADDR(0x00022858u): goto L_22858;
    case RC_ADDR(0x0002285cu): goto L_2285C;
    case RC_ADDR(0x00022860u): goto L_22860;
    case RC_ADDR(0x00022864u): goto L_22864;
    case RC_ADDR(0x00022868u): goto L_22868;
    case RC_ADDR(0x0002286eu): goto L_2286E;
    case RC_ADDR(0x00022872u): goto L_22872;
    case RC_ADDR(0x00022876u): goto L_22876;
    case RC_ADDR(0x0002287cu): goto L_2287C;
    case RC_ADDR(0x00022880u): goto L_22880;
    case RC_ADDR(0x00022884u): goto L_22884;
    case RC_ADDR(0x00022888u): goto L_22888;
    case RC_ADDR(0x0002288au): goto L_2288A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2273E:
    /* 0002273e   4  movem.l { D0 D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 A7 },-(SP) */
    c->pc = RC_ADDR(0x0002273eu);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[4]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[0]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[0]);
    c->a[7] = t3;

L_22742:
    /* 00022742   4  pea (00000001).l */
    c->pc = RC_ADDR(0x00022742u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000001u);

L_22746:
    /* 00022746   4  pea (fffffffc,A5) */
    c->pc = RC_ADDR(0x00022746u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x4u));

L_2274A:
    /* 0002274a   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0002274au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2274E:
    /* 0002274e   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x0002274eu);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x00022752u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_22752:
    /* 00022752   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00022752u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_22756:
    /* 00022756   4  pea (00000004).l */
    c->pc = RC_ADDR(0x00022756u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000004u);

L_2275A:
    /* 0002275a   4  pea (4510,A4) */
    c->pc = RC_ADDR(0x0002275au);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x4510u));

L_2275E:
    /* 0002275e   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0002275eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22762:
    /* 00022762   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x00022762u);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x00022766u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_22766:
    /* 00022766   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00022766u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_2276A:
    /* 0002276a   4  move.l (450c,A4),D0 */
    c->pc = RC_ADDR(0x0002276au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x450cu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_2276E:
    /* 0002276e   2  subq.l #7,D0 */
    c->pc = RC_ADDR(0x0002276eu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000007u;
    rc_flags_sub(c, RC_L, t1, 0x00000007u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_22770:
    /* 00022770   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00022770u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22772:
    /* 00022772   4  move.l (4514,A4),-(A7) */
    c->pc = RC_ADDR(0x00022772u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4514u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22776:
    /* 00022776   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00022776u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2277A:
    /* 0002277a   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x0002277au);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x0002277eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_2277E:
    /* 0002277e   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0002277eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_22782:
    /* 00022782   6  pea (00010001).l */
    c->pc = RC_ADDR(0x00022782u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010001u);

L_22788:
    /* 00022788   4  move.l (4510,A4),-(A7) */
    c->pc = RC_ADDR(0x00022788u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4510u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2278C:
    /* 0002278c   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x0002278cu);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x00022790u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_22790:
    /* 00022790   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00022790u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_22792:
    /* 00022792   4  move.l D0,(ffffd4aa,A4) */
    c->pc = RC_ADDR(0x00022792u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x2b56u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_22796:
    /* 00022796   4  move.l D0,(34b2,A4) */
    c->pc = RC_ADDR(0x00022796u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x34b2u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_2279A:
    /* 0002279a   4  jsr (000225ba) */
    c->pc = RC_ADDR(0x0002279au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0002279eu));
    rc_depth++;
    c->pc = RC_ADDR(0x000225bau);
    return;

L_2279E:
    /* 0002279e   6  move.w #1,(451e,A4) */
    c->pc = RC_ADDR(0x0002279eu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x451eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_227A4:
    /* 000227a4   4  clr.w (4506,A4) */
    c->pc = RC_ADDR(0x000227a4u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x4506u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_227A8:
    /* 000227a8   4  clr.l (4508,A4) */
    c->pc = RC_ADDR(0x000227a8u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] + 0x4508u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_227AC:
    /* 000227ac   4  tst.w (451e,A4) */
    c->pc = RC_ADDR(0x000227acu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x451eu));
    rc_set_nzvc(c, t0, RC_W);

L_227B0:
    /* 000227b0   4  beq 00022864 */
    c->pc = RC_ADDR(0x000227b0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_22864;

L_227B4:
    /* 000227b4   4  bsr 00022634 */
    c->pc = RC_ADDR(0x000227b4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000227b8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00022634u);
    return;

L_227B8:
    /* 000227b8   4  move.w D0,(355a,A4) */
    c->pc = RC_ADDR(0x000227b8u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x355au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_227BC:
    /* 000227bc   4  cmp.w (354e,A4),D0 */
    c->pc = RC_ADDR(0x000227bcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x354eu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_227C0:
    /* 000227c0   4  beq 00022864 */
    c->pc = RC_ADDR(0x000227c0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_22864;

L_227C4:
    /* 000227c4   4  move.b D0,(451c,A4) */
    c->pc = RC_ADDR(0x000227c4u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_B);
    rc_wr8(c, m, (c->a[4] + 0x451cu), t0);
    rc_set_nzvc(c, t0, RC_B);

L_227C8:
    /* 000227c8   4  movea.l (34b2,A4),A0 */
    c->pc = RC_ADDR(0x000227c8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x34b2u));
    c->a[0] = t0;

L_227CC:
    /* 000227cc   2  move.b D0,(A0)+ */
    c->pc = RC_ADDR(0x000227ccu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_B);
    t3 = c->a[0];
    c->a[0] += 1u;
    rc_wr8(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_B);

L_227CE:
    /* 000227ce   4  move.l A0,(34b2,A4) */
    c->pc = RC_ADDR(0x000227ceu);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x34b2u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_227D2:
    /* 000227d2   4  bsr 00022634 */
    c->pc = RC_ADDR(0x000227d2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000227d6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00022634u);
    return;

L_227D6:
    /* 000227d6   4  move.w D0,(355c,A4) */
    c->pc = RC_ADDR(0x000227d6u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x355cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_227DA:
    /* 000227da   4  cmp.w (3552,A4),D0 */
    c->pc = RC_ADDR(0x000227dau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3552u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_227DE:
    /* 000227de   2  beq 0002285c */
    c->pc = RC_ADDR(0x000227deu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2285C;

L_227E0:
    /* 000227e0   4  cmp.w (354e,A4),D0 */
    c->pc = RC_ADDR(0x000227e0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x354eu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_227E4:
    /* 000227e4   2  beq 00022864 */
    c->pc = RC_ADDR(0x000227e4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_22864;

L_227E6:
    /* 000227e6   4  lea (3566,A4),A0 */
    c->pc = RC_ADDR(0x000227e6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x3566u);

L_227EA:
    /* 000227ea   4  cmp.w (3554,A4),D0 */
    c->pc = RC_ADDR(0x000227eau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3554u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_227EE:
    /* 000227ee   2  blt 000227fa */
    c->pc = RC_ADDR(0x000227eeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_227FA;

L_227F0:
    /* 000227f0   4  move.b (451c,A4),(A0) */
    c->pc = RC_ADDR(0x000227f0u);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[4] + 0x451cu));
    rc_wr8(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_B);

L_227F4:
    /* 000227f4   2  addq.l #1,A0 */
    c->pc = RC_ADDR(0x000227f4u);
    rc_step(c, m, 8);
    c->a[0] += 0x00000001u;

L_227F6:
    /* 000227f6   4  move.w (355a,A4),D0 */
    c->pc = RC_ADDR(0x000227f6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x355au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_227FA:
    /* 000227fa   4  movea.l (355e,A4),A1 */
    c->pc = RC_ADDR(0x000227fau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x355eu));
    c->a[1] = t0;

L_227FE:
    /* 000227fe   4  movea.l (3556,A4),A2 */
    c->pc = RC_ADDR(0x000227feu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3556u));
    c->a[2] = t0;

L_22802:
    /* 00022802   4  cmpi.w #ff,D0 */
    c->pc = RC_ADDR(0x00022802u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t0, 0x000000ffu);

L_22806:
    /* 00022806   2  ble 00022814 */
    c->pc = RC_ADDR(0x00022806u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_22814;

L_22808:
    /* 00022808   4  move.b (0,A1,D0.w),(A0)+ */
    c->pc = RC_ADDR(0x00022808u);
    rc_step(c, m, 18);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[1] + 0x0u + t4));
    t3 = c->a[0];
    c->a[0] += 1u;
    rc_wr8(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_B);

L_2280C:
    /* 0002280c   2  lsl.w #1,D0 */
    c->pc = RC_ADDR(0x0002280cu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_2280E:
    /* 0002280e   4  move.w (0,A2,D0.w),D0 */
    c->pc = RC_ADDR(0x0002280eu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (c->a[2] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_22812:
    /* 00022812   2  bra 00022802 */
    c->pc = RC_ADDR(0x00022812u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_22802;

L_22814:
    /* 00022814   2  move.b D0,(A0) */
    c->pc = RC_ADDR(0x00022814u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_B);
    rc_wr8(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_B);

L_22816:
    /* 00022816   4  move.b (A0),(451c,A4) */
    c->pc = RC_ADDR(0x00022816u);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_wr8(c, m, (c->a[4] + 0x451cu), t0);
    rc_set_nzvc(c, t0, RC_B);

L_2281A:
    /* 0002281a   4  movea.l (34b2,A4),A1 */
    c->pc = RC_ADDR(0x0002281au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x34b2u));
    c->a[1] = t0;

L_2281E:
    /* 0002281e   2  move.l A0,D0 */
    c->pc = RC_ADDR(0x0002281eu);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 0, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_22820:
    /* 00022820   4  lea (3566,A4),A2 */
    c->pc = RC_ADDR(0x00022820u);
    rc_step(c, m, 8);
    c->a[2] = (c->a[4] + 0x3566u);

L_22824:
    /* 00022824   2  sub.l A2,D0 */
    c->pc = RC_ADDR(0x00022824u);
    rc_step(c, m, 6);
    t0 = rc_a_get(c, 2, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_22826:
    /* 00022826   2  bmi 00022830 */
    c->pc = RC_ADDR(0x00022826u);
    rc_step(c, m, 10);
    if (rc_cond(c, 11)) goto L_22830;

L_22828:
    /* 00022828   2  move.b (A0),(A1)+ */
    c->pc = RC_ADDR(0x00022828u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    t3 = c->a[1];
    c->a[1] += 1u;
    rc_wr8(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_B);

L_2282A:
    /* 0002282a   2  subq.l #1,A0 */
    c->pc = RC_ADDR(0x0002282au);
    rc_step(c, m, 8);
    c->a[0] -= 0x00000001u;

L_2282C:
    /* 0002282c   4  dbf D0,00022828 */
    c->pc = RC_ADDR(0x0002282cu);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_22828; }
    }

L_22830:
    /* 00022830   4  move.l A1,(34b2,A4) */
    c->pc = RC_ADDR(0x00022830u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x34b2u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_22834:
    /* 00022834   4  movea.l (3556,A4),A0 */
    c->pc = RC_ADDR(0x00022834u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3556u));
    c->a[0] = t0;

L_22838:
    /* 00022838   4  movea.l (355e,A4),A1 */
    c->pc = RC_ADDR(0x00022838u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x355eu));
    c->a[1] = t0;

L_2283C:
    /* 0002283c   4  move.w (3554,A4),D0 */
    c->pc = RC_ADDR(0x0002283cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3554u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_22840:
    /* 00022840   6  move.b (451c,A4),(0,A1,D0.w) */
    c->pc = RC_ADDR(0x00022840u);
    rc_step(c, m, 22);
    t0 = rc_rd8(c, m, (c->a[4] + 0x451cu));
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr8(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_22846:
    /* 00022846   2  lsl.w #1,D0 */
    c->pc = RC_ADDR(0x00022846u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_22848:
    /* 00022848   6  move.w (355a,A4),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00022848u);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[4] + 0x355au));
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2284E:
    /* 0002284e   4  addq.w #1,(3554,A4) */
    c->pc = RC_ADDR(0x0002284eu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x3554u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_22852:
    /* 00022852   6  move.w (355c,A4),(355a,A4) */
    c->pc = RC_ADDR(0x00022852u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x355cu));
    rc_wr16(c, m, (c->a[4] + 0x355au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_22858:
    /* 00022858   4  bra 000227d2 */
    c->pc = RC_ADDR(0x00022858u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_227D2;

L_2285C:
    /* 0002285c   4  bsr 000225ee */
    c->pc = RC_ADDR(0x0002285cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00022860u));
    rc_depth++;
    c->pc = RC_ADDR(0x000225eeu);
    return;

L_22860:
    /* 00022860   4  bra 000227ac */
    c->pc = RC_ADDR(0x00022860u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_227AC;

L_22864:
    /* 00022864   4  movem.l (SP)+,{ D0 D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 A7 } */
    c->pc = RC_ADDR(0x00022864u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[3] = t0;
    t3 += 4u;
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
    c->d[7] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[6] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[7] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_22868:
    /* 00022868   6  move.l (ffffd4aa,A4),(34b2,A4) */
    c->pc = RC_ADDR(0x00022868u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2b56u));
    rc_wr32(c, m, (c->a[4] + 0x34b2u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_2286E:
    /* 0002286e   4  movea.l (34b2,A4),A0 */
    c->pc = RC_ADDR(0x0002286eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x34b2u));
    c->a[0] = t0;

L_22872:
    /* 00022872   4  adda.l (4510,A4),A0 */
    c->pc = RC_ADDR(0x00022872u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4510u));
    c->a[0] += t0;

L_22876:
    /* 00022876   6  move.b (fffffffc,A5),(ffffffff,A0) */
    c->pc = RC_ADDR(0x00022876u);
    rc_step(c, m, 20);
    t0 = rc_rd8(c, m, (c->a[5] - 0x4u));
    rc_wr8(c, m, (c->a[0] - 0x1u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_2287C:
    /* 0002287c   4  move.l (450c,A4),-(A7) */
    c->pc = RC_ADDR(0x0002287cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x450cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22880:
    /* 00022880   4  move.l (4518,A4),-(A7) */
    c->pc = RC_ADDR(0x00022880u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4518u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22884:
    /* 00022884   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x00022884u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x00022888u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_22888:
    /* 00022888   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00022888u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_2288A:
    /* 0002288a   4  bra 0002273a */
    c->pc = RC_ADDR(0x0002288au);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0002273au);
    return;

}
