/* fn_0000638c - 236 byte(s), 70 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000638c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case 0x0000638cu: goto L_638C;
    case 0x00006390u: goto L_6390;
    case 0x00006396u: goto L_6396;
    case 0x0000639au: goto L_639A;
    case 0x0000639eu: goto L_639E;
    case 0x000063a2u: goto L_63A2;
    case 0x000063a6u: goto L_63A6;
    case 0x000063a8u: goto L_63A8;
    case 0x000063acu: goto L_63AC;
    case 0x000063b0u: goto L_63B0;
    case 0x000063b4u: goto L_63B4;
    case 0x000063b8u: goto L_63B8;
    case 0x000063bau: goto L_63BA;
    case 0x000063beu: goto L_63BE;
    case 0x000063c2u: goto L_63C2;
    case 0x000063c4u: goto L_63C4;
    case 0x000063c8u: goto L_63C8;
    case 0x000063ccu: goto L_63CC;
    case 0x000063ceu: goto L_63CE;
    case 0x000063d2u: goto L_63D2;
    case 0x000063d6u: goto L_63D6;
    case 0x000063dau: goto L_63DA;
    case 0x000063deu: goto L_63DE;
    case 0x000063e0u: goto L_63E0;
    case 0x000063e2u: goto L_63E2;
    case 0x000063e6u: goto L_63E6;
    case 0x000063eau: goto L_63EA;
    case 0x000063ecu: goto L_63EC;
    case 0x000063f0u: goto L_63F0;
    case 0x000063f4u: goto L_63F4;
    case 0x000063f8u: goto L_63F8;
    case 0x000063fau: goto L_63FA;
    case 0x000063feu: goto L_63FE;
    case 0x00006402u: goto L_6402;
    case 0x00006406u: goto L_6406;
    case 0x00006408u: goto L_6408;
    case 0x0000640cu: goto L_640C;
    case 0x00006410u: goto L_6410;
    case 0x00006412u: goto L_6412;
    case 0x00006416u: goto L_6416;
    case 0x00006418u: goto L_6418;
    case 0x0000641cu: goto L_641C;
    case 0x00006420u: goto L_6420;
    case 0x00006422u: goto L_6422;
    case 0x00006426u: goto L_6426;
    case 0x0000642au: goto L_642A;
    case 0x0000642cu: goto L_642C;
    case 0x00006430u: goto L_6430;
    case 0x00006434u: goto L_6434;
    case 0x00006436u: goto L_6436;
    case 0x0000643cu: goto L_643C;
    case 0x0000643eu: goto L_643E;
    case 0x00006442u: goto L_6442;
    case 0x00006444u: goto L_6444;
    case 0x00006448u: goto L_6448;
    case 0x0000644cu: goto L_644C;
    case 0x0000644eu: goto L_644E;
    case 0x00006452u: goto L_6452;
    case 0x00006456u: goto L_6456;
    case 0x00006458u: goto L_6458;
    case 0x0000645cu: goto L_645C;
    case 0x00006460u: goto L_6460;
    case 0x00006462u: goto L_6462;
    case 0x00006464u: goto L_6464;
    case 0x00006466u: goto L_6466;
    case 0x00006468u: goto L_6468;
    case 0x0000646cu: goto L_646C;
    case 0x00006470u: goto L_6470;
    case 0x00006474u: goto L_6474;
    case 0x00006476u: goto L_6476;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_638C:
    /* 0000638c   4  link.w A5,#fffffffc */
    c->pc = 0x0000638cu;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_6390:
    /* 00006390   6  move.w #1,(fffffffe,A5) */
    c->pc = 0x00006390u;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6396:
    /* 00006396   4  tst.w (fffffffe,A5) */
    c->pc = 0x00006396u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_set_nzvc(c, t0, RC_W);

L_639A:
    /* 0000639a   4  beq 0000646c */
    c->pc = 0x0000639au;
    if (rc_cond(c, 7)) goto L_646C;

L_639E:
    /* 0000639e   4  movea.l (8,A5),A0 */
    c->pc = 0x0000639eu;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_63A2:
    /* 000063a2   4  cmpi.b #40,(A0) */
    c->pc = 0x000063a2u;
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x00000040u);

L_63A6:
    /* 000063a6   2  bne 0000641c */
    c->pc = 0x000063a6u;
    if (rc_cond(c, 6)) goto L_641C;

