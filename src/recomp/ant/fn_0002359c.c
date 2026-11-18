/* fn_0002359c - 140 byte(s), 44 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0002359c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0002359cu): goto L_2359C;
    case RC_ADDR(0x000235a0u): goto L_235A0;
    case RC_ADDR(0x000235a4u): goto L_235A4;
    case RC_ADDR(0x000235a8u): goto L_235A8;
    case RC_ADDR(0x000235acu): goto L_235AC;
    case RC_ADDR(0x000235aeu): goto L_235AE;
    case RC_ADDR(0x000235b4u): goto L_235B4;
    case RC_ADDR(0x000235b6u): goto L_235B6;
    case RC_ADDR(0x000235b8u): goto L_235B8;
    case RC_ADDR(0x000235bau): goto L_235BA;
    case RC_ADDR(0x000235beu): goto L_235BE;
    case RC_ADDR(0x000235c0u): goto L_235C0;
    case RC_ADDR(0x000235c2u): goto L_235C2;
    case RC_ADDR(0x000235c8u): goto L_235C8;
    case RC_ADDR(0x000235ccu): goto L_235CC;
    case RC_ADDR(0x000235d0u): goto L_235D0;
    case RC_ADDR(0x000235d2u): goto L_235D2;
    case RC_ADDR(0x000235d4u): goto L_235D4;
    case RC_ADDR(0x000235d6u): goto L_235D6;
    case RC_ADDR(0x000235d8u): goto L_235D8;
    case RC_ADDR(0x000235dau): goto L_235DA;
    case RC_ADDR(0x000235deu): goto L_235DE;
    case RC_ADDR(0x000235e0u): goto L_235E0;
    case RC_ADDR(0x000235e2u): goto L_235E2;
    case RC_ADDR(0x000235e4u): goto L_235E4;
    case RC_ADDR(0x000235eau): goto L_235EA;
    case RC_ADDR(0x000235f0u): goto L_235F0;
    case RC_ADDR(0x000235f6u): goto L_235F6;
    case RC_ADDR(0x000235fau): goto L_235FA;
    case RC_ADDR(0x000235feu): goto L_235FE;
    case RC_ADDR(0x00023600u): goto L_23600;
    case RC_ADDR(0x00023604u): goto L_23604;
    case RC_ADDR(0x00023608u): goto L_23608;
    case RC_ADDR(0x0002360cu): goto L_2360C;
    case RC_ADDR(0x0002360eu): goto L_2360E;
    case RC_ADDR(0x00023610u): goto L_23610;
    case RC_ADDR(0x00023612u): goto L_23612;
    case RC_ADDR(0x00023616u): goto L_23616;
    case RC_ADDR(0x00023618u): goto L_23618;
    case RC_ADDR(0x0002361au): goto L_2361A;
    case RC_ADDR(0x0002361eu): goto L_2361E;
    case RC_ADDR(0x00023622u): goto L_23622;
    case RC_ADDR(0x00023624u): goto L_23624;
    case RC_ADDR(0x00023626u): goto L_23626;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2359C:
    /* 0002359c   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0002359cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_235A0:
    /* 000235a0   4  movem.l { D5 A3 },-(SP) */
    c->pc = RC_ADDR(0x000235a0u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_235A4:
    /* 000235a4   4  pea (ffffffff).l */
    c->pc = RC_ADDR(0x000235a4u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0xffffffffu);

L_235A8:
    /* 000235a8   4  jsr (0002367a) */
    c->pc = RC_ADDR(0x000235a8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000235acu));
    rc_depth++;
    c->pc = RC_ADDR(0x0002367au);
    return;

