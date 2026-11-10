/* fn_000118d4 - 302 byte(s), 71 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000118d4(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000118d4u): goto L_118D4;
    case RC_ADDR(0x000118d8u): goto L_118D8;
    case RC_ADDR(0x000118dcu): goto L_118DC;
    case RC_ADDR(0x000118e2u): goto L_118E2;
    case RC_ADDR(0x000118e8u): goto L_118E8;
    case RC_ADDR(0x000118ecu): goto L_118EC;
    case RC_ADDR(0x000118eeu): goto L_118EE;
    case RC_ADDR(0x000118f0u): goto L_118F0;
    case RC_ADDR(0x000118f4u): goto L_118F4;
    case RC_ADDR(0x000118f8u): goto L_118F8;
    case RC_ADDR(0x000118fau): goto L_118FA;
    case RC_ADDR(0x000118fcu): goto L_118FC;
    case RC_ADDR(0x00011900u): goto L_11900;
    case RC_ADDR(0x00011902u): goto L_11902;
    case RC_ADDR(0x00011906u): goto L_11906;
    case RC_ADDR(0x0001190eu): goto L_1190E;
    case RC_ADDR(0x00011916u): goto L_11916;
    case RC_ADDR(0x0001191au): goto L_1191A;
    case RC_ADDR(0x0001191eu): goto L_1191E;
    case RC_ADDR(0x00011922u): goto L_11922;
    case RC_ADDR(0x00011926u): goto L_11926;
    case RC_ADDR(0x00011928u): goto L_11928;
    case RC_ADDR(0x0001192au): goto L_1192A;
    case RC_ADDR(0x0001192eu): goto L_1192E;
    case RC_ADDR(0x00011930u): goto L_11930;
    case RC_ADDR(0x00011934u): goto L_11934;
    case RC_ADDR(0x00011938u): goto L_11938;
    case RC_ADDR(0x0001193cu): goto L_1193C;
    case RC_ADDR(0x00011944u): goto L_11944;
    case RC_ADDR(0x0001194au): goto L_1194A;
    case RC_ADDR(0x00011952u): goto L_11952;
    case RC_ADDR(0x0001195au): goto L_1195A;
    case RC_ADDR(0x0001195eu): goto L_1195E;
    case RC_ADDR(0x00011962u): goto L_11962;
    case RC_ADDR(0x00011966u): goto L_11966;
    case RC_ADDR(0x00011968u): goto L_11968;
    case RC_ADDR(0x0001196au): goto L_1196A;
    case RC_ADDR(0x00011970u): goto L_11970;
    case RC_ADDR(0x00011972u): goto L_11972;
    case RC_ADDR(0x00011974u): goto L_11974;
    case RC_ADDR(0x0001197au): goto L_1197A;
    case RC_ADDR(0x00011980u): goto L_11980;
    case RC_ADDR(0x00011988u): goto L_11988;
    case RC_ADDR(0x0001198au): goto L_1198A;
    case RC_ADDR(0x0001198eu): goto L_1198E;
    case RC_ADDR(0x00011992u): goto L_11992;
    case RC_ADDR(0x00011994u): goto L_11994;
    case RC_ADDR(0x00011998u): goto L_11998;
    case RC_ADDR(0x0001199cu): goto L_1199C;
    case RC_ADDR(0x0001199eu): goto L_1199E;
    case RC_ADDR(0x000119a2u): goto L_119A2;
    case RC_ADDR(0x000119a6u): goto L_119A6;
    case RC_ADDR(0x000119a8u): goto L_119A8;
    case RC_ADDR(0x000119acu): goto L_119AC;
    case RC_ADDR(0x000119b0u): goto L_119B0;
    case RC_ADDR(0x000119b2u): goto L_119B2;
    case RC_ADDR(0x000119b6u): goto L_119B6;
    case RC_ADDR(0x000119bcu): goto L_119BC;
    case RC_ADDR(0x000119c2u): goto L_119C2;
    case RC_ADDR(0x000119c8u): goto L_119C8;
    case RC_ADDR(0x000119ceu): goto L_119CE;
    case RC_ADDR(0x000119d2u): goto L_119D2;
    case RC_ADDR(0x000119d6u): goto L_119D6;
    case RC_ADDR(0x000119dau): goto L_119DA;
    case RC_ADDR(0x000119deu): goto L_119DE;
    case RC_ADDR(0x000119e4u): goto L_119E4;
    case RC_ADDR(0x000119eau): goto L_119EA;
    case RC_ADDR(0x000119f0u): goto L_119F0;
    case RC_ADDR(0x000119f8u): goto L_119F8;
    case RC_ADDR(0x000119fau): goto L_119FA;
    case RC_ADDR(0x000119feu): goto L_119FE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_118D4:
    /* 000118d4   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000118d4u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_118D8:
    /* 000118d8   4  movem.l { D1 D2 A0 A1 A2 A3 A4 A5 A6 A7 },-(SP) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000118d8u);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[5]);
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

L_118DC:
    /* 000118dc   6  clr.w (00dff066).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000118dcu);
    rc_wr16(c, m, RC_ADDR(0x00dff066u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_118E2:
    /* 000118e2   6  clr.w (00dff064).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000118e2u);
    rc_wr16(c, m, RC_ADDR(0x00dff064u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_118E8:
    /* 000118e8   4  move.w #3214,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000118e8u);
    t0 = 0x00003214u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_118EC:
    /* 000118ec   2  clr.l D2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000118ecu);
    rc_d_set(c, 2, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_118EE:
    /* 000118ee   2  clr.l D3 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000118eeu);
    rc_d_set(c, 3, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_118F0:
    /* 000118f0   4  move.w (a16,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000118f0u);
    t0 = rc_rd16(c, m, (c->a[4] + 0xa16u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_118F4:
    /* 000118f4   4  cmp.w (74e,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000118f4u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x74eu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_118F8:
    /* 000118f8   2  beq 0001191e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000118f8u);
    if (rc_cond(c, 7)) goto L_1191E;

L_118FA:
    /* 000118fa   2  blt 00011902 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000118fau);
    if (rc_cond(c, 13)) goto L_11902;

L_118FC:
    /* 000118fc   4  move.b #2,D3 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000118fcu);
    t0 = 0x00000002u;
    rc_d_set(c, 3, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_11900:
    /* 00011900   2  bra 00011906 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00011900u);
    goto L_11906;

L_11902:
    /* 00011902   4  move.b #2,D2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00011902u);
    t0 = 0x00000002u;
    rc_d_set(c, 2, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_11906:
    /* 00011906   8  move.w #2,(00dff066).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00011906u);
    t0 = 0x00000002u;
    rc_wr16(c, m, RC_ADDR(0x00dff066u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1190E:
    /* 0001190e   8  move.w #2,(00dff064).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001190eu);
    t0 = 0x00000002u;
    rc_wr16(c, m, RC_ADDR(0x00dff064u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11916:
    /* 00011916   4  andi.w #ffc0,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00011916u);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 & 0x0000ffc0u;
    rc_d_set(c, 1, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_1191A:
    /* 0001191a   4  ori.w #13,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001191au);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 | 0x00000013u;
    rc_d_set(c, 1, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_1191E:
    /* 0001191e   4  move.w (a18,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001191eu);
    t0 = rc_rd16(c, m, (c->a[4] + 0xa18u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11922:
    /* 00011922   4  cmp.w (750,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00011922u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x750u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_11926:
    /* 00011926   2  beq 0001193c */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00011926u);
    if (rc_cond(c, 7)) goto L_1193C;

