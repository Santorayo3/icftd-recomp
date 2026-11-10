/* fn_0001d87c - 84 byte(s), 33 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001d87c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001d87cu): goto L_1D87C;
    case RC_ADDR(0x0001d880u): goto L_1D880;
    case RC_ADDR(0x0001d884u): goto L_1D884;
    case RC_ADDR(0x0001d888u): goto L_1D888;
    case RC_ADDR(0x0001d88cu): goto L_1D88C;
    case RC_ADDR(0x0001d88eu): goto L_1D88E;
    case RC_ADDR(0x0001d890u): goto L_1D890;
    case RC_ADDR(0x0001d892u): goto L_1D892;
    case RC_ADDR(0x0001d894u): goto L_1D894;
    case RC_ADDR(0x0001d896u): goto L_1D896;
    case RC_ADDR(0x0001d89au): goto L_1D89A;
    case RC_ADDR(0x0001d89cu): goto L_1D89C;
    case RC_ADDR(0x0001d89eu): goto L_1D89E;
    case RC_ADDR(0x0001d8a0u): goto L_1D8A0;
    case RC_ADDR(0x0001d8a2u): goto L_1D8A2;
    case RC_ADDR(0x0001d8a4u): goto L_1D8A4;
    case RC_ADDR(0x0001d8a6u): goto L_1D8A6;
    case RC_ADDR(0x0001d8aau): goto L_1D8AA;
    case RC_ADDR(0x0001d8acu): goto L_1D8AC;
    case RC_ADDR(0x0001d8aeu): goto L_1D8AE;
    case RC_ADDR(0x0001d8b0u): goto L_1D8B0;
    case RC_ADDR(0x0001d8b2u): goto L_1D8B2;
    case RC_ADDR(0x0001d8b4u): goto L_1D8B4;
    case RC_ADDR(0x0001d8b6u): goto L_1D8B6;
    case RC_ADDR(0x0001d8b8u): goto L_1D8B8;
    case RC_ADDR(0x0001d8bcu): goto L_1D8BC;
    case RC_ADDR(0x0001d8beu): goto L_1D8BE;
    case RC_ADDR(0x0001d8c0u): goto L_1D8C0;
    case RC_ADDR(0x0001d8c2u): goto L_1D8C2;
    case RC_ADDR(0x0001d8c6u): goto L_1D8C6;
    case RC_ADDR(0x0001d8c8u): goto L_1D8C8;
    case RC_ADDR(0x0001d8ccu): goto L_1D8CC;
    case RC_ADDR(0x0001d8ceu): goto L_1D8CE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1D87C:
    /* 0001d87c   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001d87cu);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1D880:
    /* 0001d880   4  movem.l { D4 D5 A3 },-(SP) */
    c->pc = RC_ADDR(0x0001d880u);
    rc_step(c, m);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_1D884:
    /* 0001d884   4  movea.l (8,A5),A2 */
    c->pc = RC_ADDR(0x0001d884u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[2] = t0;

L_1D888:
    /* 0001d888   4  movea.l (c,A5),A3 */
    c->pc = RC_ADDR(0x0001d888u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[3] = t0;

L_1D88C:
    /* 0001d88c   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x0001d88cu);
    rc_step(c, m);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_1D88E:
    /* 0001d88e   2  movea.l A2,A0 */
    c->pc = RC_ADDR(0x0001d88eu);
    rc_step(c, m);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[0] = t0;

L_1D890:
    /* 0001d890   2  addq.l #1,A2 */
    c->pc = RC_ADDR(0x0001d890u);
    rc_step(c, m);
    c->a[2] += 0x00000001u;

L_1D892:
    /* 0001d892   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001d892u);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1D894:
    /* 0001d894   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x0001d894u);
    rc_step(c, m);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1D896:
    /* 0001d896   4  and.w #f0,D0 */
    c->pc = RC_ADDR(0x0001d896u);
    rc_step(c, m);
    t0 = 0x000000f0u;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_1D89A:
    /* 0001d89a   2  asl.w #4,D0 */
    c->pc = RC_ADDR(0x0001d89au);
    rc_step(c, m);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W));

