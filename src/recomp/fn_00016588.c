/* fn_00016588 - 588 byte(s), 168 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00016588(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00016588u): goto L_16588;
    case RC_ADDR(0x0001658cu): goto L_1658C;
    case RC_ADDR(0x00016590u): goto L_16590;
    case RC_ADDR(0x00016592u): goto L_16592;
    case RC_ADDR(0x00016594u): goto L_16594;
    case RC_ADDR(0x00016596u): goto L_16596;
    case RC_ADDR(0x0001659au): goto L_1659A;
    case RC_ADDR(0x0001659eu): goto L_1659E;
    case RC_ADDR(0x000165a2u): goto L_165A2;
    case RC_ADDR(0x000165a6u): goto L_165A6;
    case RC_ADDR(0x000165aau): goto L_165AA;
    case RC_ADDR(0x000165acu): goto L_165AC;
    case RC_ADDR(0x000165b0u): goto L_165B0;
    case RC_ADDR(0x000165b4u): goto L_165B4;
    case RC_ADDR(0x000165b8u): goto L_165B8;
    case RC_ADDR(0x000165bcu): goto L_165BC;
    case RC_ADDR(0x000165c0u): goto L_165C0;
    case RC_ADDR(0x000165c2u): goto L_165C2;
    case RC_ADDR(0x000165c6u): goto L_165C6;
    case RC_ADDR(0x000165c8u): goto L_165C8;
    case RC_ADDR(0x000165ccu): goto L_165CC;
    case RC_ADDR(0x000165d0u): goto L_165D0;
    case RC_ADDR(0x000165d4u): goto L_165D4;
    case RC_ADDR(0x000165d6u): goto L_165D6;
    case RC_ADDR(0x000165dau): goto L_165DA;
    case RC_ADDR(0x000165deu): goto L_165DE;
    case RC_ADDR(0x000165e2u): goto L_165E2;
    case RC_ADDR(0x000165e4u): goto L_165E4;
    case RC_ADDR(0x000165e8u): goto L_165E8;
    case RC_ADDR(0x000165ecu): goto L_165EC;
    case RC_ADDR(0x000165eeu): goto L_165EE;
    case RC_ADDR(0x000165f0u): goto L_165F0;
    case RC_ADDR(0x000165f4u): goto L_165F4;
    case RC_ADDR(0x000165f8u): goto L_165F8;
    case RC_ADDR(0x000165fcu): goto L_165FC;
    case RC_ADDR(0x00016600u): goto L_16600;
    case RC_ADDR(0x00016604u): goto L_16604;
    case RC_ADDR(0x00016606u): goto L_16606;
    case RC_ADDR(0x0001660au): goto L_1660A;
    case RC_ADDR(0x0001660cu): goto L_1660C;
    case RC_ADDR(0x0001660eu): goto L_1660E;
    case RC_ADDR(0x00016612u): goto L_16612;
    case RC_ADDR(0x00016616u): goto L_16616;
    case RC_ADDR(0x00016618u): goto L_16618;
    case RC_ADDR(0x0001661au): goto L_1661A;
    case RC_ADDR(0x0001661eu): goto L_1661E;
    case RC_ADDR(0x00016622u): goto L_16622;
    case RC_ADDR(0x00016626u): goto L_16626;
    case RC_ADDR(0x0001662cu): goto L_1662C;
    case RC_ADDR(0x0001662eu): goto L_1662E;
    case RC_ADDR(0x00016632u): goto L_16632;
    case RC_ADDR(0x00016636u): goto L_16636;
    case RC_ADDR(0x0001663au): goto L_1663A;
    case RC_ADDR(0x0001663cu): goto L_1663C;
    case RC_ADDR(0x0001663eu): goto L_1663E;
    case RC_ADDR(0x00016642u): goto L_16642;
    case RC_ADDR(0x00016646u): goto L_16646;
    case RC_ADDR(0x00016648u): goto L_16648;
    case RC_ADDR(0x0001664au): goto L_1664A;
    case RC_ADDR(0x0001664eu): goto L_1664E;
    case RC_ADDR(0x00016652u): goto L_16652;
    case RC_ADDR(0x00016656u): goto L_16656;
    case RC_ADDR(0x0001665au): goto L_1665A;
    case RC_ADDR(0x0001665eu): goto L_1665E;
    case RC_ADDR(0x00016662u): goto L_16662;
    case RC_ADDR(0x00016666u): goto L_16666;
    case RC_ADDR(0x0001666au): goto L_1666A;
    case RC_ADDR(0x0001666eu): goto L_1666E;
    case RC_ADDR(0x00016672u): goto L_16672;
    case RC_ADDR(0x00016674u): goto L_16674;
    case RC_ADDR(0x00016676u): goto L_16676;
    case RC_ADDR(0x0001667au): goto L_1667A;
    case RC_ADDR(0x0001667eu): goto L_1667E;
    case RC_ADDR(0x00016682u): goto L_16682;
    case RC_ADDR(0x00016686u): goto L_16686;
    case RC_ADDR(0x0001668au): goto L_1668A;
    case RC_ADDR(0x0001668eu): goto L_1668E;
    case RC_ADDR(0x00016692u): goto L_16692;
    case RC_ADDR(0x00016696u): goto L_16696;
    case RC_ADDR(0x0001669au): goto L_1669A;
    case RC_ADDR(0x0001669eu): goto L_1669E;
    case RC_ADDR(0x000166a2u): goto L_166A2;
    case RC_ADDR(0x000166a4u): goto L_166A4;
    case RC_ADDR(0x000166a6u): goto L_166A6;
    case RC_ADDR(0x000166aau): goto L_166AA;
    case RC_ADDR(0x000166aeu): goto L_166AE;
    case RC_ADDR(0x000166b2u): goto L_166B2;
    case RC_ADDR(0x000166b8u): goto L_166B8;
    case RC_ADDR(0x000166bau): goto L_166BA;
    case RC_ADDR(0x000166beu): goto L_166BE;
    case RC_ADDR(0x000166c2u): goto L_166C2;
    case RC_ADDR(0x000166c6u): goto L_166C6;
    case RC_ADDR(0x000166cau): goto L_166CA;
    case RC_ADDR(0x000166ceu): goto L_166CE;
    case RC_ADDR(0x000166d2u): goto L_166D2;
    case RC_ADDR(0x000166d6u): goto L_166D6;
    case RC_ADDR(0x000166dau): goto L_166DA;
    case RC_ADDR(0x000166dcu): goto L_166DC;
    case RC_ADDR(0x000166deu): goto L_166DE;
    case RC_ADDR(0x000166e2u): goto L_166E2;
    case RC_ADDR(0x000166e6u): goto L_166E6;
    case RC_ADDR(0x000166eau): goto L_166EA;
    case RC_ADDR(0x000166f0u): goto L_166F0;
    case RC_ADDR(0x000166f2u): goto L_166F2;
    case RC_ADDR(0x000166f6u): goto L_166F6;
    case RC_ADDR(0x000166fau): goto L_166FA;
    case RC_ADDR(0x000166feu): goto L_166FE;
    case RC_ADDR(0x00016702u): goto L_16702;
    case RC_ADDR(0x00016706u): goto L_16706;
    case RC_ADDR(0x0001670au): goto L_1670A;
    case RC_ADDR(0x0001670eu): goto L_1670E;
    case RC_ADDR(0x00016712u): goto L_16712;
    case RC_ADDR(0x00016714u): goto L_16714;
    case RC_ADDR(0x00016716u): goto L_16716;
    case RC_ADDR(0x0001671au): goto L_1671A;
    case RC_ADDR(0x0001671eu): goto L_1671E;
    case RC_ADDR(0x00016722u): goto L_16722;
    case RC_ADDR(0x00016728u): goto L_16728;
    case RC_ADDR(0x0001672au): goto L_1672A;
    case RC_ADDR(0x0001672eu): goto L_1672E;
    case RC_ADDR(0x00016732u): goto L_16732;
    case RC_ADDR(0x00016734u): goto L_16734;
    case RC_ADDR(0x00016738u): goto L_16738;
    case RC_ADDR(0x0001673cu): goto L_1673C;
    case RC_ADDR(0x00016740u): goto L_16740;
    case RC_ADDR(0x00016742u): goto L_16742;
    case RC_ADDR(0x00016744u): goto L_16744;
    case RC_ADDR(0x0001674au): goto L_1674A;
    case RC_ADDR(0x0001674eu): goto L_1674E;
    case RC_ADDR(0x00016750u): goto L_16750;
    case RC_ADDR(0x00016756u): goto L_16756;
    case RC_ADDR(0x0001675au): goto L_1675A;
    case RC_ADDR(0x0001675cu): goto L_1675C;
    case RC_ADDR(0x00016760u): goto L_16760;
    case RC_ADDR(0x00016762u): goto L_16762;
    case RC_ADDR(0x00016766u): goto L_16766;
    case RC_ADDR(0x00016768u): goto L_16768;
    case RC_ADDR(0x0001676cu): goto L_1676C;
    case RC_ADDR(0x0001676eu): goto L_1676E;
    case RC_ADDR(0x00016772u): goto L_16772;
    case RC_ADDR(0x00016774u): goto L_16774;
    case RC_ADDR(0x00016778u): goto L_16778;
    case RC_ADDR(0x0001677au): goto L_1677A;
    case RC_ADDR(0x0001677cu): goto L_1677C;
    case RC_ADDR(0x0001677eu): goto L_1677E;
    case RC_ADDR(0x00016780u): goto L_16780;
    case RC_ADDR(0x00016782u): goto L_16782;
    case RC_ADDR(0x00016784u): goto L_16784;
    case RC_ADDR(0x00016786u): goto L_16786;
    case RC_ADDR(0x00016788u): goto L_16788;
    case RC_ADDR(0x0001678cu): goto L_1678C;
    case RC_ADDR(0x00016790u): goto L_16790;
    case RC_ADDR(0x00016792u): goto L_16792;
    case RC_ADDR(0x00016794u): goto L_16794;
    case RC_ADDR(0x00016798u): goto L_16798;
    case RC_ADDR(0x0001679cu): goto L_1679C;
    case RC_ADDR(0x0001679eu): goto L_1679E;
    case RC_ADDR(0x000167a4u): goto L_167A4;
    case RC_ADDR(0x000167a6u): goto L_167A6;
    case RC_ADDR(0x000167acu): goto L_167AC;
    case RC_ADDR(0x000167b2u): goto L_167B2;
    case RC_ADDR(0x000167b8u): goto L_167B8;
    case RC_ADDR(0x000167bcu): goto L_167BC;
    case RC_ADDR(0x000167c0u): goto L_167C0;
    case RC_ADDR(0x000167c4u): goto L_167C4;
    case RC_ADDR(0x000167c8u): goto L_167C8;
    case RC_ADDR(0x000167ccu): goto L_167CC;
    case RC_ADDR(0x000167d0u): goto L_167D0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_16588:
    /* 00016588   4  link.w A5,#ffffffea */
    c->pc = RC_ADDR(0x00016588u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x16u;

L_1658C:
    /* 0001658c   4  tst.w (10b8,A4) */
    c->pc = RC_ADDR(0x0001658cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10b8u));
    rc_set_nzvc(c, t0, RC_W);

