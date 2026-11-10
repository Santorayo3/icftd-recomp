/* fn_00015754 - 818 byte(s), 219 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00015754(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case 0x00015754u: goto L_15754;
    case 0x00015758u: goto L_15758;
    case 0x0001575cu: goto L_1575C;
    case 0x00015760u: goto L_15760;
    case 0x00015764u: goto L_15764;
    case 0x00015768u: goto L_15768;
    case 0x0001576au: goto L_1576A;
    case 0x0001576eu: goto L_1576E;
    case 0x00015770u: goto L_15770;
    case 0x00015774u: goto L_15774;
    case 0x00015776u: goto L_15776;
    case 0x0001577cu: goto L_1577C;
    case 0x00015782u: goto L_15782;
    case 0x00015788u: goto L_15788;
    case 0x0001578eu: goto L_1578E;
    case 0x00015792u: goto L_15792;
    case 0x00015796u: goto L_15796;
    case 0x00015798u: goto L_15798;
    case 0x0001579au: goto L_1579A;
    case 0x0001579eu: goto L_1579E;
    case 0x000157a2u: goto L_157A2;
    case 0x000157a4u: goto L_157A4;
    case 0x000157a8u: goto L_157A8;
    case 0x000157acu: goto L_157AC;
    case 0x000157b0u: goto L_157B0;
    case 0x000157b2u: goto L_157B2;
    case 0x000157b4u: goto L_157B4;
    case 0x000157b8u: goto L_157B8;
    case 0x000157bcu: goto L_157BC;
    case 0x000157beu: goto L_157BE;
    case 0x000157c2u: goto L_157C2;
    case 0x000157c6u: goto L_157C6;
    case 0x000157ccu: goto L_157CC;
    case 0x000157d0u: goto L_157D0;
    case 0x000157d4u: goto L_157D4;
    case 0x000157d6u: goto L_157D6;
    case 0x000157dau: goto L_157DA;
    case 0x000157e0u: goto L_157E0;
    case 0x000157e4u: goto L_157E4;
    case 0x000157e6u: goto L_157E6;
    case 0x000157e8u: goto L_157E8;
    case 0x000157ecu: goto L_157EC;
    case 0x000157eeu: goto L_157EE;
    case 0x000157f0u: goto L_157F0;
    case 0x000157f4u: goto L_157F4;
    case 0x000157f8u: goto L_157F8;
    case 0x000157fau: goto L_157FA;
    case 0x000157feu: goto L_157FE;
    case 0x00015800u: goto L_15800;
    case 0x00015802u: goto L_15802;
    case 0x00015806u: goto L_15806;
    case 0x0001580cu: goto L_1580C;
    case 0x00015810u: goto L_15810;
    case 0x00015812u: goto L_15812;
    case 0x00015816u: goto L_15816;
    case 0x0001581au: goto L_1581A;
    case 0x0001581cu: goto L_1581C;
    case 0x00015820u: goto L_15820;
    case 0x00015824u: goto L_15824;
    case 0x00015828u: goto L_15828;
    case 0x0001582cu: goto L_1582C;
    case 0x0001582eu: goto L_1582E;
    case 0x00015832u: goto L_15832;
    case 0x00015836u: goto L_15836;
    case 0x0001583cu: goto L_1583C;
    case 0x00015840u: goto L_15840;
    case 0x00015844u: goto L_15844;
    case 0x00015848u: goto L_15848;
    case 0x0001584au: goto L_1584A;
    case 0x0001584cu: goto L_1584C;
    case 0x00015850u: goto L_15850;
    case 0x00015854u: goto L_15854;
    case 0x00015858u: goto L_15858;
    case 0x0001585cu: goto L_1585C;
    case 0x00015860u: goto L_15860;
    case 0x00015862u: goto L_15862;
    case 0x00015864u: goto L_15864;
    case 0x00015868u: goto L_15868;
    case 0x0001586cu: goto L_1586C;
    case 0x0001586eu: goto L_1586E;
    case 0x00015870u: goto L_15870;
    case 0x00015874u: goto L_15874;
    case 0x00015878u: goto L_15878;
    case 0x0001587cu: goto L_1587C;
    case 0x00015880u: goto L_15880;
    case 0x00015884u: goto L_15884;
    case 0x00015888u: goto L_15888;
    case 0x0001588eu: goto L_1588E;
    case 0x00015892u: goto L_15892;
    case 0x00015894u: goto L_15894;
    case 0x00015896u: goto L_15896;
    case 0x0001589au: goto L_1589A;
    case 0x000158a0u: goto L_158A0;
    case 0x000158a4u: goto L_158A4;
    case 0x000158a6u: goto L_158A6;
    case 0x000158a8u: goto L_158A8;
    case 0x000158acu: goto L_158AC;
    case 0x000158b2u: goto L_158B2;
    case 0x000158b6u: goto L_158B6;
    case 0x000158bau: goto L_158BA;
    case 0x000158beu: goto L_158BE;
    case 0x000158c4u: goto L_158C4;
    case 0x000158c6u: goto L_158C6;
    case 0x000158cau: goto L_158CA;
    case 0x000158ccu: goto L_158CC;
    case 0x000158d2u: goto L_158D2;
    case 0x000158d4u: goto L_158D4;
    case 0x000158dau: goto L_158DA;
    case 0x000158dcu: goto L_158DC;
    case 0x000158e2u: goto L_158E2;
    case 0x000158e6u: goto L_158E6;
    case 0x000158eau: goto L_158EA;
    case 0x000158f0u: goto L_158F0;
    case 0x000158f2u: goto L_158F2;
    case 0x000158f6u: goto L_158F6;
    case 0x000158fau: goto L_158FA;
    case 0x000158fcu: goto L_158FC;
    case 0x00015902u: goto L_15902;
    case 0x00015906u: goto L_15906;
    case 0x00015908u: goto L_15908;
    case 0x0001590au: goto L_1590A;
    case 0x0001590eu: goto L_1590E;
    case 0x00015912u: goto L_15912;
    case 0x00015914u: goto L_15914;
    case 0x00015916u: goto L_15916;
    case 0x0001591au: goto L_1591A;
    case 0x00015920u: goto L_15920;
    case 0x00015924u: goto L_15924;
    case 0x00015926u: goto L_15926;
    case 0x00015928u: goto L_15928;
    case 0x0001592cu: goto L_1592C;
    case 0x00015932u: goto L_15932;
    case 0x00015934u: goto L_15934;
    case 0x00015938u: goto L_15938;
    case 0x0001593cu: goto L_1593C;
    case 0x00015940u: goto L_15940;
    case 0x00015944u: goto L_15944;
    case 0x0001594au: goto L_1594A;
    case 0x0001594cu: goto L_1594C;
    case 0x00015952u: goto L_15952;
    case 0x00015958u: goto L_15958;
    case 0x0001595au: goto L_1595A;
    case 0x00015960u: goto L_15960;
    case 0x00015966u: goto L_15966;
    case 0x00015968u: goto L_15968;
    case 0x0001596eu: goto L_1596E;
    case 0x00015974u: goto L_15974;
    case 0x00015976u: goto L_15976;
    case 0x0001597cu: goto L_1597C;
    case 0x00015980u: goto L_15980;
    case 0x00015984u: goto L_15984;
    case 0x00015986u: goto L_15986;
    case 0x0001598au: goto L_1598A;
    case 0x0001598eu: goto L_1598E;
    case 0x00015992u: goto L_15992;
    case 0x00015994u: goto L_15994;
    case 0x00015998u: goto L_15998;
    case 0x0001599cu: goto L_1599C;
    case 0x0001599eu: goto L_1599E;
    case 0x000159a0u: goto L_159A0;
    case 0x000159a4u: goto L_159A4;
    case 0x000159a6u: goto L_159A6;
    case 0x000159aau: goto L_159AA;
    case 0x000159acu: goto L_159AC;
    case 0x000159b0u: goto L_159B0;
    case 0x000159b4u: goto L_159B4;
    case 0x000159b8u: goto L_159B8;
    case 0x000159bau: goto L_159BA;
    case 0x000159bcu: goto L_159BC;
    case 0x000159c0u: goto L_159C0;
    case 0x000159c2u: goto L_159C2;
    case 0x000159c6u: goto L_159C6;
    case 0x000159c8u: goto L_159C8;
    case 0x000159ccu: goto L_159CC;
    case 0x000159d0u: goto L_159D0;
    case 0x000159d4u: goto L_159D4;
    case 0x000159d6u: goto L_159D6;
    case 0x000159dau: goto L_159DA;
    case 0x000159deu: goto L_159DE;
    case 0x000159e2u: goto L_159E2;
    case 0x000159e6u: goto L_159E6;
    case 0x000159eau: goto L_159EA;
    case 0x000159eeu: goto L_159EE;
    case 0x000159f2u: goto L_159F2;
    case 0x000159f8u: goto L_159F8;
    case 0x000159fau: goto L_159FA;
    case 0x000159feu: goto L_159FE;
    case 0x00015a02u: goto L_15A02;
    case 0x00015a06u: goto L_15A06;
    case 0x00015a0au: goto L_15A0A;
    case 0x00015a0eu: goto L_15A0E;
    case 0x00015a12u: goto L_15A12;
    case 0x00015a16u: goto L_15A16;
    case 0x00015a1au: goto L_15A1A;
    case 0x00015a1eu: goto L_15A1E;
    case 0x00015a22u: goto L_15A22;
    case 0x00015a26u: goto L_15A26;
    case 0x00015a2au: goto L_15A2A;
    case 0x00015a2eu: goto L_15A2E;
    case 0x00015a32u: goto L_15A32;
    case 0x00015a34u: goto L_15A34;
    case 0x00015a38u: goto L_15A38;
    case 0x00015a3cu: goto L_15A3C;
    case 0x00015a40u: goto L_15A40;
    case 0x00015a42u: goto L_15A42;
    case 0x00015a46u: goto L_15A46;
    case 0x00015a4au: goto L_15A4A;
    case 0x00015a50u: goto L_15A50;
    case 0x00015a52u: goto L_15A52;
    case 0x00015a58u: goto L_15A58;
    case 0x00015a5eu: goto L_15A5E;
    case 0x00015a60u: goto L_15A60;
    case 0x00015a66u: goto L_15A66;
    case 0x00015a6cu: goto L_15A6C;
    case 0x00015a6eu: goto L_15A6E;
    case 0x00015a74u: goto L_15A74;
    case 0x00015a7au: goto L_15A7A;
    case 0x00015a7cu: goto L_15A7C;
    case 0x00015a82u: goto L_15A82;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_15754:
    /* 00015754   4  link.w A5,#fffffff6 */
    c->pc = 0x00015754u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xau;

