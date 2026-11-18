/* fn_0001fede - 56 byte(s), 20 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001fede(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001fedeu): goto L_1FEDE;
    case RC_ADDR(0x0001fee2u): goto L_1FEE2;
    case RC_ADDR(0x0001fee6u): goto L_1FEE6;
    case RC_ADDR(0x0001feeau): goto L_1FEEA;
    case RC_ADDR(0x0001feecu): goto L_1FEEC;
    case RC_ADDR(0x0001feeeu): goto L_1FEEE;
    case RC_ADDR(0x0001fef0u): goto L_1FEF0;
    case RC_ADDR(0x0001fef4u): goto L_1FEF4;
    case RC_ADDR(0x0001fef6u): goto L_1FEF6;
    case RC_ADDR(0x0001fefau): goto L_1FEFA;
    case RC_ADDR(0x0001fefcu): goto L_1FEFC;
    case RC_ADDR(0x0001fefeu): goto L_1FEFE;
    case RC_ADDR(0x0001ff02u): goto L_1FF02;
    case RC_ADDR(0x0001ff04u): goto L_1FF04;
    case RC_ADDR(0x0001ff08u): goto L_1FF08;
    case RC_ADDR(0x0001ff0au): goto L_1FF0A;
    case RC_ADDR(0x0001ff0cu): goto L_1FF0C;
    case RC_ADDR(0x0001ff0eu): goto L_1FF0E;
    case RC_ADDR(0x0001ff12u): goto L_1FF12;
    case RC_ADDR(0x0001ff14u): goto L_1FF14;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1FEDE:
    /* 0001fede   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001fedeu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1FEE2:
    /* 0001fee2   4  movem.l { D4 D5 },-(SP) */
    c->pc = RC_ADDR(0x0001fee2u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    c->a[7] = t3;

L_1FEE6:
    /* 0001fee6   4  movea.l (8,A5),A2 */
    c->pc = RC_ADDR(0x0001fee6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[2] = t0;

L_1FEEA:
    /* 0001feea   2  move.l A2,D0 */
    c->pc = RC_ADDR(0x0001feeau);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FEEC:
    /* 0001feec   2  beq 0001ff0e */
    c->pc = RC_ADDR(0x0001feecu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1FF0E;

L_1FEEE:
    /* 0001feee   2  movea.l (A2),A3 */
    c->pc = RC_ADDR(0x0001feeeu);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[2]);
    c->a[3] = t0;

L_1FEF0:
    /* 0001fef0   4  tst.l (2c,A2) */
    c->pc = RC_ADDR(0x0001fef0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0x2cu));
    rc_set_nzvc(c, t0, RC_L);

L_1FEF4:
    /* 0001fef4   2  beq 0001fefe */
    c->pc = RC_ADDR(0x0001fef4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1FEFE;

L_1FEF6:
    /* 0001fef6   4  move.l (2c,A2),-(A7) */
    c->pc = RC_ADDR(0x0001fef6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[2] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FEFA:
    /* 0001fefa   2  bsr 0001fede */
    c->pc = RC_ADDR(0x0001fefau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001fefcu));
    rc_depth++;
    goto L_1FEDE;

L_1FEFC:
    /* 0001fefc   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001fefcu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1FEFE:
    /* 0001fefe   4  pea (0000003e).l */
    c->pc = RC_ADDR(0x0001fefeu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000003eu);

L_1FF02:
    /* 0001ff02   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x0001ff02u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FF04:
    /* 0001ff04   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0001ff04u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0001ff08u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_1FF08:
    /* 0001ff08   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001ff08u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1FF0A:
    /* 0001ff0a   2  movea.l A3,A2 */
    c->pc = RC_ADDR(0x0001ff0au);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[2] = t0;

L_1FF0C:
    /* 0001ff0c   2  bra 0001feea */
    c->pc = RC_ADDR(0x0001ff0cu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1FEEA;

L_1FF0E:
    /* 0001ff0e   4  movem.l (SP)+,{ A2 A3 } */
    c->pc = RC_ADDR(0x0001ff0eu);
    rc_step(c, m, 12);
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

L_1FF12:
    /* 0001ff12   2  unlk A5 */
    c->pc = RC_ADDR(0x0001ff12u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1FF14:
    /* 0001ff14   2  rts */
    c->pc = RC_ADDR(0x0001ff14u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
