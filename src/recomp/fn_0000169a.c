/* fn_0000169a - 38 byte(s), 11 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000169a(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000169au): goto L_169A;
    case RC_ADDR(0x0000169eu): goto L_169E;
    case RC_ADDR(0x000016a2u): goto L_16A2;
    case RC_ADDR(0x000016a4u): goto L_16A4;
    case RC_ADDR(0x000016a6u): goto L_16A6;
    case RC_ADDR(0x000016aau): goto L_16AA;
    case RC_ADDR(0x000016b0u): goto L_16B0;
    case RC_ADDR(0x000016b2u): goto L_16B2;
    case RC_ADDR(0x000016b8u): goto L_16B8;
    case RC_ADDR(0x000016bcu): goto L_16BC;
    case RC_ADDR(0x000016beu): goto L_16BE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_169A:
    /* 0000169a   4  link.w A5,#fffffffe */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000169au);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_169E:
    /* 0000169e   4  movea.l (8,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000169eu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_16A2:
    /* 000016a2   2  move.b (A0),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000016a2u);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_16A4:
    /* 000016a4   2  ext.w D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000016a4u);
    rc_ext_w(c, 0);

L_16A6:
    /* 000016a6   4  move.w D0,(fffffffe,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000016a6u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16AA:
    /* 000016aa   6  cmpi.w #ffff,(fffffffe,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000016aau);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_16B0:
    /* 000016b0   2  bne 000016b8 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000016b0u);
    if (rc_cond(c, 6)) goto L_16B8;

L_16B2:
    /* 000016b2   6  move.w #ff9c,(fffffffe,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000016b2u);
    t0 = 0x0000ff9cu;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16B8:
    /* 000016b8   4  move.w (fffffffe,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000016b8u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16BC:
    /* 000016bc   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000016bcu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_16BE:
    /* 000016be   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000016beu);
    rc_ret(c, m);
    return;

}
