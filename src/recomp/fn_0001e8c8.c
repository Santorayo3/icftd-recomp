/* fn_0001e8c8 - 708 byte(s), 220 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001e8c8(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case 0x0001e8c8u: goto L_1E8C8;
    case 0x0001e8ccu: goto L_1E8CC;
    case 0x0001e8d0u: goto L_1E8D0;
    case 0x0001e8d2u: goto L_1E8D2;
    case 0x0001e8dau: goto L_1E8DA;
    case 0x0001e8deu: goto L_1E8DE;
    case 0x0001e8e2u: goto L_1E8E2;
    case 0x0001e8e4u: goto L_1E8E4;
    case 0x0001e8e8u: goto L_1E8E8;
    case 0x0001e8ecu: goto L_1E8EC;
    case 0x0001e8f0u: goto L_1E8F0;
    case 0x0001e8f4u: goto L_1E8F4;
    case 0x0001e8f8u: goto L_1E8F8;
    case 0x0001e8fcu: goto L_1E8FC;
    case 0x0001e900u: goto L_1E900;
    case 0x0001e904u: goto L_1E904;
    case 0x0001e908u: goto L_1E908;
    case 0x0001e90cu: goto L_1E90C;
    case 0x0001e90eu: goto L_1E90E;
    case 0x0001e912u: goto L_1E912;
    case 0x0001e916u: goto L_1E916;
    case 0x0001e918u: goto L_1E918;
    case 0x0001e91cu: goto L_1E91C;
    case 0x0001e91eu: goto L_1E91E;
    case 0x0001e920u: goto L_1E920;
    case 0x0001e922u: goto L_1E922;
    case 0x0001e924u: goto L_1E924;
    case 0x0001e926u: goto L_1E926;
    case 0x0001e928u: goto L_1E928;
    case 0x0001e92cu: goto L_1E92C;
    case 0x0001e930u: goto L_1E930;
    case 0x0001e934u: goto L_1E934;
    case 0x0001e938u: goto L_1E938;
    case 0x0001e93au: goto L_1E93A;
    case 0x0001e93cu: goto L_1E93C;
    case 0x0001e93eu: goto L_1E93E;
    case 0x0001e940u: goto L_1E940;
    case 0x0001e942u: goto L_1E942;
    case 0x0001e944u: goto L_1E944;
    case 0x0001e946u: goto L_1E946;
    case 0x0001e94au: goto L_1E94A;
    case 0x0001e950u: goto L_1E950;
    case 0x0001e956u: goto L_1E956;
    case 0x0001e958u: goto L_1E958;
    case 0x0001e95au: goto L_1E95A;
    case 0x0001e95eu: goto L_1E95E;
    case 0x0001e960u: goto L_1E960;
    case 0x0001e964u: goto L_1E964;
    case 0x0001e968u: goto L_1E968;
    case 0x0001e96au: goto L_1E96A;
    case 0x0001e96cu: goto L_1E96C;
    case 0x0001e96eu: goto L_1E96E;
    case 0x0001e970u: goto L_1E970;
    case 0x0001e974u: goto L_1E974;
    case 0x0001e976u: goto L_1E976;
    case 0x0001e978u: goto L_1E978;
    case 0x0001e97au: goto L_1E97A;
    case 0x0001e97cu: goto L_1E97C;
    case 0x0001e980u: goto L_1E980;
    case 0x0001e982u: goto L_1E982;
    case 0x0001e984u: goto L_1E984;
    case 0x0001e986u: goto L_1E986;
    case 0x0001e98au: goto L_1E98A;
    case 0x0001e98eu: goto L_1E98E;
    case 0x0001e990u: goto L_1E990;
    case 0x0001e992u: goto L_1E992;
    case 0x0001e994u: goto L_1E994;
    case 0x0001e996u: goto L_1E996;
    case 0x0001e99au: goto L_1E99A;
    case 0x0001e99eu: goto L_1E99E;
    case 0x0001e9a0u: goto L_1E9A0;
    case 0x0001e9a2u: goto L_1E9A2;
    case 0x0001e9a8u: goto L_1E9A8;
    case 0x0001e9aau: goto L_1E9AA;
    case 0x0001e9acu: goto L_1E9AC;
    case 0x0001e9aeu: goto L_1E9AE;
    case 0x0001e9b2u: goto L_1E9B2;
    case 0x0001e9b4u: goto L_1E9B4;
    case 0x0001e9b8u: goto L_1E9B8;
    case 0x0001e9bau: goto L_1E9BA;
    case 0x0001e9c0u: goto L_1E9C0;
    case 0x0001e9c2u: goto L_1E9C2;
    case 0x0001e9c4u: goto L_1E9C4;
    case 0x0001e9c6u: goto L_1E9C6;
    case 0x0001e9c8u: goto L_1E9C8;
    case 0x0001e9cau: goto L_1E9CA;
    case 0x0001e9ceu: goto L_1E9CE;
    case 0x0001e9d0u: goto L_1E9D0;
    case 0x0001e9d2u: goto L_1E9D2;
    case 0x0001e9d6u: goto L_1E9D6;
    case 0x0001e9d8u: goto L_1E9D8;
    case 0x0001e9dcu: goto L_1E9DC;
    case 0x0001e9deu: goto L_1E9DE;
    case 0x0001e9e0u: goto L_1E9E0;
    case 0x0001e9e4u: goto L_1E9E4;
    case 0x0001e9e6u: goto L_1E9E6;
    case 0x0001e9ecu: goto L_1E9EC;
    case 0x0001e9eeu: goto L_1E9EE;
    case 0x0001e9f0u: goto L_1E9F0;
    case 0x0001e9f2u: goto L_1E9F2;
    case 0x0001e9f6u: goto L_1E9F6;
    case 0x0001e9f8u: goto L_1E9F8;
    case 0x0001e9fau: goto L_1E9FA;
    case 0x0001e9fcu: goto L_1E9FC;
    case 0x0001ea00u: goto L_1EA00;
    case 0x0001ea04u: goto L_1EA04;
    case 0x0001ea06u: goto L_1EA06;
    case 0x0001ea08u: goto L_1EA08;
    case 0x0001ea0cu: goto L_1EA0C;
    case 0x0001ea0eu: goto L_1EA0E;
    case 0x0001ea10u: goto L_1EA10;
    case 0x0001ea12u: goto L_1EA12;
    case 0x0001ea14u: goto L_1EA14;
    case 0x0001ea18u: goto L_1EA18;
    case 0x0001ea1au: goto L_1EA1A;
    case 0x0001ea1cu: goto L_1EA1C;
    case 0x0001ea1eu: goto L_1EA1E;
    case 0x0001ea20u: goto L_1EA20;
    case 0x0001ea22u: goto L_1EA22;
    case 0x0001ea24u: goto L_1EA24;
    case 0x0001ea26u: goto L_1EA26;
    case 0x0001ea28u: goto L_1EA28;
    case 0x0001ea2cu: goto L_1EA2C;
    case 0x0001ea2eu: goto L_1EA2E;
    case 0x0001ea30u: goto L_1EA30;
    case 0x0001ea34u: goto L_1EA34;
    case 0x0001ea36u: goto L_1EA36;
    case 0x0001ea3au: goto L_1EA3A;
    case 0x0001ea3cu: goto L_1EA3C;
    case 0x0001ea40u: goto L_1EA40;
    case 0x0001ea42u: goto L_1EA42;
    case 0x0001ea44u: goto L_1EA44;
    case 0x0001ea46u: goto L_1EA46;
    case 0x0001ea48u: goto L_1EA48;
    case 0x0001ea4au: goto L_1EA4A;
    case 0x0001ea4cu: goto L_1EA4C;
    case 0x0001ea4eu: goto L_1EA4E;
    case 0x0001ea54u: goto L_1EA54;
    case 0x0001ea56u: goto L_1EA56;
    case 0x0001ea5au: goto L_1EA5A;
    case 0x0001ea5cu: goto L_1EA5C;
    case 0x0001ea5eu: goto L_1EA5E;
    case 0x0001ea62u: goto L_1EA62;
    case 0x0001ea66u: goto L_1EA66;
    case 0x0001ea68u: goto L_1EA68;
    case 0x0001ea6cu: goto L_1EA6C;
    case 0x0001ea6eu: goto L_1EA6E;
    case 0x0001ea70u: goto L_1EA70;
    case 0x0001ea72u: goto L_1EA72;
    case 0x0001ea76u: goto L_1EA76;
    case 0x0001ea7au: goto L_1EA7A;
    case 0x0001ea7cu: goto L_1EA7C;
    case 0x0001ea7eu: goto L_1EA7E;
    case 0x0001ea80u: goto L_1EA80;
    case 0x0001ea84u: goto L_1EA84;
    case 0x0001ea86u: goto L_1EA86;
    case 0x0001ea88u: goto L_1EA88;
    case 0x0001ea8au: goto L_1EA8A;
    case 0x0001ea8cu: goto L_1EA8C;
    case 0x0001ea8eu: goto L_1EA8E;
    case 0x0001ea92u: goto L_1EA92;
    case 0x0001ea9au: goto L_1EA9A;
    case 0x0001eaa2u: goto L_1EAA2;
    case 0x0001eaaau: goto L_1EAAA;
    case 0x0001eab2u: goto L_1EAB2;
    case 0x0001eabau: goto L_1EABA;
    case 0x0001eac2u: goto L_1EAC2;
    case 0x0001eacau: goto L_1EACA;
    case 0x0001eaceu: goto L_1EACE;
    case 0x0001ead0u: goto L_1EAD0;
    case 0x0001ead4u: goto L_1EAD4;
    case 0x0001ead6u: goto L_1EAD6;
    case 0x0001eadeu: goto L_1EADE;
    case 0x0001eae0u: goto L_1EAE0;
    case 0x0001eae2u: goto L_1EAE2;
    case 0x0001eae4u: goto L_1EAE4;
    case 0x0001eae8u: goto L_1EAE8;
    case 0x0001eaecu: goto L_1EAEC;
    case 0x0001eaeeu: goto L_1EAEE;
    case 0x0001eaf0u: goto L_1EAF0;
    case 0x0001eaf4u: goto L_1EAF4;
    case 0x0001eaf6u: goto L_1EAF6;
    case 0x0001eaf8u: goto L_1EAF8;
    case 0x0001eafau: goto L_1EAFA;
    case 0x0001eafeu: goto L_1EAFE;
    case 0x0001eb00u: goto L_1EB00;
    case 0x0001eb02u: goto L_1EB02;
    case 0x0001eb06u: goto L_1EB06;
    case 0x0001eb08u: goto L_1EB08;
    case 0x0001eb0au: goto L_1EB0A;
    case 0x0001eb12u: goto L_1EB12;
    case 0x0001eb18u: goto L_1EB18;
    case 0x0001eb1cu: goto L_1EB1C;
    case 0x0001eb20u: goto L_1EB20;
    case 0x0001eb22u: goto L_1EB22;
    case 0x0001eb26u: goto L_1EB26;
    case 0x0001eb28u: goto L_1EB28;
    case 0x0001eb2eu: goto L_1EB2E;
    case 0x0001eb32u: goto L_1EB32;
    case 0x0001eb34u: goto L_1EB34;
    case 0x0001eb3au: goto L_1EB3A;
    case 0x0001eb3eu: goto L_1EB3E;
    case 0x0001eb40u: goto L_1EB40;
    case 0x0001eb44u: goto L_1EB44;
    case 0x0001eb46u: goto L_1EB46;
    case 0x0001eb4au: goto L_1EB4A;
    case 0x0001eb50u: goto L_1EB50;
    case 0x0001eb56u: goto L_1EB56;
    case 0x0001eb58u: goto L_1EB58;
    case 0x0001eb5au: goto L_1EB5A;
    case 0x0001eb60u: goto L_1EB60;
    case 0x0001eb66u: goto L_1EB66;
    case 0x0001eb6cu: goto L_1EB6C;
    case 0x0001eb6eu: goto L_1EB6E;
    case 0x0001eb72u: goto L_1EB72;
    case 0x0001eb7au: goto L_1EB7A;
    case 0x0001eb82u: goto L_1EB82;
    case 0x0001eb84u: goto L_1EB84;
    case 0x0001eb88u: goto L_1EB88;
    case 0x0001eb8au: goto L_1EB8A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1E8C8:
    /* 0001e8c8   4  link.w A5,#0 */
    c->pc = 0x0001e8c8u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1E8CC:
    /* 0001e8cc   4  tst.l (30,A5) */
    c->pc = 0x0001e8ccu;
    t0 = rc_rd32(c, m, (c->a[5] + 0x30u));
    rc_set_nzvc(c, t0, RC_L);

