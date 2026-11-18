/* fn_0001fbdc - 70 byte(s), 23 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001fbdc(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001fbdcu): goto L_1FBDC;
    case RC_ADDR(0x0001fbe0u): goto L_1FBE0;
    case RC_ADDR(0x0001fbe4u): goto L_1FBE4;
    case RC_ADDR(0x0001fbe8u): goto L_1FBE8;
    case RC_ADDR(0x0001fbeau): goto L_1FBEA;
    case RC_ADDR(0x0001fbecu): goto L_1FBEC;
    case RC_ADDR(0x0001fbeeu): goto L_1FBEE;
    case RC_ADDR(0x0001fbf2u): goto L_1FBF2;
    case RC_ADDR(0x0001fbf4u): goto L_1FBF4;
    case RC_ADDR(0x0001fbf8u): goto L_1FBF8;
    case RC_ADDR(0x0001fbfau): goto L_1FBFA;
    case RC_ADDR(0x0001fbfcu): goto L_1FBFC;
    case RC_ADDR(0x0001fbfeu): goto L_1FBFE;
    case RC_ADDR(0x0001fc02u): goto L_1FC02;
    case RC_ADDR(0x0001fc06u): goto L_1FC06;
    case RC_ADDR(0x0001fc0cu): goto L_1FC0C;
    case RC_ADDR(0x0001fc0eu): goto L_1FC0E;
    case RC_ADDR(0x0001fc10u): goto L_1FC10;
    case RC_ADDR(0x0001fc14u): goto L_1FC14;
    case RC_ADDR(0x0001fc1au): goto L_1FC1A;
    case RC_ADDR(0x0001fc1cu): goto L_1FC1C;
    case RC_ADDR(0x0001fc1eu): goto L_1FC1E;
    case RC_ADDR(0x0001fc20u): goto L_1FC20;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1FBDC:
    /* 0001fbdc   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x0001fbdcu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_1FBE0:
    /* 0001fbe0   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001fbe0u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1FBE4:
    /* 0001fbe4   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001fbe4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FBE8:
    /* 0001fbe8   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001fbe8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1FBEA:
    /* 0001fbea   2  asl.l #3,D0 */
    c->pc = RC_ADDR(0x0001fbeau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000003u, rc_d_get(c, 0, RC_L), RC_L));

L_1FBEC:
    /* 0001fbec   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x0001fbecu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_1FBEE:
    /* 0001fbee   4  lea (331a,A4),A1 */
    c->pc = RC_ADDR(0x0001fbeeu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x331au);

L_1FBF2:
    /* 0001fbf2   2  adda.l A1,A0 */
    c->pc = RC_ADDR(0x0001fbf2u);
    rc_step(c, m, 6);
    t0 = rc_a_get(c, 1, RC_L);
    c->a[0] += t0;

L_1FBF4:
    /* 0001fbf4   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001fbf4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FBF8:
    /* 0001fbf8   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001fbf8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1FBFA:
    /* 0001fbfa   2  asl.l #3,D0 */
    c->pc = RC_ADDR(0x0001fbfau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000003u, rc_d_get(c, 0, RC_L), RC_L));

L_1FBFC:
    /* 0001fbfc   2  movea.l D0,A1 */
    c->pc = RC_ADDR(0x0001fbfcu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[1] = t0;

L_1FBFE:
    /* 0001fbfe   4  movea.l (8,A5),A6 */
    c->pc = RC_ADDR(0x0001fbfeu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[6] = t0;

L_1FC02:
    /* 0001fc02   4  adda.l (38,A6),A1 */
    c->pc = RC_ADDR(0x0001fc02u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[6] + 0x38u));
    c->a[1] += t0;

L_1FC06:
    /* 0001fc06   6  adda.l #60,A1 */
    c->pc = RC_ADDR(0x0001fc06u);
    rc_step(c, m, 16);
    t0 = 0x00000060u;
    c->a[1] += t0;

L_1FC0C:
    /* 0001fc0c   2  move.l (A1)+,(A0)+ */
    c->pc = RC_ADDR(0x0001fc0cu);
    rc_step(c, m, 20);
    t3 = c->a[1];
    c->a[1] += 4u;
    t0 = rc_rd32(c, m, t3);
    t3 = c->a[0];
    c->a[0] += 4u;
    rc_wr32(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FC0E:
    /* 0001fc0e   2  move.l (A1)+,(A0)+ */
    c->pc = RC_ADDR(0x0001fc0eu);
    rc_step(c, m, 20);
    t3 = c->a[1];
    c->a[1] += 4u;
    t0 = rc_rd32(c, m, t3);
    t3 = c->a[0];
    c->a[0] += 4u;
    rc_wr32(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FC10:
    /* 0001fc10   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001fc10u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1FC14:
    /* 0001fc14   6  cmpi.w #4,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001fc14u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_1FC1A:
    /* 0001fc1a   2  blt 0001fbe4 */
    c->pc = RC_ADDR(0x0001fc1au);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1FBE4; }

L_1FC1C:
    /* 0001fc1c   2  bsr 0001fbba */
    c->pc = RC_ADDR(0x0001fc1cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001fc1eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001fbbau);
    return;

L_1FC1E:
    /* 0001fc1e   2  unlk A5 */
    c->pc = RC_ADDR(0x0001fc1eu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1FC20:
    /* 0001fc20   2  rts */
    c->pc = RC_ADDR(0x0001fc20u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
