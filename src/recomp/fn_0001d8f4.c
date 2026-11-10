/* fn_0001d8f4 - 122 byte(s), 39 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001d8f4(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001d8f4u): goto L_1D8F4;
    case RC_ADDR(0x0001d8f8u): goto L_1D8F8;
    case RC_ADDR(0x0001d8fcu): goto L_1D8FC;
    case RC_ADDR(0x0001d900u): goto L_1D900;
    case RC_ADDR(0x0001d904u): goto L_1D904;
    case RC_ADDR(0x0001d908u): goto L_1D908;
    case RC_ADDR(0x0001d90cu): goto L_1D90C;
    case RC_ADDR(0x0001d912u): goto L_1D912;
    case RC_ADDR(0x0001d916u): goto L_1D916;
    case RC_ADDR(0x0001d918u): goto L_1D918;
    case RC_ADDR(0x0001d91cu): goto L_1D91C;
    case RC_ADDR(0x0001d920u): goto L_1D920;
    case RC_ADDR(0x0001d924u): goto L_1D924;
    case RC_ADDR(0x0001d926u): goto L_1D926;
    case RC_ADDR(0x0001d92au): goto L_1D92A;
    case RC_ADDR(0x0001d92eu): goto L_1D92E;
    case RC_ADDR(0x0001d932u): goto L_1D932;
    case RC_ADDR(0x0001d934u): goto L_1D934;
    case RC_ADDR(0x0001d936u): goto L_1D936;
    case RC_ADDR(0x0001d938u): goto L_1D938;
    case RC_ADDR(0x0001d93cu): goto L_1D93C;
    case RC_ADDR(0x0001d93eu): goto L_1D93E;
    case RC_ADDR(0x0001d940u): goto L_1D940;
    case RC_ADDR(0x0001d942u): goto L_1D942;
    case RC_ADDR(0x0001d946u): goto L_1D946;
    case RC_ADDR(0x0001d948u): goto L_1D948;
    case RC_ADDR(0x0001d94au): goto L_1D94A;
    case RC_ADDR(0x0001d94cu): goto L_1D94C;
    case RC_ADDR(0x0001d950u): goto L_1D950;
    case RC_ADDR(0x0001d952u): goto L_1D952;
    case RC_ADDR(0x0001d954u): goto L_1D954;
    case RC_ADDR(0x0001d956u): goto L_1D956;
    case RC_ADDR(0x0001d95au): goto L_1D95A;
    case RC_ADDR(0x0001d95cu): goto L_1D95C;
    case RC_ADDR(0x0001d95eu): goto L_1D95E;
    case RC_ADDR(0x0001d960u): goto L_1D960;
    case RC_ADDR(0x0001d964u): goto L_1D964;
    case RC_ADDR(0x0001d968u): goto L_1D968;
    case RC_ADDR(0x0001d96cu): goto L_1D96C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1D8F4:
    /* 0001d8f4   4  movem.l { D4 D5 A1 A2 A3 },-(SP) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d8f4u);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_1D8F8:
    /* 0001d8f8   4  lea (fffffe7c,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d8f8u);
    c->a[0] = (c->a[4] - 0x184u);

L_1D8FC:
    /* 0001d8fc   4  lea (ffffff0e,A4),A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d8fcu);
    c->a[1] = (c->a[4] - 0xf2u);

L_1D900:
    /* 0001d900   4  lea (26c0,A4),A3 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d900u);
    c->a[3] = (c->a[4] + 0x26c0u);

L_1D904:
    /* 0001d904   4  lea (2700,A4),A2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d904u);
    c->a[2] = (c->a[4] + 0x2700u);

L_1D908:
    /* 0001d908   4  lea (27c0,A4),A6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d908u);
    c->a[6] = (c->a[4] + 0x27c0u);

L_1D90C:
    /* 0001d90c   6  move.w #1,(28c8,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d90cu);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x28c8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D912:
    /* 0001d912   4  move.w (ffffff54,A4),D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d912u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xacu));
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D916:
    /* 0001d916   2  bne 0001d91c */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d916u);
    if (rc_cond(c, 6)) goto L_1D91C;

