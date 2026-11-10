/* fn_0000b528 - 588 byte(s), 172 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000b528(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000b528u): goto L_B528;
    case RC_ADDR(0x0000b52cu): goto L_B52C;
    case RC_ADDR(0x0000b530u): goto L_B530;
    case RC_ADDR(0x0000b536u): goto L_B536;
    case RC_ADDR(0x0000b53au): goto L_B53A;
    case RC_ADDR(0x0000b53cu): goto L_B53C;
    case RC_ADDR(0x0000b540u): goto L_B540;
    case RC_ADDR(0x0000b544u): goto L_B544;
    case RC_ADDR(0x0000b546u): goto L_B546;
    case RC_ADDR(0x0000b548u): goto L_B548;
    case RC_ADDR(0x0000b54au): goto L_B54A;
    case RC_ADDR(0x0000b54eu): goto L_B54E;
    case RC_ADDR(0x0000b552u): goto L_B552;
    case RC_ADDR(0x0000b556u): goto L_B556;
    case RC_ADDR(0x0000b558u): goto L_B558;
    case RC_ADDR(0x0000b55au): goto L_B55A;
    case RC_ADDR(0x0000b55cu): goto L_B55C;
    case RC_ADDR(0x0000b560u): goto L_B560;
    case RC_ADDR(0x0000b564u): goto L_B564;
    case RC_ADDR(0x0000b566u): goto L_B566;
    case RC_ADDR(0x0000b56cu): goto L_B56C;
    case RC_ADDR(0x0000b56eu): goto L_B56E;
    case RC_ADDR(0x0000b570u): goto L_B570;
    case RC_ADDR(0x0000b572u): goto L_B572;
    case RC_ADDR(0x0000b574u): goto L_B574;
    case RC_ADDR(0x0000b578u): goto L_B578;
    case RC_ADDR(0x0000b57cu): goto L_B57C;
    case RC_ADDR(0x0000b57eu): goto L_B57E;
    case RC_ADDR(0x0000b580u): goto L_B580;
    case RC_ADDR(0x0000b584u): goto L_B584;
    case RC_ADDR(0x0000b588u): goto L_B588;
    case RC_ADDR(0x0000b58au): goto L_B58A;
    case RC_ADDR(0x0000b58cu): goto L_B58C;
    case RC_ADDR(0x0000b590u): goto L_B590;
    case RC_ADDR(0x0000b596u): goto L_B596;
    case RC_ADDR(0x0000b598u): goto L_B598;
    case RC_ADDR(0x0000b59eu): goto L_B59E;
    case RC_ADDR(0x0000b5a0u): goto L_B5A0;
    case RC_ADDR(0x0000b5a4u): goto L_B5A4;
    case RC_ADDR(0x0000b5a6u): goto L_B5A6;
    case RC_ADDR(0x0000b5a8u): goto L_B5A8;
    case RC_ADDR(0x0000b5aau): goto L_B5AA;
    case RC_ADDR(0x0000b5aeu): goto L_B5AE;
    case RC_ADDR(0x0000b5b2u): goto L_B5B2;
    case RC_ADDR(0x0000b5b4u): goto L_B5B4;
    case RC_ADDR(0x0000b5b6u): goto L_B5B6;
    case RC_ADDR(0x0000b5bau): goto L_B5BA;
    case RC_ADDR(0x0000b5beu): goto L_B5BE;
    case RC_ADDR(0x0000b5c2u): goto L_B5C2;
    case RC_ADDR(0x0000b5c6u): goto L_B5C6;
    case RC_ADDR(0x0000b5c8u): goto L_B5C8;
    case RC_ADDR(0x0000b5cau): goto L_B5CA;
    case RC_ADDR(0x0000b5ccu): goto L_B5CC;
    case RC_ADDR(0x0000b5d0u): goto L_B5D0;
    case RC_ADDR(0x0000b5d4u): goto L_B5D4;
    case RC_ADDR(0x0000b5d6u): goto L_B5D6;
    case RC_ADDR(0x0000b5d8u): goto L_B5D8;
    case RC_ADDR(0x0000b5dcu): goto L_B5DC;
    case RC_ADDR(0x0000b5e0u): goto L_B5E0;
    case RC_ADDR(0x0000b5e4u): goto L_B5E4;
    case RC_ADDR(0x0000b5eau): goto L_B5EA;
    case RC_ADDR(0x0000b5f0u): goto L_B5F0;
    case RC_ADDR(0x0000b5f4u): goto L_B5F4;
    case RC_ADDR(0x0000b5f8u): goto L_B5F8;
    case RC_ADDR(0x0000b5fau): goto L_B5FA;
    case RC_ADDR(0x0000b5fcu): goto L_B5FC;
    case RC_ADDR(0x0000b5feu): goto L_B5FE;
    case RC_ADDR(0x0000b602u): goto L_B602;
    case RC_ADDR(0x0000b606u): goto L_B606;
    case RC_ADDR(0x0000b608u): goto L_B608;
    case RC_ADDR(0x0000b60eu): goto L_B60E;
    case RC_ADDR(0x0000b610u): goto L_B610;
    case RC_ADDR(0x0000b616u): goto L_B616;
    case RC_ADDR(0x0000b61cu): goto L_B61C;
    case RC_ADDR(0x0000b620u): goto L_B620;
    case RC_ADDR(0x0000b624u): goto L_B624;
    case RC_ADDR(0x0000b62au): goto L_B62A;
    case RC_ADDR(0x0000b630u): goto L_B630;
    case RC_ADDR(0x0000b636u): goto L_B636;
    case RC_ADDR(0x0000b63cu): goto L_B63C;
    case RC_ADDR(0x0000b640u): goto L_B640;
    case RC_ADDR(0x0000b644u): goto L_B644;
    case RC_ADDR(0x0000b648u): goto L_B648;
    case RC_ADDR(0x0000b64au): goto L_B64A;
    case RC_ADDR(0x0000b64eu): goto L_B64E;
    case RC_ADDR(0x0000b650u): goto L_B650;
    case RC_ADDR(0x0000b654u): goto L_B654;
    case RC_ADDR(0x0000b658u): goto L_B658;
    case RC_ADDR(0x0000b65au): goto L_B65A;
    case RC_ADDR(0x0000b65cu): goto L_B65C;
    case RC_ADDR(0x0000b660u): goto L_B660;
    case RC_ADDR(0x0000b664u): goto L_B664;
    case RC_ADDR(0x0000b666u): goto L_B666;
    case RC_ADDR(0x0000b668u): goto L_B668;
    case RC_ADDR(0x0000b66cu): goto L_B66C;
    case RC_ADDR(0x0000b670u): goto L_B670;
    case RC_ADDR(0x0000b672u): goto L_B672;
    case RC_ADDR(0x0000b674u): goto L_B674;
    case RC_ADDR(0x0000b678u): goto L_B678;
    case RC_ADDR(0x0000b67cu): goto L_B67C;
    case RC_ADDR(0x0000b67eu): goto L_B67E;
    case RC_ADDR(0x0000b680u): goto L_B680;
    case RC_ADDR(0x0000b682u): goto L_B682;
    case RC_ADDR(0x0000b686u): goto L_B686;
    case RC_ADDR(0x0000b68au): goto L_B68A;
    case RC_ADDR(0x0000b68cu): goto L_B68C;
    case RC_ADDR(0x0000b690u): goto L_B690;
    case RC_ADDR(0x0000b694u): goto L_B694;
    case RC_ADDR(0x0000b698u): goto L_B698;
    case RC_ADDR(0x0000b69au): goto L_B69A;
    case RC_ADDR(0x0000b69eu): goto L_B69E;
    case RC_ADDR(0x0000b6a0u): goto L_B6A0;
    case RC_ADDR(0x0000b6a2u): goto L_B6A2;
    case RC_ADDR(0x0000b6a6u): goto L_B6A6;
    case RC_ADDR(0x0000b6aau): goto L_B6AA;
    case RC_ADDR(0x0000b6aeu): goto L_B6AE;
    case RC_ADDR(0x0000b6b2u): goto L_B6B2;
    case RC_ADDR(0x0000b6b6u): goto L_B6B6;
    case RC_ADDR(0x0000b6bcu): goto L_B6BC;
    case RC_ADDR(0x0000b6c0u): goto L_B6C0;
    case RC_ADDR(0x0000b6c4u): goto L_B6C4;
    case RC_ADDR(0x0000b6c6u): goto L_B6C6;
    case RC_ADDR(0x0000b6cau): goto L_B6CA;
    case RC_ADDR(0x0000b6ceu): goto L_B6CE;
    case RC_ADDR(0x0000b6d2u): goto L_B6D2;
    case RC_ADDR(0x0000b6d4u): goto L_B6D4;
    case RC_ADDR(0x0000b6d8u): goto L_B6D8;
    case RC_ADDR(0x0000b6dcu): goto L_B6DC;
    case RC_ADDR(0x0000b6deu): goto L_B6DE;
    case RC_ADDR(0x0000b6e2u): goto L_B6E2;
    case RC_ADDR(0x0000b6e6u): goto L_B6E6;
    case RC_ADDR(0x0000b6eau): goto L_B6EA;
    case RC_ADDR(0x0000b6eeu): goto L_B6EE;
    case RC_ADDR(0x0000b6f2u): goto L_B6F2;
    case RC_ADDR(0x0000b6f8u): goto L_B6F8;
    case RC_ADDR(0x0000b6fau): goto L_B6FA;
    case RC_ADDR(0x0000b6fcu): goto L_B6FC;
    case RC_ADDR(0x0000b700u): goto L_B700;
    case RC_ADDR(0x0000b702u): goto L_B702;
    case RC_ADDR(0x0000b706u): goto L_B706;
    case RC_ADDR(0x0000b70au): goto L_B70A;
    case RC_ADDR(0x0000b70eu): goto L_B70E;
    case RC_ADDR(0x0000b710u): goto L_B710;
    case RC_ADDR(0x0000b714u): goto L_B714;
    case RC_ADDR(0x0000b718u): goto L_B718;
    case RC_ADDR(0x0000b71cu): goto L_B71C;
    case RC_ADDR(0x0000b720u): goto L_B720;
    case RC_ADDR(0x0000b724u): goto L_B724;
    case RC_ADDR(0x0000b728u): goto L_B728;
    case RC_ADDR(0x0000b72cu): goto L_B72C;
    case RC_ADDR(0x0000b730u): goto L_B730;
    case RC_ADDR(0x0000b734u): goto L_B734;
    case RC_ADDR(0x0000b738u): goto L_B738;
    case RC_ADDR(0x0000b73cu): goto L_B73C;
    case RC_ADDR(0x0000b742u): goto L_B742;
    case RC_ADDR(0x0000b746u): goto L_B746;
    case RC_ADDR(0x0000b748u): goto L_B748;
    case RC_ADDR(0x0000b74cu): goto L_B74C;
    case RC_ADDR(0x0000b750u): goto L_B750;
    case RC_ADDR(0x0000b752u): goto L_B752;
    case RC_ADDR(0x0000b754u): goto L_B754;
    case RC_ADDR(0x0000b758u): goto L_B758;
    case RC_ADDR(0x0000b75au): goto L_B75A;
    case RC_ADDR(0x0000b75eu): goto L_B75E;
    case RC_ADDR(0x0000b762u): goto L_B762;
    case RC_ADDR(0x0000b764u): goto L_B764;
    case RC_ADDR(0x0000b766u): goto L_B766;
    case RC_ADDR(0x0000b768u): goto L_B768;
    case RC_ADDR(0x0000b76cu): goto L_B76C;
    case RC_ADDR(0x0000b76eu): goto L_B76E;
    case RC_ADDR(0x0000b770u): goto L_B770;
    case RC_ADDR(0x0000b772u): goto L_B772;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_B528:
    /* 0000b528   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000b528u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_B52C:
    /* 0000b52c   4  movem.l { A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x0000b52cu);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_B530:
    /* 0000b530   6  move.l (8,A5),(fffffebe,A4) */
    c->pc = RC_ADDR(0x0000b530u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] - 0x142u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_B536:
    /* 0000b536   4  move.w (fffffe40,A4),D0 */
    c->pc = RC_ADDR(0x0000b536u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x1c0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_B53A:
    /* 0000b53a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000b53au);
    rc_ext_l(c, 0);

L_B53C:
    /* 0000b53c   4  bra 0000b6fa */
    c->pc = RC_ADDR(0x0000b53cu);
    goto L_B6FA;

L_B540:
    /* 0000b540   4  clr.l (80,A4) */
    c->pc = RC_ADDR(0x0000b540u);
    rc_wr32(c, m, (c->a[4] + 0x80u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_B544:
    /* 0000b544   2  moveq #1,D4 */
    c->pc = RC_ADDR(0x0000b544u);
    c->d[4] = 0x00000001u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_B546:
    /* 0000b546   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000b546u);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_B548:
    /* 0000b548   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000b548u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_B54A:
    /* 0000b54a   4  lea (ffff96a4,A4),A0 */
    c->pc = RC_ADDR(0x0000b54au);
    c->a[0] = (c->a[4] - 0x695cu);

L_B54E:
    /* 0000b54e   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000b54eu);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B552:
    /* 0000b552   4  jsr (ffff8254,A4) */
    c->pc = RC_ADDR(0x0000b552u);
    /* vector 99 */
    rc_push32(c, m, RC_ADDR(0x0000b556u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f186u);
    return;

L_B556:
    /* 0000b556   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000b556u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_B558:
    /* 0000b558   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x0000b558u);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_B55A:
    /* 0000b55a   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x0000b55au);
    c->d[1] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L);

L_B55C:
    /* 0000b55c   4  lea (418,A4),A0 */
    c->pc = RC_ADDR(0x0000b55cu);
    c->a[0] = (c->a[4] + 0x418u);

L_B560:
    /* 0000b560   4  move.l D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x0000b560u);
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_B564:
    /* 0000b564   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x0000b564u);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_B566:
    /* 0000b566   6  cmp.l #5,D4 */
    c->pc = RC_ADDR(0x0000b566u);
    t0 = 0x00000005u;
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_B56C:
    /* 0000b56c   2  ble 0000b546 */
    c->pc = RC_ADDR(0x0000b56cu);
    if (rc_cond(c, 15)) { rc_tick(); goto L_B546; }

L_B56E:
    /* 0000b56e   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x0000b56eu);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_B570:
    /* 0000b570   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000b570u);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_B572:
    /* 0000b572   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000b572u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_B574:
    /* 0000b574   4  lea (432,A4),A0 */
    c->pc = RC_ADDR(0x0000b574u);
    c->a[0] = (c->a[4] + 0x432u);

L_B578:
    /* 0000b578   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000b578u);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_B57C:
    /* 0000b57c   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000b57cu);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_B57E:
    /* 0000b57e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000b57eu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_B580:
    /* 0000b580   4  lea (442,A4),A0 */
    c->pc = RC_ADDR(0x0000b580u);
    c->a[0] = (c->a[4] + 0x442u);

L_B584:
    /* 0000b584   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000b584u);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_B588:
    /* 0000b588   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000b588u);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_B58A:
    /* 0000b58a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000b58au);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_B58C:
    /* 0000b58c   4  lea (452,A4),A0 */
    c->pc = RC_ADDR(0x0000b58cu);
    c->a[0] = (c->a[4] + 0x452u);

L_B590:
    /* 0000b590   6  move.w (ffff96ec,A4),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000b590u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x6914u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_B596:
    /* 0000b596   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x0000b596u);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_B598:
    /* 0000b598   6  cmp.l #8,D4 */
    c->pc = RC_ADDR(0x0000b598u);
    t0 = 0x00000008u;
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_B59E:
    /* 0000b59e   2  blt 0000b570 */
    c->pc = RC_ADDR(0x0000b59eu);
    if (rc_cond(c, 13)) { rc_tick(); goto L_B570; }

L_B5A0:
    /* 0000b5a0   4  move.w #4,-(A7) */
    c->pc = RC_ADDR(0x0000b5a0u);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B5A4:
    /* 0000b5a4   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000b5a4u);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_B5A6:
    /* 0000b5a6   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000b5a6u);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_B5A8:
    /* 0000b5a8   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000b5a8u);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_B5AA:
    /* 0000b5aa   4  pea (0000b774) */
    c->pc = RC_ADDR(0x0000b5aau);
    rc_push32(c, m, RC_ADDR(0x0000b774u));

L_B5AE:
    /* 0000b5ae   4  jsr (ffff8254,A4) */
    c->pc = RC_ADDR(0x0000b5aeu);
    /* vector 99 */
    rc_push32(c, m, RC_ADDR(0x0000b5b2u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f186u);
    return;

L_B5B2:
    /* 0000b5b2   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000b5b2u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_B5B4:
    /* 0000b5b4   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0000b5b4u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B5B6:
    /* 0000b5b6   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000b5b6u);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B5BA:
    /* 0000b5ba   4  jsr (ffff8272,A4) */
    c->pc = RC_ADDR(0x0000b5bau);
    /* vector 104 */
    rc_push32(c, m, RC_ADDR(0x0000b5beu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f914u);
    return;

L_B5BE:
    /* 0000b5be   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000b5beu);
    c->a[7] = (c->a[7] + 0xeu);

L_B5C2:
    /* 0000b5c2   4  move.w #6,-(A7) */
    c->pc = RC_ADDR(0x0000b5c2u);
    t0 = 0x00000006u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B5C6:
    /* 0000b5c6   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000b5c6u);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_B5C8:
    /* 0000b5c8   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000b5c8u);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_B5CA:
    /* 0000b5ca   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000b5cau);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_B5CC:
    /* 0000b5cc   4  pea (0000b779) */
    c->pc = RC_ADDR(0x0000b5ccu);
    rc_push32(c, m, RC_ADDR(0x0000b779u));

L_B5D0:
    /* 0000b5d0   4  jsr (ffff8254,A4) */
    c->pc = RC_ADDR(0x0000b5d0u);
    /* vector 99 */
    rc_push32(c, m, RC_ADDR(0x0000b5d4u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f186u);
    return;

L_B5D4:
    /* 0000b5d4   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000b5d4u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_B5D6:
    /* 0000b5d6   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0000b5d6u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B5D8:
    /* 0000b5d8   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000b5d8u);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B5DC:
    /* 0000b5dc   4  jsr (ffff8272,A4) */
    c->pc = RC_ADDR(0x0000b5dcu);
    /* vector 104 */
    rc_push32(c, m, RC_ADDR(0x0000b5e0u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f914u);
    return;

L_B5E0:
    /* 0000b5e0   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000b5e0u);
    c->a[7] = (c->a[7] + 0xeu);

L_B5E4:
    /* 0000b5e4   6  move.w #a0,(8a,A4) */
    c->pc = RC_ADDR(0x0000b5e4u);
    t0 = 0x000000a0u;
    rc_wr16(c, m, (c->a[4] + 0x8au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_B5EA:
    /* 0000b5ea   6  move.w #b4,(8c,A4) */
    c->pc = RC_ADDR(0x0000b5eau);
    t0 = 0x000000b4u;
    rc_wr16(c, m, (c->a[4] + 0x8cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_B5F0:
    /* 0000b5f0   4  clr.w (8e,A4) */
    c->pc = RC_ADDR(0x0000b5f0u);
    rc_wr16(c, m, (c->a[4] + 0x8eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_B5F4:
    /* 0000b5f4   4  clr.w (90,A4) */
    c->pc = RC_ADDR(0x0000b5f4u);
    rc_wr16(c, m, (c->a[4] + 0x90u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_B5F8:
    /* 0000b5f8   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x0000b5f8u);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_B5FA:
    /* 0000b5fa   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000b5fau);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_B5FC:
    /* 0000b5fc   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000b5fcu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_B5FE:
    /* 0000b5fe   4  lea (92,A4),A0 */
    c->pc = RC_ADDR(0x0000b5feu);
    c->a[0] = (c->a[4] + 0x92u);

L_B602:
    /* 0000b602   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000b602u);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_B606:
    /* 0000b606   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x0000b606u);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_B608:
    /* 0000b608   6  cmp.l #5,D4 */
    c->pc = RC_ADDR(0x0000b608u);
    t0 = 0x00000005u;
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_B60E:
    /* 0000b60e   2  blt 0000b5fa */
    c->pc = RC_ADDR(0x0000b60eu);
    if (rc_cond(c, 13)) { rc_tick(); goto L_B5FA; }

L_B610:
    /* 0000b610   6  move.w #1,(432,A4) */
    c->pc = RC_ADDR(0x0000b610u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x432u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_B616:
    /* 0000b616   6  move.w #5,(442,A4) */
    c->pc = RC_ADDR(0x0000b616u);
    t0 = 0x00000005u;
    rc_wr16(c, m, (c->a[4] + 0x442u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_B61C:
    /* 0000b61c   4  clr.w (268,A4) */
    c->pc = RC_ADDR(0x0000b61cu);
    rc_wr16(c, m, (c->a[4] + 0x268u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_B620:
    /* 0000b620   4  clr.w (26a,A4) */
    c->pc = RC_ADDR(0x0000b620u);
    rc_wr16(c, m, (c->a[4] + 0x26au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_B624:
    /* 0000b624   6  move.w #28,(464,A4) */
    c->pc = RC_ADDR(0x0000b624u);
    t0 = 0x00000028u;
    rc_wr16(c, m, (c->a[4] + 0x464u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_B62A:
    /* 0000b62a   6  move.w #28,(462,A4) */
    c->pc = RC_ADDR(0x0000b62au);
    t0 = 0x00000028u;
    rc_wr16(c, m, (c->a[4] + 0x462u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_B630:
    /* 0000b630   6  move.w #1,(fffffe40,A4) */
    c->pc = RC_ADDR(0x0000b630u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x1c0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_B636:
    /* 0000b636   6  move.w #1,(fffffec8,A4) */
    c->pc = RC_ADDR(0x0000b636u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x138u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_B63C:
    /* 0000b63c   4  bra 0000b706 */
    c->pc = RC_ADDR(0x0000b63cu);
    goto L_B706;

L_B640:
    /* 0000b640   4  move.w (462,A4),D0 */
    c->pc = RC_ADDR(0x0000b640u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x462u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_B644:
    /* 0000b644   4  subq.w #1,(462,A4) */
    c->pc = RC_ADDR(0x0000b644u);
    t3 = (c->a[4] + 0x462u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_B648:
    /* 0000b648   2  tst.w D0 */
    c->pc = RC_ADDR(0x0000b648u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_B64A:
    /* 0000b64a   4  bne 0000b6f8 */
    c->pc = RC_ADDR(0x0000b64au);
    if (rc_cond(c, 6)) goto L_B6F8;

L_B64E:
    /* 0000b64e   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000b64eu);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_B650:
    /* 0000b650   4  pea (0000b785) */
    c->pc = RC_ADDR(0x0000b650u);
    rc_push32(c, m, RC_ADDR(0x0000b785u));

L_B654:
    /* 0000b654   4  jsr (ffff8254,A4) */
    c->pc = RC_ADDR(0x0000b654u);
    /* vector 99 */
    rc_push32(c, m, RC_ADDR(0x0000b658u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f186u);
    return;

L_B658:
    /* 0000b658   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000b658u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_B65A:
    /* 0000b65a   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0000b65au);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B65C:
    /* 0000b65c   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000b65cu);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B660:
    /* 0000b660   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x0000b660u);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x0000b664u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_B664:
    /* 0000b664   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000b664u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_B666:
    /* 0000b666   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000b666u);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_B668:
    /* 0000b668   4  pea (0000b791) */
    c->pc = RC_ADDR(0x0000b668u);
    rc_push32(c, m, RC_ADDR(0x0000b791u));

L_B66C:
    /* 0000b66c   4  jsr (ffff8206,A4) */
    c->pc = RC_ADDR(0x0000b66cu);
    /* vector 86 */
    rc_push32(c, m, RC_ADDR(0x0000b670u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d4fau);
    return;

L_B670:
    /* 0000b670   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000b670u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_B672:
    /* 0000b672   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0000b672u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B674:
    /* 0000b674   4  move.w #c,-(A7) */
    c->pc = RC_ADDR(0x0000b674u);
    t0 = 0x0000000cu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B678:
    /* 0000b678   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x0000b678u);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x0000b67cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_B67C:
    /* 0000b67c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000b67cu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_B67E:
    /* 0000b67e   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000b67eu);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_B680:
    /* 0000b680   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000b680u);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_B682:
    /* 0000b682   4  move.w #14,-(A7) */
    c->pc = RC_ADDR(0x0000b682u);
    t0 = 0x00000014u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B686:
    /* 0000b686   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x0000b686u);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x0000b68au));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_B68A:
    /* 0000b68a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000b68au);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_B68C:
    /* 0000b68c   4  move.w #a,-(A7) */
    c->pc = RC_ADDR(0x0000b68cu);
    t0 = 0x0000000au;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B690:
    /* 0000b690   4  move.w (ffff96cc,A4),-(A7) */
    c->pc = RC_ADDR(0x0000b690u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x6934u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B694:
    /* 0000b694   4  move.w (ffff96bc,A4),-(A7) */
    c->pc = RC_ADDR(0x0000b694u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x6944u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B698:
    /* 0000b698   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000b698u);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_B69A:
    /* 0000b69a   4  move.w (442,A4),D0 */
    c->pc = RC_ADDR(0x0000b69au);
    t0 = rc_rd16(c, m, (c->a[4] + 0x442u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_B69E:
    /* 0000b69e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000b69eu);
    rc_ext_l(c, 0);

L_B6A0:
    /* 0000b6a0   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000b6a0u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_B6A2:
    /* 0000b6a2   4  lea (418,A4),A0 */
    c->pc = RC_ADDR(0x0000b6a2u);
    c->a[0] = (c->a[4] + 0x418u);

L_B6A6:
    /* 0000b6a6   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000b6a6u);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B6AA:
    /* 0000b6aa   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000b6aau);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B6AE:
    /* 0000b6ae   4  jsr (ffff8272,A4) */
    c->pc = RC_ADDR(0x0000b6aeu);
    /* vector 104 */
    rc_push32(c, m, RC_ADDR(0x0000b6b2u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f914u);
    return;

L_B6B2:
    /* 0000b6b2   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000b6b2u);
    c->a[7] = (c->a[7] + 0xeu);

L_B6B6:
    /* 0000b6b6   6  move.w #28,(462,A4) */
    c->pc = RC_ADDR(0x0000b6b6u);
    t0 = 0x00000028u;
    rc_wr16(c, m, (c->a[4] + 0x462u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_B6BC:
    /* 0000b6bc   4  pea (0000b79e) */
    c->pc = RC_ADDR(0x0000b6bcu);
    rc_push32(c, m, RC_ADDR(0x0000b79eu));

L_B6C0:
    /* 0000b6c0   4  jsr (ffff8206,A4) */
    c->pc = RC_ADDR(0x0000b6c0u);
    /* vector 86 */
    rc_push32(c, m, RC_ADDR(0x0000b6c4u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d4fau);
    return;

L_B6C4:
    /* 0000b6c4   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000b6c4u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_B6C6:
    /* 0000b6c6   4  move.l D0,(80,A4) */
    c->pc = RC_ADDR(0x0000b6c6u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x80u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_B6CA:
    /* 0000b6ca   4  pea (0000b7ab) */
    c->pc = RC_ADDR(0x0000b6cau);
    rc_push32(c, m, RC_ADDR(0x0000b7abu));

L_B6CE:
    /* 0000b6ce   4  jsr (ffff8254,A4) */
    c->pc = RC_ADDR(0x0000b6ceu);
    /* vector 99 */
    rc_push32(c, m, RC_ADDR(0x0000b6d2u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f186u);
    return;

L_B6D2:
    /* 0000b6d2   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000b6d2u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_B6D4:
    /* 0000b6d4   4  move.l D0,(84,A4) */
    c->pc = RC_ADDR(0x0000b6d4u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x84u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_B6D8:
    /* 0000b6d8   4  move.w #40,-(A7) */
    c->pc = RC_ADDR(0x0000b6d8u);
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B6DC:
    /* 0000b6dc   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000b6dcu);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_B6DE:
    /* 0000b6de   4  move.l (46c,A4),-(A7) */
    c->pc = RC_ADDR(0x0000b6deu);
    t0 = rc_rd32(c, m, (c->a[4] + 0x46cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B6E2:
    /* 0000b6e2   4  move.w (46a,A4),-(A7) */
    c->pc = RC_ADDR(0x0000b6e2u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x46au));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B6E6:
    /* 0000b6e6   4  move.l (466,A4),-(A7) */
    c->pc = RC_ADDR(0x0000b6e6u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x466u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B6EA:
    /* 0000b6ea   4  jsr (ffff80b6,A4) */
    c->pc = RC_ADDR(0x0000b6eau);
    /* vector 30 */
    rc_push32(c, m, RC_ADDR(0x0000b6eeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00009b60u);
    return;

L_B6EE:
    /* 0000b6ee   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000b6eeu);
    c->a[7] = (c->a[7] + 0xeu);

L_B6F2:
    /* 0000b6f2   6  move.w #2,(fffffe40,A4) */
    c->pc = RC_ADDR(0x0000b6f2u);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] - 0x1c0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_B6F8:
    /* 0000b6f8   2  bra 0000b706 */
    c->pc = RC_ADDR(0x0000b6f8u);
    goto L_B706;

L_B6FA:
    /* 0000b6fa   2  tst.l D0 */
    c->pc = RC_ADDR(0x0000b6fau);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_B6FC:
    /* 0000b6fc   4  beq 0000b540 */
    c->pc = RC_ADDR(0x0000b6fcu);
    if (rc_cond(c, 7)) { rc_tick(); goto L_B540; }

L_B700:
    /* 0000b700   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x0000b700u);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_B702:
    /* 0000b702   4  beq 0000b640 */
    c->pc = RC_ADDR(0x0000b702u);
    if (rc_cond(c, 7)) { rc_tick(); goto L_B640; }

L_B706:
    /* 0000b706   4  jsr (ffff816a,A4) */
    c->pc = RC_ADDR(0x0000b706u);
    /* vector 60 */
    rc_push32(c, m, RC_ADDR(0x0000b70au));
    rc_depth++;
    c->pc = RC_ADDR(0x00011bf0u);
    return;

L_B70A:
    /* 0000b70a   4  tst.l (80,A4) */
    c->pc = RC_ADDR(0x0000b70au);
    t0 = rc_rd32(c, m, (c->a[4] + 0x80u));
    rc_set_nzvc(c, t0, RC_L);

L_B70E:
    /* 0000b70e   2  beq 0000b718 */
    c->pc = RC_ADDR(0x0000b70eu);
    if (rc_cond(c, 7)) goto L_B718;

L_B710:
    /* 0000b710   4  jsr (0000b97c) */
    c->pc = RC_ADDR(0x0000b710u);
    rc_push32(c, m, RC_ADDR(0x0000b714u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000b97cu);
    return;

L_B714:
    /* 0000b714   4  jsr (0000bade) */
    c->pc = RC_ADDR(0x0000b714u);
    rc_push32(c, m, RC_ADDR(0x0000b718u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000badeu);
    return;

L_B718:
    /* 0000b718   4  jsr (0000b7b2) */
    c->pc = RC_ADDR(0x0000b718u);
    rc_push32(c, m, RC_ADDR(0x0000b71cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000b7b2u);
    return;

L_B71C:
    /* 0000b71c   4  jsr (ffff80da,A4) */
    c->pc = RC_ADDR(0x0000b71cu);
    /* vector 36 */
    rc_push32(c, m, RC_ADDR(0x0000b720u));
    rc_depth++;
    c->pc = RC_ADDR(0x00009c72u);
    return;

L_B720:
    /* 0000b720   4  move.w (14,A5),-(A7) */
    c->pc = RC_ADDR(0x0000b720u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x14u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B724:
    /* 0000b724   4  move.l (10,A5),-(A7) */
    c->pc = RC_ADDR(0x0000b724u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B728:
    /* 0000b728   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x0000b728u);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B72C:
    /* 0000b72c   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0000b72cu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_B730:
    /* 0000b730   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x0000b730u);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B734:
    /* 0000b734   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x0000b734u);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x0000b738u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001fa02u);
    return;

L_B738:
    /* 0000b738   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000b738u);
    c->a[7] = (c->a[7] + 0xeu);

L_B73C:
    /* 0000b73c   6  move.l (8,A5),(fffffebe,A4) */
    c->pc = RC_ADDR(0x0000b73cu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] - 0x142u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_B742:
    /* 0000b742   4  tst.w (26a,A4) */
    c->pc = RC_ADDR(0x0000b742u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26au));
    rc_set_nzvc(c, t0, RC_W);

L_B746:
    /* 0000b746   2  beq 0000b770 */
    c->pc = RC_ADDR(0x0000b746u);
    if (rc_cond(c, 7)) goto L_B770;

L_B748:
    /* 0000b748   4  move.w #15,-(A7) */
    c->pc = RC_ADDR(0x0000b748u);
    t0 = 0x00000015u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B74C:
    /* 0000b74c   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x0000b74cu);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x0000b750u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_B750:
    /* 0000b750   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000b750u);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_B752:
    /* 0000b752   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000b752u);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_B754:
    /* 0000b754   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x0000b754u);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x0000b758u));
    rc_depth++;
    c->pc = RC_ADDR(0x00009bcau);
    return;

L_B758:
    /* 0000b758   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000b758u);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_B75A:
    /* 0000b75a   4  move.w (464,A4),D0 */
    c->pc = RC_ADDR(0x0000b75au);
    t0 = rc_rd16(c, m, (c->a[4] + 0x464u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_B75E:
    /* 0000b75e   4  subq.w #1,(464,A4) */
    c->pc = RC_ADDR(0x0000b75eu);
    t3 = (c->a[4] + 0x464u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_B762:
    /* 0000b762   2  tst.w D0 */
    c->pc = RC_ADDR(0x0000b762u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_B764:
    /* 0000b764   2  bne 0000b770 */
    c->pc = RC_ADDR(0x0000b764u);
    if (rc_cond(c, 6)) goto L_B770;

L_B766:
    /* 0000b766   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0000b766u);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_B768:
    /* 0000b768   4  movem.l (SP)+,{ D4 D5 } */
    c->pc = RC_ADDR(0x0000b768u);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[5] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_B76C:
    /* 0000b76c   2  unlk A5 */
    c->pc = RC_ADDR(0x0000b76cu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_B76E:
    /* 0000b76e   2  rts */
    c->pc = RC_ADDR(0x0000b76eu);
    rc_ret(c, m);
    return;

L_B770:
    /* 0000b770   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0000b770u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_B772:
    /* 0000b772   2  bra 0000b768 */
    c->pc = RC_ADDR(0x0000b772u);
    rc_tick();
    goto L_B768;

}
