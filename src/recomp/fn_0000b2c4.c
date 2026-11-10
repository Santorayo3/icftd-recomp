/* fn_0000b2c4 - 36 byte(s), 10 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000b2c4(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000b2c4u): goto L_B2C4;
    case RC_ADDR(0x0000b2c8u): goto L_B2C8;
    case RC_ADDR(0x0000b2ccu): goto L_B2CC;
    case RC_ADDR(0x0000b2d0u): goto L_B2D0;
    case RC_ADDR(0x0000b2d4u): goto L_B2D4;
    case RC_ADDR(0x0000b2d8u): goto L_B2D8;
    case RC_ADDR(0x0000b2dcu): goto L_B2DC;
    case RC_ADDR(0x0000b2e0u): goto L_B2E0;
    case RC_ADDR(0x0000b2e4u): goto L_B2E4;
    case RC_ADDR(0x0000b2e6u): goto L_B2E6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_B2C4:
    /* 0000b2c4   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b2c4u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_B2C8:
    /* 0000b2c8   4  move.w #40,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b2c8u);
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B2CC:
    /* 0000b2cc   4  move.w #2,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b2ccu);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B2D0:
    /* 0000b2d0   4  move.l (412,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b2d0u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x412u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B2D4:
    /* 0000b2d4   4  move.w (400,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b2d4u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x400u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B2D8:
    /* 0000b2d8   4  move.l (3f4,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b2d8u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3f4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B2DC:
    /* 0000b2dc   4  jsr (ffff80d4,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b2dcu);
    /* vector 35 */
    rc_push32(c, m, RC_ADDR(0x0000b2e0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00009c3cu);
    return;

L_B2E0:
    /* 0000b2e0   4  lea (e,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b2e0u);
    c->a[7] = (c->a[7] + 0xeu);

L_B2E4:
    /* 0000b2e4   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b2e4u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_B2E6:
    /* 0000b2e6   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b2e6u);
    rc_ret(c, m);
    return;

}
