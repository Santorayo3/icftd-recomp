/* fn_000148c2 - 58 byte(s), 15 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000148c2(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000148c2u): goto L_148C2;
    case RC_ADDR(0x000148c6u): goto L_148C6;
    case RC_ADDR(0x000148cau): goto L_148CA;
    case RC_ADDR(0x000148ceu): goto L_148CE;
    case RC_ADDR(0x000148d2u): goto L_148D2;
    case RC_ADDR(0x000148d6u): goto L_148D6;
    case RC_ADDR(0x000148dau): goto L_148DA;
    case RC_ADDR(0x000148deu): goto L_148DE;
    case RC_ADDR(0x000148e2u): goto L_148E2;
    case RC_ADDR(0x000148e4u): goto L_148E4;
    case RC_ADDR(0x000148e8u): goto L_148E8;
    case RC_ADDR(0x000148eeu): goto L_148EE;
    case RC_ADDR(0x000148f2u): goto L_148F2;
    case RC_ADDR(0x000148f8u): goto L_148F8;
    case RC_ADDR(0x000148fau): goto L_148FA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_148C2:
    /* 000148c2   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x000148c2u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_148C6:
    /* 000148c6   4  pea (116e,A4) */
    c->pc = RC_ADDR(0x000148c6u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x116eu));

L_148CA:
    /* 000148ca   4  move.w #8,-(A7) */
    c->pc = RC_ADDR(0x000148cau);
    rc_step(c, m, 12);
    t0 = 0x00000008u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_148CE:
    /* 000148ce   4  pea (000148fc) */
    c->pc = RC_ADDR(0x000148ceu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000148fcu));

L_148D2:
    /* 000148d2   4  jsr (ffff817c,A4) */
    c->pc = RC_ADDR(0x000148d2u);
    rc_step(c, m, 18);
    /* vector 63 */
    rc_push32(c, m, RC_ADDR(0x000148d6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bd2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00016c00u);
    return;

L_148D6:
    /* 000148d6   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x000148d6u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_148DA:
    /* 000148da   4  pea (00014901) */
    c->pc = RC_ADDR(0x000148dau);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00014901u));

L_148DE:
    /* 000148de   4  jsr (00016af2) */
    c->pc = RC_ADDR(0x000148deu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000148e2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00016af2u);
    return;

L_148E2:
    /* 000148e2   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000148e2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_148E4:
    /* 000148e4   4  move.l D0,(118e,A4) */
    c->pc = RC_ADDR(0x000148e4u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x118eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_148E8:
    /* 000148e8   6  move.w #3,(1164,A4) */
    c->pc = RC_ADDR(0x000148e8u);
    rc_step(c, m, 16);
    t0 = 0x00000003u;
    rc_wr16(c, m, (c->a[4] + 0x1164u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_148EE:
    /* 000148ee   4  clr.w (afa,A4) */
    c->pc = RC_ADDR(0x000148eeu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xafau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_148F2:
    /* 000148f2   6  move.w #4,(1166,A4) */
    c->pc = RC_ADDR(0x000148f2u);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] + 0x1166u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_148F8:
    /* 000148f8   2  unlk A5 */
    c->pc = RC_ADDR(0x000148f8u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_148FA:
    /* 000148fa   2  rts */
    c->pc = RC_ADDR(0x000148fau);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
