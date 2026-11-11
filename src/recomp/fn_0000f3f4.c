/* fn_0000f3f4 - 176 byte(s), 52 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000f3f4(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000f3f4u): goto L_F3F4;
    case RC_ADDR(0x0000f3f6u): goto L_F3F6;
    case RC_ADDR(0x0000f3f8u): goto L_F3F8;
    case RC_ADDR(0x0000f3fcu): goto L_F3FC;
    case RC_ADDR(0x0000f400u): goto L_F400;
    case RC_ADDR(0x0000f404u): goto L_F404;
    case RC_ADDR(0x0000f406u): goto L_F406;
    case RC_ADDR(0x0000f40cu): goto L_F40C;
    case RC_ADDR(0x0000f40eu): goto L_F40E;
    case RC_ADDR(0x0000f412u): goto L_F412;
    case RC_ADDR(0x0000f414u): goto L_F414;
    case RC_ADDR(0x0000f416u): goto L_F416;
    case RC_ADDR(0x0000f41au): goto L_F41A;
    case RC_ADDR(0x0000f41eu): goto L_F41E;
    case RC_ADDR(0x0000f422u): goto L_F422;
    case RC_ADDR(0x0000f426u): goto L_F426;
    case RC_ADDR(0x0000f428u): goto L_F428;
    case RC_ADDR(0x0000f42au): goto L_F42A;
    case RC_ADDR(0x0000f42cu): goto L_F42C;
    case RC_ADDR(0x0000f42eu): goto L_F42E;
    case RC_ADDR(0x0000f434u): goto L_F434;
    case RC_ADDR(0x0000f436u): goto L_F436;
    case RC_ADDR(0x0000f438u): goto L_F438;
    case RC_ADDR(0x0000f43eu): goto L_F43E;
    case RC_ADDR(0x0000f440u): goto L_F440;
    case RC_ADDR(0x0000f444u): goto L_F444;
    case RC_ADDR(0x0000f448u): goto L_F448;
    case RC_ADDR(0x0000f44cu): goto L_F44C;
    case RC_ADDR(0x0000f44eu): goto L_F44E;
    case RC_ADDR(0x0000f452u): goto L_F452;
    case RC_ADDR(0x0000f454u): goto L_F454;
    case RC_ADDR(0x0000f45au): goto L_F45A;
    case RC_ADDR(0x0000f45eu): goto L_F45E;
    case RC_ADDR(0x0000f460u): goto L_F460;
    case RC_ADDR(0x0000f464u): goto L_F464;
    case RC_ADDR(0x0000f46au): goto L_F46A;
    case RC_ADDR(0x0000f470u): goto L_F470;
    case RC_ADDR(0x0000f472u): goto L_F472;
    case RC_ADDR(0x0000f476u): goto L_F476;
    case RC_ADDR(0x0000f47au): goto L_F47A;
    case RC_ADDR(0x0000f47eu): goto L_F47E;
    case RC_ADDR(0x0000f482u): goto L_F482;
    case RC_ADDR(0x0000f486u): goto L_F486;
    case RC_ADDR(0x0000f488u): goto L_F488;
    case RC_ADDR(0x0000f48au): goto L_F48A;
    case RC_ADDR(0x0000f48cu): goto L_F48C;
    case RC_ADDR(0x0000f490u): goto L_F490;
    case RC_ADDR(0x0000f494u): goto L_F494;
    case RC_ADDR(0x0000f496u): goto L_F496;
    case RC_ADDR(0x0000f49au): goto L_F49A;
    case RC_ADDR(0x0000f49cu): goto L_F49C;
    case RC_ADDR(0x0000f4a2u): goto L_F4A2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_F3F4:
    /* 0000f3f4   2  clr.w D6 */
    c->pc = RC_ADDR(0x0000f3f4u);
    rc_step(c, m, 4);
    rc_d_set(c, 6, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_F3F6:
    /* 0000f3f6   2  clr.l D7 */
    c->pc = RC_ADDR(0x0000f3f6u);
    rc_step(c, m, 6);
    rc_d_set(c, 7, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_F3F8:
    /* 0000f3f8   4  movea.l (6,A6),A0 */
    c->pc = RC_ADDR(0x0000f3f8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[6] + 0x6u));
    c->a[0] = t0;

L_F3FC:
    /* 0000f3fc   4  lea (3e,A6),A1 */
    c->pc = RC_ADDR(0x0000f3fcu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[6] + 0x3eu);

L_F400:
    /* 0000f400   4  tst.b (0,A1) */
    c->pc = RC_ADDR(0x0000f400u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[1] + 0x0u));
    rc_set_nzvc(c, t0, RC_B);

