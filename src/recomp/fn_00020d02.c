/* fn_00020d02 - 158 byte(s), 52 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00020d02(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00020d02u): goto L_20D02;
    case RC_ADDR(0x00020d06u): goto L_20D06;
    case RC_ADDR(0x00020d0au): goto L_20D0A;
    case RC_ADDR(0x00020d0eu): goto L_20D0E;
    case RC_ADDR(0x00020d10u): goto L_20D10;
    case RC_ADDR(0x00020d14u): goto L_20D14;
    case RC_ADDR(0x00020d18u): goto L_20D18;
    case RC_ADDR(0x00020d1cu): goto L_20D1C;
    case RC_ADDR(0x00020d1eu): goto L_20D1E;
    case RC_ADDR(0x00020d20u): goto L_20D20;
    case RC_ADDR(0x00020d24u): goto L_20D24;
    case RC_ADDR(0x00020d26u): goto L_20D26;
    case RC_ADDR(0x00020d28u): goto L_20D28;
    case RC_ADDR(0x00020d2cu): goto L_20D2C;
    case RC_ADDR(0x00020d30u): goto L_20D30;
    case RC_ADDR(0x00020d34u): goto L_20D34;
    case RC_ADDR(0x00020d38u): goto L_20D38;
    case RC_ADDR(0x00020d3au): goto L_20D3A;
    case RC_ADDR(0x00020d3cu): goto L_20D3C;
    case RC_ADDR(0x00020d3eu): goto L_20D3E;
    case RC_ADDR(0x00020d42u): goto L_20D42;
    case RC_ADDR(0x00020d44u): goto L_20D44;
    case RC_ADDR(0x00020d48u): goto L_20D48;
    case RC_ADDR(0x00020d4cu): goto L_20D4C;
    case RC_ADDR(0x00020d4eu): goto L_20D4E;
    case RC_ADDR(0x00020d50u): goto L_20D50;
    case RC_ADDR(0x00020d52u): goto L_20D52;
    case RC_ADDR(0x00020d54u): goto L_20D54;
    case RC_ADDR(0x00020d58u): goto L_20D58;
    case RC_ADDR(0x00020d5au): goto L_20D5A;
    case RC_ADDR(0x00020d5eu): goto L_20D5E;
    case RC_ADDR(0x00020d60u): goto L_20D60;
    case RC_ADDR(0x00020d62u): goto L_20D62;
    case RC_ADDR(0x00020d64u): goto L_20D64;
    case RC_ADDR(0x00020d66u): goto L_20D66;
    case RC_ADDR(0x00020d68u): goto L_20D68;
    case RC_ADDR(0x00020d6au): goto L_20D6A;
    case RC_ADDR(0x00020d6cu): goto L_20D6C;
    case RC_ADDR(0x00020d72u): goto L_20D72;
    case RC_ADDR(0x00020d76u): goto L_20D76;
    case RC_ADDR(0x00020d7au): goto L_20D7A;
    case RC_ADDR(0x00020d7eu): goto L_20D7E;
    case RC_ADDR(0x00020d82u): goto L_20D82;
    case RC_ADDR(0x00020d86u): goto L_20D86;
    case RC_ADDR(0x00020d88u): goto L_20D88;
    case RC_ADDR(0x00020d8au): goto L_20D8A;
    case RC_ADDR(0x00020d8eu): goto L_20D8E;
    case RC_ADDR(0x00020d90u): goto L_20D90;
    case RC_ADDR(0x00020d94u): goto L_20D94;
    case RC_ADDR(0x00020d98u): goto L_20D98;
    case RC_ADDR(0x00020d9cu): goto L_20D9C;
    case RC_ADDR(0x00020d9eu): goto L_20D9E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_20D02:
    /* 00020d02   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00020d02u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_20D06:
    /* 00020d06   4  movem.l { D4 D5 A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x00020d06u);
    rc_step(c, m);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_20D0A:
    /* 00020d0a   4  movea.l (8,A5),A2 */
    c->pc = RC_ADDR(0x00020d0au);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[2] = t0;

L_20D0E:
    /* 00020d0e   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00020d0eu);
    rc_step(c, m);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_20D10:
    /* 00020d10   4  pea (00020da0) */
    c->pc = RC_ADDR(0x00020d10u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00020da0u));

L_20D14:
    /* 00020d14   4  jsr (00021724) */
    c->pc = RC_ADDR(0x00020d14u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00020d18u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021724u);
    return;

