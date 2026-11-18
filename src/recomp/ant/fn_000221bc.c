/* fn_000221bc - 186 byte(s), 74 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000221bc(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000221bcu): goto L_221BC;
    case RC_ADDR(0x000221c0u): goto L_221C0;
    case RC_ADDR(0x000221c4u): goto L_221C4;
    case RC_ADDR(0x000221c6u): goto L_221C6;
    case RC_ADDR(0x000221cau): goto L_221CA;
    case RC_ADDR(0x000221ceu): goto L_221CE;
    case RC_ADDR(0x000221d0u): goto L_221D0;
    case RC_ADDR(0x000221d2u): goto L_221D2;
    case RC_ADDR(0x000221d4u): goto L_221D4;
    case RC_ADDR(0x000221d6u): goto L_221D6;
    case RC_ADDR(0x000221dau): goto L_221DA;
    case RC_ADDR(0x000221deu): goto L_221DE;
    case RC_ADDR(0x000221e2u): goto L_221E2;
    case RC_ADDR(0x000221e6u): goto L_221E6;
    case RC_ADDR(0x000221e8u): goto L_221E8;
    case RC_ADDR(0x000221eau): goto L_221EA;
    case RC_ADDR(0x000221ecu): goto L_221EC;
    case RC_ADDR(0x000221eeu): goto L_221EE;
    case RC_ADDR(0x000221f0u): goto L_221F0;
    case RC_ADDR(0x000221f2u): goto L_221F2;
    case RC_ADDR(0x000221f4u): goto L_221F4;
    case RC_ADDR(0x000221f6u): goto L_221F6;
    case RC_ADDR(0x000221f8u): goto L_221F8;
    case RC_ADDR(0x000221fcu): goto L_221FC;
    case RC_ADDR(0x000221feu): goto L_221FE;
    case RC_ADDR(0x00022200u): goto L_22200;
    case RC_ADDR(0x00022202u): goto L_22202;
    case RC_ADDR(0x00022204u): goto L_22204;
    case RC_ADDR(0x00022206u): goto L_22206;
    case RC_ADDR(0x0002220au): goto L_2220A;
    case RC_ADDR(0x0002220cu): goto L_2220C;
    case RC_ADDR(0x0002220eu): goto L_2220E;
    case RC_ADDR(0x00022210u): goto L_22210;
    case RC_ADDR(0x00022214u): goto L_22214;
    case RC_ADDR(0x00022216u): goto L_22216;
    case RC_ADDR(0x00022218u): goto L_22218;
    case RC_ADDR(0x0002221au): goto L_2221A;
    case RC_ADDR(0x0002221eu): goto L_2221E;
    case RC_ADDR(0x00022220u): goto L_22220;
    case RC_ADDR(0x00022224u): goto L_22224;
    case RC_ADDR(0x00022226u): goto L_22226;
    case RC_ADDR(0x00022228u): goto L_22228;
    case RC_ADDR(0x0002222au): goto L_2222A;
    case RC_ADDR(0x0002222cu): goto L_2222C;
    case RC_ADDR(0x0002222eu): goto L_2222E;
    case RC_ADDR(0x00022230u): goto L_22230;
    case RC_ADDR(0x00022232u): goto L_22232;
    case RC_ADDR(0x00022234u): goto L_22234;
    case RC_ADDR(0x00022236u): goto L_22236;
    case RC_ADDR(0x00022238u): goto L_22238;
    case RC_ADDR(0x0002223cu): goto L_2223C;
    case RC_ADDR(0x0002223eu): goto L_2223E;
    case RC_ADDR(0x00022240u): goto L_22240;
    case RC_ADDR(0x00022242u): goto L_22242;
    case RC_ADDR(0x00022244u): goto L_22244;
    case RC_ADDR(0x00022246u): goto L_22246;
    case RC_ADDR(0x0002224au): goto L_2224A;
    case RC_ADDR(0x0002224cu): goto L_2224C;
    case RC_ADDR(0x0002224eu): goto L_2224E;
    case RC_ADDR(0x00022250u): goto L_22250;
    case RC_ADDR(0x00022252u): goto L_22252;
    case RC_ADDR(0x00022256u): goto L_22256;
    case RC_ADDR(0x00022258u): goto L_22258;
    case RC_ADDR(0x0002225au): goto L_2225A;
    case RC_ADDR(0x0002225cu): goto L_2225C;
    case RC_ADDR(0x0002225eu): goto L_2225E;
    case RC_ADDR(0x00022260u): goto L_22260;
    case RC_ADDR(0x00022262u): goto L_22262;
    case RC_ADDR(0x00022266u): goto L_22266;
    case RC_ADDR(0x00022268u): goto L_22268;
    case RC_ADDR(0x0002226cu): goto L_2226C;
    case RC_ADDR(0x0002226eu): goto L_2226E;
    case RC_ADDR(0x00022272u): goto L_22272;
    case RC_ADDR(0x00022274u): goto L_22274;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_221BC:
    /* 000221bc   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000221bcu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_221C0:
    /* 000221c0   4  movem.l { D0 D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 A7 },-(SP) */
    c->pc = RC_ADDR(0x000221c0u);
    rc_step(c, m, 8);
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

