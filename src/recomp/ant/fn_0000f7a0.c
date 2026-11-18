/* fn_0000f7a0 - 68 byte(s), 18 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000f7a0(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000f7a0u): goto L_F7A0;
    case RC_ADDR(0x0000f7a4u): goto L_F7A4;
    case RC_ADDR(0x0000f7a8u): goto L_F7A8;
    case RC_ADDR(0x0000f7acu): goto L_F7AC;
    case RC_ADDR(0x0000f7b0u): goto L_F7B0;
    case RC_ADDR(0x0000f7b4u): goto L_F7B4;
    case RC_ADDR(0x0000f7b8u): goto L_F7B8;
    case RC_ADDR(0x0000f7bcu): goto L_F7BC;
    case RC_ADDR(0x0000f7c0u): goto L_F7C0;
    case RC_ADDR(0x0000f7c4u): goto L_F7C4;
    case RC_ADDR(0x0000f7c8u): goto L_F7C8;
    case RC_ADDR(0x0000f7ccu): goto L_F7CC;
    case RC_ADDR(0x0000f7d0u): goto L_F7D0;
    case RC_ADDR(0x0000f7d4u): goto L_F7D4;
    case RC_ADDR(0x0000f7d8u): goto L_F7D8;
    case RC_ADDR(0x0000f7dcu): goto L_F7DC;
    case RC_ADDR(0x0000f7e0u): goto L_F7E0;
    case RC_ADDR(0x0000f7e2u): goto L_F7E2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_F7A0:
    /* 0000f7a0   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000f7a0u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_F7A4:
    /* 0000f7a4   4  pea (114c,A4) */
    c->pc = RC_ADDR(0x0000f7a4u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x114cu));

L_F7A8:
    /* 0000f7a8   4  move.w #22,-(A7) */
    c->pc = RC_ADDR(0x0000f7a8u);
    rc_step(c, m, 12);
    t0 = 0x00000022u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_F7AC:
    /* 0000f7ac   4  pea (0000f7e4) */
    c->pc = RC_ADDR(0x0000f7acu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000f7e4u));

L_F7B0:
    /* 0000f7b0   4  jsr (ffff819a,A4) */
    c->pc = RC_ADDR(0x0000f7b0u);
    rc_step(c, m, 18);
    /* vector 68 */
    rc_push32(c, m, RC_ADDR(0x0000f7b4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c90u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001850eu);
    return;

L_F7B4:
    /* 0000f7b4   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0000f7b4u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_F7B8:
    /* 0000f7b8   4  pea (11f8,A4) */
    c->pc = RC_ADDR(0x0000f7b8u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x11f8u));

L_F7BC:
    /* 0000f7bc   4  move.w #29,-(A7) */
    c->pc = RC_ADDR(0x0000f7bcu);
    rc_step(c, m, 12);
    t0 = 0x00000029u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_F7C0:
    /* 0000f7c0   4  pea (0000f7e9) */
    c->pc = RC_ADDR(0x0000f7c0u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000f7e9u));

L_F7C4:
    /* 0000f7c4   4  jsr (ffff819a,A4) */
    c->pc = RC_ADDR(0x0000f7c4u);
    rc_step(c, m, 18);
    /* vector 68 */
    rc_push32(c, m, RC_ADDR(0x0000f7c8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c90u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001850eu);
    return;

L_F7C8:
    /* 0000f7c8   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0000f7c8u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_F7CC:
    /* 0000f7cc   4  pea (129c,A4) */
    c->pc = RC_ADDR(0x0000f7ccu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x129cu));

L_F7D0:
    /* 0000f7d0   4  move.w #42,-(A7) */
    c->pc = RC_ADDR(0x0000f7d0u);
    rc_step(c, m, 12);
    t0 = 0x00000042u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_F7D4:
    /* 0000f7d4   4  pea (0000f7ee) */
    c->pc = RC_ADDR(0x0000f7d4u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000f7eeu));

L_F7D8:
    /* 0000f7d8   4  jsr (ffff819a,A4) */
    c->pc = RC_ADDR(0x0000f7d8u);
    rc_step(c, m, 18);
    /* vector 68 */
    rc_push32(c, m, RC_ADDR(0x0000f7dcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c90u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001850eu);
    return;

L_F7DC:
    /* 0000f7dc   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0000f7dcu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_F7E0:
    /* 0000f7e0   2  unlk A5 */
    c->pc = RC_ADDR(0x0000f7e0u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_F7E2:
    /* 0000f7e2   2  rts */
    c->pc = RC_ADDR(0x0000f7e2u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
