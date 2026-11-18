/* fn_000036d2 - 60 byte(s), 17 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000036d2(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000036d2u): goto L_36D2;
    case RC_ADDR(0x000036d6u): goto L_36D6;
    case RC_ADDR(0x000036dau): goto L_36DA;
    case RC_ADDR(0x000036dcu): goto L_36DC;
    case RC_ADDR(0x000036deu): goto L_36DE;
    case RC_ADDR(0x000036e2u): goto L_36E2;
    case RC_ADDR(0x000036e6u): goto L_36E6;
    case RC_ADDR(0x000036eeu): goto L_36EE;
    case RC_ADDR(0x000036f0u): goto L_36F0;
    case RC_ADDR(0x000036f4u): goto L_36F4;
    case RC_ADDR(0x000036f6u): goto L_36F6;
    case RC_ADDR(0x000036f8u): goto L_36F8;
    case RC_ADDR(0x000036fcu): goto L_36FC;
    case RC_ADDR(0x00003700u): goto L_3700;
    case RC_ADDR(0x00003708u): goto L_3708;
    case RC_ADDR(0x0000370au): goto L_370A;
    case RC_ADDR(0x0000370cu): goto L_370C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_36D2:
    /* 000036d2   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x000036d2u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_36D6:
    /* 000036d6   4  tst.w (ffffd5c8,A4) */
    /* a flag wait: rc_wait runs it natively and returns 1 when its exit branch is taken;
     * 0 means the three instructions below run instead (the reference path). */
    if (rc_wait(c, m, RC_ADDR(0x000036d6u), 12,
                RC_ADDR(0x000036dau), 10, 6,
                RC_ADDR(0x000036dcu), 10,
                (c->a[4] - 0x2a38u), RC_W))
        goto L_36DE;
    c->pc = RC_ADDR(0x000036d6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a38u));
    rc_set_nzvc(c, t0, RC_W);

L_36DA:
    /* 000036da   2  bne 000036de */
    c->pc = RC_ADDR(0x000036dau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_36DE;

L_36DC:
    /* 000036dc   2  bra 000036d6 */
    c->pc = RC_ADDR(0x000036dcu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_36D6;

L_36DE:
    /* 000036de   4  clr.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x000036deu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_36E2:
    /* 000036e2   4  addq.l #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000036e2u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_36E6:
    /* 000036e6   8  cmpi.l #61a8,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000036e6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x000061a8u);

L_36EE:
    /* 000036ee   2  blt 000036e2 */
    c->pc = RC_ADDR(0x000036eeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_36E2; }

L_36F0:
    /* 000036f0   4  tst.w (ffffd5c8,A4) */
    /* a flag wait: rc_wait runs it natively and returns 1 when its exit branch is taken;
     * 0 means the three instructions below run instead (the reference path). */
    if (rc_wait(c, m, RC_ADDR(0x000036f0u), 12,
                RC_ADDR(0x000036f4u), 10, 7,
                RC_ADDR(0x000036f6u), 10,
                (c->a[4] - 0x2a38u), RC_W))
        goto L_36F8;
    c->pc = RC_ADDR(0x000036f0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a38u));
    rc_set_nzvc(c, t0, RC_W);

L_36F4:
    /* 000036f4   2  beq 000036f8 */
    c->pc = RC_ADDR(0x000036f4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_36F8;

L_36F6:
    /* 000036f6   2  bra 000036f0 */
    c->pc = RC_ADDR(0x000036f6u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_36F0;

L_36F8:
    /* 000036f8   4  clr.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x000036f8u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_36FC:
    /* 000036fc   4  addq.l #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000036fcu);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_3700:
    /* 00003700   8  cmpi.l #61a8,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00003700u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x000061a8u);

L_3708:
    /* 00003708   2  blt 000036fc */
    c->pc = RC_ADDR(0x00003708u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_36FC; }

L_370A:
    /* 0000370a   2  unlk A5 */
    c->pc = RC_ADDR(0x0000370au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_370C:
    /* 0000370c   2  rts */
    c->pc = RC_ADDR(0x0000370cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
