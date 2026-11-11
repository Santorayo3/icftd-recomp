/* fn_0000be1e - 22 byte(s), 7 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000be1e(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000be1eu): goto L_BE1E;
    case RC_ADDR(0x0000be22u): goto L_BE22;
    case RC_ADDR(0x0000be26u): goto L_BE26;
    case RC_ADDR(0x0000be2au): goto L_BE2A;
    case RC_ADDR(0x0000be2eu): goto L_BE2E;
    case RC_ADDR(0x0000be30u): goto L_BE30;
    case RC_ADDR(0x0000be32u): goto L_BE32;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_BE1E:
    /* 0000be1e   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000be1eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_BE22:
    /* 0000be22   4  move.l (46c,A4),-(A7) */
    c->pc = RC_ADDR(0x0000be22u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x46cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_BE26:
    /* 0000be26   4  move.l (466,A4),-(A7) */
    c->pc = RC_ADDR(0x0000be26u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x466u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_BE2A:
    /* 0000be2a   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x0000be2au);
    rc_step(c, m, 18);
    /* vector 139 */
    rc_push32(c, m, RC_ADDR(0x0000be2eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d9au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000216ccu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000216d0u);
    return;

L_BE2E:
    /* 0000be2e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000be2eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_BE30:
    /* 0000be30   2  unlk A5 */
    c->pc = RC_ADDR(0x0000be30u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_BE32:
    /* 0000be32   2  rts */
    c->pc = RC_ADDR(0x0000be32u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
