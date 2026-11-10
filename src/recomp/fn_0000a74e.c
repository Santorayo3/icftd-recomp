/* fn_0000a74e - 828 byte(s), 250 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000a74e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000a74eu): goto L_A74E;
    case RC_ADDR(0x0000a752u): goto L_A752;
    case RC_ADDR(0x0000a758u): goto L_A758;
    case RC_ADDR(0x0000a75cu): goto L_A75C;
    case RC_ADDR(0x0000a760u): goto L_A760;
    case RC_ADDR(0x0000a764u): goto L_A764;
    case RC_ADDR(0x0000a768u): goto L_A768;
    case RC_ADDR(0x0000a76au): goto L_A76A;
    case RC_ADDR(0x0000a76cu): goto L_A76C;
    case RC_ADDR(0x0000a76eu): goto L_A76E;
    case RC_ADDR(0x0000a772u): goto L_A772;
    case RC_ADDR(0x0000a776u): goto L_A776;
    case RC_ADDR(0x0000a778u): goto L_A778;
    case RC_ADDR(0x0000a77au): goto L_A77A;
    case RC_ADDR(0x0000a77eu): goto L_A77E;
    case RC_ADDR(0x0000a780u): goto L_A780;
    case RC_ADDR(0x0000a782u): goto L_A782;
    case RC_ADDR(0x0000a784u): goto L_A784;
    case RC_ADDR(0x0000a788u): goto L_A788;
    case RC_ADDR(0x0000a78cu): goto L_A78C;
    case RC_ADDR(0x0000a790u): goto L_A790;
    case RC_ADDR(0x0000a792u): goto L_A792;
    case RC_ADDR(0x0000a796u): goto L_A796;
    case RC_ADDR(0x0000a798u): goto L_A798;
    case RC_ADDR(0x0000a79au): goto L_A79A;
    case RC_ADDR(0x0000a79cu): goto L_A79C;
    case RC_ADDR(0x0000a7a0u): goto L_A7A0;
    case RC_ADDR(0x0000a7a4u): goto L_A7A4;
    case RC_ADDR(0x0000a7a8u): goto L_A7A8;
    case RC_ADDR(0x0000a7aau): goto L_A7AA;
    case RC_ADDR(0x0000a7aeu): goto L_A7AE;
    case RC_ADDR(0x0000a7b0u): goto L_A7B0;
    case RC_ADDR(0x0000a7b4u): goto L_A7B4;
    case RC_ADDR(0x0000a7b8u): goto L_A7B8;
    case RC_ADDR(0x0000a7bcu): goto L_A7BC;
    case RC_ADDR(0x0000a7beu): goto L_A7BE;
    case RC_ADDR(0x0000a7c0u): goto L_A7C0;
    case RC_ADDR(0x0000a7c2u): goto L_A7C2;
    case RC_ADDR(0x0000a7c6u): goto L_A7C6;
    case RC_ADDR(0x0000a7cau): goto L_A7CA;
    case RC_ADDR(0x0000a7ccu): goto L_A7CC;
    case RC_ADDR(0x0000a7ceu): goto L_A7CE;
    case RC_ADDR(0x0000a7d2u): goto L_A7D2;
    case RC_ADDR(0x0000a7d4u): goto L_A7D4;
    case RC_ADDR(0x0000a7d6u): goto L_A7D6;
    case RC_ADDR(0x0000a7d8u): goto L_A7D8;
    case RC_ADDR(0x0000a7dcu): goto L_A7DC;
    case RC_ADDR(0x0000a7e0u): goto L_A7E0;
    case RC_ADDR(0x0000a7e4u): goto L_A7E4;
    case RC_ADDR(0x0000a7e6u): goto L_A7E6;
    case RC_ADDR(0x0000a7eau): goto L_A7EA;
    case RC_ADDR(0x0000a7ecu): goto L_A7EC;
    case RC_ADDR(0x0000a7eeu): goto L_A7EE;
    case RC_ADDR(0x0000a7f0u): goto L_A7F0;
    case RC_ADDR(0x0000a7f4u): goto L_A7F4;
    case RC_ADDR(0x0000a7f8u): goto L_A7F8;
    case RC_ADDR(0x0000a7fcu): goto L_A7FC;
    case RC_ADDR(0x0000a7feu): goto L_A7FE;
    case RC_ADDR(0x0000a800u): goto L_A800;
    case RC_ADDR(0x0000a802u): goto L_A802;
    case RC_ADDR(0x0000a806u): goto L_A806;
    case RC_ADDR(0x0000a80au): goto L_A80A;
    case RC_ADDR(0x0000a80eu): goto L_A80E;
    case RC_ADDR(0x0000a810u): goto L_A810;
    case RC_ADDR(0x0000a814u): goto L_A814;
    case RC_ADDR(0x0000a816u): goto L_A816;
    case RC_ADDR(0x0000a818u): goto L_A818;
    case RC_ADDR(0x0000a81au): goto L_A81A;
    case RC_ADDR(0x0000a81eu): goto L_A81E;
    case RC_ADDR(0x0000a822u): goto L_A822;
    case RC_ADDR(0x0000a826u): goto L_A826;
    case RC_ADDR(0x0000a828u): goto L_A828;
    case RC_ADDR(0x0000a82eu): goto L_A82E;
    case RC_ADDR(0x0000a834u): goto L_A834;
    case RC_ADDR(0x0000a838u): goto L_A838;
    case RC_ADDR(0x0000a83cu): goto L_A83C;
    case RC_ADDR(0x0000a840u): goto L_A840;
    case RC_ADDR(0x0000a842u): goto L_A842;
    case RC_ADDR(0x0000a844u): goto L_A844;
    case RC_ADDR(0x0000a846u): goto L_A846;
    case RC_ADDR(0x0000a84au): goto L_A84A;
    case RC_ADDR(0x0000a84eu): goto L_A84E;
    case RC_ADDR(0x0000a850u): goto L_A850;
    case RC_ADDR(0x0000a852u): goto L_A852;
    case RC_ADDR(0x0000a856u): goto L_A856;
    case RC_ADDR(0x0000a858u): goto L_A858;
    case RC_ADDR(0x0000a85au): goto L_A85A;
    case RC_ADDR(0x0000a85cu): goto L_A85C;
    case RC_ADDR(0x0000a860u): goto L_A860;
    case RC_ADDR(0x0000a864u): goto L_A864;
    case RC_ADDR(0x0000a868u): goto L_A868;
    case RC_ADDR(0x0000a86au): goto L_A86A;
    case RC_ADDR(0x0000a86eu): goto L_A86E;
    case RC_ADDR(0x0000a870u): goto L_A870;
    case RC_ADDR(0x0000a872u): goto L_A872;
    case RC_ADDR(0x0000a874u): goto L_A874;
    case RC_ADDR(0x0000a878u): goto L_A878;
    case RC_ADDR(0x0000a87cu): goto L_A87C;
    case RC_ADDR(0x0000a880u): goto L_A880;
    case RC_ADDR(0x0000a882u): goto L_A882;
    case RC_ADDR(0x0000a884u): goto L_A884;
    case RC_ADDR(0x0000a886u): goto L_A886;
    case RC_ADDR(0x0000a88au): goto L_A88A;
    case RC_ADDR(0x0000a88eu): goto L_A88E;
    case RC_ADDR(0x0000a892u): goto L_A892;
    case RC_ADDR(0x0000a894u): goto L_A894;
    case RC_ADDR(0x0000a898u): goto L_A898;
    case RC_ADDR(0x0000a89au): goto L_A89A;
    case RC_ADDR(0x0000a89cu): goto L_A89C;
    case RC_ADDR(0x0000a89eu): goto L_A89E;
    case RC_ADDR(0x0000a8a2u): goto L_A8A2;
    case RC_ADDR(0x0000a8a6u): goto L_A8A6;
    case RC_ADDR(0x0000a8aau): goto L_A8AA;
    case RC_ADDR(0x0000a8acu): goto L_A8AC;
    case RC_ADDR(0x0000a8b2u): goto L_A8B2;
    case RC_ADDR(0x0000a8b8u): goto L_A8B8;
    case RC_ADDR(0x0000a8bau): goto L_A8BA;
    case RC_ADDR(0x0000a8bcu): goto L_A8BC;
    case RC_ADDR(0x0000a8c0u): goto L_A8C0;
    case RC_ADDR(0x0000a8c2u): goto L_A8C2;
    case RC_ADDR(0x0000a8c6u): goto L_A8C6;
    case RC_ADDR(0x0000a8cau): goto L_A8CA;
    case RC_ADDR(0x0000a8ceu): goto L_A8CE;
    case RC_ADDR(0x0000a8d0u): goto L_A8D0;
    case RC_ADDR(0x0000a8d4u): goto L_A8D4;
    case RC_ADDR(0x0000a8d8u): goto L_A8D8;
    case RC_ADDR(0x0000a8dcu): goto L_A8DC;
    case RC_ADDR(0x0000a8deu): goto L_A8DE;
    case RC_ADDR(0x0000a8e2u): goto L_A8E2;
    case RC_ADDR(0x0000a8e6u): goto L_A8E6;
    case RC_ADDR(0x0000a8eau): goto L_A8EA;
    case RC_ADDR(0x0000a8ecu): goto L_A8EC;
    case RC_ADDR(0x0000a8f0u): goto L_A8F0;
    case RC_ADDR(0x0000a8f4u): goto L_A8F4;
    case RC_ADDR(0x0000a8f8u): goto L_A8F8;
    case RC_ADDR(0x0000a8fcu): goto L_A8FC;
    case RC_ADDR(0x0000a8feu): goto L_A8FE;
    case RC_ADDR(0x0000a900u): goto L_A900;
    case RC_ADDR(0x0000a902u): goto L_A902;
    case RC_ADDR(0x0000a904u): goto L_A904;
    case RC_ADDR(0x0000a906u): goto L_A906;
    case RC_ADDR(0x0000a90au): goto L_A90A;
    case RC_ADDR(0x0000a90eu): goto L_A90E;
    case RC_ADDR(0x0000a910u): goto L_A910;
    case RC_ADDR(0x0000a912u): goto L_A912;
    case RC_ADDR(0x0000a916u): goto L_A916;
    case RC_ADDR(0x0000a91au): goto L_A91A;
    case RC_ADDR(0x0000a91eu): goto L_A91E;
    case RC_ADDR(0x0000a920u): goto L_A920;
    case RC_ADDR(0x0000a922u): goto L_A922;
    case RC_ADDR(0x0000a924u): goto L_A924;
    case RC_ADDR(0x0000a926u): goto L_A926;
    case RC_ADDR(0x0000a928u): goto L_A928;
    case RC_ADDR(0x0000a92cu): goto L_A92C;
    case RC_ADDR(0x0000a930u): goto L_A930;
    case RC_ADDR(0x0000a932u): goto L_A932;
    case RC_ADDR(0x0000a934u): goto L_A934;
    case RC_ADDR(0x0000a938u): goto L_A938;
    case RC_ADDR(0x0000a93cu): goto L_A93C;
    case RC_ADDR(0x0000a940u): goto L_A940;
    case RC_ADDR(0x0000a944u): goto L_A944;
    case RC_ADDR(0x0000a946u): goto L_A946;
    case RC_ADDR(0x0000a948u): goto L_A948;
    case RC_ADDR(0x0000a94au): goto L_A94A;
    case RC_ADDR(0x0000a94eu): goto L_A94E;
    case RC_ADDR(0x0000a952u): goto L_A952;
    case RC_ADDR(0x0000a954u): goto L_A954;
    case RC_ADDR(0x0000a956u): goto L_A956;
    case RC_ADDR(0x0000a95au): goto L_A95A;
    case RC_ADDR(0x0000a95eu): goto L_A95E;
    case RC_ADDR(0x0000a962u): goto L_A962;
    case RC_ADDR(0x0000a968u): goto L_A968;
    case RC_ADDR(0x0000a96cu): goto L_A96C;
    case RC_ADDR(0x0000a970u): goto L_A970;
    case RC_ADDR(0x0000a976u): goto L_A976;
    case RC_ADDR(0x0000a97cu): goto L_A97C;
    case RC_ADDR(0x0000a982u): goto L_A982;
    case RC_ADDR(0x0000a988u): goto L_A988;
    case RC_ADDR(0x0000a98cu): goto L_A98C;
    case RC_ADDR(0x0000a990u): goto L_A990;
    case RC_ADDR(0x0000a994u): goto L_A994;
    case RC_ADDR(0x0000a998u): goto L_A998;
    case RC_ADDR(0x0000a99eu): goto L_A99E;
    case RC_ADDR(0x0000a9a2u): goto L_A9A2;
    case RC_ADDR(0x0000a9a6u): goto L_A9A6;
    case RC_ADDR(0x0000a9aau): goto L_A9AA;
    case RC_ADDR(0x0000a9aeu): goto L_A9AE;
    case RC_ADDR(0x0000a9b0u): goto L_A9B0;
    case RC_ADDR(0x0000a9b2u): goto L_A9B2;
    case RC_ADDR(0x0000a9b6u): goto L_A9B6;
    case RC_ADDR(0x0000a9bau): goto L_A9BA;
    case RC_ADDR(0x0000a9beu): goto L_A9BE;
    case RC_ADDR(0x0000a9c0u): goto L_A9C0;
    case RC_ADDR(0x0000a9c2u): goto L_A9C2;
    case RC_ADDR(0x0000a9c6u): goto L_A9C6;
    case RC_ADDR(0x0000a9cau): goto L_A9CA;
    case RC_ADDR(0x0000a9ccu): goto L_A9CC;
    case RC_ADDR(0x0000a9d0u): goto L_A9D0;
    case RC_ADDR(0x0000a9d2u): goto L_A9D2;
    case RC_ADDR(0x0000a9d4u): goto L_A9D4;
    case RC_ADDR(0x0000a9d8u): goto L_A9D8;
    case RC_ADDR(0x0000a9dcu): goto L_A9DC;
    case RC_ADDR(0x0000a9e0u): goto L_A9E0;
    case RC_ADDR(0x0000a9e4u): goto L_A9E4;
    case RC_ADDR(0x0000a9e8u): goto L_A9E8;
    case RC_ADDR(0x0000a9eeu): goto L_A9EE;
    case RC_ADDR(0x0000a9f2u): goto L_A9F2;
    case RC_ADDR(0x0000a9f6u): goto L_A9F6;
    case RC_ADDR(0x0000a9fau): goto L_A9FA;
    case RC_ADDR(0x0000a9fcu): goto L_A9FC;
    case RC_ADDR(0x0000aa00u): goto L_AA00;
    case RC_ADDR(0x0000aa02u): goto L_AA02;
    case RC_ADDR(0x0000aa04u): goto L_AA04;
    case RC_ADDR(0x0000aa08u): goto L_AA08;
    case RC_ADDR(0x0000aa0cu): goto L_AA0C;
    case RC_ADDR(0x0000aa10u): goto L_AA10;
    case RC_ADDR(0x0000aa14u): goto L_AA14;
    case RC_ADDR(0x0000aa18u): goto L_AA18;
    case RC_ADDR(0x0000aa1cu): goto L_AA1C;
    case RC_ADDR(0x0000aa20u): goto L_AA20;
    case RC_ADDR(0x0000aa24u): goto L_AA24;
    case RC_ADDR(0x0000aa26u): goto L_AA26;
    case RC_ADDR(0x0000aa2au): goto L_AA2A;
    case RC_ADDR(0x0000aa2eu): goto L_AA2E;
    case RC_ADDR(0x0000aa32u): goto L_AA32;
    case RC_ADDR(0x0000aa36u): goto L_AA36;
    case RC_ADDR(0x0000aa3au): goto L_AA3A;
    case RC_ADDR(0x0000aa3eu): goto L_AA3E;
    case RC_ADDR(0x0000aa40u): goto L_AA40;
    case RC_ADDR(0x0000aa46u): goto L_AA46;
    case RC_ADDR(0x0000aa48u): goto L_AA48;
    case RC_ADDR(0x0000aa4cu): goto L_AA4C;
    case RC_ADDR(0x0000aa4eu): goto L_AA4E;
    case RC_ADDR(0x0000aa50u): goto L_AA50;
    case RC_ADDR(0x0000aa52u): goto L_AA52;
    case RC_ADDR(0x0000aa58u): goto L_AA58;
    case RC_ADDR(0x0000aa5au): goto L_AA5A;
    case RC_ADDR(0x0000aa5cu): goto L_AA5C;
    case RC_ADDR(0x0000aa60u): goto L_AA60;
    case RC_ADDR(0x0000aa62u): goto L_AA62;
    case RC_ADDR(0x0000aa66u): goto L_AA66;
    case RC_ADDR(0x0000aa6au): goto L_AA6A;
    case RC_ADDR(0x0000aa6eu): goto L_AA6E;
    case RC_ADDR(0x0000aa72u): goto L_AA72;
    case RC_ADDR(0x0000aa76u): goto L_AA76;
    case RC_ADDR(0x0000aa7au): goto L_AA7A;
    case RC_ADDR(0x0000aa7eu): goto L_AA7E;
    case RC_ADDR(0x0000aa82u): goto L_AA82;
    case RC_ADDR(0x0000aa86u): goto L_AA86;
    case RC_ADDR(0x0000aa88u): goto L_AA88;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_A74E:
    /* 0000a74e   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x0000a74eu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_A752:
    /* 0000a752   6  move.l (8,A5),(fffffebe,A4) */
    c->pc = RC_ADDR(0x0000a752u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] - 0x142u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_A758:
    /* 0000a758   4  tst.w (fffffe40,A4) */
    c->pc = RC_ADDR(0x0000a758u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x1c0u));
    rc_set_nzvc(c, t0, RC_W);