L_1E8D0:
    /* 0001e8d0   2  bne 0001e8da */
    c->pc = 0x0001e8d0u;
    if (rc_cond(c, 6)) goto L_1E8DA;

L_1E8D2:
    /* 0001e8d2   8  move.w #8400,(00dff096).l */
    c->pc = 0x0001e8d2u;
    t0 = 0x00008400u;
    rc_wr16(c, m, 0x00dff096u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E8DA:
    /* 0001e8da   4  movem.l { D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 A7 },-(SP) */
    c->pc = 0x0001e8dau;
    t3 = c->a[7];
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

L_1E8DE:
    /* 0001e8de   4  move.w (36,A5),D1 */
    c->pc = 0x0001e8deu;
    t0 = rc_rd16(c, m, (c->a[5] + 0x36u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E8E2:
    /* 0001e8e2   2  bne 0001e8ec */
    c->pc = 0x0001e8e2u;
    if (rc_cond(c, 6)) goto L_1E8EC;

L_1E8E4:
    /* 0001e8e4   4  move.w #1,D1 */
    c->pc = 0x0001e8e4u;
    t0 = 0x00000001u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E8E8:
    /* 0001e8e8   4  move.w D1,(36,A5) */
    c->pc = 0x0001e8e8u;
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] + 0x36u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E8EC:
    /* 0001e8ec   4  movea.l (8,A5),A0 */
    c->pc = 0x0001e8ecu;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1E8F0:
    /* 0001e8f0   4  movea.l (14,A5),A1 */
    c->pc = 0x0001e8f0u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x14u));
    c->a[1] = t0;