L_15758:
    /* 00015758   4  tst.w (ffffb038,A4) */
    c->pc = 0x00015758u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fc8u));
    rc_set_nzvc(c, t0, RC_W);

L_1575C:
    /* 0001575c   4  beq 0001580c */
    c->pc = 0x0001575cu;
    if (rc_cond(c, 7)) goto L_1580C;

L_15760:
    /* 00015760   4  clr.w (ffffb038,A4) */
    c->pc = 0x00015760u;
    rc_wr16(c, m, (c->a[4] - 0x4fc8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15764:
    /* 00015764   4  tst.w (ffffb02c,A4) */
    c->pc = 0x00015764u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd4u));
    rc_set_nzvc(c, t0, RC_W);

L_15768:
    /* 00015768   2  beq 000157e8 */
    c->pc = 0x00015768u;
    if (rc_cond(c, 7)) goto L_157E8;

L_1576A:
    /* 0001576a   4  tst.w (fffff286,A4) */
    c->pc = 0x0001576au;
    t0 = rc_rd16(c, m, (c->a[4] - 0xd7au));
    rc_set_nzvc(c, t0, RC_W);

L_1576E:
    /* 0001576e   2  bne 000157e8 */
    c->pc = 0x0001576eu;
    if (rc_cond(c, 6)) goto L_157E8;