L_1D918:
    /* 0001d918   4  move.w #1,D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d918u);
    t0 = 0x00000001u;
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D91C:
    /* 0001d91c   4  move.w D4,(28c6,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d91cu);
    t0 = rc_d_get(c, 4, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x28c6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D920:
    /* 0001d920   4  move.w (ffffff52,A4),D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d920u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xaeu));
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D924:
    /* 0001d924   2  bne 0001d92a */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d924u);
    if (rc_cond(c, 6)) goto L_1D92A;

L_1D926:
    /* 0001d926   4  move.w #1,D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d926u);
    t0 = 0x00000001u;
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D92A:
    /* 0001d92a   4  move.w D4,(28c4,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d92au);
    t0 = rc_d_get(c, 4, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x28c4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D92E:
    /* 0001d92e   4  move.w #1f,D6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d92eu);
    t0 = 0x0000001fu;
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D932:
    /* 0001d932   2  move.w (A0)+,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d932u);
    t3 = c->a[0];
    c->a[0] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D934:
    /* 0001d934   2  move.w (A1)+,D2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d934u);
    t3 = c->a[1];
    c->a[1] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D936:
    /* 0001d936   2  move.w D2,(A3)+ */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d936u);
    t0 = rc_d_get(c, 2, RC_W);
    t3 = c->a[3];
    c->a[3] += 2u;
    rc_wr16(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D938:
    /* 0001d938   4  move.w #2,D5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d938u);
    t0 = 0x00000002u;
    rc_d_set(c, 5, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D93C:
    /* 0001d93c   2  rol.w #4,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d93cu);
    c->d[0] = rc_shift(c, 3, 1, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W);

L_1D93E:
    /* 0001d93e   2  clr.l D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d93eu);
    rc_d_set(c, 1, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1D940:
    /* 0001d940   2  move.w D0,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d940u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D942:
    /* 0001d942   4  and.w #f000,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d942u);
    t0 = 0x0000f000u;
    t2 = t0 & rc_d_get(c, 1, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 1, RC_W, t2);

L_1D946:
    /* 0001d946   2  move.w D1,(A2)+ */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d946u);
    t0 = rc_d_get(c, 1, RC_W);
    t3 = c->a[2];
    c->a[2] += 2u;
    rc_wr16(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D948:
    /* 0001d948   2  rol.w #4,D2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d948u);
    c->d[2] = rc_shift(c, 3, 1, 0x00000004u, rc_d_get(c, 2, RC_W), RC_W);

L_1D94A:
    /* 0001d94a   2  move.w D2,D3 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d94au);
    t0 = rc_d_get(c, 2, RC_W);
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D94C:
    /* 0001d94c   4  and.w #f000,D3 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d94cu);
    t0 = 0x0000f000u;
    t2 = t0 & rc_d_get(c, 3, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 3, RC_W, t2);

L_1D950:
    /* 0001d950   2  sub.w D3,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d950u);
    t0 = rc_d_get(c, 3, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1D952:
    /* 0001d952   2  bcc 0001d95c */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d952u);
    if (rc_cond(c, 4)) goto L_1D95C;

L_1D954:
    /* 0001d954   2  swap D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d954u);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_1D956:
    /* 0001d956   4  move.w #ffff,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d956u);
    t0 = 0x0000ffffu;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D95A:
    /* 0001d95a   2  swap D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d95au);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_1D95C:
    /* 0001d95c   2  divs.w D4,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d95cu);
    t0 = rc_d_get(c, 4, RC_W);
    rc_divs(c, m, 1, t0);

L_1D95E:
    /* 0001d95e   2  move.w D1,(A6)+ */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d95eu);
    t0 = rc_d_get(c, 1, RC_W);
    t3 = c->a[6];
    c->a[6] += 2u;
    rc_wr16(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D960:
    /* 0001d960   4  dbf D5,0001d93c */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d960u);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 5, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 5, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1D93C; }
    }

L_1D964:
    /* 0001d964   4  dbf D6,0001d932 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d964u);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 6, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 6, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1D932; }
    }

L_1D968:
    /* 0001d968   4  movem.l (SP)+,{ D4 D5 D6 A2 A3 } */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d968u);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
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
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_1D96C:
    /* 0001d96c   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d96cu);
    rc_ret(c, m);
    return;

}
