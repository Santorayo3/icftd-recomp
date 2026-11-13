/* fn_00007dca - 1098 byte(s), 295 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00007dca(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00007dcau): goto L_7DCA;
    case RC_ADDR(0x00007dceu): goto L_7DCE;
    case RC_ADDR(0x00007dd2u): goto L_7DD2;
    case RC_ADDR(0x00007dd4u): goto L_7DD4;
    case RC_ADDR(0x00007dd8u): goto L_7DD8;
    case RC_ADDR(0x00007ddau): goto L_7DDA;
    case RC_ADDR(0x00007ddcu): goto L_7DDC;
    case RC_ADDR(0x00007de0u): goto L_7DE0;
    case RC_ADDR(0x00007de2u): goto L_7DE2;
    case RC_ADDR(0x00007de4u): goto L_7DE4;
    case RC_ADDR(0x00007de8u): goto L_7DE8;
    case RC_ADDR(0x00007decu): goto L_7DEC;
    case RC_ADDR(0x00007df0u): goto L_7DF0;
    case RC_ADDR(0x00007df4u): goto L_7DF4;
    case RC_ADDR(0x00007df6u): goto L_7DF6;
    case RC_ADDR(0x00007dfau): goto L_7DFA;
    case RC_ADDR(0x00007dfeu): goto L_7DFE;
    case RC_ADDR(0x00007e00u): goto L_7E00;
    case RC_ADDR(0x00007e04u): goto L_7E04;
    case RC_ADDR(0x00007e08u): goto L_7E08;
    case RC_ADDR(0x00007e0cu): goto L_7E0C;
    case RC_ADDR(0x00007e12u): goto L_7E12;
    case RC_ADDR(0x00007e18u): goto L_7E18;
    case RC_ADDR(0x00007e1eu): goto L_7E1E;
    case RC_ADDR(0x00007e24u): goto L_7E24;
    case RC_ADDR(0x00007e28u): goto L_7E28;
    case RC_ADDR(0x00007e2au): goto L_7E2A;
    case RC_ADDR(0x00007e2cu): goto L_7E2C;
    case RC_ADDR(0x00007e32u): goto L_7E32;
    case RC_ADDR(0x00007e34u): goto L_7E34;
    case RC_ADDR(0x00007e38u): goto L_7E38;
    case RC_ADDR(0x00007e3au): goto L_7E3A;
    case RC_ADDR(0x00007e3eu): goto L_7E3E;
    case RC_ADDR(0x00007e40u): goto L_7E40;
    case RC_ADDR(0x00007e44u): goto L_7E44;
    case RC_ADDR(0x00007e48u): goto L_7E48;
    case RC_ADDR(0x00007e4cu): goto L_7E4C;
    case RC_ADDR(0x00007e4eu): goto L_7E4E;
    case RC_ADDR(0x00007e50u): goto L_7E50;
    case RC_ADDR(0x00007e52u): goto L_7E52;
    case RC_ADDR(0x00007e58u): goto L_7E58;
    case RC_ADDR(0x00007e5au): goto L_7E5A;
    case RC_ADDR(0x00007e5eu): goto L_7E5E;
    case RC_ADDR(0x00007e62u): goto L_7E62;
    case RC_ADDR(0x00007e66u): goto L_7E66;
    case RC_ADDR(0x00007e68u): goto L_7E68;
    case RC_ADDR(0x00007e6cu): goto L_7E6C;
    case RC_ADDR(0x00007e6eu): goto L_7E6E;
    case RC_ADDR(0x00007e70u): goto L_7E70;
    case RC_ADDR(0x00007e74u): goto L_7E74;
    case RC_ADDR(0x00007e78u): goto L_7E78;
    case RC_ADDR(0x00007e7cu): goto L_7E7C;
    case RC_ADDR(0x00007e80u): goto L_7E80;
    case RC_ADDR(0x00007e82u): goto L_7E82;
    case RC_ADDR(0x00007e86u): goto L_7E86;
    case RC_ADDR(0x00007e88u): goto L_7E88;
    case RC_ADDR(0x00007e8au): goto L_7E8A;
    case RC_ADDR(0x00007e8eu): goto L_7E8E;
    case RC_ADDR(0x00007e90u): goto L_7E90;
    case RC_ADDR(0x00007e94u): goto L_7E94;
    case RC_ADDR(0x00007e98u): goto L_7E98;
    case RC_ADDR(0x00007e9cu): goto L_7E9C;
    case RC_ADDR(0x00007e9eu): goto L_7E9E;
    case RC_ADDR(0x00007ea2u): goto L_7EA2;
    case RC_ADDR(0x00007ea6u): goto L_7EA6;
    case RC_ADDR(0x00007eaau): goto L_7EAA;
    case RC_ADDR(0x00007eacu): goto L_7EAC;
    case RC_ADDR(0x00007eb0u): goto L_7EB0;
    case RC_ADDR(0x00007eb4u): goto L_7EB4;
    case RC_ADDR(0x00007eb8u): goto L_7EB8;
    case RC_ADDR(0x00007ebau): goto L_7EBA;
    case RC_ADDR(0x00007ebcu): goto L_7EBC;
    case RC_ADDR(0x00007ebeu): goto L_7EBE;
    case RC_ADDR(0x00007ec0u): goto L_7EC0;
    case RC_ADDR(0x00007ec2u): goto L_7EC2;
    case RC_ADDR(0x00007ec4u): goto L_7EC4;
    case RC_ADDR(0x00007ec6u): goto L_7EC6;
    case RC_ADDR(0x00007ec8u): goto L_7EC8;
    case RC_ADDR(0x00007ecau): goto L_7ECA;
    case RC_ADDR(0x00007ed0u): goto L_7ED0;
    case RC_ADDR(0x00007ed4u): goto L_7ED4;
    case RC_ADDR(0x00007ed8u): goto L_7ED8;
    case RC_ADDR(0x00007edau): goto L_7EDA;
    case RC_ADDR(0x00007edeu): goto L_7EDE;
    case RC_ADDR(0x00007ee4u): goto L_7EE4;
    case RC_ADDR(0x00007eeau): goto L_7EEA;
    case RC_ADDR(0x00007eeeu): goto L_7EEE;
    case RC_ADDR(0x00007ef4u): goto L_7EF4;
    case RC_ADDR(0x00007ef6u): goto L_7EF6;
    case RC_ADDR(0x00007efcu): goto L_7EFC;
    case RC_ADDR(0x00007f02u): goto L_7F02;
    case RC_ADDR(0x00007f04u): goto L_7F04;
    case RC_ADDR(0x00007f0au): goto L_7F0A;
    case RC_ADDR(0x00007f10u): goto L_7F10;
    case RC_ADDR(0x00007f16u): goto L_7F16;
    case RC_ADDR(0x00007f1au): goto L_7F1A;
    case RC_ADDR(0x00007f1cu): goto L_7F1C;
    case RC_ADDR(0x00007f20u): goto L_7F20;
    case RC_ADDR(0x00007f22u): goto L_7F22;
    case RC_ADDR(0x00007f26u): goto L_7F26;
    case RC_ADDR(0x00007f2au): goto L_7F2A;
    case RC_ADDR(0x00007f30u): goto L_7F30;
    case RC_ADDR(0x00007f34u): goto L_7F34;
    case RC_ADDR(0x00007f36u): goto L_7F36;
    case RC_ADDR(0x00007f3cu): goto L_7F3C;
    case RC_ADDR(0x00007f42u): goto L_7F42;
    case RC_ADDR(0x00007f46u): goto L_7F46;
    case RC_ADDR(0x00007f48u): goto L_7F48;
    case RC_ADDR(0x00007f4eu): goto L_7F4E;
    case RC_ADDR(0x00007f52u): goto L_7F52;
    case RC_ADDR(0x00007f56u): goto L_7F56;
    case RC_ADDR(0x00007f58u): goto L_7F58;
    case RC_ADDR(0x00007f5eu): goto L_7F5E;
    case RC_ADDR(0x00007f6cu): goto L_7F6C;
    case RC_ADDR(0x00007f72u): goto L_7F72;
    case RC_ADDR(0x00007f74u): goto L_7F74;
    case RC_ADDR(0x00007f76u): goto L_7F76;
    case RC_ADDR(0x00007f7au): goto L_7F7A;
    case RC_ADDR(0x00007f7eu): goto L_7F7E;
    case RC_ADDR(0x00007f84u): goto L_7F84;
    case RC_ADDR(0x00007f88u): goto L_7F88;
    case RC_ADDR(0x00007f8cu): goto L_7F8C;
    case RC_ADDR(0x00007f8eu): goto L_7F8E;
    case RC_ADDR(0x00007f92u): goto L_7F92;
    case RC_ADDR(0x00007f98u): goto L_7F98;
    case RC_ADDR(0x00007f9eu): goto L_7F9E;
    case RC_ADDR(0x00007fa2u): goto L_7FA2;
    case RC_ADDR(0x00007fa6u): goto L_7FA6;
    case RC_ADDR(0x00007fa8u): goto L_7FA8;
    case RC_ADDR(0x00007facu): goto L_7FAC;
    case RC_ADDR(0x00007fb0u): goto L_7FB0;
    case RC_ADDR(0x00007fb2u): goto L_7FB2;
    case RC_ADDR(0x00007fb6u): goto L_7FB6;
    case RC_ADDR(0x00007fb8u): goto L_7FB8;
    case RC_ADDR(0x00007fbeu): goto L_7FBE;
    case RC_ADDR(0x00007fc0u): goto L_7FC0;
    case RC_ADDR(0x00007fc6u): goto L_7FC6;
    case RC_ADDR(0x00007fc8u): goto L_7FC8;
    case RC_ADDR(0x00007fccu): goto L_7FCC;
    case RC_ADDR(0x00007fceu): goto L_7FCE;
    case RC_ADDR(0x00007fd0u): goto L_7FD0;
    case RC_ADDR(0x00007fd4u): goto L_7FD4;
    case RC_ADDR(0x00007fd8u): goto L_7FD8;
    case RC_ADDR(0x00007fdcu): goto L_7FDC;
    case RC_ADDR(0x00007fe0u): goto L_7FE0;
    case RC_ADDR(0x00007fe2u): goto L_7FE2;
    case RC_ADDR(0x00007fe6u): goto L_7FE6;
    case RC_ADDR(0x00007fecu): goto L_7FEC;
    case RC_ADDR(0x00007ff2u): goto L_7FF2;
    case RC_ADDR(0x00007ff6u): goto L_7FF6;
    case RC_ADDR(0x00007ffau): goto L_7FFA;
    case RC_ADDR(0x00008000u): goto L_8000;
    case RC_ADDR(0x00008006u): goto L_8006;
    case RC_ADDR(0x00008008u): goto L_8008;
    case RC_ADDR(0x0000800eu): goto L_800E;
    case RC_ADDR(0x00008014u): goto L_8014;
    case RC_ADDR(0x0000801au): goto L_801A;
    case RC_ADDR(0x0000801cu): goto L_801C;
    case RC_ADDR(0x00008020u): goto L_8020;
    case RC_ADDR(0x00008026u): goto L_8026;
    case RC_ADDR(0x00008028u): goto L_8028;
    case RC_ADDR(0x0000802au): goto L_802A;
    case RC_ADDR(0x0000802eu): goto L_802E;
    case RC_ADDR(0x00008030u): goto L_8030;
    case RC_ADDR(0x00008034u): goto L_8034;
    case RC_ADDR(0x00008036u): goto L_8036;
    case RC_ADDR(0x00008038u): goto L_8038;
    case RC_ADDR(0x0000803eu): goto L_803E;
    case RC_ADDR(0x00008042u): goto L_8042;
    case RC_ADDR(0x00008046u): goto L_8046;
    case RC_ADDR(0x0000804au): goto L_804A;
    case RC_ADDR(0x0000804eu): goto L_804E;
    case RC_ADDR(0x00008050u): goto L_8050;
    case RC_ADDR(0x00008052u): goto L_8052;
    case RC_ADDR(0x00008054u): goto L_8054;
    case RC_ADDR(0x00008058u): goto L_8058;
    case RC_ADDR(0x0000805eu): goto L_805E;
    case RC_ADDR(0x00008062u): goto L_8062;
    case RC_ADDR(0x00008066u): goto L_8066;
    case RC_ADDR(0x0000806au): goto L_806A;
    case RC_ADDR(0x0000806eu): goto L_806E;
    case RC_ADDR(0x00008070u): goto L_8070;
    case RC_ADDR(0x00008072u): goto L_8072;
    case RC_ADDR(0x00008074u): goto L_8074;
    case RC_ADDR(0x00008078u): goto L_8078;
    case RC_ADDR(0x0000807eu): goto L_807E;
    case RC_ADDR(0x00008082u): goto L_8082;
    case RC_ADDR(0x00008086u): goto L_8086;
    case RC_ADDR(0x0000808au): goto L_808A;
    case RC_ADDR(0x0000808eu): goto L_808E;
    case RC_ADDR(0x00008090u): goto L_8090;
    case RC_ADDR(0x00008092u): goto L_8092;
    case RC_ADDR(0x00008094u): goto L_8094;
    case RC_ADDR(0x00008098u): goto L_8098;
    case RC_ADDR(0x0000809eu): goto L_809E;
    case RC_ADDR(0x000080a0u): goto L_80A0;
    case RC_ADDR(0x000080a4u): goto L_80A4;
    case RC_ADDR(0x000080a8u): goto L_80A8;
    case RC_ADDR(0x000080aau): goto L_80AA;
    case RC_ADDR(0x000080aeu): goto L_80AE;
    case RC_ADDR(0x000080b2u): goto L_80B2;
    case RC_ADDR(0x000080b6u): goto L_80B6;
    case RC_ADDR(0x000080bau): goto L_80BA;
    case RC_ADDR(0x000080bcu): goto L_80BC;
    case RC_ADDR(0x000080beu): goto L_80BE;
    case RC_ADDR(0x000080c2u): goto L_80C2;
    case RC_ADDR(0x000080c4u): goto L_80C4;
    case RC_ADDR(0x000080c6u): goto L_80C6;
    case RC_ADDR(0x000080ccu): goto L_80CC;
    case RC_ADDR(0x000080d2u): goto L_80D2;
    case RC_ADDR(0x000080d4u): goto L_80D4;
    case RC_ADDR(0x000080dau): goto L_80DA;
    case RC_ADDR(0x000080e0u): goto L_80E0;
    case RC_ADDR(0x000080e2u): goto L_80E2;
    case RC_ADDR(0x000080e4u): goto L_80E4;
    case RC_ADDR(0x000080e6u): goto L_80E6;
    case RC_ADDR(0x000080e8u): goto L_80E8;
    case RC_ADDR(0x000080eau): goto L_80EA;
    case RC_ADDR(0x000080ecu): goto L_80EC;
    case RC_ADDR(0x000080f2u): goto L_80F2;
    case RC_ADDR(0x000080f8u): goto L_80F8;
    case RC_ADDR(0x000080fau): goto L_80FA;
    case RC_ADDR(0x00008100u): goto L_8100;
    case RC_ADDR(0x00008106u): goto L_8106;
    case RC_ADDR(0x0000810cu): goto L_810C;
    case RC_ADDR(0x00008110u): goto L_8110;
    case RC_ADDR(0x00008114u): goto L_8114;
    case RC_ADDR(0x00008118u): goto L_8118;
    case RC_ADDR(0x0000811eu): goto L_811E;
    case RC_ADDR(0x00008122u): goto L_8122;
    case RC_ADDR(0x00008126u): goto L_8126;
    case RC_ADDR(0x0000812au): goto L_812A;
    case RC_ADDR(0x0000812cu): goto L_812C;
    case RC_ADDR(0x00008130u): goto L_8130;
    case RC_ADDR(0x00008134u): goto L_8134;
    case RC_ADDR(0x0000813au): goto L_813A;
    case RC_ADDR(0x0000813cu): goto L_813C;
    case RC_ADDR(0x00008140u): goto L_8140;
    case RC_ADDR(0x00008142u): goto L_8142;
    case RC_ADDR(0x00008144u): goto L_8144;
    case RC_ADDR(0x00008148u): goto L_8148;
    case RC_ADDR(0x0000814cu): goto L_814C;
    case RC_ADDR(0x00008150u): goto L_8150;
    case RC_ADDR(0x00008154u): goto L_8154;
    case RC_ADDR(0x00008156u): goto L_8156;
    case RC_ADDR(0x0000815au): goto L_815A;
    case RC_ADDR(0x0000815cu): goto L_815C;
    case RC_ADDR(0x00008160u): goto L_8160;
    case RC_ADDR(0x00008166u): goto L_8166;
    case RC_ADDR(0x0000816cu): goto L_816C;
    case RC_ADDR(0x00008170u): goto L_8170;
    case RC_ADDR(0x00008172u): goto L_8172;
    case RC_ADDR(0x00008176u): goto L_8176;
    case RC_ADDR(0x0000817au): goto L_817A;
    case RC_ADDR(0x0000817eu): goto L_817E;
    case RC_ADDR(0x00008182u): goto L_8182;
    case RC_ADDR(0x00008188u): goto L_8188;
    case RC_ADDR(0x0000818eu): goto L_818E;
    case RC_ADDR(0x00008192u): goto L_8192;
    case RC_ADDR(0x00008196u): goto L_8196;
    case RC_ADDR(0x0000819au): goto L_819A;
    case RC_ADDR(0x0000819cu): goto L_819C;
    case RC_ADDR(0x000081a2u): goto L_81A2;
    case RC_ADDR(0x000081a8u): goto L_81A8;
    case RC_ADDR(0x000081acu): goto L_81AC;
    case RC_ADDR(0x000081b0u): goto L_81B0;
    case RC_ADDR(0x000081b4u): goto L_81B4;
    case RC_ADDR(0x000081b6u): goto L_81B6;
    case RC_ADDR(0x000081bcu): goto L_81BC;
    case RC_ADDR(0x000081c2u): goto L_81C2;
    case RC_ADDR(0x000081c4u): goto L_81C4;
    case RC_ADDR(0x000081cau): goto L_81CA;
    case RC_ADDR(0x000081d0u): goto L_81D0;
    case RC_ADDR(0x000081d2u): goto L_81D2;
    case RC_ADDR(0x000081d8u): goto L_81D8;
    case RC_ADDR(0x000081deu): goto L_81DE;
    case RC_ADDR(0x000081fau): goto L_81FA;
    case RC_ADDR(0x00008200u): goto L_8200;
    case RC_ADDR(0x00008202u): goto L_8202;
    case RC_ADDR(0x00008204u): goto L_8204;
    case RC_ADDR(0x00008208u): goto L_8208;
    case RC_ADDR(0x0000820cu): goto L_820C;
    case RC_ADDR(0x00008210u): goto L_8210;
    case RC_ADDR(0x00008214u): goto L_8214;
    case RC_ADDR(0x00008218u): goto L_8218;
    case RC_ADDR(0x0000821au): goto L_821A;
    case RC_ADDR(0x0000821eu): goto L_821E;
    case RC_ADDR(0x00008220u): goto L_8220;
    case RC_ADDR(0x00008222u): goto L_8222;
    case RC_ADDR(0x00008226u): goto L_8226;
    case RC_ADDR(0x0000822au): goto L_822A;
    case RC_ADDR(0x0000822eu): goto L_822E;
    case RC_ADDR(0x00008232u): goto L_8232;
    case RC_ADDR(0x00008236u): goto L_8236;
    case RC_ADDR(0x00008238u): goto L_8238;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_7DCA:
    /* 00007dca   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00007dcau);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_7DCE:
    /* 00007dce   4  tst.w (256,A4) */
    c->pc = RC_ADDR(0x00007dceu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x256u));
    rc_set_nzvc(c, t0, RC_W);

