/* fn_00010918 - 50 byte(s), 16 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00010918(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00010918u): goto L_10918;
    case RC_ADDR(0x0001091cu): goto L_1091C;
    case RC_ADDR(0x0001091eu): goto L_1091E;
    case RC_ADDR(0x00010920u): goto L_10920;
    case RC_ADDR(0x00010924u): goto L_10924;
    case RC_ADDR(0x00010926u): goto L_10926;
    case RC_ADDR(0x0001092cu): goto L_1092C;
    case RC_ADDR(0x0001092eu): goto L_1092E;
    case RC_ADDR(0x00010932u): goto L_10932;
    case RC_ADDR(0x00010934u): goto L_10934;
    case RC_ADDR(0x00010938u): goto L_10938;
    case RC_ADDR(0x0001093cu): goto L_1093C;
    case RC_ADDR(0x0001093eu): goto L_1093E;
    case RC_ADDR(0x00010942u): goto L_10942;
    case RC_ADDR(0x00010944u): goto L_10944;
    case RC_ADDR(0x00010948u): goto L_10948;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_10918:
    /* 00010918   4  movem.l { D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 A7 },-(SP) */
    c->pc = RC_ADDR(0x00010918u);
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

L_1091C:
    /* 0001091c   2  move.l A0,D0 */
    c->pc = RC_ADDR(0x0001091cu);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 0, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1091E:
    /* 0001091e   2  beq 00010944 */
    c->pc = RC_ADDR(0x0001091eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_10944;

L_10920:
    /* 00010920   4  lea (3e,A6),A1 */
    c->pc = RC_ADDR(0x00010920u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[6] + 0x3eu);

L_10924:
    /* 00010924   2  clr.b D0 */
    c->pc = RC_ADDR(0x00010924u);
    rc_step(c, m, 4);
    rc_d_set(c, 0, RC_B, 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_10926:
    /* 00010926   6  cmpi.b #0,(1,A1) */
    c->pc = RC_ADDR(0x00010926u);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[1] + 0x1u));
    rc_cmp(c, RC_B, t0, 0x00000000u);

L_1092C:
    /* 0001092c   2  beq 00010938 */
    c->pc = RC_ADDR(0x0001092cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_10938;

L_1092E:
    /* 0001092e   4  cmpa.l (4,A1),A0 */
    c->pc = RC_ADDR(0x0001092eu);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[1] + 0x4u));
    rc_cmp(c, RC_L, c->a[0], t0);

L_10932:
    /* 00010932   2  bne 00010938 */
    c->pc = RC_ADDR(0x00010932u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_10938;

L_10934:
    /* 00010934   4  bsr 00010e24 */
    c->pc = RC_ADDR(0x00010934u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00010938u));
    rc_depth++;
    c->pc = RC_ADDR(0x00010e24u);
    return;

L_10938:
    /* 00010938   4  adda.w #16,A1 */
    c->pc = RC_ADDR(0x00010938u);
    rc_step(c, m, 14);
    t0 = 0x00000016u;
    c->a[1] += rc_ext(t0, RC_W);

L_1093C:
    /* 0001093c   2  addq.b #1,D0 */
    c->pc = RC_ADDR(0x0001093cu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_B);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_B, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_B, t2);

L_1093E:
    /* 0001093e   4  cmpi.b #4,D0 */
    c->pc = RC_ADDR(0x0001093eu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000004u);

L_10942:
    /* 00010942   2  bne 00010926 */
    c->pc = RC_ADDR(0x00010942u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_10926; }

L_10944:
    /* 00010944   4  movem.l (SP)+,{ D0 D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 } */
    c->pc = RC_ADDR(0x00010944u);
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

L_10948:
    /* 00010948   2  rts */
    c->pc = RC_ADDR(0x00010948u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
