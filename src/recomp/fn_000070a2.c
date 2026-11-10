/* fn_000070a2 - 40 byte(s), 11 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000070a2(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000070a2u): goto L_70A2;
    case RC_ADDR(0x000070a6u): goto L_70A6;
    case RC_ADDR(0x000070aau): goto L_70AA;
    case RC_ADDR(0x000070aeu): goto L_70AE;
    case RC_ADDR(0x000070b2u): goto L_70B2;
    case RC_ADDR(0x000070b6u): goto L_70B6;
    case RC_ADDR(0x000070bau): goto L_70BA;
    case RC_ADDR(0x000070c0u): goto L_70C0;
    case RC_ADDR(0x000070c2u): goto L_70C2;
    case RC_ADDR(0x000070c6u): goto L_70C6;
    case RC_ADDR(0x000070c8u): goto L_70C8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_70A2:
    /* 000070a2   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x000070a2u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_70A6:
    /* 000070a6   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x000070a6u);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_70AA:
    /* 000070aa   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000070aau);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_70AE:
    /* 000070ae   4  lea (ffffce44,A4),A0 */
    c->pc = RC_ADDR(0x000070aeu);
    c->a[0] = (c->a[4] - 0x31bcu);

L_70B2:
    /* 000070b2   4  clr.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x000070b2u);
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_70B6:
    /* 000070b6   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000070b6u);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_70BA:
    /* 000070ba   6  cmpi.w #100,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000070bau);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000100u);

L_70C0:
    /* 000070c0   2  blt 000070aa */
    c->pc = RC_ADDR(0x000070c0u);
    if (rc_cond(c, 13)) { rc_tick(); goto L_70AA; }

L_70C2:
    /* 000070c2   4  clr.w (ffffcf46,A4) */
    c->pc = RC_ADDR(0x000070c2u);
    rc_wr16(c, m, (c->a[4] - 0x30bau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_70C6:
    /* 000070c6   2  unlk A5 */
    c->pc = RC_ADDR(0x000070c6u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_70C8:
    /* 000070c8   2  rts */
    c->pc = RC_ADDR(0x000070c8u);
    rc_ret(c, m);
    return;

}
