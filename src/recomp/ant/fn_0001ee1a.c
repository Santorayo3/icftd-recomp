/* fn_0001ee1a - 40 byte(s), 13 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001ee1a(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001ee1au): goto L_1EE1A;
    case RC_ADDR(0x0001ee1eu): goto L_1EE1E;
    case RC_ADDR(0x0001ee22u): goto L_1EE22;
    case RC_ADDR(0x0001ee24u): goto L_1EE24;
    case RC_ADDR(0x0001ee28u): goto L_1EE28;
    case RC_ADDR(0x0001ee2cu): goto L_1EE2C;
    case RC_ADDR(0x0001ee2eu): goto L_1EE2E;
    case RC_ADDR(0x0001ee32u): goto L_1EE32;
    case RC_ADDR(0x0001ee34u): goto L_1EE34;
    case RC_ADDR(0x0001ee38u): goto L_1EE38;
    case RC_ADDR(0x0001ee3cu): goto L_1EE3C;
    case RC_ADDR(0x0001ee3eu): goto L_1EE3E;
    case RC_ADDR(0x0001ee40u): goto L_1EE40;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1EE1A:
    /* 0001ee1a   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001ee1au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1EE1E:
    /* 0001ee1e   4  tst.w (2cac,A4) */
    c->pc = RC_ADDR(0x0001ee1eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2cacu));
    rc_set_nzvc(c, t0, RC_W);

L_1EE22:
    /* 0001ee22   2  beq 0001ee2e */
    c->pc = RC_ADDR(0x0001ee22u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1EE2E;

L_1EE24:
    /* 0001ee24   4  pea (0001ee42) */
    c->pc = RC_ADDR(0x0001ee24u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001ee42u));

L_1EE28:
    /* 0001ee28   4  jsr (0001efce) */
    c->pc = RC_ADDR(0x0001ee28u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001ee2cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001efceu);
    return;

L_1EE2C:
    /* 0001ee2c   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001ee2cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1EE2E:
    /* 0001ee2e   4  tst.w (2ca6,A4) */
    c->pc = RC_ADDR(0x0001ee2eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2ca6u));
    rc_set_nzvc(c, t0, RC_W);

L_1EE32:
    /* 0001ee32   2  beq 0001ee3e */
    c->pc = RC_ADDR(0x0001ee32u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1EE3E;

L_1EE34:
    /* 0001ee34   4  pea (0001eeeb) */
    c->pc = RC_ADDR(0x0001ee34u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001eeebu));

L_1EE38:
    /* 0001ee38   4  jsr (0001efce) */
    c->pc = RC_ADDR(0x0001ee38u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001ee3cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001efceu);
    return;

L_1EE3C:
    /* 0001ee3c   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001ee3cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1EE3E:
    /* 0001ee3e   2  unlk A5 */
    c->pc = RC_ADDR(0x0001ee3eu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1EE40:
    /* 0001ee40   2  rts */
    c->pc = RC_ADDR(0x0001ee40u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
