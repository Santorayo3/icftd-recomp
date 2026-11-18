/* fn_0001287c - 110 byte(s), 33 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001287c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001287cu): goto L_1287C;
    case RC_ADDR(0x00012880u): goto L_12880;
    case RC_ADDR(0x00012884u): goto L_12884;
    case RC_ADDR(0x00012886u): goto L_12886;
    case RC_ADDR(0x0001288au): goto L_1288A;
    case RC_ADDR(0x0001288cu): goto L_1288C;
    case RC_ADDR(0x00012890u): goto L_12890;
    case RC_ADDR(0x00012894u): goto L_12894;
    case RC_ADDR(0x00012896u): goto L_12896;
    case RC_ADDR(0x0001289au): goto L_1289A;
    case RC_ADDR(0x0001289cu): goto L_1289C;
    case RC_ADDR(0x000128a0u): goto L_128A0;
    case RC_ADDR(0x000128a2u): goto L_128A2;
    case RC_ADDR(0x000128a6u): goto L_128A6;
    case RC_ADDR(0x000128aau): goto L_128AA;
    case RC_ADDR(0x000128aeu): goto L_128AE;
    case RC_ADDR(0x000128b0u): goto L_128B0;
    case RC_ADDR(0x000128b4u): goto L_128B4;
    case RC_ADDR(0x000128bau): goto L_128BA;
    case RC_ADDR(0x000128bcu): goto L_128BC;
    case RC_ADDR(0x000128c0u): goto L_128C0;
    case RC_ADDR(0x000128c4u): goto L_128C4;
    case RC_ADDR(0x000128c8u): goto L_128C8;
    case RC_ADDR(0x000128cau): goto L_128CA;
    case RC_ADDR(0x000128ceu): goto L_128CE;
    case RC_ADDR(0x000128d2u): goto L_128D2;
    case RC_ADDR(0x000128d6u): goto L_128D6;
    case RC_ADDR(0x000128d8u): goto L_128D8;
    case RC_ADDR(0x000128dcu): goto L_128DC;
    case RC_ADDR(0x000128e0u): goto L_128E0;
    case RC_ADDR(0x000128e4u): goto L_128E4;
    case RC_ADDR(0x000128e6u): goto L_128E6;
    case RC_ADDR(0x000128e8u): goto L_128E8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1287C:
    /* 0001287c   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x0001287cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_12880:
    /* 00012880   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00012880u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_12884:
    /* 00012884   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00012884u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_12886:
    /* 00012886   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00012886u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1288A:
    /* 0001288a   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001288au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1288C:
    /* 0001288c   4  lea (1502,A4),A0 */
    c->pc = RC_ADDR(0x0001288cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1502u);

L_12890:
    /* 00012890   4  tst.l (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00012890u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_L);

L_12894:
    /* 00012894   2  beq 000128b0 */
    c->pc = RC_ADDR(0x00012894u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_128B0;

L_12896:
    /* 00012896   4  pea (00000320).l */
    c->pc = RC_ADDR(0x00012896u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000320u);

L_1289A:
    /* 0001289a   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001289au);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1289C:
    /* 0001289c   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001289cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_128A0:
    /* 000128a0   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000128a0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_128A2:
    /* 000128a2   4  lea (1502,A4),A0 */
    c->pc = RC_ADDR(0x000128a2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1502u);

L_128A6:
    /* 000128a6   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x000128a6u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_128AA:
    /* 000128aa   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x000128aau);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x000128aeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_128AE:
    /* 000128ae   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000128aeu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_128B0:
    /* 000128b0   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000128b0u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_128B4:
    /* 000128b4   6  cmpi.w #b8,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000128b4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x000000b8u);

L_128BA:
    /* 000128ba   2  bcs 00012884 */
    c->pc = RC_ADDR(0x000128bau);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_12884; }

L_128BC:
    /* 000128bc   4  pea (00001c20).l */
    c->pc = RC_ADDR(0x000128bcu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00001c20u);

L_128C0:
    /* 000128c0   4  move.l (fffffaa0,A4),-(A7) */
    c->pc = RC_ADDR(0x000128c0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x560u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_128C4:
    /* 000128c4   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x000128c4u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x000128c8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_128C8:
    /* 000128c8   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000128c8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_128CA:
    /* 000128ca   4  move.l (fffffac4,A4),-(A7) */
    c->pc = RC_ADDR(0x000128cau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x53cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_128CE:
    /* 000128ce   4  move.l (fffffabc,A4),-(A7) */
    c->pc = RC_ADDR(0x000128ceu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x544u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_128D2:
    /* 000128d2   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x000128d2u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x000128d6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_128D6:
    /* 000128d6   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000128d6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_128D8:
    /* 000128d8   4  move.l (fffffac8,A4),-(A7) */
    c->pc = RC_ADDR(0x000128d8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x538u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_128DC:
    /* 000128dc   4  move.l (fffffac0,A4),-(A7) */
    c->pc = RC_ADDR(0x000128dcu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x540u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_128E0:
    /* 000128e0   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x000128e0u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x000128e4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_128E4:
    /* 000128e4   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000128e4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_128E6:
    /* 000128e6   2  unlk A5 */
    c->pc = RC_ADDR(0x000128e6u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_128E8:
    /* 000128e8   2  rts */
    c->pc = RC_ADDR(0x000128e8u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
