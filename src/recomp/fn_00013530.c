/* fn_00013530 - 170 byte(s), 48 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00013530(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case 0x00013530u: goto L_13530;
    case 0x00013534u: goto L_13534;
    case 0x0001353au: goto L_1353A;
    case 0x0001353eu: goto L_1353E;
    case 0x00013542u: goto L_13542;
    case 0x00013544u: goto L_13544;
    case 0x00013548u: goto L_13548;
    case 0x0001354cu: goto L_1354C;
    case 0x00013550u: goto L_13550;
    case 0x00013554u: goto L_13554;
    case 0x00013558u: goto L_13558;
    case 0x0001355au: goto L_1355A;
    case 0x0001355eu: goto L_1355E;
    case 0x00013560u: goto L_13560;
    case 0x00013562u: goto L_13562;
    case 0x00013566u: goto L_13566;
    case 0x0001356au: goto L_1356A;
    case 0x0001356eu: goto L_1356E;
    case 0x00013572u: goto L_13572;
    case 0x00013576u: goto L_13576;
    case 0x00013578u: goto L_13578;
    case 0x0001357cu: goto L_1357C;
    case 0x0001357eu: goto L_1357E;
    case 0x00013580u: goto L_13580;
    case 0x00013582u: goto L_13582;
    case 0x00013586u: goto L_13586;
    case 0x0001358au: goto L_1358A;
    case 0x0001358eu: goto L_1358E;
    case 0x00013590u: goto L_13590;
    case 0x00013596u: goto L_13596;
    case 0x0001359cu: goto L_1359C;
    case 0x000135a0u: goto L_135A0;
    case 0x000135a4u: goto L_135A4;
    case 0x000135a8u: goto L_135A8;
    case 0x000135aau: goto L_135AA;
    case 0x000135aeu: goto L_135AE;
    case 0x000135b0u: goto L_135B0;
    case 0x000135b4u: goto L_135B4;
    case 0x000135b8u: goto L_135B8;
    case 0x000135bcu: goto L_135BC;
    case 0x000135c0u: goto L_135C0;
    case 0x000135c4u: goto L_135C4;
    case 0x000135c8u: goto L_135C8;
    case 0x000135ccu: goto L_135CC;
    case 0x000135ceu: goto L_135CE;
    case 0x000135d2u: goto L_135D2;
    case 0x000135d6u: goto L_135D6;
    case 0x000135d8u: goto L_135D8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_13530:
    /* 00013530   4  link.w A5,#fffffffa */
    c->pc = 0x00013530u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x6u;

