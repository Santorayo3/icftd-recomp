/* fn_0001850e - 92 byte(s), 28 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001850e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001850eu): goto L_1850E;
    case RC_ADDR(0x00018512u): goto L_18512;
    case RC_ADDR(0x00018516u): goto L_18516;
    case RC_ADDR(0x0001851au): goto L_1851A;
    case RC_ADDR(0x0001851eu): goto L_1851E;
    case RC_ADDR(0x00018520u): goto L_18520;
    case RC_ADDR(0x00018524u): goto L_18524;
    case RC_ADDR(0x00018526u): goto L_18526;
    case RC_ADDR(0x0001852au): goto L_1852A;
    case RC_ADDR(0x0001852eu): goto L_1852E;
    case RC_ADDR(0x00018530u): goto L_18530;
    case RC_ADDR(0x00018534u): goto L_18534;
    case RC_ADDR(0x00018538u): goto L_18538;
    case RC_ADDR(0x0001853au): goto L_1853A;
    case RC_ADDR(0x0001853eu): goto L_1853E;
    case RC_ADDR(0x00018540u): goto L_18540;
    case RC_ADDR(0x00018544u): goto L_18544;
    case RC_ADDR(0x00018546u): goto L_18546;
    case RC_ADDR(0x0001854au): goto L_1854A;
    case RC_ADDR(0x0001854cu): goto L_1854C;
    case RC_ADDR(0x00018550u): goto L_18550;
    case RC_ADDR(0x00018554u): goto L_18554;
    case RC_ADDR(0x00018558u): goto L_18558;
    case RC_ADDR(0x0001855cu): goto L_1855C;
    case RC_ADDR(0x00018560u): goto L_18560;
    case RC_ADDR(0x00018562u): goto L_18562;
    case RC_ADDR(0x00018566u): goto L_18566;
    case RC_ADDR(0x00018568u): goto L_18568;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1850E:
    /* 0001850e   4  link.w A5,#fffffff6 */
    c->pc = RC_ADDR(0x0001850eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xau;

L_18512:
    /* 00018512   4  pea (000003ed).l */
    c->pc = RC_ADDR(0x00018512u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000003edu);

L_18516:
    /* 00018516   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00018516u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1851A:
    /* 0001851a   4  jsr (ffff82b4,A4) */
    c->pc = RC_ADDR(0x0001851au);
    rc_step(c, m, 18);
    /* vector 115 */
    rc_push32(c, m, RC_ADDR(0x0001851eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023daau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022518u);
    return;

L_1851E:
    /* 0001851e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001851eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_18520:
    /* 00018520   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00018520u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_18524:
    /* 00018524   2  beq 00018566 */
    c->pc = RC_ADDR(0x00018524u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_18566;

L_18526:
    /* 00018526   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00018526u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1852A:
    /* 0001852a   4  jsr (ffff82c0,A4) */
    c->pc = RC_ADDR(0x0001852au);
    rc_step(c, m, 18);
    /* vector 117 */
    rc_push32(c, m, RC_ADDR(0x0001852eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023db6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022688u);
    return;

L_1852E:
    /* 0001852e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001852eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_18530:
    /* 00018530   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00018530u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_18534:
    /* 00018534   4  jsr (ffff82ba,A4) */
    c->pc = RC_ADDR(0x00018534u);
    rc_step(c, m, 18);
    /* vector 116 */
    rc_push32(c, m, RC_ADDR(0x00018538u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023db0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022532u);
    return;

L_18538:
    /* 00018538   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00018538u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1853A:
    /* 0001853a   4  clr.w (fffffff6,A5) */
    c->pc = RC_ADDR(0x0001853au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1853E:
    /* 0001853e   2  bra 00018558 */
    c->pc = RC_ADDR(0x0001853eu);
    rc_step(c, m, 10);
    goto L_18558;

L_18540:
    /* 00018540   4  jsr (000183d2) */
    c->pc = RC_ADDR(0x00018540u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00018544u));
    rc_depth++;
    c->pc = RC_ADDR(0x000183d2u);
    return;

L_18544:
    /* 00018544   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00018544u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_18546:
    /* 00018546   4  move.w (fffffff6,A5),D1 */
    c->pc = RC_ADDR(0x00018546u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1854A:
    /* 0001854a   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x0001854au);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_1854C:
    /* 0001854c   4  movea.l (e,A5),A0 */
    c->pc = RC_ADDR(0x0001854cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xeu));
    c->a[0] = t0;

L_18550:
    /* 00018550   4  move.l D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x00018550u);
    rc_step(c, m, 18);
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_18554:
    /* 00018554   4  addq.w #1,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00018554u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_18558:
    /* 00018558   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00018558u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1855C:
    /* 0001855c   4  cmp.w (c,A5),D0 */
    c->pc = RC_ADDR(0x0001855cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_18560:
    /* 00018560   2  bcs 00018540 */
    c->pc = RC_ADDR(0x00018560u);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_18540; }

L_18562:
    /* 00018562   4  jsr (ffff82c6,A4) */
    c->pc = RC_ADDR(0x00018562u);
    rc_step(c, m, 18);
    /* vector 118 */
    rc_push32(c, m, RC_ADDR(0x00018566u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dbcu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022892u);
    return;

L_18566:
    /* 00018566   2  unlk A5 */
    c->pc = RC_ADDR(0x00018566u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_18568:
    /* 00018568   2  rts */
    c->pc = RC_ADDR(0x00018568u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
