/* fn_0000f8a8 - 644 byte(s), 169 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000f8a8(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000f8a8u): goto L_F8A8;
    case RC_ADDR(0x0000f8acu): goto L_F8AC;
    case RC_ADDR(0x0000f8aeu): goto L_F8AE;
    case RC_ADDR(0x0000f8b0u): goto L_F8B0;
    case RC_ADDR(0x0000f8b2u): goto L_F8B2;
    case RC_ADDR(0x0000f8b6u): goto L_F8B6;
    case RC_ADDR(0x0000f8b8u): goto L_F8B8;
    case RC_ADDR(0x0000f8bcu): goto L_F8BC;
    case RC_ADDR(0x0000f8c0u): goto L_F8C0;
    case RC_ADDR(0x0000f8c4u): goto L_F8C4;
    case RC_ADDR(0x0000f8c8u): goto L_F8C8;
    case RC_ADDR(0x0000f8ccu): goto L_F8CC;
    case RC_ADDR(0x0000f8d0u): goto L_F8D0;
    case RC_ADDR(0x0000f8d4u): goto L_F8D4;
    case RC_ADDR(0x0000f8d6u): goto L_F8D6;
    case RC_ADDR(0x0000f8dau): goto L_F8DA;
    case RC_ADDR(0x0000f8dcu): goto L_F8DC;
    case RC_ADDR(0x0000f8deu): goto L_F8DE;
    case RC_ADDR(0x0000f8e2u): goto L_F8E2;
    case RC_ADDR(0x0000f8e4u): goto L_F8E4;
    case RC_ADDR(0x0000f8e6u): goto L_F8E6;
    case RC_ADDR(0x0000f8e8u): goto L_F8E8;
    case RC_ADDR(0x0000f8eau): goto L_F8EA;
    case RC_ADDR(0x0000f8ecu): goto L_F8EC;
    case RC_ADDR(0x0000f8f0u): goto L_F8F0;
    case RC_ADDR(0x0000f8f4u): goto L_F8F4;
    case RC_ADDR(0x0000f8f6u): goto L_F8F6;
    case RC_ADDR(0x0000f8f8u): goto L_F8F8;
    case RC_ADDR(0x0000f8fau): goto L_F8FA;
    case RC_ADDR(0x0000f8fcu): goto L_F8FC;
    case RC_ADDR(0x0000f8feu): goto L_F8FE;
    case RC_ADDR(0x0000f900u): goto L_F900;
    case RC_ADDR(0x0000f904u): goto L_F904;
    case RC_ADDR(0x0000f906u): goto L_F906;
    case RC_ADDR(0x0000f908u): goto L_F908;
    case RC_ADDR(0x0000f90au): goto L_F90A;
    case RC_ADDR(0x0000f90cu): goto L_F90C;
    case RC_ADDR(0x0000f910u): goto L_F910;
    case RC_ADDR(0x0000f912u): goto L_F912;
    case RC_ADDR(0x0000f916u): goto L_F916;
    case RC_ADDR(0x0000f918u): goto L_F918;
    case RC_ADDR(0x0000f91au): goto L_F91A;
    case RC_ADDR(0x0000f920u): goto L_F920;
    case RC_ADDR(0x0000f924u): goto L_F924;
    case RC_ADDR(0x0000f926u): goto L_F926;
    case RC_ADDR(0x0000f92au): goto L_F92A;
    case RC_ADDR(0x0000f92eu): goto L_F92E;
    case RC_ADDR(0x0000f930u): goto L_F930;
    case RC_ADDR(0x0000f932u): goto L_F932;
    case RC_ADDR(0x0000f934u): goto L_F934;
    case RC_ADDR(0x0000f938u): goto L_F938;
    case RC_ADDR(0x0000f93au): goto L_F93A;
    case RC_ADDR(0x0000f93cu): goto L_F93C;
    case RC_ADDR(0x0000f940u): goto L_F940;
    case RC_ADDR(0x0000f942u): goto L_F942;
    case RC_ADDR(0x0000f944u): goto L_F944;
    case RC_ADDR(0x0000f946u): goto L_F946;
    case RC_ADDR(0x0000f948u): goto L_F948;
    case RC_ADDR(0x0000f94au): goto L_F94A;
    case RC_ADDR(0x0000f94eu): goto L_F94E;
    case RC_ADDR(0x0000f950u): goto L_F950;
    case RC_ADDR(0x0000f958u): goto L_F958;
    case RC_ADDR(0x0000f95au): goto L_F95A;
    case RC_ADDR(0x0000f95cu): goto L_F95C;
    case RC_ADDR(0x0000f960u): goto L_F960;
    case RC_ADDR(0x0000f962u): goto L_F962;
    case RC_ADDR(0x0000f968u): goto L_F968;
    case RC_ADDR(0x0000f96eu): goto L_F96E;
    case RC_ADDR(0x0000f974u): goto L_F974;
    case RC_ADDR(0x0000f97cu): goto L_F97C;
    case RC_ADDR(0x0000f980u): goto L_F980;
    case RC_ADDR(0x0000f982u): goto L_F982;
    case RC_ADDR(0x0000f984u): goto L_F984;
    case RC_ADDR(0x0000f986u): goto L_F986;
    case RC_ADDR(0x0000f988u): goto L_F988;
    case RC_ADDR(0x0000f98au): goto L_F98A;
    case RC_ADDR(0x0000f98eu): goto L_F98E;
    case RC_ADDR(0x0000f990u): goto L_F990;
    case RC_ADDR(0x0000f992u): goto L_F992;
    case RC_ADDR(0x0000f996u): goto L_F996;
    case RC_ADDR(0x0000f99au): goto L_F99A;
    case RC_ADDR(0x0000f99cu): goto L_F99C;
    case RC_ADDR(0x0000f99eu): goto L_F99E;
    case RC_ADDR(0x0000f9a6u): goto L_F9A6;
    case RC_ADDR(0x0000f9aeu): goto L_F9AE;
    case RC_ADDR(0x0000f9b2u): goto L_F9B2;
    case RC_ADDR(0x0000f9b4u): goto L_F9B4;
    case RC_ADDR(0x0000f9b6u): goto L_F9B6;
    case RC_ADDR(0x0000f9bcu): goto L_F9BC;
    case RC_ADDR(0x0000f9beu): goto L_F9BE;
    case RC_ADDR(0x0000f9c0u): goto L_F9C0;
    case RC_ADDR(0x0000f9c6u): goto L_F9C6;
    case RC_ADDR(0x0000f9c8u): goto L_F9C8;
    case RC_ADDR(0x0000f9cau): goto L_F9CA;
    case RC_ADDR(0x0000f9d0u): goto L_F9D0;
    case RC_ADDR(0x0000f9d8u): goto L_F9D8;
    case RC_ADDR(0x0000f9e0u): goto L_F9E0;
    case RC_ADDR(0x0000f9e8u): goto L_F9E8;
    case RC_ADDR(0x0000f9eeu): goto L_F9EE;
    case RC_ADDR(0x0000f9f6u): goto L_F9F6;
    case RC_ADDR(0x0000f9f8u): goto L_F9F8;
    case RC_ADDR(0x0000fa00u): goto L_FA00;
    case RC_ADDR(0x0000fa08u): goto L_FA08;
    case RC_ADDR(0x0000fa0au): goto L_FA0A;
    case RC_ADDR(0x0000fa0cu): goto L_FA0C;
    case RC_ADDR(0x0000fa12u): goto L_FA12;
    case RC_ADDR(0x0000fa14u): goto L_FA14;
    case RC_ADDR(0x0000fa16u): goto L_FA16;
    case RC_ADDR(0x0000fa1cu): goto L_FA1C;
    case RC_ADDR(0x0000fa24u): goto L_FA24;
    case RC_ADDR(0x0000fa2au): goto L_FA2A;
    case RC_ADDR(0x0000fa32u): goto L_FA32;
    case RC_ADDR(0x0000fa34u): goto L_FA34;
    case RC_ADDR(0x0000fa3au): goto L_FA3A;
    case RC_ADDR(0x0000fa42u): goto L_FA42;
    case RC_ADDR(0x0000fa4au): goto L_FA4A;
    case RC_ADDR(0x0000fa52u): goto L_FA52;
    case RC_ADDR(0x0000fa5au): goto L_FA5A;
    case RC_ADDR(0x0000fa5eu): goto L_FA5E;
    case RC_ADDR(0x0000fa60u): goto L_FA60;
    case RC_ADDR(0x0000fa62u): goto L_FA62;
    case RC_ADDR(0x0000fa66u): goto L_FA66;
    case RC_ADDR(0x0000fa6cu): goto L_FA6C;
    case RC_ADDR(0x0000fa74u): goto L_FA74;
    case RC_ADDR(0x0000fa7au): goto L_FA7A;
    case RC_ADDR(0x0000fa82u): goto L_FA82;
    case RC_ADDR(0x0000fa84u): goto L_FA84;
    case RC_ADDR(0x0000fa8cu): goto L_FA8C;
    case RC_ADDR(0x0000fa92u): goto L_FA92;
    case RC_ADDR(0x0000fa98u): goto L_FA98;
    case RC_ADDR(0x0000fa9cu): goto L_FA9C;
    case RC_ADDR(0x0000faa2u): goto L_FAA2;
    case RC_ADDR(0x0000faa6u): goto L_FAA6;
    case RC_ADDR(0x0000faa8u): goto L_FAA8;
    case RC_ADDR(0x0000faacu): goto L_FAAC;
    case RC_ADDR(0x0000fab4u): goto L_FAB4;
    case RC_ADDR(0x0000fab6u): goto L_FAB6;
    case RC_ADDR(0x0000fabau): goto L_FABA;
    case RC_ADDR(0x0000fabcu): goto L_FABC;
    case RC_ADDR(0x0000fabeu): goto L_FABE;
    case RC_ADDR(0x0000fac2u): goto L_FAC2;
    case RC_ADDR(0x0000fac6u): goto L_FAC6;
    case RC_ADDR(0x0000fac8u): goto L_FAC8;
    case RC_ADDR(0x0000facau): goto L_FACA;
    case RC_ADDR(0x0000faceu): goto L_FACE;
    case RC_ADDR(0x0000fad2u): goto L_FAD2;
    case RC_ADDR(0x0000fad4u): goto L_FAD4;
    case RC_ADDR(0x0000fad8u): goto L_FAD8;
    case RC_ADDR(0x0000fadau): goto L_FADA;
    case RC_ADDR(0x0000fadeu): goto L_FADE;
    case RC_ADDR(0x0000fae0u): goto L_FAE0;
    case RC_ADDR(0x0000fae4u): goto L_FAE4;
    case RC_ADDR(0x0000faeau): goto L_FAEA;
    case RC_ADDR(0x0000faf0u): goto L_FAF0;
    case RC_ADDR(0x0000faf2u): goto L_FAF2;
    case RC_ADDR(0x0000faf4u): goto L_FAF4;
    case RC_ADDR(0x0000fafau): goto L_FAFA;
    case RC_ADDR(0x0000fafcu): goto L_FAFC;
    case RC_ADDR(0x0000fafeu): goto L_FAFE;
    case RC_ADDR(0x0000fb04u): goto L_FB04;
    case RC_ADDR(0x0000fb06u): goto L_FB06;
    case RC_ADDR(0x0000fb08u): goto L_FB08;
    case RC_ADDR(0x0000fb0eu): goto L_FB0E;
    case RC_ADDR(0x0000fb14u): goto L_FB14;
    case RC_ADDR(0x0000fb1au): goto L_FB1A;
    case RC_ADDR(0x0000fb22u): goto L_FB22;
    case RC_ADDR(0x0000fb24u): goto L_FB24;
    case RC_ADDR(0x0000fb28u): goto L_FB28;
    case RC_ADDR(0x0000fb2au): goto L_FB2A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_F8A8:
    /* 0000f8a8   4  link.w A5,#fffffff8 */
    c->pc = RC_ADDR(0x0000f8a8u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x8u;

L_F8AC:
    /* 0000f8ac   2  clr.l D4 */
    c->pc = RC_ADDR(0x0000f8acu);
    rc_step(c, m, 6);
    rc_d_set(c, 4, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_F8AE:
    /* 0000f8ae   2  clr.l D5 */
    c->pc = RC_ADDR(0x0000f8aeu);
    rc_step(c, m, 6);
    rc_d_set(c, 5, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_F8B0:
    /* 0000f8b0   2  clr.l D6 */
    c->pc = RC_ADDR(0x0000f8b0u);
    rc_step(c, m, 6);
    rc_d_set(c, 6, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_F8B2:
    /* 0000f8b2   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x0000f8b2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_F8B6:
    /* 0000f8b6   2  move.w (A0),D1 */
    c->pc = RC_ADDR(0x0000f8b6u);
    rc_step(c, m, 8);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F8B8:
    /* 0000f8b8   4  move.w (a,A5),D0 */
    c->pc = RC_ADDR(0x0000f8b8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F8BC:
    /* 0000f8bc   4  cmpi.w #c7,D0 */
    c->pc = RC_ADDR(0x0000f8bcu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t0, 0x000000c7u);

L_F8C0:
    /* 0000f8c0   4  bgt 0000fb28 */
    c->pc = RC_ADDR(0x0000f8c0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_FB28;

L_F8C4:
    /* 0000f8c4   4  add.w (2,A0),D0 */
    c->pc = RC_ADDR(0x0000f8c4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_F8C8:
    /* 0000f8c8   4  beq 0000fb28 */
    c->pc = RC_ADDR(0x0000f8c8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_FB28;

L_F8CC:
    /* 0000f8cc   4  bmi 0000fb28 */
    c->pc = RC_ADDR(0x0000f8ccu);
    rc_step(c, m, 10);
    if (rc_cond(c, 11)) goto L_FB28;

L_F8D0:
    /* 0000f8d0   4  cmp.w (fffffa78,A4),D0 */
    c->pc = RC_ADDR(0x0000f8d0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x588u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_F8D4:
    /* 0000f8d4   2  blt 0000f8de */
    c->pc = RC_ADDR(0x0000f8d4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_F8DE;

L_F8D6:
    /* 0000f8d6   4  sub.w (fffffa78,A4),D0 */
    c->pc = RC_ADDR(0x0000f8d6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x588u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_F8DA:
    /* 0000f8da   2  move.w D0,D6 */
    c->pc = RC_ADDR(0x0000f8dau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F8DC:
    /* 0000f8dc   2  bra 0000f8f0 */
    c->pc = RC_ADDR(0x0000f8dcu);
    rc_step(c, m, 10);
    goto L_F8F0;

L_F8DE:
    /* 0000f8de   4  move.w (a,A5),D0 */
    c->pc = RC_ADDR(0x0000f8deu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F8E2:
    /* 0000f8e2   2  bpl 0000f8f0 */
    c->pc = RC_ADDR(0x0000f8e2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 10)) goto L_F8F0;

L_F8E4:
    /* 0000f8e4   2  neg.w D0 */
    c->pc = RC_ADDR(0x0000f8e4u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_F8E6:
    /* 0000f8e6   2  move.w D0,D6 */
    c->pc = RC_ADDR(0x0000f8e6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F8E8:
    /* 0000f8e8   2  mulu.w D1,D0 */
    c->pc = RC_ADDR(0x0000f8e8u);
    rc_step(c, m, 38);
    t0 = rc_d_get(c, 1, RC_W);
    rc_mulu(c, 0, t0);

L_F8EA:
    /* 0000f8ea   2  move.w D0,D4 */
    c->pc = RC_ADDR(0x0000f8eau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F8EC:
    /* 0000f8ec   4  clr.w (a,A5) */
    c->pc = RC_ADDR(0x0000f8ecu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] + 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_F8F0:
    /* 0000f8f0   4  move.w (8,A5),D2 */
    c->pc = RC_ADDR(0x0000f8f0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F8F4:
    /* 0000f8f4   2  bpl 0000f926 */
    c->pc = RC_ADDR(0x0000f8f4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 10)) goto L_F926;

L_F8F6:
    /* 0000f8f6   2  neg.w D2 */
    c->pc = RC_ADDR(0x0000f8f6u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_F8F8:
    /* 0000f8f8   2  move.w D2,D0 */
    c->pc = RC_ADDR(0x0000f8f8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F8FA:
    /* 0000f8fa   2  lsr.w #4,D2 */
    c->pc = RC_ADDR(0x0000f8fau);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 2, RC_W), RC_W));

L_F8FC:
    /* 0000f8fc   2  lsl.w #1,D2 */
    c->pc = RC_ADDR(0x0000f8fcu);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 2, RC_W), RC_W));

L_F8FE:
    /* 0000f8fe   2  cmp.w D1,D2 */
    c->pc = RC_ADDR(0x0000f8feu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_F900:
    /* 0000f900   4  bge 0000fb28 */
    c->pc = RC_ADDR(0x0000f900u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_FB28;

L_F904:
    /* 0000f904   2  sub.w D2,D1 */
    c->pc = RC_ADDR(0x0000f904u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_F906:
    /* 0000f906   2  add.w D2,D4 */
    c->pc = RC_ADDR(0x0000f906u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_F908:
    /* 0000f908   2  subq.w #2,D2 */
    c->pc = RC_ADDR(0x0000f908u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_F90A:
    /* 0000f90a   2  move.w D2,D3 */
    c->pc = RC_ADDR(0x0000f90au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F90C:
    /* 0000f90c   4  andi.w #f,D0 */
    c->pc = RC_ADDR(0x0000f90cu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 & 0x0000000fu;
    rc_d_set(c, 0, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_F910:
    /* 0000f910   2  bne 0000f918 */
    c->pc = RC_ADDR(0x0000f910u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_F918;

L_F912:
    /* 0000f912   4  clr.w (8,A5) */
    c->pc = RC_ADDR(0x0000f912u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] + 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_F916:
    /* 0000f916   2  bra 0000f94e */
    c->pc = RC_ADDR(0x0000f916u);
    rc_step(c, m, 10);
    goto L_F94E;

L_F918:
    /* 0000f918   2  moveq #fffffffe,D5 */
    c->pc = RC_ADDR(0x0000f918u);
    rc_step(c, m, 4);
    c->d[5] = 0xfffffffeu;
    rc_set_nzvc(c, c->d[5], RC_L);

L_F91A:
    /* 0000f91a   6  move.w #10,(8,A5) */
    c->pc = RC_ADDR(0x0000f91au);
    rc_step(c, m, 16);
    t0 = 0x00000010u;
    rc_wr16(c, m, (c->a[5] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_F920:
    /* 0000f920   4  sub.w D0,(8,A5) */
    c->pc = RC_ADDR(0x0000f920u);
    rc_step(c, m, 16);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_F924:
    /* 0000f924   2  bra 0000f94e */
    c->pc = RC_ADDR(0x0000f924u);
    rc_step(c, m, 10);
    goto L_F94E;

L_F926:
    /* 0000f926   4  cmpi.w #13f,D2 */
    c->pc = RC_ADDR(0x0000f926u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t0, 0x0000013fu);

L_F92A:
    /* 0000f92a   4  bgt 0000fb28 */
    c->pc = RC_ADDR(0x0000f92au);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_FB28;

L_F92E:
    /* 0000f92e   2  lsr.w #4,D2 */
    c->pc = RC_ADDR(0x0000f92eu);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 2, RC_W), RC_W));

L_F930:
    /* 0000f930   2  lsl.w #1,D2 */
    c->pc = RC_ADDR(0x0000f930u);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 2, RC_W), RC_W));

L_F932:
    /* 0000f932   2  add.w D1,D2 */
    c->pc = RC_ADDR(0x0000f932u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_F934:
    /* 0000f934   4  cmpi.w #26,D2 */
    c->pc = RC_ADDR(0x0000f934u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000026u);

L_F938:
    /* 0000f938   2  ble 0000f94a */
    c->pc = RC_ADDR(0x0000f938u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_F94A;

L_F93A:
    /* 0000f93a   2  sub.w D1,D2 */
    c->pc = RC_ADDR(0x0000f93au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_F93C:
    /* 0000f93c   4  sub.w (fffffa76,A4),D2 */
    c->pc = RC_ADDR(0x0000f93cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x58au));
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_F940:
    /* 0000f940   2  neg.w D2 */
    c->pc = RC_ADDR(0x0000f940u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_F942:
    /* 0000f942   2  sub.w D2,D1 */
    c->pc = RC_ADDR(0x0000f942u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_F944:
    /* 0000f944   2  move.w D1,D3 */
    c->pc = RC_ADDR(0x0000f944u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F946:
    /* 0000f946   2  move.w D2,D1 */
    c->pc = RC_ADDR(0x0000f946u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F948:
    /* 0000f948   2  bra 0000f950 */
    c->pc = RC_ADDR(0x0000f948u);
    rc_step(c, m, 10);
    goto L_F950;

L_F94A:
    /* 0000f94a   4  move.w #fffe,D3 */
    c->pc = RC_ADDR(0x0000f94au);
    rc_step(c, m, 8);
    t0 = 0x0000fffeu;
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F94E:
    /* 0000f94e   2  addq.w #2,D1 */
    c->pc = RC_ADDR(0x0000f94eu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_F950:
    /* 0000f950   8  btst #6,(00dff002).l */
    c->pc = RC_ADDR(0x0000f950u);
    rc_step(c, m, 20);
    t3 = 0x00dff002u;
    t4 = 0x00000006u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_F958:
    /* 0000f958   2  bne 0000f950 */
    c->pc = RC_ADDR(0x0000f958u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_F950; }

L_F95A:
    /* 0000f95a   2  move.w D6,D0 */
    c->pc = RC_ADDR(0x0000f95au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F95C:
    /* 0000f95c   4  move.w (fffffa76,A4),D6 */
    c->pc = RC_ADDR(0x0000f95cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x58au));
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F960:
    /* 0000f960   2  sub.w D1,D6 */
    c->pc = RC_ADDR(0x0000f960u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 6, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 6, RC_W, t2);

L_F962:
    /* 0000f962   6  move.w D6,(00dff064).l */
    c->pc = RC_ADDR(0x0000f962u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 6, RC_W);
    rc_wr16(c, m, 0x00dff064u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F968:
    /* 0000f968   6  move.w D6,(00dff062).l */
    c->pc = RC_ADDR(0x0000f968u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 6, RC_W);
    rc_wr16(c, m, 0x00dff062u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F96E:
    /* 0000f96e   6  move.w D6,(00dff060).l */
    c->pc = RC_ADDR(0x0000f96eu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 6, RC_W);
    rc_wr16(c, m, 0x00dff060u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F974:
    /* 0000f974   8  move.w #0,(00dff066).l */
    c->pc = RC_ADDR(0x0000f974u);
    rc_step(c, m, 20);
    t0 = 0x00000000u;
    rc_wr16(c, m, 0x00dff066u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F97C:
    /* 0000f97c   4  move.w (2,A0),D2 */
    c->pc = RC_ADDR(0x0000f97cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F980:
    /* 0000f980   2  sub.w D0,D2 */
    c->pc = RC_ADDR(0x0000f980u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_F982:
    /* 0000f982   2  lsl.w #6,D2 */
    c->pc = RC_ADDR(0x0000f982u);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 1, 0x00000006u, rc_d_get(c, 2, RC_W), RC_W));

L_F984:
    /* 0000f984   2  lsr.w #1,D1 */
    c->pc = RC_ADDR(0x0000f984u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_F986:
    /* 0000f986   2  or.w D1,D2 */
    c->pc = RC_ADDR(0x0000f986u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t2 = t0 | rc_d_get(c, 2, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 2, RC_W, t2);

L_F988:
    /* 0000f988   2  clr.l D1 */
    c->pc = RC_ADDR(0x0000f988u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_F98A:
    /* 0000f98a   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0000f98au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F98E:
    /* 0000f98e   2  lsr.w #4,D0 */
    c->pc = RC_ADDR(0x0000f98eu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W));

L_F990:
    /* 0000f990   2  lsl.w #1,D0 */
    c->pc = RC_ADDR(0x0000f990u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_F992:
    /* 0000f992   4  move.w (a,A5),D1 */
    c->pc = RC_ADDR(0x0000f992u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F996:
    /* 0000f996   4  mulu.w (fffffa76,A4),D1 */
    c->pc = RC_ADDR(0x0000f996u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] - 0x58au));
    rc_mulu(c, 1, t0);

L_F99A:
    /* 0000f99a   2  add.w D0,D1 */
    c->pc = RC_ADDR(0x0000f99au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_F99C:
    /* 0000f99c   2  add.l D5,D1 */
    c->pc = RC_ADDR(0x0000f99cu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 5, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_F99E:
    /* 0000f99e   8  move.w #ffff,(00dff044).l */
    c->pc = RC_ADDR(0x0000f99eu);
    rc_step(c, m, 20);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, 0x00dff044u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F9A6:
    /* 0000f9a6   8  move.w #ffff,(00dff046).l */
    c->pc = RC_ADDR(0x0000f9a6u);
    rc_step(c, m, 20);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, 0x00dff046u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F9AE:
    /* 0000f9ae   4  lea (ffffface,A4),A1 */
    c->pc = RC_ADDR(0x0000f9aeu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x532u);

L_F9B2:
    /* 0000f9b2   2  movea.l (A1)+,A2 */
    c->pc = RC_ADDR(0x0000f9b2u);
    rc_step(c, m, 12);
    t3 = c->a[1];
    c->a[1] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_F9B4:
    /* 0000f9b4   2  adda.l D1,A2 */
    c->pc = RC_ADDR(0x0000f9b4u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[2] += t0;

L_F9B6:
    /* 0000f9b6   6  move.l A2,(00dff050).l */
    c->pc = RC_ADDR(0x0000f9b6u);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff050u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F9BC:
    /* 0000f9bc   2  movea.l (A1)+,A2 */
    c->pc = RC_ADDR(0x0000f9bcu);
    rc_step(c, m, 12);
    t3 = c->a[1];
    c->a[1] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_F9BE:
    /* 0000f9be   2  adda.l D1,A2 */
    c->pc = RC_ADDR(0x0000f9beu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[2] += t0;

L_F9C0:
    /* 0000f9c0   6  move.l A2,(00dff04c).l */
    c->pc = RC_ADDR(0x0000f9c0u);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff04cu, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F9C6:
    /* 0000f9c6   2  movea.l (A1)+,A2 */
    c->pc = RC_ADDR(0x0000f9c6u);
    rc_step(c, m, 12);
    t3 = c->a[1];
    c->a[1] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_F9C8:
    /* 0000f9c8   2  adda.l D1,A2 */
    c->pc = RC_ADDR(0x0000f9c8u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[2] += t0;

L_F9CA:
    /* 0000f9ca   6  move.l A2,(00dff048).l */
    c->pc = RC_ADDR(0x0000f9cau);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff048u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F9D0:
    /* 0000f9d0   8  move.l (e70,A4),(00dff054).l */
    c->pc = RC_ADDR(0x0000f9d0u);
    rc_step(c, m, 32);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe70u));
    rc_wr32(c, m, 0x00dff054u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F9D8:
    /* 0000f9d8   8  move.w #ffe,(00dff040).l */
    c->pc = RC_ADDR(0x0000f9d8u);
    rc_step(c, m, 20);
    t0 = 0x00000ffeu;
    rc_wr16(c, m, 0x00dff040u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F9E0:
    /* 0000f9e0   8  move.w #0,(00dff042).l */
    c->pc = RC_ADDR(0x0000f9e0u);
    rc_step(c, m, 20);
    t0 = 0x00000000u;
    rc_wr16(c, m, 0x00dff042u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F9E8:
    /* 0000f9e8   6  move.w D2,(00dff058).l */
    c->pc = RC_ADDR(0x0000f9e8u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, 0x00dff058u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F9EE:
    /* 0000f9ee   8  btst #6,(00dff002).l */
    c->pc = RC_ADDR(0x0000f9eeu);
    rc_step(c, m, 20);
    t3 = 0x00dff002u;
    t4 = 0x00000006u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_F9F6:
    /* 0000f9f6   2  bne 0000f9ee */
    c->pc = RC_ADDR(0x0000f9f6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_F9EE; }

L_F9F8:
    /* 0000f9f8   8  move.w #0,(00dff064).l */
    c->pc = RC_ADDR(0x0000f9f8u);
    rc_step(c, m, 20);
    t0 = 0x00000000u;
    rc_wr16(c, m, 0x00dff064u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FA00:
    /* 0000fa00   8  move.l (e70,A4),(00dff050).l */
    c->pc = RC_ADDR(0x0000fa00u);
    rc_step(c, m, 32);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe70u));
    rc_wr32(c, m, 0x00dff050u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_FA08:
    /* 0000fa08   2  movea.l (A1)+,A2 */
    c->pc = RC_ADDR(0x0000fa08u);
    rc_step(c, m, 12);
    t3 = c->a[1];
    c->a[1] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_FA0A:
    /* 0000fa0a   2  adda.l D1,A2 */
    c->pc = RC_ADDR(0x0000fa0au);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[2] += t0;

L_FA0C:
    /* 0000fa0c   6  move.l A2,(00dff04c).l */
    c->pc = RC_ADDR(0x0000fa0cu);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff04cu, t0);
    rc_set_nzvc(c, t0, RC_L);

L_FA12:
    /* 0000fa12   2  movea.l (A1),A2 */
    c->pc = RC_ADDR(0x0000fa12u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[1]);
    c->a[2] = t0;

L_FA14:
    /* 0000fa14   2  adda.l D1,A2 */
    c->pc = RC_ADDR(0x0000fa14u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[2] += t0;

L_FA16:
    /* 0000fa16   6  move.l A2,(00dff048).l */
    c->pc = RC_ADDR(0x0000fa16u);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff048u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_FA1C:
    /* 0000fa1c   8  move.l (e70,A4),(00dff054).l */
    c->pc = RC_ADDR(0x0000fa1cu);
    rc_step(c, m, 32);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe70u));
    rc_wr32(c, m, 0x00dff054u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_FA24:
    /* 0000fa24   6  move.w D2,(00dff058).l */
    c->pc = RC_ADDR(0x0000fa24u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, 0x00dff058u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FA2A:
    /* 0000fa2a   8  btst #6,(00dff002).l */
    c->pc = RC_ADDR(0x0000fa2au);
    rc_step(c, m, 20);
    t3 = 0x00dff002u;
    t4 = 0x00000006u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_FA32:
    /* 0000fa32   2  bne 0000fa2a */
    c->pc = RC_ADDR(0x0000fa32u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_FA2A; }

L_FA34:
    /* 0000fa34   6  move.w D3,(00dff064).l */
    c->pc = RC_ADDR(0x0000fa34u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 3, RC_W);
    rc_wr16(c, m, 0x00dff064u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FA3A:
    /* 0000fa3a   8  move.w #0,(00dff062).l */
    c->pc = RC_ADDR(0x0000fa3au);
    rc_step(c, m, 20);
    t0 = 0x00000000u;
    rc_wr16(c, m, 0x00dff062u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FA42:
    /* 0000fa42   8  move.l (24,A0),(00dff050).l */
    c->pc = RC_ADDR(0x0000fa42u);
    rc_step(c, m, 32);
    t0 = rc_rd32(c, m, (c->a[0] + 0x24u));
    rc_wr32(c, m, 0x00dff050u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_FA4A:
    /* 0000fa4a   8  move.l (e70,A4),(00dff04c).l */
    c->pc = RC_ADDR(0x0000fa4au);
    rc_step(c, m, 32);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe70u));
    rc_wr32(c, m, 0x00dff04cu, t0);
    rc_set_nzvc(c, t0, RC_L);

L_FA52:
    /* 0000fa52   8  move.l (e70,A4),(00dff054).l */
    c->pc = RC_ADDR(0x0000fa52u);
    rc_step(c, m, 32);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe70u));
    rc_wr32(c, m, 0x00dff054u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_FA5A:
    /* 0000fa5a   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0000fa5au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FA5E:
    /* 0000fa5e   2  lsl.w #6,D0 */
    c->pc = RC_ADDR(0x0000fa5eu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000006u, rc_d_get(c, 0, RC_W), RC_W));

L_FA60:
    /* 0000fa60   2  lsl.w #6,D0 */
    c->pc = RC_ADDR(0x0000fa60u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000006u, rc_d_get(c, 0, RC_W), RC_W));

L_FA62:
    /* 0000fa62   4  ori.w #dc0,D0 */
    c->pc = RC_ADDR(0x0000fa62u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 | 0x00000dc0u;
    rc_d_set(c, 0, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_FA66:
    /* 0000fa66   6  move.w D0,(00dff040).l */
    c->pc = RC_ADDR(0x0000fa66u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, 0x00dff040u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FA6C:
    /* 0000fa6c   8  move.w #0,(00dff046).l */
    c->pc = RC_ADDR(0x0000fa6cu);
    rc_step(c, m, 20);
    t0 = 0x00000000u;
    rc_wr16(c, m, 0x00dff046u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FA74:
    /* 0000fa74   6  move.w D2,(00dff058).l */
    c->pc = RC_ADDR(0x0000fa74u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, 0x00dff058u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FA7A:
    /* 0000fa7a   8  btst #6,(00dff002).l */
    c->pc = RC_ADDR(0x0000fa7au);
    rc_step(c, m, 20);
    t3 = 0x00dff002u;
    t4 = 0x00000006u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_FA82:
    /* 0000fa82   2  bne 0000fa7a */
    c->pc = RC_ADDR(0x0000fa82u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_FA7A; }

L_FA84:
    /* 0000fa84   8  move.w #0,(00dff064).l */
    c->pc = RC_ADDR(0x0000fa84u);
    rc_step(c, m, 20);
    t0 = 0x00000000u;
    rc_wr16(c, m, 0x00dff064u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FA8C:
    /* 0000fa8c   6  move.w D3,(00dff062).l */
    c->pc = RC_ADDR(0x0000fa8cu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 3, RC_W);
    rc_wr16(c, m, 0x00dff062u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FA92:
    /* 0000fa92   6  move.w D6,(00dff066).l */
    c->pc = RC_ADDR(0x0000fa92u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 6, RC_W);
    rc_wr16(c, m, 0x00dff066u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FA98:
    /* 0000fa98   4  and.w #f000,D0 */
    c->pc = RC_ADDR(0x0000fa98u);
    rc_step(c, m, 10);
    t0 = 0x0000f000u;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_FA9C:
    /* 0000fa9c   6  move.w D0,(00dff042).l */
    c->pc = RC_ADDR(0x0000fa9cu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, 0x00dff042u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FAA2:
    /* 0000faa2   4  movea.l (e70,A4),A3 */
    c->pc = RC_ADDR(0x0000faa2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe70u));
    c->a[3] = t0;

L_FAA6:
    /* 0000faa6   2  adda.l D4,A3 */
    c->pc = RC_ADDR(0x0000faa6u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[3] += t0;

L_FAA8:
    /* 0000faa8   4  lea (ffffface,A4),A1 */
    c->pc = RC_ADDR(0x0000faa8u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x532u);

L_FAAC:
    /* 0000faac   8  move.w #ffff,(00dff046).l */
    c->pc = RC_ADDR(0x0000faacu);
    rc_step(c, m, 20);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, 0x00dff046u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FAB4:
    /* 0000fab4   2  clr.l D0 */
    c->pc = RC_ADDR(0x0000fab4u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_FAB6:
    /* 0000fab6   4  move.b (5,A0),D0 */
    c->pc = RC_ADDR(0x0000fab6u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x5u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_FABA:
    /* 0000faba   2  subq.b #1,D0 */
    c->pc = RC_ADDR(0x0000fabau);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_B);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_B, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_B, t2);

L_FABC:
    /* 0000fabc   2  addq.l #8,A0 */
    c->pc = RC_ADDR(0x0000fabcu);
    rc_step(c, m, 8);
    c->a[0] += 0x00000008u;

L_FABE:
    /* 0000fabe   4  move.l (18,A0),D6 */
    c->pc = RC_ADDR(0x0000fabeu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0x18u));
    rc_d_set(c, 6, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_FAC2:
    /* 0000fac2   4  move.w #b0a,D3 */
    c->pc = RC_ADDR(0x0000fac2u);
    rc_step(c, m, 8);
    t0 = 0x00000b0au;
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FAC6:
    /* 0000fac6   2  move.b D6,D5 */
    c->pc = RC_ADDR(0x0000fac6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_B);
    rc_d_set(c, 5, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_FAC8:
    /* 0000fac8   2  lsr.l #4,D6 */
    c->pc = RC_ADDR(0x0000fac8u);
    rc_step(c, m, 8);
    rc_d_set(c, 6, RC_L, rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 6, RC_L), RC_L));

L_FACA:
    /* 0000faca   4  andi.b #f,D5 */
    c->pc = RC_ADDR(0x0000facau);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 5, RC_B);
    t2 = t1 & 0x0000000fu;
    rc_d_set(c, 5, RC_B, t2);
    rc_set_nzvc(c, t2, RC_B);

L_FACE:
    /* 0000face   4  cmpi.b #8,D5 */
    c->pc = RC_ADDR(0x0000faceu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 5, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000008u);

L_FAD2:
    /* 0000fad2   2  blt 0000fae0 */
    c->pc = RC_ADDR(0x0000fad2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_FAE0;

L_FAD4:
    /* 0000fad4   4  btst #0,D5 */
    c->pc = RC_ADDR(0x0000fad4u);
    rc_step(c, m, 10);
    t4 = 0x00000000u;
    t0 = rc_d_get(c, 5, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_FAD8:
    /* 0000fad8   2  beq 0000fae4 */
    c->pc = RC_ADDR(0x0000fad8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_FAE4;

L_FADA:
    /* 0000fada   4  move.w #bfa,D3 */
    c->pc = RC_ADDR(0x0000fadau);
    rc_step(c, m, 8);
    t0 = 0x00000bfau;
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FADE:
    /* 0000fade   2  bra 0000fae4 */
    c->pc = RC_ADDR(0x0000fadeu);
    rc_step(c, m, 10);
    goto L_FAE4;

L_FAE0:
    /* 0000fae0   4  move.w #fca,D3 */
    c->pc = RC_ADDR(0x0000fae0u);
    rc_step(c, m, 8);
    t0 = 0x00000fcau;
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FAE4:
    /* 0000fae4   6  move.w D3,(00dff040).l */
    c->pc = RC_ADDR(0x0000fae4u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 3, RC_W);
    rc_wr16(c, m, 0x00dff040u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FAEA:
    /* 0000faea   6  move.l A3,(00dff050).l */
    c->pc = RC_ADDR(0x0000faeau);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 3, RC_L);
    rc_wr32(c, m, 0x00dff050u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_FAF0:
    /* 0000faf0   2  move.l (A0)+,D5 */
    c->pc = RC_ADDR(0x0000faf0u);
    rc_step(c, m, 12);
    t3 = c->a[0];
    c->a[0] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 5, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_FAF2:
    /* 0000faf2   2  bpl 0000fafc */
    c->pc = RC_ADDR(0x0000faf2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 10)) goto L_FAFC;

L_FAF4:
    /* 0000faf4   6  move.l A3,(00dff04c).l */
    c->pc = RC_ADDR(0x0000faf4u);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 3, RC_L);
    rc_wr32(c, m, 0x00dff04cu, t0);
    rc_set_nzvc(c, t0, RC_L);

L_FAFA:
    /* 0000fafa   2  bra 0000fb04 */
    c->pc = RC_ADDR(0x0000fafau);
    rc_step(c, m, 10);
    goto L_FB04;

L_FAFC:
    /* 0000fafc   2  add.l D4,D5 */
    c->pc = RC_ADDR(0x0000fafcu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 4, RC_L);
    t1 = rc_d_get(c, 5, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 5, RC_L, t2);

L_FAFE:
    /* 0000fafe   6  move.l D5,(00dff04c).l */
    c->pc = RC_ADDR(0x0000fafeu);
    rc_step(c, m, 20);
    t0 = rc_d_get(c, 5, RC_L);
    rc_wr32(c, m, 0x00dff04cu, t0);
    rc_set_nzvc(c, t0, RC_L);

L_FB04:
    /* 0000fb04   2  movea.l (A1)+,A2 */
    c->pc = RC_ADDR(0x0000fb04u);
    rc_step(c, m, 12);
    t3 = c->a[1];
    c->a[1] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_FB06:
    /* 0000fb06   2  adda.l D1,A2 */
    c->pc = RC_ADDR(0x0000fb06u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[2] += t0;

L_FB08:
    /* 0000fb08   6  move.l A2,(00dff048).l */
    c->pc = RC_ADDR(0x0000fb08u);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff048u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_FB0E:
    /* 0000fb0e   6  move.l A2,(00dff054).l */
    c->pc = RC_ADDR(0x0000fb0eu);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff054u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_FB14:
    /* 0000fb14   6  move.w D2,(00dff058).l */
    c->pc = RC_ADDR(0x0000fb14u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, 0x00dff058u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FB1A:
    /* 0000fb1a   8  btst #6,(00dff002).l */
    c->pc = RC_ADDR(0x0000fb1au);
    rc_step(c, m, 20);
    t3 = 0x00dff002u;
    t4 = 0x00000006u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_FB22:
    /* 0000fb22   2  bne 0000fb1a */
    c->pc = RC_ADDR(0x0000fb22u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_FB1A; }

L_FB24:
    /* 0000fb24   4  dbf D0,0000fac2 */
    c->pc = RC_ADDR(0x0000fb24u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_FAC2; }
    }

L_FB28:
    /* 0000fb28   2  unlk A5 */
    c->pc = RC_ADDR(0x0000fb28u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_FB2A:
    /* 0000fb2a   2  rts */
    c->pc = RC_ADDR(0x0000fb2au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
