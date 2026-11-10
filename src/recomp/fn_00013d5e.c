/* fn_00013d5e - 92 byte(s), 26 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00013d5e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00013d5eu): goto L_13D5E;
    case RC_ADDR(0x00013d62u): goto L_13D62;
    case RC_ADDR(0x00013d66u): goto L_13D66;
    case RC_ADDR(0x00013d6au): goto L_13D6A;
    case RC_ADDR(0x00013d6eu): goto L_13D6E;
    case RC_ADDR(0x00013d72u): goto L_13D72;
    case RC_ADDR(0x00013d76u): goto L_13D76;
    case RC_ADDR(0x00013d78u): goto L_13D78;
    case RC_ADDR(0x00013d7cu): goto L_13D7C;
    case RC_ADDR(0x00013d7eu): goto L_13D7E;
    case RC_ADDR(0x00013d84u): goto L_13D84;
    case RC_ADDR(0x00013d88u): goto L_13D88;
    case RC_ADDR(0x00013d8cu): goto L_13D8C;
    case RC_ADDR(0x00013d90u): goto L_13D90;
    case RC_ADDR(0x00013d94u): goto L_13D94;
    case RC_ADDR(0x00013d96u): goto L_13D96;
    case RC_ADDR(0x00013d9au): goto L_13D9A;
    case RC_ADDR(0x00013d9eu): goto L_13D9E;
    case RC_ADDR(0x00013da2u): goto L_13DA2;
    case RC_ADDR(0x00013da6u): goto L_13DA6;
    case RC_ADDR(0x00013da8u): goto L_13DA8;
    case RC_ADDR(0x00013daau): goto L_13DAA;
    case RC_ADDR(0x00013dacu): goto L_13DAC;
    case RC_ADDR(0x00013db2u): goto L_13DB2;
    case RC_ADDR(0x00013db6u): goto L_13DB6;
    case RC_ADDR(0x00013db8u): goto L_13DB8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_13D5E:
    /* 00013d5e   4  link.w A5,#fffffffe */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013d5eu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_13D62:
    /* 00013d62   4  clr.w (fffffffe,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013d62u);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13D66:
    /* 00013d66   4  movem.l { D0 D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 A7 },-(SP) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013d66u);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[7]);
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

L_13D6A:
    /* 00013d6a   4  move.w (a,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013d6au);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_13D6E:
    /* 00013d6e   4  move.w (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013d6eu);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_13D72:
    /* 00013d72   4  bsr 00015eb2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013d72u);
    rc_push32(c, m, RC_ADDR(0x00013d76u));
    rc_depth++;
    c->pc = RC_ADDR(0x00015eb2u);
    return;

L_13D76:
    /* 00013d76   2  addq.l #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013d76u);
    c->a[7] += 0x00000004u;

L_13D78:
    /* 00013d78   4  andi.b #80,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013d78u);
    t1 = rc_d_get(c, 0, RC_B);
    t2 = t1 & 0x00000080u;
    rc_d_set(c, 0, RC_B, t2);
    rc_set_nzvc(c, t2, RC_B);

L_13D7C:
    /* 00013d7c   2  beq 00013d96 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013d7cu);
    if (rc_cond(c, 7)) goto L_13D96;

L_13D7E:
    /* 00013d7e   6  move.w #1,(fffffffe,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013d7eu);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13D84:
    /* 00013d84   4  move.w (c,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013d84u);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_13D88:
    /* 00013d88   4  move.w (a,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013d88u);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_13D8C:
    /* 00013d8c   4  move.w (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013d8cu);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_13D90:
    /* 00013d90   4  bsr 00015fd6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013d90u);
    rc_push32(c, m, RC_ADDR(0x00013d94u));
    rc_depth++;
    c->pc = RC_ADDR(0x00015fd6u);
    return;

L_13D94:
    /* 00013d94   2  addq.l #6,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013d94u);
    c->a[7] += 0x00000006u;

L_13D96:
    /* 00013d96   4  movem.l (SP)+,{ D0 D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 A7 } */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013d96u);
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
    t0 = rc_rd32(c, m, t3);
    c->a[7] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_13D9A:
    /* 00013d9a   4  move.w (a,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013d9au);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_13D9E:
    /* 00013d9e   4  move.w (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013d9eu);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_13DA2:
    /* 00013da2   4  jsr (0001507c) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013da2u);
    rc_push32(c, m, RC_ADDR(0x00013da6u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001507cu);
    return;

L_13DA6:
    /* 00013da6   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013da6u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_13DA8:
    /* 00013da8   2  tst.w D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013da8u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_13DAA:
    /* 00013daa   2  beq 00013db2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013daau);
    if (rc_cond(c, 7)) goto L_13DB2;

L_13DAC:
    /* 00013dac   6  move.w #1,(fffffffe,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013dacu);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13DB2:
    /* 00013db2   4  move.w (fffffffe,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013db2u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13DB6:
    /* 00013db6   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013db6u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_13DB8:
    /* 00013db8   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013db8u);
    rc_ret(c, m);
    return;

}
