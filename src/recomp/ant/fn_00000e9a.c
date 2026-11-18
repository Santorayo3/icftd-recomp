/* fn_00000e9a - 50 byte(s), 17 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00000e9a(cpu_t *c, rt_machine *m)
{
    u32 t0, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00000e9au): goto L_E9A;
    case RC_ADDR(0x00000e9eu): goto L_E9E;
    case RC_ADDR(0x00000ea2u): goto L_EA2;
    case RC_ADDR(0x00000ea6u): goto L_EA6;
    case RC_ADDR(0x00000ea8u): goto L_EA8;
    case RC_ADDR(0x00000eaau): goto L_EAA;
    case RC_ADDR(0x00000eacu): goto L_EAC;
    case RC_ADDR(0x00000eb0u): goto L_EB0;
    case RC_ADDR(0x00000eb2u): goto L_EB2;
    case RC_ADDR(0x00000eb6u): goto L_EB6;
    case RC_ADDR(0x00000eb8u): goto L_EB8;
    case RC_ADDR(0x00000ebau): goto L_EBA;
    case RC_ADDR(0x00000ebcu): goto L_EBC;
    case RC_ADDR(0x00000ec0u): goto L_EC0;
    case RC_ADDR(0x00000ec4u): goto L_EC4;
    case RC_ADDR(0x00000ec8u): goto L_EC8;
    case RC_ADDR(0x00000ecau): goto L_ECA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_E9A:
    /* 00000e9a   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00000e9au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_E9E:
    /* 00000e9e   4  pea (00000002).l */
    c->pc = RC_ADDR(0x00000e9eu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000002u);

L_EA2:
    /* 00000ea2   4  pea (fffffffe,A5) */
    c->pc = RC_ADDR(0x00000ea2u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x2u));

L_EA6:
    /* 00000ea6   2  bsr 00000e54 */
    c->pc = RC_ADDR(0x00000ea6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00000ea8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000e54u);
    return;

L_EA8:
    /* 00000ea8   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00000ea8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_EAA:
    /* 00000eaa   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00000eaau);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_EAC:
    /* 00000eac   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00000eacu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EB0:
    /* 00000eb0   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00000eb0u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_EB2:
    /* 00000eb2   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00000eb2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_EB6:
    /* 00000eb6   2  bsr 00000e54 */
    c->pc = RC_ADDR(0x00000eb6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00000eb8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000e54u);
    return;

L_EB8:
    /* 00000eb8   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00000eb8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_EBA:
    /* 00000eba   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00000ebau);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_EBC:
    /* 00000ebc   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00000ebcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EC0:
    /* 00000ec0   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00000ec0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_EC4:
    /* 00000ec4   4  clr.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00000ec4u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_EC8:
    /* 00000ec8   2  unlk A5 */
    c->pc = RC_ADDR(0x00000ec8u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_ECA:
    /* 00000eca   2  rts */
    c->pc = RC_ADDR(0x00000ecau);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
