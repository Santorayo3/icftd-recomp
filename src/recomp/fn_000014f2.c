/* fn_000014f2 - 40 byte(s), 13 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000014f2(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x000014f2u): goto L_14F2;
    case RC_ADDR(0x000014f6u): goto L_14F6;
    case RC_ADDR(0x000014fau): goto L_14FA;
    case RC_ADDR(0x000014feu): goto L_14FE;
    case RC_ADDR(0x00001500u): goto L_1500;
    case RC_ADDR(0x00001502u): goto L_1502;
    case RC_ADDR(0x00001504u): goto L_1504;
    case RC_ADDR(0x00001508u): goto L_1508;
    case RC_ADDR(0x0000150cu): goto L_150C;
    case RC_ADDR(0x00001510u): goto L_1510;
    case RC_ADDR(0x00001514u): goto L_1514;
    case RC_ADDR(0x00001516u): goto L_1516;
    case RC_ADDR(0x00001518u): goto L_1518;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_14F2:
    /* 000014f2   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x000014f2u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_14F6:
    /* 000014f6   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000014f6u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_14FA:
    /* 000014fa   4  jsr (ffff82ae,A4) */
    c->pc = RC_ADDR(0x000014fau);
    /* vector 114 */
    rc_push32(c, m, RC_ADDR(0x000014feu));
    rc_depth++;
    c->pc = RC_ADDR(0x00020820u);
    return;

L_14FE:
    /* 000014fe   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000014feu);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1500:
    /* 00001500   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x00001500u);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1502:
    /* 00001502   2  ext.l D0 */
    c->pc = RC_ADDR(0x00001502u);
    rc_ext_l(c, 0);

L_1504:
    /* 00001504   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00001504u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1508:
    /* 00001508   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00001508u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_150C:
    /* 0000150c   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000150cu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1510:
    /* 00001510   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x00001510u);
    /* vector 139: exec.library -210 */
    c->pc = RC_ADDR(0x00001514u);
    rc_os_call(c, m, 0, -210);

L_1514:
    /* 00001514   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00001514u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1516:
    /* 00001516   2  unlk A5 */
    c->pc = RC_ADDR(0x00001516u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1518:
    /* 00001518   2  rts */
    c->pc = RC_ADDR(0x00001518u);
    rc_ret(c, m);
    return;

}