L_15770:
    /* 00015770   4  tst.w (fffff288,A4) */
    c->pc = 0x00015770u;
    t0 = rc_rd16(c, m, (c->a[4] - 0xd78u));
    rc_set_nzvc(c, t0, RC_W);

L_15774:
    /* 00015774   2  bne 000157e8 */
    c->pc = 0x00015774u;
    if (rc_cond(c, 6)) goto L_157E8;

L_15776:
    /* 00015776   6  move.w #1,(e4c,A4) */
    c->pc = 0x00015776u;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xe4cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1577C:
    /* 0001577c   6  move.w #1,(fffffd84,A4) */
    c->pc = 0x0001577cu;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x27cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15782:
    /* 00015782   6  move.w (fffffd8a,A4),(fffffd8e,A4) */
    c->pc = 0x00015782u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x276u));
    rc_wr16(c, m, (c->a[4] - 0x272u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15788:
    /* 00015788   6  move.w (fffffd8c,A4),(fffffd90,A4) */
    c->pc = 0x00015788u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x274u));
    rc_wr16(c, m, (c->a[4] - 0x270u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1578E:
    /* 0001578e   4  clr.w (10b8,A4) */
    c->pc = 0x0001578eu;
    rc_wr16(c, m, (c->a[4] + 0x10b8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15792:
    /* 00015792   4  move.w (1244,A4),D0 */
    c->pc = 0x00015792u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x1244u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15796:
    /* 00015796   2  ext.l D0 */
    c->pc = 0x00015796u;
    rc_ext_l(c, 0);

L_15798:
    /* 00015798   2  asl.l #1,D0 */
    c->pc = 0x00015798u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_1579A:
    /* 0001579a   4  lea (11e4,A4),A0 */
    c->pc = 0x0001579au;
    c->a[0] = (c->a[4] + 0x11e4u);

L_1579E:
    /* 0001579e   4  move.w (0,A0,D0.w),D1 */
    c->pc = 0x0001579eu;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_157A2:
    /* 000157a2   2  subq.w #5,D1 */
    c->pc = 0x000157a2u;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - 0x00000005u;
    rc_flags_sub(c, RC_W, t1, 0x00000005u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_157A4:
    /* 000157a4   4  sub.w (dfa,A4),D1 */
    c->pc = 0x000157a4u;
    t0 = rc_rd16(c, m, (c->a[4] + 0xdfau));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_157A8:
    /* 000157a8   4  move.w D1,(fffffd98,A4) */
    c->pc = 0x000157a8u;
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x268u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_157AC:
    /* 000157ac   4  move.w (1244,A4),D0 */
    c->pc = 0x000157acu;
    t0 = rc_rd16(c, m, (c->a[4] + 0x1244u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_157B0:
    /* 000157b0   2  ext.l D0 */
    c->pc = 0x000157b0u;
    rc_ext_l(c, 0);

L_157B2:
    /* 000157b2   2  asl.l #1,D0 */
    c->pc = 0x000157b2u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_157B4:
    /* 000157b4   4  lea (11ec,A4),A0 */
    c->pc = 0x000157b4u;
    c->a[0] = (c->a[4] + 0x11ecu);

L_157B8:
    /* 000157b8   4  move.w (0,A0,D0.w),D1 */
    c->pc = 0x000157b8u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_157BC:
    /* 000157bc   2  addq.w #5,D1 */
    c->pc = 0x000157bcu;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00000005u;
    rc_flags_add(c, RC_W, t1, 0x00000005u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_157BE:
    /* 000157be   4  sub.w (dfc,A4),D1 */
    c->pc = 0x000157beu;
    t0 = rc_rd16(c, m, (c->a[4] + 0xdfcu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_157C2:
    /* 000157c2   4  move.w D1,(fffffd9a,A4) */
    c->pc = 0x000157c2u;
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x266u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_157C6:
    /* 000157c6   6  move.w #ffff,(1244,A4) */
    c->pc = 0x000157c6u;
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x1244u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_157CC:
    /* 000157cc   4  move.w #2,-(A7) */
    c->pc = 0x000157ccu;
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_157D0:
    /* 000157d0   4  jsr (ffff80bc,A4) */
    c->pc = 0x000157d0u;
    /* vector 31 */
    rc_push32(c, m, 0x000157d4u);
    rc_depth++;
    c->pc = 0x00009ba6u;
    return;

L_157D4:
    /* 000157d4   2  addq.w #2,A7 */
    c->pc = 0x000157d4u;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_157D6:
    /* 000157d6   4  clr.w (1250,A4) */
    c->pc = 0x000157d6u;
    rc_wr16(c, m, (c->a[4] + 0x1250u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_157DA:
    /* 000157da   6  move.w #1,(126a,A4) */
    c->pc = 0x000157dau;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x126au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_157E0:
    /* 000157e0   4  clr.w (ffffb036,A4) */
    c->pc = 0x000157e0u;
    rc_wr16(c, m, (c->a[4] - 0x4fcau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_157E4:
    /* 000157e4   2  unlk A5 */
    c->pc = 0x000157e4u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_157E6:
    /* 000157e6   2  rts */
    c->pc = 0x000157e6u;
    rc_ret(c, m);
    return;

L_157E8:
    /* 000157e8   4  move.w (1244,A4),D0 */
    c->pc = 0x000157e8u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x1244u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_157EC:
    /* 000157ec   2  ext.l D0 */
    c->pc = 0x000157ecu;
    rc_ext_l(c, 0);

L_157EE:
    /* 000157ee   2  asl.l #1,D0 */
    c->pc = 0x000157eeu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_157F0:
    /* 000157f0   4  lea (1252,A4),A0 */
    c->pc = 0x000157f0u;
    c->a[0] = (c->a[4] + 0x1252u);

L_157F4:
    /* 000157f4   4  tst.w (0,A0,D0.w) */
    c->pc = 0x000157f4u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_157F8:
    /* 000157f8   2  bne 0001580c */
    c->pc = 0x000157f8u;
    if (rc_cond(c, 6)) goto L_1580C;

L_157FA:
    /* 000157fa   4  move.w (1244,A4),D0 */
    c->pc = 0x000157fau;
    t0 = rc_rd16(c, m, (c->a[4] + 0x1244u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_157FE:
    /* 000157fe   2  ext.l D0 */
    c->pc = 0x000157feu;
    rc_ext_l(c, 0);

L_15800:
    /* 00015800   2  asl.l #1,D0 */
    c->pc = 0x00015800u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_15802:
    /* 00015802   4  lea (126c,A4),A0 */
    c->pc = 0x00015802u;
    c->a[0] = (c->a[4] + 0x126cu);

L_15806:
    /* 00015806   6  move.w #1,(0,A0,D0.w) */
    c->pc = 0x00015806u;
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1580C:
    /* 0001580c   4  tst.w (ffffb02e,A4) */
    c->pc = 0x0001580cu;
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd2u));
    rc_set_nzvc(c, t0, RC_W);

L_15810:
    /* 00015810   2  beq 00015832 */
    c->pc = 0x00015810u;
    if (rc_cond(c, 7)) goto L_15832;

L_15812:
    /* 00015812   4  addq.w #1,(1250,A4) */
    c->pc = 0x00015812u;
    t3 = (c->a[4] + 0x1250u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_15816:
    /* 00015816   4  tst.w (ffffb02a,A4) */
    c->pc = 0x00015816u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd6u));
    rc_set_nzvc(c, t0, RC_W);

L_1581A:
    /* 0001581a   2  beq 0001582e */
    c->pc = 0x0001581au;
    if (rc_cond(c, 7)) goto L_1582E;

L_1581C:
    /* 0001581c   4  clr.w (126a,A4) */
    c->pc = 0x0001581cu;
    rc_wr16(c, m, (c->a[4] + 0x126au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15820:
    /* 00015820   4  move.w (ffffb02a,A4),-(A7) */
    c->pc = 0x00015820u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd6u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15824:
    /* 00015824   4  move.w (1244,A4),-(A7) */
    c->pc = 0x00015824u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x1244u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15828:
    /* 00015828   4  jsr (00015312) */
    c->pc = 0x00015828u;
    rc_push32(c, m, 0x0001582cu);
    rc_depth++;
    c->pc = 0x00015312u;
    return;

L_1582C:
    /* 0001582c   2  addq.w #4,A7 */
    c->pc = 0x0001582cu;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1582E:
    /* 0001582e   4  bra 00015a2a */
    c->pc = 0x0001582eu;
    goto L_15A2A;

L_15832:
    /* 00015832   4  clr.w (1250,A4) */
    c->pc = 0x00015832u;
    rc_wr16(c, m, (c->a[4] + 0x1250u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15836:
    /* 00015836   6  move.w #1,(126a,A4) */
    c->pc = 0x00015836u;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x126au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1583C:
    /* 0001583c   4  tst.w (ffffb030,A4) */
    c->pc = 0x0001583cu;
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd0u));
    rc_set_nzvc(c, t0, RC_W);

L_15840:
    /* 00015840   4  beq 000159fa */
    c->pc = 0x00015840u;
    if (rc_cond(c, 7)) goto L_159FA;

L_15844:
    /* 00015844   4  move.w (1244,A4),D0 */
    c->pc = 0x00015844u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x1244u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15848:
    /* 00015848   2  ext.l D0 */
    c->pc = 0x00015848u;
    rc_ext_l(c, 0);

L_1584A:
    /* 0001584a   2  asl.l #1,D0 */
    c->pc = 0x0001584au;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_1584C:
    /* 0001584c   4  lea (11f4,A4),A0 */
    c->pc = 0x0001584cu;
    c->a[0] = (c->a[4] + 0x11f4u);

L_15850:
    /* 00015850   4  move.w (0,A0,D0.w),D1 */
    c->pc = 0x00015850u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15854:
    /* 00015854   4  cmp.w (ffffb030,A4),D1 */
    c->pc = 0x00015854u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd0u));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_15858:
    /* 00015858   4  beq 0001593c */
    c->pc = 0x00015858u;
    if (rc_cond(c, 7)) goto L_1593C;

L_1585C:
    /* 0001585c   4  move.w (1244,A4),D0 */
    c->pc = 0x0001585cu;
    t0 = rc_rd16(c, m, (c->a[4] + 0x1244u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15860:
    /* 00015860   2  ext.l D0 */
    c->pc = 0x00015860u;
    rc_ext_l(c, 0);

L_15862:
    /* 00015862   2  asl.l #1,D0 */
    c->pc = 0x00015862u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_15864:
    /* 00015864   4  lea (11f4,A4),A0 */
    c->pc = 0x00015864u;
    c->a[0] = (c->a[4] + 0x11f4u);

L_15868:
    /* 00015868   4  move.w (0,A0,D0.w),D1 */
    c->pc = 0x00015868u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1586C:
    /* 0001586c   2  ext.l D1 */
    c->pc = 0x0001586cu;
    rc_ext_l(c, 1);

L_1586E:
    /* 0001586e   2  asl.l #1,D1 */
    c->pc = 0x0001586eu;
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_15870:
    /* 00015870   4  lea (ffffb266,A4),A0 */
    c->pc = 0x00015870u;
    c->a[0] = (c->a[4] - 0x4d9au);

L_15874:
    /* 00015874   4  move.w (0,A0,D1.w),D0 */
    c->pc = 0x00015874u;
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15878:
    /* 00015878   4  cmp.w (ffffb030,A4),D0 */
    c->pc = 0x00015878u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd0u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1587C:
    /* 0001587c   4  beq 0001593c */
    c->pc = 0x0001587cu;
    if (rc_cond(c, 7)) goto L_1593C;

L_15880:
    /* 00015880   4  tst.w (1246,A4) */
    c->pc = 0x00015880u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x1246u));
    rc_set_nzvc(c, t0, RC_W);

L_15884:
    /* 00015884   4  bne 00015934 */
    c->pc = 0x00015884u;
    if (rc_cond(c, 6)) goto L_15934;

L_15888:
    /* 00015888   6  move.w #4,(1246,A4) */
    c->pc = 0x00015888u;
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] + 0x1246u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1588E:
    /* 0001588e   4  move.w (1244,A4),D0 */
    c->pc = 0x0001588eu;
    t0 = rc_rd16(c, m, (c->a[4] + 0x1244u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15892:
    /* 00015892   2  ext.l D0 */
    c->pc = 0x00015892u;
    rc_ext_l(c, 0);

L_15894:
    /* 00015894   2  asl.l #1,D0 */
    c->pc = 0x00015894u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_15896:
    /* 00015896   4  lea (11fc,A4),A0 */
    c->pc = 0x00015896u;
    c->a[0] = (c->a[4] + 0x11fcu);

L_1589A:
    /* 0001589a   6  move.w (0,A0,D0.w),(fffffff8,A5) */
    c->pc = 0x0001589au;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_158A0:
    /* 000158a0   4  move.w (ffffb030,A4),D0 */
    c->pc = 0x000158a0u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_158A4:
    /* 000158a4   2  ext.l D0 */
    c->pc = 0x000158a4u;
    rc_ext_l(c, 0);

L_158A6:
    /* 000158a6   2  asl.l #1,D0 */
    c->pc = 0x000158a6u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_158A8:
    /* 000158a8   4  lea (ffffb240,A4),A0 */
    c->pc = 0x000158a8u;
    c->a[0] = (c->a[4] - 0x4dc0u);

L_158AC:
    /* 000158ac   6  move.w (0,A0,D0.w),(fffffff6,A5) */
    c->pc = 0x000158acu;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_158B2:
    /* 000158b2   4  move.w (fffffff8,A5),D0 */
    c->pc = 0x000158b2u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_158B6:
    /* 000158b6   4  sub.w (fffffff6,A5),D0 */
    c->pc = 0x000158b6u;
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_158BA:
    /* 000158ba   4  move.w D0,(fffffffa,A5) */
    c->pc = 0x000158bau;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_158BE:
    /* 000158be   6  cmpi.w #4,(fffffffa,A5) */
    c->pc = 0x000158beu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_158C4:
    /* 000158c4   2  bgt 000158d4 */
    c->pc = 0x000158c4u;
    if (rc_cond(c, 14)) goto L_158D4;

L_158C6:
    /* 000158c6   4  tst.w (fffffffa,A5) */
    c->pc = 0x000158c6u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_set_nzvc(c, t0, RC_W);

L_158CA:
    /* 000158ca   2  bge 000158dc */
    c->pc = 0x000158cau;
    if (rc_cond(c, 12)) goto L_158DC;

L_158CC:
    /* 000158cc   6  cmpi.w #fffc,(fffffffa,A5) */
    c->pc = 0x000158ccu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_cmp(c, RC_W, t0, 0x0000fffcu);

L_158D2:
    /* 000158d2   2  ble 000158dc */
    c->pc = 0x000158d2u;
    if (rc_cond(c, 15)) goto L_158DC;

L_158D4:
    /* 000158d4   6  move.w #1,(fffffffa,A5) */
    c->pc = 0x000158d4u;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_158DA:
    /* 000158da   2  bra 000158e2 */
    c->pc = 0x000158dau;
    goto L_158E2;

L_158DC:
    /* 000158dc   6  move.w #ffff,(fffffffa,A5) */
    c->pc = 0x000158dcu;
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_158E2:
    /* 000158e2   4  move.w (fffffffa,A5),D0 */
    c->pc = 0x000158e2u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_158E6:
    /* 000158e6   4  add.w D0,(fffffff8,A5) */
    c->pc = 0x000158e6u;
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_158EA:
    /* 000158ea   6  cmpi.w #8,(fffffff8,A5) */
    c->pc = 0x000158eau;
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_cmp(c, RC_W, t0, 0x00000008u);

L_158F0:
    /* 000158f0   2  blt 000158f6 */
    c->pc = 0x000158f0u;
    if (rc_cond(c, 13)) goto L_158F6;

L_158F2:
    /* 000158f2   4  clr.w (fffffff8,A5) */
    c->pc = 0x000158f2u;
    rc_wr16(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_158F6:
    /* 000158f6   4  tst.w (fffffff8,A5) */
    c->pc = 0x000158f6u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_158FA:
    /* 000158fa   2  bge 00015902 */
    c->pc = 0x000158fau;
    if (rc_cond(c, 12)) goto L_15902;

L_158FC:
    /* 000158fc   6  move.w #7,(fffffff8,A5) */
    c->pc = 0x000158fcu;
    t0 = 0x00000007u;
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15902:
    /* 00015902   4  move.w (fffffff8,A5),D0 */
    c->pc = 0x00015902u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15906:
    /* 00015906   2  ext.l D0 */
    c->pc = 0x00015906u;
    rc_ext_l(c, 0);

L_15908:
    /* 00015908   2  asl.l #1,D0 */
    c->pc = 0x00015908u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_1590A:
    /* 0001590a   4  lea (ffffb256,A4),A0 */
    c->pc = 0x0001590au;
    c->a[0] = (c->a[4] - 0x4daau);

L_1590E:
    /* 0001590e   4  move.w (1244,A4),D1 */
    c->pc = 0x0001590eu;
    t0 = rc_rd16(c, m, (c->a[4] + 0x1244u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15912:
    /* 00015912   2  ext.l D1 */
    c->pc = 0x00015912u;
    rc_ext_l(c, 1);

L_15914:
    /* 00015914   2  asl.l #1,D1 */
    c->pc = 0x00015914u;
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_15916:
    /* 00015916   4  lea (11f4,A4),A1 */
    c->pc = 0x00015916u;
    c->a[1] = (c->a[4] + 0x11f4u);

L_1591A:
    /* 0001591a   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = 0x0001591au;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15920:
    /* 00015920   4  move.w (1244,A4),D0 */
    c->pc = 0x00015920u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x1244u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15924:
    /* 00015924   2  ext.l D0 */
    c->pc = 0x00015924u;
    rc_ext_l(c, 0);

L_15926:
    /* 00015926   2  asl.l #1,D0 */
    c->pc = 0x00015926u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_15928:
    /* 00015928   4  lea (11fc,A4),A0 */
    c->pc = 0x00015928u;
    c->a[0] = (c->a[4] + 0x11fcu);

L_1592C:
    /* 0001592c   6  move.w (fffffff8,A5),(0,A0,D0.w) */
    c->pc = 0x0001592cu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15932:
    /* 00015932   2  bra 00015938 */
    c->pc = 0x00015932u;
    goto L_15938;

L_15934:
    /* 00015934   4  subq.w #1,(1246,A4) */
    c->pc = 0x00015934u;
    t3 = (c->a[4] + 0x1246u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_15938:
    /* 00015938   4  bra 000159d0 */
    c->pc = 0x00015938u;
    goto L_159D0;

L_1593C:
    /* 0001593c   4  clr.w (1276,A4) */
    c->pc = 0x0001593cu;
    rc_wr16(c, m, (c->a[4] + 0x1276u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15940:
    /* 00015940   4  clr.w (1274,A4) */
    c->pc = 0x00015940u;
    rc_wr16(c, m, (c->a[4] + 0x1274u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15944:
    /* 00015944   6  btst #0,(ffffb031,A4) */
    c->pc = 0x00015944u;
    t4 = 0x00000000u;
    t3 = (c->a[4] - 0x4fcfu);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_1594A:
    /* 0001594a   2  beq 00015952 */
    c->pc = 0x0001594au;
    if (rc_cond(c, 7)) goto L_15952;

L_1594C:
    /* 0001594c   6  move.w #2,(1274,A4) */
    c->pc = 0x0001594cu;
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x1274u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15952:
    /* 00015952   6  btst #1,(ffffb031,A4) */
    c->pc = 0x00015952u;
    t4 = 0x00000001u;
    t3 = (c->a[4] - 0x4fcfu);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_15958:
    /* 00015958   2  beq 00015960 */
    c->pc = 0x00015958u;
    if (rc_cond(c, 7)) goto L_15960;

L_1595A:
    /* 0001595a   6  move.w #fffe,(1274,A4) */
    c->pc = 0x0001595au;
    t0 = 0x0000fffeu;
    rc_wr16(c, m, (c->a[4] + 0x1274u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15960:
    /* 00015960   6  btst #3,(ffffb031,A4) */
    c->pc = 0x00015960u;
    t4 = 0x00000003u;
    t3 = (c->a[4] - 0x4fcfu);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_15966:
    /* 00015966   2  beq 0001596e */
    c->pc = 0x00015966u;
    if (rc_cond(c, 7)) goto L_1596E;

L_15968:
    /* 00015968   6  move.w #fffe,(1276,A4) */
    c->pc = 0x00015968u;
    t0 = 0x0000fffeu;
    rc_wr16(c, m, (c->a[4] + 0x1276u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1596E:
    /* 0001596e   6  btst #2,(ffffb031,A4) */
    c->pc = 0x0001596eu;
    t4 = 0x00000002u;
    t3 = (c->a[4] - 0x4fcfu);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_15974:
    /* 00015974   2  beq 0001597c */
    c->pc = 0x00015974u;
    if (rc_cond(c, 7)) goto L_1597C;

L_15976:
    /* 00015976   6  move.w #2,(1276,A4) */
    c->pc = 0x00015976u;
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x1276u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1597C:
    /* 0001597c   4  move.w (1276,A4),-(A7) */
    c->pc = 0x0001597cu;
    t0 = rc_rd16(c, m, (c->a[4] + 0x1276u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15980:
    /* 00015980   4  jsr (00014dc0) */
    c->pc = 0x00015980u;
    rc_push32(c, m, 0x00015984u);
    rc_depth++;
    c->pc = 0x00014dc0u;
    return;

L_15984:
    /* 00015984   2  addq.w #2,A7 */
    c->pc = 0x00015984u;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_15986:
    /* 00015986   4  move.w D0,(fffff288,A4) */
    c->pc = 0x00015986u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0xd78u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1598A:
    /* 0001598a   4  move.w (1274,A4),-(A7) */
    c->pc = 0x0001598au;
    t0 = rc_rd16(c, m, (c->a[4] + 0x1274u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1598E:
    /* 0001598e   4  jsr (00014dc0) */
    c->pc = 0x0001598eu;
    rc_push32(c, m, 0x00015992u);
    rc_depth++;
    c->pc = 0x00014dc0u;
    return;

L_15992:
    /* 00015992   2  addq.w #2,A7 */
    c->pc = 0x00015992u;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_15994:
    /* 00015994   4  move.w D0,(fffff286,A4) */
    c->pc = 0x00015994u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0xd7au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15998:
    /* 00015998   4  move.w (1244,A4),D0 */
    c->pc = 0x00015998u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x1244u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1599C:
    /* 0001599c   2  ext.l D0 */
    c->pc = 0x0001599cu;
    rc_ext_l(c, 0);

L_1599E:
    /* 0001599e   2  asl.l #1,D0 */
    c->pc = 0x0001599eu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_159A0:
    /* 000159a0   4  lea (11e4,A4),A0 */
    c->pc = 0x000159a0u;
    c->a[0] = (c->a[4] + 0x11e4u);

L_159A4:
    /* 000159a4   2  adda.l D0,A0 */
    c->pc = 0x000159a4u;
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_159A6:
    /* 000159a6   4  move.w (1274,A4),D0 */
    c->pc = 0x000159a6u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x1274u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_159AA:
    /* 000159aa   2  add.w D0,(A0) */
    c->pc = 0x000159aau;
    t3 = c->a[0];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_159AC:
    /* 000159ac   4  move.w (1274,A4),D0 */
    c->pc = 0x000159acu;
    t0 = rc_rd16(c, m, (c->a[4] + 0x1274u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_159B0:
    /* 000159b0   4  add.w D0,(fffffd98,A4) */
    c->pc = 0x000159b0u;
    t3 = (c->a[4] - 0x268u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_159B4:
    /* 000159b4   4  move.w (1244,A4),D0 */
    c->pc = 0x000159b4u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x1244u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_159B8:
    /* 000159b8   2  ext.l D0 */
    c->pc = 0x000159b8u;
    rc_ext_l(c, 0);

L_159BA:
    /* 000159ba   2  asl.l #1,D0 */
    c->pc = 0x000159bau;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_159BC:
    /* 000159bc   4  lea (11ec,A4),A0 */
    c->pc = 0x000159bcu;
    c->a[0] = (c->a[4] + 0x11ecu);

L_159C0:
    /* 000159c0   2  adda.l D0,A0 */
    c->pc = 0x000159c0u;
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_159C2:
    /* 000159c2   4  move.w (1276,A4),D0 */
    c->pc = 0x000159c2u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x1276u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_159C6:
    /* 000159c6   2  add.w D0,(A0) */
    c->pc = 0x000159c6u;
    t3 = c->a[0];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_159C8:
    /* 000159c8   4  move.w (1276,A4),D0 */
    c->pc = 0x000159c8u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x1276u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_159CC:
    /* 000159cc   4  add.w D0,(fffffd9a,A4) */
    c->pc = 0x000159ccu;
    t3 = (c->a[4] - 0x266u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_159D0:
    /* 000159d0   4  tst.w (1278,A4) */
    c->pc = 0x000159d0u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x1278u));
    rc_set_nzvc(c, t0, RC_W);

L_159D4:
    /* 000159d4   2  bne 000159f8 */
    c->pc = 0x000159d4u;
    if (rc_cond(c, 6)) goto L_159F8;

L_159D6:
    /* 000159d6   4  move.w #3f,-(A7) */
    c->pc = 0x000159d6u;
    t0 = 0x0000003fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_159DA:
    /* 000159da   4  move.w #2,-(A7) */
    c->pc = 0x000159dau;
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_159DE:
    /* 000159de   4  move.l (129e,A4),-(A7) */
    c->pc = 0x000159deu;
    t0 = rc_rd32(c, m, (c->a[4] + 0x129eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_159E2:
    /* 000159e2   4  move.w (129a,A4),-(A7) */
    c->pc = 0x000159e2u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x129au));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_159E6:
    /* 000159e6   4  move.l (1292,A4),-(A7) */
    c->pc = 0x000159e6u;
    t0 = rc_rd32(c, m, (c->a[4] + 0x1292u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_159EA:
    /* 000159ea   4  jsr (ffff80b6,A4) */
    c->pc = 0x000159eau;
    /* vector 30 */
    rc_push32(c, m, 0x000159eeu);
    rc_depth++;
    c->pc = 0x00009b60u;
    return;

L_159EE:
    /* 000159ee   4  lea (e,A7),A7 */
    c->pc = 0x000159eeu;
    c->a[7] = (c->a[7] + 0xeu);

L_159F2:
    /* 000159f2   6  move.w #1,(1278,A4) */
    c->pc = 0x000159f2u;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1278u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_159F8:
    /* 000159f8   2  bra 00015a2a */
    c->pc = 0x000159f8u;
    goto L_15A2A;

L_159FA:
    /* 000159fa   4  move.w #3f,-(A7) */
    c->pc = 0x000159fau;
    t0 = 0x0000003fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_159FE:
    /* 000159fe   4  move.w #2,-(A7) */
    c->pc = 0x000159feu;
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15A02:
    /* 00015a02   4  move.l (12a2,A4),-(A7) */
    c->pc = 0x00015a02u;
    t0 = rc_rd32(c, m, (c->a[4] + 0x12a2u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_15A06:
    /* 00015a06   4  move.w (129c,A4),-(A7) */
    c->pc = 0x00015a06u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x129cu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15A0A:
    /* 00015a0a   4  move.l (1296,A4),-(A7) */
    c->pc = 0x00015a0au;
    t0 = rc_rd32(c, m, (c->a[4] + 0x1296u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_15A0E:
    /* 00015a0e   4  jsr (ffff80b6,A4) */
    c->pc = 0x00015a0eu;
    /* vector 30 */
    rc_push32(c, m, 0x00015a12u);
    rc_depth++;
    c->pc = 0x00009b60u;
    return;

L_15A12:
    /* 00015a12   4  lea (e,A7),A7 */
    c->pc = 0x00015a12u;
    c->a[7] = (c->a[7] + 0xeu);

L_15A16:
    /* 00015a16   4  clr.w (1278,A4) */
    c->pc = 0x00015a16u;
    rc_wr16(c, m, (c->a[4] + 0x1278u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15A1A:
    /* 00015a1a   4  clr.w (fffff288,A4) */
    c->pc = 0x00015a1au;
    rc_wr16(c, m, (c->a[4] - 0xd78u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15A1E:
    /* 00015a1e   4  clr.w (1276,A4) */
    c->pc = 0x00015a1eu;
    rc_wr16(c, m, (c->a[4] + 0x1276u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15A22:
    /* 00015a22   4  clr.w (fffff286,A4) */
    c->pc = 0x00015a22u;
    rc_wr16(c, m, (c->a[4] - 0xd7au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15A26:
    /* 00015a26   4  clr.w (1274,A4) */
    c->pc = 0x00015a26u;
    rc_wr16(c, m, (c->a[4] + 0x1274u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15A2A:
    /* 00015a2a   4  move.w (1244,A4),-(A7) */
    c->pc = 0x00015a2au;
    t0 = rc_rd16(c, m, (c->a[4] + 0x1244u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15A2E:
    /* 00015a2e   4  jsr (00015034) */
    c->pc = 0x00015a2eu;
    rc_push32(c, m, 0x00015a32u);
    rc_depth++;
    c->pc = 0x00015034u;
    return;

L_15A32:
    /* 00015a32   2  addq.w #2,A7 */
    c->pc = 0x00015a32u;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_15A34:
    /* 00015a34   4  move.w D0,(119c,A4) */
    c->pc = 0x00015a34u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x119cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15A38:
    /* 00015a38   4  move.w (1244,A4),-(A7) */
    c->pc = 0x00015a38u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x1244u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15A3C:
    /* 00015a3c   4  jsr (00015058) */
    c->pc = 0x00015a3cu;
    rc_push32(c, m, 0x00015a40u);
    rc_depth++;
    c->pc = 0x00015058u;
    return;

L_15A40:
    /* 00015a40   2  addq.w #2,A7 */
    c->pc = 0x00015a40u;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_15A42:
    /* 00015a42   4  move.w D0,(119e,A4) */
    c->pc = 0x00015a42u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x119eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15A46:
    /* 00015a46   4  clr.w (fffffd9c,A4) */
    c->pc = 0x00015a46u;
    rc_wr16(c, m, (c->a[4] - 0x264u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15A4A:
    /* 00015a4a   6  cmpi.w #be,(fffffd98,A4) */
    c->pc = 0x00015a4au;
    t0 = rc_rd16(c, m, (c->a[4] - 0x268u));
    rc_cmp(c, RC_W, t0, 0x000000beu);

L_15A50:
    /* 00015a50   2  ble 00015a58 */
    c->pc = 0x00015a50u;
    if (rc_cond(c, 15)) goto L_15A58;

L_15A52:
    /* 00015a52   6  bset #0,(fffffd9d,A4) */
    c->pc = 0x00015a52u;
    t4 = 0x00000000u;
    t3 = (c->a[4] - 0x263u);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_15A58:
    /* 00015a58   6  cmpi.w #6e,(fffffd98,A4) */
    c->pc = 0x00015a58u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x268u));
    rc_cmp(c, RC_W, t0, 0x0000006eu);

L_15A5E:
    /* 00015a5e   2  bge 00015a66 */
    c->pc = 0x00015a5eu;
    if (rc_cond(c, 12)) goto L_15A66;

L_15A60:
    /* 00015a60   6  bset #1,(fffffd9d,A4) */
    c->pc = 0x00015a60u;
    t4 = 0x00000001u;
    t3 = (c->a[4] - 0x263u);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_15A66:
    /* 00015a66   6  cmpi.w #96,(fffffd9a,A4) */
    c->pc = 0x00015a66u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x266u));
    rc_cmp(c, RC_W, t0, 0x00000096u);

L_15A6C:
    /* 00015a6c   2  ble 00015a74 */
    c->pc = 0x00015a6cu;
    if (rc_cond(c, 15)) goto L_15A74;

L_15A6E:
    /* 00015a6e   6  bset #2,(fffffd9d,A4) */
    c->pc = 0x00015a6eu;
    t4 = 0x00000002u;
    t3 = (c->a[4] - 0x263u);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_15A74:
    /* 00015a74   6  cmpi.w #32,(fffffd9a,A4) */
    c->pc = 0x00015a74u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x266u));
    rc_cmp(c, RC_W, t0, 0x00000032u);

L_15A7A:
    /* 00015a7a   2  bge 00015a82 */
    c->pc = 0x00015a7au;
    if (rc_cond(c, 12)) goto L_15A82;

L_15A7C:
    /* 00015a7c   6  bset #3,(fffffd9d,A4) */
    c->pc = 0x00015a7cu;
    t4 = 0x00000003u;
    t3 = (c->a[4] - 0x263u);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_15A82:
    /* 00015a82   4  bra 000157e4 */
    c->pc = 0x00015a82u;
    rc_tick();
    goto L_157E4;

}
