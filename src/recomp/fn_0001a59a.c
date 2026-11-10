/* fn_0001a59a - 220 byte(s), 61 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001a59a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001a59au): goto L_1A59A;
    case RC_ADDR(0x0001a59eu): goto L_1A59E;
    case RC_ADDR(0x0001a5a2u): goto L_1A5A2;
    case RC_ADDR(0x0001a5a6u): goto L_1A5A6;
    case RC_ADDR(0x0001a5aau): goto L_1A5AA;
    case RC_ADDR(0x0001a5acu): goto L_1A5AC;
    case RC_ADDR(0x0001a5b0u): goto L_1A5B0;
    case RC_ADDR(0x0001a5b4u): goto L_1A5B4;
    case RC_ADDR(0x0001a5b8u): goto L_1A5B8;
    case RC_ADDR(0x0001a5bcu): goto L_1A5BC;
    case RC_ADDR(0x0001a5c0u): goto L_1A5C0;
    case RC_ADDR(0x0001a5c4u): goto L_1A5C4;
    case RC_ADDR(0x0001a5c6u): goto L_1A5C6;
    case RC_ADDR(0x0001a5cau): goto L_1A5CA;
    case RC_ADDR(0x0001a5ceu): goto L_1A5CE;
    case RC_ADDR(0x0001a5d2u): goto L_1A5D2;
    case RC_ADDR(0x0001a5d6u): goto L_1A5D6;
    case RC_ADDR(0x0001a5dau): goto L_1A5DA;
    case RC_ADDR(0x0001a5deu): goto L_1A5DE;
    case RC_ADDR(0x0001a5e2u): goto L_1A5E2;
    case RC_ADDR(0x0001a5e6u): goto L_1A5E6;
    case RC_ADDR(0x0001a5eau): goto L_1A5EA;
    case RC_ADDR(0x0001a5ecu): goto L_1A5EC;
    case RC_ADDR(0x0001a5f0u): goto L_1A5F0;
    case RC_ADDR(0x0001a5f4u): goto L_1A5F4;
    case RC_ADDR(0x0001a5f8u): goto L_1A5F8;
    case RC_ADDR(0x0001a5fau): goto L_1A5FA;
    case RC_ADDR(0x0001a5feu): goto L_1A5FE;
    case RC_ADDR(0x0001a600u): goto L_1A600;
    case RC_ADDR(0x0001a604u): goto L_1A604;
    case RC_ADDR(0x0001a608u): goto L_1A608;
    case RC_ADDR(0x0001a60cu): goto L_1A60C;
    case RC_ADDR(0x0001a60eu): goto L_1A60E;
    case RC_ADDR(0x0001a612u): goto L_1A612;
    case RC_ADDR(0x0001a614u): goto L_1A614;
    case RC_ADDR(0x0001a616u): goto L_1A616;
    case RC_ADDR(0x0001a618u): goto L_1A618;
    case RC_ADDR(0x0001a61eu): goto L_1A61E;
    case RC_ADDR(0x0001a620u): goto L_1A620;
    case RC_ADDR(0x0001a624u): goto L_1A624;
    case RC_ADDR(0x0001a62cu): goto L_1A62C;
    case RC_ADDR(0x0001a62eu): goto L_1A62E;
    case RC_ADDR(0x0001a632u): goto L_1A632;
    case RC_ADDR(0x0001a634u): goto L_1A634;
    case RC_ADDR(0x0001a638u): goto L_1A638;
    case RC_ADDR(0x0001a63au): goto L_1A63A;
    case RC_ADDR(0x0001a63eu): goto L_1A63E;
    case RC_ADDR(0x0001a642u): goto L_1A642;
    case RC_ADDR(0x0001a646u): goto L_1A646;
    case RC_ADDR(0x0001a64au): goto L_1A64A;
    case RC_ADDR(0x0001a64eu): goto L_1A64E;
    case RC_ADDR(0x0001a650u): goto L_1A650;
    case RC_ADDR(0x0001a654u): goto L_1A654;
    case RC_ADDR(0x0001a658u): goto L_1A658;
    case RC_ADDR(0x0001a65cu): goto L_1A65C;
    case RC_ADDR(0x0001a660u): goto L_1A660;
    case RC_ADDR(0x0001a662u): goto L_1A662;
    case RC_ADDR(0x0001a664u): goto L_1A664;
    case RC_ADDR(0x0001a668u): goto L_1A668;
    case RC_ADDR(0x0001a670u): goto L_1A670;
    case RC_ADDR(0x0001a674u): goto L_1A674;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1A59A:
    /* 0001a59a   4  link.w A5,#fffffff2 */
    c->pc = RC_ADDR(0x0001a59au);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xeu;

