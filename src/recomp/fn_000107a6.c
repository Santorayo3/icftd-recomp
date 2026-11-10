/* fn_000107a6 - 1048 byte(s), 285 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000107a6(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case 0x000107a6u: goto L_107A6;
    case 0x000107aau: goto L_107AA;
    case 0x000107aeu: goto L_107AE;
    case 0x000107b2u: goto L_107B2;
    case 0x000107b6u: goto L_107B6;
    case 0x000107bau: goto L_107BA;
    case 0x000107beu: goto L_107BE;
    case 0x000107c4u: goto L_107C4;
    case 0x000107c6u: goto L_107C6;
    case 0x000107ccu: goto L_107CC;
    case 0x000107ceu: goto L_107CE;
    case 0x000107d4u: goto L_107D4;
    case 0x000107d8u: goto L_107D8;
    case 0x000107dau: goto L_107DA;
    case 0x000107deu: goto L_107DE;
    case 0x000107e0u: goto L_107E0;
    case 0x000107e2u: goto L_107E2;
    case 0x000107e6u: goto L_107E6;
    case 0x000107e8u: goto L_107E8;
    case 0x000107ecu: goto L_107EC;
    case 0x000107f0u: goto L_107F0;
    case 0x000107f2u: goto L_107F2;
    case 0x000107f6u: goto L_107F6;
    case 0x000107fau: goto L_107FA;
    case 0x00010800u: goto L_10800;
    case 0x00010802u: goto L_10802;
    case 0x00010806u: goto L_10806;
    case 0x00010808u: goto L_10808;
    case 0x0001080au: goto L_1080A;
    case 0x0001080cu: goto L_1080C;
    case 0x00010810u: goto L_10810;
    case 0x00010814u: goto L_10814;
    case 0x0001081au: goto L_1081A;
    case 0x0001081cu: goto L_1081C;
    case 0x00010822u: goto L_10822;
    case 0x00010824u: goto L_10824;
    case 0x0001082au: goto L_1082A;
    case 0x0001082eu: goto L_1082E;
    case 0x00010832u: goto L_10832;
    case 0x00010834u: goto L_10834;
    case 0x00010836u: goto L_10836;
    case 0x00010838u: goto L_10838;
    case 0x0001083eu: goto L_1083E;
    case 0x00010842u: goto L_10842;
    case 0x00010844u: goto L_10844;
    case 0x0001084au: goto L_1084A;
    case 0x00010850u: goto L_10850;
    case 0x00010852u: goto L_10852;
    case 0x00010858u: goto L_10858;
    case 0x0001085eu: goto L_1085E;
    case 0x00010862u: goto L_10862;
    case 0x00010864u: goto L_10864;
    case 0x00010868u: goto L_10868;
    case 0x0001086au: goto L_1086A;
    case 0x0001086eu: goto L_1086E;
    case 0x00010872u: goto L_10872;
    case 0x00010874u: goto L_10874;
    case 0x00010878u: goto L_10878;
    case 0x0001087cu: goto L_1087C;
    case 0x0001087eu: goto L_1087E;
    case 0x00010882u: goto L_10882;
    case 0x00010884u: goto L_10884;
    case 0x00010888u: goto L_10888;
    case 0x0001088cu: goto L_1088C;
    case 0x0001088eu: goto L_1088E;
    case 0x00010892u: goto L_10892;
    case 0x00010896u: goto L_10896;
    case 0x0001089au: goto L_1089A;
    case 0x0001089eu: goto L_1089E;
    case 0x000108a0u: goto L_108A0;
    case 0x000108a4u: goto L_108A4;
    case 0x000108a8u: goto L_108A8;
    case 0x000108acu: goto L_108AC;
    case 0x000108b0u: goto L_108B0;
    case 0x000108b4u: goto L_108B4;
    case 0x000108b8u: goto L_108B8;
    case 0x000108bcu: goto L_108BC;
    case 0x000108c0u: goto L_108C0;
    case 0x000108c6u: goto L_108C6;
    case 0x000108c8u: goto L_108C8;
    case 0x000108ccu: goto L_108CC;
    case 0x000108d2u: goto L_108D2;
    case 0x000108d4u: goto L_108D4;
    case 0x000108d8u: goto L_108D8;
    case 0x000108dcu: goto L_108DC;
    case 0x000108e0u: goto L_108E0;
    case 0x000108e2u: goto L_108E2;
    case 0x000108e6u: goto L_108E6;
    case 0x000108e8u: goto L_108E8;
    case 0x000108ecu: goto L_108EC;
    case 0x000108f2u: goto L_108F2;
    case 0x000108f4u: goto L_108F4;
    case 0x000108f8u: goto L_108F8;
    case 0x000108fcu: goto L_108FC;
    case 0x00010902u: goto L_10902;
    case 0x00010904u: goto L_10904;
    case 0x00010908u: goto L_10908;
    case 0x0001090cu: goto L_1090C;
    case 0x0001090eu: goto L_1090E;
    case 0x00010912u: goto L_10912;
    case 0x00010916u: goto L_10916;
    case 0x0001091au: goto L_1091A;
    case 0x0001091eu: goto L_1091E;
    case 0x00010920u: goto L_10920;
    case 0x00010924u: goto L_10924;
    case 0x00010928u: goto L_10928;
    case 0x0001092au: goto L_1092A;
    case 0x0001092eu: goto L_1092E;
    case 0x00010932u: goto L_10932;
    case 0x00010936u: goto L_10936;
    case 0x0001093au: goto L_1093A;
    case 0x0001093eu: goto L_1093E;
    case 0x00010942u: goto L_10942;
    case 0x00010944u: goto L_10944;
    case 0x00010948u: goto L_10948;
    case 0x0001094cu: goto L_1094C;
    case 0x00010950u: goto L_10950;
    case 0x00010954u: goto L_10954;
    case 0x00010958u: goto L_10958;
    case 0x0001095cu: goto L_1095C;
    case 0x00010960u: goto L_10960;
    case 0x00010964u: goto L_10964;
    case 0x00010968u: goto L_10968;
    case 0x0001096eu: goto L_1096E;
    case 0x00010974u: goto L_10974;
    case 0x00010976u: goto L_10976;
    case 0x0001097au: goto L_1097A;
    case 0x0001097eu: goto L_1097E;
    case 0x00010980u: goto L_10980;
    case 0x00010982u: goto L_10982;
    case 0x00010988u: goto L_10988;
    case 0x0001098cu: goto L_1098C;
    case 0x0001098eu: goto L_1098E;
    case 0x00010990u: goto L_10990;
    case 0x00010996u: goto L_10996;
    case 0x00010998u: goto L_10998;
    case 0x0001099cu: goto L_1099C;
    case 0x000109a2u: goto L_109A2;
    case 0x000109a4u: goto L_109A4;
    case 0x000109a8u: goto L_109A8;
    case 0x000109acu: goto L_109AC;
    case 0x000109b0u: goto L_109B0;
    case 0x000109b4u: goto L_109B4;
    case 0x000109b6u: goto L_109B6;
    case 0x000109bau: goto L_109BA;
    case 0x000109bcu: goto L_109BC;
    case 0x000109c0u: goto L_109C0;
    case 0x000109c4u: goto L_109C4;
    case 0x000109c8u: goto L_109C8;
    case 0x000109cau: goto L_109CA;
    case 0x000109ceu: goto L_109CE;
    case 0x000109d2u: goto L_109D2;
    case 0x000109d6u: goto L_109D6;
    case 0x000109d8u: goto L_109D8;
    case 0x000109dcu: goto L_109DC;
    case 0x000109deu: goto L_109DE;
    case 0x000109e2u: goto L_109E2;
    case 0x000109e8u: goto L_109E8;
    case 0x000109eau: goto L_109EA;
    case 0x000109eeu: goto L_109EE;
    case 0x000109f2u: goto L_109F2;
    case 0x000109f6u: goto L_109F6;
    case 0x000109f8u: goto L_109F8;
    case 0x000109fcu: goto L_109FC;
    case 0x00010a02u: goto L_10A02;
    case 0x00010a04u: goto L_10A04;
    case 0x00010a08u: goto L_10A08;
    case 0x00010a0au: goto L_10A0A;
    case 0x00010a0eu: goto L_10A0E;
    case 0x00010a14u: goto L_10A14;
    case 0x00010a16u: goto L_10A16;
    case 0x00010a1au: goto L_10A1A;
    case 0x00010a1eu: goto L_10A1E;
    case 0x00010a20u: goto L_10A20;
    case 0x00010a24u: goto L_10A24;
    case 0x00010a28u: goto L_10A28;
    case 0x00010a2au: goto L_10A2A;
    case 0x00010a30u: goto L_10A30;
    case 0x00010a32u: goto L_10A32;
    case 0x00010a36u: goto L_10A36;
    case 0x00010a3cu: goto L_10A3C;
    case 0x00010a3eu: goto L_10A3E;
    case 0x00010a42u: goto L_10A42;
    case 0x00010a46u: goto L_10A46;
    case 0x00010a4au: goto L_10A4A;
    case 0x00010a4cu: goto L_10A4C;
    case 0x00010a52u: goto L_10A52;
    case 0x00010a54u: goto L_10A54;
    case 0x00010a58u: goto L_10A58;
    case 0x00010a5cu: goto L_10A5C;
    case 0x00010a5eu: goto L_10A5E;
    case 0x00010a62u: goto L_10A62;
    case 0x00010a66u: goto L_10A66;
    case 0x00010a6au: goto L_10A6A;
    case 0x00010a6eu: goto L_10A6E;
    case 0x00010a72u: goto L_10A72;
    case 0x00010a76u: goto L_10A76;
    case 0x00010a7au: goto L_10A7A;
    case 0x00010a7eu: goto L_10A7E;
    case 0x00010a82u: goto L_10A82;
    case 0x00010a86u: goto L_10A86;
    case 0x00010a8au: goto L_10A8A;
    case 0x00010a8eu: goto L_10A8E;
    case 0x00010a92u: goto L_10A92;
    case 0x00010a96u: goto L_10A96;
    case 0x00010a9au: goto L_10A9A;
    case 0x00010a9eu: goto L_10A9E;
    case 0x00010aa2u: goto L_10AA2;
    case 0x00010aa6u: goto L_10AA6;
    case 0x00010aa8u: goto L_10AA8;
    case 0x00010aaeu: goto L_10AAE;
    case 0x00010ab0u: goto L_10AB0;
    case 0x00010ab4u: goto L_10AB4;
    case 0x00010ab6u: goto L_10AB6;
    case 0x00010abau: goto L_10ABA;
    case 0x00010abcu: goto L_10ABC;
    case 0x00010abeu: goto L_10ABE;
    case 0x00010ac2u: goto L_10AC2;
    case 0x00010ac4u: goto L_10AC4;
    case 0x00010ac8u: goto L_10AC8;
    case 0x00010accu: goto L_10ACC;
    case 0x00010ad0u: goto L_10AD0;
    case 0x00010ad6u: goto L_10AD6;
    case 0x00010ad8u: goto L_10AD8;
    case 0x00010adcu: goto L_10ADC;
    case 0x00010ae0u: goto L_10AE0;
    case 0x00010ae4u: goto L_10AE4;
    case 0x00010ae8u: goto L_10AE8;
    case 0x00010aecu: goto L_10AEC;
    case 0x00010af0u: goto L_10AF0;
    case 0x00010af4u: goto L_10AF4;
    case 0x00010afau: goto L_10AFA;
    case 0x00010afcu: goto L_10AFC;
    case 0x00010b00u: goto L_10B00;
    case 0x00010b04u: goto L_10B04;
    case 0x00010b06u: goto L_10B06;
    case 0x00010b08u: goto L_10B08;
    case 0x00010b0au: goto L_10B0A;
    case 0x00010b0eu: goto L_10B0E;
    case 0x00010b10u: goto L_10B10;
    case 0x00010b14u: goto L_10B14;
    case 0x00010b18u: goto L_10B18;
    case 0x00010b1cu: goto L_10B1C;
    case 0x00010b20u: goto L_10B20;
    case 0x00010b24u: goto L_10B24;
    case 0x00010b28u: goto L_10B28;
    case 0x00010b2cu: goto L_10B2C;
    case 0x00010b30u: goto L_10B30;
    case 0x00010b34u: goto L_10B34;
    case 0x00010b38u: goto L_10B38;
    case 0x00010b3cu: goto L_10B3C;
    case 0x00010b40u: goto L_10B40;
    case 0x00010b44u: goto L_10B44;
    case 0x00010b48u: goto L_10B48;
    case 0x00010b4cu: goto L_10B4C;
    case 0x00010b50u: goto L_10B50;
    case 0x00010b54u: goto L_10B54;
    case 0x00010b58u: goto L_10B58;
    case 0x00010b5cu: goto L_10B5C;
    case 0x00010b60u: goto L_10B60;
    case 0x00010b64u: goto L_10B64;
    case 0x00010b68u: goto L_10B68;
    case 0x00010b6au: goto L_10B6A;
    case 0x00010b6eu: goto L_10B6E;
    case 0x00010b72u: goto L_10B72;
    case 0x00010b76u: goto L_10B76;
    case 0x00010b7au: goto L_10B7A;
    case 0x00010b7eu: goto L_10B7E;
    case 0x00010b82u: goto L_10B82;
    case 0x00010b86u: goto L_10B86;
    case 0x00010b8au: goto L_10B8A;
    case 0x00010b8eu: goto L_10B8E;
    case 0x00010b90u: goto L_10B90;
    case 0x00010b94u: goto L_10B94;
    case 0x00010b96u: goto L_10B96;
    case 0x00010b9cu: goto L_10B9C;
    case 0x00010b9eu: goto L_10B9E;
    case 0x00010ba4u: goto L_10BA4;
    case 0x00010ba8u: goto L_10BA8;
    case 0x00010bacu: goto L_10BAC;
    case 0x00010baeu: goto L_10BAE;
    case 0x00010bb2u: goto L_10BB2;
    case 0x00010bb4u: goto L_10BB4;
    case 0x00010bb8u: goto L_10BB8;
    case 0x00010bbau: goto L_10BBA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_107A6:
    /* 000107a6   4  link.w A5,#fffffff6 */
    c->pc = 0x000107a6u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xau;

