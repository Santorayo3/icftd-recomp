/* fn_0001fbba - 34 byte(s), 13 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001fbba(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001fbbau): goto L_1FBBA;
    case RC_ADDR(0x0001fbbeu): goto L_1FBBE;
    case RC_ADDR(0x0001fbc0u): goto L_1FBC0;
    case RC_ADDR(0x0001fbc2u): goto L_1FBC2;
    case RC_ADDR(0x0001fbc4u): goto L_1FBC4;
    case RC_ADDR(0x0001fbc6u): goto L_1FBC6;
    case RC_ADDR(0x0001fbcau): goto L_1FBCA;
    case RC_ADDR(0x0001fbceu): goto L_1FBCE;
    case RC_ADDR(0x0001fbd0u): goto L_1FBD0;
    case RC_ADDR(0x0001fbd4u): goto L_1FBD4;
    case RC_ADDR(0x0001fbd6u): goto L_1FBD6;
    case RC_ADDR(0x0001fbd8u): goto L_1FBD8;
    case RC_ADDR(0x0001fbdau): goto L_1FBDA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1FBBA:
    /* 0001fbba   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001fbbau);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1FBBE:
    /* 0001fbbe   2  move.l D4,-(A7) */
    c->pc = RC_ADDR(0x0001fbbeu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FBC0:
    /* 0001fbc0   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x0001fbc0u);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_1FBC2:
    /* 0001fbc2   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x0001fbc2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FBC4:
    /* 0001fbc4   2  asl.w #1,D0 */
    c->pc = RC_ADDR(0x0001fbc4u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_1FBC6:
    /* 0001fbc6   4  lea (32fa,A4),A0 */
    c->pc = RC_ADDR(0x0001fbc6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x32fau);

L_1FBCA:
    /* 0001fbca   4  move.b D0,(0,A0,D4.w) */
    c->pc = RC_ADDR(0x0001fbcau);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 0, RC_B);
    t4 = rc_ext(c->d[4], RC_W);
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_1FBCE:
    /* 0001fbce   2  addq.w #1,D4 */
    c->pc = RC_ADDR(0x0001fbceu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_1FBD0:
    /* 0001fbd0   4  cmp.w #20,D4 */
    c->pc = RC_ADDR(0x0001fbd0u);
    rc_step(c, m, 8);
    t0 = 0x00000020u;
    t1 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1FBD4:
    /* 0001fbd4   2  blt 0001fbc2 */
    c->pc = RC_ADDR(0x0001fbd4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1FBC2; }

L_1FBD6:
    /* 0001fbd6   2  move.l (A7)+,D4 */
    c->pc = RC_ADDR(0x0001fbd6u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FBD8:
    /* 0001fbd8   2  unlk A5 */
    c->pc = RC_ADDR(0x0001fbd8u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1FBDA:
    /* 0001fbda   2  rts */
    c->pc = RC_ADDR(0x0001fbdau);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