L_7DD2:
    /* 00007dd2   2  bne 00007e24 */
    c->pc = RC_ADDR(0x00007dd2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_7E24;

L_7DD4:
    /* 00007dd4   4  tst.w (268,A4) */
    c->pc = RC_ADDR(0x00007dd4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x268u));
    rc_set_nzvc(c, t0, RC_W);

L_7DD8:
    /* 00007dd8   2  beq 00007e24 */
    c->pc = RC_ADDR(0x00007dd8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_7E24;

L_7DDA:
    /* 00007dda   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00007ddau);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7DDC:
    /* 00007ddc   4  move.w (c2,A4),D0 */
    c->pc = RC_ADDR(0x00007ddcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xc2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7DE0:
    /* 00007de0   2  ext.l D0 */
    c->pc = RC_ADDR(0x00007de0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_7DE2:
    /* 00007de2   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00007de2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_7DE4:
    /* 00007de4   4  lea (fa,A4),A0 */
    c->pc = RC_ADDR(0x00007de4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xfau);

L_7DE8:
    /* 00007de8   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00007de8u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7DEC:
    /* 00007dec   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x00007decu);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_7DF0:
    /* 00007df0   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x00007df0u);
    rc_step(c, m, 18);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x00007df4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cbcu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_7DF4:
    /* 00007df4   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00007df4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_7DF6:
    /* 00007df6   4  move.w (e4,A4),D0 */
    c->pc = RC_ADDR(0x00007df6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7DFA:
    /* 00007dfa   4  sub.w (e6,A4),D0 */
    c->pc = RC_ADDR(0x00007dfau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_7DFE:
    /* 00007dfe   2  ext.l D0 */
    c->pc = RC_ADDR(0x00007dfeu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_7E00:
    /* 00007e00   4  divs.w #6,D0 */
    c->pc = RC_ADDR(0x00007e00u);
    rc_step(c, m, 162);
    t0 = 0x00000006u;
    rc_divs(c, m, 0, t0);

L_7E04:
    /* 00007e04   4  muls.w #14,D0 */
    c->pc = RC_ADDR(0x00007e04u);
    rc_step(c, m, 42);
    t0 = 0x00000014u;
    rc_muls(c, 0, t0);

L_7E08:
    /* 00007e08   4  sub.w D0,(c4,A4) */
    c->pc = RC_ADDR(0x00007e08u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xc4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_7E0C:
    /* 00007e0c   6  move.w #2,(c2,A4) */
    c->pc = RC_ADDR(0x00007e0cu);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0xc2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7E12:
    /* 00007e12   6  move.w #8,(e6,A4) */
    c->pc = RC_ADDR(0x00007e12u);
    rc_step(c, m, 16);
    t0 = 0x00000008u;
    rc_wr16(c, m, (c->a[4] + 0xe6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7E18:
    /* 00007e18   6  move.w #8,(e4,A4) */
    c->pc = RC_ADDR(0x00007e18u);
    rc_step(c, m, 16);
    t0 = 0x00000008u;
    rc_wr16(c, m, (c->a[4] + 0xe4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7E1E:
    /* 00007e1e   6  move.w #1,(256,A4) */
    c->pc = RC_ADDR(0x00007e1eu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x256u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7E24:
    /* 00007e24   4  move.w (c2,A4),D0 */
    c->pc = RC_ADDR(0x00007e24u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xc2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7E28:
    /* 00007e28   2  ext.l D0 */
    c->pc = RC_ADDR(0x00007e28u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_7E2A:
    /* 00007e2a   2  bra 00007e4e */
    c->pc = RC_ADDR(0x00007e2au);
    rc_step(c, m, 10);
    goto L_7E4E;

L_7E2C:
    /* 00007e2c   6  cmpi.w #30,(266,A4) */
    c->pc = RC_ADDR(0x00007e2cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x266u));
    rc_cmp(c, RC_W, t0, 0x00000030u);

L_7E32:
    /* 00007e32   2  bge 00007e38 */
    c->pc = RC_ADDR(0x00007e32u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_7E38;

L_7E34:
    /* 00007e34   4  addq.w #1,(266,A4) */
    c->pc = RC_ADDR(0x00007e34u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x266u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_7E38:
    /* 00007e38   2  bra 00007e5a */
    c->pc = RC_ADDR(0x00007e38u);
    rc_step(c, m, 10);
    goto L_7E5A;

L_7E3A:
    /* 00007e3a   4  tst.w (266,A4) */
    c->pc = RC_ADDR(0x00007e3au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x266u));
    rc_set_nzvc(c, t0, RC_W);

L_7E3E:
    /* 00007e3e   2  beq 00007e4c */
    c->pc = RC_ADDR(0x00007e3eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_7E4C;

L_7E40:
    /* 00007e40   4  move.w (e6,A4),D0 */
    c->pc = RC_ADDR(0x00007e40u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7E44:
    /* 00007e44   4  and.w #1,D0 */
    c->pc = RC_ADDR(0x00007e44u);
    rc_step(c, m, 10);
    t0 = 0x00000001u;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_7E48:
    /* 00007e48   4  sub.w D0,(266,A4) */
    c->pc = RC_ADDR(0x00007e48u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x266u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_7E4C:
    /* 00007e4c   2  bra 00007e5a */
    c->pc = RC_ADDR(0x00007e4cu);
    rc_step(c, m, 10);
    goto L_7E5A;

L_7E4E:
    /* 00007e4e   2  tst.l D0 */
    c->pc = RC_ADDR(0x00007e4eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_7E50:
    /* 00007e50   2  beq 00007e2c */
    c->pc = RC_ADDR(0x00007e50u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_7E2C; }

L_7E52:
    /* 00007e52   6  sub.l #b,D0 */
    c->pc = RC_ADDR(0x00007e52u);
    rc_step(c, m, 16);
    t0 = 0x0000000bu;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_7E58:
    /* 00007e58   2  beq 00007e3a */
    c->pc = RC_ADDR(0x00007e58u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_7E3A; }

L_7E5A:
    /* 00007e5a   4  subq.w #1,(e6,A4) */
    c->pc = RC_ADDR(0x00007e5au);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xe6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_7E5E:
    /* 00007e5e   4  tst.w (e6,A4) */
    c->pc = RC_ADDR(0x00007e5eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6u));
    rc_set_nzvc(c, t0, RC_W);

L_7E62:
    /* 00007e62   4  bne 0000810c */
    c->pc = RC_ADDR(0x00007e62u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_810C;

L_7E66:
    /* 00007e66   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00007e66u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7E68:
    /* 00007e68   4  move.w (c2,A4),D0 */
    c->pc = RC_ADDR(0x00007e68u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xc2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7E6C:
    /* 00007e6c   2  ext.l D0 */
    c->pc = RC_ADDR(0x00007e6cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_7E6E:
    /* 00007e6e   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00007e6eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_7E70:
    /* 00007e70   4  lea (fa,A4),A0 */
    c->pc = RC_ADDR(0x00007e70u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xfau);

L_7E74:
    /* 00007e74   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00007e74u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7E78:
    /* 00007e78   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x00007e78u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_7E7C:
    /* 00007e7c   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x00007e7cu);
    rc_step(c, m, 18);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x00007e80u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cbcu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_7E80:
    /* 00007e80   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00007e80u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_7E82:
    /* 00007e82   4  move.w (c2,A4),D0 */
    c->pc = RC_ADDR(0x00007e82u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xc2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7E86:
    /* 00007e86   2  ext.l D0 */
    c->pc = RC_ADDR(0x00007e86u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_7E88:
    /* 00007e88   2  bra 00007eba */
    c->pc = RC_ADDR(0x00007e88u);
    rc_step(c, m, 10);
    goto L_7EBA;

L_7E8A:
    /* 00007e8a   4  move.w (e4,A4),D0 */
    c->pc = RC_ADDR(0x00007e8au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7E8E:
    /* 00007e8e   2  ext.l D0 */
    c->pc = RC_ADDR(0x00007e8eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_7E90:
    /* 00007e90   4  divs.w #6,D0 */
    c->pc = RC_ADDR(0x00007e90u);
    rc_step(c, m, 162);
    t0 = 0x00000006u;
    rc_divs(c, m, 0, t0);

L_7E94:
    /* 00007e94   4  muls.w #14,D0 */
    c->pc = RC_ADDR(0x00007e94u);
    rc_step(c, m, 42);
    t0 = 0x00000014u;
    rc_muls(c, 0, t0);

L_7E98:
    /* 00007e98   4  sub.w D0,(c4,A4) */
    c->pc = RC_ADDR(0x00007e98u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xc4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_7E9C:
    /* 00007e9c   2  bra 00007eca */
    c->pc = RC_ADDR(0x00007e9cu);
    rc_step(c, m, 10);
    goto L_7ECA;

L_7E9E:
    /* 00007e9e   4  move.w (e4,A4),D0 */
    c->pc = RC_ADDR(0x00007e9eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7EA2:
    /* 00007ea2   4  muls.w #a,D0 */
    c->pc = RC_ADDR(0x00007ea2u);
    rc_step(c, m, 42);
    t0 = 0x0000000au;
    rc_muls(c, 0, t0);

L_7EA6:
    /* 00007ea6   4  add.w D0,(c4,A4) */
    c->pc = RC_ADDR(0x00007ea6u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xc4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_7EAA:
    /* 00007eaa   2  bra 00007eca */
    c->pc = RC_ADDR(0x00007eaau);
    rc_step(c, m, 10);
    goto L_7ECA;

L_7EAC:
    /* 00007eac   4  move.w (e4,A4),D0 */
    c->pc = RC_ADDR(0x00007eacu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7EB0:
    /* 00007eb0   4  muls.w #a,D0 */
    c->pc = RC_ADDR(0x00007eb0u);
    rc_step(c, m, 42);
    t0 = 0x0000000au;
    rc_muls(c, 0, t0);

L_7EB4:
    /* 00007eb4   4  sub.w D0,(c4,A4) */
    c->pc = RC_ADDR(0x00007eb4u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xc4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_7EB8:
    /* 00007eb8   2  bra 00007eca */
    c->pc = RC_ADDR(0x00007eb8u);
    rc_step(c, m, 10);
    goto L_7ECA;

L_7EBA:
    /* 00007eba   2  tst.l D0 */
    c->pc = RC_ADDR(0x00007ebau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_7EBC:
    /* 00007ebc   2  beq 00007e8a */
    c->pc = RC_ADDR(0x00007ebcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_7E8A; }

L_7EBE:
    /* 00007ebe   2  subq.l #3,D0 */
    c->pc = RC_ADDR(0x00007ebeu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000003u;
    rc_flags_sub(c, RC_L, t1, 0x00000003u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_7EC0:
    /* 00007ec0   2  beq 00007eac */
    c->pc = RC_ADDR(0x00007ec0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_7EAC; }

L_7EC2:
    /* 00007ec2   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x00007ec2u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_7EC4:
    /* 00007ec4   2  beq 00007e9e */
    c->pc = RC_ADDR(0x00007ec4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_7E9E; }

L_7EC6:
    /* 00007ec6   2  subq.l #7,D0 */
    c->pc = RC_ADDR(0x00007ec6u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000007u;
    rc_flags_sub(c, RC_L, t1, 0x00000007u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_7EC8:
    /* 00007ec8   2  beq 00007e8a */
    c->pc = RC_ADDR(0x00007ec8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_7E8A; }

L_7ECA:
    /* 00007eca   6  cmpi.w #1,(256,A4) */
    c->pc = RC_ADDR(0x00007ecau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x256u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_7ED0:
    /* 00007ed0   4  bgt 00007f7e */
    c->pc = RC_ADDR(0x00007ed0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_7F7E;

L_7ED4:
    /* 00007ed4   4  move.w (c2,A4),D0 */
    c->pc = RC_ADDR(0x00007ed4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xc2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7ED8:
    /* 00007ed8   2  ext.l D0 */
    c->pc = RC_ADDR(0x00007ed8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_7EDA:
    /* 00007eda   4  bra 00007f6c */
    c->pc = RC_ADDR(0x00007edau);
    rc_step(c, m, 10);
    goto L_7F6C;

L_7EDE:
    /* 00007ede   6  move.w #1,(c2,A4) */
    c->pc = RC_ADDR(0x00007edeu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xc2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7EE4:
    /* 00007ee4   6  move.w #18,(e4,A4) */
    c->pc = RC_ADDR(0x00007ee4u);
    rc_step(c, m, 16);
    t0 = 0x00000018u;
    rc_wr16(c, m, (c->a[4] + 0xe4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7EEA:
    /* 00007eea   4  bra 00007f7e */
    c->pc = RC_ADDR(0x00007eeau);
    rc_step(c, m, 10);
    goto L_7F7E;

L_7EEE:
    /* 00007eee   6  cmpi.w #2,(c0,A4) */
    c->pc = RC_ADDR(0x00007eeeu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xc0u));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_7EF4:
    /* 00007ef4   2  bne 00007f04 */
    c->pc = RC_ADDR(0x00007ef4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_7F04;

L_7EF6:
    /* 00007ef6   6  move.w #2,(c2,A4) */
    c->pc = RC_ADDR(0x00007ef6u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0xc2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7EFC:
    /* 00007efc   6  move.w #8,(e4,A4) */
    c->pc = RC_ADDR(0x00007efcu);
    rc_step(c, m, 16);
    t0 = 0x00000008u;
    rc_wr16(c, m, (c->a[4] + 0xe4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7F02:
    /* 00007f02   2  bra 00007f1a */
    c->pc = RC_ADDR(0x00007f02u);
    rc_step(c, m, 10);
    goto L_7F1A;

L_7F04:
    /* 00007f04   6  move.w #b,(c2,A4) */
    c->pc = RC_ADDR(0x00007f04u);
    rc_step(c, m, 16);
    t0 = 0x0000000bu;
    rc_wr16(c, m, (c->a[4] + 0xc2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7F0A:
    /* 00007f0a   6  move.w #64,(e4,A4) */
    c->pc = RC_ADDR(0x00007f0au);
    rc_step(c, m, 16);
    t0 = 0x00000064u;
    rc_wr16(c, m, (c->a[4] + 0xe4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7F10:
    /* 00007f10   6  move.w #3,(256,A4) */
    c->pc = RC_ADDR(0x00007f10u);
    rc_step(c, m, 16);
    t0 = 0x00000003u;
    rc_wr16(c, m, (c->a[4] + 0x256u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7F16:
    /* 00007f16   4  bra 00008106 */
    c->pc = RC_ADDR(0x00007f16u);
    rc_step(c, m, 10);
    goto L_8106;

L_7F1A:
    /* 00007f1a   2  bra 00007f7e */
    c->pc = RC_ADDR(0x00007f1au);
    rc_step(c, m, 10);
    goto L_7F7E;

L_7F1C:
    /* 00007f1c   4  move.w (c4,A4),D0 */
    c->pc = RC_ADDR(0x00007f1cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xc4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7F20:
    /* 00007f20   2  ext.l D0 */
    c->pc = RC_ADDR(0x00007f20u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_7F22:
    /* 00007f22   4  divs.w #a,D0 */
    c->pc = RC_ADDR(0x00007f22u);
    rc_step(c, m, 162);
    t0 = 0x0000000au;
    rc_divs(c, m, 0, t0);

L_7F26:
    /* 00007f26   4  move.w D0,(e4,A4) */
    c->pc = RC_ADDR(0x00007f26u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0xe4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7F2A:
    /* 00007f2a   6  move.w #3,(c2,A4) */
    c->pc = RC_ADDR(0x00007f2au);
    rc_step(c, m, 16);
    t0 = 0x00000003u;
    rc_wr16(c, m, (c->a[4] + 0xc2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7F30:
    /* 00007f30   4  tst.w (e4,A4) */
    c->pc = RC_ADDR(0x00007f30u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe4u));
    rc_set_nzvc(c, t0, RC_W);

L_7F34:
    /* 00007f34   2  bne 00007f42 */
    c->pc = RC_ADDR(0x00007f34u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_7F42;

L_7F36:
    /* 00007f36   6  move.w #5,(c2,A4) */
    c->pc = RC_ADDR(0x00007f36u);
    rc_step(c, m, 16);
    t0 = 0x00000005u;
    rc_wr16(c, m, (c->a[4] + 0xc2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7F3C:
    /* 00007f3c   6  move.w #4,(e4,A4) */
    c->pc = RC_ADDR(0x00007f3cu);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] + 0xe4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7F42:
    /* 00007f42   4  tst.w (e4,A4) */
    c->pc = RC_ADDR(0x00007f42u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe4u));
    rc_set_nzvc(c, t0, RC_W);

L_7F46:
    /* 00007f46   2  bge 00007f52 */
    c->pc = RC_ADDR(0x00007f46u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_7F52;

L_7F48:
    /* 00007f48   6  move.w #4,(c2,A4) */
    c->pc = RC_ADDR(0x00007f48u);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] + 0xc2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7F4E:
    /* 00007f4e   4  neg.w (e4,A4) */
    c->pc = RC_ADDR(0x00007f4eu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xe4u);
    t1 = rc_rd16(c, m, t3);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_wr16(c, m, t3, t2);

L_7F52:
    /* 00007f52   4  addq.w #1,(e4,A4) */
    c->pc = RC_ADDR(0x00007f52u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xe4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_7F56:
    /* 00007f56   2  bra 00007f7e */
    c->pc = RC_ADDR(0x00007f56u);
    rc_step(c, m, 10);
    goto L_7F7E;

L_7F58:
    /* 00007f58   6  move.w #2,(256,A4) */
    c->pc = RC_ADDR(0x00007f58u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x256u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7F5E:
    /* 00007f5e   2  bra 00007f7e */
    c->pc = RC_ADDR(0x00007f5eu);
    rc_step(c, m, 10);
    goto L_7F7E;

L_7F6C:
    /* 00007f6c   6  cmp.l #6,D0 */
    c->pc = RC_ADDR(0x00007f6cu);
    rc_step(c, m, 14);
    t0 = 0x00000006u;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_7F72:
    /* 00007f72   2  bcc 00007f7e */
    c->pc = RC_ADDR(0x00007f72u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_7F7E;

L_7F74:
    /* 00007f74   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00007f74u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_7F76:
    /* 00007f76   4  move.w (00007f60),D0 */
    c->pc = RC_ADDR(0x00007f76u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (RC_ADDR(0x00007f60u) + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7F7A:
    /* 00007f7a   4  jmp (00007f7c) */
    c->pc = RC_ADDR(0x00007f7au);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (RC_ADDR(0x00007f7cu) + t4);
    c->pc = t3;
    return;

L_7F7E:
    /* 00007f7e   6  cmpi.w #3,(256,A4) */
    c->pc = RC_ADDR(0x00007f7eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x256u));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_7F84:
    /* 00007f84   4  bne 00008038 */
    c->pc = RC_ADDR(0x00007f84u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_8038;

L_7F88:
    /* 00007f88   4  move.w (c2,A4),D0 */
    c->pc = RC_ADDR(0x00007f88u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xc2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7F8C:
    /* 00007f8c   2  ext.l D0 */
    c->pc = RC_ADDR(0x00007f8cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_7F8E:
    /* 00007f8e   4  bra 00008028 */
    c->pc = RC_ADDR(0x00007f8eu);
    rc_step(c, m, 10);
    goto L_8028;

L_7F92:
    /* 00007f92   6  move.w #b,(c2,A4) */
    c->pc = RC_ADDR(0x00007f92u);
    rc_step(c, m, 16);
    t0 = 0x0000000bu;
    rc_wr16(c, m, (c->a[4] + 0xc2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7F98:
    /* 00007f98   6  move.w #64,(e4,A4) */
    c->pc = RC_ADDR(0x00007f98u);
    rc_step(c, m, 16);
    t0 = 0x00000064u;
    rc_wr16(c, m, (c->a[4] + 0xe4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7F9E:
    /* 00007f9e   4  bra 00008038 */
    c->pc = RC_ADDR(0x00007f9eu);
    rc_step(c, m, 10);
    goto L_8038;

L_7FA2:
    /* 00007fa2   4  tst.w (268,A4) */
    c->pc = RC_ADDR(0x00007fa2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x268u));
    rc_set_nzvc(c, t0, RC_W);

L_7FA6:
    /* 00007fa6   2  beq 00008008 */
    c->pc = RC_ADDR(0x00007fa6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_8008;

L_7FA8:
    /* 00007fa8   4  move.w #3e8,-(A7) */
    c->pc = RC_ADDR(0x00007fa8u);
    rc_step(c, m, 12);
    t0 = 0x000003e8u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_7FAC:
    /* 00007fac   4  jsr (ffff8188,A4) */
    c->pc = RC_ADDR(0x00007facu);
    rc_step(c, m, 18);
    /* vector 65 */
    rc_push32(c, m, RC_ADDR(0x00007fb0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bdeu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00016ee0u);
    return;

L_7FB0:
    /* 00007fb0   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00007fb0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_7FB2:
    /* 00007fb2   4  cmp.w #12c,D0 */
    c->pc = RC_ADDR(0x00007fb2u);
    rc_step(c, m, 8);
    t0 = 0x0000012cu;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_7FB6:
    /* 00007fb6   2  bgt 00007fc0 */
    c->pc = RC_ADDR(0x00007fb6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_7FC0;

L_7FB8:
    /* 00007fb8   6  cmpi.w #2,(fffff100,A4) */
    c->pc = RC_ADDR(0x00007fb8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0xf00u));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_7FBE:
    /* 00007fbe   2  bne 00008008 */
    c->pc = RC_ADDR(0x00007fbeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_8008;

L_7FC0:
    /* 00007fc0   6  move.w #c8,(ffffcbc2,A4) */
    c->pc = RC_ADDR(0x00007fc0u);
    rc_step(c, m, 16);
    t0 = 0x000000c8u;
    rc_wr16(c, m, (c->a[4] - 0x343eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7FC6:
    /* 00007fc6   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00007fc6u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7FC8:
    /* 00007fc8   4  move.w (c2,A4),D0 */
    c->pc = RC_ADDR(0x00007fc8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xc2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7FCC:
    /* 00007fcc   2  ext.l D0 */
    c->pc = RC_ADDR(0x00007fccu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_7FCE:
    /* 00007fce   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00007fceu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_7FD0:
    /* 00007fd0   4  lea (fa,A4),A0 */
    c->pc = RC_ADDR(0x00007fd0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xfau);

L_7FD4:
    /* 00007fd4   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00007fd4u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7FD8:
    /* 00007fd8   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x00007fd8u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_7FDC:
    /* 00007fdc   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x00007fdcu);
    rc_step(c, m, 18);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x00007fe0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cbcu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_7FE0:
    /* 00007fe0   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00007fe0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_7FE2:
    /* 00007fe2   4  clr.w (268,A4) */
    c->pc = RC_ADDR(0x00007fe2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x268u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7FE6:
    /* 00007fe6   6  move.w #6,(88,A4) */
    c->pc = RC_ADDR(0x00007fe6u);
    rc_step(c, m, 16);
    t0 = 0x00000006u;
    rc_wr16(c, m, (c->a[4] + 0x88u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7FEC:
    /* 00007fec   6  move.w #c,(c2,A4) */
    c->pc = RC_ADDR(0x00007fecu);
    rc_step(c, m, 16);
    t0 = 0x0000000cu;
    rc_wr16(c, m, (c->a[4] + 0xc2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7FF2:
    /* 00007ff2   4  clr.w (c4,A4) */
    c->pc = RC_ADDR(0x00007ff2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xc4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7FF6:
    /* 00007ff6   4  clr.w (d4,A4) */
    c->pc = RC_ADDR(0x00007ff6u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xd4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7FFA:
    /* 00007ffa   6  move.w #1e,(e4,A4) */
    c->pc = RC_ADDR(0x00007ffau);
    rc_step(c, m, 16);
    t0 = 0x0000001eu;
    rc_wr16(c, m, (c->a[4] + 0xe4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_8000:
    /* 00008000   6  move.w #40,(266,A4) */
    c->pc = RC_ADDR(0x00008000u);
    rc_step(c, m, 16);
    t0 = 0x00000040u;
    rc_wr16(c, m, (c->a[4] + 0x266u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_8006:
    /* 00008006   2  bra 00008038 */
    c->pc = RC_ADDR(0x00008006u);
    rc_step(c, m, 10);
    goto L_8038;

L_8008:
    /* 00008008   6  move.w #1,(fffffec8,A4) */
    c->pc = RC_ADDR(0x00008008u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x138u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_800E:
    /* 0000800e   6  move.w #1,(fffffeca,A4) */
    c->pc = RC_ADDR(0x0000800eu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x136u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_8014:
    /* 00008014   6  move.w #1,(26a,A4) */
    c->pc = RC_ADDR(0x00008014u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x26au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_801A:
    /* 0000801a   2  bra 00008038 */
    c->pc = RC_ADDR(0x0000801au);
    rc_step(c, m, 10);
    goto L_8038;

L_801C:
    /* 0000801c   4  clr.w (fffffec8,A4) */
    c->pc = RC_ADDR(0x0000801cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x138u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_8020:
    /* 00008020   6  move.w #1,(26a,A4) */
    c->pc = RC_ADDR(0x00008020u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x26au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_8026:
    /* 00008026   2  bra 00008038 */
    c->pc = RC_ADDR(0x00008026u);
    rc_step(c, m, 10);
    goto L_8038;

L_8028:
    /* 00008028   2  subq.l #8,D0 */
    c->pc = RC_ADDR(0x00008028u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000008u;
    rc_flags_sub(c, RC_L, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_802A:
    /* 0000802a   4  beq 00007f92 */
    c->pc = RC_ADDR(0x0000802au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_7F92; }

L_802E:
    /* 0000802e   2  subq.l #3,D0 */
    c->pc = RC_ADDR(0x0000802eu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000003u;
    rc_flags_sub(c, RC_L, t1, 0x00000003u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_8030:
    /* 00008030   4  beq 00007fa2 */
    c->pc = RC_ADDR(0x00008030u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_7FA2; }

L_8034:
    /* 00008034   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x00008034u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_8036:
    /* 00008036   2  beq 0000801c */
    c->pc = RC_ADDR(0x00008036u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_801C; }

L_8038:
    /* 00008038   6  cmpi.w #2,(256,A4) */
    c->pc = RC_ADDR(0x00008038u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x256u));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_803E:
    /* 0000803e   4  bne 000080f2 */
    c->pc = RC_ADDR(0x0000803eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_80F2;

L_8042:
    /* 00008042   4  move.w (f6,A4),D0 */
    c->pc = RC_ADDR(0x00008042u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xf6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8046:
    /* 00008046   4  muls.w #30,D0 */
    c->pc = RC_ADDR(0x00008046u);
    rc_step(c, m, 42);
    t0 = 0x00000030u;
    rc_muls(c, 0, t0);

L_804A:
    /* 0000804a   4  move.w (f8,A4),D1 */
    c->pc = RC_ADDR(0x0000804au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xf8u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_804E:
    /* 0000804e   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000804eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_8050:
    /* 00008050   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00008050u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_8052:
    /* 00008052   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00008052u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_8054:
    /* 00008054   4  lea (ffff8d1c,A4),A0 */
    c->pc = RC_ADDR(0x00008054u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x72e4u);

L_8058:
    /* 00008058   6  move.w (0,A0,D0.w),(c2,A4) */
    c->pc = RC_ADDR(0x00008058u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] + 0xc2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_805E:
    /* 0000805e   4  addq.w #1,(f8,A4) */
    c->pc = RC_ADDR(0x0000805eu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xf8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_8062:
    /* 00008062   4  move.w (f6,A4),D0 */
    c->pc = RC_ADDR(0x00008062u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xf6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8066:
    /* 00008066   4  muls.w #30,D0 */
    c->pc = RC_ADDR(0x00008066u);
    rc_step(c, m, 42);
    t0 = 0x00000030u;
    rc_muls(c, 0, t0);

L_806A:
    /* 0000806a   4  move.w (f8,A4),D1 */
    c->pc = RC_ADDR(0x0000806au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xf8u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_806E:
    /* 0000806e   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000806eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_8070:
    /* 00008070   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00008070u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_8072:
    /* 00008072   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00008072u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_8074:
    /* 00008074   4  lea (ffff8d1c,A4),A0 */
    c->pc = RC_ADDR(0x00008074u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x72e4u);

L_8078:
    /* 00008078   6  move.w (0,A0,D0.w),(e4,A4) */
    c->pc = RC_ADDR(0x00008078u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] + 0xe4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_807E:
    /* 0000807e   4  addq.w #1,(f8,A4) */
    c->pc = RC_ADDR(0x0000807eu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xf8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_8082:
    /* 00008082   4  move.w (f6,A4),D0 */
    c->pc = RC_ADDR(0x00008082u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xf6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8086:
    /* 00008086   4  muls.w #30,D0 */
    c->pc = RC_ADDR(0x00008086u);
    rc_step(c, m, 42);
    t0 = 0x00000030u;
    rc_muls(c, 0, t0);

L_808A:
    /* 0000808a   4  move.w (f8,A4),D1 */
    c->pc = RC_ADDR(0x0000808au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xf8u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_808E:
    /* 0000808e   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000808eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_8090:
    /* 00008090   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00008090u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_8092:
    /* 00008092   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00008092u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_8094:
    /* 00008094   4  lea (ffff8d1c,A4),A0 */
    c->pc = RC_ADDR(0x00008094u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x72e4u);

L_8098:
    /* 00008098   6  cmpi.w #ff,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00008098u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x000000ffu);

L_809E:
    /* 0000809e   2  bne 000080b2 */
    c->pc = RC_ADDR(0x0000809eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_80B2;

L_80A0:
    /* 000080a0   4  move.w #6,-(A7) */
    c->pc = RC_ADDR(0x000080a0u);
    rc_step(c, m, 12);
    t0 = 0x00000006u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_80A4:
    /* 000080a4   4  jsr (ffff8248,A4) */
    c->pc = RC_ADDR(0x000080a4u);
    rc_step(c, m, 18);
    /* vector 97 */
    rc_push32(c, m, RC_ADDR(0x000080a8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c9eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001ec06u);
    return;

L_80A8:
    /* 000080a8   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000080a8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_80AA:
    /* 000080aa   4  move.w D0,(f6,A4) */
    c->pc = RC_ADDR(0x000080aau);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0xf6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_80AE:
    /* 000080ae   4  clr.w (f8,A4) */
    c->pc = RC_ADDR(0x000080aeu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xf8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_80B2:
    /* 000080b2   4  move.w (ffff8d1a,A4),D0 */
    c->pc = RC_ADDR(0x000080b2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x72e6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_80B6:
    /* 000080b6   4  subq.w #1,(ffff8d1a,A4) */
    c->pc = RC_ADDR(0x000080b6u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x72e6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_80BA:
    /* 000080ba   2  tst.w D0 */
    c->pc = RC_ADDR(0x000080bau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_80BC:
    /* 000080bc   2  bne 000080f2 */
    c->pc = RC_ADDR(0x000080bcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_80F2;

L_80BE:
    /* 000080be   4  move.w (c2,A4),D0 */
    c->pc = RC_ADDR(0x000080beu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xc2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_80C2:
    /* 000080c2   2  ext.l D0 */
    c->pc = RC_ADDR(0x000080c2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_80C4:
    /* 000080c4   2  bra 000080e2 */
    c->pc = RC_ADDR(0x000080c4u);
    rc_step(c, m, 10);
    goto L_80E2;

L_80C6:
    /* 000080c6   6  move.w #b,(c2,A4) */
    c->pc = RC_ADDR(0x000080c6u);
    rc_step(c, m, 16);
    t0 = 0x0000000bu;
    rc_wr16(c, m, (c->a[4] + 0xc2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_80CC:
    /* 000080cc   6  move.w #64,(e4,A4) */
    c->pc = RC_ADDR(0x000080ccu);
    rc_step(c, m, 16);
    t0 = 0x00000064u;
    rc_wr16(c, m, (c->a[4] + 0xe4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_80D2:
    /* 000080d2   2  bra 000080ec */
    c->pc = RC_ADDR(0x000080d2u);
    rc_step(c, m, 10);
    goto L_80EC;

L_80D4:
    /* 000080d4   6  move.w #8,(c2,A4) */
    c->pc = RC_ADDR(0x000080d4u);
    rc_step(c, m, 16);
    t0 = 0x00000008u;
    rc_wr16(c, m, (c->a[4] + 0xc2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_80DA:
    /* 000080da   6  move.w #4,(e4,A4) */
    c->pc = RC_ADDR(0x000080dau);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] + 0xe4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_80E0:
    /* 000080e0   2  bra 000080ec */
    c->pc = RC_ADDR(0x000080e0u);
    rc_step(c, m, 10);
    goto L_80EC;

L_80E2:
    /* 000080e2   2  tst.l D0 */
    c->pc = RC_ADDR(0x000080e2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_80E4:
    /* 000080e4   2  beq 000080c6 */
    c->pc = RC_ADDR(0x000080e4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_80C6; }

L_80E6:
    /* 000080e6   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x000080e6u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_80E8:
    /* 000080e8   2  beq 000080c6 */
    c->pc = RC_ADDR(0x000080e8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_80C6; }

L_80EA:
    /* 000080ea   2  bra 000080d4 */
    c->pc = RC_ADDR(0x000080eau);
    rc_step(c, m, 10);
    rc_tick();
    goto L_80D4;

L_80EC:
    /* 000080ec   6  move.w #3,(256,A4) */
    c->pc = RC_ADDR(0x000080ecu);
    rc_step(c, m, 16);
    t0 = 0x00000003u;
    rc_wr16(c, m, (c->a[4] + 0x256u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_80F2:
    /* 000080f2   6  cmpi.w #4,(256,A4) */
    c->pc = RC_ADDR(0x000080f2u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x256u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_80F8:
    /* 000080f8   2  bne 00008106 */
    c->pc = RC_ADDR(0x000080f8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_8106;

L_80FA:
    /* 000080fa   6  move.w #1,(fffffec8,A4) */
    c->pc = RC_ADDR(0x000080fau);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x138u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_8100:
    /* 00008100   6  move.w #1,(26a,A4) */
    c->pc = RC_ADDR(0x00008100u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x26au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_8106:
    /* 00008106   6  move.w (e4,A4),(e6,A4) */
    c->pc = RC_ADDR(0x00008106u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe4u));
    rc_wr16(c, m, (c->a[4] + 0xe6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_810C:
    /* 0000810c   4  move.w (252,A4),D0 */
    c->pc = RC_ADDR(0x0000810cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x252u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8110:
    /* 00008110   4  or.w (254,A4),D0 */
    c->pc = RC_ADDR(0x00008110u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x254u));
    t2 = t0 | rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_8114:
    /* 00008114   4  bne 0000820c */
    c->pc = RC_ADDR(0x00008114u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_820C;

L_8118:
    /* 00008118   6  cmpi.w #4,(256,A4) */
    c->pc = RC_ADDR(0x00008118u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x256u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_811E:
    /* 0000811e   4  beq 0000820c */
    c->pc = RC_ADDR(0x0000811eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_820C;

L_8122:
    /* 00008122   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x00008122u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_8126:
    /* 00008126   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x00008126u);
    rc_step(c, m, 18);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x0000812au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b18u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00009bcau);
    return;

L_812A:
    /* 0000812a   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000812au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_812C:
    /* 0000812c   4  move.w (e6,A4),D0 */
    c->pc = RC_ADDR(0x0000812cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8130:
    /* 00008130   4  sub.w D0,(e4,A4) */
    c->pc = RC_ADDR(0x00008130u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xe4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_8134:
    /* 00008134   6  move.w #4,(256,A4) */
    c->pc = RC_ADDR(0x00008134u);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] + 0x256u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_813A:
    /* 0000813a   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000813au);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_813C:
    /* 0000813c   4  move.w (c2,A4),D0 */
    c->pc = RC_ADDR(0x0000813cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xc2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8140:
    /* 00008140   2  ext.l D0 */
    c->pc = RC_ADDR(0x00008140u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_8142:
    /* 00008142   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00008142u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_8144:
    /* 00008144   4  lea (fa,A4),A0 */
    c->pc = RC_ADDR(0x00008144u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xfau);

L_8148:
    /* 00008148   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00008148u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_814C:
    /* 0000814c   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000814cu);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_8150:
    /* 00008150   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x00008150u);
    rc_step(c, m, 18);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x00008154u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cbcu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_8154:
    /* 00008154   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00008154u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_8156:
    /* 00008156   4  move.w (c2,A4),D0 */
    c->pc = RC_ADDR(0x00008156u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xc2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_815A:
    /* 0000815a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000815au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_815C:
    /* 0000815c   4  bra 000081fa */
    c->pc = RC_ADDR(0x0000815cu);
    rc_step(c, m, 10);
    goto L_81FA;

L_8160:
    /* 00008160   6  move.w #7,(c2,A4) */
    c->pc = RC_ADDR(0x00008160u);
    rc_step(c, m, 16);
    t0 = 0x00000007u;
    rc_wr16(c, m, (c->a[4] + 0xc2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_8166:
    /* 00008166   6  move.w #32,(e6,A4) */
    c->pc = RC_ADDR(0x00008166u);
    rc_step(c, m, 16);
    t0 = 0x00000032u;
    rc_wr16(c, m, (c->a[4] + 0xe6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_816C:
    /* 0000816c   4  move.w (e4,A4),D0 */
    c->pc = RC_ADDR(0x0000816cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8170:
    /* 00008170   2  ext.l D0 */
    c->pc = RC_ADDR(0x00008170u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_8172:
    /* 00008172   4  divs.w #6,D0 */
    c->pc = RC_ADDR(0x00008172u);
    rc_step(c, m, 162);
    t0 = 0x00000006u;
    rc_divs(c, m, 0, t0);

L_8176:
    /* 00008176   4  muls.w #14,D0 */
    c->pc = RC_ADDR(0x00008176u);
    rc_step(c, m, 42);
    t0 = 0x00000014u;
    rc_muls(c, 0, t0);

L_817A:
    /* 0000817a   4  sub.w D0,(c4,A4) */
    c->pc = RC_ADDR(0x0000817au);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xc4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_817E:
    /* 0000817e   4  bra 0000820c */
    c->pc = RC_ADDR(0x0000817eu);
    rc_step(c, m, 10);
    goto L_820C;

L_8182:
    /* 00008182   6  move.w #a,(c2,A4) */
    c->pc = RC_ADDR(0x00008182u);
    rc_step(c, m, 16);
    t0 = 0x0000000au;
    rc_wr16(c, m, (c->a[4] + 0xc2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_8188:
    /* 00008188   6  move.w #32,(e6,A4) */
    c->pc = RC_ADDR(0x00008188u);
    rc_step(c, m, 16);
    t0 = 0x00000032u;
    rc_wr16(c, m, (c->a[4] + 0xe6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_818E:
    /* 0000818e   4  move.w (e4,A4),D0 */
    c->pc = RC_ADDR(0x0000818eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8192:
    /* 00008192   4  muls.w #a,D0 */
    c->pc = RC_ADDR(0x00008192u);
    rc_step(c, m, 42);
    t0 = 0x0000000au;
    rc_muls(c, 0, t0);

L_8196:
    /* 00008196   4  add.w D0,(c4,A4) */
    c->pc = RC_ADDR(0x00008196u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xc4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_819A:
    /* 0000819a   2  bra 0000820c */
    c->pc = RC_ADDR(0x0000819au);
    rc_step(c, m, 10);
    goto L_820C;

L_819C:
    /* 0000819c   6  move.w #a,(c2,A4) */
    c->pc = RC_ADDR(0x0000819cu);
    rc_step(c, m, 16);
    t0 = 0x0000000au;
    rc_wr16(c, m, (c->a[4] + 0xc2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_81A2:
    /* 000081a2   6  move.w #32,(e6,A4) */
    c->pc = RC_ADDR(0x000081a2u);
    rc_step(c, m, 16);
    t0 = 0x00000032u;
    rc_wr16(c, m, (c->a[4] + 0xe6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_81A8:
    /* 000081a8   4  move.w (e4,A4),D0 */
    c->pc = RC_ADDR(0x000081a8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_81AC:
    /* 000081ac   4  muls.w #a,D0 */
    c->pc = RC_ADDR(0x000081acu);
    rc_step(c, m, 42);
    t0 = 0x0000000au;
    rc_muls(c, 0, t0);

L_81B0:
    /* 000081b0   4  sub.w D0,(c4,A4) */
    c->pc = RC_ADDR(0x000081b0u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xc4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_81B4:
    /* 000081b4   2  bra 0000820c */
    c->pc = RC_ADDR(0x000081b4u);
    rc_step(c, m, 10);
    goto L_820C;

L_81B6:
    /* 000081b6   6  move.w #a,(c2,A4) */
    c->pc = RC_ADDR(0x000081b6u);
    rc_step(c, m, 16);
    t0 = 0x0000000au;
    rc_wr16(c, m, (c->a[4] + 0xc2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_81BC:
    /* 000081bc   6  move.w #32,(e6,A4) */
    c->pc = RC_ADDR(0x000081bcu);
    rc_step(c, m, 16);
    t0 = 0x00000032u;
    rc_wr16(c, m, (c->a[4] + 0xe6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_81C2:
    /* 000081c2   2  bra 0000820c */
    c->pc = RC_ADDR(0x000081c2u);
    rc_step(c, m, 10);
    goto L_820C;

L_81C4:
    /* 000081c4   6  move.w #d,(c2,A4) */
    c->pc = RC_ADDR(0x000081c4u);
    rc_step(c, m, 16);
    t0 = 0x0000000du;
    rc_wr16(c, m, (c->a[4] + 0xc2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_81CA:
    /* 000081ca   6  move.w #14,(e6,A4) */
    c->pc = RC_ADDR(0x000081cau);
    rc_step(c, m, 16);
    t0 = 0x00000014u;
    rc_wr16(c, m, (c->a[4] + 0xe6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_81D0:
    /* 000081d0   2  bra 0000820c */
    c->pc = RC_ADDR(0x000081d0u);
    rc_step(c, m, 10);
    goto L_820C;

L_81D2:
    /* 000081d2   6  move.w #7,(c2,A4) */
    c->pc = RC_ADDR(0x000081d2u);
    rc_step(c, m, 16);
    t0 = 0x00000007u;
    rc_wr16(c, m, (c->a[4] + 0xc2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_81D8:
    /* 000081d8   6  move.w #32,(e6,A4) */
    c->pc = RC_ADDR(0x000081d8u);
    rc_step(c, m, 16);
    t0 = 0x00000032u;
    rc_wr16(c, m, (c->a[4] + 0xe6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_81DE:
    /* 000081de   2  bra 0000820c */
    c->pc = RC_ADDR(0x000081deu);
    rc_step(c, m, 10);
    goto L_820C;

L_81FA:
    /* 000081fa   6  cmp.l #d,D0 */
    c->pc = RC_ADDR(0x000081fau);
    rc_step(c, m, 14);
    t0 = 0x0000000du;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_8200:
    /* 00008200   2  bcc 000081d2 */
    c->pc = RC_ADDR(0x00008200u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) { rc_tick(); goto L_81D2; }

L_8202:
    /* 00008202   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00008202u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_8204:
    /* 00008204   4  move.w (000081e0),D0 */
    c->pc = RC_ADDR(0x00008204u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (RC_ADDR(0x000081e0u) + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8208:
    /* 00008208   4  jmp (0000820a) */
    c->pc = RC_ADDR(0x00008208u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (RC_ADDR(0x0000820au) + t4);
    c->pc = t3;
    return;

L_820C:
    /* 0000820c   4  move.w (88,A4),-(A7) */
    c->pc = RC_ADDR(0x0000820cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x88u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_8210:
    /* 00008210   4  move.w (d4,A4),-(A7) */
    c->pc = RC_ADDR(0x00008210u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xd4u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_8214:
    /* 00008214   4  move.w (c4,A4),-(A7) */
    c->pc = RC_ADDR(0x00008214u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xc4u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_8218:
    /* 00008218   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00008218u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_821A:
    /* 0000821a   4  move.w (c2,A4),D0 */
    c->pc = RC_ADDR(0x0000821au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xc2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_821E:
    /* 0000821e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000821eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_8220:
    /* 00008220   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00008220u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_8222:
    /* 00008222   4  lea (fa,A4),A0 */
    c->pc = RC_ADDR(0x00008222u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xfau);

L_8226:
    /* 00008226   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00008226u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_822A:
    /* 0000822a   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000822au);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_822E:
    /* 0000822e   4  jsr (ffff8272,A4) */
    c->pc = RC_ADDR(0x0000822eu);
    rc_step(c, m, 18);
    /* vector 104 */
    rc_push32(c, m, RC_ADDR(0x00008232u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cc8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f914u);
    return;

L_8232:
    /* 00008232   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00008232u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_8236:
    /* 00008236   2  unlk A5 */
    c->pc = RC_ADDR(0x00008236u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_8238:
    /* 00008238   2  rts */
    c->pc = RC_ADDR(0x00008238u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
