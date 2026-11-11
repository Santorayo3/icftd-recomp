/* fn_000203de - 152 byte(s), 45 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000203de(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000203deu): goto L_203DE;
    case RC_ADDR(0x000203e2u): goto L_203E2;
    case RC_ADDR(0x000203e8u): goto L_203E8;
    case RC_ADDR(0x000203ecu): goto L_203EC;
    case RC_ADDR(0x000203eeu): goto L_203EE;
    case RC_ADDR(0x000203f4u): goto L_203F4;
    case RC_ADDR(0x000203f8u): goto L_203F8;
    case RC_ADDR(0x000203fcu): goto L_203FC;
    case RC_ADDR(0x000203feu): goto L_203FE;
    case RC_ADDR(0x00020400u): goto L_20400;
    case RC_ADDR(0x00020402u): goto L_20402;
    case RC_ADDR(0x00020406u): goto L_20406;
    case RC_ADDR(0x0002040au): goto L_2040A;
    case RC_ADDR(0x0002040eu): goto L_2040E;
    case RC_ADDR(0x00020410u): goto L_20410;
    case RC_ADDR(0x00020414u): goto L_20414;
    case RC_ADDR(0x00020418u): goto L_20418;
    case RC_ADDR(0x0002041cu): goto L_2041C;
    case RC_ADDR(0x00020420u): goto L_20420;
    case RC_ADDR(0x00020422u): goto L_20422;
    case RC_ADDR(0x00020426u): goto L_20426;
    case RC_ADDR(0x0002042au): goto L_2042A;
    case RC_ADDR(0x0002042eu): goto L_2042E;
    case RC_ADDR(0x00020432u): goto L_20432;
    case RC_ADDR(0x00020436u): goto L_20436;
    case RC_ADDR(0x00020438u): goto L_20438;
    case RC_ADDR(0x0002043au): goto L_2043A;
    case RC_ADDR(0x0002043cu): goto L_2043C;
    case RC_ADDR(0x00020440u): goto L_20440;
    case RC_ADDR(0x00020444u): goto L_20444;
    case RC_ADDR(0x00020448u): goto L_20448;
    case RC_ADDR(0x0002044au): goto L_2044A;
    case RC_ADDR(0x0002044cu): goto L_2044C;
    case RC_ADDR(0x00020450u): goto L_20450;
    case RC_ADDR(0x00020454u): goto L_20454;
    case RC_ADDR(0x00020458u): goto L_20458;
    case RC_ADDR(0x0002045cu): goto L_2045C;
    case RC_ADDR(0x0002045eu): goto L_2045E;
    case RC_ADDR(0x00020460u): goto L_20460;
    case RC_ADDR(0x00020464u): goto L_20464;
    case RC_ADDR(0x00020468u): goto L_20468;
    case RC_ADDR(0x0002046cu): goto L_2046C;
    case RC_ADDR(0x0002046eu): goto L_2046E;
    case RC_ADDR(0x00020472u): goto L_20472;
    case RC_ADDR(0x00020474u): goto L_20474;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_203DE:
    /* 000203de   4  link.w A5,#fffffff2 */
    c->pc = RC_ADDR(0x000203deu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xeu;

L_203E2:
    /* 000203e2   6  move.l (2ade,A4),(fffffffa,A5) */
    c->pc = RC_ADDR(0x000203e2u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2adeu));
    rc_wr32(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_203E8:
    /* 000203e8   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x000203e8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_203EC:
    /* 000203ec   2  bra 00020464 */
    c->pc = RC_ADDR(0x000203ecu);
    rc_step(c, m, 10);
    goto L_20464;

L_203EE:
    /* 000203ee   6  move.l (fffffffa,A5),(fffffff6,A5) */
    c->pc = RC_ADDR(0x000203eeu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    rc_wr32(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_203F4:
    /* 000203f4   4  move.l (fffffff6,A5),-(A7) */
    c->pc = RC_ADDR(0x000203f4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0xau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_203F8:
    /* 000203f8   4  jsr (ffff82ae,A4) */
    c->pc = RC_ADDR(0x000203f8u);
    rc_step(c, m, 18);
    /* vector 114 */
    rc_push32(c, m, RC_ADDR(0x000203fcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d04u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00020820u);
    return;

L_203FC:
    /* 000203fc   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000203fcu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_203FE:
    /* 000203fe   2  ext.l D0 */
    c->pc = RC_ADDR(0x000203feu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_20400:
    /* 00020400   2  addq.l #1,D0 */
    c->pc = RC_ADDR(0x00020400u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_20402:
    /* 00020402   4  add.l D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00020402u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_20406:
    /* 00020406   4  move.l (fffffffa,A5),-(A7) */
    c->pc = RC_ADDR(0x00020406u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2040A:
    /* 0002040a   4  jsr (000202aa) */
    c->pc = RC_ADDR(0x0002040au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0002040eu));
    rc_depth++;
    c->pc = RC_ADDR(0x000202aau);
    return;

L_2040E:
    /* 0002040e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0002040eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_20410:
    /* 00020410   4  move.l D0,(fffffff2,A5) */
    c->pc = RC_ADDR(0x00020410u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_20414:
    /* 00020414   4  addq.l #4,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00020414u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000004u;
    rc_flags_add(c, RC_L, t1, 0x00000004u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_20418:
    /* 00020418   4  move.l (fffffffa,A5),-(A7) */
    c->pc = RC_ADDR(0x00020418u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2041C:
    /* 0002041c   4  jsr (000202aa) */
    c->pc = RC_ADDR(0x0002041cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00020420u));
    rc_depth++;
    c->pc = RC_ADDR(0x000202aau);
    return;

L_20420:
    /* 00020420   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00020420u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_20422:
    /* 00020422   4  move.l D0,(ac2,A4) */
    c->pc = RC_ADDR(0x00020422u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0xac2u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_20426:
    /* 00020426   4  addq.l #4,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00020426u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000004u;
    rc_flags_add(c, RC_L, t1, 0x00000004u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_2042A:
    /* 0002042a   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0002042au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2042E:
    /* 0002042e   4  move.l (fffffff6,A5),-(A7) */
    c->pc = RC_ADDR(0x0002042eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0xau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20432:
    /* 00020432   4  jsr (00020204) */
    c->pc = RC_ADDR(0x00020432u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00020436u));
    rc_depth++;
    c->pc = RC_ADDR(0x00020204u);
    return;

L_20436:
    /* 00020436   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00020436u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_20438:
    /* 00020438   2  tst.w D0 */
    c->pc = RC_ADDR(0x00020438u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_2043A:
    /* 0002043a   2  beq 00020460 */
    c->pc = RC_ADDR(0x0002043au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_20460;

L_2043C:
    /* 0002043c   4  pea (ffffffff).l */
    c->pc = RC_ADDR(0x0002043cu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0xffffffffu);

L_20440:
    /* 00020440   4  move.l (2b14,A4),D0 */
    c->pc = RC_ADDR(0x00020440u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2b14u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20444:
    /* 00020444   4  add.l (fffffff2,A5),D0 */
    c->pc = RC_ADDR(0x00020444u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_20448:
    /* 00020448   2  addq.l #6,D0 */
    c->pc = RC_ADDR(0x00020448u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + 0x00000006u;
    rc_flags_add(c, RC_L, t1, 0x00000006u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_2044A:
    /* 0002044a   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0002044au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2044C:
    /* 0002044c   4  move.l (2ada,A4),-(A7) */
    c->pc = RC_ADDR(0x0002044cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2adau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20450:
    /* 00020450   4  jsr (ffff831a,A4) */
    c->pc = RC_ADDR(0x00020450u);
    rc_step(c, m, 18);
    /* vector 132 */
    rc_push32(c, m, RC_ADDR(0x00020454u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d70u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021484u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021488u);
    return;

L_20454:
    /* 00020454   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00020454u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_20458:
    /* 00020458   4  move.l (2ada,A4),D0 */
    c->pc = RC_ADDR(0x00020458u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2adau));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_2045C:
    /* 0002045c   2  unlk A5 */
    c->pc = RC_ADDR(0x0002045cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_2045E:
    /* 0002045e   2  rts */
    c->pc = RC_ADDR(0x0002045eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_20460:
    /* 00020460   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00020460u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_20464:
    /* 00020464   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00020464u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20468:
    /* 00020468   4  cmp.w (2b18,A4),D0 */
    c->pc = RC_ADDR(0x00020468u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2b18u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_2046C:
    /* 0002046c   2  bcs 000203ee */
    c->pc = RC_ADDR(0x0002046cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_203EE; }

L_2046E:
    /* 0002046e   4  clr.l (ac2,A4) */
    c->pc = RC_ADDR(0x0002046eu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] + 0xac2u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_20472:
    /* 00020472   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00020472u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_20474:
    /* 00020474   2  bra 0002045c */
    c->pc = RC_ADDR(0x00020474u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_2045C;

}
