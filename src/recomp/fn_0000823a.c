/* fn_0000823a - 516 byte(s), 156 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000823a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case 0x0000823au: goto L_823A;
    case 0x0000823eu: goto L_823E;
    case 0x00008242u: goto L_8242;
    case 0x00008246u: goto L_8246;
    case 0x00008248u: goto L_8248;
    case 0x0000824cu: goto L_824C;
    case 0x00008250u: goto L_8250;
    case 0x00008252u: goto L_8252;
    case 0x00008254u: goto L_8254;
    case 0x00008256u: goto L_8256;
    case 0x0000825au: goto L_825A;
    case 0x0000825eu: goto L_825E;
    case 0x00008260u: goto L_8260;
    case 0x00008262u: goto L_8262;
    case 0x00008268u: goto L_8268;
    case 0x0000826cu: goto L_826C;
    case 0x0000826eu: goto L_826E;
    case 0x00008270u: goto L_8270;
    case 0x00008272u: goto L_8272;
    case 0x00008276u: goto L_8276;
    case 0x0000827cu: goto L_827C;
    case 0x00008280u: goto L_8280;
    case 0x00008284u: goto L_8284;
    case 0x00008288u: goto L_8288;
    case 0x0000828cu: goto L_828C;
    case 0x00008290u: goto L_8290;
    case 0x00008292u: goto L_8292;
    case 0x00008296u: goto L_8296;
    case 0x0000829au: goto L_829A;
    case 0x000082a0u: goto L_82A0;
    case 0x000082a2u: goto L_82A2;
    case 0x000082a6u: goto L_82A6;
    case 0x000082aau: goto L_82AA;
    case 0x000082acu: goto L_82AC;
    case 0x000082b2u: goto L_82B2;
    case 0x000082b6u: goto L_82B6;
    case 0x000082bau: goto L_82BA;
    case 0x000082beu: goto L_82BE;
    case 0x000082c2u: goto L_82C2;
    case 0x000082c6u: goto L_82C6;
    case 0x000082cau: goto L_82CA;
    case 0x000082ccu: goto L_82CC;
    case 0x000082ceu: goto L_82CE;
    case 0x000082d2u: goto L_82D2;
    case 0x000082d6u: goto L_82D6;
    case 0x000082dau: goto L_82DA;
    case 0x000082dcu: goto L_82DC;
    case 0x000082deu: goto L_82DE;
    case 0x000082e2u: goto L_82E2;
    case 0x000082e8u: goto L_82E8;
    case 0x000082eau: goto L_82EA;
    case 0x000082ecu: goto L_82EC;
    case 0x000082f0u: goto L_82F0;
    case 0x000082f4u: goto L_82F4;
    case 0x000082f8u: goto L_82F8;
    case 0x000082fau: goto L_82FA;
    case 0x000082fcu: goto L_82FC;
    case 0x00008300u: goto L_8300;
    case 0x00008304u: goto L_8304;
    case 0x00008308u: goto L_8308;
    case 0x0000830cu: goto L_830C;
    case 0x00008310u: goto L_8310;
    case 0x00008314u: goto L_8314;
    case 0x00008318u: goto L_8318;
    case 0x0000831cu: goto L_831C;
    case 0x00008320u: goto L_8320;
    case 0x00008324u: goto L_8324;
    case 0x00008326u: goto L_8326;
    case 0x0000832au: goto L_832A;
    case 0x0000832eu: goto L_832E;
    case 0x00008332u: goto L_8332;
    case 0x00008338u: goto L_8338;
    case 0x0000833cu: goto L_833C;
    case 0x00008340u: goto L_8340;
    case 0x00008344u: goto L_8344;
    case 0x00008346u: goto L_8346;
    case 0x00008348u: goto L_8348;
    case 0x0000834au: goto L_834A;
    case 0x0000834cu: goto L_834C;
    case 0x0000834eu: goto L_834E;
    case 0x00008350u: goto L_8350;
    case 0x00008354u: goto L_8354;
    case 0x00008356u: goto L_8356;
    case 0x00008358u: goto L_8358;
    case 0x0000835cu: goto L_835C;
    case 0x00008360u: goto L_8360;
    case 0x00008364u: goto L_8364;
    case 0x00008368u: goto L_8368;
    case 0x0000836cu: goto L_836C;
    case 0x00008370u: goto L_8370;
    case 0x00008374u: goto L_8374;
    case 0x00008376u: goto L_8376;
    case 0x00008378u: goto L_8378;
    case 0x0000837au: goto L_837A;
    case 0x0000837eu: goto L_837E;
    case 0x00008382u: goto L_8382;
    case 0x00008386u: goto L_8386;
    case 0x00008388u: goto L_8388;
    case 0x0000838au: goto L_838A;
    case 0x0000838eu: goto L_838E;
    case 0x00008392u: goto L_8392;
    case 0x00008394u: goto L_8394;
    case 0x00008398u: goto L_8398;
    case 0x0000839au: goto L_839A;
    case 0x0000839cu: goto L_839C;
    case 0x000083a0u: goto L_83A0;
    case 0x000083a4u: goto L_83A4;
    case 0x000083a8u: goto L_83A8;
    case 0x000083acu: goto L_83AC;
    case 0x000083aeu: goto L_83AE;
    case 0x000083b0u: goto L_83B0;
    case 0x000083b4u: goto L_83B4;
    case 0x000083b6u: goto L_83B6;
    case 0x000083b8u: goto L_83B8;
    case 0x000083bau: goto L_83BA;
    case 0x000083bcu: goto L_83BC;
    case 0x000083c0u: goto L_83C0;
    case 0x000083c4u: goto L_83C4;
    case 0x000083c6u: goto L_83C6;
    case 0x000083c8u: goto L_83C8;
    case 0x000083cau: goto L_83CA;
    case 0x000083ccu: goto L_83CC;
    case 0x000083d0u: goto L_83D0;
    case 0x000083d4u: goto L_83D4;
    case 0x000083d8u: goto L_83D8;
    case 0x000083dcu: goto L_83DC;
    case 0x000083deu: goto L_83DE;
    case 0x000083e2u: goto L_83E2;
    case 0x000083e4u: goto L_83E4;
    case 0x000083e6u: goto L_83E6;
    case 0x000083eau: goto L_83EA;
    case 0x000083ecu: goto L_83EC;
    case 0x000083eeu: goto L_83EE;
    case 0x000083f2u: goto L_83F2;
    case 0x000083f4u: goto L_83F4;
    case 0x000083f6u: goto L_83F6;
    case 0x000083fau: goto L_83FA;
    case 0x000083feu: goto L_83FE;
    case 0x00008402u: goto L_8402;
    case 0x00008404u: goto L_8404;
    case 0x00008406u: goto L_8406;
    case 0x0000840au: goto L_840A;
    case 0x0000840eu: goto L_840E;
    case 0x00008412u: goto L_8412;
    case 0x00008416u: goto L_8416;
    case 0x0000841au: goto L_841A;
    case 0x0000841cu: goto L_841C;
    case 0x0000841eu: goto L_841E;
    case 0x00008422u: goto L_8422;
    case 0x00008426u: goto L_8426;
    case 0x00008428u: goto L_8428;
    case 0x0000842eu: goto L_842E;
    case 0x00008432u: goto L_8432;
    case 0x00008436u: goto L_8436;
    case 0x0000843au: goto L_843A;
    case 0x0000843cu: goto L_843C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_823A:
    /* 0000823a   4  link.w A5,#fffffffc */
    c->pc = 0x0000823au;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_823E:
    /* 0000823e   4  movem.l { D4 D5 A0 A1 A2 A3 },-(SP) */
    c->pc = 0x0000823eu;
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_8242:
    /* 00008242   4  movea.l (8,A5),A2 */
    c->pc = 0x00008242u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[2] = t0;

