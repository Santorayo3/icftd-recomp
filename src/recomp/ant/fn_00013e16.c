/* fn_00013e16 - 1006 byte(s), 299 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00013e16(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00013e16u): goto L_13E16;
    case RC_ADDR(0x00013e1au): goto L_13E1A;
    case RC_ADDR(0x00013e1eu): goto L_13E1E;
    case RC_ADDR(0x00013e22u): goto L_13E22;
    case RC_ADDR(0x00013e26u): goto L_13E26;
    case RC_ADDR(0x00013e28u): goto L_13E28;
    case RC_ADDR(0x00013e2au): goto L_13E2A;
    case RC_ADDR(0x00013e2eu): goto L_13E2E;
    case RC_ADDR(0x00013e34u): goto L_13E34;
    case RC_ADDR(0x00013e38u): goto L_13E38;
    case RC_ADDR(0x00013e3eu): goto L_13E3E;
    case RC_ADDR(0x00013e42u): goto L_13E42;
    case RC_ADDR(0x00013e44u): goto L_13E44;
    case RC_ADDR(0x00013e46u): goto L_13E46;
    case RC_ADDR(0x00013e4au): goto L_13E4A;
    case RC_ADDR(0x00013e4eu): goto L_13E4E;
    case RC_ADDR(0x00013e52u): goto L_13E52;
    case RC_ADDR(0x00013e56u): goto L_13E56;
    case RC_ADDR(0x00013e58u): goto L_13E58;
    case RC_ADDR(0x00013e5au): goto L_13E5A;
    case RC_ADDR(0x00013e5eu): goto L_13E5E;
    case RC_ADDR(0x00013e64u): goto L_13E64;
    case RC_ADDR(0x00013e68u): goto L_13E68;
    case RC_ADDR(0x00013e6au): goto L_13E6A;
    case RC_ADDR(0x00013e6cu): goto L_13E6C;
    case RC_ADDR(0x00013e70u): goto L_13E70;
    case RC_ADDR(0x00013e76u): goto L_13E76;
    case RC_ADDR(0x00013e7au): goto L_13E7A;
    case RC_ADDR(0x00013e7eu): goto L_13E7E;
    case RC_ADDR(0x00013e80u): goto L_13E80;
    case RC_ADDR(0x00013e82u): goto L_13E82;
    case RC_ADDR(0x00013e86u): goto L_13E86;
    case RC_ADDR(0x00013e8au): goto L_13E8A;
    case RC_ADDR(0x00013e8cu): goto L_13E8C;
    case RC_ADDR(0x00013e8eu): goto L_13E8E;
    case RC_ADDR(0x00013e90u): goto L_13E90;
    case RC_ADDR(0x00013e94u): goto L_13E94;
    case RC_ADDR(0x00013e9au): goto L_13E9A;
    case RC_ADDR(0x00013e9eu): goto L_13E9E;
    case RC_ADDR(0x00013ea0u): goto L_13EA0;
    case RC_ADDR(0x00013ea2u): goto L_13EA2;
    case RC_ADDR(0x00013ea6u): goto L_13EA6;
    case RC_ADDR(0x00013eaau): goto L_13EAA;
    case RC_ADDR(0x00013eacu): goto L_13EAC;
    case RC_ADDR(0x00013eb0u): goto L_13EB0;
    case RC_ADDR(0x00013eb2u): goto L_13EB2;
    case RC_ADDR(0x00013eb4u): goto L_13EB4;
    case RC_ADDR(0x00013eb8u): goto L_13EB8;
    case RC_ADDR(0x00013ebcu): goto L_13EBC;
    case RC_ADDR(0x00013ebeu): goto L_13EBE;
    case RC_ADDR(0x00013ec2u): goto L_13EC2;
    case RC_ADDR(0x00013ec6u): goto L_13EC6;
    case RC_ADDR(0x00013ec8u): goto L_13EC8;
    case RC_ADDR(0x00013eccu): goto L_13ECC;
    case RC_ADDR(0x00013ed0u): goto L_13ED0;
    case RC_ADDR(0x00013ed6u): goto L_13ED6;
    case RC_ADDR(0x00013ed8u): goto L_13ED8;
    case RC_ADDR(0x00013edcu): goto L_13EDC;
    case RC_ADDR(0x00013ee0u): goto L_13EE0;
    case RC_ADDR(0x00013ee2u): goto L_13EE2;
    case RC_ADDR(0x00013ee6u): goto L_13EE6;
    case RC_ADDR(0x00013eeau): goto L_13EEA;
    case RC_ADDR(0x00013eecu): goto L_13EEC;
    case RC_ADDR(0x00013ef0u): goto L_13EF0;
    case RC_ADDR(0x00013ef2u): goto L_13EF2;
    case RC_ADDR(0x00013ef4u): goto L_13EF4;
    case RC_ADDR(0x00013ef8u): goto L_13EF8;
    case RC_ADDR(0x00013efcu): goto L_13EFC;
    case RC_ADDR(0x00013f00u): goto L_13F00;
    case RC_ADDR(0x00013f02u): goto L_13F02;
    case RC_ADDR(0x00013f06u): goto L_13F06;
    case RC_ADDR(0x00013f0au): goto L_13F0A;
    case RC_ADDR(0x00013f0eu): goto L_13F0E;
    case RC_ADDR(0x00013f10u): goto L_13F10;
    case RC_ADDR(0x00013f14u): goto L_13F14;
    case RC_ADDR(0x00013f16u): goto L_13F16;
    case RC_ADDR(0x00013f18u): goto L_13F18;
    case RC_ADDR(0x00013f1cu): goto L_13F1C;
    case RC_ADDR(0x00013f20u): goto L_13F20;
    case RC_ADDR(0x00013f22u): goto L_13F22;
    case RC_ADDR(0x00013f24u): goto L_13F24;
    case RC_ADDR(0x00013f28u): goto L_13F28;
    case RC_ADDR(0x00013f2eu): goto L_13F2E;
    case RC_ADDR(0x00013f32u): goto L_13F32;
    case RC_ADDR(0x00013f34u): goto L_13F34;
    case RC_ADDR(0x00013f38u): goto L_13F38;
    case RC_ADDR(0x00013f3cu): goto L_13F3C;
    case RC_ADDR(0x00013f40u): goto L_13F40;
    case RC_ADDR(0x00013f46u): goto L_13F46;
    case RC_ADDR(0x00013f4au): goto L_13F4A;
    case RC_ADDR(0x00013f4cu): goto L_13F4C;
    case RC_ADDR(0x00013f50u): goto L_13F50;
    case RC_ADDR(0x00013f54u): goto L_13F54;
    case RC_ADDR(0x00013f58u): goto L_13F58;
    case RC_ADDR(0x00013f5au): goto L_13F5A;
    case RC_ADDR(0x00013f5eu): goto L_13F5E;
    case RC_ADDR(0x00013f62u): goto L_13F62;
    case RC_ADDR(0x00013f66u): goto L_13F66;
    case RC_ADDR(0x00013f68u): goto L_13F68;
    case RC_ADDR(0x00013f6au): goto L_13F6A;
    case RC_ADDR(0x00013f6eu): goto L_13F6E;
    case RC_ADDR(0x00013f72u): goto L_13F72;
    case RC_ADDR(0x00013f76u): goto L_13F76;
    case RC_ADDR(0x00013f7au): goto L_13F7A;
    case RC_ADDR(0x00013f7eu): goto L_13F7E;
    case RC_ADDR(0x00013f82u): goto L_13F82;
    case RC_ADDR(0x00013f84u): goto L_13F84;
    case RC_ADDR(0x00013f86u): goto L_13F86;
    case RC_ADDR(0x00013f8au): goto L_13F8A;
    case RC_ADDR(0x00013f8eu): goto L_13F8E;
    case RC_ADDR(0x00013f92u): goto L_13F92;
    case RC_ADDR(0x00013f96u): goto L_13F96;
    case RC_ADDR(0x00013f9au): goto L_13F9A;
    case RC_ADDR(0x00013f9eu): goto L_13F9E;
    case RC_ADDR(0x00013fa2u): goto L_13FA2;
    case RC_ADDR(0x00013fa6u): goto L_13FA6;
    case RC_ADDR(0x00013faau): goto L_13FAA;
    case RC_ADDR(0x00013facu): goto L_13FAC;
    case RC_ADDR(0x00013fb0u): goto L_13FB0;
    case RC_ADDR(0x00013fb2u): goto L_13FB2;
    case RC_ADDR(0x00013fb4u): goto L_13FB4;
    case RC_ADDR(0x00013fb8u): goto L_13FB8;
    case RC_ADDR(0x00013fbeu): goto L_13FBE;
    case RC_ADDR(0x00013fc0u): goto L_13FC0;
    case RC_ADDR(0x00013fc4u): goto L_13FC4;
    case RC_ADDR(0x00013fc6u): goto L_13FC6;
    case RC_ADDR(0x00013fcau): goto L_13FCA;
    case RC_ADDR(0x00013fceu): goto L_13FCE;
    case RC_ADDR(0x00013fd2u): goto L_13FD2;
    case RC_ADDR(0x00013fd6u): goto L_13FD6;
    case RC_ADDR(0x00013fd8u): goto L_13FD8;
    case RC_ADDR(0x00013fdau): goto L_13FDA;
    case RC_ADDR(0x00013fdeu): goto L_13FDE;
    case RC_ADDR(0x00013fe2u): goto L_13FE2;
    case RC_ADDR(0x00013fe6u): goto L_13FE6;
    case RC_ADDR(0x00013feau): goto L_13FEA;
    case RC_ADDR(0x00013fecu): goto L_13FEC;
    case RC_ADDR(0x00013feeu): goto L_13FEE;
    case RC_ADDR(0x00013ff2u): goto L_13FF2;
    case RC_ADDR(0x00013ff6u): goto L_13FF6;
    case RC_ADDR(0x00013ffau): goto L_13FFA;
    case RC_ADDR(0x00013ffeu): goto L_13FFE;
    case RC_ADDR(0x00014000u): goto L_14000;
    case RC_ADDR(0x00014002u): goto L_14002;
    case RC_ADDR(0x00014006u): goto L_14006;
    case RC_ADDR(0x0001400au): goto L_1400A;
    case RC_ADDR(0x0001400eu): goto L_1400E;
    case RC_ADDR(0x00014012u): goto L_14012;
    case RC_ADDR(0x00014014u): goto L_14014;
    case RC_ADDR(0x00014016u): goto L_14016;
    case RC_ADDR(0x0001401cu): goto L_1401C;
    case RC_ADDR(0x00014022u): goto L_14022;
    case RC_ADDR(0x00014026u): goto L_14026;
    case RC_ADDR(0x00014028u): goto L_14028;
    case RC_ADDR(0x0001402au): goto L_1402A;
    case RC_ADDR(0x0001402eu): goto L_1402E;
    case RC_ADDR(0x00014034u): goto L_14034;
    case RC_ADDR(0x00014036u): goto L_14036;
    case RC_ADDR(0x00014038u): goto L_14038;
    case RC_ADDR(0x0001403cu): goto L_1403C;
    case RC_ADDR(0x0001403eu): goto L_1403E;
    case RC_ADDR(0x00014040u): goto L_14040;
    case RC_ADDR(0x00014044u): goto L_14044;
    case RC_ADDR(0x00014048u): goto L_14048;
    case RC_ADDR(0x0001404cu): goto L_1404C;
    case RC_ADDR(0x0001404eu): goto L_1404E;
    case RC_ADDR(0x00014050u): goto L_14050;
    case RC_ADDR(0x00014054u): goto L_14054;
    case RC_ADDR(0x00014058u): goto L_14058;
    case RC_ADDR(0x0001405cu): goto L_1405C;
    case RC_ADDR(0x0001405eu): goto L_1405E;
    case RC_ADDR(0x00014060u): goto L_14060;
    case RC_ADDR(0x00014064u): goto L_14064;
    case RC_ADDR(0x00014068u): goto L_14068;
    case RC_ADDR(0x0001406cu): goto L_1406C;
    case RC_ADDR(0x0001406eu): goto L_1406E;
    case RC_ADDR(0x00014070u): goto L_14070;
    case RC_ADDR(0x00014074u): goto L_14074;
    case RC_ADDR(0x00014078u): goto L_14078;
    case RC_ADDR(0x0001407cu): goto L_1407C;
    case RC_ADDR(0x00014080u): goto L_14080;
    case RC_ADDR(0x00014084u): goto L_14084;
    case RC_ADDR(0x00014086u): goto L_14086;
    case RC_ADDR(0x00014088u): goto L_14088;
    case RC_ADDR(0x0001408cu): goto L_1408C;
    case RC_ADDR(0x0001408eu): goto L_1408E;
    case RC_ADDR(0x00014092u): goto L_14092;
    case RC_ADDR(0x00014094u): goto L_14094;
    case RC_ADDR(0x00014096u): goto L_14096;
    case RC_ADDR(0x0001409au): goto L_1409A;
    case RC_ADDR(0x0001409eu): goto L_1409E;
    case RC_ADDR(0x000140a0u): goto L_140A0;
    case RC_ADDR(0x000140a4u): goto L_140A4;
    case RC_ADDR(0x000140a6u): goto L_140A6;
    case RC_ADDR(0x000140a8u): goto L_140A8;
    case RC_ADDR(0x000140acu): goto L_140AC;
    case RC_ADDR(0x000140b0u): goto L_140B0;
    case RC_ADDR(0x000140b4u): goto L_140B4;
    case RC_ADDR(0x000140b8u): goto L_140B8;
    case RC_ADDR(0x000140bcu): goto L_140BC;
    case RC_ADDR(0x000140beu): goto L_140BE;
    case RC_ADDR(0x000140c0u): goto L_140C0;
    case RC_ADDR(0x000140c4u): goto L_140C4;
    case RC_ADDR(0x000140cau): goto L_140CA;
    case RC_ADDR(0x000140ceu): goto L_140CE;
    case RC_ADDR(0x000140d0u): goto L_140D0;
    case RC_ADDR(0x000140d2u): goto L_140D2;
    case RC_ADDR(0x000140d6u): goto L_140D6;
    case RC_ADDR(0x000140dcu): goto L_140DC;
    case RC_ADDR(0x000140e0u): goto L_140E0;
    case RC_ADDR(0x000140e4u): goto L_140E4;
    case RC_ADDR(0x000140e6u): goto L_140E6;
    case RC_ADDR(0x000140e8u): goto L_140E8;
    case RC_ADDR(0x000140ecu): goto L_140EC;
    case RC_ADDR(0x000140f0u): goto L_140F0;
    case RC_ADDR(0x000140f4u): goto L_140F4;
    case RC_ADDR(0x000140f6u): goto L_140F6;
    case RC_ADDR(0x000140f8u): goto L_140F8;
    case RC_ADDR(0x000140fcu): goto L_140FC;
    case RC_ADDR(0x00014100u): goto L_14100;
    case RC_ADDR(0x00014104u): goto L_14104;
    case RC_ADDR(0x00014106u): goto L_14106;
    case RC_ADDR(0x0001410au): goto L_1410A;
    case RC_ADDR(0x0001410cu): goto L_1410C;
    case RC_ADDR(0x00014110u): goto L_14110;
    case RC_ADDR(0x00014114u): goto L_14114;
    case RC_ADDR(0x00014116u): goto L_14116;
    case RC_ADDR(0x00014118u): goto L_14118;
    case RC_ADDR(0x0001411cu): goto L_1411C;
    case RC_ADDR(0x00014120u): goto L_14120;
    case RC_ADDR(0x00014124u): goto L_14124;
    case RC_ADDR(0x00014126u): goto L_14126;
    case RC_ADDR(0x0001412au): goto L_1412A;
    case RC_ADDR(0x0001412cu): goto L_1412C;
    case RC_ADDR(0x0001412eu): goto L_1412E;
    case RC_ADDR(0x00014132u): goto L_14132;
    case RC_ADDR(0x00014136u): goto L_14136;
    case RC_ADDR(0x0001413au): goto L_1413A;
    case RC_ADDR(0x0001413cu): goto L_1413C;
    case RC_ADDR(0x00014140u): goto L_14140;
    case RC_ADDR(0x00014142u): goto L_14142;
    case RC_ADDR(0x00014146u): goto L_14146;
    case RC_ADDR(0x0001414au): goto L_1414A;
    case RC_ADDR(0x0001414cu): goto L_1414C;
    case RC_ADDR(0x0001414eu): goto L_1414E;
    case RC_ADDR(0x00014152u): goto L_14152;
    case RC_ADDR(0x00014156u): goto L_14156;
    case RC_ADDR(0x0001415au): goto L_1415A;
    case RC_ADDR(0x0001415cu): goto L_1415C;
    case RC_ADDR(0x00014160u): goto L_14160;
    case RC_ADDR(0x00014162u): goto L_14162;
    case RC_ADDR(0x00014164u): goto L_14164;
    case RC_ADDR(0x00014168u): goto L_14168;
    case RC_ADDR(0x0001416cu): goto L_1416C;
    case RC_ADDR(0x00014170u): goto L_14170;
    case RC_ADDR(0x00014172u): goto L_14172;
    case RC_ADDR(0x00014176u): goto L_14176;
    case RC_ADDR(0x00014178u): goto L_14178;
    case RC_ADDR(0x0001417cu): goto L_1417C;
    case RC_ADDR(0x0001417eu): goto L_1417E;
    case RC_ADDR(0x00014180u): goto L_14180;
    case RC_ADDR(0x00014184u): goto L_14184;
    case RC_ADDR(0x0001418au): goto L_1418A;
    case RC_ADDR(0x0001418cu): goto L_1418C;
    case RC_ADDR(0x00014190u): goto L_14190;
    case RC_ADDR(0x00014192u): goto L_14192;
    case RC_ADDR(0x00014194u): goto L_14194;
    case RC_ADDR(0x00014198u): goto L_14198;
    case RC_ADDR(0x0001419eu): goto L_1419E;
    case RC_ADDR(0x000141a0u): goto L_141A0;
    case RC_ADDR(0x000141a4u): goto L_141A4;
    case RC_ADDR(0x000141a6u): goto L_141A6;
    case RC_ADDR(0x000141a8u): goto L_141A8;
    case RC_ADDR(0x000141acu): goto L_141AC;
    case RC_ADDR(0x000141b2u): goto L_141B2;
    case RC_ADDR(0x000141b4u): goto L_141B4;
    case RC_ADDR(0x000141b8u): goto L_141B8;
    case RC_ADDR(0x000141bau): goto L_141BA;
    case RC_ADDR(0x000141bcu): goto L_141BC;
    case RC_ADDR(0x000141c0u): goto L_141C0;
    case RC_ADDR(0x000141c6u): goto L_141C6;
    case RC_ADDR(0x000141c8u): goto L_141C8;
    case RC_ADDR(0x000141ccu): goto L_141CC;
    case RC_ADDR(0x000141ceu): goto L_141CE;
    case RC_ADDR(0x000141d0u): goto L_141D0;
    case RC_ADDR(0x000141d4u): goto L_141D4;
    case RC_ADDR(0x000141d8u): goto L_141D8;
    case RC_ADDR(0x000141dcu): goto L_141DC;
    case RC_ADDR(0x000141e2u): goto L_141E2;
    case RC_ADDR(0x000141e6u): goto L_141E6;
    case RC_ADDR(0x000141eau): goto L_141EA;
    case RC_ADDR(0x000141ecu): goto L_141EC;
    case RC_ADDR(0x000141f0u): goto L_141F0;
    case RC_ADDR(0x000141f4u): goto L_141F4;
    case RC_ADDR(0x000141f6u): goto L_141F6;
    case RC_ADDR(0x000141fau): goto L_141FA;
    case RC_ADDR(0x000141feu): goto L_141FE;
    case RC_ADDR(0x00014200u): goto L_14200;
    case RC_ADDR(0x00014202u): goto L_14202;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_13E16:
    /* 00013e16   4  link.w A5,#ffffffea */
    c->pc = RC_ADDR(0x00013e16u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x16u;

L_13E1A:
    /* 00013e1a   4  clr.w (1a7e,A4) */
    c->pc = RC_ADDR(0x00013e1au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1a7eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13E1E:
    /* 00013e1e   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00013e1eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13E22:
    /* 00013e22   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00013e22u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13E26:
    /* 00013e26   2  ext.l D0 */
    c->pc = RC_ADDR(0x00013e26u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_13E28:
    /* 00013e28   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00013e28u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_13E2A:
    /* 00013e2a   4  lea (1914,A4),A0 */
    c->pc = RC_ADDR(0x00013e2au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1914u);

L_13E2E:
    /* 00013e2e   6  cmpi.w #ffff,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00013e2eu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_13E34:
    /* 00013e34   4  ble 000141d8 */
    c->pc = RC_ADDR(0x00013e34u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_141D8;

L_13E38:
    /* 00013e38   6  move.w #1,(1a7e,A4) */
    c->pc = RC_ADDR(0x00013e38u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1a7eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13E3E:
    /* 00013e3e   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00013e3eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13E42:
    /* 00013e42   2  ext.l D0 */
    c->pc = RC_ADDR(0x00013e42u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_13E44:
    /* 00013e44   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00013e44u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_13E46:
    /* 00013e46   4  lea (198c,A4),A0 */
    c->pc = RC_ADDR(0x00013e46u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x198cu);

L_13E4A:
    /* 00013e4a   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00013e4au);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_13E4E:
    /* 00013e4e   4  bne 000141c8 */
    c->pc = RC_ADDR(0x00013e4eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_141C8;

L_13E52:
    /* 00013e52   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00013e52u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13E56:
    /* 00013e56   2  ext.l D0 */
    c->pc = RC_ADDR(0x00013e56u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_13E58:
    /* 00013e58   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00013e58u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_13E5A:
    /* 00013e5a   4  lea (1950,A4),A0 */
    c->pc = RC_ADDR(0x00013e5au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1950u);

L_13E5E:
    /* 00013e5e   6  move.w (0,A0,D0.w),(fffffffa,A5) */
    c->pc = RC_ADDR(0x00013e5eu);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13E64:
    /* 00013e64   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00013e64u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13E68:
    /* 00013e68   2  ext.l D0 */
    c->pc = RC_ADDR(0x00013e68u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_13E6A:
    /* 00013e6a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00013e6au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_13E6C:
    /* 00013e6c   4  lea (19c8,A4),A0 */
    c->pc = RC_ADDR(0x00013e6cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x19c8u);

L_13E70:
    /* 00013e70   6  cmpi.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00013e70u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_13E76:
    /* 00013e76   4  bne 00013f10 */
    c->pc = RC_ADDR(0x00013e76u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_13F10;

L_13E7A:
    /* 00013e7a   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00013e7au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13E7E:
    /* 00013e7e   2  ext.l D0 */
    c->pc = RC_ADDR(0x00013e7eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_13E80:
    /* 00013e80   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00013e80u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_13E82:
    /* 00013e82   4  lea (1914,A4),A0 */
    c->pc = RC_ADDR(0x00013e82u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1914u);

L_13E86:
    /* 00013e86   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00013e86u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13E8A:
    /* 00013e8a   2  addq.w #1,D1 */
    c->pc = RC_ADDR(0x00013e8au);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_13E8C:
    /* 00013e8c   2  ext.l D1 */
    c->pc = RC_ADDR(0x00013e8cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_13E8E:
    /* 00013e8e   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x00013e8eu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_13E90:
    /* 00013e90   4  lea (1848,A4),A0 */
    c->pc = RC_ADDR(0x00013e90u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1848u);

L_13E94:
    /* 00013e94   6  move.l (0,A0,D1.w),(ffffffea,A5) */
    c->pc = RC_ADDR(0x00013e94u);
    rc_step(c, m, 30);
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[5] - 0x16u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_13E9A:
    /* 00013e9a   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00013e9au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13E9E:
    /* 00013e9e   2  ext.l D0 */
    c->pc = RC_ADDR(0x00013e9eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_13EA0:
    /* 00013ea0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00013ea0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_13EA2:
    /* 00013ea2   4  lea (1914,A4),A0 */
    c->pc = RC_ADDR(0x00013ea2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1914u);

L_13EA6:
    /* 00013ea6   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00013ea6u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_13EAA:
    /* 00013eaa   2  bne 00013f0e */
    c->pc = RC_ADDR(0x00013eaau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_13F0E;

L_13EAC:
    /* 00013eac   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00013eacu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13EB0:
    /* 00013eb0   2  ext.l D0 */
    c->pc = RC_ADDR(0x00013eb0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_13EB2:
    /* 00013eb2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00013eb2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_13EB4:
    /* 00013eb4   4  lea (18d8,A4),A0 */
    c->pc = RC_ADDR(0x00013eb4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x18d8u);

L_13EB8:
    /* 00013eb8   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00013eb8u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_13EBC:
    /* 00013ebc   2  ble 00013f0e */
    c->pc = RC_ADDR(0x00013ebcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_13F0E;

L_13EBE:
    /* 00013ebe   4  pea (00000001).l */
    c->pc = RC_ADDR(0x00013ebeu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000001u);

L_13EC2:
    /* 00013ec2   4  jsr (ffff8140,A4) */
    c->pc = RC_ADDR(0x00013ec2u);
    rc_step(c, m, 18);
    /* vector 53 */
    rc_push32(c, m, RC_ADDR(0x00013ec6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c36u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00010812u);
    return;

L_13EC6:
    /* 00013ec6   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00013ec6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_13EC8:
    /* 00013ec8   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x00013ec8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13ECC:
    /* 00013ecc   4  addq.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00013eccu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_13ED0:
    /* 00013ed0   6  cmpi.w #64,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00013ed0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_W, t0, 0x00000064u);

L_13ED6:
    /* 00013ed6   2  blt 00013ecc */
    c->pc = RC_ADDR(0x00013ed6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_13ECC; }

L_13ED8:
    /* 00013ed8   4  move.w #3f,-(A7) */
    c->pc = RC_ADDR(0x00013ed8u);
    rc_step(c, m, 12);
    t0 = 0x0000003fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_13EDC:
    /* 00013edc   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00013edcu);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_13EE0:
    /* 00013ee0   2  moveq #4,D0 */
    c->pc = RC_ADDR(0x00013ee0u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000004u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_13EE2:
    /* 00013ee2   4  sub.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00013ee2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_13EE6:
    /* 00013ee6   4  muls.w #3e8,D0 */
    c->pc = RC_ADDR(0x00013ee6u);
    rc_step(c, m, 42);
    t0 = 0x000003e8u;
    rc_muls(c, 0, t0);

L_13EEA:
    /* 00013eea   2  ext.l D0 */
    c->pc = RC_ADDR(0x00013eeau);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_13EEC:
    /* 00013eec   4  move.l (cde,A4),D1 */
    c->pc = RC_ADDR(0x00013eecu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0xcdeu));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_13EF0:
    /* 00013ef0   2  sub.l D0,D1 */
    c->pc = RC_ADDR(0x00013ef0u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_13EF2:
    /* 00013ef2   2  move.l D1,-(A7) */
    c->pc = RC_ADDR(0x00013ef2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_13EF4:
    /* 00013ef4   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00013ef4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13EF8:
    /* 00013ef8   4  muls.w #64,D0 */
    c->pc = RC_ADDR(0x00013ef8u);
    rc_step(c, m, 42);
    t0 = 0x00000064u;
    rc_muls(c, 0, t0);

L_13EFC:
    /* 00013efc   4  add.w #12c,D0 */
    c->pc = RC_ADDR(0x00013efcu);
    rc_step(c, m, 10);
    t0 = 0x0000012cu;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_13F00:
    /* 00013f00   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00013f00u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_13F02:
    /* 00013f02   4  move.l (ffffb370,A4),-(A7) */
    c->pc = RC_ADDR(0x00013f02u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x4c90u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_13F06:
    /* 00013f06   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x00013f06u);
    rc_step(c, m, 18);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x00013f0au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af2cu);
    return;

L_13F0A:
    /* 00013f0a   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00013f0au);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_13F0E:
    /* 00013f0e   2  bra 00013f2e */
    c->pc = RC_ADDR(0x00013f0eu);
    rc_step(c, m, 10);
    goto L_13F2E;

L_13F10:
    /* 00013f10   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00013f10u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13F14:
    /* 00013f14   2  ext.l D0 */
    c->pc = RC_ADDR(0x00013f14u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_13F16:
    /* 00013f16   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00013f16u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_13F18:
    /* 00013f18   4  lea (1914,A4),A0 */
    c->pc = RC_ADDR(0x00013f18u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1914u);

L_13F1C:
    /* 00013f1c   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00013f1cu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13F20:
    /* 00013f20   2  ext.l D1 */
    c->pc = RC_ADDR(0x00013f20u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_13F22:
    /* 00013f22   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x00013f22u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_13F24:
    /* 00013f24   4  lea (1a82,A4),A0 */
    c->pc = RC_ADDR(0x00013f24u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1a82u);

L_13F28:
    /* 00013f28   6  move.l (0,A0,D1.w),(ffffffea,A5) */
    c->pc = RC_ADDR(0x00013f28u);
    rc_step(c, m, 30);
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[5] - 0x16u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_13F2E:
    /* 00013f2e   4  movea.l (ffffffea,A5),A0 */
    c->pc = RC_ADDR(0x00013f2eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x16u));
    c->a[0] = t0;

L_13F32:
    /* 00013f32   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00013f32u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_13F34:
    /* 00013f34   4  move.b (4,A0),D0 */
    c->pc = RC_ADDR(0x00013f34u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x4u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_13F38:
    /* 00013f38   4  move.w D0,(fffffff0,A5) */
    c->pc = RC_ADDR(0x00013f38u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13F3C:
    /* 00013f3c   4  movea.l (ffffffea,A5),A0 */
    c->pc = RC_ADDR(0x00013f3cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x16u));
    c->a[0] = t0;

L_13F40:
    /* 00013f40   6  move.w (2,A0),(ffffffee,A5) */
    c->pc = RC_ADDR(0x00013f40u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13F46:
    /* 00013f46   4  move.w (fffffff0,A5),D0 */
    c->pc = RC_ADDR(0x00013f46u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13F4A:
    /* 00013f4a   2  ext.l D0 */
    c->pc = RC_ADDR(0x00013f4au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_13F4C:
    /* 00013f4c   4  divs.w #2,D0 */
    c->pc = RC_ADDR(0x00013f4cu);
    rc_step(c, m, 162);
    t0 = 0x00000002u;
    rc_divs(c, m, 0, t0);

L_13F50:
    /* 00013f50   4  move.w D0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x00013f50u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13F54:
    /* 00013f54   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x00013f54u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13F58:
    /* 00013f58   2  ext.l D0 */
    c->pc = RC_ADDR(0x00013f58u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_13F5A:
    /* 00013f5a   4  divs.w #2,D0 */
    c->pc = RC_ADDR(0x00013f5au);
    rc_step(c, m, 162);
    t0 = 0x00000002u;
    rc_divs(c, m, 0, t0);

L_13F5E:
    /* 00013f5e   4  move.w D0,(fffffff2,A5) */
    c->pc = RC_ADDR(0x00013f5eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13F62:
    /* 00013f62   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00013f62u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13F66:
    /* 00013f66   2  ext.l D0 */
    c->pc = RC_ADDR(0x00013f66u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_13F68:
    /* 00013f68   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00013f68u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_13F6A:
    /* 00013f6a   4  lea (1860,A4),A0 */
    c->pc = RC_ADDR(0x00013f6au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1860u);

L_13F6E:
    /* 00013f6e   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00013f6eu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13F72:
    /* 00013f72   4  sub.w (fffffff4,A5),D1 */
    c->pc = RC_ADDR(0x00013f72u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_13F76:
    /* 00013f76   4  sub.w (17f4,A4),D1 */
    c->pc = RC_ADDR(0x00013f76u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17f4u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_13F7A:
    /* 00013f7a   4  move.w D1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00013f7au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13F7E:
    /* 00013f7e   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00013f7eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13F82:
    /* 00013f82   2  ext.l D0 */
    c->pc = RC_ADDR(0x00013f82u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_13F84:
    /* 00013f84   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00013f84u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_13F86:
    /* 00013f86   4  lea (189c,A4),A0 */
    c->pc = RC_ADDR(0x00013f86u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x189cu);

L_13F8A:
    /* 00013f8a   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00013f8au);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13F8E:
    /* 00013f8e   4  sub.w (fffffff2,A5),D1 */
    c->pc = RC_ADDR(0x00013f8eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_13F92:
    /* 00013f92   4  sub.w (17f6,A4),D1 */
    c->pc = RC_ADDR(0x00013f92u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17f6u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_13F96:
    /* 00013f96   4  move.w D1,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00013f96u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13F9A:
    /* 00013f9a   4  move.l (ffffffea,A5),-(A7) */
    c->pc = RC_ADDR(0x00013f9au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x16u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_13F9E:
    /* 00013f9e   4  move.w (fffffff6,A5),-(A7) */
    c->pc = RC_ADDR(0x00013f9eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_13FA2:
    /* 00013fa2   4  move.w (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x00013fa2u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_13FA6:
    /* 00013fa6   4  jsr (ffff8176,A4) */
    c->pc = RC_ADDR(0x00013fa6u);
    rc_step(c, m, 18);
    /* vector 62 */
    rc_push32(c, m, RC_ADDR(0x00013faau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c6cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00012a5eu);
    return;

L_13FAA:
    /* 00013faa   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00013faau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_13FAC:
    /* 00013fac   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00013facu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13FB0:
    /* 00013fb0   2  ext.l D0 */
    c->pc = RC_ADDR(0x00013fb0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_13FB2:
    /* 00013fb2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00013fb2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_13FB4:
    /* 00013fb4   4  lea (19c8,A4),A0 */
    c->pc = RC_ADDR(0x00013fb4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x19c8u);

L_13FB8:
    /* 00013fb8   6  cmpi.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00013fb8u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_13FBE:
    /* 00013fbe   2  bne 00014022 */
    c->pc = RC_ADDR(0x00013fbeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_14022;

L_13FC0:
    /* 00013fc0   4  tst.w (1ab2,A4) */
    c->pc = RC_ADDR(0x00013fc0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ab2u));
    rc_set_nzvc(c, t0, RC_W);

L_13FC4:
    /* 00013fc4   2  bne 00014022 */
    c->pc = RC_ADDR(0x00013fc4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_14022;

L_13FC6:
    /* 00013fc6   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x00013fc6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13FCA:
    /* 00013fca   4  add.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x00013fcau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_13FCE:
    /* 00013fce   4  move.w (6fc,A4),D1 */
    c->pc = RC_ADDR(0x00013fceu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6fcu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13FD2:
    /* 00013fd2   4  sub.w (fffffff4,A5),D1 */
    c->pc = RC_ADDR(0x00013fd2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_13FD6:
    /* 00013fd6   2  cmp.w D1,D0 */
    c->pc = RC_ADDR(0x00013fd6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_13FD8:
    /* 00013fd8   2  ble 00014022 */
    c->pc = RC_ADDR(0x00013fd8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_14022;

L_13FDA:
    /* 00013fda   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x00013fdau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13FDE:
    /* 00013fde   4  add.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x00013fdeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_13FE2:
    /* 00013fe2   4  move.w (6fc,A4),D1 */
    c->pc = RC_ADDR(0x00013fe2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6fcu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13FE6:
    /* 00013fe6   4  add.w (fffffff4,A5),D1 */
    c->pc = RC_ADDR(0x00013fe6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_13FEA:
    /* 00013fea   2  cmp.w D1,D0 */
    c->pc = RC_ADDR(0x00013feau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_13FEC:
    /* 00013fec   2  bge 00014022 */
    c->pc = RC_ADDR(0x00013fecu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_14022;

L_13FEE:
    /* 00013fee   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00013feeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13FF2:
    /* 00013ff2   4  add.w (fffffff2,A5),D0 */
    c->pc = RC_ADDR(0x00013ff2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_13FF6:
    /* 00013ff6   4  move.w (6fe,A4),D1 */
    c->pc = RC_ADDR(0x00013ff6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6feu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13FFA:
    /* 00013ffa   4  sub.w (fffffff2,A5),D1 */
    c->pc = RC_ADDR(0x00013ffau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_13FFE:
    /* 00013ffe   2  cmp.w D1,D0 */
    c->pc = RC_ADDR(0x00013ffeu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_14000:
    /* 00014000   2  ble 00014022 */
    c->pc = RC_ADDR(0x00014000u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_14022;

L_14002:
    /* 00014002   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00014002u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14006:
    /* 00014006   4  add.w (fffffff2,A5),D0 */
    c->pc = RC_ADDR(0x00014006u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1400A:
    /* 0001400a   4  move.w (6fe,A4),D1 */
    c->pc = RC_ADDR(0x0001400au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6feu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1400E:
    /* 0001400e   4  add.w (fffffff2,A5),D1 */
    c->pc = RC_ADDR(0x0001400eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_14012:
    /* 00014012   2  cmp.w D1,D0 */
    c->pc = RC_ADDR(0x00014012u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_14014:
    /* 00014014   2  bge 00014022 */
    c->pc = RC_ADDR(0x00014014u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_14022;

L_14016:
    /* 00014016   6  move.w #1,(14e8,A4) */
    c->pc = RC_ADDR(0x00014016u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x14e8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1401C:
    /* 0001401c   6  move.w #1,(1a80,A4) */
    c->pc = RC_ADDR(0x0001401cu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1a80u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14022:
    /* 00014022   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00014022u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14026:
    /* 00014026   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014026u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_14028:
    /* 00014028   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00014028u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1402A:
    /* 0001402a   4  lea (1914,A4),A0 */
    c->pc = RC_ADDR(0x0001402au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1914u);

L_1402E:
    /* 0001402e   6  cmpi.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001402eu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_14034:
    /* 00014034   2  ble 00014080 */
    c->pc = RC_ADDR(0x00014034u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_14080;

L_14036:
    /* 00014036   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00014036u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_14038:
    /* 00014038   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00014038u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1403C:
    /* 0001403c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001403cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1403E:
    /* 0001403e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001403eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_14040:
    /* 00014040   4  lea (1a40,A4),A0 */
    c->pc = RC_ADDR(0x00014040u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1a40u);

L_14044:
    /* 00014044   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00014044u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14048:
    /* 00014048   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00014048u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1404C:
    /* 0001404c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001404cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1404E:
    /* 0001404e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001404eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_14050:
    /* 00014050   4  lea (1a04,A4),A0 */
    c->pc = RC_ADDR(0x00014050u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1a04u);

L_14054:
    /* 00014054   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00014054u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14058:
    /* 00014058   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00014058u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1405C:
    /* 0001405c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001405cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1405E:
    /* 0001405e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001405eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_14060:
    /* 00014060   4  lea (189c,A4),A0 */
    c->pc = RC_ADDR(0x00014060u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x189cu);

L_14064:
    /* 00014064   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00014064u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14068:
    /* 00014068   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00014068u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1406C:
    /* 0001406c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001406cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1406E:
    /* 0001406e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001406eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_14070:
    /* 00014070   4  lea (1860,A4),A0 */
    c->pc = RC_ADDR(0x00014070u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1860u);

L_14074:
    /* 00014074   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00014074u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14078:
    /* 00014078   4  jsr (0001563a) */
    c->pc = RC_ADDR(0x00014078u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001407cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001563au);
    return;

L_1407C:
    /* 0001407c   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001407cu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_14080:
    /* 00014080   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00014080u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14084:
    /* 00014084   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014084u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_14086:
    /* 00014086   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00014086u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_14088:
    /* 00014088   4  lea (1914,A4),A0 */
    c->pc = RC_ADDR(0x00014088u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1914u);

L_1408C:
    /* 0001408c   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x0001408cu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_1408E:
    /* 0001408e   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001408eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14092:
    /* 00014092   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014092u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_14094:
    /* 00014094   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00014094u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_14096:
    /* 00014096   4  lea (18d8,A4),A1 */
    c->pc = RC_ADDR(0x00014096u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x18d8u);

L_1409A:
    /* 0001409a   4  move.w (0,A1,D0.w),D1 */
    c->pc = RC_ADDR(0x0001409au);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1409E:
    /* 0001409e   2  add.w D1,(A0) */
    c->pc = RC_ADDR(0x0001409eu);
    rc_step(c, m, 12);
    t3 = c->a[0];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 1, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_140A0:
    /* 000140a0   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000140a0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_140A4:
    /* 000140a4   2  ext.l D0 */
    c->pc = RC_ADDR(0x000140a4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_140A6:
    /* 000140a6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000140a6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_140A8:
    /* 000140a8   4  lea (1914,A4),A0 */
    c->pc = RC_ADDR(0x000140a8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1914u);

L_140AC:
    /* 000140ac   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x000140acu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_140B0:
    /* 000140b0   4  cmp.w (fffffffa,A5),D1 */
    c->pc = RC_ADDR(0x000140b0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_140B4:
    /* 000140b4   4  bne 00014178 */
    c->pc = RC_ADDR(0x000140b4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_14178;

L_140B8:
    /* 000140b8   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000140b8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_140BC:
    /* 000140bc   2  ext.l D0 */
    c->pc = RC_ADDR(0x000140bcu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_140BE:
    /* 000140be   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000140beu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_140C0:
    /* 000140c0   4  lea (18d8,A4),A0 */
    c->pc = RC_ADDR(0x000140c0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x18d8u);

L_140C4:
    /* 000140c4   6  move.w #ffff,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000140c4u);
    rc_step(c, m, 18);
    t0 = 0x0000ffffu;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_140CA:
    /* 000140ca   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000140cau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_140CE:
    /* 000140ce   2  ext.l D0 */
    c->pc = RC_ADDR(0x000140ceu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_140D0:
    /* 000140d0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000140d0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_140D2:
    /* 000140d2   4  lea (19c8,A4),A0 */
    c->pc = RC_ADDR(0x000140d2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x19c8u);

L_140D6:
    /* 000140d6   6  cmpi.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000140d6u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_140DC:
    /* 000140dc   4  bne 00014178 */
    c->pc = RC_ADDR(0x000140dcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_14178;

L_140E0:
    /* 000140e0   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000140e0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_140E4:
    /* 000140e4   2  ext.l D0 */
    c->pc = RC_ADDR(0x000140e4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_140E6:
    /* 000140e6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000140e6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_140E8:
    /* 000140e8   4  lea (189c,A4),A0 */
    c->pc = RC_ADDR(0x000140e8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x189cu);

L_140EC:
    /* 000140ec   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x000140ecu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_140F0:
    /* 000140f0   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000140f0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_140F4:
    /* 000140f4   2  ext.l D0 */
    c->pc = RC_ADDR(0x000140f4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_140F6:
    /* 000140f6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000140f6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_140F8:
    /* 000140f8   4  lea (1860,A4),A0 */
    c->pc = RC_ADDR(0x000140f8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1860u);

L_140FC:
    /* 000140fc   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x000140fcu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14100:
    /* 00014100   4  jsr (00017756) */
    c->pc = RC_ADDR(0x00014100u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00014104u));
    rc_depth++;
    c->pc = RC_ADDR(0x00017756u);
    return;

L_14104:
    /* 00014104   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00014104u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_14106:
    /* 00014106   4  btst #7,D0 */
    c->pc = RC_ADDR(0x00014106u);
    rc_step(c, m, 10);
    t4 = 0x00000007u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_1410A:
    /* 0001410a   2  beq 00014178 */
    c->pc = RC_ADDR(0x0001410au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_14178;

L_1410C:
    /* 0001410c   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0001410cu);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14110:
    /* 00014110   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00014110u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14114:
    /* 00014114   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014114u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_14116:
    /* 00014116   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00014116u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_14118:
    /* 00014118   4  lea (189c,A4),A0 */
    c->pc = RC_ADDR(0x00014118u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x189cu);

L_1411C:
    /* 0001411c   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001411cu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14120:
    /* 00014120   4  sub.w #a,D1 */
    c->pc = RC_ADDR(0x00014120u);
    rc_step(c, m, 10);
    t0 = 0x0000000au;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_14124:
    /* 00014124   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x00014124u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14126:
    /* 00014126   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00014126u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1412A:
    /* 0001412a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001412au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1412C:
    /* 0001412c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001412cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1412E:
    /* 0001412e   4  lea (1860,A4),A0 */
    c->pc = RC_ADDR(0x0001412eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1860u);

L_14132:
    /* 00014132   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00014132u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14136:
    /* 00014136   4  sub.w #10,D1 */
    c->pc = RC_ADDR(0x00014136u);
    rc_step(c, m, 10);
    t0 = 0x00000010u;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1413A:
    /* 0001413a   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0001413au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1413C:
    /* 0001413c   4  jsr (00017890) */
    c->pc = RC_ADDR(0x0001413cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00014140u));
    rc_depth++;
    c->pc = RC_ADDR(0x00017890u);
    return;

L_14140:
    /* 00014140   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00014140u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_14142:
    /* 00014142   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00014142u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14146:
    /* 00014146   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00014146u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1414A:
    /* 0001414a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001414au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1414C:
    /* 0001414c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001414cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1414E:
    /* 0001414e   4  lea (189c,A4),A0 */
    c->pc = RC_ADDR(0x0001414eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x189cu);

L_14152:
    /* 00014152   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00014152u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14156:
    /* 00014156   4  sub.w #a,D1 */
    c->pc = RC_ADDR(0x00014156u);
    rc_step(c, m, 10);
    t0 = 0x0000000au;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1415A:
    /* 0001415a   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0001415au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1415C:
    /* 0001415c   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001415cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14160:
    /* 00014160   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014160u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_14162:
    /* 00014162   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00014162u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_14164:
    /* 00014164   4  lea (1860,A4),A0 */
    c->pc = RC_ADDR(0x00014164u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1860u);

L_14168:
    /* 00014168   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00014168u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1416C:
    /* 0001416c   4  add.w #10,D1 */
    c->pc = RC_ADDR(0x0001416cu);
    rc_step(c, m, 10);
    t0 = 0x00000010u;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_14170:
    /* 00014170   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x00014170u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14172:
    /* 00014172   4  jsr (00017890) */
    c->pc = RC_ADDR(0x00014172u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00014176u));
    rc_depth++;
    c->pc = RC_ADDR(0x00017890u);
    return;

L_14176:
    /* 00014176   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00014176u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_14178:
    /* 00014178   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00014178u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1417C:
    /* 0001417c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001417cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1417E:
    /* 0001417e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001417eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_14180:
    /* 00014180   4  lea (19c8,A4),A0 */
    c->pc = RC_ADDR(0x00014180u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x19c8u);

L_14184:
    /* 00014184   6  cmpi.w #2,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00014184u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_1418A:
    /* 0001418a   2  bne 000141c6 */
    c->pc = RC_ADDR(0x0001418au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_141C6;

L_1418C:
    /* 0001418c   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001418cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14190:
    /* 00014190   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014190u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_14192:
    /* 00014192   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00014192u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_14194:
    /* 00014194   4  lea (18d8,A4),A0 */
    c->pc = RC_ADDR(0x00014194u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x18d8u);

L_14198:
    /* 00014198   6  cmpi.w #ffff,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00014198u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_1419E:
    /* 0001419e   2  bne 000141c6 */
    c->pc = RC_ADDR(0x0001419eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_141C6;

L_141A0:
    /* 000141a0   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000141a0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_141A4:
    /* 000141a4   2  ext.l D0 */
    c->pc = RC_ADDR(0x000141a4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_141A6:
    /* 000141a6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000141a6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_141A8:
    /* 000141a8   4  lea (1914,A4),A0 */
    c->pc = RC_ADDR(0x000141a8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1914u);

L_141AC:
    /* 000141ac   6  cmpi.w #3,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000141acu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_141B2:
    /* 000141b2   2  bne 000141c6 */
    c->pc = RC_ADDR(0x000141b2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_141C6;

L_141B4:
    /* 000141b4   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000141b4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_141B8:
    /* 000141b8   2  ext.l D0 */
    c->pc = RC_ADDR(0x000141b8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_141BA:
    /* 000141ba   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000141bau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_141BC:
    /* 000141bc   4  lea (1914,A4),A0 */
    c->pc = RC_ADDR(0x000141bcu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1914u);

L_141C0:
    /* 000141c0   6  move.w #ffff,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000141c0u);
    rc_step(c, m, 18);
    t0 = 0x0000ffffu;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_141C6:
    /* 000141c6   2  bra 000141d8 */
    c->pc = RC_ADDR(0x000141c6u);
    rc_step(c, m, 10);
    goto L_141D8;

L_141C8:
    /* 000141c8   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000141c8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_141CC:
    /* 000141cc   2  ext.l D0 */
    c->pc = RC_ADDR(0x000141ccu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_141CE:
    /* 000141ce   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000141ceu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_141D0:
    /* 000141d0   4  lea (198c,A4),A0 */
    c->pc = RC_ADDR(0x000141d0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x198cu);

L_141D4:
    /* 000141d4   4  subq.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000141d4u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t3 = (c->a[0] + 0x0u + t4);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_141D8:
    /* 000141d8   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000141d8u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_141DC:
    /* 000141dc   6  cmpi.w #1e,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000141dcu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x0000001eu);

L_141E2:
    /* 000141e2   4  blt 00013e22 */
    c->pc = RC_ADDR(0x000141e2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_13E22; }

L_141E6:
    /* 000141e6   4  tst.w (1a7e,A4) */
    c->pc = RC_ADDR(0x000141e6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1a7eu));
    rc_set_nzvc(c, t0, RC_W);

L_141EA:
    /* 000141ea   2  bne 00014200 */
    c->pc = RC_ADDR(0x000141eau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_14200;

L_141EC:
    /* 000141ec   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x000141ecu);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_141F0:
    /* 000141f0   4  jsr (ffff80ce,A4) */
    c->pc = RC_ADDR(0x000141f0u);
    rc_step(c, m, 18);
    /* vector 34 */
    rc_push32(c, m, RC_ADDR(0x000141f4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bc4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af96u);
    return;

L_141F4:
    /* 000141f4   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000141f4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_141F6:
    /* 000141f6   4  pea (00000001).l */
    c->pc = RC_ADDR(0x000141f6u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000001u);

L_141FA:
    /* 000141fa   4  jsr (0001082c) */
    c->pc = RC_ADDR(0x000141fau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000141feu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001082cu);
    return;

L_141FE:
    /* 000141fe   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000141feu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_14200:
    /* 00014200   2  unlk A5 */
    c->pc = RC_ADDR(0x00014200u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_14202:
    /* 00014202   2  rts */
    c->pc = RC_ADDR(0x00014202u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