L_16590:
    /* 00016590   2  beq 00016596 */
    c->pc = RC_ADDR(0x00016590u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_16596;

L_16592:
    /* 00016592   2  unlk A5 */
    c->pc = RC_ADDR(0x00016592u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_16594:
    /* 00016594   2  rts */
    c->pc = RC_ADDR(0x00016594u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

L_16596:
    /* 00016596   4  tst.w (12da,A4) */
    c->pc = RC_ADDR(0x00016596u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x12dau));
    rc_set_nzvc(c, t0, RC_W);

L_1659A:
    /* 0001659a   4  beq 0001679e */
    c->pc = RC_ADDR(0x0001659au);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1679E;

L_1659E:
    /* 0001659e   4  tst.w (12d4,A4) */
    c->pc = RC_ADDR(0x0001659eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x12d4u));
    rc_set_nzvc(c, t0, RC_W);

L_165A2:
    /* 000165a2   4  bne 0001672a */
    c->pc = RC_ADDR(0x000165a2u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_1672A;

L_165A6:
    /* 000165a6   4  tst.w (df2,A4) */
    c->pc = RC_ADDR(0x000165a6u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdf2u));
    rc_set_nzvc(c, t0, RC_W);

L_165AA:
    /* 000165aa   2  bne 000165b4 */
    c->pc = RC_ADDR(0x000165aau);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_165B4;

L_165AC:
    /* 000165ac   4  tst.w (12dc,A4) */
    c->pc = RC_ADDR(0x000165acu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x12dcu));
    rc_set_nzvc(c, t0, RC_W);

