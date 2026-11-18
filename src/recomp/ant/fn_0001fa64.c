/* fn_0001fa64 - 64 byte(s), 20 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001fa64(cpu_t *c, rt_machine *m)
{
    u32 t0, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001fa64u): goto L_1FA64;
    case RC_ADDR(0x0001fa68u): goto L_1FA68;
    case RC_ADDR(0x0001fa6au): goto L_1FA6A;
    case RC_ADDR(0x0001fa6eu): goto L_1FA6E;
    case RC_ADDR(0x0001fa70u): goto L_1FA70;
    case RC_ADDR(0x0001fa72u): goto L_1FA72;
    case RC_ADDR(0x0001fa76u): goto L_1FA76;
    case RC_ADDR(0x0001fa7au): goto L_1FA7A;
    case RC_ADDR(0x0001fa7eu): goto L_1FA7E;
    case RC_ADDR(0x0001fa80u): goto L_1FA80;
    case RC_ADDR(0x0001fa84u): goto L_1FA84;
    case RC_ADDR(0x0001fa8au): goto L_1FA8A;
    case RC_ADDR(0x0001fa8cu): goto L_1FA8C;
    case RC_ADDR(0x0001fa90u): goto L_1FA90;
    case RC_ADDR(0x0001fa94u): goto L_1FA94;
    case RC_ADDR(0x0001fa98u): goto L_1FA98;
    case RC_ADDR(0x0001fa9au): goto L_1FA9A;
    case RC_ADDR(0x0001fa9eu): goto L_1FA9E;
    case RC_ADDR(0x0001faa0u): goto L_1FAA0;
    case RC_ADDR(0x0001faa2u): goto L_1FAA2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1FA64:
    /* 0001fa64   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001fa64u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1FA68:
    /* 0001fa68   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x0001fa68u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FA6A:
    /* 0001fa6a   4  movea.l (8,A5),A2 */
    c->pc = RC_ADDR(0x0001fa6au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[2] = t0;

L_1FA6E:
    /* 0001fa6e   2  move.l A2,D0 */
    c->pc = RC_ADDR(0x0001fa6eu);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FA70:
    /* 0001fa70   2  beq 0001fa9e */
    c->pc = RC_ADDR(0x0001fa70u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1FA9E;

L_1FA72:
    /* 0001fa72   4  move.w (12,A2),-(A7) */
    c->pc = RC_ADDR(0x0001fa72u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[2] + 0x12u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FA76:
    /* 0001fa76   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x0001fa76u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FA7A:
    /* 0001fa7a   4  pea (14,A2) */
    c->pc = RC_ADDR(0x0001fa7au);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[2] + 0x14u));

L_1FA7E:
    /* 0001fa7e   2  bsr 0001faa4 */
    c->pc = RC_ADDR(0x0001fa7eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001fa80u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001faa4u);
    return;

L_1FA80:
    /* 0001fa80   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001fa80u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_1FA84:
    /* 0001fa84   6  btst #2,(11,A2) */
    c->pc = RC_ADDR(0x0001fa84u);
    rc_step(c, m, 16);
    t3 = (c->a[2] + 0x11u);
    t4 = 0x00000002u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_1FA8A:
    /* 0001fa8a   2  beq 0001fa9e */
    c->pc = RC_ADDR(0x0001fa8au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1FA9E;

L_1FA8C:
    /* 0001fa8c   4  move.w (12,A2),-(A7) */
    c->pc = RC_ADDR(0x0001fa8cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[2] + 0x12u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FA90:
    /* 0001fa90   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x0001fa90u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FA94:
    /* 0001fa94   4  pea (94,A2) */
    c->pc = RC_ADDR(0x0001fa94u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[2] + 0x94u));

L_1FA98:
    /* 0001fa98   2  bsr 0001faa4 */
    c->pc = RC_ADDR(0x0001fa98u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001fa9au));
    rc_depth++;
    c->pc = RC_ADDR(0x0001faa4u);
    return;

L_1FA9A:
    /* 0001fa9a   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001fa9au);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_1FA9E:
    /* 0001fa9e   2  movea.l (A7)+,A2 */
    c->pc = RC_ADDR(0x0001fa9eu);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_1FAA0:
    /* 0001faa0   2  unlk A5 */
    c->pc = RC_ADDR(0x0001faa0u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1FAA2:
    /* 0001faa2   2  rts */
    c->pc = RC_ADDR(0x0001faa2u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
