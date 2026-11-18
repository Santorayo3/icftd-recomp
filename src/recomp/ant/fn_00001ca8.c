/* fn_00001ca8 - 80 byte(s), 30 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00001ca8(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00001ca8u): goto L_1CA8;
    case RC_ADDR(0x00001cacu): goto L_1CAC;
    case RC_ADDR(0x00001cb0u): goto L_1CB0;
    case RC_ADDR(0x00001cb2u): goto L_1CB2;
    case RC_ADDR(0x00001cb6u): goto L_1CB6;
    case RC_ADDR(0x00001cbau): goto L_1CBA;
    case RC_ADDR(0x00001cbcu): goto L_1CBC;
    case RC_ADDR(0x00001cc0u): goto L_1CC0;
    case RC_ADDR(0x00001cc4u): goto L_1CC4;
    case RC_ADDR(0x00001cc6u): goto L_1CC6;
    case RC_ADDR(0x00001cc8u): goto L_1CC8;
    case RC_ADDR(0x00001ccau): goto L_1CCA;
    case RC_ADDR(0x00001cccu): goto L_1CCC;
    case RC_ADDR(0x00001cd0u): goto L_1CD0;
    case RC_ADDR(0x00001cd4u): goto L_1CD4;
    case RC_ADDR(0x00001cd6u): goto L_1CD6;
    case RC_ADDR(0x00001cd8u): goto L_1CD8;
    case RC_ADDR(0x00001cdcu): goto L_1CDC;
    case RC_ADDR(0x00001ce0u): goto L_1CE0;
    case RC_ADDR(0x00001ce2u): goto L_1CE2;
    case RC_ADDR(0x00001ce4u): goto L_1CE4;
    case RC_ADDR(0x00001ce6u): goto L_1CE6;
    case RC_ADDR(0x00001ce8u): goto L_1CE8;
    case RC_ADDR(0x00001ceau): goto L_1CEA;
    case RC_ADDR(0x00001cecu): goto L_1CEC;
    case RC_ADDR(0x00001ceeu): goto L_1CEE;
    case RC_ADDR(0x00001cf0u): goto L_1CF0;
    case RC_ADDR(0x00001cf2u): goto L_1CF2;
    case RC_ADDR(0x00001cf4u): goto L_1CF4;
    case RC_ADDR(0x00001cf6u): goto L_1CF6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1CA8:
    /* 00001ca8   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00001ca8u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1CAC:
    /* 00001cac   4  tst.l (8,A5) */
    c->pc = RC_ADDR(0x00001cacu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_set_nzvc(c, t0, RC_L);

L_1CB0:
    /* 00001cb0   2  beq 00001cf4 */
    c->pc = RC_ADDR(0x00001cb0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1CF4;

L_1CB2:
    /* 00001cb2   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00001cb2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1CB6:
    /* 00001cb6   4  tst.b (24,A0) */
    c->pc = RC_ADDR(0x00001cb6u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x24u));
    rc_set_nzvc(c, t0, RC_B);

L_1CBA:
    /* 00001cba   2  bne 00001ccc */
    c->pc = RC_ADDR(0x00001cbau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1CCC;

L_1CBC:
    /* 00001cbc   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00001cbcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1CC0:
    /* 00001cc0   4  tst.b (25,A0) */
    c->pc = RC_ADDR(0x00001cc0u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x25u));
    rc_set_nzvc(c, t0, RC_B);

L_1CC4:
    /* 00001cc4   2  bne 00001ccc */
    c->pc = RC_ADDR(0x00001cc4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1CCC;

L_1CC6:
    /* 00001cc6   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00001cc6u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1CC8:
    /* 00001cc8   2  unlk A5 */
    c->pc = RC_ADDR(0x00001cc8u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1CCA:
    /* 00001cca   2  rts */
    c->pc = RC_ADDR(0x00001ccau);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_1CCC:
    /* 00001ccc   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00001cccu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1CD0:
    /* 00001cd0   4  move.b (25,A0),D0 */
    c->pc = RC_ADDR(0x00001cd0u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x25u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1CD4:
    /* 00001cd4   2  ext.w D0 */
    c->pc = RC_ADDR(0x00001cd4u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_1CD6:
    /* 00001cd6   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00001cd6u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CD8:
    /* 00001cd8   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00001cd8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1CDC:
    /* 00001cdc   4  move.b (24,A0),D0 */
    c->pc = RC_ADDR(0x00001cdcu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x24u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1CE0:
    /* 00001ce0   2  ext.w D0 */
    c->pc = RC_ADDR(0x00001ce0u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_1CE2:
    /* 00001ce2   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00001ce2u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CE4:
    /* 00001ce4   2  bsr 00001c86 */
    c->pc = RC_ADDR(0x00001ce4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001ce6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00001c86u);
    return;

L_1CE6:
    /* 00001ce6   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00001ce6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1CE8:
    /* 00001ce8   2  tst.w D0 */
    c->pc = RC_ADDR(0x00001ce8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1CEA:
    /* 00001cea   2  beq 00001cf0 */
    c->pc = RC_ADDR(0x00001ceau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1CF0;

L_1CEC:
    /* 00001cec   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00001cecu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1CEE:
    /* 00001cee   2  bra 00001cc8 */
    c->pc = RC_ADDR(0x00001ceeu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1CC8;

L_1CF0:
    /* 00001cf0   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00001cf0u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1CF2:
    /* 00001cf2   2  bra 00001cc8 */
    c->pc = RC_ADDR(0x00001cf2u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1CC8;

L_1CF4:
    /* 00001cf4   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00001cf4u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1CF6:
    /* 00001cf6   2  bra 00001cc8 */
    c->pc = RC_ADDR(0x00001cf6u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1CC8;

}
