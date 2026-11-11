/* fn_00009064 - 114 byte(s), 30 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00009064(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00009064u): goto L_9064;
    case RC_ADDR(0x00009068u): goto L_9068;
    case RC_ADDR(0x0000906cu): goto L_906C;
    case RC_ADDR(0x00009070u): goto L_9070;
    case RC_ADDR(0x00009072u): goto L_9072;
    case RC_ADDR(0x00009074u): goto L_9074;
    case RC_ADDR(0x00009076u): goto L_9076;
    case RC_ADDR(0x00009078u): goto L_9078;
    case RC_ADDR(0x0000907au): goto L_907A;
    case RC_ADDR(0x0000907eu): goto L_907E;
    case RC_ADDR(0x00009082u): goto L_9082;
    case RC_ADDR(0x00009086u): goto L_9086;
    case RC_ADDR(0x0000908au): goto L_908A;
    case RC_ADDR(0x0000908cu): goto L_908C;
    case RC_ADDR(0x00009092u): goto L_9092;
    case RC_ADDR(0x00009096u): goto L_9096;
    case RC_ADDR(0x0000909au): goto L_909A;
    case RC_ADDR(0x0000909eu): goto L_909E;
    case RC_ADDR(0x000090a0u): goto L_90A0;
    case RC_ADDR(0x000090a6u): goto L_90A6;
    case RC_ADDR(0x000090aau): goto L_90AA;
    case RC_ADDR(0x000090aeu): goto L_90AE;
    case RC_ADDR(0x000090b2u): goto L_90B2;
    case RC_ADDR(0x000090b8u): goto L_90B8;
    case RC_ADDR(0x000090bcu): goto L_90BC;
    case RC_ADDR(0x000090c0u): goto L_90C0;
    case RC_ADDR(0x000090c2u): goto L_90C2;
    case RC_ADDR(0x000090c8u): goto L_90C8;
    case RC_ADDR(0x000090ceu): goto L_90CE;
    case RC_ADDR(0x000090d4u): goto L_90D4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_9064:
    /* 00009064   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00009064u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_9068:
    /* 00009068   4  move.w #dc,-(A7) */
    c->pc = RC_ADDR(0x00009068u);
    rc_step(c, m, 12);
    t0 = 0x000000dcu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_906C:
    /* 0000906c   4  jsr (ffff8086,A4) */
    c->pc = RC_ADDR(0x0000906cu);
    rc_step(c, m, 18);
    /* vector 22 */
    rc_push32(c, m, RC_ADDR(0x00009070u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021adcu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000711cu);
    return;

L_9070:
    /* 00009070   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00009070u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_9072:
    /* 00009072   2  tst.w D0 */
    c->pc = RC_ADDR(0x00009072u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_9074:
    /* 00009074   2  beq 0000907a */
    c->pc = RC_ADDR(0x00009074u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_907A;

L_9076:
    /* 00009076   2  unlk A5 */
    c->pc = RC_ADDR(0x00009076u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_9078:
    /* 00009078   2  rts */
    c->pc = RC_ADDR(0x00009078u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_907A:
    /* 0000907a   4  jsr (ffff821e,A4) */
    c->pc = RC_ADDR(0x0000907au);
    rc_step(c, m, 18);
    /* vector 90 */
    rc_push32(c, m, RC_ADDR(0x0000907eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c74u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001d778u);
    return;

L_907E:
    /* 0000907e   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000907eu);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9082:
    /* 00009082   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00009082u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9086:
    /* 00009086   4  jsr (00005eac) */
    c->pc = RC_ADDR(0x00009086u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000908au));
    rc_depth++;
    c->pc = RC_ADDR(0x00005eacu);
    return;

L_908A:
    /* 0000908a   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x0000908au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_908C:
    /* 0000908c   6  move.b #23,(fffff0ba,A4) */
    c->pc = RC_ADDR(0x0000908cu);
    rc_step(c, m, 16);
    t0 = 0x00000023u;
    rc_wr8(c, m, (c->a[4] - 0xf46u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_9092:
    /* 00009092   4  pea (000090d6) */
    c->pc = RC_ADDR(0x00009092u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000090d6u));

L_9096:
    /* 00009096   4  pea (fffff0e8,A4) */
    c->pc = RC_ADDR(0x00009096u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] - 0xf18u));

L_909A:
    /* 0000909a   4  jsr (ffff82a8,A4) */
    c->pc = RC_ADDR(0x0000909au);
    rc_step(c, m, 18);
    /* vector 113 */
    rc_push32(c, m, RC_ADDR(0x0000909eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cfeu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00020810u);
    return;

L_909E:
    /* 0000909e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000909eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_90A0:
    /* 000090a0   6  move.w #2,(fffff100,A4) */
    c->pc = RC_ADDR(0x000090a0u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] - 0xf00u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_90A6:
    /* 000090a6   4  clr.w (ffffcb20,A4) */
    c->pc = RC_ADDR(0x000090a6u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x34e0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_90AA:
    /* 000090aa   4  jsr (ffff8110,A4) */
    c->pc = RC_ADDR(0x000090aau);
    rc_step(c, m, 18);
    /* vector 45 */
    rc_push32(c, m, RC_ADDR(0x000090aeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b66u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000ec8au);
    return;

L_90AE:
    /* 000090ae   4  jsr (00008c5c) */
    c->pc = RC_ADDR(0x000090aeu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000090b2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00008c5cu);
    return;

L_90B2:
    /* 000090b2   6  move.w #1,(ffffcb20,A4) */
    c->pc = RC_ADDR(0x000090b2u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x34e0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_90B8:
    /* 000090b8   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000090b8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_90BC:
    /* 000090bc   4  jsr (ffff8056,A4) */
    c->pc = RC_ADDR(0x000090bcu);
    rc_step(c, m, 18);
    /* vector 14 */
    rc_push32(c, m, RC_ADDR(0x000090c0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021aacu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000353eu);
    return;

L_90C0:
    /* 000090c0   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000090c0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_90C2:
    /* 000090c2   6  move.w #1,(fffff100,A4) */
    c->pc = RC_ADDR(0x000090c2u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0xf00u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_90C8:
    /* 000090c8   6  move.b #7f,(fffff0ba,A4) */
    c->pc = RC_ADDR(0x000090c8u);
    rc_step(c, m, 16);
    t0 = 0x0000007fu;
    rc_wr8(c, m, (c->a[4] - 0xf46u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_90CE:
    /* 000090ce   6  move.w #1,(ffffce2c,A4) */
    c->pc = RC_ADDR(0x000090ceu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x31d4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_90D4:
    /* 000090d4   2  bra 00009076 */
    c->pc = RC_ADDR(0x000090d4u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_9076;

}
