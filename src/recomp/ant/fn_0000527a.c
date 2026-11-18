/* fn_0000527a - 118 byte(s), 35 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000527a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000527au): goto L_527A;
    case RC_ADDR(0x0000527eu): goto L_527E;
    case RC_ADDR(0x00005282u): goto L_5282;
    case RC_ADDR(0x00005286u): goto L_5286;
    case RC_ADDR(0x00005288u): goto L_5288;
    case RC_ADDR(0x0000528au): goto L_528A;
    case RC_ADDR(0x0000528cu): goto L_528C;
    case RC_ADDR(0x0000528eu): goto L_528E;
    case RC_ADDR(0x00005292u): goto L_5292;
    case RC_ADDR(0x00005296u): goto L_5296;
    case RC_ADDR(0x0000529au): goto L_529A;
    case RC_ADDR(0x0000529eu): goto L_529E;
    case RC_ADDR(0x000052a0u): goto L_52A0;
    case RC_ADDR(0x000052a4u): goto L_52A4;
    case RC_ADDR(0x000052a8u): goto L_52A8;
    case RC_ADDR(0x000052aau): goto L_52AA;
    case RC_ADDR(0x000052acu): goto L_52AC;
    case RC_ADDR(0x000052aeu): goto L_52AE;
    case RC_ADDR(0x000052b4u): goto L_52B4;
    case RC_ADDR(0x000052b6u): goto L_52B6;
    case RC_ADDR(0x000052bau): goto L_52BA;
    case RC_ADDR(0x000052beu): goto L_52BE;
    case RC_ADDR(0x000052c4u): goto L_52C4;
    case RC_ADDR(0x000052c8u): goto L_52C8;
    case RC_ADDR(0x000052ceu): goto L_52CE;
    case RC_ADDR(0x000052d0u): goto L_52D0;
    case RC_ADDR(0x000052d4u): goto L_52D4;
    case RC_ADDR(0x000052d8u): goto L_52D8;
    case RC_ADDR(0x000052dau): goto L_52DA;
    case RC_ADDR(0x000052dcu): goto L_52DC;
    case RC_ADDR(0x000052deu): goto L_52DE;
    case RC_ADDR(0x000052e4u): goto L_52E4;
    case RC_ADDR(0x000052e6u): goto L_52E6;
    case RC_ADDR(0x000052ecu): goto L_52EC;
    case RC_ADDR(0x000052eeu): goto L_52EE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_527A:
    /* 0000527a   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x0000527au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_527E:
    /* 0000527e   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0000527eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5282:
    /* 00005282   4  move.w (fffffffe,A5),-(A7) */
    c->pc = RC_ADDR(0x00005282u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5286:
    /* 00005286   2  bsr 0000520c */
    c->pc = RC_ADDR(0x00005286u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00005288u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000520cu);
    return;

L_5288:
    /* 00005288   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00005288u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_528A:
    /* 0000528a   2  tst.w D0 */
    c->pc = RC_ADDR(0x0000528au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_528C:
    /* 0000528c   2  beq 000052c4 */
    c->pc = RC_ADDR(0x0000528cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_52C4;

L_528E:
    /* 0000528e   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0000528eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_5292:
    /* 00005292   4  muls.w #12,D0 */
    c->pc = RC_ADDR(0x00005292u);
    rc_step(c, m, 42);
    t0 = 0x00000012u;
    rc_muls(c, 0, t0);

L_5296:
    /* 00005296   4  lea (ffff85f6,A4),A0 */
    c->pc = RC_ADDR(0x00005296u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7a0au);

L_529A:
    /* 0000529a   4  tst.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000529au);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_B);

L_529E:
    /* 0000529e   2  beq 000052c4 */
    c->pc = RC_ADDR(0x0000529eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_52C4;

L_52A0:
    /* 000052a0   4  move.w #e9,-(A7) */
    c->pc = RC_ADDR(0x000052a0u);
    rc_step(c, m, 12);
    t0 = 0x000000e9u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_52A4:
    /* 000052a4   4  jsr (ffff808c,A4) */
    c->pc = RC_ADDR(0x000052a4u);
    rc_step(c, m, 18);
    /* vector 23 */
    rc_push32(c, m, RC_ADDR(0x000052a8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b82u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000080a0u);
    return;

L_52A8:
    /* 000052a8   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000052a8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_52AA:
    /* 000052aa   2  tst.w D0 */
    c->pc = RC_ADDR(0x000052aau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_52AC:
    /* 000052ac   2  beq 000052c4 */
    c->pc = RC_ADDR(0x000052acu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_52C4;

L_52AE:
    /* 000052ae   6  cmpi.w #7,(ffff83e2,A4) */
    c->pc = RC_ADDR(0x000052aeu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1eu));
    rc_cmp(c, RC_W, t0, 0x00000007u);

L_52B4:
    /* 000052b4   2  bge 000052c4 */
    c->pc = RC_ADDR(0x000052b4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_52C4;

L_52B6:
    /* 000052b6   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000052b6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_52BA:
    /* 000052ba   4  lea (fffff946,A4),A0 */
    c->pc = RC_ADDR(0x000052bau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6bau);

L_52BE:
    /* 000052be   6  move.b #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000052beu);
    rc_step(c, m, 18);
    t0 = 0x00000001u;
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_52C4:
    /* 000052c4   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000052c4u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_52C8:
    /* 000052c8   6  cmpi.w #27,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000052c8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000027u);

L_52CE:
    /* 000052ce   2  blt 00005282 */
    c->pc = RC_ADDR(0x000052ceu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_5282; }

L_52D0:
    /* 000052d0   4  move.w #25,-(A7) */
    c->pc = RC_ADDR(0x000052d0u);
    rc_step(c, m, 12);
    t0 = 0x00000025u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_52D4:
    /* 000052d4   4  jsr (ffff808c,A4) */
    c->pc = RC_ADDR(0x000052d4u);
    rc_step(c, m, 18);
    /* vector 23 */
    rc_push32(c, m, RC_ADDR(0x000052d8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b82u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000080a0u);
    return;

L_52D8:
    /* 000052d8   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000052d8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_52DA:
    /* 000052da   2  tst.w D0 */
    c->pc = RC_ADDR(0x000052dau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_52DC:
    /* 000052dc   2  bne 000052e6 */
    c->pc = RC_ADDR(0x000052dcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_52E6;

L_52DE:
    /* 000052de   6  cmpi.w #a,(ffff83e2,A4) */
    c->pc = RC_ADDR(0x000052deu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1eu));
    rc_cmp(c, RC_W, t0, 0x0000000au);

L_52E4:
    /* 000052e4   2  bge 000052ec */
    c->pc = RC_ADDR(0x000052e4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_52EC;

L_52E6:
    /* 000052e6   6  move.b #1,(fffff961,A4) */
    c->pc = RC_ADDR(0x000052e6u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr8(c, m, (c->a[4] - 0x69fu), t0);
    rc_set_nzvc(c, t0, RC_B);

L_52EC:
    /* 000052ec   2  unlk A5 */
    c->pc = RC_ADDR(0x000052ecu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_52EE:
    /* 000052ee   2  rts */
    c->pc = RC_ADDR(0x000052eeu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
