/* fn_0000f4c0 - 172 byte(s), 56 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000f4c0(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000f4c0u): goto L_F4C0;
    case RC_ADDR(0x0000f4c4u): goto L_F4C4;
    case RC_ADDR(0x0000f4c6u): goto L_F4C6;
    case RC_ADDR(0x0000f4cau): goto L_F4CA;
    case RC_ADDR(0x0000f4ccu): goto L_F4CC;
    case RC_ADDR(0x0000f4d0u): goto L_F4D0;
    case RC_ADDR(0x0000f4d4u): goto L_F4D4;
    case RC_ADDR(0x0000f4d6u): goto L_F4D6;
    case RC_ADDR(0x0000f4dau): goto L_F4DA;
    case RC_ADDR(0x0000f4deu): goto L_F4DE;
    case RC_ADDR(0x0000f4e0u): goto L_F4E0;
    case RC_ADDR(0x0000f4e2u): goto L_F4E2;
    case RC_ADDR(0x0000f4e6u): goto L_F4E6;
    case RC_ADDR(0x0000f4e8u): goto L_F4E8;
    case RC_ADDR(0x0000f4eau): goto L_F4EA;
    case RC_ADDR(0x0000f4ecu): goto L_F4EC;
    case RC_ADDR(0x0000f4eeu): goto L_F4EE;
    case RC_ADDR(0x0000f4f0u): goto L_F4F0;
    case RC_ADDR(0x0000f4f4u): goto L_F4F4;
    case RC_ADDR(0x0000f4f8u): goto L_F4F8;
    case RC_ADDR(0x0000f4fau): goto L_F4FA;
    case RC_ADDR(0x0000f4feu): goto L_F4FE;
    case RC_ADDR(0x0000f500u): goto L_F500;
    case RC_ADDR(0x0000f502u): goto L_F502;
    case RC_ADDR(0x0000f504u): goto L_F504;
    case RC_ADDR(0x0000f508u): goto L_F508;
    case RC_ADDR(0x0000f50cu): goto L_F50C;
    case RC_ADDR(0x0000f510u): goto L_F510;
    case RC_ADDR(0x0000f512u): goto L_F512;
    case RC_ADDR(0x0000f516u): goto L_F516;
    case RC_ADDR(0x0000f518u): goto L_F518;
    case RC_ADDR(0x0000f51au): goto L_F51A;
    case RC_ADDR(0x0000f51cu): goto L_F51C;
    case RC_ADDR(0x0000f520u): goto L_F520;
    case RC_ADDR(0x0000f522u): goto L_F522;
    case RC_ADDR(0x0000f526u): goto L_F526;
    case RC_ADDR(0x0000f528u): goto L_F528;
    case RC_ADDR(0x0000f52cu): goto L_F52C;
    case RC_ADDR(0x0000f52eu): goto L_F52E;
    case RC_ADDR(0x0000f534u): goto L_F534;
    case RC_ADDR(0x0000f536u): goto L_F536;
    case RC_ADDR(0x0000f53au): goto L_F53A;
    case RC_ADDR(0x0000f53eu): goto L_F53E;
    case RC_ADDR(0x0000f542u): goto L_F542;
    case RC_ADDR(0x0000f544u): goto L_F544;
    case RC_ADDR(0x0000f546u): goto L_F546;
    case RC_ADDR(0x0000f54au): goto L_F54A;
    case RC_ADDR(0x0000f54eu): goto L_F54E;
    case RC_ADDR(0x0000f552u): goto L_F552;
    case RC_ADDR(0x0000f556u): goto L_F556;
    case RC_ADDR(0x0000f55au): goto L_F55A;
    case RC_ADDR(0x0000f560u): goto L_F560;
    case RC_ADDR(0x0000f562u): goto L_F562;
    case RC_ADDR(0x0000f566u): goto L_F566;
    case RC_ADDR(0x0000f568u): goto L_F568;
    case RC_ADDR(0x0000f56au): goto L_F56A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_F4C0:
    /* 0000f4c0   4  movem.l { D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 },-(SP) */
    c->pc = RC_ADDR(0x0000f4c0u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[4]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[0]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[1]);
    c->a[7] = t3;

