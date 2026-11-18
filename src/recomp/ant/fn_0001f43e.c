/* fn_0001f43e - 158 byte(s), 49 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001f43e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f43eu): goto L_1F43E;
    case RC_ADDR(0x0001f442u): goto L_1F442;
    case RC_ADDR(0x0001f444u): goto L_1F444;
    case RC_ADDR(0x0001f44au): goto L_1F44A;
    case RC_ADDR(0x0001f44eu): goto L_1F44E;
    case RC_ADDR(0x0001f452u): goto L_1F452;
    case RC_ADDR(0x0001f454u): goto L_1F454;
    case RC_ADDR(0x0001f458u): goto L_1F458;
    case RC_ADDR(0x0001f45cu): goto L_1F45C;
    case RC_ADDR(0x0001f45eu): goto L_1F45E;
    case RC_ADDR(0x0001f460u): goto L_1F460;
    case RC_ADDR(0x0001f462u): goto L_1F462;
    case RC_ADDR(0x0001f464u): goto L_1F464;
    case RC_ADDR(0x0001f466u): goto L_1F466;
    case RC_ADDR(0x0001f46au): goto L_1F46A;
    case RC_ADDR(0x0001f46eu): goto L_1F46E;
    case RC_ADDR(0x0001f472u): goto L_1F472;
    case RC_ADDR(0x0001f476u): goto L_1F476;
    case RC_ADDR(0x0001f47au): goto L_1F47A;
    case RC_ADDR(0x0001f47eu): goto L_1F47E;
    case RC_ADDR(0x0001f482u): goto L_1F482;
    case RC_ADDR(0x0001f484u): goto L_1F484;
    case RC_ADDR(0x0001f488u): goto L_1F488;
    case RC_ADDR(0x0001f48au): goto L_1F48A;
    case RC_ADDR(0x0001f490u): goto L_1F490;
    case RC_ADDR(0x0001f494u): goto L_1F494;
    case RC_ADDR(0x0001f49au): goto L_1F49A;
    case RC_ADDR(0x0001f49cu): goto L_1F49C;
    case RC_ADDR(0x0001f4a2u): goto L_1F4A2;
    case RC_ADDR(0x0001f4a6u): goto L_1F4A6;
    case RC_ADDR(0x0001f4aau): goto L_1F4AA;
    case RC_ADDR(0x0001f4acu): goto L_1F4AC;
    case RC_ADDR(0x0001f4b0u): goto L_1F4B0;
    case RC_ADDR(0x0001f4b2u): goto L_1F4B2;
    case RC_ADDR(0x0001f4b4u): goto L_1F4B4;
    case RC_ADDR(0x0001f4b6u): goto L_1F4B6;
    case RC_ADDR(0x0001f4b8u): goto L_1F4B8;
    case RC_ADDR(0x0001f4bcu): goto L_1F4BC;
    case RC_ADDR(0x0001f4beu): goto L_1F4BE;
    case RC_ADDR(0x0001f4c0u): goto L_1F4C0;
    case RC_ADDR(0x0001f4c2u): goto L_1F4C2;
    case RC_ADDR(0x0001f4c4u): goto L_1F4C4;
    case RC_ADDR(0x0001f4c6u): goto L_1F4C6;
    case RC_ADDR(0x0001f4cau): goto L_1F4CA;
    case RC_ADDR(0x0001f4ceu): goto L_1F4CE;
    case RC_ADDR(0x0001f4d0u): goto L_1F4D0;
    case RC_ADDR(0x0001f4d4u): goto L_1F4D4;
    case RC_ADDR(0x0001f4d6u): goto L_1F4D6;
    case RC_ADDR(0x0001f4dau): goto L_1F4DA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F43E:
    /* 0001f43e   4  link.w A5,#fffffffa */
    c->pc = RC_ADDR(0x0001f43eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x6u;

L_1F442:
    /* 0001f442   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x0001f442u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F444:
    /* 0001f444   6  pea (00010000).l */
    c->pc = RC_ADDR(0x0001f444u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010000u);

L_1F44A:
    /* 0001f44a   4  pea (00000028).l */
    c->pc = RC_ADDR(0x0001f44au);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000028u);

