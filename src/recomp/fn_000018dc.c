/* fn_000018dc - 120 byte(s), 42 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000018dc(cpu_t *c, rt_machine *m)
{
    u32 t0, t1;

    switch (c->pc)
    {
    case RC_ADDR(0x000018dcu): goto L_18DC;
    case RC_ADDR(0x000018e0u): goto L_18E0;
    case RC_ADDR(0x000018e4u): goto L_18E4;
    case RC_ADDR(0x000018e6u): goto L_18E6;
    case RC_ADDR(0x000018eau): goto L_18EA;
    case RC_ADDR(0x000018eeu): goto L_18EE;
    case RC_ADDR(0x000018f0u): goto L_18F0;
    case RC_ADDR(0x000018f2u): goto L_18F2;
    case RC_ADDR(0x000018f6u): goto L_18F6;
    case RC_ADDR(0x000018fau): goto L_18FA;
    case RC_ADDR(0x000018fcu): goto L_18FC;
    case RC_ADDR(0x000018feu): goto L_18FE;
    case RC_ADDR(0x00001900u): goto L_1900;
    case RC_ADDR(0x00001902u): goto L_1902;
    case RC_ADDR(0x00001904u): goto L_1904;
    case RC_ADDR(0x00001906u): goto L_1906;
    case RC_ADDR(0x0000190au): goto L_190A;
    case RC_ADDR(0x0000190cu): goto L_190C;
    case RC_ADDR(0x00001910u): goto L_1910;
    case RC_ADDR(0x00001914u): goto L_1914;
    case RC_ADDR(0x00001916u): goto L_1916;
    case RC_ADDR(0x0000191au): goto L_191A;
    case RC_ADDR(0x0000191cu): goto L_191C;
    case RC_ADDR(0x00001920u): goto L_1920;
    case RC_ADDR(0x00001924u): goto L_1924;
    case RC_ADDR(0x00001926u): goto L_1926;
    case RC_ADDR(0x0000192au): goto L_192A;
    case RC_ADDR(0x0000192cu): goto L_192C;
    case RC_ADDR(0x00001930u): goto L_1930;
    case RC_ADDR(0x00001932u): goto L_1932;
    case RC_ADDR(0x00001934u): goto L_1934;
    case RC_ADDR(0x00001936u): goto L_1936;
    case RC_ADDR(0x00001938u): goto L_1938;
    case RC_ADDR(0x0000193cu): goto L_193C;
    case RC_ADDR(0x00001942u): goto L_1942;
    case RC_ADDR(0x00001944u): goto L_1944;
    case RC_ADDR(0x00001946u): goto L_1946;
    case RC_ADDR(0x0000194au): goto L_194A;
    case RC_ADDR(0x0000194cu): goto L_194C;
    case RC_ADDR(0x0000194eu): goto L_194E;
    case RC_ADDR(0x00001950u): goto L_1950;
    case RC_ADDR(0x00001952u): goto L_1952;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_18DC:
    /* 000018dc   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000018dcu);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_18E0:
    /* 000018e0   4  tst.l (8,A5) */
    c->pc = RC_ADDR(0x000018e0u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_set_nzvc(c, t0, RC_L);

L_18E4:
    /* 000018e4   2  beq 00001950 */
    c->pc = RC_ADDR(0x000018e4u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1950;

L_18E6:
    /* 000018e6   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000018e6u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_18EA:
    /* 000018ea   4  move.b (25,A0),D0 */
    c->pc = RC_ADDR(0x000018eau);
    rc_step(c, m);
    t0 = rc_rd8(c, m, (c->a[0] + 0x25u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_18EE:
    /* 000018ee   2  ext.w D0 */
    c->pc = RC_ADDR(0x000018eeu);
    rc_step(c, m);
    rc_ext_w(c, 0);

L_18F0:
    /* 000018f0   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x000018f0u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18F2:
    /* 000018f2   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000018f2u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_18F6:
    /* 000018f6   4  move.b (24,A0),D0 */
    c->pc = RC_ADDR(0x000018f6u);
    rc_step(c, m);
    t0 = rc_rd8(c, m, (c->a[0] + 0x24u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_18FA:
    /* 000018fa   2  ext.w D0 */
    c->pc = RC_ADDR(0x000018fau);
    rc_step(c, m);
    rc_ext_w(c, 0);

L_18FC:
    /* 000018fc   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x000018fcu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18FE:
    /* 000018fe   2  bsr 000018ba */
    c->pc = RC_ADDR(0x000018feu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00001900u));
    rc_depth++;
    c->pc = RC_ADDR(0x000018bau);
    return;

L_1900:
    /* 00001900   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00001900u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1902:
    /* 00001902   2  tst.w D0 */
    c->pc = RC_ADDR(0x00001902u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1904:
    /* 00001904   2  beq 00001946 */
    c->pc = RC_ADDR(0x00001904u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1946;

L_1906:
    /* 00001906   4  tst.l (8,A5) */
    c->pc = RC_ADDR(0x00001906u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_set_nzvc(c, t0, RC_L);

L_190A:
    /* 0000190a   2  beq 00001944 */
    c->pc = RC_ADDR(0x0000190au);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1944;

L_190C:
    /* 0000190c   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0000190cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1910:
    /* 00001910   4  move.b (24,A0),D0 */
    c->pc = RC_ADDR(0x00001910u);
    rc_step(c, m);
    t0 = rc_rd8(c, m, (c->a[0] + 0x24u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1914:
    /* 00001914   2  ext.w D0 */
    c->pc = RC_ADDR(0x00001914u);
    rc_step(c, m);
    rc_ext_w(c, 0);

L_1916:
    /* 00001916   4  cmp.w (ffff83cc,A4),D0 */
    c->pc = RC_ADDR(0x00001916u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c34u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_191A:
    /* 0000191a   2  bgt 00001938 */
    c->pc = RC_ADDR(0x0000191au);
    rc_step(c, m);
    if (rc_cond(c, 14)) goto L_1938;

L_191C:
    /* 0000191c   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0000191cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1920:
    /* 00001920   4  move.b (25,A0),D0 */
    c->pc = RC_ADDR(0x00001920u);
    rc_step(c, m);
    t0 = rc_rd8(c, m, (c->a[0] + 0x25u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1924:
    /* 00001924   2  ext.w D0 */
    c->pc = RC_ADDR(0x00001924u);
    rc_step(c, m);
    rc_ext_w(c, 0);

L_1926:
    /* 00001926   4  cmp.w (ffff83cc,A4),D0 */
    c->pc = RC_ADDR(0x00001926u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c34u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_192A:
    /* 0000192a   2  ble 00001938 */
    c->pc = RC_ADDR(0x0000192au);
    rc_step(c, m);
    if (rc_cond(c, 15)) goto L_1938;

L_192C:
    /* 0000192c   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0000192cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1930:
    /* 00001930   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x00001930u);
    rc_step(c, m);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1932:
    /* 00001932   2  ext.w D0 */
    c->pc = RC_ADDR(0x00001932u);
    rc_step(c, m);
    rc_ext_w(c, 0);

L_1934:
    /* 00001934   2  unlk A5 */
    c->pc = RC_ADDR(0x00001934u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1936:
    /* 00001936   2  rts */
    c->pc = RC_ADDR(0x00001936u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

L_1938:
    /* 00001938   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00001938u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_193C:
    /* 0000193c   6  move.l (e,A0),(8,A5) */
    c->pc = RC_ADDR(0x0000193cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[0] + 0xeu));
    rc_wr32(c, m, (c->a[5] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1942:
    /* 00001942   2  bra 00001906 */
    c->pc = RC_ADDR(0x00001942u);
    rc_step(c, m);
    rc_tick();
    goto L_1906;

L_1944:
    /* 00001944   2  bra 00001950 */
    c->pc = RC_ADDR(0x00001944u);
    rc_step(c, m);
    goto L_1950;

L_1946:
    /* 00001946   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00001946u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_194A:
    /* 0000194a   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x0000194au);
    rc_step(c, m);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_194C:
    /* 0000194c   2  ext.w D0 */
    c->pc = RC_ADDR(0x0000194cu);
    rc_step(c, m);
    rc_ext_w(c, 0);

L_194E:
    /* 0000194e   2  bra 00001934 */
    c->pc = RC_ADDR(0x0000194eu);
    rc_step(c, m);
    rc_tick();
    goto L_1934;

L_1950:
    /* 00001950   2  moveq #ffffff9c,D0 */
    c->pc = RC_ADDR(0x00001950u);
    rc_step(c, m);
    c->d[0] = 0xffffff9cu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1952:
    /* 00001952   2  bra 00001934 */
    c->pc = RC_ADDR(0x00001952u);
    rc_step(c, m);
    rc_tick();
    goto L_1934;

}
