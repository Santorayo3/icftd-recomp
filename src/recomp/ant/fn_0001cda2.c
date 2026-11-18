/* fn_0001cda2 - 36 byte(s), 10 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001cda2(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001cda2u): goto L_1CDA2;
    case RC_ADDR(0x0001cda6u): goto L_1CDA6;
    case RC_ADDR(0x0001cdaau): goto L_1CDAA;
    case RC_ADDR(0x0001cdaeu): goto L_1CDAE;
    case RC_ADDR(0x0001cdb2u): goto L_1CDB2;
    case RC_ADDR(0x0001cdb6u): goto L_1CDB6;
    case RC_ADDR(0x0001cdbau): goto L_1CDBA;
    case RC_ADDR(0x0001cdbeu): goto L_1CDBE;
    case RC_ADDR(0x0001cdc2u): goto L_1CDC2;
    case RC_ADDR(0x0001cdc4u): goto L_1CDC4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1CDA2:
    /* 0001cda2   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001cda2u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1CDA6:
    /* 0001cda6   4  move.w #40,-(A7) */
    c->pc = RC_ADDR(0x0001cda6u);
    rc_step(c, m, 12);
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CDAA:
    /* 0001cdaa   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0001cdaau);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CDAE:
    /* 0001cdae   4  move.l (2c9a,A4),-(A7) */
    c->pc = RC_ADDR(0x0001cdaeu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2c9au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1CDB2:
    /* 0001cdb2   4  move.w (2c84,A4),-(A7) */
    c->pc = RC_ADDR(0x0001cdb2u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2c84u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CDB6:
    /* 0001cdb6   4  move.l (2c76,A4),-(A7) */
    c->pc = RC_ADDR(0x0001cdb6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2c76u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1CDBA:
    /* 0001cdba   4  jsr (ffff80e0,A4) */
    c->pc = RC_ADDR(0x0001cdbau);
    rc_step(c, m, 18);
    /* vector 37 */
    rc_push32(c, m, RC_ADDR(0x0001cdbeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bd6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000b008u);
    return;

L_1CDBE:
    /* 0001cdbe   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0001cdbeu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_1CDC2:
    /* 0001cdc2   2  unlk A5 */
    c->pc = RC_ADDR(0x0001cdc2u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1CDC4:
    /* 0001cdc4   2  rts */
    c->pc = RC_ADDR(0x0001cdc4u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
