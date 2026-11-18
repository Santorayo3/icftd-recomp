/* fn_00007700 - 74 byte(s), 21 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00007700(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00007700u): goto L_7700;
    case RC_ADDR(0x00007704u): goto L_7704;
    case RC_ADDR(0x00007706u): goto L_7706;
    case RC_ADDR(0x0000770au): goto L_770A;
    case RC_ADDR(0x0000770eu): goto L_770E;
    case RC_ADDR(0x00007712u): goto L_7712;
    case RC_ADDR(0x00007716u): goto L_7716;
    case RC_ADDR(0x0000771au): goto L_771A;
    case RC_ADDR(0x0000771eu): goto L_771E;
    case RC_ADDR(0x00007722u): goto L_7722;
    case RC_ADDR(0x00007724u): goto L_7724;
    case RC_ADDR(0x00007726u): goto L_7726;
    case RC_ADDR(0x0000772au): goto L_772A;
    case RC_ADDR(0x0000772eu): goto L_772E;
    case RC_ADDR(0x00007732u): goto L_7732;
    case RC_ADDR(0x00007738u): goto L_7738;
    case RC_ADDR(0x0000773au): goto L_773A;
    case RC_ADDR(0x0000773eu): goto L_773E;
    case RC_ADDR(0x00007742u): goto L_7742;
    case RC_ADDR(0x00007746u): goto L_7746;
    case RC_ADDR(0x00007748u): goto L_7748;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_7700:
    /* 00007700   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00007700u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_7704:
    /* 00007704   2  bsr 000076c4 */
    c->pc = RC_ADDR(0x00007704u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00007706u));
    rc_depth++;
    c->pc = RC_ADDR(0x000076c4u);
    return;

L_7706:
    /* 00007706   4  clr.w (fffffa06,A4) */
    c->pc = RC_ADDR(0x00007706u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x5fau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_770A:
    /* 0000770a   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0000770au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_770E:
    /* 0000770e   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0000770eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7712:
    /* 00007712   4  muls.w #a,D0 */
    c->pc = RC_ADDR(0x00007712u);
    rc_step(c, m, 42);
    t0 = 0x0000000au;
    rc_muls(c, 0, t0);

L_7716:
    /* 00007716   4  lea (fffff9a2,A4),A0 */
    c->pc = RC_ADDR(0x00007716u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x65eu);

L_771A:
    /* 0000771a   4  clr.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000771au);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_771E:
    /* 0000771e   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0000771eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7722:
    /* 00007722   2  ext.l D0 */
    c->pc = RC_ADDR(0x00007722u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_7724:
    /* 00007724   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00007724u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_7726:
    /* 00007726   4  lea (fffff97a,A4),A0 */
    c->pc = RC_ADDR(0x00007726u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x686u);

L_772A:
    /* 0000772a   4  clr.l (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000772au);
    rc_step(c, m, 26);
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_772E:
    /* 0000772e   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000772eu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_7732:
    /* 00007732   6  cmpi.w #a,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00007732u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x0000000au);

L_7738:
    /* 00007738   2  blt 0000770e */
    c->pc = RC_ADDR(0x00007738u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_770E; }

L_773A:
    /* 0000773a   4  clr.w (fffffa16,A4) */
    c->pc = RC_ADDR(0x0000773au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x5eau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_773E:
    /* 0000773e   4  clr.l (fffffa0c,A4) */
    c->pc = RC_ADDR(0x0000773eu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x5f4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_7742:
    /* 00007742   4  clr.l (a5e,A4) */
    c->pc = RC_ADDR(0x00007742u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] + 0xa5eu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_7746:
    /* 00007746   2  unlk A5 */
    c->pc = RC_ADDR(0x00007746u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_7748:
    /* 00007748   2  rts */
    c->pc = RC_ADDR(0x00007748u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
