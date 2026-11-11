/* fn_0000711c - 64 byte(s), 19 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000711c(cpu_t *c, rt_machine *m)
{
    u32 t0, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000711cu): goto L_711C;
    case RC_ADDR(0x00007120u): goto L_7120;
    case RC_ADDR(0x00007124u): goto L_7124;
    case RC_ADDR(0x00007128u): goto L_7128;
    case RC_ADDR(0x0000712cu): goto L_712C;
    case RC_ADDR(0x0000712eu): goto L_712E;
    case RC_ADDR(0x00007134u): goto L_7134;
    case RC_ADDR(0x00007136u): goto L_7136;
    case RC_ADDR(0x0000713cu): goto L_713C;
    case RC_ADDR(0x0000713eu): goto L_713E;
    case RC_ADDR(0x00007144u): goto L_7144;
    case RC_ADDR(0x00007146u): goto L_7146;
    case RC_ADDR(0x0000714au): goto L_714A;
    case RC_ADDR(0x0000714eu): goto L_714E;
    case RC_ADDR(0x00007152u): goto L_7152;
    case RC_ADDR(0x00007154u): goto L_7154;
    case RC_ADDR(0x00007156u): goto L_7156;
    case RC_ADDR(0x00007158u): goto L_7158;
    case RC_ADDR(0x0000715au): goto L_715A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_711C:
    /* 0000711c   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000711cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_7120:
    /* 00007120   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00007120u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7124:
    /* 00007124   4  lea (ffffce44,A4),A0 */
    c->pc = RC_ADDR(0x00007124u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x31bcu);

L_7128:
    /* 00007128   4  tst.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00007128u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_B);

L_712C:
    /* 0000712c   2  beq 00007158 */
    c->pc = RC_ADDR(0x0000712cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_7158;

L_712E:
    /* 0000712e   6  cmpi.w #f4,(8,A5) */
    c->pc = RC_ADDR(0x0000712eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_cmp(c, RC_W, t0, 0x000000f4u);

L_7134:
    /* 00007134   2  bge 00007146 */
    c->pc = RC_ADDR(0x00007134u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_7146;

L_7136:
    /* 00007136   6  cmpi.w #c2,(8,A5) */
    c->pc = RC_ADDR(0x00007136u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_cmp(c, RC_W, t0, 0x000000c2u);

L_713C:
    /* 0000713c   2  ble 00007152 */
    c->pc = RC_ADDR(0x0000713cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_7152;

L_713E:
    /* 0000713e   6  cmpi.w #c6,(8,A5) */
    c->pc = RC_ADDR(0x0000713eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_cmp(c, RC_W, t0, 0x000000c6u);

L_7144:
    /* 00007144   2  bge 00007152 */
    c->pc = RC_ADDR(0x00007144u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_7152;

L_7146:
    /* 00007146   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00007146u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_714A:
    /* 0000714a   4  lea (ffffce44,A4),A0 */
    c->pc = RC_ADDR(0x0000714au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x31bcu);

L_714E:
    /* 0000714e   4  clr.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000714eu);
    rc_step(c, m, 18);
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_7152:
    /* 00007152   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00007152u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_7154:
    /* 00007154   2  unlk A5 */
    c->pc = RC_ADDR(0x00007154u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_7156:
    /* 00007156   2  rts */
    c->pc = RC_ADDR(0x00007156u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_7158:
    /* 00007158   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00007158u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_715A:
    /* 0000715a   2  bra 00007154 */
    c->pc = RC_ADDR(0x0000715au);
    rc_step(c, m, 10);
    rc_tick();
    goto L_7154;

}
