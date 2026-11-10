/* fn_0002069c - 336 byte(s), 90 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0002069c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0002069cu): goto L_2069C;
    case RC_ADDR(0x000206a0u): goto L_206A0;
    case RC_ADDR(0x000206a4u): goto L_206A4;
    case RC_ADDR(0x000206a8u): goto L_206A8;
    case RC_ADDR(0x000206acu): goto L_206AC;
    case RC_ADDR(0x000206b0u): goto L_206B0;
    case RC_ADDR(0x000206b4u): goto L_206B4;
    case RC_ADDR(0x000206b8u): goto L_206B8;
    case RC_ADDR(0x000206bcu): goto L_206BC;
    case RC_ADDR(0x000206c0u): goto L_206C0;
    case RC_ADDR(0x000206c4u): goto L_206C4;
    case RC_ADDR(0x000206c8u): goto L_206C8;
    case RC_ADDR(0x000206ccu): goto L_206CC;
    case RC_ADDR(0x000206ceu): goto L_206CE;
    case RC_ADDR(0x000206d0u): goto L_206D0;
    case RC_ADDR(0x000206d4u): goto L_206D4;
    case RC_ADDR(0x000206d8u): goto L_206D8;
    case RC_ADDR(0x000206dcu): goto L_206DC;
    case RC_ADDR(0x000206e0u): goto L_206E0;
    case RC_ADDR(0x000206e6u): goto L_206E6;
    case RC_ADDR(0x000206eau): goto L_206EA;
    case RC_ADDR(0x000206eeu): goto L_206EE;
    case RC_ADDR(0x000206f0u): goto L_206F0;
    case RC_ADDR(0x000206f4u): goto L_206F4;
    case RC_ADDR(0x000206f8u): goto L_206F8;
    case RC_ADDR(0x000206fcu): goto L_206FC;
    case RC_ADDR(0x00020702u): goto L_20702;
    case RC_ADDR(0x00020706u): goto L_20706;
    case RC_ADDR(0x0002070au): goto L_2070A;
    case RC_ADDR(0x0002070eu): goto L_2070E;
    case RC_ADDR(0x00020712u): goto L_20712;
    case RC_ADDR(0x00020716u): goto L_20716;
    case RC_ADDR(0x0002071au): goto L_2071A;
    case RC_ADDR(0x0002071eu): goto L_2071E;
    case RC_ADDR(0x00020722u): goto L_20722;
    case RC_ADDR(0x00020726u): goto L_20726;
    case RC_ADDR(0x0002072au): goto L_2072A;
    case RC_ADDR(0x0002072cu): goto L_2072C;
    case RC_ADDR(0x00020730u): goto L_20730;
    case RC_ADDR(0x00020734u): goto L_20734;
    case RC_ADDR(0x00020738u): goto L_20738;
    case RC_ADDR(0x0002073cu): goto L_2073C;
    case RC_ADDR(0x0002073eu): goto L_2073E;
    case RC_ADDR(0x00020742u): goto L_20742;
    case RC_ADDR(0x00020744u): goto L_20744;
    case RC_ADDR(0x00020748u): goto L_20748;
    case RC_ADDR(0x0002074cu): goto L_2074C;
    case RC_ADDR(0x0002074eu): goto L_2074E;
    case RC_ADDR(0x00020752u): goto L_20752;
    case RC_ADDR(0x00020754u): goto L_20754;
    case RC_ADDR(0x00020758u): goto L_20758;
    case RC_ADDR(0x0002075cu): goto L_2075C;
    case RC_ADDR(0x00020760u): goto L_20760;
    case RC_ADDR(0x00020764u): goto L_20764;
    case RC_ADDR(0x00020766u): goto L_20766;
    case RC_ADDR(0x0002076au): goto L_2076A;
    case RC_ADDR(0x0002076cu): goto L_2076C;
    case RC_ADDR(0x00020770u): goto L_20770;
    case RC_ADDR(0x00020772u): goto L_20772;
    case RC_ADDR(0x00020774u): goto L_20774;
    case RC_ADDR(0x00020778u): goto L_20778;
    case RC_ADDR(0x0002077cu): goto L_2077C;
    case RC_ADDR(0x0002077eu): goto L_2077E;
    case RC_ADDR(0x00020782u): goto L_20782;
    case RC_ADDR(0x00020784u): goto L_20784;
    case RC_ADDR(0x00020786u): goto L_20786;
    case RC_ADDR(0x00020788u): goto L_20788;
    case RC_ADDR(0x0002078au): goto L_2078A;
    case RC_ADDR(0x0002078eu): goto L_2078E;
    case RC_ADDR(0x00020792u): goto L_20792;
    case RC_ADDR(0x00020796u): goto L_20796;
    case RC_ADDR(0x0002079au): goto L_2079A;
    case RC_ADDR(0x0002079eu): goto L_2079E;
    case RC_ADDR(0x000207a4u): goto L_207A4;
    case RC_ADDR(0x000207a6u): goto L_207A6;
    case RC_ADDR(0x000207acu): goto L_207AC;
    case RC_ADDR(0x000207b0u): goto L_207B0;
    case RC_ADDR(0x000207b6u): goto L_207B6;
    case RC_ADDR(0x000207bau): goto L_207BA;
    case RC_ADDR(0x000207beu): goto L_207BE;
    case RC_ADDR(0x000207c2u): goto L_207C2;
    case RC_ADDR(0x000207c6u): goto L_207C6;
    case RC_ADDR(0x000207ccu): goto L_207CC;
    case RC_ADDR(0x000207d0u): goto L_207D0;
    case RC_ADDR(0x000207d4u): goto L_207D4;
    case RC_ADDR(0x000207dau): goto L_207DA;
    case RC_ADDR(0x000207deu): goto L_207DE;
    case RC_ADDR(0x000207e2u): goto L_207E2;
    case RC_ADDR(0x000207e6u): goto L_207E6;
    case RC_ADDR(0x000207e8u): goto L_207E8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2069C:
    /* 0002069c   4  movem.l { D0 D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 A7 },-(SP) */
    c->pc = RC_ADDR(0x0002069cu);
    rc_step(c, m);
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

