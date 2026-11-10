/* fn_0001a492 - 170 byte(s), 56 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001a492(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001a492u): goto L_1A492;
    case RC_ADDR(0x0001a496u): goto L_1A496;
    case RC_ADDR(0x0001a49au): goto L_1A49A;
    case RC_ADDR(0x0001a49cu): goto L_1A49C;
    case RC_ADDR(0x0001a49eu): goto L_1A49E;
    case RC_ADDR(0x0001a4a4u): goto L_1A4A4;
    case RC_ADDR(0x0001a4a8u): goto L_1A4A8;
    case RC_ADDR(0x0001a4acu): goto L_1A4AC;
    case RC_ADDR(0x0001a4b0u): goto L_1A4B0;
    case RC_ADDR(0x0001a4b2u): goto L_1A4B2;
    case RC_ADDR(0x0001a4b4u): goto L_1A4B4;
    case RC_ADDR(0x0001a4b6u): goto L_1A4B6;
    case RC_ADDR(0x0001a4bau): goto L_1A4BA;
    case RC_ADDR(0x0001a4bcu): goto L_1A4BC;
    case RC_ADDR(0x0001a4beu): goto L_1A4BE;
    case RC_ADDR(0x0001a4c2u): goto L_1A4C2;
    case RC_ADDR(0x0001a4c8u): goto L_1A4C8;
    case RC_ADDR(0x0001a4cau): goto L_1A4CA;
    case RC_ADDR(0x0001a4ccu): goto L_1A4CC;
    case RC_ADDR(0x0001a4d0u): goto L_1A4D0;
    case RC_ADDR(0x0001a4d2u): goto L_1A4D2;
    case RC_ADDR(0x0001a4d4u): goto L_1A4D4;
    case RC_ADDR(0x0001a4d8u): goto L_1A4D8;
    case RC_ADDR(0x0001a4deu): goto L_1A4DE;
    case RC_ADDR(0x0001a4e0u): goto L_1A4E0;
    case RC_ADDR(0x0001a4e2u): goto L_1A4E2;
    case RC_ADDR(0x0001a4e4u): goto L_1A4E4;
    case RC_ADDR(0x0001a4e6u): goto L_1A4E6;
    case RC_ADDR(0x0001a4e8u): goto L_1A4E8;
    case RC_ADDR(0x0001a4ecu): goto L_1A4EC;
    case RC_ADDR(0x0001a4eeu): goto L_1A4EE;
    case RC_ADDR(0x0001a4f0u): goto L_1A4F0;
    case RC_ADDR(0x0001a4f4u): goto L_1A4F4;
    case RC_ADDR(0x0001a4f8u): goto L_1A4F8;
    case RC_ADDR(0x0001a4fcu): goto L_1A4FC;
    case RC_ADDR(0x0001a4feu): goto L_1A4FE;
    case RC_ADDR(0x0001a500u): goto L_1A500;
    case RC_ADDR(0x0001a502u): goto L_1A502;
    case RC_ADDR(0x0001a506u): goto L_1A506;
    case RC_ADDR(0x0001a508u): goto L_1A508;
    case RC_ADDR(0x0001a50au): goto L_1A50A;
    case RC_ADDR(0x0001a50eu): goto L_1A50E;
    case RC_ADDR(0x0001a512u): goto L_1A512;
    case RC_ADDR(0x0001a516u): goto L_1A516;
    case RC_ADDR(0x0001a518u): goto L_1A518;
    case RC_ADDR(0x0001a51au): goto L_1A51A;
    case RC_ADDR(0x0001a520u): goto L_1A520;
    case RC_ADDR(0x0001a522u): goto L_1A522;
    case RC_ADDR(0x0001a524u): goto L_1A524;
    case RC_ADDR(0x0001a526u): goto L_1A526;
    case RC_ADDR(0x0001a52cu): goto L_1A52C;
    case RC_ADDR(0x0001a52eu): goto L_1A52E;
    case RC_ADDR(0x0001a530u): goto L_1A530;
    case RC_ADDR(0x0001a534u): goto L_1A534;
    case RC_ADDR(0x0001a538u): goto L_1A538;
    case RC_ADDR(0x0001a53au): goto L_1A53A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1A492:
    /* 0001a492   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001a492u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1A496:
    /* 0001a496   4  movem.l { A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x0001a496u);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_1A49A:
    /* 0001a49a   2  moveq #0,D6 */
    c->pc = RC_ADDR(0x0001a49au);
    c->d[6] = 0x00000000u;
    rc_set_nzvc(c, c->d[6], RC_L);

