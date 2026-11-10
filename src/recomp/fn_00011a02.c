/* fn_00011a02 - 64 byte(s), 19 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00011a02(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00011a02u): goto L_11A02;
    case RC_ADDR(0x00011a06u): goto L_11A06;
    case RC_ADDR(0x00011a0au): goto L_11A0A;
    case RC_ADDR(0x00011a0cu): goto L_11A0C;
    case RC_ADDR(0x00011a0eu): goto L_11A0E;
    case RC_ADDR(0x00011a14u): goto L_11A14;
    case RC_ADDR(0x00011a18u): goto L_11A18;
    case RC_ADDR(0x00011a1au): goto L_11A1A;
    case RC_ADDR(0x00011a20u): goto L_11A20;
    case RC_ADDR(0x00011a24u): goto L_11A24;
    case RC_ADDR(0x00011a26u): goto L_11A26;
    case RC_ADDR(0x00011a2au): goto L_11A2A;
    case RC_ADDR(0x00011a2cu): goto L_11A2C;
    case RC_ADDR(0x00011a30u): goto L_11A30;
    case RC_ADDR(0x00011a32u): goto L_11A32;
    case RC_ADDR(0x00011a36u): goto L_11A36;
    case RC_ADDR(0x00011a38u): goto L_11A38;
    case RC_ADDR(0x00011a3cu): goto L_11A3C;
    case RC_ADDR(0x00011a40u): goto L_11A40;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_11A02:
    /* 00011a02   4  move.w #28,D0 */
    c->pc = RC_ADDR(0x00011a02u);
    t0 = 0x00000028u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11A06:
    /* 00011a06   4  move.w (fffff2ec,A4),D1 */
    c->pc = RC_ADDR(0x00011a06u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd14u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11A0A:
    /* 00011a0a   2  lsl.w #1,D1 */
    c->pc = RC_ADDR(0x00011a0au);
    c->d[1] = rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W);

L_11A0C:
    /* 00011a0c   2  sub.w D1,D0 */
    c->pc = RC_ADDR(0x00011a0cu);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_11A0E:
    /* 00011a0e   6  move.w D0,(00dff066).l */
    c->pc = RC_ADDR(0x00011a0eu);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, RC_ADDR(0x00dff066u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11A14:
    /* 00011a14   4  move.w (fffff2f4,A4),D0 */
    c->pc = RC_ADDR(0x00011a14u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd0cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11A18:
    /* 00011a18   2  sub.w D1,D0 */
    c->pc = RC_ADDR(0x00011a18u);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_11A1A:
    /* 00011a1a   6  move.w D0,(00dff064).l */
    c->pc = RC_ADDR(0x00011a1au);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, RC_ADDR(0x00dff064u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11A20:
    /* 00011a20   4  lea (fffff300,A4),A3 */
    c->pc = RC_ADDR(0x00011a20u);
    c->a[3] = (c->a[4] - 0xd00u);

L_11A24:
    /* 00011a24   2  movea.l (A3)+,A1 */
    c->pc = RC_ADDR(0x00011a24u);
    t3 = c->a[3];
    c->a[3] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;

L_11A26:
    /* 00011a26   4  lea (fffff326,A4),A6 */
    c->pc = RC_ADDR(0x00011a26u);
    c->a[6] = (c->a[4] - 0xcdau);

L_11A2A:
    /* 00011a2a   2  movea.l (A6)+,A2 */
    c->pc = RC_ADDR(0x00011a2au);
    t3 = c->a[6];
    c->a[6] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_11A2C:
    /* 00011a2c   4  move.w (de8,A4),D5 */
    c->pc = RC_ADDR(0x00011a2cu);
    t0 = rc_rd16(c, m, (c->a[4] + 0xde8u));
    rc_d_set(c, 5, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11A30:
    /* 00011a30   2  clr.l D3 */
    c->pc = RC_ADDR(0x00011a30u);
    rc_d_set(c, 3, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_11A32:
    /* 00011a32   4  move.w (fffff2ec,A4),D3 */
    c->pc = RC_ADDR(0x00011a32u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd14u));
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11A36:
    /* 00011a36   2  lsl.w #1,D3 */
    c->pc = RC_ADDR(0x00011a36u);
    c->d[3] = rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 3, RC_W), RC_W);

L_11A38:
    /* 00011a38   4  move.w #4,D2 */
    c->pc = RC_ADDR(0x00011a38u);
    t0 = 0x00000004u;
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11A3C:
    /* 00011a3c   4  movea.l (fffff314,A4),A5 */
    c->pc = RC_ADDR(0x00011a3cu);
    t0 = rc_rd32(c, m, (c->a[4] - 0xcecu));
    c->a[5] = t0;

L_11A40:
    /* 00011a40   2  rts */
    c->pc = RC_ADDR(0x00011a40u);
    rc_ret(c, m);
    return;

}