L_1E8F4:
    /* 0001e8f4   4  move.l (20,A5),D7 */
    c->pc = 0x0001e8f4u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x20u));
    rc_d_set(c, 7, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E8F8:
    /* 0001e8f8   4  beq 0001eb84 */
    c->pc = 0x0001e8f8u;
    if (rc_cond(c, 7)) goto L_1EB84;

L_1E8FC:
    /* 0001e8fc   4  move.l (24,A5),D6 */
    c->pc = 0x0001e8fcu;
    t0 = rc_rd32(c, m, (c->a[5] + 0x24u));
    rc_d_set(c, 6, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E900:
    /* 0001e900   4  clr.w (24,A5) */
    c->pc = 0x0001e900u;
    rc_wr16(c, m, (c->a[5] + 0x24u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1E904:
    /* 0001e904   4  move.l (18,A5),D5 */
    c->pc = 0x0001e904u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x18u));
    rc_d_set(c, 5, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E908:
    /* 0001e908   4  move.l (1c,A5),D4 */
    c->pc = 0x0001e908u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x1cu));
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E90C:
    /* 0001e90c   2  move.w (A1),D2 */
    c->pc = 0x0001e90cu;
    t0 = rc_rd16(c, m, c->a[1]);
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E90E:
    /* 0001e90e   4  move.w (2,A1),D3 */
    c->pc = 0x0001e90eu;
    t0 = rc_rd16(c, m, (c->a[1] + 0x2u));
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E912:
    /* 0001e912   4  cmp.w (ffffcbc2,A4),D3 */
    c->pc = 0x0001e912u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x343eu));
    t1 = rc_d_get(c, 3, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1E916:
    /* 0001e916   2  ble 0001e91c */
    c->pc = 0x0001e916u;
    if (rc_cond(c, 15)) goto L_1E91C;

L_1E918:
    /* 0001e918   4  move.w (ffffcbc2,A4),D3 */
    c->pc = 0x0001e918u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x343eu));
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E91C:
    /* 0001e91c   2  move.w D7,D0 */
    c->pc = 0x0001e91cu;
    t0 = rc_d_get(c, 7, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E91E:
    /* 0001e91e   2  lsr.w #3,D0 */
    c->pc = 0x0001e91eu;
    c->d[0] = rc_shift(c, 1, 0, 0x00000003u, rc_d_get(c, 0, RC_W), RC_W);

L_1E920:
    /* 0001e920   2  cmp.w (A0),D0 */
    c->pc = 0x0001e920u;
    t0 = rc_rd16(c, m, c->a[0]);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1E922:
    /* 0001e922   2  ble 0001e928 */
    c->pc = 0x0001e922u;
    if (rc_cond(c, 15)) goto L_1E928;

L_1E924:
    /* 0001e924   2  move.w (A0),D7 */
    c->pc = 0x0001e924u;
    t0 = rc_rd16(c, m, c->a[0]);
    rc_d_set(c, 7, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E926:
    /* 0001e926   2  lsl.w #3,D7 */
    c->pc = 0x0001e926u;
    c->d[7] = rc_shift(c, 1, 1, 0x00000003u, rc_d_get(c, 7, RC_W), RC_W);

L_1E928:
    /* 0001e928   4  move.w (2,A0),D0 */
    c->pc = 0x0001e928u;
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E92C:
    /* 0001e92c   4  sub.w (12,A5),D0 */
    c->pc = 0x0001e92cu;
    t0 = rc_rd16(c, m, (c->a[5] + 0x12u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1E930:
    /* 0001e930   4  bmi 0001eb84 */
    c->pc = 0x0001e930u;
    if (rc_cond(c, 11)) goto L_1EB84;

L_1E934:
    /* 0001e934   4  beq 0001eb84 */
    c->pc = 0x0001e934u;
    if (rc_cond(c, 7)) goto L_1EB84;

L_1E938:
    /* 0001e938   2  cmp.w D0,D6 */
    c->pc = 0x0001e938u;
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 6, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1E93A:
    /* 0001e93a   2  ble 0001e93e */
    c->pc = 0x0001e93au;
    if (rc_cond(c, 15)) goto L_1E93E;

L_1E93C:
    /* 0001e93c   2  move.w D0,D6 */
    c->pc = 0x0001e93cu;
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E93E:
    /* 0001e93e   2  tst.w D1 */
    c->pc = 0x0001e93eu;
    t0 = rc_d_get(c, 1, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1E940:
    /* 0001e940   2  bpl 0001e944 */
    c->pc = 0x0001e940u;
    if (rc_cond(c, 10)) goto L_1E944;

L_1E942:
    /* 0001e942   2  neg.w D1 */
    c->pc = 0x0001e942u;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1E944:
    /* 0001e944   2  divu.w D1,D6 */
    c->pc = 0x0001e944u;
    t0 = rc_d_get(c, 1, RC_W);
    rc_divu(c, m, 6, t0);

L_1E946:
    /* 0001e946   4  beq 0001eb84 */
    c->pc = 0x0001e946u;
    if (rc_cond(c, 7)) goto L_1EB84;

L_1E94A:
    /* 0001e94a   6  move.w #ffff,(2a5e,A4) */
    c->pc = 0x0001e94au;
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x2a5eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E950:
    /* 0001e950   6  move.w #ffff,(2a60,A4) */
    c->pc = 0x0001e950u;
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x2a60u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E956:
    /* 0001e956   2  move.w D4,D0 */
    c->pc = 0x0001e956u;
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E958:
    /* 0001e958   2  cmp.w D3,D0 */
    c->pc = 0x0001e958u;
    t0 = rc_d_get(c, 3, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1E95A:
    /* 0001e95a   4  bge 0001eb84 */
    c->pc = 0x0001e95au;
    if (rc_cond(c, 12)) goto L_1EB84;

L_1E95E:
    /* 0001e95e   2  add.w D6,D0 */
    c->pc = 0x0001e95eu;
    t0 = rc_d_get(c, 6, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1E960:
    /* 0001e960   4  beq 0001eb84 */
    c->pc = 0x0001e960u;
    if (rc_cond(c, 7)) goto L_1EB84;

L_1E964:
    /* 0001e964   4  bmi 0001eb84 */
    c->pc = 0x0001e964u;
    if (rc_cond(c, 11)) goto L_1EB84;

L_1E968:
    /* 0001e968   2  cmp.w D3,D0 */
    c->pc = 0x0001e968u;
    t0 = rc_d_get(c, 3, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1E96A:
    /* 0001e96a   2  blt 0001e974 */
    c->pc = 0x0001e96au;
    if (rc_cond(c, 13)) goto L_1E974;

L_1E96C:
    /* 0001e96c   2  sub.w D3,D0 */
    c->pc = 0x0001e96cu;
    t0 = rc_d_get(c, 3, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1E96E:
    /* 0001e96e   2  sub.w D0,D6 */
    c->pc = 0x0001e96eu;
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 6, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 6, RC_W, t2);

L_1E970:
    /* 0001e970   4  add.w D0,(24,A5) */
    c->pc = 0x0001e970u;
    t3 = (c->a[5] + 0x24u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1E974:
    /* 0001e974   2  move.w D4,D0 */
    c->pc = 0x0001e974u;
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E976:
    /* 0001e976   2  bpl 0001e982 */
    c->pc = 0x0001e976u;
    if (rc_cond(c, 10)) goto L_1E982;

L_1E978:
    /* 0001e978   2  neg.w D0 */
    c->pc = 0x0001e978u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1E97A:
    /* 0001e97a   2  sub.w D0,D6 */
    c->pc = 0x0001e97au;
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 6, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 6, RC_W, t2);

L_1E97C:
    /* 0001e97c   4  add.w D0,(12,A5) */
    c->pc = 0x0001e97cu;
    t3 = (c->a[5] + 0x12u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1E980:
    /* 0001e980   2  clr.w D4 */
    c->pc = 0x0001e980u;
    rc_d_set(c, 4, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1E982:
    /* 0001e982   2  move.w D5,D0 */
    c->pc = 0x0001e982u;
    t0 = rc_d_get(c, 5, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E984:
    /* 0001e984   2  add.w D7,D0 */
    c->pc = 0x0001e984u;
    t0 = rc_d_get(c, 7, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1E986:
    /* 0001e986   4  bmi 0001eb84 */
    c->pc = 0x0001e986u;
    if (rc_cond(c, 11)) goto L_1EB84;

L_1E98A:
    /* 0001e98a   4  beq 0001eb84 */
    c->pc = 0x0001e98au;
    if (rc_cond(c, 7)) goto L_1EB84;

L_1E98E:
    /* 0001e98e   2  move.w D2,D1 */
    c->pc = 0x0001e98eu;
    t0 = rc_d_get(c, 2, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E990:
    /* 0001e990   2  lsl.w #3,D1 */
    c->pc = 0x0001e990u;
    c->d[1] = rc_shift(c, 1, 1, 0x00000003u, rc_d_get(c, 1, RC_W), RC_W);

L_1E992:
    /* 0001e992   2  subq.w #1,D1 */
    c->pc = 0x0001e992u;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1E994:
    /* 0001e994   2  cmp.w D1,D5 */
    c->pc = 0x0001e994u;
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 5, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1E996:
    /* 0001e996   4  bgt 0001eb84 */
    c->pc = 0x0001e996u;
    if (rc_cond(c, 14)) goto L_1EB84;

L_1E99A:
    /* 0001e99a   4  clr.b (2a5c,A4) */
    c->pc = 0x0001e99au;
    rc_wr8(c, m, (c->a[4] + 0x2a5cu), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_1E99E:
    /* 0001e99e   2  cmp.w D1,D0 */
    c->pc = 0x0001e99eu;
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1E9A0:
    /* 0001e9a0   2  ble 0001e9c0 */
    c->pc = 0x0001e9a0u;
    if (rc_cond(c, 15)) goto L_1E9C0;

L_1E9A2:
    /* 0001e9a2   6  bset #0,(2a5c,A4) */
    c->pc = 0x0001e9a2u;
    t4 = 0x00000000u;
    t3 = (c->a[4] + 0x2a5cu);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_1E9A8:
    /* 0001e9a8   2  sub.w D1,D0 */
    c->pc = 0x0001e9a8u;
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1E9AA:
    /* 0001e9aa   2  sub.w D0,D7 */
    c->pc = 0x0001e9aau;
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 7, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 7, RC_W, t2);

L_1E9AC:
    /* 0001e9ac   2  addq.w #1,D7 */
    c->pc = 0x0001e9acu;
    t1 = rc_d_get(c, 7, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 7, RC_W, t2);

L_1E9AE:
    /* 0001e9ae   4  lea (ffffcbe4,A4),A2 */
    c->pc = 0x0001e9aeu;
    c->a[2] = (c->a[4] - 0x341cu);

L_1E9B2:
    /* 0001e9b2   2  move.w D5,D1 */
    c->pc = 0x0001e9b2u;
    t0 = rc_d_get(c, 5, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E9B4:
    /* 0001e9b4   4  andi.w #f,D1 */
    c->pc = 0x0001e9b4u;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 & 0x0000000fu;
    rc_d_set(c, 1, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_1E9B8:
    /* 0001e9b8   2  lsl.w #1,D1 */
    c->pc = 0x0001e9b8u;
    c->d[1] = rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W);

L_1E9BA:
    /* 0001e9ba   6  move.w (0,A2,D1.w),(2a60,A4) */
    c->pc = 0x0001e9bau;
    t4 = rc_ext(c->d[1], RC_W);
    t0 = rc_rd16(c, m, (c->a[2] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] + 0x2a60u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E9C0:
    /* 0001e9c0   2  add.w D6,D4 */
    c->pc = 0x0001e9c0u;
    t0 = rc_d_get(c, 6, RC_W);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_1E9C2:
    /* 0001e9c2   2  subq.w #1,D4 */
    c->pc = 0x0001e9c2u;
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_1E9C4:
    /* 0001e9c4   2  move.w D5,D0 */
    c->pc = 0x0001e9c4u;
    t0 = rc_d_get(c, 5, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E9C6:
    /* 0001e9c6   2  bpl 0001e9ee */
    c->pc = 0x0001e9c6u;
    if (rc_cond(c, 10)) goto L_1E9EE;

L_1E9C8:
    /* 0001e9c8   2  neg.w D0 */
    c->pc = 0x0001e9c8u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1E9CA:
    /* 0001e9ca   4  add.w D0,(e,A5) */
    c->pc = 0x0001e9cau;
    t3 = (c->a[5] + 0xeu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1E9CE:
    /* 0001e9ce   2  mulu.w D2,D4 */
    c->pc = 0x0001e9ceu;
    t0 = rc_d_get(c, 2, RC_W);
    rc_mulu(c, 4, t0);

L_1E9D0:
    /* 0001e9d0   2  clr.w D3 */
    c->pc = 0x0001e9d0u;
    rc_d_set(c, 3, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1E9D2:
    /* 0001e9d2   4  andi.w #f,D0 */
    c->pc = 0x0001e9d2u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 & 0x0000000fu;
    rc_d_set(c, 0, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_1E9D6:
    /* 0001e9d6   2  beq 0001e9e0 */
    c->pc = 0x0001e9d6u;
    if (rc_cond(c, 7)) goto L_1E9E0;

L_1E9D8:
    /* 0001e9d8   4  move.w #10,D3 */
    c->pc = 0x0001e9d8u;
    t0 = 0x00000010u;
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E9DC:
    /* 0001e9dc   2  sub.w D0,D3 */
    c->pc = 0x0001e9dcu;
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 3, RC_W, t2);

L_1E9DE:
    /* 0001e9de   2  subq.w #2,D4 */
    c->pc = 0x0001e9deu;
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_1E9E0:
    /* 0001e9e0   4  lea (ffffcbc4,A4),A2 */
    c->pc = 0x0001e9e0u;
    c->a[2] = (c->a[4] - 0x343cu);

L_1E9E4:
    /* 0001e9e4   2  lsl.w #1,D0 */
    c->pc = 0x0001e9e4u;
    c->d[0] = rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W);

L_1E9E6:
    /* 0001e9e6   6  move.w (0,A2,D0.w),(2a5e,A4) */
    c->pc = 0x0001e9e6u;
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (c->a[2] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] + 0x2a5eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E9EC:
    /* 0001e9ec   2  bra 0001e9fc */
    c->pc = 0x0001e9ecu;
    goto L_1E9FC;

L_1E9EE:
    /* 0001e9ee   2  mulu.w D2,D4 */
    c->pc = 0x0001e9eeu;
    t0 = rc_d_get(c, 2, RC_W);
    rc_mulu(c, 4, t0);

L_1E9F0:
    /* 0001e9f0   2  move.w D5,D3 */
    c->pc = 0x0001e9f0u;
    t0 = rc_d_get(c, 5, RC_W);
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E9F2:
    /* 0001e9f2   4  andi.w #f,D3 */
    c->pc = 0x0001e9f2u;
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 & 0x0000000fu;
    rc_d_set(c, 3, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_1E9F6:
    /* 0001e9f6   2  lsr.w #4,D5 */
    c->pc = 0x0001e9f6u;
    c->d[5] = rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 5, RC_W), RC_W);

L_1E9F8:
    /* 0001e9f8   2  lsl.w #1,D5 */
    c->pc = 0x0001e9f8u;
    c->d[5] = rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 5, RC_W), RC_W);

L_1E9FA:
    /* 0001e9fa   2  add.w D5,D4 */
    c->pc = 0x0001e9fau;
    t0 = rc_d_get(c, 5, RC_W);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_1E9FC:
    /* 0001e9fc   4  move.w (12,A5),D1 */
    c->pc = 0x0001e9fcu;
    t0 = rc_rd16(c, m, (c->a[5] + 0x12u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EA00:
    /* 0001ea00   4  tst.w (36,A5) */
    c->pc = 0x0001ea00u;
    t0 = rc_rd16(c, m, (c->a[5] + 0x36u));
    rc_set_nzvc(c, t0, RC_W);

L_1EA04:
    /* 0001ea04   2  bmi 0001ea10 */
    c->pc = 0x0001ea04u;
    if (rc_cond(c, 11)) goto L_1EA10;

L_1EA06:
    /* 0001ea06   2  move.w D6,D0 */
    c->pc = 0x0001ea06u;
    t0 = rc_d_get(c, 6, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EA08:
    /* 0001ea08   4  mulu.w (36,A5),D0 */
    c->pc = 0x0001ea08u;
    t0 = rc_rd16(c, m, (c->a[5] + 0x36u));
    rc_mulu(c, 0, t0);

L_1EA0C:
    /* 0001ea0c   2  add.w D0,D1 */
    c->pc = 0x0001ea0cu;
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1EA0E:
    /* 0001ea0e   2  subq.w #1,D1 */
    c->pc = 0x0001ea0eu;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1EA10:
    /* 0001ea10   2  mulu.w (A0),D1 */
    c->pc = 0x0001ea10u;
    t0 = rc_rd16(c, m, c->a[0]);
    rc_mulu(c, 1, t0);

L_1EA12:
    /* 0001ea12   2  move.w D1,D5 */
    c->pc = 0x0001ea12u;
    t0 = rc_d_get(c, 1, RC_W);
    rc_d_set(c, 5, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EA14:
    /* 0001ea14   4  move.w (e,A5),D1 */
    c->pc = 0x0001ea14u;
    t0 = rc_rd16(c, m, (c->a[5] + 0xeu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EA18:
    /* 0001ea18   2  lsr.w #4,D1 */
    c->pc = 0x0001ea18u;
    c->d[1] = rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 1, RC_W), RC_W);

L_1EA1A:
    /* 0001ea1a   2  lsl.w #1,D1 */
    c->pc = 0x0001ea1au;
    c->d[1] = rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W);

L_1EA1C:
    /* 0001ea1c   2  add.w D1,D5 */
    c->pc = 0x0001ea1cu;
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 5, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 5, RC_W, t2);

L_1EA1E:
    /* 0001ea1e   2  lsr.w #1,D1 */
    c->pc = 0x0001ea1eu;
    c->d[1] = rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W);

L_1EA20:
    /* 0001ea20   2  lsl.w #6,D6 */
    c->pc = 0x0001ea20u;
    c->d[6] = rc_shift(c, 1, 1, 0x00000006u, rc_d_get(c, 6, RC_W), RC_W);

L_1EA22:
    /* 0001ea22   2  move.w D7,D0 */
    c->pc = 0x0001ea22u;
    t0 = rc_d_get(c, 7, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EA24:
    /* 0001ea24   2  lsr.w #4,D7 */
    c->pc = 0x0001ea24u;
    c->d[7] = rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 7, RC_W), RC_W);

L_1EA26:
    /* 0001ea26   2  sub.w D1,D7 */
    c->pc = 0x0001ea26u;
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 7, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 7, RC_W, t2);

L_1EA28:
    /* 0001ea28   4  andi.w #f,D0 */
    c->pc = 0x0001ea28u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 & 0x0000000fu;
    rc_d_set(c, 0, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_1EA2C:
    /* 0001ea2c   2  beq 0001ea30 */
    c->pc = 0x0001ea2cu;
    if (rc_cond(c, 7)) goto L_1EA30;

L_1EA2E:
    /* 0001ea2e   2  addq.w #1,D7 */
    c->pc = 0x0001ea2eu;
    t1 = rc_d_get(c, 7, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 7, RC_W, t2);

L_1EA30:
    /* 0001ea30   4  cmpi.w #0,D7 */
    c->pc = 0x0001ea30u;
    t0 = rc_d_get(c, 7, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000000u);

L_1EA34:
    /* 0001ea34   2  bgt 0001ea3a */
    c->pc = 0x0001ea34u;
    if (rc_cond(c, 14)) goto L_1EA3A;

L_1EA36:
    /* 0001ea36   4  move.w #1,D7 */
    c->pc = 0x0001ea36u;
    t0 = 0x00000001u;
    rc_d_set(c, 7, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EA3A:
    /* 0001ea3a   2  or.w D7,D6 */
    c->pc = 0x0001ea3au;
    t0 = rc_d_get(c, 7, RC_W);
    t2 = t0 | rc_d_get(c, 6, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 6, RC_W, t2);

L_1EA3C:
    /* 0001ea3c   4  move.w (36,A5),D1 */
    c->pc = 0x0001ea3cu;
    t0 = rc_rd16(c, m, (c->a[5] + 0x36u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EA40:
    /* 0001ea40   2  neg.w D1 */
    c->pc = 0x0001ea40u;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1EA42:
    /* 0001ea42   2  move.w (A0),D0 */
    c->pc = 0x0001ea42u;
    t0 = rc_rd16(c, m, c->a[0]);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EA44:
    /* 0001ea44   2  mulu.w D1,D0 */
    c->pc = 0x0001ea44u;
    t0 = rc_d_get(c, 1, RC_W);
    rc_mulu(c, 0, t0);

L_1EA46:
    /* 0001ea46   2  lsl.w #1,D7 */
    c->pc = 0x0001ea46u;
    c->d[7] = rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 7, RC_W), RC_W);

L_1EA48:
    /* 0001ea48   2  sub.w D7,D0 */
    c->pc = 0x0001ea48u;
    t0 = rc_d_get(c, 7, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1EA4A:
    /* 0001ea4a   2  tst.w D3 */
    c->pc = 0x0001ea4au;
    t0 = rc_d_get(c, 3, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1EA4C:
    /* 0001ea4c   2  beq 0001ea5e */
    c->pc = 0x0001ea4cu;
    if (rc_cond(c, 7)) goto L_1EA5E;

L_1EA4E:
    /* 0001ea4e   6  btst #0,(2a5c,A4) */
    c->pc = 0x0001ea4eu;
    t4 = 0x00000000u;
    t3 = (c->a[4] + 0x2a5cu);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_1EA54:
    /* 0001ea54   2  bne 0001ea5e */
    c->pc = 0x0001ea54u;
    if (rc_cond(c, 6)) goto L_1EA5E;

L_1EA56:
    /* 0001ea56   4  clr.w (2a60,A4) */
    c->pc = 0x0001ea56u;
    rc_wr16(c, m, (c->a[4] + 0x2a60u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1EA5A:
    /* 0001ea5a   2  addq.w #1,D6 */
    c->pc = 0x0001ea5au;
    t1 = rc_d_get(c, 6, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 6, RC_W, t2);

L_1EA5C:
    /* 0001ea5c   2  subq.w #2,D0 */
    c->pc = 0x0001ea5cu;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1EA5E:
    /* 0001ea5e   4  move.w D0,(2a62,A4) */
    c->pc = 0x0001ea5eu;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x2a62u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EA62:
    /* 0001ea62   4  move.w D0,(2a64,A4) */
    c->pc = 0x0001ea62u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x2a64u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EA66:
    /* 0001ea66   2  move.w D6,D0 */
    c->pc = 0x0001ea66u;
    t0 = rc_d_get(c, 6, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EA68:
    /* 0001ea68   4  andi.w #3f,D0 */
    c->pc = 0x0001ea68u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 & 0x0000003fu;
    rc_d_set(c, 0, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_1EA6C:
    /* 0001ea6c   2  lsl.w #1,D0 */
    c->pc = 0x0001ea6cu;
    c->d[0] = rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W);

L_1EA6E:
    /* 0001ea6e   2  neg.w D2 */
    c->pc = 0x0001ea6eu;
    t1 = rc_d_get(c, 2, RC_W);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_1EA70:
    /* 0001ea70   2  sub.w D0,D2 */
    c->pc = 0x0001ea70u;
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_1EA72:
    /* 0001ea72   4  move.w D2,(2a66,A4) */
    c->pc = 0x0001ea72u;
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x2a66u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EA76:
    /* 0001ea76   4  move.w D2,(2a68,A4) */
    c->pc = 0x0001ea76u;
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x2a68u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EA7A:
    /* 0001ea7a   2  lsl.w #6,D3 */
    c->pc = 0x0001ea7au;
    c->d[3] = rc_shift(c, 1, 1, 0x00000006u, rc_d_get(c, 3, RC_W), RC_W);

L_1EA7C:
    /* 0001ea7c   2  lsl.w #6,D3 */
    c->pc = 0x0001ea7cu;
    c->d[3] = rc_shift(c, 1, 1, 0x00000006u, rc_d_get(c, 3, RC_W), RC_W);

L_1EA7E:
    /* 0001ea7e   2  clr.w D0 */
    c->pc = 0x0001ea7eu;
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1EA80:
    /* 0001ea80   4  move.b (5,A1),D0 */
    c->pc = 0x0001ea80u;
    t0 = rc_rd8(c, m, (c->a[1] + 0x5u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1EA84:
    /* 0001ea84   2  subq.b #1,D0 */
    c->pc = 0x0001ea84u;
    t1 = rc_d_get(c, 0, RC_B);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_B, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_B, t2);

L_1EA86:
    /* 0001ea86   2  addq.l #8,A0 */
    c->pc = 0x0001ea86u;
    c->a[0] += 0x00000008u;

L_1EA88:
    /* 0001ea88   2  addq.l #8,A1 */
    c->pc = 0x0001ea88u;
    c->a[1] += 0x00000008u;

L_1EA8A:
    /* 0001ea8a   2  ext.l D4 */
    c->pc = 0x0001ea8au;
    rc_ext_l(c, 4);

L_1EA8C:
    /* 0001ea8c   2  ext.l D5 */
    c->pc = 0x0001ea8cu;
    rc_ext_l(c, 5);

L_1EA8E:
    /* 0001ea8e   4  move.l (2c,A5),D7 */
    c->pc = 0x0001ea8eu;
    t0 = rc_rd32(c, m, (c->a[5] + 0x2cu));
    rc_d_set(c, 7, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1EA92:
    /* 0001ea92   8  move.w (2a5e,A4),(00dff044).l */
    c->pc = 0x0001ea92u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x2a5eu));
    rc_wr16(c, m, 0x00dff044u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EA9A:
    /* 0001ea9a   8  move.w (2a60,A4),(00dff046).l */
    c->pc = 0x0001ea9au;
    t0 = rc_rd16(c, m, (c->a[4] + 0x2a60u));
    rc_wr16(c, m, 0x00dff046u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EAA2:
    /* 0001eaa2   8  move.w (2a62,A4),(00dff064).l */
    c->pc = 0x0001eaa2u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x2a62u));
    rc_wr16(c, m, 0x00dff064u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EAAA:
    /* 0001eaaa   8  move.w (2a64,A4),(00dff062).l */
    c->pc = 0x0001eaaau;
    t0 = rc_rd16(c, m, (c->a[4] + 0x2a64u));
    rc_wr16(c, m, 0x00dff062u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EAB2:
    /* 0001eab2   8  move.w (2a66,A4),(00dff060).l */
    c->pc = 0x0001eab2u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x2a66u));
    rc_wr16(c, m, 0x00dff060u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EABA:
    /* 0001eaba   8  move.w (2a68,A4),(00dff066).l */
    c->pc = 0x0001eabau;
    t0 = rc_rd16(c, m, (c->a[4] + 0x2a68u));
    rc_wr16(c, m, 0x00dff066u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EAC2:
    /* 0001eac2   8  move.w #ffff,(00dff074).l */
    c->pc = 0x0001eac2u;
    t0 = 0x0000ffffu;
    rc_wr16(c, m, 0x00dff074u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EACA:
    /* 0001eaca   4  tst.l (30,A5) */
    c->pc = 0x0001eacau;
    t0 = rc_rd32(c, m, (c->a[5] + 0x30u));
    rc_set_nzvc(c, t0, RC_L);

L_1EACE:
    /* 0001eace   2  beq 0001ead6 */
    c->pc = 0x0001eaceu;
    if (rc_cond(c, 7)) goto L_1EAD6;

L_1EAD0:
    /* 0001ead0   4  movea.l (30,A5),A2 */
    c->pc = 0x0001ead0u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x30u));
    c->a[2] = t0;

L_1EAD4:
    /* 0001ead4   2  adda.l D5,A2 */
    c->pc = 0x0001ead4u;
    t0 = rc_d_get(c, 5, RC_L);
    c->a[2] += t0;

L_1EAD6:
    /* 0001ead6   8  btst #6,(00dff002).l */
    c->pc = 0x0001ead6u;
    t4 = 0x00000006u;
    t3 = 0x00dff002u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_1EADE:
    /* 0001eade   2  bne 0001ead6 */
    c->pc = 0x0001eadeu;
    if (rc_cond(c, 6)) { rc_tick(); goto L_1EAD6; }

L_1EAE0:
    /* 0001eae0   2  move.b D7,D1 */
    c->pc = 0x0001eae0u;
    t0 = rc_d_get(c, 7, RC_B);
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1EAE2:
    /* 0001eae2   2  lsr.l #4,D7 */
    c->pc = 0x0001eae2u;
    c->d[7] = rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 7, RC_L), RC_L);

L_1EAE4:
    /* 0001eae4   4  andi.w #f,D1 */
    c->pc = 0x0001eae4u;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 & 0x0000000fu;
    rc_d_set(c, 1, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_1EAE8:
    /* 0001eae8   4  cmpi.b #8,D1 */
    c->pc = 0x0001eae8u;
    t0 = rc_d_get(c, 1, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000008u);

L_1EAEC:
    /* 0001eaec   2  beq 0001eb6c */
    c->pc = 0x0001eaecu;
    if (rc_cond(c, 7)) goto L_1EB6C;

L_1EAEE:
    /* 0001eaee   2  blt 0001eb00 */
    c->pc = 0x0001eaeeu;
    if (rc_cond(c, 13)) goto L_1EB00;

L_1EAF0:
    /* 0001eaf0   4  btst #0,D1 */
    c->pc = 0x0001eaf0u;
    t4 = 0x00000000u;
    t0 = rc_d_get(c, 1, RC_B);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_1EAF4:
    /* 0001eaf4   2  bne 0001eafa */
    c->pc = 0x0001eaf4u;
    if (rc_cond(c, 6)) goto L_1EAFA;

L_1EAF6:
    /* 0001eaf6   2  clr.w D2 */
    c->pc = 0x0001eaf6u;
    rc_d_set(c, 2, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1EAF8:
    /* 0001eaf8   2  bra 0001eb0a */
    c->pc = 0x0001eaf8u;
    goto L_1EB0A;

L_1EAFA:
    /* 0001eafa   4  move.w #ffff,D2 */
    c->pc = 0x0001eafau;
    t0 = 0x0000ffffu;
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EAFE:
    /* 0001eafe   2  bra 0001eb0a */
    c->pc = 0x0001eafeu;
    goto L_1EB0A;

L_1EB00:
    /* 0001eb00   2  lsl.w #2,D1 */
    c->pc = 0x0001eb00u;
    c->d[1] = rc_shift(c, 1, 1, 0x00000002u, rc_d_get(c, 1, RC_W), RC_W);

L_1EB02:
    /* 0001eb02   4  move.l (0,A0,D1.w),D2 */
    c->pc = 0x0001eb02u;
    t4 = rc_ext(c->d[1], RC_W);
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1EB06:
    /* 0001eb06   2  beq 0001eb0a */
    c->pc = 0x0001eb06u;
    if (rc_cond(c, 7)) goto L_1EB0A;

L_1EB08:
    /* 0001eb08   2  bpl 0001eb28 */
    c->pc = 0x0001eb08u;
    if (rc_cond(c, 10)) goto L_1EB28;

L_1EB0A:
    /* 0001eb0a   8  move.w #0,(00dff042).l */
    c->pc = 0x0001eb0au;
    t0 = 0x00000000u;
    rc_wr16(c, m, 0x00dff042u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EB12:
    /* 0001eb12   6  move.w D2,(00dff072).l */
    c->pc = 0x0001eb12u;
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, 0x00dff072u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EB18:
    /* 0001eb18   4  move.w #b00,D1 */
    c->pc = 0x0001eb18u;
    t0 = 0x00000b00u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EB1C:
    /* 0001eb1c   4  tst.l (30,A5) */
    c->pc = 0x0001eb1cu;
    t0 = rc_rd32(c, m, (c->a[5] + 0x30u));
    rc_set_nzvc(c, t0, RC_L);

L_1EB20:
    /* 0001eb20   2  bne 0001eb44 */
    c->pc = 0x0001eb20u;
    if (rc_cond(c, 6)) goto L_1EB44;

L_1EB22:
    /* 0001eb22   4  move.w #300,D1 */
    c->pc = 0x0001eb22u;
    t0 = 0x00000300u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EB26:
    /* 0001eb26   2  bra 0001eb44 */
    c->pc = 0x0001eb26u;
    goto L_1EB44;

L_1EB28:
    /* 0001eb28   6  move.w D3,(00dff042).l */
    c->pc = 0x0001eb28u;
    t0 = rc_d_get(c, 3, RC_W);
    rc_wr16(c, m, 0x00dff042u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EB2E:
    /* 0001eb2e   4  move.w #f00,D1 */
    c->pc = 0x0001eb2eu;
    t0 = 0x00000f00u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EB32:
    /* 0001eb32   2  add.l D5,D2 */
    c->pc = 0x0001eb32u;
    t0 = rc_d_get(c, 5, RC_L);
    t1 = rc_d_get(c, 2, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_L, t2);

L_1EB34:
    /* 0001eb34   6  move.l D2,(00dff04c).l */
    c->pc = 0x0001eb34u;
    t0 = rc_d_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff04cu, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1EB3A:
    /* 0001eb3a   4  tst.l (30,A5) */
    c->pc = 0x0001eb3au;
    t0 = rc_rd32(c, m, (c->a[5] + 0x30u));
    rc_set_nzvc(c, t0, RC_L);

L_1EB3E:
    /* 0001eb3e   2  bne 0001eb44 */
    c->pc = 0x0001eb3eu;
    if (rc_cond(c, 6)) goto L_1EB44;

L_1EB40:
    /* 0001eb40   4  move.w #700,D1 */
    c->pc = 0x0001eb40u;
    t0 = 0x00000700u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EB44:
    /* 0001eb44   2  or.w D3,D1 */
    c->pc = 0x0001eb44u;
    t0 = rc_d_get(c, 3, RC_W);
    t2 = t0 | rc_d_get(c, 1, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 1, RC_W, t2);

L_1EB46:
    /* 0001eb46   4  ori.w #ca,D1 */
    c->pc = 0x0001eb46u;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 | 0x000000cau;
    rc_d_set(c, 1, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_1EB4A:
    /* 0001eb4a   6  move.w D1,(00dff040).l */
    c->pc = 0x0001eb4au;
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, 0x00dff040u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EB50:
    /* 0001eb50   6  move.l A2,(00dff050).l */
    c->pc = 0x0001eb50u;
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff050u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1EB56:
    /* 0001eb56   2  move.l (A1),D2 */
    c->pc = 0x0001eb56u;
    t0 = rc_rd32(c, m, c->a[1]);
    rc_d_set(c, 2, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1EB58:
    /* 0001eb58   2  add.l D4,D2 */
    c->pc = 0x0001eb58u;
    t0 = rc_d_get(c, 4, RC_L);
    t1 = rc_d_get(c, 2, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_L, t2);

L_1EB5A:
    /* 0001eb5a   6  move.l D2,(00dff048).l */
    c->pc = 0x0001eb5au;
    t0 = rc_d_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff048u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1EB60:
    /* 0001eb60   6  move.l D2,(00dff054).l */
    c->pc = 0x0001eb60u;
    t0 = rc_d_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff054u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1EB66:
    /* 0001eb66   6  move.w D6,(00dff058).l */
    c->pc = 0x0001eb66u;
    t0 = rc_d_get(c, 6, RC_W);
    rc_wr16(c, m, 0x00dff058u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EB6C:
    /* 0001eb6c   2  addq.l #4,A1 */
    c->pc = 0x0001eb6cu;
    c->a[1] += 0x00000004u;

L_1EB6E:
    /* 0001eb6e   4  dbf D0,0001ead6 */
    c->pc = 0x0001eb6eu;
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1EAD6; }
    }

L_1EB72:
    /* 0001eb72   8  move.w #400,(00dff096).l */
    c->pc = 0x0001eb72u;
    t0 = 0x00000400u;
    rc_wr16(c, m, 0x00dff096u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EB7A:
    /* 0001eb7a   8  btst #6,(00dff002).l */
    c->pc = 0x0001eb7au;
    t4 = 0x00000006u;
    t3 = 0x00dff002u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_1EB82:
    /* 0001eb82   2  bne 0001eb7a */
    c->pc = 0x0001eb82u;
    if (rc_cond(c, 6)) { rc_tick(); goto L_1EB7A; }

L_1EB84:
    /* 0001eb84   4  movem.l (SP)+,{ D0 D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 } */
    c->pc = 0x0001eb84u;
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
    c->a[7] = t3;

L_1EB88:
    /* 0001eb88   2  unlk A5 */
    c->pc = 0x0001eb88u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1EB8A:
    /* 0001eb8a   2  rts */
    c->pc = 0x0001eb8au;
    rc_ret(c, m);
    return;

}
