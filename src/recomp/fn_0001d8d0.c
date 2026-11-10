/* fn_0001d8d0 - 36 byte(s), 13 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001d8d0(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001d8d0u): goto L_1D8D0;
    case RC_ADDR(0x0001d8d4u): goto L_1D8D4;
    case RC_ADDR(0x0001d8d8u): goto L_1D8D8;
    case RC_ADDR(0x0001d8dcu): goto L_1D8DC;
    case RC_ADDR(0x0001d8deu): goto L_1D8DE;
    case RC_ADDR(0x0001d8e0u): goto L_1D8E0;
    case RC_ADDR(0x0001d8e2u): goto L_1D8E2;
    case RC_ADDR(0x0001d8e4u): goto L_1D8E4;
    case RC_ADDR(0x0001d8e6u): goto L_1D8E6;
    case RC_ADDR(0x0001d8eau): goto L_1D8EA;
    case RC_ADDR(0x0001d8ecu): goto L_1D8EC;
    case RC_ADDR(0x0001d8f0u): goto L_1D8F0;
    case RC_ADDR(0x0001d8f2u): goto L_1D8F2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1D8D0:
    /* 0001d8d0   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001d8d0u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1D8D4:
    /* 0001d8d4   4  movem.l { D5 A3 },-(SP) */
    c->pc = RC_ADDR(0x0001d8d4u);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_1D8D8:
    /* 0001d8d8   4  movea.l (8,A5),A2 */
    c->pc = RC_ADDR(0x0001d8d8u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[2] = t0;

L_1D8DC:
    /* 0001d8dc   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x0001d8dcu);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_1D8DE:
    /* 0001d8de   2  movea.l A2,A0 */
    c->pc = RC_ADDR(0x0001d8deu);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[0] = t0;

L_1D8E0:
    /* 0001d8e0   2  addq.l #2,A2 */
    c->pc = RC_ADDR(0x0001d8e0u);
    c->a[2] += 0x00000002u;

L_1D8E2:
    /* 0001d8e2   2  clr.w (A0) */
    c->pc = RC_ADDR(0x0001d8e2u);
    rc_wr16(c, m, c->a[0], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D8E4:
    /* 0001d8e4   2  addq.w #1,D4 */
    c->pc = RC_ADDR(0x0001d8e4u);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_1D8E6:
    /* 0001d8e6   4  cmp.w #20,D4 */
    c->pc = RC_ADDR(0x0001d8e6u);
    t0 = 0x00000020u;
    t1 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1D8EA:
    /* 0001d8ea   2  blt 0001d8de */
    c->pc = RC_ADDR(0x0001d8eau);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1D8DE; }

L_1D8EC:
    /* 0001d8ec   4  movem.l (SP)+,{ D4 A2 } */
    c->pc = RC_ADDR(0x0001d8ecu);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_1D8F0:
    /* 0001d8f0   2  unlk A5 */
    c->pc = RC_ADDR(0x0001d8f0u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1D8F2:
    /* 0001d8f2   2  rts */
    c->pc = RC_ADDR(0x0001d8f2u);
    rc_ret(c, m);
    return;

}