L_165B0:
    /* 000165b0   4  beq 00016728 */
    c->pc = RC_ADDR(0x000165b0u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_16728;

L_165B4:
    /* 000165b4   4  move.w (df2,A4),D0 */
    c->pc = RC_ADDR(0x000165b4u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdf2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_165B8:
    /* 000165b8   4  add.w D0,(12d2,A4) */
    c->pc = RC_ADDR(0x000165b8u);
    rc_step(c, m);
    t3 = (c->a[4] + 0x12d2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_165BC:
    /* 000165bc   4  tst.w (12d2,A4) */
    c->pc = RC_ADDR(0x000165bcu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x12d2u));
    rc_set_nzvc(c, t0, RC_W);

L_165C0:
    /* 000165c0   2  bge 000165cc */
    c->pc = RC_ADDR(0x000165c0u);
    rc_step(c, m);
    if (rc_cond(c, 12)) goto L_165CC;

L_165C2:
    /* 000165c2   4  move.w (12d8,A4),D0 */
    c->pc = RC_ADDR(0x000165c2u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x12d8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_165C6:
    /* 000165c6   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x000165c6u);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_165C8:
    /* 000165c8   4  move.w D0,(12d2,A4) */
    c->pc = RC_ADDR(0x000165c8u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x12d2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_165CC:
    /* 000165cc   4  move.w (12d2,A4),D0 */
    c->pc = RC_ADDR(0x000165ccu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x12d2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_165D0:
    /* 000165d0   4  cmp.w (12d8,A4),D0 */
    c->pc = RC_ADDR(0x000165d0u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x12d8u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_165D4:
    /* 000165d4   2  blt 000165da */
    c->pc = RC_ADDR(0x000165d4u);
    rc_step(c, m);
    if (rc_cond(c, 13)) goto L_165DA;

L_165D6:
    /* 000165d6   4  clr.w (12d2,A4) */
    c->pc = RC_ADDR(0x000165d6u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] + 0x12d2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_165DA:
    /* 000165da   4  clr.w (12dc,A4) */
    c->pc = RC_ADDR(0x000165dau);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] + 0x12dcu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_165DE:
    /* 000165de   4  tst.w (12de,A4) */
    c->pc = RC_ADDR(0x000165deu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x12deu));
    rc_set_nzvc(c, t0, RC_W);

L_165E2:
    /* 000165e2   2  beq 000165fc */
    c->pc = RC_ADDR(0x000165e2u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_165FC;

L_165E4:
    /* 000165e4   4  pea (e38,A4) */
    c->pc = RC_ADDR(0x000165e4u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] + 0xe38u));

L_165E8:
    /* 000165e8   4  move.l (12c6,A4),-(A7) */
    c->pc = RC_ADDR(0x000165e8u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x12c6u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_165EC:
    /* 000165ec   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x000165ecu);
    rc_step(c, m);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_165EE:
    /* 000165ee   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x000165eeu);
    rc_step(c, m);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_165F0:
    /* 000165f0   4  jsr (ffff8152,A4) */
    c->pc = RC_ADDR(0x000165f0u);
    rc_step(c, m);
    /* vector 56 */
    rc_push32(c, m, RC_ADDR(0x000165f4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ba8u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00011130u);
    return;

L_165F4:
    /* 000165f4   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000165f4u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_165F8:
    /* 000165f8   4  clr.w (12de,A4) */
    c->pc = RC_ADDR(0x000165f8u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] + 0x12deu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_165FC:
    /* 000165fc   4  clr.w (ffffffea,A5) */
    c->pc = RC_ADDR(0x000165fcu);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] - 0x16u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_16600:
    /* 00016600   4  pea (0000000e).l */
    c->pc = RC_ADDR(0x00016600u);
    rc_step(c, m);
    rc_push32(c, m, 0x0000000eu);

L_16604:
    /* 00016604   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00016604u);
    rc_step(c, m);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_16606:
    /* 00016606   4  move.w (ffffffea,A5),D0 */
    c->pc = RC_ADDR(0x00016606u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x16u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1660A:
    /* 0001660a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001660au);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1660C:
    /* 0001660c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001660cu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1660E:
    /* 0001660e   4  lea (ffffb3ac,A4),A0 */
    c->pc = RC_ADDR(0x0001660eu);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x4c54u);

L_16612:
    /* 00016612   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00016612u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16616:
    /* 00016616   2  ext.l D1 */
    c->pc = RC_ADDR(0x00016616u);
    rc_step(c, m);
    rc_ext_l(c, 1);

L_16618:
    /* 00016618   2  move.l D1,-(A7) */
    c->pc = RC_ADDR(0x00016618u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1661A:
    /* 0001661a   4  jsr (00016550) */
    c->pc = RC_ADDR(0x0001661au);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001661eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00016550u);
    return;

L_1661E:
    /* 0001661e   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001661eu);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_16622:
    /* 00016622   4  addq.w #1,(ffffffea,A5) */
    c->pc = RC_ADDR(0x00016622u);
    rc_step(c, m);
    t3 = (c->a[5] - 0x16u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_16626:
    /* 00016626   6  cmpi.w #4,(ffffffea,A5) */
    c->pc = RC_ADDR(0x00016626u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x16u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_1662C:
    /* 0001662c   2  blt 00016600 */
    c->pc = RC_ADDR(0x0001662cu);
    rc_step(c, m);
    if (rc_cond(c, 13)) { rc_tick(); goto L_16600; }

L_1662E:
    /* 0001662e   4  pea (0000000e).l */
    c->pc = RC_ADDR(0x0001662eu);
    rc_step(c, m);
    rc_push32(c, m, 0x0000000eu);

L_16632:
    /* 00016632   4  pea (00000015).l */
    c->pc = RC_ADDR(0x00016632u);
    rc_step(c, m);
    rc_push32(c, m, 0x00000015u);

L_16636:
    /* 00016636   4  move.w (12d2,A4),D0 */
    c->pc = RC_ADDR(0x00016636u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x12d2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1663A:
    /* 0001663a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001663au);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1663C:
    /* 0001663c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001663cu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1663E:
    /* 0001663e   4  lea (ffffb3ac,A4),A0 */
    c->pc = RC_ADDR(0x0001663eu);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x4c54u);

L_16642:
    /* 00016642   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00016642u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16646:
    /* 00016646   2  ext.l D1 */
    c->pc = RC_ADDR(0x00016646u);
    rc_step(c, m);
    rc_ext_l(c, 1);

L_16648:
    /* 00016648   2  move.l D1,-(A7) */
    c->pc = RC_ADDR(0x00016648u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1664A:
    /* 0001664a   4  jsr (00016550) */
    c->pc = RC_ADDR(0x0001664au);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001664eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00016550u);
    return;

L_1664E:
    /* 0001664e   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001664eu);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_16652:
    /* 00016652   4  move.w (fffffdb2,A4),-(A7) */
    c->pc = RC_ADDR(0x00016652u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x24eu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_16656:
    /* 00016656   4  pea (000167d4) */
    c->pc = RC_ADDR(0x00016656u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x000167d4u));

L_1665A:
    /* 0001665a   4  pea (ffffffec,A5) */
    c->pc = RC_ADDR(0x0001665au);
    rc_step(c, m);
    rc_push32(c, m, (c->a[5] - 0x14u));

L_1665E:
    /* 0001665e   4  jsr (ffff82d2,A4) */
    c->pc = RC_ADDR(0x0001665eu);
    rc_step(c, m);
    /* vector 120 */
    rc_push32(c, m, RC_ADDR(0x00016662u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d28u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020db6u);
    return;

L_16662:
    /* 00016662   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00016662u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xau);

L_16666:
    /* 00016666   4  move.w #e,-(A7) */
    c->pc = RC_ADDR(0x00016666u);
    rc_step(c, m);
    t0 = 0x0000000eu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1666A:
    /* 0001666a   4  move.w #f,-(A7) */
    c->pc = RC_ADDR(0x0001666au);
    rc_step(c, m);
    t0 = 0x0000000fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1666E:
    /* 0001666e   4  move.w (ffffb3ac,A4),D0 */
    c->pc = RC_ADDR(0x0001666eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4c54u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16672:
    /* 00016672   2  addq.w #2,D0 */
    c->pc = RC_ADDR(0x00016672u);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_16674:
    /* 00016674   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00016674u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_16676:
    /* 00016676   4  pea (ffffffec,A5) */
    c->pc = RC_ADDR(0x00016676u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[5] - 0x14u));

L_1667A:
    /* 0001667a   4  jsr (00016f72) */
    c->pc = RC_ADDR(0x0001667au);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001667eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00016f72u);
    return;

L_1667E:
    /* 0001667e   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001667eu);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xau);

L_16682:
    /* 00016682   4  move.w (fffffdb4,A4),-(A7) */
    c->pc = RC_ADDR(0x00016682u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x24cu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_16686:
    /* 00016686   4  pea (000167d7) */
    c->pc = RC_ADDR(0x00016686u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x000167d7u));

L_1668A:
    /* 0001668a   4  pea (ffffffec,A5) */
    c->pc = RC_ADDR(0x0001668au);
    rc_step(c, m);
    rc_push32(c, m, (c->a[5] - 0x14u));

L_1668E:
    /* 0001668e   4  jsr (ffff82d2,A4) */
    c->pc = RC_ADDR(0x0001668eu);
    rc_step(c, m);
    /* vector 120 */
    rc_push32(c, m, RC_ADDR(0x00016692u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d28u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020db6u);
    return;

L_16692:
    /* 00016692   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00016692u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xau);

L_16696:
    /* 00016696   4  move.w #e,-(A7) */
    c->pc = RC_ADDR(0x00016696u);
    rc_step(c, m);
    t0 = 0x0000000eu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1669A:
    /* 0001669a   4  move.w #f,-(A7) */
    c->pc = RC_ADDR(0x0001669au);
    rc_step(c, m);
    t0 = 0x0000000fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1669E:
    /* 0001669e   4  move.w (ffffb3ae,A4),D0 */
    c->pc = RC_ADDR(0x0001669eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4c52u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_166A2:
    /* 000166a2   2  addq.w #2,D0 */
    c->pc = RC_ADDR(0x000166a2u);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_166A4:
    /* 000166a4   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x000166a4u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_166A6:
    /* 000166a6   4  pea (ffffffec,A5) */
    c->pc = RC_ADDR(0x000166a6u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[5] - 0x14u));

L_166AA:
    /* 000166aa   4  jsr (00016f72) */
    c->pc = RC_ADDR(0x000166aau);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x000166aeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00016f72u);
    return;

L_166AE:
    /* 000166ae   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x000166aeu);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xau);

L_166B2:
    /* 000166b2   6  btst #0,(aeb,A4) */
    c->pc = RC_ADDR(0x000166b2u);
    rc_step(c, m);
    t4 = 0x00000000u;
    t3 = (c->a[4] + 0xaebu);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_166B8:
    /* 000166b8   2  beq 000166ea */
    c->pc = RC_ADDR(0x000166b8u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_166EA;

L_166BA:
    /* 000166ba   4  move.w (1166,A4),-(A7) */
    c->pc = RC_ADDR(0x000166bau);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1166u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_166BE:
    /* 000166be   4  pea (000167da) */
    c->pc = RC_ADDR(0x000166beu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x000167dau));

L_166C2:
    /* 000166c2   4  pea (ffffffec,A5) */
    c->pc = RC_ADDR(0x000166c2u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[5] - 0x14u));

L_166C6:
    /* 000166c6   4  jsr (ffff82d2,A4) */
    c->pc = RC_ADDR(0x000166c6u);
    rc_step(c, m);
    /* vector 120 */
    rc_push32(c, m, RC_ADDR(0x000166cau));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d28u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020db6u);
    return;

L_166CA:
    /* 000166ca   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x000166cau);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xau);

L_166CE:
    /* 000166ce   4  move.w #e,-(A7) */
    c->pc = RC_ADDR(0x000166ceu);
    rc_step(c, m);
    t0 = 0x0000000eu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_166D2:
    /* 000166d2   4  move.w #f,-(A7) */
    c->pc = RC_ADDR(0x000166d2u);
    rc_step(c, m);
    t0 = 0x0000000fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_166D6:
    /* 000166d6   4  move.w (ffffb3b0,A4),D0 */
    c->pc = RC_ADDR(0x000166d6u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4c50u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_166DA:
    /* 000166da   2  addq.w #2,D0 */
    c->pc = RC_ADDR(0x000166dau);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_166DC:
    /* 000166dc   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x000166dcu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_166DE:
    /* 000166de   4  pea (ffffffec,A5) */
    c->pc = RC_ADDR(0x000166deu);
    rc_step(c, m);
    rc_push32(c, m, (c->a[5] - 0x14u));

L_166E2:
    /* 000166e2   4  jsr (00016f72) */
    c->pc = RC_ADDR(0x000166e2u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x000166e6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00016f72u);
    return;

L_166E6:
    /* 000166e6   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x000166e6u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xau);

L_166EA:
    /* 000166ea   6  btst #3,(aeb,A4) */
    c->pc = RC_ADDR(0x000166eau);
    rc_step(c, m);
    t4 = 0x00000003u;
    t3 = (c->a[4] + 0xaebu);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_166F0:
    /* 000166f0   2  beq 00016722 */
    c->pc = RC_ADDR(0x000166f0u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_16722;

L_166F2:
    /* 000166f2   4  move.w (12a8,A4),-(A7) */
    c->pc = RC_ADDR(0x000166f2u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x12a8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_166F6:
    /* 000166f6   4  pea (000167dd) */
    c->pc = RC_ADDR(0x000166f6u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x000167ddu));

L_166FA:
    /* 000166fa   4  pea (ffffffec,A5) */
    c->pc = RC_ADDR(0x000166fau);
    rc_step(c, m);
    rc_push32(c, m, (c->a[5] - 0x14u));

L_166FE:
    /* 000166fe   4  jsr (ffff82d2,A4) */
    c->pc = RC_ADDR(0x000166feu);
    rc_step(c, m);
    /* vector 120 */
    rc_push32(c, m, RC_ADDR(0x00016702u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d28u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020db6u);
    return;

L_16702:
    /* 00016702   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00016702u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xau);

L_16706:
    /* 00016706   4  move.w #e,-(A7) */
    c->pc = RC_ADDR(0x00016706u);
    rc_step(c, m);
    t0 = 0x0000000eu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1670A:
    /* 0001670a   4  move.w #f,-(A7) */
    c->pc = RC_ADDR(0x0001670au);
    rc_step(c, m);
    t0 = 0x0000000fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1670E:
    /* 0001670e   4  move.w (ffffb3b2,A4),D0 */
    c->pc = RC_ADDR(0x0001670eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4c4eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16712:
    /* 00016712   2  addq.w #2,D0 */
    c->pc = RC_ADDR(0x00016712u);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_16714:
    /* 00016714   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00016714u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_16716:
    /* 00016716   4  pea (ffffffec,A5) */
    c->pc = RC_ADDR(0x00016716u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[5] - 0x14u));

L_1671A:
    /* 0001671a   4  jsr (00016f72) */
    c->pc = RC_ADDR(0x0001671au);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001671eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00016f72u);
    return;

L_1671E:
    /* 0001671e   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001671eu);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xau);

L_16722:
    /* 00016722   6  move.w #2,(12d4,A4) */
    c->pc = RC_ADDR(0x00016722u);
    rc_step(c, m);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x12d4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16728:
    /* 00016728   2  bra 0001672e */
    c->pc = RC_ADDR(0x00016728u);
    rc_step(c, m);
    goto L_1672E;

L_1672A:
    /* 0001672a   4  subq.w #1,(12d4,A4) */
    c->pc = RC_ADDR(0x0001672au);
    rc_step(c, m);
    t3 = (c->a[4] + 0x12d4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1672E:
    /* 0001672e   4  tst.w (df8,A4) */
    c->pc = RC_ADDR(0x0001672eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdf8u));
    rc_set_nzvc(c, t0, RC_W);

L_16732:
    /* 00016732   2  bne 0001679c */
    c->pc = RC_ADDR(0x00016732u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_1679C;

L_16734:
    /* 00016734   4  jsr (00016946) */
    c->pc = RC_ADDR(0x00016734u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00016738u));
    rc_depth++;
    c->pc = RC_ADDR(0x00016946u);
    return;

L_16738:
    /* 00016738   4  clr.w (12da,A4) */
    c->pc = RC_ADDR(0x00016738u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] + 0x12dau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1673C:
    /* 0001673c   4  move.w (12d2,A4),D0 */
    c->pc = RC_ADDR(0x0001673cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x12d2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16740:
    /* 00016740   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016740u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_16742:
    /* 00016742   2  bra 0001677a */
    c->pc = RC_ADDR(0x00016742u);
    rc_step(c, m);
    goto L_1677A;

L_16744:
    /* 00016744   6  move.w #1,(fffffdac,A4) */
    c->pc = RC_ADDR(0x00016744u);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x254u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1674A:
    /* 0001674a   4  clr.w (ffffb034,A4) */
    c->pc = RC_ADDR(0x0001674au);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0x4fccu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1674E:
    /* 0001674e   2  bra 00016788 */
    c->pc = RC_ADDR(0x0001674eu);
    rc_step(c, m);
    goto L_16788;

L_16750:
    /* 00016750   6  move.w #2,(fffffdac,A4) */
    c->pc = RC_ADDR(0x00016750u);
    rc_step(c, m);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] - 0x254u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16756:
    /* 00016756   4  clr.w (ffffb034,A4) */
    c->pc = RC_ADDR(0x00016756u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0x4fccu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1675A:
    /* 0001675a   2  bra 00016788 */
    c->pc = RC_ADDR(0x0001675au);
    rc_step(c, m);
    goto L_16788;

L_1675C:
    /* 0001675c   4  tst.w (afa,A4) */
    c->pc = RC_ADDR(0x0001675cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0xafau));
    rc_set_nzvc(c, t0, RC_W);

L_16760:
    /* 00016760   2  bne 0001676e */
    c->pc = RC_ADDR(0x00016760u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_1676E;

L_16762:
    /* 00016762   4  tst.w (1166,A4) */
    c->pc = RC_ADDR(0x00016762u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1166u));
    rc_set_nzvc(c, t0, RC_W);

L_16766:
    /* 00016766   2  beq 0001676e */
    c->pc = RC_ADDR(0x00016766u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1676E;

L_16768:
    /* 00016768   4  jsr (00014884) */
    c->pc = RC_ADDR(0x00016768u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001676cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00014884u);
    return;

L_1676C:
    /* 0001676c   2  bra 00016772 */
    c->pc = RC_ADDR(0x0001676cu);
    rc_step(c, m);
    goto L_16772;

L_1676E:
    /* 0001676e   4  clr.w (ffffb034,A4) */
    c->pc = RC_ADDR(0x0001676eu);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0x4fccu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_16772:
    /* 00016772   2  bra 00016788 */
    c->pc = RC_ADDR(0x00016772u);
    rc_step(c, m);
    goto L_16788;

L_16774:
    /* 00016774   4  clr.w (ffffb034,A4) */
    c->pc = RC_ADDR(0x00016774u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0x4fccu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_16778:
    /* 00016778   2  bra 00016788 */
    c->pc = RC_ADDR(0x00016778u);
    rc_step(c, m);
    goto L_16788;

L_1677A:
    /* 0001677a   2  tst.l D0 */
    c->pc = RC_ADDR(0x0001677au);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_1677C:
    /* 0001677c   2  beq 00016744 */
    c->pc = RC_ADDR(0x0001677cu);
    rc_step(c, m);
    if (rc_cond(c, 7)) { rc_tick(); goto L_16744; }

L_1677E:
    /* 0001677e   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x0001677eu);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_16780:
    /* 00016780   2  beq 00016750 */
    c->pc = RC_ADDR(0x00016780u);
    rc_step(c, m);
    if (rc_cond(c, 7)) { rc_tick(); goto L_16750; }

L_16782:
    /* 00016782   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x00016782u);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_16784:
    /* 00016784   2  beq 0001675c */
    c->pc = RC_ADDR(0x00016784u);
    rc_step(c, m);
    if (rc_cond(c, 7)) { rc_tick(); goto L_1675C; }

L_16786:
    /* 00016786   2  bra 00016774 */
    c->pc = RC_ADDR(0x00016786u);
    rc_step(c, m);
    rc_tick();
    goto L_16774;

L_16788:
    /* 00016788   4  pea (e38,A4) */
    c->pc = RC_ADDR(0x00016788u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] + 0xe38u));

L_1678C:
    /* 0001678c   4  move.l (12c6,A4),-(A7) */
    c->pc = RC_ADDR(0x0001678cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x12c6u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16790:
    /* 00016790   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00016790u);
    rc_step(c, m);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_16792:
    /* 00016792   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00016792u);
    rc_step(c, m);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_16794:
    /* 00016794   4  jsr (ffff8152,A4) */
    c->pc = RC_ADDR(0x00016794u);
    rc_step(c, m);
    /* vector 56 */
    rc_push32(c, m, RC_ADDR(0x00016798u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ba8u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00011130u);
    return;

L_16798:
    /* 00016798   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00016798u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_1679C:
    /* 0001679c   2  bra 000167d0 */
    c->pc = RC_ADDR(0x0001679cu);
    rc_step(c, m);
    goto L_167D0;

L_1679E:
    /* 0001679e   6  cmpi.w #6,(ffffb036,A4) */
    c->pc = RC_ADDR(0x0001679eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fcau));
    rc_cmp(c, RC_W, t0, 0x00000006u);

L_167A4:
    /* 000167a4   2  ble 000167d0 */
    c->pc = RC_ADDR(0x000167a4u);
    rc_step(c, m);
    if (rc_cond(c, 15)) goto L_167D0;

L_167A6:
    /* 000167a6   6  move.w #1,(12dc,A4) */
    c->pc = RC_ADDR(0x000167a6u);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x12dcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_167AC:
    /* 000167ac   6  move.w #1,(ffffb034,A4) */
    c->pc = RC_ADDR(0x000167acu);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x4fccu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_167B2:
    /* 000167b2   6  move.w #1,(12da,A4) */
    c->pc = RC_ADDR(0x000167b2u);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x12dau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_167B8:
    /* 000167b8   4  clr.w (ffffb038,A4) */
    c->pc = RC_ADDR(0x000167b8u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0x4fc8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_167BC:
    /* 000167bc   4  clr.w (ffffb02e,A4) */
    c->pc = RC_ADDR(0x000167bcu);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0x4fd2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_167C0:
    /* 000167c0   4  clr.w (ffffb030,A4) */
    c->pc = RC_ADDR(0x000167c0u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0x4fd0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_167C4:
    /* 000167c4   4  clr.w (ffffb02c,A4) */
    c->pc = RC_ADDR(0x000167c4u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0x4fd4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_167C8:
    /* 000167c8   4  clr.w (ffffb02a,A4) */
    c->pc = RC_ADDR(0x000167c8u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0x4fd6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_167CC:
    /* 000167cc   4  jsr (0001695c) */
    c->pc = RC_ADDR(0x000167ccu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x000167d0u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001695cu);
    return;

L_167D0:
    /* 000167d0   4  bra 00016592 */
    c->pc = RC_ADDR(0x000167d0u);
    rc_step(c, m);
    rc_tick();
    goto L_16592;

}