L_1A49C:
    /* 0001a49c   2  move.l D6,D5 */
    c->pc = RC_ADDR(0x0001a49cu);
    t0 = rc_d_get(c, 6, RC_L);
    rc_d_set(c, 5, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A49E:
    /* 0001a49e   6  cmp.l #1,D5 */
    c->pc = RC_ADDR(0x0001a49eu);
    t0 = 0x00000001u;
    t1 = rc_d_get(c, 5, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1A4A4:
    /* 0001a4a4   4  bge 0001a534 */
    c->pc = RC_ADDR(0x0001a4a4u);
    if (rc_cond(c, 12)) goto L_1A534;

L_1A4A8:
    /* 0001a4a8   4  jsr (0001ec16) */
    c->pc = RC_ADDR(0x0001a4a8u);
    rc_push32(c, m, RC_ADDR(0x0001a4acu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001ec16u);
    return;

L_1A4AC:
    /* 0001a4ac   4  btst #0,D0 */
    c->pc = RC_ADDR(0x0001a4acu);
    t4 = 0x00000000u;
    t0 = rc_d_get(c, 0, RC_B);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_1A4B0:
    /* 0001a4b0   2  beq 0001a524 */
    c->pc = RC_ADDR(0x0001a4b0u);
    if (rc_cond(c, 7)) goto L_1A524;

L_1A4B2:
    /* 0001a4b2   2  move.l D6,D0 */
    c->pc = RC_ADDR(0x0001a4b2u);
    t0 = rc_d_get(c, 6, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A4B4:
    /* 0001a4b4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a4b4u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_1A4B6:
    /* 0001a4b6   4  lea (ffffc67e,A4),A0 */
    c->pc = RC_ADDR(0x0001a4b6u);
    c->a[0] = (c->a[4] - 0x3982u);

L_1A4BA:
    /* 0001a4ba   2  move.l D5,D1 */
    c->pc = RC_ADDR(0x0001a4bau);
    t0 = rc_d_get(c, 5, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A4BC:
    /* 0001a4bc   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001a4bcu);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_1A4BE:
    /* 0001a4be   4  lea (1cc6,A4),A1 */
    c->pc = RC_ADDR(0x0001a4beu);
    c->a[1] = (c->a[4] + 0x1cc6u);

L_1A4C2:
    /* 0001a4c2   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001a4c2u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A4C8:
    /* 0001a4c8   2  move.l D6,D0 */
    c->pc = RC_ADDR(0x0001a4c8u);
    t0 = rc_d_get(c, 6, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A4CA:
    /* 0001a4ca   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a4cau);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_1A4CC:
    /* 0001a4cc   4  lea (ffffc686,A4),A0 */
    c->pc = RC_ADDR(0x0001a4ccu);
    c->a[0] = (c->a[4] - 0x397au);

L_1A4D0:
    /* 0001a4d0   2  move.l D5,D1 */
    c->pc = RC_ADDR(0x0001a4d0u);
    t0 = rc_d_get(c, 5, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A4D2:
    /* 0001a4d2   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001a4d2u);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_1A4D4:
    /* 0001a4d4   4  lea (1cc8,A4),A1 */
    c->pc = RC_ADDR(0x0001a4d4u);
    c->a[1] = (c->a[4] + 0x1cc8u);

L_1A4D8:
    /* 0001a4d8   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001a4d8u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A4DE:
    /* 0001a4de   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x0001a4deu);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_1A4E0:
    /* 0001a4e0   2  cmp.l D4,D5 */
    c->pc = RC_ADDR(0x0001a4e0u);
    t0 = rc_d_get(c, 4, RC_L);
    t1 = rc_d_get(c, 5, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1A4E2:
    /* 0001a4e2   2  beq 0001a518 */
    c->pc = RC_ADDR(0x0001a4e2u);
    if (rc_cond(c, 7)) goto L_1A518;

L_1A4E4:
    /* 0001a4e4   2  move.l D5,D0 */
    c->pc = RC_ADDR(0x0001a4e4u);
    t0 = rc_d_get(c, 5, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A4E6:
    /* 0001a4e6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a4e6u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_1A4E8:
    /* 0001a4e8   4  lea (1cc6,A4),A0 */
    c->pc = RC_ADDR(0x0001a4e8u);
    c->a[0] = (c->a[4] + 0x1cc6u);

L_1A4EC:
    /* 0001a4ec   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x0001a4ecu);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A4EE:
    /* 0001a4ee   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001a4eeu);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_1A4F0:
    /* 0001a4f0   4  lea (1cc6,A4),A1 */
    c->pc = RC_ADDR(0x0001a4f0u);
    c->a[1] = (c->a[4] + 0x1cc6u);

L_1A4F4:
    /* 0001a4f4   4  move.w (0,A0,D0.w),D2 */
    c->pc = RC_ADDR(0x0001a4f4u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A4F8:
    /* 0001a4f8   4  cmp.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x0001a4f8u);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    t1 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1A4FC:
    /* 0001a4fc   2  bne 0001a518 */
    c->pc = RC_ADDR(0x0001a4fcu);
    if (rc_cond(c, 6)) goto L_1A518;

L_1A4FE:
    /* 0001a4fe   2  move.l D5,D0 */
    c->pc = RC_ADDR(0x0001a4feu);
    t0 = rc_d_get(c, 5, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A500:
    /* 0001a500   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a500u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_1A502:
    /* 0001a502   4  lea (1cc8,A4),A0 */
    c->pc = RC_ADDR(0x0001a502u);
    c->a[0] = (c->a[4] + 0x1cc8u);

L_1A506:
    /* 0001a506   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x0001a506u);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A508:
    /* 0001a508   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001a508u);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_1A50A:
    /* 0001a50a   4  lea (1cc8,A4),A1 */
    c->pc = RC_ADDR(0x0001a50au);
    c->a[1] = (c->a[4] + 0x1cc8u);

L_1A50E:
    /* 0001a50e   4  move.w (0,A0,D0.w),D2 */
    c->pc = RC_ADDR(0x0001a50eu);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A512:
    /* 0001a512   4  cmp.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x0001a512u);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    t1 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1A516:
    /* 0001a516   2  beq 0001a524 */
    c->pc = RC_ADDR(0x0001a516u);
    if (rc_cond(c, 7)) goto L_1A524;

L_1A518:
    /* 0001a518   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x0001a518u);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_1A51A:
    /* 0001a51a   6  cmp.l #1,D4 */
    c->pc = RC_ADDR(0x0001a51au);
    t0 = 0x00000001u;
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1A520:
    /* 0001a520   2  blt 0001a4e0 */
    c->pc = RC_ADDR(0x0001a520u);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1A4E0; }

L_1A522:
    /* 0001a522   2  addq.l #1,D5 */
    c->pc = RC_ADDR(0x0001a522u);
    t1 = rc_d_get(c, 5, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 5, RC_L, t2);

L_1A524:
    /* 0001a524   2  addq.l #1,D6 */
    c->pc = RC_ADDR(0x0001a524u);
    t1 = rc_d_get(c, 6, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 6, RC_L, t2);

L_1A526:
    /* 0001a526   6  cmp.l #4,D6 */
    c->pc = RC_ADDR(0x0001a526u);
    t0 = 0x00000004u;
    t1 = rc_d_get(c, 6, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1A52C:
    /* 0001a52c   2  blt 0001a530 */
    c->pc = RC_ADDR(0x0001a52cu);
    if (rc_cond(c, 13)) goto L_1A530;

L_1A52E:
    /* 0001a52e   2  moveq #0,D6 */
    c->pc = RC_ADDR(0x0001a52eu);
    c->d[6] = 0x00000000u;
    rc_set_nzvc(c, c->d[6], RC_L);

L_1A530:
    /* 0001a530   4  bra 0001a49e */
    c->pc = RC_ADDR(0x0001a530u);
    rc_tick();
    goto L_1A49E;

L_1A534:
    /* 0001a534   4  movem.l (SP)+,{ D4 D5 D6 } */
    c->pc = RC_ADDR(0x0001a534u);
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

L_1A538:
    /* 0001a538   2  unlk A5 */
    c->pc = RC_ADDR(0x0001a538u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1A53A:
    /* 0001a53a   2  rts */
    c->pc = RC_ADDR(0x0001a53au);
    rc_ret(c, m);
    return;

}
