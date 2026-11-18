/* fn_0001f96c - 36 byte(s), 13 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001f96c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f96cu): goto L_1F96C;
    case RC_ADDR(0x0001f970u): goto L_1F970;
    case RC_ADDR(0x0001f974u): goto L_1F974;
    case RC_ADDR(0x0001f978u): goto L_1F978;
    case RC_ADDR(0x0001f97au): goto L_1F97A;
    case RC_ADDR(0x0001f97cu): goto L_1F97C;
    case RC_ADDR(0x0001f97eu): goto L_1F97E;
    case RC_ADDR(0x0001f980u): goto L_1F980;
    case RC_ADDR(0x0001f982u): goto L_1F982;
    case RC_ADDR(0x0001f986u): goto L_1F986;
    case RC_ADDR(0x0001f988u): goto L_1F988;
    case RC_ADDR(0x0001f98cu): goto L_1F98C;
    case RC_ADDR(0x0001f98eu): goto L_1F98E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F96C:
    /* 0001f96c   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001f96cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1F970:
    /* 0001f970   4  movem.l { D5 A3 },-(SP) */
    c->pc = RC_ADDR(0x0001f970u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_1F974:
    /* 0001f974   4  movea.l (8,A5),A2 */
    c->pc = RC_ADDR(0x0001f974u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[2] = t0;

L_1F978:
    /* 0001f978   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x0001f978u);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_1F97A:
    /* 0001f97a   2  movea.l A2,A0 */
    c->pc = RC_ADDR(0x0001f97au);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[0] = t0;

L_1F97C:
    /* 0001f97c   2  addq.l #2,A2 */
    c->pc = RC_ADDR(0x0001f97cu);
    rc_step(c, m, 8);
    c->a[2] += 0x00000002u;

L_1F97E:
    /* 0001f97e   2  clr.w (A0) */
    c->pc = RC_ADDR(0x0001f97eu);
    rc_step(c, m, 12);
    rc_wr16(c, m, c->a[0], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1F980:
    /* 0001f980   2  addq.w #1,D4 */
    c->pc = RC_ADDR(0x0001f980u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_1F982:
    /* 0001f982   4  cmp.w #20,D4 */
    c->pc = RC_ADDR(0x0001f982u);
    rc_step(c, m, 8);
    t0 = 0x00000020u;
    t1 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1F986:
    /* 0001f986   2  blt 0001f97a */
    c->pc = RC_ADDR(0x0001f986u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1F97A; }

L_1F988:
    /* 0001f988   4  movem.l (SP)+,{ D4 A2 } */
    c->pc = RC_ADDR(0x0001f988u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_1F98C:
    /* 0001f98c   2  unlk A5 */
    c->pc = RC_ADDR(0x0001f98cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1F98E:
    /* 0001f98e   2  rts */
    c->pc = RC_ADDR(0x0001f98eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
