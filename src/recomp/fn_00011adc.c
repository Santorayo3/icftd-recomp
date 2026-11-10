/* fn_00011adc - 80 byte(s), 21 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00011adc(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case 0x00011adcu: goto L_11ADC;
    case 0x00011ae0u: goto L_11AE0;
    case 0x00011ae4u: goto L_11AE4;
    case 0x00011ae8u: goto L_11AE8;
    case 0x00011aecu: goto L_11AEC;
    case 0x00011af2u: goto L_11AF2;
    case 0x00011af4u: goto L_11AF4;
    case 0x00011af6u: goto L_11AF6;
    case 0x00011afcu: goto L_11AFC;
    case 0x00011b00u: goto L_11B00;
    case 0x00011b02u: goto L_11B02;
    case 0x00011b08u: goto L_11B08;
    case 0x00011b0eu: goto L_11B0E;
    case 0x00011b16u: goto L_11B16;
    case 0x00011b18u: goto L_11B18;
    case 0x00011b1au: goto L_11B1A;
    case 0x00011b1eu: goto L_11B1E;
    case 0x00011b20u: goto L_11B20;
    case 0x00011b22u: goto L_11B22;
    case 0x00011b26u: goto L_11B26;
    case 0x00011b2au: goto L_11B2A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_11ADC:
    /* 00011adc   4  movem.l { A4 A5 },-(SP) */
    c->pc = 0x00011adcu;
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[2]);
    c->a[7] = t3;

L_11AE0:
    /* 00011ae0   4  bsr 00011a02 */
    c->pc = 0x00011ae0u;
    rc_push32(c, m, 0x00011ae4u);
    rc_depth++;
    c->pc = 0x00011a02u;
    return;

L_11AE4:
    /* 00011ae4   4  movea.l (fffff2f8,A4),A0 */
    c->pc = 0x00011ae4u;
    t0 = rc_rd32(c, m, (c->a[4] - 0xd08u));
    c->a[0] = t0;

L_11AE8:
    /* 00011ae8   4  move.w (dec,A4),D7 */
    c->pc = 0x00011ae8u;
    t0 = rc_rd16(c, m, (c->a[4] + 0xdecu));
    rc_d_set(c, 7, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11AEC:
    /* 00011aec   6  move.l A2,(00dff054).l */
    c->pc = 0x00011aecu;
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff054u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_11AF2:
    /* 00011af2   2  clr.l D0 */
    c->pc = 0x00011af2u;
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_11AF4:
    /* 00011af4   2  move.w (A0),D0 */
    c->pc = 0x00011af4u;
    t0 = rc_rd16(c, m, c->a[0]);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11AF6:
    /* 00011af6   6  adda.l #28,A0 */
    c->pc = 0x00011af6u;
    t0 = 0x00000028u;
    c->a[0] += t0;

L_11AFC:
    /* 00011afc   4  move.w (0,A5,D0.w),D0 */
    c->pc = 0x00011afcu;
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (c->a[5] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11B00:
    /* 00011b00   2  add.l A1,D0 */
    c->pc = 0x00011b00u;
    t0 = rc_a_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_11B02:
    /* 00011b02   6  move.l D0,(00dff050).l */
    c->pc = 0x00011b02u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, 0x00dff050u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_11B08:
    /* 00011b08   6  move.w D5,(00dff058).l */
    c->pc = 0x00011b08u;
    t0 = rc_d_get(c, 5, RC_W);
    rc_wr16(c, m, 0x00dff058u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11B0E:
    /* 00011b0e   8  btst #6,(00dff002).l */
    c->pc = 0x00011b0eu;
    t4 = 0x00000006u;
    t3 = 0x00dff002u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_11B16:
    /* 00011b16   2  bne 00011b0e */
    c->pc = 0x00011b16u;
    if (rc_cond(c, 6)) { rc_tick(); goto L_11B0E; }

L_11B18:
    /* 00011b18   2  adda.l D3,A2 */
    c->pc = 0x00011b18u;
    t0 = rc_d_get(c, 3, RC_L);
    c->a[2] += t0;

L_11B1A:
    /* 00011b1a   4  dbf D7,00011aec */
    c->pc = 0x00011b1au;
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 7, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 7, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_11AEC; }
    }

L_11B1E:
    /* 00011b1e   2  movea.l (A3)+,A1 */
    c->pc = 0x00011b1eu;
    t3 = c->a[3];
    c->a[3] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;

L_11B20:
    /* 00011b20   2  movea.l (A6)+,A2 */
    c->pc = 0x00011b20u;
    t3 = c->a[6];
    c->a[6] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_11B22:
    /* 00011b22   4  dbf D2,00011ae4 */
    c->pc = 0x00011b22u;
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 2, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 2, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_11AE4; }
    }

L_11B26:
    /* 00011b26   4  movem.l (SP)+,{ D2 D3 } */
    c->pc = 0x00011b26u;
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[3] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_11B2A:
    /* 00011b2a   2  rts */
    c->pc = 0x00011b2au;
    rc_ret(c, m);
    return;

}
