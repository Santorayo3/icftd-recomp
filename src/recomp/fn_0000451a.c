/* fn_0000451a - 276 byte(s), 74 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000451a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000451au): goto L_451A;
    case RC_ADDR(0x0000451eu): goto L_451E;
    case RC_ADDR(0x00004522u): goto L_4522;
    case RC_ADDR(0x00004528u): goto L_4528;
    case RC_ADDR(0x0000452cu): goto L_452C;
    case RC_ADDR(0x00004532u): goto L_4532;
    case RC_ADDR(0x00004538u): goto L_4538;
    case RC_ADDR(0x00004540u): goto L_4540;
    case RC_ADDR(0x00004544u): goto L_4544;
    case RC_ADDR(0x00004548u): goto L_4548;
    case RC_ADDR(0x0000454cu): goto L_454C;
    case RC_ADDR(0x00004550u): goto L_4550;
    case RC_ADDR(0x00004552u): goto L_4552;
    case RC_ADDR(0x00004556u): goto L_4556;
    case RC_ADDR(0x0000455au): goto L_455A;
    case RC_ADDR(0x0000455cu): goto L_455C;
    case RC_ADDR(0x0000455eu): goto L_455E;
    case RC_ADDR(0x00004562u): goto L_4562;
    case RC_ADDR(0x00004566u): goto L_4566;
    case RC_ADDR(0x0000456au): goto L_456A;
    case RC_ADDR(0x0000456cu): goto L_456C;
    case RC_ADDR(0x00004570u): goto L_4570;
    case RC_ADDR(0x00004572u): goto L_4572;
    case RC_ADDR(0x00004574u): goto L_4574;
    case RC_ADDR(0x00004578u): goto L_4578;
    case RC_ADDR(0x0000457cu): goto L_457C;
    case RC_ADDR(0x00004580u): goto L_4580;
    case RC_ADDR(0x00004582u): goto L_4582;
    case RC_ADDR(0x00004584u): goto L_4584;
    case RC_ADDR(0x00004588u): goto L_4588;
    case RC_ADDR(0x0000458cu): goto L_458C;
    case RC_ADDR(0x00004590u): goto L_4590;
    case RC_ADDR(0x00004592u): goto L_4592;
    case RC_ADDR(0x00004596u): goto L_4596;
    case RC_ADDR(0x0000459cu): goto L_459C;
    case RC_ADDR(0x0000459eu): goto L_459E;
    case RC_ADDR(0x000045a2u): goto L_45A2;
    case RC_ADDR(0x000045a6u): goto L_45A6;
    case RC_ADDR(0x000045a8u): goto L_45A8;
    case RC_ADDR(0x000045acu): goto L_45AC;
    case RC_ADDR(0x000045b0u): goto L_45B0;
    case RC_ADDR(0x000045b4u): goto L_45B4;
    case RC_ADDR(0x000045b6u): goto L_45B6;
    case RC_ADDR(0x000045bau): goto L_45BA;
    case RC_ADDR(0x000045beu): goto L_45BE;
    case RC_ADDR(0x000045c0u): goto L_45C0;
    case RC_ADDR(0x000045c4u): goto L_45C4;
    case RC_ADDR(0x000045c8u): goto L_45C8;
    case RC_ADDR(0x000045ccu): goto L_45CC;
    case RC_ADDR(0x000045ceu): goto L_45CE;
    case RC_ADDR(0x000045d2u): goto L_45D2;
    case RC_ADDR(0x000045d6u): goto L_45D6;
    case RC_ADDR(0x000045dau): goto L_45DA;
    case RC_ADDR(0x000045dcu): goto L_45DC;
    case RC_ADDR(0x000045deu): goto L_45DE;
    case RC_ADDR(0x000045e2u): goto L_45E2;
    case RC_ADDR(0x000045e6u): goto L_45E6;
    case RC_ADDR(0x000045eau): goto L_45EA;
    case RC_ADDR(0x000045ecu): goto L_45EC;
    case RC_ADDR(0x000045f0u): goto L_45F0;
    case RC_ADDR(0x000045f6u): goto L_45F6;
    case RC_ADDR(0x000045f8u): goto L_45F8;
    case RC_ADDR(0x000045fcu): goto L_45FC;
    case RC_ADDR(0x00004600u): goto L_4600;
    case RC_ADDR(0x00004602u): goto L_4602;
    case RC_ADDR(0x00004606u): goto L_4606;
    case RC_ADDR(0x0000460au): goto L_460A;
    case RC_ADDR(0x0000460cu): goto L_460C;
    case RC_ADDR(0x00004614u): goto L_4614;
    case RC_ADDR(0x0000461au): goto L_461A;
    case RC_ADDR(0x00004620u): goto L_4620;
    case RC_ADDR(0x00004624u): goto L_4624;
    case RC_ADDR(0x0000462au): goto L_462A;
    case RC_ADDR(0x0000462cu): goto L_462C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_451A:
    /* 0000451a   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x0000451au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_451E:
    /* 0000451e   4  jsr (ffff8110,A4) */
    c->pc = RC_ADDR(0x0000451eu);
    rc_step(c, m, 18);
    /* vector 45 */
    rc_push32(c, m, RC_ADDR(0x00004522u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b66u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000ec8au);
    return;

L_4522:
    /* 00004522   6  move.w #1,(fffff1c6,A4) */
    c->pc = RC_ADDR(0x00004522u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0xe3au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_4528:
    /* 00004528   4  clr.w (ffffcb20,A4) */
    c->pc = RC_ADDR(0x00004528u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x34e0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_452C:
    /* 0000452c   6  subi.w #14,(ffffeff2,A4) */
    c->pc = RC_ADDR(0x0000452cu);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x100eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000014u;
    rc_flags_sub(c, RC_W, t1, 0x00000014u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_4532:
    /* 00004532   6  subi.w #14,(ffffeff4,A4) */
    c->pc = RC_ADDR(0x00004532u);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x100cu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000014u;
    rc_flags_sub(c, RC_W, t1, 0x00000014u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_4538:
    /* 00004538   8  subi.l #14,(fffff006,A4) */
    c->pc = RC_ADDR(0x00004538u);
    rc_step(c, m, 32);
    t3 = (c->a[4] - 0xffau);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 - 0x00000014u;
    rc_flags_sub(c, RC_L, t1, 0x00000014u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_4540:
    /* 00004540   4  clr.w (fffffff2,A4) */
    c->pc = RC_ADDR(0x00004540u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0xeu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4544:
    /* 00004544   4  clr.w (fffff1d0,A4) */
    c->pc = RC_ADDR(0x00004544u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0xe30u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4548:
    /* 00004548   4  pea (0000462e) */
    c->pc = RC_ADDR(0x00004548u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000462eu));

L_454C:
    /* 0000454c   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x0000454cu);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x00004550u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ce0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000202c4u);
    return;

L_4550:
    /* 00004550   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00004550u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_4552:
    /* 00004552   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00004552u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4556:
    /* 00004556   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00004556u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_455A:
    /* 0000455a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000455au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_455C:
    /* 0000455c   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000455cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_455E:
    /* 0000455e   4  lea (ffff855e,A4),A0 */
    c->pc = RC_ADDR(0x0000455eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7aa2u);

L_4562:
    /* 00004562   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00004562u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4566:
    /* 00004566   4  jsr (ffff8200,A4) */
    c->pc = RC_ADDR(0x00004566u);
    rc_step(c, m, 18);
    /* vector 85 */
    rc_push32(c, m, RC_ADDR(0x0000456au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c56u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001d476u);
    return;

L_456A:
    /* 0000456a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000456au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_456C:
    /* 0000456c   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x0000456cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4570:
    /* 00004570   2  ext.l D1 */
    c->pc = RC_ADDR(0x00004570u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_4572:
    /* 00004572   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x00004572u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_4574:
    /* 00004574   4  lea (fffffff4,A4),A0 */
    c->pc = RC_ADDR(0x00004574u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0xcu);

L_4578:
    /* 00004578   4  move.l D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x00004578u);
    rc_step(c, m, 18);
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_457C:
    /* 0000457c   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0000457cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4580:
    /* 00004580   2  ext.l D0 */
    c->pc = RC_ADDR(0x00004580u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_4582:
    /* 00004582   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00004582u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_4584:
    /* 00004584   4  lea (fffffff4,A4),A0 */
    c->pc = RC_ADDR(0x00004584u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0xcu);

L_4588:
    /* 00004588   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00004588u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_458C:
    /* 0000458c   4  jsr (ffff8212,A4) */
    c->pc = RC_ADDR(0x0000458cu);
    rc_step(c, m, 18);
    /* vector 88 */
    rc_push32(c, m, RC_ADDR(0x00004590u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c68u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001d642u);
    return;

L_4590:
    /* 00004590   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00004590u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_4592:
    /* 00004592   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00004592u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_4596:
    /* 00004596   6  cmpi.w #4,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00004596u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_459C:
    /* 0000459c   2  blt 00004556 */
    c->pc = RC_ADDR(0x0000459cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_4556; }

L_459E:
    /* 0000459e   4  pea (00004637) */
    c->pc = RC_ADDR(0x0000459eu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00004637u));

L_45A2:
    /* 000045a2   4  jsr (ffff8200,A4) */
    c->pc = RC_ADDR(0x000045a2u);
    rc_step(c, m, 18);
    /* vector 85 */
    rc_push32(c, m, RC_ADDR(0x000045a6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c56u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001d476u);
    return;

L_45A6:
    /* 000045a6   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000045a6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_45A8:
    /* 000045a8   4  move.l D0,(4,A4) */
    c->pc = RC_ADDR(0x000045a8u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_45AC:
    /* 000045ac   4  move.l (4,A4),-(A7) */
    c->pc = RC_ADDR(0x000045acu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_45B0:
    /* 000045b0   4  jsr (ffff8212,A4) */
    c->pc = RC_ADDR(0x000045b0u);
    rc_step(c, m, 18);
    /* vector 88 */
    rc_push32(c, m, RC_ADDR(0x000045b4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c68u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001d642u);
    return;

L_45B4:
    /* 000045b4   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000045b4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_45B6:
    /* 000045b6   4  pea (0000463c) */
    c->pc = RC_ADDR(0x000045b6u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000463cu));

L_45BA:
    /* 000045ba   4  jsr (ffff8200,A4) */
    c->pc = RC_ADDR(0x000045bau);
    rc_step(c, m, 18);
    /* vector 85 */
    rc_push32(c, m, RC_ADDR(0x000045beu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c56u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001d476u);
    return;

L_45BE:
    /* 000045be   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000045beu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_45C0:
    /* 000045c0   4  move.l D0,(8,A4) */
    c->pc = RC_ADDR(0x000045c0u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_45C4:
    /* 000045c4   4  move.l (8,A4),-(A7) */
    c->pc = RC_ADDR(0x000045c4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_45C8:
    /* 000045c8   4  jsr (ffff8212,A4) */
    c->pc = RC_ADDR(0x000045c8u);
    rc_step(c, m, 18);
    /* vector 88 */
    rc_push32(c, m, RC_ADDR(0x000045ccu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c68u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001d642u);
    return;

L_45CC:
    /* 000045cc   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000045ccu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_45CE:
    /* 000045ce   4  jsr (000043b8) */
    c->pc = RC_ADDR(0x000045ceu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000045d2u));
    rc_depth++;
    c->pc = RC_ADDR(0x000043b8u);
    return;

L_45D2:
    /* 000045d2   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x000045d2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_45D6:
    /* 000045d6   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000045d6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_45DA:
    /* 000045da   2  ext.l D0 */
    c->pc = RC_ADDR(0x000045dau);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_45DC:
    /* 000045dc   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000045dcu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_45DE:
    /* 000045de   4  lea (fffffff4,A4),A0 */
    c->pc = RC_ADDR(0x000045deu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0xcu);

L_45E2:
    /* 000045e2   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x000045e2u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_45E6:
    /* 000045e6   4  jsr (ffff8218,A4) */
    c->pc = RC_ADDR(0x000045e6u);
    rc_step(c, m, 18);
    /* vector 89 */
    rc_push32(c, m, RC_ADDR(0x000045eau));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c6eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001d72eu);
    return;

L_45EA:
    /* 000045ea   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000045eau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_45EC:
    /* 000045ec   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000045ecu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_45F0:
    /* 000045f0   6  cmpi.w #4,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000045f0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_45F6:
    /* 000045f6   2  blt 000045d6 */
    c->pc = RC_ADDR(0x000045f6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_45D6; }

L_45F8:
    /* 000045f8   4  move.l (4,A4),-(A7) */
    c->pc = RC_ADDR(0x000045f8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_45FC:
    /* 000045fc   4  jsr (ffff8218,A4) */
    c->pc = RC_ADDR(0x000045fcu);
    rc_step(c, m, 18);
    /* vector 89 */
    rc_push32(c, m, RC_ADDR(0x00004600u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c6eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001d72eu);
    return;

L_4600:
    /* 00004600   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00004600u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_4602:
    /* 00004602   4  move.l (8,A4),-(A7) */
    c->pc = RC_ADDR(0x00004602u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4606:
    /* 00004606   4  jsr (ffff8218,A4) */
    c->pc = RC_ADDR(0x00004606u);
    rc_step(c, m, 18);
    /* vector 89 */
    rc_push32(c, m, RC_ADDR(0x0000460au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c6eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001d72eu);
    return;

L_460A:
    /* 0000460a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000460au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_460C:
    /* 0000460c   8  addi.l #14,(fffff006,A4) */
    c->pc = RC_ADDR(0x0000460cu);
    rc_step(c, m, 32);
    t3 = (c->a[4] - 0xffau);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000014u;
    rc_flags_add(c, RC_L, t1, 0x00000014u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_4614:
    /* 00004614   6  addi.w #14,(ffffeff2,A4) */
    c->pc = RC_ADDR(0x00004614u);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x100eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000014u;
    rc_flags_add(c, RC_W, t1, 0x00000014u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_461A:
    /* 0000461a   6  addi.w #14,(ffffeff4,A4) */
    c->pc = RC_ADDR(0x0000461au);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x100cu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000014u;
    rc_flags_add(c, RC_W, t1, 0x00000014u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_4620:
    /* 00004620   4  clr.w (fffff1c6,A4) */
    c->pc = RC_ADDR(0x00004620u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0xe3au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4624:
    /* 00004624   6  move.w #1,(ffffcb20,A4) */
    c->pc = RC_ADDR(0x00004624u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x34e0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_462A:
    /* 0000462a   2  unlk A5 */
    c->pc = RC_ADDR(0x0000462au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_462C:
    /* 0000462c   2  rts */
    c->pc = RC_ADDR(0x0000462cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
