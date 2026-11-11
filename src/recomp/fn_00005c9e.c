/* fn_00005c9e - 20 byte(s), 7 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00005c9e(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00005c9eu): goto L_5C9E;
    case RC_ADDR(0x00005ca2u): goto L_5CA2;
    case RC_ADDR(0x00005ca6u): goto L_5CA6;
    case RC_ADDR(0x00005caau): goto L_5CAA;
    case RC_ADDR(0x00005cacu): goto L_5CAC;
    case RC_ADDR(0x00005caeu): goto L_5CAE;
    case RC_ADDR(0x00005cb0u): goto L_5CB0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_5C9E:
    /* 00005c9e   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00005c9eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_5CA2:
    /* 00005ca2   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00005ca2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5CA6:
    /* 00005ca6   4  jsr (00001bd2) */
    c->pc = RC_ADDR(0x00005ca6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00005caau));
    rc_depth++;
    c->pc = RC_ADDR(0x00001bd2u);
    return;

L_5CAA:
    /* 00005caa   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00005caau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_5CAC:
    /* 00005cac   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00005cacu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_5CAE:
    /* 00005cae   2  unlk A5 */
    c->pc = RC_ADDR(0x00005caeu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_5CB0:
    /* 00005cb0   2  rts */
    c->pc = RC_ADDR(0x00005cb0u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
