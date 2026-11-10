/* fn_0001e504 - 594 byte(s), 163 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001e504(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case 0x0001e504u: goto L_1E504;
    case 0x0001e508u: goto L_1E508;
    case 0x0001e50cu: goto L_1E50C;
    case 0x0001e510u: goto L_1E510;
    case 0x0001e514u: goto L_1E514;
    case 0x0001e518u: goto L_1E518;
    case 0x0001e51cu: goto L_1E51C;
    case 0x0001e51eu: goto L_1E51E;
    case 0x0001e520u: goto L_1E520;
    case 0x0001e522u: goto L_1E522;
    case 0x0001e524u: goto L_1E524;
    case 0x0001e528u: goto L_1E528;
    case 0x0001e52au: goto L_1E52A;
    case 0x0001e52cu: goto L_1E52C;
    case 0x0001e52eu: goto L_1E52E;
    case 0x0001e530u: goto L_1E530;
    case 0x0001e532u: goto L_1E532;
    case 0x0001e536u: goto L_1E536;
    case 0x0001e538u: goto L_1E538;
    case 0x0001e53au: goto L_1E53A;
    case 0x0001e53eu: goto L_1E53E;
    case 0x0001e546u: goto L_1E546;
    case 0x0001e54eu: goto L_1E54E;
    case 0x0001e554u: goto L_1E554;
    case 0x0001e55au: goto L_1E55A;
    case 0x0001e560u: goto L_1E560;
    case 0x0001e566u: goto L_1E566;
    case 0x0001e56cu: goto L_1E56C;
    case 0x0001e572u: goto L_1E572;
    case 0x0001e576u: goto L_1E576;
    case 0x0001e57au: goto L_1E57A;
    case 0x0001e57cu: goto L_1E57C;
    case 0x0001e580u: goto L_1E580;
    case 0x0001e582u: goto L_1E582;
    case 0x0001e584u: goto L_1E584;
    case 0x0001e586u: goto L_1E586;
    case 0x0001e588u: goto L_1E588;
    case 0x0001e58cu: goto L_1E58C;
    case 0x0001e58eu: goto L_1E58E;
    case 0x0001e592u: goto L_1E592;
    case 0x0001e594u: goto L_1E594;
    case 0x0001e596u: goto L_1E596;
    case 0x0001e59au: goto L_1E59A;
    case 0x0001e59cu: goto L_1E59C;
    case 0x0001e59eu: goto L_1E59E;
    case 0x0001e5a0u: goto L_1E5A0;
    case 0x0001e5a2u: goto L_1E5A2;
    case 0x0001e5a4u: goto L_1E5A4;
    case 0x0001e5a8u: goto L_1E5A8;
    case 0x0001e5aeu: goto L_1E5AE;
    case 0x0001e5b0u: goto L_1E5B0;
    case 0x0001e5b4u: goto L_1E5B4;
    case 0x0001e5b6u: goto L_1E5B6;
    case 0x0001e5bau: goto L_1E5BA;
    case 0x0001e5beu: goto L_1E5BE;
    case 0x0001e5c0u: goto L_1E5C0;
    case 0x0001e5c4u: goto L_1E5C4;
    case 0x0001e5c8u: goto L_1E5C8;
    case 0x0001e5cau: goto L_1E5CA;
    case 0x0001e5ccu: goto L_1E5CC;
    case 0x0001e5d2u: goto L_1E5D2;
    case 0x0001e5d6u: goto L_1E5D6;
    case 0x0001e5d8u: goto L_1E5D8;
    case 0x0001e5deu: goto L_1E5DE;
    case 0x0001e5e2u: goto L_1E5E2;
    case 0x0001e5e6u: goto L_1E5E6;
    case 0x0001e5e8u: goto L_1E5E8;
    case 0x0001e5eau: goto L_1E5EA;
    case 0x0001e5f0u: goto L_1E5F0;
    case 0x0001e5f4u: goto L_1E5F4;
    case 0x0001e5f6u: goto L_1E5F6;
    case 0x0001e5fcu: goto L_1E5FC;
    case 0x0001e600u: goto L_1E600;
    case 0x0001e604u: goto L_1E604;
    case 0x0001e606u: goto L_1E606;
    case 0x0001e608u: goto L_1E608;
    case 0x0001e60eu: goto L_1E60E;
    case 0x0001e612u: goto L_1E612;
    case 0x0001e614u: goto L_1E614;
    case 0x0001e61au: goto L_1E61A;
    case 0x0001e620u: goto L_1E620;
    case 0x0001e626u: goto L_1E626;
    case 0x0001e62cu: goto L_1E62C;
    case 0x0001e632u: goto L_1E632;
    case 0x0001e636u: goto L_1E636;
    case 0x0001e638u: goto L_1E638;
    case 0x0001e63cu: goto L_1E63C;
    case 0x0001e63eu: goto L_1E63E;
    case 0x0001e640u: goto L_1E640;
    case 0x0001e642u: goto L_1E642;
    case 0x0001e646u: goto L_1E646;
    case 0x0001e64au: goto L_1E64A;
    case 0x0001e650u: goto L_1E650;
    case 0x0001e652u: goto L_1E652;
    case 0x0001e654u: goto L_1E654;
    case 0x0001e656u: goto L_1E656;
    case 0x0001e65au: goto L_1E65A;
    case 0x0001e65cu: goto L_1E65C;
    case 0x0001e662u: goto L_1E662;
    case 0x0001e664u: goto L_1E664;
    case 0x0001e668u: goto L_1E668;
    case 0x0001e66au: goto L_1E66A;
    case 0x0001e66eu: goto L_1E66E;
    case 0x0001e674u: goto L_1E674;
    case 0x0001e676u: goto L_1E676;
    case 0x0001e67au: goto L_1E67A;
    case 0x0001e67eu: goto L_1E67E;
    case 0x0001e680u: goto L_1E680;
    case 0x0001e682u: goto L_1E682;
    case 0x0001e688u: goto L_1E688;
    case 0x0001e68cu: goto L_1E68C;
    case 0x0001e68eu: goto L_1E68E;
    case 0x0001e694u: goto L_1E694;
    case 0x0001e698u: goto L_1E698;
    case 0x0001e69cu: goto L_1E69C;
    case 0x0001e69eu: goto L_1E69E;
    case 0x0001e6a0u: goto L_1E6A0;
    case 0x0001e6a6u: goto L_1E6A6;
    case 0x0001e6aau: goto L_1E6AA;
    case 0x0001e6acu: goto L_1E6AC;
    case 0x0001e6b2u: goto L_1E6B2;
    case 0x0001e6b8u: goto L_1E6B8;
    case 0x0001e6beu: goto L_1E6BE;
    case 0x0001e6c4u: goto L_1E6C4;
    case 0x0001e6cau: goto L_1E6CA;
    case 0x0001e6ceu: goto L_1E6CE;
    case 0x0001e6d2u: goto L_1E6D2;
    case 0x0001e6d4u: goto L_1E6D4;
    case 0x0001e6d6u: goto L_1E6D6;
    case 0x0001e6d8u: goto L_1E6D8;
    case 0x0001e6dau: goto L_1E6DA;
    case 0x0001e6deu: goto L_1E6DE;
    case 0x0001e6e0u: goto L_1E6E0;
    case 0x0001e6e2u: goto L_1E6E2;
    case 0x0001e6e6u: goto L_1E6E6;
    case 0x0001e6e8u: goto L_1E6E8;
    case 0x0001e6eau: goto L_1E6EA;
    case 0x0001e6ecu: goto L_1E6EC;
    case 0x0001e6eeu: goto L_1E6EE;
    case 0x0001e6f2u: goto L_1E6F2;
    case 0x0001e6f6u: goto L_1E6F6;
    case 0x0001e6f8u: goto L_1E6F8;
    case 0x0001e6fau: goto L_1E6FA;
    case 0x0001e700u: goto L_1E700;
    case 0x0001e706u: goto L_1E706;
    case 0x0001e70au: goto L_1E70A;
    case 0x0001e70cu: goto L_1E70C;
    case 0x0001e70eu: goto L_1E70E;
    case 0x0001e710u: goto L_1E710;
    case 0x0001e716u: goto L_1E716;
    case 0x0001e71cu: goto L_1E71C;
    case 0x0001e724u: goto L_1E724;
    case 0x0001e728u: goto L_1E728;
    case 0x0001e72eu: goto L_1E72E;
    case 0x0001e730u: goto L_1E730;
    case 0x0001e734u: goto L_1E734;
    case 0x0001e73cu: goto L_1E73C;
    case 0x0001e740u: goto L_1E740;
    case 0x0001e744u: goto L_1E744;
    case 0x0001e746u: goto L_1E746;
    case 0x0001e74au: goto L_1E74A;
    case 0x0001e750u: goto L_1E750;
    case 0x0001e752u: goto L_1E752;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1E504:
    /* 0001e504   4  link.w A5,#0 */
    c->pc = 0x0001e504u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1E508:
    /* 0001e508   4  movem.l { D4 D5 A1 A2 A3 },-(SP) */
    c->pc = 0x0001e508u;
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

