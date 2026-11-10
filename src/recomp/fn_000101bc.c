/* fn_000101bc - 30 byte(s), 9 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000101bc(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000101bcu): goto L_101BC;
    case RC_ADDR(0x000101c0u): goto L_101C0;
    case RC_ADDR(0x000101c4u): goto L_101C4;
    case RC_ADDR(0x000101c6u): goto L_101C6;
    case RC_ADDR(0x000101cau): goto L_101CA;
    case RC_ADDR(0x000101ccu): goto L_101CC;
    case RC_ADDR(0x000101ceu): goto L_101CE;
    case RC_ADDR(0x000101d4u): goto L_101D4;
    case RC_ADDR(0x000101d8u): goto L_101D8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_101BC:
    /* 000101bc   4  movem.l { D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 A7 },-(SP) */
    c->pc = RC_ADDR(0x000101bcu);
    rc_step(c, m);
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

L_101C0:
    /* 000101c0   4  lea (000101da),A0 */
    c->pc = RC_ADDR(0x000101c0u);
    rc_step(c, m);
    c->a[0] = RC_ADDR(0x000101dau);

L_101C4:
    /* 000101c4   2  move.l (A0),D0 */
    c->pc = RC_ADDR(0x000101c4u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_101C6:
    /* 000101c6   4  beq 000101d4 */
    c->pc = RC_ADDR(0x000101c6u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_101D4;

L_101CA:
    /* 000101ca   2  movea.l D0,A6 */
    c->pc = RC_ADDR(0x000101cau);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[6] = t0;

L_101CC:
    /* 000101cc   2  clr.l (A0) */
    c->pc = RC_ADDR(0x000101ccu);
    rc_step(c, m);
    rc_wr32(c, m, c->a[0], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_101CE:
    /* 000101ce   6  clr.b (00bfee01).l */
    c->pc = RC_ADDR(0x000101ceu);
    rc_step(c, m);
    rc_wr8(c, m, 0x00bfee01u, 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_101D4:
    /* 000101d4   4  movem.l (SP)+,{ D0 D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 } */
    c->pc = RC_ADDR(0x000101d4u);
    rc_step(c, m);
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

L_101D8:
    /* 000101d8   2  rts */
    c->pc = RC_ADDR(0x000101d8u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
