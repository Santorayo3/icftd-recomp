/* fn_00004d7a - 38 byte(s), 12 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00004d7a(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00004d7au): goto L_4D7A;
    case RC_ADDR(0x00004d7eu): goto L_4D7E;
    case RC_ADDR(0x00004d84u): goto L_4D84;
    case RC_ADDR(0x00004d86u): goto L_4D86;
    case RC_ADDR(0x00004d8cu): goto L_4D8C;
    case RC_ADDR(0x00004d8eu): goto L_4D8E;
    case RC_ADDR(0x00004d94u): goto L_4D94;
    case RC_ADDR(0x00004d96u): goto L_4D96;
    case RC_ADDR(0x00004d98u): goto L_4D98;
    case RC_ADDR(0x00004d9au): goto L_4D9A;
    case RC_ADDR(0x00004d9cu): goto L_4D9C;
    case RC_ADDR(0x00004d9eu): goto L_4D9E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_4D7A:
    /* 00004d7a   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00004d7au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_4D7E:
    /* 00004d7e   6  cmpi.w #27,(8,A5) */
    c->pc = RC_ADDR(0x00004d7eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_cmp(c, RC_W, t0, 0x00000027u);

L_4D84:
    /* 00004d84   2  bge 00004d9c */
    c->pc = RC_ADDR(0x00004d84u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_4D9C;

L_4D86:
    /* 00004d86   6  cmpi.w #8,(8,A5) */
    c->pc = RC_ADDR(0x00004d86u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_cmp(c, RC_W, t0, 0x00000008u);

L_4D8C:
    /* 00004d8c   2  blt 00004d96 */
    c->pc = RC_ADDR(0x00004d8cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_4D96;

L_4D8E:
    /* 00004d8e   6  cmpi.w #a,(8,A5) */
    c->pc = RC_ADDR(0x00004d8eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_cmp(c, RC_W, t0, 0x0000000au);

L_4D94:
    /* 00004d94   2  ble 00004d9c */
    c->pc = RC_ADDR(0x00004d94u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_4D9C;

L_4D96:
    /* 00004d96   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00004d96u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_4D98:
    /* 00004d98   2  unlk A5 */
    c->pc = RC_ADDR(0x00004d98u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_4D9A:
    /* 00004d9a   2  rts */
    c->pc = RC_ADDR(0x00004d9au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_4D9C:
    /* 00004d9c   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00004d9cu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_4D9E:
    /* 00004d9e   2  bra 00004d98 */
    c->pc = RC_ADDR(0x00004d9eu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_4D98;

}
