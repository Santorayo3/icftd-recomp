/* fn_00013d26 - 30 byte(s), 9 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00013d26(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00013d26u): goto L_13D26;
    case RC_ADDR(0x00013d2au): goto L_13D2A;
    case RC_ADDR(0x00013d2eu): goto L_13D2E;
    case RC_ADDR(0x00013d32u): goto L_13D32;
    case RC_ADDR(0x00013d36u): goto L_13D36;
    case RC_ADDR(0x00013d3au): goto L_13D3A;
    case RC_ADDR(0x00013d3eu): goto L_13D3E;
    case RC_ADDR(0x00013d40u): goto L_13D40;
    case RC_ADDR(0x00013d42u): goto L_13D42;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_13D26:
    /* 00013d26   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00013d26u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_13D2A:
    /* 00013d2a   4  pea (1848,A4) */
    c->pc = RC_ADDR(0x00013d2au);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x1848u));

L_13D2E:
    /* 00013d2e   4  move.w #6,-(A7) */
    c->pc = RC_ADDR(0x00013d2eu);
    rc_step(c, m, 12);
    t0 = 0x00000006u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_13D32:
    /* 00013d32   4  pea (00013d44) */
    c->pc = RC_ADDR(0x00013d32u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00013d44u));

L_13D36:
    /* 00013d36   4  jsr (ffff819a,A4) */
    c->pc = RC_ADDR(0x00013d36u);
    rc_step(c, m, 18);
    /* vector 68 */
    rc_push32(c, m, RC_ADDR(0x00013d3au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c90u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001850eu);
    return;

L_13D3A:
    /* 00013d3a   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00013d3au);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_13D3E:
    /* 00013d3e   2  bsr 00013cf4 */
    c->pc = RC_ADDR(0x00013d3eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00013d40u));
    rc_depth++;
    c->pc = RC_ADDR(0x00013cf4u);
    return;

L_13D40:
    /* 00013d40   2  unlk A5 */
    c->pc = RC_ADDR(0x00013d40u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_13D42:
    /* 00013d42   2  rts */
    c->pc = RC_ADDR(0x00013d42u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
