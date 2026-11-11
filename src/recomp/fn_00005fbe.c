/* fn_00005fbe - 34 byte(s), 11 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00005fbe(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00005fbeu): goto L_5FBE;
    case RC_ADDR(0x00005fc2u): goto L_5FC2;
    case RC_ADDR(0x00005fc4u): goto L_5FC4;
    case RC_ADDR(0x00005fc6u): goto L_5FC6;
    case RC_ADDR(0x00005fc8u): goto L_5FC8;
    case RC_ADDR(0x00005fccu): goto L_5FCC;
    case RC_ADDR(0x00005fd0u): goto L_5FD0;
    case RC_ADDR(0x00005fd4u): goto L_5FD4;
    case RC_ADDR(0x00005fd8u): goto L_5FD8;
    case RC_ADDR(0x00005fdcu): goto L_5FDC;
    case RC_ADDR(0x00005fdeu): goto L_5FDE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_5FBE:
    /* 00005fbe   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00005fbeu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_5FC2:
    /* 00005fc2   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00005fc2u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5FC4:
    /* 00005fc4   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00005fc4u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_5FC6:
    /* 00005fc6   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00005fc6u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_5FC8:
    /* 00005fc8   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00005fc8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_5FCC:
    /* 00005fcc   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x00005fccu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5FD0:
    /* 00005fd0   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x00005fd0u);
    rc_step(c, m, 18);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x00005fd4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cceu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001fa02u);
    return;

L_5FD4:
    /* 00005fd4   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00005fd4u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_5FD8:
    /* 00005fd8   4  jsr (ffff81ee,A4) */
    c->pc = RC_ADDR(0x00005fd8u);
    rc_step(c, m, 18);
    /* vector 82 */
    rc_push32(c, m, RC_ADDR(0x00005fdcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c44u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001d1dau);
    return;

L_5FDC:
    /* 00005fdc   2  unlk A5 */
    c->pc = RC_ADDR(0x00005fdcu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_5FDE:
    /* 00005fde   2  rts */
    c->pc = RC_ADDR(0x00005fdeu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