L_1A59E:
    /* 0001a59e   4  clr.w (70c,A4) */
    c->pc = RC_ADDR(0x0001a59eu);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] + 0x70cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1A5A2:
    /* 0001a5a2   4  clr.l (fffffff2,A5) */
    c->pc = RC_ADDR(0x0001a5a2u);
    rc_step(c, m);
    rc_wr32(c, m, (c->a[5] - 0xeu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1A5A6:
    /* 0001a5a6   4  move.l (fffffff2,A5),D0 */
    c->pc = RC_ADDR(0x0001a5a6u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A5AA:
    /* 0001a5aa   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a5aau);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A5AC:
    /* 0001a5ac   4  lea (ffffc6e2,A4),A0 */
    c->pc = RC_ADDR(0x0001a5acu);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x391eu);

L_1A5B0:
    /* 0001a5b0   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001a5b0u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A5B4:
    /* 0001a5b4   4  add.w (8,A5),D1 */
    c->pc = RC_ADDR(0x0001a5b4u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1A5B8:
    /* 0001a5b8   4  sub.w (470,A4),D1 */
    c->pc = RC_ADDR(0x0001a5b8u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x470u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1A5BC:
    /* 0001a5bc   4  move.w D1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001a5bcu);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A5C0:
    /* 0001a5c0   4  move.l (fffffff2,A5),D0 */
    c->pc = RC_ADDR(0x0001a5c0u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A5C4:
    /* 0001a5c4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a5c4u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A5C6:
    /* 0001a5c6   4  lea (ffffc6ea,A4),A0 */
    c->pc = RC_ADDR(0x0001a5c6u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x3916u);

L_1A5CA:
    /* 0001a5ca   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001a5cau);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A5CE:
    /* 0001a5ce   4  add.w (a,A5),D1 */
    c->pc = RC_ADDR(0x0001a5ceu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1A5D2:
    /* 0001a5d2   4  sub.w (472,A4),D1 */
    c->pc = RC_ADDR(0x0001a5d2u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x472u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1A5D6:
    /* 0001a5d6   4  move.w D1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x0001a5d6u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A5DA:
    /* 0001a5da   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001a5dau);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1A5DE:
    /* 0001a5de   4  clr.l (fffffff6,A5) */
    c->pc = RC_ADDR(0x0001a5deu);
    rc_step(c, m);
    rc_wr32(c, m, (c->a[5] - 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1A5E2:
    /* 0001a5e2   4  pea (ffff83ff).l */
    c->pc = RC_ADDR(0x0001a5e2u);
    rc_step(c, m);
    rc_push32(c, m, 0xffff83ffu);

L_1A5E6:
    /* 0001a5e6   4  move.l (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x0001a5e6u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A5EA:
    /* 0001a5ea   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a5eau);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A5EC:
    /* 0001a5ec   4  lea (ffffc704,A4),A0 */
    c->pc = RC_ADDR(0x0001a5ecu);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x38fcu);

L_1A5F0:
    /* 0001a5f0   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001a5f0u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A5F4:
    /* 0001a5f4   4  add.w (fffffffa,A5),D1 */
    c->pc = RC_ADDR(0x0001a5f4u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1A5F8:
    /* 0001a5f8   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0001a5f8u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A5FA:
    /* 0001a5fa   4  move.l (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x0001a5fau);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A5FE:
    /* 0001a5fe   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a5feu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A600:
    /* 0001a600   4  lea (ffffc6f2,A4),A0 */
    c->pc = RC_ADDR(0x0001a600u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x390eu);

L_1A604:
    /* 0001a604   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001a604u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A608:
    /* 0001a608   4  add.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001a608u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1A60C:
    /* 0001a60c   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0001a60cu);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A60E:
    /* 0001a60e   4  jsr (0001aa04) */
    c->pc = RC_ADDR(0x0001a60eu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001a612u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001aa04u);
    return;

L_1A612:
    /* 0001a612   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001a612u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1A614:
    /* 0001a614   2  tst.w D0 */
    c->pc = RC_ADDR(0x0001a614u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1A616:
    /* 0001a616   2  beq 0001a620 */
    c->pc = RC_ADDR(0x0001a616u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1A620;

L_1A618:
    /* 0001a618   6  move.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001a618u);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A61E:
    /* 0001a61e   2  bra 0001a62e */
    c->pc = RC_ADDR(0x0001a61eu);
    rc_step(c, m);
    goto L_1A62E;

L_1A620:
    /* 0001a620   4  addq.l #1,(fffffff6,A5) */
    c->pc = RC_ADDR(0x0001a620u);
    rc_step(c, m);
    t3 = (c->a[5] - 0xau);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_1A624:
    /* 0001a624   8  cmpi.l #9,(fffffff6,A5) */
    c->pc = RC_ADDR(0x0001a624u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0xau));
    rc_cmp(c, RC_L, t0, 0x00000009u);

L_1A62C:
    /* 0001a62c   2  blt 0001a5e2 */
    c->pc = RC_ADDR(0x0001a62cu);
    rc_step(c, m);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1A5E2; }

L_1A62E:
    /* 0001a62e   4  tst.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001a62eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_set_nzvc(c, t0, RC_W);

L_1A632:
    /* 0001a632   2  bne 0001a664 */
    c->pc = RC_ADDR(0x0001a632u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_1A664;

L_1A634:
    /* 0001a634   4  move.l (fffffff2,A5),D0 */
    c->pc = RC_ADDR(0x0001a634u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A638:
    /* 0001a638   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a638u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A63A:
    /* 0001a63a   4  lea (ffffc6e2,A4),A0 */
    c->pc = RC_ADDR(0x0001a63au);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x391eu);

L_1A63E:
    /* 0001a63e   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001a63eu);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A642:
    /* 0001a642   4  add.w (8,A5),D1 */
    c->pc = RC_ADDR(0x0001a642u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1A646:
    /* 0001a646   4  move.w D1,(70c,A4) */
    c->pc = RC_ADDR(0x0001a646u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x70cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A64A:
    /* 0001a64a   4  move.l (fffffff2,A5),D0 */
    c->pc = RC_ADDR(0x0001a64au);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A64E:
    /* 0001a64e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a64eu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A650:
    /* 0001a650   4  lea (ffffc6ea,A4),A0 */
    c->pc = RC_ADDR(0x0001a650u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x3916u);

L_1A654:
    /* 0001a654   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001a654u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A658:
    /* 0001a658   4  add.w (a,A5),D1 */
    c->pc = RC_ADDR(0x0001a658u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1A65C:
    /* 0001a65c   4  move.w D1,(70e,A4) */
    c->pc = RC_ADDR(0x0001a65cu);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x70eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A660:
    /* 0001a660   2  unlk A5 */
    c->pc = RC_ADDR(0x0001a660u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1A662:
    /* 0001a662   2  rts */
    c->pc = RC_ADDR(0x0001a662u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

L_1A664:
    /* 0001a664   4  addq.l #1,(fffffff2,A5) */
    c->pc = RC_ADDR(0x0001a664u);
    rc_step(c, m);
    t3 = (c->a[5] - 0xeu);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_1A668:
    /* 0001a668   8  cmpi.l #4,(fffffff2,A5) */
    c->pc = RC_ADDR(0x0001a668u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    rc_cmp(c, RC_L, t0, 0x00000004u);

L_1A670:
    /* 0001a670   4  blt 0001a5a6 */
    c->pc = RC_ADDR(0x0001a670u);
    rc_step(c, m);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1A5A6; }

L_1A674:
    /* 0001a674   2  bra 0001a660 */
    c->pc = RC_ADDR(0x0001a674u);
    rc_step(c, m);
    rc_tick();
    goto L_1A660;

}