L_235AC:
    /* 000235ac   2  move.l D0,D4 */
    c->pc = RC_ADDR(0x000235acu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_235AE:
    /* 000235ae   6  cmp.l #ffffffff,D0 */
    c->pc = RC_ADDR(0x000235aeu);
    rc_step(c, m, 14);
    t0 = 0xffffffffu;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_235B4:
    /* 000235b4   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000235b4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_235B6:
    /* 000235b6   2  bne 000235c2 */
    c->pc = RC_ADDR(0x000235b6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_235C2;

L_235B8:
    /* 000235b8   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000235b8u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_235BA:
    /* 000235ba   4  movem.l (SP)+,{ D4 A2 } */
    c->pc = RC_ADDR(0x000235bau);
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
    c->a[7] = t3;

L_235BE:
    /* 000235be   2  unlk A5 */
    c->pc = RC_ADDR(0x000235beu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_235C0:
    /* 000235c0   2  rts */
    c->pc = RC_ADDR(0x000235c0u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_235C2:
    /* 000235c2   6  pea (00010001).l */
    c->pc = RC_ADDR(0x000235c2u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010001u);

L_235C8:
    /* 000235c8   4  pea (00000022).l */
    c->pc = RC_ADDR(0x000235c8u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000022u);

L_235CC:
    /* 000235cc   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x000235ccu);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x000235d0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_235D0:
    /* 000235d0   2  movea.l D0,A2 */
    c->pc = RC_ADDR(0x000235d0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[2] = t0;

L_235D2:
    /* 000235d2   2  tst.l D0 */
    c->pc = RC_ADDR(0x000235d2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_235D4:
    /* 000235d4   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000235d4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_235D6:
    /* 000235d6   2  bne 000235e4 */
    c->pc = RC_ADDR(0x000235d6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_235E4;

L_235D8:
    /* 000235d8   2  move.l D4,-(A7) */
    c->pc = RC_ADDR(0x000235d8u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_235DA:
    /* 000235da   4  jsr (00023782) */
    c->pc = RC_ADDR(0x000235dau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000235deu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023782u);
    return;

L_235DE:
    /* 000235de   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000235deu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_235E0:
    /* 000235e0   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000235e0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_235E2:
    /* 000235e2   2  bra 000235ba */
    c->pc = RC_ADDR(0x000235e2u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_235BA;

L_235E4:
    /* 000235e4   6  move.l (8,A5),(a,A2) */
    c->pc = RC_ADDR(0x000235e4u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[2] + 0xau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_235EA:
    /* 000235ea   6  move.b (f,A5),(9,A2) */
    c->pc = RC_ADDR(0x000235eau);
    rc_step(c, m, 20);
    t0 = rc_rd8(c, m, (c->a[5] + 0xfu));
    rc_wr8(c, m, (c->a[2] + 0x9u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_235F0:
    /* 000235f0   6  move.b #4,(8,A2) */
    c->pc = RC_ADDR(0x000235f0u);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr8(c, m, (c->a[2] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_235F6:
    /* 000235f6   4  clr.b (e,A2) */
    c->pc = RC_ADDR(0x000235f6u);
    rc_step(c, m, 16);
    rc_wr8(c, m, (c->a[2] + 0xeu), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_235FA:
    /* 000235fa   4  move.b D4,(f,A2) */
    c->pc = RC_ADDR(0x000235fau);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 4, RC_B);
    rc_wr8(c, m, (c->a[2] + 0xfu), t0);
    rc_set_nzvc(c, t0, RC_B);

L_235FE:
    /* 000235fe   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x000235feu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_23600:
    /* 00023600   4  jsr (ffff8362,A4) */
    c->pc = RC_ADDR(0x00023600u);
    rc_step(c, m, 18);
    /* vector 144 */
    rc_push32(c, m, RC_ADDR(0x00023604u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e58u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023756u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0002375au);
    return;

L_23604:
    /* 00023604   4  move.l D0,(10,A2) */
    c->pc = RC_ADDR(0x00023604u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[2] + 0x10u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_23608:
    /* 00023608   4  tst.l (8,A5) */
    c->pc = RC_ADDR(0x00023608u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_set_nzvc(c, t0, RC_L);

L_2360C:
    /* 0002360c   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0002360cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_2360E:
    /* 0002360e   2  beq 0002361a */
    c->pc = RC_ADDR(0x0002360eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2361A;

L_23610:
    /* 00023610   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x00023610u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_23612:
    /* 00023612   4  jsr (0002366e) */
    c->pc = RC_ADDR(0x00023612u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00023616u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002366eu);
    return;

L_23616:
    /* 00023616   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00023616u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_23618:
    /* 00023618   2  bra 00023624 */
    c->pc = RC_ADDR(0x00023618u);
    rc_step(c, m, 10);
    goto L_23624;

L_2361A:
    /* 0002361a   4  pea (14,A2) */
    c->pc = RC_ADDR(0x0002361au);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[2] + 0x14u));

L_2361E:
    /* 0002361e   4  jsr (0002379a) */
    c->pc = RC_ADDR(0x0002361eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00023622u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002379au);
    return;

L_23622:
    /* 00023622   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00023622u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_23624:
    /* 00023624   2  move.l A2,D0 */
    c->pc = RC_ADDR(0x00023624u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_23626:
    /* 00023626   2  bra 000235ba */
    c->pc = RC_ADDR(0x00023626u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_235BA;

}
