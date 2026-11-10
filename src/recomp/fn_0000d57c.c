/* fn_0000d57c - 108 byte(s), 36 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000d57c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000d57cu): goto L_D57C;
    case RC_ADDR(0x0000d580u): goto L_D580;
    case RC_ADDR(0x0000d584u): goto L_D584;
    case RC_ADDR(0x0000d586u): goto L_D586;
    case RC_ADDR(0x0000d588u): goto L_D588;
    case RC_ADDR(0x0000d58au): goto L_D58A;
    case RC_ADDR(0x0000d590u): goto L_D590;
    case RC_ADDR(0x0000d592u): goto L_D592;
    case RC_ADDR(0x0000d596u): goto L_D596;
    case RC_ADDR(0x0000d59au): goto L_D59A;
    case RC_ADDR(0x0000d59cu): goto L_D59C;
    case RC_ADDR(0x0000d5a0u): goto L_D5A0;
    case RC_ADDR(0x0000d5a2u): goto L_D5A2;
    case RC_ADDR(0x0000d5a4u): goto L_D5A4;
    case RC_ADDR(0x0000d5a6u): goto L_D5A6;
    case RC_ADDR(0x0000d5a8u): goto L_D5A8;
    case RC_ADDR(0x0000d5acu): goto L_D5AC;
    case RC_ADDR(0x0000d5aeu): goto L_D5AE;
    case RC_ADDR(0x0000d5b2u): goto L_D5B2;
    case RC_ADDR(0x0000d5b4u): goto L_D5B4;
    case RC_ADDR(0x0000d5b6u): goto L_D5B6;
    case RC_ADDR(0x0000d5bau): goto L_D5BA;
    case RC_ADDR(0x0000d5bcu): goto L_D5BC;
    case RC_ADDR(0x0000d5c0u): goto L_D5C0;
    case RC_ADDR(0x0000d5c2u): goto L_D5C2;
    case RC_ADDR(0x0000d5c4u): goto L_D5C4;
    case RC_ADDR(0x0000d5cau): goto L_D5CA;
    case RC_ADDR(0x0000d5ccu): goto L_D5CC;
    case RC_ADDR(0x0000d5d0u): goto L_D5D0;
    case RC_ADDR(0x0000d5d4u): goto L_D5D4;
    case RC_ADDR(0x0000d5d6u): goto L_D5D6;
    case RC_ADDR(0x0000d5dcu): goto L_D5DC;
    case RC_ADDR(0x0000d5deu): goto L_D5DE;
    case RC_ADDR(0x0000d5e0u): goto L_D5E0;
    case RC_ADDR(0x0000d5e4u): goto L_D5E4;
    case RC_ADDR(0x0000d5e6u): goto L_D5E6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_D57C:
    /* 0000d57c   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000d57cu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_D580:
    /* 0000d580   4  movem.l { A1 A2 A3 },-(SP) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000d580u);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_D584:
    /* 0000d584   2  moveq #1,D5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000d584u);
    c->d[5] = 0x00000001u;
    rc_set_nzvc(c, c->d[5], RC_L);

L_D586:
    /* 0000d586   2  moveq #0,D6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000d586u);
    c->d[6] = 0x00000000u;
    rc_set_nzvc(c, c->d[6], RC_L);

L_D588:
    /* 0000d588   2  move.l D6,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000d588u);
    t0 = rc_d_get(c, 6, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D58A:
    /* 0000d58a   6  add.l #29,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000d58au);
    t0 = 0x00000029u;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_D590:
    /* 0000d590   2  asl.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000d590u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_D592:
    /* 0000d592   4  movea.l (a12,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000d592u);
    t0 = rc_rd32(c, m, (c->a[4] + 0xa12u));
    c->a[0] = t0;

L_D596:
    /* 0000d596   4  move.w (0,A0,D0.w),D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000d596u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D59A:
    /* 0000d59a   2  move.w D4,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000d59au);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D59C:
    /* 0000d59c   4  and.w #f,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000d59cu);
    t0 = 0x0000000fu;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_D5A0:
    /* 0000d5a0   2  beq 0000d5a6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000d5a0u);
    if (rc_cond(c, 7)) goto L_D5A6;

L_D5A2:
    /* 0000d5a2   2  subq.w #1,D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000d5a2u);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_D5A4:
    /* 0000d5a4   2  moveq #0,D5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000d5a4u);
    c->d[5] = 0x00000000u;
    rc_set_nzvc(c, c->d[5], RC_L);

L_D5A6:
    /* 0000d5a6   2  move.w D4,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000d5a6u);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D5A8:
    /* 0000d5a8   4  and.w #f0,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000d5a8u);
    t0 = 0x000000f0u;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_D5AC:
    /* 0000d5ac   2  beq 0000d5b4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000d5acu);
    if (rc_cond(c, 7)) goto L_D5B4;

L_D5AE:
    /* 0000d5ae   4  sub.w #10,D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000d5aeu);
    t0 = 0x00000010u;
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_D5B2:
    /* 0000d5b2   2  moveq #0,D5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000d5b2u);
    c->d[5] = 0x00000000u;
    rc_set_nzvc(c, c->d[5], RC_L);

L_D5B4:
    /* 0000d5b4   2  move.w D4,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000d5b4u);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D5B6:
    /* 0000d5b6   4  and.w #f00,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000d5b6u);
    t0 = 0x00000f00u;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_D5BA:
    /* 0000d5ba   2  beq 0000d5c2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000d5bau);
    if (rc_cond(c, 7)) goto L_D5C2;

L_D5BC:
    /* 0000d5bc   4  sub.w #100,D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000d5bcu);
    t0 = 0x00000100u;
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_D5C0:
    /* 0000d5c0   2  moveq #0,D5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000d5c0u);
    c->d[5] = 0x00000000u;
    rc_set_nzvc(c, c->d[5], RC_L);

L_D5C2:
    /* 0000d5c2   2  move.l D6,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000d5c2u);
    t0 = rc_d_get(c, 6, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D5C4:
    /* 0000d5c4   6  add.l #29,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000d5c4u);
    t0 = 0x00000029u;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_D5CA:
    /* 0000d5ca   2  asl.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000d5cau);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_D5CC:
    /* 0000d5cc   4  movea.l (a12,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000d5ccu);
    t0 = rc_rd32(c, m, (c->a[4] + 0xa12u));
    c->a[0] = t0;

L_D5D0:
    /* 0000d5d0   4  move.w D4,(0,A0,D0.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000d5d0u);
    t0 = rc_d_get(c, 4, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D5D4:
    /* 0000d5d4   2  addq.l #2,D6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000d5d4u);
    t1 = rc_d_get(c, 6, RC_L);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_L, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 6, RC_L, t2);

L_D5D6:
    /* 0000d5d6   6  cmp.l #40,D6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000d5d6u);
    t0 = 0x00000040u;
    t1 = rc_d_get(c, 6, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_D5DC:
    /* 0000d5dc   2  blt 0000d588 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000d5dcu);
    if (rc_cond(c, 13)) { rc_tick(); goto L_D588; }

L_D5DE:
    /* 0000d5de   2  move.w D5,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000d5deu);
    t0 = rc_d_get(c, 5, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D5E0:
    /* 0000d5e0   4  movem.l (SP)+,{ D4 D5 D6 } */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000d5e0u);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[6] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_D5E4:
    /* 0000d5e4   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000d5e4u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_D5E6:
    /* 0000d5e6   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000d5e6u);
    rc_ret(c, m);
    return;

}
