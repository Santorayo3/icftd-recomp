/* fn_00018a02 - 84 byte(s), 24 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00018a02(cpu_t *c, rt_machine *m)
{
    u32 t0, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00018a02u): goto L_18A02;
    case RC_ADDR(0x00018a06u): goto L_18A06;
    case RC_ADDR(0x00018a0au): goto L_18A0A;
    case RC_ADDR(0x00018a0cu): goto L_18A0C;
    case RC_ADDR(0x00018a10u): goto L_18A10;
    case RC_ADDR(0x00018a12u): goto L_18A12;
    case RC_ADDR(0x00018a16u): goto L_18A16;
    case RC_ADDR(0x00018a1au): goto L_18A1A;
    case RC_ADDR(0x00018a1cu): goto L_18A1C;
    case RC_ADDR(0x00018a22u): goto L_18A22;
    case RC_ADDR(0x00018a28u): goto L_18A28;
    case RC_ADDR(0x00018a2au): goto L_18A2A;
    case RC_ADDR(0x00018a2eu): goto L_18A2E;
    case RC_ADDR(0x00018a32u): goto L_18A32;
    case RC_ADDR(0x00018a34u): goto L_18A34;
    case RC_ADDR(0x00018a3au): goto L_18A3A;
    case RC_ADDR(0x00018a40u): goto L_18A40;
    case RC_ADDR(0x00018a42u): goto L_18A42;
    case RC_ADDR(0x00018a46u): goto L_18A46;
    case RC_ADDR(0x00018a48u): goto L_18A48;
    case RC_ADDR(0x00018a4au): goto L_18A4A;
    case RC_ADDR(0x00018a4eu): goto L_18A4E;
    case RC_ADDR(0x00018a52u): goto L_18A52;
    case RC_ADDR(0x00018a54u): goto L_18A54;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_18A02:
    /* 00018a02   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00018a02u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_18A06:
    /* 00018a06   4  tst.w (fffffa26,A4) */
    c->pc = RC_ADDR(0x00018a06u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5dau));
    rc_set_nzvc(c, t0, RC_W);

L_18A0A:
    /* 00018a0a   2  bne 00018a12 */
    c->pc = RC_ADDR(0x00018a0au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_18A12;

L_18A0C:
    /* 00018a0c   4  tst.w (fffffa28,A4) */
    c->pc = RC_ADDR(0x00018a0cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5d8u));
    rc_set_nzvc(c, t0, RC_W);

L_18A10:
    /* 00018a10   2  beq 00018a4a */
    c->pc = RC_ADDR(0x00018a10u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_18A4A;

L_18A12:
    /* 00018a12   4  clr.w (700,A4) */
    c->pc = RC_ADDR(0x00018a12u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x700u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18A16:
    /* 00018a16   4  tst.w (fffffa26,A4) */
    c->pc = RC_ADDR(0x00018a16u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5dau));
    rc_set_nzvc(c, t0, RC_W);

L_18A1A:
    /* 00018a1a   2  beq 00018a2a */
    c->pc = RC_ADDR(0x00018a1au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_18A2A;

L_18A1C:
    /* 00018a1c   6  bset #0,(701,A4) */
    c->pc = RC_ADDR(0x00018a1cu);
    rc_step(c, m, 20);
    t3 = (c->a[4] + 0x701u);
    t4 = 0x00000000u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_18A22:
    /* 00018a22   6  move.w #1,(fffffa2e,A4) */
    c->pc = RC_ADDR(0x00018a22u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x5d2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18A28:
    /* 00018a28   2  bra 00018a2e */
    c->pc = RC_ADDR(0x00018a28u);
    rc_step(c, m, 10);
    goto L_18A2E;

L_18A2A:
    /* 00018a2a   4  clr.w (fffffa2e,A4) */
    c->pc = RC_ADDR(0x00018a2au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x5d2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18A2E:
    /* 00018a2e   4  tst.w (fffffa28,A4) */
    c->pc = RC_ADDR(0x00018a2eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5d8u));
    rc_set_nzvc(c, t0, RC_W);

L_18A32:
    /* 00018a32   2  beq 00018a42 */
    c->pc = RC_ADDR(0x00018a32u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_18A42;

L_18A34:
    /* 00018a34   6  bset #3,(701,A4) */
    c->pc = RC_ADDR(0x00018a34u);
    rc_step(c, m, 20);
    t3 = (c->a[4] + 0x701u);
    t4 = 0x00000003u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_18A3A:
    /* 00018a3a   6  move.w #1,(fffffa30,A4) */
    c->pc = RC_ADDR(0x00018a3au);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x5d0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18A40:
    /* 00018a40   2  bra 00018a46 */
    c->pc = RC_ADDR(0x00018a40u);
    rc_step(c, m, 10);
    goto L_18A46;

L_18A42:
    /* 00018a42   4  clr.w (fffffa30,A4) */
    c->pc = RC_ADDR(0x00018a42u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x5d0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18A46:
    /* 00018a46   2  bsr 000189ec */
    c->pc = RC_ADDR(0x00018a46u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00018a48u));
    rc_depth++;
    c->pc = RC_ADDR(0x000189ecu);
    return;

L_18A48:
    /* 00018a48   2  bra 00018a06 */
    c->pc = RC_ADDR(0x00018a48u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_18A06;

L_18A4A:
    /* 00018a4a   4  clr.w (fffffa30,A4) */
    c->pc = RC_ADDR(0x00018a4au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x5d0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18A4E:
    /* 00018a4e   4  clr.w (fffffa2e,A4) */
    c->pc = RC_ADDR(0x00018a4eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x5d2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18A52:
    /* 00018a52   2  unlk A5 */
    c->pc = RC_ADDR(0x00018a52u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_18A54:
    /* 00018a54   2  rts */
    c->pc = RC_ADDR(0x00018a54u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
