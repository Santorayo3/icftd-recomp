/* fn_0001ec36 - 52 byte(s), 14 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001ec36(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001ec36u): goto L_1EC36;
    case RC_ADDR(0x0001ec3au): goto L_1EC3A;
    case RC_ADDR(0x0001ec3eu): goto L_1EC3E;
    case RC_ADDR(0x0001ec42u): goto L_1EC42;
    case RC_ADDR(0x0001ec46u): goto L_1EC46;
    case RC_ADDR(0x0001ec4au): goto L_1EC4A;
    case RC_ADDR(0x0001ec4eu): goto L_1EC4E;
    case RC_ADDR(0x0001ec54u): goto L_1EC54;
    case RC_ADDR(0x0001ec56u): goto L_1EC56;
    case RC_ADDR(0x0001ec5au): goto L_1EC5A;
    case RC_ADDR(0x0001ec5eu): goto L_1EC5E;
    case RC_ADDR(0x0001ec62u): goto L_1EC62;
    case RC_ADDR(0x0001ec66u): goto L_1EC66;
    case RC_ADDR(0x0001ec68u): goto L_1EC68;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1EC36:
    /* 0001ec36   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x0001ec36u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_1EC3A:
    /* 0001ec3a   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001ec3au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1EC3E:
    /* 0001ec3e   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001ec3eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EC42:
    /* 0001ec42   4  lea (30dc,A4),A0 */
    c->pc = RC_ADDR(0x0001ec42u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x30dcu);

L_1EC46:
    /* 0001ec46   4  clr.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001ec46u);
    rc_step(c, m, 18);
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_1EC4A:
    /* 0001ec4a   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001ec4au);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1EC4E:
    /* 0001ec4e   6  cmpi.w #7,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001ec4eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000007u);

L_1EC54:
    /* 0001ec54   2  blt 0001ec3e */
    c->pc = RC_ADDR(0x0001ec54u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1EC3E; }

L_1EC56:
    /* 0001ec56   4  clr.w (714,A4) */
    c->pc = RC_ADDR(0x0001ec56u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x714u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1EC5A:
    /* 0001ec5a   4  clr.w (854,A4) */
    c->pc = RC_ADDR(0x0001ec5au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x854u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1EC5E:
    /* 0001ec5e   4  clr.w (79c,A4) */
    c->pc = RC_ADDR(0x0001ec5eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x79cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1EC62:
    /* 0001ec62   4  clr.w (79a,A4) */
    c->pc = RC_ADDR(0x0001ec62u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x79au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1EC66:
    /* 0001ec66   2  unlk A5 */
    c->pc = RC_ADDR(0x0001ec66u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1EC68:
    /* 0001ec68   2  rts */
    c->pc = RC_ADDR(0x0001ec68u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
