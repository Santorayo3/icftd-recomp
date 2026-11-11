/* fn_0002011a - 186 byte(s), 74 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0002011a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0002011au): goto L_2011A;
    case RC_ADDR(0x0002011eu): goto L_2011E;
    case RC_ADDR(0x00020122u): goto L_20122;
    case RC_ADDR(0x00020124u): goto L_20124;
    case RC_ADDR(0x00020128u): goto L_20128;
    case RC_ADDR(0x0002012cu): goto L_2012C;
    case RC_ADDR(0x0002012eu): goto L_2012E;
    case RC_ADDR(0x00020130u): goto L_20130;
    case RC_ADDR(0x00020132u): goto L_20132;
    case RC_ADDR(0x00020134u): goto L_20134;
    case RC_ADDR(0x00020138u): goto L_20138;
    case RC_ADDR(0x0002013cu): goto L_2013C;
    case RC_ADDR(0x00020140u): goto L_20140;
    case RC_ADDR(0x00020144u): goto L_20144;
    case RC_ADDR(0x00020146u): goto L_20146;
    case RC_ADDR(0x00020148u): goto L_20148;
    case RC_ADDR(0x0002014au): goto L_2014A;
    case RC_ADDR(0x0002014cu): goto L_2014C;
    case RC_ADDR(0x0002014eu): goto L_2014E;
    case RC_ADDR(0x00020150u): goto L_20150;
    case RC_ADDR(0x00020152u): goto L_20152;
    case RC_ADDR(0x00020154u): goto L_20154;
    case RC_ADDR(0x00020156u): goto L_20156;
    case RC_ADDR(0x0002015au): goto L_2015A;
    case RC_ADDR(0x0002015cu): goto L_2015C;
    case RC_ADDR(0x0002015eu): goto L_2015E;
    case RC_ADDR(0x00020160u): goto L_20160;
    case RC_ADDR(0x00020162u): goto L_20162;
    case RC_ADDR(0x00020164u): goto L_20164;
    case RC_ADDR(0x00020168u): goto L_20168;
    case RC_ADDR(0x0002016au): goto L_2016A;
    case RC_ADDR(0x0002016cu): goto L_2016C;
    case RC_ADDR(0x0002016eu): goto L_2016E;
    case RC_ADDR(0x00020172u): goto L_20172;
    case RC_ADDR(0x00020174u): goto L_20174;
    case RC_ADDR(0x00020176u): goto L_20176;
    case RC_ADDR(0x00020178u): goto L_20178;
    case RC_ADDR(0x0002017cu): goto L_2017C;
    case RC_ADDR(0x0002017eu): goto L_2017E;
    case RC_ADDR(0x00020182u): goto L_20182;
    case RC_ADDR(0x00020184u): goto L_20184;
    case RC_ADDR(0x00020186u): goto L_20186;
    case RC_ADDR(0x00020188u): goto L_20188;
    case RC_ADDR(0x0002018au): goto L_2018A;
    case RC_ADDR(0x0002018cu): goto L_2018C;
    case RC_ADDR(0x0002018eu): goto L_2018E;
    case RC_ADDR(0x00020190u): goto L_20190;
    case RC_ADDR(0x00020192u): goto L_20192;
    case RC_ADDR(0x00020194u): goto L_20194;
    case RC_ADDR(0x00020196u): goto L_20196;
    case RC_ADDR(0x0002019au): goto L_2019A;
    case RC_ADDR(0x0002019cu): goto L_2019C;
    case RC_ADDR(0x0002019eu): goto L_2019E;
    case RC_ADDR(0x000201a0u): goto L_201A0;
    case RC_ADDR(0x000201a2u): goto L_201A2;
    case RC_ADDR(0x000201a4u): goto L_201A4;
    case RC_ADDR(0x000201a8u): goto L_201A8;
    case RC_ADDR(0x000201aau): goto L_201AA;
    case RC_ADDR(0x000201acu): goto L_201AC;
    case RC_ADDR(0x000201aeu): goto L_201AE;
    case RC_ADDR(0x000201b0u): goto L_201B0;
    case RC_ADDR(0x000201b4u): goto L_201B4;
    case RC_ADDR(0x000201b6u): goto L_201B6;
    case RC_ADDR(0x000201b8u): goto L_201B8;
    case RC_ADDR(0x000201bau): goto L_201BA;
    case RC_ADDR(0x000201bcu): goto L_201BC;
    case RC_ADDR(0x000201beu): goto L_201BE;
    case RC_ADDR(0x000201c0u): goto L_201C0;
    case RC_ADDR(0x000201c4u): goto L_201C4;
    case RC_ADDR(0x000201c6u): goto L_201C6;
    case RC_ADDR(0x000201cau): goto L_201CA;
    case RC_ADDR(0x000201ccu): goto L_201CC;
    case RC_ADDR(0x000201d0u): goto L_201D0;
    case RC_ADDR(0x000201d2u): goto L_201D2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2011A:
    /* 0002011a   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0002011au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_2011E:
    /* 0002011e   4  movem.l { D0 D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 A7 },-(SP) */
    c->pc = RC_ADDR(0x0002011eu);
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

