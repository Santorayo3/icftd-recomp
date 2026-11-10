/* fn_00003912 - 524 byte(s), 138 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00003912(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00003912u): goto L_3912;
    case RC_ADDR(0x00003916u): goto L_3916;
    case RC_ADDR(0x0000391au): goto L_391A;
    case RC_ADDR(0x0000391eu): goto L_391E;
    case RC_ADDR(0x00003922u): goto L_3922;
    case RC_ADDR(0x00003926u): goto L_3926;
    case RC_ADDR(0x0000392cu): goto L_392C;
    case RC_ADDR(0x00003930u): goto L_3930;
    case RC_ADDR(0x00003934u): goto L_3934;
    case RC_ADDR(0x00003938u): goto L_3938;
    case RC_ADDR(0x0000393au): goto L_393A;
    case RC_ADDR(0x0000393eu): goto L_393E;
    case RC_ADDR(0x00003942u): goto L_3942;
    case RC_ADDR(0x00003946u): goto L_3946;
    case RC_ADDR(0x00003948u): goto L_3948;
    case RC_ADDR(0x0000394cu): goto L_394C;
    case RC_ADDR(0x00003950u): goto L_3950;
    case RC_ADDR(0x00003954u): goto L_3954;
    case RC_ADDR(0x00003958u): goto L_3958;
    case RC_ADDR(0x0000395cu): goto L_395C;
    case RC_ADDR(0x00003960u): goto L_3960;
    case RC_ADDR(0x00003962u): goto L_3962;
    case RC_ADDR(0x00003966u): goto L_3966;
    case RC_ADDR(0x0000396au): goto L_396A;
    case RC_ADDR(0x0000396eu): goto L_396E;
    case RC_ADDR(0x00003972u): goto L_3972;
    case RC_ADDR(0x00003976u): goto L_3976;
    case RC_ADDR(0x0000397au): goto L_397A;
    case RC_ADDR(0x0000397cu): goto L_397C;
    case RC_ADDR(0x00003980u): goto L_3980;
    case RC_ADDR(0x00003984u): goto L_3984;
    case RC_ADDR(0x00003988u): goto L_3988;
    case RC_ADDR(0x0000398cu): goto L_398C;
    case RC_ADDR(0x00003990u): goto L_3990;
    case RC_ADDR(0x00003994u): goto L_3994;
    case RC_ADDR(0x00003996u): goto L_3996;
    case RC_ADDR(0x0000399au): goto L_399A;
    case RC_ADDR(0x0000399eu): goto L_399E;
    case RC_ADDR(0x000039a2u): goto L_39A2;
    case RC_ADDR(0x000039a8u): goto L_39A8;
    case RC_ADDR(0x000039aeu): goto L_39AE;
    case RC_ADDR(0x000039b4u): goto L_39B4;
    case RC_ADDR(0x000039bau): goto L_39BA;
    case RC_ADDR(0x000039c2u): goto L_39C2;
    case RC_ADDR(0x000039c6u): goto L_39C6;
    case RC_ADDR(0x000039cau): goto L_39CA;
    case RC_ADDR(0x000039ccu): goto L_39CC;
    case RC_ADDR(0x000039d0u): goto L_39D0;
    case RC_ADDR(0x000039d2u): goto L_39D2;
    case RC_ADDR(0x000039d6u): goto L_39D6;
    case RC_ADDR(0x000039dau): goto L_39DA;
    case RC_ADDR(0x000039deu): goto L_39DE;
    case RC_ADDR(0x000039e2u): goto L_39E2;
    case RC_ADDR(0x000039e6u): goto L_39E6;
    case RC_ADDR(0x000039eau): goto L_39EA;
    case RC_ADDR(0x000039ecu): goto L_39EC;
    case RC_ADDR(0x000039f0u): goto L_39F0;
    case RC_ADDR(0x000039f4u): goto L_39F4;
    case RC_ADDR(0x000039f8u): goto L_39F8;
    case RC_ADDR(0x000039fau): goto L_39FA;
    case RC_ADDR(0x000039feu): goto L_39FE;
    case RC_ADDR(0x00003a02u): goto L_3A02;
    case RC_ADDR(0x00003a0au): goto L_3A0A;
    case RC_ADDR(0x00003a0cu): goto L_3A0C;
    case RC_ADDR(0x00003a14u): goto L_3A14;
    case RC_ADDR(0x00003a18u): goto L_3A18;
    case RC_ADDR(0x00003a1cu): goto L_3A1C;
    case RC_ADDR(0x00003a1eu): goto L_3A1E;
    case RC_ADDR(0x00003a20u): goto L_3A20;
    case RC_ADDR(0x00003a24u): goto L_3A24;
    case RC_ADDR(0x00003a26u): goto L_3A26;
    case RC_ADDR(0x00003a28u): goto L_3A28;
    case RC_ADDR(0x00003a2cu): goto L_3A2C;
    case RC_ADDR(0x00003a2eu): goto L_3A2E;
    case RC_ADDR(0x00003a30u): goto L_3A30;
    case RC_ADDR(0x00003a34u): goto L_3A34;
    case RC_ADDR(0x00003a38u): goto L_3A38;
    case RC_ADDR(0x00003a3cu): goto L_3A3C;
    case RC_ADDR(0x00003a40u): goto L_3A40;
    case RC_ADDR(0x00003a44u): goto L_3A44;
    case RC_ADDR(0x00003a48u): goto L_3A48;
    case RC_ADDR(0x00003a4cu): goto L_3A4C;
    case RC_ADDR(0x00003a50u): goto L_3A50;
    case RC_ADDR(0x00003a52u): goto L_3A52;
    case RC_ADDR(0x00003a56u): goto L_3A56;
    case RC_ADDR(0x00003a5au): goto L_3A5A;
    case RC_ADDR(0x00003a5eu): goto L_3A5E;
    case RC_ADDR(0x00003a62u): goto L_3A62;
    case RC_ADDR(0x00003a66u): goto L_3A66;
    case RC_ADDR(0x00003a68u): goto L_3A68;
    case RC_ADDR(0x00003a6cu): goto L_3A6C;
    case RC_ADDR(0x00003a70u): goto L_3A70;
    case RC_ADDR(0x00003a74u): goto L_3A74;
    case RC_ADDR(0x00003a78u): goto L_3A78;
    case RC_ADDR(0x00003a7cu): goto L_3A7C;
    case RC_ADDR(0x00003a80u): goto L_3A80;
    case RC_ADDR(0x00003a82u): goto L_3A82;
    case RC_ADDR(0x00003a86u): goto L_3A86;
    case RC_ADDR(0x00003a8au): goto L_3A8A;
    case RC_ADDR(0x00003a8eu): goto L_3A8E;
    case RC_ADDR(0x00003a92u): goto L_3A92;
    case RC_ADDR(0x00003a96u): goto L_3A96;
    case RC_ADDR(0x00003a98u): goto L_3A98;
    case RC_ADDR(0x00003a9cu): goto L_3A9C;
    case RC_ADDR(0x00003aa0u): goto L_3AA0;
    case RC_ADDR(0x00003aa4u): goto L_3AA4;
    case RC_ADDR(0x00003aa8u): goto L_3AA8;
    case RC_ADDR(0x00003aacu): goto L_3AAC;
    case RC_ADDR(0x00003ab0u): goto L_3AB0;
    case RC_ADDR(0x00003ab2u): goto L_3AB2;
    case RC_ADDR(0x00003ab6u): goto L_3AB6;
    case RC_ADDR(0x00003abau): goto L_3ABA;
    case RC_ADDR(0x00003abeu): goto L_3ABE;
    case RC_ADDR(0x00003ac2u): goto L_3AC2;
    case RC_ADDR(0x00003ac6u): goto L_3AC6;
    case RC_ADDR(0x00003ac8u): goto L_3AC8;
    case RC_ADDR(0x00003accu): goto L_3ACC;
    case RC_ADDR(0x00003ad0u): goto L_3AD0;
    case RC_ADDR(0x00003ad4u): goto L_3AD4;
    case RC_ADDR(0x00003ad8u): goto L_3AD8;
    case RC_ADDR(0x00003adcu): goto L_3ADC;
    case RC_ADDR(0x00003ae0u): goto L_3AE0;
    case RC_ADDR(0x00003ae2u): goto L_3AE2;
    case RC_ADDR(0x00003ae6u): goto L_3AE6;
    case RC_ADDR(0x00003aeau): goto L_3AEA;
    case RC_ADDR(0x00003aeeu): goto L_3AEE;
    case RC_ADDR(0x00003af2u): goto L_3AF2;
    case RC_ADDR(0x00003af6u): goto L_3AF6;
    case RC_ADDR(0x00003af8u): goto L_3AF8;
    case RC_ADDR(0x00003afcu): goto L_3AFC;
    case RC_ADDR(0x00003b00u): goto L_3B00;
    case RC_ADDR(0x00003b04u): goto L_3B04;
    case RC_ADDR(0x00003b08u): goto L_3B08;
    case RC_ADDR(0x00003b0cu): goto L_3B0C;
    case RC_ADDR(0x00003b12u): goto L_3B12;
    case RC_ADDR(0x00003b14u): goto L_3B14;
    case RC_ADDR(0x00003b1au): goto L_3B1A;
    case RC_ADDR(0x00003b1cu): goto L_3B1C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_3912:
    /* 00003912   4  link.w A5,#ffffffe8 */
    c->pc = RC_ADDR(0x00003912u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x18u;

L_3916:
    /* 00003916   4  addq.w #1,(ffffeff0,A4) */
    c->pc = RC_ADDR(0x00003916u);
    rc_step(c, m);
    t3 = (c->a[4] - 0x1010u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_391A:
    /* 0000391a   4  tst.w (ffffeff0,A4) */
    c->pc = RC_ADDR(0x0000391au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x1010u));
    rc_set_nzvc(c, t0, RC_W);

L_391E:
    /* 0000391e   4  ble 00003b1a */
    c->pc = RC_ADDR(0x0000391eu);
    rc_step(c, m);
    if (rc_cond(c, 15)) goto L_3B1A;

L_3922:
    /* 00003922   4  movea.l (ffffcb14,A4),A0 */
    c->pc = RC_ADDR(0x00003922u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[0] = t0;

L_3926:
    /* 00003926   6  move.l (ffffcbbc,A4),(4,A0) */
    c->pc = RC_ADDR(0x00003926u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3444u));
    rc_wr32(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_392C:
    /* 0000392c   4  pea (00000009).l */
    c->pc = RC_ADDR(0x0000392cu);
    rc_step(c, m);
    rc_push32(c, m, 0x00000009u);

L_3930:
    /* 00003930   4  move.l (ffffcb14,A4),-(A7) */
    c->pc = RC_ADDR(0x00003930u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3934:
    /* 00003934   4  jsr (ffff838c,A4) */
    c->pc = RC_ADDR(0x00003934u);
    rc_step(c, m);
    /* vector 151 */
    rc_push32(c, m, RC_ADDR(0x00003938u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021de2u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000218eau);
    return;

L_3938:
    /* 00003938   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00003938u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_393A:
    /* 0000393a   4  move.w (ffffefe4,A4),D0 */
    c->pc = RC_ADDR(0x0000393au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_393E:
    /* 0000393e   4  mulu.w #12,D0 */
    c->pc = RC_ADDR(0x0000393eu);
    rc_step(c, m);
    t0 = 0x00000012u;
    rc_mulu(c, 0, t0);

L_3942:
    /* 00003942   4  lea (ffff857c,A4),A0 */
    c->pc = RC_ADDR(0x00003942u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x7a84u);

L_3946:
    /* 00003946   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00003946u);
    rc_step(c, m);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_3948:
    /* 00003948   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00003948u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_394C:
    /* 0000394c   4  add.l (ffffeff6,A4),D1 */
    c->pc = RC_ADDR(0x0000394cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x100au));
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_3950:
    /* 00003950   4  move.l D1,(fffffff4,A5) */
    c->pc = RC_ADDR(0x00003950u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3954:
    /* 00003954   4  move.w (ffffefe4,A4),D0 */
    c->pc = RC_ADDR(0x00003954u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3958:
    /* 00003958   4  mulu.w #12,D0 */
    c->pc = RC_ADDR(0x00003958u);
    rc_step(c, m);
    t0 = 0x00000012u;
    rc_mulu(c, 0, t0);

L_395C:
    /* 0000395c   4  lea (ffff857e,A4),A0 */
    c->pc = RC_ADDR(0x0000395cu);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x7a82u);

L_3960:
    /* 00003960   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00003960u);
    rc_step(c, m);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_3962:
    /* 00003962   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00003962u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3966:
    /* 00003966   4  add.l (ffffeffa,A4),D1 */
    c->pc = RC_ADDR(0x00003966u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x1006u));
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_396A:
    /* 0000396a   4  move.l D1,(fffffff0,A5) */
    c->pc = RC_ADDR(0x0000396au);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_396E:
    /* 0000396e   4  move.w (ffffefe4,A4),D0 */
    c->pc = RC_ADDR(0x0000396eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3972:
    /* 00003972   4  mulu.w #12,D0 */
    c->pc = RC_ADDR(0x00003972u);
    rc_step(c, m);
    t0 = 0x00000012u;
    rc_mulu(c, 0, t0);

L_3976:
    /* 00003976   4  lea (ffff8580,A4),A0 */
    c->pc = RC_ADDR(0x00003976u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x7a80u);

L_397A:
    /* 0000397a   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x0000397au);
    rc_step(c, m);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_397C:
    /* 0000397c   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000397cu);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3980:
    /* 00003980   4  add.l (ffffeff6,A4),D1 */
    c->pc = RC_ADDR(0x00003980u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x100au));
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_3984:
    /* 00003984   4  move.l D1,(ffffffec,A5) */
    c->pc = RC_ADDR(0x00003984u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x14u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3988:
    /* 00003988   4  move.w (ffffefe4,A4),D0 */
    c->pc = RC_ADDR(0x00003988u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_398C:
    /* 0000398c   4  mulu.w #12,D0 */
    c->pc = RC_ADDR(0x0000398cu);
    rc_step(c, m);
    t0 = 0x00000012u;
    rc_mulu(c, 0, t0);

L_3990:
    /* 00003990   4  lea (ffff8582,A4),A0 */
    c->pc = RC_ADDR(0x00003990u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x7a7eu);

L_3994:
    /* 00003994   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00003994u);
    rc_step(c, m);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_3996:
    /* 00003996   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00003996u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_399A:
    /* 0000399a   4  add.l (ffffeffa,A4),D1 */
    c->pc = RC_ADDR(0x0000399au);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x1006u));
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_399E:
    /* 0000399e   4  move.l D1,(ffffffe8,A5) */
    c->pc = RC_ADDR(0x0000399eu);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x18u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_39A2:
    /* 000039a2   6  move.w #1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x000039a2u);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_39A8:
    /* 000039a8   6  move.w #1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x000039a8u);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_39AE:
    /* 000039ae   6  move.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000039aeu);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_39B4:
    /* 000039b4   6  move.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000039b4u);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_39BA:
    /* 000039ba   8  cmpi.l #140,(fffffff4,A5) */
    c->pc = RC_ADDR(0x000039bau);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    rc_cmp(c, RC_L, t0, 0x00000140u);

L_39C2:
    /* 000039c2   4  bge 00003b0c */
    c->pc = RC_ADDR(0x000039c2u);
    rc_step(c, m);
    if (rc_cond(c, 12)) goto L_3B0C;

L_39C6:
    /* 000039c6   4  move.w (ffffcbc2,A4),D0 */
    c->pc = RC_ADDR(0x000039c6u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x343eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_39CA:
    /* 000039ca   2  ext.l D0 */
    c->pc = RC_ADDR(0x000039cau);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_39CC:
    /* 000039cc   4  move.l (fffffff0,A5),D1 */
    c->pc = RC_ADDR(0x000039ccu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_39D0:
    /* 000039d0   2  cmp.l D0,D1 */
    c->pc = RC_ADDR(0x000039d0u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_39D2:
    /* 000039d2   4  bge 00003b0c */
    c->pc = RC_ADDR(0x000039d2u);
    rc_step(c, m);
    if (rc_cond(c, 12)) goto L_3B0C;

L_39D6:
    /* 000039d6   4  tst.l (ffffffec,A5) */
    c->pc = RC_ADDR(0x000039d6u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x14u));
    rc_set_nzvc(c, t0, RC_L);

L_39DA:
    /* 000039da   4  ble 00003b0c */
    c->pc = RC_ADDR(0x000039dau);
    rc_step(c, m);
    if (rc_cond(c, 15)) goto L_3B0C;

L_39DE:
    /* 000039de   4  tst.l (ffffffe8,A5) */
    c->pc = RC_ADDR(0x000039deu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x18u));
    rc_set_nzvc(c, t0, RC_L);

L_39E2:
    /* 000039e2   4  ble 00003b0c */
    c->pc = RC_ADDR(0x000039e2u);
    rc_step(c, m);
    if (rc_cond(c, 15)) goto L_3B0C;

L_39E6:
    /* 000039e6   4  tst.l (fffffff4,A5) */
    c->pc = RC_ADDR(0x000039e6u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    rc_set_nzvc(c, t0, RC_L);

L_39EA:
    /* 000039ea   2  bge 000039f4 */
    c->pc = RC_ADDR(0x000039eau);
    rc_step(c, m);
    if (rc_cond(c, 12)) goto L_39F4;

L_39EC:
    /* 000039ec   4  clr.l (fffffff4,A5) */
    c->pc = RC_ADDR(0x000039ecu);
    rc_step(c, m);
    rc_wr32(c, m, (c->a[5] - 0xcu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_39F0:
    /* 000039f0   4  clr.w (fffffff8,A5) */
    c->pc = RC_ADDR(0x000039f0u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_39F4:
    /* 000039f4   4  tst.l (fffffff0,A5) */
    c->pc = RC_ADDR(0x000039f4u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    rc_set_nzvc(c, t0, RC_L);

L_39F8:
    /* 000039f8   2  bge 00003a02 */
    c->pc = RC_ADDR(0x000039f8u);
    rc_step(c, m);
    if (rc_cond(c, 12)) goto L_3A02;

L_39FA:
    /* 000039fa   4  clr.l (fffffff0,A5) */
    c->pc = RC_ADDR(0x000039fau);
    rc_step(c, m);
    rc_wr32(c, m, (c->a[5] - 0x10u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_39FE:
    /* 000039fe   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x000039feu);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3A02:
    /* 00003a02   8  cmpi.l #13f,(ffffffec,A5) */
    c->pc = RC_ADDR(0x00003a02u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x14u));
    rc_cmp(c, RC_L, t0, 0x0000013fu);

L_3A0A:
    /* 00003a0a   2  ble 00003a18 */
    c->pc = RC_ADDR(0x00003a0au);
    rc_step(c, m);
    if (rc_cond(c, 15)) goto L_3A18;

L_3A0C:
    /* 00003a0c   8  move.l #13f,(ffffffec,A5) */
    c->pc = RC_ADDR(0x00003a0cu);
    rc_step(c, m);
    t0 = 0x0000013fu;
    rc_wr32(c, m, (c->a[5] - 0x14u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3A14:
    /* 00003a14   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x00003a14u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3A18:
    /* 00003a18   4  move.w (ffffcbc2,A4),D0 */
    c->pc = RC_ADDR(0x00003a18u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x343eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3A1C:
    /* 00003a1c   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x00003a1cu);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_3A1E:
    /* 00003a1e   2  ext.l D0 */
    c->pc = RC_ADDR(0x00003a1eu);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_3A20:
    /* 00003a20   4  move.l (ffffffe8,A5),D1 */
    c->pc = RC_ADDR(0x00003a20u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x18u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_3A24:
    /* 00003a24   2  cmp.l D0,D1 */
    c->pc = RC_ADDR(0x00003a24u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_3A26:
    /* 00003a26   2  ble 00003a38 */
    c->pc = RC_ADDR(0x00003a26u);
    rc_step(c, m);
    if (rc_cond(c, 15)) goto L_3A38;

L_3A28:
    /* 00003a28   4  move.w (ffffcbc2,A4),D0 */
    c->pc = RC_ADDR(0x00003a28u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x343eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3A2C:
    /* 00003a2c   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x00003a2cu);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_3A2E:
    /* 00003a2e   2  ext.l D0 */
    c->pc = RC_ADDR(0x00003a2eu);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_3A30:
    /* 00003a30   4  move.l D0,(ffffffe8,A5) */
    c->pc = RC_ADDR(0x00003a30u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x18u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3A34:
    /* 00003a34   4  clr.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x00003a34u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3A38:
    /* 00003a38   4  move.l (fffffff0,A5),-(A7) */
    c->pc = RC_ADDR(0x00003a38u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3A3C:
    /* 00003a3c   4  move.l (fffffff4,A5),-(A7) */
    c->pc = RC_ADDR(0x00003a3cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3A40:
    /* 00003a40   4  move.l (ffffcb14,A4),-(A7) */
    c->pc = RC_ADDR(0x00003a40u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3A44:
    /* 00003a44   4  jsr (ffff837a,A4) */
    c->pc = RC_ADDR(0x00003a44u);
    rc_step(c, m);
    /* vector 148 */
    rc_push32(c, m, RC_ADDR(0x00003a48u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021dd0u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000218b2u);
    return;

L_3A48:
    /* 00003a48   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00003a48u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_3A4C:
    /* 00003a4c   4  tst.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00003a4cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_set_nzvc(c, t0, RC_W);

L_3A50:
    /* 00003a50   2  beq 00003a68 */
    c->pc = RC_ADDR(0x00003a50u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_3A68;

L_3A52:
    /* 00003a52   4  move.l (fffffff0,A5),-(A7) */
    c->pc = RC_ADDR(0x00003a52u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3A56:
    /* 00003a56   4  move.l (ffffffec,A5),-(A7) */
    c->pc = RC_ADDR(0x00003a56u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x14u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3A5A:
    /* 00003a5a   4  move.l (ffffcb14,A4),-(A7) */
    c->pc = RC_ADDR(0x00003a5au);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3A5E:
    /* 00003a5e   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x00003a5eu);
    rc_step(c, m);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x00003a62u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021dbeu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000217fcu);
    return;

L_3A62:
    /* 00003a62   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00003a62u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_3A66:
    /* 00003a66   2  bra 00003a7c */
    c->pc = RC_ADDR(0x00003a66u);
    rc_step(c, m);
    goto L_3A7C;

L_3A68:
    /* 00003a68   4  move.l (fffffff0,A5),-(A7) */
    c->pc = RC_ADDR(0x00003a68u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3A6C:
    /* 00003a6c   4  move.l (ffffffec,A5),-(A7) */
    c->pc = RC_ADDR(0x00003a6cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x14u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3A70:
    /* 00003a70   4  move.l (ffffcb14,A4),-(A7) */
    c->pc = RC_ADDR(0x00003a70u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3A74:
    /* 00003a74   4  jsr (ffff837a,A4) */
    c->pc = RC_ADDR(0x00003a74u);
    rc_step(c, m);
    /* vector 148 */
    rc_push32(c, m, RC_ADDR(0x00003a78u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021dd0u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000218b2u);
    return;

L_3A78:
    /* 00003a78   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00003a78u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_3A7C:
    /* 00003a7c   4  tst.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x00003a7cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_W);

L_3A80:
    /* 00003a80   2  beq 00003a98 */
    c->pc = RC_ADDR(0x00003a80u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_3A98;

L_3A82:
    /* 00003a82   4  move.l (ffffffe8,A5),-(A7) */
    c->pc = RC_ADDR(0x00003a82u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x18u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3A86:
    /* 00003a86   4  move.l (ffffffec,A5),-(A7) */
    c->pc = RC_ADDR(0x00003a86u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x14u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3A8A:
    /* 00003a8a   4  move.l (ffffcb14,A4),-(A7) */
    c->pc = RC_ADDR(0x00003a8au);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3A8E:
    /* 00003a8e   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x00003a8eu);
    rc_step(c, m);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x00003a92u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021dbeu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000217fcu);
    return;

L_3A92:
    /* 00003a92   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00003a92u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_3A96:
    /* 00003a96   2  bra 00003aac */
    c->pc = RC_ADDR(0x00003a96u);
    rc_step(c, m);
    goto L_3AAC;

L_3A98:
    /* 00003a98   4  move.l (ffffffe8,A5),-(A7) */
    c->pc = RC_ADDR(0x00003a98u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x18u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3A9C:
    /* 00003a9c   4  move.l (ffffffec,A5),-(A7) */
    c->pc = RC_ADDR(0x00003a9cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x14u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3AA0:
    /* 00003aa0   4  move.l (ffffcb14,A4),-(A7) */
    c->pc = RC_ADDR(0x00003aa0u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3AA4:
    /* 00003aa4   4  jsr (ffff837a,A4) */
    c->pc = RC_ADDR(0x00003aa4u);
    rc_step(c, m);
    /* vector 148 */
    rc_push32(c, m, RC_ADDR(0x00003aa8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021dd0u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000218b2u);
    return;

L_3AA8:
    /* 00003aa8   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00003aa8u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_3AAC:
    /* 00003aac   4  tst.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x00003aacu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_set_nzvc(c, t0, RC_W);

L_3AB0:
    /* 00003ab0   2  beq 00003ac8 */
    c->pc = RC_ADDR(0x00003ab0u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_3AC8;

L_3AB2:
    /* 00003ab2   4  move.l (ffffffe8,A5),-(A7) */
    c->pc = RC_ADDR(0x00003ab2u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x18u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3AB6:
    /* 00003ab6   4  move.l (fffffff4,A5),-(A7) */
    c->pc = RC_ADDR(0x00003ab6u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3ABA:
    /* 00003aba   4  move.l (ffffcb14,A4),-(A7) */
    c->pc = RC_ADDR(0x00003abau);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3ABE:
    /* 00003abe   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x00003abeu);
    rc_step(c, m);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x00003ac2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021dbeu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000217fcu);
    return;

L_3AC2:
    /* 00003ac2   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00003ac2u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_3AC6:
    /* 00003ac6   2  bra 00003adc */
    c->pc = RC_ADDR(0x00003ac6u);
    rc_step(c, m);
    goto L_3ADC;

L_3AC8:
    /* 00003ac8   4  move.l (ffffffe8,A5),-(A7) */
    c->pc = RC_ADDR(0x00003ac8u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x18u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3ACC:
    /* 00003acc   4  move.l (fffffff4,A5),-(A7) */
    c->pc = RC_ADDR(0x00003accu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3AD0:
    /* 00003ad0   4  move.l (ffffcb14,A4),-(A7) */
    c->pc = RC_ADDR(0x00003ad0u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3AD4:
    /* 00003ad4   4  jsr (ffff837a,A4) */
    c->pc = RC_ADDR(0x00003ad4u);
    rc_step(c, m);
    /* vector 148 */
    rc_push32(c, m, RC_ADDR(0x00003ad8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021dd0u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000218b2u);
    return;

L_3AD8:
    /* 00003ad8   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00003ad8u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_3ADC:
    /* 00003adc   4  tst.w (fffffff8,A5) */
    c->pc = RC_ADDR(0x00003adcu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_3AE0:
    /* 00003ae0   2  beq 00003af8 */
    c->pc = RC_ADDR(0x00003ae0u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_3AF8;

L_3AE2:
    /* 00003ae2   4  move.l (fffffff0,A5),-(A7) */
    c->pc = RC_ADDR(0x00003ae2u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3AE6:
    /* 00003ae6   4  move.l (fffffff4,A5),-(A7) */
    c->pc = RC_ADDR(0x00003ae6u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3AEA:
    /* 00003aea   4  move.l (ffffcb14,A4),-(A7) */
    c->pc = RC_ADDR(0x00003aeau);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3AEE:
    /* 00003aee   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x00003aeeu);
    rc_step(c, m);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x00003af2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021dbeu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000217fcu);
    return;

L_3AF2:
    /* 00003af2   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00003af2u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_3AF6:
    /* 00003af6   2  bra 00003b0c */
    c->pc = RC_ADDR(0x00003af6u);
    rc_step(c, m);
    goto L_3B0C;

L_3AF8:
    /* 00003af8   4  move.l (fffffff0,A5),-(A7) */
    c->pc = RC_ADDR(0x00003af8u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3AFC:
    /* 00003afc   4  move.l (fffffff4,A5),-(A7) */
    c->pc = RC_ADDR(0x00003afcu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3B00:
    /* 00003b00   4  move.l (ffffcb14,A4),-(A7) */
    c->pc = RC_ADDR(0x00003b00u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3B04:
    /* 00003b04   4  jsr (ffff837a,A4) */
    c->pc = RC_ADDR(0x00003b04u);
    rc_step(c, m);
    /* vector 148 */
    rc_push32(c, m, RC_ADDR(0x00003b08u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021dd0u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000218b2u);
    return;

L_3B08:
    /* 00003b08   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00003b08u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_3B0C:
    /* 00003b0c   6  cmpi.w #3,(ffffeff0,A4) */
    c->pc = RC_ADDR(0x00003b0cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x1010u));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_3B12:
    /* 00003b12   2  ble 00003b1a */
    c->pc = RC_ADDR(0x00003b12u);
    rc_step(c, m);
    if (rc_cond(c, 15)) goto L_3B1A;

L_3B14:
    /* 00003b14   6  move.w #fffd,(ffffeff0,A4) */
    c->pc = RC_ADDR(0x00003b14u);
    rc_step(c, m);
    t0 = 0x0000fffdu;
    rc_wr16(c, m, (c->a[4] - 0x1010u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3B1A:
    /* 00003b1a   2  unlk A5 */
    c->pc = RC_ADDR(0x00003b1au);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_3B1C:
    /* 00003b1c   2  rts */
    c->pc = RC_ADDR(0x00003b1cu);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
