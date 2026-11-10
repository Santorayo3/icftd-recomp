/* fn_00008ba6 - 72 byte(s), 20 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00008ba6(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x00008ba6u): goto L_8BA6;
    case RC_ADDR(0x00008baau): goto L_8BAA;
    case RC_ADDR(0x00008bb0u): goto L_8BB0;
    case RC_ADDR(0x00008bb4u): goto L_8BB4;
    case RC_ADDR(0x00008bb8u): goto L_8BB8;
    case RC_ADDR(0x00008bbau): goto L_8BBA;
    case RC_ADDR(0x00008bbeu): goto L_8BBE;
    case RC_ADDR(0x00008bc0u): goto L_8BC0;
    case RC_ADDR(0x00008bc4u): goto L_8BC4;
    case RC_ADDR(0x00008bc8u): goto L_8BC8;
    case RC_ADDR(0x00008bccu): goto L_8BCC;
    case RC_ADDR(0x00008bd0u): goto L_8BD0;
    case RC_ADDR(0x00008bd2u): goto L_8BD2;
    case RC_ADDR(0x00008bd6u): goto L_8BD6;
    case RC_ADDR(0x00008bdau): goto L_8BDA;
    case RC_ADDR(0x00008bdeu): goto L_8BDE;
    case RC_ADDR(0x00008be2u): goto L_8BE2;
    case RC_ADDR(0x00008be4u): goto L_8BE4;
    case RC_ADDR(0x00008beau): goto L_8BEA;
    case RC_ADDR(0x00008becu): goto L_8BEC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_8BA6:
    /* 00008ba6   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008ba6u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_8BAA:
    /* 00008baa   6  move.w #136,(fffff27c,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008baau);
    t0 = 0x00000136u;
    rc_wr16(c, m, (c->a[4] - 0xd84u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_8BB0:
    /* 00008bb0   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008bb0u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_8BB4:
    /* 00008bb4   4  jsr (00004f5c) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008bb4u);
    rc_push32(c, m, RC_ADDR(0x00008bb8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00004f5cu);
    return;

L_8BB8:
    /* 00008bb8   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008bb8u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_8BBA:
    /* 00008bba   4  move.w #c5,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008bbau);
    t0 = 0x000000c5u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8BBE:
    /* 00008bbe   2  sub.w D0,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008bbeu);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_8BC0:
    /* 00008bc0   4  move.w D1,(ffffcbc2,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008bc0u);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x343eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_8BC4:
    /* 00008bc4   4  move.w #8,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008bc4u);
    t0 = 0x00000008u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_8BC8:
    /* 00008bc8   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008bc8u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_8BCC:
    /* 00008bcc   4  jsr (ffff806e,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008bccu);
    /* vector 18 */
    rc_push32(c, m, RC_ADDR(0x00008bd0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005012u);
    return;

L_8BD0:
    /* 00008bd0   2  addq.w #6,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008bd0u);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_8BD2:
    /* 00008bd2   4  jsr (ffff81ee,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008bd2u);
    /* vector 82 */
    rc_push32(c, m, RC_ADDR(0x00008bd6u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d1dau);
    return;

L_8BD6:
    /* 00008bd6   4  move.w #8,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008bd6u);
    t0 = 0x00000008u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_8BDA:
    /* 00008bda   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008bdau);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_8BDE:
    /* 00008bde   4  jsr (ffff806e,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008bdeu);
    /* vector 18 */
    rc_push32(c, m, RC_ADDR(0x00008be2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005012u);
    return;

L_8BE2:
    /* 00008be2   2  addq.w #6,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008be2u);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_8BE4:
    /* 00008be4   6  move.w #118,(fffff27c,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008be4u);
    t0 = 0x00000118u;
    rc_wr16(c, m, (c->a[4] - 0xd84u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_8BEA:
    /* 00008bea   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008beau);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_8BEC:
    /* 00008bec   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008becu);
    rc_ret(c, m);
    return;

}