L_1E50C:
    /* 0001e50c   4  pea (00000002).l */
    c->pc = 0x0001e50cu;
    rc_push32(c, m, 0x00000002u);

L_1E510:
    /* 0001e510   4  movea.l (8,A5),A0 */
    c->pc = 0x0001e510u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1E514:
    /* 0001e514   4  movea.l (8,A5),A1 */
    c->pc = 0x0001e514u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[1] = t0;

L_1E518:
    /* 0001e518   4  move.w (2,A0),D0 */
    c->pc = 0x0001e518u;
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E51C:
    /* 0001e51c   2  mulu.w (A1),D0 */
    c->pc = 0x0001e51cu;
    t0 = rc_rd16(c, m, c->a[1]);
    rc_mulu(c, 0, t0);

L_1E51E:
    /* 0001e51e   2  moveq #0,D1 */
    c->pc = 0x0001e51eu;
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1E520:
    /* 0001e520   2  move.w D0,D1 */
    c->pc = 0x0001e520u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E522:
    /* 0001e522   2  move.l D1,-(A7) */
    c->pc = 0x0001e522u;
    t0 = rc_d_get(c, 1, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E524:
    /* 0001e524   4  jsr (ffff8338,A4) */
    c->pc = 0x0001e524u;
    /* vector 137: exec.library -198 */
    c->pc = 0x0001e528u;
    rc_os_call(c, m, 0, -198);

L_1E528:
    /* 0001e528   2  addq.w #8,A7 */
    c->pc = 0x0001e528u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1E52A:
    /* 0001e52a   2  movea.l D0,A2 */
    c->pc = 0x0001e52au;
    t0 = rc_d_get(c, 0, RC_L);
    c->a[2] = t0;

L_1E52C:
    /* 0001e52c   2  move.l A2,D0 */
    c->pc = 0x0001e52cu;
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E52E:
    /* 0001e52e   2  bne 0001e53a */
    c->pc = 0x0001e52eu;
    if (rc_cond(c, 6)) goto L_1E53A;

L_1E530:
    /* 0001e530   2  moveq #0,D0 */
    c->pc = 0x0001e530u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1E532:
    /* 0001e532   4  movem.l (SP)+,{ D4 D5 D6 A2 A3 } */
    c->pc = 0x0001e532u;
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

L_1E536:
    /* 0001e536   2  unlk A5 */
    c->pc = 0x0001e536u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1E538:
    /* 0001e538   2  rts */
    c->pc = 0x0001e538u;
    rc_ret(c, m);
    return;

L_1E53A:
    /* 0001e53a   4  jsr (ffff83aa,A4) */
    c->pc = 0x0001e53au;
    /* vector 156 */
    rc_push32(c, m, 0x0001e53eu);
    rc_depth++;
    c->pc = 0x00021948u;
    return;

L_1E53E:
    /* 0001e53e   8  move.w #ffff,(00dff046).l */
    c->pc = 0x0001e53eu;
    t0 = 0x0000ffffu;
    rc_wr16(c, m, 0x00dff046u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E546:
    /* 0001e546   8  move.w #ffff,(00dff044).l */
    c->pc = 0x0001e546u;
    t0 = 0x0000ffffu;
    rc_wr16(c, m, 0x00dff044u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E54E:
    /* 0001e54e   6  clr.w (00dff066).l */
    c->pc = 0x0001e54eu;
    rc_wr16(c, m, 0x00dff066u, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1E554:
    /* 0001e554   6  clr.w (00dff042).l */
    c->pc = 0x0001e554u;
    rc_wr16(c, m, 0x00dff042u, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1E55A:
    /* 0001e55a   6  clr.w (00dff040).l */
    c->pc = 0x0001e55au;
    rc_wr16(c, m, 0x00dff040u, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1E560:
    /* 0001e560   6  clr.w (00dff060).l */
    c->pc = 0x0001e560u;
    rc_wr16(c, m, 0x00dff060u, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1E566:
    /* 0001e566   6  clr.w (00dff062).l */
    c->pc = 0x0001e566u;
    rc_wr16(c, m, 0x00dff062u, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1E56C:
    /* 0001e56c   6  clr.w (00dff064).l */
    c->pc = 0x0001e56cu;
    rc_wr16(c, m, 0x00dff064u, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1E572:
    /* 0001e572   4  movea.l (8,A5),A0 */
    c->pc = 0x0001e572u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1E576:
    /* 0001e576   4  move.w (2,A0),D0 */
    c->pc = 0x0001e576u;
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E57A:
    /* 0001e57a   2  asl.w #6,D0 */
    c->pc = 0x0001e57au;
    c->d[0] = rc_shift(c, 0, 1, 0x00000006u, rc_d_get(c, 0, RC_W), RC_W);

L_1E57C:
    /* 0001e57c   4  movea.l (8,A5),A0 */
    c->pc = 0x0001e57cu;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1E580:
    /* 0001e580   2  move.w (A0),D1 */
    c->pc = 0x0001e580u;
    t0 = rc_rd16(c, m, c->a[0]);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E582:
    /* 0001e582   2  lsr.w #1,D1 */
    c->pc = 0x0001e582u;
    c->d[1] = rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W);

L_1E584:
    /* 0001e584   2  move.w D0,D5 */
    c->pc = 0x0001e584u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 5, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E586:
    /* 0001e586   2  or.w D1,D5 */
    c->pc = 0x0001e586u;
    t0 = rc_d_get(c, 1, RC_W);
    t2 = t0 | rc_d_get(c, 5, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 5, RC_W, t2);

L_1E588:
    /* 0001e588   4  movea.l (8,A5),A0 */
    c->pc = 0x0001e588u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1E58C:
    /* 0001e58c   2  moveq #0,D0 */
    c->pc = 0x0001e58cu;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1E58E:
    /* 0001e58e   4  move.b (5,A0),D0 */
    c->pc = 0x0001e58eu;
    t0 = rc_rd8(c, m, (c->a[0] + 0x5u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1E592:
    /* 0001e592   2  subq.w #1,D0 */
    c->pc = 0x0001e592u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1E594:
    /* 0001e594   2  move.b D0,D4 */
    c->pc = 0x0001e594u;
    t0 = rc_d_get(c, 0, RC_B);
    rc_d_set(c, 4, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1E596:
    /* 0001e596   4  cmp.b #2,D4 */
    c->pc = 0x0001e596u;
    t0 = 0x00000002u;
    t1 = rc_d_get(c, 4, RC_B);
    rc_cmp(c, RC_B, t1, t0);

L_1E59A:
    /* 0001e59a   2  bls 0001e59e */
    c->pc = 0x0001e59au;
    if (rc_cond(c, 3)) goto L_1E59E;

L_1E59C:
    /* 0001e59c   2  moveq #2,D4 */
    c->pc = 0x0001e59cu;
    c->d[4] = 0x00000002u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_1E59E:
    /* 0001e59e   2  moveq #0,D0 */
    c->pc = 0x0001e59eu;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1E5A0:
    /* 0001e5a0   2  move.b D4,D0 */
    c->pc = 0x0001e5a0u;
    t0 = rc_d_get(c, 4, RC_B);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1E5A2:
    /* 0001e5a2   2  asl.l #3,D0 */
    c->pc = 0x0001e5a2u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000003u, rc_d_get(c, 0, RC_L), RC_L);

L_1E5A4:
    /* 0001e5a4   4  move.l (c,A5),D1 */
    c->pc = 0x0001e5a4u;
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E5A8:
    /* 0001e5a8   6  and.l #7,D1 */
    c->pc = 0x0001e5a8u;
    t0 = 0x00000007u;
    t2 = t0 & rc_d_get(c, 1, RC_L);
    rc_set_nzvc(c, t2, RC_L);
    rc_d_set(c, 1, RC_L, t2);

L_1E5AE:
    /* 0001e5ae   2  add.l D1,D0 */
    c->pc = 0x0001e5aeu;
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1E5B0:
    /* 0001e5b0   4  lea (ffffcb88,A4),A0 */
    c->pc = 0x0001e5b0u;
    c->a[0] = (c->a[4] - 0x3478u);

L_1E5B4:
    /* 0001e5b4   2  moveq #0,D1 */
    c->pc = 0x0001e5b4u;
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1E5B6:
    /* 0001e5b6   4  move.b (0,A0,D0.w),D1 */
    c->pc = 0x0001e5b6u;
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1E5BA:
    /* 0001e5ba   4  bset #8,D1 */
    c->pc = 0x0001e5bau;
    t4 = 0x00000008u;
    t0 = rc_d_get(c, 1, RC_B);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 1, RC_B, t2);

L_1E5BE:
    /* 0001e5be   2  move.w D1,D6 */
    c->pc = 0x0001e5beu;
    t0 = rc_d_get(c, 1, RC_W);
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E5C0:
    /* 0001e5c0   4  movea.l (8,A5),A0 */
    c->pc = 0x0001e5c0u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1E5C4:
    /* 0001e5c4   4  movea.l (8,A0),A3 */
    c->pc = 0x0001e5c4u;
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    c->a[3] = t0;

L_1E5C8:
    /* 0001e5c8   2  move.l A3,D0 */
    c->pc = 0x0001e5c8u;
    t0 = rc_a_get(c, 3, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E5CA:
    /* 0001e5ca   2  ble 0001e5d8 */
    c->pc = 0x0001e5cau;
    if (rc_cond(c, 15)) goto L_1E5D8;

L_1E5CC:
    /* 0001e5cc   6  move.l A3,(00dff050).l */
    c->pc = 0x0001e5ccu;
    t0 = rc_a_get(c, 3, RC_L);
    rc_wr32(c, m, 0x00dff050u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E5D2:
    /* 0001e5d2   4  bset #b,D6 */
    c->pc = 0x0001e5d2u;
    t4 = 0x0000000bu;
    t0 = rc_d_get(c, 6, RC_B);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 6, RC_B, t2);

L_1E5D6:
    /* 0001e5d6   2  bra 0001e5de */
    c->pc = 0x0001e5d6u;
    goto L_1E5DE;

L_1E5D8:
    /* 0001e5d8   6  move.w A3,(00dff074).l */
    c->pc = 0x0001e5d8u;
    t0 = rc_a_get(c, 3, RC_W);
    rc_wr16(c, m, 0x00dff074u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E5DE:
    /* 0001e5de   4  movea.l (8,A5),A0 */
    c->pc = 0x0001e5deu;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1E5E2:
    /* 0001e5e2   4  movea.l (c,A0),A3 */
    c->pc = 0x0001e5e2u;
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[3] = t0;

L_1E5E6:
    /* 0001e5e6   2  move.l A3,D0 */
    c->pc = 0x0001e5e6u;
    t0 = rc_a_get(c, 3, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E5E8:
    /* 0001e5e8   2  ble 0001e5f6 */
    c->pc = 0x0001e5e8u;
    if (rc_cond(c, 15)) goto L_1E5F6;

L_1E5EA:
    /* 0001e5ea   6  move.l A3,(00dff04c).l */
    c->pc = 0x0001e5eau;
    t0 = rc_a_get(c, 3, RC_L);
    rc_wr32(c, m, 0x00dff04cu, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E5F0:
    /* 0001e5f0   4  bset #a,D6 */
    c->pc = 0x0001e5f0u;
    t4 = 0x0000000au;
    t0 = rc_d_get(c, 6, RC_B);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 6, RC_B, t2);

L_1E5F4:
    /* 0001e5f4   2  bra 0001e5fc */
    c->pc = 0x0001e5f4u;
    goto L_1E5FC;

L_1E5F6:
    /* 0001e5f6   6  move.w A3,(00dff072).l */
    c->pc = 0x0001e5f6u;
    t0 = rc_a_get(c, 3, RC_W);
    rc_wr16(c, m, 0x00dff072u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E5FC:
    /* 0001e5fc   4  movea.l (8,A5),A0 */
    c->pc = 0x0001e5fcu;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1E600:
    /* 0001e600   4  movea.l (10,A0),A3 */
    c->pc = 0x0001e600u;
    t0 = rc_rd32(c, m, (c->a[0] + 0x10u));
    c->a[3] = t0;

L_1E604:
    /* 0001e604   2  move.l A3,D0 */
    c->pc = 0x0001e604u;
    t0 = rc_a_get(c, 3, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E606:
    /* 0001e606   2  ble 0001e614 */
    c->pc = 0x0001e606u;
    if (rc_cond(c, 15)) goto L_1E614;

L_1E608:
    /* 0001e608   6  move.l A3,(00dff048).l */
    c->pc = 0x0001e608u;
    t0 = rc_a_get(c, 3, RC_L);
    rc_wr32(c, m, 0x00dff048u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E60E:
    /* 0001e60e   4  bset #9,D6 */
    c->pc = 0x0001e60eu;
    t4 = 0x00000009u;
    t0 = rc_d_get(c, 6, RC_B);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 6, RC_B, t2);

L_1E612:
    /* 0001e612   2  bra 0001e61a */
    c->pc = 0x0001e612u;
    goto L_1E61A;

L_1E614:
    /* 0001e614   6  move.w A3,(00dff070).l */
    c->pc = 0x0001e614u;
    t0 = rc_a_get(c, 3, RC_W);
    rc_wr16(c, m, 0x00dff070u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E61A:
    /* 0001e61a   6  move.l A2,(00dff054).l */
    c->pc = 0x0001e61au;
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff054u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E620:
    /* 0001e620   6  move.w D6,(00dff040).l */
    c->pc = 0x0001e620u;
    t0 = rc_d_get(c, 6, RC_W);
    rc_wr16(c, m, 0x00dff040u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E626:
    /* 0001e626   6  clr.w (00dff042).l */
    c->pc = 0x0001e626u;
    rc_wr16(c, m, 0x00dff042u, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1E62C:
    /* 0001e62c   6  move.w D5,(00dff058).l */
    c->pc = 0x0001e62cu;
    t0 = rc_d_get(c, 5, RC_W);
    rc_wr16(c, m, 0x00dff058u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E632:
    /* 0001e632   4  movea.l (8,A5),A0 */
    c->pc = 0x0001e632u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1E636:
    /* 0001e636   2  moveq #0,D0 */
    c->pc = 0x0001e636u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1E638:
    /* 0001e638   4  move.b (5,A0),D0 */
    c->pc = 0x0001e638u;
    t0 = rc_rd8(c, m, (c->a[0] + 0x5u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1E63C:
    /* 0001e63c   2  subq.w #3,D0 */
    c->pc = 0x0001e63cu;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000003u;
    rc_flags_sub(c, RC_W, t1, 0x00000003u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1E63E:
    /* 0001e63e   2  move.b D0,D4 */
    c->pc = 0x0001e63eu;
    t0 = rc_d_get(c, 0, RC_B);
    rc_d_set(c, 4, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1E640:
    /* 0001e640   2  tst.b D0 */
    c->pc = 0x0001e640u;
    t0 = rc_d_get(c, 0, RC_B);
    rc_set_nzvc(c, t0, RC_B);

L_1E642:
    /* 0001e642   4  ble 0001e6ca */
    c->pc = 0x0001e642u;
    if (rc_cond(c, 15)) goto L_1E6CA;

L_1E646:
    /* 0001e646   4  jsr (ffff83aa,A4) */
    c->pc = 0x0001e646u;
    /* vector 156 */
    rc_push32(c, m, 0x0001e64au);
    rc_depth++;
    c->pc = 0x00021948u;
    return;

L_1E64A:
    /* 0001e64a   6  clr.w (00dff040).l */
    c->pc = 0x0001e64au;
    rc_wr16(c, m, 0x00dff040u, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1E650:
    /* 0001e650   2  moveq #0,D0 */
    c->pc = 0x0001e650u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1E652:
    /* 0001e652   2  move.b D4,D0 */
    c->pc = 0x0001e652u;
    t0 = rc_d_get(c, 4, RC_B);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1E654:
    /* 0001e654   2  asl.l #3,D0 */
    c->pc = 0x0001e654u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000003u, rc_d_get(c, 0, RC_L), RC_L);

L_1E656:
    /* 0001e656   4  move.l (c,A5),D1 */
    c->pc = 0x0001e656u;
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E65A:
    /* 0001e65a   2  lsr.l #2,D1 */
    c->pc = 0x0001e65au;
    c->d[1] = rc_shift(c, 1, 0, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L);

L_1E65C:
    /* 0001e65c   6  and.l #6,D1 */
    c->pc = 0x0001e65cu;
    t0 = 0x00000006u;
    t2 = t0 & rc_d_get(c, 1, RC_L);
    rc_set_nzvc(c, t2, RC_L);
    rc_d_set(c, 1, RC_L, t2);

L_1E662:
    /* 0001e662   2  add.l D1,D0 */
    c->pc = 0x0001e662u;
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1E664:
    /* 0001e664   4  lea (ffffcb88,A4),A0 */
    c->pc = 0x0001e664u;
    c->a[0] = (c->a[4] - 0x3478u);

L_1E668:
    /* 0001e668   2  moveq #0,D1 */
    c->pc = 0x0001e668u;
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1E66A:
    /* 0001e66a   4  move.b (0,A0,D0.w),D1 */
    c->pc = 0x0001e66au;
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1E66E:
    /* 0001e66e   6  or.l #900,D1 */
    c->pc = 0x0001e66eu;
    t0 = 0x00000900u;
    t2 = t0 | rc_d_get(c, 1, RC_L);
    rc_set_nzvc(c, t2, RC_L);
    rc_d_set(c, 1, RC_L, t2);

L_1E674:
    /* 0001e674   2  move.w D1,D6 */
    c->pc = 0x0001e674u;
    t0 = rc_d_get(c, 1, RC_W);
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E676:
    /* 0001e676   4  movea.l (8,A5),A0 */
    c->pc = 0x0001e676u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1E67A:
    /* 0001e67a   4  movea.l (14,A0),A3 */
    c->pc = 0x0001e67au;
    t0 = rc_rd32(c, m, (c->a[0] + 0x14u));
    c->a[3] = t0;

L_1E67E:
    /* 0001e67e   2  move.l A3,D0 */
    c->pc = 0x0001e67eu;
    t0 = rc_a_get(c, 3, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E680:
    /* 0001e680   2  ble 0001e68e */
    c->pc = 0x0001e680u;
    if (rc_cond(c, 15)) goto L_1E68E;

L_1E682:
    /* 0001e682   6  move.l A3,(00dff04c).l */
    c->pc = 0x0001e682u;
    t0 = rc_a_get(c, 3, RC_L);
    rc_wr32(c, m, 0x00dff04cu, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E688:
    /* 0001e688   4  bset #a,D6 */
    c->pc = 0x0001e688u;
    t4 = 0x0000000au;
    t0 = rc_d_get(c, 6, RC_B);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 6, RC_B, t2);

L_1E68C:
    /* 0001e68c   2  bra 0001e694 */
    c->pc = 0x0001e68cu;
    goto L_1E694;

L_1E68E:
    /* 0001e68e   6  move.w A3,(00dff072).l */
    c->pc = 0x0001e68eu;
    t0 = rc_a_get(c, 3, RC_W);
    rc_wr16(c, m, 0x00dff072u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E694:
    /* 0001e694   4  movea.l (8,A5),A0 */
    c->pc = 0x0001e694u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1E698:
    /* 0001e698   4  movea.l (18,A0),A3 */
    c->pc = 0x0001e698u;
    t0 = rc_rd32(c, m, (c->a[0] + 0x18u));
    c->a[3] = t0;

L_1E69C:
    /* 0001e69c   2  move.l A3,D0 */
    c->pc = 0x0001e69cu;
    t0 = rc_a_get(c, 3, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E69E:
    /* 0001e69e   2  ble 0001e6ac */
    c->pc = 0x0001e69eu;
    if (rc_cond(c, 15)) goto L_1E6AC;

L_1E6A0:
    /* 0001e6a0   6  move.l A3,(00dff048).l */
    c->pc = 0x0001e6a0u;
    t0 = rc_a_get(c, 3, RC_L);
    rc_wr32(c, m, 0x00dff048u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E6A6:
    /* 0001e6a6   4  bset #9,D6 */
    c->pc = 0x0001e6a6u;
    t4 = 0x00000009u;
    t0 = rc_d_get(c, 6, RC_B);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 6, RC_B, t2);

L_1E6AA:
    /* 0001e6aa   2  bra 0001e6b2 */
    c->pc = 0x0001e6aau;
    goto L_1E6B2;

L_1E6AC:
    /* 0001e6ac   6  move.w A3,(00dff070).l */
    c->pc = 0x0001e6acu;
    t0 = rc_a_get(c, 3, RC_W);
    rc_wr16(c, m, 0x00dff070u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E6B2:
    /* 0001e6b2   6  move.l A2,(00dff054).l */
    c->pc = 0x0001e6b2u;
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff054u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E6B8:
    /* 0001e6b8   6  move.l A2,(00dff050).l */
    c->pc = 0x0001e6b8u;
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff050u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E6BE:
    /* 0001e6be   6  move.w D6,(00dff040).l */
    c->pc = 0x0001e6beu;
    t0 = rc_d_get(c, 6, RC_W);
    rc_wr16(c, m, 0x00dff040u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E6C4:
    /* 0001e6c4   6  move.w D5,(00dff058).l */
    c->pc = 0x0001e6c4u;
    t0 = rc_d_get(c, 5, RC_W);
    rc_wr16(c, m, 0x00dff058u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E6CA:
    /* 0001e6ca   4  jsr (ffff83aa,A4) */
    c->pc = 0x0001e6cau;
    /* vector 156 */
    rc_push32(c, m, 0x0001e6ceu);
    rc_depth++;
    c->pc = 0x00021948u;
    return;

L_1E6CE:
    /* 0001e6ce   4  movea.l (8,A5),A0 */
    c->pc = 0x0001e6ceu;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1E6D2:
    /* 0001e6d2   2  move.w (A0),D0 */
    c->pc = 0x0001e6d2u;
    t0 = rc_rd16(c, m, c->a[0]);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E6D4:
    /* 0001e6d4   2  asl.w #3,D0 */
    c->pc = 0x0001e6d4u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000003u, rc_d_get(c, 0, RC_W), RC_W);

L_1E6D6:
    /* 0001e6d6   2  moveq #0,D1 */
    c->pc = 0x0001e6d6u;
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1E6D8:
    /* 0001e6d8   2  move.w D0,D1 */
    c->pc = 0x0001e6d8u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E6DA:
    /* 0001e6da   4  move.l (10,A5),D0 */
    c->pc = 0x0001e6dau;
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E6DE:
    /* 0001e6de   2  cmp.l D1,D0 */
    c->pc = 0x0001e6deu;
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1E6E0:
    /* 0001e6e0   2  bls 0001e6f2 */
    c->pc = 0x0001e6e0u;
    if (rc_cond(c, 3)) goto L_1E6F2;

L_1E6E2:
    /* 0001e6e2   4  movea.l (8,A5),A0 */
    c->pc = 0x0001e6e2u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1E6E6:
    /* 0001e6e6   2  move.w (A0),D0 */
    c->pc = 0x0001e6e6u;
    t0 = rc_rd16(c, m, c->a[0]);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E6E8:
    /* 0001e6e8   2  asl.w #3,D0 */
    c->pc = 0x0001e6e8u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000003u, rc_d_get(c, 0, RC_W), RC_W);

L_1E6EA:
    /* 0001e6ea   2  moveq #0,D1 */
    c->pc = 0x0001e6eau;
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1E6EC:
    /* 0001e6ec   2  move.w D0,D1 */
    c->pc = 0x0001e6ecu;
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E6EE:
    /* 0001e6ee   4  move.l D1,(10,A5) */
    c->pc = 0x0001e6eeu;
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[5] + 0x10u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E6F2:
    /* 0001e6f2   4  movea.l (8,A5),A0 */
    c->pc = 0x0001e6f2u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1E6F6:
    /* 0001e6f6   2  move.w (A0),D0 */
    c->pc = 0x0001e6f6u;
    t0 = rc_rd16(c, m, c->a[0]);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E6F8:
    /* 0001e6f8   2  subq.w #2,D0 */
    c->pc = 0x0001e6f8u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1E6FA:
    /* 0001e6fa   6  move.w D0,(00dff066).l */
    c->pc = 0x0001e6fau;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, 0x00dff066u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E700:
    /* 0001e700   6  move.w D0,(00dff064).l */
    c->pc = 0x0001e700u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, 0x00dff064u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E706:
    /* 0001e706   4  move.l (10,A5),D0 */
    c->pc = 0x0001e706u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E70A:
    /* 0001e70a   2  lsr.l #4,D0 */
    c->pc = 0x0001e70au;
    c->d[0] = rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 0, RC_L), RC_L);

L_1E70C:
    /* 0001e70c   2  asl.l #1,D0 */
    c->pc = 0x0001e70cu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_1E70E:
    /* 0001e70e   2  add.l A2,D0 */
    c->pc = 0x0001e70eu;
    t0 = rc_a_get(c, 2, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1E710:
    /* 0001e710   6  move.l D0,(00dff054).l */
    c->pc = 0x0001e710u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, 0x00dff054u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E716:
    /* 0001e716   6  move.l D0,(00dff050).l */
    c->pc = 0x0001e716u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, 0x00dff050u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E71C:
    /* 0001e71c   8  move.w #9c0,(00dff040).l */
    c->pc = 0x0001e71cu;
    t0 = 0x000009c0u;
    rc_wr16(c, m, 0x00dff040u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E724:
    /* 0001e724   4  move.l (10,A5),D0 */
    c->pc = 0x0001e724u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E728:
    /* 0001e728   6  and.l #f,D0 */
    c->pc = 0x0001e728u;
    t0 = 0x0000000fu;
    t2 = t0 & rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t2, RC_L);
    rc_d_set(c, 0, RC_L, t2);

L_1E72E:
    /* 0001e72e   2  asl.l #1,D0 */
    c->pc = 0x0001e72eu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_1E730:
    /* 0001e730   4  lea (ffffcb68,A4),A0 */
    c->pc = 0x0001e730u;
    c->a[0] = (c->a[4] - 0x3498u);

L_1E734:
    /* 0001e734   8  move.w (0,A0,D0.w),(00dff072).l */
    c->pc = 0x0001e734u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, 0x00dff072u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E73C:
    /* 0001e73c   4  movea.l (8,A5),A0 */
    c->pc = 0x0001e73cu;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1E740:
    /* 0001e740   4  move.w (2,A0),D0 */
    c->pc = 0x0001e740u;
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E744:
    /* 0001e744   2  asl.w #6,D0 */
    c->pc = 0x0001e744u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000006u, rc_d_get(c, 0, RC_W), RC_W);

L_1E746:
    /* 0001e746   4  bset #0,D0 */
    c->pc = 0x0001e746u;
    t4 = 0x00000000u;
    t0 = rc_d_get(c, 0, RC_B);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 0, RC_B, t2);

L_1E74A:
    /* 0001e74a   6  move.w D0,(00dff058).l */
    c->pc = 0x0001e74au;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, 0x00dff058u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E750:
    /* 0001e750   2  move.l A2,D0 */
    c->pc = 0x0001e750u;
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E752:
    /* 0001e752   4  bra 0001e532 */
    c->pc = 0x0001e752u;
    rc_tick();
    goto L_1E532;

}
