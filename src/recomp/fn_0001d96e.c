/* fn_0001d96e - 90 byte(s), 29 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001d96e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001d96eu): goto L_1D96E;
    case RC_ADDR(0x0001d972u): goto L_1D972;
    case RC_ADDR(0x0001d974u): goto L_1D974;
    case RC_ADDR(0x0001d978u): goto L_1D978;
    case RC_ADDR(0x0001d97cu): goto L_1D97C;
    case RC_ADDR(0x0001d980u): goto L_1D980;
    case RC_ADDR(0x0001d982u): goto L_1D982;
    case RC_ADDR(0x0001d986u): goto L_1D986;
    case RC_ADDR(0x0001d98au): goto L_1D98A;
    case RC_ADDR(0x0001d98eu): goto L_1D98E;
    case RC_ADDR(0x0001d990u): goto L_1D990;
    case RC_ADDR(0x0001d994u): goto L_1D994;
    case RC_ADDR(0x0001d996u): goto L_1D996;
    case RC_ADDR(0x0001d99au): goto L_1D99A;
    case RC_ADDR(0x0001d99eu): goto L_1D99E;
    case RC_ADDR(0x0001d9a0u): goto L_1D9A0;
    case RC_ADDR(0x0001d9a4u): goto L_1D9A4;
    case RC_ADDR(0x0001d9a8u): goto L_1D9A8;
    case RC_ADDR(0x0001d9aau): goto L_1D9AA;
    case RC_ADDR(0x0001d9aeu): goto L_1D9AE;
    case RC_ADDR(0x0001d9b0u): goto L_1D9B0;
    case RC_ADDR(0x0001d9b2u): goto L_1D9B2;
    case RC_ADDR(0x0001d9b4u): goto L_1D9B4;
    case RC_ADDR(0x0001d9b8u): goto L_1D9B8;
    case RC_ADDR(0x0001d9bau): goto L_1D9BA;
    case RC_ADDR(0x0001d9bcu): goto L_1D9BC;
    case RC_ADDR(0x0001d9c0u): goto L_1D9C0;
    case RC_ADDR(0x0001d9c2u): goto L_1D9C2;
    case RC_ADDR(0x0001d9c6u): goto L_1D9C6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1D96E:
    /* 0001d96e   4  subq.w #1,(28c8,A4) */
    c->pc = RC_ADDR(0x0001d96eu);
    t3 = (c->a[4] + 0x28c8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1D972:
    /* 0001d972   2  bne 0001d9c6 */
    c->pc = RC_ADDR(0x0001d972u);
    if (rc_cond(c, 6)) goto L_1D9C6;

L_1D974:
    /* 0001d974   4  move.w (28c6,A4),D0 */
    c->pc = RC_ADDR(0x0001d974u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x28c6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D978:
    /* 0001d978   4  move.w D0,(28c8,A4) */
    c->pc = RC_ADDR(0x0001d978u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x28c8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D97C:
    /* 0001d97c   4  tst.w (28c4,A4) */
    c->pc = RC_ADDR(0x0001d97cu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x28c4u));
    rc_set_nzvc(c, t0, RC_W);

L_1D980:
    /* 0001d980   2  beq 0001d9c6 */
    c->pc = RC_ADDR(0x0001d980u);
    if (rc_cond(c, 7)) goto L_1D9C6;

L_1D982:
    /* 0001d982   4  lea (fffffe7c,A4),A6 */
    c->pc = RC_ADDR(0x0001d982u);
    c->a[6] = (c->a[4] - 0x184u);

L_1D986:
    /* 0001d986   4  move.w #1f,D3 */
    c->pc = RC_ADDR(0x0001d986u);
    t0 = 0x0000001fu;
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D98A:
    /* 0001d98a   4  subq.w #1,(28c4,A4) */
    c->pc = RC_ADDR(0x0001d98au);
    t3 = (c->a[4] + 0x28c4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1D98E:
    /* 0001d98e   2  bne 0001d9a0 */
    c->pc = RC_ADDR(0x0001d98eu);
    if (rc_cond(c, 6)) goto L_1D9A0;

L_1D990:
    /* 0001d990   4  lea (26c0,A4),A0 */
    c->pc = RC_ADDR(0x0001d990u);
    c->a[0] = (c->a[4] + 0x26c0u);

L_1D994:
    /* 0001d994   2  move.w (A0)+,(A6)+ */
    c->pc = RC_ADDR(0x0001d994u);
    t3 = c->a[0];
    c->a[0] += 2u;
    t0 = rc_rd16(c, m, t3);
    t3 = c->a[6];
    c->a[6] += 2u;
    rc_wr16(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D996:
    /* 0001d996   4  dbf D3,0001d994 */
    c->pc = RC_ADDR(0x0001d996u);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 3, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 3, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1D994; }
    }

L_1D99A:
    /* 0001d99a   4  clr.w (fffffecc,A4) */
    c->pc = RC_ADDR(0x0001d99au);
    rc_wr16(c, m, (c->a[4] - 0x134u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D99E:
    /* 0001d99e   2  rts */
    c->pc = RC_ADDR(0x0001d99eu);
    rc_ret(c, m);
    return;

L_1D9A0:
    /* 0001d9a0   4  lea (2700,A4),A0 */
    c->pc = RC_ADDR(0x0001d9a0u);
    c->a[0] = (c->a[4] + 0x2700u);

L_1D9A4:
    /* 0001d9a4   4  lea (27c0,A4),A1 */
    c->pc = RC_ADDR(0x0001d9a4u);
    c->a[1] = (c->a[4] + 0x27c0u);

L_1D9A8:
    /* 0001d9a8   2  clr.w D1 */
    c->pc = RC_ADDR(0x0001d9a8u);
    rc_d_set(c, 1, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D9AA:
    /* 0001d9aa   4  move.w #2,D2 */
    c->pc = RC_ADDR(0x0001d9aau);
    t0 = 0x00000002u;
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D9AE:
    /* 0001d9ae   2  move.w (A0),D0 */
    c->pc = RC_ADDR(0x0001d9aeu);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D9B0:
    /* 0001d9b0   2  sub.w (A1)+,D0 */
    c->pc = RC_ADDR(0x0001d9b0u);
    t3 = c->a[1];
    c->a[1] += 2u;
    t0 = rc_rd16(c, m, t3);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1D9B2:
    /* 0001d9b2   2  move.w D0,(A0)+ */
    c->pc = RC_ADDR(0x0001d9b2u);
    t0 = rc_d_get(c, 0, RC_W);
    t3 = c->a[0];
    c->a[0] += 2u;
    rc_wr16(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D9B4:
    /* 0001d9b4   4  and.w #f000,D0 */
    c->pc = RC_ADDR(0x0001d9b4u);
    t0 = 0x0000f000u;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_1D9B8:
    /* 0001d9b8   2  or.w D0,D1 */
    c->pc = RC_ADDR(0x0001d9b8u);
    t0 = rc_d_get(c, 0, RC_W);
    t2 = t0 | rc_d_get(c, 1, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 1, RC_W, t2);

L_1D9BA:
    /* 0001d9ba   2  rol.w #4,D1 */
    c->pc = RC_ADDR(0x0001d9bau);
    c->d[1] = rc_shift(c, 3, 1, 0x00000004u, rc_d_get(c, 1, RC_W), RC_W);

L_1D9BC:
    /* 0001d9bc   4  dbf D2,0001d9ae */
    c->pc = RC_ADDR(0x0001d9bcu);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 2, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 2, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1D9AE; }
    }

L_1D9C0:
    /* 0001d9c0   2  move.w D1,(A6)+ */
    c->pc = RC_ADDR(0x0001d9c0u);
    t0 = rc_d_get(c, 1, RC_W);
    t3 = c->a[6];
    c->a[6] += 2u;
    rc_wr16(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D9C2:
    /* 0001d9c2   4  dbf D3,0001d9a8 */
    c->pc = RC_ADDR(0x0001d9c2u);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 3, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 3, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1D9A8; }
    }

L_1D9C6:
    /* 0001d9c6   2  rts */
    c->pc = RC_ADDR(0x0001d9c6u);
    rc_ret(c, m);
    return;

}