L_63A8:
    /* 000063a8   4  movea.l (8,A5),A0 */
    c->pc = 0x000063a8u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_63AC:
    /* 000063ac   4  addq.l #1,(8,A5) */
    c->pc = 0x000063acu;
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_63B0:
    /* 000063b0   4  movea.l (8,A5),A0 */
    c->pc = 0x000063b0u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_63B4:
    /* 000063b4   4  cmpi.b #30,(A0) */
    c->pc = 0x000063b4u;
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x00000030u);

L_63B8:
    /* 000063b8   2  blt 00006418 */
    c->pc = 0x000063b8u;
    if (rc_cond(c, 13)) goto L_6418;

L_63BA:
    /* 000063ba   4  movea.l (8,A5),A0 */
    c->pc = 0x000063bau;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_63BE:
    /* 000063be   4  cmpi.b #39,(A0) */
    c->pc = 0x000063beu;
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x00000039u);

L_63C2:
    /* 000063c2   2  bgt 00006418 */
    c->pc = 0x000063c2u;
    if (rc_cond(c, 14)) goto L_6418;

L_63C4:
    /* 000063c4   4  move.l (8,A5),-(A7) */
    c->pc = 0x000063c4u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_63C8:
    /* 000063c8   4  jsr (ffff82b4,A4) */
    c->pc = 0x000063c8u;
    /* vector 115 */
    rc_push32(c, m, 0x000063ccu);
    rc_depth++;
    c->pc = 0x00020832u;
    return;

L_63CC:
    /* 000063cc   2  addq.w #4,A7 */
    c->pc = 0x000063ccu;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_63CE:
    /* 000063ce   4  move.w D0,(fffff06e,A4) */
    c->pc = 0x000063ceu;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0xf92u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_63D2:
    /* 000063d2   4  movea.l (8,A5),A0 */
    c->pc = 0x000063d2u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_63D6:
    /* 000063d6   4  addq.l #1,(8,A5) */
    c->pc = 0x000063d6u;
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_63DA:
    /* 000063da   4  cmpi.b #2f,(A0) */
    c->pc = 0x000063dau;
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x0000002fu);

L_63DE:
    /* 000063de   2  beq 000063e2 */
    c->pc = 0x000063deu;
    if (rc_cond(c, 7)) goto L_63E2;

L_63E0:
    /* 000063e0   2  bra 000063d2 */
    c->pc = 0x000063e0u;
    rc_tick();
    goto L_63D2;

L_63E2:
    /* 000063e2   4  move.l (8,A5),-(A7) */
    c->pc = 0x000063e2u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_63E6:
    /* 000063e6   4  jsr (ffff82b4,A4) */
    c->pc = 0x000063e6u;
    /* vector 115 */
    rc_push32(c, m, 0x000063eau);
    rc_depth++;
    c->pc = 0x00020832u;
    return;

L_63EA:
    /* 000063ea   2  addq.w #4,A7 */
    c->pc = 0x000063eau;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_63EC:
    /* 000063ec   4  move.w D0,(fffff070,A4) */
    c->pc = 0x000063ecu;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0xf90u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_63F0:
    /* 000063f0   4  move.l (8,A5),-(A7) */
    c->pc = 0x000063f0u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_63F4:
    /* 000063f4   4  jsr (000062b0) */
    c->pc = 0x000063f4u;
    rc_push32(c, m, 0x000063f8u);
    rc_depth++;
    c->pc = 0x000062b0u;
    return;

