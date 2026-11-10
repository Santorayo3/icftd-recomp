/* fn_0000b2a0 - 36 byte(s), 10 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000b2a0(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000b2a0u): goto L_B2A0;
    case RC_ADDR(0x0000b2a4u): goto L_B2A4;
    case RC_ADDR(0x0000b2a8u): goto L_B2A8;
    case RC_ADDR(0x0000b2acu): goto L_B2AC;
    case RC_ADDR(0x0000b2b0u): goto L_B2B0;
    case RC_ADDR(0x0000b2b4u): goto L_B2B4;
    case RC_ADDR(0x0000b2b8u): goto L_B2B8;
    case RC_ADDR(0x0000b2bcu): goto L_B2BC;
    case RC_ADDR(0x0000b2c0u): goto L_B2C0;
    case RC_ADDR(0x0000b2c2u): goto L_B2C2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_B2A0:
    /* 0000b2a0   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000b2a0u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_B2A4:
    /* 0000b2a4   4  move.w #40,-(A7) */
    c->pc = RC_ADDR(0x0000b2a4u);
    rc_step(c, m);
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B2A8:
    /* 0000b2a8   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000b2a8u);
    rc_step(c, m);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B2AC:
    /* 0000b2ac   4  move.l (40e,A4),-(A7) */
    c->pc = RC_ADDR(0x0000b2acu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x40eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B2B0:
    /* 0000b2b0   4  move.w (3fe,A4),-(A7) */
    c->pc = RC_ADDR(0x0000b2b0u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3feu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B2B4:
    /* 0000b2b4   4  move.l (3f0,A4),-(A7) */
    c->pc = RC_ADDR(0x0000b2b4u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3f0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B2B8:
    /* 0000b2b8   4  jsr (ffff80d4,A4) */
    c->pc = RC_ADDR(0x0000b2b8u);
    rc_step(c, m);
    /* vector 35 */
    rc_push32(c, m, RC_ADDR(0x0000b2bcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b2au);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009c3cu);
    return;

L_B2BC:
    /* 0000b2bc   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000b2bcu);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xeu);

L_B2C0:
    /* 0000b2c0   2  unlk A5 */
    c->pc = RC_ADDR(0x0000b2c0u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_B2C2:
    /* 0000b2c2   2  rts */
    c->pc = RC_ADDR(0x0000b2c2u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
