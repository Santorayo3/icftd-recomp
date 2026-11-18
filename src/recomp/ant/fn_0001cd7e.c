/* fn_0001cd7e - 36 byte(s), 10 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001cd7e(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001cd7eu): goto L_1CD7E;
    case RC_ADDR(0x0001cd82u): goto L_1CD82;
    case RC_ADDR(0x0001cd86u): goto L_1CD86;
    case RC_ADDR(0x0001cd8au): goto L_1CD8A;
    case RC_ADDR(0x0001cd8eu): goto L_1CD8E;
    case RC_ADDR(0x0001cd92u): goto L_1CD92;
    case RC_ADDR(0x0001cd96u): goto L_1CD96;
    case RC_ADDR(0x0001cd9au): goto L_1CD9A;
    case RC_ADDR(0x0001cd9eu): goto L_1CD9E;
    case RC_ADDR(0x0001cda0u): goto L_1CDA0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1CD7E:
    /* 0001cd7e   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001cd7eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1CD82:
    /* 0001cd82   4  move.w #40,-(A7) */
    c->pc = RC_ADDR(0x0001cd82u);
    rc_step(c, m, 12);
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CD86:
    /* 0001cd86   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0001cd86u);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CD8A:
    /* 0001cd8a   4  move.l (2c96,A4),-(A7) */
    c->pc = RC_ADDR(0x0001cd8au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2c96u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1CD8E:
    /* 0001cd8e   4  move.w (2c82,A4),-(A7) */
    c->pc = RC_ADDR(0x0001cd8eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2c82u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CD92:
    /* 0001cd92   4  move.l (2c72,A4),-(A7) */
    c->pc = RC_ADDR(0x0001cd92u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2c72u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1CD96:
    /* 0001cd96   4  jsr (ffff80e0,A4) */
    c->pc = RC_ADDR(0x0001cd96u);
    rc_step(c, m, 18);
    /* vector 37 */
    rc_push32(c, m, RC_ADDR(0x0001cd9au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bd6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000b008u);
    return;

L_1CD9A:
    /* 0001cd9a   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0001cd9au);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_1CD9E:
    /* 0001cd9e   2  unlk A5 */
    c->pc = RC_ADDR(0x0001cd9eu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1CDA0:
    /* 0001cda0   2  rts */
    c->pc = RC_ADDR(0x0001cda0u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