L_206A0:
    /* 000206a0   4  pea (00000001).l */
    c->pc = RC_ADDR(0x000206a0u);
    rc_step(c, m);
    rc_push32(c, m, 0x00000001u);

L_206A4:
    /* 000206a4   4  pea (fffffffc,A5) */
    c->pc = RC_ADDR(0x000206a4u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[5] - 0x4u));

L_206A8:
    /* 000206a8   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000206a8u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_206AC:
    /* 000206ac   4  jsr (ffff8314,A4) */
    c->pc = RC_ADDR(0x000206acu);
    rc_step(c, m);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x000206b0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d6au);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021472u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021476u);
    return;

L_206B0:
    /* 000206b0   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000206b0u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_206B4:
    /* 000206b4   4  pea (00000004).l */
    c->pc = RC_ADDR(0x000206b4u);
    rc_step(c, m);
    rc_push32(c, m, 0x00000004u);

L_206B8:
    /* 000206b8   4  pea (3ae0,A4) */
    c->pc = RC_ADDR(0x000206b8u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] + 0x3ae0u));

L_206BC:
    /* 000206bc   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000206bcu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_206C0:
    /* 000206c0   4  jsr (ffff8314,A4) */
    c->pc = RC_ADDR(0x000206c0u);
    rc_step(c, m);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x000206c4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d6au);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021472u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021476u);
    return;

