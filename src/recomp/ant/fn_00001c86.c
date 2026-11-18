/* fn_00001c86 - 34 byte(s), 12 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00001c86(cpu_t *c, rt_machine *m)
{
    u32 t0, t1;

    switch (c->pc)
    {
    case RC_ADDR(0x00001c86u): goto L_1C86;
    case RC_ADDR(0x00001c8au): goto L_1C8A;
    case RC_ADDR(0x00001c8eu): goto L_1C8E;
    case RC_ADDR(0x00001c92u): goto L_1C92;
    case RC_ADDR(0x00001c94u): goto L_1C94;
    case RC_ADDR(0x00001c98u): goto L_1C98;
    case RC_ADDR(0x00001c9cu): goto L_1C9C;
    case RC_ADDR(0x00001c9eu): goto L_1C9E;
    case RC_ADDR(0x00001ca0u): goto L_1CA0;
    case RC_ADDR(0x00001ca2u): goto L_1CA2;
    case RC_ADDR(0x00001ca4u): goto L_1CA4;
    case RC_ADDR(0x00001ca6u): goto L_1CA6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1C86:
    /* 00001c86   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00001c86u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1C8A:
    /* 00001c8a   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00001c8au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C8E:
    /* 00001c8e   4  cmp.w (ffff83e6,A4),D0 */
    c->pc = RC_ADDR(0x00001c8eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1au));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1C92:
    /* 00001c92   2  bgt 00001c9e */
    c->pc = RC_ADDR(0x00001c92u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_1C9E;

L_1C94:
    /* 00001c94   4  move.w (a,A5),D0 */
    c->pc = RC_ADDR(0x00001c94u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C98:
    /* 00001c98   4  cmp.w (ffff83e6,A4),D0 */
    c->pc = RC_ADDR(0x00001c98u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1au));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1C9C:
    /* 00001c9c   2  bgt 00001ca4 */
    c->pc = RC_ADDR(0x00001c9cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_1CA4;

L_1C9E:
    /* 00001c9e   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00001c9eu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1CA0:
    /* 00001ca0   2  unlk A5 */
    c->pc = RC_ADDR(0x00001ca0u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1CA2:
    /* 00001ca2   2  rts */
    c->pc = RC_ADDR(0x00001ca2u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_1CA4:
    /* 00001ca4   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00001ca4u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1CA6:
    /* 00001ca6   2  bra 00001ca0 */
    c->pc = RC_ADDR(0x00001ca6u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1CA0;

}
