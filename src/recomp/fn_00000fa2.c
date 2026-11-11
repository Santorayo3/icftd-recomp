/* fn_00000fa2 - 72 byte(s), 21 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00000fa2(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00000fa2u): goto L_FA2;
    case RC_ADDR(0x00000fa6u): goto L_FA6;
    case RC_ADDR(0x00000faau): goto L_FAA;
    case RC_ADDR(0x00000faeu): goto L_FAE;
    case RC_ADDR(0x00000fb2u): goto L_FB2;
    case RC_ADDR(0x00000fb6u): goto L_FB6;
    case RC_ADDR(0x00000fbau): goto L_FBA;
    case RC_ADDR(0x00000fbcu): goto L_FBC;
    case RC_ADDR(0x00000fc0u): goto L_FC0;
    case RC_ADDR(0x00000fc2u): goto L_FC2;
    case RC_ADDR(0x00000fc6u): goto L_FC6;
    case RC_ADDR(0x00000fcau): goto L_FCA;
    case RC_ADDR(0x00000fceu): goto L_FCE;
    case RC_ADDR(0x00000fd2u): goto L_FD2;
    case RC_ADDR(0x00000fd4u): goto L_FD4;
    case RC_ADDR(0x00000fd8u): goto L_FD8;
    case RC_ADDR(0x00000fdcu): goto L_FDC;
    case RC_ADDR(0x00000fe0u): goto L_FE0;
    case RC_ADDR(0x00000fe4u): goto L_FE4;
    case RC_ADDR(0x00000fe6u): goto L_FE6;
    case RC_ADDR(0x00000fe8u): goto L_FE8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_FA2:
    /* 00000fa2   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00000fa2u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_FA6:
    /* 00000fa6   4  pea (00000002).l */
    c->pc = RC_ADDR(0x00000fa6u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000002u);

L_FAA:
    /* 00000faa   4  pea (fffffffe,A5) */
    c->pc = RC_ADDR(0x00000faau);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x2u));

L_FAE:
    /* 00000fae   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00000faeu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_FB2:
    /* 00000fb2   4  jsr (ffff8314,A4) */
    c->pc = RC_ADDR(0x00000fb2u);
    rc_step(c, m, 18);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x00000fb6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d6au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021472u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021476u);
    return;

L_FB6:
    /* 00000fb6   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00000fb6u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_FBA:
    /* 00000fba   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00000fbau);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_FBC:
    /* 00000fbc   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00000fbcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FC0:
    /* 00000fc0   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00000fc0u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_FC2:
    /* 00000fc2   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x00000fc2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_FC6:
    /* 00000fc6   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00000fc6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_FCA:
    /* 00000fca   4  jsr (ffff8314,A4) */
    c->pc = RC_ADDR(0x00000fcau);
    rc_step(c, m, 18);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x00000fceu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d6au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021472u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021476u);
    return;

L_FCE:
    /* 00000fce   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00000fceu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_FD2:
    /* 00000fd2   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00000fd2u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_FD4:
    /* 00000fd4   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00000fd4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FD8:
    /* 00000fd8   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x00000fd8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_FDC:
    /* 00000fdc   4  clr.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00000fdcu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_FE0:
    /* 00000fe0   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00000fe0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FE4:
    /* 00000fe4   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x00000fe4u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_FE6:
    /* 00000fe6   2  unlk A5 */
    c->pc = RC_ADDR(0x00000fe6u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_FE8:
    /* 00000fe8   2  rts */
    c->pc = RC_ADDR(0x00000fe8u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
