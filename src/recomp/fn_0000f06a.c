/* fn_0000f06a - 66 byte(s), 22 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000f06a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000f06au): goto L_F06A;
    case RC_ADDR(0x0000f06eu): goto L_F06E;
    case RC_ADDR(0x0000f072u): goto L_F072;
    case RC_ADDR(0x0000f074u): goto L_F074;
    case RC_ADDR(0x0000f076u): goto L_F076;
    case RC_ADDR(0x0000f078u): goto L_F078;
    case RC_ADDR(0x0000f07au): goto L_F07A;
    case RC_ADDR(0x0000f07cu): goto L_F07C;
    case RC_ADDR(0x0000f07eu): goto L_F07E;
    case RC_ADDR(0x0000f082u): goto L_F082;
    case RC_ADDR(0x0000f084u): goto L_F084;
    case RC_ADDR(0x0000f088u): goto L_F088;
    case RC_ADDR(0x0000f08cu): goto L_F08C;
    case RC_ADDR(0x0000f08eu): goto L_F08E;
    case RC_ADDR(0x0000f092u): goto L_F092;
    case RC_ADDR(0x0000f096u): goto L_F096;
    case RC_ADDR(0x0000f09au): goto L_F09A;
    case RC_ADDR(0x0000f09cu): goto L_F09C;
    case RC_ADDR(0x0000f0a0u): goto L_F0A0;
    case RC_ADDR(0x0000f0a4u): goto L_F0A4;
    case RC_ADDR(0x0000f0a6u): goto L_F0A6;
    case RC_ADDR(0x0000f0aau): goto L_F0AA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_F06A:
    /* 0000f06a   4  movem.l { D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 A7 },-(SP) */
    c->pc = RC_ADDR(0x0000f06au);
    rc_step(c, m, 8);
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

L_F06E:
    /* 0000f06e   4  move.l (0,A0),D0 */
    c->pc = RC_ADDR(0x0000f06eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F072:
    /* 0000f072   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x0000f072u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_F074:
    /* 0000f074   2  beq 0000f084 */
    c->pc = RC_ADDR(0x0000f074u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_F084;

L_F076:
    /* 0000f076   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x0000f076u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_F078:
    /* 0000f078   2  beq 0000f09c */
    c->pc = RC_ADDR(0x0000f078u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_F09C;

L_F07A:
    /* 0000f07a   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x0000f07au);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_F07C:
    /* 0000f07c   2  beq 0000f0a6 */
    c->pc = RC_ADDR(0x0000f07cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_F0A6;

L_F07E:
    /* 0000f07e   4  movem.l (SP)+,{ D0 D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 } */
    c->pc = RC_ADDR(0x0000f07eu);
    rc_step(c, m, 12);
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

L_F082:
    /* 0000f082   2  rts */
    c->pc = RC_ADDR(0x0000f082u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_F084:
    /* 0000f084   4  move.l A1,(4,A0) */
    c->pc = RC_ADDR(0x0000f084u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_F088:
    /* 0000f088   4  cmpi.b #80,(A1) */
    c->pc = RC_ADDR(0x0000f088u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[1]);
    rc_cmp(c, RC_B, t0, 0x00000080u);

L_F08C:
    /* 0000f08c   2  bne 0000f092 */
    c->pc = RC_ADDR(0x0000f08cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_F092;

L_F08E:
    /* 0000f08e   4  bsr 0000fbea */
    c->pc = RC_ADDR(0x0000f08eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000f092u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000fbeau);
    return;

L_F092:
    /* 0000f092   4  lea (0000f7e2),A2 */
    c->pc = RC_ADDR(0x0000f092u);
    rc_step(c, m, 8);
    c->a[2] = RC_ADDR(0x0000f7e2u);

L_F096:
    /* 0000f096   4  move.l A2,(0,A0) */
    c->pc = RC_ADDR(0x0000f096u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, (c->a[0] + 0x0u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_F09A:
    /* 0000f09a   2  bra 0000f07e */
    c->pc = RC_ADDR(0x0000f09au);
    rc_step(c, m, 10);
    rc_tick();
    goto L_F07E;

L_F09C:
    /* 0000f09c   4  move.l A1,(4,A0) */
    c->pc = RC_ADDR(0x0000f09cu);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_F0A0:
    /* 0000f0a0   4  lea (0000fcce),A2 */
    c->pc = RC_ADDR(0x0000f0a0u);
    rc_step(c, m, 8);
    c->a[2] = RC_ADDR(0x0000fcceu);

L_F0A4:
    /* 0000f0a4   2  bra 0000f096 */
    c->pc = RC_ADDR(0x0000f0a4u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_F096;

L_F0A6:
    /* 0000f0a6   4  lea (0000ff48),A2 */
    c->pc = RC_ADDR(0x0000f0a6u);
    rc_step(c, m, 8);
    c->a[2] = RC_ADDR(0x0000ff48u);

L_F0AA:
    /* 0000f0aa   2  bra 0000f096 */
    c->pc = RC_ADDR(0x0000f0aau);
    rc_step(c, m, 10);
    rc_tick();
    goto L_F096;

}
