/* fn_0001f72a - 52 byte(s), 13 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001f72a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f72au): goto L_1F72A;
    case RC_ADDR(0x0001f72eu): goto L_1F72E;
    case RC_ADDR(0x0001f732u): goto L_1F732;
    case RC_ADDR(0x0001f734u): goto L_1F734;
    case RC_ADDR(0x0001f736u): goto L_1F736;
    case RC_ADDR(0x0001f73au): goto L_1F73A;
    case RC_ADDR(0x0001f740u): goto L_1F740;
    case RC_ADDR(0x0001f744u): goto L_1F744;
    case RC_ADDR(0x0001f74au): goto L_1F74A;
    case RC_ADDR(0x0001f74cu): goto L_1F74C;
    case RC_ADDR(0x0001f750u): goto L_1F750;
    case RC_ADDR(0x0001f754u): goto L_1F754;
    case RC_ADDR(0x0001f75au): goto L_1F75A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F72A:
    /* 0001f72a   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001f72au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1F72E:
    /* 0001f72e   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001f72eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F732:
    /* 0001f732   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001f732u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1F734:
    /* 0001f734   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001f734u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1F736:
    /* 0001f736   4  lea (282,A4),A0 */
    c->pc = RC_ADDR(0x0001f736u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x282u);

L_1F73A:
    /* 0001f73a   6  move.w (12,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001f73au);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] + 0x12u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F740:
    /* 0001f740   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001f740u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1F744:
    /* 0001f744   6  cmpi.w #20,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001f744u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000020u);

L_1F74A:
    /* 0001f74a   2  blt 0001f72e */
    c->pc = RC_ADDR(0x0001f74au);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1F72E; }

L_1F74C:
    /* 0001f74c   4  jsr (0001db86) */
    c->pc = RC_ADDR(0x0001f74cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f750u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001db86u);
    return;

L_1F750:
    /* 0001f750   4  clr.w (ffffff4e,A4) */
    c->pc = RC_ADDR(0x0001f750u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0xb2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1F754:
    /* 0001f754   6  move.w #1,(26ba,A4) */
    c->pc = RC_ADDR(0x0001f754u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x26bau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F75A:
    /* 0001f75a   4  bra 0001f8ae */
    c->pc = RC_ADDR(0x0001f75au);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0001f8aeu);
    return;

}
