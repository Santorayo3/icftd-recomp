/* fn_000180f0 - 24 byte(s), 8 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000180f0(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000180f0u): goto L_180F0;
    case RC_ADDR(0x000180f4u): goto L_180F4;
    case RC_ADDR(0x000180f8u): goto L_180F8;
    case RC_ADDR(0x000180fau): goto L_180FA;
    case RC_ADDR(0x000180feu): goto L_180FE;
    case RC_ADDR(0x00018102u): goto L_18102;
    case RC_ADDR(0x00018104u): goto L_18104;
    case RC_ADDR(0x00018106u): goto L_18106;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_180F0:
    /* 000180f0   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000180f0u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_180F4:
    /* 000180f4   4  movem.l { D3 D4 D5 D6 D7 A3 A4 A5 A6 A7 },-(SP) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000180f4u);
    t3 = c->a[7];
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

L_180F8:
    /* 000180f8   2  movea.l (A1),A4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000180f8u);
    t0 = rc_rd32(c, m, c->a[1]);
    c->a[4] = t0;

L_180FA:
    /* 000180fa   4  bsr 00017cec */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000180fau);
    rc_push32(c, m, RC_ADDR(0x000180feu));
    rc_depth++;
    c->pc = RC_ADDR(0x00017cecu);
    return;

L_180FE:
    /* 000180fe   4  movem.l (SP)+,{ D0 D1 D2 D3 D4 A0 A1 A2 A3 A4 } */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000180feu);
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
    c->a[7] = t3;

L_18102:
    /* 00018102   2  clr.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00018102u);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_18104:
    /* 00018104   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00018104u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_18106:
    /* 00018106   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00018106u);
    rc_ret(c, m);
    return;

}
