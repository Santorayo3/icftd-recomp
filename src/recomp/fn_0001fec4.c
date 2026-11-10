/* fn_0001fec4 - 84 byte(s), 32 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001fec4(cpu_t *c, rt_machine *m)
{
    u32 t0, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001fec4u): goto L_1FEC4;
    case RC_ADDR(0x0001fec8u): goto L_1FEC8;
    case RC_ADDR(0x0001feccu): goto L_1FECC;
    case RC_ADDR(0x0001fed0u): goto L_1FED0;
    case RC_ADDR(0x0001fed4u): goto L_1FED4;
    case RC_ADDR(0x0001fed6u): goto L_1FED6;
    case RC_ADDR(0x0001fed8u): goto L_1FED8;
    case RC_ADDR(0x0001fedcu): goto L_1FEDC;
    case RC_ADDR(0x0001fee2u): goto L_1FEE2;
    case RC_ADDR(0x0001fee4u): goto L_1FEE4;
    case RC_ADDR(0x0001fee6u): goto L_1FEE6;
    case RC_ADDR(0x0001fee8u): goto L_1FEE8;
    case RC_ADDR(0x0001feecu): goto L_1FEEC;
    case RC_ADDR(0x0001feeeu): goto L_1FEEE;
    case RC_ADDR(0x0001fef0u): goto L_1FEF0;
    case RC_ADDR(0x0001fef2u): goto L_1FEF2;
    case RC_ADDR(0x0001fef4u): goto L_1FEF4;
    case RC_ADDR(0x0001fef8u): goto L_1FEF8;
    case RC_ADDR(0x0001fefau): goto L_1FEFA;
    case RC_ADDR(0x0001fefcu): goto L_1FEFC;
    case RC_ADDR(0x0001fefeu): goto L_1FEFE;
    case RC_ADDR(0x0001ff02u): goto L_1FF02;
    case RC_ADDR(0x0001ff04u): goto L_1FF04;
    case RC_ADDR(0x0001ff06u): goto L_1FF06;
    case RC_ADDR(0x0001ff08u): goto L_1FF08;
    case RC_ADDR(0x0001ff0au): goto L_1FF0A;
    case RC_ADDR(0x0001ff0cu): goto L_1FF0C;
    case RC_ADDR(0x0001ff0eu): goto L_1FF0E;
    case RC_ADDR(0x0001ff10u): goto L_1FF10;
    case RC_ADDR(0x0001ff12u): goto L_1FF12;
    case RC_ADDR(0x0001ff14u): goto L_1FF14;
    case RC_ADDR(0x0001ff16u): goto L_1FF16;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1FEC4:
    /* 0001fec4   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fec4u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1FEC8:
    /* 0001fec8   4  movem.l { D4 D5 },-(SP) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fec8u);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    c->a[7] = t3;

L_1FECC:
    /* 0001fecc   4  movea.l (8,A5),A2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001feccu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[2] = t0;

L_1FED0:
    /* 0001fed0   4  movea.l (c,A5),A3 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fed0u);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[3] = t0;

L_1FED4:
    /* 0001fed4   2  move.l A3,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fed4u);
    t0 = rc_a_get(c, 3, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FED6:
    /* 0001fed6   2  beq 0001ff14 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fed6u);
    if (rc_cond(c, 7)) goto L_1FF14;

L_1FED8:
    /* 0001fed8   4  movea.l (4,A3),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fed8u);
    t0 = rc_rd32(c, m, (c->a[3] + 0x4u));
    c->a[0] = t0;

L_1FEDC:
    /* 0001fedc   6  btst #0,(b,A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fedcu);
    t4 = 0x00000000u;
    t3 = (c->a[0] + 0xbu);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_1FEE2:
    /* 0001fee2   2  beq 0001fefe */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fee2u);
    if (rc_cond(c, 7)) goto L_1FEFE;

L_1FEE4:
    /* 0001fee4   2  move.l A3,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fee4u);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FEE6:
    /* 0001fee6   2  move.l A2,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fee6u);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FEE8:
    /* 0001fee8   4  jsr (0001fe4e) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fee8u);
    rc_push32(c, m, RC_ADDR(0x0001feecu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001fe4eu);
    return;

L_1FEEC:
    /* 0001feec   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001feecu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1FEEE:
    /* 0001feee   2  tst.w D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001feeeu);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1FEF0:
    /* 0001fef0   2  beq 0001fefc */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fef0u);
    if (rc_cond(c, 7)) goto L_1FEFC;

L_1FEF2:
    /* 0001fef2   2  moveq #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fef2u);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1FEF4:
    /* 0001fef4   4  movem.l (SP)+,{ A2 A3 } */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fef4u);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_1FEF8:
    /* 0001fef8   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fef8u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1FEFA:
    /* 0001fefa   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fefau);
    rc_ret(c, m);
    return;

L_1FEFC:
    /* 0001fefc   2  bra 0001ff10 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fefcu);
    goto L_1FF10;

L_1FEFE:
    /* 0001fefe   4  move.l (2c,A3),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fefeu);
    t0 = rc_rd32(c, m, (c->a[3] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FF02:
    /* 0001ff02   2  move.l A2,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001ff02u);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FF04:
    /* 0001ff04   2  bsr 0001fec4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001ff04u);
    rc_push32(c, m, RC_ADDR(0x0001ff06u));
    rc_depth++;
    goto L_1FEC4;

L_1FF06:
    /* 0001ff06   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001ff06u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1FF08:
    /* 0001ff08   2  tst.w D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001ff08u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1FF0A:
    /* 0001ff0a   2  beq 0001ff10 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001ff0au);
    if (rc_cond(c, 7)) goto L_1FF10;

L_1FF0C:
    /* 0001ff0c   2  moveq #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001ff0cu);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1FF0E:
    /* 0001ff0e   2  bra 0001fef4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001ff0eu);
    rc_tick();
    goto L_1FEF4;

L_1FF10:
    /* 0001ff10   2  movea.l (A3),A3 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001ff10u);
    t0 = rc_rd32(c, m, c->a[3]);
    c->a[3] = t0;

L_1FF12:
    /* 0001ff12   2  bra 0001fed4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001ff12u);
    rc_tick();
    goto L_1FED4;

L_1FF14:
    /* 0001ff14   2  moveq #0,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001ff14u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1FF16:
    /* 0001ff16   2  bra 0001fef4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001ff16u);
    rc_tick();
    goto L_1FEF4;

}
