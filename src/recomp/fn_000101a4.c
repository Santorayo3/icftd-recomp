/* fn_000101a4 - 24 byte(s), 8 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000101a4(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000101a4u): goto L_101A4;
    case RC_ADDR(0x000101a8u): goto L_101A8;
    case RC_ADDR(0x000101acu): goto L_101AC;
    case RC_ADDR(0x000101aeu): goto L_101AE;
    case RC_ADDR(0x000101b0u): goto L_101B0;
    case RC_ADDR(0x000101b4u): goto L_101B4;
    case RC_ADDR(0x000101b6u): goto L_101B6;
    case RC_ADDR(0x000101bau): goto L_101BA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_101A4:
    /* 000101a4   4  movem.l { D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 A7 },-(SP) */
    c->pc = RC_ADDR(0x000101a4u);
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

L_101A8:
    /* 000101a8   4  move.l (000101da),D0 */
    c->pc = RC_ADDR(0x000101a8u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, RC_ADDR(0x000101dau));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_101AC:
    /* 000101ac   2  beq 000101b6 */
    c->pc = RC_ADDR(0x000101acu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_101B6;

L_101AE:
    /* 000101ae   2  movea.l D0,A6 */
    c->pc = RC_ADDR(0x000101aeu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[6] = t0;

L_101B0:
    /* 000101b0   4  bsr 0000f5a6 */
    c->pc = RC_ADDR(0x000101b0u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x000101b4u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000f5a6u);
    return;

L_101B4:
    /* 000101b4   2  bsr 000101bc */
    c->pc = RC_ADDR(0x000101b4u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x000101b6u));
    rc_depth++;
    c->pc = RC_ADDR(0x000101bcu);
    return;

L_101B6:
    /* 000101b6   4  movem.l (SP)+,{ D0 D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 } */
    c->pc = RC_ADDR(0x000101b6u);
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

L_101BA:
    /* 000101ba   2  rts */
    c->pc = RC_ADDR(0x000101bau);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
