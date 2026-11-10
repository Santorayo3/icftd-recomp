/* fn_0001d6cc - 62 byte(s), 21 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001d6cc(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001d6ccu): goto L_1D6CC;
    case RC_ADDR(0x0001d6d0u): goto L_1D6D0;
    case RC_ADDR(0x0001d6d2u): goto L_1D6D2;
    case RC_ADDR(0x0001d6d6u): goto L_1D6D6;
    case RC_ADDR(0x0001d6d8u): goto L_1D6D8;
    case RC_ADDR(0x0001d6dau): goto L_1D6DA;
    case RC_ADDR(0x0001d6deu): goto L_1D6DE;
    case RC_ADDR(0x0001d6e2u): goto L_1D6E2;
    case RC_ADDR(0x0001d6e4u): goto L_1D6E4;
    case RC_ADDR(0x0001d6e8u): goto L_1D6E8;
    case RC_ADDR(0x0001d6eau): goto L_1D6EA;
    case RC_ADDR(0x0001d6eeu): goto L_1D6EE;
    case RC_ADDR(0x0001d6f2u): goto L_1D6F2;
    case RC_ADDR(0x0001d6f6u): goto L_1D6F6;
    case RC_ADDR(0x0001d6f8u): goto L_1D6F8;
    case RC_ADDR(0x0001d6fcu): goto L_1D6FC;
    case RC_ADDR(0x0001d6feu): goto L_1D6FE;
    case RC_ADDR(0x0001d702u): goto L_1D702;
    case RC_ADDR(0x0001d704u): goto L_1D704;
    case RC_ADDR(0x0001d706u): goto L_1D706;
    case RC_ADDR(0x0001d708u): goto L_1D708;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1D6CC:
    /* 0001d6cc   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001d6ccu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1D6D0:
    /* 0001d6d0   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x0001d6d0u);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D6D2:
    /* 0001d6d2   4  movea.l (8,A5),A2 */
    c->pc = RC_ADDR(0x0001d6d2u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[2] = t0;

L_1D6D6:
    /* 0001d6d6   2  move.l A2,D0 */
    c->pc = RC_ADDR(0x0001d6d6u);
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D6D8:
    /* 0001d6d8   2  beq 0001d704 */
    c->pc = RC_ADDR(0x0001d6d8u);
    if (rc_cond(c, 7)) goto L_1D704;

L_1D6DA:
    /* 0001d6da   4  pea (c,A2) */
    c->pc = RC_ADDR(0x0001d6dau);
    rc_push32(c, m, (c->a[2] + 0xcu));

L_1D6DE:
    /* 0001d6de   4  jsr (ffff827e,A4) */
    c->pc = RC_ADDR(0x0001d6deu);
    /* vector 106 */
    rc_push32(c, m, RC_ADDR(0x0001d6e2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00020096u);
    return;

L_1D6E2:
    /* 0001d6e2   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001d6e2u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1D6E4:
    /* 0001d6e4   4  tst.l (38,A2) */
    c->pc = RC_ADDR(0x0001d6e4u);
    t0 = rc_rd32(c, m, (c->a[2] + 0x38u));
    rc_set_nzvc(c, t0, RC_L);

L_1D6E8:
    /* 0001d6e8   2  beq 0001d6f8 */
    c->pc = RC_ADDR(0x0001d6e8u);
    if (rc_cond(c, 7)) goto L_1D6F8;

L_1D6EA:
    /* 0001d6ea   4  pea (00000080).l */
    c->pc = RC_ADDR(0x0001d6eau);
    rc_push32(c, m, RC_ADDR(0x00000080u));

L_1D6EE:
    /* 0001d6ee   4  move.l (38,A2),-(A7) */
    c->pc = RC_ADDR(0x0001d6eeu);
    t0 = rc_rd32(c, m, (c->a[2] + 0x38u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D6F2:
    /* 0001d6f2   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x0001d6f2u);
    /* vector 139: exec.library -210 */
    c->pc = RC_ADDR(0x0001d6f6u);
    rc_os_call(c, m, 0, -210);

L_1D6F6:
    /* 0001d6f6   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001d6f6u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1D6F8:
    /* 0001d6f8   4  pea (0000003c).l */
    c->pc = RC_ADDR(0x0001d6f8u);
    rc_push32(c, m, RC_ADDR(0x0000003cu));

L_1D6FC:
    /* 0001d6fc   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x0001d6fcu);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D6FE:
    /* 0001d6fe   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x0001d6feu);
    /* vector 139: exec.library -210 */
    c->pc = RC_ADDR(0x0001d702u);
    rc_os_call(c, m, 0, -210);

L_1D702:
    /* 0001d702   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001d702u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1D704:
    /* 0001d704   2  movea.l (A7)+,A2 */
    c->pc = RC_ADDR(0x0001d704u);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_1D706:
    /* 0001d706   2  unlk A5 */
    c->pc = RC_ADDR(0x0001d706u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1D708:
    /* 0001d708   2  rts */
    c->pc = RC_ADDR(0x0001d708u);
    rc_ret(c, m);
    return;

}
