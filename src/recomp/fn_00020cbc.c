/* fn_00020cbc - 34 byte(s), 12 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00020cbc(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00020cbcu): goto L_20CBC;
    case RC_ADDR(0x00020cc2u): goto L_20CC2;
    case RC_ADDR(0x00020cc4u): goto L_20CC4;
    case RC_ADDR(0x00020cc8u): goto L_20CC8;
    case RC_ADDR(0x00020ccau): goto L_20CCA;
    case RC_ADDR(0x00020cccu): goto L_20CCC;
    case RC_ADDR(0x00020cd0u): goto L_20CD0;
    case RC_ADDR(0x00020cd2u): goto L_20CD2;
    case RC_ADDR(0x00020cd4u): goto L_20CD4;
    case RC_ADDR(0x00020cd6u): goto L_20CD6;
    case RC_ADDR(0x00020cd8u): goto L_20CD8;
    case RC_ADDR(0x00020cdcu): goto L_20CDC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_20CBC:
    /* 00020cbc   6  movem.l (SP)+,{ A0 A1 } */
    c->pc = RC_ADDR(0x00020cbcu);
    rc_step(c, m, 16);
    t3 = (c->a[7] + 0x4u);
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;
    t3 += 4u;

L_20CC2:
    /* 00020cc2   2  move.l A0,D0 */
    c->pc = RC_ADDR(0x00020cc2u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 0, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20CC4:
    /* 00020cc4   4  move.w (c,A7),D1 */
    c->pc = RC_ADDR(0x00020cc4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[7] + 0xcu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20CC8:
    /* 00020cc8   2  bra 00020ccc */
    c->pc = RC_ADDR(0x00020cc8u);
    rc_step(c, m, 10);
    goto L_20CCC;

L_20CCA:
    /* 00020cca   2  move.b (A1)+,(A0)+ */
    c->pc = RC_ADDR(0x00020ccau);
    rc_step(c, m, 12);
    t3 = c->a[1];
    c->a[1] += 1u;
    t0 = rc_rd8(c, m, t3);
    t3 = c->a[0];
    c->a[0] += 1u;
    rc_wr8(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_B);

L_20CCC:
    /* 00020ccc   4  dbeq D1,00020cca */
    c->pc = RC_ADDR(0x00020cccu);
    rc_step(c, m, 12);
    if (!rc_cond(c, 7)) {
        t2 = (rc_d_get(c, 1, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 1, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_20CCA; }
    }

L_20CD0:
    /* 00020cd0   2  beq 00020cd8 */
    c->pc = RC_ADDR(0x00020cd0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_20CD8;

L_20CD2:
    /* 00020cd2   2  addq.w #1,D1 */
    c->pc = RC_ADDR(0x00020cd2u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_20CD4:
    /* 00020cd4   2  bra 00020cd8 */
    c->pc = RC_ADDR(0x00020cd4u);
    rc_step(c, m, 10);
    goto L_20CD8;

L_20CD6:
    /* 00020cd6   2  clr.b (A0)+ */
    c->pc = RC_ADDR(0x00020cd6u);
    rc_step(c, m, 12);
    t3 = c->a[0];
    c->a[0] += 1u;
    rc_wr8(c, m, t3, 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_20CD8:
    /* 00020cd8   4  dbf D1,00020cd6 */
    c->pc = RC_ADDR(0x00020cd8u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 1, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 1, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_20CD6; }
    }

L_20CDC:
    /* 00020cdc   2  rts */
    c->pc = RC_ADDR(0x00020cdcu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