L_1D89C:
    /* 0001d89c   2  move.w D0,(A3) */
    c->pc = RC_ADDR(0x0001d89cu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, c->a[3], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D89E:
    /* 0001d89e   2  movea.l A2,A0 */
    c->pc = RC_ADDR(0x0001d89eu);
    rc_step(c, m);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[0] = t0;

L_1D8A0:
    /* 0001d8a0   2  addq.l #1,A2 */
    c->pc = RC_ADDR(0x0001d8a0u);
    rc_step(c, m);
    c->a[2] += 0x00000001u;

L_1D8A2:
    /* 0001d8a2   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001d8a2u);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1D8A4:
    /* 0001d8a4   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x0001d8a4u);
    rc_step(c, m);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1D8A6:
    /* 0001d8a6   4  and.w #f0,D0 */
    c->pc = RC_ADDR(0x0001d8a6u);
    rc_step(c, m);
    t0 = 0x000000f0u;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_1D8AA:
    /* 0001d8aa   2  or.w D0,(A3) */
    c->pc = RC_ADDR(0x0001d8aau);
    rc_step(c, m);
    t3 = c->a[3];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 | rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_1D8AC:
    /* 0001d8ac   2  movea.l A3,A0 */
    c->pc = RC_ADDR(0x0001d8acu);
    rc_step(c, m);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[0] = t0;

L_1D8AE:
    /* 0001d8ae   2  addq.l #2,A3 */
    c->pc = RC_ADDR(0x0001d8aeu);
    rc_step(c, m);
    c->a[3] += 0x00000002u;

L_1D8B0:
    /* 0001d8b0   2  movea.l A2,A1 */
    c->pc = RC_ADDR(0x0001d8b0u);
    rc_step(c, m);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[1] = t0;

L_1D8B2:
    /* 0001d8b2   2  addq.l #1,A2 */
    c->pc = RC_ADDR(0x0001d8b2u);
    rc_step(c, m);
    c->a[2] += 0x00000001u;

L_1D8B4:
    /* 0001d8b4   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001d8b4u);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1D8B6:
    /* 0001d8b6   2  move.b (A1),D0 */
    c->pc = RC_ADDR(0x0001d8b6u);
    rc_step(c, m);
    t0 = rc_rd8(c, m, c->a[1]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1D8B8:
    /* 0001d8b8   4  and.w #f0,D0 */
    c->pc = RC_ADDR(0x0001d8b8u);
    rc_step(c, m);
    t0 = 0x000000f0u;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_1D8BC:
    /* 0001d8bc   2  lsr.w #4,D0 */
    c->pc = RC_ADDR(0x0001d8bcu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W));

L_1D8BE:
    /* 0001d8be   2  or.w D0,(A0) */
    c->pc = RC_ADDR(0x0001d8beu);
    rc_step(c, m);
    t3 = c->a[0];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 | rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_1D8C0:
    /* 0001d8c0   2  addq.w #1,D4 */
    c->pc = RC_ADDR(0x0001d8c0u);
    rc_step(c, m);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_1D8C2:
    /* 0001d8c2   4  cmp.w #20,D4 */
    c->pc = RC_ADDR(0x0001d8c2u);
    rc_step(c, m);
    t0 = 0x00000020u;
    t1 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1D8C6:
    /* 0001d8c6   2  blt 0001d88e */
    c->pc = RC_ADDR(0x0001d8c6u);
    rc_step(c, m);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1D88E; }

L_1D8C8:
    /* 0001d8c8   4  movem.l (SP)+,{ D4 A2 A3 } */
    c->pc = RC_ADDR(0x0001d8c8u);
    rc_step(c, m);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_1D8CC:
    /* 0001d8cc   2  unlk A5 */
    c->pc = RC_ADDR(0x0001d8ccu);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1D8CE:
    /* 0001d8ce   2  rts */
    c->pc = RC_ADDR(0x0001d8ceu);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
