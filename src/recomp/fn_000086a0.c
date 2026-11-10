/* fn_000086a0 - 522 byte(s), 143 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000086a0(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case 0x000086a0u: goto L_86A0;
    case 0x000086a4u: goto L_86A4;
    case 0x000086a8u: goto L_86A8;
    case 0x000086acu: goto L_86AC;
    case 0x000086aeu: goto L_86AE;
    case 0x000086b2u: goto L_86B2;
    case 0x000086b6u: goto L_86B6;
    case 0x000086b8u: goto L_86B8;
    case 0x000086bcu: goto L_86BC;
    case 0x000086beu: goto L_86BE;
    case 0x000086c2u: goto L_86C2;
    case 0x000086c6u: goto L_86C6;
    case 0x000086cau: goto L_86CA;
    case 0x000086d2u: goto L_86D2;
    case 0x000086d4u: goto L_86D4;
    case 0x000086d8u: goto L_86D8;
    case 0x000086dcu: goto L_86DC;
    case 0x000086deu: goto L_86DE;
    case 0x000086e2u: goto L_86E2;
    case 0x000086e8u: goto L_86E8;
    case 0x000086ecu: goto L_86EC;
    case 0x000086f0u: goto L_86F0;
    case 0x000086f4u: goto L_86F4;
    case 0x000086f8u: goto L_86F8;
    case 0x000086fcu: goto L_86FC;
    case 0x000086feu: goto L_86FE;
    case 0x00008702u: goto L_8702;
    case 0x00008706u: goto L_8706;
    case 0x0000870au: goto L_870A;
    case 0x0000870eu: goto L_870E;
    case 0x00008712u: goto L_8712;
    case 0x00008714u: goto L_8714;
    case 0x00008718u: goto L_8718;
    case 0x0000871cu: goto L_871C;
    case 0x00008720u: goto L_8720;
    case 0x00008724u: goto L_8724;
    case 0x00008728u: goto L_8728;
    case 0x0000872cu: goto L_872C;
    case 0x00008730u: goto L_8730;
    case 0x00008732u: goto L_8732;
    case 0x00008736u: goto L_8736;
    case 0x00008738u: goto L_8738;
    case 0x0000873cu: goto L_873C;
    case 0x00008740u: goto L_8740;
    case 0x00008744u: goto L_8744;
    case 0x0000874au: goto L_874A;
    case 0x0000874eu: goto L_874E;
    case 0x00008752u: goto L_8752;
    case 0x00008756u: goto L_8756;
    case 0x0000875au: goto L_875A;
    case 0x0000875cu: goto L_875C;
    case 0x00008760u: goto L_8760;
    case 0x00008764u: goto L_8764;
    case 0x00008768u: goto L_8768;
    case 0x0000876au: goto L_876A;
    case 0x0000876cu: goto L_876C;
    case 0x0000876eu: goto L_876E;
    case 0x00008770u: goto L_8770;
    case 0x00008774u: goto L_8774;
    case 0x00008776u: goto L_8776;
    case 0x00008778u: goto L_8778;
    case 0x0000877cu: goto L_877C;
    case 0x00008780u: goto L_8780;
    case 0x00008784u: goto L_8784;
    case 0x00008786u: goto L_8786;
    case 0x00008788u: goto L_8788;
    case 0x0000878cu: goto L_878C;
    case 0x00008790u: goto L_8790;
    case 0x00008792u: goto L_8792;
    case 0x00008794u: goto L_8794;
    case 0x00008798u: goto L_8798;
    case 0x0000879cu: goto L_879C;
    case 0x000087a0u: goto L_87A0;
    case 0x000087a4u: goto L_87A4;
    case 0x000087a8u: goto L_87A8;
    case 0x000087acu: goto L_87AC;
    case 0x000087b0u: goto L_87B0;
    case 0x000087b4u: goto L_87B4;
    case 0x000087b6u: goto L_87B6;
    case 0x000087bau: goto L_87BA;
    case 0x000087beu: goto L_87BE;
    case 0x000087c2u: goto L_87C2;
    case 0x000087c6u: goto L_87C6;
    case 0x000087cau: goto L_87CA;
    case 0x000087ccu: goto L_87CC;
    case 0x000087d0u: goto L_87D0;
    case 0x000087d4u: goto L_87D4;
    case 0x000087d8u: goto L_87D8;
    case 0x000087dcu: goto L_87DC;
    case 0x000087e0u: goto L_87E0;
    case 0x000087e4u: goto L_87E4;
    case 0x000087e6u: goto L_87E6;
    case 0x000087eau: goto L_87EA;
    case 0x000087eeu: goto L_87EE;
    case 0x000087f2u: goto L_87F2;
    case 0x000087f4u: goto L_87F4;
    case 0x000087f8u: goto L_87F8;
    case 0x000087fcu: goto L_87FC;
    case 0x00008800u: goto L_8800;
    case 0x00008804u: goto L_8804;
    case 0x00008808u: goto L_8808;
    case 0x0000880cu: goto L_880C;
    case 0x00008810u: goto L_8810;
    case 0x00008814u: goto L_8814;
    case 0x00008816u: goto L_8816;
    case 0x0000881au: goto L_881A;
    case 0x00008820u: goto L_8820;
    case 0x00008824u: goto L_8824;
    case 0x00008828u: goto L_8828;
    case 0x0000882au: goto L_882A;
    case 0x0000882eu: goto L_882E;
    case 0x00008832u: goto L_8832;
    case 0x00008836u: goto L_8836;
    case 0x0000883au: goto L_883A;
    case 0x0000883eu: goto L_883E;
    case 0x00008842u: goto L_8842;
    case 0x00008846u: goto L_8846;
    case 0x0000884au: goto L_884A;
    case 0x0000884eu: goto L_884E;
    case 0x00008852u: goto L_8852;
    case 0x00008856u: goto L_8856;
    case 0x0000885au: goto L_885A;
    case 0x0000885cu: goto L_885C;
    case 0x00008860u: goto L_8860;
    case 0x00008868u: goto L_8868;
    case 0x0000886cu: goto L_886C;
    case 0x0000886eu: goto L_886E;
    case 0x00008872u: goto L_8872;
    case 0x00008874u: goto L_8874;
    case 0x0000887au: goto L_887A;
    case 0x0000887cu: goto L_887C;
    case 0x00008882u: goto L_8882;
    case 0x00008888u: goto L_8888;
    case 0x0000888au: goto L_888A;
    case 0x0000888eu: goto L_888E;
    case 0x00008892u: goto L_8892;
    case 0x00008894u: goto L_8894;
    case 0x00008898u: goto L_8898;
    case 0x0000889cu: goto L_889C;
    case 0x000088a0u: goto L_88A0;
    case 0x000088a4u: goto L_88A4;
    case 0x000088a6u: goto L_88A6;
    case 0x000088a8u: goto L_88A8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_86A0:
    /* 000086a0   4  link.w A5,#fffffff4 */
    c->pc = 0x000086a0u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xcu;