L_13534:
    /* 00013534   6  move.w #7d00,(fffffffa,A5) */
    c->pc = 0x00013534u;
    t0 = 0x00007d00u;
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1353A:
    /* 0001353a   4  clr.w (fffffd5c,A4) */
    c->pc = 0x0001353au;
    rc_wr16(c, m, (c->a[4] - 0x2a4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1353E:
    /* 0001353e   4  clr.w (fffffffe,A5) */
    c->pc = 0x0001353eu;
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13542:
    /* 00013542   2  bra 000135a0 */
    c->pc = 0x00013542u;
    goto L_135A0;

L_13544:
    /* 00013544   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x00013544u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13548:
    /* 00013548   4  muls.w #16,D0 */
    c->pc = 0x00013548u;
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_1354C:
    /* 0001354c   4  lea (fffff37c,A4),A0 */
    c->pc = 0x0001354cu;
    c->a[0] = (c->a[4] - 0xc84u);

L_13550:
    /* 00013550   4  move.w (fffffd8a,A4),D1 */
    c->pc = 0x00013550u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x276u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13554:
    /* 00013554   4  sub.w (0,A0,D0.w),D1 */
    c->pc = 0x00013554u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_13558:
    /* 00013558   2  move.w D1,-(A7) */
    c->pc = 0x00013558u;
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1355A:
    /* 0001355a   4  jsr (ffff8170,A4) */
    c->pc = 0x0001355au;
    /* vector 61 */
    rc_push32(c, m, 0x0001355eu);
    rc_depth++;
    c->pc = 0x00012132u;
    return;

L_1355E:
    /* 0001355e   2  addq.w #2,A7 */
    c->pc = 0x0001355eu;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_13560:
    /* 00013560   2  move.w D0,-(A7) */
    c->pc = 0x00013560u;
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_13562:
    /* 00013562   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x00013562u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13566:
    /* 00013566   4  muls.w #16,D0 */
    c->pc = 0x00013566u;
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_1356A:
    /* 0001356a   4  lea (fffff37e,A4),A0 */
    c->pc = 0x0001356au;
    c->a[0] = (c->a[4] - 0xc82u);

L_1356E:
    /* 0001356e   4  move.w (fffffd8c,A4),D1 */
    c->pc = 0x0001356eu;
    t0 = rc_rd16(c, m, (c->a[4] - 0x274u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13572:
    /* 00013572   4  sub.w (0,A0,D0.w),D1 */
    c->pc = 0x00013572u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_13576:
    /* 00013576   2  move.w D1,-(A7) */
    c->pc = 0x00013576u;
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_13578:
    /* 00013578   4  jsr (ffff8170,A4) */
    c->pc = 0x00013578u;
    /* vector 61 */
    rc_push32(c, m, 0x0001357cu);
    rc_depth++;
    c->pc = 0x00012132u;
    return;

L_1357C:
    /* 0001357c   2  addq.w #2,A7 */
    c->pc = 0x0001357cu;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1357E:
    /* 0001357e   2  move.w (A7)+,D1 */
    c->pc = 0x0001357eu;
    t3 = c->a[7];
    c->a[7] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13580:
    /* 00013580   2  add.w D0,D1 */
    c->pc = 0x00013580u;
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_13582:
    /* 00013582   4  move.w D1,(fffffffc,A5) */
    c->pc = 0x00013582u;
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13586:
    /* 00013586   4  move.w (fffffffc,A5),D0 */
    c->pc = 0x00013586u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1358A:
    /* 0001358a   4  cmp.w (fffffffa,A5),D0 */
    c->pc = 0x0001358au;
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1358E:
    /* 0001358e   2  bge 0001359c */
    c->pc = 0x0001358eu;
    if (rc_cond(c, 12)) goto L_1359C;

L_13590:
    /* 00013590   6  move.w (fffffffc,A5),(fffffffa,A5) */
    c->pc = 0x00013590u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13596:
    /* 00013596   6  move.w (fffffffe,A5),(fffffd60,A4) */
    c->pc = 0x00013596u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_wr16(c, m, (c->a[4] - 0x2a0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1359C:
    /* 0001359c   4  addq.w #1,(fffffffe,A5) */
    c->pc = 0x0001359cu;
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_135A0:
    /* 000135a0   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x000135a0u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_135A4:
    /* 000135a4   4  cmp.w (fffffd58,A4),D0 */
    c->pc = 0x000135a4u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a8u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_135A8:
    /* 000135a8   2  blt 00013544 */
    c->pc = 0x000135a8u;
    if (rc_cond(c, 13)) { rc_tick(); goto L_13544; }

L_135AA:
    /* 000135aa   4  move.w (fffffd60,A4),D0 */
    c->pc = 0x000135aau;
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_135AE:
    /* 000135ae   2  ext.l D0 */
    c->pc = 0x000135aeu;
    rc_ext_l(c, 0);

L_135B0:
    /* 000135b0   4  divs.w #a,D0 */
    c->pc = 0x000135b0u;
    t0 = 0x0000000au;
    rc_divs(c, m, 0, t0);

L_135B4:
    /* 000135b4   4  muls.w #a,D0 */
    c->pc = 0x000135b4u;
    t0 = 0x0000000au;
    rc_muls(c, 0, t0);

L_135B8:
    /* 000135b8   4  move.w D0,(fffffd5c,A4) */
    c->pc = 0x000135b8u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x2a4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_135BC:
    /* 000135bc   4  move.w (fffffd5c,A4),D0 */
    c->pc = 0x000135bcu;
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_135C0:
    /* 000135c0   4  add.w #a,D0 */
    c->pc = 0x000135c0u;
    t0 = 0x0000000au;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_135C4:
    /* 000135c4   4  move.w D0,(fffffd5e,A4) */
    c->pc = 0x000135c4u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x2a2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_135C8:
    /* 000135c8   4  move.w (fffffd5c,A4),D0 */
    c->pc = 0x000135c8u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_135CC:
    /* 000135cc   2  ext.l D0 */
    c->pc = 0x000135ccu;
    rc_ext_l(c, 0);

L_135CE:
    /* 000135ce   4  divs.w #a,D0 */
    c->pc = 0x000135ceu;
    t0 = 0x0000000au;
    rc_divs(c, m, 0, t0);

L_135D2:
    /* 000135d2   4  move.w D0,(fffffd62,A4) */
    c->pc = 0x000135d2u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x29eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_135D6:
    /* 000135d6   2  unlk A5 */
    c->pc = 0x000135d6u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_135D8:
    /* 000135d8   2  rts */
    c->pc = 0x000135d8u;
    rc_ret(c, m);
    return;

}
