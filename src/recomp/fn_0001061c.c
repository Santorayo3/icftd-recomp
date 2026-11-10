/* fn_0001061c - 144 byte(s), 40 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001061c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001061cu): goto L_1061C;
    case RC_ADDR(0x00010620u): goto L_10620;
    case RC_ADDR(0x00010624u): goto L_10624;
    case RC_ADDR(0x00010628u): goto L_10628;
    case RC_ADDR(0x0001062cu): goto L_1062C;
    case RC_ADDR(0x0001062eu): goto L_1062E;
    case RC_ADDR(0x00010634u): goto L_10634;
    case RC_ADDR(0x00010636u): goto L_10636;
    case RC_ADDR(0x0001063cu): goto L_1063C;
    case RC_ADDR(0x00010642u): goto L_10642;
    case RC_ADDR(0x00010644u): goto L_10644;
    case RC_ADDR(0x0001064au): goto L_1064A;
    case RC_ADDR(0x0001064cu): goto L_1064C;
    case RC_ADDR(0x00010650u): goto L_10650;
    case RC_ADDR(0x00010654u): goto L_10654;
    case RC_ADDR(0x00010658u): goto L_10658;
    case RC_ADDR(0x0001065au): goto L_1065A;
    case RC_ADDR(0x0001065eu): goto L_1065E;
    case RC_ADDR(0x00010662u): goto L_10662;
    case RC_ADDR(0x00010664u): goto L_10664;
    case RC_ADDR(0x00010668u): goto L_10668;
    case RC_ADDR(0x0001066au): goto L_1066A;
    case RC_ADDR(0x0001066eu): goto L_1066E;
    case RC_ADDR(0x00010672u): goto L_10672;
    case RC_ADDR(0x00010674u): goto L_10674;
    case RC_ADDR(0x00010678u): goto L_10678;
    case RC_ADDR(0x0001067cu): goto L_1067C;
    case RC_ADDR(0x0001067eu): goto L_1067E;
    case RC_ADDR(0x00010682u): goto L_10682;
    case RC_ADDR(0x00010686u): goto L_10686;
    case RC_ADDR(0x0001068au): goto L_1068A;
    case RC_ADDR(0x0001068cu): goto L_1068C;
    case RC_ADDR(0x00010690u): goto L_10690;
    case RC_ADDR(0x00010692u): goto L_10692;
    case RC_ADDR(0x00010696u): goto L_10696;
    case RC_ADDR(0x0001069au): goto L_1069A;
    case RC_ADDR(0x000106a0u): goto L_106A0;
    case RC_ADDR(0x000106a2u): goto L_106A2;
    case RC_ADDR(0x000106a8u): goto L_106A8;
    case RC_ADDR(0x000106aau): goto L_106AA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1061C:
    /* 0001061c   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001061cu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_10620:
    /* 00010620   4  tst.w (ffff83c8,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010620u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_set_nzvc(c, t0, RC_W);

L_10624:
    /* 00010624   4  bne 000106a8 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010624u);
    if (rc_cond(c, 6)) goto L_106A8;

L_10628:
    /* 00010628   4  tst.w (ffffa214,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010628u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5decu));
    rc_set_nzvc(c, t0, RC_W);

L_1062C:
    /* 0001062c   2  bne 0001066a */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001062cu);
    if (rc_cond(c, 6)) goto L_1066A;

L_1062E:
    /* 0001062e   6  cmpi.w #11,(ffff83cc,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001062eu);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c34u));
    rc_cmp(c, RC_W, t0, 0x00000011u);

L_10634:
    /* 00010634   2  ble 0001063c */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010634u);
    if (rc_cond(c, 15)) goto L_1063C;