L_11928:
    /* 00011928   2  blt 00011930 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00011928u);
    if (rc_cond(c, 13)) goto L_11930;

L_1192A:
    /* 0001192a   4  addi.w #190,D3 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001192au);
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 + 0x00000190u;
    rc_flags_add(c, RC_W, t1, 0x00000190u, t2, 0);
    rc_d_set(c, 3, RC_W, t2);

L_1192E:
    /* 0001192e   2  bra 00011934 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001192eu);
    goto L_11934;

L_11930:
    /* 00011930   4  addi.w #190,D2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00011930u);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 + 0x00000190u;
    rc_flags_add(c, RC_W, t1, 0x00000190u, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_11934:
    /* 00011934   4  andi.w #3f,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00011934u);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 & 0x0000003fu;
    rc_d_set(c, 1, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_11938:
    /* 00011938   4  ori.w #2f80,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00011938u);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 | 0x00002f80u;
    rc_d_set(c, 1, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_1193C:
    /* 0001193c   8  move.w #9f0,(00dff040).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001193cu);
    t0 = 0x000009f0u;
    rc_wr16(c, m, RC_ADDR(0x00dff040u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11944:
    /* 00011944   6  clr.w (00dff042).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00011944u);
    rc_wr16(c, m, RC_ADDR(0x00dff042u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1194A:
    /* 0001194a   8  move.w #ffff,(00dff044).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001194au);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, RC_ADDR(0x00dff044u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11952:
    /* 00011952   8  move.w #ffff,(00dff046).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00011952u);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, RC_ADDR(0x00dff046u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1195A:
    /* 0001195a   4  lea (fffff34e,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001195au);
    c->a[0] = (c->a[4] - 0xcb2u);

L_1195E:
    /* 0001195e   4  lea (fffff326,A4),A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001195eu);
    c->a[1] = (c->a[4] - 0xcdau);

L_11962:
    /* 00011962   4  move.w #4,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00011962u);
    t0 = 0x00000004u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11966:
    /* 00011966   2  move.l (A0)+,D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00011966u);
    t3 = c->a[0];
    c->a[0] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_11968:
    /* 00011968   2  add.l D2,D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00011968u);
    t0 = rc_d_get(c, 2, RC_L);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_1196A:
    /* 0001196a   6  move.l D4,(00dff050).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001196au);
    t0 = rc_d_get(c, 4, RC_L);
    rc_wr32(c, m, RC_ADDR(0x00dff050u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_11970:
    /* 00011970   2  move.l (A1)+,D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00011970u);
    t3 = c->a[1];
    c->a[1] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_11972:
    /* 00011972   2  add.l D3,D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00011972u);
    t0 = rc_d_get(c, 3, RC_L);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_11974:
    /* 00011974   6  move.l D4,(00dff054).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00011974u);
    t0 = rc_d_get(c, 4, RC_L);
    rc_wr32(c, m, RC_ADDR(0x00dff054u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1197A:
    /* 0001197a   6  move.w D1,(00dff058).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001197au);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, RC_ADDR(0x00dff058u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11980:
    /* 00011980   8  btst #6,(00dff002).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00011980u);
    t4 = 0x00000006u;
    t3 = RC_ADDR(0x00dff002u);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_11988:
    /* 00011988   2  bne 00011980 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00011988u);
    if (rc_cond(c, 6)) { rc_tick(); goto L_11980; }

L_1198A:
    /* 0001198a   4  dbf D0,00011966 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001198au);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_11966; }
    }

L_1198E:
    /* 0001198e   4  btst #1,D2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001198eu);
    t4 = 0x00000001u;
    t0 = rc_d_get(c, 2, RC_B);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_11992:
    /* 00011992   2  beq 00011998 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00011992u);
    if (rc_cond(c, 7)) goto L_11998;

L_11994:
    /* 00011994   4  bsr 00011a88 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00011994u);
    rc_push32(c, m, RC_ADDR(0x00011998u));
    rc_depth++;
    c->pc = RC_ADDR(0x00011a88u);
    return;

L_11998:
    /* 00011998   4  btst #1,D3 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00011998u);
    t4 = 0x00000001u;
    t0 = rc_d_get(c, 3, RC_B);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_1199C:
    /* 0001199c   2  beq 000119a2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001199cu);
    if (rc_cond(c, 7)) goto L_119A2;

L_1199E:
    /* 0001199e   4  bsr 00011a42 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001199eu);
    rc_push32(c, m, RC_ADDR(0x000119a2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00011a42u);
    return;

L_119A2:
    /* 000119a2   4  cmpi.w #190,D2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000119a2u);
    t0 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000190u);

L_119A6:
    /* 000119a6   2  blt 000119ac */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000119a6u);
    if (rc_cond(c, 13)) goto L_119AC;

