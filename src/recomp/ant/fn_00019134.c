/* fn_00019134 - 148 byte(s), 39 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00019134(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00019134u): goto L_19134;
    case RC_ADDR(0x00019138u): goto L_19138;
    case RC_ADDR(0x0001913cu): goto L_1913C;
    case RC_ADDR(0x00019140u): goto L_19140;
    case RC_ADDR(0x00019144u): goto L_19144;
    case RC_ADDR(0x00019148u): goto L_19148;
    case RC_ADDR(0x0001914eu): goto L_1914E;
    case RC_ADDR(0x00019154u): goto L_19154;
    case RC_ADDR(0x0001915au): goto L_1915A;
    case RC_ADDR(0x0001915eu): goto L_1915E;
    case RC_ADDR(0x00019162u): goto L_19162;
    case RC_ADDR(0x00019166u): goto L_19166;
    case RC_ADDR(0x0001916au): goto L_1916A;
    case RC_ADDR(0x0001916eu): goto L_1916E;
    case RC_ADDR(0x00019172u): goto L_19172;
    case RC_ADDR(0x00019176u): goto L_19176;
    case RC_ADDR(0x0001917au): goto L_1917A;
    case RC_ADDR(0x0001917eu): goto L_1917E;
    case RC_ADDR(0x00019182u): goto L_19182;
    case RC_ADDR(0x00019186u): goto L_19186;
    case RC_ADDR(0x0001918au): goto L_1918A;
    case RC_ADDR(0x0001918eu): goto L_1918E;
    case RC_ADDR(0x00019192u): goto L_19192;
    case RC_ADDR(0x00019194u): goto L_19194;
    case RC_ADDR(0x00019198u): goto L_19198;
    case RC_ADDR(0x0001919cu): goto L_1919C;
    case RC_ADDR(0x0001919eu): goto L_1919E;
    case RC_ADDR(0x000191a2u): goto L_191A2;
    case RC_ADDR(0x000191a6u): goto L_191A6;
    case RC_ADDR(0x000191aau): goto L_191AA;
    case RC_ADDR(0x000191aeu): goto L_191AE;
    case RC_ADDR(0x000191b2u): goto L_191B2;
    case RC_ADDR(0x000191b6u): goto L_191B6;
    case RC_ADDR(0x000191bau): goto L_191BA;
    case RC_ADDR(0x000191bcu): goto L_191BC;
    case RC_ADDR(0x000191beu): goto L_191BE;
    case RC_ADDR(0x000191c2u): goto L_191C2;
    case RC_ADDR(0x000191c4u): goto L_191C4;
    case RC_ADDR(0x000191c6u): goto L_191C6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_19134:
    /* 00019134   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00019134u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_19138:
    /* 00019138   4  tst.w (14e6,A4) */
    c->pc = RC_ADDR(0x00019138u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x14e6u));
    rc_set_nzvc(c, t0, RC_W);

