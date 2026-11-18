/* fn_0000b450 - 28 byte(s), 9 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000b450(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000b450u): goto L_B450;
    case RC_ADDR(0x0000b454u): goto L_B454;
    case RC_ADDR(0x0000b458u): goto L_B458;
    case RC_ADDR(0x0000b45au): goto L_B45A;
    case RC_ADDR(0x0000b45eu): goto L_B45E;
    case RC_ADDR(0x0000b462u): goto L_B462;
    case RC_ADDR(0x0000b466u): goto L_B466;
    case RC_ADDR(0x0000b468u): goto L_B468;
    case RC_ADDR(0x0000b46au): goto L_B46A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_B450:
    /* 0000b450   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000b450u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_B454:
    /* 0000b454   4  tst.l (fffff896,A4) */
    c->pc = RC_ADDR(0x0000b454u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x76au));
    rc_set_nzvc(c, t0, RC_L);

L_B458:
    /* 0000b458   2  beq 0000b468 */
    c->pc = RC_ADDR(0x0000b458u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_B468;

L_B45A:
    /* 0000b45a   4  move.l (fffff89a,A4),-(A7) */
    c->pc = RC_ADDR(0x0000b45au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x766u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B45E:
    /* 0000b45e   4  move.l (fffff896,A4),-(A7) */
    c->pc = RC_ADDR(0x0000b45eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x76au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B462:
    /* 0000b462   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0000b462u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0000b466u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_B466:
    /* 0000b466   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000b466u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_B468:
    /* 0000b468   2  unlk A5 */
    c->pc = RC_ADDR(0x0000b468u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_B46A:
    /* 0000b46a   2  rts */
    c->pc = RC_ADDR(0x0000b46au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
