/* fn_0001efce - 130 byte(s), 31 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001efce(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001efceu): goto L_1EFCE;
    case RC_ADDR(0x0001efd2u): goto L_1EFD2;
    case RC_ADDR(0x0001efd6u): goto L_1EFD6;
    case RC_ADDR(0x0001efdau): goto L_1EFDA;
    case RC_ADDR(0x0001efdcu): goto L_1EFDC;
    case RC_ADDR(0x0001efe0u): goto L_1EFE0;
    case RC_ADDR(0x0001efe2u): goto L_1EFE2;
    case RC_ADDR(0x0001efe8u): goto L_1EFE8;
    case RC_ADDR(0x0001efeeu): goto L_1EFEE;
    case RC_ADDR(0x0001eff2u): goto L_1EFF2;
    case RC_ADDR(0x0001eff8u): goto L_1EFF8;
    case RC_ADDR(0x0001f000u): goto L_1F000;
    case RC_ADDR(0x0001f006u): goto L_1F006;
    case RC_ADDR(0x0001f00cu): goto L_1F00C;
    case RC_ADDR(0x0001f010u): goto L_1F010;
    case RC_ADDR(0x0001f014u): goto L_1F014;
    case RC_ADDR(0x0001f018u): goto L_1F018;
    case RC_ADDR(0x0001f01au): goto L_1F01A;
    case RC_ADDR(0x0001f020u): goto L_1F020;
    case RC_ADDR(0x0001f026u): goto L_1F026;
    case RC_ADDR(0x0001f02cu): goto L_1F02C;
    case RC_ADDR(0x0001f030u): goto L_1F030;
    case RC_ADDR(0x0001f032u): goto L_1F032;
    case RC_ADDR(0x0001f034u): goto L_1F034;
    case RC_ADDR(0x0001f038u): goto L_1F038;
    case RC_ADDR(0x0001f03au): goto L_1F03A;
    case RC_ADDR(0x0001f03eu): goto L_1F03E;
    case RC_ADDR(0x0001f040u): goto L_1F040;
    case RC_ADDR(0x0001f046u): goto L_1F046;
    case RC_ADDR(0x0001f04cu): goto L_1F04C;
    case RC_ADDR(0x0001f04eu): goto L_1F04E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1EFCE:
    /* 0001efce   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x0001efceu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_1EFD2:
    /* 0001efd2   4  jsr (ffff80d4,A4) */
    c->pc = RC_ADDR(0x0001efd2u);
    rc_step(c, m, 18);
    /* vector 35 */
    rc_push32(c, m, RC_ADDR(0x0001efd6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bcau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000afb8u);
    return;

L_1EFD6:
    /* 0001efd6   4  tst.w (ffffb24e,A4) */
    c->pc = RC_ADDR(0x0001efd6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db2u));
    rc_set_nzvc(c, t0, RC_W);