L_F4C4:
    /* 0000f4c4   2  move.l A0,D3 */
    c->pc = RC_ADDR(0x0000f4c4u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 0, RC_L);
    rc_d_set(c, 3, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F4C6:
    /* 0000f4c6   4  beq 0000f568 */
    c->pc = RC_ADDR(0x0000f4c6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_F568;

L_F4CA:
    /* 0000f4ca   2  movea.l D3,A0 */
    c->pc = RC_ADDR(0x0000f4cau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 3, RC_L);
    c->a[0] = t0;

L_F4CC:
    /* 0000f4cc   4  movea.l (6,A6),A5 */
    c->pc = RC_ADDR(0x0000f4ccu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[6] + 0x6u));
    c->a[5] = t0;

L_F4D0:
    /* 0000f4d0   4  lea (3e,A6),A1 */
    c->pc = RC_ADDR(0x0000f4d0u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[6] + 0x3eu);

L_F4D4:
    /* 0000f4d4   2  ext.w D0 */
    c->pc = RC_ADDR(0x0000f4d4u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_F4D6:
    /* 0000f4d6   4  bpl 0000f526 */
    c->pc = RC_ADDR(0x0000f4d6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 10)) goto L_F526;

L_F4DA:
    /* 0000f4da   4  move.b #0,D5 */
    c->pc = RC_ADDR(0x0000f4dau);
    rc_step(c, m, 8);
    t0 = 0x00000000u;
    rc_d_set(c, 5, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_F4DE:
    /* 0000f4de   2  moveq #4,D7 */
    c->pc = RC_ADDR(0x0000f4deu);
    rc_step(c, m, 4);
    c->d[7] = 0x00000004u;
    rc_set_nzvc(c, c->d[7], RC_L);

L_F4E0:
    /* 0000f4e0   2  move.w D7,D6 */
    c->pc = RC_ADDR(0x0000f4e0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F4E2:
    /* 0000f4e2   4  move.w (36,A6),D0 */
    c->pc = RC_ADDR(0x0000f4e2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[6] + 0x36u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F4E6:
    /* 0000f4e6   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x0000f4e6u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_F4E8:
    /* 0000f4e8   2  cmp.w D7,D0 */
    c->pc = RC_ADDR(0x0000f4e8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_F4EA:
    /* 0000f4ea   2  bcs 0000f4ee */
    c->pc = RC_ADDR(0x0000f4eau);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) goto L_F4EE;

L_F4EC:
    /* 0000f4ec   2  clr.w D0 */
    c->pc = RC_ADDR(0x0000f4ecu);
    rc_step(c, m, 4);
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_F4EE:
    /* 0000f4ee   2  move.w D0,D3 */
    c->pc = RC_ADDR(0x0000f4eeu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F4F0:
    /* 0000f4f0   4  mulu.w #16,D3 */
    c->pc = RC_ADDR(0x0000f4f0u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_mulu(c, 3, t0);

L_F4F4:
    /* 0000f4f4   4  tst.b (0,A1,D3.w) */
    c->pc = RC_ADDR(0x0000f4f4u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd8(c, m, (c->a[1] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_B);

L_F4F8:
    /* 0000f4f8   2  bne 0000f500 */
    c->pc = RC_ADDR(0x0000f4f8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_F500;

L_F4FA:
    /* 0000f4fa   4  cmp.b (1,A1,D3.w),D5 */
    c->pc = RC_ADDR(0x0000f4fau);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd8(c, m, (c->a[1] + 0x1u + t4));
    t1 = rc_d_get(c, 5, RC_B);
    rc_cmp(c, RC_B, t1, t0);

L_F4FE:
    /* 0000f4fe   2  beq 0000f512 */
    c->pc = RC_ADDR(0x0000f4feu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_F512;

L_F500:
    /* 0000f500   2  subq.w #1,D6 */
    c->pc = RC_ADDR(0x0000f500u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 6, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 6, RC_W, t2);

L_F502:
    /* 0000f502   2  bne 0000f4e6 */
    c->pc = RC_ADDR(0x0000f502u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_F4E6; }

L_F504:
    /* 0000f504   4  cmpi.b #0,D5 */
    c->pc = RC_ADDR(0x0000f504u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 5, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000000u);

L_F508:
    /* 0000f508   4  bne 0000f568 */
    c->pc = RC_ADDR(0x0000f508u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_F568;

L_F50C:
    /* 0000f50c   4  move.b #2,D5 */
    c->pc = RC_ADDR(0x0000f50cu);
    rc_step(c, m, 8);
    t0 = 0x00000002u;
    rc_d_set(c, 5, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_F510:
    /* 0000f510   2  bra 0000f4e0 */
    c->pc = RC_ADDR(0x0000f510u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_F4E0;

L_F512:
    /* 0000f512   4  tst.w (a,A6) */
    c->pc = RC_ADDR(0x0000f512u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[6] + 0xau));
    rc_set_nzvc(c, t0, RC_W);

L_F516:
    /* 0000f516   2  beq 0000f522 */
    c->pc = RC_ADDR(0x0000f516u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_F522;

L_F518:
    /* 0000f518   2  move.w D0,D3 */
    c->pc = RC_ADDR(0x0000f518u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F51A:
    /* 0000f51a   2  asl.w #2,D3 */
    c->pc = RC_ADDR(0x0000f51au);
    rc_step(c, m, 6);
    rc_d_set(c, 3, RC_W, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 3, RC_W), RC_W));

L_F51C:
    /* 0000f51c   4  tst.l (26,A6,D3.w) */
    c->pc = RC_ADDR(0x0000f51cu);
    rc_step(c, m, 18);
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd32(c, m, (c->a[6] + 0x26u + t4));
    rc_set_nzvc(c, t0, RC_L);

L_F520:
    /* 0000f520   2  bne 0000f500 */
    c->pc = RC_ADDR(0x0000f520u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_F500; }

L_F522:
    /* 0000f522   4  move.w D0,(36,A6) */
    c->pc = RC_ADDR(0x0000f522u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[6] + 0x36u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_F526:
    /* 0000f526   2  move.w D0,D3 */
    c->pc = RC_ADDR(0x0000f526u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F528:
    /* 0000f528   4  mulu.w #16,D3 */
    c->pc = RC_ADDR(0x0000f528u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_mulu(c, 3, t0);

L_F52C:
    /* 0000f52c   2  adda.w D3,A1 */
    c->pc = RC_ADDR(0x0000f52cu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 3, RC_W);
    c->a[1] += rc_ext(t0, RC_W);

L_F52E:
    /* 0000f52e   6  cmpi.b #0,(1,A1) */
    c->pc = RC_ADDR(0x0000f52eu);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[1] + 0x1u));
    rc_cmp(c, RC_B, t0, 0x00000000u);

L_F534:
    /* 0000f534   2  beq 0000f54a */
    c->pc = RC_ADDR(0x0000f534u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_F54A;

L_F536:
    /* 0000f536   4  movea.l (0,A0),A2 */
    c->pc = RC_ADDR(0x0000f536u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u));
    c->a[2] = t0;

L_F53A:
    /* 0000f53a   4  movea.l (4,A1),A3 */
    c->pc = RC_ADDR(0x0000f53au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[1] + 0x4u));
    c->a[3] = t0;

L_F53E:
    /* 0000f53e   4  movea.l (0,A3),A3 */
    c->pc = RC_ADDR(0x0000f53eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[3] + 0x0u));
    c->a[3] = t0;

L_F542:
    /* 0000f542   2  cmpa.l A3,A2 */
    c->pc = RC_ADDR(0x0000f542u);
    rc_step(c, m, 6);
    t0 = rc_a_get(c, 3, RC_L);
    rc_cmp(c, RC_L, c->a[2], t0);

L_F544:
    /* 0000f544   2  beq 0000f54a */
    c->pc = RC_ADDR(0x0000f544u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_F54A;

L_F546:
    /* 0000f546   4  bsr 0000f5b8 */
    c->pc = RC_ADDR(0x0000f546u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000f54au));
    rc_depth++;
    c->pc = RC_ADDR(0x0000f5b8u);
    return;

L_F54A:
    /* 0000f54a   4  move.l A0,(4,A1) */
    c->pc = RC_ADDR(0x0000f54au);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[1] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_F54E:
    /* 0000f54e   4  move.b D1,(3,A1) */
    c->pc = RC_ADDR(0x0000f54eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_B);
    rc_wr8(c, m, (c->a[1] + 0x3u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_F552:
    /* 0000f552   4  andi.w #ff,D2 */
    c->pc = RC_ADDR(0x0000f552u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 & 0x000000ffu;
    rc_d_set(c, 2, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_F556:
    /* 0000f556   4  move.w D2,(8,A1) */
    c->pc = RC_ADDR(0x0000f556u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, (c->a[1] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_F55A:
    /* 0000f55a   6  move.b #1,(0,A1) */
    c->pc = RC_ADDR(0x0000f55au);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr8(c, m, (c->a[1] + 0x0u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_F560:
    /* 0000f560   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000f560u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_F562:
    /* 0000f562   4  movem.l (SP)+,{ D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 } */
    c->pc = RC_ADDR(0x0000f562u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[3] = t0;
    t3 += 4u;
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
    c->a[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[6] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_F566:
    /* 0000f566   2  rts */
    c->pc = RC_ADDR(0x0000f566u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_F568:
    /* 0000f568   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x0000f568u);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_F56A:
    /* 0000f56a   2  bra 0000f562 */
    c->pc = RC_ADDR(0x0000f56au);
    rc_step(c, m, 10);
    rc_tick();
    goto L_F562;

}
