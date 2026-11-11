/* fn_0000b2e8 - 36 byte(s), 10 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000b2e8(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000b2e8u): goto L_B2E8;
    case RC_ADDR(0x0000b2ecu): goto L_B2EC;
    case RC_ADDR(0x0000b2f0u): goto L_B2F0;
    case RC_ADDR(0x0000b2f4u): goto L_B2F4;
    case RC_ADDR(0x0000b2f8u): goto L_B2F8;
    case RC_ADDR(0x0000b2fcu): goto L_B2FC;
    case RC_ADDR(0x0000b300u): goto L_B300;
    case RC_ADDR(0x0000b304u): goto L_B304;
    case RC_ADDR(0x0000b308u): goto L_B308;
    case RC_ADDR(0x0000b30au): goto L_B30A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_B2E8:
    /* 0000b2e8   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000b2e8u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_B2EC:
    /* 0000b2ec   4  move.w #40,-(A7) */
    c->pc = RC_ADDR(0x0000b2ecu);
    rc_step(c, m, 12);
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B2F0:
    /* 0000b2f0   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000b2f0u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B2F4:
    /* 0000b2f4   4  move.l (412,A4),-(A7) */
    c->pc = RC_ADDR(0x0000b2f4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x412u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B2F8:
    /* 0000b2f8   4  move.w (400,A4),-(A7) */
    c->pc = RC_ADDR(0x0000b2f8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x400u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B2FC:
    /* 0000b2fc   4  move.l (3f4,A4),-(A7) */
    c->pc = RC_ADDR(0x0000b2fcu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3f4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B300:
    /* 0000b300   4  jsr (ffff80d4,A4) */
    c->pc = RC_ADDR(0x0000b300u);
    rc_step(c, m, 18);
    /* vector 35 */
    rc_push32(c, m, RC_ADDR(0x0000b304u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b2au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00009c3cu);
    return;

L_B304:
    /* 0000b304   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000b304u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_B308:
    /* 0000b308   2  unlk A5 */
    c->pc = RC_ADDR(0x0000b308u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_B30A:
    /* 0000b30a   2  rts */
    c->pc = RC_ADDR(0x0000b30au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
