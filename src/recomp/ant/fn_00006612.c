/* fn_00006612 - 34 byte(s), 11 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00006612(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00006612u): goto L_6612;
    case RC_ADDR(0x00006616u): goto L_6616;
    case RC_ADDR(0x00006618u): goto L_6618;
    case RC_ADDR(0x0000661au): goto L_661A;
    case RC_ADDR(0x0000661cu): goto L_661C;
    case RC_ADDR(0x00006620u): goto L_6620;
    case RC_ADDR(0x00006624u): goto L_6624;
    case RC_ADDR(0x00006628u): goto L_6628;
    case RC_ADDR(0x0000662cu): goto L_662C;
    case RC_ADDR(0x00006630u): goto L_6630;
    case RC_ADDR(0x00006632u): goto L_6632;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_6612:
    /* 00006612   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00006612u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_6616:
    /* 00006616   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00006616u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6618:
    /* 00006618   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00006618u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_661A:
    /* 0000661a   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000661au);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_661C:
    /* 0000661c   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0000661cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_6620:
    /* 00006620   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x00006620u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6624:
    /* 00006624   4  jsr (ffff829c,A4) */
    c->pc = RC_ADDR(0x00006624u);
    rc_step(c, m, 18);
    /* vector 111 */
    rc_push32(c, m, RC_ADDR(0x00006628u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d92u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021aa4u);
    return;

L_6628:
    /* 00006628   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00006628u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_662C:
    /* 0000662c   4  jsr (ffff820c,A4) */
    c->pc = RC_ADDR(0x0000662cu);
    rc_step(c, m, 18);
    /* vector 87 */
    rc_push32(c, m, RC_ADDR(0x00006630u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d02u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f260u);
    return;

L_6630:
    /* 00006630   2  unlk A5 */
    c->pc = RC_ADDR(0x00006630u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_6632:
    /* 00006632   2  rts */
    c->pc = RC_ADDR(0x00006632u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
