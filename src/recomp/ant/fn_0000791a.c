/* fn_0000791a - 296 byte(s), 88 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000791a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000791au): goto L_791A;
    case RC_ADDR(0x0000791eu): goto L_791E;
    case RC_ADDR(0x00007922u): goto L_7922;
    case RC_ADDR(0x00007926u): goto L_7926;
    case RC_ADDR(0x0000792au): goto L_792A;
    case RC_ADDR(0x0000792cu): goto L_792C;
    case RC_ADDR(0x0000792eu): goto L_792E;
    case RC_ADDR(0x00007930u): goto L_7930;
    case RC_ADDR(0x00007934u): goto L_7934;
    case RC_ADDR(0x00007938u): goto L_7938;
    case RC_ADDR(0x0000793cu): goto L_793C;
    case RC_ADDR(0x0000793eu): goto L_793E;
    case RC_ADDR(0x00007944u): goto L_7944;
    case RC_ADDR(0x00007948u): goto L_7948;
    case RC_ADDR(0x0000794cu): goto L_794C;
    case RC_ADDR(0x0000794eu): goto L_794E;
    case RC_ADDR(0x00007952u): goto L_7952;
    case RC_ADDR(0x00007956u): goto L_7956;
    case RC_ADDR(0x0000795au): goto L_795A;
    case RC_ADDR(0x0000795eu): goto L_795E;
    case RC_ADDR(0x00007962u): goto L_7962;
    case RC_ADDR(0x00007964u): goto L_7964;
    case RC_ADDR(0x0000796au): goto L_796A;
    case RC_ADDR(0x0000796eu): goto L_796E;
    case RC_ADDR(0x00007972u): goto L_7972;
    case RC_ADDR(0x00007976u): goto L_7976;
    case RC_ADDR(0x00007978u): goto L_7978;
    case RC_ADDR(0x0000797au): goto L_797A;
    case RC_ADDR(0x0000797cu): goto L_797C;
    case RC_ADDR(0x00007982u): goto L_7982;
    case RC_ADDR(0x00007986u): goto L_7986;
    case RC_ADDR(0x0000798au): goto L_798A;
    case RC_ADDR(0x0000798cu): goto L_798C;
    case RC_ADDR(0x00007990u): goto L_7990;
    case RC_ADDR(0x00007994u): goto L_7994;
    case RC_ADDR(0x00007996u): goto L_7996;
    case RC_ADDR(0x00007998u): goto L_7998;
    case RC_ADDR(0x0000799au): goto L_799A;
    case RC_ADDR(0x0000799eu): goto L_799E;
    case RC_ADDR(0x000079a2u): goto L_79A2;
    case RC_ADDR(0x000079a4u): goto L_79A4;
    case RC_ADDR(0x000079acu): goto L_79AC;
    case RC_ADDR(0x000079aeu): goto L_79AE;
    case RC_ADDR(0x000079b2u): goto L_79B2;
    case RC_ADDR(0x000079b6u): goto L_79B6;
    case RC_ADDR(0x000079b8u): goto L_79B8;
    case RC_ADDR(0x000079c0u): goto L_79C0;
    case RC_ADDR(0x000079c2u): goto L_79C2;
    case RC_ADDR(0x000079cau): goto L_79CA;
    case RC_ADDR(0x000079ceu): goto L_79CE;
    case RC_ADDR(0x000079d2u): goto L_79D2;
    case RC_ADDR(0x000079d6u): goto L_79D6;
    case RC_ADDR(0x000079d8u): goto L_79D8;
    case RC_ADDR(0x000079dau): goto L_79DA;
    case RC_ADDR(0x000079dcu): goto L_79DC;
    case RC_ADDR(0x000079e4u): goto L_79E4;
    case RC_ADDR(0x000079e8u): goto L_79E8;
    case RC_ADDR(0x000079eau): goto L_79EA;
    case RC_ADDR(0x000079ecu): goto L_79EC;
    case RC_ADDR(0x000079eeu): goto L_79EE;
    case RC_ADDR(0x000079f2u): goto L_79F2;
    case RC_ADDR(0x000079f4u): goto L_79F4;
    case RC_ADDR(0x000079f6u): goto L_79F6;
    case RC_ADDR(0x000079f8u): goto L_79F8;
    case RC_ADDR(0x000079fcu): goto L_79FC;
    case RC_ADDR(0x00007a00u): goto L_7A00;
    case RC_ADDR(0x00007a02u): goto L_7A02;
    case RC_ADDR(0x00007a04u): goto L_7A04;
    case RC_ADDR(0x00007a06u): goto L_7A06;
    case RC_ADDR(0x00007a08u): goto L_7A08;
    case RC_ADDR(0x00007a0cu): goto L_7A0C;
    case RC_ADDR(0x00007a0eu): goto L_7A0E;
    case RC_ADDR(0x00007a10u): goto L_7A10;
    case RC_ADDR(0x00007a14u): goto L_7A14;
    case RC_ADDR(0x00007a18u): goto L_7A18;
    case RC_ADDR(0x00007a1cu): goto L_7A1C;
    case RC_ADDR(0x00007a20u): goto L_7A20;
    case RC_ADDR(0x00007a24u): goto L_7A24;
    case RC_ADDR(0x00007a28u): goto L_7A28;
    case RC_ADDR(0x00007a2cu): goto L_7A2C;
    case RC_ADDR(0x00007a2eu): goto L_7A2E;
    case RC_ADDR(0x00007a30u): goto L_7A30;
    case RC_ADDR(0x00007a34u): goto L_7A34;
    case RC_ADDR(0x00007a36u): goto L_7A36;
    case RC_ADDR(0x00007a3au): goto L_7A3A;
    case RC_ADDR(0x00007a3cu): goto L_7A3C;
    case RC_ADDR(0x00007a3eu): goto L_7A3E;
    case RC_ADDR(0x00007a40u): goto L_7A40;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_791A:
    /* 0000791a   4  link.w A5,#fffffff6 */
    c->pc = RC_ADDR(0x0000791au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xau;

L_791E:
    /* 0000791e   4  pea (00007a42) */
    c->pc = RC_ADDR(0x0000791eu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00007a42u));

