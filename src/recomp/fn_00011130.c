/* fn_00011130 - 216 byte(s), 57 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00011130(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00011130u): goto L_11130;
    case RC_ADDR(0x00011134u): goto L_11134;
    case RC_ADDR(0x00011138u): goto L_11138;
    case RC_ADDR(0x0001113cu): goto L_1113C;
    case RC_ADDR(0x0001113eu): goto L_1113E;
    case RC_ADDR(0x00011140u): goto L_11140;
    case RC_ADDR(0x00011142u): goto L_11142;
    case RC_ADDR(0x00011148u): goto L_11148;
    case RC_ADDR(0x0001114eu): goto L_1114E;
    case RC_ADDR(0x00011156u): goto L_11156;
    case RC_ADDR(0x0001115eu): goto L_1115E;
    case RC_ADDR(0x00011162u): goto L_11162;
    case RC_ADDR(0x00011164u): goto L_11164;
    case RC_ADDR(0x00011166u): goto L_11166;
    case RC_ADDR(0x00011168u): goto L_11168;
    case RC_ADDR(0x0001116cu): goto L_1116C;
    case RC_ADDR(0x00011170u): goto L_11170;
    case RC_ADDR(0x00011172u): goto L_11172;
    case RC_ADDR(0x00011176u): goto L_11176;
    case RC_ADDR(0x00011178u): goto L_11178;
    case RC_ADDR(0x0001117au): goto L_1117A;
    case RC_ADDR(0x0001117cu): goto L_1117C;
    case RC_ADDR(0x00011180u): goto L_11180;
    case RC_ADDR(0x00011184u): goto L_11184;
    case RC_ADDR(0x00011186u): goto L_11186;
    case RC_ADDR(0x0001118eu): goto L_1118E;
    case RC_ADDR(0x00011196u): goto L_11196;
    case RC_ADDR(0x00011198u): goto L_11198;
    case RC_ADDR(0x0001119au): goto L_1119A;
    case RC_ADDR(0x000111a0u): goto L_111A0;
    case RC_ADDR(0x000111a4u): goto L_111A4;
    case RC_ADDR(0x000111a6u): goto L_111A6;
    case RC_ADDR(0x000111aau): goto L_111AA;
    case RC_ADDR(0x000111acu): goto L_111AC;
    case RC_ADDR(0x000111aeu): goto L_111AE;
    case RC_ADDR(0x000111b2u): goto L_111B2;
    case RC_ADDR(0x000111b6u): goto L_111B6;
    case RC_ADDR(0x000111b8u): goto L_111B8;
    case RC_ADDR(0x000111bau): goto L_111BA;
    case RC_ADDR(0x000111beu): goto L_111BE;
    case RC_ADDR(0x000111c2u): goto L_111C2;
    case RC_ADDR(0x000111c4u): goto L_111C4;
    case RC_ADDR(0x000111c8u): goto L_111C8;
    case RC_ADDR(0x000111cau): goto L_111CA;
    case RC_ADDR(0x000111ceu): goto L_111CE;
    case RC_ADDR(0x000111d4u): goto L_111D4;
    case RC_ADDR(0x000111dau): goto L_111DA;
    case RC_ADDR(0x000111e0u): goto L_111E0;
    case RC_ADDR(0x000111e2u): goto L_111E2;
    case RC_ADDR(0x000111e4u): goto L_111E4;
    case RC_ADDR(0x000111eau): goto L_111EA;
    case RC_ADDR(0x000111f0u): goto L_111F0;
    case RC_ADDR(0x000111f6u): goto L_111F6;
    case RC_ADDR(0x000111feu): goto L_111FE;
    case RC_ADDR(0x00011200u): goto L_11200;
    case RC_ADDR(0x00011204u): goto L_11204;
    case RC_ADDR(0x00011206u): goto L_11206;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_11130:
    /* 00011130   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00011130u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_11134:
    /* 00011134   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x00011134u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_11138:
    /* 00011138   4  move.w (fffff2ce,A4),D0 */
    c->pc = RC_ADDR(0x00011138u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd32u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1113C:
    /* 0001113c   2  move.w (A0),D1 */
    c->pc = RC_ADDR(0x0001113cu);
    rc_step(c, m, 8);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1113E:
    /* 0001113e   2  addq.w #2,D1 */
    c->pc = RC_ADDR(0x0001113eu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_11140:
    /* 00011140   2  sub.w D1,D0 */
    c->pc = RC_ADDR(0x00011140u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_11142:
    /* 00011142   6  move.w D0,(00dff066).l */
    c->pc = RC_ADDR(0x00011142u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, 0x00dff066u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11148:
    /* 00011148   6  move.w D0,(00dff060).l */
    c->pc = RC_ADDR(0x00011148u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, 0x00dff060u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1114E:
    /* 0001114e   8  move.w #ffff,(00dff062).l */
    c->pc = RC_ADDR(0x0001114eu);
    rc_step(c, m, 20);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, 0x00dff062u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11156:
    /* 00011156   8  move.w #ffff,(00dff064).l */
    c->pc = RC_ADDR(0x00011156u);
    rc_step(c, m, 20);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, 0x00dff064u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1115E:
    /* 0001115e   4  move.w (2,A0),D2 */
    c->pc = RC_ADDR(0x0001115eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11162:
    /* 00011162   2  lsl.w #6,D2 */
    c->pc = RC_ADDR(0x00011162u);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 1, 0x00000006u, rc_d_get(c, 2, RC_W), RC_W));

L_11164:
    /* 00011164   2  lsr.w #1,D1 */
    c->pc = RC_ADDR(0x00011164u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_11166:
    /* 00011166   2  or.w D1,D2 */
    c->pc = RC_ADDR(0x00011166u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t2 = t0 | rc_d_get(c, 2, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 2, RC_W, t2);

L_11168:
    /* 00011168   4  movea.l (24,A0),A3 */
    c->pc = RC_ADDR(0x00011168u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0x24u));
    c->a[3] = t0;

L_1116C:
    /* 0001116c   4  movea.l (10,A5),A1 */
    c->pc = RC_ADDR(0x0001116cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[1] = t0;

L_11170:
    /* 00011170   2  clr.l D1 */
    c->pc = RC_ADDR(0x00011170u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_11172:
    /* 00011172   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00011172u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11176:
    /* 00011176   2  move.w D0,D3 */
    c->pc = RC_ADDR(0x00011176u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11178:
    /* 00011178   2  lsr.w #4,D0 */
    c->pc = RC_ADDR(0x00011178u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W));

L_1117A:
    /* 0001117a   2  lsl.w #1,D0 */
    c->pc = RC_ADDR(0x0001117au);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_1117C:
    /* 0001117c   4  move.w (a,A5),D1 */
    c->pc = RC_ADDR(0x0001117cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11180:
    /* 00011180   4  mulu.w (fffff2ce,A4),D1 */
    c->pc = RC_ADDR(0x00011180u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd32u));
    rc_mulu(c, 1, t0);

L_11184:
    /* 00011184   2  add.w D0,D1 */
    c->pc = RC_ADDR(0x00011184u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_11186:
    /* 00011186   8  move.w #ffff,(00dff044).l */
    c->pc = RC_ADDR(0x00011186u);
    rc_step(c, m, 20);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, 0x00dff044u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1118E:
    /* 0001118e   8  move.w #0,(00dff046).l */
    c->pc = RC_ADDR(0x0001118eu);
    rc_step(c, m, 20);
    t0 = 0x00000000u;
    rc_wr16(c, m, 0x00dff046u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11196:
    /* 00011196   2  asl.w #6,D3 */
    c->pc = RC_ADDR(0x00011196u);
    rc_step(c, m, 6);
    rc_d_set(c, 3, RC_W, rc_shift(c, 0, 1, 0x00000006u, rc_d_get(c, 3, RC_W), RC_W));

L_11198:
    /* 00011198   2  asl.w #6,D3 */
    c->pc = RC_ADDR(0x00011198u);
    rc_step(c, m, 6);
    rc_d_set(c, 3, RC_W, rc_shift(c, 0, 1, 0x00000006u, rc_d_get(c, 3, RC_W), RC_W));

L_1119A:
    /* 0001119a   6  move.w D3,(00dff042).l */
    c->pc = RC_ADDR(0x0001119au);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 3, RC_W);
    rc_wr16(c, m, 0x00dff042u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_111A0:
    /* 000111a0   4  ori.w #b0a,D3 */
    c->pc = RC_ADDR(0x000111a0u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 | 0x00000b0au;
    rc_d_set(c, 3, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_111A4:
    /* 000111a4   2  clr.l D0 */
    c->pc = RC_ADDR(0x000111a4u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_111A6:
    /* 000111a6   4  move.b (5,A0),D0 */
    c->pc = RC_ADDR(0x000111a6u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x5u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_111AA:
    /* 000111aa   2  subq.b #1,D0 */
    c->pc = RC_ADDR(0x000111aau);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_B);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_B, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_B, t2);

L_111AC:
    /* 000111ac   2  addq.l #8,A0 */
    c->pc = RC_ADDR(0x000111acu);
    rc_step(c, m, 8);
    c->a[0] += 0x00000008u;

L_111AE:
    /* 000111ae   4  move.l (18,A0),D4 */
    c->pc = RC_ADDR(0x000111aeu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0x18u));
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_111B2:
    /* 000111b2   4  and.w #fb0a,D3 */
    c->pc = RC_ADDR(0x000111b2u);
    rc_step(c, m, 10);
    t0 = 0x0000fb0au;
    t2 = t0 & rc_d_get(c, 3, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 3, RC_W, t2);

L_111B6:
    /* 000111b6   2  move.b D4,D5 */
    c->pc = RC_ADDR(0x000111b6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_B);
    rc_d_set(c, 5, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_111B8:
    /* 000111b8   2  lsr.l #4,D4 */
    c->pc = RC_ADDR(0x000111b8u);
    rc_step(c, m, 8);
    rc_d_set(c, 4, RC_L, rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 4, RC_L), RC_L));

L_111BA:
    /* 000111ba   4  andi.b #f,D5 */
    c->pc = RC_ADDR(0x000111bau);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 5, RC_B);
    t2 = t1 & 0x0000000fu;
    rc_d_set(c, 5, RC_B, t2);
    rc_set_nzvc(c, t2, RC_B);

L_111BE:
    /* 000111be   4  cmpi.b #8,D5 */
    c->pc = RC_ADDR(0x000111beu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 5, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000008u);

L_111C2:
    /* 000111c2   2  blt 000111ca */
    c->pc = RC_ADDR(0x000111c2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_111CA;

L_111C4:
    /* 000111c4   4  btst #0,D5 */
    c->pc = RC_ADDR(0x000111c4u);
    rc_step(c, m, 10);
    t4 = 0x00000000u;
    t0 = rc_d_get(c, 5, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_111C8:
    /* 000111c8   2  beq 000111ce */
    c->pc = RC_ADDR(0x000111c8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_111CE;

L_111CA:
    /* 000111ca   4  ori.w #fca,D3 */
    c->pc = RC_ADDR(0x000111cau);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 | 0x00000fcau;
    rc_d_set(c, 3, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_111CE:
    /* 000111ce   6  move.w D3,(00dff040).l */
    c->pc = RC_ADDR(0x000111ceu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 3, RC_W);
    rc_wr16(c, m, 0x00dff040u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_111D4:
    /* 000111d4   6  move.l A3,(00dff050).l */
    c->pc = RC_ADDR(0x000111d4u);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 3, RC_L);
    rc_wr32(c, m, 0x00dff050u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_111DA:
    /* 000111da   6  move.l (A0)+,(00dff04c).l */
    c->pc = RC_ADDR(0x000111dau);
    rc_step(c, m, 28);
    t3 = c->a[0];
    c->a[0] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_wr32(c, m, 0x00dff04cu, t0);
    rc_set_nzvc(c, t0, RC_L);

L_111E0:
    /* 000111e0   2  movea.l (A1)+,A2 */
    c->pc = RC_ADDR(0x000111e0u);
    rc_step(c, m, 12);
    t3 = c->a[1];
    c->a[1] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_111E2:
    /* 000111e2   2  adda.l D1,A2 */
    c->pc = RC_ADDR(0x000111e2u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[2] += t0;

L_111E4:
    /* 000111e4   6  move.l A2,(00dff048).l */
    c->pc = RC_ADDR(0x000111e4u);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff048u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_111EA:
    /* 000111ea   6  move.l A2,(00dff054).l */
    c->pc = RC_ADDR(0x000111eau);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff054u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_111F0:
    /* 000111f0   6  move.w D2,(00dff058).l */
    c->pc = RC_ADDR(0x000111f0u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, 0x00dff058u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_111F6:
    /* 000111f6   8  btst #6,(00dff002).l */
    c->pc = RC_ADDR(0x000111f6u);
    rc_step(c, m, 20);
    t3 = 0x00dff002u;
    t4 = 0x00000006u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_111FE:
    /* 000111fe   2  bne 000111f6 */
    c->pc = RC_ADDR(0x000111feu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_111F6; }

L_11200:
    /* 00011200   4  dbf D0,000111b2 */
    c->pc = RC_ADDR(0x00011200u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_111B2; }
    }

L_11204:
    /* 00011204   2  unlk A5 */
    c->pc = RC_ADDR(0x00011204u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_11206:
    /* 00011206   2  rts */
    c->pc = RC_ADDR(0x00011206u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