L_107AA:
    /* 000107aa   4  jsr (ffff821e,A4) */
    c->pc = 0x000107aau;
    /* vector 90 */
    rc_push32(c, m, 0x000107aeu);
    rc_depth++;
    c->pc = 0x0001d778u;
    return;

L_107AE:
    /* 000107ae   4  clr.w (fffffffa,A5) */
    c->pc = 0x000107aeu;
    rc_wr16(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_107B2:
    /* 000107b2   4  clr.w (fffffec8,A4) */
    c->pc = 0x000107b2u;
    rc_wr16(c, m, (c->a[4] - 0x138u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_107B6:
    /* 000107b6   4  clr.w (aee,A4) */
    c->pc = 0x000107b6u;
    rc_wr16(c, m, (c->a[4] + 0xaeeu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_107BA:
    /* 000107ba   4  clr.w (fffffff8,A5) */
    c->pc = 0x000107bau;
    rc_wr16(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_107BE:
    /* 000107be   6  cmpi.b #22,(fffff0ba,A4) */
    c->pc = 0x000107beu;
    t0 = rc_rd8(c, m, (c->a[4] - 0xf46u));
    rc_cmp(c, RC_B, t0, 0x00000022u);

L_107C4:
    /* 000107c4   2  bne 000107ce */
    c->pc = 0x000107c4u;
    if (rc_cond(c, 6)) goto L_107CE;

L_107C6:
    /* 000107c6   6  move.w #27,(fffffffc,A5) */
    c->pc = 0x000107c6u;
    t0 = 0x00000027u;
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_107CC:
    /* 000107cc   2  bra 00010814 */
    c->pc = 0x000107ccu;
    goto L_10814;

L_107CE:
    /* 000107ce   6  move.w (ffffefe4,A4),(fffffffc,A5) */
    c->pc = 0x000107ceu;
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_107D4:
    /* 000107d4   4  clr.w (fffffffe,A5) */
    c->pc = 0x000107d4u;
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_107D8:
    /* 000107d8   2  moveq #0,D0 */
    c->pc = 0x000107d8u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_107DA:
    /* 000107da   4  move.w (fffffffc,A5),D0 */
    c->pc = 0x000107dau;
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_107DE:
    /* 000107de   2  asl.l #2,D0 */
    c->pc = 0x000107deu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_107E0:
    /* 000107e0   2  moveq #0,D1 */
    c->pc = 0x000107e0u;
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_107E2:
    /* 000107e2   4  move.w (fffffffe,A5),D1 */
    c->pc = 0x000107e2u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_107E6:
    /* 000107e6   2  add.l D1,D0 */
    c->pc = 0x000107e6u;
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_107E8:
    /* 000107e8   4  lea (fffff102,A4),A0 */
    c->pc = 0x000107e8u;
    c->a[0] = (c->a[4] - 0xefeu);

L_107EC:
    /* 000107ec   4  move.b (0,A0,D0.w),D1 */
    c->pc = 0x000107ecu;
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_107F0:
    /* 000107f0   2  ext.w D1 */
    c->pc = 0x000107f0u;
    rc_ext_w(c, 1);

L_107F2:
    /* 000107f2   4  add.w D1,(fffffff8,A5) */
    c->pc = 0x000107f2u;
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 1, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_107F6:
    /* 000107f6   4  addq.w #1,(fffffffe,A5) */
    c->pc = 0x000107f6u;
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_107FA:
    /* 000107fa   6  cmpi.w #4,(fffffffe,A5) */
    c->pc = 0x000107fau;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_10800:
    /* 00010800   2  bcs 000107d8 */
    c->pc = 0x00010800u;
    if (rc_cond(c, 5)) { rc_tick(); goto L_107D8; }

L_10802:
    /* 00010802   4  move.w (fffffff8,A5),D0 */
    c->pc = 0x00010802u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10806:
    /* 00010806   2  swap D0 */
    c->pc = 0x00010806u;
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_10808:
    /* 00010808   2  clr.w D0 */
    c->pc = 0x00010808u;
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1080A:
    /* 0001080a   2  swap D0 */
    c->pc = 0x0001080au;
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_1080C:
    /* 0001080c   4  divu.w #a,D0 */
    c->pc = 0x0001080cu;
    t0 = 0x0000000au;
    rc_divu(c, m, 0, t0);

L_10810:
    /* 00010810   4  move.w D0,(fffffff8,A5) */
    c->pc = 0x00010810u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_10814:
    /* 00010814   6  cmpi.w #22,(ffffefe4,A4) */
    c->pc = 0x00010814u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_cmp(c, RC_W, t0, 0x00000022u);

L_1081A:
    /* 0001081a   2  bne 0001082a */
    c->pc = 0x0001081au;
    if (rc_cond(c, 6)) goto L_1082A;

L_1081C:
    /* 0001081c   6  cmpi.w #2,(ffff83c8,A4) */
    c->pc = 0x0001081cu;
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_10822:
    /* 00010822   2  bge 0001082a */
    c->pc = 0x00010822u;
    if (rc_cond(c, 12)) goto L_1082A;

L_10824:
    /* 00010824   6  move.w #a,(fffffff8,A5) */
    c->pc = 0x00010824u;
    t0 = 0x0000000au;
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1082A:
    /* 0001082a   4  move.w #e9,-(A7) */
    c->pc = 0x0001082au;
    t0 = 0x000000e9u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1082E:
    /* 0001082e   4  jsr (ffff8086,A4) */
    c->pc = 0x0001082eu;
    /* vector 22 */
    rc_push32(c, m, 0x00010832u);
    rc_depth++;
    c->pc = 0x0000711cu;
    return;

L_10832:
    /* 00010832   2  addq.w #2,A7 */
    c->pc = 0x00010832u;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_10834:
    /* 00010834   2  tst.w D0 */
    c->pc = 0x00010834u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_10836:
    /* 00010836   2  beq 0001084a */
    c->pc = 0x00010836u;
    if (rc_cond(c, 7)) goto L_1084A;

L_10838:
    /* 00010838   6  bset #0,(9,A5) */
    c->pc = 0x00010838u;
    t4 = 0x00000000u;
    t3 = (c->a[5] + 0x9u);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_1083E:
    /* 0001083e   4  tst.w (fffffff8,A5) */
    c->pc = 0x0001083eu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_10842:
    /* 00010842   2  beq 0001084a */
    c->pc = 0x00010842u;
    if (rc_cond(c, 7)) goto L_1084A;

L_10844:
    /* 00010844   6  bset #3,(9,A5) */
    c->pc = 0x00010844u;
    t4 = 0x00000003u;
    t3 = (c->a[5] + 0x9u);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_1084A:
    /* 0001084a   6  btst #2,(9,A5) */
    c->pc = 0x0001084au;
    t4 = 0x00000002u;
    t3 = (c->a[5] + 0x9u);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_10850:
    /* 00010850   2  beq 00010858 */
    c->pc = 0x00010850u;
    if (rc_cond(c, 7)) goto L_10858;

L_10852:
    /* 00010852   6  andi.w #fff6,(8,A5) */
    c->pc = 0x00010852u;
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 & 0x0000fff6u;
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_10858:
    /* 00010858   6  move.w (8,A5),(aea,A4) */
    c->pc = 0x00010858u;
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_wr16(c, m, (c->a[4] + 0xaeau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1085E:
    /* 0001085e   4  jsr (ffff8182,A4) */
    c->pc = 0x0001085eu;
    /* vector 64 */
    rc_push32(c, m, 0x00010862u);
    rc_depth++;
    c->pc = 0x00016e56u;
    return;

L_10862:
    /* 00010862   2  moveq #0,D0 */
    c->pc = 0x00010862u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_10864:
    /* 00010864   4  move.w (fffffffc,A5),D0 */
    c->pc = 0x00010864u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10868:
    /* 00010868   2  asl.l #2,D0 */
    c->pc = 0x00010868u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_1086A:
    /* 0001086a   4  lea (ffffb3b8,A4),A0 */
    c->pc = 0x0001086au;
    c->a[0] = (c->a[4] - 0x4c48u);

L_1086E:
    /* 0001086e   4  move.w (0,A0,D0.w),D1 */
    c->pc = 0x0001086eu;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10872:
    /* 00010872   2  ext.l D1 */
    c->pc = 0x00010872u;
    rc_ext_l(c, 1);

L_10874:
    /* 00010874   4  divs.w #10,D1 */
    c->pc = 0x00010874u;
    t0 = 0x00000010u;
    rc_divs(c, m, 1, t0);

L_10878:
    /* 00010878   4  move.w D1,(fffff2fe,A4) */
    c->pc = 0x00010878u;
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] - 0xd02u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1087C:
    /* 0001087c   2  moveq #0,D0 */
    c->pc = 0x0001087cu;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1087E:
    /* 0001087e   4  move.w (fffffffc,A5),D0 */
    c->pc = 0x0001087eu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10882:
    /* 00010882   2  asl.l #2,D0 */
    c->pc = 0x00010882u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_10884:
    /* 00010884   4  lea (ffffb3ba,A4),A0 */
    c->pc = 0x00010884u;
    c->a[0] = (c->a[4] - 0x4c46u);

L_10888:
    /* 00010888   4  move.w (0,A0,D0.w),D1 */
    c->pc = 0x00010888u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1088C:
    /* 0001088c   2  ext.l D1 */
    c->pc = 0x0001088cu;
    rc_ext_l(c, 1);

L_1088E:
    /* 0001088e   4  divs.w #a,D1 */
    c->pc = 0x0001088eu;
    t0 = 0x0000000au;
    rc_divs(c, m, 1, t0);

L_10892:
    /* 00010892   4  move.w D1,(fffff2fc,A4) */
    c->pc = 0x00010892u;
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] - 0xd04u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_10896:
    /* 00010896   4  pea (00010bbe) */
    c->pc = 0x00010896u;
    rc_push32(c, m, 0x00010bbeu);

L_1089A:
    /* 0001089a   4  jsr (ffff828a,A4) */
    c->pc = 0x0001089au;
    /* vector 108 */
    rc_push32(c, m, 0x0001089eu);
    rc_depth++;
    c->pc = 0x000202c4u;
    return;

L_1089E:
    /* 0001089e   2  addq.w #4,A7 */
    c->pc = 0x0001089eu;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_108A0:
    /* 000108a0   4  jsr (00010bec) */
    c->pc = 0x000108a0u;
    rc_push32(c, m, 0x000108a4u);
    rc_depth++;
    c->pc = 0x00010becu;
    return;

L_108A4:
    /* 000108a4   4  jsr (00010d18) */
    c->pc = 0x000108a4u;
    rc_push32(c, m, 0x000108a8u);
    rc_depth++;
    c->pc = 0x00010d18u;
    return;

L_108A8:
    /* 000108a8   4  jsr (00010e48) */
    c->pc = 0x000108a8u;
    rc_push32(c, m, 0x000108acu);
    rc_depth++;
    c->pc = 0x00010e48u;
    return;

L_108AC:
    /* 000108ac   4  jsr (00012148) */
    c->pc = 0x000108acu;
    rc_push32(c, m, 0x000108b0u);
    rc_depth++;
    c->pc = 0x00012148u;
    return;

L_108B0:
    /* 000108b0   4  jsr (00016462) */
    c->pc = 0x000108b0u;
    rc_push32(c, m, 0x000108b4u);
    rc_depth++;
    c->pc = 0x00016462u;
    return;

L_108B4:
    /* 000108b4   4  jsr (00016ef6) */
    c->pc = 0x000108b4u;
    rc_push32(c, m, 0x000108b8u);
    rc_depth++;
    c->pc = 0x00016ef6u;
    return;

L_108B8:
    /* 000108b8   4  jsr (00017ac2) */
    c->pc = 0x000108b8u;
    rc_push32(c, m, 0x000108bcu);
    rc_depth++;
    c->pc = 0x00017ac2u;
    return;

L_108BC:
    /* 000108bc   4  jsr (00012492) */
    c->pc = 0x000108bcu;
    rc_push32(c, m, 0x000108c0u);
    rc_depth++;
    c->pc = 0x00012492u;
    return;

L_108C0:
    /* 000108c0   6  btst #0,(9,A5) */
    c->pc = 0x000108c0u;
    t4 = 0x00000000u;
    t3 = (c->a[5] + 0x9u);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_108C6:
    /* 000108c6   2  beq 000108cc */
    c->pc = 0x000108c6u;
    if (rc_cond(c, 7)) goto L_108CC;

L_108C8:
    /* 000108c8   4  jsr (000148c2) */
    c->pc = 0x000108c8u;
    rc_push32(c, m, 0x000108ccu);
    rc_depth++;
    c->pc = 0x000148c2u;
    return;

L_108CC:
    /* 000108cc   6  btst #1,(9,A5) */
    c->pc = 0x000108ccu;
    t4 = 0x00000001u;
    t3 = (c->a[5] + 0x9u);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_108D2:
    /* 000108d2   2  beq 000108ec */
    c->pc = 0x000108d2u;
    if (rc_cond(c, 7)) goto L_108EC;

L_108D4:
    /* 000108d4   4  move.w (fffffffc,A5),-(A7) */
    c->pc = 0x000108d4u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_108D8:
    /* 000108d8   4  move.w (8,A5),D0 */
    c->pc = 0x000108d8u;
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_108DC:
    /* 000108dc   4  and.w #8,D0 */
    c->pc = 0x000108dcu;
    t0 = 0x00000008u;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_108E0:
    /* 000108e0   2  move.w D0,-(A7) */
    c->pc = 0x000108e0u;
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_108E2:
    /* 000108e2   4  jsr (000131ac) */
    c->pc = 0x000108e2u;
    rc_push32(c, m, 0x000108e6u);
    rc_depth++;
    c->pc = 0x000131acu;
    return;

L_108E6:
    /* 000108e6   2  addq.w #4,A7 */
    c->pc = 0x000108e6u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_108E8:
    /* 000108e8   4  jsr (00017b22) */
    c->pc = 0x000108e8u;
    rc_push32(c, m, 0x000108ecu);
    rc_depth++;
    c->pc = 0x00017b22u;
    return;

L_108EC:
    /* 000108ec   6  btst #2,(9,A5) */
    c->pc = 0x000108ecu;
    t4 = 0x00000002u;
    t3 = (c->a[5] + 0x9u);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_108F2:
    /* 000108f2   2  beq 000108f8 */
    c->pc = 0x000108f2u;
    if (rc_cond(c, 7)) goto L_108F8;

L_108F4:
    /* 000108f4   4  jsr (00013ff6) */
    c->pc = 0x000108f4u;
    rc_push32(c, m, 0x000108f8u);
    rc_depth++;
    c->pc = 0x00013ff6u;
    return;

L_108F8:
    /* 000108f8   4  jsr (00014030) */
    c->pc = 0x000108f8u;
    rc_push32(c, m, 0x000108fcu);
    rc_depth++;
    c->pc = 0x00014030u;
    return;

L_108FC:
    /* 000108fc   6  btst #3,(9,A5) */
    c->pc = 0x000108fcu;
    t4 = 0x00000003u;
    t3 = (c->a[5] + 0x9u);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_10902:
    /* 00010902   2  beq 0001090e */
    c->pc = 0x00010902u;
    if (rc_cond(c, 7)) goto L_1090E;

L_10904:
    /* 00010904   4  move.w (fffffff8,A5),-(A7) */
    c->pc = 0x00010904u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_10908:
    /* 00010908   4  jsr (00014dfa) */
    c->pc = 0x00010908u;
    rc_push32(c, m, 0x0001090cu);
    rc_depth++;
    c->pc = 0x00014dfau;
    return;

L_1090C:
    /* 0001090c   2  addq.w #2,A7 */
    c->pc = 0x0001090cu;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1090E:
    /* 0001090e   4  jsr (00014dd6) */
    c->pc = 0x0001090eu;
    rc_push32(c, m, 0x00010912u);
    rc_depth++;
    c->pc = 0x00014dd6u;
    return;

L_10912:
    /* 00010912   4  jsr (ffff8284,A4) */
    c->pc = 0x00010912u;
    /* vector 107 */
    rc_push32(c, m, 0x00010916u);
    rc_depth++;
    c->pc = 0x00020266u;
    return;

L_10916:
    /* 00010916   4  move.w (8,A5),-(A7) */
    c->pc = 0x00010916u;
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1091A:
    /* 0001091a   4  jsr (00016c5c) */
    c->pc = 0x0001091au;
    rc_push32(c, m, 0x0001091eu);
    rc_depth++;
    c->pc = 0x00016c5cu;
    return;

L_1091E:
    /* 0001091e   2  addq.w #2,A7 */
    c->pc = 0x0001091eu;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_10920:
    /* 00010920   4  pea (ffffa12e,A4) */
    c->pc = 0x00010920u;
    rc_push32(c, m, (c->a[4] - 0x5ed2u));

L_10924:
    /* 00010924   4  jsr (ffff810a,A4) */
    c->pc = 0x00010924u;
    /* vector 44 */
    rc_push32(c, m, 0x00010928u);
    rc_depth++;
    c->pc = 0x0000e804u;
    return;

L_10928:
    /* 00010928   2  addq.w #4,A7 */
    c->pc = 0x00010928u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1092A:
    /* 0001092a   4  jsr (00011cc4) */
    c->pc = 0x0001092au;
    rc_push32(c, m, 0x0001092eu);
    rc_depth++;
    c->pc = 0x00011cc4u;
    return;

L_1092E:
    /* 0001092e   4  jsr (00011f64) */
    c->pc = 0x0001092eu;
    rc_push32(c, m, 0x00010932u);
    rc_depth++;
    c->pc = 0x00011f64u;
    return;

L_10932:
    /* 00010932   4  jsr (00011eaa) */
    c->pc = 0x00010932u;
    rc_push32(c, m, 0x00010936u);
    rc_depth++;
    c->pc = 0x00011eaau;
    return;

L_10936:
    /* 00010936   4  jsr (00011748) */
    c->pc = 0x00010936u;
    rc_push32(c, m, 0x0001093au);
    rc_depth++;
    c->pc = 0x00011748u;
    return;

L_1093A:
    /* 0001093a   4  pea (ffffffff).l */
    c->pc = 0x0001093au;
    rc_push32(c, m, 0xffffffffu);

L_1093E:
    /* 0001093e   4  jsr (ffff80e6,A4) */
    c->pc = 0x0001093eu;
    /* vector 38 */
    rc_push32(c, m, 0x00010942u);
    rc_depth++;
    c->pc = 0x00009cc4u;
    return;

L_10942:
    /* 00010942   2  addq.w #4,A7 */
    c->pc = 0x00010942u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_10944:
    /* 00010944   4  movea.l (ffffa208,A4),A0 */
    c->pc = 0x00010944u;
    t0 = rc_rd32(c, m, (c->a[4] - 0x5df8u));
    c->a[0] = t0;

L_10948:
    /* 00010948   4  move.w #9b,(A0) */
    c->pc = 0x00010948u;
    t0 = 0x0000009bu;
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1094C:
    /* 0001094c   4  clr.w (aec,A4) */
    c->pc = 0x0001094cu;
    rc_wr16(c, m, (c->a[4] + 0xaecu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_10950:
    /* 00010950   4  clr.w (af0,A4) */
    c->pc = 0x00010950u;
    rc_wr16(c, m, (c->a[4] + 0xaf0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_10954:
    /* 00010954   4  clr.w (af2,A4) */
    c->pc = 0x00010954u;
    rc_wr16(c, m, (c->a[4] + 0xaf2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_10958:
    /* 00010958   4  clr.w (ffffb02e,A4) */
    c->pc = 0x00010958u;
    rc_wr16(c, m, (c->a[4] - 0x4fd2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1095C:
    /* 0001095c   4  clr.w (ffffb038,A4) */
    c->pc = 0x0001095cu;
    rc_wr16(c, m, (c->a[4] - 0x4fc8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_10960:
    /* 00010960   4  tst.w (aee,A4) */
    c->pc = 0x00010960u;
    t0 = rc_rd16(c, m, (c->a[4] + 0xaeeu));
    rc_set_nzvc(c, t0, RC_W);

L_10964:
    /* 00010964   4  bne 00010a6a */
    c->pc = 0x00010964u;
    if (rc_cond(c, 6)) goto L_10A6A;

L_10968:
    /* 00010968   6  move.w #1,(fffff28a,A4) */
    c->pc = 0x00010968u;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0xd76u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1096E:
    /* 0001096e   6  btst #1,(9,A5) */
    c->pc = 0x0001096eu;
    t4 = 0x00000001u;
    t3 = (c->a[5] + 0x9u);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_10974:
    /* 00010974   2  beq 0001097a */
    c->pc = 0x00010974u;
    if (rc_cond(c, 7)) goto L_1097A;

L_10976:
    /* 00010976   4  jsr (000135da) */
    c->pc = 0x00010976u;
    rc_push32(c, m, 0x0001097au);
    rc_depth++;
    c->pc = 0x000135dau;
    return;

L_1097A:
    /* 0001097a   4  tst.w (fffff28a,A4) */
    c->pc = 0x0001097au;
    t0 = rc_rd16(c, m, (c->a[4] - 0xd76u));
    rc_set_nzvc(c, t0, RC_W);

L_1097E:
    /* 0001097e   2  beq 00010982 */
    c->pc = 0x0001097eu;
    if (rc_cond(c, 7)) goto L_10982;

L_10980:
    /* 00010980   2  bra 0001097a */
    c->pc = 0x00010980u;
    rc_tick();
    goto L_1097A;

L_10982:
    /* 00010982   6  move.w #1,(af4,A4) */
    c->pc = 0x00010982u;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xaf4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_10988:
    /* 00010988   4  tst.w (af4,A4) */
    c->pc = 0x00010988u;
    t0 = rc_rd16(c, m, (c->a[4] + 0xaf4u));
    rc_set_nzvc(c, t0, RC_W);

L_1098C:
    /* 0001098c   2  beq 00010990 */
    c->pc = 0x0001098cu;
    if (rc_cond(c, 7)) goto L_10990;

L_1098E:
    /* 0001098e   2  bra 00010988 */
    c->pc = 0x0001098eu;
    rc_tick();
    goto L_10988;

L_10990:
    /* 00010990   6  cmpi.w #1,(fffffffa,A5) */
    c->pc = 0x00010990u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_10996:
    /* 00010996   2  bne 0001099c */
    c->pc = 0x00010996u;
    if (rc_cond(c, 6)) goto L_1099C;

L_10998:
    /* 00010998   4  jsr (000120b4) */
    c->pc = 0x00010998u;
    rc_push32(c, m, 0x0001099cu);
    rc_depth++;
    c->pc = 0x000120b4u;
    return;

L_1099C:
    /* 0001099c   6  cmpi.w #2,(fffffffa,A5) */
    c->pc = 0x0001099cu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_109A2:
    /* 000109a2   2  bcc 000109a8 */
    c->pc = 0x000109a2u;
    if (rc_cond(c, 4)) goto L_109A8;

L_109A4:
    /* 000109a4   4  addq.w #1,(fffffffa,A5) */
    c->pc = 0x000109a4u;
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_109A8:
    /* 000109a8   4  jsr (ffff816a,A4) */
    c->pc = 0x000109a8u;
    /* vector 60 */
    rc_push32(c, m, 0x000109acu);
    rc_depth++;
    c->pc = 0x00011bf0u;
    return;

L_109AC:
    /* 000109ac   4  move.w #e,-(A7) */
    c->pc = 0x000109acu;
    t0 = 0x0000000eu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_109B0:
    /* 000109b0   4  jsr (0001075a) */
    c->pc = 0x000109b0u;
    rc_push32(c, m, 0x000109b4u);
    rc_depth++;
    c->pc = 0x0001075au;
    return;

L_109B4:
    /* 000109b4   2  addq.w #2,A7 */
    c->pc = 0x000109b4u;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_109B6:
    /* 000109b6   4  tst.w (fffff324,A4) */
    c->pc = 0x000109b6u;
    t0 = rc_rd16(c, m, (c->a[4] - 0xcdcu));
    rc_set_nzvc(c, t0, RC_W);

L_109BA:
    /* 000109ba   2  beq 000109ca */
    c->pc = 0x000109bau;
    if (rc_cond(c, 7)) goto L_109CA;

L_109BC:
    /* 000109bc   4  jsr (00012988) */
    c->pc = 0x000109bcu;
    rc_push32(c, m, 0x000109c0u);
    rc_depth++;
    c->pc = 0x00012988u;
    return;

L_109C0:
    /* 000109c0   4  jsr (000118d4) */
    c->pc = 0x000109c0u;
    rc_push32(c, m, 0x000109c4u);
    rc_depth++;
    c->pc = 0x000118d4u;
    return;

L_109C4:
    /* 000109c4   4  clr.w (fffff324,A4) */
    c->pc = 0x000109c4u;
    rc_wr16(c, m, (c->a[4] - 0xcdcu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_109C8:
    /* 000109c8   2  bra 000109ce */
    c->pc = 0x000109c8u;
    goto L_109CE;

L_109CA:
    /* 000109ca   4  jsr (000116e6) */
    c->pc = 0x000109cau;
    rc_push32(c, m, 0x000109ceu);
    rc_depth++;
    c->pc = 0x000116e6u;
    return;

L_109CE:
    /* 000109ce   4  jsr (00017ade) */
    c->pc = 0x000109ceu;
    rc_push32(c, m, 0x000109d2u);
    rc_depth++;
    c->pc = 0x00017adeu;
    return;

L_109D2:
    /* 000109d2   4  tst.w (af6,A4) */
    c->pc = 0x000109d2u;
    t0 = rc_rd16(c, m, (c->a[4] + 0xaf6u));
    rc_set_nzvc(c, t0, RC_W);

L_109D6:
    /* 000109d6   2  beq 000109de */
    c->pc = 0x000109d6u;
    if (rc_cond(c, 7)) goto L_109DE;

L_109D8:
    /* 000109d8   4  jsr (000167e0) */
    c->pc = 0x000109d8u;
    rc_push32(c, m, 0x000109dcu);
    rc_depth++;
    c->pc = 0x000167e0u;
    return;

L_109DC:
    /* 000109dc   2  bra 000109e2 */
    c->pc = 0x000109dcu;
    goto L_109E2;

L_109DE:
    /* 000109de   4  jsr (00016588) */
    c->pc = 0x000109deu;
    rc_push32(c, m, 0x000109e2u);
    rc_depth++;
    c->pc = 0x00016588u;
    return;

L_109E2:
    /* 000109e2   6  btst #1,(9,A5) */
    c->pc = 0x000109e2u;
    t4 = 0x00000001u;
    t3 = (c->a[5] + 0x9u);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_109E8:
    /* 000109e8   2  beq 000109f2 */
    c->pc = 0x000109e8u;
    if (rc_cond(c, 7)) goto L_109F2;

L_109EA:
    /* 000109ea   4  jsr (00017b9c) */
    c->pc = 0x000109eau;
    rc_push32(c, m, 0x000109eeu);
    rc_depth++;
    c->pc = 0x00017b9cu;
    return;

L_109EE:
    /* 000109ee   4  jsr (00013c56) */
    c->pc = 0x000109eeu;
    rc_push32(c, m, 0x000109f2u);
    rc_depth++;
    c->pc = 0x00013c56u;
    return;

L_109F2:
    /* 000109f2   4  tst.w (fffffd84,A4) */
    c->pc = 0x000109f2u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x27cu));
    rc_set_nzvc(c, t0, RC_W);

L_109F6:
    /* 000109f6   2  beq 000109fc */
    c->pc = 0x000109f6u;
    if (rc_cond(c, 7)) goto L_109FC;

L_109F8:
    /* 000109f8   4  jsr (00012202) */
    c->pc = 0x000109f8u;
    rc_push32(c, m, 0x000109fcu);
    rc_depth++;
    c->pc = 0x00012202u;
    return;

L_109FC:
    /* 000109fc   6  btst #2,(9,A5) */
    c->pc = 0x000109fcu;
    t4 = 0x00000002u;
    t3 = (c->a[5] + 0x9u);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_10A02:
    /* 00010a02   2  beq 00010a0e */
    c->pc = 0x00010a02u;
    if (rc_cond(c, 7)) goto L_10A0E;

L_10A04:
    /* 00010a04   4  tst.w (af6,A4) */
    c->pc = 0x00010a04u;
    t0 = rc_rd16(c, m, (c->a[4] + 0xaf6u));
    rc_set_nzvc(c, t0, RC_W);

L_10A08:
    /* 00010a08   2  bne 00010a0e */
    c->pc = 0x00010a08u;
    if (rc_cond(c, 6)) goto L_10A0E;

L_10A0A:
    /* 00010a0a   4  jsr (000147d0) */
    c->pc = 0x00010a0au;
    rc_push32(c, m, 0x00010a0eu);
    rc_depth++;
    c->pc = 0x000147d0u;
    return;

L_10A0E:
    /* 00010a0e   6  btst #3,(9,A5) */
    c->pc = 0x00010a0eu;
    t4 = 0x00000003u;
    t3 = (c->a[5] + 0x9u);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_10A14:
    /* 00010a14   2  beq 00010a1a */
    c->pc = 0x00010a14u;
    if (rc_cond(c, 7)) goto L_10A1A;

L_10A16:
    /* 00010a16   4  jsr (00015ad6) */
    c->pc = 0x00010a16u;
    rc_push32(c, m, 0x00010a1au);
    rc_depth++;
    c->pc = 0x00015ad6u;
    return;

L_10A1A:
    /* 00010a1a   4  tst.w (af6,A4) */
    c->pc = 0x00010a1au;
    t0 = rc_rd16(c, m, (c->a[4] + 0xaf6u));
    rc_set_nzvc(c, t0, RC_W);

L_10A1E:
    /* 00010a1e   2  beq 00010a24 */
    c->pc = 0x00010a1eu;
    if (rc_cond(c, 7)) goto L_10A24;

L_10A20:
    /* 00010a20   4  jsr (000142ea) */
    c->pc = 0x00010a20u;
    rc_push32(c, m, 0x00010a24u);
    rc_depth++;
    c->pc = 0x000142eau;
    return;

L_10A24:
    /* 00010a24   4  tst.w (af6,A4) */
    c->pc = 0x00010a24u;
    t0 = rc_rd16(c, m, (c->a[4] + 0xaf6u));
    rc_set_nzvc(c, t0, RC_W);

L_10A28:
    /* 00010a28   2  beq 00010a36 */
    c->pc = 0x00010a28u;
    if (rc_cond(c, 7)) goto L_10A36;

L_10A2A:
    /* 00010a2a   6  cmpi.w #3,(af8,A4) */
    c->pc = 0x00010a2au;
    t0 = rc_rd16(c, m, (c->a[4] + 0xaf8u));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_10A30:
    /* 00010a30   2  bge 00010a36 */
    c->pc = 0x00010a30u;
    if (rc_cond(c, 12)) goto L_10A36;

L_10A32:
    /* 00010a32   4  jsr (00014674) */
    c->pc = 0x00010a32u;
    rc_push32(c, m, 0x00010a36u);
    rc_depth++;
    c->pc = 0x00014674u;
    return;

L_10A36:
    /* 00010a36   6  btst #1,(9,A5) */
    c->pc = 0x00010a36u;
    t4 = 0x00000001u;
    t3 = (c->a[5] + 0x9u);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_10A3C:
    /* 00010a3c   2  beq 00010a42 */
    c->pc = 0x00010a3cu;
    if (rc_cond(c, 7)) goto L_10A42;

L_10A3E:
    /* 00010a3e   4  jsr (00013b54) */
    c->pc = 0x00010a3eu;
    rc_push32(c, m, 0x00010a42u);
    rc_depth++;
    c->pc = 0x00013b54u;
    return;

L_10A42:
    /* 00010a42   4  jsr (000125aa) */
    c->pc = 0x00010a42u;
    rc_push32(c, m, 0x00010a46u);
    rc_depth++;
    c->pc = 0x000125aau;
    return;

L_10A46:
    /* 00010a46   4  tst.w (af6,A4) */
    c->pc = 0x00010a46u;
    t0 = rc_rd16(c, m, (c->a[4] + 0xaf6u));
    rc_set_nzvc(c, t0, RC_W);

L_10A4A:
    /* 00010a4a   2  beq 00010a58 */
    c->pc = 0x00010a4au;
    if (rc_cond(c, 7)) goto L_10A58;

L_10A4C:
    /* 00010a4c   6  cmpi.w #3,(af8,A4) */
    c->pc = 0x00010a4cu;
    t0 = rc_rd16(c, m, (c->a[4] + 0xaf8u));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_10A52:
    /* 00010a52   2  blt 00010a58 */
    c->pc = 0x00010a52u;
    if (rc_cond(c, 13)) goto L_10A58;

L_10A54:
    /* 00010a54   4  jsr (00014674) */
    c->pc = 0x00010a54u;
    rc_push32(c, m, 0x00010a58u);
    rc_depth++;
    c->pc = 0x00014674u;
    return;

L_10A58:
    /* 00010a58   4  tst.w (afa,A4) */
    c->pc = 0x00010a58u;
    t0 = rc_rd16(c, m, (c->a[4] + 0xafau));
    rc_set_nzvc(c, t0, RC_W);

L_10A5C:
    /* 00010a5c   2  beq 00010a62 */
    c->pc = 0x00010a5cu;
    if (rc_cond(c, 7)) goto L_10A62;

L_10A5E:
    /* 00010a5e   4  jsr (00014b7c) */
    c->pc = 0x00010a5eu;
    rc_push32(c, m, 0x00010a62u);
    rc_depth++;
    c->pc = 0x00014b7cu;
    return;

L_10A62:
    /* 00010a62   4  jsr (ffff83aa,A4) */
    c->pc = 0x00010a62u;
    /* vector 156 */
    rc_push32(c, m, 0x00010a66u);
    rc_depth++;
    c->pc = 0x00021948u;
    return;

L_10A66:
    /* 00010a66   4  bra 00010960 */
    c->pc = 0x00010a66u;
    rc_tick();
    goto L_10960;

L_10A6A:
    /* 00010a6a   4  clr.w (ffffb034,A4) */
    c->pc = 0x00010a6au;
    rc_wr16(c, m, (c->a[4] - 0x4fccu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_10A6E:
    /* 00010a6e   4  jsr (00016946) */
    c->pc = 0x00010a6eu;
    rc_push32(c, m, 0x00010a72u);
    rc_depth++;
    c->pc = 0x00016946u;
    return;

L_10A72:
    /* 00010a72   4  jsr (00011be0) */
    c->pc = 0x00010a72u;
    rc_push32(c, m, 0x00010a76u);
    rc_depth++;
    c->pc = 0x00011be0u;
    return;

L_10A76:
    /* 00010a76   4  jsr (ffff8110,A4) */
    c->pc = 0x00010a76u;
    /* vector 45 */
    rc_push32(c, m, 0x00010a7au);
    rc_depth++;
    c->pc = 0x0000ec8au;
    return;

L_10A7A:
    /* 00010a7a   4  jsr (ffff80c8,A4) */
    c->pc = 0x00010a7au;
    /* vector 33 */
    rc_push32(c, m, 0x00010a7eu);
    rc_depth++;
    c->pc = 0x00009becu;
    return;

L_10A7E:
    /* 00010a7e   4  jsr (0001731c) */
    c->pc = 0x00010a7eu;
    rc_push32(c, m, 0x00010a82u);
    rc_depth++;
    c->pc = 0x0001731cu;
    return;

L_10A82:
    /* 00010a82   4  jsr (00011f1a) */
    c->pc = 0x00010a82u;
    rc_push32(c, m, 0x00010a86u);
    rc_depth++;
    c->pc = 0x00011f1au;
    return;

L_10A86:
    /* 00010a86   4  jsr (000120f4) */
    c->pc = 0x00010a86u;
    rc_push32(c, m, 0x00010a8au);
    rc_depth++;
    c->pc = 0x000120f4u;
    return;

L_10A8A:
    /* 00010a8a   4  jsr (00011026) */
    c->pc = 0x00010a8au;
    rc_push32(c, m, 0x00010a8eu);
    rc_depth++;
    c->pc = 0x00011026u;
    return;

L_10A8E:
    /* 00010a8e   4  jsr (0001651e) */
    c->pc = 0x00010a8eu;
    rc_push32(c, m, 0x00010a92u);
    rc_depth++;
    c->pc = 0x0001651eu;
    return;

L_10A92:
    /* 00010a92   4  jsr (ffff8176,A4) */
    c->pc = 0x00010a92u;
    /* vector 62 */
    rc_push32(c, m, 0x00010a96u);
    rc_depth++;
    c->pc = 0x00016b34u;
    return;

L_10A96:
    /* 00010a96   4  jsr (00010cca) */
    c->pc = 0x00010a96u;
    rc_push32(c, m, 0x00010a9au);
    rc_depth++;
    c->pc = 0x00010ccau;
    return;

L_10A9A:
    /* 00010a9a   4  jsr (000179fa) */
    c->pc = 0x00010a9au;
    rc_push32(c, m, 0x00010a9eu);
    rc_depth++;
    c->pc = 0x000179fau;
    return;

L_10A9E:
    /* 00010a9e   4  jsr (00016d5c) */
    c->pc = 0x00010a9eu;
    rc_push32(c, m, 0x00010aa2u);
    rc_depth++;
    c->pc = 0x00016d5cu;
    return;

L_10AA2:
    /* 00010aa2   4  tst.w (fffffec8,A4) */
    c->pc = 0x00010aa2u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x138u));
    rc_set_nzvc(c, t0, RC_W);

L_10AA6:
    /* 00010aa6   2  bne 00010ad8 */
    c->pc = 0x00010aa6u;
    if (rc_cond(c, 6)) goto L_10AD8;

L_10AA8:
    /* 00010aa8   6  cmpi.w #27,(fffffffc,A5) */
    c->pc = 0x00010aa8u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_W, t0, 0x00000027u);

L_10AAE:
    /* 00010aae   2  bcc 00010ad8 */
    c->pc = 0x00010aaeu;
    if (rc_cond(c, 4)) goto L_10AD8;

L_10AB0:
    /* 00010ab0   4  clr.w (fffffffe,A5) */
    c->pc = 0x00010ab0u;
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_10AB4:
    /* 00010ab4   2  moveq #0,D0 */
    c->pc = 0x00010ab4u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_10AB6:
    /* 00010ab6   4  move.w (fffffffc,A5),D0 */
    c->pc = 0x00010ab6u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10ABA:
    /* 00010aba   2  asl.l #2,D0 */
    c->pc = 0x00010abau;
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_10ABC:
    /* 00010abc   2  moveq #0,D1 */
    c->pc = 0x00010abcu;
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_10ABE:
    /* 00010abe   4  move.w (fffffffe,A5),D1 */
    c->pc = 0x00010abeu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10AC2:
    /* 00010ac2   2  add.l D1,D0 */
    c->pc = 0x00010ac2u;
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_10AC4:
    /* 00010ac4   4  lea (fffff102,A4),A0 */
    c->pc = 0x00010ac4u;
    c->a[0] = (c->a[4] - 0xefeu);

L_10AC8:
    /* 00010ac8   4  clr.b (0,A0,D0.w) */
    c->pc = 0x00010ac8u;
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_10ACC:
    /* 00010acc   4  addq.w #1,(fffffffe,A5) */
    c->pc = 0x00010accu;
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_10AD0:
    /* 00010ad0   6  cmpi.w #4,(fffffffe,A5) */
    c->pc = 0x00010ad0u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_10AD6:
    /* 00010ad6   2  bcs 00010ab4 */
    c->pc = 0x00010ad6u;
    if (rc_cond(c, 5)) { rc_tick(); goto L_10AB4; }

L_10AD8:
    /* 00010ad8   4  tst.w (afc,A4) */
    c->pc = 0x00010ad8u;
    t0 = rc_rd16(c, m, (c->a[4] + 0xafcu));
    rc_set_nzvc(c, t0, RC_W);

L_10ADC:
    /* 00010adc   4  beq 00010bba */
    c->pc = 0x00010adcu;
    if (rc_cond(c, 7)) goto L_10BBA;

L_10AE0:
    /* 00010ae0   4  clr.w (afc,A4) */
    c->pc = 0x00010ae0u;
    rc_wr16(c, m, (c->a[4] + 0xafcu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_10AE4:
    /* 00010ae4   4  jsr (0000bfca) */
    c->pc = 0x00010ae4u;
    rc_push32(c, m, 0x00010ae8u);
    rc_depth++;
    c->pc = 0x0000bfcau;
    return;

L_10AE8:
    /* 00010ae8   4  clr.w (ffff8b54,A4) */
    c->pc = 0x00010ae8u;
    rc_wr16(c, m, (c->a[4] - 0x74acu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_10AEC:
    /* 00010aec   4  clr.w (ffff83d6,A4) */
    c->pc = 0x00010aecu;
    rc_wr16(c, m, (c->a[4] - 0x7c2au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_10AF0:
    /* 00010af0   4  clr.w (ffff8532,A4) */
    c->pc = 0x00010af0u;
    rc_wr16(c, m, (c->a[4] - 0x7aceu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_10AF4:
    /* 00010af4   6  cmpi.w #1,(71e,A4) */
    c->pc = 0x00010af4u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x71eu));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_10AFA:
    /* 00010afa   2  bne 00010b0a */
    c->pc = 0x00010afau;
    if (rc_cond(c, 6)) goto L_10B0A;

L_10AFC:
    /* 00010afc   4  move.w #f9,-(A7) */
    c->pc = 0x00010afcu;
    t0 = 0x000000f9u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_10B00:
    /* 00010b00   4  jsr (ffff8044,A4) */
    c->pc = 0x00010b00u;
    /* vector 11 */
    rc_push32(c, m, 0x00010b04u);
    rc_depth++;
    c->pc = 0x00002c92u;
    return;

L_10B04:
    /* 00010b04   2  addq.w #2,A7 */
    c->pc = 0x00010b04u;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_10B06:
    /* 00010b06   2  unlk A5 */
    c->pc = 0x00010b06u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_10B08:
    /* 00010b08   2  rts */
    c->pc = 0x00010b08u;
    rc_ret(c, m);
    return;

L_10B0A:
    /* 00010b0a   4  tst.w (71e,A4) */
    c->pc = 0x00010b0au;
    t0 = rc_rd16(c, m, (c->a[4] + 0x71eu));
    rc_set_nzvc(c, t0, RC_W);

L_10B0E:
    /* 00010b0e   2  bne 00010b18 */
    c->pc = 0x00010b0eu;
    if (rc_cond(c, 6)) goto L_10B18;

L_10B10:
    /* 00010b10   4  tst.w (fffffec8,A4) */
    c->pc = 0x00010b10u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x138u));
    rc_set_nzvc(c, t0, RC_W);

L_10B14:
    /* 00010b14   4  beq 00010ba8 */
    c->pc = 0x00010b14u;
    if (rc_cond(c, 7)) goto L_10BA8;

L_10B18:
    /* 00010b18   4  move.w #1,-(A7) */
    c->pc = 0x00010b18u;
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_10B1C:
    /* 00010b1c   4  pea (00010bd7) */
    c->pc = 0x00010b1cu;
    rc_push32(c, m, 0x00010bd7u);

L_10B20:
    /* 00010b20   4  pea (00010bcb) */
    c->pc = 0x00010b20u;
    rc_push32(c, m, 0x00010bcbu);

L_10B24:
    /* 00010b24   4  jsr (ffff800e,A4) */
    c->pc = 0x00010b24u;
    /* vector 2 */
    rc_push32(c, m, 0x00010b28u);
    rc_depth++;
    c->pc = 0x000002f4u;
    return;

L_10B28:
    /* 00010b28   4  lea (a,A7),A7 */
    c->pc = 0x00010b28u;
    c->a[7] = (c->a[7] + 0xau);

L_10B2C:
    /* 00010b2c   4  pea (2de,A4) */
    c->pc = 0x00010b2cu;
    rc_push32(c, m, (c->a[4] + 0x2deu));

L_10B30:
    /* 00010b30   4  pea (afe,A4) */
    c->pc = 0x00010b30u;
    rc_push32(c, m, (c->a[4] + 0xafeu));

L_10B34:
    /* 00010b34   4  pea (00010bdb) */
    c->pc = 0x00010b34u;
    rc_push32(c, m, 0x00010bdbu);

L_10B38:
    /* 00010b38   4  jsr (ffff80b0,A4) */
    c->pc = 0x00010b38u;
    /* vector 29 */
    rc_push32(c, m, 0x00010b3cu);
    rc_depth++;
    c->pc = 0x00009984u;
    return;

L_10B3C:
    /* 00010b3c   4  lea (c,A7),A7 */
    c->pc = 0x00010b3cu;
    c->a[7] = (c->a[7] + 0xcu);

L_10B40:
    /* 00010b40   4  move.l D0,(ffffb150,A4) */
    c->pc = 0x00010b40u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x4eb0u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10B44:
    /* 00010b44   4  move.w #3f,-(A7) */
    c->pc = 0x00010b44u;
    t0 = 0x0000003fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_10B48:
    /* 00010b48   4  move.w #3,-(A7) */
    c->pc = 0x00010b48u;
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_10B4C:
    /* 00010b4c   4  move.l (2de,A4),-(A7) */
    c->pc = 0x00010b4cu;
    t0 = rc_rd32(c, m, (c->a[4] + 0x2deu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10B50:
    /* 00010b50   4  move.w #44c,-(A7) */
    c->pc = 0x00010b50u;
    t0 = 0x0000044cu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_10B54:
    /* 00010b54   4  move.l (ffffb150,A4),-(A7) */
    c->pc = 0x00010b54u;
    t0 = rc_rd32(c, m, (c->a[4] - 0x4eb0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10B58:
    /* 00010b58   4  jsr (ffff80b6,A4) */
    c->pc = 0x00010b58u;
    /* vector 30 */
    rc_push32(c, m, 0x00010b5cu);
    rc_depth++;
    c->pc = 0x00009b60u;
    return;

L_10B5C:
    /* 00010b5c   4  lea (e,A7),A7 */
    c->pc = 0x00010b5cu;
    c->a[7] = (c->a[7] + 0xeu);

L_10B60:
    /* 00010b60   4  pea (00000005).l */
    c->pc = 0x00010b60u;
    rc_push32(c, m, 0x00000005u);

L_10B64:
    /* 00010b64   4  jsr (ffff8302,A4) */
    c->pc = 0x00010b64u;
    /* vector 128 */
    rc_push32(c, m, 0x00010b68u);
    rc_depth++;
    c->pc = 0x00021428u;
    return;

L_10B68:
    /* 00010b68   2  addq.w #4,A7 */
    c->pc = 0x00010b68u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_10B6A:
    /* 00010b6a   4  move.w #3f,-(A7) */
    c->pc = 0x00010b6au;
    t0 = 0x0000003fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_10B6E:
    /* 00010b6e   4  move.w #2,-(A7) */
    c->pc = 0x00010b6eu;
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_10B72:
    /* 00010b72   4  move.l (2de,A4),-(A7) */
    c->pc = 0x00010b72u;
    t0 = rc_rd32(c, m, (c->a[4] + 0x2deu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10B76:
    /* 00010b76   4  move.w #3e8,-(A7) */
    c->pc = 0x00010b76u;
    t0 = 0x000003e8u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_10B7A:
    /* 00010b7a   4  move.l (ffffb150,A4),-(A7) */
    c->pc = 0x00010b7au;
    t0 = rc_rd32(c, m, (c->a[4] - 0x4eb0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10B7E:
    /* 00010b7e   4  jsr (ffff80b6,A4) */
    c->pc = 0x00010b7eu;
    /* vector 30 */
    rc_push32(c, m, 0x00010b82u);
    rc_depth++;
    c->pc = 0x00009b60u;
    return;

L_10B82:
    /* 00010b82   4  lea (e,A7),A7 */
    c->pc = 0x00010b82u;
    c->a[7] = (c->a[7] + 0xeu);

L_10B86:
    /* 00010b86   4  pea (00000096).l */
    c->pc = 0x00010b86u;
    rc_push32(c, m, 0x00000096u);

L_10B8A:
    /* 00010b8a   4  jsr (ffff8302,A4) */
    c->pc = 0x00010b8au;
    /* vector 128 */
    rc_push32(c, m, 0x00010b8eu);
    rc_depth++;
    c->pc = 0x00021428u;
    return;

L_10B8E:
    /* 00010b8e   2  addq.w #4,A7 */
    c->pc = 0x00010b8eu;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_10B90:
    /* 00010b90   4  tst.w (fffffec8,A4) */
    c->pc = 0x00010b90u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x138u));
    rc_set_nzvc(c, t0, RC_W);

L_10B94:
    /* 00010b94   2  beq 00010b9e */
    c->pc = 0x00010b94u;
    if (rc_cond(c, 7)) goto L_10B9E;

L_10B96:
    /* 00010b96   6  move.w #1,(ffff9312,A4) */
    c->pc = 0x00010b96u;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x6ceeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_10B9C:
    /* 00010b9c   2  bra 00010ba4 */
    c->pc = 0x00010b9cu;
    goto L_10BA4;

L_10B9E:
    /* 00010b9e   6  move.w #2,(ffff9312,A4) */
    c->pc = 0x00010b9eu;
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] - 0x6ceeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_10BA4:
    /* 00010ba4   4  jsr (ffff80f2,A4) */
    c->pc = 0x00010ba4u;
    /* vector 40 */
    rc_push32(c, m, 0x00010ba8u);
    rc_depth++;
    c->pc = 0x0000a4d6u;
    return;

L_10BA8:
    /* 00010ba8   4  tst.w (73e,A4) */
    c->pc = 0x00010ba8u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x73eu));
    rc_set_nzvc(c, t0, RC_W);

L_10BAC:
    /* 00010bac   2  beq 00010bb2 */
    c->pc = 0x00010bacu;
    if (rc_cond(c, 7)) goto L_10BB2;

L_10BAE:
    /* 00010bae   4  bra 00010b06 */
    c->pc = 0x00010baeu;
    rc_tick();
    goto L_10B06;

L_10BB2:
    /* 00010bb2   2  clr.w -(A7) */
    c->pc = 0x00010bb2u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_10BB4:
    /* 00010bb4   4  jsr (ffff8044,A4) */
    c->pc = 0x00010bb4u;
    /* vector 11 */
    rc_push32(c, m, 0x00010bb8u);
    rc_depth++;
    c->pc = 0x00002c92u;
    return;

L_10BB8:
    /* 00010bb8   2  addq.w #2,A7 */
    c->pc = 0x00010bb8u;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_10BBA:
    /* 00010bba   4  bra 00010b06 */
    c->pc = 0x00010bbau;
    rc_tick();
    goto L_10B06;

}