L_F404:
    /* 0000f404   2  bne 0000f40e */
    c->pc = RC_ADDR(0x0000f404u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_F40E;

L_F406:
    /* 0000f406   6  cmpi.b #0,(1,A1) */
    c->pc = RC_ADDR(0x0000f406u);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[1] + 0x1u));
    rc_cmp(c, RC_B, t0, 0x00000000u);

L_F40C:
    /* 0000f40c   2  beq 0000f42c */
    c->pc = RC_ADDR(0x0000f40cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_F42C;

L_F40E:
    /* 0000f40e   4  move.l (4,A1),D0 */
    c->pc = RC_ADDR(0x0000f40eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[1] + 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F412:
    /* 0000f412   2  beq 0000f440 */
    c->pc = RC_ADDR(0x0000f412u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_F440;

L_F414:
    /* 0000f414   2  movea.l D0,A4 */
    c->pc = RC_ADDR(0x0000f414u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[4] = t0;

L_F416:
    /* 0000f416   4  movea.l (0,A4),A4 */
    c->pc = RC_ADDR(0x0000f416u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x0u));
    c->a[4] = t0;

L_F41A:
    /* 0000f41a   4  movem.l { D1 D6 D7 A0 A1 },-(SP) */
    c->pc = RC_ADDR(0x0000f41au);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[0]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    c->a[7] = t3;

L_F41E:
    /* 0000f41e   4  jsr (0,A4) */
    c->pc = RC_ADDR(0x0000f41eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000f422u));
    rc_depth++;
    t3 = (c->a[4] + 0x0u);
    c->pc = t3;
    return;

L_F422:
    /* 0000f422   4  movem.l (SP)+,{ D6 D7 A0 A1 A6 } */
    c->pc = RC_ADDR(0x0000f422u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
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
    c->a[6] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_F426:
    /* 0000f426   2  tst.l D0 */
    c->pc = RC_ADDR(0x0000f426u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_F428:
    /* 0000f428   2  beq 0000f42c */
    c->pc = RC_ADDR(0x0000f428u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_F42C;

L_F42A:
    /* 0000f42a   2  bset D7,D6 */
    c->pc = RC_ADDR(0x0000f42au);
    rc_step(c, m, 8);
    t4 = c->d[7] & 31u;
    t0 = rc_d_get(c, 6, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 6, RC_L, t2);

L_F42C:
    /* 0000f42c   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0000f42cu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_F42E:
    /* 0000f42e   6  cmpi.b #1,(0,A1) */
    c->pc = RC_ADDR(0x0000f42eu);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[1] + 0x0u));
    rc_cmp(c, RC_B, t0, 0x00000001u);

L_F434:
    /* 0000f434   2  beq 0000f440 */
    c->pc = RC_ADDR(0x0000f434u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_F440;

L_F436:
    /* 0000f436   2  moveq #2,D0 */
    c->pc = RC_ADDR(0x0000f436u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000002u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_F438:
    /* 0000f438   6  cmpi.b #2,(0,A1) */
    c->pc = RC_ADDR(0x0000f438u);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[1] + 0x0u));
    rc_cmp(c, RC_B, t0, 0x00000002u);

L_F43E:
    /* 0000f43e   2  bne 0000f444 */
    c->pc = RC_ADDR(0x0000f43eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_F444;

L_F440:
    /* 0000f440   4  move.b D0,(1,A1) */
    c->pc = RC_ADDR(0x0000f440u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_B);
    rc_wr8(c, m, (c->a[1] + 0x1u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_F444:
    /* 0000f444   4  clr.b (0,A1) */
    c->pc = RC_ADDR(0x0000f444u);
    rc_step(c, m, 16);
    rc_wr8(c, m, (c->a[1] + 0x0u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_F448:
    /* 0000f448   4  adda.w #16,A1 */
    c->pc = RC_ADDR(0x0000f448u);
    rc_step(c, m, 14);
    t0 = 0x00000016u;
    c->a[1] += rc_ext(t0, RC_W);

L_F44C:
    /* 0000f44c   2  addq.w #1,D7 */
    c->pc = RC_ADDR(0x0000f44cu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 7, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 7, RC_W, t2);

L_F44E:
    /* 0000f44e   4  cmpi.w #4,D7 */
    c->pc = RC_ADDR(0x0000f44eu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 7, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_F452:
    /* 0000f452   2  bne 0000f400 */
    c->pc = RC_ADDR(0x0000f452u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_F400; }

L_F454:
    /* 0000f454   6  move.w D6,(00dff096).l */
    c->pc = RC_ADDR(0x0000f454u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 6, RC_W);
    rc_wr16(c, m, 0x00dff096u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F45A:
    /* 0000f45a   4  move.w #8000,D6 */
    c->pc = RC_ADDR(0x0000f45au);
    rc_step(c, m, 8);
    t0 = 0x00008000u;
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F45E:
    /* 0000f45e   2  clr.l D7 */
    c->pc = RC_ADDR(0x0000f45eu);
    rc_step(c, m, 6);
    rc_d_set(c, 7, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_F460:
    /* 0000f460   4  lea (3e,A6),A1 */
    c->pc = RC_ADDR(0x0000f460u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[6] + 0x3eu);

L_F464:
    /* 0000f464   6  lea (00dff0a0).l,A2 */
    c->pc = RC_ADDR(0x0000f464u);
    rc_step(c, m, 12);
    c->a[2] = 0x00dff0a0u;

L_F46A:
    /* 0000f46a   6  cmpi.b #0,(1,A1) */
    c->pc = RC_ADDR(0x0000f46au);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[1] + 0x1u));
    rc_cmp(c, RC_B, t0, 0x00000000u);

L_F470:
    /* 0000f470   2  beq 0000f48c */
    c->pc = RC_ADDR(0x0000f470u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_F48C;

L_F472:
    /* 0000f472   4  movea.l (4,A1),A4 */
    c->pc = RC_ADDR(0x0000f472u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[1] + 0x4u));
    c->a[4] = t0;

L_F476:
    /* 0000f476   4  movea.l (0,A4),A4 */
    c->pc = RC_ADDR(0x0000f476u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x0u));
    c->a[4] = t0;

L_F47A:
    /* 0000f47a   4  movem.l { D1 D5 D6 D7 A0 A1 },-(SP) */
    c->pc = RC_ADDR(0x0000f47au);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[6]);
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
    c->a[7] = t3;

L_F47E:
    /* 0000f47e   4  jsr (4,A4) */
    c->pc = RC_ADDR(0x0000f47eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000f482u));
    rc_depth++;
    t3 = (c->a[4] + 0x4u);
    c->pc = t3;
    return;

L_F482:
    /* 0000f482   4  movem.l (SP)+,{ D6 D7 A0 A1 A2 A6 } */
    c->pc = RC_ADDR(0x0000f482u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
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
    c->a[6] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_F486:
    /* 0000f486   2  tst.l D0 */
    c->pc = RC_ADDR(0x0000f486u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_F488:
    /* 0000f488   2  beq 0000f48c */
    c->pc = RC_ADDR(0x0000f488u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_F48C;

L_F48A:
    /* 0000f48a   2  bset D7,D6 */
    c->pc = RC_ADDR(0x0000f48au);
    rc_step(c, m, 8);
    t4 = c->d[7] & 31u;
    t0 = rc_d_get(c, 6, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 6, RC_L, t2);

L_F48C:
    /* 0000f48c   4  adda.w #10,A2 */
    c->pc = RC_ADDR(0x0000f48cu);
    rc_step(c, m, 14);
    t0 = 0x00000010u;
    c->a[2] += rc_ext(t0, RC_W);

L_F490:
    /* 0000f490   4  adda.w #16,A1 */
    c->pc = RC_ADDR(0x0000f490u);
    rc_step(c, m, 14);
    t0 = 0x00000016u;
    c->a[1] += rc_ext(t0, RC_W);

L_F494:
    /* 0000f494   2  addq.w #1,D7 */
    c->pc = RC_ADDR(0x0000f494u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 7, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 7, RC_W, t2);

L_F496:
    /* 0000f496   4  cmpi.w #4,D7 */
    c->pc = RC_ADDR(0x0000f496u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 7, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_F49A:
    /* 0000f49a   2  bne 0000f46a */
    c->pc = RC_ADDR(0x0000f49au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_F46A; }

L_F49C:
    /* 0000f49c   6  move.w D6,(00dff096).l */
    c->pc = RC_ADDR(0x0000f49cu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 6, RC_W);
    rc_wr16(c, m, 0x00dff096u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F4A2:
    /* 0000f4a2   2  rts */
    c->pc = RC_ADDR(0x0000f4a2u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
