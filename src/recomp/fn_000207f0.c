/* fn_000207f0 - 32 byte(s), 10 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000207f0(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000207f0u): goto L_207F0;
    case RC_ADDR(0x000207f4u): goto L_207F4;
    case RC_ADDR(0x000207f8u): goto L_207F8;
    case RC_ADDR(0x000207fau): goto L_207FA;
    case RC_ADDR(0x000207feu): goto L_207FE;
    case RC_ADDR(0x00020802u): goto L_20802;
    case RC_ADDR(0x00020806u): goto L_20806;
    case RC_ADDR(0x00020808u): goto L_20808;
    case RC_ADDR(0x0002080cu): goto L_2080C;
    case RC_ADDR(0x0002080eu): goto L_2080E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_207F0:
    /* 000207f0   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000207f0u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_207F4:
    /* 000207f4   4  tst.l (ffffcd26,A4) */
    c->pc = RC_ADDR(0x000207f4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x32dau));
    rc_set_nzvc(c, t0, RC_L);

L_207F8:
    /* 000207f8   2  beq 0002080c */
    c->pc = RC_ADDR(0x000207f8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2080C;

L_207FA:
    /* 000207fa   4  move.l (3ae0,A4),-(A7) */
    c->pc = RC_ADDR(0x000207fau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3ae0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_207FE:
    /* 000207fe   4  move.l (ffffcd26,A4),-(A7) */
    c->pc = RC_ADDR(0x000207feu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x32dau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20802:
    /* 00020802   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x00020802u);
    rc_step(c, m, 18);
    /* vector 139 */
    rc_push32(c, m, RC_ADDR(0x00020806u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d9au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000216ccu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000216d0u);
    return;

L_20806:
    /* 00020806   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00020806u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_20808:
    /* 00020808   4  clr.l (ffffcd26,A4) */
    c->pc = RC_ADDR(0x00020808u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x32dau), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_2080C:
    /* 0002080c   2  unlk A5 */
    c->pc = RC_ADDR(0x0002080cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_2080E:
    /* 0002080e   2  rts */
    c->pc = RC_ADDR(0x0002080eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
