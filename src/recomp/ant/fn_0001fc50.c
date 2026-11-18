/* fn_0001fc50 - 28 byte(s), 9 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001fc50(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001fc50u): goto L_1FC50;
    case RC_ADDR(0x0001fc54u): goto L_1FC54;
    case RC_ADDR(0x0001fc58u): goto L_1FC58;
    case RC_ADDR(0x0001fc5au): goto L_1FC5A;
    case RC_ADDR(0x0001fc5eu): goto L_1FC5E;
    case RC_ADDR(0x0001fc62u): goto L_1FC62;
    case RC_ADDR(0x0001fc64u): goto L_1FC64;
    case RC_ADDR(0x0001fc68u): goto L_1FC68;
    case RC_ADDR(0x0001fc6au): goto L_1FC6A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1FC50:
    /* 0001fc50   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001fc50u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1FC54:
    /* 0001fc54   4  subq.w #1,(ffffd2a6,A4) */
    c->pc = RC_ADDR(0x0001fc54u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x2d5au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1FC58:
    /* 0001fc58   2  bne 0001fc5e */
    c->pc = RC_ADDR(0x0001fc58u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1FC5E;

L_1FC5A:
    /* 0001fc5a   4  jsr (ffff8386,A4) */
    c->pc = RC_ADDR(0x0001fc5au);
    rc_step(c, m, 18);
    /* vector 150 */
    rc_push32(c, m, RC_ADDR(0x0001fc5eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e7cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023896u);
    return;

L_1FC5E:
    /* 0001fc5e   4  tst.w (ffffd2a6,A4) */
    c->pc = RC_ADDR(0x0001fc5eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2d5au));
    rc_set_nzvc(c, t0, RC_W);

L_1FC62:
    /* 0001fc62   2  bge 0001fc68 */
    c->pc = RC_ADDR(0x0001fc62u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1FC68;

L_1FC64:
    /* 0001fc64   4  clr.w (ffffd2a6,A4) */
    c->pc = RC_ADDR(0x0001fc64u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x2d5au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1FC68:
    /* 0001fc68   2  unlk A5 */
    c->pc = RC_ADDR(0x0001fc68u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1FC6A:
    /* 0001fc6a   2  rts */
    c->pc = RC_ADDR(0x0001fc6au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
