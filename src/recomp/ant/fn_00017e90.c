/* fn_00017e90 - 594 byte(s), 170 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00017e90(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00017e90u): goto L_17E90;
    case RC_ADDR(0x00017e94u): goto L_17E94;
    case RC_ADDR(0x00017e98u): goto L_17E98;
    case RC_ADDR(0x00017e9au): goto L_17E9A;
    case RC_ADDR(0x00017e9eu): goto L_17E9E;
    case RC_ADDR(0x00017ea0u): goto L_17EA0;
    case RC_ADDR(0x00017ea2u): goto L_17EA2;
    case RC_ADDR(0x00017ea4u): goto L_17EA4;
    case RC_ADDR(0x00017ea8u): goto L_17EA8;
    case RC_ADDR(0x00017eacu): goto L_17EAC;
    case RC_ADDR(0x00017eb0u): goto L_17EB0;
    case RC_ADDR(0x00017eb4u): goto L_17EB4;
    case RC_ADDR(0x00017eb8u): goto L_17EB8;
    case RC_ADDR(0x00017ebau): goto L_17EBA;
    case RC_ADDR(0x00017ebeu): goto L_17EBE;
    case RC_ADDR(0x00017ec2u): goto L_17EC2;
    case RC_ADDR(0x00017ec6u): goto L_17EC6;
    case RC_ADDR(0x00017ecau): goto L_17ECA;
    case RC_ADDR(0x00017eceu): goto L_17ECE;
    case RC_ADDR(0x00017ed0u): goto L_17ED0;
    case RC_ADDR(0x00017ed4u): goto L_17ED4;
    case RC_ADDR(0x00017ed6u): goto L_17ED6;
    case RC_ADDR(0x00017edau): goto L_17EDA;
    case RC_ADDR(0x00017edeu): goto L_17EDE;
    case RC_ADDR(0x00017ee2u): goto L_17EE2;
    case RC_ADDR(0x00017ee4u): goto L_17EE4;
    case RC_ADDR(0x00017ee8u): goto L_17EE8;
    case RC_ADDR(0x00017eecu): goto L_17EEC;
    case RC_ADDR(0x00017ef0u): goto L_17EF0;
    case RC_ADDR(0x00017ef2u): goto L_17EF2;
    case RC_ADDR(0x00017ef6u): goto L_17EF6;
    case RC_ADDR(0x00017efau): goto L_17EFA;
    case RC_ADDR(0x00017efcu): goto L_17EFC;
    case RC_ADDR(0x00017efeu): goto L_17EFE;
    case RC_ADDR(0x00017f02u): goto L_17F02;
    case RC_ADDR(0x00017f06u): goto L_17F06;
    case RC_ADDR(0x00017f0au): goto L_17F0A;
    case RC_ADDR(0x00017f0eu): goto L_17F0E;
    case RC_ADDR(0x00017f12u): goto L_17F12;
    case RC_ADDR(0x00017f14u): goto L_17F14;
    case RC_ADDR(0x00017f18u): goto L_17F18;
    case RC_ADDR(0x00017f1au): goto L_17F1A;
    case RC_ADDR(0x00017f1cu): goto L_17F1C;
    case RC_ADDR(0x00017f20u): goto L_17F20;
    case RC_ADDR(0x00017f24u): goto L_17F24;
    case RC_ADDR(0x00017f26u): goto L_17F26;
    case RC_ADDR(0x00017f28u): goto L_17F28;
    case RC_ADDR(0x00017f2cu): goto L_17F2C;
    case RC_ADDR(0x00017f30u): goto L_17F30;
    case RC_ADDR(0x00017f34u): goto L_17F34;
    case RC_ADDR(0x00017f3au): goto L_17F3A;
    case RC_ADDR(0x00017f3cu): goto L_17F3C;
    case RC_ADDR(0x00017f40u): goto L_17F40;
    case RC_ADDR(0x00017f44u): goto L_17F44;
    case RC_ADDR(0x00017f48u): goto L_17F48;
    case RC_ADDR(0x00017f4au): goto L_17F4A;
    case RC_ADDR(0x00017f4cu): goto L_17F4C;
    case RC_ADDR(0x00017f50u): goto L_17F50;
    case RC_ADDR(0x00017f54u): goto L_17F54;
    case RC_ADDR(0x00017f56u): goto L_17F56;
    case RC_ADDR(0x00017f58u): goto L_17F58;
    case RC_ADDR(0x00017f5cu): goto L_17F5C;
    case RC_ADDR(0x00017f60u): goto L_17F60;
    case RC_ADDR(0x00017f64u): goto L_17F64;
    case RC_ADDR(0x00017f68u): goto L_17F68;
    case RC_ADDR(0x00017f6cu): goto L_17F6C;
    case RC_ADDR(0x00017f70u): goto L_17F70;
    case RC_ADDR(0x00017f74u): goto L_17F74;
    case RC_ADDR(0x00017f78u): goto L_17F78;
    case RC_ADDR(0x00017f7cu): goto L_17F7C;
    case RC_ADDR(0x00017f80u): goto L_17F80;
    case RC_ADDR(0x00017f82u): goto L_17F82;
    case RC_ADDR(0x00017f84u): goto L_17F84;
    case RC_ADDR(0x00017f88u): goto L_17F88;
    case RC_ADDR(0x00017f8cu): goto L_17F8C;
    case RC_ADDR(0x00017f90u): goto L_17F90;
    case RC_ADDR(0x00017f94u): goto L_17F94;
    case RC_ADDR(0x00017f98u): goto L_17F98;
    case RC_ADDR(0x00017f9cu): goto L_17F9C;
    case RC_ADDR(0x00017fa0u): goto L_17FA0;
    case RC_ADDR(0x00017fa4u): goto L_17FA4;
    case RC_ADDR(0x00017fa8u): goto L_17FA8;
    case RC_ADDR(0x00017facu): goto L_17FAC;
    case RC_ADDR(0x00017fb0u): goto L_17FB0;
    case RC_ADDR(0x00017fb2u): goto L_17FB2;
    case RC_ADDR(0x00017fb4u): goto L_17FB4;
    case RC_ADDR(0x00017fb8u): goto L_17FB8;
    case RC_ADDR(0x00017fbcu): goto L_17FBC;
    case RC_ADDR(0x00017fc0u): goto L_17FC0;
    case RC_ADDR(0x00017fc6u): goto L_17FC6;
    case RC_ADDR(0x00017fc8u): goto L_17FC8;
    case RC_ADDR(0x00017fccu): goto L_17FCC;
    case RC_ADDR(0x00017fd0u): goto L_17FD0;
    case RC_ADDR(0x00017fd4u): goto L_17FD4;
    case RC_ADDR(0x00017fd8u): goto L_17FD8;
    case RC_ADDR(0x00017fdcu): goto L_17FDC;
    case RC_ADDR(0x00017fe0u): goto L_17FE0;
    case RC_ADDR(0x00017fe4u): goto L_17FE4;
    case RC_ADDR(0x00017fe8u): goto L_17FE8;
    case RC_ADDR(0x00017feau): goto L_17FEA;
    case RC_ADDR(0x00017fecu): goto L_17FEC;
    case RC_ADDR(0x00017ff0u): goto L_17FF0;
    case RC_ADDR(0x00017ff4u): goto L_17FF4;
    case RC_ADDR(0x00017ff8u): goto L_17FF8;
    case RC_ADDR(0x00017ffeu): goto L_17FFE;
    case RC_ADDR(0x00018000u): goto L_18000;
    case RC_ADDR(0x00018004u): goto L_18004;
    case RC_ADDR(0x00018008u): goto L_18008;
    case RC_ADDR(0x0001800cu): goto L_1800C;
    case RC_ADDR(0x00018010u): goto L_18010;
    case RC_ADDR(0x00018014u): goto L_18014;
    case RC_ADDR(0x00018018u): goto L_18018;
    case RC_ADDR(0x0001801cu): goto L_1801C;
    case RC_ADDR(0x00018020u): goto L_18020;
    case RC_ADDR(0x00018022u): goto L_18022;
    case RC_ADDR(0x00018024u): goto L_18024;
    case RC_ADDR(0x00018028u): goto L_18028;
    case RC_ADDR(0x0001802cu): goto L_1802C;
    case RC_ADDR(0x00018030u): goto L_18030;
    case RC_ADDR(0x00018036u): goto L_18036;
    case RC_ADDR(0x00018038u): goto L_18038;
    case RC_ADDR(0x0001803cu): goto L_1803C;
    case RC_ADDR(0x00018040u): goto L_18040;
    case RC_ADDR(0x00018042u): goto L_18042;
    case RC_ADDR(0x00018046u): goto L_18046;
    case RC_ADDR(0x0001804au): goto L_1804A;
    case RC_ADDR(0x0001804eu): goto L_1804E;
    case RC_ADDR(0x00018050u): goto L_18050;
    case RC_ADDR(0x00018052u): goto L_18052;
    case RC_ADDR(0x00018058u): goto L_18058;
    case RC_ADDR(0x0001805cu): goto L_1805C;
    case RC_ADDR(0x0001805eu): goto L_1805E;
    case RC_ADDR(0x00018064u): goto L_18064;
    case RC_ADDR(0x00018068u): goto L_18068;
    case RC_ADDR(0x0001806au): goto L_1806A;
    case RC_ADDR(0x0001806eu): goto L_1806E;
    case RC_ADDR(0x00018070u): goto L_18070;
    case RC_ADDR(0x00018074u): goto L_18074;
    case RC_ADDR(0x00018076u): goto L_18076;
    case RC_ADDR(0x0001807au): goto L_1807A;
    case RC_ADDR(0x0001807cu): goto L_1807C;
    case RC_ADDR(0x00018080u): goto L_18080;
    case RC_ADDR(0x00018082u): goto L_18082;
    case RC_ADDR(0x00018086u): goto L_18086;
    case RC_ADDR(0x00018088u): goto L_18088;
    case RC_ADDR(0x0001808au): goto L_1808A;
    case RC_ADDR(0x0001808cu): goto L_1808C;
    case RC_ADDR(0x0001808eu): goto L_1808E;
    case RC_ADDR(0x00018090u): goto L_18090;
    case RC_ADDR(0x00018092u): goto L_18092;
    case RC_ADDR(0x00018094u): goto L_18094;
    case RC_ADDR(0x00018096u): goto L_18096;
    case RC_ADDR(0x0001809au): goto L_1809A;
    case RC_ADDR(0x0001809eu): goto L_1809E;
    case RC_ADDR(0x000180a0u): goto L_180A0;
    case RC_ADDR(0x000180a2u): goto L_180A2;
    case RC_ADDR(0x000180a6u): goto L_180A6;
    case RC_ADDR(0x000180aau): goto L_180AA;
    case RC_ADDR(0x000180acu): goto L_180AC;
    case RC_ADDR(0x000180b2u): goto L_180B2;
    case RC_ADDR(0x000180b4u): goto L_180B4;
    case RC_ADDR(0x000180bau): goto L_180BA;
    case RC_ADDR(0x000180c0u): goto L_180C0;
    case RC_ADDR(0x000180c6u): goto L_180C6;
    case RC_ADDR(0x000180cau): goto L_180CA;
    case RC_ADDR(0x000180ceu): goto L_180CE;
    case RC_ADDR(0x000180d2u): goto L_180D2;
    case RC_ADDR(0x000180d6u): goto L_180D6;
    case RC_ADDR(0x000180dau): goto L_180DA;
    case RC_ADDR(0x000180deu): goto L_180DE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_17E90:
    /* 00017e90   4  link.w A5,#ffffffea */
    c->pc = RC_ADDR(0x00017e90u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x16u;

L_17E94:
    /* 00017e94   4  tst.w (1ab2,A4) */
    c->pc = RC_ADDR(0x00017e94u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ab2u));
    rc_set_nzvc(c, t0, RC_W);

