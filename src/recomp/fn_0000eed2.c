/* fn_0000eed2 - 26 byte(s), 7 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000eed2(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000eed2u): goto L_EED2;
    case RC_ADDR(0x0000eed6u): goto L_EED6;
    case RC_ADDR(0x0000eedau): goto L_EEDA;
    case RC_ADDR(0x0000eedeu): goto L_EEDE;
    case RC_ADDR(0x0000eee2u): goto L_EEE2;
    case RC_ADDR(0x0000eee6u): goto L_EEE6;
    case RC_ADDR(0x0000eeeau): goto L_EEEA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_EED2:
    /* 0000eed2   4  movem.l { D1 D2 D3 D4 D5 D6 A0 A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x0000eed2u);
    rc_step(c, m);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[4]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_EED6:
    /* 0000eed6   4  move.l (2c,A7),D0 */
    c->pc = RC_ADDR(0x0000eed6u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[7] + 0x2cu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_EEDA:
    /* 0000eeda   4  movea.l (ae0,A4),A3 */
    c->pc = RC_ADDR(0x0000eedau);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0xae0u));
    c->a[3] = t0;

L_EEDE:
    /* 0000eede   4  movea.l (ffffa208,A4),A6 */
    c->pc = RC_ADDR(0x0000eedeu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5df8u));
    c->a[6] = t0;

L_EEE2:
    /* 0000eee2   4  jsr (0000f036) */
    c->pc = RC_ADDR(0x0000eee2u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0000eee6u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000f036u);
    return;

L_EEE6:
    /* 0000eee6   4  movem.l (SP)+,{ D4 D5 D6 D7 A1 A2 A3 A4 A5 A6 } */
    c->pc = RC_ADDR(0x0000eee6u);
    rc_step(c, m);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
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
    t0 = rc_rd32(c, m, t3);
    c->a[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[6] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_EEEA:
    /* 0000eeea   2  rts */
    c->pc = RC_ADDR(0x0000eeeau);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
