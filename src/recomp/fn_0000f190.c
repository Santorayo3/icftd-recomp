/* fn_0000f190 - 114 byte(s), 41 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000f190(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000f190u): goto L_F190;
    case RC_ADDR(0x0000f194u): goto L_F194;
    case RC_ADDR(0x0000f196u): goto L_F196;
    case RC_ADDR(0x0000f19au): goto L_F19A;
    case RC_ADDR(0x0000f19cu): goto L_F19C;
    case RC_ADDR(0x0000f19eu): goto L_F19E;
    case RC_ADDR(0x0000f1a2u): goto L_F1A2;
    case RC_ADDR(0x0000f1a6u): goto L_F1A6;
    case RC_ADDR(0x0000f1aau): goto L_F1AA;
    case RC_ADDR(0x0000f1aeu): goto L_F1AE;
    case RC_ADDR(0x0000f1b0u): goto L_F1B0;
    case RC_ADDR(0x0000f1b2u): goto L_F1B2;
    case RC_ADDR(0x0000f1b4u): goto L_F1B4;
    case RC_ADDR(0x0000f1b6u): goto L_F1B6;
    case RC_ADDR(0x0000f1bau): goto L_F1BA;
    case RC_ADDR(0x0000f1bcu): goto L_F1BC;
    case RC_ADDR(0x0000f1beu): goto L_F1BE;
    case RC_ADDR(0x0000f1c0u): goto L_F1C0;
    case RC_ADDR(0x0000f1c2u): goto L_F1C2;
    case RC_ADDR(0x0000f1c6u): goto L_F1C6;
    case RC_ADDR(0x0000f1c8u): goto L_F1C8;
    case RC_ADDR(0x0000f1ccu): goto L_F1CC;
    case RC_ADDR(0x0000f1ceu): goto L_F1CE;
    case RC_ADDR(0x0000f1d2u): goto L_F1D2;
    case RC_ADDR(0x0000f1d4u): goto L_F1D4;
    case RC_ADDR(0x0000f1dau): goto L_F1DA;
    case RC_ADDR(0x0000f1dcu): goto L_F1DC;
    case RC_ADDR(0x0000f1deu): goto L_F1DE;
    case RC_ADDR(0x0000f1e0u): goto L_F1E0;
    case RC_ADDR(0x0000f1e2u): goto L_F1E2;
    case RC_ADDR(0x0000f1e6u): goto L_F1E6;
    case RC_ADDR(0x0000f1e8u): goto L_F1E8;
    case RC_ADDR(0x0000f1eau): goto L_F1EA;
    case RC_ADDR(0x0000f1eeu): goto L_F1EE;
    case RC_ADDR(0x0000f1f0u): goto L_F1F0;
    case RC_ADDR(0x0000f1f2u): goto L_F1F2;
    case RC_ADDR(0x0000f1f4u): goto L_F1F4;
    case RC_ADDR(0x0000f1f6u): goto L_F1F6;
    case RC_ADDR(0x0000f1fau): goto L_F1FA;
    case RC_ADDR(0x0000f1fcu): goto L_F1FC;
    case RC_ADDR(0x0000f200u): goto L_F200;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_F190:
    /* 0000f190   4  movem.l { D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 A7 },-(SP) */
    c->pc = RC_ADDR(0x0000f190u);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[4]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[0]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[0]);
    c->a[7] = t3;

L_F194:
    /* 0000f194   2  movea.l A0,A3 */
    c->pc = RC_ADDR(0x0000f194u);
    t0 = rc_a_get(c, 0, RC_L);
    c->a[3] = t0;

L_F196:
    /* 0000f196   4  lea (c6,A6),A1 */
    c->pc = RC_ADDR(0x0000f196u);
    c->a[1] = (c->a[6] + 0xc6u);