L_86A4:
    /* 000086a4   4  clr.l (fffffffc,A5) */
    c->pc = 0x000086a4u;
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_86A8:
    /* 000086a8   4  move.l (fffffffc,A5),D0 */
    c->pc = 0x000086a8u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_86AC:
    /* 000086ac   2  asl.l #1,D0 */
    c->pc = 0x000086acu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_86AE:
    /* 000086ae   4  lea (92,A4),A0 */
    c->pc = 0x000086aeu;
    c->a[0] = (c->a[4] + 0x92u);

L_86B2:
    /* 000086b2   4  tst.w (0,A0,D0.w) */
    c->pc = 0x000086b2u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_86B6:
    /* 000086b6   2  beq 000086c6 */
    c->pc = 0x000086b6u;
    if (rc_cond(c, 7)) goto L_86C6;

L_86B8:
    /* 000086b8   4  move.l (fffffffc,A5),D0 */
    c->pc = 0x000086b8u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_86BC:
    /* 000086bc   2  asl.l #1,D0 */
    c->pc = 0x000086bcu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_86BE:
    /* 000086be   4  lea (92,A4),A0 */
    c->pc = 0x000086beu;
    c->a[0] = (c->a[4] + 0x92u);

L_86C2:
    /* 000086c2   4  clr.w (0,A0,D0.w) */
    c->pc = 0x000086c2u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_86C6:
    /* 000086c6   4  addq.l #1,(fffffffc,A5) */
    c->pc = 0x000086c6u;
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_86CA:
    /* 000086ca   8  cmpi.l #3,(fffffffc,A5) */
    c->pc = 0x000086cau;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x00000003u);

