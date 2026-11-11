/* fn_0000f5b8 - 80 byte(s), 22 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000f5b8(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000f5b8u): goto L_F5B8;
    case RC_ADDR(0x0000f5bcu): goto L_F5BC;
    case RC_ADDR(0x0000f5c0u): goto L_F5C0;
    case RC_ADDR(0x0000f5c4u): goto L_F5C4;
    case RC_ADDR(0x0000f5c6u): goto L_F5C6;
    case RC_ADDR(0x0000f5c8u): goto L_F5C8;
    case RC_ADDR(0x0000f5ccu): goto L_F5CC;
    case RC_ADDR(0x0000f5ceu): goto L_F5CE;
    case RC_ADDR(0x0000f5d2u): goto L_F5D2;
    case RC_ADDR(0x0000f5d8u): goto L_F5D8;
    case RC_ADDR(0x0000f5dau): goto L_F5DA;
    case RC_ADDR(0x0000f5e0u): goto L_F5E0;
    case RC_ADDR(0x0000f5e4u): goto L_F5E4;
    case RC_ADDR(0x0000f5e6u): goto L_F5E6;
    case RC_ADDR(0x0000f5eau): goto L_F5EA;
    case RC_ADDR(0x0000f5ecu): goto L_F5EC;
    case RC_ADDR(0x0000f5f0u): goto L_F5F0;
    case RC_ADDR(0x0000f5f4u): goto L_F5F4;
    case RC_ADDR(0x0000f5f8u): goto L_F5F8;
    case RC_ADDR(0x0000f5feu): goto L_F5FE;
    case RC_ADDR(0x0000f602u): goto L_F602;
    case RC_ADDR(0x0000f606u): goto L_F606;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_F5B8:
    /* 0000f5b8   4  movem.l { D6 D7 A0 A7 },-(SP) */
    c->pc = RC_ADDR(0x0000f5b8u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[0]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[0]);
    c->a[7] = t3;

L_F5BC:
    /* 0000f5bc   4  movea.l (6,A6),A0 */
    c->pc = RC_ADDR(0x0000f5bcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[6] + 0x6u));
    c->a[0] = t0;

L_F5C0:
    /* 0000f5c0   4  lea (3e,A6),A1 */
    c->pc = RC_ADDR(0x0000f5c0u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[6] + 0x3eu);

L_F5C4:
    /* 0000f5c4   2  ext.w D0 */
    c->pc = RC_ADDR(0x0000f5c4u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_F5C6:
    /* 0000f5c6   2  move.w D0,D7 */
    c->pc = RC_ADDR(0x0000f5c6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 7, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F5C8:
    /* 0000f5c8   4  mulu.w #16,D0 */
    c->pc = RC_ADDR(0x0000f5c8u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_mulu(c, 0, t0);

L_F5CC:
    /* 0000f5cc   2  adda.w D0,A1 */
    c->pc = RC_ADDR(0x0000f5ccu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[1] += rc_ext(t0, RC_W);

L_F5CE:
    /* 0000f5ce   4  clr.b (0,A1) */
    c->pc = RC_ADDR(0x0000f5ceu);
    rc_step(c, m, 16);
    rc_wr8(c, m, (c->a[1] + 0x0u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_F5D2:
    /* 0000f5d2   6  cmpi.b #0,(1,A1) */
    c->pc = RC_ADDR(0x0000f5d2u);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[1] + 0x1u));
    rc_cmp(c, RC_B, t0, 0x00000000u);

L_F5D8:
    /* 0000f5d8   2  beq 0000f602 */
    c->pc = RC_ADDR(0x0000f5d8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_F602;

L_F5DA:
    /* 0000f5da   6  move.b #3,(0,A1) */
    c->pc = RC_ADDR(0x0000f5dau);
    rc_step(c, m, 16);
    t0 = 0x00000003u;
    rc_wr8(c, m, (c->a[1] + 0x0u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_F5E0:
    /* 0000f5e0   4  move.l (4,A1),D0 */
    c->pc = RC_ADDR(0x0000f5e0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[1] + 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F5E4:
    /* 0000f5e4   2  beq 0000f5f8 */
    c->pc = RC_ADDR(0x0000f5e4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_F5F8;

L_F5E6:
    /* 0000f5e6   4  movem.l { D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 A7 },-(SP) */
    c->pc = RC_ADDR(0x0000f5e6u);
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

L_F5EA:
    /* 0000f5ea   2  movea.l D0,A4 */
    c->pc = RC_ADDR(0x0000f5eau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[4] = t0;

L_F5EC:
    /* 0000f5ec   4  movea.l (0,A4),A4 */
    c->pc = RC_ADDR(0x0000f5ecu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x0u));
    c->a[4] = t0;

L_F5F0:
    /* 0000f5f0   4  jsr (0,A4) */
    c->pc = RC_ADDR(0x0000f5f0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000f5f4u));
    rc_depth++;
    t3 = (c->a[4] + 0x0u);
    c->pc = t3;
    return;

L_F5F4:
    /* 0000f5f4   4  movem.l (SP)+,{ D0 D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 } */
    c->pc = RC_ADDR(0x0000f5f4u);
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

L_F5F8:
    /* 0000f5f8   6  move.b #0,(1,A1) */
    c->pc = RC_ADDR(0x0000f5f8u);
    rc_step(c, m, 16);
    t0 = 0x00000000u;
    rc_wr8(c, m, (c->a[1] + 0x1u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_F5FE:
    /* 0000f5fe   4  clr.b (0,A1) */
    c->pc = RC_ADDR(0x0000f5feu);
    rc_step(c, m, 16);
    rc_wr8(c, m, (c->a[1] + 0x0u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_F602:
    /* 0000f602   4  movem.l (SP)+,{ D0 D7 A0 A1 } */
    c->pc = RC_ADDR(0x0000f602u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[0] = t0;
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
    c->a[7] = t3;

L_F606:
    /* 0000f606   2  rts */
    c->pc = RC_ADDR(0x0000f606u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
