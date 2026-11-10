/* fn_0001013a - 106 byte(s), 24 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001013a(cpu_t *c, rt_machine *m)
{
    u32 t0, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001013au): goto L_1013A;
    case RC_ADDR(0x0001013eu): goto L_1013E;
    case RC_ADDR(0x00010142u): goto L_10142;
    case RC_ADDR(0x00010144u): goto L_10144;
    case RC_ADDR(0x00010148u): goto L_10148;
    case RC_ADDR(0x0001014au): goto L_1014A;
    case RC_ADDR(0x0001014cu): goto L_1014C;
    case RC_ADDR(0x00010150u): goto L_10150;
    case RC_ADDR(0x00010152u): goto L_10152;
    case RC_ADDR(0x00010156u): goto L_10156;
    case RC_ADDR(0x0001015au): goto L_1015A;
    case RC_ADDR(0x0001015eu): goto L_1015E;
    case RC_ADDR(0x00010160u): goto L_10160;
    case RC_ADDR(0x00010164u): goto L_10164;
    case RC_ADDR(0x0001016au): goto L_1016A;
    case RC_ADDR(0x00010170u): goto L_10170;
    case RC_ADDR(0x00010176u): goto L_10176;
    case RC_ADDR(0x0001017cu): goto L_1017C;
    case RC_ADDR(0x00010182u): goto L_10182;
    case RC_ADDR(0x0001018au): goto L_1018A;
    case RC_ADDR(0x00010192u): goto L_10192;
    case RC_ADDR(0x0001019au): goto L_1019A;
    case RC_ADDR(0x0001019eu): goto L_1019E;
    case RC_ADDR(0x000101a2u): goto L_101A2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1013A:
    /* 0001013a   4  movem.l { D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 },-(SP) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001013au);
    t3 = c->a[7];
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
    c->a[7] = t3;

L_1013E:
    /* 0001013e   4  lea (000101da),A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001013eu);
    c->a[1] = RC_ADDR(0x000101dau);

L_10142:
    /* 00010142   2  move.l (A1),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010142u);
    t0 = rc_rd32(c, m, c->a[1]);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_10144:
    /* 00010144   4  bne 0001019a */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010144u);
    if (rc_cond(c, 6)) goto L_1019A;

L_10148:
    /* 00010148   2  move.l A6,(A1) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010148u);
    t0 = rc_a_get(c, 6, RC_L);
    rc_wr32(c, m, c->a[1], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1014A:
    /* 0001014a   2  movea.l A6,A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001014au);
    t0 = rc_a_get(c, 6, RC_L);
    c->a[1] = t0;

L_1014C:
    /* 0001014c   4  move.w #f4,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001014cu);
    t0 = 0x000000f4u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10150:
    /* 00010150   2  clr.w (A1)+ */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010150u);
    t3 = c->a[1];
    c->a[1] += 2u;
    rc_wr16(c, m, t3, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_10152:
    /* 00010152   4  dbf D0,00010150 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010152u);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_10150; }
    }

L_10156:
    /* 00010156   4  move.l A0,(106,A6) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010156u);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[6] + 0x106u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1015A:
    /* 0001015a   4  move.w #203,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001015au);
    t0 = 0x00000203u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1015E:
    /* 0001015e   2  clr.w (A0)+ */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001015eu);
    t3 = c->a[0];
    c->a[0] += 2u;
    rc_wr16(c, m, t3, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_10160:
    /* 00010160   4  dbf D0,0001015e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010160u);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1015E; }
    }

L_10164:
    /* 00010164   6  move.w #3f,(36,A6) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010164u);
    t0 = 0x0000003fu;
    rc_wr16(c, m, (c->a[6] + 0x36u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1016A:
    /* 0001016a   6  move.w #8000,(22,A6) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001016au);
    t0 = 0x00008000u;
    rc_wr16(c, m, (c->a[6] + 0x22u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_10170:
    /* 00010170   6  move.w #ff,(0,A6) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010170u);
    t0 = 0x000000ffu;
    rc_wr16(c, m, (c->a[6] + 0x0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_10176:
    /* 00010176   6  move.w #80,(2,A6) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010176u);
    t0 = 0x00000080u;
    rc_wr16(c, m, (c->a[6] + 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1017C:
    /* 0001017c   6  move.w #80,(4,A6) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001017cu);
    t0 = 0x00000080u;
    rc_wr16(c, m, (c->a[6] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_10182:
    /* 00010182   8  move.b #9c,(00bfe401).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010182u);
    t0 = 0x0000009cu;
    rc_wr8(c, m, RC_ADDR(0x00bfe401u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_1018A:
    /* 0001018a   8  move.b #2e,(00bfe501).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001018au);
    t0 = 0x0000002eu;
    rc_wr8(c, m, RC_ADDR(0x00bfe501u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_10192:
    /* 00010192   8  move.b #11,(00bfee01).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010192u);
    t0 = 0x00000011u;
    rc_wr8(c, m, RC_ADDR(0x00bfee01u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_1019A:
    /* 0001019a   4  move.l (000101da),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001019au);
    t0 = rc_rd32(c, m, RC_ADDR(0x000101dau));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1019E:
    /* 0001019e   4  movem.l (SP)+,{ D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 } */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001019eu);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
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
    c->a[7] = t3;

L_101A2:
    /* 000101a2   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000101a2u);
    rc_ret(c, m);
    return;

}
