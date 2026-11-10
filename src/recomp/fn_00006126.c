/* fn_00006126 - 44 byte(s), 13 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00006126(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00006126u): goto L_6126;
    case RC_ADDR(0x0000612au): goto L_612A;
    case RC_ADDR(0x0000612eu): goto L_612E;
    case RC_ADDR(0x00006132u): goto L_6132;
    case RC_ADDR(0x00006134u): goto L_6134;
    case RC_ADDR(0x00006136u): goto L_6136;
    case RC_ADDR(0x0000613au): goto L_613A;
    case RC_ADDR(0x0000613eu): goto L_613E;
    case RC_ADDR(0x00006142u): goto L_6142;
    case RC_ADDR(0x00006148u): goto L_6148;
    case RC_ADDR(0x0000614au): goto L_614A;
    case RC_ADDR(0x0000614eu): goto L_614E;
    case RC_ADDR(0x00006150u): goto L_6150;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_6126:
    /* 00006126   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00006126u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_612A:
    /* 0000612a   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0000612au);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_612E:
    /* 0000612e   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0000612eu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6132:
    /* 00006132   2  ext.l D0 */
    c->pc = RC_ADDR(0x00006132u);
    rc_ext_l(c, 0);

L_6134:
    /* 00006134   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00006134u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_6136:
    /* 00006136   4  lea (fffff074,A4),A0 */
    c->pc = RC_ADDR(0x00006136u);
    c->a[0] = (c->a[4] - 0xf8cu);

L_613A:
    /* 0000613a   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000613au);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_613E:
    /* 0000613e   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000613eu);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_6142:
    /* 00006142   6  cmpi.w #14,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00006142u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000014u);

L_6148:
    /* 00006148   2  blt 0000612e */
    c->pc = RC_ADDR(0x00006148u);
    if (rc_cond(c, 13)) { rc_tick(); goto L_612E; }

L_614A:
    /* 0000614a   4  clr.w (fffff072,A4) */
    c->pc = RC_ADDR(0x0000614au);
    rc_wr16(c, m, (c->a[4] - 0xf8eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_614E:
    /* 0000614e   2  unlk A5 */
    c->pc = RC_ADDR(0x0000614eu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_6150:
    /* 00006150   2  rts */
    c->pc = RC_ADDR(0x00006150u);
    rc_ret(c, m);
    return;

}
