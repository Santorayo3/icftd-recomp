/* fn_00016462 - 178 byte(s), 50 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00016462(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00016462u): goto L_16462;
    case RC_ADDR(0x00016466u): goto L_16466;
    case RC_ADDR(0x0001646au): goto L_1646A;
    case RC_ADDR(0x0001646eu): goto L_1646E;
    case RC_ADDR(0x00016470u): goto L_16470;
    case RC_ADDR(0x00016474u): goto L_16474;
    case RC_ADDR(0x00016478u): goto L_16478;
    case RC_ADDR(0x0001647cu): goto L_1647C;
    case RC_ADDR(0x0001647eu): goto L_1647E;
    case RC_ADDR(0x00016482u): goto L_16482;
    case RC_ADDR(0x00016486u): goto L_16486;
    case RC_ADDR(0x00016488u): goto L_16488;
    case RC_ADDR(0x0001648au): goto L_1648A;
    case RC_ADDR(0x0001648eu): goto L_1648E;
    case RC_ADDR(0x00016492u): goto L_16492;
    case RC_ADDR(0x00016494u): goto L_16494;
    case RC_ADDR(0x00016496u): goto L_16496;
    case RC_ADDR(0x0001649au): goto L_1649A;
    case RC_ADDR(0x0001649eu): goto L_1649E;
    case RC_ADDR(0x000164a4u): goto L_164A4;
    case RC_ADDR(0x000164a8u): goto L_164A8;
    case RC_ADDR(0x000164acu): goto L_164AC;
    case RC_ADDR(0x000164aeu): goto L_164AE;
    case RC_ADDR(0x000164b2u): goto L_164B2;
    case RC_ADDR(0x000164b4u): goto L_164B4;
    case RC_ADDR(0x000164b6u): goto L_164B6;
    case RC_ADDR(0x000164bau): goto L_164BA;
    case RC_ADDR(0x000164beu): goto L_164BE;
    case RC_ADDR(0x000164c2u): goto L_164C2;
    case RC_ADDR(0x000164c8u): goto L_164C8;
    case RC_ADDR(0x000164cau): goto L_164CA;
    case RC_ADDR(0x000164ceu): goto L_164CE;
    case RC_ADDR(0x000164d2u): goto L_164D2;
    case RC_ADDR(0x000164d4u): goto L_164D4;
    case RC_ADDR(0x000164d6u): goto L_164D6;
    case RC_ADDR(0x000164dau): goto L_164DA;
    case RC_ADDR(0x000164deu): goto L_164DE;
    case RC_ADDR(0x000164e2u): goto L_164E2;
    case RC_ADDR(0x000164e6u): goto L_164E6;
    case RC_ADDR(0x000164eau): goto L_164EA;
    case RC_ADDR(0x000164eeu): goto L_164EE;
    case RC_ADDR(0x000164f2u): goto L_164F2;
    case RC_ADDR(0x000164f8u): goto L_164F8;
    case RC_ADDR(0x000164feu): goto L_164FE;
    case RC_ADDR(0x00016500u): goto L_16500;
    case RC_ADDR(0x00016504u): goto L_16504;
    case RC_ADDR(0x0001650au): goto L_1650A;
    case RC_ADDR(0x0001650cu): goto L_1650C;
    case RC_ADDR(0x00016510u): goto L_16510;
    case RC_ADDR(0x00016512u): goto L_16512;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_16462:
    /* 00016462   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00016462u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_16466:
    /* 00016466   4  pea (00016514) */
    c->pc = RC_ADDR(0x00016466u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00016514u));

L_1646A:
    /* 0001646a   4  jsr (00016af2) */
    c->pc = RC_ADDR(0x0001646au);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001646eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00016af2u);
    return;

L_1646E:
    /* 0001646e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001646eu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_16470:
    /* 00016470   4  move.l D0,(12c6,A4) */
    c->pc = RC_ADDR(0x00016470u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x12c6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_16474:
    /* 00016474   4  pea (00016519) */
    c->pc = RC_ADDR(0x00016474u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00016519u));

L_16478:
    /* 00016478   4  jsr (00016af2) */
    c->pc = RC_ADDR(0x00016478u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001647cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00016af2u);
    return;

L_1647C:
    /* 0001647c   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001647cu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1647E:
    /* 0001647e   4  move.l D0,(12ca,A4) */
    c->pc = RC_ADDR(0x0001647eu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x12cau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_16482:
    /* 00016482   4  movea.l (12c6,A4),A0 */
    c->pc = RC_ADDR(0x00016482u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x12c6u));
    c->a[0] = t0;

L_16486:
    /* 00016486   2  move.w (A0),D0 */
    c->pc = RC_ADDR(0x00016486u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16488:
    /* 00016488   2  addq.w #8,D0 */
    c->pc = RC_ADDR(0x00016488u);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000008u;
    rc_flags_add(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1648A:
    /* 0001648a   4  movea.l (12c6,A4),A0 */
    c->pc = RC_ADDR(0x0001648au);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x12c6u));
    c->a[0] = t0;

