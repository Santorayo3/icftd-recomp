/* fn_000039da - 120 byte(s), 34 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000039da(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000039dau): goto L_39DA;
    case RC_ADDR(0x000039deu): goto L_39DE;
    case RC_ADDR(0x000039e4u): goto L_39E4;
    case RC_ADDR(0x000039e8u): goto L_39E8;
    case RC_ADDR(0x000039eau): goto L_39EA;
    case RC_ADDR(0x000039eeu): goto L_39EE;
    case RC_ADDR(0x000039f4u): goto L_39F4;
    case RC_ADDR(0x000039f8u): goto L_39F8;
    case RC_ADDR(0x000039fau): goto L_39FA;
    case RC_ADDR(0x000039fcu): goto L_39FC;
    case RC_ADDR(0x00003a00u): goto L_3A00;
    case RC_ADDR(0x00003a04u): goto L_3A04;
    case RC_ADDR(0x00003a06u): goto L_3A06;
    case RC_ADDR(0x00003a08u): goto L_3A08;
    case RC_ADDR(0x00003a0cu): goto L_3A0C;
    case RC_ADDR(0x00003a10u): goto L_3A10;
    case RC_ADDR(0x00003a14u): goto L_3A14;
    case RC_ADDR(0x00003a18u): goto L_3A18;
    case RC_ADDR(0x00003a1cu): goto L_3A1C;
    case RC_ADDR(0x00003a20u): goto L_3A20;
    case RC_ADDR(0x00003a24u): goto L_3A24;
    case RC_ADDR(0x00003a2au): goto L_3A2A;
    case RC_ADDR(0x00003a2eu): goto L_3A2E;
    case RC_ADDR(0x00003a34u): goto L_3A34;
    case RC_ADDR(0x00003a36u): goto L_3A36;
    case RC_ADDR(0x00003a38u): goto L_3A38;
    case RC_ADDR(0x00003a3au): goto L_3A3A;
    case RC_ADDR(0x00003a3eu): goto L_3A3E;
    case RC_ADDR(0x00003a42u): goto L_3A42;
    case RC_ADDR(0x00003a44u): goto L_3A44;
    case RC_ADDR(0x00003a48u): goto L_3A48;
    case RC_ADDR(0x00003a4cu): goto L_3A4C;
    case RC_ADDR(0x00003a4eu): goto L_3A4E;
    case RC_ADDR(0x00003a50u): goto L_3A50;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_39DA:
    /* 000039da   4  link.w A5,#fffffff2 */
    c->pc = RC_ADDR(0x000039dau);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xeu;

L_39DE:
    /* 000039de   6  move.l (ffffd29c,A4),(fffffffc,A5) */
    c->pc = RC_ADDR(0x000039deu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d64u));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_39E4:
    /* 000039e4   4  tst.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x000039e4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_L);

L_39E8:
    /* 000039e8   2  beq 00003a4e */
    c->pc = RC_ADDR(0x000039e8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_3A4E;

L_39EA:
    /* 000039ea   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x000039eau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_39EE:
    /* 000039ee   6  move.l (4,A0),(fffffff6,A5) */
    c->pc = RC_ADDR(0x000039eeu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[0] + 0x4u));
    rc_wr32(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_39F4:
    /* 000039f4   4  movea.l (fffffff6,A5),A0 */
    c->pc = RC_ADDR(0x000039f4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xau));
    c->a[0] = t0;

L_39F8:
    /* 000039f8   2  tst.b (A0) */
    c->pc = RC_ADDR(0x000039f8u);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_set_nzvc(c, t0, RC_B);

L_39FA:
    /* 000039fa   2  beq 00003a44 */
    c->pc = RC_ADDR(0x000039fau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_3A44;

L_39FC:
    /* 000039fc   4  movea.l (fffffff6,A5),A0 */
    c->pc = RC_ADDR(0x000039fcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xau));
    c->a[0] = t0;

L_3A00:
    /* 00003a00   4  cmpi.b #5a,(A0) */
    c->pc = RC_ADDR(0x00003a00u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x0000005au);

L_3A04:
    /* 00003a04   2  bne 00003a3a */
    c->pc = RC_ADDR(0x00003a04u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_3A3A;

L_3A06:
    /* 00003a06   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00003a06u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3A08:
    /* 00003a08   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00003a08u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3A0C:
    /* 00003a0c   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00003a0cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_3A10:
    /* 00003a10   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x00003a10u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3A14:
    /* 00003a14   4  jsr (ffff8248,A4) */
    c->pc = RC_ADDR(0x00003a14u);
    rc_step(c, m, 18);
    /* vector 97 */
    rc_push32(c, m, RC_ADDR(0x00003a18u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d3eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001fe0au);
    return;

L_3A18:
    /* 00003a18   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00003a18u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_3A1C:
    /* 00003a1c   4  move.l D0,(fffffff2,A5) */
    c->pc = RC_ADDR(0x00003a1cu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3A20:
    /* 00003a20   4  movea.l (fffffff2,A5),A0 */
    c->pc = RC_ADDR(0x00003a20u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    c->a[0] = t0;

L_3A24:
    /* 00003a24   6  move.w (c,A0),(926,A4) */
    c->pc = RC_ADDR(0x00003a24u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[0] + 0xcu));
    rc_wr16(c, m, (c->a[4] + 0x926u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3A2A:
    /* 00003a2a   4  movea.l (fffffff2,A5),A0 */
    c->pc = RC_ADDR(0x00003a2au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    c->a[0] = t0;

L_3A2E:
    /* 00003a2e   6  move.w (e,A0),(928,A4) */
    c->pc = RC_ADDR(0x00003a2eu);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[0] + 0xeu));
    rc_wr16(c, m, (c->a[4] + 0x928u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3A34:
    /* 00003a34   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00003a34u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_3A36:
    /* 00003a36   2  unlk A5 */
    c->pc = RC_ADDR(0x00003a36u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_3A38:
    /* 00003a38   2  rts */
    c->pc = RC_ADDR(0x00003a38u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_3A3A:
    /* 00003a3a   4  movea.l (fffffff6,A5),A0 */
    c->pc = RC_ADDR(0x00003a3au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xau));
    c->a[0] = t0;

L_3A3E:
    /* 00003a3e   4  addq.l #1,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00003a3eu);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0xau);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_3A42:
    /* 00003a42   2  bra 000039f4 */
    c->pc = RC_ADDR(0x00003a42u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_39F4;

L_3A44:
    /* 00003a44   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00003a44u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_3A48:
    /* 00003a48   4  move.l (A0),(fffffffc,A5) */
    c->pc = RC_ADDR(0x00003a48u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3A4C:
    /* 00003a4c   2  bra 000039e4 */
    c->pc = RC_ADDR(0x00003a4cu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_39E4;

L_3A4E:
    /* 00003a4e   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00003a4eu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_3A50:
    /* 00003a50   2  bra 00003a36 */
    c->pc = RC_ADDR(0x00003a50u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_3A36;

}
