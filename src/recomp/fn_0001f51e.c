/* fn_0001f51e - 68 byte(s), 20 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001f51e(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f51eu): goto L_1F51E;
    case RC_ADDR(0x0001f522u): goto L_1F522;
    case RC_ADDR(0x0001f526u): goto L_1F526;
    case RC_ADDR(0x0001f52au): goto L_1F52A;
    case RC_ADDR(0x0001f52cu): goto L_1F52C;
    case RC_ADDR(0x0001f52eu): goto L_1F52E;
    case RC_ADDR(0x0001f532u): goto L_1F532;
    case RC_ADDR(0x0001f534u): goto L_1F534;
    case RC_ADDR(0x0001f538u): goto L_1F538;
    case RC_ADDR(0x0001f53au): goto L_1F53A;
    case RC_ADDR(0x0001f53cu): goto L_1F53C;
    case RC_ADDR(0x0001f540u): goto L_1F540;
    case RC_ADDR(0x0001f544u): goto L_1F544;
    case RC_ADDR(0x0001f546u): goto L_1F546;
    case RC_ADDR(0x0001f54au): goto L_1F54A;
    case RC_ADDR(0x0001f54eu): goto L_1F54E;
    case RC_ADDR(0x0001f552u): goto L_1F552;
    case RC_ADDR(0x0001f554u): goto L_1F554;
    case RC_ADDR(0x0001f558u): goto L_1F558;
    case RC_ADDR(0x0001f55eu): goto L_1F55E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F51E:
    /* 0001f51e   4  movea.l (a,A5),A0 */
    c->pc = RC_ADDR(0x0001f51eu);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[0] = t0;

L_1F522:
    /* 0001f522   4  movea.l (c,A0),A1 */
    c->pc = RC_ADDR(0x0001f522u);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_1F526:
    /* 0001f526   4  movea.l (38,A1),A3 */
    c->pc = RC_ADDR(0x0001f526u);
    t0 = rc_rd32(c, m, (c->a[1] + 0x38u));
    c->a[3] = t0;

L_1F52A:
    /* 0001f52a   2  move.l A3,D0 */
    c->pc = RC_ADDR(0x0001f52au);
    t0 = rc_a_get(c, 3, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F52C:
    /* 0001f52c   2  beq 0001f53c */
    c->pc = RC_ADDR(0x0001f52cu);
    if (rc_cond(c, 7)) goto L_1F53C;

L_1F52E:
    /* 0001f52e   4  pea (282,A4) */
    c->pc = RC_ADDR(0x0001f52eu);
    rc_push32(c, m, (c->a[4] + 0x282u));

L_1F532:
    /* 0001f532   2  move.l A3,-(A7) */
    c->pc = RC_ADDR(0x0001f532u);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F534:
    /* 0001f534   4  jsr (0001d87c) */
    c->pc = RC_ADDR(0x0001f534u);
    rc_push32(c, m, RC_ADDR(0x0001f538u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d87cu);
    return;

L_1F538:
    /* 0001f538   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001f538u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1F53A:
    /* 0001f53a   2  bra 0001f546 */
    c->pc = RC_ADDR(0x0001f53au);
    goto L_1F546;

L_1F53C:
    /* 0001f53c   4  pea (282,A4) */
    c->pc = RC_ADDR(0x0001f53cu);
    rc_push32(c, m, (c->a[4] + 0x282u));

L_1F540:
    /* 0001f540   4  jsr (0001d8d0) */
    c->pc = RC_ADDR(0x0001f540u);
    rc_push32(c, m, RC_ADDR(0x0001f544u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d8d0u);
    return;

L_1F544:
    /* 0001f544   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001f544u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1F546:
    /* 0001f546   4  movea.l (a,A5),A0 */
    c->pc = RC_ADDR(0x0001f546u);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[0] = t0;

L_1F54A:
    /* 0001f54a   4  move.l (c,A0),-(A7) */
    c->pc = RC_ADDR(0x0001f54au);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F54E:
    /* 0001f54e   4  jsr (0001db40) */
    c->pc = RC_ADDR(0x0001f54eu);
    rc_push32(c, m, RC_ADDR(0x0001f552u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001db40u);
    return;

L_1F552:
    /* 0001f552   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001f552u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1F554:
    /* 0001f554   4  clr.w (ffffff4e,A4) */
    c->pc = RC_ADDR(0x0001f554u);
    rc_wr16(c, m, (c->a[4] - 0xb2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1F558:
    /* 0001f558   6  move.w #1,(26ba,A4) */
    c->pc = RC_ADDR(0x0001f558u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x26bau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F55E:
    /* 0001f55e   4  bra 0001f8ae */
    c->pc = RC_ADDR(0x0001f55eu);
    c->pc = RC_ADDR(0x0001f8aeu);
    return;

}
