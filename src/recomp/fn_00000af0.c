/* fn_00000af0 - 50 byte(s), 17 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00000af0(cpu_t *c, rt_machine *m)
{
    u32 t0, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00000af0u): goto L_AF0;
    case RC_ADDR(0x00000af4u): goto L_AF4;
    case RC_ADDR(0x00000af8u): goto L_AF8;
    case RC_ADDR(0x00000afcu): goto L_AFC;
    case RC_ADDR(0x00000afeu): goto L_AFE;
    case RC_ADDR(0x00000b00u): goto L_B00;
    case RC_ADDR(0x00000b02u): goto L_B02;
    case RC_ADDR(0x00000b06u): goto L_B06;
    case RC_ADDR(0x00000b08u): goto L_B08;
    case RC_ADDR(0x00000b0cu): goto L_B0C;
    case RC_ADDR(0x00000b0eu): goto L_B0E;
    case RC_ADDR(0x00000b10u): goto L_B10;
    case RC_ADDR(0x00000b12u): goto L_B12;
    case RC_ADDR(0x00000b16u): goto L_B16;
    case RC_ADDR(0x00000b1au): goto L_B1A;
    case RC_ADDR(0x00000b1eu): goto L_B1E;
    case RC_ADDR(0x00000b20u): goto L_B20;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_AF0:
    /* 00000af0   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00000af0u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_AF4:
    /* 00000af4   4  pea (00000002).l */
    c->pc = RC_ADDR(0x00000af4u);
    rc_push32(c, m, RC_ADDR(0x00000002u));

L_AF8:
    /* 00000af8   4  pea (fffffffe,A5) */
    c->pc = RC_ADDR(0x00000af8u);
    rc_push32(c, m, (c->a[5] - 0x2u));

L_AFC:
    /* 00000afc   2  bsr 00000aaa */
    c->pc = RC_ADDR(0x00000afcu);
    rc_push32(c, m, RC_ADDR(0x00000afeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00000aaau);
    return;

L_AFE:
    /* 00000afe   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00000afeu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_B00:
    /* 00000b00   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00000b00u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_B02:
    /* 00000b02   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00000b02u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_B06:
    /* 00000b06   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00000b06u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B08:
    /* 00000b08   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00000b08u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B0C:
    /* 00000b0c   2  bsr 00000aaa */
    c->pc = RC_ADDR(0x00000b0cu);
    rc_push32(c, m, RC_ADDR(0x00000b0eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00000aaau);
    return;

L_B0E:
    /* 00000b0e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00000b0eu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_B10:
    /* 00000b10   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00000b10u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_B12:
    /* 00000b12   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00000b12u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_B16:
    /* 00000b16   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00000b16u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_B1A:
    /* 00000b1a   4  clr.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00000b1au);
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_B1E:
    /* 00000b1e   2  unlk A5 */
    c->pc = RC_ADDR(0x00000b1eu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_B20:
    /* 00000b20   2  rts */
    c->pc = RC_ADDR(0x00000b20u);
    rc_ret(c, m);
    return;

}