L_63F8:
    /* 000063f8   2  addq.w #4,A7 */
    c->pc = 0x000063f8u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_63FA:
    /* 000063fa   4  move.l D0,(8,A5) */
    c->pc = 0x000063fau;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_63FE:
    /* 000063fe   4  move.w (fffff06e,A4),D0 */
    c->pc = 0x000063feu;
    t0 = rc_rd16(c, m, (c->a[4] - 0xf92u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6402:
    /* 00006402   4  cmp.w (ffff83cc,A4),D0 */
    c->pc = 0x00006402u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c34u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_6406:
    /* 00006406   2  bgt 00006416 */
    c->pc = 0x00006406u;
    if (rc_cond(c, 14)) goto L_6416;

L_6408:
    /* 00006408   4  move.w (fffff070,A4),D0 */
    c->pc = 0x00006408u;
    t0 = rc_rd16(c, m, (c->a[4] - 0xf90u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_640C:
    /* 0000640c   4  cmp.w (ffff83cc,A4),D0 */
    c->pc = 0x0000640cu;
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c34u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_6410:
    /* 00006410   2  ble 00006416 */
    c->pc = 0x00006410u;
    if (rc_cond(c, 15)) goto L_6416;

L_6412:
    /* 00006412   4  clr.w (fffffffe,A5) */
    c->pc = 0x00006412u;
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6416:
    /* 00006416   2  bra 0000641c */
    c->pc = 0x00006416u;
    goto L_641C;

L_6418:
    /* 00006418   4  clr.w (fffffffe,A5) */
    c->pc = 0x00006418u;
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_641C:
    /* 0000641c   4  tst.w (fffffffe,A5) */
    c->pc = 0x0000641cu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_set_nzvc(c, t0, RC_W);

L_6420:
    /* 00006420   2  bne 00006448 */
    c->pc = 0x00006420u;
    if (rc_cond(c, 6)) goto L_6448;

L_6422:
    /* 00006422   4  move.l (8,A5),-(A7) */
    c->pc = 0x00006422u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6426:
    /* 00006426   4  jsr (000062f6) */
    c->pc = 0x00006426u;
    rc_push32(c, m, 0x0000642au);
    rc_depth++;
    c->pc = 0x000062f6u;
    return;

L_642A:
    /* 0000642a   2  addq.w #4,A7 */
    c->pc = 0x0000642au;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_642C:
    /* 0000642c   4  move.w D0,(fffffffc,A5) */
    c->pc = 0x0000642cu;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6430:
    /* 00006430   4  tst.w (fffffffc,A5) */
    c->pc = 0x00006430u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_W);

L_6434:
    /* 00006434   2  bge 0000643e */
    c->pc = 0x00006434u;
    if (rc_cond(c, 12)) goto L_643E;

L_6436:
    /* 00006436   6  move.w #1,(fffffffe,A5) */
    c->pc = 0x00006436u;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_643C:
    /* 0000643c   2  bra 00006448 */
    c->pc = 0x0000643cu;
    goto L_6448;

L_643E:
    /* 0000643e   4  move.w (fffffffc,A5),D0 */
    c->pc = 0x0000643eu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6442:
    /* 00006442   2  ext.l D0 */
    c->pc = 0x00006442u;
    rc_ext_l(c, 0);

L_6444:
    /* 00006444   4  add.l D0,(8,A5) */
    c->pc = 0x00006444u;
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_6448:
    /* 00006448   4  tst.w (fffffffe,A5) */
    c->pc = 0x00006448u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_set_nzvc(c, t0, RC_W);

L_644C:
    /* 0000644c   2  beq 0000645c */
    c->pc = 0x0000644cu;
    if (rc_cond(c, 7)) goto L_645C;

L_644E:
    /* 0000644e   4  move.l (8,A5),-(A7) */
    c->pc = 0x0000644eu;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6452:
    /* 00006452   4  jsr (000062b0) */
    c->pc = 0x00006452u;
    rc_push32(c, m, 0x00006456u);
    rc_depth++;
    c->pc = 0x000062b0u;
    return;

L_6456:
    /* 00006456   2  addq.w #4,A7 */
    c->pc = 0x00006456u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_6458:
    /* 00006458   4  move.l D0,(8,A5) */
    c->pc = 0x00006458u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_645C:
    /* 0000645c   4  tst.l (8,A5) */
    c->pc = 0x0000645cu;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_set_nzvc(c, t0, RC_L);

L_6460:
    /* 00006460   2  bne 00006468 */
    c->pc = 0x00006460u;
    if (rc_cond(c, 6)) goto L_6468;

L_6462:
    /* 00006462   2  moveq #0,D0 */
    c->pc = 0x00006462u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_6464:
    /* 00006464   2  unlk A5 */
    c->pc = 0x00006464u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_6466:
    /* 00006466   2  rts */
    c->pc = 0x00006466u;
    rc_ret(c, m);
    return;

L_6468:
    /* 00006468   4  bra 00006396 */
    c->pc = 0x00006468u;
    rc_tick();
    goto L_6396;

L_646C:
    /* 0000646c   4  move.l (8,A5),-(A7) */
    c->pc = 0x0000646cu;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6470:
    /* 00006470   4  jsr (00006182) */
    c->pc = 0x00006470u;
    rc_push32(c, m, 0x00006474u);
    rc_depth++;
    c->pc = 0x00006182u;
    return;

L_6474:
    /* 00006474   2  addq.w #4,A7 */
    c->pc = 0x00006474u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_6476:
    /* 00006476   2  bra 00006464 */
    c->pc = 0x00006476u;
    rc_tick();
    goto L_6464;

}
