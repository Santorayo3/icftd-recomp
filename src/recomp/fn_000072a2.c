/* fn_000072a2 - 68 byte(s), 19 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000072a2(cpu_t *c, rt_machine *m)
{
    u32 t0, t1;

    switch (c->pc)
    {
    case RC_ADDR(0x000072a2u): goto L_72A2;
    case RC_ADDR(0x000072a6u): goto L_72A6;
    case RC_ADDR(0x000072acu): goto L_72AC;
    case RC_ADDR(0x000072aeu): goto L_72AE;
    case RC_ADDR(0x000072b2u): goto L_72B2;
    case RC_ADDR(0x000072b4u): goto L_72B4;
    case RC_ADDR(0x000072bau): goto L_72BA;
    case RC_ADDR(0x000072beu): goto L_72BE;
    case RC_ADDR(0x000072c2u): goto L_72C2;
    case RC_ADDR(0x000072c4u): goto L_72C4;
    case RC_ADDR(0x000072c8u): goto L_72C8;
    case RC_ADDR(0x000072cau): goto L_72CA;
    case RC_ADDR(0x000072d0u): goto L_72D0;
    case RC_ADDR(0x000072d2u): goto L_72D2;
    case RC_ADDR(0x000072d8u): goto L_72D8;
    case RC_ADDR(0x000072dcu): goto L_72DC;
    case RC_ADDR(0x000072e0u): goto L_72E0;
    case RC_ADDR(0x000072e2u): goto L_72E2;
    case RC_ADDR(0x000072e4u): goto L_72E4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_72A2:
    /* 000072a2   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x000072a2u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_72A6:
    /* 000072a6   6  cmpi.w #8,(ffff83c8,A4) */
    c->pc = RC_ADDR(0x000072a6u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_cmp(c, RC_W, t0, 0x00000008u);

L_72AC:
    /* 000072ac   2  bne 000072e2 */
    c->pc = RC_ADDR(0x000072acu);
    if (rc_cond(c, 6)) goto L_72E2;

L_72AE:
    /* 000072ae   4  tst.w (ffffcf46,A4) */
    c->pc = RC_ADDR(0x000072aeu);
    t0 = rc_rd16(c, m, (c->a[4] - 0x30bau));
    rc_set_nzvc(c, t0, RC_W);

L_72B2:
    /* 000072b2   2  bne 000072e2 */
    c->pc = RC_ADDR(0x000072b2u);
    if (rc_cond(c, 6)) goto L_72E2;

L_72B4:
    /* 000072b4   6  move.w #1,(ffffcf46,A4) */
    c->pc = RC_ADDR(0x000072b4u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x30bau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_72BA:
    /* 000072ba   4  move.w #1388,-(A7) */
    c->pc = RC_ADDR(0x000072bau);
    t0 = 0x00001388u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_72BE:
    /* 000072be   4  jsr (ffff8188,A4) */
    c->pc = RC_ADDR(0x000072beu);
    /* vector 65 */
    rc_push32(c, m, RC_ADDR(0x000072c2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00016ee0u);
    return;

L_72C2:
    /* 000072c2   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000072c2u);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_72C4:
    /* 000072c4   4  cmp.w #9c4,D0 */
    c->pc = RC_ADDR(0x000072c4u);
    t0 = 0x000009c4u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_72C8:
    /* 000072c8   2  bge 000072d2 */
    c->pc = RC_ADDR(0x000072c8u);
    if (rc_cond(c, 12)) goto L_72D2;

L_72CA:
    /* 000072ca   6  move.w #1f,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000072cau);
    t0 = 0x0000001fu;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_72D0:
    /* 000072d0   2  bra 000072d8 */
    c->pc = RC_ADDR(0x000072d0u);
    goto L_72D8;

L_72D2:
    /* 000072d2   6  move.w #2c,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000072d2u);
    t0 = 0x0000002cu;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_72D8:
    /* 000072d8   4  move.w (fffffffe,A5),-(A7) */
    c->pc = RC_ADDR(0x000072d8u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_72DC:
    /* 000072dc   4  jsr (000070ca) */
    c->pc = RC_ADDR(0x000072dcu);
    rc_push32(c, m, RC_ADDR(0x000072e0u));
    rc_depth++;
    c->pc = RC_ADDR(0x000070cau);
    return;

L_72E0:
    /* 000072e0   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000072e0u);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_72E2:
    /* 000072e2   2  unlk A5 */
    c->pc = RC_ADDR(0x000072e2u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_72E4:
    /* 000072e4   2  rts */
    c->pc = RC_ADDR(0x000072e4u);
    rc_ret(c, m);
    return;

}
