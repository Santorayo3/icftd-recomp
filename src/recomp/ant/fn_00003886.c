/* fn_00003886 - 38 byte(s), 11 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00003886(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00003886u): goto L_3886;
    case RC_ADDR(0x0000388au): goto L_388A;
    case RC_ADDR(0x0000388eu): goto L_388E;
    case RC_ADDR(0x00003892u): goto L_3892;
    case RC_ADDR(0x00003896u): goto L_3896;
    case RC_ADDR(0x0000389au): goto L_389A;
    case RC_ADDR(0x0000389cu): goto L_389C;
    case RC_ADDR(0x000038a0u): goto L_38A0;
    case RC_ADDR(0x000038a6u): goto L_38A6;
    case RC_ADDR(0x000038a8u): goto L_38A8;
    case RC_ADDR(0x000038aau): goto L_38AA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_3886:
    /* 00003886   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00003886u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_388A:
    /* 0000388a   4  jsr (00003800) */
    c->pc = RC_ADDR(0x0000388au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000388eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00003800u);
    return;

L_388E:
    /* 0000388e   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0000388eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3892:
    /* 00003892   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00003892u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3896:
    /* 00003896   4  jsr (00006612) */
    c->pc = RC_ADDR(0x00003896u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000389au));
    rc_depth++;
    c->pc = RC_ADDR(0x00006612u);
    return;

L_389A:
    /* 0000389a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000389au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_389C:
    /* 0000389c   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000389cu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_38A0:
    /* 000038a0   6  cmpi.w #5,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000038a0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_38A6:
    /* 000038a6   2  blt 00003892 */
    c->pc = RC_ADDR(0x000038a6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_3892; }

L_38A8:
    /* 000038a8   2  unlk A5 */
    c->pc = RC_ADDR(0x000038a8u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_38AA:
    /* 000038aa   2  rts */
    c->pc = RC_ADDR(0x000038aau);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
