/* fn_0000ede8 - 108 byte(s), 36 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000ede8(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000ede8u): goto L_EDE8;
    case RC_ADDR(0x0000edecu): goto L_EDEC;
    case RC_ADDR(0x0000edf0u): goto L_EDF0;
    case RC_ADDR(0x0000edf2u): goto L_EDF2;
    case RC_ADDR(0x0000edf4u): goto L_EDF4;
    case RC_ADDR(0x0000edf6u): goto L_EDF6;
    case RC_ADDR(0x0000edfcu): goto L_EDFC;
    case RC_ADDR(0x0000edfeu): goto L_EDFE;
    case RC_ADDR(0x0000ee02u): goto L_EE02;
    case RC_ADDR(0x0000ee06u): goto L_EE06;
    case RC_ADDR(0x0000ee08u): goto L_EE08;
    case RC_ADDR(0x0000ee0cu): goto L_EE0C;
    case RC_ADDR(0x0000ee0eu): goto L_EE0E;
    case RC_ADDR(0x0000ee10u): goto L_EE10;
    case RC_ADDR(0x0000ee12u): goto L_EE12;
    case RC_ADDR(0x0000ee14u): goto L_EE14;
    case RC_ADDR(0x0000ee18u): goto L_EE18;
    case RC_ADDR(0x0000ee1au): goto L_EE1A;
    case RC_ADDR(0x0000ee1eu): goto L_EE1E;
    case RC_ADDR(0x0000ee20u): goto L_EE20;
    case RC_ADDR(0x0000ee22u): goto L_EE22;
    case RC_ADDR(0x0000ee26u): goto L_EE26;
    case RC_ADDR(0x0000ee28u): goto L_EE28;
    case RC_ADDR(0x0000ee2cu): goto L_EE2C;
    case RC_ADDR(0x0000ee2eu): goto L_EE2E;
    case RC_ADDR(0x0000ee30u): goto L_EE30;
    case RC_ADDR(0x0000ee36u): goto L_EE36;
    case RC_ADDR(0x0000ee38u): goto L_EE38;
    case RC_ADDR(0x0000ee3cu): goto L_EE3C;
    case RC_ADDR(0x0000ee40u): goto L_EE40;
    case RC_ADDR(0x0000ee42u): goto L_EE42;
    case RC_ADDR(0x0000ee48u): goto L_EE48;
    case RC_ADDR(0x0000ee4au): goto L_EE4A;
    case RC_ADDR(0x0000ee4cu): goto L_EE4C;
    case RC_ADDR(0x0000ee50u): goto L_EE50;
    case RC_ADDR(0x0000ee52u): goto L_EE52;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_EDE8:
    /* 0000ede8   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000ede8u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_EDEC:
    /* 0000edec   4  movem.l { A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x0000edecu);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_EDF0:
    /* 0000edf0   2  moveq #1,D5 */
    c->pc = RC_ADDR(0x0000edf0u);
    rc_step(c, m, 4);
    c->d[5] = 0x00000001u;
    rc_set_nzvc(c, c->d[5], RC_L);

L_EDF2:
    /* 0000edf2   2  moveq #0,D6 */
    c->pc = RC_ADDR(0x0000edf2u);
    rc_step(c, m, 4);
    c->d[6] = 0x00000000u;
    rc_set_nzvc(c, c->d[6], RC_L);

L_EDF4:
    /* 0000edf4   2  move.l D6,D0 */
    c->pc = RC_ADDR(0x0000edf4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_EDF6:
    /* 0000edf6   6  add.l #29,D0 */
    c->pc = RC_ADDR(0x0000edf6u);
    rc_step(c, m, 16);
    t0 = 0x00000029u;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_EDFC:
    /* 0000edfc   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000edfcu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_EDFE:
    /* 0000edfe   4  movea.l (140c,A4),A0 */
    c->pc = RC_ADDR(0x0000edfeu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x140cu));
    c->a[0] = t0;

