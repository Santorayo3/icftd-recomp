/* fn_00004acc - 104 byte(s), 27 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00004acc(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00004accu): goto L_4ACC;
    case RC_ADDR(0x00004ad0u): goto L_4AD0;
    case RC_ADDR(0x00004ad6u): goto L_4AD6;
    case RC_ADDR(0x00004adcu): goto L_4ADC;
    case RC_ADDR(0x00004ae2u): goto L_4AE2;
    case RC_ADDR(0x00004ae8u): goto L_4AE8;
    case RC_ADDR(0x00004aecu): goto L_4AEC;
    case RC_ADDR(0x00004af0u): goto L_4AF0;
    case RC_ADDR(0x00004af4u): goto L_4AF4;
    case RC_ADDR(0x00004af6u): goto L_4AF6;
    case RC_ADDR(0x00004af8u): goto L_4AF8;
    case RC_ADDR(0x00004afcu): goto L_4AFC;
    case RC_ADDR(0x00004afeu): goto L_4AFE;
    case RC_ADDR(0x00004b00u): goto L_4B00;
    case RC_ADDR(0x00004b04u): goto L_4B04;
    case RC_ADDR(0x00004b08u): goto L_4B08;
    case RC_ADDR(0x00004b0cu): goto L_4B0C;
    case RC_ADDR(0x00004b12u): goto L_4B12;
    case RC_ADDR(0x00004b14u): goto L_4B14;
    case RC_ADDR(0x00004b18u): goto L_4B18;
    case RC_ADDR(0x00004b1cu): goto L_4B1C;
    case RC_ADDR(0x00004b20u): goto L_4B20;
    case RC_ADDR(0x00004b24u): goto L_4B24;
    case RC_ADDR(0x00004b2au): goto L_4B2A;
    case RC_ADDR(0x00004b2cu): goto L_4B2C;
    case RC_ADDR(0x00004b30u): goto L_4B30;
    case RC_ADDR(0x00004b32u): goto L_4B32;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_4ACC:
    /* 00004acc   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x00004accu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_4AD0:
    /* 00004ad0   6  move.w #63,(fffff970,A4) */
    c->pc = RC_ADDR(0x00004ad0u);
    rc_step(c, m, 16);
    t0 = 0x00000063u;
    rc_wr16(c, m, (c->a[4] - 0x690u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_4AD6:
    /* 00004ad6   6  move.w #28,(fffff972,A4) */
    c->pc = RC_ADDR(0x00004ad6u);
    rc_step(c, m, 16);
    t0 = 0x00000028u;
    rc_wr16(c, m, (c->a[4] - 0x68eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_4ADC:
    /* 00004adc   6  move.w #3c,(fffff974,A4) */
    c->pc = RC_ADDR(0x00004adcu);
    rc_step(c, m, 16);
    t0 = 0x0000003cu;
    rc_wr16(c, m, (c->a[4] - 0x68cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_4AE2:
    /* 00004ae2   6  move.w #50,(fffff976,A4) */
    c->pc = RC_ADDR(0x00004ae2u);
    rc_step(c, m, 16);
    t0 = 0x00000050u;
    rc_wr16(c, m, (c->a[4] - 0x68au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_4AE8:
    /* 00004ae8   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00004ae8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4AEC:
    /* 00004aec   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x00004aecu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4AF0:
    /* 00004af0   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00004af0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4AF4:
    /* 00004af4   2  ext.l D0 */
    c->pc = RC_ADDR(0x00004af4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_4AF6:
    /* 00004af6   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00004af6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_4AF8:
    /* 00004af8   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x00004af8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4AFC:
    /* 00004afc   2  ext.l D1 */
    c->pc = RC_ADDR(0x00004afcu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_4AFE:
    /* 00004afe   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00004afeu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_4B00:
    /* 00004b00   4  lea (fffff8aa,A4),A0 */
    c->pc = RC_ADDR(0x00004b00u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x756u);

L_4B04:
    /* 00004b04   4  clr.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00004b04u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_4B08:
    /* 00004b08   4  addq.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00004b08u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_4B0C:
    /* 00004b0c   6  cmpi.w #4,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00004b0cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_4B12:
    /* 00004b12   2  blt 00004af0 */
    c->pc = RC_ADDR(0x00004b12u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_4AF0; }

L_4B14:
    /* 00004b14   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00004b14u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4B18:
    /* 00004b18   4  lea (fffff946,A4),A0 */
    c->pc = RC_ADDR(0x00004b18u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6bau);

L_4B1C:
    /* 00004b1c   4  clr.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00004b1cu);
    rc_step(c, m, 18);
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_4B20:
    /* 00004b20   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00004b20u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_4B24:
    /* 00004b24   6  cmpi.w #27,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00004b24u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000027u);

L_4B2A:
    /* 00004b2a   2  blt 00004aec */
    c->pc = RC_ADDR(0x00004b2au);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_4AEC; }

L_4B2C:
    /* 00004b2c   4  clr.w (fffff978,A4) */
    c->pc = RC_ADDR(0x00004b2cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x688u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4B30:
    /* 00004b30   2  unlk A5 */
    c->pc = RC_ADDR(0x00004b30u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_4B32:
    /* 00004b32   2  rts */
    c->pc = RC_ADDR(0x00004b32u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
