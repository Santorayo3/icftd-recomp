/* fn_0000638c - 236 byte(s), 70 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000638c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000638cu): goto L_638C;
    case RC_ADDR(0x00006390u): goto L_6390;
    case RC_ADDR(0x00006396u): goto L_6396;
    case RC_ADDR(0x0000639au): goto L_639A;
    case RC_ADDR(0x0000639eu): goto L_639E;
    case RC_ADDR(0x000063a2u): goto L_63A2;
    case RC_ADDR(0x000063a6u): goto L_63A6;
    case RC_ADDR(0x000063a8u): goto L_63A8;
    case RC_ADDR(0x000063acu): goto L_63AC;
    case RC_ADDR(0x000063b0u): goto L_63B0;
    case RC_ADDR(0x000063b4u): goto L_63B4;
    case RC_ADDR(0x000063b8u): goto L_63B8;
    case RC_ADDR(0x000063bau): goto L_63BA;
    case RC_ADDR(0x000063beu): goto L_63BE;
    case RC_ADDR(0x000063c2u): goto L_63C2;
    case RC_ADDR(0x000063c4u): goto L_63C4;
    case RC_ADDR(0x000063c8u): goto L_63C8;
    case RC_ADDR(0x000063ccu): goto L_63CC;
    case RC_ADDR(0x000063ceu): goto L_63CE;
    case RC_ADDR(0x000063d2u): goto L_63D2;
    case RC_ADDR(0x000063d6u): goto L_63D6;
    case RC_ADDR(0x000063dau): goto L_63DA;
    case RC_ADDR(0x000063deu): goto L_63DE;
    case RC_ADDR(0x000063e0u): goto L_63E0;
    case RC_ADDR(0x000063e2u): goto L_63E2;
    case RC_ADDR(0x000063e6u): goto L_63E6;
    case RC_ADDR(0x000063eau): goto L_63EA;
    case RC_ADDR(0x000063ecu): goto L_63EC;
    case RC_ADDR(0x000063f0u): goto L_63F0;
    case RC_ADDR(0x000063f4u): goto L_63F4;
    case RC_ADDR(0x000063f8u): goto L_63F8;
    case RC_ADDR(0x000063fau): goto L_63FA;
    case RC_ADDR(0x000063feu): goto L_63FE;
    case RC_ADDR(0x00006402u): goto L_6402;
    case RC_ADDR(0x00006406u): goto L_6406;
    case RC_ADDR(0x00006408u): goto L_6408;
    case RC_ADDR(0x0000640cu): goto L_640C;
    case RC_ADDR(0x00006410u): goto L_6410;
    case RC_ADDR(0x00006412u): goto L_6412;
    case RC_ADDR(0x00006416u): goto L_6416;
    case RC_ADDR(0x00006418u): goto L_6418;
    case RC_ADDR(0x0000641cu): goto L_641C;
    case RC_ADDR(0x00006420u): goto L_6420;
    case RC_ADDR(0x00006422u): goto L_6422;
    case RC_ADDR(0x00006426u): goto L_6426;
    case RC_ADDR(0x0000642au): goto L_642A;
    case RC_ADDR(0x0000642cu): goto L_642C;
    case RC_ADDR(0x00006430u): goto L_6430;
    case RC_ADDR(0x00006434u): goto L_6434;
    case RC_ADDR(0x00006436u): goto L_6436;
    case RC_ADDR(0x0000643cu): goto L_643C;
    case RC_ADDR(0x0000643eu): goto L_643E;
    case RC_ADDR(0x00006442u): goto L_6442;
    case RC_ADDR(0x00006444u): goto L_6444;
    case RC_ADDR(0x00006448u): goto L_6448;
    case RC_ADDR(0x0000644cu): goto L_644C;
    case RC_ADDR(0x0000644eu): goto L_644E;
    case RC_ADDR(0x00006452u): goto L_6452;
    case RC_ADDR(0x00006456u): goto L_6456;
    case RC_ADDR(0x00006458u): goto L_6458;
    case RC_ADDR(0x0000645cu): goto L_645C;
    case RC_ADDR(0x00006460u): goto L_6460;
    case RC_ADDR(0x00006462u): goto L_6462;
    case RC_ADDR(0x00006464u): goto L_6464;
    case RC_ADDR(0x00006466u): goto L_6466;
    case RC_ADDR(0x00006468u): goto L_6468;
    case RC_ADDR(0x0000646cu): goto L_646C;
    case RC_ADDR(0x00006470u): goto L_6470;
    case RC_ADDR(0x00006474u): goto L_6474;
    case RC_ADDR(0x00006476u): goto L_6476;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_638C:
    /* 0000638c   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x0000638cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_6390:
    /* 00006390   6  move.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00006390u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6396:
    /* 00006396   4  tst.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00006396u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_set_nzvc(c, t0, RC_W);

L_639A:
    /* 0000639a   4  beq 0000646c */
    c->pc = RC_ADDR(0x0000639au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_646C;

L_639E:
    /* 0000639e   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0000639eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_63A2:
    /* 000063a2   4  cmpi.b #40,(A0) */
    c->pc = RC_ADDR(0x000063a2u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x00000040u);

L_63A6:
    /* 000063a6   2  bne 0000641c */
    c->pc = RC_ADDR(0x000063a6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_641C;

L_63A8:
    /* 000063a8   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000063a8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_63AC:
    /* 000063ac   4  addq.l #1,(8,A5) */
    c->pc = RC_ADDR(0x000063acu);
    rc_step(c, m, 24);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_63B0:
    /* 000063b0   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000063b0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_63B4:
    /* 000063b4   4  cmpi.b #30,(A0) */
    c->pc = RC_ADDR(0x000063b4u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x00000030u);

L_63B8:
    /* 000063b8   2  blt 00006418 */
    c->pc = RC_ADDR(0x000063b8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_6418;

L_63BA:
    /* 000063ba   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000063bau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_63BE:
    /* 000063be   4  cmpi.b #39,(A0) */
    c->pc = RC_ADDR(0x000063beu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x00000039u);

L_63C2:
    /* 000063c2   2  bgt 00006418 */
    c->pc = RC_ADDR(0x000063c2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_6418;

L_63C4:
    /* 000063c4   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000063c4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_63C8:
    /* 000063c8   4  jsr (ffff82b4,A4) */
    c->pc = RC_ADDR(0x000063c8u);
    rc_step(c, m, 18);
    /* vector 115 */
    rc_push32(c, m, RC_ADDR(0x000063ccu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d0au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00020832u);
    return;

L_63CC:
    /* 000063cc   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000063ccu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_63CE:
    /* 000063ce   4  move.w D0,(fffff06e,A4) */
    c->pc = RC_ADDR(0x000063ceu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0xf92u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_63D2:
    /* 000063d2   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000063d2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_63D6:
    /* 000063d6   4  addq.l #1,(8,A5) */
    c->pc = RC_ADDR(0x000063d6u);
    rc_step(c, m, 24);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_63DA:
    /* 000063da   4  cmpi.b #2f,(A0) */
    c->pc = RC_ADDR(0x000063dau);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x0000002fu);

L_63DE:
    /* 000063de   2  beq 000063e2 */
    c->pc = RC_ADDR(0x000063deu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_63E2;

L_63E0:
    /* 000063e0   2  bra 000063d2 */
    c->pc = RC_ADDR(0x000063e0u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_63D2;

L_63E2:
    /* 000063e2   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000063e2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_63E6:
    /* 000063e6   4  jsr (ffff82b4,A4) */
    c->pc = RC_ADDR(0x000063e6u);
    rc_step(c, m, 18);
    /* vector 115 */
    rc_push32(c, m, RC_ADDR(0x000063eau));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d0au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00020832u);
    return;

L_63EA:
    /* 000063ea   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000063eau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_63EC:
    /* 000063ec   4  move.w D0,(fffff070,A4) */
    c->pc = RC_ADDR(0x000063ecu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0xf90u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_63F0:
    /* 000063f0   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000063f0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_63F4:
    /* 000063f4   4  jsr (000062b0) */
    c->pc = RC_ADDR(0x000063f4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000063f8u));
    rc_depth++;
    c->pc = RC_ADDR(0x000062b0u);
    return;

L_63F8:
    /* 000063f8   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000063f8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_63FA:
    /* 000063fa   4  move.l D0,(8,A5) */
    c->pc = RC_ADDR(0x000063fau);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_63FE:
    /* 000063fe   4  move.w (fffff06e,A4),D0 */
    c->pc = RC_ADDR(0x000063feu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0xf92u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6402:
    /* 00006402   4  cmp.w (ffff83cc,A4),D0 */
    c->pc = RC_ADDR(0x00006402u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c34u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_6406:
    /* 00006406   2  bgt 00006416 */
    c->pc = RC_ADDR(0x00006406u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_6416;

L_6408:
    /* 00006408   4  move.w (fffff070,A4),D0 */
    c->pc = RC_ADDR(0x00006408u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0xf90u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_640C:
    /* 0000640c   4  cmp.w (ffff83cc,A4),D0 */
    c->pc = RC_ADDR(0x0000640cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c34u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_6410:
    /* 00006410   2  ble 00006416 */
    c->pc = RC_ADDR(0x00006410u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_6416;

L_6412:
    /* 00006412   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00006412u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6416:
    /* 00006416   2  bra 0000641c */
    c->pc = RC_ADDR(0x00006416u);
    rc_step(c, m, 10);
    goto L_641C;

L_6418:
    /* 00006418   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00006418u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_641C:
    /* 0000641c   4  tst.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0000641cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_set_nzvc(c, t0, RC_W);

L_6420:
    /* 00006420   2  bne 00006448 */
    c->pc = RC_ADDR(0x00006420u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_6448;

L_6422:
    /* 00006422   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00006422u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6426:
    /* 00006426   4  jsr (000062f6) */
    c->pc = RC_ADDR(0x00006426u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000642au));
    rc_depth++;
    c->pc = RC_ADDR(0x000062f6u);
    return;

L_642A:
    /* 0000642a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000642au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_642C:
    /* 0000642c   4  move.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000642cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6430:
    /* 00006430   4  tst.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x00006430u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_W);

L_6434:
    /* 00006434   2  bge 0000643e */
    c->pc = RC_ADDR(0x00006434u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_643E;

L_6436:
    /* 00006436   6  move.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00006436u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_643C:
    /* 0000643c   2  bra 00006448 */
    c->pc = RC_ADDR(0x0000643cu);
    rc_step(c, m, 10);
    goto L_6448;

L_643E:
    /* 0000643e   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000643eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6442:
    /* 00006442   2  ext.l D0 */
    c->pc = RC_ADDR(0x00006442u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_6444:
    /* 00006444   4  add.l D0,(8,A5) */
    c->pc = RC_ADDR(0x00006444u);
    rc_step(c, m, 24);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_6448:
    /* 00006448   4  tst.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00006448u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_set_nzvc(c, t0, RC_W);

L_644C:
    /* 0000644c   2  beq 0000645c */
    c->pc = RC_ADDR(0x0000644cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_645C;

L_644E:
    /* 0000644e   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000644eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6452:
    /* 00006452   4  jsr (000062b0) */
    c->pc = RC_ADDR(0x00006452u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00006456u));
    rc_depth++;
    c->pc = RC_ADDR(0x000062b0u);
    return;

L_6456:
    /* 00006456   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00006456u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_6458:
    /* 00006458   4  move.l D0,(8,A5) */
    c->pc = RC_ADDR(0x00006458u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_645C:
    /* 0000645c   4  tst.l (8,A5) */
    c->pc = RC_ADDR(0x0000645cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_set_nzvc(c, t0, RC_L);

L_6460:
    /* 00006460   2  bne 00006468 */
    c->pc = RC_ADDR(0x00006460u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_6468;

L_6462:
    /* 00006462   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00006462u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_6464:
    /* 00006464   2  unlk A5 */
    c->pc = RC_ADDR(0x00006464u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_6466:
    /* 00006466   2  rts */
    c->pc = RC_ADDR(0x00006466u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_6468:
    /* 00006468   4  bra 00006396 */
    c->pc = RC_ADDR(0x00006468u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_6396;

L_646C:
    /* 0000646c   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000646cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6470:
    /* 00006470   4  jsr (00006182) */
    c->pc = RC_ADDR(0x00006470u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00006474u));
    rc_depth++;
    c->pc = RC_ADDR(0x00006182u);
    return;

L_6474:
    /* 00006474   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00006474u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_6476:
    /* 00006476   2  bra 00006464 */
    c->pc = RC_ADDR(0x00006476u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_6464;

}
