/* fn_00020e90 - 796 byte(s), 264 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00020e90(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00020e90u): goto L_20E90;
    case RC_ADDR(0x00020e94u): goto L_20E94;
    case RC_ADDR(0x00020e98u): goto L_20E98;
    case RC_ADDR(0x00020e9cu): goto L_20E9C;
    case RC_ADDR(0x00020ea0u): goto L_20EA0;
    case RC_ADDR(0x00020ea4u): goto L_20EA4;
    case RC_ADDR(0x00020eaau): goto L_20EAA;
    case RC_ADDR(0x00020eacu): goto L_20EAC;
    case RC_ADDR(0x00020eaeu): goto L_20EAE;
    case RC_ADDR(0x00020eb0u): goto L_20EB0;
    case RC_ADDR(0x00020eb2u): goto L_20EB2;
    case RC_ADDR(0x00020eb4u): goto L_20EB4;
    case RC_ADDR(0x00020eb8u): goto L_20EB8;
    case RC_ADDR(0x00020ebcu): goto L_20EBC;
    case RC_ADDR(0x00020ec0u): goto L_20EC0;
    case RC_ADDR(0x00020ec4u): goto L_20EC4;
    case RC_ADDR(0x00020ecau): goto L_20ECA;
    case RC_ADDR(0x00020ed0u): goto L_20ED0;
    case RC_ADDR(0x00020ed6u): goto L_20ED6;
    case RC_ADDR(0x00020ed8u): goto L_20ED8;
    case RC_ADDR(0x00020edau): goto L_20EDA;
    case RC_ADDR(0x00020edcu): goto L_20EDC;
    case RC_ADDR(0x00020edeu): goto L_20EDE;
    case RC_ADDR(0x00020ee0u): goto L_20EE0;
    case RC_ADDR(0x00020ee4u): goto L_20EE4;
    case RC_ADDR(0x00020ee6u): goto L_20EE6;
    case RC_ADDR(0x00020eeau): goto L_20EEA;
    case RC_ADDR(0x00020eecu): goto L_20EEC;
    case RC_ADDR(0x00020eeeu): goto L_20EEE;
    case RC_ADDR(0x00020ef0u): goto L_20EF0;
    case RC_ADDR(0x00020ef2u): goto L_20EF2;
    case RC_ADDR(0x00020ef4u): goto L_20EF4;
    case RC_ADDR(0x00020ef8u): goto L_20EF8;
    case RC_ADDR(0x00020efau): goto L_20EFA;
    case RC_ADDR(0x00020f00u): goto L_20F00;
    case RC_ADDR(0x00020f02u): goto L_20F02;
    case RC_ADDR(0x00020f04u): goto L_20F04;
    case RC_ADDR(0x00020f06u): goto L_20F06;
    case RC_ADDR(0x00020f08u): goto L_20F08;
    case RC_ADDR(0x00020f0au): goto L_20F0A;
    case RC_ADDR(0x00020f0eu): goto L_20F0E;
    case RC_ADDR(0x00020f10u): goto L_20F10;
    case RC_ADDR(0x00020f14u): goto L_20F14;
    case RC_ADDR(0x00020f18u): goto L_20F18;
    case RC_ADDR(0x00020f1cu): goto L_20F1C;
    case RC_ADDR(0x00020f1eu): goto L_20F1E;
    case RC_ADDR(0x00020f20u): goto L_20F20;
    case RC_ADDR(0x00020f22u): goto L_20F22;
    case RC_ADDR(0x00020f24u): goto L_20F24;
    case RC_ADDR(0x00020f26u): goto L_20F26;
    case RC_ADDR(0x00020f28u): goto L_20F28;
    case RC_ADDR(0x00020f2cu): goto L_20F2C;
    case RC_ADDR(0x00020f2eu): goto L_20F2E;
    case RC_ADDR(0x00020f32u): goto L_20F32;
    case RC_ADDR(0x00020f36u): goto L_20F36;
    case RC_ADDR(0x00020f38u): goto L_20F38;
    case RC_ADDR(0x00020f3cu): goto L_20F3C;
    case RC_ADDR(0x00020f40u): goto L_20F40;
    case RC_ADDR(0x00020f42u): goto L_20F42;
    case RC_ADDR(0x00020f44u): goto L_20F44;
    case RC_ADDR(0x00020f46u): goto L_20F46;
    case RC_ADDR(0x00020f48u): goto L_20F48;
    case RC_ADDR(0x00020f4au): goto L_20F4A;
    case RC_ADDR(0x00020f4cu): goto L_20F4C;
    case RC_ADDR(0x00020f4eu): goto L_20F4E;
    case RC_ADDR(0x00020f52u): goto L_20F52;
    case RC_ADDR(0x00020f58u): goto L_20F58;
    case RC_ADDR(0x00020f5au): goto L_20F5A;
    case RC_ADDR(0x00020f5eu): goto L_20F5E;
    case RC_ADDR(0x00020f60u): goto L_20F60;
    case RC_ADDR(0x00020f62u): goto L_20F62;
    case RC_ADDR(0x00020f64u): goto L_20F64;
    case RC_ADDR(0x00020f66u): goto L_20F66;
    case RC_ADDR(0x00020f68u): goto L_20F68;
    case RC_ADDR(0x00020f6au): goto L_20F6A;
    case RC_ADDR(0x00020f6eu): goto L_20F6E;
    case RC_ADDR(0x00020f70u): goto L_20F70;
    case RC_ADDR(0x00020f74u): goto L_20F74;
    case RC_ADDR(0x00020f78u): goto L_20F78;
    case RC_ADDR(0x00020f7cu): goto L_20F7C;
    case RC_ADDR(0x00020f7eu): goto L_20F7E;
    case RC_ADDR(0x00020f80u): goto L_20F80;
    case RC_ADDR(0x00020f82u): goto L_20F82;
    case RC_ADDR(0x00020f84u): goto L_20F84;
    case RC_ADDR(0x00020f86u): goto L_20F86;
    case RC_ADDR(0x00020f88u): goto L_20F88;
    case RC_ADDR(0x00020f8cu): goto L_20F8C;
    case RC_ADDR(0x00020f8eu): goto L_20F8E;
    case RC_ADDR(0x00020f92u): goto L_20F92;
    case RC_ADDR(0x00020f96u): goto L_20F96;
    case RC_ADDR(0x00020f98u): goto L_20F98;
    case RC_ADDR(0x00020f9cu): goto L_20F9C;
    case RC_ADDR(0x00020fa0u): goto L_20FA0;
    case RC_ADDR(0x00020fa2u): goto L_20FA2;
    case RC_ADDR(0x00020fa4u): goto L_20FA4;
    case RC_ADDR(0x00020fa6u): goto L_20FA6;
    case RC_ADDR(0x00020fa8u): goto L_20FA8;
    case RC_ADDR(0x00020faau): goto L_20FAA;
    case RC_ADDR(0x00020facu): goto L_20FAC;
    case RC_ADDR(0x00020faeu): goto L_20FAE;
    case RC_ADDR(0x00020fb2u): goto L_20FB2;
    case RC_ADDR(0x00020fb8u): goto L_20FB8;
    case RC_ADDR(0x00020fbau): goto L_20FBA;
    case RC_ADDR(0x00020fc0u): goto L_20FC0;
    case RC_ADDR(0x00020fc4u): goto L_20FC4;
    case RC_ADDR(0x00020fc6u): goto L_20FC6;
    case RC_ADDR(0x00020fc8u): goto L_20FC8;
    case RC_ADDR(0x00020fcau): goto L_20FCA;
    case RC_ADDR(0x00020fccu): goto L_20FCC;
    case RC_ADDR(0x00020fceu): goto L_20FCE;
    case RC_ADDR(0x00020fd0u): goto L_20FD0;
    case RC_ADDR(0x00020fd6u): goto L_20FD6;
    case RC_ADDR(0x00020fd8u): goto L_20FD8;
    case RC_ADDR(0x00020fdcu): goto L_20FDC;
    case RC_ADDR(0x00020fdeu): goto L_20FDE;
    case RC_ADDR(0x00020fe0u): goto L_20FE0;
    case RC_ADDR(0x00020fe2u): goto L_20FE2;
    case RC_ADDR(0x00020fe4u): goto L_20FE4;
    case RC_ADDR(0x00020fe6u): goto L_20FE6;
    case RC_ADDR(0x00020fe8u): goto L_20FE8;
    case RC_ADDR(0x00020feau): goto L_20FEA;
    case RC_ADDR(0x00020fecu): goto L_20FEC;
    case RC_ADDR(0x00020feeu): goto L_20FEE;
    case RC_ADDR(0x00020ff4u): goto L_20FF4;
    case RC_ADDR(0x00020ff6u): goto L_20FF6;
    case RC_ADDR(0x00020ffcu): goto L_20FFC;
    case RC_ADDR(0x00020ffeu): goto L_20FFE;
    case RC_ADDR(0x00021004u): goto L_21004;
    case RC_ADDR(0x00021006u): goto L_21006;
    case RC_ADDR(0x0002100cu): goto L_2100C;
    case RC_ADDR(0x00021010u): goto L_21010;
    case RC_ADDR(0x00021014u): goto L_21014;
    case RC_ADDR(0x00021018u): goto L_21018;
    case RC_ADDR(0x0002101cu): goto L_2101C;
    case RC_ADDR(0x00021020u): goto L_21020;
    case RC_ADDR(0x00021024u): goto L_21024;
    case RC_ADDR(0x00021028u): goto L_21028;
    case RC_ADDR(0x0002102au): goto L_2102A;
    case RC_ADDR(0x0002102eu): goto L_2102E;
    case RC_ADDR(0x00021032u): goto L_21032;
    case RC_ADDR(0x00021034u): goto L_21034;
    case RC_ADDR(0x00021038u): goto L_21038;
    case RC_ADDR(0x0002103cu): goto L_2103C;
    case RC_ADDR(0x0002103eu): goto L_2103E;
    case RC_ADDR(0x00021042u): goto L_21042;
    case RC_ADDR(0x00021044u): goto L_21044;
    case RC_ADDR(0x00021046u): goto L_21046;
    case RC_ADDR(0x00021048u): goto L_21048;
    case RC_ADDR(0x0002104au): goto L_2104A;
    case RC_ADDR(0x0002104cu): goto L_2104C;
    case RC_ADDR(0x00021050u): goto L_21050;
    case RC_ADDR(0x00021052u): goto L_21052;
    case RC_ADDR(0x00021056u): goto L_21056;
    case RC_ADDR(0x0002105au): goto L_2105A;
    case RC_ADDR(0x0002105cu): goto L_2105C;
    case RC_ADDR(0x00021060u): goto L_21060;
    case RC_ADDR(0x00021064u): goto L_21064;
    case RC_ADDR(0x00021066u): goto L_21066;
    case RC_ADDR(0x00021068u): goto L_21068;
    case RC_ADDR(0x0002106eu): goto L_2106E;
    case RC_ADDR(0x00021070u): goto L_21070;
    case RC_ADDR(0x00021072u): goto L_21072;
    case RC_ADDR(0x00021074u): goto L_21074;
    case RC_ADDR(0x0002107au): goto L_2107A;
    case RC_ADDR(0x0002107eu): goto L_2107E;
    case RC_ADDR(0x00021080u): goto L_21080;
    case RC_ADDR(0x00021082u): goto L_21082;
    case RC_ADDR(0x00021084u): goto L_21084;
    case RC_ADDR(0x00021088u): goto L_21088;
    case RC_ADDR(0x0002108au): goto L_2108A;
    case RC_ADDR(0x0002108eu): goto L_2108E;
    case RC_ADDR(0x00021090u): goto L_21090;
    case RC_ADDR(0x00021094u): goto L_21094;
    case RC_ADDR(0x00021098u): goto L_21098;
    case RC_ADDR(0x0002109cu): goto L_2109C;
    case RC_ADDR(0x000210a0u): goto L_210A0;
    case RC_ADDR(0x000210a4u): goto L_210A4;
    case RC_ADDR(0x000210a6u): goto L_210A6;
    case RC_ADDR(0x000210acu): goto L_210AC;
    case RC_ADDR(0x000210b0u): goto L_210B0;
    case RC_ADDR(0x000210b2u): goto L_210B2;
    case RC_ADDR(0x000210b6u): goto L_210B6;
    case RC_ADDR(0x000210bau): goto L_210BA;
    case RC_ADDR(0x000210bcu): goto L_210BC;
    case RC_ADDR(0x000210c0u): goto L_210C0;
    case RC_ADDR(0x000210c4u): goto L_210C4;
    case RC_ADDR(0x000210c6u): goto L_210C6;
    case RC_ADDR(0x000210ccu): goto L_210CC;
    case RC_ADDR(0x000210ceu): goto L_210CE;
    case RC_ADDR(0x000210d2u): goto L_210D2;
    case RC_ADDR(0x000210d6u): goto L_210D6;
    case RC_ADDR(0x000210dau): goto L_210DA;
    case RC_ADDR(0x000210dcu): goto L_210DC;
    case RC_ADDR(0x000210deu): goto L_210DE;
    case RC_ADDR(0x000210e0u): goto L_210E0;
    case RC_ADDR(0x000210e2u): goto L_210E2;
    case RC_ADDR(0x000210e6u): goto L_210E6;
    case RC_ADDR(0x000210e8u): goto L_210E8;
    case RC_ADDR(0x000210eau): goto L_210EA;
    case RC_ADDR(0x000210ecu): goto L_210EC;
    case RC_ADDR(0x000210f0u): goto L_210F0;
    case RC_ADDR(0x000210f2u): goto L_210F2;
    case RC_ADDR(0x000210f4u): goto L_210F4;
    case RC_ADDR(0x000210f6u): goto L_210F6;
    case RC_ADDR(0x000210fau): goto L_210FA;
    case RC_ADDR(0x000210fcu): goto L_210FC;
    case RC_ADDR(0x00021100u): goto L_21100;
    case RC_ADDR(0x00021102u): goto L_21102;
    case RC_ADDR(0x00021104u): goto L_21104;
    case RC_ADDR(0x00021106u): goto L_21106;
    case RC_ADDR(0x00021108u): goto L_21108;
    case RC_ADDR(0x0002110cu): goto L_2110C;
    case RC_ADDR(0x00021110u): goto L_21110;
    case RC_ADDR(0x00021114u): goto L_21114;
    case RC_ADDR(0x00021118u): goto L_21118;
    case RC_ADDR(0x0002111au): goto L_2111A;
    case RC_ADDR(0x0002111eu): goto L_2111E;
    case RC_ADDR(0x00021120u): goto L_21120;
    case RC_ADDR(0x00021124u): goto L_21124;
    case RC_ADDR(0x00021128u): goto L_21128;
    case RC_ADDR(0x0002112au): goto L_2112A;
    case RC_ADDR(0x0002112cu): goto L_2112C;
    case RC_ADDR(0x0002112eu): goto L_2112E;
    case RC_ADDR(0x00021130u): goto L_21130;
    case RC_ADDR(0x00021134u): goto L_21134;
    case RC_ADDR(0x00021136u): goto L_21136;
    case RC_ADDR(0x00021138u): goto L_21138;
    case RC_ADDR(0x0002113au): goto L_2113A;
    case RC_ADDR(0x0002113cu): goto L_2113C;
    case RC_ADDR(0x00021140u): goto L_21140;
    case RC_ADDR(0x00021144u): goto L_21144;
    case RC_ADDR(0x00021146u): goto L_21146;
    case RC_ADDR(0x00021148u): goto L_21148;
    case RC_ADDR(0x0002114cu): goto L_2114C;
    case RC_ADDR(0x00021150u): goto L_21150;
    case RC_ADDR(0x00021152u): goto L_21152;
    case RC_ADDR(0x00021156u): goto L_21156;
    case RC_ADDR(0x0002115au): goto L_2115A;
    case RC_ADDR(0x0002115eu): goto L_2115E;
    case RC_ADDR(0x00021160u): goto L_21160;
    case RC_ADDR(0x00021162u): goto L_21162;
    case RC_ADDR(0x00021166u): goto L_21166;
    case RC_ADDR(0x00021168u): goto L_21168;
    case RC_ADDR(0x0002116cu): goto L_2116C;
    case RC_ADDR(0x0002116eu): goto L_2116E;
    case RC_ADDR(0x00021170u): goto L_21170;
    case RC_ADDR(0x00021172u): goto L_21172;
    case RC_ADDR(0x00021176u): goto L_21176;
    case RC_ADDR(0x0002117au): goto L_2117A;
    case RC_ADDR(0x0002117eu): goto L_2117E;
    case RC_ADDR(0x00021182u): goto L_21182;
    case RC_ADDR(0x00021186u): goto L_21186;
    case RC_ADDR(0x00021188u): goto L_21188;
    case RC_ADDR(0x0002118au): goto L_2118A;
    case RC_ADDR(0x0002118cu): goto L_2118C;
    case RC_ADDR(0x0002118eu): goto L_2118E;
    case RC_ADDR(0x00021192u): goto L_21192;
    case RC_ADDR(0x00021194u): goto L_21194;
    case RC_ADDR(0x00021196u): goto L_21196;
    case RC_ADDR(0x00021198u): goto L_21198;
    case RC_ADDR(0x0002119cu): goto L_2119C;
    case RC_ADDR(0x000211a0u): goto L_211A0;
    case RC_ADDR(0x000211a4u): goto L_211A4;
    case RC_ADDR(0x000211a8u): goto L_211A8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_20E90:
    /* 00020e90   4  link.w A5,#ffffff22 */
    c->pc = RC_ADDR(0x00020e90u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xdeu;

L_20E94:
    /* 00020e94   4  movem.l { D4 D5 A3 },-(SP) */
    c->pc = RC_ADDR(0x00020e94u);
    rc_step(c, m);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_20E98:
    /* 00020e98   4  movea.l (8,A5),A2 */
    c->pc = RC_ADDR(0x00020e98u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[2] = t0;

L_20E9C:
    /* 00020e9c   4  movea.l (c,A5),A3 */
    c->pc = RC_ADDR(0x00020e9cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[3] = t0;

L_20EA0:
    /* 00020ea0   4  clr.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x00020ea0u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_20EA4:
    /* 00020ea4   6  move.l (10,A5),(fffffffc,A5) */
    c->pc = RC_ADDR(0x00020ea4u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_20EAA:
    /* 00020eaa   2  movea.l A3,A0 */
    c->pc = RC_ADDR(0x00020eaau);
    rc_step(c, m);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[0] = t0;

L_20EAC:
    /* 00020eac   2  addq.l #1,A3 */
    c->pc = RC_ADDR(0x00020eacu);
    rc_step(c, m);
    c->a[3] += 0x00000001u;

L_20EAE:
    /* 00020eae   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x00020eaeu);
    rc_step(c, m);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_20EB0:
    /* 00020eb0   2  ext.w D0 */
    c->pc = RC_ADDR(0x00020eb0u);
    rc_step(c, m);
    rc_ext_w(c, 0);

L_20EB2:
    /* 00020eb2   2  move.w D0,D4 */
    c->pc = RC_ADDR(0x00020eb2u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20EB4:
    /* 00020eb4   4  beq 000211a4 */
    c->pc = RC_ADDR(0x00020eb4u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_211A4;

L_20EB8:
    /* 00020eb8   4  cmp.w #25,D4 */
    c->pc = RC_ADDR(0x00020eb8u);
    rc_step(c, m);
    t0 = 0x00000025u;
    t1 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_20EBC:
    /* 00020ebc   4  bne 0002118a */
    c->pc = RC_ADDR(0x00020ebcu);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_2118A;

L_20EC0:
    /* 00020ec0   4  clr.b (ffffff30,A5) */
    c->pc = RC_ADDR(0x00020ec0u);
    rc_step(c, m);
    rc_wr8(c, m, (c->a[5] - 0xd0u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_20EC4:
    /* 00020ec4   6  move.w #1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00020ec4u);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20ECA:
    /* 00020eca   6  move.w #20,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00020ecau);
    rc_step(c, m);
    t0 = 0x00000020u;
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20ED0:
    /* 00020ed0   6  move.w #2710,(fffffff4,A5) */
    c->pc = RC_ADDR(0x00020ed0u);
    rc_step(c, m);
    t0 = 0x00002710u;
    rc_wr16(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20ED6:
    /* 00020ed6   2  movea.l A3,A0 */
    c->pc = RC_ADDR(0x00020ed6u);
    rc_step(c, m);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[0] = t0;

L_20ED8:
    /* 00020ed8   2  addq.l #1,A3 */
    c->pc = RC_ADDR(0x00020ed8u);
    rc_step(c, m);
    c->a[3] += 0x00000001u;

L_20EDA:
    /* 00020eda   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x00020edau);
    rc_step(c, m);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_20EDC:
    /* 00020edc   2  ext.w D0 */
    c->pc = RC_ADDR(0x00020edcu);
    rc_step(c, m);
    rc_ext_w(c, 0);

L_20EDE:
    /* 00020ede   2  move.w D0,D4 */
    c->pc = RC_ADDR(0x00020edeu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20EE0:
    /* 00020ee0   4  cmp.w #2d,D0 */
    c->pc = RC_ADDR(0x00020ee0u);
    rc_step(c, m);
    t0 = 0x0000002du;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_20EE4:
    /* 00020ee4   2  bne 00020ef4 */
    c->pc = RC_ADDR(0x00020ee4u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_20EF4;

L_20EE6:
    /* 00020ee6   4  clr.w (fffffff8,A5) */
    c->pc = RC_ADDR(0x00020ee6u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_20EEA:
    /* 00020eea   2  movea.l A3,A0 */
    c->pc = RC_ADDR(0x00020eeau);
    rc_step(c, m);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[0] = t0;

L_20EEC:
    /* 00020eec   2  addq.l #1,A3 */
    c->pc = RC_ADDR(0x00020eecu);
    rc_step(c, m);
    c->a[3] += 0x00000001u;

L_20EEE:
    /* 00020eee   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x00020eeeu);
    rc_step(c, m);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_20EF0:
    /* 00020ef0   2  ext.w D0 */
    c->pc = RC_ADDR(0x00020ef0u);
    rc_step(c, m);
    rc_ext_w(c, 0);

L_20EF2:
    /* 00020ef2   2  move.w D0,D4 */
    c->pc = RC_ADDR(0x00020ef2u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20EF4:
    /* 00020ef4   4  cmp.w #30,D4 */
    c->pc = RC_ADDR(0x00020ef4u);
    rc_step(c, m);
    t0 = 0x00000030u;
    t1 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_20EF8:
    /* 00020ef8   2  bne 00020f0a */
    c->pc = RC_ADDR(0x00020ef8u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_20F0A;

L_20EFA:
    /* 00020efa   6  move.w #30,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00020efau);
    rc_step(c, m);
    t0 = 0x00000030u;
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20F00:
    /* 00020f00   2  movea.l A3,A0 */
    c->pc = RC_ADDR(0x00020f00u);
    rc_step(c, m);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[0] = t0;

L_20F02:
    /* 00020f02   2  addq.l #1,A3 */
    c->pc = RC_ADDR(0x00020f02u);
    rc_step(c, m);
    c->a[3] += 0x00000001u;

L_20F04:
    /* 00020f04   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x00020f04u);
    rc_step(c, m);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_20F06:
    /* 00020f06   2  ext.w D0 */
    c->pc = RC_ADDR(0x00020f06u);
    rc_step(c, m);
    rc_ext_w(c, 0);

L_20F08:
    /* 00020f08   2  move.w D0,D4 */
    c->pc = RC_ADDR(0x00020f08u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20F0A:
    /* 00020f0a   4  cmp.w #2a,D4 */
    c->pc = RC_ADDR(0x00020f0au);
    rc_step(c, m);
    t0 = 0x0000002au;
    t1 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_20F0E:
    /* 00020f0e   2  bne 00020f28 */
    c->pc = RC_ADDR(0x00020f0eu);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_20F28;

L_20F10:
    /* 00020f10   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00020f10u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_20F14:
    /* 00020f14   4  addq.l #2,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00020f14u);
    rc_step(c, m);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_L, t1, 0x00000002u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_20F18:
    /* 00020f18   4  move.w (A0),(fffffff2,A5) */
    c->pc = RC_ADDR(0x00020f18u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20F1C:
    /* 00020f1c   2  movea.l A3,A0 */
    c->pc = RC_ADDR(0x00020f1cu);
    rc_step(c, m);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[0] = t0;

L_20F1E:
    /* 00020f1e   2  addq.l #1,A3 */
    c->pc = RC_ADDR(0x00020f1eu);
    rc_step(c, m);
    c->a[3] += 0x00000001u;

L_20F20:
    /* 00020f20   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x00020f20u);
    rc_step(c, m);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_20F22:
    /* 00020f22   2  ext.w D0 */
    c->pc = RC_ADDR(0x00020f22u);
    rc_step(c, m);
    rc_ext_w(c, 0);

L_20F24:
    /* 00020f24   2  move.w D0,D4 */
    c->pc = RC_ADDR(0x00020f24u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20F26:
    /* 00020f26   2  bra 00020f5a */
    c->pc = RC_ADDR(0x00020f26u);
    rc_step(c, m);
    goto L_20F5A;

L_20F28:
    /* 00020f28   4  clr.w (fffffff2,A5) */
    c->pc = RC_ADDR(0x00020f28u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] - 0xeu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_20F2C:
    /* 00020f2c   2  bra 00020f4a */
    c->pc = RC_ADDR(0x00020f2cu);
    rc_step(c, m);
    goto L_20F4A;

L_20F2E:
    /* 00020f2e   4  move.w (fffffff2,A5),D0 */
    c->pc = RC_ADDR(0x00020f2eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20F32:
    /* 00020f32   4  muls.w #a,D0 */
    c->pc = RC_ADDR(0x00020f32u);
    rc_step(c, m);
    t0 = 0x0000000au;
    rc_muls(c, 0, t0);

L_20F36:
    /* 00020f36   2  add.w D4,D0 */
    c->pc = RC_ADDR(0x00020f36u);
    rc_step(c, m);
    t0 = rc_d_get(c, 4, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_20F38:
    /* 00020f38   4  sub.w #30,D0 */
    c->pc = RC_ADDR(0x00020f38u);
    rc_step(c, m);
    t0 = 0x00000030u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_20F3C:
    /* 00020f3c   4  move.w D0,(fffffff2,A5) */
    c->pc = RC_ADDR(0x00020f3cu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20F40:
    /* 00020f40   2  movea.l A3,A0 */
    c->pc = RC_ADDR(0x00020f40u);
    rc_step(c, m);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[0] = t0;

L_20F42:
    /* 00020f42   2  addq.l #1,A3 */
    c->pc = RC_ADDR(0x00020f42u);
    rc_step(c, m);
    c->a[3] += 0x00000001u;

L_20F44:
    /* 00020f44   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x00020f44u);
    rc_step(c, m);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_20F46:
    /* 00020f46   2  ext.w D0 */
    c->pc = RC_ADDR(0x00020f46u);
    rc_step(c, m);
    rc_ext_w(c, 0);

L_20F48:
    /* 00020f48   2  move.w D0,D4 */
    c->pc = RC_ADDR(0x00020f48u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20F4A:
    /* 00020f4a   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x00020f4au);
    rc_step(c, m);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20F4C:
    /* 00020f4c   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x00020f4cu);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_20F4E:
    /* 00020f4e   4  lea (ffffcd3c,A4),A0 */
    c->pc = RC_ADDR(0x00020f4eu);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x32c4u);

L_20F52:
    /* 00020f52   6  btst #2,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00020f52u);
    rc_step(c, m);
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (c->a[0] + 0x0u + t4);
    t4 = 0x00000002u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_20F58:
    /* 00020f58   2  bne 00020f2e */
    c->pc = RC_ADDR(0x00020f58u);
    rc_step(c, m);
    if (rc_cond(c, 6)) { rc_tick(); goto L_20F2E; }

L_20F5A:
    /* 00020f5a   4  cmp.w #2e,D4 */
    c->pc = RC_ADDR(0x00020f5au);
    rc_step(c, m);
    t0 = 0x0000002eu;
    t1 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_20F5E:
    /* 00020f5e   2  bne 00020fba */
    c->pc = RC_ADDR(0x00020f5eu);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_20FBA;

L_20F60:
    /* 00020f60   2  movea.l A3,A0 */
    c->pc = RC_ADDR(0x00020f60u);
    rc_step(c, m);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[0] = t0;

L_20F62:
    /* 00020f62   2  addq.l #1,A3 */
    c->pc = RC_ADDR(0x00020f62u);
    rc_step(c, m);
    c->a[3] += 0x00000001u;

L_20F64:
    /* 00020f64   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x00020f64u);
    rc_step(c, m);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_20F66:
    /* 00020f66   2  ext.w D0 */
    c->pc = RC_ADDR(0x00020f66u);
    rc_step(c, m);
    rc_ext_w(c, 0);

L_20F68:
    /* 00020f68   2  move.w D0,D4 */
    c->pc = RC_ADDR(0x00020f68u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20F6A:
    /* 00020f6a   4  cmp.w #2a,D0 */
    c->pc = RC_ADDR(0x00020f6au);
    rc_step(c, m);
    t0 = 0x0000002au;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_20F6E:
    /* 00020f6e   2  bne 00020f88 */
    c->pc = RC_ADDR(0x00020f6eu);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_20F88;

L_20F70:
    /* 00020f70   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00020f70u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_20F74:
    /* 00020f74   4  addq.l #2,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00020f74u);
    rc_step(c, m);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_L, t1, 0x00000002u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_20F78:
    /* 00020f78   4  move.w (A0),(fffffff4,A5) */
    c->pc = RC_ADDR(0x00020f78u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_wr16(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20F7C:
    /* 00020f7c   2  movea.l A3,A0 */
    c->pc = RC_ADDR(0x00020f7cu);
    rc_step(c, m);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[0] = t0;

L_20F7E:
    /* 00020f7e   2  addq.l #1,A3 */
    c->pc = RC_ADDR(0x00020f7eu);
    rc_step(c, m);
    c->a[3] += 0x00000001u;

L_20F80:
    /* 00020f80   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x00020f80u);
    rc_step(c, m);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_20F82:
    /* 00020f82   2  ext.w D0 */
    c->pc = RC_ADDR(0x00020f82u);
    rc_step(c, m);
    rc_ext_w(c, 0);

L_20F84:
    /* 00020f84   2  move.w D0,D4 */
    c->pc = RC_ADDR(0x00020f84u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20F86:
    /* 00020f86   2  bra 00020fba */
    c->pc = RC_ADDR(0x00020f86u);
    rc_step(c, m);
    goto L_20FBA;

L_20F88:
    /* 00020f88   4  clr.w (fffffff4,A5) */
    c->pc = RC_ADDR(0x00020f88u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] - 0xcu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_20F8C:
    /* 00020f8c   2  bra 00020faa */
    c->pc = RC_ADDR(0x00020f8cu);
    rc_step(c, m);
    goto L_20FAA;

L_20F8E:
    /* 00020f8e   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x00020f8eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20F92:
    /* 00020f92   4  muls.w #a,D0 */
    c->pc = RC_ADDR(0x00020f92u);
    rc_step(c, m);
    t0 = 0x0000000au;
    rc_muls(c, 0, t0);

L_20F96:
    /* 00020f96   2  add.w D4,D0 */
    c->pc = RC_ADDR(0x00020f96u);
    rc_step(c, m);
    t0 = rc_d_get(c, 4, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_20F98:
    /* 00020f98   4  sub.w #30,D0 */
    c->pc = RC_ADDR(0x00020f98u);
    rc_step(c, m);
    t0 = 0x00000030u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_20F9C:
    /* 00020f9c   4  move.w D0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x00020f9cu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20FA0:
    /* 00020fa0   2  movea.l A3,A0 */
    c->pc = RC_ADDR(0x00020fa0u);
    rc_step(c, m);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[0] = t0;

L_20FA2:
    /* 00020fa2   2  addq.l #1,A3 */
    c->pc = RC_ADDR(0x00020fa2u);
    rc_step(c, m);
    c->a[3] += 0x00000001u;

L_20FA4:
    /* 00020fa4   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x00020fa4u);
    rc_step(c, m);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_20FA6:
    /* 00020fa6   2  ext.w D0 */
    c->pc = RC_ADDR(0x00020fa6u);
    rc_step(c, m);
    rc_ext_w(c, 0);

L_20FA8:
    /* 00020fa8   2  move.w D0,D4 */
    c->pc = RC_ADDR(0x00020fa8u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20FAA:
    /* 00020faa   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x00020faau);
    rc_step(c, m);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20FAC:
    /* 00020fac   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x00020facu);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_20FAE:
    /* 00020fae   4  lea (ffffcd3c,A4),A0 */
    c->pc = RC_ADDR(0x00020faeu);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x32c4u);

L_20FB2:
    /* 00020fb2   6  btst #2,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00020fb2u);
    rc_step(c, m);
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (c->a[0] + 0x0u + t4);
    t4 = 0x00000002u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_20FB8:
    /* 00020fb8   2  bne 00020f8e */
    c->pc = RC_ADDR(0x00020fb8u);
    rc_step(c, m);
    if (rc_cond(c, 6)) { rc_tick(); goto L_20F8E; }

L_20FBA:
    /* 00020fba   6  move.w #2,(fffffff0,A5) */
    c->pc = RC_ADDR(0x00020fbau);
    rc_step(c, m);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20FC0:
    /* 00020fc0   4  cmp.w #6c,D4 */
    c->pc = RC_ADDR(0x00020fc0u);
    rc_step(c, m);
    t0 = 0x0000006cu;
    t1 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_20FC4:
    /* 00020fc4   2  bne 00020fd8 */
    c->pc = RC_ADDR(0x00020fc4u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_20FD8;

L_20FC6:
    /* 00020fc6   2  movea.l A3,A0 */
    c->pc = RC_ADDR(0x00020fc6u);
    rc_step(c, m);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[0] = t0;

L_20FC8:
    /* 00020fc8   2  addq.l #1,A3 */
    c->pc = RC_ADDR(0x00020fc8u);
    rc_step(c, m);
    c->a[3] += 0x00000001u;

L_20FCA:
    /* 00020fca   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x00020fcau);
    rc_step(c, m);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_20FCC:
    /* 00020fcc   2  ext.w D0 */
    c->pc = RC_ADDR(0x00020fccu);
    rc_step(c, m);
    rc_ext_w(c, 0);

L_20FCE:
    /* 00020fce   2  move.w D0,D4 */
    c->pc = RC_ADDR(0x00020fceu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20FD0:
    /* 00020fd0   6  move.w #4,(fffffff0,A5) */
    c->pc = RC_ADDR(0x00020fd0u);
    rc_step(c, m);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20FD6:
    /* 00020fd6   2  bra 00020fe8 */
    c->pc = RC_ADDR(0x00020fd6u);
    rc_step(c, m);
    goto L_20FE8;

L_20FD8:
    /* 00020fd8   4  cmp.w #68,D4 */
    c->pc = RC_ADDR(0x00020fd8u);
    rc_step(c, m);
    t0 = 0x00000068u;
    t1 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_20FDC:
    /* 00020fdc   2  bne 00020fe8 */
    c->pc = RC_ADDR(0x00020fdcu);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_20FE8;

L_20FDE:
    /* 00020fde   2  movea.l A3,A0 */
    c->pc = RC_ADDR(0x00020fdeu);
    rc_step(c, m);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[0] = t0;

L_20FE0:
    /* 00020fe0   2  addq.l #1,A3 */
    c->pc = RC_ADDR(0x00020fe0u);
    rc_step(c, m);
    c->a[3] += 0x00000001u;

L_20FE2:
    /* 00020fe2   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x00020fe2u);
    rc_step(c, m);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_20FE4:
    /* 00020fe4   2  ext.w D0 */
    c->pc = RC_ADDR(0x00020fe4u);
    rc_step(c, m);
    rc_ext_w(c, 0);

L_20FE6:
    /* 00020fe6   2  move.w D0,D4 */
    c->pc = RC_ADDR(0x00020fe6u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20FE8:
    /* 00020fe8   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x00020fe8u);
    rc_step(c, m);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20FEA:
    /* 00020fea   2  ext.l D0 */
    c->pc = RC_ADDR(0x00020feau);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_20FEC:
    /* 00020fec   2  bra 00021068 */
    c->pc = RC_ADDR(0x00020fecu);
    rc_step(c, m);
    goto L_21068;

L_20FEE:
    /* 00020fee   6  move.w #8,(ffffffee,A5) */
    c->pc = RC_ADDR(0x00020feeu);
    rc_step(c, m);
    t0 = 0x00000008u;
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20FF4:
    /* 00020ff4   2  bra 0002100c */
    c->pc = RC_ADDR(0x00020ff4u);
    rc_step(c, m);
    goto L_2100C;

L_20FF6:
    /* 00020ff6   6  move.w #a,(ffffffee,A5) */
    c->pc = RC_ADDR(0x00020ff6u);
    rc_step(c, m);
    t0 = 0x0000000au;
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20FFC:
    /* 00020ffc   2  bra 0002100c */
    c->pc = RC_ADDR(0x00020ffcu);
    rc_step(c, m);
    goto L_2100C;

L_20FFE:
    /* 00020ffe   6  move.w #10,(ffffffee,A5) */
    c->pc = RC_ADDR(0x00020ffeu);
    rc_step(c, m);
    t0 = 0x00000010u;
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_21004:
    /* 00021004   2  bra 0002100c */
    c->pc = RC_ADDR(0x00021004u);
    rc_step(c, m);
    goto L_2100C;

L_21006:
    /* 00021006   6  move.w #fff6,(ffffffee,A5) */
    c->pc = RC_ADDR(0x00021006u);
    rc_step(c, m);
    t0 = 0x0000fff6u;
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2100C:
    /* 0002100c   4  move.w (fffffff0,A5),-(A7) */
    c->pc = RC_ADDR(0x0002100cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_21010:
    /* 00021010   4  pea (ffffff30,A5) */
    c->pc = RC_ADDR(0x00021010u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[5] - 0xd0u));

L_21014:
    /* 00021014   4  move.w (ffffffee,A5),-(A7) */
    c->pc = RC_ADDR(0x00021014u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_21018:
    /* 00021018   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00021018u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2101C:
    /* 0002101c   4  jsr (00020e02) */
    c->pc = RC_ADDR(0x0002101cu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00021020u));
    rc_depth++;
    c->pc = RC_ADDR(0x00020e02u);
    return;

L_21020:
    /* 00021020   4  move.l D0,(ffffffea,A5) */
    c->pc = RC_ADDR(0x00021020u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x16u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_21024:
    /* 00021024   4  move.w (fffffff0,A5),D0 */
    c->pc = RC_ADDR(0x00021024u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_21028:
    /* 00021028   2  ext.l D0 */
    c->pc = RC_ADDR(0x00021028u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_2102A:
    /* 0002102a   4  add.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0002102au);
    rc_step(c, m);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_2102E:
    /* 0002102e   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0002102eu);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_21032:
    /* 00021032   2  bra 00021090 */
    c->pc = RC_ADDR(0x00021032u);
    rc_step(c, m);
    goto L_21090;

L_21034:
    /* 00021034   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00021034u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_21038:
    /* 00021038   4  addq.l #4,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00021038u);
    rc_step(c, m);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000004u;
    rc_flags_add(c, RC_L, t1, 0x00000004u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_2103C:
    /* 0002103c   2  movea.l (A0),A1 */
    c->pc = RC_ADDR(0x0002103cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[1] = t0;

L_2103E:
    /* 0002103e   4  move.l A1,(ffffffea,A5) */
    c->pc = RC_ADDR(0x0002103eu);
    rc_step(c, m);
    t0 = rc_a_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x16u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_21042:
    /* 00021042   2  move.l A1,D0 */
    c->pc = RC_ADDR(0x00021042u);
    rc_step(c, m);
    t0 = rc_a_get(c, 1, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21044:
    /* 00021044   2  tst.b (A1)+ */
    c->pc = RC_ADDR(0x00021044u);
    rc_step(c, m);
    t3 = c->a[1];
    c->a[1] += 1u;
    t0 = rc_rd8(c, m, t3);
    rc_set_nzvc(c, t0, RC_B);

L_21046:
    /* 00021046   2  bne 00021044 */
    c->pc = RC_ADDR(0x00021046u);
    rc_step(c, m);
    if (rc_cond(c, 6)) { rc_tick(); goto L_21044; }

L_21048:
    /* 00021048   2  suba.l D0,A1 */
    c->pc = RC_ADDR(0x00021048u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[1] -= t0;

L_2104A:
    /* 0002104a   2  subq.l #1,A1 */
    c->pc = RC_ADDR(0x0002104au);
    rc_step(c, m);
    c->a[1] -= 0x00000001u;

L_2104C:
    /* 0002104c   4  move.w A1,(fffffff0,A5) */
    c->pc = RC_ADDR(0x0002104cu);
    rc_step(c, m);
    t0 = rc_a_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_21050:
    /* 00021050   2  bra 0002109c */
    c->pc = RC_ADDR(0x00021050u);
    rc_step(c, m);
    goto L_2109C;

L_21052:
    /* 00021052   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00021052u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_21056:
    /* 00021056   4  addq.l #2,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00021056u);
    rc_step(c, m);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_L, t1, 0x00000002u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_2105A:
    /* 0002105a   2  move.w (A0),D4 */
    c->pc = RC_ADDR(0x0002105au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2105C:
    /* 0002105c   4  lea (ffffff2f,A5),A0 */
    c->pc = RC_ADDR(0x0002105cu);
    rc_step(c, m);
    c->a[0] = (c->a[5] - 0xd1u);

L_21060:
    /* 00021060   4  move.l A0,(ffffffea,A5) */
    c->pc = RC_ADDR(0x00021060u);
    rc_step(c, m);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x16u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_21064:
    /* 00021064   2  move.b D4,(A0) */
    c->pc = RC_ADDR(0x00021064u);
    rc_step(c, m);
    t0 = rc_d_get(c, 4, RC_B);
    rc_wr8(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_B);

L_21066:
    /* 00021066   2  bra 00021090 */
    c->pc = RC_ADDR(0x00021066u);
    rc_step(c, m);
    goto L_21090;

L_21068:
    /* 00021068   6  sub.l #63,D0 */
    c->pc = RC_ADDR(0x00021068u);
    rc_step(c, m);
    t0 = 0x00000063u;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_2106E:
    /* 0002106e   2  beq 00021052 */
    c->pc = RC_ADDR(0x0002106eu);
    rc_step(c, m);
    if (rc_cond(c, 7)) { rc_tick(); goto L_21052; }

L_21070:
    /* 00021070   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x00021070u);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_21072:
    /* 00021072   2  beq 00021006 */
    c->pc = RC_ADDR(0x00021072u);
    rc_step(c, m);
    if (rc_cond(c, 7)) { rc_tick(); goto L_21006; }

L_21074:
    /* 00021074   6  sub.l #b,D0 */
    c->pc = RC_ADDR(0x00021074u);
    rc_step(c, m);
    t0 = 0x0000000bu;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_2107A:
    /* 0002107a   4  beq 00020fee */
    c->pc = RC_ADDR(0x0002107au);
    rc_step(c, m);
    if (rc_cond(c, 7)) { rc_tick(); goto L_20FEE; }

L_2107E:
    /* 0002107e   2  subq.l #4,D0 */
    c->pc = RC_ADDR(0x0002107eu);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000004u;
    rc_flags_sub(c, RC_L, t1, 0x00000004u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_21080:
    /* 00021080   2  beq 00021034 */
    c->pc = RC_ADDR(0x00021080u);
    rc_step(c, m);
    if (rc_cond(c, 7)) { rc_tick(); goto L_21034; }

L_21082:
    /* 00021082   2  subq.l #2,D0 */
    c->pc = RC_ADDR(0x00021082u);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_L, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_21084:
    /* 00021084   4  beq 00020ff6 */
    c->pc = RC_ADDR(0x00021084u);
    rc_step(c, m);
    if (rc_cond(c, 7)) { rc_tick(); goto L_20FF6; }

L_21088:
    /* 00021088   2  subq.l #3,D0 */
    c->pc = RC_ADDR(0x00021088u);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000003u;
    rc_flags_sub(c, RC_L, t1, 0x00000003u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_2108A:
    /* 0002108a   4  beq 00020ffe */
    c->pc = RC_ADDR(0x0002108au);
    rc_step(c, m);
    if (rc_cond(c, 7)) { rc_tick(); goto L_20FFE; }

L_2108E:
    /* 0002108e   2  bra 0002105c */
    c->pc = RC_ADDR(0x0002108eu);
    rc_step(c, m);
    rc_tick();
    goto L_2105C;

L_21090:
    /* 00021090   4  lea (ffffff30,A5),A0 */
    c->pc = RC_ADDR(0x00021090u);
    rc_step(c, m);
    c->a[0] = (c->a[5] - 0xd0u);

L_21094:
    /* 00021094   4  suba.l (ffffffea,A5),A0 */
    c->pc = RC_ADDR(0x00021094u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x16u));
    c->a[0] -= t0;

L_21098:
    /* 00021098   4  move.w A0,(fffffff0,A5) */
    c->pc = RC_ADDR(0x00021098u);
    rc_step(c, m);
    t0 = rc_a_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2109C:
    /* 0002109c   4  move.w (fffffff0,A5),D0 */
    c->pc = RC_ADDR(0x0002109cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_210A0:
    /* 000210a0   4  cmp.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x000210a0u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_210A4:
    /* 000210a4   2  ble 000210ac */
    c->pc = RC_ADDR(0x000210a4u);
    rc_step(c, m);
    if (rc_cond(c, 15)) goto L_210AC;

L_210A6:
    /* 000210a6   6  move.w (fffffff4,A5),(fffffff0,A5) */
    c->pc = RC_ADDR(0x000210a6u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_wr16(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_210AC:
    /* 000210ac   4  tst.w (fffffff8,A5) */
    c->pc = RC_ADDR(0x000210acu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_210B0:
    /* 000210b0   2  beq 0002111a */
    c->pc = RC_ADDR(0x000210b0u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_2111A;

L_210B2:
    /* 000210b2   4  movea.l (ffffffea,A5),A0 */
    c->pc = RC_ADDR(0x000210b2u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x16u));
    c->a[0] = t0;

L_210B6:
    /* 000210b6   4  cmpi.b #2d,(A0) */
    c->pc = RC_ADDR(0x000210b6u);
    rc_step(c, m);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x0000002du);

L_210BA:
    /* 000210ba   2  beq 000210c6 */
    c->pc = RC_ADDR(0x000210bau);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_210C6;

L_210BC:
    /* 000210bc   4  movea.l (ffffffea,A5),A0 */
    c->pc = RC_ADDR(0x000210bcu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x16u));
    c->a[0] = t0;

L_210C0:
    /* 000210c0   4  cmpi.b #2b,(A0) */
    c->pc = RC_ADDR(0x000210c0u);
    rc_step(c, m);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x0000002bu);

L_210C4:
    /* 000210c4   2  bne 000210f4 */
    c->pc = RC_ADDR(0x000210c4u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_210F4;

L_210C6:
    /* 000210c6   6  cmpi.w #30,(fffffff6,A5) */
    c->pc = RC_ADDR(0x000210c6u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_cmp(c, RC_W, t0, 0x00000030u);

L_210CC:
    /* 000210cc   2  bne 000210f4 */
    c->pc = RC_ADDR(0x000210ccu);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_210F4;

L_210CE:
    /* 000210ce   4  subq.w #1,(fffffff2,A5) */
    c->pc = RC_ADDR(0x000210ceu);
    rc_step(c, m);
    t3 = (c->a[5] - 0xeu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_210D2:
    /* 000210d2   4  movea.l (ffffffea,A5),A0 */
    c->pc = RC_ADDR(0x000210d2u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x16u));
    c->a[0] = t0;

L_210D6:
    /* 000210d6   4  addq.l #1,(ffffffea,A5) */
    c->pc = RC_ADDR(0x000210d6u);
    rc_step(c, m);
    t3 = (c->a[5] - 0x16u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_210DA:
    /* 000210da   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x000210dau);
    rc_step(c, m);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_210DC:
    /* 000210dc   2  ext.w D0 */
    c->pc = RC_ADDR(0x000210dcu);
    rc_step(c, m);
    rc_ext_w(c, 0);

L_210DE:
    /* 000210de   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x000210deu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_210E0:
    /* 000210e0   2  jsr (A2) */
    c->pc = RC_ADDR(0x000210e0u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x000210e2u));
    rc_depth++;
    t3 = c->a[2];
    c->pc = t3;
    return;

L_210E2:
    /* 000210e2   4  cmp.w #ffff,D0 */
    c->pc = RC_ADDR(0x000210e2u);
    rc_step(c, m);
    t0 = 0x0000ffffu;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_210E6:
    /* 000210e6   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000210e6u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_210E8:
    /* 000210e8   2  bne 000210f4 */
    c->pc = RC_ADDR(0x000210e8u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_210F4;

L_210EA:
    /* 000210ea   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x000210eau);
    rc_step(c, m);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_210EC:
    /* 000210ec   4  movem.l (SP)+,{ D4 A2 A3 } */
    c->pc = RC_ADDR(0x000210ecu);
    rc_step(c, m);
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

L_210F0:
    /* 000210f0   2  unlk A5 */
    c->pc = RC_ADDR(0x000210f0u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_210F2:
    /* 000210f2   2  rts */
    c->pc = RC_ADDR(0x000210f2u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

L_210F4:
    /* 000210f4   2  bra 0002110c */
    c->pc = RC_ADDR(0x000210f4u);
    rc_step(c, m);
    goto L_2110C;

L_210F6:
    /* 000210f6   4  move.w (fffffff6,A5),-(A7) */
    c->pc = RC_ADDR(0x000210f6u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_210FA:
    /* 000210fa   2  jsr (A2) */
    c->pc = RC_ADDR(0x000210fau);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x000210fcu));
    rc_depth++;
    t3 = c->a[2];
    c->pc = t3;
    return;

L_210FC:
    /* 000210fc   4  cmp.w #ffff,D0 */
    c->pc = RC_ADDR(0x000210fcu);
    rc_step(c, m);
    t0 = 0x0000ffffu;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_21100:
    /* 00021100   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00021100u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_21102:
    /* 00021102   2  bne 00021108 */
    c->pc = RC_ADDR(0x00021102u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_21108;

L_21104:
    /* 00021104   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x00021104u);
    rc_step(c, m);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_21106:
    /* 00021106   2  bra 000210ec */
    c->pc = RC_ADDR(0x00021106u);
    rc_step(c, m);
    rc_tick();
    goto L_210EC;

L_21108:
    /* 00021108   4  addq.w #1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00021108u);
    rc_step(c, m);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_2110C:
    /* 0002110c   4  move.w (fffffff2,A5),D0 */
    c->pc = RC_ADDR(0x0002110cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_21110:
    /* 00021110   4  subq.w #1,(fffffff2,A5) */
    c->pc = RC_ADDR(0x00021110u);
    rc_step(c, m);
    t3 = (c->a[5] - 0xeu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_21114:
    /* 00021114   4  cmp.w (fffffff0,A5),D0 */
    c->pc = RC_ADDR(0x00021114u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_21118:
    /* 00021118   2  bgt 000210f6 */
    c->pc = RC_ADDR(0x00021118u);
    rc_step(c, m);
    if (rc_cond(c, 14)) { rc_tick(); goto L_210F6; }

L_2111A:
    /* 0002111a   4  clr.w (ffffffee,A5) */
    c->pc = RC_ADDR(0x0002111au);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] - 0x12u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2111E:
    /* 0002111e   2  bra 00021140 */
    c->pc = RC_ADDR(0x0002111eu);
    rc_step(c, m);
    goto L_21140;

L_21120:
    /* 00021120   4  movea.l (ffffffea,A5),A0 */
    c->pc = RC_ADDR(0x00021120u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x16u));
    c->a[0] = t0;

L_21124:
    /* 00021124   4  addq.l #1,(ffffffea,A5) */
    c->pc = RC_ADDR(0x00021124u);
    rc_step(c, m);
    t3 = (c->a[5] - 0x16u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_21128:
    /* 00021128   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x00021128u);
    rc_step(c, m);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_2112A:
    /* 0002112a   2  ext.w D0 */
    c->pc = RC_ADDR(0x0002112au);
    rc_step(c, m);
    rc_ext_w(c, 0);

L_2112C:
    /* 0002112c   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0002112cu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2112E:
    /* 0002112e   2  jsr (A2) */
    c->pc = RC_ADDR(0x0002112eu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00021130u));
    rc_depth++;
    t3 = c->a[2];
    c->pc = t3;
    return;

L_21130:
    /* 00021130   4  cmp.w #ffff,D0 */
    c->pc = RC_ADDR(0x00021130u);
    rc_step(c, m);
    t0 = 0x0000ffffu;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_21134:
    /* 00021134   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00021134u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_21136:
    /* 00021136   2  bne 0002113c */
    c->pc = RC_ADDR(0x00021136u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_2113C;

L_21138:
    /* 00021138   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x00021138u);
    rc_step(c, m);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_2113A:
    /* 0002113a   2  bra 000210ec */
    c->pc = RC_ADDR(0x0002113au);
    rc_step(c, m);
    rc_tick();
    goto L_210EC;

L_2113C:
    /* 0002113c   4  addq.w #1,(ffffffee,A5) */
    c->pc = RC_ADDR(0x0002113cu);
    rc_step(c, m);
    t3 = (c->a[5] - 0x12u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_21140:
    /* 00021140   4  movea.l (ffffffea,A5),A0 */
    c->pc = RC_ADDR(0x00021140u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x16u));
    c->a[0] = t0;

L_21144:
    /* 00021144   2  tst.b (A0) */
    c->pc = RC_ADDR(0x00021144u);
    rc_step(c, m);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_set_nzvc(c, t0, RC_B);

L_21146:
    /* 00021146   2  beq 00021152 */
    c->pc = RC_ADDR(0x00021146u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_21152;

L_21148:
    /* 00021148   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x00021148u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2114C:
    /* 0002114c   4  cmp.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x0002114cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_21150:
    /* 00021150   2  blt 00021120 */
    c->pc = RC_ADDR(0x00021150u);
    rc_step(c, m);
    if (rc_cond(c, 13)) { rc_tick(); goto L_21120; }

L_21152:
    /* 00021152   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x00021152u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_21156:
    /* 00021156   4  add.w D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00021156u);
    rc_step(c, m);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_2115A:
    /* 0002115a   4  tst.w (fffffff8,A5) */
    c->pc = RC_ADDR(0x0002115au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_2115E:
    /* 0002115e   2  bne 00021188 */
    c->pc = RC_ADDR(0x0002115eu);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_21188;

L_21160:
    /* 00021160   2  bra 0002117a */
    c->pc = RC_ADDR(0x00021160u);
    rc_step(c, m);
    goto L_2117A;

L_21162:
    /* 00021162   4  move.w #20,-(A7) */
    c->pc = RC_ADDR(0x00021162u);
    rc_step(c, m);
    t0 = 0x00000020u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_21166:
    /* 00021166   2  jsr (A2) */
    c->pc = RC_ADDR(0x00021166u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00021168u));
    rc_depth++;
    t3 = c->a[2];
    c->pc = t3;
    return;

L_21168:
    /* 00021168   4  cmp.w #ffff,D0 */
    c->pc = RC_ADDR(0x00021168u);
    rc_step(c, m);
    t0 = 0x0000ffffu;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_2116C:
    /* 0002116c   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0002116cu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_2116E:
    /* 0002116e   2  bne 00021176 */
    c->pc = RC_ADDR(0x0002116eu);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_21176;

L_21170:
    /* 00021170   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x00021170u);
    rc_step(c, m);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_21172:
    /* 00021172   4  bra 000210ec */
    c->pc = RC_ADDR(0x00021172u);
    rc_step(c, m);
    rc_tick();
    goto L_210EC;

L_21176:
    /* 00021176   4  addq.w #1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00021176u);
    rc_step(c, m);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_2117A:
    /* 0002117a   4  move.w (fffffff2,A5),D0 */
    c->pc = RC_ADDR(0x0002117au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2117E:
    /* 0002117e   4  subq.w #1,(fffffff2,A5) */
    c->pc = RC_ADDR(0x0002117eu);
    rc_step(c, m);
    t3 = (c->a[5] - 0xeu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_21182:
    /* 00021182   4  cmp.w (fffffff0,A5),D0 */
    c->pc = RC_ADDR(0x00021182u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_21186:
    /* 00021186   2  bgt 00021162 */
    c->pc = RC_ADDR(0x00021186u);
    rc_step(c, m);
    if (rc_cond(c, 14)) { rc_tick(); goto L_21162; }

L_21188:
    /* 00021188   2  bra 000211a0 */
    c->pc = RC_ADDR(0x00021188u);
    rc_step(c, m);
    goto L_211A0;

L_2118A:
    /* 0002118a   2  move.w D4,-(A7) */
    c->pc = RC_ADDR(0x0002118au);
    rc_step(c, m);
    t0 = rc_d_get(c, 4, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2118C:
    /* 0002118c   2  jsr (A2) */
    c->pc = RC_ADDR(0x0002118cu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0002118eu));
    rc_depth++;
    t3 = c->a[2];
    c->pc = t3;
    return;

L_2118E:
    /* 0002118e   4  cmp.w #ffff,D0 */
    c->pc = RC_ADDR(0x0002118eu);
    rc_step(c, m);
    t0 = 0x0000ffffu;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_21192:
    /* 00021192   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00021192u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_21194:
    /* 00021194   2  bne 0002119c */
    c->pc = RC_ADDR(0x00021194u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_2119C;

L_21196:
    /* 00021196   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x00021196u);
    rc_step(c, m);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_21198:
    /* 00021198   4  bra 000210ec */
    c->pc = RC_ADDR(0x00021198u);
    rc_step(c, m);
    rc_tick();
    goto L_210EC;

L_2119C:
    /* 0002119c   4  addq.w #1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x0002119cu);
    rc_step(c, m);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_211A0:
    /* 000211a0   4  bra 00020eaa */
    c->pc = RC_ADDR(0x000211a0u);
    rc_step(c, m);
    rc_tick();
    goto L_20EAA;

L_211A4:
    /* 000211a4   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x000211a4u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_211A8:
    /* 000211a8   4  bra 000210ec */
    c->pc = RC_ADDR(0x000211a8u);
    rc_step(c, m);
    rc_tick();
    goto L_210EC;

}