L_20122:
    /* 00020122   2  clr.l D0 */
    c->pc = RC_ADDR(0x00020122u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_20124:
    /* 00020124   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00020124u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_20128:
    /* 00020128   4  movea.l (c,A5),A1 */
    c->pc = RC_ADDR(0x00020128u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[1] = t0;

L_2012C:
    /* 0002012c   2  addq.l #8,A1 */
    c->pc = RC_ADDR(0x0002012cu);
    rc_step(c, m, 8);
    c->a[1] += 0x00000008u;

L_2012E:
    /* 0002012e   2  movea.l A1,A4 */
    c->pc = RC_ADDR(0x0002012eu);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 1, RC_L);
    c->a[4] = t0;

L_20130:
    /* 00020130   2  movea.l A1,A3 */
    c->pc = RC_ADDR(0x00020130u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 1, RC_L);
    c->a[3] = t0;

L_20132:
    /* 00020132   2  movea.l (A4)+,A1 */
    c->pc = RC_ADDR(0x00020132u);
    rc_step(c, m, 12);
    t3 = c->a[4];
    c->a[4] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;

L_20134:
    /* 00020134   4  move.w (10,A5),D0 */
    c->pc = RC_ADDR(0x00020134u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20138:
    /* 00020138   4  move.w (12,A5),D1 */
    c->pc = RC_ADDR(0x00020138u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x12u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2013C:
    /* 0002013c   4  move.w (16,A5),D7 */
    c->pc = RC_ADDR(0x0002013cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x16u));
    rc_d_set(c, 7, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20140:
    /* 00020140   4  tst.w (14,A5) */
    c->pc = RC_ADDR(0x00020140u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x14u));
    rc_set_nzvc(c, t0, RC_W);

L_20144:
    /* 00020144   2  beq 00020184 */
    c->pc = RC_ADDR(0x00020144u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_20184;

L_20146:
    /* 00020146   2  subq.w #1,D7 */
    c->pc = RC_ADDR(0x00020146u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 7, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 7, RC_W, t2);

L_20148:
    /* 00020148   2  movea.l A1,A2 */
    c->pc = RC_ADDR(0x00020148u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 1, RC_L);
    c->a[2] = t0;

L_2014A:
    /* 0002014a   2  move.w D1,D4 */
    c->pc = RC_ADDR(0x0002014au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2014C:
    /* 0002014c   2  movea.l D0,A5 */
    c->pc = RC_ADDR(0x0002014cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[5] = t0;

L_2014E:
    /* 0002014e   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x0002014eu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_20150:
    /* 00020150   2  move.w D0,D3 */
    c->pc = RC_ADDR(0x00020150u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20152:
    /* 00020152   2  clr.w D5 */
    c->pc = RC_ADDR(0x00020152u);
    rc_step(c, m, 4);
    rc_d_set(c, 5, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_20154:
    /* 00020154   2  move.b (A0)+,D2 */
    c->pc = RC_ADDR(0x00020154u);
    rc_step(c, m, 8);
    t3 = c->a[0];
    c->a[0] += 1u;
    t0 = rc_rd8(c, m, t3);
    rc_d_set(c, 2, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_20156:
    /* 00020156   4  cmpi.b #ae,D2 */
    c->pc = RC_ADDR(0x00020156u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 2, RC_B);
    rc_cmp(c, RC_B, t0, 0x000000aeu);

L_2015A:
    /* 0002015a   2  bne 00020160 */
    c->pc = RC_ADDR(0x0002015au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_20160;

L_2015C:
    /* 0002015c   2  move.b (A0)+,D2 */
    c->pc = RC_ADDR(0x0002015cu);
    rc_step(c, m, 8);
    t3 = c->a[0];
    c->a[0] += 1u;
    t0 = rc_rd8(c, m, t3);
    rc_d_set(c, 2, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_2015E:
    /* 0002015e   2  move.b (A0)+,D5 */
    c->pc = RC_ADDR(0x0002015eu);
    rc_step(c, m, 8);
    t3 = c->a[0];
    c->a[0] += 1u;
    t0 = rc_rd8(c, m, t3);
    rc_d_set(c, 5, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_20160:
    /* 00020160   2  move.b D2,(A1) */
    c->pc = RC_ADDR(0x00020160u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 2, RC_B);
    rc_wr8(c, m, c->a[1], t0);
    rc_set_nzvc(c, t0, RC_B);

L_20162:
    /* 00020162   2  adda.l A5,A1 */
    c->pc = RC_ADDR(0x00020162u);
    rc_step(c, m, 6);
    t0 = rc_a_get(c, 5, RC_L);
    c->a[1] += t0;

L_20164:
    /* 00020164   4  dbf D4,0002017e */
    c->pc = RC_ADDR(0x00020164u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 4, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 4, RC_W, t2);
        if (t2 != 0xFFFFu) goto L_2017E;
    }

L_20168:
    /* 00020168   2  move.w D1,D4 */
    c->pc = RC_ADDR(0x00020168u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2016A:
    /* 0002016a   2  addq.l #1,A2 */
    c->pc = RC_ADDR(0x0002016au);
    rc_step(c, m, 8);
    c->a[2] += 0x00000001u;

L_2016C:
    /* 0002016c   2  movea.l A2,A1 */
    c->pc = RC_ADDR(0x0002016cu);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[1] = t0;

L_2016E:
    /* 0002016e   4  dbf D3,0002017e */
    c->pc = RC_ADDR(0x0002016eu);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 3, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 3, RC_W, t2);
        if (t2 != 0xFFFFu) goto L_2017E;
    }

L_20172:
    /* 00020172   2  move.w D0,D3 */
    c->pc = RC_ADDR(0x00020172u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20174:
    /* 00020174   2  movea.l (A4),A1 */
    c->pc = RC_ADDR(0x00020174u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[4]);
    c->a[1] = t0;

L_20176:
    /* 00020176   2  movea.l (A4)+,A2 */
    c->pc = RC_ADDR(0x00020176u);
    rc_step(c, m, 12);
    t3 = c->a[4];
    c->a[4] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_20178:
    /* 00020178   4  dbf D7,0002017e */
    c->pc = RC_ADDR(0x00020178u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 7, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 7, RC_W, t2);
        if (t2 != 0xFFFFu) goto L_2017E;
    }

L_2017C:
    /* 0002017c   2  bra 000201cc */
    c->pc = RC_ADDR(0x0002017cu);
    rc_step(c, m, 10);
    goto L_201CC;

L_2017E:
    /* 0002017e   4  dbf D5,00020160 */
    c->pc = RC_ADDR(0x0002017eu);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 5, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 5, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_20160; }
    }

L_20182:
    /* 00020182   2  bra 00020152 */
    c->pc = RC_ADDR(0x00020182u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_20152;

L_20184:
    /* 00020184   2  clr.l D6 */
    c->pc = RC_ADDR(0x00020184u);
    rc_step(c, m, 6);
    rc_d_set(c, 6, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_20186:
    /* 00020186   2  subq.w #1,D7 */
    c->pc = RC_ADDR(0x00020186u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 7, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 7, RC_W, t2);

L_20188:
    /* 00020188   2  movea.l A1,A2 */
    c->pc = RC_ADDR(0x00020188u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 1, RC_L);
    c->a[2] = t0;

L_2018A:
    /* 0002018a   2  move.w D7,D3 */
    c->pc = RC_ADDR(0x0002018au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2018C:
    /* 0002018c   2  move.w D1,D4 */
    c->pc = RC_ADDR(0x0002018cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2018E:
    /* 0002018e   2  movea.l D0,A5 */
    c->pc = RC_ADDR(0x0002018eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[5] = t0;

L_20190:
    /* 00020190   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x00020190u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_20192:
    /* 00020192   2  clr.w D5 */
    c->pc = RC_ADDR(0x00020192u);
    rc_step(c, m, 4);
    rc_d_set(c, 5, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_20194:
    /* 00020194   2  move.b (A0)+,D2 */
    c->pc = RC_ADDR(0x00020194u);
    rc_step(c, m, 8);
    t3 = c->a[0];
    c->a[0] += 1u;
    t0 = rc_rd8(c, m, t3);
    rc_d_set(c, 2, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_20196:
    /* 00020196   4  cmpi.b #ae,D2 */
    c->pc = RC_ADDR(0x00020196u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 2, RC_B);
    rc_cmp(c, RC_B, t0, 0x000000aeu);

L_2019A:
    /* 0002019a   2  bne 000201a0 */
    c->pc = RC_ADDR(0x0002019au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_201A0;

L_2019C:
    /* 0002019c   2  move.b (A0)+,D2 */
    c->pc = RC_ADDR(0x0002019cu);
    rc_step(c, m, 8);
    t3 = c->a[0];
    c->a[0] += 1u;
    t0 = rc_rd8(c, m, t3);
    rc_d_set(c, 2, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_2019E:
    /* 0002019e   2  move.b (A0)+,D5 */
    c->pc = RC_ADDR(0x0002019eu);
    rc_step(c, m, 8);
    t3 = c->a[0];
    c->a[0] += 1u;
    t0 = rc_rd8(c, m, t3);
    rc_d_set(c, 5, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_201A0:
    /* 000201a0   2  move.b D2,(A1) */
    c->pc = RC_ADDR(0x000201a0u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 2, RC_B);
    rc_wr8(c, m, c->a[1], t0);
    rc_set_nzvc(c, t0, RC_B);

L_201A2:
    /* 000201a2   2  adda.l A5,A1 */
    c->pc = RC_ADDR(0x000201a2u);
    rc_step(c, m, 6);
    t0 = rc_a_get(c, 5, RC_L);
    c->a[1] += t0;

L_201A4:
    /* 000201a4   4  dbf D4,000201c6 */
    c->pc = RC_ADDR(0x000201a4u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 4, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 4, RC_W, t2);
        if (t2 != 0xFFFFu) goto L_201C6;
    }

L_201A8:
    /* 000201a8   2  move.w D1,D4 */
    c->pc = RC_ADDR(0x000201a8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_201AA:
    /* 000201aa   2  movea.l (A4)+,A2 */
    c->pc = RC_ADDR(0x000201aau);
    rc_step(c, m, 12);
    t3 = c->a[4];
    c->a[4] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_201AC:
    /* 000201ac   2  adda.l D6,A2 */
    c->pc = RC_ADDR(0x000201acu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 6, RC_L);
    c->a[2] += t0;

L_201AE:
    /* 000201ae   2  movea.l A2,A1 */
    c->pc = RC_ADDR(0x000201aeu);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[1] = t0;

L_201B0:
    /* 000201b0   4  dbf D3,000201c6 */
    c->pc = RC_ADDR(0x000201b0u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 3, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 3, RC_W, t2);
        if (t2 != 0xFFFFu) goto L_201C6;
    }

L_201B4:
    /* 000201b4   2  move.w D7,D3 */
    c->pc = RC_ADDR(0x000201b4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_201B6:
    /* 000201b6   2  movea.l A3,A4 */
    c->pc = RC_ADDR(0x000201b6u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[4] = t0;

L_201B8:
    /* 000201b8   2  addq.l #1,D6 */
    c->pc = RC_ADDR(0x000201b8u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 6, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 6, RC_L, t2);

L_201BA:
    /* 000201ba   2  movea.l (A4)+,A1 */
    c->pc = RC_ADDR(0x000201bau);
    rc_step(c, m, 12);
    t3 = c->a[4];
    c->a[4] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;

L_201BC:
    /* 000201bc   2  adda.l D6,A1 */
    c->pc = RC_ADDR(0x000201bcu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 6, RC_L);
    c->a[1] += t0;

L_201BE:
    /* 000201be   2  movea.l A1,A2 */
    c->pc = RC_ADDR(0x000201beu);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 1, RC_L);
    c->a[2] = t0;

L_201C0:
    /* 000201c0   4  dbf D0,000201c6 */
    c->pc = RC_ADDR(0x000201c0u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) goto L_201C6;
    }

L_201C4:
    /* 000201c4   2  bra 000201cc */
    c->pc = RC_ADDR(0x000201c4u);
    rc_step(c, m, 10);
    goto L_201CC;

L_201C6:
    /* 000201c6   4  dbf D5,000201a0 */
    c->pc = RC_ADDR(0x000201c6u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 5, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 5, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_201A0; }
    }

L_201CA:
    /* 000201ca   2  bra 00020192 */
    c->pc = RC_ADDR(0x000201cau);
    rc_step(c, m, 10);
    rc_tick();
    goto L_20192;

L_201CC:
    /* 000201cc   4  movem.l (SP)+,{ D0 D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 A7 } */
    c->pc = RC_ADDR(0x000201ccu);
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

L_201D0:
    /* 000201d0   2  unlk A5 */
    c->pc = RC_ADDR(0x000201d0u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_201D2:
    /* 000201d2   2  rts */
    c->pc = RC_ADDR(0x000201d2u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
