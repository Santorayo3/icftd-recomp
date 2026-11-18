/* fn_0001d88a - 166 byte(s), 48 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001d88a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001d88au): goto L_1D88A;
    case RC_ADDR(0x0001d88eu): goto L_1D88E;
    case RC_ADDR(0x0001d892u): goto L_1D892;
    case RC_ADDR(0x0001d896u): goto L_1D896;
    case RC_ADDR(0x0001d89au): goto L_1D89A;
    case RC_ADDR(0x0001d89eu): goto L_1D89E;
    case RC_ADDR(0x0001d8a2u): goto L_1D8A2;
    case RC_ADDR(0x0001d8a6u): goto L_1D8A6;
    case RC_ADDR(0x0001d8aau): goto L_1D8AA;
    case RC_ADDR(0x0001d8aeu): goto L_1D8AE;
    case RC_ADDR(0x0001d8b0u): goto L_1D8B0;
    case RC_ADDR(0x0001d8b4u): goto L_1D8B4;
    case RC_ADDR(0x0001d8b6u): goto L_1D8B6;
    case RC_ADDR(0x0001d8bau): goto L_1D8BA;
    case RC_ADDR(0x0001d8bcu): goto L_1D8BC;
    case RC_ADDR(0x0001d8c0u): goto L_1D8C0;
    case RC_ADDR(0x0001d8c4u): goto L_1D8C4;
    case RC_ADDR(0x0001d8c6u): goto L_1D8C6;
    case RC_ADDR(0x0001d8cau): goto L_1D8CA;
    case RC_ADDR(0x0001d8ceu): goto L_1D8CE;
    case RC_ADDR(0x0001d8d2u): goto L_1D8D2;
    case RC_ADDR(0x0001d8d6u): goto L_1D8D6;
    case RC_ADDR(0x0001d8dau): goto L_1D8DA;
    case RC_ADDR(0x0001d8deu): goto L_1D8DE;
    case RC_ADDR(0x0001d8e2u): goto L_1D8E2;
    case RC_ADDR(0x0001d8e6u): goto L_1D8E6;
    case RC_ADDR(0x0001d8e8u): goto L_1D8E8;
    case RC_ADDR(0x0001d8eau): goto L_1D8EA;
    case RC_ADDR(0x0001d8eeu): goto L_1D8EE;
    case RC_ADDR(0x0001d8f0u): goto L_1D8F0;
    case RC_ADDR(0x0001d8f4u): goto L_1D8F4;
    case RC_ADDR(0x0001d8f8u): goto L_1D8F8;
    case RC_ADDR(0x0001d8feu): goto L_1D8FE;
    case RC_ADDR(0x0001d900u): goto L_1D900;
    case RC_ADDR(0x0001d904u): goto L_1D904;
    case RC_ADDR(0x0001d90au): goto L_1D90A;
    case RC_ADDR(0x0001d90eu): goto L_1D90E;
    case RC_ADDR(0x0001d910u): goto L_1D910;
    case RC_ADDR(0x0001d912u): goto L_1D912;
    case RC_ADDR(0x0001d916u): goto L_1D916;
    case RC_ADDR(0x0001d91cu): goto L_1D91C;
    case RC_ADDR(0x0001d91eu): goto L_1D91E;
    case RC_ADDR(0x0001d920u): goto L_1D920;
    case RC_ADDR(0x0001d924u): goto L_1D924;
    case RC_ADDR(0x0001d926u): goto L_1D926;
    case RC_ADDR(0x0001d928u): goto L_1D928;
    case RC_ADDR(0x0001d92cu): goto L_1D92C;
    case RC_ADDR(0x0001d92eu): goto L_1D92E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1D88A:
    /* 0001d88a   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x0001d88au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_1D88E:
    /* 0001d88e   4  tst.w (ffffb258,A4) */
    c->pc = RC_ADDR(0x0001d88eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4da8u));
    rc_set_nzvc(c, t0, RC_W);

L_1D892:
    /* 0001d892   4  beq 0001d92c */
    c->pc = RC_ADDR(0x0001d892u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1D92C;

L_1D896:
    /* 0001d896   4  tst.w (ffffb24a,A4) */
    c->pc = RC_ADDR(0x0001d896u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db6u));
    rc_set_nzvc(c, t0, RC_W);

L_1D89A:
    /* 0001d89a   4  bne 0001d92c */
    c->pc = RC_ADDR(0x0001d89au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1D92C;

L_1D89E:
    /* 0001d89e   4  tst.w (1dc8,A4) */
    c->pc = RC_ADDR(0x0001d89eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1dc8u));
    rc_set_nzvc(c, t0, RC_W);

