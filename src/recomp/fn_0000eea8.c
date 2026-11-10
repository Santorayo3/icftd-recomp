/* fn_0000eea8 - 42 byte(s), 11 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000eea8(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000eea8u): goto L_EEA8;
    case RC_ADDR(0x0000eeacu): goto L_EEAC;
    case RC_ADDR(0x0000eeb0u): goto L_EEB0;
    case RC_ADDR(0x0000eeb4u): goto L_EEB4;
    case RC_ADDR(0x0000eeb8u): goto L_EEB8;
    case RC_ADDR(0x0000eebcu): goto L_EEBC;
    case RC_ADDR(0x0000eec0u): goto L_EEC0;
    case RC_ADDR(0x0000eec4u): goto L_EEC4;
    case RC_ADDR(0x0000eec8u): goto L_EEC8;
    case RC_ADDR(0x0000eeccu): goto L_EECC;
    case RC_ADDR(0x0000eed0u): goto L_EED0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_EEA8:
    /* 0000eea8   4  movem.l { D1 D2 D3 D4 D5 D6 A0 A1 A2 A3 },-(SP) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eea8u);
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

L_EEAC:
    /* 0000eeac   4  movea.l (2c,A7),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eeacu);
    t0 = rc_rd32(c, m, (c->a[7] + 0x2cu));
    c->a[0] = t0;

L_EEB0:
    /* 0000eeb0   4  move.l (30,A7),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eeb0u);
    t0 = rc_rd32(c, m, (c->a[7] + 0x30u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_EEB4:
    /* 0000eeb4   4  move.l (34,A7),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eeb4u);
    t0 = rc_rd32(c, m, (c->a[7] + 0x34u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_EEB8:
    /* 0000eeb8   4  move.l (38,A7),D2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eeb8u);
    t0 = rc_rd32(c, m, (c->a[7] + 0x38u));
    rc_d_set(c, 2, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_EEBC:
    /* 0000eebc   4  move.l (3c,A7),D3 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eebcu);
    t0 = rc_rd32(c, m, (c->a[7] + 0x3cu));
    rc_d_set(c, 3, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_EEC0:
    /* 0000eec0   4  movea.l (ae0,A4),A3 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eec0u);
    t0 = rc_rd32(c, m, (c->a[4] + 0xae0u));
    c->a[3] = t0;

L_EEC4:
    /* 0000eec4   4  movea.l (ffffa208,A4),A6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eec4u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5df8u));
    c->a[6] = t0;

L_EEC8:
    /* 0000eec8   4  jsr (0000f032) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eec8u);
    rc_push32(c, m, RC_ADDR(0x0000eeccu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000f032u);
    return;

L_EECC:
    /* 0000eecc   4  movem.l (SP)+,{ D4 D5 D6 D7 A1 A2 A3 A4 A5 A6 } */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eeccu);
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

L_EED0:
    /* 0000eed0   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eed0u);
    rc_ret(c, m);
    return;

}
