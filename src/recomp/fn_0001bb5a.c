/* fn_0001bb5a - 24 byte(s), 8 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001bb5a(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001bb5au): goto L_1BB5A;
    case RC_ADDR(0x0001bb5eu): goto L_1BB5E;
    case RC_ADDR(0x0001bb62u): goto L_1BB62;
    case RC_ADDR(0x0001bb64u): goto L_1BB64;
    case RC_ADDR(0x0001bb68u): goto L_1BB68;
    case RC_ADDR(0x0001bb6cu): goto L_1BB6C;
    case RC_ADDR(0x0001bb6eu): goto L_1BB6E;
    case RC_ADDR(0x0001bb70u): goto L_1BB70;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1BB5A:
    /* 0001bb5a   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001bb5au);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1BB5E:
    /* 0001bb5e   4  movem.l { D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 A7 },-(SP) */
    c->pc = RC_ADDR(0x0001bb5eu);
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

L_1BB62:
    /* 0001bb62   2  movea.l (A1),A4 */
    c->pc = RC_ADDR(0x0001bb62u);
    t0 = rc_rd32(c, m, c->a[1]);
    c->a[4] = t0;

L_1BB64:
    /* 0001bb64   4  bsr 0001bc0e */
    c->pc = RC_ADDR(0x0001bb64u);
    rc_push32(c, m, RC_ADDR(0x0001bb68u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001bc0eu);
    return;

L_1BB68:
    /* 0001bb68   4  movem.l (SP)+,{ D0 D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 } */
    c->pc = RC_ADDR(0x0001bb68u);
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
    c->a[7] = t3;

L_1BB6C:
    /* 0001bb6c   2  clr.l D0 */
    c->pc = RC_ADDR(0x0001bb6cu);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1BB6E:
    /* 0001bb6e   2  unlk A5 */
    c->pc = RC_ADDR(0x0001bb6eu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1BB70:
    /* 0001bb70   2  rts */
    c->pc = RC_ADDR(0x0001bb70u);
    rc_ret(c, m);
    return;

}