L_1D8A2:
    /* 0001d8a2   4  bne 0001d92c */
    c->pc = RC_ADDR(0x0001d8a2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1D92C;

L_1D8A6:
    /* 0001d8a6   4  move.w (7a8,A4),D0 */
    c->pc = RC_ADDR(0x0001d8a6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7a8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D8AA:
    /* 0001d8aa   4  sub.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0001d8aau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1D8AE:
    /* 0001d8ae   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001d8aeu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D8B0:
    /* 0001d8b0   4  jsr (ffff81ca,A4) */
    c->pc = RC_ADDR(0x0001d8b0u);
    rc_step(c, m, 18);
    /* vector 76 */
    rc_push32(c, m, RC_ADDR(0x0001d8b4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cc0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001bd70u);
    return;

L_1D8B4:
    /* 0001d8b4   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001d8b4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1D8B6:
    /* 0001d8b6   4  cmp.w #1,D0 */
    c->pc = RC_ADDR(0x0001d8b6u);
    rc_step(c, m, 8);
    t0 = 0x00000001u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1D8BA:
    /* 0001d8ba   2  bgt 0001d928 */
    c->pc = RC_ADDR(0x0001d8bau);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_1D928;

L_1D8BC:
    /* 0001d8bc   4  addq.w #1,(7a6,A4) */
    c->pc = RC_ADDR(0x0001d8bcu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x7a6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1D8C0:
    /* 0001d8c0   4  move.w #40,-(A7) */
    c->pc = RC_ADDR(0x0001d8c0u);
    rc_step(c, m, 12);
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D8C4:
    /* 0001d8c4   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0001d8c4u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D8C6:
    /* 0001d8c6   4  pea (00000dac).l */
    c->pc = RC_ADDR(0x0001d8c6u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000dacu);

L_1D8CA:
    /* 0001d8ca   4  move.w #96,-(A7) */
    c->pc = RC_ADDR(0x0001d8cau);
    rc_step(c, m, 12);
    t0 = 0x00000096u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D8CE:
    /* 0001d8ce   4  move.l (2c72,A4),-(A7) */
    c->pc = RC_ADDR(0x0001d8ceu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2c72u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D8D2:
    /* 0001d8d2   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x0001d8d2u);
    rc_step(c, m, 18);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x0001d8d6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af2cu);
    return;

L_1D8D6:
    /* 0001d8d6   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0001d8d6u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_1D8DA:
    /* 0001d8da   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001d8dau);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D8DE:
    /* 0001d8de   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001d8deu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D8E2:
    /* 0001d8e2   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001d8e2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D8E6:
    /* 0001d8e6   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001d8e6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1D8E8:
    /* 0001d8e8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001d8e8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1D8EA:
    /* 0001d8ea   4  lea (8dc,A4),A0 */
    c->pc = RC_ADDR(0x0001d8eau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x8dcu);

L_1D8EE:
    /* 0001d8ee   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x0001d8eeu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_1D8F0:
    /* 0001d8f0   4  eori.w #ffff,(A0) */
    c->pc = RC_ADDR(0x0001d8f0u);
    rc_step(c, m, 16);
    t3 = c->a[0];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 ^ 0x0000ffffu;
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_1D8F4:
    /* 0001d8f4   4  addq.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001d8f4u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1D8F8:
    /* 0001d8f8   6  cmpi.w #20,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001d8f8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_W, t0, 0x00000020u);

L_1D8FE:
    /* 0001d8fe   2  blt 0001d8e2 */
    c->pc = RC_ADDR(0x0001d8feu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1D8E2; }

L_1D900:
    /* 0001d900   4  jsr (ffff81b8,A4) */
    c->pc = RC_ADDR(0x0001d900u);
    rc_step(c, m, 18);
    /* vector 73 */
    rc_push32(c, m, RC_ADDR(0x0001d904u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023caeu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000197a8u);
    return;

L_1D904:
    /* 0001d904   6  move.w #1,(14ee,A4) */
    c->pc = RC_ADDR(0x0001d904u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x14eeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D90A:
    /* 0001d90a   4  tst.w (14ee,A4) */
    /* a flag wait: rc_wait runs it natively and returns 1 when its exit branch is taken;
     * 0 means the three instructions below run instead (the reference path). */
    if (rc_wait(c, m, RC_ADDR(0x0001d90au), 12,
                RC_ADDR(0x0001d90eu), 10, 7,
                RC_ADDR(0x0001d910u), 10,
                (c->a[4] + 0x14eeu), RC_W))
        goto L_1D912;
    c->pc = RC_ADDR(0x0001d90au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x14eeu));
    rc_set_nzvc(c, t0, RC_W);

L_1D90E:
    /* 0001d90e   2  beq 0001d912 */
    c->pc = RC_ADDR(0x0001d90eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1D912;

L_1D910:
    /* 0001d910   2  bra 0001d90a */
    c->pc = RC_ADDR(0x0001d910u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1D90A;

L_1D912:
    /* 0001d912   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001d912u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1D916:
    /* 0001d916   6  cmpi.w #4,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001d916u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_1D91C:
    /* 0001d91c   2  blt 0001d8de */
    c->pc = RC_ADDR(0x0001d91cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1D8DE; }

L_1D91E:
    /* 0001d91e   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0001d91eu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D920:
    /* 0001d920   4  jsr (ffff80ce,A4) */
    c->pc = RC_ADDR(0x0001d920u);
    rc_step(c, m, 18);
    /* vector 34 */
    rc_push32(c, m, RC_ADDR(0x0001d924u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bc4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af96u);
    return;

L_1D924:
    /* 0001d924   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001d924u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1D926:
    /* 0001d926   2  bra 0001d92c */
    c->pc = RC_ADDR(0x0001d926u);
    rc_step(c, m, 10);
    goto L_1D92C;

L_1D928:
    /* 0001d928   4  clr.w (7a6,A4) */
    c->pc = RC_ADDR(0x0001d928u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x7a6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D92C:
    /* 0001d92c   2  unlk A5 */
    c->pc = RC_ADDR(0x0001d92cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1D92E:
    /* 0001d92e   2  rts */
    c->pc = RC_ADDR(0x0001d92eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
