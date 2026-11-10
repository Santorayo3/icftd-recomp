/* fn_00004cb6 - 126 byte(s), 35 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00004cb6(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00004cb6u): goto L_4CB6;
    case RC_ADDR(0x00004cbau): goto L_4CBA;
    case RC_ADDR(0x00004cbeu): goto L_4CBE;
    case RC_ADDR(0x00004cc6u): goto L_4CC6;
    case RC_ADDR(0x00004ccau): goto L_4CCA;
    case RC_ADDR(0x00004cd0u): goto L_4CD0;
    case RC_ADDR(0x00004cd6u): goto L_4CD6;
    case RC_ADDR(0x00004cd8u): goto L_4CD8;
    case RC_ADDR(0x00004cdeu): goto L_4CDE;
    case RC_ADDR(0x00004ce4u): goto L_4CE4;
    case RC_ADDR(0x00004ce8u): goto L_4CE8;
    case RC_ADDR(0x00004cecu): goto L_4CEC;
    case RC_ADDR(0x00004ceeu): goto L_4CEE;
    case RC_ADDR(0x00004cf2u): goto L_4CF2;
    case RC_ADDR(0x00004cf6u): goto L_4CF6;
    case RC_ADDR(0x00004cf8u): goto L_4CF8;
    case RC_ADDR(0x00004cfcu): goto L_4CFC;
    case RC_ADDR(0x00004d00u): goto L_4D00;
    case RC_ADDR(0x00004d04u): goto L_4D04;
    case RC_ADDR(0x00004d06u): goto L_4D06;
    case RC_ADDR(0x00004d0au): goto L_4D0A;
    case RC_ADDR(0x00004d0eu): goto L_4D0E;
    case RC_ADDR(0x00004d10u): goto L_4D10;
    case RC_ADDR(0x00004d14u): goto L_4D14;
    case RC_ADDR(0x00004d18u): goto L_4D18;
    case RC_ADDR(0x00004d1cu): goto L_4D1C;
    case RC_ADDR(0x00004d1eu): goto L_4D1E;
    case RC_ADDR(0x00004d20u): goto L_4D20;
    case RC_ADDR(0x00004d24u): goto L_4D24;
    case RC_ADDR(0x00004d28u): goto L_4D28;
    case RC_ADDR(0x00004d2au): goto L_4D2A;
    case RC_ADDR(0x00004d2cu): goto L_4D2C;
    case RC_ADDR(0x00004d2eu): goto L_4D2E;
    case RC_ADDR(0x00004d30u): goto L_4D30;
    case RC_ADDR(0x00004d32u): goto L_4D32;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_4CB6:
    /* 00004cb6   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004cb6u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_4CBA:
    /* 00004cba   4  clr.l (16,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004cbau);
    rc_wr32(c, m, (c->a[4] + 0x16u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_4CBE:
    /* 00004cbe   8  move.l #13f,(1a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004cbeu);
    t0 = 0x0000013fu;
    rc_wr32(c, m, (c->a[4] + 0x1au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_4CC6:
    /* 00004cc6   4  clr.w (c,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004cc6u);
    rc_wr16(c, m, (c->a[4] + 0xcu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4CCA:
    /* 00004cca   6  move.w #13,(fffffec2,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004ccau);
    t0 = 0x00000013u;
    rc_wr16(c, m, (c->a[4] - 0x13eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_4CD0:
    /* 00004cd0   6  move.w #12c,(fffffec4,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004cd0u);
    t0 = 0x0000012cu;
    rc_wr16(c, m, (c->a[4] - 0x13cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_4CD6:
    /* 00004cd6   2  bsr 00004d46 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004cd6u);
    rc_push32(c, m, RC_ADDR(0x00004cd8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00004d46u);
    return;

L_4CD8:
    /* 00004cd8   6  move.l (8,A5),(e,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004cd8u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] + 0xeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_4CDE:
    /* 00004cde   6  move.w (c,A5),(12,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004cdeu);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_wr16(c, m, (c->a[4] + 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_4CE4:
    /* 00004ce4   4  clr.b (14,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004ce4u);
    rc_wr8(c, m, (c->a[4] + 0x14u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_4CE8:
    /* 00004ce8   4  clr.b (15,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004ce8u);
    rc_wr8(c, m, (c->a[4] + 0x15u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_4CEC:
    /* 00004cec   2  clr.l -(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004cecu);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_4CEE:
    /* 00004cee   4  pea (00004d34) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004ceeu);
    rc_push32(c, m, RC_ADDR(0x00004d34u));

L_4CF2:
    /* 00004cf2   4  jsr (ffff834a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004cf2u);
    /* vector 140: exec.library -552 */
    c->pc = RC_ADDR(0x00004cf6u);
    rc_os_call(c, m, 0, -552);

L_4CF6:
    /* 00004cf6   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004cf6u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_4CF8:
    /* 00004cf8   4  move.l D0,(ffff8570,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004cf8u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x7a90u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_4CFC:
    /* 00004cfc   4  pea (e,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004cfcu);
    rc_push32(c, m, (c->a[4] + 0xeu));

L_4D00:
    /* 00004d00   4  jsr (ffff83bc,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004d00u);
    /* vector 159 */
    rc_push32(c, m, RC_ADDR(0x00004d04u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021992u);
    return;

L_4D04:
    /* 00004d04   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004d04u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_4D06:
    /* 00004d06   4  move.l D0,(ffff8574,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004d06u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x7a8cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_4D0A:
    /* 00004d0a   4  tst.l (ffff8574,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004d0au);
    t0 = rc_rd32(c, m, (c->a[4] - 0x7a8cu));
    rc_set_nzvc(c, t0, RC_L);

L_4D0E:
    /* 00004d0e   2  beq 00004d30 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004d0eu);
    if (rc_cond(c, 7)) goto L_4D30;

L_4D10:
    /* 00004d10   4  move.l (ffff8574,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004d10u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x7a8cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4D14:
    /* 00004d14   4  move.l (ffffcb14,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004d14u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4D18:
    /* 00004d18   4  jsr (ffff8398,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004d18u);
    /* vector 153 */
    rc_push32(c, m, RC_ADDR(0x00004d1cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0002190au);
    return;

L_4D1C:
    /* 00004d1c   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004d1cu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_4D1E:
    /* 00004d1e   2  clr.l -(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004d1eu);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_4D20:
    /* 00004d20   4  move.l (ffffcb14,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004d20u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4D24:
    /* 00004d24   4  jsr (ffff8392,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004d24u);
    /* vector 152 */
    rc_push32(c, m, RC_ADDR(0x00004d28u));
    rc_depth++;
    c->pc = RC_ADDR(0x000218fau);
    return;

L_4D28:
    /* 00004d28   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004d28u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_4D2A:
    /* 00004d2a   2  moveq #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004d2au);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_4D2C:
    /* 00004d2c   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004d2cu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_4D2E:
    /* 00004d2e   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004d2eu);
    rc_ret(c, m);
    return;

L_4D30:
    /* 00004d30   2  moveq #0,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004d30u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_4D32:
    /* 00004d32   2  bra 00004d2c */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004d32u);
    rc_tick();
    goto L_4D2C;

}
