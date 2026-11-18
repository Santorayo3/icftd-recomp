/* fn_00007790 - 138 byte(s), 41 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00007790(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00007790u): goto L_7790;
    case RC_ADDR(0x00007794u): goto L_7794;
    case RC_ADDR(0x00007798u): goto L_7798;
    case RC_ADDR(0x0000779au): goto L_779A;
    case RC_ADDR(0x0000779eu): goto L_779E;
    case RC_ADDR(0x000077a0u): goto L_77A0;
    case RC_ADDR(0x000077a2u): goto L_77A2;
    case RC_ADDR(0x000077a6u): goto L_77A6;
    case RC_ADDR(0x000077aau): goto L_77AA;
    case RC_ADDR(0x000077acu): goto L_77AC;
    case RC_ADDR(0x000077b0u): goto L_77B0;
    case RC_ADDR(0x000077b4u): goto L_77B4;
    case RC_ADDR(0x000077b6u): goto L_77B6;
    case RC_ADDR(0x000077bcu): goto L_77BC;
    case RC_ADDR(0x000077c0u): goto L_77C0;
    case RC_ADDR(0x000077c4u): goto L_77C4;
    case RC_ADDR(0x000077c8u): goto L_77C8;
    case RC_ADDR(0x000077ccu): goto L_77CC;
    case RC_ADDR(0x000077ceu): goto L_77CE;
    case RC_ADDR(0x000077d2u): goto L_77D2;
    case RC_ADDR(0x000077d6u): goto L_77D6;
    case RC_ADDR(0x000077d8u): goto L_77D8;
    case RC_ADDR(0x000077dcu): goto L_77DC;
    case RC_ADDR(0x000077deu): goto L_77DE;
    case RC_ADDR(0x000077e0u): goto L_77E0;
    case RC_ADDR(0x000077e4u): goto L_77E4;
    case RC_ADDR(0x000077e8u): goto L_77E8;
    case RC_ADDR(0x000077eau): goto L_77EA;
    case RC_ADDR(0x000077eeu): goto L_77EE;
    case RC_ADDR(0x000077f2u): goto L_77F2;
    case RC_ADDR(0x000077f6u): goto L_77F6;
    case RC_ADDR(0x000077fau): goto L_77FA;
    case RC_ADDR(0x000077fcu): goto L_77FC;
    case RC_ADDR(0x000077feu): goto L_77FE;
    case RC_ADDR(0x00007802u): goto L_7802;
    case RC_ADDR(0x00007804u): goto L_7804;
    case RC_ADDR(0x00007808u): goto L_7808;
    case RC_ADDR(0x0000780eu): goto L_780E;
    case RC_ADDR(0x00007812u): goto L_7812;
    case RC_ADDR(0x00007816u): goto L_7816;
    case RC_ADDR(0x00007818u): goto L_7818;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_7790:
    /* 00007790   4  link.w A5,#ffffffec */
    c->pc = RC_ADDR(0x00007790u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x14u;

L_7794:
    /* 00007794   4  tst.l (8,A5) */
    c->pc = RC_ADDR(0x00007794u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_set_nzvc(c, t0, RC_L);

L_7798:
    /* 00007798   2  beq 00007816 */
    c->pc = RC_ADDR(0x00007798u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_7816;

L_779A:
    /* 0000779a   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000779au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_779E:
    /* 0000779e   2  bsr 0000774a */
    c->pc = RC_ADDR(0x0000779eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000077a0u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000774au);
    return;

L_77A0:
    /* 000077a0   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000077a0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_77A2:
    /* 000077a2   4  move.w D0,(fffffa08,A4) */
    c->pc = RC_ADDR(0x000077a2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x5f8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_77A6:
    /* 000077a6   4  tst.w (fffffa08,A4) */
    c->pc = RC_ADDR(0x000077a6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5f8u));
    rc_set_nzvc(c, t0, RC_W);

L_77AA:
    /* 000077aa   2  bge 00007816 */
    c->pc = RC_ADDR(0x000077aau);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_7816;

L_77AC:
    /* 000077ac   4  pea (0000781a) */
    c->pc = RC_ADDR(0x000077acu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000781au));

L_77B0:
    /* 000077b0   4  jsr (ffff82ae,A4) */
    c->pc = RC_ADDR(0x000077b0u);
    rc_step(c, m, 18);
    /* vector 114 */
    rc_push32(c, m, RC_ADDR(0x000077b4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023da4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022366u);
    return;

L_77B4:
    /* 000077b4   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000077b4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_77B6:
    /* 000077b6   6  move.b #21,(ffffffec,A5) */
    c->pc = RC_ADDR(0x000077b6u);
    rc_step(c, m, 16);
    t0 = 0x00000021u;
    rc_wr8(c, m, (c->a[5] - 0x14u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_77BC:
    /* 000077bc   4  clr.b (ffffffed,A5) */
    c->pc = RC_ADDR(0x000077bcu);
    rc_step(c, m, 16);
    rc_wr8(c, m, (c->a[5] - 0x13u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_77C0:
    /* 000077c0   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000077c0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_77C4:
    /* 000077c4   4  pea (ffffffec,A5) */
    c->pc = RC_ADDR(0x000077c4u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x14u));

L_77C8:
    /* 000077c8   4  jsr (ffff82ea,A4) */
    c->pc = RC_ADDR(0x000077c8u);
    rc_step(c, m, 18);
    /* vector 124 */
    rc_push32(c, m, RC_ADDR(0x000077ccu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023de0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022d34u);
    return;

L_77CC:
    /* 000077cc   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000077ccu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_77CE:
    /* 000077ce   4  pea (ffffffec,A5) */
    c->pc = RC_ADDR(0x000077ceu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x14u));

L_77D2:
    /* 000077d2   4  jsr (ffff824e,A4) */
    c->pc = RC_ADDR(0x000077d2u);
    rc_step(c, m, 18);
    /* vector 98 */
    rc_push32(c, m, RC_ADDR(0x000077d6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d44u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001ff16u);
    return;

L_77D6:
    /* 000077d6   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000077d6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_77D8:
    /* 000077d8   4  move.w (fffffa06,A4),D1 */
    c->pc = RC_ADDR(0x000077d8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5fau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_77DC:
    /* 000077dc   2  ext.l D1 */
    c->pc = RC_ADDR(0x000077dcu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_77DE:
    /* 000077de   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x000077deu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_77E0:
    /* 000077e0   4  lea (fffff97a,A4),A0 */
    c->pc = RC_ADDR(0x000077e0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x686u);

L_77E4:
    /* 000077e4   4  move.l D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x000077e4u);
    rc_step(c, m, 18);
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_77E8:
    /* 000077e8   2  beq 00007816 */
    c->pc = RC_ADDR(0x000077e8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_7816;

L_77EA:
    /* 000077ea   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000077eau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_77EE:
    /* 000077ee   4  move.w (fffffa06,A4),D0 */
    c->pc = RC_ADDR(0x000077eeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5fau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_77F2:
    /* 000077f2   4  muls.w #a,D0 */
    c->pc = RC_ADDR(0x000077f2u);
    rc_step(c, m, 42);
    t0 = 0x0000000au;
    rc_muls(c, 0, t0);

L_77F6:
    /* 000077f6   4  lea (fffff9a2,A4),A0 */
    c->pc = RC_ADDR(0x000077f6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x65eu);

L_77FA:
    /* 000077fa   2  add.l A0,D0 */
    c->pc = RC_ADDR(0x000077fau);
    rc_step(c, m, 6);
    t0 = rc_a_get(c, 0, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_77FC:
    /* 000077fc   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x000077fcu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_77FE:
    /* 000077fe   4  jsr (ffff82cc,A4) */
    c->pc = RC_ADDR(0x000077feu);
    rc_step(c, m, 18);
    /* vector 119 */
    rc_push32(c, m, RC_ADDR(0x00007802u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dc2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000228b2u);
    return;

L_7802:
    /* 00007802   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00007802u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_7804:
    /* 00007804   4  jsr (ffff8056,A4) */
    c->pc = RC_ADDR(0x00007804u);
    rc_step(c, m, 18);
    /* vector 14 */
    rc_push32(c, m, RC_ADDR(0x00007808u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b4cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00003988u);
    return;

L_7808:
    /* 00007808   6  move.w (fffffa06,A4),(fffffa08,A4) */
    c->pc = RC_ADDR(0x00007808u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5fau));
    rc_wr16(c, m, (c->a[4] - 0x5f8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_780E:
    /* 0000780e   4  addq.w #1,(fffffa06,A4) */
    c->pc = RC_ADDR(0x0000780eu);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x5fau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_7812:
    /* 00007812   4  addq.w #1,(fffffa10,A4) */
    c->pc = RC_ADDR(0x00007812u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x5f0u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_7816:
    /* 00007816   2  unlk A5 */
    c->pc = RC_ADDR(0x00007816u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_7818:
    /* 00007818   2  rts */
    c->pc = RC_ADDR(0x00007818u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