L_A75C:
    /* 0000a75c   4  bne 0000aa26 */
    c->pc = RC_ADDR(0x0000a75cu);
    if (rc_cond(c, 6)) goto L_AA26;

L_A760:
    /* 0000a760   4  clr.b (ffffffff,A5) */
    c->pc = RC_ADDR(0x0000a760u);
    rc_wr8(c, m, (c->a[5] - 0x1u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_A764:
    /* 0000a764   4  move.b (ffffffff,A5),D0 */
    c->pc = RC_ADDR(0x0000a764u);
    t0 = rc_rd8(c, m, (c->a[5] - 0x1u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_A768:
    /* 0000a768   2  ext.w D0 */
    c->pc = RC_ADDR(0x0000a768u);
    rc_ext_w(c, 0);

L_A76A:
    /* 0000a76a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000a76au);
    rc_ext_l(c, 0);

L_A76C:
    /* 0000a76c   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000a76cu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_A76E:
    /* 0000a76e   4  lea (ffff9320,A4),A0 */
    c->pc = RC_ADDR(0x0000a76eu);
    c->a[0] = (c->a[4] - 0x6ce0u);

L_A772:
    /* 0000a772   4  movea.l (0,A0,D0.w),A1 */
    c->pc = RC_ADDR(0x0000a772u);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[1] = t0;

L_A776:
    /* 0000a776   2  tst.b (A1) */
    c->pc = RC_ADDR(0x0000a776u);
    t0 = rc_rd8(c, m, c->a[1]);
    rc_set_nzvc(c, t0, RC_B);

L_A778:
    /* 0000a778   2  beq 0000a7aa */
    c->pc = RC_ADDR(0x0000a778u);
    if (rc_cond(c, 7)) goto L_A7AA;

L_A77A:
    /* 0000a77a   4  move.b (ffffffff,A5),D0 */
    c->pc = RC_ADDR(0x0000a77au);
    t0 = rc_rd8(c, m, (c->a[5] - 0x1u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_A77E:
    /* 0000a77e   2  ext.w D0 */
    c->pc = RC_ADDR(0x0000a77eu);
    rc_ext_w(c, 0);

L_A780:
    /* 0000a780   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000a780u);
    rc_ext_l(c, 0);

L_A782:
    /* 0000a782   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000a782u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_A784:
    /* 0000a784   4  lea (ffff9320,A4),A0 */
    c->pc = RC_ADDR(0x0000a784u);
    c->a[0] = (c->a[4] - 0x6ce0u);

L_A788:
    /* 0000a788   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000a788u);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_A78C:
    /* 0000a78c   4  jsr (ffff8254,A4) */
    c->pc = RC_ADDR(0x0000a78cu);
    /* vector 99 */
    rc_push32(c, m, RC_ADDR(0x0000a790u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f186u);
    return;

L_A790:
    /* 0000a790   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000a790u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_A792:
    /* 0000a792   4  move.b (ffffffff,A5),D1 */
    c->pc = RC_ADDR(0x0000a792u);
    t0 = rc_rd8(c, m, (c->a[5] - 0x1u));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_A796:
    /* 0000a796   2  ext.w D1 */
    c->pc = RC_ADDR(0x0000a796u);
    rc_ext_w(c, 1);

L_A798:
    /* 0000a798   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000a798u);
    rc_ext_l(c, 1);

L_A79A:
    /* 0000a79a   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x0000a79au);
    c->d[1] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L);

L_A79C:
    /* 0000a79c   4  lea (30a,A4),A0 */
    c->pc = RC_ADDR(0x0000a79cu);
    c->a[0] = (c->a[4] + 0x30au);

L_A7A0:
    /* 0000a7a0   4  move.l D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x0000a7a0u);
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_A7A4:
    /* 0000a7a4   4  addq.b #1,(ffffffff,A5) */
    c->pc = RC_ADDR(0x0000a7a4u);
    t3 = (c->a[5] - 0x1u);
    t1 = rc_rd8(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_B, t1, 0x00000001u, t2, 0);
    rc_wr8(c, m, t3, t2);

L_A7A8:
    /* 0000a7a8   2  bra 0000a764 */
    c->pc = RC_ADDR(0x0000a7a8u);
    rc_tick();
    goto L_A764;

L_A7AA:
    /* 0000a7aa   4  move.w (416,A4),D0 */
    c->pc = RC_ADDR(0x0000a7aau);
    t0 = rc_rd16(c, m, (c->a[4] + 0x416u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A7AE:
    /* 0000a7ae   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000a7aeu);
    rc_ext_l(c, 0);

L_A7B0:
    /* 0000a7b0   4  bra 0000a8ba */
    c->pc = RC_ADDR(0x0000a7b0u);
    goto L_A8BA;

L_A7B4:
    /* 0000a7b4   4  clr.b (ffffffff,A5) */
    c->pc = RC_ADDR(0x0000a7b4u);
    rc_wr8(c, m, (c->a[5] - 0x1u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_A7B8:
    /* 0000a7b8   4  move.b (ffffffff,A5),D0 */
    c->pc = RC_ADDR(0x0000a7b8u);
    t0 = rc_rd8(c, m, (c->a[5] - 0x1u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_A7BC:
    /* 0000a7bc   2  ext.w D0 */
    c->pc = RC_ADDR(0x0000a7bcu);
    rc_ext_w(c, 0);

L_A7BE:
    /* 0000a7be   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000a7beu);
    rc_ext_l(c, 0);

L_A7C0:
    /* 0000a7c0   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000a7c0u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_A7C2:
    /* 0000a7c2   4  lea (ffff9360,A4),A0 */
    c->pc = RC_ADDR(0x0000a7c2u);
    c->a[0] = (c->a[4] - 0x6ca0u);

L_A7C6:
    /* 0000a7c6   4  movea.l (0,A0,D0.w),A1 */
    c->pc = RC_ADDR(0x0000a7c6u);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[1] = t0;

L_A7CA:
    /* 0000a7ca   2  tst.b (A1) */
    c->pc = RC_ADDR(0x0000a7cau);
    t0 = rc_rd8(c, m, c->a[1]);
    rc_set_nzvc(c, t0, RC_B);

L_A7CC:
    /* 0000a7cc   2  beq 0000a828 */
    c->pc = RC_ADDR(0x0000a7ccu);
    if (rc_cond(c, 7)) goto L_A828;

L_A7CE:
    /* 0000a7ce   4  move.b (ffffffff,A5),D0 */
    c->pc = RC_ADDR(0x0000a7ceu);
    t0 = rc_rd8(c, m, (c->a[5] - 0x1u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_A7D2:
    /* 0000a7d2   2  ext.w D0 */
    c->pc = RC_ADDR(0x0000a7d2u);
    rc_ext_w(c, 0);

L_A7D4:
    /* 0000a7d4   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000a7d4u);
    rc_ext_l(c, 0);

L_A7D6:
    /* 0000a7d6   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000a7d6u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_A7D8:
    /* 0000a7d8   4  lea (ffff9360,A4),A0 */
    c->pc = RC_ADDR(0x0000a7d8u);
    c->a[0] = (c->a[4] - 0x6ca0u);

L_A7DC:
    /* 0000a7dc   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000a7dcu);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_A7E0:
    /* 0000a7e0   4  jsr (ffff8254,A4) */
    c->pc = RC_ADDR(0x0000a7e0u);
    /* vector 99 */
    rc_push32(c, m, RC_ADDR(0x0000a7e4u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f186u);
    return;

L_A7E4:
    /* 0000a7e4   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000a7e4u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_A7E6:
    /* 0000a7e6   4  move.b (ffffffff,A5),D1 */
    c->pc = RC_ADDR(0x0000a7e6u);
    t0 = rc_rd8(c, m, (c->a[5] - 0x1u));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_A7EA:
    /* 0000a7ea   2  ext.w D1 */
    c->pc = RC_ADDR(0x0000a7eau);
    rc_ext_w(c, 1);

L_A7EC:
    /* 0000a7ec   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000a7ecu);
    rc_ext_l(c, 1);

L_A7EE:
    /* 0000a7ee   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x0000a7eeu);
    c->d[1] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L);

L_A7F0:
    /* 0000a7f0   4  lea (34a,A4),A0 */
    c->pc = RC_ADDR(0x0000a7f0u);
    c->a[0] = (c->a[4] + 0x34au);

L_A7F4:
    /* 0000a7f4   4  move.l D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x0000a7f4u);
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_A7F8:
    /* 0000a7f8   4  move.b (ffffffff,A5),D0 */
    c->pc = RC_ADDR(0x0000a7f8u);
    t0 = rc_rd8(c, m, (c->a[5] - 0x1u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_A7FC:
    /* 0000a7fc   2  ext.w D0 */
    c->pc = RC_ADDR(0x0000a7fcu);
    rc_ext_w(c, 0);

L_A7FE:
    /* 0000a7fe   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000a7feu);
    rc_ext_l(c, 0);

L_A800:
    /* 0000a800   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000a800u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_A802:
    /* 0000a802   4  lea (ffff93e0,A4),A0 */
    c->pc = RC_ADDR(0x0000a802u);
    c->a[0] = (c->a[4] - 0x6c20u);

L_A806:
    /* 0000a806   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000a806u);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_A80A:
    /* 0000a80a   4  jsr (ffff8254,A4) */
    c->pc = RC_ADDR(0x0000a80au);
    /* vector 99 */
    rc_push32(c, m, RC_ADDR(0x0000a80eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f186u);
    return;

L_A80E:
    /* 0000a80e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000a80eu);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_A810:
    /* 0000a810   4  move.b (ffffffff,A5),D1 */
    c->pc = RC_ADDR(0x0000a810u);
    t0 = rc_rd8(c, m, (c->a[5] - 0x1u));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_A814:
    /* 0000a814   2  ext.w D1 */
    c->pc = RC_ADDR(0x0000a814u);
    rc_ext_w(c, 1);

L_A816:
    /* 0000a816   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000a816u);
    rc_ext_l(c, 1);

L_A818:
    /* 0000a818   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x0000a818u);
    c->d[1] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L);

L_A81A:
    /* 0000a81a   4  lea (38a,A4),A0 */
    c->pc = RC_ADDR(0x0000a81au);
    c->a[0] = (c->a[4] + 0x38au);

L_A81E:
    /* 0000a81e   4  move.l D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x0000a81eu);
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_A822:
    /* 0000a822   4  addq.b #1,(ffffffff,A5) */
    c->pc = RC_ADDR(0x0000a822u);
    t3 = (c->a[5] - 0x1u);
    t1 = rc_rd8(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_B, t1, 0x00000001u, t2, 0);
    rc_wr8(c, m, t3, t2);

L_A826:
    /* 0000a826   2  bra 0000a7b8 */
    c->pc = RC_ADDR(0x0000a826u);
    rc_tick();
    goto L_A7B8;

L_A828:
    /* 0000a828   6  move.w #ae,(3ca,A4) */
    c->pc = RC_ADDR(0x0000a828u);
    t0 = 0x000000aeu;
    rc_wr16(c, m, (c->a[4] + 0x3cau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_A82E:
    /* 0000a82e   6  move.w #54,(3cc,A4) */
    c->pc = RC_ADDR(0x0000a82eu);
    t0 = 0x00000054u;
    rc_wr16(c, m, (c->a[4] + 0x3ccu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_A834:
    /* 0000a834   4  bra 0000a8c6 */
    c->pc = RC_ADDR(0x0000a834u);
    goto L_A8C6;

L_A838:
    /* 0000a838   4  clr.b (ffffffff,A5) */
    c->pc = RC_ADDR(0x0000a838u);
    rc_wr8(c, m, (c->a[5] - 0x1u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_A83C:
    /* 0000a83c   4  move.b (ffffffff,A5),D0 */
    c->pc = RC_ADDR(0x0000a83cu);
    t0 = rc_rd8(c, m, (c->a[5] - 0x1u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_A840:
    /* 0000a840   2  ext.w D0 */
    c->pc = RC_ADDR(0x0000a840u);
    rc_ext_w(c, 0);

L_A842:
    /* 0000a842   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000a842u);
    rc_ext_l(c, 0);

L_A844:
    /* 0000a844   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000a844u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_A846:
    /* 0000a846   4  lea (ffff9360,A4),A0 */
    c->pc = RC_ADDR(0x0000a846u);
    c->a[0] = (c->a[4] - 0x6ca0u);

L_A84A:
    /* 0000a84a   4  movea.l (0,A0,D0.w),A1 */
    c->pc = RC_ADDR(0x0000a84au);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[1] = t0;

L_A84E:
    /* 0000a84e   2  tst.b (A1) */
    c->pc = RC_ADDR(0x0000a84eu);
    t0 = rc_rd8(c, m, c->a[1]);
    rc_set_nzvc(c, t0, RC_B);

L_A850:
    /* 0000a850   2  beq 0000a8ac */
    c->pc = RC_ADDR(0x0000a850u);
    if (rc_cond(c, 7)) goto L_A8AC;

L_A852:
    /* 0000a852   4  move.b (ffffffff,A5),D0 */
    c->pc = RC_ADDR(0x0000a852u);
    t0 = rc_rd8(c, m, (c->a[5] - 0x1u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_A856:
    /* 0000a856   2  ext.w D0 */
    c->pc = RC_ADDR(0x0000a856u);
    rc_ext_w(c, 0);

L_A858:
    /* 0000a858   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000a858u);
    rc_ext_l(c, 0);

L_A85A:
    /* 0000a85a   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000a85au);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_A85C:
    /* 0000a85c   4  lea (ffff93a0,A4),A0 */
    c->pc = RC_ADDR(0x0000a85cu);
    c->a[0] = (c->a[4] - 0x6c60u);

L_A860:
    /* 0000a860   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000a860u);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_A864:
    /* 0000a864   4  jsr (ffff8254,A4) */
    c->pc = RC_ADDR(0x0000a864u);
    /* vector 99 */
    rc_push32(c, m, RC_ADDR(0x0000a868u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f186u);
    return;

L_A868:
    /* 0000a868   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000a868u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_A86A:
    /* 0000a86a   4  move.b (ffffffff,A5),D1 */
    c->pc = RC_ADDR(0x0000a86au);
    t0 = rc_rd8(c, m, (c->a[5] - 0x1u));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_A86E:
    /* 0000a86e   2  ext.w D1 */
    c->pc = RC_ADDR(0x0000a86eu);
    rc_ext_w(c, 1);

L_A870:
    /* 0000a870   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000a870u);
    rc_ext_l(c, 1);

L_A872:
    /* 0000a872   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x0000a872u);
    c->d[1] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L);

L_A874:
    /* 0000a874   4  lea (34a,A4),A0 */
    c->pc = RC_ADDR(0x0000a874u);
    c->a[0] = (c->a[4] + 0x34au);

L_A878:
    /* 0000a878   4  move.l D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x0000a878u);
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_A87C:
    /* 0000a87c   4  move.b (ffffffff,A5),D0 */
    c->pc = RC_ADDR(0x0000a87cu);
    t0 = rc_rd8(c, m, (c->a[5] - 0x1u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_A880:
    /* 0000a880   2  ext.w D0 */
    c->pc = RC_ADDR(0x0000a880u);
    rc_ext_w(c, 0);

L_A882:
    /* 0000a882   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000a882u);
    rc_ext_l(c, 0);

L_A884:
    /* 0000a884   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000a884u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_A886:
    /* 0000a886   4  lea (ffff9420,A4),A0 */
    c->pc = RC_ADDR(0x0000a886u);
    c->a[0] = (c->a[4] - 0x6be0u);

L_A88A:
    /* 0000a88a   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000a88au);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_A88E:
    /* 0000a88e   4  jsr (ffff8254,A4) */
    c->pc = RC_ADDR(0x0000a88eu);
    /* vector 99 */
    rc_push32(c, m, RC_ADDR(0x0000a892u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f186u);
    return;

L_A892:
    /* 0000a892   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000a892u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_A894:
    /* 0000a894   4  move.b (ffffffff,A5),D1 */
    c->pc = RC_ADDR(0x0000a894u);
    t0 = rc_rd8(c, m, (c->a[5] - 0x1u));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_A898:
    /* 0000a898   2  ext.w D1 */
    c->pc = RC_ADDR(0x0000a898u);
    rc_ext_w(c, 1);

L_A89A:
    /* 0000a89a   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000a89au);
    rc_ext_l(c, 1);

L_A89C:
    /* 0000a89c   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x0000a89cu);
    c->d[1] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L);

L_A89E:
    /* 0000a89e   4  lea (38a,A4),A0 */
    c->pc = RC_ADDR(0x0000a89eu);
    c->a[0] = (c->a[4] + 0x38au);

L_A8A2:
    /* 0000a8a2   4  move.l D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x0000a8a2u);
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_A8A6:
    /* 0000a8a6   4  addq.b #1,(ffffffff,A5) */
    c->pc = RC_ADDR(0x0000a8a6u);
    t3 = (c->a[5] - 0x1u);
    t1 = rc_rd8(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_B, t1, 0x00000001u, t2, 0);
    rc_wr8(c, m, t3, t2);

L_A8AA:
    /* 0000a8aa   2  bra 0000a83c */
    c->pc = RC_ADDR(0x0000a8aau);
    rc_tick();
    goto L_A83C;

L_A8AC:
    /* 0000a8ac   6  move.w #ae,(3ca,A4) */
    c->pc = RC_ADDR(0x0000a8acu);
    t0 = 0x000000aeu;
    rc_wr16(c, m, (c->a[4] + 0x3cau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_A8B2:
    /* 0000a8b2   6  move.w #5b,(3cc,A4) */
    c->pc = RC_ADDR(0x0000a8b2u);
    t0 = 0x0000005bu;
    rc_wr16(c, m, (c->a[4] + 0x3ccu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_A8B8:
    /* 0000a8b8   2  bra 0000a8c6 */
    c->pc = RC_ADDR(0x0000a8b8u);
    goto L_A8C6;

L_A8BA:
    /* 0000a8ba   2  tst.l D0 */
    c->pc = RC_ADDR(0x0000a8bau);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_A8BC:
    /* 0000a8bc   4  beq 0000a7b4 */
    c->pc = RC_ADDR(0x0000a8bcu);
    if (rc_cond(c, 7)) { rc_tick(); goto L_A7B4; }

L_A8C0:
    /* 0000a8c0   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x0000a8c0u);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_A8C2:
    /* 0000a8c2   4  beq 0000a838 */
    c->pc = RC_ADDR(0x0000a8c2u);
    if (rc_cond(c, 7)) { rc_tick(); goto L_A838; }

L_A8C6:
    /* 0000a8c6   4  pea (0000aa8a) */
    c->pc = RC_ADDR(0x0000a8c6u);
    rc_push32(c, m, RC_ADDR(0x0000aa8au));

L_A8CA:
    /* 0000a8ca   4  jsr (ffff8206,A4) */
    c->pc = RC_ADDR(0x0000a8cau);
    /* vector 86 */
    rc_push32(c, m, RC_ADDR(0x0000a8ceu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d4fau);
    return;

L_A8CE:
    /* 0000a8ce   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000a8ceu);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_A8D0:
    /* 0000a8d0   4  move.l D0,(2fe,A4) */
    c->pc = RC_ADDR(0x0000a8d0u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x2feu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_A8D4:
    /* 0000a8d4   4  pea (0000aa98) */
    c->pc = RC_ADDR(0x0000a8d4u);
    rc_push32(c, m, RC_ADDR(0x0000aa98u));

L_A8D8:
    /* 0000a8d8   4  jsr (ffff8254,A4) */
    c->pc = RC_ADDR(0x0000a8d8u);
    /* vector 99 */
    rc_push32(c, m, RC_ADDR(0x0000a8dcu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f186u);
    return;

L_A8DC:
    /* 0000a8dc   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000a8dcu);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_A8DE:
    /* 0000a8de   4  move.l D0,(2f6,A4) */
    c->pc = RC_ADDR(0x0000a8deu);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x2f6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_A8E2:
    /* 0000a8e2   4  pea (0000aa9e) */
    c->pc = RC_ADDR(0x0000a8e2u);
    rc_push32(c, m, RC_ADDR(0x0000aa9eu));

L_A8E6:
    /* 0000a8e6   4  jsr (ffff8254,A4) */
    c->pc = RC_ADDR(0x0000a8e6u);
    /* vector 99 */
    rc_push32(c, m, RC_ADDR(0x0000a8eau));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f186u);
    return;

L_A8EA:
    /* 0000a8ea   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000a8eau);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_A8EC:
    /* 0000a8ec   4  move.l D0,(2fa,A4) */
    c->pc = RC_ADDR(0x0000a8ecu);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x2fau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_A8F0:
    /* 0000a8f0   4  clr.w (304,A4) */
    c->pc = RC_ADDR(0x0000a8f0u);
    rc_wr16(c, m, (c->a[4] + 0x304u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A8F4:
    /* 0000a8f4   4  clr.w (302,A4) */
    c->pc = RC_ADDR(0x0000a8f4u);
    rc_wr16(c, m, (c->a[4] + 0x302u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A8F8:
    /* 0000a8f8   4  tst.w (416,A4) */
    c->pc = RC_ADDR(0x0000a8f8u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x416u));
    rc_set_nzvc(c, t0, RC_W);

L_A8FC:
    /* 0000a8fc   2  beq 0000a920 */
    c->pc = RC_ADDR(0x0000a8fcu);
    if (rc_cond(c, 7)) goto L_A920;

L_A8FE:
    /* 0000a8fe   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000a8feu);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A900:
    /* 0000a900   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000a900u);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A902:
    /* 0000a902   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000a902u);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A904:
    /* 0000a904   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000a904u);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A906:
    /* 0000a906   4  pea (0000aaa4) */
    c->pc = RC_ADDR(0x0000a906u);
    rc_push32(c, m, RC_ADDR(0x0000aaa4u));

L_A90A:
    /* 0000a90a   4  jsr (ffff8254,A4) */
    c->pc = RC_ADDR(0x0000a90au);
    /* vector 99 */
    rc_push32(c, m, RC_ADDR(0x0000a90eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f186u);
    return;

L_A90E:
    /* 0000a90e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000a90eu);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_A910:
    /* 0000a910   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0000a910u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_A912:
    /* 0000a912   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000a912u);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_A916:
    /* 0000a916   4  jsr (ffff8272,A4) */
    c->pc = RC_ADDR(0x0000a916u);
    /* vector 104 */
    rc_push32(c, m, RC_ADDR(0x0000a91au));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f914u);
    return;

L_A91A:
    /* 0000a91a   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000a91au);
    c->a[7] = (c->a[7] + 0xeu);

L_A91E:
    /* 0000a91e   2  bra 0000a940 */
    c->pc = RC_ADDR(0x0000a91eu);
    goto L_A940;

L_A920:
    /* 0000a920   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000a920u);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A922:
    /* 0000a922   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000a922u);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A924:
    /* 0000a924   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000a924u);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A926:
    /* 0000a926   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000a926u);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A928:
    /* 0000a928   4  pea (0000aaaa) */
    c->pc = RC_ADDR(0x0000a928u);
    rc_push32(c, m, RC_ADDR(0x0000aaaau));

L_A92C:
    /* 0000a92c   4  jsr (ffff8254,A4) */
    c->pc = RC_ADDR(0x0000a92cu);
    /* vector 99 */
    rc_push32(c, m, RC_ADDR(0x0000a930u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f186u);
    return;

L_A930:
    /* 0000a930   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000a930u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_A932:
    /* 0000a932   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0000a932u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_A934:
    /* 0000a934   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000a934u);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_A938:
    /* 0000a938   4  jsr (ffff8272,A4) */
    c->pc = RC_ADDR(0x0000a938u);
    /* vector 104 */
    rc_push32(c, m, RC_ADDR(0x0000a93cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f914u);
    return;

L_A93C:
    /* 0000a93c   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000a93cu);
    c->a[7] = (c->a[7] + 0xeu);

L_A940:
    /* 0000a940   4  move.w #50,-(A7) */
    c->pc = RC_ADDR(0x0000a940u);
    t0 = 0x00000050u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_A944:
    /* 0000a944   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000a944u);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A946:
    /* 0000a946   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000a946u);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A948:
    /* 0000a948   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000a948u);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A94A:
    /* 0000a94a   4  pea (0000aaaf) */
    c->pc = RC_ADDR(0x0000a94au);
    rc_push32(c, m, RC_ADDR(0x0000aaafu));

L_A94E:
    /* 0000a94e   4  jsr (ffff8254,A4) */
    c->pc = RC_ADDR(0x0000a94eu);
    /* vector 99 */
    rc_push32(c, m, RC_ADDR(0x0000a952u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f186u);
    return;

L_A952:
    /* 0000a952   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000a952u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_A954:
    /* 0000a954   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0000a954u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_A956:
    /* 0000a956   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000a956u);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_A95A:
    /* 0000a95a   4  jsr (ffff8272,A4) */
    c->pc = RC_ADDR(0x0000a95au);
    /* vector 104 */
    rc_push32(c, m, RC_ADDR(0x0000a95eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f914u);
    return;

L_A95E:
    /* 0000a95e   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000a95eu);
    c->a[7] = (c->a[7] + 0xeu);

L_A962:
    /* 0000a962   6  move.w #1,(fffffe40,A4) */
    c->pc = RC_ADDR(0x0000a962u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x1c0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_A968:
    /* 0000a968   4  clr.w (3da,A4) */
    c->pc = RC_ADDR(0x0000a968u);
    rc_wr16(c, m, (c->a[4] + 0x3dau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A96C:
    /* 0000a96c   4  clr.w (3d8,A4) */
    c->pc = RC_ADDR(0x0000a96cu);
    rc_wr16(c, m, (c->a[4] + 0x3d8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A970:
    /* 0000a970   6  move.w #4,(3de,A4) */
    c->pc = RC_ADDR(0x0000a970u);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] + 0x3deu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_A976:
    /* 0000a976   6  move.w #4,(3dc,A4) */
    c->pc = RC_ADDR(0x0000a976u);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] + 0x3dcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_A97C:
    /* 0000a97c   6  move.w #76,(3e2,A4) */
    c->pc = RC_ADDR(0x0000a97cu);
    t0 = 0x00000076u;
    rc_wr16(c, m, (c->a[4] + 0x3e2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_A982:
    /* 0000a982   6  move.w #76,(3e0,A4) */
    c->pc = RC_ADDR(0x0000a982u);
    t0 = 0x00000076u;
    rc_wr16(c, m, (c->a[4] + 0x3e0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_A988:
    /* 0000a988   4  clr.w (3d4,A4) */
    c->pc = RC_ADDR(0x0000a988u);
    rc_wr16(c, m, (c->a[4] + 0x3d4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A98C:
    /* 0000a98c   4  clr.w (3d2,A4) */
    c->pc = RC_ADDR(0x0000a98cu);
    rc_wr16(c, m, (c->a[4] + 0x3d2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A990:
    /* 0000a990   4  clr.w (3d0,A4) */
    c->pc = RC_ADDR(0x0000a990u);
    rc_wr16(c, m, (c->a[4] + 0x3d0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A994:
    /* 0000a994   4  clr.w (3ce,A4) */
    c->pc = RC_ADDR(0x0000a994u);
    rc_wr16(c, m, (c->a[4] + 0x3ceu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A998:
    /* 0000a998   6  move.w #3c,(3d6,A4) */
    c->pc = RC_ADDR(0x0000a998u);
    t0 = 0x0000003cu;
    rc_wr16(c, m, (c->a[4] + 0x3d6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_A99E:
    /* 0000a99e   4  clr.w (ffff96a0,A4) */
    c->pc = RC_ADDR(0x0000a99eu);
    rc_wr16(c, m, (c->a[4] - 0x6960u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A9A2:
    /* 0000a9a2   4  clr.w (3ce,A4) */
    c->pc = RC_ADDR(0x0000a9a2u);
    rc_wr16(c, m, (c->a[4] + 0x3ceu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A9A6:
    /* 0000a9a6   4  move.w #14,-(A7) */
    c->pc = RC_ADDR(0x0000a9a6u);
    t0 = 0x00000014u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_A9AA:
    /* 0000a9aa   4  move.w (3ce,A4),D0 */
    c->pc = RC_ADDR(0x0000a9aau);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3ceu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A9AE:
    /* 0000a9ae   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000a9aeu);
    rc_ext_l(c, 0);

L_A9B0:
    /* 0000a9b0   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000a9b0u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_A9B2:
    /* 0000a9b2   4  lea (ffff9462,A4),A0 */
    c->pc = RC_ADDR(0x0000a9b2u);
    c->a[0] = (c->a[4] - 0x6b9eu);

L_A9B6:
    /* 0000a9b6   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000a9b6u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_A9BA:
    /* 0000a9ba   4  move.w (3ce,A4),D0 */
    c->pc = RC_ADDR(0x0000a9bau);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3ceu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A9BE:
    /* 0000a9be   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000a9beu);
    rc_ext_l(c, 0);

L_A9C0:
    /* 0000a9c0   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000a9c0u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_A9C2:
    /* 0000a9c2   4  lea (ffff9460,A4),A0 */
    c->pc = RC_ADDR(0x0000a9c2u);
    c->a[0] = (c->a[4] - 0x6ba0u);

L_A9C6:
    /* 0000a9c6   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000a9c6u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_A9CA:
    /* 0000a9ca   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000a9cau);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A9CC:
    /* 0000a9cc   4  move.w (3ce,A4),D0 */
    c->pc = RC_ADDR(0x0000a9ccu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3ceu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A9D0:
    /* 0000a9d0   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000a9d0u);
    rc_ext_l(c, 0);

L_A9D2:
    /* 0000a9d2   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000a9d2u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_A9D4:
    /* 0000a9d4   4  lea (30a,A4),A0 */
    c->pc = RC_ADDR(0x0000a9d4u);
    c->a[0] = (c->a[4] + 0x30au);

L_A9D8:
    /* 0000a9d8   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000a9d8u);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_A9DC:
    /* 0000a9dc   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000a9dcu);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_A9E0:
    /* 0000a9e0   4  jsr (ffff8272,A4) */
    c->pc = RC_ADDR(0x0000a9e0u);
    /* vector 104 */
    rc_push32(c, m, RC_ADDR(0x0000a9e4u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f914u);
    return;

L_A9E4:
    /* 0000a9e4   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000a9e4u);
    c->a[7] = (c->a[7] + 0xeu);

L_A9E8:
    /* 0000a9e8   6  move.w #9,(3d0,A4) */
    c->pc = RC_ADDR(0x0000a9e8u);
    t0 = 0x00000009u;
    rc_wr16(c, m, (c->a[4] + 0x3d0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_A9EE:
    /* 0000a9ee   4  move.w #a,-(A7) */
    c->pc = RC_ADDR(0x0000a9eeu);
    t0 = 0x0000000au;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_A9F2:
    /* 0000a9f2   4  move.w (3cc,A4),-(A7) */
    c->pc = RC_ADDR(0x0000a9f2u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3ccu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_A9F6:
    /* 0000a9f6   4  move.w (3ca,A4),-(A7) */
    c->pc = RC_ADDR(0x0000a9f6u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3cau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_A9FA:
    /* 0000a9fa   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000a9fau);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A9FC:
    /* 0000a9fc   4  move.w (3d0,A4),D0 */
    c->pc = RC_ADDR(0x0000a9fcu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3d0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_AA00:
    /* 0000aa00   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000aa00u);
    rc_ext_l(c, 0);

L_AA02:
    /* 0000aa02   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000aa02u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_AA04:
    /* 0000aa04   4  lea (34a,A4),A0 */
    c->pc = RC_ADDR(0x0000aa04u);
    c->a[0] = (c->a[4] + 0x34au);

L_AA08:
    /* 0000aa08   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000aa08u);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AA0C:
    /* 0000aa0c   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000aa0cu);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_AA10:
    /* 0000aa10   4  jsr (ffff8272,A4) */
    c->pc = RC_ADDR(0x0000aa10u);
    /* vector 104 */
    rc_push32(c, m, RC_ADDR(0x0000aa14u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f914u);
    return;

L_AA14:
    /* 0000aa14   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000aa14u);
    c->a[7] = (c->a[7] + 0xeu);

L_AA18:
    /* 0000aa18   4  move.w #5,-(A7) */
    c->pc = RC_ADDR(0x0000aa18u);
    t0 = 0x00000005u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_AA1C:
    /* 0000aa1c   4  move.w #7,-(A7) */
    c->pc = RC_ADDR(0x0000aa1cu);
    t0 = 0x00000007u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_AA20:
    /* 0000aa20   4  jsr (ffff826c,A4) */
    c->pc = RC_ADDR(0x0000aa20u);
    /* vector 103 */
    rc_push32(c, m, RC_ADDR(0x0000aa24u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f8d4u);
    return;

L_AA24:
    /* 0000aa24   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000aa24u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_AA26:
    /* 0000aa26   4  jsr (ffff816a,A4) */
    c->pc = RC_ADDR(0x0000aa26u);
    /* vector 60 */
    rc_push32(c, m, RC_ADDR(0x0000aa2au));
    rc_depth++;
    c->pc = RC_ADDR(0x00011bf0u);
    return;

L_AA2A:
    /* 0000aa2a   4  jsr (0000aab6) */
    c->pc = RC_ADDR(0x0000aa2au);
    rc_push32(c, m, RC_ADDR(0x0000aa2eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000aab6u);
    return;

L_AA2E:
    /* 0000aa2e   4  jsr (0000ac30) */
    c->pc = RC_ADDR(0x0000aa2eu);
    rc_push32(c, m, RC_ADDR(0x0000aa32u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000ac30u);
    return;

L_AA32:
    /* 0000aa32   4  jsr (0000ae16) */
    c->pc = RC_ADDR(0x0000aa32u);
    rc_push32(c, m, RC_ADDR(0x0000aa36u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000ae16u);
    return;

L_AA36:
    /* 0000aa36   4  jsr (ffff80da,A4) */
    c->pc = RC_ADDR(0x0000aa36u);
    /* vector 36 */
    rc_push32(c, m, RC_ADDR(0x0000aa3au));
    rc_depth++;
    c->pc = RC_ADDR(0x00009c72u);
    return;

L_AA3A:
    /* 0000aa3a   4  tst.w (ffff96a0,A4) */
    c->pc = RC_ADDR(0x0000aa3au);
    t0 = rc_rd16(c, m, (c->a[4] - 0x6960u));
    rc_set_nzvc(c, t0, RC_W);

L_AA3E:
    /* 0000aa3e   2  beq 0000aa5c */
    c->pc = RC_ADDR(0x0000aa3eu);
    if (rc_cond(c, 7)) goto L_AA5C;

L_AA40:
    /* 0000aa40   6  cmpi.w #8,(3ce,A4) */
    c->pc = RC_ADDR(0x0000aa40u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3ceu));
    rc_cmp(c, RC_W, t0, 0x00000008u);

L_AA46:
    /* 0000aa46   2  bne 0000aa52 */
    c->pc = RC_ADDR(0x0000aa46u);
    if (rc_cond(c, 6)) goto L_AA52;

L_AA48:
    /* 0000aa48   4  clr.w (fffffec8,A4) */
    c->pc = RC_ADDR(0x0000aa48u);
    rc_wr16(c, m, (c->a[4] - 0x138u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_AA4C:
    /* 0000aa4c   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0000aa4cu);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_AA4E:
    /* 0000aa4e   2  unlk A5 */
    c->pc = RC_ADDR(0x0000aa4eu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_AA50:
    /* 0000aa50   2  rts */
    c->pc = RC_ADDR(0x0000aa50u);
    rc_ret(c, m);
    return;

L_AA52:
    /* 0000aa52   6  move.w #1,(fffffec8,A4) */
    c->pc = RC_ADDR(0x0000aa52u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x138u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_AA58:
    /* 0000aa58   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0000aa58u);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_AA5A:
    /* 0000aa5a   2  bra 0000aa4e */
    c->pc = RC_ADDR(0x0000aa5au);
    rc_tick();
    goto L_AA4E;

L_AA5C:
    /* 0000aa5c   4  tst.w (3d6,A4) */
    c->pc = RC_ADDR(0x0000aa5cu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3d6u));
    rc_set_nzvc(c, t0, RC_W);

L_AA60:
    /* 0000aa60   2  beq 0000aa66 */
    c->pc = RC_ADDR(0x0000aa60u);
    if (rc_cond(c, 7)) goto L_AA66;

L_AA62:
    /* 0000aa62   4  subq.w #1,(3d6,A4) */
    c->pc = RC_ADDR(0x0000aa62u);
    t3 = (c->a[4] + 0x3d6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_AA66:
    /* 0000aa66   4  move.w (14,A5),-(A7) */
    c->pc = RC_ADDR(0x0000aa66u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x14u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_AA6A:
    /* 0000aa6a   4  move.l (10,A5),-(A7) */
    c->pc = RC_ADDR(0x0000aa6au);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AA6E:
    /* 0000aa6e   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x0000aa6eu);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AA72:
    /* 0000aa72   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0000aa72u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_AA76:
    /* 0000aa76   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x0000aa76u);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AA7A:
    /* 0000aa7a   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x0000aa7au);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x0000aa7eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001fa02u);
    return;

L_AA7E:
    /* 0000aa7e   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000aa7eu);
    c->a[7] = (c->a[7] + 0xeu);

L_AA82:
    /* 0000aa82   4  jsr (0000b12e) */
    c->pc = RC_ADDR(0x0000aa82u);
    rc_push32(c, m, RC_ADDR(0x0000aa86u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000b12eu);
    return;

L_AA86:
    /* 0000aa86   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0000aa86u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_AA88:
    /* 0000aa88   2  bra 0000aa4e */
    c->pc = RC_ADDR(0x0000aa88u);
    rc_tick();
    goto L_AA4E;

}