L_119A8:
    /* 000119a8   4  bsr 00011b2c */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000119a8u);
    rc_push32(c, m, RC_ADDR(0x000119acu));
    rc_depth++;
    c->pc = RC_ADDR(0x00011b2cu);
    return;

L_119AC:
    /* 000119ac   4  cmpi.w #190,D3 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000119acu);
    t0 = rc_d_get(c, 3, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000190u);

L_119B0:
    /* 000119b0   2  blt 000119b6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000119b0u);
    if (rc_cond(c, 13)) goto L_119B6;

L_119B2:
    /* 000119b2   4  bsr 00011adc */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000119b2u);
    rc_push32(c, m, RC_ADDR(0x000119b6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00011adcu);
    return;

L_119B6:
    /* 000119b6   6  move.w (74e,A4),(a16,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000119b6u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x74eu));
    rc_wr16(c, m, (c->a[4] + 0xa16u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_119BC:
    /* 000119bc   6  move.w (750,A4),(a18,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000119bcu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x750u));
    rc_wr16(c, m, (c->a[4] + 0xa18u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_119C2:
    /* 000119c2   6  clr.w (00dff066).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000119c2u);
    rc_wr16(c, m, RC_ADDR(0x00dff066u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_119C8:
    /* 000119c8   6  clr.w (00dff064).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000119c8u);
    rc_wr16(c, m, RC_ADDR(0x00dff064u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_119CE:
    /* 000119ce   4  lea (fffff326,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000119ceu);
    c->a[0] = (c->a[4] - 0xcdau);

L_119D2:
    /* 000119d2   4  lea (fffff34e,A4),A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000119d2u);
    c->a[1] = (c->a[4] - 0xcb2u);

L_119D6:
    /* 000119d6   4  move.w #3214,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000119d6u);
    t0 = 0x00003214u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_119DA:
    /* 000119da   4  move.w #4,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000119dau);
    t0 = 0x00000004u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_119DE:
    /* 000119de   6  move.l (A0)+,(00dff050).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000119deu);
    t3 = c->a[0];
    c->a[0] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_wr32(c, m, RC_ADDR(0x00dff050u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_119E4:
    /* 000119e4   6  move.l (A1)+,(00dff054).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000119e4u);
    t3 = c->a[1];
    c->a[1] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_wr32(c, m, RC_ADDR(0x00dff054u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_119EA:
    /* 000119ea   6  move.w D1,(00dff058).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000119eau);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, RC_ADDR(0x00dff058u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_119F0:
    /* 000119f0   8  btst #6,(00dff002).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000119f0u);
    t4 = 0x00000006u;
    t3 = RC_ADDR(0x00dff002u);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_119F8:
    /* 000119f8   2  bne 000119f0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000119f8u);
    if (rc_cond(c, 6)) { rc_tick(); goto L_119F0; }

L_119FA:
    /* 000119fa   4  dbf D0,000119de */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000119fau);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_119DE; }
    }

L_119FE:
    /* 000119fe   4  bra 00011b88 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000119feu);
    c->pc = RC_ADDR(0x00011b88u);
    return;

}
