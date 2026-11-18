/* fn_0000065e - 44 byte(s), 13 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000065e(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000065eu): goto L_65E;
    case RC_ADDR(0x00000662u): goto L_662;
    case RC_ADDR(0x00000664u): goto L_664;
    case RC_ADDR(0x00000668u): goto L_668;
    case RC_ADDR(0x0000066au): goto L_66A;
    case RC_ADDR(0x0000066cu): goto L_66C;
    case RC_ADDR(0x00000674u): goto L_674;
    case RC_ADDR(0x00000676u): goto L_676;
    case RC_ADDR(0x0000067au): goto L_67A;
    case RC_ADDR(0x0000067cu): goto L_67C;
    case RC_ADDR(0x0000067eu): goto L_67E;
    case RC_ADDR(0x00000686u): goto L_686;
    case RC_ADDR(0x00000688u): goto L_688;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_65E:
    /* 0000065e   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000065eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_662:
    /* 00000662   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00000662u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_664:
    /* 00000664   4  jsr (ffff8362,A4) */
    c->pc = RC_ADDR(0x00000664u);
    rc_step(c, m, 18);
    /* vector 144 */
    rc_push32(c, m, RC_ADDR(0x00000668u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e58u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023756u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0002375au);
    return;

L_668:
    /* 00000668   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00000668u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_66A:
    /* 0000066a   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x0000066au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_66C:
    /* 0000066c   8  move.l #ffffffff,(b8,A0) */
    c->pc = RC_ADDR(0x0000066cu);
    rc_step(c, m, 24);
    t0 = 0xffffffffu;
    rc_wr32(c, m, (c->a[0] + 0xb8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_674:
    /* 00000674   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00000674u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_676:
    /* 00000676   4  jsr (ffff8362,A4) */
    c->pc = RC_ADDR(0x00000676u);
    rc_step(c, m, 18);
    /* vector 144 */
    rc_push32(c, m, RC_ADDR(0x0000067au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e58u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023756u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0002375au);
    return;

L_67A:
    /* 0000067a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000067au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_67C:
    /* 0000067c   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x0000067cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_67E:
    /* 0000067e   8  move.l #ffffffff,(b8,A0) */
    c->pc = RC_ADDR(0x0000067eu);
    rc_step(c, m, 24);
    t0 = 0xffffffffu;
    rc_wr32(c, m, (c->a[0] + 0xb8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_686:
    /* 00000686   2  unlk A5 */
    c->pc = RC_ADDR(0x00000686u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_688:
    /* 00000688   2  rts */
    c->pc = RC_ADDR(0x00000688u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
