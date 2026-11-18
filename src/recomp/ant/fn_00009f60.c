/* fn_00009f60 - 522 byte(s), 143 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00009f60(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00009f60u): goto L_9F60;
    case RC_ADDR(0x00009f64u): goto L_9F64;
    case RC_ADDR(0x00009f68u): goto L_9F68;
    case RC_ADDR(0x00009f6cu): goto L_9F6C;
    case RC_ADDR(0x00009f6eu): goto L_9F6E;
    case RC_ADDR(0x00009f72u): goto L_9F72;
    case RC_ADDR(0x00009f76u): goto L_9F76;
    case RC_ADDR(0x00009f78u): goto L_9F78;
    case RC_ADDR(0x00009f7cu): goto L_9F7C;
    case RC_ADDR(0x00009f7eu): goto L_9F7E;
    case RC_ADDR(0x00009f82u): goto L_9F82;
    case RC_ADDR(0x00009f86u): goto L_9F86;
    case RC_ADDR(0x00009f8au): goto L_9F8A;
    case RC_ADDR(0x00009f92u): goto L_9F92;
    case RC_ADDR(0x00009f94u): goto L_9F94;
    case RC_ADDR(0x00009f98u): goto L_9F98;
    case RC_ADDR(0x00009f9cu): goto L_9F9C;
    case RC_ADDR(0x00009f9eu): goto L_9F9E;
    case RC_ADDR(0x00009fa2u): goto L_9FA2;
    case RC_ADDR(0x00009fa8u): goto L_9FA8;
    case RC_ADDR(0x00009facu): goto L_9FAC;
    case RC_ADDR(0x00009fb0u): goto L_9FB0;
    case RC_ADDR(0x00009fb4u): goto L_9FB4;
    case RC_ADDR(0x00009fb8u): goto L_9FB8;
    case RC_ADDR(0x00009fbcu): goto L_9FBC;
    case RC_ADDR(0x00009fbeu): goto L_9FBE;
    case RC_ADDR(0x00009fc2u): goto L_9FC2;
    case RC_ADDR(0x00009fc6u): goto L_9FC6;
    case RC_ADDR(0x00009fcau): goto L_9FCA;
    case RC_ADDR(0x00009fceu): goto L_9FCE;
    case RC_ADDR(0x00009fd2u): goto L_9FD2;
    case RC_ADDR(0x00009fd4u): goto L_9FD4;
    case RC_ADDR(0x00009fd8u): goto L_9FD8;
    case RC_ADDR(0x00009fdcu): goto L_9FDC;
    case RC_ADDR(0x00009fe0u): goto L_9FE0;
    case RC_ADDR(0x00009fe4u): goto L_9FE4;
    case RC_ADDR(0x00009fe8u): goto L_9FE8;
    case RC_ADDR(0x00009fecu): goto L_9FEC;
    case RC_ADDR(0x00009ff0u): goto L_9FF0;
    case RC_ADDR(0x00009ff2u): goto L_9FF2;
    case RC_ADDR(0x00009ff6u): goto L_9FF6;
    case RC_ADDR(0x00009ff8u): goto L_9FF8;
    case RC_ADDR(0x00009ffcu): goto L_9FFC;
    case RC_ADDR(0x0000a000u): goto L_A000;
    case RC_ADDR(0x0000a004u): goto L_A004;
    case RC_ADDR(0x0000a00au): goto L_A00A;
    case RC_ADDR(0x0000a00eu): goto L_A00E;
    case RC_ADDR(0x0000a012u): goto L_A012;
    case RC_ADDR(0x0000a016u): goto L_A016;
    case RC_ADDR(0x0000a01au): goto L_A01A;
    case RC_ADDR(0x0000a01cu): goto L_A01C;
    case RC_ADDR(0x0000a020u): goto L_A020;
    case RC_ADDR(0x0000a024u): goto L_A024;
    case RC_ADDR(0x0000a028u): goto L_A028;
    case RC_ADDR(0x0000a02au): goto L_A02A;
    case RC_ADDR(0x0000a02cu): goto L_A02C;
    case RC_ADDR(0x0000a02eu): goto L_A02E;
    case RC_ADDR(0x0000a030u): goto L_A030;
    case RC_ADDR(0x0000a034u): goto L_A034;
    case RC_ADDR(0x0000a036u): goto L_A036;
    case RC_ADDR(0x0000a038u): goto L_A038;
    case RC_ADDR(0x0000a03cu): goto L_A03C;
    case RC_ADDR(0x0000a040u): goto L_A040;
    case RC_ADDR(0x0000a044u): goto L_A044;
    case RC_ADDR(0x0000a046u): goto L_A046;
    case RC_ADDR(0x0000a048u): goto L_A048;
    case RC_ADDR(0x0000a04cu): goto L_A04C;
    case RC_ADDR(0x0000a050u): goto L_A050;
    case RC_ADDR(0x0000a052u): goto L_A052;
    case RC_ADDR(0x0000a054u): goto L_A054;
    case RC_ADDR(0x0000a058u): goto L_A058;
    case RC_ADDR(0x0000a05cu): goto L_A05C;
    case RC_ADDR(0x0000a060u): goto L_A060;
    case RC_ADDR(0x0000a064u): goto L_A064;
    case RC_ADDR(0x0000a068u): goto L_A068;
    case RC_ADDR(0x0000a06cu): goto L_A06C;
    case RC_ADDR(0x0000a070u): goto L_A070;
    case RC_ADDR(0x0000a074u): goto L_A074;
    case RC_ADDR(0x0000a076u): goto L_A076;
    case RC_ADDR(0x0000a07au): goto L_A07A;
    case RC_ADDR(0x0000a07eu): goto L_A07E;
    case RC_ADDR(0x0000a082u): goto L_A082;
    case RC_ADDR(0x0000a086u): goto L_A086;
    case RC_ADDR(0x0000a08au): goto L_A08A;
    case RC_ADDR(0x0000a08cu): goto L_A08C;
    case RC_ADDR(0x0000a090u): goto L_A090;
    case RC_ADDR(0x0000a094u): goto L_A094;
    case RC_ADDR(0x0000a098u): goto L_A098;
    case RC_ADDR(0x0000a09cu): goto L_A09C;
    case RC_ADDR(0x0000a0a0u): goto L_A0A0;
    case RC_ADDR(0x0000a0a4u): goto L_A0A4;
    case RC_ADDR(0x0000a0a6u): goto L_A0A6;
    case RC_ADDR(0x0000a0aau): goto L_A0AA;
    case RC_ADDR(0x0000a0aeu): goto L_A0AE;
    case RC_ADDR(0x0000a0b2u): goto L_A0B2;
    case RC_ADDR(0x0000a0b4u): goto L_A0B4;
    case RC_ADDR(0x0000a0b8u): goto L_A0B8;
    case RC_ADDR(0x0000a0bcu): goto L_A0BC;
    case RC_ADDR(0x0000a0c0u): goto L_A0C0;
    case RC_ADDR(0x0000a0c4u): goto L_A0C4;
    case RC_ADDR(0x0000a0c8u): goto L_A0C8;
    case RC_ADDR(0x0000a0ccu): goto L_A0CC;
    case RC_ADDR(0x0000a0d0u): goto L_A0D0;
    case RC_ADDR(0x0000a0d4u): goto L_A0D4;
    case RC_ADDR(0x0000a0d6u): goto L_A0D6;
    case RC_ADDR(0x0000a0dau): goto L_A0DA;
    case RC_ADDR(0x0000a0e0u): goto L_A0E0;
    case RC_ADDR(0x0000a0e4u): goto L_A0E4;
    case RC_ADDR(0x0000a0e8u): goto L_A0E8;
    case RC_ADDR(0x0000a0eau): goto L_A0EA;
    case RC_ADDR(0x0000a0eeu): goto L_A0EE;
    case RC_ADDR(0x0000a0f2u): goto L_A0F2;
    case RC_ADDR(0x0000a0f6u): goto L_A0F6;
    case RC_ADDR(0x0000a0fau): goto L_A0FA;
    case RC_ADDR(0x0000a0feu): goto L_A0FE;
    case RC_ADDR(0x0000a102u): goto L_A102;
    case RC_ADDR(0x0000a106u): goto L_A106;
    case RC_ADDR(0x0000a10au): goto L_A10A;
    case RC_ADDR(0x0000a10eu): goto L_A10E;
    case RC_ADDR(0x0000a112u): goto L_A112;
    case RC_ADDR(0x0000a116u): goto L_A116;
    case RC_ADDR(0x0000a11au): goto L_A11A;
    case RC_ADDR(0x0000a11cu): goto L_A11C;
    case RC_ADDR(0x0000a120u): goto L_A120;
    case RC_ADDR(0x0000a128u): goto L_A128;
    case RC_ADDR(0x0000a12cu): goto L_A12C;
    case RC_ADDR(0x0000a12eu): goto L_A12E;
    case RC_ADDR(0x0000a132u): goto L_A132;
    case RC_ADDR(0x0000a134u): goto L_A134;
    case RC_ADDR(0x0000a13au): goto L_A13A;
    case RC_ADDR(0x0000a13cu): goto L_A13C;
    case RC_ADDR(0x0000a142u): goto L_A142;
    case RC_ADDR(0x0000a148u): goto L_A148;
    case RC_ADDR(0x0000a14au): goto L_A14A;
    case RC_ADDR(0x0000a14eu): goto L_A14E;
    case RC_ADDR(0x0000a152u): goto L_A152;
    case RC_ADDR(0x0000a154u): goto L_A154;
    case RC_ADDR(0x0000a158u): goto L_A158;
    case RC_ADDR(0x0000a15cu): goto L_A15C;
    case RC_ADDR(0x0000a160u): goto L_A160;
    case RC_ADDR(0x0000a164u): goto L_A164;
    case RC_ADDR(0x0000a166u): goto L_A166;
    case RC_ADDR(0x0000a168u): goto L_A168;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_9F60:
    /* 00009f60   4  link.w A5,#fffffff4 */
    c->pc = RC_ADDR(0x00009f60u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xcu;

L_9F64:
    /* 00009f64   4  clr.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x00009f64u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_9F68:
    /* 00009f68   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00009f68u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_9F6C:
    /* 00009f6c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00009f6cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_9F6E:
    /* 00009f6e   4  lea (ad2,A4),A0 */
    c->pc = RC_ADDR(0x00009f6eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xad2u);

L_9F72:
    /* 00009f72   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00009f72u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_9F76:
    /* 00009f76   2  beq 00009f86 */
    c->pc = RC_ADDR(0x00009f76u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_9F86;

L_9F78:
    /* 00009f78   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00009f78u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_9F7C:
    /* 00009f7c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00009f7cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_9F7E:
    /* 00009f7e   4  lea (ad2,A4),A0 */
    c->pc = RC_ADDR(0x00009f7eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xad2u);

L_9F82:
    /* 00009f82   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00009f82u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_9F86:
    /* 00009f86   4  addq.l #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00009f86u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_9F8A:
    /* 00009f8a   8  cmpi.l #3,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00009f8au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x00000003u);

L_9F92:
    /* 00009f92   2  blt 00009f68 */
    c->pc = RC_ADDR(0x00009f92u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_9F68; }

L_9F94:
    /* 00009f94   4  move.w (ca8,A4),D0 */
    c->pc = RC_ADDR(0x00009f94u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xca8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9F98:
    /* 00009f98   4  cmp.w (ffff855a,A4),D0 */
    c->pc = RC_ADDR(0x00009f98u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7aa6u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_9F9C:
    /* 00009f9c   2  bne 00009fa8 */
    c->pc = RC_ADDR(0x00009f9cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_9FA8;

L_9F9E:
    /* 00009f9e   4  addq.w #1,(ca8,A4) */
    c->pc = RC_ADDR(0x00009f9eu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xca8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_9FA2:
    /* 00009fa2   6  move.w #1,(ffff8f86,A4) */
    c->pc = RC_ADDR(0x00009fa2u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x707au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9FA8:
    /* 00009fa8   4  tst.w (ffffd5ca,A4) */
    c->pc = RC_ADDR(0x00009fa8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a36u));
    rc_set_nzvc(c, t0, RC_W);

L_9FAC:
    /* 00009fac   4  beq 0000a166 */
    c->pc = RC_ADDR(0x00009facu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_A166;

L_9FB0:
    /* 00009fb0   4  clr.w (ffffd5ca,A4) */
    c->pc = RC_ADDR(0x00009fb0u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x2a36u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_9FB4:
    /* 00009fb4   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00009fb4u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9FB8:
    /* 00009fb8   4  jsr (ffff826c,A4) */
    c->pc = RC_ADDR(0x00009fb8u);
    rc_step(c, m, 18);
    /* vector 103 */
    rc_push32(c, m, RC_ADDR(0x00009fbcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d62u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00020c7eu);
    return;

L_9FBC:
    /* 00009fbc   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00009fbcu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_9FBE:
    /* 00009fbe   4  move.w (ca8,A4),D0 */
    c->pc = RC_ADDR(0x00009fbeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xca8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9FC2:
    /* 00009fc2   4  cmp.w (ffff855a,A4),D0 */
    c->pc = RC_ADDR(0x00009fc2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7aa6u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_9FC6:
    /* 00009fc6   4  bge 0000a12e */
    c->pc = RC_ADDR(0x00009fc6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_A12E;

L_9FCA:
    /* 00009fca   4  clr.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x00009fcau);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_9FCE:
    /* 00009fce   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00009fceu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_9FD2:
    /* 00009fd2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00009fd2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_9FD4:
    /* 00009fd4   4  lea (ad2,A4),A0 */
    c->pc = RC_ADDR(0x00009fd4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xad2u);

L_9FD8:
    /* 00009fd8   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00009fd8u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_9FDC:
    /* 00009fdc   4  bne 0000a11c */
    c->pc = RC_ADDR(0x00009fdcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_A11C;

L_9FE0:
    /* 00009fe0   4  move.w (fffffffe,A5),-(A7) */
    c->pc = RC_ADDR(0x00009fe0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9FE4:
    /* 00009fe4   4  move.l (abc,A4),-(A7) */
    c->pc = RC_ADDR(0x00009fe4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xabcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9FE8:
    /* 00009fe8   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x00009fe8u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9FEC:
    /* 00009fec   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x00009fecu);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x00009ff0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_9FF0:
    /* 00009ff0   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00009ff0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_9FF2:
    /* 00009ff2   4  jsr (ffff83a4,A4) */
    c->pc = RC_ADDR(0x00009ff2u);
    rc_step(c, m, 18);
    /* vector 155 */
    rc_push32(c, m, RC_ADDR(0x00009ff6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e9au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023972u);
    return;

L_9FF6:
    /* 00009ff6   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00009ff6u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_9FF8:
    /* 00009ff8   4  movea.l (ac4,A4),A0 */
    c->pc = RC_ADDR(0x00009ff8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0xac4u));
    c->a[0] = t0;

L_9FFC:
    /* 00009ffc   4  movea.l (c,A0),A1 */
    c->pc = RC_ADDR(0x00009ffcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_A000:
    /* 0000a000   4  move.l (30,A1),-(A7) */
    c->pc = RC_ADDR(0x0000a000u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[1] + 0x30u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_A004:
    /* 0000a004   6  pea (00043210).l */
    c->pc = RC_ADDR(0x0000a004u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00043210u);

L_A00A:
    /* 0000a00a   4  pea (000000ca).l */
    c->pc = RC_ADDR(0x0000a00au);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000000cau);

L_A00E:
    /* 0000a00e   4  pea (000000c8).l */
    c->pc = RC_ADDR(0x0000a00eu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000000c8u);

L_A012:
    /* 0000a012   4  pea (000000c8).l */
    c->pc = RC_ADDR(0x0000a012u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000000c8u);

L_A016:
    /* 0000a016   4  move.w (acc,A4),D0 */
    c->pc = RC_ADDR(0x0000a016u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xaccu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A01A:
    /* 0000a01a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000a01au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_A01C:
    /* 0000a01c   4  movea.l (ac4,A4),A0 */
    c->pc = RC_ADDR(0x0000a01cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0xac4u));
    c->a[0] = t0;

L_A020:
    /* 0000a020   4  movea.l (c,A0),A1 */
    c->pc = RC_ADDR(0x0000a020u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_A024:
    /* 0000a024   4  move.w (a,A1),D1 */
    c->pc = RC_ADDR(0x0000a024u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[1] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A028:
    /* 0000a028   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000a028u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_A02A:
    /* 0000a02a   2  sub.l D1,D0 */
    c->pc = RC_ADDR(0x0000a02au);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_A02C:
    /* 0000a02c   2  subq.l #6,D0 */
    c->pc = RC_ADDR(0x0000a02cu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000006u;
    rc_flags_sub(c, RC_L, t1, 0x00000006u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_A02E:
    /* 0000a02e   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0000a02eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_A030:
    /* 0000a030   4  move.w (aca,A4),D0 */
    c->pc = RC_ADDR(0x0000a030u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xacau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A034:
    /* 0000a034   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000a034u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_A036:
    /* 0000a036   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x0000a036u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_A038:
    /* 0000a038   4  movea.l (ac4,A4),A1 */
    c->pc = RC_ADDR(0x0000a038u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0xac4u));
    c->a[1] = t0;

L_A03C:
    /* 0000a03c   4  movea.l (c,A1),A6 */
    c->pc = RC_ADDR(0x0000a03cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[1] + 0xcu));
    c->a[6] = t0;

L_A040:
    /* 0000a040   4  move.w (8,A6),D0 */
    c->pc = RC_ADDR(0x0000a040u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[6] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A044:
    /* 0000a044   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000a044u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_A046:
    /* 0000a046   2  suba.l D0,A0 */
    c->pc = RC_ADDR(0x0000a046u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] -= t0;

L_A048:
    /* 0000a048   4  pea (fffffff3,A0) */
    c->pc = RC_ADDR(0x0000a048u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[0] - 0xdu));

L_A04C:
    /* 0000a04c   4  move.l (ffffd340,A4),-(A7) */
    c->pc = RC_ADDR(0x0000a04cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_A050:
    /* 0000a050   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000a050u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_A052:
    /* 0000a052   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000a052u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_A054:
    /* 0000a054   4  movea.l (ac4,A4),A0 */
    c->pc = RC_ADDR(0x0000a054u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0xac4u));
    c->a[0] = t0;

L_A058:
    /* 0000a058   4  movea.l (c,A0),A1 */
    c->pc = RC_ADDR(0x0000a058u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_A05C:
    /* 0000a05c   4  pea (c,A1) */
    c->pc = RC_ADDR(0x0000a05cu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[1] + 0xcu));

L_A060:
    /* 0000a060   4  jsr (ffff8260,A4) */
    c->pc = RC_ADDR(0x0000a060u);
    rc_step(c, m, 18);
    /* vector 101 */
    rc_push32(c, m, RC_ADDR(0x0000a064u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d56u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00020940u);
    return;

L_A064:
    /* 0000a064   4  lea (30,A7),A7 */
    c->pc = RC_ADDR(0x0000a064u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x30u);

L_A068:
    /* 0000a068   4  jsr (ffff83ce,A4) */
    c->pc = RC_ADDR(0x0000a068u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000a06cu));
    rc_depth++;
    t3 = (c->a[4] - 0x7c32u);
    c->pc = t3;
    return;

L_A06C:
    /* 0000a06c   4  jsr (ffff8386,A4) */
    c->pc = RC_ADDR(0x0000a06cu);
    rc_step(c, m, 18);
    /* vector 150 */
    rc_push32(c, m, RC_ADDR(0x0000a070u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e7cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023896u);
    return;

L_A070:
    /* 0000a070   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000a070u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_A074:
    /* 0000a074   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000a074u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_A076:
    /* 0000a076   4  lea (adc,A4),A0 */
    c->pc = RC_ADDR(0x0000a076u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xadcu);

L_A07A:
    /* 0000a07a   4  move.w (aca,A4),D1 */
    c->pc = RC_ADDR(0x0000a07au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xacau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A07E:
    /* 0000a07e   4  sub.w #1b,D1 */
    c->pc = RC_ADDR(0x0000a07eu);
    rc_step(c, m, 10);
    t0 = 0x0000001bu;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_A082:
    /* 0000a082   4  move.w D1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000a082u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 1, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_A086:
    /* 0000a086   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000a086u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_A08A:
    /* 0000a08a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000a08au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_A08C:
    /* 0000a08c   4  lea (ae6,A4),A0 */
    c->pc = RC_ADDR(0x0000a08cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xae6u);

L_A090:
    /* 0000a090   4  move.w (acc,A4),D1 */
    c->pc = RC_ADDR(0x0000a090u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xaccu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A094:
    /* 0000a094   4  sub.w #3a,D1 */
    c->pc = RC_ADDR(0x0000a094u);
    rc_step(c, m, 10);
    t0 = 0x0000003au;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_A098:
    /* 0000a098   4  move.w D1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000a098u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 1, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_A09C:
    /* 0000a09c   4  move.w #7,-(A7) */
    c->pc = RC_ADDR(0x0000a09cu);
    rc_step(c, m, 12);
    t0 = 0x00000007u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_A0A0:
    /* 0000a0a0   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000a0a0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_A0A4:
    /* 0000a0a4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000a0a4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_A0A6:
    /* 0000a0a6   4  lea (ae6,A4),A0 */
    c->pc = RC_ADDR(0x0000a0a6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xae6u);

L_A0AA:
    /* 0000a0aa   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000a0aau);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_A0AE:
    /* 0000a0ae   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000a0aeu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_A0B2:
    /* 0000a0b2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000a0b2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_A0B4:
    /* 0000a0b4   4  lea (adc,A4),A0 */
    c->pc = RC_ADDR(0x0000a0b4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xadcu);

L_A0B8:
    /* 0000a0b8   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000a0b8u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_A0BC:
    /* 0000a0bc   4  move.w (fffffffe,A5),-(A7) */
    c->pc = RC_ADDR(0x0000a0bcu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_A0C0:
    /* 0000a0c0   4  move.l (abc,A4),-(A7) */
    c->pc = RC_ADDR(0x0000a0c0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xabcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_A0C4:
    /* 0000a0c4   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000a0c4u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_A0C8:
    /* 0000a0c8   4  jsr (ffff8296,A4) */
    c->pc = RC_ADDR(0x0000a0c8u);
    rc_step(c, m, 18);
    /* vector 110 */
    rc_push32(c, m, RC_ADDR(0x0000a0ccu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d8cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000219b6u);
    return;

L_A0CC:
    /* 0000a0cc   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000a0ccu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_A0D0:
    /* 0000a0d0   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000a0d0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_A0D4:
    /* 0000a0d4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000a0d4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_A0D6:
    /* 0000a0d6   4  lea (ad2,A4),A0 */
    c->pc = RC_ADDR(0x0000a0d6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xad2u);

L_A0DA:
    /* 0000a0da   6  move.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000a0dau);
    rc_step(c, m, 18);
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_A0E0:
    /* 0000a0e0   4  addq.w #1,(ca8,A4) */
    c->pc = RC_ADDR(0x0000a0e0u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xca8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_A0E4:
    /* 0000a0e4   4  move.w #40,-(A7) */
    c->pc = RC_ADDR(0x0000a0e4u);
    rc_step(c, m, 12);
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_A0E8:
    /* 0000a0e8   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000a0e8u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A0EA:
    /* 0000a0ea   4  move.l (cbe,A4),-(A7) */
    c->pc = RC_ADDR(0x0000a0eau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xcbeu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_A0EE:
    /* 0000a0ee   4  move.w (cb8,A4),-(A7) */
    c->pc = RC_ADDR(0x0000a0eeu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xcb8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_A0F2:
    /* 0000a0f2   4  move.l (cb2,A4),-(A7) */
    c->pc = RC_ADDR(0x0000a0f2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xcb2u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_A0F6:
    /* 0000a0f6   4  jsr (ffff80e0,A4) */
    c->pc = RC_ADDR(0x0000a0f6u);
    rc_step(c, m, 18);
    /* vector 37 */
    rc_push32(c, m, RC_ADDR(0x0000a0fau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bd6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000b008u);
    return;

L_A0FA:
    /* 0000a0fa   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000a0fau);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_A0FE:
    /* 0000a0fe   4  move.w #40,-(A7) */
    c->pc = RC_ADDR(0x0000a0feu);
    rc_step(c, m, 12);
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_A102:
    /* 0000a102   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000a102u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_A106:
    /* 0000a106   4  move.l (cbe,A4),-(A7) */
    c->pc = RC_ADDR(0x0000a106u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xcbeu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_A10A:
    /* 0000a10a   4  move.w (cb8,A4),-(A7) */
    c->pc = RC_ADDR(0x0000a10au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xcb8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_A10E:
    /* 0000a10e   4  move.l (cb2,A4),-(A7) */
    c->pc = RC_ADDR(0x0000a10eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xcb2u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_A112:
    /* 0000a112   4  jsr (ffff80e0,A4) */
    c->pc = RC_ADDR(0x0000a112u);
    rc_step(c, m, 18);
    /* vector 37 */
    rc_push32(c, m, RC_ADDR(0x0000a116u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bd6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000b008u);
    return;

L_A116:
    /* 0000a116   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000a116u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_A11A:
    /* 0000a11a   2  bra 0000a12c */
    c->pc = RC_ADDR(0x0000a11au);
    rc_step(c, m, 10);
    goto L_A12C;

L_A11C:
    /* 0000a11c   4  addq.l #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000a11cu);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_A120:
    /* 0000a120   8  cmpi.l #3,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000a120u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x00000003u);

L_A128:
    /* 0000a128   4  blt 00009fce */
    c->pc = RC_ADDR(0x0000a128u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_9FCE; }

L_A12C:
    /* 0000a12c   2  bra 0000a166 */
    c->pc = RC_ADDR(0x0000a12cu);
    rc_step(c, m, 10);
    goto L_A166;

L_A12E:
    /* 0000a12e   4  tst.w (cac,A4) */
    c->pc = RC_ADDR(0x0000a12eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xcacu));
    rc_set_nzvc(c, t0, RC_W);

L_A132:
    /* 0000a132   2  bne 0000a166 */
    c->pc = RC_ADDR(0x0000a132u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_A166;

L_A134:
    /* 0000a134   6  cmpi.w #2,(fffff8a8,A4) */
    c->pc = RC_ADDR(0x0000a134u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x758u));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_A13A:
    /* 0000a13a   2  beq 0000a166 */
    c->pc = RC_ADDR(0x0000a13au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_A166;

L_A13C:
    /* 0000a13c   6  move.w #1,(cac,A4) */
    c->pc = RC_ADDR(0x0000a13cu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xcacu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_A142:
    /* 0000a142   6  cmpi.w #c,(b02,A4) */
    c->pc = RC_ADDR(0x0000a142u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xb02u));
    rc_cmp(c, RC_W, t0, 0x0000000cu);

L_A148:
    /* 0000a148   2  bne 0000a154 */
    c->pc = RC_ADDR(0x0000a148u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_A154;

L_A14A:
    /* 0000a14a   4  lea (0000a16a),A0 */
    c->pc = RC_ADDR(0x0000a14au);
    rc_step(c, m, 8);
    c->a[0] = RC_ADDR(0x0000a16au);

L_A14E:
    /* 0000a14e   4  move.l A0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x0000a14eu);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_A152:
    /* 0000a152   2  bra 0000a15c */
    c->pc = RC_ADDR(0x0000a152u);
    rc_step(c, m, 10);
    goto L_A15C;

L_A154:
    /* 0000a154   4  lea (0000a19a),A0 */
    c->pc = RC_ADDR(0x0000a154u);
    rc_step(c, m, 8);
    c->a[0] = RC_ADDR(0x0000a19au);

L_A158:
    /* 0000a158   4  move.l A0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x0000a158u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_A15C:
    /* 0000a15c   4  move.l (fffffff4,A5),-(A7) */
    c->pc = RC_ADDR(0x0000a15cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_A160:
    /* 0000a160   4  jsr (0000a468) */
    c->pc = RC_ADDR(0x0000a160u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000a164u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000a468u);
    return;

L_A164:
    /* 0000a164   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000a164u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_A166:
    /* 0000a166   2  unlk A5 */
    c->pc = RC_ADDR(0x0000a166u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_A168:
    /* 0000a168   2  rts */
    c->pc = RC_ADDR(0x0000a168u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
