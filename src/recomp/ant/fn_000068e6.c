/* fn_000068e6 - 38 byte(s), 12 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000068e6(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000068e6u): goto L_68E6;
    case RC_ADDR(0x000068eau): goto L_68EA;
    case RC_ADDR(0x000068eeu): goto L_68EE;
    case RC_ADDR(0x000068f2u): goto L_68F2;
    case RC_ADDR(0x000068f6u): goto L_68F6;
    case RC_ADDR(0x000068f8u): goto L_68F8;
    case RC_ADDR(0x000068fau): goto L_68FA;
    case RC_ADDR(0x000068feu): goto L_68FE;
    case RC_ADDR(0x00006902u): goto L_6902;
    case RC_ADDR(0x00006906u): goto L_6906;
    case RC_ADDR(0x00006908u): goto L_6908;
    case RC_ADDR(0x0000690au): goto L_690A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_68E6:
    /* 000068e6   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000068e6u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_68EA:
    /* 000068ea   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000068eau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_68EE:
    /* 000068ee   4  addq.l #1,(8,A5) */
    c->pc = RC_ADDR(0x000068eeu);
    rc_step(c, m, 24);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_68F2:
    /* 000068f2   4  cmpi.b #a,(A0) */
    c->pc = RC_ADDR(0x000068f2u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x0000000au);

L_68F6:
    /* 000068f6   2  beq 000068fa */
    c->pc = RC_ADDR(0x000068f6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_68FA;

L_68F8:
    /* 000068f8   2  bra 000068ea */
    c->pc = RC_ADDR(0x000068f8u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_68EA;

L_68FA:
    /* 000068fa   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000068fau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_68FE:
    /* 000068fe   4  subq.l #1,(8,A5) */
    c->pc = RC_ADDR(0x000068feu);
    rc_step(c, m, 24);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_6902:
    /* 00006902   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00006902u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_6906:
    /* 00006906   2  clr.b (A0) */
    c->pc = RC_ADDR(0x00006906u);
    rc_step(c, m, 12);
    rc_wr8(c, m, c->a[0], 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_6908:
    /* 00006908   2  unlk A5 */
    c->pc = RC_ADDR(0x00006908u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_690A:
    /* 0000690a   2  rts */
    c->pc = RC_ADDR(0x0000690au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