L_EE02:
    /* 0000ee02   4  move.w (0,A0,D0.w),D4 */
    c->pc = RC_ADDR(0x0000ee02u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EE06:
    /* 0000ee06   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x0000ee06u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EE08:
    /* 0000ee08   4  and.w #f,D0 */
    c->pc = RC_ADDR(0x0000ee08u);
    rc_step(c, m, 10);
    t0 = 0x0000000fu;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_EE0C:
    /* 0000ee0c   2  beq 0000ee12 */
    c->pc = RC_ADDR(0x0000ee0cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_EE12;

L_EE0E:
    /* 0000ee0e   2  subq.w #1,D4 */
    c->pc = RC_ADDR(0x0000ee0eu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_EE10:
    /* 0000ee10   2  moveq #0,D5 */
    c->pc = RC_ADDR(0x0000ee10u);
    rc_step(c, m, 4);
    c->d[5] = 0x00000000u;
    rc_set_nzvc(c, c->d[5], RC_L);

L_EE12:
    /* 0000ee12   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x0000ee12u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EE14:
    /* 0000ee14   4  and.w #f0,D0 */
    c->pc = RC_ADDR(0x0000ee14u);
    rc_step(c, m, 10);
    t0 = 0x000000f0u;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_EE18:
    /* 0000ee18   2  beq 0000ee20 */
    c->pc = RC_ADDR(0x0000ee18u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_EE20;

L_EE1A:
    /* 0000ee1a   4  sub.w #10,D4 */
    c->pc = RC_ADDR(0x0000ee1au);
    rc_step(c, m, 10);
    t0 = 0x00000010u;
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_EE1E:
    /* 0000ee1e   2  moveq #0,D5 */
    c->pc = RC_ADDR(0x0000ee1eu);
    rc_step(c, m, 4);
    c->d[5] = 0x00000000u;
    rc_set_nzvc(c, c->d[5], RC_L);

L_EE20:
    /* 0000ee20   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x0000ee20u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EE22:
    /* 0000ee22   4  and.w #f00,D0 */
    c->pc = RC_ADDR(0x0000ee22u);
    rc_step(c, m, 10);
    t0 = 0x00000f00u;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_EE26:
    /* 0000ee26   2  beq 0000ee2e */
    c->pc = RC_ADDR(0x0000ee26u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_EE2E;

L_EE28:
    /* 0000ee28   4  sub.w #100,D4 */
    c->pc = RC_ADDR(0x0000ee28u);
    rc_step(c, m, 10);
    t0 = 0x00000100u;
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_EE2C:
    /* 0000ee2c   2  moveq #0,D5 */
    c->pc = RC_ADDR(0x0000ee2cu);
    rc_step(c, m, 4);
    c->d[5] = 0x00000000u;
    rc_set_nzvc(c, c->d[5], RC_L);

L_EE2E:
    /* 0000ee2e   2  move.l D6,D0 */
    c->pc = RC_ADDR(0x0000ee2eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_EE30:
    /* 0000ee30   6  add.l #29,D0 */
    c->pc = RC_ADDR(0x0000ee30u);
    rc_step(c, m, 16);
    t0 = 0x00000029u;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_EE36:
    /* 0000ee36   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000ee36u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_EE38:
    /* 0000ee38   4  movea.l (140c,A4),A0 */
    c->pc = RC_ADDR(0x0000ee38u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x140cu));
    c->a[0] = t0;

L_EE3C:
    /* 0000ee3c   4  move.w D4,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000ee3cu);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 4, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_EE40:
    /* 0000ee40   2  addq.l #2,D6 */
    c->pc = RC_ADDR(0x0000ee40u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 6, RC_L);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_L, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 6, RC_L, t2);

L_EE42:
    /* 0000ee42   6  cmp.l #40,D6 */
    c->pc = RC_ADDR(0x0000ee42u);
    rc_step(c, m, 14);
    t0 = 0x00000040u;
    t1 = rc_d_get(c, 6, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_EE48:
    /* 0000ee48   2  blt 0000edf4 */
    c->pc = RC_ADDR(0x0000ee48u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_EDF4; }

L_EE4A:
    /* 0000ee4a   2  move.w D5,D0 */
    c->pc = RC_ADDR(0x0000ee4au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EE4C:
    /* 0000ee4c   4  movem.l (SP)+,{ D4 D5 D6 } */
    c->pc = RC_ADDR(0x0000ee4cu);
    rc_step(c, m, 12);
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

L_EE50:
    /* 0000ee50   2  unlk A5 */
    c->pc = RC_ADDR(0x0000ee50u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_EE52:
    /* 0000ee52   2  rts */
    c->pc = RC_ADDR(0x0000ee52u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
