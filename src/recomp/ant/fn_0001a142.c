/* fn_0001a142 - 274 byte(s), 82 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001a142(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001a142u): goto L_1A142;
    case RC_ADDR(0x0001a146u): goto L_1A146;
    case RC_ADDR(0x0001a148u): goto L_1A148;
    case RC_ADDR(0x0001a14cu): goto L_1A14C;
    case RC_ADDR(0x0001a150u): goto L_1A150;
    case RC_ADDR(0x0001a152u): goto L_1A152;
    case RC_ADDR(0x0001a156u): goto L_1A156;
    case RC_ADDR(0x0001a15au): goto L_1A15A;
    case RC_ADDR(0x0001a15eu): goto L_1A15E;
    case RC_ADDR(0x0001a160u): goto L_1A160;
    case RC_ADDR(0x0001a162u): goto L_1A162;
    case RC_ADDR(0x0001a164u): goto L_1A164;
    case RC_ADDR(0x0001a16au): goto L_1A16A;
    case RC_ADDR(0x0001a16eu): goto L_1A16E;
    case RC_ADDR(0x0001a172u): goto L_1A172;
    case RC_ADDR(0x0001a176u): goto L_1A176;
    case RC_ADDR(0x0001a178u): goto L_1A178;
    case RC_ADDR(0x0001a17eu): goto L_1A17E;
    case RC_ADDR(0x0001a182u): goto L_1A182;
    case RC_ADDR(0x0001a184u): goto L_1A184;
    case RC_ADDR(0x0001a186u): goto L_1A186;
    case RC_ADDR(0x0001a188u): goto L_1A188;
    case RC_ADDR(0x0001a18au): goto L_1A18A;
    case RC_ADDR(0x0001a190u): goto L_1A190;
    case RC_ADDR(0x0001a192u): goto L_1A192;
    case RC_ADDR(0x0001a198u): goto L_1A198;
    case RC_ADDR(0x0001a19au): goto L_1A19A;
    case RC_ADDR(0x0001a19eu): goto L_1A19E;
    case RC_ADDR(0x0001a1a0u): goto L_1A1A0;
    case RC_ADDR(0x0001a1a2u): goto L_1A1A2;
    case RC_ADDR(0x0001a1a4u): goto L_1A1A4;
    case RC_ADDR(0x0001a1aau): goto L_1A1AA;
    case RC_ADDR(0x0001a1acu): goto L_1A1AC;
    case RC_ADDR(0x0001a1b2u): goto L_1A1B2;
    case RC_ADDR(0x0001a1b4u): goto L_1A1B4;
    case RC_ADDR(0x0001a1bau): goto L_1A1BA;
    case RC_ADDR(0x0001a1bcu): goto L_1A1BC;
    case RC_ADDR(0x0001a1c2u): goto L_1A1C2;
    case RC_ADDR(0x0001a1c4u): goto L_1A1C4;
    case RC_ADDR(0x0001a1cau): goto L_1A1CA;
    case RC_ADDR(0x0001a1ccu): goto L_1A1CC;
    case RC_ADDR(0x0001a1d2u): goto L_1A1D2;
    case RC_ADDR(0x0001a1d4u): goto L_1A1D4;
    case RC_ADDR(0x0001a1d6u): goto L_1A1D6;
    case RC_ADDR(0x0001a1d8u): goto L_1A1D8;
    case RC_ADDR(0x0001a1dau): goto L_1A1DA;
    case RC_ADDR(0x0001a1dcu): goto L_1A1DC;
    case RC_ADDR(0x0001a1deu): goto L_1A1DE;
    case RC_ADDR(0x0001a1e0u): goto L_1A1E0;
    case RC_ADDR(0x0001a1e6u): goto L_1A1E6;
    case RC_ADDR(0x0001a1e8u): goto L_1A1E8;
    case RC_ADDR(0x0001a1eeu): goto L_1A1EE;
    case RC_ADDR(0x0001a1f0u): goto L_1A1F0;
    case RC_ADDR(0x0001a1f4u): goto L_1A1F4;
    case RC_ADDR(0x0001a1f6u): goto L_1A1F6;
    case RC_ADDR(0x0001a1fcu): goto L_1A1FC;
    case RC_ADDR(0x0001a1feu): goto L_1A1FE;
    case RC_ADDR(0x0001a204u): goto L_1A204;
    case RC_ADDR(0x0001a206u): goto L_1A206;
    case RC_ADDR(0x0001a20au): goto L_1A20A;
    case RC_ADDR(0x0001a20cu): goto L_1A20C;
    case RC_ADDR(0x0001a210u): goto L_1A210;
    case RC_ADDR(0x0001a212u): goto L_1A212;
    case RC_ADDR(0x0001a214u): goto L_1A214;
    case RC_ADDR(0x0001a21au): goto L_1A21A;
    case RC_ADDR(0x0001a21cu): goto L_1A21C;
    case RC_ADDR(0x0001a220u): goto L_1A220;
    case RC_ADDR(0x0001a222u): goto L_1A222;
    case RC_ADDR(0x0001a226u): goto L_1A226;
    case RC_ADDR(0x0001a228u): goto L_1A228;
    case RC_ADDR(0x0001a22eu): goto L_1A22E;
    case RC_ADDR(0x0001a230u): goto L_1A230;
    case RC_ADDR(0x0001a236u): goto L_1A236;
    case RC_ADDR(0x0001a238u): goto L_1A238;
    case RC_ADDR(0x0001a23au): goto L_1A23A;
    case RC_ADDR(0x0001a23cu): goto L_1A23C;
    case RC_ADDR(0x0001a23eu): goto L_1A23E;
    case RC_ADDR(0x0001a240u): goto L_1A240;
    case RC_ADDR(0x0001a242u): goto L_1A242;
    case RC_ADDR(0x0001a244u): goto L_1A244;
    case RC_ADDR(0x0001a24au): goto L_1A24A;
    case RC_ADDR(0x0001a250u): goto L_1A250;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1A142:
    /* 0001a142   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001a142u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1A146:
    /* 0001a146   2  move.l D4,-(A7) */
    c->pc = RC_ADDR(0x0001a146u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A148:
    /* 0001a148   4  move.w (296a,A4),D0 */
    c->pc = RC_ADDR(0x0001a148u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x296au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A14C:
    /* 0001a14c   4  cmp.w (2968,A4),D0 */
    c->pc = RC_ADDR(0x0001a14cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2968u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1A150:
    /* 0001a150   2  beq 0001a18a */
    c->pc = RC_ADDR(0x0001a150u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1A18A;

L_1A152:
    /* 0001a152   4  move.w #29,-(A7) */
    c->pc = RC_ADDR(0x0001a152u);
    rc_step(c, m, 12);
    t0 = 0x00000029u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A156:
    /* 0001a156   4  move.l (140c,A4),-(A7) */
    c->pc = RC_ADDR(0x0001a156u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x140cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A15A:
    /* 0001a15a   4  jsr (0001b6fa) */
    c->pc = RC_ADDR(0x0001a15au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001a15eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001b6fau);
    return;

L_1A15E:
    /* 0001a15e   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x0001a15eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_1A160:
    /* 0001a160   2  tst.w D0 */
    c->pc = RC_ADDR(0x0001a160u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1A162:
    /* 0001a162   2  beq 0001a184 */
    c->pc = RC_ADDR(0x0001a162u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1A184;

L_1A164:
    /* 0001a164   6  move.w (296a,A4),(2968,A4) */
    c->pc = RC_ADDR(0x0001a164u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x296au));
    rc_wr16(c, m, (c->a[4] + 0x2968u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A16A:
    /* 0001a16a   4  jsr (0001cd68) */
    c->pc = RC_ADDR(0x0001a16au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001a16eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001cd68u);
    return;

L_1A16E:
    /* 0001a16e   4  move.w (2968,A4),-(A7) */
    c->pc = RC_ADDR(0x0001a16eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2968u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A172:
    /* 0001a172   4  jsr (0001c45c) */
    c->pc = RC_ADDR(0x0001a172u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001a176u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001c45cu);
    return;

L_1A176:
    /* 0001a176   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001a176u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1A178:
    /* 0001a178   6  move.w #2,(1132,A4) */
    c->pc = RC_ADDR(0x0001a178u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x1132u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A17E:
    /* 0001a17e   4  jsr (00019e42) */
    c->pc = RC_ADDR(0x0001a17eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001a182u));
    rc_depth++;
    c->pc = RC_ADDR(0x00019e42u);
    return;

L_1A182:
    /* 0001a182   2  bra 0001a18a */
    c->pc = RC_ADDR(0x0001a182u);
    rc_step(c, m, 10);
    goto L_1A18A;

L_1A184:
    /* 0001a184   2  move.l (A7)+,D4 */
    c->pc = RC_ADDR(0x0001a184u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A186:
    /* 0001a186   2  unlk A5 */
    c->pc = RC_ADDR(0x0001a186u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1A188:
    /* 0001a188   2  rts */
    c->pc = RC_ADDR(0x0001a188u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_1A18A:
    /* 0001a18a   6  cmpi.w #c8,(e78,A4) */
    c->pc = RC_ADDR(0x0001a18au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe78u));
    rc_cmp(c, RC_W, t0, 0x000000c8u);

L_1A190:
    /* 0001a190   2  ble 0001a1e0 */
    c->pc = RC_ADDR(0x0001a190u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1A1E0;

L_1A192:
    /* 0001a192   6  cmpi.w #f0,(e78,A4) */
    c->pc = RC_ADDR(0x0001a192u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe78u));
    rc_cmp(c, RC_W, t0, 0x000000f0u);

L_1A198:
    /* 0001a198   2  bge 0001a1e0 */
    c->pc = RC_ADDR(0x0001a198u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1A1E0;

L_1A19A:
    /* 0001a19a   4  move.w (2968,A4),D0 */
    c->pc = RC_ADDR(0x0001a19au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2968u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A19E:
    /* 0001a19e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001a19eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1A1A0:
    /* 0001a1a0   2  bra 0001a1d4 */
    c->pc = RC_ADDR(0x0001a1a0u);
    rc_step(c, m, 10);
    goto L_1A1D4;

L_1A1A2:
    /* 0001a1a2   2  bra 0001a1e0 */
    c->pc = RC_ADDR(0x0001a1a2u);
    rc_step(c, m, 10);
    goto L_1A1E0;

L_1A1A4:
    /* 0001a1a4   6  cmpi.w #180,(e76,A4) */
    c->pc = RC_ADDR(0x0001a1a4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe76u));
    rc_cmp(c, RC_W, t0, 0x00000180u);

L_1A1AA:
    /* 0001a1aa   2  ble 0001a1ba */
    c->pc = RC_ADDR(0x0001a1aau);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1A1BA;

L_1A1AC:
    /* 0001a1ac   6  cmpi.w #1ac,(e76,A4) */
    c->pc = RC_ADDR(0x0001a1acu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe76u));
    rc_cmp(c, RC_W, t0, 0x000001acu);

L_1A1B2:
    /* 0001a1b2   2  bge 0001a1ba */
    c->pc = RC_ADDR(0x0001a1b2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1A1BA;

L_1A1B4:
    /* 0001a1b4   6  move.w #2,(296a,A4) */
    c->pc = RC_ADDR(0x0001a1b4u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x296au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A1BA:
    /* 0001a1ba   2  bra 0001a1e0 */
    c->pc = RC_ADDR(0x0001a1bau);
    rc_step(c, m, 10);
    goto L_1A1E0;

L_1A1BC:
    /* 0001a1bc   6  cmpi.w #1ac,(e76,A4) */
    c->pc = RC_ADDR(0x0001a1bcu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe76u));
    rc_cmp(c, RC_W, t0, 0x000001acu);

L_1A1C2:
    /* 0001a1c2   2  ble 0001a1d2 */
    c->pc = RC_ADDR(0x0001a1c2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1A1D2;

L_1A1C4:
    /* 0001a1c4   6  cmpi.w #1c8,(e76,A4) */
    c->pc = RC_ADDR(0x0001a1c4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe76u));
    rc_cmp(c, RC_W, t0, 0x000001c8u);

L_1A1CA:
    /* 0001a1ca   2  bge 0001a1d2 */
    c->pc = RC_ADDR(0x0001a1cau);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1A1D2;

L_1A1CC:
    /* 0001a1cc   6  move.w #1,(296a,A4) */
    c->pc = RC_ADDR(0x0001a1ccu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x296au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A1D2:
    /* 0001a1d2   2  bra 0001a1e0 */
    c->pc = RC_ADDR(0x0001a1d2u);
    rc_step(c, m, 10);
    goto L_1A1E0;

L_1A1D4:
    /* 0001a1d4   2  tst.l D0 */
    c->pc = RC_ADDR(0x0001a1d4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_1A1D6:
    /* 0001a1d6   2  beq 0001a1a2 */
    c->pc = RC_ADDR(0x0001a1d6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_1A1A2; }

L_1A1D8:
    /* 0001a1d8   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x0001a1d8u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1A1DA:
    /* 0001a1da   2  beq 0001a1a4 */
    c->pc = RC_ADDR(0x0001a1dau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_1A1A4; }

L_1A1DC:
    /* 0001a1dc   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x0001a1dcu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1A1DE:
    /* 0001a1de   2  beq 0001a1bc */
    c->pc = RC_ADDR(0x0001a1deu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_1A1BC; }

L_1A1E0:
    /* 0001a1e0   6  cmpi.w #180,(e76,A4) */
    c->pc = RC_ADDR(0x0001a1e0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe76u));
    rc_cmp(c, RC_W, t0, 0x00000180u);

L_1A1E6:
    /* 0001a1e6   2  ble 0001a250 */
    c->pc = RC_ADDR(0x0001a1e6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1A250;

L_1A1E8:
    /* 0001a1e8   6  cmpi.w #1c8,(e76,A4) */
    c->pc = RC_ADDR(0x0001a1e8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe76u));
    rc_cmp(c, RC_W, t0, 0x000001c8u);

L_1A1EE:
    /* 0001a1ee   2  bge 0001a250 */
    c->pc = RC_ADDR(0x0001a1eeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1A250;

L_1A1F0:
    /* 0001a1f0   4  tst.w (26f2,A4) */
    c->pc = RC_ADDR(0x0001a1f0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26f2u));
    rc_set_nzvc(c, t0, RC_W);

L_1A1F4:
    /* 0001a1f4   2  bne 0001a250 */
    c->pc = RC_ADDR(0x0001a1f4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1A250;

L_1A1F6:
    /* 0001a1f6   6  cmpi.w #118,(e78,A4) */
    c->pc = RC_ADDR(0x0001a1f6u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe78u));
    rc_cmp(c, RC_W, t0, 0x00000118u);

L_1A1FC:
    /* 0001a1fc   2  blt 0001a250 */
    c->pc = RC_ADDR(0x0001a1fcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1A250;

L_1A1FE:
    /* 0001a1fe   6  cmpi.w #140,(e78,A4) */
    c->pc = RC_ADDR(0x0001a1feu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe78u));
    rc_cmp(c, RC_W, t0, 0x00000140u);

L_1A204:
    /* 0001a204   2  bge 0001a250 */
    c->pc = RC_ADDR(0x0001a204u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1A250;

L_1A206:
    /* 0001a206   4  tst.w (26f4,A4) */
    c->pc = RC_ADDR(0x0001a206u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26f4u));
    rc_set_nzvc(c, t0, RC_W);

L_1A20A:
    /* 0001a20a   2  bne 0001a250 */
    c->pc = RC_ADDR(0x0001a20au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1A250;

L_1A20C:
    /* 0001a20c   4  move.w (2968,A4),D0 */
    c->pc = RC_ADDR(0x0001a20cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2968u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A210:
    /* 0001a210   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001a210u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1A212:
    /* 0001a212   2  bra 0001a238 */
    c->pc = RC_ADDR(0x0001a212u);
    rc_step(c, m, 10);
    goto L_1A238;

L_1A214:
    /* 0001a214   6  move.w #1,(296a,A4) */
    c->pc = RC_ADDR(0x0001a214u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x296au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A21A:
    /* 0001a21a   2  bra 0001a244 */
    c->pc = RC_ADDR(0x0001a21au);
    rc_step(c, m, 10);
    goto L_1A244;

L_1A21C:
    /* 0001a21c   4  tst.w (7b6,A4) */
    c->pc = RC_ADDR(0x0001a21cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7b6u));
    rc_set_nzvc(c, t0, RC_W);

L_1A220:
    /* 0001a220   2  beq 0001a228 */
    c->pc = RC_ADDR(0x0001a220u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1A228;

L_1A222:
    /* 0001a222   4  clr.w (296a,A4) */
    c->pc = RC_ADDR(0x0001a222u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x296au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1A226:
    /* 0001a226   2  bra 0001a22e */
    c->pc = RC_ADDR(0x0001a226u);
    rc_step(c, m, 10);
    goto L_1A22E;

L_1A228:
    /* 0001a228   6  move.w #2,(296a,A4) */
    c->pc = RC_ADDR(0x0001a228u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x296au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A22E:
    /* 0001a22e   2  bra 0001a244 */
    c->pc = RC_ADDR(0x0001a22eu);
    rc_step(c, m, 10);
    goto L_1A244;

L_1A230:
    /* 0001a230   6  move.w #1,(296a,A4) */
    c->pc = RC_ADDR(0x0001a230u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x296au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A236:
    /* 0001a236   2  bra 0001a244 */
    c->pc = RC_ADDR(0x0001a236u);
    rc_step(c, m, 10);
    goto L_1A244;

L_1A238:
    /* 0001a238   2  tst.l D0 */
    c->pc = RC_ADDR(0x0001a238u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_1A23A:
    /* 0001a23a   2  beq 0001a214 */
    c->pc = RC_ADDR(0x0001a23au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_1A214; }

L_1A23C:
    /* 0001a23c   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x0001a23cu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1A23E:
    /* 0001a23e   2  beq 0001a21c */
    c->pc = RC_ADDR(0x0001a23eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_1A21C; }

L_1A240:
    /* 0001a240   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x0001a240u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1A242:
    /* 0001a242   2  beq 0001a230 */
    c->pc = RC_ADDR(0x0001a242u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_1A230; }

L_1A244:
    /* 0001a244   6  move.w #2,(26f2,A4) */
    c->pc = RC_ADDR(0x0001a244u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x26f2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A24A:
    /* 0001a24a   6  move.w #28,(26f6,A4) */
    c->pc = RC_ADDR(0x0001a24au);
    rc_step(c, m, 16);
    t0 = 0x00000028u;
    rc_wr16(c, m, (c->a[4] + 0x26f6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A250:
    /* 0001a250   4  bra 0001a184 */
    c->pc = RC_ADDR(0x0001a250u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1A184;

}
