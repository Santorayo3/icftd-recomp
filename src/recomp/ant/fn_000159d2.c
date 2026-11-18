/* fn_000159d2 - 132 byte(s), 35 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000159d2(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000159d2u): goto L_159D2;
    case RC_ADDR(0x000159d6u): goto L_159D6;
    case RC_ADDR(0x000159dau): goto L_159DA;
    case RC_ADDR(0x000159deu): goto L_159DE;
    case RC_ADDR(0x000159e2u): goto L_159E2;
    case RC_ADDR(0x000159e4u): goto L_159E4;
    case RC_ADDR(0x000159eau): goto L_159EA;
    case RC_ADDR(0x000159ecu): goto L_159EC;
    case RC_ADDR(0x000159f0u): goto L_159F0;
    case RC_ADDR(0x000159f4u): goto L_159F4;
    case RC_ADDR(0x000159f8u): goto L_159F8;
    case RC_ADDR(0x000159fau): goto L_159FA;
    case RC_ADDR(0x000159feu): goto L_159FE;
    case RC_ADDR(0x00015a02u): goto L_15A02;
    case RC_ADDR(0x00015a06u): goto L_15A06;
    case RC_ADDR(0x00015a08u): goto L_15A08;
    case RC_ADDR(0x00015a0cu): goto L_15A0C;
    case RC_ADDR(0x00015a12u): goto L_15A12;
    case RC_ADDR(0x00015a16u): goto L_15A16;
    case RC_ADDR(0x00015a1cu): goto L_15A1C;
    case RC_ADDR(0x00015a1eu): goto L_15A1E;
    case RC_ADDR(0x00015a24u): goto L_15A24;
    case RC_ADDR(0x00015a26u): goto L_15A26;
    case RC_ADDR(0x00015a2cu): goto L_15A2C;
    case RC_ADDR(0x00015a2eu): goto L_15A2E;
    case RC_ADDR(0x00015a32u): goto L_15A32;
    case RC_ADDR(0x00015a36u): goto L_15A36;
    case RC_ADDR(0x00015a3au): goto L_15A3A;
    case RC_ADDR(0x00015a3cu): goto L_15A3C;
    case RC_ADDR(0x00015a40u): goto L_15A40;
    case RC_ADDR(0x00015a44u): goto L_15A44;
    case RC_ADDR(0x00015a4au): goto L_15A4A;
    case RC_ADDR(0x00015a4cu): goto L_15A4C;
    case RC_ADDR(0x00015a52u): goto L_15A52;
    case RC_ADDR(0x00015a54u): goto L_15A54;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_159D2:
    /* 000159d2   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000159d2u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_159D6:
    /* 000159d6   4  move.w (1aca,A4),D0 */
    c->pc = RC_ADDR(0x000159d6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1acau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_159DA:
    /* 000159da   4  addq.w #1,(1aca,A4) */
    c->pc = RC_ADDR(0x000159dau);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1acau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_159DE:
    /* 000159de   4  cmp.w (1b26,A4),D0 */
    c->pc = RC_ADDR(0x000159deu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b26u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_159E2:
    /* 000159e2   2  ble 00015a16 */
    c->pc = RC_ADDR(0x000159e2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_15A16;

L_159E4:
    /* 000159e4   6  cmpi.w #f,(1b26,A4) */
    c->pc = RC_ADDR(0x000159e4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b26u));
    rc_cmp(c, RC_W, t0, 0x0000000fu);

L_159EA:
    /* 000159ea   2  ble 000159f0 */
    c->pc = RC_ADDR(0x000159eau);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_159F0;

L_159EC:
    /* 000159ec   4  subq.w #1,(1b26,A4) */
    c->pc = RC_ADDR(0x000159ecu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1b26u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_159F0:
    /* 000159f0   4  move.w (fffffa2e,A4),D0 */
    c->pc = RC_ADDR(0x000159f0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5d2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_159F4:
    /* 000159f4   4  cmp.w (1b12,A4),D0 */
    c->pc = RC_ADDR(0x000159f4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b12u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_159F8:
    /* 000159f8   2  bcc 000159fe */
    c->pc = RC_ADDR(0x000159f8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_159FE;

L_159FA:
    /* 000159fa   4  addq.w #1,(fffffa2e,A4) */
    c->pc = RC_ADDR(0x000159fau);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x5d2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_159FE:
    /* 000159fe   4  move.w (fffffa30,A4),D0 */
    c->pc = RC_ADDR(0x000159feu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5d0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15A02:
    /* 00015a02   4  cmp.w (1b14,A4),D0 */
    c->pc = RC_ADDR(0x00015a02u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b14u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_15A06:
    /* 00015a06   2  bcc 00015a0c */
    c->pc = RC_ADDR(0x00015a06u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_15A0C;

L_15A08:
    /* 00015a08   4  addq.w #1,(fffffa30,A4) */
    c->pc = RC_ADDR(0x00015a08u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x5d0u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_15A0C:
    /* 00015a0c   6  move.w #1,(1ac2,A4) */
    c->pc = RC_ADDR(0x00015a0cu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1ac2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15A12:
    /* 00015a12   4  clr.w (1aca,A4) */
    c->pc = RC_ADDR(0x00015a12u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1acau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15A16:
    /* 00015a16   6  cmpi.w #4,(fffffa2e,A4) */
    c->pc = RC_ADDR(0x00015a16u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5d2u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_15A1C:
    /* 00015a1c   2  bhi 00015a26 */
    c->pc = RC_ADDR(0x00015a1cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 2)) goto L_15A26;

L_15A1E:
    /* 00015a1e   6  cmpi.w #4,(fffffa30,A4) */
    c->pc = RC_ADDR(0x00015a1eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5d0u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_15A24:
    /* 00015a24   2  bls 00015a52 */
    c->pc = RC_ADDR(0x00015a24u);
    rc_step(c, m, 10);
    if (rc_cond(c, 3)) goto L_15A52;

L_15A26:
    /* 00015a26   6  cmpi.w #20,(14f2,A4) */
    c->pc = RC_ADDR(0x00015a26u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x14f2u));
    rc_cmp(c, RC_W, t0, 0x00000020u);

L_15A2C:
    /* 00015a2c   2  bge 00015a52 */
    c->pc = RC_ADDR(0x00015a2cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_15A52;

L_15A2E:
    /* 00015a2e   4  move.w (1acc,A4),D0 */
    c->pc = RC_ADDR(0x00015a2eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1accu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15A32:
    /* 00015a32   4  addq.w #1,(1acc,A4) */
    c->pc = RC_ADDR(0x00015a32u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1accu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_15A36:
    /* 00015a36   4  cmp.w #1,D0 */
    c->pc = RC_ADDR(0x00015a36u);
    rc_step(c, m, 8);
    t0 = 0x00000001u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_15A3A:
    /* 00015a3a   2  ble 00015a52 */
    c->pc = RC_ADDR(0x00015a3au);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_15A52;

L_15A3C:
    /* 00015a3c   4  clr.w (1acc,A4) */
    c->pc = RC_ADDR(0x00015a3cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1accu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15A40:
    /* 00015a40   4  addq.w #1,(14f2,A4) */
    c->pc = RC_ADDR(0x00015a40u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x14f2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_15A44:
    /* 00015a44   6  cmpi.w #2,(14f2,A4) */
    c->pc = RC_ADDR(0x00015a44u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x14f2u));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_15A4A:
    /* 00015a4a   2  ble 00015a52 */
    c->pc = RC_ADDR(0x00015a4au);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_15A52;

L_15A4C:
    /* 00015a4c   6  move.w #1,(1b46,A4) */
    c->pc = RC_ADDR(0x00015a4cu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1b46u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15A52:
    /* 00015a52   2  unlk A5 */
    c->pc = RC_ADDR(0x00015a52u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_15A54:
    /* 00015a54   2  rts */
    c->pc = RC_ADDR(0x00015a54u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