L_86D2:
    /* 000086d2   2  blt 000086a8 */
    c->pc = 0x000086d2u;
    if (rc_cond(c, 13)) { rc_tick(); goto L_86A8; }

L_86D4:
    /* 000086d4   4  move.w (268,A4),D0 */
    c->pc = 0x000086d4u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x268u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_86D8:
    /* 000086d8   4  cmp.w (ffff84f8,A4),D0 */
    c->pc = 0x000086d8u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x7b08u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_86DC:
    /* 000086dc   2  bne 000086e8 */
    c->pc = 0x000086dcu;
    if (rc_cond(c, 6)) goto L_86E8;

L_86DE:
    /* 000086de   4  addq.w #1,(268,A4) */
    c->pc = 0x000086deu;
    t3 = (c->a[4] + 0x268u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_86E2:
    /* 000086e2   6  move.w #1,(ffff8d1a,A4) */
    c->pc = 0x000086e2u;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x72e6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_86E8:
    /* 000086e8   4  tst.w (ffffce42,A4) */
    c->pc = 0x000086e8u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x31beu));
    rc_set_nzvc(c, t0, RC_W);

L_86EC:
    /* 000086ec   4  beq 000088a6 */
    c->pc = 0x000086ecu;
    if (rc_cond(c, 7)) goto L_88A6;

