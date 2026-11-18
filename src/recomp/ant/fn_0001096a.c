/* fn_0001096a - 98 byte(s), 29 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001096a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001096au): goto L_1096A;
    case RC_ADDR(0x0001096eu): goto L_1096E;
    case RC_ADDR(0x00010972u): goto L_10972;
    case RC_ADDR(0x00010974u): goto L_10974;
    case RC_ADDR(0x00010976u): goto L_10976;
    case RC_ADDR(0x00010978u): goto L_10978;
    case RC_ADDR(0x0001097au): goto L_1097A;
    case RC_ADDR(0x0001097cu): goto L_1097C;
    case RC_ADDR(0x0001097eu): goto L_1097E;
    case RC_ADDR(0x00010982u): goto L_10982;
    case RC_ADDR(0x00010986u): goto L_10986;
    case RC_ADDR(0x0001098au): goto L_1098A;
    case RC_ADDR(0x0001098eu): goto L_1098E;
    case RC_ADDR(0x00010990u): goto L_10990;
    case RC_ADDR(0x00010992u): goto L_10992;
    case RC_ADDR(0x00010996u): goto L_10996;
    case RC_ADDR(0x00010998u): goto L_10998;
    case RC_ADDR(0x0001099cu): goto L_1099C;
    case RC_ADDR(0x000109a0u): goto L_109A0;
    case RC_ADDR(0x000109a4u): goto L_109A4;
    case RC_ADDR(0x000109a8u): goto L_109A8;
    case RC_ADDR(0x000109acu): goto L_109AC;
    case RC_ADDR(0x000109b2u): goto L_109B2;
    case RC_ADDR(0x000109b8u): goto L_109B8;
    case RC_ADDR(0x000109bcu): goto L_109BC;
    case RC_ADDR(0x000109beu): goto L_109BE;
    case RC_ADDR(0x000109c2u): goto L_109C2;
    case RC_ADDR(0x000109c6u): goto L_109C6;
    case RC_ADDR(0x000109cau): goto L_109CA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1096A:
    /* 0001096a   4  movem.l { D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 A7 },-(SP) */
    c->pc = RC_ADDR(0x0001096au);
    rc_step(c, m, 8);
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
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[0]);
    c->a[7] = t3;

L_1096E:
    /* 0001096e   4  bsr 000109cc */
    c->pc = RC_ADDR(0x0001096eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00010972u));
    rc_depth++;
    c->pc = RC_ADDR(0x000109ccu);
    return;

L_10972:
    /* 00010972   2  move.l A0,D4 */
    c->pc = RC_ADDR(0x00010972u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 0, RC_L);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_10974:
    /* 00010974   2  beq 000109c6 */
    c->pc = RC_ADDR(0x00010974u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_109C6;

L_10976:
    /* 00010976   2  movea.l D4,A5 */
    c->pc = RC_ADDR(0x00010976u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[5] = t0;

L_10978:
    /* 00010978   2  cmp.l D0,D1 */
    c->pc = RC_ADDR(0x00010978u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1097A:
    /* 0001097a   2  beq 000109c6 */
    c->pc = RC_ADDR(0x0001097au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_109C6;

L_1097C:
    /* 0001097c   2  bcs 000109c6 */
    c->pc = RC_ADDR(0x0001097cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) goto L_109C6;

L_1097E:
    /* 0001097e   4  move.l D0,(c,A6) */
    c->pc = RC_ADDR(0x0001097eu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[6] + 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10982:
    /* 00010982   4  move.l D1,(14,A6) */
    c->pc = RC_ADDR(0x00010982u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[6] + 0x14u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10986:
    /* 00010986   4  lea (20,A5),A0 */
    c->pc = RC_ADDR(0x00010986u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] + 0x20u);

L_1098A:
    /* 0001098a   4  lea (26,A6),A1 */
    c->pc = RC_ADDR(0x0001098au);
    rc_step(c, m, 8);
    c->a[1] = (c->a[6] + 0x26u);

L_1098E:
    /* 0001098e   2  moveq #3,D7 */
    c->pc = RC_ADDR(0x0001098eu);
    rc_step(c, m, 4);
    c->d[7] = 0x00000003u;
    rc_set_nzvc(c, c->d[7], RC_L);

L_10990:
    /* 00010990   2  move.l (A0)+,(A1)+ */
    c->pc = RC_ADDR(0x00010990u);
    rc_step(c, m, 20);
    t3 = c->a[0];
    c->a[0] += 4u;
    t0 = rc_rd32(c, m, t3);
    t3 = c->a[1];
    c->a[1] += 4u;
    rc_wr32(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_L);

L_10992:
    /* 00010992   4  dbf D7,00010990 */
    c->pc = RC_ADDR(0x00010992u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 7, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 7, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_10990; }
    }

L_10996:
    /* 00010996   2  movea.l A5,A0 */
    c->pc = RC_ADDR(0x00010996u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 5, RC_L);
    c->a[0] = t0;

L_10998:
    /* 00010998   4  bsr 000109fc */
    c->pc = RC_ADDR(0x00010998u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001099cu));
    rc_depth++;
    c->pc = RC_ADDR(0x000109fcu);
    return;

L_1099C:
    /* 0001099c   4  bsr 00010a6e */
    c->pc = RC_ADDR(0x0001099cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000109a0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00010a6eu);
    return;

L_109A0:
    /* 000109a0   4  clr.w (1e,A6) */
    c->pc = RC_ADDR(0x000109a0u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[6] + 0x1eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_109A4:
    /* 000109a4   4  move.l A5,(6,A6) */
    c->pc = RC_ADDR(0x000109a4u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 5, RC_L);
    rc_wr32(c, m, (c->a[6] + 0x6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_109A8:
    /* 000109a8   4  clr.w (0,A6) */
    c->pc = RC_ADDR(0x000109a8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[6] + 0x0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_109AC:
    /* 000109ac   6  move.w (2,A5),(2,A6) */
    c->pc = RC_ADDR(0x000109acu);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] + 0x2u));
    rc_wr16(c, m, (c->a[6] + 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_109B2:
    /* 000109b2   6  move.w (6,A5),(4,A6) */
    c->pc = RC_ADDR(0x000109b2u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] + 0x6u));
    rc_wr16(c, m, (c->a[6] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_109B8:
    /* 000109b8   4  move.w (0,A5),D1 */
    c->pc = RC_ADDR(0x000109b8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x0u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_109BC:
    /* 000109bc   2  move.w D3,D0 */
    c->pc = RC_ADDR(0x000109bcu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 3, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_109BE:
    /* 000109be   4  bsr 00010e74 */
    c->pc = RC_ADDR(0x000109beu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000109c2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00010e74u);
    return;

L_109C2:
    /* 000109c2   4  move.w D2,(a,A6) */
    c->pc = RC_ADDR(0x000109c2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, (c->a[6] + 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_109C6:
    /* 000109c6   4  movem.l (SP)+,{ D0 D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 } */
    c->pc = RC_ADDR(0x000109c6u);
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
    c->a[7] = t3;

L_109CA:
    /* 000109ca   2  rts */
    c->pc = RC_ADDR(0x000109cau);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
