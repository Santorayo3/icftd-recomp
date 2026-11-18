/* fn_00022f32 - 796 byte(s), 264 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00022f32(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00022f32u): goto L_22F32;
    case RC_ADDR(0x00022f36u): goto L_22F36;
    case RC_ADDR(0x00022f3au): goto L_22F3A;
    case RC_ADDR(0x00022f3eu): goto L_22F3E;
    case RC_ADDR(0x00022f42u): goto L_22F42;
    case RC_ADDR(0x00022f46u): goto L_22F46;
    case RC_ADDR(0x00022f4cu): goto L_22F4C;
    case RC_ADDR(0x00022f4eu): goto L_22F4E;
    case RC_ADDR(0x00022f50u): goto L_22F50;
    case RC_ADDR(0x00022f52u): goto L_22F52;
    case RC_ADDR(0x00022f54u): goto L_22F54;
    case RC_ADDR(0x00022f56u): goto L_22F56;
    case RC_ADDR(0x00022f5au): goto L_22F5A;
    case RC_ADDR(0x00022f5eu): goto L_22F5E;
    case RC_ADDR(0x00022f62u): goto L_22F62;
    case RC_ADDR(0x00022f66u): goto L_22F66;
    case RC_ADDR(0x00022f6cu): goto L_22F6C;
    case RC_ADDR(0x00022f72u): goto L_22F72;
    case RC_ADDR(0x00022f78u): goto L_22F78;
    case RC_ADDR(0x00022f7au): goto L_22F7A;
    case RC_ADDR(0x00022f7cu): goto L_22F7C;
    case RC_ADDR(0x00022f7eu): goto L_22F7E;
    case RC_ADDR(0x00022f80u): goto L_22F80;
    case RC_ADDR(0x00022f82u): goto L_22F82;
    case RC_ADDR(0x00022f86u): goto L_22F86;
    case RC_ADDR(0x00022f88u): goto L_22F88;
    case RC_ADDR(0x00022f8cu): goto L_22F8C;
    case RC_ADDR(0x00022f8eu): goto L_22F8E;
    case RC_ADDR(0x00022f90u): goto L_22F90;
    case RC_ADDR(0x00022f92u): goto L_22F92;
    case RC_ADDR(0x00022f94u): goto L_22F94;
    case RC_ADDR(0x00022f96u): goto L_22F96;
    case RC_ADDR(0x00022f9au): goto L_22F9A;
    case RC_ADDR(0x00022f9cu): goto L_22F9C;
    case RC_ADDR(0x00022fa2u): goto L_22FA2;
    case RC_ADDR(0x00022fa4u): goto L_22FA4;
    case RC_ADDR(0x00022fa6u): goto L_22FA6;
    case RC_ADDR(0x00022fa8u): goto L_22FA8;
    case RC_ADDR(0x00022faau): goto L_22FAA;
    case RC_ADDR(0x00022facu): goto L_22FAC;
    case RC_ADDR(0x00022fb0u): goto L_22FB0;
    case RC_ADDR(0x00022fb2u): goto L_22FB2;
    case RC_ADDR(0x00022fb6u): goto L_22FB6;
    case RC_ADDR(0x00022fbau): goto L_22FBA;
    case RC_ADDR(0x00022fbeu): goto L_22FBE;
    case RC_ADDR(0x00022fc0u): goto L_22FC0;
    case RC_ADDR(0x00022fc2u): goto L_22FC2;
    case RC_ADDR(0x00022fc4u): goto L_22FC4;
    case RC_ADDR(0x00022fc6u): goto L_22FC6;
    case RC_ADDR(0x00022fc8u): goto L_22FC8;
    case RC_ADDR(0x00022fcau): goto L_22FCA;
    case RC_ADDR(0x00022fceu): goto L_22FCE;
    case RC_ADDR(0x00022fd0u): goto L_22FD0;
    case RC_ADDR(0x00022fd4u): goto L_22FD4;
    case RC_ADDR(0x00022fd8u): goto L_22FD8;
    case RC_ADDR(0x00022fdau): goto L_22FDA;
    case RC_ADDR(0x00022fdeu): goto L_22FDE;
    case RC_ADDR(0x00022fe2u): goto L_22FE2;
    case RC_ADDR(0x00022fe4u): goto L_22FE4;
    case RC_ADDR(0x00022fe6u): goto L_22FE6;
    case RC_ADDR(0x00022fe8u): goto L_22FE8;
    case RC_ADDR(0x00022feau): goto L_22FEA;
    case RC_ADDR(0x00022fecu): goto L_22FEC;
    case RC_ADDR(0x00022feeu): goto L_22FEE;
    case RC_ADDR(0x00022ff0u): goto L_22FF0;
    case RC_ADDR(0x00022ff4u): goto L_22FF4;
    case RC_ADDR(0x00022ffau): goto L_22FFA;
    case RC_ADDR(0x00022ffcu): goto L_22FFC;
    case RC_ADDR(0x00023000u): goto L_23000;
    case RC_ADDR(0x00023002u): goto L_23002;
    case RC_ADDR(0x00023004u): goto L_23004;
    case RC_ADDR(0x00023006u): goto L_23006;
    case RC_ADDR(0x00023008u): goto L_23008;
    case RC_ADDR(0x0002300au): goto L_2300A;
    case RC_ADDR(0x0002300cu): goto L_2300C;
    case RC_ADDR(0x00023010u): goto L_23010;
    case RC_ADDR(0x00023012u): goto L_23012;
    case RC_ADDR(0x00023016u): goto L_23016;
    case RC_ADDR(0x0002301au): goto L_2301A;
    case RC_ADDR(0x0002301eu): goto L_2301E;
    case RC_ADDR(0x00023020u): goto L_23020;
    case RC_ADDR(0x00023022u): goto L_23022;
    case RC_ADDR(0x00023024u): goto L_23024;
    case RC_ADDR(0x00023026u): goto L_23026;
    case RC_ADDR(0x00023028u): goto L_23028;
    case RC_ADDR(0x0002302au): goto L_2302A;
    case RC_ADDR(0x0002302eu): goto L_2302E;
    case RC_ADDR(0x00023030u): goto L_23030;
    case RC_ADDR(0x00023034u): goto L_23034;
    case RC_ADDR(0x00023038u): goto L_23038;
    case RC_ADDR(0x0002303au): goto L_2303A;
    case RC_ADDR(0x0002303eu): goto L_2303E;
    case RC_ADDR(0x00023042u): goto L_23042;
    case RC_ADDR(0x00023044u): goto L_23044;
    case RC_ADDR(0x00023046u): goto L_23046;
    case RC_ADDR(0x00023048u): goto L_23048;
    case RC_ADDR(0x0002304au): goto L_2304A;
    case RC_ADDR(0x0002304cu): goto L_2304C;
    case RC_ADDR(0x0002304eu): goto L_2304E;
    case RC_ADDR(0x00023050u): goto L_23050;
    case RC_ADDR(0x00023054u): goto L_23054;
    case RC_ADDR(0x0002305au): goto L_2305A;
    case RC_ADDR(0x0002305cu): goto L_2305C;
    case RC_ADDR(0x00023062u): goto L_23062;
    case RC_ADDR(0x00023066u): goto L_23066;
    case RC_ADDR(0x00023068u): goto L_23068;
    case RC_ADDR(0x0002306au): goto L_2306A;
    case RC_ADDR(0x0002306cu): goto L_2306C;
    case RC_ADDR(0x0002306eu): goto L_2306E;
    case RC_ADDR(0x00023070u): goto L_23070;
    case RC_ADDR(0x00023072u): goto L_23072;
    case RC_ADDR(0x00023078u): goto L_23078;
    case RC_ADDR(0x0002307au): goto L_2307A;
    case RC_ADDR(0x0002307eu): goto L_2307E;
    case RC_ADDR(0x00023080u): goto L_23080;
    case RC_ADDR(0x00023082u): goto L_23082;
    case RC_ADDR(0x00023084u): goto L_23084;
    case RC_ADDR(0x00023086u): goto L_23086;
    case RC_ADDR(0x00023088u): goto L_23088;
    case RC_ADDR(0x0002308au): goto L_2308A;
    case RC_ADDR(0x0002308cu): goto L_2308C;
    case RC_ADDR(0x0002308eu): goto L_2308E;
    case RC_ADDR(0x00023090u): goto L_23090;
    case RC_ADDR(0x00023096u): goto L_23096;
    case RC_ADDR(0x00023098u): goto L_23098;
    case RC_ADDR(0x0002309eu): goto L_2309E;
    case RC_ADDR(0x000230a0u): goto L_230A0;
    case RC_ADDR(0x000230a6u): goto L_230A6;
    case RC_ADDR(0x000230a8u): goto L_230A8;
    case RC_ADDR(0x000230aeu): goto L_230AE;
    case RC_ADDR(0x000230b2u): goto L_230B2;
    case RC_ADDR(0x000230b6u): goto L_230B6;
    case RC_ADDR(0x000230bau): goto L_230BA;
    case RC_ADDR(0x000230beu): goto L_230BE;
    case RC_ADDR(0x000230c2u): goto L_230C2;
    case RC_ADDR(0x000230c6u): goto L_230C6;
    case RC_ADDR(0x000230cau): goto L_230CA;
    case RC_ADDR(0x000230ccu): goto L_230CC;
    case RC_ADDR(0x000230d0u): goto L_230D0;
    case RC_ADDR(0x000230d4u): goto L_230D4;
    case RC_ADDR(0x000230d6u): goto L_230D6;
    case RC_ADDR(0x000230dau): goto L_230DA;
    case RC_ADDR(0x000230deu): goto L_230DE;
    case RC_ADDR(0x000230e0u): goto L_230E0;
    case RC_ADDR(0x000230e4u): goto L_230E4;
    case RC_ADDR(0x000230e6u): goto L_230E6;
    case RC_ADDR(0x000230e8u): goto L_230E8;
    case RC_ADDR(0x000230eau): goto L_230EA;
    case RC_ADDR(0x000230ecu): goto L_230EC;
    case RC_ADDR(0x000230eeu): goto L_230EE;
    case RC_ADDR(0x000230f2u): goto L_230F2;
    case RC_ADDR(0x000230f4u): goto L_230F4;
    case RC_ADDR(0x000230f8u): goto L_230F8;
    case RC_ADDR(0x000230fcu): goto L_230FC;
    case RC_ADDR(0x000230feu): goto L_230FE;
    case RC_ADDR(0x00023102u): goto L_23102;
    case RC_ADDR(0x00023106u): goto L_23106;
    case RC_ADDR(0x00023108u): goto L_23108;
    case RC_ADDR(0x0002310au): goto L_2310A;
    case RC_ADDR(0x00023110u): goto L_23110;
    case RC_ADDR(0x00023112u): goto L_23112;
    case RC_ADDR(0x00023114u): goto L_23114;
    case RC_ADDR(0x00023116u): goto L_23116;
    case RC_ADDR(0x0002311cu): goto L_2311C;
    case RC_ADDR(0x00023120u): goto L_23120;
    case RC_ADDR(0x00023122u): goto L_23122;
    case RC_ADDR(0x00023124u): goto L_23124;
    case RC_ADDR(0x00023126u): goto L_23126;
    case RC_ADDR(0x0002312au): goto L_2312A;
    case RC_ADDR(0x0002312cu): goto L_2312C;
    case RC_ADDR(0x00023130u): goto L_23130;
    case RC_ADDR(0x00023132u): goto L_23132;
    case RC_ADDR(0x00023136u): goto L_23136;
    case RC_ADDR(0x0002313au): goto L_2313A;
    case RC_ADDR(0x0002313eu): goto L_2313E;
    case RC_ADDR(0x00023142u): goto L_23142;
    case RC_ADDR(0x00023146u): goto L_23146;
    case RC_ADDR(0x00023148u): goto L_23148;
    case RC_ADDR(0x0002314eu): goto L_2314E;
    case RC_ADDR(0x00023152u): goto L_23152;
    case RC_ADDR(0x00023154u): goto L_23154;
    case RC_ADDR(0x00023158u): goto L_23158;
    case RC_ADDR(0x0002315cu): goto L_2315C;
    case RC_ADDR(0x0002315eu): goto L_2315E;
    case RC_ADDR(0x00023162u): goto L_23162;
    case RC_ADDR(0x00023166u): goto L_23166;
    case RC_ADDR(0x00023168u): goto L_23168;
    case RC_ADDR(0x0002316eu): goto L_2316E;
    case RC_ADDR(0x00023170u): goto L_23170;
    case RC_ADDR(0x00023174u): goto L_23174;
    case RC_ADDR(0x00023178u): goto L_23178;
    case RC_ADDR(0x0002317cu): goto L_2317C;
    case RC_ADDR(0x0002317eu): goto L_2317E;
    case RC_ADDR(0x00023180u): goto L_23180;
    case RC_ADDR(0x00023182u): goto L_23182;
    case RC_ADDR(0x00023184u): goto L_23184;
    case RC_ADDR(0x00023188u): goto L_23188;
    case RC_ADDR(0x0002318au): goto L_2318A;
    case RC_ADDR(0x0002318cu): goto L_2318C;
    case RC_ADDR(0x0002318eu): goto L_2318E;
    case RC_ADDR(0x00023192u): goto L_23192;
    case RC_ADDR(0x00023194u): goto L_23194;
    case RC_ADDR(0x00023196u): goto L_23196;
    case RC_ADDR(0x00023198u): goto L_23198;
    case RC_ADDR(0x0002319cu): goto L_2319C;
    case RC_ADDR(0x0002319eu): goto L_2319E;
    case RC_ADDR(0x000231a2u): goto L_231A2;
    case RC_ADDR(0x000231a4u): goto L_231A4;
    case RC_ADDR(0x000231a6u): goto L_231A6;
    case RC_ADDR(0x000231a8u): goto L_231A8;
    case RC_ADDR(0x000231aau): goto L_231AA;
    case RC_ADDR(0x000231aeu): goto L_231AE;
    case RC_ADDR(0x000231b2u): goto L_231B2;
    case RC_ADDR(0x000231b6u): goto L_231B6;
    case RC_ADDR(0x000231bau): goto L_231BA;
    case RC_ADDR(0x000231bcu): goto L_231BC;
    case RC_ADDR(0x000231c0u): goto L_231C0;
    case RC_ADDR(0x000231c2u): goto L_231C2;
    case RC_ADDR(0x000231c6u): goto L_231C6;
    case RC_ADDR(0x000231cau): goto L_231CA;
    case RC_ADDR(0x000231ccu): goto L_231CC;
    case RC_ADDR(0x000231ceu): goto L_231CE;
    case RC_ADDR(0x000231d0u): goto L_231D0;
    case RC_ADDR(0x000231d2u): goto L_231D2;
    case RC_ADDR(0x000231d6u): goto L_231D6;
    case RC_ADDR(0x000231d8u): goto L_231D8;
    case RC_ADDR(0x000231dau): goto L_231DA;
    case RC_ADDR(0x000231dcu): goto L_231DC;
    case RC_ADDR(0x000231deu): goto L_231DE;
    case RC_ADDR(0x000231e2u): goto L_231E2;
    case RC_ADDR(0x000231e6u): goto L_231E6;
    case RC_ADDR(0x000231e8u): goto L_231E8;
    case RC_ADDR(0x000231eau): goto L_231EA;
    case RC_ADDR(0x000231eeu): goto L_231EE;
    case RC_ADDR(0x000231f2u): goto L_231F2;
    case RC_ADDR(0x000231f4u): goto L_231F4;
    case RC_ADDR(0x000231f8u): goto L_231F8;
    case RC_ADDR(0x000231fcu): goto L_231FC;
    case RC_ADDR(0x00023200u): goto L_23200;
    case RC_ADDR(0x00023202u): goto L_23202;
    case RC_ADDR(0x00023204u): goto L_23204;
    case RC_ADDR(0x00023208u): goto L_23208;
    case RC_ADDR(0x0002320au): goto L_2320A;
    case RC_ADDR(0x0002320eu): goto L_2320E;
    case RC_ADDR(0x00023210u): goto L_23210;
    case RC_ADDR(0x00023212u): goto L_23212;
    case RC_ADDR(0x00023214u): goto L_23214;
    case RC_ADDR(0x00023218u): goto L_23218;
    case RC_ADDR(0x0002321cu): goto L_2321C;
    case RC_ADDR(0x00023220u): goto L_23220;
    case RC_ADDR(0x00023224u): goto L_23224;
    case RC_ADDR(0x00023228u): goto L_23228;
    case RC_ADDR(0x0002322au): goto L_2322A;
    case RC_ADDR(0x0002322cu): goto L_2322C;
    case RC_ADDR(0x0002322eu): goto L_2322E;
    case RC_ADDR(0x00023230u): goto L_23230;
    case RC_ADDR(0x00023234u): goto L_23234;
    case RC_ADDR(0x00023236u): goto L_23236;
    case RC_ADDR(0x00023238u): goto L_23238;
    case RC_ADDR(0x0002323au): goto L_2323A;
    case RC_ADDR(0x0002323eu): goto L_2323E;
    case RC_ADDR(0x00023242u): goto L_23242;
    case RC_ADDR(0x00023246u): goto L_23246;
    case RC_ADDR(0x0002324au): goto L_2324A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_22F32:
    /* 00022f32   4  link.w A5,#ffffff22 */
    c->pc = RC_ADDR(0x00022f32u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xdeu;

L_22F36:
    /* 00022f36   4  movem.l { D4 D5 A3 },-(SP) */
    c->pc = RC_ADDR(0x00022f36u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_22F3A:
    /* 00022f3a   4  movea.l (8,A5),A2 */
    c->pc = RC_ADDR(0x00022f3au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[2] = t0;

L_22F3E:
    /* 00022f3e   4  movea.l (c,A5),A3 */
    c->pc = RC_ADDR(0x00022f3eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[3] = t0;

L_22F42:
    /* 00022f42   4  clr.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x00022f42u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_22F46:
    /* 00022f46   6  move.l (10,A5),(fffffffc,A5) */
    c->pc = RC_ADDR(0x00022f46u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_22F4C:
    /* 00022f4c   2  movea.l A3,A0 */
    c->pc = RC_ADDR(0x00022f4cu);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[0] = t0;

L_22F4E:
    /* 00022f4e   2  addq.l #1,A3 */
    c->pc = RC_ADDR(0x00022f4eu);
    rc_step(c, m, 8);
    c->a[3] += 0x00000001u;

L_22F50:
    /* 00022f50   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x00022f50u);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_22F52:
    /* 00022f52   2  ext.w D0 */
    c->pc = RC_ADDR(0x00022f52u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_22F54:
    /* 00022f54   2  move.w D0,D4 */
    c->pc = RC_ADDR(0x00022f54u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_22F56:
    /* 00022f56   4  beq 00023246 */
    c->pc = RC_ADDR(0x00022f56u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_23246;

L_22F5A:
    /* 00022f5a   4  cmp.w #25,D4 */
    c->pc = RC_ADDR(0x00022f5au);
    rc_step(c, m, 8);
    t0 = 0x00000025u;
    t1 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_22F5E:
    /* 00022f5e   4  bne 0002322c */
    c->pc = RC_ADDR(0x00022f5eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2322C;

L_22F62:
    /* 00022f62   4  clr.b (ffffff30,A5) */
    c->pc = RC_ADDR(0x00022f62u);
    rc_step(c, m, 16);
    rc_wr8(c, m, (c->a[5] - 0xd0u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_22F66:
    /* 00022f66   6  move.w #1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00022f66u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_22F6C:
    /* 00022f6c   6  move.w #20,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00022f6cu);
    rc_step(c, m, 16);
    t0 = 0x00000020u;
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_22F72:
    /* 00022f72   6  move.w #2710,(fffffff4,A5) */
    c->pc = RC_ADDR(0x00022f72u);
    rc_step(c, m, 16);
    t0 = 0x00002710u;
    rc_wr16(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_22F78:
    /* 00022f78   2  movea.l A3,A0 */
    c->pc = RC_ADDR(0x00022f78u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[0] = t0;

L_22F7A:
    /* 00022f7a   2  addq.l #1,A3 */
    c->pc = RC_ADDR(0x00022f7au);
    rc_step(c, m, 8);
    c->a[3] += 0x00000001u;

L_22F7C:
    /* 00022f7c   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x00022f7cu);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_22F7E:
    /* 00022f7e   2  ext.w D0 */
    c->pc = RC_ADDR(0x00022f7eu);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_22F80:
    /* 00022f80   2  move.w D0,D4 */
    c->pc = RC_ADDR(0x00022f80u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_22F82:
    /* 00022f82   4  cmp.w #2d,D0 */
    c->pc = RC_ADDR(0x00022f82u);
    rc_step(c, m, 8);
    t0 = 0x0000002du;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_22F86:
    /* 00022f86   2  bne 00022f96 */
    c->pc = RC_ADDR(0x00022f86u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_22F96;

L_22F88:
    /* 00022f88   4  clr.w (fffffff8,A5) */
    c->pc = RC_ADDR(0x00022f88u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_22F8C:
    /* 00022f8c   2  movea.l A3,A0 */
    c->pc = RC_ADDR(0x00022f8cu);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[0] = t0;

L_22F8E:
    /* 00022f8e   2  addq.l #1,A3 */
    c->pc = RC_ADDR(0x00022f8eu);
    rc_step(c, m, 8);
    c->a[3] += 0x00000001u;

L_22F90:
    /* 00022f90   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x00022f90u);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_22F92:
    /* 00022f92   2  ext.w D0 */
    c->pc = RC_ADDR(0x00022f92u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_22F94:
    /* 00022f94   2  move.w D0,D4 */
    c->pc = RC_ADDR(0x00022f94u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_22F96:
    /* 00022f96   4  cmp.w #30,D4 */
    c->pc = RC_ADDR(0x00022f96u);
    rc_step(c, m, 8);
    t0 = 0x00000030u;
    t1 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_22F9A:
    /* 00022f9a   2  bne 00022fac */
    c->pc = RC_ADDR(0x00022f9au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_22FAC;

L_22F9C:
    /* 00022f9c   6  move.w #30,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00022f9cu);
    rc_step(c, m, 16);
    t0 = 0x00000030u;
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_22FA2:
    /* 00022fa2   2  movea.l A3,A0 */
    c->pc = RC_ADDR(0x00022fa2u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[0] = t0;

L_22FA4:
    /* 00022fa4   2  addq.l #1,A3 */
    c->pc = RC_ADDR(0x00022fa4u);
    rc_step(c, m, 8);
    c->a[3] += 0x00000001u;

L_22FA6:
    /* 00022fa6   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x00022fa6u);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_22FA8:
    /* 00022fa8   2  ext.w D0 */
    c->pc = RC_ADDR(0x00022fa8u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_22FAA:
    /* 00022faa   2  move.w D0,D4 */
    c->pc = RC_ADDR(0x00022faau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_22FAC:
    /* 00022fac   4  cmp.w #2a,D4 */
    c->pc = RC_ADDR(0x00022facu);
    rc_step(c, m, 8);
    t0 = 0x0000002au;
    t1 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_22FB0:
    /* 00022fb0   2  bne 00022fca */
    c->pc = RC_ADDR(0x00022fb0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_22FCA;

L_22FB2:
    /* 00022fb2   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00022fb2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_22FB6:
    /* 00022fb6   4  addq.l #2,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00022fb6u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_L, t1, 0x00000002u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_22FBA:
    /* 00022fba   4  move.w (A0),(fffffff2,A5) */
    c->pc = RC_ADDR(0x00022fbau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_22FBE:
    /* 00022fbe   2  movea.l A3,A0 */
    c->pc = RC_ADDR(0x00022fbeu);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[0] = t0;

L_22FC0:
    /* 00022fc0   2  addq.l #1,A3 */
    c->pc = RC_ADDR(0x00022fc0u);
    rc_step(c, m, 8);
    c->a[3] += 0x00000001u;

L_22FC2:
    /* 00022fc2   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x00022fc2u);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_22FC4:
    /* 00022fc4   2  ext.w D0 */
    c->pc = RC_ADDR(0x00022fc4u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_22FC6:
    /* 00022fc6   2  move.w D0,D4 */
    c->pc = RC_ADDR(0x00022fc6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_22FC8:
    /* 00022fc8   2  bra 00022ffc */
    c->pc = RC_ADDR(0x00022fc8u);
    rc_step(c, m, 10);
    goto L_22FFC;

L_22FCA:
    /* 00022fca   4  clr.w (fffffff2,A5) */
    c->pc = RC_ADDR(0x00022fcau);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0xeu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_22FCE:
    /* 00022fce   2  bra 00022fec */
    c->pc = RC_ADDR(0x00022fceu);
    rc_step(c, m, 10);
    goto L_22FEC;

L_22FD0:
    /* 00022fd0   4  move.w (fffffff2,A5),D0 */
    c->pc = RC_ADDR(0x00022fd0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_22FD4:
    /* 00022fd4   4  muls.w #a,D0 */
    c->pc = RC_ADDR(0x00022fd4u);
    rc_step(c, m, 42);
    t0 = 0x0000000au;
    rc_muls(c, 0, t0);

L_22FD8:
    /* 00022fd8   2  add.w D4,D0 */
    c->pc = RC_ADDR(0x00022fd8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_22FDA:
    /* 00022fda   4  sub.w #30,D0 */
    c->pc = RC_ADDR(0x00022fdau);
    rc_step(c, m, 10);
    t0 = 0x00000030u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_22FDE:
    /* 00022fde   4  move.w D0,(fffffff2,A5) */
    c->pc = RC_ADDR(0x00022fdeu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_22FE2:
    /* 00022fe2   2  movea.l A3,A0 */
    c->pc = RC_ADDR(0x00022fe2u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[0] = t0;

L_22FE4:
    /* 00022fe4   2  addq.l #1,A3 */
    c->pc = RC_ADDR(0x00022fe4u);
    rc_step(c, m, 8);
    c->a[3] += 0x00000001u;

L_22FE6:
    /* 00022fe6   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x00022fe6u);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_22FE8:
    /* 00022fe8   2  ext.w D0 */
    c->pc = RC_ADDR(0x00022fe8u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_22FEA:
    /* 00022fea   2  move.w D0,D4 */
    c->pc = RC_ADDR(0x00022feau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_22FEC:
    /* 00022fec   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x00022fecu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_22FEE:
    /* 00022fee   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x00022feeu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_22FF0:
    /* 00022ff0   4  lea (ffffd4c0,A4),A0 */
    c->pc = RC_ADDR(0x00022ff0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x2b40u);

L_22FF4:
    /* 00022ff4   6  btst #2,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00022ff4u);
    rc_step(c, m, 18);
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (c->a[0] + 0x0u + t4);
    t4 = 0x00000002u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_22FFA:
    /* 00022ffa   2  bne 00022fd0 */
    c->pc = RC_ADDR(0x00022ffau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_22FD0; }

L_22FFC:
    /* 00022ffc   4  cmp.w #2e,D4 */
    c->pc = RC_ADDR(0x00022ffcu);
    rc_step(c, m, 8);
    t0 = 0x0000002eu;
    t1 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_23000:
    /* 00023000   2  bne 0002305c */
    c->pc = RC_ADDR(0x00023000u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2305C;

L_23002:
    /* 00023002   2  movea.l A3,A0 */
    c->pc = RC_ADDR(0x00023002u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[0] = t0;

L_23004:
    /* 00023004   2  addq.l #1,A3 */
    c->pc = RC_ADDR(0x00023004u);
    rc_step(c, m, 8);
    c->a[3] += 0x00000001u;

L_23006:
    /* 00023006   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x00023006u);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_23008:
    /* 00023008   2  ext.w D0 */
    c->pc = RC_ADDR(0x00023008u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_2300A:
    /* 0002300a   2  move.w D0,D4 */
    c->pc = RC_ADDR(0x0002300au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2300C:
    /* 0002300c   4  cmp.w #2a,D0 */
    c->pc = RC_ADDR(0x0002300cu);
    rc_step(c, m, 8);
    t0 = 0x0000002au;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_23010:
    /* 00023010   2  bne 0002302a */
    c->pc = RC_ADDR(0x00023010u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2302A;

L_23012:
    /* 00023012   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00023012u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_23016:
    /* 00023016   4  addq.l #2,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00023016u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_L, t1, 0x00000002u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_2301A:
    /* 0002301a   4  move.w (A0),(fffffff4,A5) */
    c->pc = RC_ADDR(0x0002301au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_wr16(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2301E:
    /* 0002301e   2  movea.l A3,A0 */
    c->pc = RC_ADDR(0x0002301eu);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[0] = t0;

L_23020:
    /* 00023020   2  addq.l #1,A3 */
    c->pc = RC_ADDR(0x00023020u);
    rc_step(c, m, 8);
    c->a[3] += 0x00000001u;

L_23022:
    /* 00023022   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x00023022u);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_23024:
    /* 00023024   2  ext.w D0 */
    c->pc = RC_ADDR(0x00023024u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_23026:
    /* 00023026   2  move.w D0,D4 */
    c->pc = RC_ADDR(0x00023026u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_23028:
    /* 00023028   2  bra 0002305c */
    c->pc = RC_ADDR(0x00023028u);
    rc_step(c, m, 10);
    goto L_2305C;

L_2302A:
    /* 0002302a   4  clr.w (fffffff4,A5) */
    c->pc = RC_ADDR(0x0002302au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0xcu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2302E:
    /* 0002302e   2  bra 0002304c */
    c->pc = RC_ADDR(0x0002302eu);
    rc_step(c, m, 10);
    goto L_2304C;

L_23030:
    /* 00023030   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x00023030u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_23034:
    /* 00023034   4  muls.w #a,D0 */
    c->pc = RC_ADDR(0x00023034u);
    rc_step(c, m, 42);
    t0 = 0x0000000au;
    rc_muls(c, 0, t0);

L_23038:
    /* 00023038   2  add.w D4,D0 */
    c->pc = RC_ADDR(0x00023038u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_2303A:
    /* 0002303a   4  sub.w #30,D0 */
    c->pc = RC_ADDR(0x0002303au);
    rc_step(c, m, 10);
    t0 = 0x00000030u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_2303E:
    /* 0002303e   4  move.w D0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x0002303eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_23042:
    /* 00023042   2  movea.l A3,A0 */
    c->pc = RC_ADDR(0x00023042u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[0] = t0;

L_23044:
    /* 00023044   2  addq.l #1,A3 */
    c->pc = RC_ADDR(0x00023044u);
    rc_step(c, m, 8);
    c->a[3] += 0x00000001u;

L_23046:
    /* 00023046   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x00023046u);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_23048:
    /* 00023048   2  ext.w D0 */
    c->pc = RC_ADDR(0x00023048u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_2304A:
    /* 0002304a   2  move.w D0,D4 */
    c->pc = RC_ADDR(0x0002304au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2304C:
    /* 0002304c   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x0002304cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2304E:
    /* 0002304e   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x0002304eu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_23050:
    /* 00023050   4  lea (ffffd4c0,A4),A0 */
    c->pc = RC_ADDR(0x00023050u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x2b40u);

L_23054:
    /* 00023054   6  btst #2,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00023054u);
    rc_step(c, m, 18);
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (c->a[0] + 0x0u + t4);
    t4 = 0x00000002u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_2305A:
    /* 0002305a   2  bne 00023030 */
    c->pc = RC_ADDR(0x0002305au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_23030; }

L_2305C:
    /* 0002305c   6  move.w #2,(fffffff0,A5) */
    c->pc = RC_ADDR(0x0002305cu);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_23062:
    /* 00023062   4  cmp.w #6c,D4 */
    c->pc = RC_ADDR(0x00023062u);
    rc_step(c, m, 8);
    t0 = 0x0000006cu;
    t1 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_23066:
    /* 00023066   2  bne 0002307a */
    c->pc = RC_ADDR(0x00023066u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2307A;

L_23068:
    /* 00023068   2  movea.l A3,A0 */
    c->pc = RC_ADDR(0x00023068u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[0] = t0;

L_2306A:
    /* 0002306a   2  addq.l #1,A3 */
    c->pc = RC_ADDR(0x0002306au);
    rc_step(c, m, 8);
    c->a[3] += 0x00000001u;

L_2306C:
    /* 0002306c   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x0002306cu);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_2306E:
    /* 0002306e   2  ext.w D0 */
    c->pc = RC_ADDR(0x0002306eu);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_23070:
    /* 00023070   2  move.w D0,D4 */
    c->pc = RC_ADDR(0x00023070u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_23072:
    /* 00023072   6  move.w #4,(fffffff0,A5) */
    c->pc = RC_ADDR(0x00023072u);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_23078:
    /* 00023078   2  bra 0002308a */
    c->pc = RC_ADDR(0x00023078u);
    rc_step(c, m, 10);
    goto L_2308A;

L_2307A:
    /* 0002307a   4  cmp.w #68,D4 */
    c->pc = RC_ADDR(0x0002307au);
    rc_step(c, m, 8);
    t0 = 0x00000068u;
    t1 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_2307E:
    /* 0002307e   2  bne 0002308a */
    c->pc = RC_ADDR(0x0002307eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2308A;

L_23080:
    /* 00023080   2  movea.l A3,A0 */
    c->pc = RC_ADDR(0x00023080u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[0] = t0;

L_23082:
    /* 00023082   2  addq.l #1,A3 */
    c->pc = RC_ADDR(0x00023082u);
    rc_step(c, m, 8);
    c->a[3] += 0x00000001u;

L_23084:
    /* 00023084   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x00023084u);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_23086:
    /* 00023086   2  ext.w D0 */
    c->pc = RC_ADDR(0x00023086u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_23088:
    /* 00023088   2  move.w D0,D4 */
    c->pc = RC_ADDR(0x00023088u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2308A:
    /* 0002308a   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x0002308au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2308C:
    /* 0002308c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0002308cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_2308E:
    /* 0002308e   2  bra 0002310a */
    c->pc = RC_ADDR(0x0002308eu);
    rc_step(c, m, 10);
    goto L_2310A;

L_23090:
    /* 00023090   6  move.w #8,(ffffffee,A5) */
    c->pc = RC_ADDR(0x00023090u);
    rc_step(c, m, 16);
    t0 = 0x00000008u;
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_23096:
    /* 00023096   2  bra 000230ae */
    c->pc = RC_ADDR(0x00023096u);
    rc_step(c, m, 10);
    goto L_230AE;

L_23098:
    /* 00023098   6  move.w #a,(ffffffee,A5) */
    c->pc = RC_ADDR(0x00023098u);
    rc_step(c, m, 16);
    t0 = 0x0000000au;
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2309E:
    /* 0002309e   2  bra 000230ae */
    c->pc = RC_ADDR(0x0002309eu);
    rc_step(c, m, 10);
    goto L_230AE;

L_230A0:
    /* 000230a0   6  move.w #10,(ffffffee,A5) */
    c->pc = RC_ADDR(0x000230a0u);
    rc_step(c, m, 16);
    t0 = 0x00000010u;
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_230A6:
    /* 000230a6   2  bra 000230ae */
    c->pc = RC_ADDR(0x000230a6u);
    rc_step(c, m, 10);
    goto L_230AE;

L_230A8:
    /* 000230a8   6  move.w #fff6,(ffffffee,A5) */
    c->pc = RC_ADDR(0x000230a8u);
    rc_step(c, m, 16);
    t0 = 0x0000fff6u;
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_230AE:
    /* 000230ae   4  move.w (fffffff0,A5),-(A7) */
    c->pc = RC_ADDR(0x000230aeu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_230B2:
    /* 000230b2   4  pea (ffffff30,A5) */
    c->pc = RC_ADDR(0x000230b2u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0xd0u));

L_230B6:
    /* 000230b6   4  move.w (ffffffee,A5),-(A7) */
    c->pc = RC_ADDR(0x000230b6u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_230BA:
    /* 000230ba   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x000230bau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_230BE:
    /* 000230be   4  jsr (00022ea4) */
    c->pc = RC_ADDR(0x000230beu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000230c2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00022ea4u);
    return;

L_230C2:
    /* 000230c2   4  move.l D0,(ffffffea,A5) */
    c->pc = RC_ADDR(0x000230c2u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x16u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_230C6:
    /* 000230c6   4  move.w (fffffff0,A5),D0 */
    c->pc = RC_ADDR(0x000230c6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_230CA:
    /* 000230ca   2  ext.l D0 */
    c->pc = RC_ADDR(0x000230cau);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_230CC:
    /* 000230cc   4  add.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000230ccu);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_230D0:
    /* 000230d0   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000230d0u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_230D4:
    /* 000230d4   2  bra 00023132 */
    c->pc = RC_ADDR(0x000230d4u);
    rc_step(c, m, 10);
    goto L_23132;

L_230D6:
    /* 000230d6   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x000230d6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_230DA:
    /* 000230da   4  addq.l #4,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000230dau);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000004u;
    rc_flags_add(c, RC_L, t1, 0x00000004u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_230DE:
    /* 000230de   2  movea.l (A0),A1 */
    c->pc = RC_ADDR(0x000230deu);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[1] = t0;

L_230E0:
    /* 000230e0   4  move.l A1,(ffffffea,A5) */
    c->pc = RC_ADDR(0x000230e0u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x16u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_230E4:
    /* 000230e4   2  move.l A1,D0 */
    c->pc = RC_ADDR(0x000230e4u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 1, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_230E6:
    /* 000230e6   2  tst.b (A1)+ */
    c->pc = RC_ADDR(0x000230e6u);
    rc_step(c, m, 8);
    t3 = c->a[1];
    c->a[1] += 1u;
    t0 = rc_rd8(c, m, t3);
    rc_set_nzvc(c, t0, RC_B);

L_230E8:
    /* 000230e8   2  bne 000230e6 */
    c->pc = RC_ADDR(0x000230e8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_230E6; }

L_230EA:
    /* 000230ea   2  suba.l D0,A1 */
    c->pc = RC_ADDR(0x000230eau);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[1] -= t0;

L_230EC:
    /* 000230ec   2  subq.l #1,A1 */
    c->pc = RC_ADDR(0x000230ecu);
    rc_step(c, m, 8);
    c->a[1] -= 0x00000001u;

L_230EE:
    /* 000230ee   4  move.w A1,(fffffff0,A5) */
    c->pc = RC_ADDR(0x000230eeu);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_230F2:
    /* 000230f2   2  bra 0002313e */
    c->pc = RC_ADDR(0x000230f2u);
    rc_step(c, m, 10);
    goto L_2313E;

L_230F4:
    /* 000230f4   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x000230f4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_230F8:
    /* 000230f8   4  addq.l #2,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000230f8u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_L, t1, 0x00000002u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_230FC:
    /* 000230fc   2  move.w (A0),D4 */
    c->pc = RC_ADDR(0x000230fcu);
    rc_step(c, m, 8);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_230FE:
    /* 000230fe   4  lea (ffffff2f,A5),A0 */
    c->pc = RC_ADDR(0x000230feu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0xd1u);

L_23102:
    /* 00023102   4  move.l A0,(ffffffea,A5) */
    c->pc = RC_ADDR(0x00023102u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x16u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_23106:
    /* 00023106   2  move.b D4,(A0) */
    c->pc = RC_ADDR(0x00023106u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 4, RC_B);
    rc_wr8(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_B);

L_23108:
    /* 00023108   2  bra 00023132 */
    c->pc = RC_ADDR(0x00023108u);
    rc_step(c, m, 10);
    goto L_23132;

L_2310A:
    /* 0002310a   6  sub.l #63,D0 */
    c->pc = RC_ADDR(0x0002310au);
    rc_step(c, m, 16);
    t0 = 0x00000063u;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_23110:
    /* 00023110   2  beq 000230f4 */
    c->pc = RC_ADDR(0x00023110u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_230F4; }

L_23112:
    /* 00023112   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x00023112u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_23114:
    /* 00023114   2  beq 000230a8 */
    c->pc = RC_ADDR(0x00023114u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_230A8; }

L_23116:
    /* 00023116   6  sub.l #b,D0 */
    c->pc = RC_ADDR(0x00023116u);
    rc_step(c, m, 16);
    t0 = 0x0000000bu;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_2311C:
    /* 0002311c   4  beq 00023090 */
    c->pc = RC_ADDR(0x0002311cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_23090; }

L_23120:
    /* 00023120   2  subq.l #4,D0 */
    c->pc = RC_ADDR(0x00023120u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000004u;
    rc_flags_sub(c, RC_L, t1, 0x00000004u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_23122:
    /* 00023122   2  beq 000230d6 */
    c->pc = RC_ADDR(0x00023122u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_230D6; }

L_23124:
    /* 00023124   2  subq.l #2,D0 */
    c->pc = RC_ADDR(0x00023124u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_L, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_23126:
    /* 00023126   4  beq 00023098 */
    c->pc = RC_ADDR(0x00023126u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_23098; }

L_2312A:
    /* 0002312a   2  subq.l #3,D0 */
    c->pc = RC_ADDR(0x0002312au);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000003u;
    rc_flags_sub(c, RC_L, t1, 0x00000003u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_2312C:
    /* 0002312c   4  beq 000230a0 */
    c->pc = RC_ADDR(0x0002312cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_230A0; }

L_23130:
    /* 00023130   2  bra 000230fe */
    c->pc = RC_ADDR(0x00023130u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_230FE;

L_23132:
    /* 00023132   4  lea (ffffff30,A5),A0 */
    c->pc = RC_ADDR(0x00023132u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0xd0u);

L_23136:
    /* 00023136   4  suba.l (ffffffea,A5),A0 */
    c->pc = RC_ADDR(0x00023136u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] - 0x16u));
    c->a[0] -= t0;

L_2313A:
    /* 0002313a   4  move.w A0,(fffffff0,A5) */
    c->pc = RC_ADDR(0x0002313au);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2313E:
    /* 0002313e   4  move.w (fffffff0,A5),D0 */
    c->pc = RC_ADDR(0x0002313eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_23142:
    /* 00023142   4  cmp.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x00023142u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_23146:
    /* 00023146   2  ble 0002314e */
    c->pc = RC_ADDR(0x00023146u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_2314E;

L_23148:
    /* 00023148   6  move.w (fffffff4,A5),(fffffff0,A5) */
    c->pc = RC_ADDR(0x00023148u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_wr16(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2314E:
    /* 0002314e   4  tst.w (fffffff8,A5) */
    c->pc = RC_ADDR(0x0002314eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_23152:
    /* 00023152   2  beq 000231bc */
    c->pc = RC_ADDR(0x00023152u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_231BC;

L_23154:
    /* 00023154   4  movea.l (ffffffea,A5),A0 */
    c->pc = RC_ADDR(0x00023154u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x16u));
    c->a[0] = t0;

L_23158:
    /* 00023158   4  cmpi.b #2d,(A0) */
    c->pc = RC_ADDR(0x00023158u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x0000002du);

L_2315C:
    /* 0002315c   2  beq 00023168 */
    c->pc = RC_ADDR(0x0002315cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_23168;

L_2315E:
    /* 0002315e   4  movea.l (ffffffea,A5),A0 */
    c->pc = RC_ADDR(0x0002315eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x16u));
    c->a[0] = t0;

L_23162:
    /* 00023162   4  cmpi.b #2b,(A0) */
    c->pc = RC_ADDR(0x00023162u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x0000002bu);

L_23166:
    /* 00023166   2  bne 00023196 */
    c->pc = RC_ADDR(0x00023166u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_23196;

L_23168:
    /* 00023168   6  cmpi.w #30,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00023168u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_cmp(c, RC_W, t0, 0x00000030u);

L_2316E:
    /* 0002316e   2  bne 00023196 */
    c->pc = RC_ADDR(0x0002316eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_23196;

L_23170:
    /* 00023170   4  subq.w #1,(fffffff2,A5) */
    c->pc = RC_ADDR(0x00023170u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xeu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_23174:
    /* 00023174   4  movea.l (ffffffea,A5),A0 */
    c->pc = RC_ADDR(0x00023174u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x16u));
    c->a[0] = t0;

L_23178:
    /* 00023178   4  addq.l #1,(ffffffea,A5) */
    c->pc = RC_ADDR(0x00023178u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x16u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_2317C:
    /* 0002317c   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x0002317cu);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_2317E:
    /* 0002317e   2  ext.w D0 */
    c->pc = RC_ADDR(0x0002317eu);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_23180:
    /* 00023180   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00023180u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_23182:
    /* 00023182   2  jsr (A2) */
    c->pc = RC_ADDR(0x00023182u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00023184u));
    rc_depth++;
    t3 = c->a[2];
    c->pc = t3;
    return;

L_23184:
    /* 00023184   4  cmp.w #ffff,D0 */
    c->pc = RC_ADDR(0x00023184u);
    rc_step(c, m, 8);
    t0 = 0x0000ffffu;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_23188:
    /* 00023188   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00023188u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_2318A:
    /* 0002318a   2  bne 00023196 */
    c->pc = RC_ADDR(0x0002318au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_23196;

L_2318C:
    /* 0002318c   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x0002318cu);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_2318E:
    /* 0002318e   4  movem.l (SP)+,{ D4 A2 A3 } */
    c->pc = RC_ADDR(0x0002318eu);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_23192:
    /* 00023192   2  unlk A5 */
    c->pc = RC_ADDR(0x00023192u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_23194:
    /* 00023194   2  rts */
    c->pc = RC_ADDR(0x00023194u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_23196:
    /* 00023196   2  bra 000231ae */
    c->pc = RC_ADDR(0x00023196u);
    rc_step(c, m, 10);
    goto L_231AE;

L_23198:
    /* 00023198   4  move.w (fffffff6,A5),-(A7) */
    c->pc = RC_ADDR(0x00023198u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2319C:
    /* 0002319c   2  jsr (A2) */
    c->pc = RC_ADDR(0x0002319cu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0002319eu));
    rc_depth++;
    t3 = c->a[2];
    c->pc = t3;
    return;

L_2319E:
    /* 0002319e   4  cmp.w #ffff,D0 */
    c->pc = RC_ADDR(0x0002319eu);
    rc_step(c, m, 8);
    t0 = 0x0000ffffu;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_231A2:
    /* 000231a2   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000231a2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_231A4:
    /* 000231a4   2  bne 000231aa */
    c->pc = RC_ADDR(0x000231a4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_231AA;

L_231A6:
    /* 000231a6   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x000231a6u);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_231A8:
    /* 000231a8   2  bra 0002318e */
    c->pc = RC_ADDR(0x000231a8u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_2318E;

L_231AA:
    /* 000231aa   4  addq.w #1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x000231aau);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_231AE:
    /* 000231ae   4  move.w (fffffff2,A5),D0 */
    c->pc = RC_ADDR(0x000231aeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_231B2:
    /* 000231b2   4  subq.w #1,(fffffff2,A5) */
    c->pc = RC_ADDR(0x000231b2u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xeu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_231B6:
    /* 000231b6   4  cmp.w (fffffff0,A5),D0 */
    c->pc = RC_ADDR(0x000231b6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_231BA:
    /* 000231ba   2  bgt 00023198 */
    c->pc = RC_ADDR(0x000231bau);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) { rc_tick(); goto L_23198; }

L_231BC:
    /* 000231bc   4  clr.w (ffffffee,A5) */
    c->pc = RC_ADDR(0x000231bcu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x12u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_231C0:
    /* 000231c0   2  bra 000231e2 */
    c->pc = RC_ADDR(0x000231c0u);
    rc_step(c, m, 10);
    goto L_231E2;

L_231C2:
    /* 000231c2   4  movea.l (ffffffea,A5),A0 */
    c->pc = RC_ADDR(0x000231c2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x16u));
    c->a[0] = t0;

L_231C6:
    /* 000231c6   4  addq.l #1,(ffffffea,A5) */
    c->pc = RC_ADDR(0x000231c6u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x16u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_231CA:
    /* 000231ca   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x000231cau);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_231CC:
    /* 000231cc   2  ext.w D0 */
    c->pc = RC_ADDR(0x000231ccu);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_231CE:
    /* 000231ce   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x000231ceu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_231D0:
    /* 000231d0   2  jsr (A2) */
    c->pc = RC_ADDR(0x000231d0u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000231d2u));
    rc_depth++;
    t3 = c->a[2];
    c->pc = t3;
    return;

L_231D2:
    /* 000231d2   4  cmp.w #ffff,D0 */
    c->pc = RC_ADDR(0x000231d2u);
    rc_step(c, m, 8);
    t0 = 0x0000ffffu;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_231D6:
    /* 000231d6   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000231d6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_231D8:
    /* 000231d8   2  bne 000231de */
    c->pc = RC_ADDR(0x000231d8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_231DE;

L_231DA:
    /* 000231da   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x000231dau);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_231DC:
    /* 000231dc   2  bra 0002318e */
    c->pc = RC_ADDR(0x000231dcu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_2318E;

L_231DE:
    /* 000231de   4  addq.w #1,(ffffffee,A5) */
    c->pc = RC_ADDR(0x000231deu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x12u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_231E2:
    /* 000231e2   4  movea.l (ffffffea,A5),A0 */
    c->pc = RC_ADDR(0x000231e2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x16u));
    c->a[0] = t0;

L_231E6:
    /* 000231e6   2  tst.b (A0) */
    c->pc = RC_ADDR(0x000231e6u);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_set_nzvc(c, t0, RC_B);

L_231E8:
    /* 000231e8   2  beq 000231f4 */
    c->pc = RC_ADDR(0x000231e8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_231F4;

L_231EA:
    /* 000231ea   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x000231eau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_231EE:
    /* 000231ee   4  cmp.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x000231eeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_231F2:
    /* 000231f2   2  blt 000231c2 */
    c->pc = RC_ADDR(0x000231f2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_231C2; }

L_231F4:
    /* 000231f4   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x000231f4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_231F8:
    /* 000231f8   4  add.w D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x000231f8u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_231FC:
    /* 000231fc   4  tst.w (fffffff8,A5) */
    c->pc = RC_ADDR(0x000231fcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_23200:
    /* 00023200   2  bne 0002322a */
    c->pc = RC_ADDR(0x00023200u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2322A;

L_23202:
    /* 00023202   2  bra 0002321c */
    c->pc = RC_ADDR(0x00023202u);
    rc_step(c, m, 10);
    goto L_2321C;

L_23204:
    /* 00023204   4  move.w #20,-(A7) */
    c->pc = RC_ADDR(0x00023204u);
    rc_step(c, m, 12);
    t0 = 0x00000020u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_23208:
    /* 00023208   2  jsr (A2) */
    c->pc = RC_ADDR(0x00023208u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0002320au));
    rc_depth++;
    t3 = c->a[2];
    c->pc = t3;
    return;

L_2320A:
    /* 0002320a   4  cmp.w #ffff,D0 */
    c->pc = RC_ADDR(0x0002320au);
    rc_step(c, m, 8);
    t0 = 0x0000ffffu;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_2320E:
    /* 0002320e   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0002320eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_23210:
    /* 00023210   2  bne 00023218 */
    c->pc = RC_ADDR(0x00023210u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_23218;

L_23212:
    /* 00023212   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x00023212u);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_23214:
    /* 00023214   4  bra 0002318e */
    c->pc = RC_ADDR(0x00023214u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_2318E;

L_23218:
    /* 00023218   4  addq.w #1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00023218u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_2321C:
    /* 0002321c   4  move.w (fffffff2,A5),D0 */
    c->pc = RC_ADDR(0x0002321cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_23220:
    /* 00023220   4  subq.w #1,(fffffff2,A5) */
    c->pc = RC_ADDR(0x00023220u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xeu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_23224:
    /* 00023224   4  cmp.w (fffffff0,A5),D0 */
    c->pc = RC_ADDR(0x00023224u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_23228:
    /* 00023228   2  bgt 00023204 */
    c->pc = RC_ADDR(0x00023228u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) { rc_tick(); goto L_23204; }

L_2322A:
    /* 0002322a   2  bra 00023242 */
    c->pc = RC_ADDR(0x0002322au);
    rc_step(c, m, 10);
    goto L_23242;

L_2322C:
    /* 0002322c   2  move.w D4,-(A7) */
    c->pc = RC_ADDR(0x0002322cu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 4, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2322E:
    /* 0002322e   2  jsr (A2) */
    c->pc = RC_ADDR(0x0002322eu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00023230u));
    rc_depth++;
    t3 = c->a[2];
    c->pc = t3;
    return;

L_23230:
    /* 00023230   4  cmp.w #ffff,D0 */
    c->pc = RC_ADDR(0x00023230u);
    rc_step(c, m, 8);
    t0 = 0x0000ffffu;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_23234:
    /* 00023234   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00023234u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_23236:
    /* 00023236   2  bne 0002323e */
    c->pc = RC_ADDR(0x00023236u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2323E;

L_23238:
    /* 00023238   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x00023238u);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_2323A:
    /* 0002323a   4  bra 0002318e */
    c->pc = RC_ADDR(0x0002323au);
    rc_step(c, m, 10);
    rc_tick();
    goto L_2318E;

L_2323E:
    /* 0002323e   4  addq.w #1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x0002323eu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_23242:
    /* 00023242   4  bra 00022f4c */
    c->pc = RC_ADDR(0x00023242u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_22F4C;

L_23246:
    /* 00023246   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00023246u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2324A:
    /* 0002324a   4  bra 0002318e */
    c->pc = RC_ADDR(0x0002324au);
    rc_step(c, m, 10);
    rc_tick();
    goto L_2318E;

}