L_206C4:
    /* 000206c4   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000206c4u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_206C8:
    /* 000206c8   4  move.l (3adc,A4),D0 */
    c->pc = RC_ADDR(0x000206c8u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3adcu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_206CC:
    /* 000206cc   2  subq.l #7,D0 */
    c->pc = RC_ADDR(0x000206ccu);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000007u;
    rc_flags_sub(c, RC_L, t1, 0x00000007u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_206CE:
    /* 000206ce   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x000206ceu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_206D0:
    /* 000206d0   4  move.l (3ae4,A4),-(A7) */
    c->pc = RC_ADDR(0x000206d0u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3ae4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_206D4:
    /* 000206d4   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000206d4u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_206D8:
    /* 000206d8   4  jsr (ffff8314,A4) */
    c->pc = RC_ADDR(0x000206d8u);
    rc_step(c, m);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x000206dcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d6au);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021472u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021476u);
    return;

L_206DC:
    /* 000206dc   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000206dcu);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_206E0:
    /* 000206e0   6  pea (00010001).l */
    c->pc = RC_ADDR(0x000206e0u);
    rc_step(c, m);
    rc_push32(c, m, 0x00010001u);

L_206E6:
    /* 000206e6   4  move.l (3ae0,A4),-(A7) */
    c->pc = RC_ADDR(0x000206e6u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3ae0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_206EA:
    /* 000206ea   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x000206eau);
    rc_step(c, m);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x000206eeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d8eu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002168cu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021690u);
    return;

L_206EE:
    /* 000206ee   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000206eeu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_206F0:
    /* 000206f0   4  move.l D0,(ffffcd26,A4) */
    c->pc = RC_ADDR(0x000206f0u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x32dau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_206F4:
    /* 000206f4   4  move.l D0,(2a82,A4) */
    c->pc = RC_ADDR(0x000206f4u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x2a82u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_206F8:
    /* 000206f8   4  jsr (00020518) */
    c->pc = RC_ADDR(0x000206f8u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x000206fcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00020518u);
    return;

L_206FC:
    /* 000206fc   6  move.w #1,(3aee,A4) */
    c->pc = RC_ADDR(0x000206fcu);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x3aeeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20702:
    /* 00020702   4  clr.w (3ad6,A4) */
    c->pc = RC_ADDR(0x00020702u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] + 0x3ad6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_20706:
    /* 00020706   4  clr.l (3ad8,A4) */
    c->pc = RC_ADDR(0x00020706u);
    rc_step(c, m);
    rc_wr32(c, m, (c->a[4] + 0x3ad8u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_2070A:
    /* 0002070a   4  tst.w (3aee,A4) */
    c->pc = RC_ADDR(0x0002070au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3aeeu));
    rc_set_nzvc(c, t0, RC_W);

L_2070E:
    /* 0002070e   4  beq 000207c2 */
    c->pc = RC_ADDR(0x0002070eu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_207C2;

L_20712:
    /* 00020712   4  bsr 00020592 */
    c->pc = RC_ADDR(0x00020712u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00020716u));
    rc_depth++;
    c->pc = RC_ADDR(0x00020592u);
    return;

L_20716:
    /* 00020716   4  move.w D0,(2b2a,A4) */
    c->pc = RC_ADDR(0x00020716u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x2b2au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2071A:
    /* 0002071a   4  cmp.w (2b1e,A4),D0 */
    c->pc = RC_ADDR(0x0002071au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2b1eu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_2071E:
    /* 0002071e   4  beq 000207c2 */
    c->pc = RC_ADDR(0x0002071eu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_207C2;

L_20722:
    /* 00020722   4  move.b D0,(3aec,A4) */
    c->pc = RC_ADDR(0x00020722u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_B);
    rc_wr8(c, m, (c->a[4] + 0x3aecu), t0);
    rc_set_nzvc(c, t0, RC_B);

L_20726:
    /* 00020726   4  movea.l (2a82,A4),A0 */
    c->pc = RC_ADDR(0x00020726u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2a82u));
    c->a[0] = t0;

L_2072A:
    /* 0002072a   2  move.b D0,(A0)+ */
    c->pc = RC_ADDR(0x0002072au);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_B);
    t3 = c->a[0];
    c->a[0] += 1u;
    rc_wr8(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_B);

L_2072C:
    /* 0002072c   4  move.l A0,(2a82,A4) */
    c->pc = RC_ADDR(0x0002072cu);
    rc_step(c, m);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x2a82u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_20730:
    /* 00020730   4  bsr 00020592 */
    c->pc = RC_ADDR(0x00020730u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00020734u));
    rc_depth++;
    c->pc = RC_ADDR(0x00020592u);
    return;

L_20734:
    /* 00020734   4  move.w D0,(2b2c,A4) */
    c->pc = RC_ADDR(0x00020734u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x2b2cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20738:
    /* 00020738   4  cmp.w (2b22,A4),D0 */
    c->pc = RC_ADDR(0x00020738u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2b22u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_2073C:
    /* 0002073c   2  beq 000207ba */
    c->pc = RC_ADDR(0x0002073cu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_207BA;

L_2073E:
    /* 0002073e   4  cmp.w (2b1e,A4),D0 */
    c->pc = RC_ADDR(0x0002073eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2b1eu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_20742:
    /* 00020742   2  beq 000207c2 */
    c->pc = RC_ADDR(0x00020742u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_207C2;

L_20744:
    /* 00020744   4  lea (2b36,A4),A0 */
    c->pc = RC_ADDR(0x00020744u);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0x2b36u);

L_20748:
    /* 00020748   4  cmp.w (2b24,A4),D0 */
    c->pc = RC_ADDR(0x00020748u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2b24u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_2074C:
    /* 0002074c   2  blt 00020758 */
    c->pc = RC_ADDR(0x0002074cu);
    rc_step(c, m);
    if (rc_cond(c, 13)) goto L_20758;

L_2074E:
    /* 0002074e   4  move.b (3aec,A4),(A0) */
    c->pc = RC_ADDR(0x0002074eu);
    rc_step(c, m);
    t0 = rc_rd8(c, m, (c->a[4] + 0x3aecu));
    rc_wr8(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_B);

L_20752:
    /* 00020752   2  addq.l #1,A0 */
    c->pc = RC_ADDR(0x00020752u);
    rc_step(c, m);
    c->a[0] += 0x00000001u;

L_20754:
    /* 00020754   4  move.w (2b2a,A4),D0 */
    c->pc = RC_ADDR(0x00020754u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2b2au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20758:
    /* 00020758   4  movea.l (2b2e,A4),A1 */
    c->pc = RC_ADDR(0x00020758u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2b2eu));
    c->a[1] = t0;

L_2075C:
    /* 0002075c   4  movea.l (2b26,A4),A2 */
    c->pc = RC_ADDR(0x0002075cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2b26u));
    c->a[2] = t0;

L_20760:
    /* 00020760   4  cmpi.w #ff,D0 */
    c->pc = RC_ADDR(0x00020760u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t0, 0x000000ffu);

L_20764:
    /* 00020764   2  ble 00020772 */
    c->pc = RC_ADDR(0x00020764u);
    rc_step(c, m);
    if (rc_cond(c, 15)) goto L_20772;

L_20766:
    /* 00020766   4  move.b (0,A1,D0.w),(A0)+ */
    c->pc = RC_ADDR(0x00020766u);
    rc_step(c, m);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[1] + 0x0u + t4));
    t3 = c->a[0];
    c->a[0] += 1u;
    rc_wr8(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_B);

L_2076A:
    /* 0002076a   2  lsl.w #1,D0 */
    c->pc = RC_ADDR(0x0002076au);
    rc_step(c, m);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_2076C:
    /* 0002076c   4  move.w (0,A2,D0.w),D0 */
    c->pc = RC_ADDR(0x0002076cu);
    rc_step(c, m);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (c->a[2] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20770:
    /* 00020770   2  bra 00020760 */
    c->pc = RC_ADDR(0x00020770u);
    rc_step(c, m);
    rc_tick();
    goto L_20760;

L_20772:
    /* 00020772   2  move.b D0,(A0) */
    c->pc = RC_ADDR(0x00020772u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_B);
    rc_wr8(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_B);

L_20774:
    /* 00020774   4  move.b (A0),(3aec,A4) */
    c->pc = RC_ADDR(0x00020774u);
    rc_step(c, m);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_wr8(c, m, (c->a[4] + 0x3aecu), t0);
    rc_set_nzvc(c, t0, RC_B);

L_20778:
    /* 00020778   4  movea.l (2a82,A4),A1 */
    c->pc = RC_ADDR(0x00020778u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2a82u));
    c->a[1] = t0;

L_2077C:
    /* 0002077c   2  move.l A0,D0 */
    c->pc = RC_ADDR(0x0002077cu);
    rc_step(c, m);
    t0 = rc_a_get(c, 0, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_2077E:
    /* 0002077e   4  lea (2b36,A4),A2 */
    c->pc = RC_ADDR(0x0002077eu);
    rc_step(c, m);
    c->a[2] = (c->a[4] + 0x2b36u);

L_20782:
    /* 00020782   2  sub.l A2,D0 */
    c->pc = RC_ADDR(0x00020782u);
    rc_step(c, m);
    t0 = rc_a_get(c, 2, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_20784:
    /* 00020784   2  bmi 0002078e */
    c->pc = RC_ADDR(0x00020784u);
    rc_step(c, m);
    if (rc_cond(c, 11)) goto L_2078E;

L_20786:
    /* 00020786   2  move.b (A0),(A1)+ */
    c->pc = RC_ADDR(0x00020786u);
    rc_step(c, m);
    t0 = rc_rd8(c, m, c->a[0]);
    t3 = c->a[1];
    c->a[1] += 1u;
    rc_wr8(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_B);

L_20788:
    /* 00020788   2  subq.l #1,A0 */
    c->pc = RC_ADDR(0x00020788u);
    rc_step(c, m);
    c->a[0] -= 0x00000001u;

L_2078A:
    /* 0002078a   4  dbf D0,00020786 */
    c->pc = RC_ADDR(0x0002078au);
    rc_step(c, m);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_20786; }
    }

L_2078E:
    /* 0002078e   4  move.l A1,(2a82,A4) */
    c->pc = RC_ADDR(0x0002078eu);
    rc_step(c, m);
    t0 = rc_a_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x2a82u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_20792:
    /* 00020792   4  movea.l (2b26,A4),A0 */
    c->pc = RC_ADDR(0x00020792u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2b26u));
    c->a[0] = t0;

L_20796:
    /* 00020796   4  movea.l (2b2e,A4),A1 */
    c->pc = RC_ADDR(0x00020796u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2b2eu));
    c->a[1] = t0;

L_2079A:
    /* 0002079a   4  move.w (2b24,A4),D0 */
    c->pc = RC_ADDR(0x0002079au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2b24u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2079E:
    /* 0002079e   6  move.b (3aec,A4),(0,A1,D0.w) */
    c->pc = RC_ADDR(0x0002079eu);
    rc_step(c, m);
    t0 = rc_rd8(c, m, (c->a[4] + 0x3aecu));
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr8(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_207A4:
    /* 000207a4   2  lsl.w #1,D0 */
    c->pc = RC_ADDR(0x000207a4u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_207A6:
    /* 000207a6   6  move.w (2b2a,A4),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000207a6u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2b2au));
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_207AC:
    /* 000207ac   4  addq.w #1,(2b24,A4) */
    c->pc = RC_ADDR(0x000207acu);
    rc_step(c, m);
    t3 = (c->a[4] + 0x2b24u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_207B0:
    /* 000207b0   6  move.w (2b2c,A4),(2b2a,A4) */
    c->pc = RC_ADDR(0x000207b0u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2b2cu));
    rc_wr16(c, m, (c->a[4] + 0x2b2au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_207B6:
    /* 000207b6   4  bra 00020730 */
    c->pc = RC_ADDR(0x000207b6u);
    rc_step(c, m);
    rc_tick();
    goto L_20730;

L_207BA:
    /* 000207ba   4  bsr 0002054c */
    c->pc = RC_ADDR(0x000207bau);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x000207beu));
    rc_depth++;
    c->pc = RC_ADDR(0x0002054cu);
    return;

L_207BE:
    /* 000207be   4  bra 0002070a */
    c->pc = RC_ADDR(0x000207beu);
    rc_step(c, m);
    rc_tick();
    goto L_2070A;

L_207C2:
    /* 000207c2   4  movem.l (SP)+,{ D0 D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 A7 } */
    c->pc = RC_ADDR(0x000207c2u);
    rc_step(c, m);
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

L_207C6:
    /* 000207c6   6  move.l (ffffcd26,A4),(2a82,A4) */
    c->pc = RC_ADDR(0x000207c6u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x32dau));
    rc_wr32(c, m, (c->a[4] + 0x2a82u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_207CC:
    /* 000207cc   4  movea.l (2a82,A4),A0 */
    c->pc = RC_ADDR(0x000207ccu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2a82u));
    c->a[0] = t0;

L_207D0:
    /* 000207d0   4  adda.l (3ae0,A4),A0 */
    c->pc = RC_ADDR(0x000207d0u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3ae0u));
    c->a[0] += t0;

L_207D4:
    /* 000207d4   6  move.b (fffffffc,A5),(ffffffff,A0) */
    c->pc = RC_ADDR(0x000207d4u);
    rc_step(c, m);
    t0 = rc_rd8(c, m, (c->a[5] - 0x4u));
    rc_wr8(c, m, (c->a[0] - 0x1u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_207DA:
    /* 000207da   4  move.l (3adc,A4),-(A7) */
    c->pc = RC_ADDR(0x000207dau);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3adcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_207DE:
    /* 000207de   4  move.l (3ae8,A4),-(A7) */
    c->pc = RC_ADDR(0x000207deu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3ae8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_207E2:
    /* 000207e2   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x000207e2u);
    rc_step(c, m);
    /* vector 139 */
    rc_push32(c, m, RC_ADDR(0x000207e6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d9au);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000216ccu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000216d0u);
    return;

L_207E6:
    /* 000207e6   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000207e6u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_207E8:
    /* 000207e8   4  bra 00020698 */
    c->pc = RC_ADDR(0x000207e8u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020698u);
    return;

}