L_20D18:
    /* 00020d18   4  move.l D0,(3b16,A4) */
    c->pc = RC_ADDR(0x00020d18u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x3b16u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_20D1C:
    /* 00020d1c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00020d1cu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_20D1E:
    /* 00020d1e   2  bne 00020d28 */
    c->pc = RC_ADDR(0x00020d1eu);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_20D28;

L_20D20:
    /* 00020d20   4  movem.l (SP)+,{ D4 D5 D6 A2 A3 } */
    c->pc = RC_ADDR(0x00020d20u);
    rc_step(c, m);
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
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_20D24:
    /* 00020d24   2  unlk A5 */
    c->pc = RC_ADDR(0x00020d24u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_20D26:
    /* 00020d26   2  rts */
    c->pc = RC_ADDR(0x00020d26u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

L_20D28:
    /* 00020d28   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x00020d28u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_20D2C:
    /* 00020d2c   4  movea.l (24,A0),A1 */
    c->pc = RC_ADDR(0x00020d2cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[0] + 0x24u));
    c->a[1] = t0;

L_20D30:
    /* 00020d30   4  move.l (4,A1),-(A7) */
    c->pc = RC_ADDR(0x00020d30u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[1] + 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20D34:
    /* 00020d34   4  jsr (0002197e) */
    c->pc = RC_ADDR(0x00020d34u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00020d38u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002197eu);
    return;

L_20D38:
    /* 00020d38   2  move.l D0,D4 */
    c->pc = RC_ADDR(0x00020d38u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20D3A:
    /* 00020d3a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00020d3au);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_20D3C:
    /* 00020d3c   2  beq 00020d90 */
    c->pc = RC_ADDR(0x00020d3cu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_20D90;

L_20D3E:
    /* 00020d3e   4  pea (00020dad) */
    c->pc = RC_ADDR(0x00020d3eu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00020dadu));

L_20D42:
    /* 00020d42   2  movea.l D4,A0 */
    c->pc = RC_ADDR(0x00020d42u);
    rc_step(c, m);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[0] = t0;

L_20D44:
    /* 00020d44   4  move.l (36,A0),-(A7) */
    c->pc = RC_ADDR(0x00020d44u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[0] + 0x36u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20D48:
    /* 00020d48   4  jsr (00021964) */
    c->pc = RC_ADDR(0x00020d48u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00020d4cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021964u);
    return;

L_20D4C:
    /* 00020d4c   2  movea.l D0,A3 */
    c->pc = RC_ADDR(0x00020d4cu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[3] = t0;

L_20D4E:
    /* 00020d4e   2  tst.l D0 */
    c->pc = RC_ADDR(0x00020d4eu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_20D50:
    /* 00020d50   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00020d50u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_20D52:
    /* 00020d52   2  beq 00020d88 */
    c->pc = RC_ADDR(0x00020d52u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_20D88;

L_20D54:
    /* 00020d54   4  pea (000003ed).l */
    c->pc = RC_ADDR(0x00020d54u);
    rc_step(c, m);
    rc_push32(c, m, 0x000003edu);

L_20D58:
    /* 00020d58   2  move.l A3,-(A7) */
    c->pc = RC_ADDR(0x00020d58u);
    rc_step(c, m);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20D5A:
    /* 00020d5a   4  jsr (0002145c) */
    c->pc = RC_ADDR(0x00020d5au);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00020d5eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0002145cu);
    return;

L_20D5E:
    /* 00020d5e   2  move.l D0,D6 */
    c->pc = RC_ADDR(0x00020d5eu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 6, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20D60:
    /* 00020d60   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00020d60u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_20D62:
    /* 00020d62   2  beq 00020d88 */
    c->pc = RC_ADDR(0x00020d62u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_20D88;

L_20D64:
    /* 00020d64   2  move.l D6,D0 */
    c->pc = RC_ADDR(0x00020d64u);
    rc_step(c, m);
    t0 = rc_d_get(c, 6, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20D66:
    /* 00020d66   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00020d66u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_20D68:
    /* 00020d68   2  move.l D0,D5 */
    c->pc = RC_ADDR(0x00020d68u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 5, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20D6A:
    /* 00020d6a   2  movea.l D5,A0 */
    c->pc = RC_ADDR(0x00020d6au);
    rc_step(c, m);
    t0 = rc_d_get(c, 5, RC_L);
    c->a[0] = t0;

L_20D6C:
    /* 00020d6c   6  move.l (8,A0),(a4,A2) */
    c->pc = RC_ADDR(0x00020d6cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    rc_wr32(c, m, (c->a[2] + 0xa4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_20D72:
    /* 00020d72   4  move.l D6,(9c,A2) */
    c->pc = RC_ADDR(0x00020d72u);
    rc_step(c, m);
    t0 = rc_d_get(c, 6, RC_L);
    rc_wr32(c, m, (c->a[2] + 0x9cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_20D76:
    /* 00020d76   4  pea (000003ed).l */
    c->pc = RC_ADDR(0x00020d76u);
    rc_step(c, m);
    rc_push32(c, m, 0x000003edu);

L_20D7A:
    /* 00020d7a   4  pea (00020db4) */
    c->pc = RC_ADDR(0x00020d7au);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00020db4u));

L_20D7E:
    /* 00020d7e   4  jsr (0002145c) */
    c->pc = RC_ADDR(0x00020d7eu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00020d82u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002145cu);
    return;

L_20D82:
    /* 00020d82   4  move.l D0,(a0,A2) */
    c->pc = RC_ADDR(0x00020d82u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[2] + 0xa0u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_20D86:
    /* 00020d86   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00020d86u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_20D88:
    /* 00020d88   2  move.l D4,-(A7) */
    c->pc = RC_ADDR(0x00020d88u);
    rc_step(c, m);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20D8A:
    /* 00020d8a   4  jsr (00021972) */
    c->pc = RC_ADDR(0x00020d8au);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00020d8eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021972u);
    return;

L_20D8E:
    /* 00020d8e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00020d8eu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_20D90:
    /* 00020d90   4  move.l (3b16,A4),-(A7) */
    c->pc = RC_ADDR(0x00020d90u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3b16u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20D94:
    /* 00020d94   4  jsr (ffff8332,A4) */
    c->pc = RC_ADDR(0x00020d94u);
    rc_step(c, m);
    /* vector 136 */
    rc_push32(c, m, RC_ADDR(0x00020d98u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d88u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000214eau);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000214eeu);
    return;

L_20D98:
    /* 00020d98   4  clr.l (3b16,A4) */
    c->pc = RC_ADDR(0x00020d98u);
    rc_step(c, m);
    rc_wr32(c, m, (c->a[4] + 0x3b16u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_20D9C:
    /* 00020d9c   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00020d9cu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_20D9E:
    /* 00020d9e   2  bra 00020d20 */
    c->pc = RC_ADDR(0x00020d9eu);
    rc_step(c, m);
    rc_tick();
    goto L_20D20;

}