L_F19A:
    /* 0000f19a   2  move.l D0,D6 */
    c->pc = RC_ADDR(0x0000f19au);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 6, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F19C:
    /* 0000f19c   2  clr.b D7 */
    c->pc = RC_ADDR(0x0000f19cu);
    rc_d_set(c, 7, RC_B, 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_F19E:
    /* 0000f19e   4  clr.l (0,A1) */
    c->pc = RC_ADDR(0x0000f19eu);
    rc_wr32(c, m, (c->a[1] + 0x0u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_F1A2:
    /* 0000f1a2   4  clr.b (10,A1) */
    c->pc = RC_ADDR(0x0000f1a2u);
    rc_wr8(c, m, (c->a[1] + 0x10u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_F1A6:
    /* 0000f1a6   4  clr.b (11,A1) */
    c->pc = RC_ADDR(0x0000f1a6u);
    rc_wr8(c, m, (c->a[1] + 0x11u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_F1AA:
    /* 0000f1aa   4  move.l (30,A0),D0 */
    c->pc = RC_ADDR(0x0000f1aau);
    t0 = rc_rd32(c, m, (c->a[0] + 0x30u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F1AE:
    /* 0000f1ae   2  beq 0000f1f0 */
    c->pc = RC_ADDR(0x0000f1aeu);
    if (rc_cond(c, 7)) goto L_F1F0;

L_F1B0:
    /* 0000f1b0   2  add.l A3,D0 */
    c->pc = RC_ADDR(0x0000f1b0u);
    t0 = rc_a_get(c, 3, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_F1B2:
    /* 0000f1b2   2  movea.l D0,A2 */
    c->pc = RC_ADDR(0x0000f1b2u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[2] = t0;

L_F1B4:
    /* 0000f1b4   2  move.l D6,D5 */
    c->pc = RC_ADDR(0x0000f1b4u);
    t0 = rc_d_get(c, 6, RC_L);
    rc_d_set(c, 5, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F1B6:
    /* 0000f1b6   4  move.l A2,(0,A1) */
    c->pc = RC_ADDR(0x0000f1b6u);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, (c->a[1] + 0x0u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_F1BA:
    /* 0000f1ba   2  tst.l D5 */
    c->pc = RC_ADDR(0x0000f1bau);
    t0 = rc_d_get(c, 5, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_F1BC:
    /* 0000f1bc   2  ble 0000f1f0 */
    c->pc = RC_ADDR(0x0000f1bcu);
    if (rc_cond(c, 15)) goto L_F1F0;

L_F1BE:
    /* 0000f1be   2  move.w (A2)+,D0 */
    c->pc = RC_ADDR(0x0000f1beu);
    t3 = c->a[2];
    c->a[2] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F1C0:
    /* 0000f1c0   2  beq 0000f1b6 */
    c->pc = RC_ADDR(0x0000f1c0u);
    if (rc_cond(c, 7)) { rc_tick(); goto L_F1B6; }

L_F1C2:
    /* 0000f1c2   4  cmpi.w #ffff,D0 */
    c->pc = RC_ADDR(0x0000f1c2u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_F1C6:
    /* 0000f1c6   2  beq 0000f1f0 */
    c->pc = RC_ADDR(0x0000f1c6u);
    if (rc_cond(c, 7)) goto L_F1F0;

L_F1C8:
    /* 0000f1c8   4  cmpi.w #8200,D0 */
    c->pc = RC_ADDR(0x0000f1c8u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t0, 0x00008200u);

L_F1CC:
    /* 0000f1cc   2  bcc 0000f1b6 */
    c->pc = RC_ADDR(0x0000f1ccu);
    if (rc_cond(c, 4)) { rc_tick(); goto L_F1B6; }

L_F1CE:
    /* 0000f1ce   4  cmpi.w #8100,D0 */
    c->pc = RC_ADDR(0x0000f1ceu);
    t0 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t0, 0x00008100u);

L_F1D2:
    /* 0000f1d2   2  bcc 0000f1e8 */
    c->pc = RC_ADDR(0x0000f1d2u);
    if (rc_cond(c, 4)) goto L_F1E8;

L_F1D4:
    /* 0000f1d4   6  andi.l #ff,D0 */
    c->pc = RC_ADDR(0x0000f1d4u);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 & 0x000000ffu;
    rc_d_set(c, 0, RC_L, t2);
    rc_set_nzvc(c, t2, RC_L);

L_F1DA:
    /* 0000f1da   2  sub.l D0,D5 */
    c->pc = RC_ADDR(0x0000f1dau);
    t0 = rc_d_get(c, 0, RC_L);
    t1 = rc_d_get(c, 5, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 5, RC_L, t2);

L_F1DC:
    /* 0000f1dc   2  bpl 0000f1b6 */
    c->pc = RC_ADDR(0x0000f1dcu);
    if (rc_cond(c, 10)) { rc_tick(); goto L_F1B6; }

L_F1DE:
    /* 0000f1de   2  move.l D5,D0 */
    c->pc = RC_ADDR(0x0000f1deu);
    t0 = rc_d_get(c, 5, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F1E0:
    /* 0000f1e0   2  neg.l D0 */
    c->pc = RC_ADDR(0x0000f1e0u);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_L, 0u, t1, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_F1E2:
    /* 0000f1e2   4  move.b D0,(11,A1) */
    c->pc = RC_ADDR(0x0000f1e2u);
    t0 = rc_d_get(c, 0, RC_B);
    rc_wr8(c, m, (c->a[1] + 0x11u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_F1E6:
    /* 0000f1e6   2  bra 0000f1b6 */
    c->pc = RC_ADDR(0x0000f1e6u);
    rc_tick();
    goto L_F1B6;

L_F1E8:
    /* 0000f1e8   2  addq.b #1,D0 */
    c->pc = RC_ADDR(0x0000f1e8u);
    t1 = rc_d_get(c, 0, RC_B);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_B, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_B, t2);

L_F1EA:
    /* 0000f1ea   4  move.b D0,(10,A1) */
    c->pc = RC_ADDR(0x0000f1eau);
    t0 = rc_d_get(c, 0, RC_B);
    rc_wr8(c, m, (c->a[1] + 0x10u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_F1EE:
    /* 0000f1ee   2  bra 0000f1b6 */
    c->pc = RC_ADDR(0x0000f1eeu);
    rc_tick();
    goto L_F1B6;

L_F1F0:
    /* 0000f1f0   2  addq.l #4,A0 */
    c->pc = RC_ADDR(0x0000f1f0u);
    c->a[0] += 0x00000004u;

L_F1F2:
    /* 0000f1f2   2  addq.l #4,A1 */
    c->pc = RC_ADDR(0x0000f1f2u);
    c->a[1] += 0x00000004u;

L_F1F4:
    /* 0000f1f4   2  addq.b #1,D7 */
    c->pc = RC_ADDR(0x0000f1f4u);
    t1 = rc_d_get(c, 7, RC_B);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_B, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 7, RC_B, t2);

L_F1F6:
    /* 0000f1f6   4  cmpi.b #4,D7 */
    c->pc = RC_ADDR(0x0000f1f6u);
    t0 = rc_d_get(c, 7, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000004u);

L_F1FA:
    /* 0000f1fa   2  bne 0000f19e */
    c->pc = RC_ADDR(0x0000f1fau);
    if (rc_cond(c, 6)) { rc_tick(); goto L_F19E; }

L_F1FC:
    /* 0000f1fc   4  movem.l (SP)+,{ D0 D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 } */
    c->pc = RC_ADDR(0x0000f1fcu);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[3] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[6] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[7] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[6] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_F200:
    /* 0000f200   2  rts */
    c->pc = RC_ADDR(0x0000f200u);
    rc_ret(c, m);
    return;

}