L_1F44E:
    /* 0001f44e   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x0001f44eu);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x0001f452u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_1F452:
    /* 0001f452   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001f452u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1F454:
    /* 0001f454   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001f454u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F458:
    /* 0001f458   4  tst.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001f458u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_L);

L_1F45C:
    /* 0001f45c   2  bne 0001f466 */
    c->pc = RC_ADDR(0x0001f45cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1F466;

L_1F45E:
    /* 0001f45e   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001f45eu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F460:
    /* 0001f460   2  movea.l (A7)+,A2 */
    c->pc = RC_ADDR(0x0001f460u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_1F462:
    /* 0001f462   2  unlk A5 */
    c->pc = RC_ADDR(0x0001f462u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1F464:
    /* 0001f464   2  rts */
    c->pc = RC_ADDR(0x0001f464u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_1F466:
    /* 0001f466   4  move.l (10,A5),-(A7) */
    c->pc = RC_ADDR(0x0001f466u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F46A:
    /* 0001f46a   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x0001f46au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F46E:
    /* 0001f46e   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0001f46eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F472:
    /* 0001f472   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0001f472u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F476:
    /* 0001f476   4  jsr (000238f2) */
    c->pc = RC_ADDR(0x0001f476u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f47au));
    rc_depth++;
    c->pc = RC_ADDR(0x000238f2u);
    return;

L_1F47A:
    /* 0001f47a   4  lea (10,A7),A7 */
    c->pc = RC_ADDR(0x0001f47au);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x10u);

L_1F47E:
    /* 0001f47e   4  movea.l (fffffffc,A5),A2 */
    c->pc = RC_ADDR(0x0001f47eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[2] = t0;

L_1F482:
    /* 0001f482   2  addq.l #8,A2 */
    c->pc = RC_ADDR(0x0001f482u);
    rc_step(c, m, 8);
    c->a[2] += 0x00000008u;

L_1F484:
    /* 0001f484   4  clr.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x0001f484u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1F488:
    /* 0001f488   2  bra 0001f4ca */
    c->pc = RC_ADDR(0x0001f488u);
    rc_step(c, m, 10);
    goto L_1F4CA;

L_1F48A:
    /* 0001f48a   6  pea (00010002).l */
    c->pc = RC_ADDR(0x0001f48au);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010002u);

L_1F490:
    /* 0001f490   4  move.l (c,A5),D0 */
    c->pc = RC_ADDR(0x0001f490u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F494:
    /* 0001f494   6  add.l #f,D0 */
    c->pc = RC_ADDR(0x0001f494u);
    rc_step(c, m, 16);
    t0 = 0x0000000fu;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1F49A:
    /* 0001f49a   2  lsr.l #3,D0 */
    c->pc = RC_ADDR(0x0001f49au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 1, 0, 0x00000003u, rc_d_get(c, 0, RC_L), RC_L));

L_1F49C:
    /* 0001f49c   6  and.l #fffe,D0 */
    c->pc = RC_ADDR(0x0001f49cu);
    rc_step(c, m, 16);
    t0 = 0x0000fffeu;
    t2 = t0 & rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t2, RC_L);
    rc_d_set(c, 0, RC_L, t2);

L_1F4A2:
    /* 0001f4a2   4  move.l (10,A5),D1 */
    c->pc = RC_ADDR(0x0001f4a2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F4A6:
    /* 0001f4a6   4  jsr (ffff82f0,A4) */
    c->pc = RC_ADDR(0x0001f4a6u);
    rc_step(c, m, 18);
    /* vector 125 */
    rc_push32(c, m, RC_ADDR(0x0001f4aau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023de6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022d80u);
    return;

L_1F4AA:
    /* 0001f4aa   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001f4aau);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F4AC:
    /* 0001f4ac   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x0001f4acu);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x0001f4b0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_1F4B0:
    /* 0001f4b0   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001f4b0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1F4B2:
    /* 0001f4b2   2  move.l D0,(A2) */
    c->pc = RC_ADDR(0x0001f4b2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, c->a[2], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F4B4:
    /* 0001f4b4   2  tst.l (A2) */
    c->pc = RC_ADDR(0x0001f4b4u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[2]);
    rc_set_nzvc(c, t0, RC_L);

L_1F4B6:
    /* 0001f4b6   2  bne 0001f4c4 */
    c->pc = RC_ADDR(0x0001f4b6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1F4C4;

L_1F4B8:
    /* 0001f4b8   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0001f4b8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F4BC:
    /* 0001f4bc   2  bsr 0001f4dc */
    c->pc = RC_ADDR(0x0001f4bcu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f4beu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f4dcu);
    return;

L_1F4BE:
    /* 0001f4be   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001f4beu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1F4C0:
    /* 0001f4c0   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001f4c0u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F4C2:
    /* 0001f4c2   2  bra 0001f460 */
    c->pc = RC_ADDR(0x0001f4c2u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1F460;

L_1F4C4:
    /* 0001f4c4   2  addq.l #4,A2 */
    c->pc = RC_ADDR(0x0001f4c4u);
    rc_step(c, m, 8);
    c->a[2] += 0x00000004u;

L_1F4C6:
    /* 0001f4c6   4  addq.w #1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x0001f4c6u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1F4CA:
    /* 0001f4ca   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0001f4cau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F4CE:
    /* 0001f4ce   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001f4ceu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1F4D0:
    /* 0001f4d0   4  cmp.l (8,A5),D0 */
    c->pc = RC_ADDR(0x0001f4d0u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1F4D4:
    /* 0001f4d4   2  bcs 0001f48a */
    c->pc = RC_ADDR(0x0001f4d4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_1F48A; }

L_1F4D6:
    /* 0001f4d6   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001f4d6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F4DA:
    /* 0001f4da   2  bra 0001f460 */
    c->pc = RC_ADDR(0x0001f4dau);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1F460;

}
