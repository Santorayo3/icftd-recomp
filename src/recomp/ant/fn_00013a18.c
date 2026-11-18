/* fn_00013a18 - 64 byte(s), 19 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00013a18(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x00013a18u): goto L_13A18;
    case RC_ADDR(0x00013a1cu): goto L_13A1C;
    case RC_ADDR(0x00013a20u): goto L_13A20;
    case RC_ADDR(0x00013a24u): goto L_13A24;
    case RC_ADDR(0x00013a26u): goto L_13A26;
    case RC_ADDR(0x00013a2au): goto L_13A2A;
    case RC_ADDR(0x00013a2cu): goto L_13A2C;
    case RC_ADDR(0x00013a30u): goto L_13A30;
    case RC_ADDR(0x00013a32u): goto L_13A32;
    case RC_ADDR(0x00013a36u): goto L_13A36;
    case RC_ADDR(0x00013a3au): goto L_13A3A;
    case RC_ADDR(0x00013a3cu): goto L_13A3C;
    case RC_ADDR(0x00013a40u): goto L_13A40;
    case RC_ADDR(0x00013a42u): goto L_13A42;
    case RC_ADDR(0x00013a46u): goto L_13A46;
    case RC_ADDR(0x00013a48u): goto L_13A48;
    case RC_ADDR(0x00013a4eu): goto L_13A4E;
    case RC_ADDR(0x00013a54u): goto L_13A54;
    case RC_ADDR(0x00013a56u): goto L_13A56;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_13A18:
    /* 00013a18   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00013a18u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_13A1C:
    /* 00013a1c   4  move.w (6f2,A4),D0 */
    c->pc = RC_ADDR(0x00013a1cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6f2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13A20:
    /* 00013a20   4  sub.w (6ee,A4),D0 */
    c->pc = RC_ADDR(0x00013a20u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6eeu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_13A24:
    /* 00013a24   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00013a24u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_13A26:
    /* 00013a26   4  jsr (00013988) */
    c->pc = RC_ADDR(0x00013a26u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00013a2au));
    rc_depth++;
    c->pc = RC_ADDR(0x00013988u);
    return;

L_13A2A:
    /* 00013a2a   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00013a2au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_13A2C:
    /* 00013a2c   4  cmp.w #500,D0 */
    c->pc = RC_ADDR(0x00013a2cu);
    rc_step(c, m, 8);
    t0 = 0x00000500u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_13A30:
    /* 00013a30   2  bgt 00013a48 */
    c->pc = RC_ADDR(0x00013a30u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_13A48;

L_13A32:
    /* 00013a32   4  move.w (6f4,A4),D0 */
    c->pc = RC_ADDR(0x00013a32u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6f4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13A36:
    /* 00013a36   4  sub.w (6f0,A4),D0 */
    c->pc = RC_ADDR(0x00013a36u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6f0u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_13A3A:
    /* 00013a3a   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00013a3au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_13A3C:
    /* 00013a3c   4  jsr (00013988) */
    c->pc = RC_ADDR(0x00013a3cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00013a40u));
    rc_depth++;
    c->pc = RC_ADDR(0x00013988u);
    return;

L_13A40:
    /* 00013a40   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00013a40u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_13A42:
    /* 00013a42   4  cmp.w #320,D0 */
    c->pc = RC_ADDR(0x00013a42u);
    rc_step(c, m, 8);
    t0 = 0x00000320u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_13A46:
    /* 00013a46   2  ble 00013a54 */
    c->pc = RC_ADDR(0x00013a46u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_13A54;

L_13A48:
    /* 00013a48   6  move.w #1,(14e8,A4) */
    c->pc = RC_ADDR(0x00013a48u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x14e8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13A4E:
    /* 00013a4e   6  move.w #1,(6ec,A4) */
    c->pc = RC_ADDR(0x00013a4eu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x6ecu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13A54:
    /* 00013a54   2  unlk A5 */
    c->pc = RC_ADDR(0x00013a54u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_13A56:
    /* 00013a56   2  rts */
    c->pc = RC_ADDR(0x00013a56u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
