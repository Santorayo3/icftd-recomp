/* fn_0001dd6e - 40 byte(s), 15 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001dd6e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1;

    switch (c->pc)
    {
    case RC_ADDR(0x0001dd6eu): goto L_1DD6E;
    case RC_ADDR(0x0001dd72u): goto L_1DD72;
    case RC_ADDR(0x0001dd76u): goto L_1DD76;
    case RC_ADDR(0x0001dd7au): goto L_1DD7A;
    case RC_ADDR(0x0001dd7cu): goto L_1DD7C;
    case RC_ADDR(0x0001dd7eu): goto L_1DD7E;
    case RC_ADDR(0x0001dd82u): goto L_1DD82;
    case RC_ADDR(0x0001dd84u): goto L_1DD84;
    case RC_ADDR(0x0001dd86u): goto L_1DD86;
    case RC_ADDR(0x0001dd88u): goto L_1DD88;
    case RC_ADDR(0x0001dd8au): goto L_1DD8A;
    case RC_ADDR(0x0001dd8cu): goto L_1DD8C;
    case RC_ADDR(0x0001dd90u): goto L_1DD90;
    case RC_ADDR(0x0001dd92u): goto L_1DD92;
    case RC_ADDR(0x0001dd94u): goto L_1DD94;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1DD6E:
    /* 0001dd6e   4  movea.l (4,A7),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dd6eu);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[0] = t0;

L_1DD72:
    /* 0001dd72   4  move.l (8,A7),D2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dd72u);
    t0 = rc_rd32(c, m, (c->a[7] + 0x8u));
    rc_d_set(c, 2, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DD76:
    /* 0001dd76   4  move.b (d,A7),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dd76u);
    t0 = rc_rd8(c, m, (c->a[7] + 0xdu));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1DD7A:
    /* 0001dd7a   2  move.l A0,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dd7au);
    t0 = rc_a_get(c, 0, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DD7C:
    /* 0001dd7c   2  beq 0001dd8a */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dd7cu);
    if (rc_cond(c, 7)) goto L_1DD8A;

L_1DD7E:
    /* 0001dd7e   4  cmp.l (4,A0),D2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dd7eu);
    t0 = rc_rd32(c, m, (c->a[0] + 0x4u));
    t1 = rc_d_get(c, 2, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1DD82:
    /* 0001dd82   2  beq 0001dd8c */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dd82u);
    if (rc_cond(c, 7)) goto L_1DD8C;

L_1DD84:
    /* 0001dd84   2  movea.l (A0),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dd84u);
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[0] = t0;

L_1DD86:
    /* 0001dd86   2  move.l A0,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dd86u);
    t0 = rc_a_get(c, 0, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DD88:
    /* 0001dd88   2  bne 0001dd7e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dd88u);
    if (rc_cond(c, 6)) { rc_tick(); goto L_1DD7E; }

L_1DD8A:
    /* 0001dd8a   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dd8au);
    rc_ret(c, m);
    return;

L_1DD8C:
    /* 0001dd8c   4  cmp.b (9,A0),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dd8cu);
    t0 = rc_rd8(c, m, (c->a[0] + 0x9u));
    t1 = rc_d_get(c, 1, RC_B);
    rc_cmp(c, RC_B, t1, t0);

L_1DD90:
    /* 0001dd90   2  bne 0001dd84 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dd90u);
    if (rc_cond(c, 6)) { rc_tick(); goto L_1DD84; }

L_1DD92:
    /* 0001dd92   2  movea.l D0,A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dd92u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_1DD94:
    /* 0001dd94   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dd94u);
    rc_ret(c, m);
    return;

}
