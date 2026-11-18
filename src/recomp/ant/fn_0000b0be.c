/* fn_0000b0be - 26 byte(s), 9 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000b0be(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000b0beu): goto L_B0BE;
    case RC_ADDR(0x0000b0c2u): goto L_B0C2;
    case RC_ADDR(0x0000b0c6u): goto L_B0C6;
    case RC_ADDR(0x0000b0cau): goto L_B0CA;
    case RC_ADDR(0x0000b0ccu): goto L_B0CC;
    case RC_ADDR(0x0000b0d0u): goto L_B0D0;
    case RC_ADDR(0x0000b0d2u): goto L_B0D2;
    case RC_ADDR(0x0000b0d4u): goto L_B0D4;
    case RC_ADDR(0x0000b0d6u): goto L_B0D6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_B0BE:
    /* 0000b0be   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000b0beu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_B0C2:
    /* 0000b0c2   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000b0c2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B0C6:
    /* 0000b0c6   4  jsr (ffff8128,A4) */
    c->pc = RC_ADDR(0x0000b0c6u);
    rc_step(c, m, 18);
    /* vector 49 */
    rc_push32(c, m, RC_ADDR(0x0000b0cau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c1eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00010070u);
    return;

L_B0CA:
    /* 0000b0ca   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000b0cau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_B0CC:
    /* 0000b0cc   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x0000b0ccu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B0D0:
    /* 0000b0d0   2  bsr 0000b090 */
    c->pc = RC_ADDR(0x0000b0d0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000b0d2u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000b090u);
    return;

L_B0D2:
    /* 0000b0d2   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000b0d2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_B0D4:
    /* 0000b0d4   2  unlk A5 */
    c->pc = RC_ADDR(0x0000b0d4u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_B0D6:
    /* 0000b0d6   2  rts */
    c->pc = RC_ADDR(0x0000b0d6u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
