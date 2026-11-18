/* fn_00019e42 - 694 byte(s), 197 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00019e42(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00019e42u): goto L_19E42;
    case RC_ADDR(0x00019e46u): goto L_19E46;
    case RC_ADDR(0x00019e4au): goto L_19E4A;
    case RC_ADDR(0x00019e4eu): goto L_19E4E;
    case RC_ADDR(0x00019e50u): goto L_19E50;
    case RC_ADDR(0x00019e52u): goto L_19E52;
    case RC_ADDR(0x00019e56u): goto L_19E56;
    case RC_ADDR(0x00019e5cu): goto L_19E5C;
    case RC_ADDR(0x00019e5eu): goto L_19E5E;
    case RC_ADDR(0x00019e62u): goto L_19E62;
    case RC_ADDR(0x00019e64u): goto L_19E64;
    case RC_ADDR(0x00019e66u): goto L_19E66;
    case RC_ADDR(0x00019e6au): goto L_19E6A;
    case RC_ADDR(0x00019e70u): goto L_19E70;
    case RC_ADDR(0x00019e72u): goto L_19E72;
    case RC_ADDR(0x00019e76u): goto L_19E76;
    case RC_ADDR(0x00019e78u): goto L_19E78;
    case RC_ADDR(0x00019e7au): goto L_19E7A;
    case RC_ADDR(0x00019e7eu): goto L_19E7E;
    case RC_ADDR(0x00019e84u): goto L_19E84;
    case RC_ADDR(0x00019e86u): goto L_19E86;
    case RC_ADDR(0x00019e8au): goto L_19E8A;
    case RC_ADDR(0x00019e8cu): goto L_19E8C;
    case RC_ADDR(0x00019e8eu): goto L_19E8E;
    case RC_ADDR(0x00019e92u): goto L_19E92;
    case RC_ADDR(0x00019e98u): goto L_19E98;
    case RC_ADDR(0x00019e9cu): goto L_19E9C;
    case RC_ADDR(0x00019ea0u): goto L_19EA0;
    case RC_ADDR(0x00019ea2u): goto L_19EA2;
    case RC_ADDR(0x00019ea4u): goto L_19EA4;
    case RC_ADDR(0x00019ea8u): goto L_19EA8;
    case RC_ADDR(0x00019eacu): goto L_19EAC;
    case RC_ADDR(0x00019eb0u): goto L_19EB0;
    case RC_ADDR(0x00019eb2u): goto L_19EB2;
    case RC_ADDR(0x00019eb6u): goto L_19EB6;
    case RC_ADDR(0x00019eb8u): goto L_19EB8;
    case RC_ADDR(0x00019ebau): goto L_19EBA;
    case RC_ADDR(0x00019ebeu): goto L_19EBE;
    case RC_ADDR(0x00019ec2u): goto L_19EC2;
    case RC_ADDR(0x00019ec6u): goto L_19EC6;
    case RC_ADDR(0x00019ec8u): goto L_19EC8;
    case RC_ADDR(0x00019ecau): goto L_19ECA;
    case RC_ADDR(0x00019eceu): goto L_19ECE;
    case RC_ADDR(0x00019ed4u): goto L_19ED4;
    case RC_ADDR(0x00019ed8u): goto L_19ED8;
    case RC_ADDR(0x00019edau): goto L_19EDA;
    case RC_ADDR(0x00019edcu): goto L_19EDC;
    case RC_ADDR(0x00019ee0u): goto L_19EE0;
    case RC_ADDR(0x00019ee4u): goto L_19EE4;
    case RC_ADDR(0x00019ee6u): goto L_19EE6;
    case RC_ADDR(0x00019ee8u): goto L_19EE8;
    case RC_ADDR(0x00019eecu): goto L_19EEC;
    case RC_ADDR(0x00019ef2u): goto L_19EF2;
    case RC_ADDR(0x00019ef6u): goto L_19EF6;
    case RC_ADDR(0x00019ef8u): goto L_19EF8;
    case RC_ADDR(0x00019efau): goto L_19EFA;
    case RC_ADDR(0x00019efeu): goto L_19EFE;
    case RC_ADDR(0x00019f02u): goto L_19F02;
    case RC_ADDR(0x00019f04u): goto L_19F04;
    case RC_ADDR(0x00019f06u): goto L_19F06;
    case RC_ADDR(0x00019f0au): goto L_19F0A;
    case RC_ADDR(0x00019f0eu): goto L_19F0E;
    case RC_ADDR(0x00019f10u): goto L_19F10;
    case RC_ADDR(0x00019f12u): goto L_19F12;
    case RC_ADDR(0x00019f16u): goto L_19F16;
    case RC_ADDR(0x00019f1au): goto L_19F1A;
    case RC_ADDR(0x00019f1eu): goto L_19F1E;
    case RC_ADDR(0x00019f22u): goto L_19F22;
    case RC_ADDR(0x00019f26u): goto L_19F26;
    case RC_ADDR(0x00019f2au): goto L_19F2A;
    case RC_ADDR(0x00019f2cu): goto L_19F2C;
    case RC_ADDR(0x00019f2eu): goto L_19F2E;
    case RC_ADDR(0x00019f32u): goto L_19F32;
    case RC_ADDR(0x00019f36u): goto L_19F36;
    case RC_ADDR(0x00019f3au): goto L_19F3A;
    case RC_ADDR(0x00019f3cu): goto L_19F3C;
    case RC_ADDR(0x00019f3eu): goto L_19F3E;
    case RC_ADDR(0x00019f42u): goto L_19F42;
    case RC_ADDR(0x00019f46u): goto L_19F46;
    case RC_ADDR(0x00019f48u): goto L_19F48;
    case RC_ADDR(0x00019f4au): goto L_19F4A;
    case RC_ADDR(0x00019f4eu): goto L_19F4E;
    case RC_ADDR(0x00019f52u): goto L_19F52;
    case RC_ADDR(0x00019f54u): goto L_19F54;
    case RC_ADDR(0x00019f56u): goto L_19F56;
    case RC_ADDR(0x00019f5au): goto L_19F5A;
    case RC_ADDR(0x00019f5eu): goto L_19F5E;
    case RC_ADDR(0x00019f62u): goto L_19F62;
    case RC_ADDR(0x00019f66u): goto L_19F66;
    case RC_ADDR(0x00019f6au): goto L_19F6A;
    case RC_ADDR(0x00019f6eu): goto L_19F6E;
    case RC_ADDR(0x00019f70u): goto L_19F70;
    case RC_ADDR(0x00019f72u): goto L_19F72;
    case RC_ADDR(0x00019f76u): goto L_19F76;
    case RC_ADDR(0x00019f7au): goto L_19F7A;
    case RC_ADDR(0x00019f7eu): goto L_19F7E;
    case RC_ADDR(0x00019f80u): goto L_19F80;
    case RC_ADDR(0x00019f82u): goto L_19F82;
    case RC_ADDR(0x00019f86u): goto L_19F86;
    case RC_ADDR(0x00019f8au): goto L_19F8A;
    case RC_ADDR(0x00019f8eu): goto L_19F8E;
    case RC_ADDR(0x00019f90u): goto L_19F90;
    case RC_ADDR(0x00019f92u): goto L_19F92;
    case RC_ADDR(0x00019f96u): goto L_19F96;
    case RC_ADDR(0x00019f9au): goto L_19F9A;
    case RC_ADDR(0x00019f9eu): goto L_19F9E;
    case RC_ADDR(0x00019fa0u): goto L_19FA0;
    case RC_ADDR(0x00019fa2u): goto L_19FA2;
    case RC_ADDR(0x00019fa6u): goto L_19FA6;
    case RC_ADDR(0x00019faau): goto L_19FAA;
    case RC_ADDR(0x00019faeu): goto L_19FAE;
    case RC_ADDR(0x00019fb0u): goto L_19FB0;
    case RC_ADDR(0x00019fb2u): goto L_19FB2;
    case RC_ADDR(0x00019fb6u): goto L_19FB6;
    case RC_ADDR(0x00019fbau): goto L_19FBA;
    case RC_ADDR(0x00019fbeu): goto L_19FBE;
    case RC_ADDR(0x00019fc0u): goto L_19FC0;
    case RC_ADDR(0x00019fc2u): goto L_19FC2;
    case RC_ADDR(0x00019fc6u): goto L_19FC6;
    case RC_ADDR(0x00019fcau): goto L_19FCA;
    case RC_ADDR(0x00019fceu): goto L_19FCE;
    case RC_ADDR(0x00019fd0u): goto L_19FD0;
    case RC_ADDR(0x00019fd2u): goto L_19FD2;
    case RC_ADDR(0x00019fd6u): goto L_19FD6;
    case RC_ADDR(0x00019fdau): goto L_19FDA;
    case RC_ADDR(0x00019fdeu): goto L_19FDE;
    case RC_ADDR(0x00019fe0u): goto L_19FE0;
    case RC_ADDR(0x00019fe2u): goto L_19FE2;
    case RC_ADDR(0x00019fe6u): goto L_19FE6;
    case RC_ADDR(0x00019feau): goto L_19FEA;
    case RC_ADDR(0x00019feeu): goto L_19FEE;
    case RC_ADDR(0x00019ff0u): goto L_19FF0;
    case RC_ADDR(0x00019ff2u): goto L_19FF2;
    case RC_ADDR(0x00019ff6u): goto L_19FF6;
    case RC_ADDR(0x00019ffau): goto L_19FFA;
    case RC_ADDR(0x00019ffeu): goto L_19FFE;
    case RC_ADDR(0x0001a000u): goto L_1A000;
    case RC_ADDR(0x0001a002u): goto L_1A002;
    case RC_ADDR(0x0001a006u): goto L_1A006;
    case RC_ADDR(0x0001a00cu): goto L_1A00C;
    case RC_ADDR(0x0001a010u): goto L_1A010;
    case RC_ADDR(0x0001a012u): goto L_1A012;
    case RC_ADDR(0x0001a014u): goto L_1A014;
    case RC_ADDR(0x0001a018u): goto L_1A018;
    case RC_ADDR(0x0001a01cu): goto L_1A01C;
    case RC_ADDR(0x0001a020u): goto L_1A020;
    case RC_ADDR(0x0001a022u): goto L_1A022;
    case RC_ADDR(0x0001a024u): goto L_1A024;
    case RC_ADDR(0x0001a028u): goto L_1A028;
    case RC_ADDR(0x0001a02eu): goto L_1A02E;
    case RC_ADDR(0x0001a032u): goto L_1A032;
    case RC_ADDR(0x0001a034u): goto L_1A034;
    case RC_ADDR(0x0001a036u): goto L_1A036;
    case RC_ADDR(0x0001a03au): goto L_1A03A;
    case RC_ADDR(0x0001a03eu): goto L_1A03E;
    case RC_ADDR(0x0001a042u): goto L_1A042;
    case RC_ADDR(0x0001a044u): goto L_1A044;
    case RC_ADDR(0x0001a046u): goto L_1A046;
    case RC_ADDR(0x0001a04au): goto L_1A04A;
    case RC_ADDR(0x0001a04eu): goto L_1A04E;
    case RC_ADDR(0x0001a050u): goto L_1A050;
    case RC_ADDR(0x0001a052u): goto L_1A052;
    case RC_ADDR(0x0001a056u): goto L_1A056;
    case RC_ADDR(0x0001a05cu): goto L_1A05C;
    case RC_ADDR(0x0001a060u): goto L_1A060;
    case RC_ADDR(0x0001a066u): goto L_1A066;
    case RC_ADDR(0x0001a06au): goto L_1A06A;
    case RC_ADDR(0x0001a070u): goto L_1A070;
    case RC_ADDR(0x0001a072u): goto L_1A072;
    case RC_ADDR(0x0001a076u): goto L_1A076;
    case RC_ADDR(0x0001a078u): goto L_1A078;
    case RC_ADDR(0x0001a07eu): goto L_1A07E;
    case RC_ADDR(0x0001a084u): goto L_1A084;
    case RC_ADDR(0x0001a08au): goto L_1A08A;
    case RC_ADDR(0x0001a090u): goto L_1A090;
    case RC_ADDR(0x0001a096u): goto L_1A096;
    case RC_ADDR(0x0001a09cu): goto L_1A09C;
    case RC_ADDR(0x0001a0a2u): goto L_1A0A2;
    case RC_ADDR(0x0001a0a8u): goto L_1A0A8;
    case RC_ADDR(0x0001a0aeu): goto L_1A0AE;
    case RC_ADDR(0x0001a0b4u): goto L_1A0B4;
    case RC_ADDR(0x0001a0bau): goto L_1A0BA;
    case RC_ADDR(0x0001a0c0u): goto L_1A0C0;
    case RC_ADDR(0x0001a0c6u): goto L_1A0C6;
    case RC_ADDR(0x0001a0ccu): goto L_1A0CC;
    case RC_ADDR(0x0001a0ceu): goto L_1A0CE;
    case RC_ADDR(0x0001a0d2u): goto L_1A0D2;
    case RC_ADDR(0x0001a0d4u): goto L_1A0D4;
    case RC_ADDR(0x0001a0d8u): goto L_1A0D8;
    case RC_ADDR(0x0001a0dcu): goto L_1A0DC;
    case RC_ADDR(0x0001a0e0u): goto L_1A0E0;
    case RC_ADDR(0x0001a0e4u): goto L_1A0E4;
    case RC_ADDR(0x0001a0e8u): goto L_1A0E8;
    case RC_ADDR(0x0001a0ecu): goto L_1A0EC;
    case RC_ADDR(0x0001a0f0u): goto L_1A0F0;
    case RC_ADDR(0x0001a0f4u): goto L_1A0F4;
    case RC_ADDR(0x0001a0f6u): goto L_1A0F6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_19E42:
    /* 00019e42   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00019e42u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_19E46:
    /* 00019e46   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00019e46u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_19E4A:
    /* 00019e4a   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00019e4au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19E4E:
    /* 00019e4e   2  ext.l D0 */
    c->pc = RC_ADDR(0x00019e4eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_19E50:
    /* 00019e50   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019e50u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19E52:
    /* 00019e52   4  lea (2710,A4),A0 */
    c->pc = RC_ADDR(0x00019e52u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2710u);

L_19E56:
    /* 00019e56   6  cmpi.w #180,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00019e56u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x00000180u);

L_19E5C:
    /* 00019e5c   2  blt 00019e9c */
    c->pc = RC_ADDR(0x00019e5cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_19E9C;

L_19E5E:
    /* 00019e5e   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00019e5eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19E62:
    /* 00019e62   2  ext.l D0 */
    c->pc = RC_ADDR(0x00019e62u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_19E64:
    /* 00019e64   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019e64u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19E66:
    /* 00019e66   4  lea (2710,A4),A0 */
    c->pc = RC_ADDR(0x00019e66u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2710u);

L_19E6A:
    /* 00019e6a   6  cmpi.w #1c8,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00019e6au);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x000001c8u);

L_19E70:
    /* 00019e70   2  bgt 00019e9c */
    c->pc = RC_ADDR(0x00019e70u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_19E9C;

L_19E72:
    /* 00019e72   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00019e72u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19E76:
    /* 00019e76   2  ext.l D0 */
    c->pc = RC_ADDR(0x00019e76u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_19E78:
    /* 00019e78   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019e78u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19E7A:
    /* 00019e7a   4  lea (2728,A4),A0 */
    c->pc = RC_ADDR(0x00019e7au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2728u);

L_19E7E:
    /* 00019e7e   6  cmpi.w #c8,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00019e7eu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x000000c8u);

L_19E84:
    /* 00019e84   2  blt 00019e9c */
    c->pc = RC_ADDR(0x00019e84u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_19E9C;

L_19E86:
    /* 00019e86   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00019e86u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19E8A:
    /* 00019e8a   2  ext.l D0 */
    c->pc = RC_ADDR(0x00019e8au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_19E8C:
    /* 00019e8c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019e8cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19E8E:
    /* 00019e8e   4  lea (2728,A4),A0 */
    c->pc = RC_ADDR(0x00019e8eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2728u);

L_19E92:
    /* 00019e92   6  cmpi.w #140,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00019e92u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x00000140u);

L_19E98:
    /* 00019e98   4  blt 0001a05c */
    c->pc = RC_ADDR(0x00019e98u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1A05C;

L_19E9C:
    /* 00019e9c   4  move.w (2968,A4),D0 */
    c->pc = RC_ADDR(0x00019e9cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2968u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19EA0:
    /* 00019ea0   2  ext.l D0 */
    c->pc = RC_ADDR(0x00019ea0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_19EA2:
    /* 00019ea2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019ea2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19EA4:
    /* 00019ea4   4  lea (ffffcdca,A4),A0 */
    c->pc = RC_ADDR(0x00019ea4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x3236u);

L_19EA8:
    /* 00019ea8   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00019ea8u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_19EAC:
    /* 00019eac   4  jsr (ffff81a6,A4) */
    c->pc = RC_ADDR(0x00019eacu);
    rc_step(c, m, 18);
    /* vector 70 */
    rc_push32(c, m, RC_ADDR(0x00019eb0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c9cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000187eeu);
    return;

L_19EB0:
    /* 00019eb0   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00019eb0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_19EB2:
    /* 00019eb2   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x00019eb2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19EB6:
    /* 00019eb6   2  ext.l D1 */
    c->pc = RC_ADDR(0x00019eb6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_19EB8:
    /* 00019eb8   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00019eb8u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_19EBA:
    /* 00019eba   4  lea (2920,A4),A0 */
    c->pc = RC_ADDR(0x00019ebau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2920u);

L_19EBE:
    /* 00019ebe   4  move.w D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x00019ebeu);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 0, RC_W);
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19EC2:
    /* 00019ec2   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00019ec2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19EC6:
    /* 00019ec6   2  ext.l D0 */
    c->pc = RC_ADDR(0x00019ec6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_19EC8:
    /* 00019ec8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019ec8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19ECA:
    /* 00019eca   4  lea (2950,A4),A0 */
    c->pc = RC_ADDR(0x00019ecau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2950u);

L_19ECE:
    /* 00019ece   6  move.w #ffff,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00019eceu);
    rc_step(c, m, 18);
    t0 = 0x0000ffffu;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19ED4:
    /* 00019ed4   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00019ed4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19ED8:
    /* 00019ed8   2  ext.l D0 */
    c->pc = RC_ADDR(0x00019ed8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_19EDA:
    /* 00019eda   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019edau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19EDC:
    /* 00019edc   4  lea (2920,A4),A0 */
    c->pc = RC_ADDR(0x00019edcu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2920u);

L_19EE0:
    /* 00019ee0   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x00019ee0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19EE4:
    /* 00019ee4   2  ext.l D1 */
    c->pc = RC_ADDR(0x00019ee4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_19EE6:
    /* 00019ee6   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00019ee6u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_19EE8:
    /* 00019ee8   4  lea (2938,A4),A1 */
    c->pc = RC_ADDR(0x00019ee8u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x2938u);

L_19EEC:
    /* 00019eec   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x00019eecu);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19EF2:
    /* 00019ef2   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00019ef2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19EF6:
    /* 00019ef6   2  ext.l D0 */
    c->pc = RC_ADDR(0x00019ef6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_19EF8:
    /* 00019ef8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019ef8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19EFA:
    /* 00019efa   4  lea (27a0,A4),A0 */
    c->pc = RC_ADDR(0x00019efau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x27a0u);

L_19EFE:
    /* 00019efe   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x00019efeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19F02:
    /* 00019f02   2  ext.l D1 */
    c->pc = RC_ADDR(0x00019f02u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_19F04:
    /* 00019f04   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00019f04u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_19F06:
    /* 00019f06   4  lea (2920,A4),A1 */
    c->pc = RC_ADDR(0x00019f06u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x2920u);

L_19F0A:
    /* 00019f0a   4  move.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x00019f0au);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19F0E:
    /* 00019f0e   2  ext.l D2 */
    c->pc = RC_ADDR(0x00019f0eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 2);

L_19F10:
    /* 00019f10   2  asl.l #1,D2 */
    c->pc = RC_ADDR(0x00019f10u);
    rc_step(c, m, 8);
    rc_d_set(c, 2, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_L), RC_L));

L_19F12:
    /* 00019f12   4  lea (1dca,A4),A1 */
    c->pc = RC_ADDR(0x00019f12u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1dcau);

L_19F16:
    /* 00019f16   4  move.w (0,A1,D2.w),D1 */
    c->pc = RC_ADDR(0x00019f16u);
    rc_step(c, m, 14);
    t4 = c->d[2];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19F1A:
    /* 00019f1a   4  muls.w #30,D1 */
    c->pc = RC_ADDR(0x00019f1au);
    rc_step(c, m, 42);
    t0 = 0x00000030u;
    rc_muls(c, 1, t0);

L_19F1E:
    /* 00019f1e   4  add.w #10,D1 */
    c->pc = RC_ADDR(0x00019f1eu);
    rc_step(c, m, 10);
    t0 = 0x00000010u;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_19F22:
    /* 00019f22   4  move.w D1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00019f22u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 1, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19F26:
    /* 00019f26   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00019f26u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19F2A:
    /* 00019f2a   2  ext.l D0 */
    c->pc = RC_ADDR(0x00019f2au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_19F2C:
    /* 00019f2c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019f2cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19F2E:
    /* 00019f2e   4  lea (2710,A4),A0 */
    c->pc = RC_ADDR(0x00019f2eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2710u);

L_19F32:
    /* 00019f32   4  move.w D1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00019f32u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 1, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19F36:
    /* 00019f36   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00019f36u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19F3A:
    /* 00019f3a   2  ext.l D0 */
    c->pc = RC_ADDR(0x00019f3au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_19F3C:
    /* 00019f3c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019f3cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19F3E:
    /* 00019f3e   4  lea (27b8,A4),A0 */
    c->pc = RC_ADDR(0x00019f3eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x27b8u);

L_19F42:
    /* 00019f42   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x00019f42u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19F46:
    /* 00019f46   2  ext.l D1 */
    c->pc = RC_ADDR(0x00019f46u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_19F48:
    /* 00019f48   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00019f48u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_19F4A:
    /* 00019f4a   4  lea (2920,A4),A1 */
    c->pc = RC_ADDR(0x00019f4au);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x2920u);

L_19F4E:
    /* 00019f4e   4  move.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x00019f4eu);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19F52:
    /* 00019f52   2  ext.l D2 */
    c->pc = RC_ADDR(0x00019f52u);
    rc_step(c, m, 4);
    rc_ext_l(c, 2);

L_19F54:
    /* 00019f54   2  asl.l #1,D2 */
    c->pc = RC_ADDR(0x00019f54u);
    rc_step(c, m, 8);
    rc_d_set(c, 2, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_L), RC_L));

L_19F56:
    /* 00019f56   4  lea (1dea,A4),A1 */
    c->pc = RC_ADDR(0x00019f56u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1deau);

L_19F5A:
    /* 00019f5a   4  move.w (0,A1,D2.w),D1 */
    c->pc = RC_ADDR(0x00019f5au);
    rc_step(c, m, 14);
    t4 = c->d[2];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19F5E:
    /* 00019f5e   4  muls.w #28,D1 */
    c->pc = RC_ADDR(0x00019f5eu);
    rc_step(c, m, 42);
    t0 = 0x00000028u;
    rc_muls(c, 1, t0);

L_19F62:
    /* 00019f62   4  add.w #f,D1 */
    c->pc = RC_ADDR(0x00019f62u);
    rc_step(c, m, 10);
    t0 = 0x0000000fu;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_19F66:
    /* 00019f66   4  move.w D1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00019f66u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 1, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19F6A:
    /* 00019f6a   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00019f6au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19F6E:
    /* 00019f6e   2  ext.l D0 */
    c->pc = RC_ADDR(0x00019f6eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_19F70:
    /* 00019f70   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019f70u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19F72:
    /* 00019f72   4  lea (2728,A4),A0 */
    c->pc = RC_ADDR(0x00019f72u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2728u);

L_19F76:
    /* 00019f76   4  move.w D1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00019f76u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 1, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19F7A:
    /* 00019f7a   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00019f7au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19F7E:
    /* 00019f7e   2  ext.l D0 */
    c->pc = RC_ADDR(0x00019f7eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_19F80:
    /* 00019f80   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019f80u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19F82:
    /* 00019f82   4  lea (2770,A4),A0 */
    c->pc = RC_ADDR(0x00019f82u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2770u);

L_19F86:
    /* 00019f86   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00019f86u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_19F8A:
    /* 00019f8a   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00019f8au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19F8E:
    /* 00019f8e   2  ext.l D0 */
    c->pc = RC_ADDR(0x00019f8eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_19F90:
    /* 00019f90   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019f90u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19F92:
    /* 00019f92   4  lea (2788,A4),A0 */
    c->pc = RC_ADDR(0x00019f92u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2788u);

L_19F96:
    /* 00019f96   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00019f96u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_19F9A:
    /* 00019f9a   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00019f9au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19F9E:
    /* 00019f9e   2  ext.l D0 */
    c->pc = RC_ADDR(0x00019f9eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_19FA0:
    /* 00019fa0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019fa0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19FA2:
    /* 00019fa2   4  lea (27d0,A4),A0 */
    c->pc = RC_ADDR(0x00019fa2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x27d0u);

L_19FA6:
    /* 00019fa6   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00019fa6u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_19FAA:
    /* 00019faa   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00019faau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19FAE:
    /* 00019fae   2  ext.l D0 */
    c->pc = RC_ADDR(0x00019faeu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_19FB0:
    /* 00019fb0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019fb0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19FB2:
    /* 00019fb2   4  lea (2818,A4),A0 */
    c->pc = RC_ADDR(0x00019fb2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2818u);

L_19FB6:
    /* 00019fb6   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00019fb6u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_19FBA:
    /* 00019fba   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00019fbau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19FBE:
    /* 00019fbe   2  ext.l D0 */
    c->pc = RC_ADDR(0x00019fbeu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_19FC0:
    /* 00019fc0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019fc0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19FC2:
    /* 00019fc2   4  lea (2740,A4),A0 */
    c->pc = RC_ADDR(0x00019fc2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2740u);

L_19FC6:
    /* 00019fc6   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00019fc6u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_19FCA:
    /* 00019fca   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00019fcau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19FCE:
    /* 00019fce   2  ext.l D0 */
    c->pc = RC_ADDR(0x00019fceu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_19FD0:
    /* 00019fd0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019fd0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19FD2:
    /* 00019fd2   4  lea (2758,A4),A0 */
    c->pc = RC_ADDR(0x00019fd2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2758u);

L_19FD6:
    /* 00019fd6   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00019fd6u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_19FDA:
    /* 00019fda   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00019fdau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19FDE:
    /* 00019fde   2  ext.l D0 */
    c->pc = RC_ADDR(0x00019fdeu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_19FE0:
    /* 00019fe0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019fe0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19FE2:
    /* 00019fe2   4  lea (2890,A4),A0 */
    c->pc = RC_ADDR(0x00019fe2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2890u);

L_19FE6:
    /* 00019fe6   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00019fe6u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_19FEA:
    /* 00019fea   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00019feau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19FEE:
    /* 00019fee   2  ext.l D0 */
    c->pc = RC_ADDR(0x00019feeu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_19FF0:
    /* 00019ff0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019ff0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19FF2:
    /* 00019ff2   4  lea (28a8,A4),A0 */
    c->pc = RC_ADDR(0x00019ff2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x28a8u);

L_19FF6:
    /* 00019ff6   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00019ff6u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_19FFA:
    /* 00019ffa   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00019ffau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19FFE:
    /* 00019ffe   2  ext.l D0 */
    c->pc = RC_ADDR(0x00019ffeu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1A000:
    /* 0001a000   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a000u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A002:
    /* 0001a002   4  lea (28c0,A4),A0 */
    c->pc = RC_ADDR(0x0001a002u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x28c0u);

L_1A006:
    /* 0001a006   6  move.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001a006u);
    rc_step(c, m, 18);
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A00C:
    /* 0001a00c   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001a00cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A010:
    /* 0001a010   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001a010u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1A012:
    /* 0001a012   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a012u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A014:
    /* 0001a014   4  lea (28d8,A4),A0 */
    c->pc = RC_ADDR(0x0001a014u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x28d8u);

L_1A018:
    /* 0001a018   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001a018u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1A01C:
    /* 0001a01c   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001a01cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A020:
    /* 0001a020   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001a020u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1A022:
    /* 0001a022   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a022u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A024:
    /* 0001a024   4  lea (28f0,A4),A0 */
    c->pc = RC_ADDR(0x0001a024u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x28f0u);

L_1A028:
    /* 0001a028   6  move.w #63,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001a028u);
    rc_step(c, m, 18);
    t0 = 0x00000063u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A02E:
    /* 0001a02e   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001a02eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A032:
    /* 0001a032   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001a032u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1A034:
    /* 0001a034   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a034u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A036:
    /* 0001a036   4  lea (2908,A4),A0 */
    c->pc = RC_ADDR(0x0001a036u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2908u);

L_1A03A:
    /* 0001a03a   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001a03au);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1A03E:
    /* 0001a03e   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001a03eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A042:
    /* 0001a042   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001a042u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1A044:
    /* 0001a044   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a044u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A046:
    /* 0001a046   4  lea (ffffce0e,A4),A0 */
    c->pc = RC_ADDR(0x0001a046u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x31f2u);

L_1A04A:
    /* 0001a04a   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x0001a04au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A04E:
    /* 0001a04e   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001a04eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1A050:
    /* 0001a050   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001a050u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1A052:
    /* 0001a052   4  lea (26f8,A4),A1 */
    c->pc = RC_ADDR(0x0001a052u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x26f8u);

L_1A056:
    /* 0001a056   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001a056u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A05C:
    /* 0001a05c   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001a05cu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1A060:
    /* 0001a060   6  cmpi.w #c,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001a060u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x0000000cu);

L_1A066:
    /* 0001a066   4  blt 00019e4a */
    c->pc = RC_ADDR(0x0001a066u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_19E4A; }

L_1A06A:
    /* 0001a06a   6  cmpi.w #1,(2968,A4) */
    c->pc = RC_ADDR(0x0001a06au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2968u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_1A070:
    /* 0001a070   2  bne 0001a0c0 */
    c->pc = RC_ADDR(0x0001a070u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1A0C0;

L_1A072:
    /* 0001a072   4  tst.w (2974,A4) */
    c->pc = RC_ADDR(0x0001a072u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2974u));
    rc_set_nzvc(c, t0, RC_W);

L_1A076:
    /* 0001a076   2  beq 0001a0c0 */
    c->pc = RC_ADDR(0x0001a076u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1A0C0;

L_1A078:
    /* 0001a078   6  move.w #148,(27a0,A4) */
    c->pc = RC_ADDR(0x0001a078u);
    rc_step(c, m, 16);
    t0 = 0x00000148u;
    rc_wr16(c, m, (c->a[4] + 0x27a0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A07E:
    /* 0001a07e   6  move.w #148,(2710,A4) */
    c->pc = RC_ADDR(0x0001a07eu);
    rc_step(c, m, 16);
    t0 = 0x00000148u;
    rc_wr16(c, m, (c->a[4] + 0x2710u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A084:
    /* 0001a084   6  move.w #1ae,(27b8,A4) */
    c->pc = RC_ADDR(0x0001a084u);
    rc_step(c, m, 16);
    t0 = 0x000001aeu;
    rc_wr16(c, m, (c->a[4] + 0x27b8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A08A:
    /* 0001a08a   6  move.w #1ae,(2728,A4) */
    c->pc = RC_ADDR(0x0001a08au);
    rc_step(c, m, 16);
    t0 = 0x000001aeu;
    rc_wr16(c, m, (c->a[4] + 0x2728u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A090:
    /* 0001a090   6  move.w #180,(27a2,A4) */
    c->pc = RC_ADDR(0x0001a090u);
    rc_step(c, m, 16);
    t0 = 0x00000180u;
    rc_wr16(c, m, (c->a[4] + 0x27a2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A096:
    /* 0001a096   6  move.w #180,(2712,A4) */
    c->pc = RC_ADDR(0x0001a096u);
    rc_step(c, m, 16);
    t0 = 0x00000180u;
    rc_wr16(c, m, (c->a[4] + 0x2712u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A09C:
    /* 0001a09c   6  move.w #1ae,(27ba,A4) */
    c->pc = RC_ADDR(0x0001a09cu);
    rc_step(c, m, 16);
    t0 = 0x000001aeu;
    rc_wr16(c, m, (c->a[4] + 0x27bau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A0A2:
    /* 0001a0a2   6  move.w #1ae,(272a,A4) */
    c->pc = RC_ADDR(0x0001a0a2u);
    rc_step(c, m, 16);
    t0 = 0x000001aeu;
    rc_wr16(c, m, (c->a[4] + 0x272au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A0A8:
    /* 0001a0a8   6  move.w #2,(26fa,A4) */
    c->pc = RC_ADDR(0x0001a0a8u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x26fau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A0AE:
    /* 0001a0ae   6  move.w #2,(26f8,A4) */
    c->pc = RC_ADDR(0x0001a0aeu);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x26f8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A0B4:
    /* 0001a0b4   6  move.w #5,(290a,A4) */
    c->pc = RC_ADDR(0x0001a0b4u);
    rc_step(c, m, 16);
    t0 = 0x00000005u;
    rc_wr16(c, m, (c->a[4] + 0x290au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A0BA:
    /* 0001a0ba   6  move.w #5,(2908,A4) */
    c->pc = RC_ADDR(0x0001a0bau);
    rc_step(c, m, 16);
    t0 = 0x00000005u;
    rc_wr16(c, m, (c->a[4] + 0x2908u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A0C0:
    /* 0001a0c0   6  move.w #1,(2974,A4) */
    c->pc = RC_ADDR(0x0001a0c0u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x2974u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A0C6:
    /* 0001a0c6   6  cmpi.w #1,(e74,A4) */
    c->pc = RC_ADDR(0x0001a0c6u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe74u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_1A0CC:
    /* 0001a0cc   2  beq 0001a0d8 */
    c->pc = RC_ADDR(0x0001a0ccu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1A0D8;

L_1A0CE:
    /* 0001a0ce   4  tst.w (2968,A4) */
    c->pc = RC_ADDR(0x0001a0ceu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2968u));
    rc_set_nzvc(c, t0, RC_W);

L_1A0D2:
    /* 0001a0d2   2  beq 0001a0d8 */
    c->pc = RC_ADDR(0x0001a0d2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1A0D8;

L_1A0D4:
    /* 0001a0d4   4  jsr (0001bd86) */
    c->pc = RC_ADDR(0x0001a0d4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001a0d8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001bd86u);
    return;

L_1A0D8:
    /* 0001a0d8   4  clr.w (26e2,A4) */
    c->pc = RC_ADDR(0x0001a0d8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x26e2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1A0DC:
    /* 0001a0dc   4  clr.w (26e4,A4) */
    c->pc = RC_ADDR(0x0001a0dcu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x26e4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1A0E0:
    /* 0001a0e0   4  clr.w (26e6,A4) */
    c->pc = RC_ADDR(0x0001a0e0u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x26e6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1A0E4:
    /* 0001a0e4   4  clr.w (26e8,A4) */
    c->pc = RC_ADDR(0x0001a0e4u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x26e8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1A0E8:
    /* 0001a0e8   4  clr.w (1116,A4) */
    c->pc = RC_ADDR(0x0001a0e8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1116u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1A0EC:
    /* 0001a0ec   4  clr.w (26f4,A4) */
    c->pc = RC_ADDR(0x0001a0ecu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x26f4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1A0F0:
    /* 0001a0f0   4  clr.l (296c,A4) */
    c->pc = RC_ADDR(0x0001a0f0u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] + 0x296cu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1A0F4:
    /* 0001a0f4   2  unlk A5 */
    c->pc = RC_ADDR(0x0001a0f4u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1A0F6:
    /* 0001a0f6   2  rts */
    c->pc = RC_ADDR(0x0001a0f6u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