L_1648E:
    /* 0001648e   4  mulu.w (2,A0),D0 */
    c->pc = RC_ADDR(0x0001648eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_mulu(c, 0, t0);

L_16492:
    /* 00016492   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00016492u);
    rc_step(c, m);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_16494:
    /* 00016494   2  move.w D0,D1 */
    c->pc = RC_ADDR(0x00016494u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16496:
    /* 00016496   4  move.l D1,(12ce,A4) */
    c->pc = RC_ADDR(0x00016496u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x12ceu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1649A:
    /* 0001649a   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001649au);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1649E:
    /* 0001649e   6  pea (00010002).l */
    c->pc = RC_ADDR(0x0001649eu);
    rc_step(c, m);
    rc_push32(c, m, 0x00010002u);

L_164A4:
    /* 000164a4   4  move.l (12ce,A4),-(A7) */
    c->pc = RC_ADDR(0x000164a4u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x12ceu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_164A8:
    /* 000164a8   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x000164a8u);
    rc_step(c, m);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x000164acu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d8eu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002168cu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021690u);
    return;

L_164AC:
    /* 000164ac   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000164acu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_164AE:
    /* 000164ae   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x000164aeu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_164B2:
    /* 000164b2   2  ext.l D1 */
    c->pc = RC_ADDR(0x000164b2u);
    rc_step(c, m);
    rc_ext_l(c, 1);

L_164B4:
    /* 000164b4   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x000164b4u);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_164B6:
    /* 000164b6   4  lea (e38,A4),A0 */
    c->pc = RC_ADDR(0x000164b6u);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0xe38u);

L_164BA:
    /* 000164ba   4  move.l D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x000164bau);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_164BE:
    /* 000164be   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000164beu);
    rc_step(c, m);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_164C2:
    /* 000164c2   6  cmpi.w #5,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000164c2u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_164C8:
    /* 000164c8   2  blt 0001649e */
    c->pc = RC_ADDR(0x000164c8u);
    rc_step(c, m);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1649E; }

L_164CA:
    /* 000164ca   4  pea (e38,A4) */
    c->pc = RC_ADDR(0x000164cau);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] + 0xe38u));

L_164CE:
    /* 000164ce   4  move.l (12c6,A4),-(A7) */
    c->pc = RC_ADDR(0x000164ceu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x12c6u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_164D2:
    /* 000164d2   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x000164d2u);
    rc_step(c, m);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_164D4:
    /* 000164d4   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x000164d4u);
    rc_step(c, m);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_164D6:
    /* 000164d6   4  jsr (ffff8152,A4) */
    c->pc = RC_ADDR(0x000164d6u);
    rc_step(c, m);
    /* vector 56 */
    rc_push32(c, m, RC_ADDR(0x000164dau));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ba8u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00011130u);
    return;

L_164DA:
    /* 000164da   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000164dau);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_164DE:
    /* 000164de   4  clr.w (12dc,A4) */
    c->pc = RC_ADDR(0x000164deu);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] + 0x12dcu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_164E2:
    /* 000164e2   4  clr.w (12da,A4) */
    c->pc = RC_ADDR(0x000164e2u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] + 0x12dau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_164E6:
    /* 000164e6   4  clr.w (12d6,A4) */
    c->pc = RC_ADDR(0x000164e6u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] + 0x12d6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_164EA:
    /* 000164ea   4  clr.w (12d2,A4) */
    c->pc = RC_ADDR(0x000164eau);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] + 0x12d2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_164EE:
    /* 000164ee   4  clr.w (12d4,A4) */
    c->pc = RC_ADDR(0x000164eeu);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] + 0x12d4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_164F2:
    /* 000164f2   6  move.w #2,(12d8,A4) */
    c->pc = RC_ADDR(0x000164f2u);
    rc_step(c, m);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x12d8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_164F8:
    /* 000164f8   6  btst #0,(aeb,A4) */
    c->pc = RC_ADDR(0x000164f8u);
    rc_step(c, m);
    t3 = (c->a[4] + 0xaebu);
    t4 = 0x00000000u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_164FE:
    /* 000164fe   2  beq 00016504 */
    c->pc = RC_ADDR(0x000164feu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_16504;

L_16500:
    /* 00016500   4  addq.w #1,(12d8,A4) */
    c->pc = RC_ADDR(0x00016500u);
    rc_step(c, m);
    t3 = (c->a[4] + 0x12d8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_16504:
    /* 00016504   6  btst #3,(aeb,A4) */
    c->pc = RC_ADDR(0x00016504u);
    rc_step(c, m);
    t3 = (c->a[4] + 0xaebu);
    t4 = 0x00000003u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_1650A:
    /* 0001650a   2  beq 00016510 */
    c->pc = RC_ADDR(0x0001650au);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_16510;

L_1650C:
    /* 0001650c   4  addq.w #1,(12d8,A4) */
    c->pc = RC_ADDR(0x0001650cu);
    rc_step(c, m);
    t3 = (c->a[4] + 0x12d8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_16510:
    /* 00016510   2  unlk A5 */
    c->pc = RC_ADDR(0x00016510u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_16512:
    /* 00016512   2  rts */
    c->pc = RC_ADDR(0x00016512u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