L_7922:
    /* 00007922   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00007922u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7926:
    /* 00007926   4  jsr (ffff82de,A4) */
    c->pc = RC_ADDR(0x00007926u);
    rc_step(c, m, 18);
    /* vector 122 */
    rc_push32(c, m, RC_ADDR(0x0000792au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dd4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002298au);
    return;

L_792A:
    /* 0000792a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000792au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_792C:
    /* 0000792c   2  tst.w D0 */
    c->pc = RC_ADDR(0x0000792cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_792E:
    /* 0000792e   2  beq 0000793e */
    c->pc = RC_ADDR(0x0000792eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_793E;

L_7930:
    /* 00007930   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00007930u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7934:
    /* 00007934   4  pea (83c,A4) */
    c->pc = RC_ADDR(0x00007934u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x83cu));

L_7938:
    /* 00007938   4  jsr (ffff82cc,A4) */
    c->pc = RC_ADDR(0x00007938u);
    rc_step(c, m, 18);
    /* vector 119 */
    rc_push32(c, m, RC_ADDR(0x0000793cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dc2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000228b2u);
    return;

L_793C:
    /* 0000793c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000793cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_793E:
    /* 0000793e   6  move.l (8,A5),(fffffff6,A5) */
    c->pc = RC_ADDR(0x0000793eu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_7944:
    /* 00007944   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00007944u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7948:
    /* 00007948   4  jsr (0000774a) */
    c->pc = RC_ADDR(0x00007948u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000794cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000774au);
    return;

L_794C:
    /* 0000794c   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000794cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_794E:
    /* 0000794e   4  move.w D0,(fffffa08,A4) */
    c->pc = RC_ADDR(0x0000794eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x5f8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7952:
    /* 00007952   4  tst.w (fffffa08,A4) */
    c->pc = RC_ADDR(0x00007952u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5f8u));
    rc_set_nzvc(c, t0, RC_W);

L_7956:
    /* 00007956   4  blt 00007a3e */
    c->pc = RC_ADDR(0x00007956u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_7A3E;

L_795A:
    /* 0000795a   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000795au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_795E:
    /* 0000795e   4  jsr (0000782a) */
    c->pc = RC_ADDR(0x0000795eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00007962u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000782au);
    return;

L_7962:
    /* 00007962   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00007962u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_7964:
    /* 00007964   6  move.l (c,A5),(838,A4) */
    c->pc = RC_ADDR(0x00007964u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    rc_wr32(c, m, (c->a[4] + 0x838u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_796A:
    /* 0000796a   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000796au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_796E:
    /* 0000796e   4  pea (00007a45) */
    c->pc = RC_ADDR(0x0000796eu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00007a45u));

L_7972:
    /* 00007972   4  jsr (ffff82de,A4) */
    c->pc = RC_ADDR(0x00007972u);
    rc_step(c, m, 18);
    /* vector 122 */
    rc_push32(c, m, RC_ADDR(0x00007976u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dd4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002298au);
    return;

L_7976:
    /* 00007976   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00007976u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_7978:
    /* 00007978   2  tst.w D0 */
    c->pc = RC_ADDR(0x00007978u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_797A:
    /* 0000797a   2  bne 0000798c */
    c->pc = RC_ADDR(0x0000797au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_798C;

L_797C:
    /* 0000797c   6  move.w #1,(fffffa14,A4) */
    c->pc = RC_ADDR(0x0000797cu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x5ecu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7982:
    /* 00007982   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x00007982u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7986:
    /* 00007986   4  jsr (00007a4e) */
    c->pc = RC_ADDR(0x00007986u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000798au));
    rc_depth++;
    c->pc = RC_ADDR(0x00007a4eu);
    return;

L_798A:
    /* 0000798a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000798au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_798C:
    /* 0000798c   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000798cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7990:
    /* 00007990   4  jsr (ffff82d2,A4) */
    c->pc = RC_ADDR(0x00007990u);
    rc_step(c, m, 18);
    /* vector 120 */
    rc_push32(c, m, RC_ADDR(0x00007994u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dc8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000228c2u);
    return;

L_7994:
    /* 00007994   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00007994u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_7996:
    /* 00007996   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x00007996u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_7998:
    /* 00007998   2  ext.l D0 */
    c->pc = RC_ADDR(0x00007998u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_799A:
    /* 0000799a   4  add.l D0,(8,A5) */
    c->pc = RC_ADDR(0x0000799au);
    rc_step(c, m, 24);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_799E:
    /* 0000799e   4  tst.w (fffffa16,A4) */
    c->pc = RC_ADDR(0x0000799eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5eau));
    rc_set_nzvc(c, t0, RC_W);

L_79A2:
    /* 000079a2   2  beq 000079ae */
    c->pc = RC_ADDR(0x000079a2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_79AE;

L_79A4:
    /* 000079a4   8  move.l #6,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000079a4u);
    rc_step(c, m, 24);
    t0 = 0x00000006u;
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_79AC:
    /* 000079ac   2  bra 000079ca */
    c->pc = RC_ADDR(0x000079acu);
    rc_step(c, m, 10);
    goto L_79CA;

L_79AE:
    /* 000079ae   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000079aeu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_79B2:
    /* 000079b2   4  cmpi.b #50,(A0) */
    c->pc = RC_ADDR(0x000079b2u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x00000050u);

L_79B6:
    /* 000079b6   2  bne 000079c2 */
    c->pc = RC_ADDR(0x000079b6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_79C2;

L_79B8:
    /* 000079b8   8  move.l #8,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000079b8u);
    rc_step(c, m, 24);
    t0 = 0x00000008u;
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_79C0:
    /* 000079c0   2  bra 000079ca */
    c->pc = RC_ADDR(0x000079c0u);
    rc_step(c, m, 10);
    goto L_79CA;

L_79C2:
    /* 000079c2   8  move.l #5,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000079c2u);
    rc_step(c, m, 24);
    t0 = 0x00000005u;
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_79CA:
    /* 000079ca   4  move.l (fffffff6,A5),-(A7) */
    c->pc = RC_ADDR(0x000079cau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0xau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_79CE:
    /* 000079ce   4  pea (00007a49) */
    c->pc = RC_ADDR(0x000079ceu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00007a49u));

L_79D2:
    /* 000079d2   4  jsr (ffff82de,A4) */
    c->pc = RC_ADDR(0x000079d2u);
    rc_step(c, m, 18);
    /* vector 122 */
    rc_push32(c, m, RC_ADDR(0x000079d6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dd4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002298au);
    return;

L_79D6:
    /* 000079d6   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000079d6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_79D8:
    /* 000079d8   2  tst.w D0 */
    c->pc = RC_ADDR(0x000079d8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_79DA:
    /* 000079da   2  bne 000079e4 */
    c->pc = RC_ADDR(0x000079dau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_79E4;

L_79DC:
    /* 000079dc   8  move.l #8,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000079dcu);
    rc_step(c, m, 24);
    t0 = 0x00000008u;
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_79E4:
    /* 000079e4   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x000079e4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_79E8:
    /* 000079e8   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x000079e8u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_79EA:
    /* 000079ea   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x000079eau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_79EC:
    /* 000079ec   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x000079ecu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_79EE:
    /* 000079ee   4  move.l (fffff88c,A4),D0 */
    c->pc = RC_ADDR(0x000079eeu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x774u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_79F2:
    /* 000079f2   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x000079f2u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_79F4:
    /* 000079f4   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x000079f4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_79F6:
    /* 000079f6   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x000079f6u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_79F8:
    /* 000079f8   4  move.l (fffff888,A4),D0 */
    c->pc = RC_ADDR(0x000079f8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x778u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_79FC:
    /* 000079fc   4  add.l (fffffa0c,A4),D0 */
    c->pc = RC_ADDR(0x000079fcu);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5f4u));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_7A00:
    /* 00007a00   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x00007a00u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_7A02:
    /* 00007a02   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x00007a02u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_7A04:
    /* 00007a04   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00007a04u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7A06:
    /* 00007a06   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00007a06u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7A08:
    /* 00007a08   4  move.w (fffffa08,A4),D0 */
    c->pc = RC_ADDR(0x00007a08u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5f8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7A0C:
    /* 00007a0c   2  ext.l D0 */
    c->pc = RC_ADDR(0x00007a0cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_7A0E:
    /* 00007a0e   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00007a0eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_7A10:
    /* 00007a10   4  lea (fffff97a,A4),A0 */
    c->pc = RC_ADDR(0x00007a10u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x686u);

L_7A14:
    /* 00007a14   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00007a14u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7A18:
    /* 00007a18   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00007a18u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_7A1C:
    /* 00007a1c   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x00007a1cu);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x00007a20u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_7A20:
    /* 00007a20   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00007a20u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_7A24:
    /* 00007a24   4  clr.l (fffffa0c,A4) */
    c->pc = RC_ADDR(0x00007a24u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x5f4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_7A28:
    /* 00007a28   4  move.w (fffffa08,A4),D0 */
    c->pc = RC_ADDR(0x00007a28u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5f8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7A2C:
    /* 00007a2c   2  ext.l D0 */
    c->pc = RC_ADDR(0x00007a2cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_7A2E:
    /* 00007a2e   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00007a2eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_7A30:
    /* 00007a30   4  lea (fffff97a,A4),A0 */
    c->pc = RC_ADDR(0x00007a30u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x686u);

L_7A34:
    /* 00007a34   2  move.l D0,D1 */
    c->pc = RC_ADDR(0x00007a34u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_7A36:
    /* 00007a36   4  move.l (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x00007a36u);
    rc_step(c, m, 18);
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_7A3A:
    /* 00007a3a   2  unlk A5 */
    c->pc = RC_ADDR(0x00007a3au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_7A3C:
    /* 00007a3c   2  rts */
    c->pc = RC_ADDR(0x00007a3cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_7A3E:
    /* 00007a3e   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00007a3eu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_7A40:
    /* 00007a40   2  bra 00007a3a */
    c->pc = RC_ADDR(0x00007a40u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_7A3A;

}
