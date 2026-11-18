/* fn_000155de - 92 byte(s), 26 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000155de(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000155deu): goto L_155DE;
    case RC_ADDR(0x000155e2u): goto L_155E2;
    case RC_ADDR(0x000155e6u): goto L_155E6;
    case RC_ADDR(0x000155eau): goto L_155EA;
    case RC_ADDR(0x000155eeu): goto L_155EE;
    case RC_ADDR(0x000155f2u): goto L_155F2;
    case RC_ADDR(0x000155f6u): goto L_155F6;
    case RC_ADDR(0x000155f8u): goto L_155F8;
    case RC_ADDR(0x000155fcu): goto L_155FC;
    case RC_ADDR(0x000155feu): goto L_155FE;
    case RC_ADDR(0x00015604u): goto L_15604;
    case RC_ADDR(0x00015608u): goto L_15608;
    case RC_ADDR(0x0001560cu): goto L_1560C;
    case RC_ADDR(0x00015610u): goto L_15610;
    case RC_ADDR(0x00015614u): goto L_15614;
    case RC_ADDR(0x00015616u): goto L_15616;
    case RC_ADDR(0x0001561au): goto L_1561A;
    case RC_ADDR(0x0001561eu): goto L_1561E;
    case RC_ADDR(0x00015622u): goto L_15622;
    case RC_ADDR(0x00015626u): goto L_15626;
    case RC_ADDR(0x00015628u): goto L_15628;
    case RC_ADDR(0x0001562au): goto L_1562A;
    case RC_ADDR(0x0001562cu): goto L_1562C;
    case RC_ADDR(0x00015632u): goto L_15632;
    case RC_ADDR(0x00015636u): goto L_15636;
    case RC_ADDR(0x00015638u): goto L_15638;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_155DE:
    /* 000155de   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x000155deu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_155E2:
    /* 000155e2   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x000155e2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_155E6:
    /* 000155e6   4  movem.l { D0 D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 A7 },-(SP) */
    c->pc = RC_ADDR(0x000155e6u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[4]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[0]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[0]);
    c->a[7] = t3;

L_155EA:
    /* 000155ea   4  move.w (a,A5),-(A7) */
    c->pc = RC_ADDR(0x000155eau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_155EE:
    /* 000155ee   4  move.w (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000155eeu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_155F2:
    /* 000155f2   4  bsr 00017756 */
    c->pc = RC_ADDR(0x000155f2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000155f6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00017756u);
    return;

L_155F6:
    /* 000155f6   2  addq.l #4,A7 */
    c->pc = RC_ADDR(0x000155f6u);
    rc_step(c, m, 8);
    c->a[7] += 0x00000004u;

L_155F8:
    /* 000155f8   4  andi.b #80,D0 */
    c->pc = RC_ADDR(0x000155f8u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_B);
    t2 = t1 & 0x00000080u;
    rc_d_set(c, 0, RC_B, t2);
    rc_set_nzvc(c, t2, RC_B);

L_155FC:
    /* 000155fc   2  beq 00015616 */
    c->pc = RC_ADDR(0x000155fcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_15616;

L_155FE:
    /* 000155fe   6  move.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000155feu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15604:
    /* 00015604   4  move.w (c,A5),-(A7) */
    c->pc = RC_ADDR(0x00015604u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15608:
    /* 00015608   4  move.w (a,A5),-(A7) */
    c->pc = RC_ADDR(0x00015608u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1560C:
    /* 0001560c   4  move.w (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0001560cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15610:
    /* 00015610   4  bsr 0001787a */
    c->pc = RC_ADDR(0x00015610u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00015614u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001787au);
    return;

L_15614:
    /* 00015614   2  addq.l #6,A7 */
    c->pc = RC_ADDR(0x00015614u);
    rc_step(c, m, 8);
    c->a[7] += 0x00000006u;

L_15616:
    /* 00015616   4  movem.l (SP)+,{ D0 D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 A7 } */
    c->pc = RC_ADDR(0x00015616u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[3] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[6] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[7] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[6] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[7] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_1561A:
    /* 0001561a   4  move.w (a,A5),-(A7) */
    c->pc = RC_ADDR(0x0001561au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1561E:
    /* 0001561e   4  move.w (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0001561eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15622:
    /* 00015622   4  jsr (00016920) */
    c->pc = RC_ADDR(0x00015622u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00015626u));
    rc_depth++;
    c->pc = RC_ADDR(0x00016920u);
    return;

L_15626:
    /* 00015626   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00015626u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_15628:
    /* 00015628   2  tst.w D0 */
    c->pc = RC_ADDR(0x00015628u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1562A:
    /* 0001562a   2  beq 00015632 */
    c->pc = RC_ADDR(0x0001562au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_15632;

L_1562C:
    /* 0001562c   6  move.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001562cu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15632:
    /* 00015632   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00015632u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15636:
    /* 00015636   2  unlk A5 */
    c->pc = RC_ADDR(0x00015636u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_15638:
    /* 00015638   2  rts */
    c->pc = RC_ADDR(0x00015638u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
