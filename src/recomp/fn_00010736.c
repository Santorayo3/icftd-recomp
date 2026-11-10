/* fn_00010736 - 36 byte(s), 11 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00010736(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00010736u): goto L_10736;
    case RC_ADDR(0x0001073au): goto L_1073A;
    case RC_ADDR(0x0001073eu): goto L_1073E;
    case RC_ADDR(0x00010742u): goto L_10742;
    case RC_ADDR(0x00010744u): goto L_10744;
    case RC_ADDR(0x00010748u): goto L_10748;
    case RC_ADDR(0x0001074cu): goto L_1074C;
    case RC_ADDR(0x00010750u): goto L_10750;
    case RC_ADDR(0x00010752u): goto L_10752;
    case RC_ADDR(0x00010756u): goto L_10756;
    case RC_ADDR(0x00010758u): goto L_10758;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_10736:
    /* 00010736   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00010736u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1073A:
    /* 0001073a   4  move.w (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0001073au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1073E:
    /* 0001073e   4  jsr (000106ac) */
    c->pc = RC_ADDR(0x0001073eu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00010742u));
    rc_depth++;
    c->pc = RC_ADDR(0x000106acu);
    return;

L_10742:
    /* 00010742   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00010742u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_10744:
    /* 00010744   4  jsr (000170c4) */
    c->pc = RC_ADDR(0x00010744u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00010748u));
    rc_depth++;
    c->pc = RC_ADDR(0x000170c4u);
    return;

L_10748:
    /* 00010748   4  move.w (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00010748u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1074C:
    /* 0001074c   4  jsr (000106ac) */
    c->pc = RC_ADDR(0x0001074cu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00010750u));
    rc_depth++;
    c->pc = RC_ADDR(0x000106acu);
    return;

L_10750:
    /* 00010750   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00010750u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_10752:
    /* 00010752   4  jsr (000170c4) */
    c->pc = RC_ADDR(0x00010752u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00010756u));
    rc_depth++;
    c->pc = RC_ADDR(0x000170c4u);
    return;

L_10756:
    /* 00010756   2  unlk A5 */
    c->pc = RC_ADDR(0x00010756u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_10758:
    /* 00010758   2  rts */
    c->pc = RC_ADDR(0x00010758u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