L_1913C:
    /* 0001913c   4  beq 000191c4 */
    c->pc = RC_ADDR(0x0001913cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_191C4;

L_19140:
    /* 00019140   4  clr.w (ffffd2a4,A4) */
    c->pc = RC_ADDR(0x00019140u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x2d5cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_19144:
    /* 00019144   4  clr.w (14e6,A4) */
    c->pc = RC_ADDR(0x00019144u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x14e6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_19148:
    /* 00019148   6  move.w #1,(9c6,A4) */
    c->pc = RC_ADDR(0x00019148u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x9c6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1914E:
    /* 0001914e   6  move.w #82,(1d86,A4) */
    c->pc = RC_ADDR(0x0001914eu);
    rc_step(c, m, 16);
    t0 = 0x00000082u;
    rc_wr16(c, m, (c->a[4] + 0x1d86u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19154:
    /* 00019154   6  move.w #1,(1ac0,A4) */
    c->pc = RC_ADDR(0x00019154u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1ac0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1915A:
    /* 0001915a   4  jsr (00018706) */
    c->pc = RC_ADDR(0x0001915au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001915eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00018706u);
    return;

L_1915E:
    /* 0001915e   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0001915eu);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_19162:
    /* 00019162   4  pea (000191d4) */
    c->pc = RC_ADDR(0x00019162u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000191d4u));

L_19166:
    /* 00019166   4  pea (000191c8) */
    c->pc = RC_ADDR(0x00019166u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000191c8u));

L_1916A:
    /* 0001916a   4  jsr (ffff800e,A4) */
    c->pc = RC_ADDR(0x0001916au);
    rc_step(c, m, 18);
    /* vector 2 */
    rc_push32(c, m, RC_ADDR(0x0001916eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b04u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000068au);
    return;

L_1916E:
    /* 0001916e   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001916eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_19172:
    /* 00019172   4  pea (1d8c,A4) */
    c->pc = RC_ADDR(0x00019172u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x1d8cu));

L_19176:
    /* 00019176   4  pea (1d90,A4) */
    c->pc = RC_ADDR(0x00019176u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x1d90u));

L_1917A:
    /* 0001917a   4  pea (000191de) */
    c->pc = RC_ADDR(0x0001917au);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000191deu));

L_1917E:
    /* 0001917e   4  jsr (ffff80bc,A4) */
    c->pc = RC_ADDR(0x0001917eu);
    rc_step(c, m, 18);
    /* vector 31 */
    rc_push32(c, m, RC_ADDR(0x00019182u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000ad50u);
    return;

L_19182:
    /* 00019182   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00019182u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_19186:
    /* 00019186   4  move.l D0,(1d88,A4) */
    c->pc = RC_ADDR(0x00019186u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x1d88u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1918A:
    /* 0001918a   4  pea (000191e8) */
    c->pc = RC_ADDR(0x0001918au);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000191e8u));

L_1918E:
    /* 0001918e   4  jsr (ffff82ae,A4) */
    c->pc = RC_ADDR(0x0001918eu);
    rc_step(c, m, 18);
    /* vector 114 */
    rc_push32(c, m, RC_ADDR(0x00019192u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023da4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022366u);
    return;

L_19192:
    /* 00019192   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00019192u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_19194:
    /* 00019194   4  pea (00018b1e) */
    c->pc = RC_ADDR(0x00019194u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00018b1eu));

L_19198:
    /* 00019198   4  pea (000191f6) */
    c->pc = RC_ADDR(0x00019198u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000191f6u));

L_1919C:
    /* 0001919c   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0001919cu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1919E:
    /* 0001919e   4  pea (000191f5) */
    c->pc = RC_ADDR(0x0001919eu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000191f5u));

L_191A2:
    /* 000191a2   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x000191a2u);
    rc_step(c, m, 18);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x000191a6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d5cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00020c0cu);
    return;

L_191A6:
    /* 000191a6   4  lea (10,A7),A7 */
    c->pc = RC_ADDR(0x000191a6u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x10u);

L_191AA:
    /* 000191aa   4  jsr (ffff82a8,A4) */
    c->pc = RC_ADDR(0x000191aau);
    rc_step(c, m, 18);
    /* vector 113 */
    rc_push32(c, m, RC_ADDR(0x000191aeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d9eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022308u);
    return;

L_191AE:
    /* 000191ae   4  move.l (1d8c,A4),-(A7) */
    c->pc = RC_ADDR(0x000191aeu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1d8cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_191B2:
    /* 000191b2   4  move.l (1d88,A4),-(A7) */
    c->pc = RC_ADDR(0x000191b2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1d88u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_191B6:
    /* 000191b6   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x000191b6u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x000191bau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_191BA:
    /* 000191ba   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000191bau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_191BC:
    /* 000191bc   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x000191bcu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_191BE:
    /* 000191be   4  jsr (ffff8044,A4) */
    c->pc = RC_ADDR(0x000191beu);
    rc_step(c, m, 18);
    /* vector 11 */
    rc_push32(c, m, RC_ADDR(0x000191c2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b3au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000302cu);
    return;

L_191C2:
    /* 000191c2   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000191c2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_191C4:
    /* 000191c4   2  unlk A5 */
    c->pc = RC_ADDR(0x000191c4u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_191C6:
    /* 000191c6   2  rts */
    c->pc = RC_ADDR(0x000191c6u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
