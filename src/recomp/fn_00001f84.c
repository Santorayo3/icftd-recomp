/* fn_00001f84 - 38 byte(s), 14 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00001f84(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00001f84u): goto L_1F84;
    case RC_ADDR(0x00001f88u): goto L_1F88;
    case RC_ADDR(0x00001f8cu): goto L_1F8C;
    case RC_ADDR(0x00001f8eu): goto L_1F8E;
    case RC_ADDR(0x00001f90u): goto L_1F90;
    case RC_ADDR(0x00001f94u): goto L_1F94;
    case RC_ADDR(0x00001f98u): goto L_1F98;
    case RC_ADDR(0x00001f9cu): goto L_1F9C;
    case RC_ADDR(0x00001f9eu): goto L_1F9E;
    case RC_ADDR(0x00001fa0u): goto L_1FA0;
    case RC_ADDR(0x00001fa2u): goto L_1FA2;
    case RC_ADDR(0x00001fa4u): goto L_1FA4;
    case RC_ADDR(0x00001fa6u): goto L_1FA6;
    case RC_ADDR(0x00001fa8u): goto L_1FA8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F84:
    /* 00001f84   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00001f84u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1F88:
    /* 00001f88   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00001f88u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1F8C:
    /* 00001f8c   2  tst.b (A0) */
    c->pc = RC_ADDR(0x00001f8cu);
    rc_step(c, m);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_set_nzvc(c, t0, RC_B);

L_1F8E:
    /* 00001f8e   2  beq 00001fa6 */
    c->pc = RC_ADDR(0x00001f8eu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1FA6;

L_1F90:
    /* 00001f90   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00001f90u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1F94:
    /* 00001f94   4  addq.l #1,(8,A5) */
    c->pc = RC_ADDR(0x00001f94u);
    rc_step(c, m);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_1F98:
    /* 00001f98   4  cmpi.b #20,(A0) */
    c->pc = RC_ADDR(0x00001f98u);
    rc_step(c, m);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x00000020u);

L_1F9C:
    /* 00001f9c   2  ble 00001fa4 */
    c->pc = RC_ADDR(0x00001f9cu);
    rc_step(c, m);
    if (rc_cond(c, 15)) goto L_1FA4;

L_1F9E:
    /* 00001f9e   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00001f9eu);
    rc_step(c, m);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1FA0:
    /* 00001fa0   2  unlk A5 */
    c->pc = RC_ADDR(0x00001fa0u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1FA2:
    /* 00001fa2   2  rts */
    c->pc = RC_ADDR(0x00001fa2u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

L_1FA4:
    /* 00001fa4   2  bra 00001f88 */
    c->pc = RC_ADDR(0x00001fa4u);
    rc_step(c, m);
    rc_tick();
    goto L_1F88;

L_1FA6:
    /* 00001fa6   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00001fa6u);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1FA8:
    /* 00001fa8   2  bra 00001fa0 */
    c->pc = RC_ADDR(0x00001fa8u);
    rc_step(c, m);
    rc_tick();
    goto L_1FA0;

}