L_221C4:
    /* 000221c4   2  clr.l D0 */
    c->pc = RC_ADDR(0x000221c4u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_221C6:
    /* 000221c6   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000221c6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_221CA:
    /* 000221ca   4  movea.l (c,A5),A1 */
    c->pc = RC_ADDR(0x000221cau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[1] = t0;

L_221CE:
    /* 000221ce   2  addq.l #8,A1 */
    c->pc = RC_ADDR(0x000221ceu);
    rc_step(c, m, 8);
    c->a[1] += 0x00000008u;

L_221D0:
    /* 000221d0   2  movea.l A1,A4 */
    c->pc = RC_ADDR(0x000221d0u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 1, RC_L);
    c->a[4] = t0;

L_221D2:
    /* 000221d2   2  movea.l A1,A3 */
    c->pc = RC_ADDR(0x000221d2u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 1, RC_L);
    c->a[3] = t0;

L_221D4:
    /* 000221d4   2  movea.l (A4)+,A1 */
    c->pc = RC_ADDR(0x000221d4u);
    rc_step(c, m, 12);
    t3 = c->a[4];
    c->a[4] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;

L_221D6:
    /* 000221d6   4  move.w (10,A5),D0 */
    c->pc = RC_ADDR(0x000221d6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_221DA:
    /* 000221da   4  move.w (12,A5),D1 */
    c->pc = RC_ADDR(0x000221dau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x12u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_221DE:
    /* 000221de   4  move.w (16,A5),D7 */
    c->pc = RC_ADDR(0x000221deu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x16u));
    rc_d_set(c, 7, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_221E2:
    /* 000221e2   4  tst.w (14,A5) */
    c->pc = RC_ADDR(0x000221e2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x14u));
    rc_set_nzvc(c, t0, RC_W);

L_221E6:
    /* 000221e6   2  beq 00022226 */
    c->pc = RC_ADDR(0x000221e6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_22226;

L_221E8:
    /* 000221e8   2  subq.w #1,D7 */
    c->pc = RC_ADDR(0x000221e8u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 7, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 7, RC_W, t2);

L_221EA:
    /* 000221ea   2  movea.l A1,A2 */
    c->pc = RC_ADDR(0x000221eau);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 1, RC_L);
    c->a[2] = t0;

L_221EC:
    /* 000221ec   2  move.w D1,D4 */
    c->pc = RC_ADDR(0x000221ecu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_221EE:
    /* 000221ee   2  movea.l D0,A5 */
    c->pc = RC_ADDR(0x000221eeu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[5] = t0;

L_221F0:
    /* 000221f0   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x000221f0u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_221F2:
    /* 000221f2   2  move.w D0,D3 */
    c->pc = RC_ADDR(0x000221f2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_221F4:
    /* 000221f4   2  clr.w D5 */
    c->pc = RC_ADDR(0x000221f4u);
    rc_step(c, m, 4);
    rc_d_set(c, 5, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_221F6:
    /* 000221f6   2  move.b (A0)+,D2 */
    c->pc = RC_ADDR(0x000221f6u);
    rc_step(c, m, 8);
    t3 = c->a[0];
    c->a[0] += 1u;
    t0 = rc_rd8(c, m, t3);
    rc_d_set(c, 2, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_221F8:
    /* 000221f8   4  cmpi.b #ae,D2 */
    c->pc = RC_ADDR(0x000221f8u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 2, RC_B);
    rc_cmp(c, RC_B, t0, 0x000000aeu);

L_221FC:
    /* 000221fc   2  bne 00022202 */
    c->pc = RC_ADDR(0x000221fcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_22202;

L_221FE:
    /* 000221fe   2  move.b (A0)+,D2 */
    c->pc = RC_ADDR(0x000221feu);
    rc_step(c, m, 8);
    t3 = c->a[0];
    c->a[0] += 1u;
    t0 = rc_rd8(c, m, t3);
    rc_d_set(c, 2, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_22200:
    /* 00022200   2  move.b (A0)+,D5 */
    c->pc = RC_ADDR(0x00022200u);
    rc_step(c, m, 8);
    t3 = c->a[0];
    c->a[0] += 1u;
    t0 = rc_rd8(c, m, t3);
    rc_d_set(c, 5, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_22202:
    /* 00022202   2  move.b D2,(A1) */
    c->pc = RC_ADDR(0x00022202u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 2, RC_B);
    rc_wr8(c, m, c->a[1], t0);
    rc_set_nzvc(c, t0, RC_B);

L_22204:
    /* 00022204   2  adda.l A5,A1 */
    c->pc = RC_ADDR(0x00022204u);
    rc_step(c, m, 6);
    t0 = rc_a_get(c, 5, RC_L);
    c->a[1] += t0;

L_22206:
    /* 00022206   4  dbf D4,00022220 */
    c->pc = RC_ADDR(0x00022206u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 4, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 4, RC_W, t2);
        if (t2 != 0xFFFFu) goto L_22220;
    }

L_2220A:
    /* 0002220a   2  move.w D1,D4 */
    c->pc = RC_ADDR(0x0002220au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2220C:
    /* 0002220c   2  addq.l #1,A2 */
    c->pc = RC_ADDR(0x0002220cu);
    rc_step(c, m, 8);
    c->a[2] += 0x00000001u;

L_2220E:
    /* 0002220e   2  movea.l A2,A1 */
    c->pc = RC_ADDR(0x0002220eu);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[1] = t0;

L_22210:
    /* 00022210   4  dbf D3,00022220 */
    c->pc = RC_ADDR(0x00022210u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 3, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 3, RC_W, t2);
        if (t2 != 0xFFFFu) goto L_22220;
    }

L_22214:
    /* 00022214   2  move.w D0,D3 */
    c->pc = RC_ADDR(0x00022214u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_22216:
    /* 00022216   2  movea.l (A4),A1 */
    c->pc = RC_ADDR(0x00022216u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[4]);
    c->a[1] = t0;

L_22218:
    /* 00022218   2  movea.l (A4)+,A2 */
    c->pc = RC_ADDR(0x00022218u);
    rc_step(c, m, 12);
    t3 = c->a[4];
    c->a[4] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_2221A:
    /* 0002221a   4  dbf D7,00022220 */
    c->pc = RC_ADDR(0x0002221au);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 7, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 7, RC_W, t2);
        if (t2 != 0xFFFFu) goto L_22220;
    }

L_2221E:
    /* 0002221e   2  bra 0002226e */
    c->pc = RC_ADDR(0x0002221eu);
    rc_step(c, m, 10);
    goto L_2226E;

L_22220:
    /* 00022220   4  dbf D5,00022202 */
    c->pc = RC_ADDR(0x00022220u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 5, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 5, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_22202; }
    }

L_22224:
    /* 00022224   2  bra 000221f4 */
    c->pc = RC_ADDR(0x00022224u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_221F4;

L_22226:
    /* 00022226   2  clr.l D6 */
    c->pc = RC_ADDR(0x00022226u);
    rc_step(c, m, 6);
    rc_d_set(c, 6, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_22228:
    /* 00022228   2  subq.w #1,D7 */
    c->pc = RC_ADDR(0x00022228u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 7, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 7, RC_W, t2);

L_2222A:
    /* 0002222a   2  movea.l A1,A2 */
    c->pc = RC_ADDR(0x0002222au);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 1, RC_L);
    c->a[2] = t0;

L_2222C:
    /* 0002222c   2  move.w D7,D3 */
    c->pc = RC_ADDR(0x0002222cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2222E:
    /* 0002222e   2  move.w D1,D4 */
    c->pc = RC_ADDR(0x0002222eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_22230:
    /* 00022230   2  movea.l D0,A5 */
    c->pc = RC_ADDR(0x00022230u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[5] = t0;

L_22232:
    /* 00022232   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x00022232u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_22234:
    /* 00022234   2  clr.w D5 */
    c->pc = RC_ADDR(0x00022234u);
    rc_step(c, m, 4);
    rc_d_set(c, 5, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_22236:
    /* 00022236   2  move.b (A0)+,D2 */
    c->pc = RC_ADDR(0x00022236u);
    rc_step(c, m, 8);
    t3 = c->a[0];
    c->a[0] += 1u;
    t0 = rc_rd8(c, m, t3);
    rc_d_set(c, 2, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_22238:
    /* 00022238   4  cmpi.b #ae,D2 */
    c->pc = RC_ADDR(0x00022238u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 2, RC_B);
    rc_cmp(c, RC_B, t0, 0x000000aeu);

L_2223C:
    /* 0002223c   2  bne 00022242 */
    c->pc = RC_ADDR(0x0002223cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_22242;

L_2223E:
    /* 0002223e   2  move.b (A0)+,D2 */
    c->pc = RC_ADDR(0x0002223eu);
    rc_step(c, m, 8);
    t3 = c->a[0];
    c->a[0] += 1u;
    t0 = rc_rd8(c, m, t3);
    rc_d_set(c, 2, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_22240:
    /* 00022240   2  move.b (A0)+,D5 */
    c->pc = RC_ADDR(0x00022240u);
    rc_step(c, m, 8);
    t3 = c->a[0];
    c->a[0] += 1u;
    t0 = rc_rd8(c, m, t3);
    rc_d_set(c, 5, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_22242:
    /* 00022242   2  move.b D2,(A1) */
    c->pc = RC_ADDR(0x00022242u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 2, RC_B);
    rc_wr8(c, m, c->a[1], t0);
    rc_set_nzvc(c, t0, RC_B);

L_22244:
    /* 00022244   2  adda.l A5,A1 */
    c->pc = RC_ADDR(0x00022244u);
    rc_step(c, m, 6);
    t0 = rc_a_get(c, 5, RC_L);
    c->a[1] += t0;

L_22246:
    /* 00022246   4  dbf D4,00022268 */
    c->pc = RC_ADDR(0x00022246u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 4, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 4, RC_W, t2);
        if (t2 != 0xFFFFu) goto L_22268;
    }

L_2224A:
    /* 0002224a   2  move.w D1,D4 */
    c->pc = RC_ADDR(0x0002224au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2224C:
    /* 0002224c   2  movea.l (A4)+,A2 */
    c->pc = RC_ADDR(0x0002224cu);
    rc_step(c, m, 12);
    t3 = c->a[4];
    c->a[4] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_2224E:
    /* 0002224e   2  adda.l D6,A2 */
    c->pc = RC_ADDR(0x0002224eu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 6, RC_L);
    c->a[2] += t0;

L_22250:
    /* 00022250   2  movea.l A2,A1 */
    c->pc = RC_ADDR(0x00022250u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[1] = t0;

L_22252:
    /* 00022252   4  dbf D3,00022268 */
    c->pc = RC_ADDR(0x00022252u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 3, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 3, RC_W, t2);
        if (t2 != 0xFFFFu) goto L_22268;
    }

L_22256:
    /* 00022256   2  move.w D7,D3 */
    c->pc = RC_ADDR(0x00022256u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_22258:
    /* 00022258   2  movea.l A3,A4 */
    c->pc = RC_ADDR(0x00022258u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[4] = t0;

L_2225A:
    /* 0002225a   2  addq.l #1,D6 */
    c->pc = RC_ADDR(0x0002225au);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 6, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 6, RC_L, t2);

L_2225C:
    /* 0002225c   2  movea.l (A4)+,A1 */
    c->pc = RC_ADDR(0x0002225cu);
    rc_step(c, m, 12);
    t3 = c->a[4];
    c->a[4] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;

L_2225E:
    /* 0002225e   2  adda.l D6,A1 */
    c->pc = RC_ADDR(0x0002225eu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 6, RC_L);
    c->a[1] += t0;

L_22260:
    /* 00022260   2  movea.l A1,A2 */
    c->pc = RC_ADDR(0x00022260u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 1, RC_L);
    c->a[2] = t0;

L_22262:
    /* 00022262   4  dbf D0,00022268 */
    c->pc = RC_ADDR(0x00022262u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) goto L_22268;
    }

L_22266:
    /* 00022266   2  bra 0002226e */
    c->pc = RC_ADDR(0x00022266u);
    rc_step(c, m, 10);
    goto L_2226E;

L_22268:
    /* 00022268   4  dbf D5,00022242 */
    c->pc = RC_ADDR(0x00022268u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 5, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 5, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_22242; }
    }

L_2226C:
    /* 0002226c   2  bra 00022234 */
    c->pc = RC_ADDR(0x0002226cu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_22234;

L_2226E:
    /* 0002226e   4  movem.l (SP)+,{ D0 D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 A7 } */
    c->pc = RC_ADDR(0x0002226eu);
    rc_step(c, m, 12);
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

L_22272:
    /* 00022272   2  unlk A5 */
    c->pc = RC_ADDR(0x00022272u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_22274:
    /* 00022274   2  rts */
    c->pc = RC_ADDR(0x00022274u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
