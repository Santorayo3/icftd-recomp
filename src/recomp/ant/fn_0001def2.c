/* fn_0001def2 - 166 byte(s), 45 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001def2(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001def2u): goto L_1DEF2;
    case RC_ADDR(0x0001def6u): goto L_1DEF6;
    case RC_ADDR(0x0001defau): goto L_1DEFA;
    case RC_ADDR(0x0001defeu): goto L_1DEFE;
    case RC_ADDR(0x0001df04u): goto L_1DF04;
    case RC_ADDR(0x0001df08u): goto L_1DF08;
    case RC_ADDR(0x0001df0cu): goto L_1DF0C;
    case RC_ADDR(0x0001df0eu): goto L_1DF0E;
    case RC_ADDR(0x0001df12u): goto L_1DF12;
    case RC_ADDR(0x0001df16u): goto L_1DF16;
    case RC_ADDR(0x0001df18u): goto L_1DF18;
    case RC_ADDR(0x0001df1au): goto L_1DF1A;
    case RC_ADDR(0x0001df1eu): goto L_1DF1E;
    case RC_ADDR(0x0001df24u): goto L_1DF24;
    case RC_ADDR(0x0001df26u): goto L_1DF26;
    case RC_ADDR(0x0001df2au): goto L_1DF2A;
    case RC_ADDR(0x0001df2cu): goto L_1DF2C;
    case RC_ADDR(0x0001df2eu): goto L_1DF2E;
    case RC_ADDR(0x0001df32u): goto L_1DF32;
    case RC_ADDR(0x0001df36u): goto L_1DF36;
    case RC_ADDR(0x0001df38u): goto L_1DF38;
    case RC_ADDR(0x0001df3au): goto L_1DF3A;
    case RC_ADDR(0x0001df3eu): goto L_1DF3E;
    case RC_ADDR(0x0001df44u): goto L_1DF44;
    case RC_ADDR(0x0001df48u): goto L_1DF48;
    case RC_ADDR(0x0001df4au): goto L_1DF4A;
    case RC_ADDR(0x0001df4eu): goto L_1DF4E;
    case RC_ADDR(0x0001df54u): goto L_1DF54;
    case RC_ADDR(0x0001df58u): goto L_1DF58;
    case RC_ADDR(0x0001df5au): goto L_1DF5A;
    case RC_ADDR(0x0001df5eu): goto L_1DF5E;
    case RC_ADDR(0x0001df64u): goto L_1DF64;
    case RC_ADDR(0x0001df68u): goto L_1DF68;
    case RC_ADDR(0x0001df6eu): goto L_1DF6E;
    case RC_ADDR(0x0001df72u): goto L_1DF72;
    case RC_ADDR(0x0001df78u): goto L_1DF78;
    case RC_ADDR(0x0001df7cu): goto L_1DF7C;
    case RC_ADDR(0x0001df80u): goto L_1DF80;
    case RC_ADDR(0x0001df82u): goto L_1DF82;
    case RC_ADDR(0x0001df86u): goto L_1DF86;
    case RC_ADDR(0x0001df8au): goto L_1DF8A;
    case RC_ADDR(0x0001df8eu): goto L_1DF8E;
    case RC_ADDR(0x0001df92u): goto L_1DF92;
    case RC_ADDR(0x0001df94u): goto L_1DF94;
    case RC_ADDR(0x0001df96u): goto L_1DF96;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1DEF2:
    /* 0001def2   4  link.w A5,#fffffffa */
    c->pc = RC_ADDR(0x0001def2u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x6u;

L_1DEF6:
    /* 0001def6   4  clr.w (2cf0,A4) */
    c->pc = RC_ADDR(0x0001def6u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x2cf0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1DEFA:
    /* 0001defa   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001defau);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1DEFE:
    /* 0001defe   6  pea (00010002).l */
    c->pc = RC_ADDR(0x0001defeu);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010002u);

L_1DF04:
    /* 0001df04   4  pea (000007d0).l */
    c->pc = RC_ADDR(0x0001df04u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000007d0u);

L_1DF08:
    /* 0001df08   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x0001df08u);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x0001df0cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_1DF0C:
    /* 0001df0c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001df0cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1DF0E:
    /* 0001df0e   4  move.l D0,(140c,A4) */
    c->pc = RC_ADDR(0x0001df0eu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x140cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DF12:
    /* 0001df12   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001df12u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DF16:
    /* 0001df16   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001df16u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1DF18:
    /* 0001df18   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001df18u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1DF1A:
    /* 0001df1a   4  lea (ffffcf46,A4),A0 */
    c->pc = RC_ADDR(0x0001df1au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x30bau);

L_1DF1E:
    /* 0001df1e   6  cmpi.w #face,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001df1eu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x0000faceu);

L_1DF24:
    /* 0001df24   2  beq 0001df4a */
    c->pc = RC_ADDR(0x0001df24u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1DF4A;

L_1DF26:
    /* 0001df26   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001df26u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DF2A:
    /* 0001df2a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001df2au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1DF2C:
    /* 0001df2c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001df2cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1DF2E:
    /* 0001df2e   4  lea (ffffcf46,A4),A0 */
    c->pc = RC_ADDR(0x0001df2eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x30bau);

L_1DF32:
    /* 0001df32   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x0001df32u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DF36:
    /* 0001df36   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001df36u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1DF38:
    /* 0001df38   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001df38u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1DF3A:
    /* 0001df3a   4  movea.l (140c,A4),A1 */
    c->pc = RC_ADDR(0x0001df3au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x140cu));
    c->a[1] = t0;

L_1DF3E:
    /* 0001df3e   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001df3eu);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DF44:
    /* 0001df44   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001df44u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1DF48:
    /* 0001df48   2  bra 0001df12 */
    c->pc = RC_ADDR(0x0001df48u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1DF12;

L_1DF4A:
    /* 0001df4a   4  movea.l (ffffd294,A4),A0 */
    c->pc = RC_ADDR(0x0001df4au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d6cu));
    c->a[0] = t0;

L_1DF4E:
    /* 0001df4e   6  move.l (4,A0),(fffffffa,A5) */
    c->pc = RC_ADDR(0x0001df4eu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[0] + 0x4u));
    rc_wr32(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DF54:
    /* 0001df54   4  movea.l (fffffffa,A5),A0 */
    c->pc = RC_ADDR(0x0001df54u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[0] = t0;

L_1DF58:
    /* 0001df58   2  clr.l (A0) */
    c->pc = RC_ADDR(0x0001df58u);
    rc_step(c, m, 20);
    rc_wr32(c, m, c->a[0], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1DF5A:
    /* 0001df5a   4  movea.l (fffffffa,A5),A0 */
    c->pc = RC_ADDR(0x0001df5au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[0] = t0;

L_1DF5E:
    /* 0001df5e   6  move.l (4,A0),(182c,A4) */
    c->pc = RC_ADDR(0x0001df5eu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[0] + 0x4u));
    rc_wr32(c, m, (c->a[4] + 0x182cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DF64:
    /* 0001df64   4  movea.l (fffffffa,A5),A0 */
    c->pc = RC_ADDR(0x0001df64u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[0] = t0;

L_1DF68:
    /* 0001df68   6  move.w (8,A0),(1830,A4) */
    c->pc = RC_ADDR(0x0001df68u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[0] + 0x8u));
    rc_wr16(c, m, (c->a[4] + 0x1830u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DF6E:
    /* 0001df6e   4  movea.l (fffffffa,A5),A0 */
    c->pc = RC_ADDR(0x0001df6eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[0] = t0;

L_1DF72:
    /* 0001df72   6  move.l (140c,A4),(4,A0) */
    c->pc = RC_ADDR(0x0001df72u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] + 0x140cu));
    rc_wr32(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DF78:
    /* 0001df78   4  movea.l (fffffffa,A5),A0 */
    c->pc = RC_ADDR(0x0001df78u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[0] = t0;

L_1DF7C:
    /* 0001df7c   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001df7cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DF80:
    /* 0001df80   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001df80u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1DF82:
    /* 0001df82   4  divs.w #2,D0 */
    c->pc = RC_ADDR(0x0001df82u);
    rc_step(c, m, 162);
    t0 = 0x00000002u;
    rc_divs(c, m, 0, t0);

L_1DF86:
    /* 0001df86   4  move.w D0,(8,A0) */
    c->pc = RC_ADDR(0x0001df86u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[0] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DF8A:
    /* 0001df8a   4  move.l (ffffd294,A4),-(A7) */
    c->pc = RC_ADDR(0x0001df8au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d6cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DF8E:
    /* 0001df8e   4  jsr (ffff8398,A4) */
    c->pc = RC_ADDR(0x0001df8eu);
    rc_step(c, m, 18);
    /* vector 153 */
    rc_push32(c, m, RC_ADDR(0x0001df92u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e8eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002393au);
    return;

L_1DF92:
    /* 0001df92   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001df92u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1DF94:
    /* 0001df94   2  unlk A5 */
    c->pc = RC_ADDR(0x0001df94u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1DF96:
    /* 0001df96   2  rts */
    c->pc = RC_ADDR(0x0001df96u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
