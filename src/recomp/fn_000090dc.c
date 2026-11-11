/* fn_000090dc - 52 byte(s), 14 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000090dc(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000090dcu): goto L_90DC;
    case RC_ADDR(0x000090e0u): goto L_90E0;
    case RC_ADDR(0x000090e6u): goto L_90E6;
    case RC_ADDR(0x000090eau): goto L_90EA;
    case RC_ADDR(0x000090ecu): goto L_90EC;
    case RC_ADDR(0x000090f0u): goto L_90F0;
    case RC_ADDR(0x000090f4u): goto L_90F4;
    case RC_ADDR(0x000090f8u): goto L_90F8;
    case RC_ADDR(0x000090feu): goto L_90FE;
    case RC_ADDR(0x00009102u): goto L_9102;
    case RC_ADDR(0x00009106u): goto L_9106;
    case RC_ADDR(0x0000910au): goto L_910A;
    case RC_ADDR(0x0000910cu): goto L_910C;
    case RC_ADDR(0x0000910eu): goto L_910E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_90DC:
    /* 000090dc   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x000090dcu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_90E0:
    /* 000090e0   6  move.w #4,(fffff0b4,A4) */
    c->pc = RC_ADDR(0x000090e0u);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] - 0xf4cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_90E6:
    /* 000090e6   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x000090e6u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_90EA:
    /* 000090ea   2  bra 00009102 */
    c->pc = RC_ADDR(0x000090eau);
    rc_step(c, m, 10);
    goto L_9102;

L_90EC:
    /* 000090ec   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000090ecu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_90F0:
    /* 000090f0   4  add.w #f0,D0 */
    c->pc = RC_ADDR(0x000090f0u);
    rc_step(c, m, 10);
    t0 = 0x000000f0u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_90F4:
    /* 000090f4   4  lea (ffffce44,A4),A0 */
    c->pc = RC_ADDR(0x000090f4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x31bcu);

L_90F8:
    /* 000090f8   6  move.b #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000090f8u);
    rc_step(c, m, 18);
    t0 = 0x00000001u;
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_90FE:
    /* 000090fe   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000090feu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_9102:
    /* 00009102   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00009102u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9106:
    /* 00009106   4  cmp.w (fffff0b4,A4),D0 */
    c->pc = RC_ADDR(0x00009106u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0xf4cu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_910A:
    /* 0000910a   2  blt 000090ec */
    c->pc = RC_ADDR(0x0000910au);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_90EC; }

L_910C:
    /* 0000910c   2  unlk A5 */
    c->pc = RC_ADDR(0x0000910cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_910E:
    /* 0000910e   2  rts */
    c->pc = RC_ADDR(0x0000910eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