L_1EFDA:
    /* 0001efda   2  beq 0001efe2 */
    c->pc = RC_ADDR(0x0001efdau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1EFE2;

L_1EFDC:
    /* 0001efdc   4  jsr (ffff8188,A4) */
    c->pc = RC_ADDR(0x0001efdcu);
    rc_step(c, m, 18);
    /* vector 65 */
    rc_push32(c, m, RC_ADDR(0x0001efe0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c7eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00013446u);
    return;

L_1EFE0:
    /* 0001efe0   2  bra 0001efd6 */
    c->pc = RC_ADDR(0x0001efe0u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1EFD6;

L_1EFE2:
    /* 0001efe2   6  move.l (ffffd340,A4),(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001efe2u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc0u));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1EFE8:
    /* 0001efe8   6  move.l (2dba,A4),(ffffd340,A4) */
    c->pc = RC_ADDR(0x0001efe8u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2dbau));
    rc_wr32(c, m, (c->a[4] - 0x2cc0u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1EFEE:
    /* 0001efee   4  movea.l (2dba,A4),A0 */
    c->pc = RC_ADDR(0x0001efeeu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2dbau));
    c->a[0] = t0;

L_1EFF2:
    /* 0001eff2   6  move.w (2,A0),(ffffd288,A4) */
    c->pc = RC_ADDR(0x0001eff2u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_wr16(c, m, (c->a[4] - 0x2d78u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EFF8:
    /* 0001eff8   8  move.l #16f,(9f0,A4) */
    c->pc = RC_ADDR(0x0001eff8u);
    rc_step(c, m, 24);
    t0 = 0x0000016fu;
    rc_wr32(c, m, (c->a[4] + 0x9f0u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F000:
    /* 0001f000   6  move.w #1e,(850,A4) */
    c->pc = RC_ADDR(0x0001f000u);
    rc_step(c, m, 16);
    t0 = 0x0000001eu;
    rc_wr16(c, m, (c->a[4] + 0x850u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F006:
    /* 0001f006   6  move.w #151,(852,A4) */
    c->pc = RC_ADDR(0x0001f006u);
    rc_step(c, m, 16);
    t0 = 0x00000151u;
    rc_wr16(c, m, (c->a[4] + 0x852u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F00C:
    /* 0001f00c   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0001f00cu);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F010:
    /* 0001f010   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0001f010u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F014:
    /* 0001f014   4  jsr (ffff8074,A4) */
    c->pc = RC_ADDR(0x0001f014u);
    rc_step(c, m, 18);
    /* vector 19 */
    rc_push32(c, m, RC_ADDR(0x0001f018u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b6au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000564cu);
    return;

L_1F018:
    /* 0001f018   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x0001f018u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_1F01A:
    /* 0001f01a   6  move.l (fffffffc,A5),(ffffd340,A4) */
    c->pc = RC_ADDR(0x0001f01au);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_wr32(c, m, (c->a[4] - 0x2cc0u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F020:
    /* 0001f020   6  move.w #c8,(ffffd288,A4) */
    c->pc = RC_ADDR(0x0001f020u);
    rc_step(c, m, 16);
    t0 = 0x000000c8u;
    rc_wr16(c, m, (c->a[4] - 0x2d78u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F026:
    /* 0001f026   6  move.w #1,(fffffa32,A4) */
    c->pc = RC_ADDR(0x0001f026u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x5ceu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F02C:
    /* 0001f02c   4  tst.w (fffffa32,A4) */
    /* a flag wait: rc_wait runs it natively and returns 1 when its exit branch is taken;
     * 0 means the three instructions below run instead (the reference path). */
    if (rc_wait(c, m, RC_ADDR(0x0001f02cu), 12,
                RC_ADDR(0x0001f030u), 10, 7,
                RC_ADDR(0x0001f032u), 10,
                (c->a[4] - 0x5ceu), RC_W))
        goto L_1F034;
    c->pc = RC_ADDR(0x0001f02cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5ceu));
    rc_set_nzvc(c, t0, RC_W);

L_1F030:
    /* 0001f030   2  beq 0001f034 */
    c->pc = RC_ADDR(0x0001f030u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1F034;

L_1F032:
    /* 0001f032   2  bra 0001f02c */
    c->pc = RC_ADDR(0x0001f032u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1F02C;

L_1F034:
    /* 0001f034   4  tst.w (ffffb24e,A4) */
    c->pc = RC_ADDR(0x0001f034u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db2u));
    rc_set_nzvc(c, t0, RC_W);

L_1F038:
    /* 0001f038   2  bne 0001f040 */
    c->pc = RC_ADDR(0x0001f038u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1F040;

L_1F03A:
    /* 0001f03a   4  jsr (ffff8188,A4) */
    c->pc = RC_ADDR(0x0001f03au);
    rc_step(c, m, 18);
    /* vector 65 */
    rc_push32(c, m, RC_ADDR(0x0001f03eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c7eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00013446u);
    return;

L_1F03E:
    /* 0001f03e   2  bra 0001f034 */
    c->pc = RC_ADDR(0x0001f03eu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1F034;

L_1F040:
    /* 0001f040   6  move.w #13,(850,A4) */
    c->pc = RC_ADDR(0x0001f040u);
    rc_step(c, m, 16);
    t0 = 0x00000013u;
    rc_wr16(c, m, (c->a[4] + 0x850u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F046:
    /* 0001f046   6  move.w #12c,(852,A4) */
    c->pc = RC_ADDR(0x0001f046u);
    rc_step(c, m, 16);
    t0 = 0x0000012cu;
    rc_wr16(c, m, (c->a[4] + 0x852u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F04C:
    /* 0001f04c   2  unlk A5 */
    c->pc = RC_ADDR(0x0001f04cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1F04E:
    /* 0001f04e   2  rts */
    c->pc = RC_ADDR(0x0001f04eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
