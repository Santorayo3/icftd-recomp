/* fn_00000aaa - 70 byte(s), 22 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00000aaa(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00000aaau): goto L_AAA;
    case RC_ADDR(0x00000aaeu): goto L_AAE;
    case RC_ADDR(0x00000ab2u): goto L_AB2;
    case RC_ADDR(0x00000ab4u): goto L_AB4;
    case RC_ADDR(0x00000ab8u): goto L_AB8;
    case RC_ADDR(0x00000abcu): goto L_ABC;
    case RC_ADDR(0x00000abeu): goto L_ABE;
    case RC_ADDR(0x00000ac0u): goto L_AC0;
    case RC_ADDR(0x00000ac2u): goto L_AC2;
    case RC_ADDR(0x00000ac4u): goto L_AC4;
    case RC_ADDR(0x00000ac8u): goto L_AC8;
    case RC_ADDR(0x00000accu): goto L_ACC;
    case RC_ADDR(0x00000ad0u): goto L_AD0;
    case RC_ADDR(0x00000ad4u): goto L_AD4;
    case RC_ADDR(0x00000ad6u): goto L_AD6;
    case RC_ADDR(0x00000adau): goto L_ADA;
    case RC_ADDR(0x00000adeu): goto L_ADE;
    case RC_ADDR(0x00000ae2u): goto L_AE2;
    case RC_ADDR(0x00000ae4u): goto L_AE4;
    case RC_ADDR(0x00000ae8u): goto L_AE8;
    case RC_ADDR(0x00000aecu): goto L_AEC;
    case RC_ADDR(0x00000aeeu): goto L_AEE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_AAA:
    /* 00000aaa   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x00000aaau);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_AAE:
    /* 00000aae   4  clr.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x00000aaeu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_AB2:
    /* 00000ab2   2  bra 00000ada */
    c->pc = RC_ADDR(0x00000ab2u);
    rc_step(c, m, 10);
    goto L_ADA;

L_AB4:
    /* 00000ab4   4  movea.l (ffffcf88,A4),A0 */
    c->pc = RC_ADDR(0x00000ab4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3078u));
    c->a[0] = t0;

L_AB8:
    /* 00000ab8   4  cmpa.l (ffffcf8c,A4),A0 */
    c->pc = RC_ADDR(0x00000ab8u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3074u));
    rc_cmp(c, RC_L, c->a[0], t0);

L_ABC:
    /* 00000abc   2  bls 00000ac4 */
    c->pc = RC_ADDR(0x00000abcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 3)) goto L_AC4;

L_ABE:
    /* 00000abe   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00000abeu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_AC0:
    /* 00000ac0   2  unlk A5 */
    c->pc = RC_ADDR(0x00000ac0u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_AC2:
    /* 00000ac2   2  rts */
    c->pc = RC_ADDR(0x00000ac2u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_AC4:
    /* 00000ac4   4  movea.l (ffffcf88,A4),A0 */
    c->pc = RC_ADDR(0x00000ac4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3078u));
    c->a[0] = t0;

L_AC8:
    /* 00000ac8   4  addq.l #1,(ffffcf88,A4) */
    c->pc = RC_ADDR(0x00000ac8u);
    rc_step(c, m, 24);
    t3 = (c->a[4] - 0x3078u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_ACC:
    /* 00000acc   4  movea.l (8,A5),A1 */
    c->pc = RC_ADDR(0x00000accu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[1] = t0;

L_AD0:
    /* 00000ad0   4  addq.l #1,(8,A5) */
    c->pc = RC_ADDR(0x00000ad0u);
    rc_step(c, m, 24);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_AD4:
    /* 00000ad4   2  move.b (A0),(A1) */
    c->pc = RC_ADDR(0x00000ad4u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_wr8(c, m, c->a[1], t0);
    rc_set_nzvc(c, t0, RC_B);

L_AD6:
    /* 00000ad6   4  addq.l #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00000ad6u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_ADA:
    /* 00000ada   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00000adau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_ADE:
    /* 00000ade   4  cmp.l (c,A5),D0 */
    c->pc = RC_ADDR(0x00000adeu);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_AE2:
    /* 00000ae2   2  bcs 00000ab4 */
    c->pc = RC_ADDR(0x00000ae2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_AB4; }

L_AE4:
    /* 00000ae4   4  move.l (c,A5),D0 */
    c->pc = RC_ADDR(0x00000ae4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_AE8:
    /* 00000ae8   4  add.l D0,(ffffef94,A4) */
    c->pc = RC_ADDR(0x00000ae8u);
    rc_step(c, m, 24);
    t3 = (c->a[4] - 0x106cu);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_AEC:
    /* 00000aec   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00000aecu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_AEE:
    /* 00000aee   2  bra 00000ac0 */
    c->pc = RC_ADDR(0x00000aeeu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_AC0;

}
