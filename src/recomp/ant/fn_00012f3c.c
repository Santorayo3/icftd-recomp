/* fn_00012f3c - 98 byte(s), 19 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00012f3c(cpu_t *c, rt_machine *m)
{
    u32 t0, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00012f3cu): goto L_12F3C;
    case RC_ADDR(0x00012f40u): goto L_12F40;
    case RC_ADDR(0x00012f46u): goto L_12F46;
    case RC_ADDR(0x00012f4cu): goto L_12F4C;
    case RC_ADDR(0x00012f54u): goto L_12F54;
    case RC_ADDR(0x00012f5au): goto L_12F5A;
    case RC_ADDR(0x00012f62u): goto L_12F62;
    case RC_ADDR(0x00012f6au): goto L_12F6A;
    case RC_ADDR(0x00012f6eu): goto L_12F6E;
    case RC_ADDR(0x00012f72u): goto L_12F72;
    case RC_ADDR(0x00012f76u): goto L_12F76;
    case RC_ADDR(0x00012f7au): goto L_12F7A;
    case RC_ADDR(0x00012f80u): goto L_12F80;
    case RC_ADDR(0x00012f86u): goto L_12F86;
    case RC_ADDR(0x00012f8cu): goto L_12F8C;
    case RC_ADDR(0x00012f94u): goto L_12F94;
    case RC_ADDR(0x00012f96u): goto L_12F96;
    case RC_ADDR(0x00012f9au): goto L_12F9A;
    case RC_ADDR(0x00012f9cu): goto L_12F9C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_12F3C:
    /* 00012f3c   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00012f3cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_12F40:
    /* 00012f40   6  clr.w (00dff066).l */
    c->pc = RC_ADDR(0x00012f40u);
    rc_step(c, m, 20);
    rc_wr16(c, m, 0x00dff066u, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_12F46:
    /* 00012f46   6  clr.w (00dff064).l */
    c->pc = RC_ADDR(0x00012f46u);
    rc_step(c, m, 20);
    rc_wr16(c, m, 0x00dff064u, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_12F4C:
    /* 00012f4c   8  move.w #9f0,(00dff040).l */
    c->pc = RC_ADDR(0x00012f4cu);
    rc_step(c, m, 20);
    t0 = 0x000009f0u;
    rc_wr16(c, m, 0x00dff040u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12F54:
    /* 00012f54   6  clr.w (00dff042).l */
    c->pc = RC_ADDR(0x00012f54u);
    rc_step(c, m, 20);
    rc_wr16(c, m, 0x00dff042u, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_12F5A:
    /* 00012f5a   8  move.w #ffff,(00dff044).l */
    c->pc = RC_ADDR(0x00012f5au);
    rc_step(c, m, 20);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, 0x00dff044u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12F62:
    /* 00012f62   8  move.w #ffff,(00dff046).l */
    c->pc = RC_ADDR(0x00012f62u);
    rc_step(c, m, 20);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, 0x00dff046u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12F6A:
    /* 00012f6a   4  lea (fffffaf6,A4),A0 */
    c->pc = RC_ADDR(0x00012f6au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x50au);

L_12F6E:
    /* 00012f6e   4  lea (ffffface,A4),A1 */
    c->pc = RC_ADDR(0x00012f6eu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x532u);

L_12F72:
    /* 00012f72   4  move.w #3214,D1 */
    c->pc = RC_ADDR(0x00012f72u);
    rc_step(c, m, 8);
    t0 = 0x00003214u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12F76:
    /* 00012f76   4  move.w #4,D0 */
    c->pc = RC_ADDR(0x00012f76u);
    rc_step(c, m, 8);
    t0 = 0x00000004u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12F7A:
    /* 00012f7a   6  move.l (A0)+,(00dff050).l */
    c->pc = RC_ADDR(0x00012f7au);
    rc_step(c, m, 28);
    t3 = c->a[0];
    c->a[0] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_wr32(c, m, 0x00dff050u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_12F80:
    /* 00012f80   6  move.l (A1)+,(00dff054).l */
    c->pc = RC_ADDR(0x00012f80u);
    rc_step(c, m, 28);
    t3 = c->a[1];
    c->a[1] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_wr32(c, m, 0x00dff054u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_12F86:
    /* 00012f86   6  move.w D1,(00dff058).l */
    c->pc = RC_ADDR(0x00012f86u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, 0x00dff058u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12F8C:
    /* 00012f8c   8  btst #6,(00dff002).l */
    c->pc = RC_ADDR(0x00012f8cu);
    rc_step(c, m, 20);
    t3 = 0x00dff002u;
    t4 = 0x00000006u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_12F94:
    /* 00012f94   2  bne 00012f8c */
    c->pc = RC_ADDR(0x00012f94u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_12F8C; }

L_12F96:
    /* 00012f96   4  dbf D0,00012f7a */
    c->pc = RC_ADDR(0x00012f96u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_12F7A; }
    }

L_12F9A:
    /* 00012f9a   2  unlk A5 */
    c->pc = RC_ADDR(0x00012f9au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_12F9C:
    /* 00012f9c   2  rts */
    c->pc = RC_ADDR(0x00012f9cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
