/* fn_000120b4 - 64 byte(s), 18 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000120b4(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000120b4u): goto L_120B4;
    case RC_ADDR(0x000120b8u): goto L_120B8;
    case RC_ADDR(0x000120beu): goto L_120BE;
    case RC_ADDR(0x000120c2u): goto L_120C2;
    case RC_ADDR(0x000120c6u): goto L_120C6;
    case RC_ADDR(0x000120c8u): goto L_120C8;
    case RC_ADDR(0x000120cau): goto L_120CA;
    case RC_ADDR(0x000120ceu): goto L_120CE;
    case RC_ADDR(0x000120d2u): goto L_120D2;
    case RC_ADDR(0x000120d4u): goto L_120D4;
    case RC_ADDR(0x000120d6u): goto L_120D6;
    case RC_ADDR(0x000120dau): goto L_120DA;
    case RC_ADDR(0x000120e0u): goto L_120E0;
    case RC_ADDR(0x000120e4u): goto L_120E4;
    case RC_ADDR(0x000120e8u): goto L_120E8;
    case RC_ADDR(0x000120eeu): goto L_120EE;
    case RC_ADDR(0x000120f0u): goto L_120F0;
    case RC_ADDR(0x000120f2u): goto L_120F2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_120B4:
    /* 000120b4   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x000120b4u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_120B8:
    /* 000120b8   6  move.w #29,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000120b8u);
    rc_step(c, m);
    t0 = 0x00000029u;
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_120BE:
    /* 000120be   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x000120beu);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_120C2:
    /* 000120c2   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000120c2u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_120C6:
    /* 000120c6   2  ext.l D0 */
    c->pc = RC_ADDR(0x000120c6u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_120C8:
    /* 000120c8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000120c8u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_120CA:
    /* 000120ca   4  lea (282,A4),A0 */
    c->pc = RC_ADDR(0x000120cau);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0x282u);

L_120CE:
    /* 000120ce   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x000120ceu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_120D2:
    /* 000120d2   2  ext.l D1 */
    c->pc = RC_ADDR(0x000120d2u);
    rc_step(c, m);
    rc_ext_l(c, 1);

L_120D4:
    /* 000120d4   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x000120d4u);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_120D6:
    /* 000120d6   4  movea.l (e04,A4),A1 */
    c->pc = RC_ADDR(0x000120d6u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe04u));
    c->a[1] = t0;

L_120DA:
    /* 000120da   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x000120dau);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_120E0:
    /* 000120e0   4  addq.w #2,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000120e0u);
    rc_step(c, m);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_120E4:
    /* 000120e4   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000120e4u);
    rc_step(c, m);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_120E8:
    /* 000120e8   6  cmpi.w #20,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000120e8u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000020u);

L_120EE:
    /* 000120ee   2  blt 000120c2 */
    c->pc = RC_ADDR(0x000120eeu);
    rc_step(c, m);
    if (rc_cond(c, 13)) { rc_tick(); goto L_120C2; }

L_120F0:
    /* 000120f0   2  unlk A5 */
    c->pc = RC_ADDR(0x000120f0u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_120F2:
    /* 000120f2   2  rts */
    c->pc = RC_ADDR(0x000120f2u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
