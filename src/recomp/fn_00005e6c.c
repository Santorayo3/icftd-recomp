/* fn_00005e6c - 58 byte(s), 20 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00005e6c(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00005e6cu): goto L_5E6C;
    case RC_ADDR(0x00005e70u): goto L_5E70;
    case RC_ADDR(0x00005e74u): goto L_5E74;
    case RC_ADDR(0x00005e78u): goto L_5E78;
    case RC_ADDR(0x00005e7au): goto L_5E7A;
    case RC_ADDR(0x00005e7eu): goto L_5E7E;
    case RC_ADDR(0x00005e82u): goto L_5E82;
    case RC_ADDR(0x00005e84u): goto L_5E84;
    case RC_ADDR(0x00005e88u): goto L_5E88;
    case RC_ADDR(0x00005e8cu): goto L_5E8C;
    case RC_ADDR(0x00005e8eu): goto L_5E8E;
    case RC_ADDR(0x00005e92u): goto L_5E92;
    case RC_ADDR(0x00005e96u): goto L_5E96;
    case RC_ADDR(0x00005e98u): goto L_5E98;
    case RC_ADDR(0x00005e9au): goto L_5E9A;
    case RC_ADDR(0x00005e9cu): goto L_5E9C;
    case RC_ADDR(0x00005e9eu): goto L_5E9E;
    case RC_ADDR(0x00005ea0u): goto L_5EA0;
    case RC_ADDR(0x00005ea2u): goto L_5EA2;
    case RC_ADDR(0x00005ea4u): goto L_5EA4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_5E6C:
    /* 00005e6c   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00005e6cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_5E70:
    /* 00005e70   4  pea (00005ea6) */
    c->pc = RC_ADDR(0x00005e70u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00005ea6u));

L_5E74:
    /* 00005e74   4  jsr (ffff8206,A4) */
    c->pc = RC_ADDR(0x00005e74u);
    rc_step(c, m, 18);
    /* vector 86 */
    rc_push32(c, m, RC_ADDR(0x00005e78u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c5cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001d4fau);
    return;

L_5E78:
    /* 00005e78   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00005e78u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_5E7A:
    /* 00005e7a   4  move.l D0,(ffff8434,A4) */
    c->pc = RC_ADDR(0x00005e7au);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x7bccu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5E7E:
    /* 00005e7e   4  tst.w (ffffcb1c,A4) */
    c->pc = RC_ADDR(0x00005e7eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x34e4u));
    rc_set_nzvc(c, t0, RC_W);

L_5E82:
    /* 00005e82   2  beq 00005e8e */
    c->pc = RC_ADDR(0x00005e82u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_5E8E;

L_5E84:
    /* 00005e84   4  move.l (1e,A4),-(A7) */
    c->pc = RC_ADDR(0x00005e84u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5E88:
    /* 00005e88   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x00005e88u);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x00005e8cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ce0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000202c4u);
    return;

L_5E8C:
    /* 00005e8c   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00005e8cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_5E8E:
    /* 00005e8e   4  move.l (ffff8434,A4),-(A7) */
    c->pc = RC_ADDR(0x00005e8eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x7bccu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5E92:
    /* 00005e92   4  jsr (ffff8212,A4) */
    c->pc = RC_ADDR(0x00005e92u);
    rc_step(c, m, 18);
    /* vector 88 */
    rc_push32(c, m, RC_ADDR(0x00005e96u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c68u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001d642u);
    return;

L_5E96:
    /* 00005e96   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00005e96u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_5E98:
    /* 00005e98   2  tst.w D0 */
    c->pc = RC_ADDR(0x00005e98u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_5E9A:
    /* 00005e9a   2  bne 00005ea2 */
    c->pc = RC_ADDR(0x00005e9au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_5EA2;

L_5E9C:
    /* 00005e9c   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00005e9cu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_5E9E:
    /* 00005e9e   2  unlk A5 */
    c->pc = RC_ADDR(0x00005e9eu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_5EA0:
    /* 00005ea0   2  rts */
    c->pc = RC_ADDR(0x00005ea0u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_5EA2:
    /* 00005ea2   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00005ea2u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_5EA4:
    /* 00005ea4   2  bra 00005e9e */
    c->pc = RC_ADDR(0x00005ea4u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_5E9E;

}
