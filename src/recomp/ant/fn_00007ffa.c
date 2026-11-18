/* fn_00007ffa - 68 byte(s), 19 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00007ffa(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00007ffau): goto L_7FFA;
    case RC_ADDR(0x00007ffeu): goto L_7FFE;
    case RC_ADDR(0x00008002u): goto L_8002;
    case RC_ADDR(0x00008006u): goto L_8006;
    case RC_ADDR(0x0000800au): goto L_800A;
    case RC_ADDR(0x0000800eu): goto L_800E;
    case RC_ADDR(0x00008012u): goto L_8012;
    case RC_ADDR(0x00008018u): goto L_8018;
    case RC_ADDR(0x0000801au): goto L_801A;
    case RC_ADDR(0x0000801eu): goto L_801E;
    case RC_ADDR(0x00008022u): goto L_8022;
    case RC_ADDR(0x00008024u): goto L_8024;
    case RC_ADDR(0x00008026u): goto L_8026;
    case RC_ADDR(0x0000802au): goto L_802A;
    case RC_ADDR(0x0000802eu): goto L_802E;
    case RC_ADDR(0x00008032u): goto L_8032;
    case RC_ADDR(0x00008038u): goto L_8038;
    case RC_ADDR(0x0000803au): goto L_803A;
    case RC_ADDR(0x0000803cu): goto L_803C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_7FFA:
    /* 00007ffa   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00007ffau);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_7FFE:
    /* 00007ffe   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00007ffeu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_8002:
    /* 00008002   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00008002u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8006:
    /* 00008006   4  lea (ffffd5cc,A4),A0 */
    c->pc = RC_ADDR(0x00008006u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x2a34u);

L_800A:
    /* 0000800a   4  clr.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000800au);
    rc_step(c, m, 18);
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_800E:
    /* 0000800e   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000800eu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_8012:
    /* 00008012   6  cmpi.w #100,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00008012u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000100u);

L_8018:
    /* 00008018   2  blt 00008002 */
    c->pc = RC_ADDR(0x00008018u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_8002; }

L_801A:
    /* 0000801a   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0000801au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_801E:
    /* 0000801e   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0000801eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8022:
    /* 00008022   2  ext.l D0 */
    c->pc = RC_ADDR(0x00008022u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_8024:
    /* 00008024   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00008024u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_8026:
    /* 00008026   4  lea (ffffd6d0,A4),A0 */
    c->pc = RC_ADDR(0x00008026u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x2930u);

L_802A:
    /* 0000802a   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000802au);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_802E:
    /* 0000802e   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000802eu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_8032:
    /* 00008032   6  cmpi.w #10,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00008032u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000010u);

L_8038:
    /* 00008038   2  blt 0000801e */
    c->pc = RC_ADDR(0x00008038u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_801E; }

L_803A:
    /* 0000803a   2  unlk A5 */
    c->pc = RC_ADDR(0x0000803au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_803C:
    /* 0000803c   2  rts */
    c->pc = RC_ADDR(0x0000803cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