L_17E98:
    /* 00017e98   2  bne 00017ea0 */
    c->pc = RC_ADDR(0x00017e98u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_17EA0;

L_17E9A:
    /* 00017e9a   4  tst.w (14f4,A4) */
    c->pc = RC_ADDR(0x00017e9au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x14f4u));
    rc_set_nzvc(c, t0, RC_W);

L_17E9E:
    /* 00017e9e   2  beq 00017ea4 */
    c->pc = RC_ADDR(0x00017e9eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_17EA4;

L_17EA0:
    /* 00017ea0   2  unlk A5 */
    c->pc = RC_ADDR(0x00017ea0u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_17EA2:
    /* 00017ea2   2  rts */
    c->pc = RC_ADDR(0x00017ea2u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_17EA4:
    /* 00017ea4   4  tst.w (1cd4,A4) */
    c->pc = RC_ADDR(0x00017ea4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cd4u));
    rc_set_nzvc(c, t0, RC_W);

L_17EA8:
    /* 00017ea8   4  beq 000180ac */
    c->pc = RC_ADDR(0x00017ea8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_180AC;

L_17EAC:
    /* 00017eac   4  tst.w (1cce,A4) */
    c->pc = RC_ADDR(0x00017eacu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cceu));
    rc_set_nzvc(c, t0, RC_W);

L_17EB0:
    /* 00017eb0   4  bne 00018038 */
    c->pc = RC_ADDR(0x00017eb0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_18038;

L_17EB4:
    /* 00017eb4   4  tst.w (17ec,A4) */
    c->pc = RC_ADDR(0x00017eb4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17ecu));
    rc_set_nzvc(c, t0, RC_W);

L_17EB8:
    /* 00017eb8   2  bne 00017ec2 */
    c->pc = RC_ADDR(0x00017eb8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_17EC2;

L_17EBA:
    /* 00017eba   4  tst.w (1cd6,A4) */
    c->pc = RC_ADDR(0x00017ebau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cd6u));
    rc_set_nzvc(c, t0, RC_W);

L_17EBE:
    /* 00017ebe   4  beq 00018036 */
    c->pc = RC_ADDR(0x00017ebeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_18036;

L_17EC2:
    /* 00017ec2   4  move.w (17ec,A4),D0 */
    c->pc = RC_ADDR(0x00017ec2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17ecu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17EC6:
    /* 00017ec6   4  add.w D0,(1ccc,A4) */
    c->pc = RC_ADDR(0x00017ec6u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1cccu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_17ECA:
    /* 00017eca   4  tst.w (1ccc,A4) */
    c->pc = RC_ADDR(0x00017ecau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cccu));
    rc_set_nzvc(c, t0, RC_W);

L_17ECE:
    /* 00017ece   2  bge 00017eda */
    c->pc = RC_ADDR(0x00017eceu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_17EDA;

L_17ED0:
    /* 00017ed0   4  move.w (1cd2,A4),D0 */
    c->pc = RC_ADDR(0x00017ed0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cd2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17ED4:
    /* 00017ed4   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x00017ed4u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_17ED6:
    /* 00017ed6   4  move.w D0,(1ccc,A4) */
    c->pc = RC_ADDR(0x00017ed6u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1cccu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17EDA:
    /* 00017eda   4  move.w (1ccc,A4),D0 */
    c->pc = RC_ADDR(0x00017edau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cccu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17EDE:
    /* 00017ede   4  cmp.w (1cd2,A4),D0 */
    c->pc = RC_ADDR(0x00017edeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cd2u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_17EE2:
    /* 00017ee2   2  blt 00017ee8 */
    c->pc = RC_ADDR(0x00017ee2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_17EE8;

L_17EE4:
    /* 00017ee4   4  clr.w (1ccc,A4) */
    c->pc = RC_ADDR(0x00017ee4u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1cccu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17EE8:
    /* 00017ee8   4  clr.w (1cd6,A4) */
    c->pc = RC_ADDR(0x00017ee8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1cd6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17EEC:
    /* 00017eec   4  tst.w (1cd8,A4) */
    c->pc = RC_ADDR(0x00017eecu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cd8u));
    rc_set_nzvc(c, t0, RC_W);

L_17EF0:
    /* 00017ef0   2  beq 00017f0a */
    c->pc = RC_ADDR(0x00017ef0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_17F0A;

L_17EF2:
    /* 00017ef2   4  pea (1832,A4) */
    c->pc = RC_ADDR(0x00017ef2u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x1832u));

L_17EF6:
    /* 00017ef6   4  move.l (1cc0,A4),-(A7) */
    c->pc = RC_ADDR(0x00017ef6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1cc0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_17EFA:
    /* 00017efa   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00017efau);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17EFC:
    /* 00017efc   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00017efcu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17EFE:
    /* 00017efe   4  jsr (ffff8170,A4) */
    c->pc = RC_ADDR(0x00017efeu);
    rc_step(c, m, 18);
    /* vector 61 */
    rc_push32(c, m, RC_ADDR(0x00017f02u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c66u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00012986u);
    return;

L_17F02:
    /* 00017f02   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00017f02u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_17F06:
    /* 00017f06   4  clr.w (1cd8,A4) */
    c->pc = RC_ADDR(0x00017f06u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1cd8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17F0A:
    /* 00017f0a   4  clr.w (ffffffea,A5) */
    c->pc = RC_ADDR(0x00017f0au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x16u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17F0E:
    /* 00017f0e   4  pea (0000000e).l */
    c->pc = RC_ADDR(0x00017f0eu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000000eu);

L_17F12:
    /* 00017f12   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00017f12u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_17F14:
    /* 00017f14   4  move.w (ffffffea,A5),D0 */
    c->pc = RC_ADDR(0x00017f14u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x16u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17F18:
    /* 00017f18   2  ext.l D0 */
    c->pc = RC_ADDR(0x00017f18u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_17F1A:
    /* 00017f1a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00017f1au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_17F1C:
    /* 00017f1c   4  lea (ffffb5cc,A4),A0 */
    c->pc = RC_ADDR(0x00017f1cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4a34u);

L_17F20:
    /* 00017f20   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00017f20u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17F24:
    /* 00017f24   2  ext.l D1 */
    c->pc = RC_ADDR(0x00017f24u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_17F26:
    /* 00017f26   2  move.l D1,-(A7) */
    c->pc = RC_ADDR(0x00017f26u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_17F28:
    /* 00017f28   4  jsr (00017e58) */
    c->pc = RC_ADDR(0x00017f28u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00017f2cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00017e58u);
    return;

L_17F2C:
    /* 00017f2c   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00017f2cu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_17F30:
    /* 00017f30   4  addq.w #1,(ffffffea,A5) */
    c->pc = RC_ADDR(0x00017f30u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x16u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_17F34:
    /* 00017f34   6  cmpi.w #4,(ffffffea,A5) */
    c->pc = RC_ADDR(0x00017f34u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x16u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_17F3A:
    /* 00017f3a   2  blt 00017f0e */
    c->pc = RC_ADDR(0x00017f3au);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_17F0E; }

L_17F3C:
    /* 00017f3c   4  pea (0000000e).l */
    c->pc = RC_ADDR(0x00017f3cu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000000eu);

L_17F40:
    /* 00017f40   4  pea (00000015).l */
    c->pc = RC_ADDR(0x00017f40u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000015u);

L_17F44:
    /* 00017f44   4  move.w (1ccc,A4),D0 */
    c->pc = RC_ADDR(0x00017f44u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cccu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17F48:
    /* 00017f48   2  ext.l D0 */
    c->pc = RC_ADDR(0x00017f48u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_17F4A:
    /* 00017f4a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00017f4au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_17F4C:
    /* 00017f4c   4  lea (ffffb5cc,A4),A0 */
    c->pc = RC_ADDR(0x00017f4cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4a34u);

L_17F50:
    /* 00017f50   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00017f50u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17F54:
    /* 00017f54   2  ext.l D1 */
    c->pc = RC_ADDR(0x00017f54u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_17F56:
    /* 00017f56   2  move.l D1,-(A7) */
    c->pc = RC_ADDR(0x00017f56u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_17F58:
    /* 00017f58   4  jsr (00017e58) */
    c->pc = RC_ADDR(0x00017f58u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00017f5cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00017e58u);
    return;

L_17F5C:
    /* 00017f5c   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00017f5cu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_17F60:
    /* 00017f60   4  move.w (716,A4),-(A7) */
    c->pc = RC_ADDR(0x00017f60u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x716u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17F64:
    /* 00017f64   4  pea (000180e2) */
    c->pc = RC_ADDR(0x00017f64u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000180e2u));

L_17F68:
    /* 00017f68   4  pea (ffffffec,A5) */
    c->pc = RC_ADDR(0x00017f68u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x14u));

L_17F6C:
    /* 00017f6c   4  jsr (ffff82f6,A4) */
    c->pc = RC_ADDR(0x00017f6cu);
    rc_step(c, m, 18);
    /* vector 126 */
    rc_push32(c, m, RC_ADDR(0x00017f70u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023decu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022e58u);
    return;

L_17F70:
    /* 00017f70   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00017f70u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_17F74:
    /* 00017f74   4  move.w #e,-(A7) */
    c->pc = RC_ADDR(0x00017f74u);
    rc_step(c, m, 12);
    t0 = 0x0000000eu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17F78:
    /* 00017f78   4  move.w #f,-(A7) */
    c->pc = RC_ADDR(0x00017f78u);
    rc_step(c, m, 12);
    t0 = 0x0000000fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17F7C:
    /* 00017f7c   4  move.w (ffffb5cc,A4),D0 */
    c->pc = RC_ADDR(0x00017f7cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4a34u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17F80:
    /* 00017f80   2  addq.w #2,D0 */
    c->pc = RC_ADDR(0x00017f80u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_17F82:
    /* 00017f82   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00017f82u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17F84:
    /* 00017f84   4  pea (ffffffec,A5) */
    c->pc = RC_ADDR(0x00017f84u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x14u));

L_17F88:
    /* 00017f88   4  jsr (00018880) */
    c->pc = RC_ADDR(0x00017f88u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00017f8cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00018880u);
    return;

L_17F8C:
    /* 00017f8c   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00017f8cu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_17F90:
    /* 00017f90   4  move.w (718,A4),-(A7) */
    c->pc = RC_ADDR(0x00017f90u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x718u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17F94:
    /* 00017f94   4  pea (000180e5) */
    c->pc = RC_ADDR(0x00017f94u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000180e5u));

L_17F98:
    /* 00017f98   4  pea (ffffffec,A5) */
    c->pc = RC_ADDR(0x00017f98u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x14u));

L_17F9C:
    /* 00017f9c   4  jsr (ffff82f6,A4) */
    c->pc = RC_ADDR(0x00017f9cu);
    rc_step(c, m, 18);
    /* vector 126 */
    rc_push32(c, m, RC_ADDR(0x00017fa0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023decu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022e58u);
    return;

L_17FA0:
    /* 00017fa0   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00017fa0u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_17FA4:
    /* 00017fa4   4  move.w #e,-(A7) */
    c->pc = RC_ADDR(0x00017fa4u);
    rc_step(c, m, 12);
    t0 = 0x0000000eu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17FA8:
    /* 00017fa8   4  move.w #f,-(A7) */
    c->pc = RC_ADDR(0x00017fa8u);
    rc_step(c, m, 12);
    t0 = 0x0000000fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17FAC:
    /* 00017fac   4  move.w (ffffb5ce,A4),D0 */
    c->pc = RC_ADDR(0x00017facu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4a32u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17FB0:
    /* 00017fb0   2  addq.w #2,D0 */
    c->pc = RC_ADDR(0x00017fb0u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_17FB2:
    /* 00017fb2   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00017fb2u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17FB4:
    /* 00017fb4   4  pea (ffffffec,A5) */
    c->pc = RC_ADDR(0x00017fb4u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x14u));

L_17FB8:
    /* 00017fb8   4  jsr (00018880) */
    c->pc = RC_ADDR(0x00017fb8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00017fbcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00018880u);
    return;

L_17FBC:
    /* 00017fbc   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00017fbcu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_17FC0:
    /* 00017fc0   6  btst #0,(14e5,A4) */
    c->pc = RC_ADDR(0x00017fc0u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x14e5u);
    t4 = 0x00000000u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_17FC6:
    /* 00017fc6   2  beq 00017ff8 */
    c->pc = RC_ADDR(0x00017fc6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_17FF8;

L_17FC8:
    /* 00017fc8   4  move.w (1b60,A4),-(A7) */
    c->pc = RC_ADDR(0x00017fc8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b60u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17FCC:
    /* 00017fcc   4  pea (000180e8) */
    c->pc = RC_ADDR(0x00017fccu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000180e8u));

L_17FD0:
    /* 00017fd0   4  pea (ffffffec,A5) */
    c->pc = RC_ADDR(0x00017fd0u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x14u));

L_17FD4:
    /* 00017fd4   4  jsr (ffff82f6,A4) */
    c->pc = RC_ADDR(0x00017fd4u);
    rc_step(c, m, 18);
    /* vector 126 */
    rc_push32(c, m, RC_ADDR(0x00017fd8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023decu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022e58u);
    return;

L_17FD8:
    /* 00017fd8   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00017fd8u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_17FDC:
    /* 00017fdc   4  move.w #e,-(A7) */
    c->pc = RC_ADDR(0x00017fdcu);
    rc_step(c, m, 12);
    t0 = 0x0000000eu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17FE0:
    /* 00017fe0   4  move.w #f,-(A7) */
    c->pc = RC_ADDR(0x00017fe0u);
    rc_step(c, m, 12);
    t0 = 0x0000000fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17FE4:
    /* 00017fe4   4  move.w (ffffb5d0,A4),D0 */
    c->pc = RC_ADDR(0x00017fe4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4a30u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17FE8:
    /* 00017fe8   2  addq.w #2,D0 */
    c->pc = RC_ADDR(0x00017fe8u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_17FEA:
    /* 00017fea   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00017feau);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17FEC:
    /* 00017fec   4  pea (ffffffec,A5) */
    c->pc = RC_ADDR(0x00017fecu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x14u));

L_17FF0:
    /* 00017ff0   4  jsr (00018880) */
    c->pc = RC_ADDR(0x00017ff0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00017ff4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00018880u);
    return;

L_17FF4:
    /* 00017ff4   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00017ff4u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_17FF8:
    /* 00017ff8   6  btst #3,(14e5,A4) */
    c->pc = RC_ADDR(0x00017ff8u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x14e5u);
    t4 = 0x00000003u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_17FFE:
    /* 00017ffe   2  beq 00018030 */
    c->pc = RC_ADDR(0x00017ffeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_18030;

L_18000:
    /* 00018000   4  move.w (1ca2,A4),-(A7) */
    c->pc = RC_ADDR(0x00018000u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ca2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18004:
    /* 00018004   4  pea (000180eb) */
    c->pc = RC_ADDR(0x00018004u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000180ebu));

L_18008:
    /* 00018008   4  pea (ffffffec,A5) */
    c->pc = RC_ADDR(0x00018008u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x14u));

L_1800C:
    /* 0001800c   4  jsr (ffff82f6,A4) */
    c->pc = RC_ADDR(0x0001800cu);
    rc_step(c, m, 18);
    /* vector 126 */
    rc_push32(c, m, RC_ADDR(0x00018010u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023decu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022e58u);
    return;

L_18010:
    /* 00018010   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00018010u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_18014:
    /* 00018014   4  move.w #e,-(A7) */
    c->pc = RC_ADDR(0x00018014u);
    rc_step(c, m, 12);
    t0 = 0x0000000eu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18018:
    /* 00018018   4  move.w #f,-(A7) */
    c->pc = RC_ADDR(0x00018018u);
    rc_step(c, m, 12);
    t0 = 0x0000000fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1801C:
    /* 0001801c   4  move.w (ffffb5d2,A4),D0 */
    c->pc = RC_ADDR(0x0001801cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4a2eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18020:
    /* 00018020   2  addq.w #2,D0 */
    c->pc = RC_ADDR(0x00018020u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_18022:
    /* 00018022   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00018022u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18024:
    /* 00018024   4  pea (ffffffec,A5) */
    c->pc = RC_ADDR(0x00018024u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x14u));

L_18028:
    /* 00018028   4  jsr (00018880) */
    c->pc = RC_ADDR(0x00018028u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001802cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00018880u);
    return;

L_1802C:
    /* 0001802c   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001802cu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_18030:
    /* 00018030   6  move.w #2,(1cce,A4) */
    c->pc = RC_ADDR(0x00018030u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x1cceu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18036:
    /* 00018036   2  bra 0001803c */
    c->pc = RC_ADDR(0x00018036u);
    rc_step(c, m, 10);
    goto L_1803C;

L_18038:
    /* 00018038   4  subq.w #1,(1cce,A4) */
    c->pc = RC_ADDR(0x00018038u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1cceu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1803C:
    /* 0001803c   4  tst.w (17f2,A4) */
    c->pc = RC_ADDR(0x0001803cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17f2u));
    rc_set_nzvc(c, t0, RC_W);

L_18040:
    /* 00018040   2  bne 000180aa */
    c->pc = RC_ADDR(0x00018040u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_180AA;

L_18042:
    /* 00018042   4  jsr (00018254) */
    c->pc = RC_ADDR(0x00018042u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00018046u));
    rc_depth++;
    c->pc = RC_ADDR(0x00018254u);
    return;

L_18046:
    /* 00018046   4  clr.w (1cd4,A4) */
    c->pc = RC_ADDR(0x00018046u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1cd4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1804A:
    /* 0001804a   4  move.w (1ccc,A4),D0 */
    c->pc = RC_ADDR(0x0001804au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cccu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1804E:
    /* 0001804e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001804eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_18050:
    /* 00018050   2  bra 00018088 */
    c->pc = RC_ADDR(0x00018050u);
    rc_step(c, m, 10);
    goto L_18088;

L_18052:
    /* 00018052   6  move.w #1,(710,A4) */
    c->pc = RC_ADDR(0x00018052u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x710u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18058:
    /* 00018058   4  clr.w (ffffb254,A4) */
    c->pc = RC_ADDR(0x00018058u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x4dacu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1805C:
    /* 0001805c   2  bra 00018096 */
    c->pc = RC_ADDR(0x0001805cu);
    rc_step(c, m, 10);
    goto L_18096;

L_1805E:
    /* 0001805e   6  move.w #2,(710,A4) */
    c->pc = RC_ADDR(0x0001805eu);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x710u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18064:
    /* 00018064   4  clr.w (ffffb254,A4) */
    c->pc = RC_ADDR(0x00018064u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x4dacu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18068:
    /* 00018068   2  bra 00018096 */
    c->pc = RC_ADDR(0x00018068u);
    rc_step(c, m, 10);
    goto L_18096;

L_1806A:
    /* 0001806a   4  tst.w (14f4,A4) */
    c->pc = RC_ADDR(0x0001806au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x14f4u));
    rc_set_nzvc(c, t0, RC_W);

L_1806E:
    /* 0001806e   2  bne 0001807c */
    c->pc = RC_ADDR(0x0001806eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1807C;

L_18070:
    /* 00018070   4  tst.w (1b60,A4) */
    c->pc = RC_ADDR(0x00018070u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b60u));
    rc_set_nzvc(c, t0, RC_W);

L_18074:
    /* 00018074   2  beq 0001807c */
    c->pc = RC_ADDR(0x00018074u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1807C;

L_18076:
    /* 00018076   4  jsr (00016128) */
    c->pc = RC_ADDR(0x00018076u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001807au));
    rc_depth++;
    c->pc = RC_ADDR(0x00016128u);
    return;

L_1807A:
    /* 0001807a   2  bra 00018080 */
    c->pc = RC_ADDR(0x0001807au);
    rc_step(c, m, 10);
    goto L_18080;

L_1807C:
    /* 0001807c   4  clr.w (ffffb254,A4) */
    c->pc = RC_ADDR(0x0001807cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x4dacu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18080:
    /* 00018080   2  bra 00018096 */
    c->pc = RC_ADDR(0x00018080u);
    rc_step(c, m, 10);
    goto L_18096;

L_18082:
    /* 00018082   4  clr.w (ffffb254,A4) */
    c->pc = RC_ADDR(0x00018082u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x4dacu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18086:
    /* 00018086   2  bra 00018096 */
    c->pc = RC_ADDR(0x00018086u);
    rc_step(c, m, 10);
    goto L_18096;

L_18088:
    /* 00018088   2  tst.l D0 */
    c->pc = RC_ADDR(0x00018088u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_1808A:
    /* 0001808a   2  beq 00018052 */
    c->pc = RC_ADDR(0x0001808au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_18052; }

L_1808C:
    /* 0001808c   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x0001808cu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1808E:
    /* 0001808e   2  beq 0001805e */
    c->pc = RC_ADDR(0x0001808eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_1805E; }

L_18090:
    /* 00018090   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x00018090u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_18092:
    /* 00018092   2  beq 0001806a */
    c->pc = RC_ADDR(0x00018092u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_1806A; }

L_18094:
    /* 00018094   2  bra 00018082 */
    c->pc = RC_ADDR(0x00018094u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_18082;

L_18096:
    /* 00018096   4  pea (1832,A4) */
    c->pc = RC_ADDR(0x00018096u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x1832u));

L_1809A:
    /* 0001809a   4  move.l (1cc0,A4),-(A7) */
    c->pc = RC_ADDR(0x0001809au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1cc0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1809E:
    /* 0001809e   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0001809eu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_180A0:
    /* 000180a0   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x000180a0u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_180A2:
    /* 000180a2   4  jsr (ffff8170,A4) */
    c->pc = RC_ADDR(0x000180a2u);
    rc_step(c, m, 18);
    /* vector 61 */
    rc_push32(c, m, RC_ADDR(0x000180a6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c66u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00012986u);
    return;

L_180A6:
    /* 000180a6   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000180a6u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_180AA:
    /* 000180aa   2  bra 000180de */
    c->pc = RC_ADDR(0x000180aau);
    rc_step(c, m, 10);
    goto L_180DE;

L_180AC:
    /* 000180ac   6  cmpi.w #6,(ffffb256,A4) */
    c->pc = RC_ADDR(0x000180acu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4daau));
    rc_cmp(c, RC_W, t0, 0x00000006u);

L_180B2:
    /* 000180b2   2  ble 000180de */
    c->pc = RC_ADDR(0x000180b2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_180DE;

L_180B4:
    /* 000180b4   6  move.w #1,(1cd6,A4) */
    c->pc = RC_ADDR(0x000180b4u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1cd6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_180BA:
    /* 000180ba   6  move.w #1,(ffffb254,A4) */
    c->pc = RC_ADDR(0x000180bau);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x4dacu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_180C0:
    /* 000180c0   6  move.w #1,(1cd4,A4) */
    c->pc = RC_ADDR(0x000180c0u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1cd4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_180C6:
    /* 000180c6   4  clr.w (ffffb258,A4) */
    c->pc = RC_ADDR(0x000180c6u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x4da8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_180CA:
    /* 000180ca   4  clr.w (ffffb24e,A4) */
    c->pc = RC_ADDR(0x000180cau);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x4db2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_180CE:
    /* 000180ce   4  clr.w (ffffb250,A4) */
    c->pc = RC_ADDR(0x000180ceu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x4db0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_180D2:
    /* 000180d2   4  clr.w (ffffb24c,A4) */
    c->pc = RC_ADDR(0x000180d2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x4db4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_180D6:
    /* 000180d6   4  clr.w (ffffb24a,A4) */
    c->pc = RC_ADDR(0x000180d6u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x4db6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_180DA:
    /* 000180da   4  jsr (0001826a) */
    c->pc = RC_ADDR(0x000180dau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000180deu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001826au);
    return;

L_180DE:
    /* 000180de   4  bra 00017ea0 */
    c->pc = RC_ADDR(0x000180deu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_17EA0;

}