L_10636:
    /* 00010636   6  move.w #3,(ffff9312,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010636u);
    t0 = 0x00000003u;
    rc_wr16(c, m, (c->a[4] - 0x6ceeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1063C:
    /* 0001063c   6  cmpi.w #5,(ffff83cc,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001063cu);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c34u));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_10642:
    /* 00010642   2  blt 00010668 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010642u);
    if (rc_cond(c, 13)) goto L_10668;

L_10644:
    /* 00010644   6  cmpi.w #11,(ffff83cc,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010644u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c34u));
    rc_cmp(c, RC_W, t0, 0x00000011u);

L_1064A:
    /* 0001064a   2  bge 00010668 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001064au);
    if (rc_cond(c, 12)) goto L_10668;

L_1064C:
    /* 0001064c   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001064cu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10650:
    /* 00010650   4  move.l (ffffa216,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010650u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5deau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10654:
    /* 00010654   4  jsr (ffff805c,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010654u);
    /* vector 15 */
    rc_push32(c, m, RC_ADDR(0x00010658u));
    rc_depth++;
    c->pc = RC_ADDR(0x00004328u);
    return;

L_10658:
    /* 00010658   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010658u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1065A:
    /* 0001065a   4  addq.w #1,(ffffa214,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001065au);
    t3 = (c->a[4] - 0x5decu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1065E:
    /* 0001065e   4  move.w (ffff83cc,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001065eu);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c34u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10662:
    /* 00010662   2  addq.w #5,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010662u);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000005u;
    rc_flags_add(c, RC_W, t1, 0x00000005u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_10664:
    /* 00010664   4  move.w D0,(ae8,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010664u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0xae8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_10668:
    /* 00010668   2  bra 000106a8 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010668u);
    goto L_106A8;

L_1066A:
    /* 0001066a   4  move.w (ae8,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001066au);
    t0 = rc_rd16(c, m, (c->a[4] + 0xae8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1066E:
    /* 0001066e   4  cmp.w (ffff83cc,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001066eu);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c34u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_10672:
    /* 00010672   2  bgt 000106a8 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010672u);
    if (rc_cond(c, 14)) goto L_106A8;

L_10674:
    /* 00010674   4  movea.l (ffff847c,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010674u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x7b84u));
    c->a[0] = t0;

L_10678:
    /* 00010678   4  tst.b (3,A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010678u);
    t0 = rc_rd8(c, m, (c->a[0] + 0x3u));
    rc_set_nzvc(c, t0, RC_B);

L_1067C:
    /* 0001067c   2  bne 000106a2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001067cu);
    if (rc_cond(c, 6)) goto L_106A2;

L_1067E:
    /* 0001067e   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001067eu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10682:
    /* 00010682   4  move.l (ffffa216,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010682u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5deau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10686:
    /* 00010686   4  jsr (ffff805c,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010686u);
    /* vector 15 */
    rc_push32(c, m, RC_ADDR(0x0001068au));
    rc_depth++;
    c->pc = RC_ADDR(0x00004328u);
    return;

L_1068A:
    /* 0001068a   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001068au);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1068C:
    /* 0001068c   4  move.w (ffff83cc,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001068cu);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c34u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10690:
    /* 00010690   2  addq.w #5,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010690u);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000005u;
    rc_flags_add(c, RC_W, t1, 0x00000005u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_10692:
    /* 00010692   4  move.w D0,(ae8,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010692u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0xae8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_10696:
    /* 00010696   4  movea.l (ffff847c,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010696u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x7b84u));
    c->a[0] = t0;

L_1069A:
    /* 0001069a   6  move.b #32,(3,A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001069au);
    t0 = 0x00000032u;
    rc_wr8(c, m, (c->a[0] + 0x3u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_106A0:
    /* 000106a0   2  bra 000106a8 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000106a0u);
    goto L_106A8;

L_106A2:
    /* 000106a2   6  move.w #3,(ffff9312,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000106a2u);
    t0 = 0x00000003u;
    rc_wr16(c, m, (c->a[4] - 0x6ceeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_106A8:
    /* 000106a8   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000106a8u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_106AA:
    /* 000106aa   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000106aau);
    rc_ret(c, m);
    return;

}
