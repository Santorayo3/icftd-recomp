/* fn_00013446 - 212 byte(s), 55 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00013446(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00013446u): goto L_13446;
    case RC_ADDR(0x0001344au): goto L_1344A;
    case RC_ADDR(0x0001344cu): goto L_1344C;
    case RC_ADDR(0x0001344eu): goto L_1344E;
    case RC_ADDR(0x00013452u): goto L_13452;
    case RC_ADDR(0x00013458u): goto L_13458;
    case RC_ADDR(0x0001345cu): goto L_1345C;
    case RC_ADDR(0x0001345eu): goto L_1345E;
    case RC_ADDR(0x00013462u): goto L_13462;
    case RC_ADDR(0x00013468u): goto L_13468;
    case RC_ADDR(0x0001346cu): goto L_1346C;
    case RC_ADDR(0x0001346eu): goto L_1346E;
    case RC_ADDR(0x00013472u): goto L_13472;
    case RC_ADDR(0x00013478u): goto L_13478;
    case RC_ADDR(0x0001347au): goto L_1347A;
    case RC_ADDR(0x0001347cu): goto L_1347C;
    case RC_ADDR(0x0001347eu): goto L_1347E;
    case RC_ADDR(0x00013482u): goto L_13482;
    case RC_ADDR(0x00013484u): goto L_13484;
    case RC_ADDR(0x00013488u): goto L_13488;
    case RC_ADDR(0x0001348eu): goto L_1348E;
    case RC_ADDR(0x00013492u): goto L_13492;
    case RC_ADDR(0x00013494u): goto L_13494;
    case RC_ADDR(0x00013498u): goto L_13498;
    case RC_ADDR(0x0001349eu): goto L_1349E;
    case RC_ADDR(0x000134a4u): goto L_134A4;
    case RC_ADDR(0x000134a8u): goto L_134A8;
    case RC_ADDR(0x000134aau): goto L_134AA;
    case RC_ADDR(0x000134aeu): goto L_134AE;
    case RC_ADDR(0x000134b0u): goto L_134B0;
    case RC_ADDR(0x000134b6u): goto L_134B6;
    case RC_ADDR(0x000134bau): goto L_134BA;
    case RC_ADDR(0x000134beu): goto L_134BE;
    case RC_ADDR(0x000134c0u): goto L_134C0;
    case RC_ADDR(0x000134c6u): goto L_134C6;
    case RC_ADDR(0x000134cau): goto L_134CA;
    case RC_ADDR(0x000134ceu): goto L_134CE;
    case RC_ADDR(0x000134d2u): goto L_134D2;
    case RC_ADDR(0x000134d4u): goto L_134D4;
    case RC_ADDR(0x000134dau): goto L_134DA;
    case RC_ADDR(0x000134dcu): goto L_134DC;
    case RC_ADDR(0x000134e0u): goto L_134E0;
    case RC_ADDR(0x000134e4u): goto L_134E4;
    case RC_ADDR(0x000134e8u): goto L_134E8;
    case RC_ADDR(0x000134eau): goto L_134EA;
    case RC_ADDR(0x000134f0u): goto L_134F0;
    case RC_ADDR(0x000134f4u): goto L_134F4;
    case RC_ADDR(0x000134fau): goto L_134FA;
    case RC_ADDR(0x000134feu): goto L_134FE;
    case RC_ADDR(0x00013504u): goto L_13504;
    case RC_ADDR(0x00013508u): goto L_13508;
    case RC_ADDR(0x0001350eu): goto L_1350E;
    case RC_ADDR(0x00013512u): goto L_13512;
    case RC_ADDR(0x00013516u): goto L_13516;
    case RC_ADDR(0x00013518u): goto L_13518;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_13446:
    /* 00013446   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00013446u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1344A:
    /* 0001344a   2  clr.w D2 */
    c->pc = RC_ADDR(0x0001344au);
    rc_step(c, m, 4);
    rc_d_set(c, 2, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1344C:
    /* 0001344c   2  clr.w D3 */
    c->pc = RC_ADDR(0x0001344cu);
    rc_step(c, m, 4);
    rc_d_set(c, 3, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1344E:
    /* 0001344e   4  clr.w (ffffb250,A4) */
    c->pc = RC_ADDR(0x0001344eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x4db0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13452:
    /* 00013452   6  move.w (00dff00c).l,D0 */
    c->pc = RC_ADDR(0x00013452u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, 0x00dff00cu);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13458:
    /* 00013458   4  btst #1,D0 */
    c->pc = RC_ADDR(0x00013458u);
    rc_step(c, m, 10);
    t4 = 0x00000001u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_1345C:
    /* 0001345c   2  beq 00013468 */
    c->pc = RC_ADDR(0x0001345cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_13468;

L_1345E:
    /* 0001345e   4  move.w #1,D2 */
    c->pc = RC_ADDR(0x0001345eu);
    rc_step(c, m, 8);
    t0 = 0x00000001u;
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13462:
    /* 00013462   6  bset #0,(ffffb251,A4) */
    c->pc = RC_ADDR(0x00013462u);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x4dafu);
    t4 = 0x00000000u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_13468:
    /* 00013468   4  btst #9,D0 */
    c->pc = RC_ADDR(0x00013468u);
    rc_step(c, m, 10);
    t4 = 0x00000009u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_1346C:
    /* 0001346c   2  beq 00013478 */
    c->pc = RC_ADDR(0x0001346cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_13478;

L_1346E:
    /* 0001346e   4  move.w #ffff,D2 */
    c->pc = RC_ADDR(0x0001346eu);
    rc_step(c, m, 8);
    t0 = 0x0000ffffu;
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13472:
    /* 00013472   6  bset #1,(ffffb251,A4) */
    c->pc = RC_ADDR(0x00013472u);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x4dafu);
    t4 = 0x00000001u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_13478:
    /* 00013478   2  move.w D0,D1 */
    c->pc = RC_ADDR(0x00013478u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1347A:
    /* 0001347a   2  lsr.w #1,D1 */
    c->pc = RC_ADDR(0x0001347au);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_1347C:
    /* 0001347c   2  eor.w D1,D0 */
    c->pc = RC_ADDR(0x0001347cu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 ^ rc_d_get(c, 1, RC_W);
    rc_d_set(c, 0, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_1347E:
    /* 0001347e   4  btst #0,D0 */
    c->pc = RC_ADDR(0x0001347eu);
    rc_step(c, m, 10);
    t4 = 0x00000000u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_13482:
    /* 00013482   2  beq 0001348e */
    c->pc = RC_ADDR(0x00013482u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1348E;

L_13484:
    /* 00013484   4  move.w #1,D3 */
    c->pc = RC_ADDR(0x00013484u);
    rc_step(c, m, 8);
    t0 = 0x00000001u;
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13488:
    /* 00013488   6  bset #2,(ffffb251,A4) */
    c->pc = RC_ADDR(0x00013488u);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x4dafu);
    t4 = 0x00000002u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_1348E:
    /* 0001348e   4  btst #8,D0 */
    c->pc = RC_ADDR(0x0001348eu);
    rc_step(c, m, 10);
    t4 = 0x00000008u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_13492:
    /* 00013492   2  beq 0001349e */
    c->pc = RC_ADDR(0x00013492u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1349E;

L_13494:
    /* 00013494   4  move.w #ffff,D3 */
    c->pc = RC_ADDR(0x00013494u);
    rc_step(c, m, 8);
    t0 = 0x0000ffffu;
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13498:
    /* 00013498   6  bset #3,(ffffb251,A4) */
    c->pc = RC_ADDR(0x00013498u);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x4dafu);
    t4 = 0x00000003u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_1349E:
    /* 0001349e   6  move.b (00bfe001).l,D0 */
    c->pc = RC_ADDR(0x0001349eu);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, 0x00bfe001u);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_134A4:
    /* 000134a4   4  btst #7,D0 */
    c->pc = RC_ADDR(0x000134a4u);
    rc_step(c, m, 10);
    t4 = 0x00000007u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_134A8:
    /* 000134a8   2  beq 000134c0 */
    c->pc = RC_ADDR(0x000134a8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_134C0;

L_134AA:
    /* 000134aa   4  tst.w (ffffb24e,A4) */
    c->pc = RC_ADDR(0x000134aau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db2u));
    rc_set_nzvc(c, t0, RC_W);

L_134AE:
    /* 000134ae   2  beq 000134b6 */
    c->pc = RC_ADDR(0x000134aeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_134B6;

L_134B0:
    /* 000134b0   6  move.w #1,(ffffb258,A4) */
    c->pc = RC_ADDR(0x000134b0u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x4da8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_134B6:
    /* 000134b6   4  clr.w (ffffb24e,A4) */
    c->pc = RC_ADDR(0x000134b6u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x4db2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_134BA:
    /* 000134ba   4  clr.w (ffffb256,A4) */
    c->pc = RC_ADDR(0x000134bau);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x4daau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_134BE:
    /* 000134be   2  bra 000134ca */
    c->pc = RC_ADDR(0x000134beu);
    rc_step(c, m, 10);
    goto L_134CA;

L_134C0:
    /* 000134c0   6  move.w #1,(ffffb24e,A4) */
    c->pc = RC_ADDR(0x000134c0u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x4db2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_134C6:
    /* 000134c6   4  addq.w #1,(ffffb256,A4) */
    c->pc = RC_ADDR(0x000134c6u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x4daau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_134CA:
    /* 000134ca   4  clr.w (ffffb252,A4) */
    c->pc = RC_ADDR(0x000134cau);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x4daeu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_134CE:
    /* 000134ce   4  btst #6,D0 */
    c->pc = RC_ADDR(0x000134ceu);
    rc_step(c, m, 10);
    t4 = 0x00000006u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_134D2:
    /* 000134d2   2  bne 000134da */
    c->pc = RC_ADDR(0x000134d2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_134DA;

L_134D4:
    /* 000134d4   6  move.w #1,(ffffb252,A4) */
    c->pc = RC_ADDR(0x000134d4u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x4daeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_134DA:
    /* 000134da   2  clr.w D0 */
    c->pc = RC_ADDR(0x000134dau);
    rc_step(c, m, 4);
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_134DC:
    /* 000134dc   4  move.w D2,(ffffb24a,A4) */
    c->pc = RC_ADDR(0x000134dcu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x4db6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_134E0:
    /* 000134e0   4  move.w D3,(ffffb24c,A4) */
    c->pc = RC_ADDR(0x000134e0u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 3, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x4db4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_134E4:
    /* 000134e4   4  tst.w (ffffb254,A4) */
    c->pc = RC_ADDR(0x000134e4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4dacu));
    rc_set_nzvc(c, t0, RC_W);

L_134E8:
    /* 000134e8   2  beq 00013516 */
    c->pc = RC_ADDR(0x000134e8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_13516;

L_134EA:
    /* 000134ea   6  move.w (ffffb24a,A4),(17ec,A4) */
    c->pc = RC_ADDR(0x000134eau);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db6u));
    rc_wr16(c, m, (c->a[4] + 0x17ecu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_134F0:
    /* 000134f0   4  clr.w (ffffb24a,A4) */
    c->pc = RC_ADDR(0x000134f0u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x4db6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_134F4:
    /* 000134f4   6  move.w (ffffb24c,A4),(17ee,A4) */
    c->pc = RC_ADDR(0x000134f4u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db4u));
    rc_wr16(c, m, (c->a[4] + 0x17eeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_134FA:
    /* 000134fa   4  clr.w (ffffb24c,A4) */
    c->pc = RC_ADDR(0x000134fau);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x4db4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_134FE:
    /* 000134fe   6  move.w (ffffb250,A4),(17f0,A4) */
    c->pc = RC_ADDR(0x000134feu);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db0u));
    rc_wr16(c, m, (c->a[4] + 0x17f0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13504:
    /* 00013504   4  clr.w (ffffb250,A4) */
    c->pc = RC_ADDR(0x00013504u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x4db0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13508:
    /* 00013508   6  move.w (ffffb24e,A4),(17f2,A4) */
    c->pc = RC_ADDR(0x00013508u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db2u));
    rc_wr16(c, m, (c->a[4] + 0x17f2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1350E:
    /* 0001350e   4  clr.w (ffffb24e,A4) */
    c->pc = RC_ADDR(0x0001350eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x4db2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13512:
    /* 00013512   4  clr.w (ffffb258,A4) */
    c->pc = RC_ADDR(0x00013512u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x4da8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13516:
    /* 00013516   2  unlk A5 */
    c->pc = RC_ADDR(0x00013516u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_13518:
    /* 00013518   2  rts */
    c->pc = RC_ADDR(0x00013518u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