L_86F0:
    /* 000086f0   4  clr.w (ffffce42,A4) */
    c->pc = 0x000086f0u;
    rc_wr16(c, m, (c->a[4] - 0x31beu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_86F4:
    /* 000086f4   4  move.w #1,-(A7) */
    c->pc = 0x000086f4u;
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_86F8:
    /* 000086f8   4  jsr (ffff8248,A4) */
    c->pc = 0x000086f8u;
    /* vector 97 */
    rc_push32(c, m, 0x000086fcu);
    rc_depth++;
    c->pc = 0x0001ec06u;
    return;

L_86FC:
    /* 000086fc   2  addq.w #2,A7 */
    c->pc = 0x000086fcu;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_86FE:
    /* 000086fe   4  move.w (268,A4),D0 */
    c->pc = 0x000086feu;
    t0 = rc_rd16(c, m, (c->a[4] + 0x268u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8702:
    /* 00008702   4  cmp.w (ffff84f8,A4),D0 */
    c->pc = 0x00008702u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x7b08u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_8706:
    /* 00008706   4  bge 0000886e */
    c->pc = 0x00008706u;
    if (rc_cond(c, 12)) goto L_886E;

L_870A:
    /* 0000870a   4  clr.l (fffffffc,A5) */
    c->pc = 0x0000870au;
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_870E:
    /* 0000870e   4  move.l (fffffffc,A5),D0 */
    c->pc = 0x0000870eu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_8712:
    /* 00008712   2  asl.l #1,D0 */
    c->pc = 0x00008712u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_8714:
    /* 00008714   4  lea (92,A4),A0 */
    c->pc = 0x00008714u;
    c->a[0] = (c->a[4] + 0x92u);

L_8718:
    /* 00008718   4  tst.w (0,A0,D0.w) */
    c->pc = 0x00008718u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_871C:
    /* 0000871c   4  bne 0000885c */
    c->pc = 0x0000871cu;
    if (rc_cond(c, 6)) goto L_885C;

L_8720:
    /* 00008720   4  move.w (fffffffe,A5),-(A7) */
    c->pc = 0x00008720u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_8724:
    /* 00008724   4  move.l (7c,A4),-(A7) */
    c->pc = 0x00008724u;
    t0 = rc_rd32(c, m, (c->a[4] + 0x7cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_8728:
    /* 00008728   4  move.w #2,-(A7) */
    c->pc = 0x00008728u;
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_872C:
    /* 0000872c   4  jsr (ffff8266,A4) */
    c->pc = 0x0000872cu;
    /* vector 102 */
    rc_push32(c, m, 0x00008730u);
    rc_depth++;
    c->pc = 0x0001f2aeu;
    return;

L_8730:
    /* 00008730   2  addq.w #8,A7 */
    c->pc = 0x00008730u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_8732:
    /* 00008732   4  jsr (ffff8380,A4) */
    c->pc = 0x00008732u;
    /* vector 149 */
    rc_push32(c, m, 0x00008736u);
    rc_depth++;
    c->pc = 0x000218d0u;
    return;

L_8736:
    /* 00008736   2  clr.l -(A7) */
    c->pc = 0x00008736u;
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_8738:
    /* 00008738   4  movea.l (84,A4),A0 */
    c->pc = 0x00008738u;
    t0 = rc_rd32(c, m, (c->a[4] + 0x84u));
    c->a[0] = t0;

L_873C:
    /* 0000873c   4  movea.l (c,A0),A1 */
    c->pc = 0x0000873cu;
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_8740:
    /* 00008740   4  move.l (30,A1),-(A7) */
    c->pc = 0x00008740u;
    t0 = rc_rd32(c, m, (c->a[1] + 0x30u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_8744:
    /* 00008744   6  pea (00043210).l */
    c->pc = 0x00008744u;
    rc_push32(c, m, 0x00043210u);

L_874A:
    /* 0000874a   4  pea (000000ca).l */
    c->pc = 0x0000874au;
    rc_push32(c, m, 0x000000cau);

L_874E:
    /* 0000874e   4  pea (000000c8).l */
    c->pc = 0x0000874eu;
    rc_push32(c, m, 0x000000c8u);

L_8752:
    /* 00008752   4  pea (000000c8).l */
    c->pc = 0x00008752u;
    rc_push32(c, m, 0x000000c8u);

L_8756:
    /* 00008756   4  move.w (8c,A4),D0 */
    c->pc = 0x00008756u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x8cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_875A:
    /* 0000875a   2  ext.l D0 */
    c->pc = 0x0000875au;
    rc_ext_l(c, 0);

L_875C:
    /* 0000875c   4  movea.l (84,A4),A0 */
    c->pc = 0x0000875cu;
    t0 = rc_rd32(c, m, (c->a[4] + 0x84u));
    c->a[0] = t0;

L_8760:
    /* 00008760   4  movea.l (c,A0),A1 */
    c->pc = 0x00008760u;
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_8764:
    /* 00008764   4  move.w (a,A1),D1 */
    c->pc = 0x00008764u;
    t0 = rc_rd16(c, m, (c->a[1] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8768:
    /* 00008768   2  ext.l D1 */
    c->pc = 0x00008768u;
    rc_ext_l(c, 1);

L_876A:
    /* 0000876a   2  sub.l D1,D0 */
    c->pc = 0x0000876au;
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_876C:
    /* 0000876c   2  subq.l #6,D0 */
    c->pc = 0x0000876cu;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000006u;
    rc_flags_sub(c, RC_L, t1, 0x00000006u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_876E:
    /* 0000876e   2  move.l D0,-(A7) */
    c->pc = 0x0000876eu;
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_8770:
    /* 00008770   4  move.w (8a,A4),D0 */
    c->pc = 0x00008770u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x8au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8774:
    /* 00008774   2  ext.l D0 */
    c->pc = 0x00008774u;
    rc_ext_l(c, 0);

L_8776:
    /* 00008776   2  movea.l D0,A0 */
    c->pc = 0x00008776u;
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_8778:
    /* 00008778   4  movea.l (84,A4),A1 */
    c->pc = 0x00008778u;
    t0 = rc_rd32(c, m, (c->a[4] + 0x84u));
    c->a[1] = t0;

L_877C:
    /* 0000877c   4  movea.l (c,A1),A6 */
    c->pc = 0x0000877cu;
    t0 = rc_rd32(c, m, (c->a[1] + 0xcu));
    c->a[6] = t0;

L_8780:
    /* 00008780   4  move.w (8,A6),D0 */
    c->pc = 0x00008780u;
    t0 = rc_rd16(c, m, (c->a[6] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8784:
    /* 00008784   2  ext.l D0 */
    c->pc = 0x00008784u;
    rc_ext_l(c, 0);

L_8786:
    /* 00008786   2  suba.l D0,A0 */
    c->pc = 0x00008786u;
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] -= t0;

L_8788:
    /* 00008788   4  pea (fffffff3,A0) */
    c->pc = 0x00008788u;
    rc_push32(c, m, (c->a[0] - 0xdu));

L_878C:
    /* 0000878c   4  move.l (ffffcbbc,A4),-(A7) */
    c->pc = 0x0000878cu;
    t0 = rc_rd32(c, m, (c->a[4] - 0x3444u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_8790:
    /* 00008790   2  clr.l -(A7) */
    c->pc = 0x00008790u;
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_8792:
    /* 00008792   2  clr.l -(A7) */
    c->pc = 0x00008792u;
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_8794:
    /* 00008794   4  movea.l (84,A4),A0 */
    c->pc = 0x00008794u;
    t0 = rc_rd32(c, m, (c->a[4] + 0x84u));
    c->a[0] = t0;

L_8798:
    /* 00008798   4  movea.l (c,A0),A1 */
    c->pc = 0x00008798u;
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_879C:
    /* 0000879c   4  pea (c,A1) */
    c->pc = 0x0000879cu;
    rc_push32(c, m, (c->a[1] + 0xcu));

L_87A0:
    /* 000087a0   4  jsr (ffff823c,A4) */
    c->pc = 0x000087a0u;
    /* vector 95 */
    rc_push32(c, m, 0x000087a4u);
    rc_depth++;
    c->pc = 0x0001e8c8u;
    return;

L_87A4:
    /* 000087a4   4  lea (30,A7),A7 */
    c->pc = 0x000087a4u;
    c->a[7] = (c->a[7] + 0x30u);

L_87A8:
    /* 000087a8   4  jsr (ffff83aa,A4) */
    c->pc = 0x000087a8u;
    /* vector 156 */
    rc_push32(c, m, 0x000087acu);
    rc_depth++;
    c->pc = 0x00021948u;
    return;

L_87AC:
    /* 000087ac   4  jsr (ffff8362,A4) */
    c->pc = 0x000087acu;
    /* vector 144 */
    rc_push32(c, m, 0x000087b0u);
    rc_depth++;
    c->pc = 0x000217f4u;
    return;

L_87B0:
    /* 000087b0   4  move.l (fffffffc,A5),D0 */
    c->pc = 0x000087b0u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_87B4:
    /* 000087b4   2  asl.l #1,D0 */
    c->pc = 0x000087b4u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_87B6:
    /* 000087b6   4  lea (9c,A4),A0 */
    c->pc = 0x000087b6u;
    c->a[0] = (c->a[4] + 0x9cu);

L_87BA:
    /* 000087ba   4  move.w (8a,A4),D1 */
    c->pc = 0x000087bau;
    t0 = rc_rd16(c, m, (c->a[4] + 0x8au));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_87BE:
    /* 000087be   4  sub.w #1b,D1 */
    c->pc = 0x000087beu;
    t0 = 0x0000001bu;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_87C2:
    /* 000087c2   4  move.w D1,(0,A0,D0.w) */
    c->pc = 0x000087c2u;
    t0 = rc_d_get(c, 1, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_87C6:
    /* 000087c6   4  move.l (fffffffc,A5),D0 */
    c->pc = 0x000087c6u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_87CA:
    /* 000087ca   2  asl.l #1,D0 */
    c->pc = 0x000087cau;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_87CC:
    /* 000087cc   4  lea (a6,A4),A0 */
    c->pc = 0x000087ccu;
    c->a[0] = (c->a[4] + 0xa6u);

L_87D0:
    /* 000087d0   4  move.w (8c,A4),D1 */
    c->pc = 0x000087d0u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x8cu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_87D4:
    /* 000087d4   4  sub.w #3a,D1 */
    c->pc = 0x000087d4u;
    t0 = 0x0000003au;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_87D8:
    /* 000087d8   4  move.w D1,(0,A0,D0.w) */
    c->pc = 0x000087d8u;
    t0 = rc_d_get(c, 1, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_87DC:
    /* 000087dc   4  move.w #7,-(A7) */
    c->pc = 0x000087dcu;
    t0 = 0x00000007u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_87E0:
    /* 000087e0   4  move.l (fffffffc,A5),D0 */
    c->pc = 0x000087e0u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_87E4:
    /* 000087e4   2  asl.l #1,D0 */
    c->pc = 0x000087e4u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_87E6:
    /* 000087e6   4  lea (a6,A4),A0 */
    c->pc = 0x000087e6u;
    c->a[0] = (c->a[4] + 0xa6u);

L_87EA:
    /* 000087ea   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = 0x000087eau;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_87EE:
    /* 000087ee   4  move.l (fffffffc,A5),D0 */
    c->pc = 0x000087eeu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_87F2:
    /* 000087f2   2  asl.l #1,D0 */
    c->pc = 0x000087f2u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_87F4:
    /* 000087f4   4  lea (9c,A4),A0 */
    c->pc = 0x000087f4u;
    c->a[0] = (c->a[4] + 0x9cu);

L_87F8:
    /* 000087f8   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = 0x000087f8u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_87FC:
    /* 000087fc   4  move.w (fffffffe,A5),-(A7) */
    c->pc = 0x000087fcu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_8800:
    /* 00008800   4  move.l (7c,A4),-(A7) */
    c->pc = 0x00008800u;
    t0 = rc_rd32(c, m, (c->a[4] + 0x7cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_8804:
    /* 00008804   4  move.w #1,-(A7) */
    c->pc = 0x00008804u;
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_8808:
    /* 00008808   4  jsr (ffff8272,A4) */
    c->pc = 0x00008808u;
    /* vector 104 */
    rc_push32(c, m, 0x0000880cu);
    rc_depth++;
    c->pc = 0x0001f914u;
    return;

L_880C:
    /* 0000880c   4  lea (e,A7),A7 */
    c->pc = 0x0000880cu;
    c->a[7] = (c->a[7] + 0xeu);

L_8810:
    /* 00008810   4  move.l (fffffffc,A5),D0 */
    c->pc = 0x00008810u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_8814:
    /* 00008814   2  asl.l #1,D0 */
    c->pc = 0x00008814u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_8816:
    /* 00008816   4  lea (92,A4),A0 */
    c->pc = 0x00008816u;
    c->a[0] = (c->a[4] + 0x92u);

L_881A:
    /* 0000881a   6  move.w #1,(0,A0,D0.w) */
    c->pc = 0x0000881au;
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_8820:
    /* 00008820   4  addq.w #1,(268,A4) */
    c->pc = 0x00008820u;
    t3 = (c->a[4] + 0x268u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_8824:
    /* 00008824   4  move.w #40,-(A7) */
    c->pc = 0x00008824u;
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_8828:
    /* 00008828   2  clr.w -(A7) */
    c->pc = 0x00008828u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_882A:
    /* 0000882a   4  move.l (27e,A4),-(A7) */
    c->pc = 0x0000882au;
    t0 = rc_rd32(c, m, (c->a[4] + 0x27eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_882E:
    /* 0000882e   4  move.w (278,A4),-(A7) */
    c->pc = 0x0000882eu;
    t0 = rc_rd16(c, m, (c->a[4] + 0x278u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_8832:
    /* 00008832   4  move.l (272,A4),-(A7) */
    c->pc = 0x00008832u;
    t0 = rc_rd32(c, m, (c->a[4] + 0x272u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_8836:
    /* 00008836   4  jsr (ffff80d4,A4) */
    c->pc = 0x00008836u;
    /* vector 35 */
    rc_push32(c, m, 0x0000883au);
    rc_depth++;
    c->pc = 0x00009c3cu;
    return;

L_883A:
    /* 0000883a   4  lea (e,A7),A7 */
    c->pc = 0x0000883au;
    c->a[7] = (c->a[7] + 0xeu);

L_883E:
    /* 0000883e   4  move.w #40,-(A7) */
    c->pc = 0x0000883eu;
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_8842:
    /* 00008842   4  move.w #1,-(A7) */
    c->pc = 0x00008842u;
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_8846:
    /* 00008846   4  move.l (27e,A4),-(A7) */
    c->pc = 0x00008846u;
    t0 = rc_rd32(c, m, (c->a[4] + 0x27eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_884A:
    /* 0000884a   4  move.w (278,A4),-(A7) */
    c->pc = 0x0000884au;
    t0 = rc_rd16(c, m, (c->a[4] + 0x278u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_884E:
    /* 0000884e   4  move.l (272,A4),-(A7) */
    c->pc = 0x0000884eu;
    t0 = rc_rd32(c, m, (c->a[4] + 0x272u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_8852:
    /* 00008852   4  jsr (ffff80d4,A4) */
    c->pc = 0x00008852u;
    /* vector 35 */
    rc_push32(c, m, 0x00008856u);
    rc_depth++;
    c->pc = 0x00009c3cu;
    return;

L_8856:
    /* 00008856   4  lea (e,A7),A7 */
    c->pc = 0x00008856u;
    c->a[7] = (c->a[7] + 0xeu);

L_885A:
    /* 0000885a   2  bra 0000886c */
    c->pc = 0x0000885au;
    goto L_886C;

L_885C:
    /* 0000885c   4  addq.l #1,(fffffffc,A5) */
    c->pc = 0x0000885cu;
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_8860:
    /* 00008860   8  cmpi.l #3,(fffffffc,A5) */
    c->pc = 0x00008860u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x00000003u);

L_8868:
    /* 00008868   4  blt 0000870e */
    c->pc = 0x00008868u;
    if (rc_cond(c, 13)) { rc_tick(); goto L_870E; }

L_886C:
    /* 0000886c   2  bra 000088a6 */
    c->pc = 0x0000886cu;
    goto L_88A6;

L_886E:
    /* 0000886e   4  tst.w (26c,A4) */
    c->pc = 0x0000886eu;
    t0 = rc_rd16(c, m, (c->a[4] + 0x26cu));
    rc_set_nzvc(c, t0, RC_W);

L_8872:
    /* 00008872   2  bne 000088a6 */
    c->pc = 0x00008872u;
    if (rc_cond(c, 6)) goto L_88A6;

L_8874:
    /* 00008874   6  cmpi.w #2,(fffff100,A4) */
    c->pc = 0x00008874u;
    t0 = rc_rd16(c, m, (c->a[4] - 0xf00u));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_887A:
    /* 0000887a   2  beq 000088a6 */
    c->pc = 0x0000887au;
    if (rc_cond(c, 7)) goto L_88A6;

L_887C:
    /* 0000887c   6  move.w #1,(26c,A4) */
    c->pc = 0x0000887cu;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x26cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_8882:
    /* 00008882   6  cmpi.w #c,(c2,A4) */
    c->pc = 0x00008882u;
    t0 = rc_rd16(c, m, (c->a[4] + 0xc2u));
    rc_cmp(c, RC_W, t0, 0x0000000cu);

L_8888:
    /* 00008888   2  bne 00008894 */
    c->pc = 0x00008888u;
    if (rc_cond(c, 6)) goto L_8894;

L_888A:
    /* 0000888a   4  lea (000088aa),A0 */
    c->pc = 0x0000888au;
    c->a[0] = 0x000088aau;

L_888E:
    /* 0000888e   4  move.l A0,(fffffff4,A5) */
    c->pc = 0x0000888eu;
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_8892:
    /* 00008892   2  bra 0000889c */
    c->pc = 0x00008892u;
    goto L_889C;

L_8894:
    /* 00008894   4  lea (000088da),A0 */
    c->pc = 0x00008894u;
    c->a[0] = 0x000088dau;

L_8898:
    /* 00008898   4  move.l A0,(fffffff4,A5) */
    c->pc = 0x00008898u;
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_889C:
    /* 0000889c   4  move.l (fffffff4,A5),-(A7) */
    c->pc = 0x0000889cu;
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_88A0:
    /* 000088a0   4  jsr (00008ba6) */
    c->pc = 0x000088a0u;
    rc_push32(c, m, 0x000088a4u);
    rc_depth++;
    c->pc = 0x00008ba6u;
    return;

L_88A4:
    /* 000088a4   2  addq.w #4,A7 */
    c->pc = 0x000088a4u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_88A6:
    /* 000088a6   2  unlk A5 */
    c->pc = 0x000088a6u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_88A8:
    /* 000088a8   2  rts */
    c->pc = 0x000088a8u;
    rc_ret(c, m);
    return;

}