L_8246:
    /* 00008246   2  moveq #0,D5 */
    c->pc = 0x00008246u;
    c->d[5] = 0x00000000u;
    rc_set_nzvc(c, c->d[5], RC_L);

L_8248:
    /* 00008248   4  move.w (c2,A4),D0 */
    c->pc = 0x00008248u;
    t0 = rc_rd16(c, m, (c->a[4] + 0xc2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_824C:
    /* 0000824c   4  muls.w #24,D0 */
    c->pc = 0x0000824cu;
    t0 = 0x00000024u;
    rc_muls(c, 0, t0);

L_8250:
    /* 00008250   2  move.l D5,D1 */
    c->pc = 0x00008250u;
    t0 = rc_d_get(c, 5, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_8252:
    /* 00008252   2  asl.l #1,D1 */
    c->pc = 0x00008252u;
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_8254:
    /* 00008254   2  add.l D1,D0 */
    c->pc = 0x00008254u;
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_8256:
    /* 00008256   4  lea (ffff90a8,A4),A0 */
    c->pc = 0x00008256u;
    c->a[0] = (c->a[4] - 0x6f58u);

L_825A:
    /* 0000825a   4  move.w (0,A0,D0.w),D1 */
    c->pc = 0x0000825au;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_825E:
    /* 0000825e   2  ext.l D1 */
    c->pc = 0x0000825eu;
    rc_ext_l(c, 1);

L_8260:
    /* 00008260   2  move.l D1,D4 */
    c->pc = 0x00008260u;
    t0 = rc_d_get(c, 1, RC_L);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_8262:
    /* 00008262   6  cmp.l #ff,D1 */
    c->pc = 0x00008262u;
    t0 = 0x000000ffu;
    t1 = rc_d_get(c, 1, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_8268:
    /* 00008268   4  beq 00008436 */
    c->pc = 0x00008268u;
    if (rc_cond(c, 7)) goto L_8436;

L_826C:
    /* 0000826c   2  addq.l #1,D5 */
    c->pc = 0x0000826cu;
    t1 = rc_d_get(c, 5, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 5, RC_L, t2);

L_826E:
    /* 0000826e   2  move.l D4,D0 */
    c->pc = 0x0000826eu;
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_8270:
    /* 00008270   2  asl.l #2,D0 */
    c->pc = 0x00008270u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_8272:
    /* 00008272   4  lea (13a,A4),A0 */
    c->pc = 0x00008272u;
    c->a[0] = (c->a[4] + 0x13au);

L_8276:
    /* 00008276   6  move.l (0,A0,D0.w),(b4,A4) */
    c->pc = 0x00008276u;
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[4] + 0xb4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_827C:
    /* 0000827c   4  clr.w (bc,A4) */
    c->pc = 0x0000827cu;
    rc_wr16(c, m, (c->a[4] + 0xbcu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_8280:
    /* 00008280   4  clr.w (ba,A4) */
    c->pc = 0x00008280u;
    rc_wr16(c, m, (c->a[4] + 0xbau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_8284:
    /* 00008284   4  move.w (14,A5),-(A7) */
    c->pc = 0x00008284u;
    t0 = rc_rd16(c, m, (c->a[5] + 0x14u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_8288:
    /* 00008288   4  move.l (10,A5),-(A7) */
    c->pc = 0x00008288u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_828C:
    /* 0000828c   4  move.l (c,A5),-(A7) */
    c->pc = 0x0000828cu;
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_8290:
    /* 00008290   2  move.l A2,-(A7) */
    c->pc = 0x00008290u;
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_8292:
    /* 00008292   4  jsr (00008af0) */
    c->pc = 0x00008292u;
    rc_push32(c, m, 0x00008296u);
    rc_depth++;
    c->pc = 0x00008af0u;
    return;

L_8296:
    /* 00008296   4  lea (e,A7),A7 */
    c->pc = 0x00008296u;
    c->a[7] = (c->a[7] + 0xeu);

L_829A:
    /* 0000829a   6  cmp.l #3,D4 */
    c->pc = 0x0000829au;
    t0 = 0x00000003u;
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_82A0:
    /* 000082a0   2  bne 000082b2 */
    c->pc = 0x000082a0u;
    if (rc_cond(c, 6)) goto L_82B2;

L_82A2:
    /* 000082a2   4  clr.w (b8,A4) */
    c->pc = 0x000082a2u;
    rc_wr16(c, m, (c->a[4] + 0xb8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_82A6:
    /* 000082a6   4  tst.w (254,A4) */
    c->pc = 0x000082a6u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x254u));
    rc_set_nzvc(c, t0, RC_W);

L_82AA:
    /* 000082aa   2  beq 000082b2 */
    c->pc = 0x000082aau;
    if (rc_cond(c, 7)) goto L_82B2;

L_82AC:
    /* 000082ac   6  move.w #1,(b8,A4) */
    c->pc = 0x000082acu;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xb8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_82B2:
    /* 000082b2   4  tst.w (ba,A4) */
    c->pc = 0x000082b2u;
    t0 = rc_rd16(c, m, (c->a[4] + 0xbau));
    rc_set_nzvc(c, t0, RC_W);

L_82B6:
    /* 000082b6   4  beq 00008432 */
    c->pc = 0x000082b6u;
    if (rc_cond(c, 7)) goto L_8432;

L_82BA:
    /* 000082ba   4  tst.w (bc,A4) */
    c->pc = 0x000082bau;
    t0 = rc_rd16(c, m, (c->a[4] + 0xbcu));
    rc_set_nzvc(c, t0, RC_W);

L_82BE:
    /* 000082be   4  beq 00008432 */
    c->pc = 0x000082beu;
    if (rc_cond(c, 7)) goto L_8432;

L_82C2:
    /* 000082c2   4  move.w (b8,A4),D0 */
    c->pc = 0x000082c2u;
    t0 = rc_rd16(c, m, (c->a[4] + 0xb8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_82C6:
    /* 000082c6   4  and.w #1,D0 */
    c->pc = 0x000082c6u;
    t0 = 0x00000001u;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_82CA:
    /* 000082ca   2  ext.l D0 */
    c->pc = 0x000082cau;
    rc_ext_l(c, 0);

L_82CC:
    /* 000082cc   2  asl.l #1,D0 */
    c->pc = 0x000082ccu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_82CE:
    /* 000082ce   4  lea (252,A4),A0 */
    c->pc = 0x000082ceu;
    c->a[0] = (c->a[4] + 0x252u);

L_82D2:
    /* 000082d2   4  tst.w (0,A0,D0.w) */
    c->pc = 0x000082d2u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_82D6:
    /* 000082d6   4  beq 00008432 */
    c->pc = 0x000082d6u;
    if (rc_cond(c, 7)) goto L_8432;

L_82DA:
    /* 000082da   2  move.l D4,D0 */
    c->pc = 0x000082dau;
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_82DC:
    /* 000082dc   2  asl.l #2,D0 */
    c->pc = 0x000082dcu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_82DE:
    /* 000082de   4  lea (1c6,A4),A0 */
    c->pc = 0x000082deu;
    c->a[0] = (c->a[4] + 0x1c6u);

L_82E2:
    /* 000082e2   6  move.l (0,A0,D0.w),(fffffffc,A5) */
    c->pc = 0x000082e2u;
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_82E8:
    /* 000082e8   2  move.l D4,D0 */
    c->pc = 0x000082e8u;
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_82EA:
    /* 000082ea   2  asl.l #1,D0 */
    c->pc = 0x000082eau;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_82EC:
    /* 000082ec   4  lea (ffff8f90,A4),A0 */
    c->pc = 0x000082ecu;
    c->a[0] = (c->a[4] - 0x7070u);

L_82F0:
    /* 000082f0   4  move.w (0,A0,D0.w),D7 */
    c->pc = 0x000082f0u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 7, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_82F4:
    /* 000082f4   4  add.w (ba,A4),D7 */
    c->pc = 0x000082f4u;
    t0 = rc_rd16(c, m, (c->a[4] + 0xbau));
    t1 = rc_d_get(c, 7, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 7, RC_W, t2);

L_82F8:
    /* 000082f8   2  move.l D4,D0 */
    c->pc = 0x000082f8u;
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_82FA:
    /* 000082fa   2  asl.l #1,D0 */
    c->pc = 0x000082fau;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_82FC:
    /* 000082fc   4  lea (ffff8fd6,A4),A0 */
    c->pc = 0x000082fcu;
    c->a[0] = (c->a[4] - 0x702au);

L_8300:
    /* 00008300   4  movea.w (0,A0,D0.w),A3 */
    c->pc = 0x00008300u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[3] = rc_ext(t0, RC_W);

L_8304:
    /* 00008304   4  adda.w (bc,A4),A3 */
    c->pc = 0x00008304u;
    t0 = rc_rd16(c, m, (c->a[4] + 0xbcu));
    c->a[3] += rc_ext(t0, RC_W);

L_8308:
    /* 00008308   4  movea.l (fffffffc,A5),A0 */
    c->pc = 0x00008308u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_830C:
    /* 0000830c   4  movea.l (c,A0),A1 */
    c->pc = 0x0000830cu;
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_8310:
    /* 00008310   4  sub.w (8,A1),D7 */
    c->pc = 0x00008310u;
    t0 = rc_rd16(c, m, (c->a[1] + 0x8u));
    t1 = rc_d_get(c, 7, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 7, RC_W, t2);

L_8314:
    /* 00008314   4  movea.l (fffffffc,A5),A0 */
    c->pc = 0x00008314u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_8318:
    /* 00008318   4  movea.l (c,A0),A1 */
    c->pc = 0x00008318u;
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_831C:
    /* 0000831c   4  suba.w (a,A1),A3 */
    c->pc = 0x0000831cu;
    t0 = rc_rd16(c, m, (c->a[1] + 0xau));
    c->a[3] -= rc_ext(t0, RC_W);

L_8320:
    /* 00008320   4  jsr (ffff8380,A4) */
    c->pc = 0x00008320u;
    /* vector 149 */
    rc_push32(c, m, 0x00008324u);
    rc_depth++;
    c->pc = 0x000218d0u;
    return;

L_8324:
    /* 00008324   2  clr.l -(A7) */
    c->pc = 0x00008324u;
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_8326:
    /* 00008326   4  movea.l (fffffffc,A5),A0 */
    c->pc = 0x00008326u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_832A:
    /* 0000832a   4  movea.l (c,A0),A1 */
    c->pc = 0x0000832au;
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_832E:
    /* 0000832e   4  move.l (30,A1),-(A7) */
    c->pc = 0x0000832eu;
    t0 = rc_rd32(c, m, (c->a[1] + 0x30u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_8332:
    /* 00008332   6  pea (00043210).l */
    c->pc = 0x00008332u;
    rc_push32(c, m, 0x00043210u);

L_8338:
    /* 00008338   4  pea (000000ca).l */
    c->pc = 0x00008338u;
    rc_push32(c, m, 0x000000cau);

L_833C:
    /* 0000833c   4  pea (00000063).l */
    c->pc = 0x0000833cu;
    rc_push32(c, m, 0x00000063u);

L_8340:
    /* 00008340   4  pea (00000063).l */
    c->pc = 0x00008340u;
    rc_push32(c, m, 0x00000063u);

L_8344:
    /* 00008344   2  move.w A3,D0 */
    c->pc = 0x00008344u;
    t0 = rc_a_get(c, 3, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8346:
    /* 00008346   2  ext.l D0 */
    c->pc = 0x00008346u;
    rc_ext_l(c, 0);

L_8348:
    /* 00008348   2  move.l D0,-(A7) */
    c->pc = 0x00008348u;
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_834A:
    /* 0000834a   2  move.w D7,D0 */
    c->pc = 0x0000834au;
    t0 = rc_d_get(c, 7, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_834C:
    /* 0000834c   2  ext.l D0 */
    c->pc = 0x0000834cu;
    rc_ext_l(c, 0);

L_834E:
    /* 0000834e   2  move.l D0,-(A7) */
    c->pc = 0x0000834eu;
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_8350:
    /* 00008350   4  move.l (ffffcbbc,A4),-(A7) */
    c->pc = 0x00008350u;
    t0 = rc_rd32(c, m, (c->a[4] - 0x3444u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_8354:
    /* 00008354   2  clr.l -(A7) */
    c->pc = 0x00008354u;
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_8356:
    /* 00008356   2  clr.l -(A7) */
    c->pc = 0x00008356u;
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_8358:
    /* 00008358   4  movea.l (fffffffc,A5),A0 */
    c->pc = 0x00008358u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_835C:
    /* 0000835c   4  movea.l (c,A0),A1 */
    c->pc = 0x0000835cu;
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_8360:
    /* 00008360   4  pea (c,A1) */
    c->pc = 0x00008360u;
    rc_push32(c, m, (c->a[1] + 0xcu));

L_8364:
    /* 00008364   4  jsr (ffff823c,A4) */
    c->pc = 0x00008364u;
    /* vector 95 */
    rc_push32(c, m, 0x00008368u);
    rc_depth++;
    c->pc = 0x0001e8c8u;
    return;

L_8368:
    /* 00008368   4  lea (30,A7),A7 */
    c->pc = 0x00008368u;
    c->a[7] = (c->a[7] + 0x30u);

L_836C:
    /* 0000836c   4  jsr (ffff83aa,A4) */
    c->pc = 0x0000836cu;
    /* vector 156 */
    rc_push32(c, m, 0x00008370u);
    rc_depth++;
    c->pc = 0x00021948u;
    return;

L_8370:
    /* 00008370   4  jsr (ffff8362,A4) */
    c->pc = 0x00008370u;
    /* vector 144 */
    rc_push32(c, m, 0x00008374u);
    rc_depth++;
    c->pc = 0x000217f4u;
    return;

L_8374:
    /* 00008374   2  moveq #0,D6 */
    c->pc = 0x00008374u;
    c->d[6] = 0x00000000u;
    rc_set_nzvc(c, c->d[6], RC_L);

L_8376:
    /* 00008376   2  move.l D6,D0 */
    c->pc = 0x00008376u;
    t0 = rc_d_get(c, 6, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_8378:
    /* 00008378   2  asl.l #1,D0 */
    c->pc = 0x00008378u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_837A:
    /* 0000837a   4  lea (92,A4),A0 */
    c->pc = 0x0000837au;
    c->a[0] = (c->a[4] + 0x92u);

L_837E:
    /* 0000837e   4  tst.w (0,A0,D0.w) */
    c->pc = 0x0000837eu;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_8382:
    /* 00008382   4  beq 00008426 */
    c->pc = 0x00008382u;
    if (rc_cond(c, 7)) goto L_8426;

L_8386:
    /* 00008386   2  move.l D6,D0 */
    c->pc = 0x00008386u;
    t0 = rc_d_get(c, 6, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_8388:
    /* 00008388   2  asl.l #1,D0 */
    c->pc = 0x00008388u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_838A:
    /* 0000838a   4  lea (9c,A4),A0 */
    c->pc = 0x0000838au;
    c->a[0] = (c->a[4] + 0x9cu);

L_838E:
    /* 0000838e   4  move.w (0,A0,D0.w),D1 */
    c->pc = 0x0000838eu;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8392:
    /* 00008392   2  cmp.w D7,D1 */
    c->pc = 0x00008392u;
    t0 = rc_d_get(c, 7, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_8394:
    /* 00008394   4  blt 00008426 */
    c->pc = 0x00008394u;
    if (rc_cond(c, 13)) goto L_8426;

L_8398:
    /* 00008398   2  move.l D6,D0 */
    c->pc = 0x00008398u;
    t0 = rc_d_get(c, 6, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_839A:
    /* 0000839a   2  asl.l #1,D0 */
    c->pc = 0x0000839au;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_839C:
    /* 0000839c   4  lea (9c,A4),A0 */
    c->pc = 0x0000839cu;
    c->a[0] = (c->a[4] + 0x9cu);

L_83A0:
    /* 000083a0   4  movea.l (fffffffc,A5),A1 */
    c->pc = 0x000083a0u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[1] = t0;

L_83A4:
    /* 000083a4   4  movea.l (c,A1),A6 */
    c->pc = 0x000083a4u;
    t0 = rc_rd32(c, m, (c->a[1] + 0xcu));
    c->a[6] = t0;

L_83A8:
    /* 000083a8   4  move.w (c,A6),D1 */
    c->pc = 0x000083a8u;
    t0 = rc_rd16(c, m, (c->a[6] + 0xcu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_83AC:
    /* 000083ac   2  asl.w #3,D1 */
    c->pc = 0x000083acu;
    c->d[1] = rc_shift(c, 0, 1, 0x00000003u, rc_d_get(c, 1, RC_W), RC_W);

L_83AE:
    /* 000083ae   2  add.w D7,D1 */
    c->pc = 0x000083aeu;
    t0 = rc_d_get(c, 7, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_83B0:
    /* 000083b0   4  move.w (0,A0,D0.w),D2 */
    c->pc = 0x000083b0u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_83B4:
    /* 000083b4   2  cmp.w D1,D2 */
    c->pc = 0x000083b4u;
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_83B6:
    /* 000083b6   2  bcc 00008426 */
    c->pc = 0x000083b6u;
    if (rc_cond(c, 4)) goto L_8426;

L_83B8:
    /* 000083b8   2  move.l D6,D0 */
    c->pc = 0x000083b8u;
    t0 = rc_d_get(c, 6, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_83BA:
    /* 000083ba   2  asl.l #1,D0 */
    c->pc = 0x000083bau;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_83BC:
    /* 000083bc   4  lea (a6,A4),A0 */
    c->pc = 0x000083bcu;
    c->a[0] = (c->a[4] + 0xa6u);

L_83C0:
    /* 000083c0   4  move.w (0,A0,D0.w),D1 */
    c->pc = 0x000083c0u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_83C4:
    /* 000083c4   2  cmp.w A3,D1 */
    c->pc = 0x000083c4u;
    t0 = rc_a_get(c, 3, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_83C6:
    /* 000083c6   2  blt 00008426 */
    c->pc = 0x000083c6u;
    if (rc_cond(c, 13)) goto L_8426;

L_83C8:
    /* 000083c8   2  move.l D6,D0 */
    c->pc = 0x000083c8u;
    t0 = rc_d_get(c, 6, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_83CA:
    /* 000083ca   2  asl.l #1,D0 */
    c->pc = 0x000083cau;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_83CC:
    /* 000083cc   4  lea (a6,A4),A0 */
    c->pc = 0x000083ccu;
    c->a[0] = (c->a[4] + 0xa6u);

L_83D0:
    /* 000083d0   4  movea.l (fffffffc,A5),A1 */
    c->pc = 0x000083d0u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[1] = t0;

L_83D4:
    /* 000083d4   4  movea.l (c,A1),A6 */
    c->pc = 0x000083d4u;
    t0 = rc_rd32(c, m, (c->a[1] + 0xcu));
    c->a[6] = t0;

L_83D8:
    /* 000083d8   4  move.w (e,A6),D1 */
    c->pc = 0x000083d8u;
    t0 = rc_rd16(c, m, (c->a[6] + 0xeu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_83DC:
    /* 000083dc   2  add.w A3,D1 */
    c->pc = 0x000083dcu;
    t0 = rc_a_get(c, 3, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_83DE:
    /* 000083de   4  move.w (0,A0,D0.w),D2 */
    c->pc = 0x000083deu;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_83E2:
    /* 000083e2   2  cmp.w D1,D2 */
    c->pc = 0x000083e2u;
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_83E4:
    /* 000083e4   2  bcc 00008426 */
    c->pc = 0x000083e4u;
    if (rc_cond(c, 4)) goto L_8426;

L_83E6:
    /* 000083e6   4  move.w #2,-(A7) */
    c->pc = 0x000083e6u;
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_83EA:
    /* 000083ea   2  move.w A3,-(A7) */
    c->pc = 0x000083eau;
    t0 = rc_a_get(c, 3, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_83EC:
    /* 000083ec   2  move.w D7,-(A7) */
    c->pc = 0x000083ecu;
    t0 = rc_d_get(c, 7, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_83EE:
    /* 000083ee   4  move.w (b8,A4),-(A7) */
    c->pc = 0x000083eeu;
    t0 = rc_rd16(c, m, (c->a[4] + 0xb8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_83F2:
    /* 000083f2   2  move.l D4,D0 */
    c->pc = 0x000083f2u;
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_83F4:
    /* 000083f4   2  asl.l #2,D0 */
    c->pc = 0x000083f4u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_83F6:
    /* 000083f6   4  lea (ffff901c,A4),A0 */
    c->pc = 0x000083f6u;
    c->a[0] = (c->a[4] - 0x6fe4u);

L_83FA:
    /* 000083fa   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = 0x000083fau;
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_83FE:
    /* 000083fe   4  jsr (ffff8254,A4) */
    c->pc = 0x000083feu;
    /* vector 99 */
    rc_push32(c, m, 0x00008402u);
    rc_depth++;
    c->pc = 0x0001f186u;
    return;

L_8402:
    /* 00008402   2  addq.w #4,A7 */
    c->pc = 0x00008402u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_8404:
    /* 00008404   2  move.l D0,-(A7) */
    c->pc = 0x00008404u;
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_8406:
    /* 00008406   4  move.w #1,-(A7) */
    c->pc = 0x00008406u;
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_840A:
    /* 0000840a   4  jsr (ffff8272,A4) */
    c->pc = 0x0000840au;
    /* vector 104 */
    rc_push32(c, m, 0x0000840eu);
    rc_depth++;
    c->pc = 0x0001f914u;
    return;

L_840E:
    /* 0000840e   4  lea (e,A7),A7 */
    c->pc = 0x0000840eu;
    c->a[7] = (c->a[7] + 0xeu);

L_8412:
    /* 00008412   4  move.w (b8,A4),D0 */
    c->pc = 0x00008412u;
    t0 = rc_rd16(c, m, (c->a[4] + 0xb8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8416:
    /* 00008416   4  and.w #1,D0 */
    c->pc = 0x00008416u;
    t0 = 0x00000001u;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_841A:
    /* 0000841a   2  ext.l D0 */
    c->pc = 0x0000841au;
    rc_ext_l(c, 0);

L_841C:
    /* 0000841c   2  asl.l #1,D0 */
    c->pc = 0x0000841cu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_841E:
    /* 0000841e   4  lea (252,A4),A0 */
    c->pc = 0x0000841eu;
    c->a[0] = (c->a[4] + 0x252u);

L_8422:
    /* 00008422   4  clr.w (0,A0,D0.w) */
    c->pc = 0x00008422u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_8426:
    /* 00008426   2  addq.l #1,D6 */
    c->pc = 0x00008426u;
    t1 = rc_d_get(c, 6, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 6, RC_L, t2);

L_8428:
    /* 00008428   6  cmp.l #3,D6 */
    c->pc = 0x00008428u;
    t0 = 0x00000003u;
    t1 = rc_d_get(c, 6, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_842E:
    /* 0000842e   4  blt 00008376 */
    c->pc = 0x0000842eu;
    if (rc_cond(c, 13)) { rc_tick(); goto L_8376; }

L_8432:
    /* 00008432   4  bra 00008248 */
    c->pc = 0x00008432u;
    rc_tick();
    goto L_8248;

L_8436:
    /* 00008436   4  movem.l (SP)+,{ D4 D5 D6 D7 A2 A3 } */
    c->pc = 0x00008436u;
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
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
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_843A:
    /* 0000843a   2  unlk A5 */
    c->pc = 0x0000843au;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_843C:
    /* 0000843c   2  rts */
    c->pc = 0x0000843cu;
    rc_ret(c, m);
    return;

}
