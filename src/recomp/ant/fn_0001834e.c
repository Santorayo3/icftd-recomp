/* fn_0001834e - 76 byte(s), 24 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001834e(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001834eu): goto L_1834E;
    case RC_ADDR(0x00018352u): goto L_18352;
    case RC_ADDR(0x00018354u): goto L_18354;
    case RC_ADDR(0x00018358u): goto L_18358;
    case RC_ADDR(0x0001835cu): goto L_1835C;
    case RC_ADDR(0x00018360u): goto L_18360;
    case RC_ADDR(0x00018364u): goto L_18364;
    case RC_ADDR(0x00018368u): goto L_18368;
    case RC_ADDR(0x0001836au): goto L_1836A;
    case RC_ADDR(0x00018370u): goto L_18370;
    case RC_ADDR(0x00018372u): goto L_18372;
    case RC_ADDR(0x00018374u): goto L_18374;
    case RC_ADDR(0x00018376u): goto L_18376;
    case RC_ADDR(0x00018378u): goto L_18378;
    case RC_ADDR(0x0001837cu): goto L_1837C;
    case RC_ADDR(0x0001837eu): goto L_1837E;
    case RC_ADDR(0x00018382u): goto L_18382;
    case RC_ADDR(0x00018386u): goto L_18386;
    case RC_ADDR(0x0001838au): goto L_1838A;
    case RC_ADDR(0x0001838cu): goto L_1838C;
    case RC_ADDR(0x00018390u): goto L_18390;
    case RC_ADDR(0x00018394u): goto L_18394;
    case RC_ADDR(0x00018396u): goto L_18396;
    case RC_ADDR(0x00018398u): goto L_18398;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1834E:
    /* 0001834e   4  link.w A5,#ffffffc2 */
    c->pc = RC_ADDR(0x0001834eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x3eu;

L_18352:
    /* 00018352   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00018352u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18354:
    /* 00018354   4  pea (ffffffc4,A5) */
    c->pc = RC_ADDR(0x00018354u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x3cu));

L_18358:
    /* 00018358   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00018358u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1835C:
    /* 0001835c   4  jsr (ffff8272,A4) */
    c->pc = RC_ADDR(0x0001835cu);
    rc_step(c, m, 18);
    /* vector 104 */
    rc_push32(c, m, RC_ADDR(0x00018360u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d68u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00020cbau);
    return;

L_18360:
    /* 00018360   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00018360u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_18364:
    /* 00018364   4  move.w D0,(ffffffc2,A5) */
    c->pc = RC_ADDR(0x00018364u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x3eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18368:
    /* 00018368   2  beq 00018398 */
    c->pc = RC_ADDR(0x00018368u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_18398;

L_1836A:
    /* 0001836a   6  cmpi.w #3039,(ffffffc2,A5) */
    c->pc = RC_ADDR(0x0001836au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x3eu));
    rc_cmp(c, RC_W, t0, 0x00003039u);

L_18370:
    /* 00018370   2  bne 00018378 */
    c->pc = RC_ADDR(0x00018370u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_18378;

L_18372:
    /* 00018372   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00018372u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_18374:
    /* 00018374   2  unlk A5 */
    c->pc = RC_ADDR(0x00018374u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_18376:
    /* 00018376   2  rts */
    c->pc = RC_ADDR(0x00018376u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_18378:
    /* 00018378   4  tst.l (10,A5) */
    c->pc = RC_ADDR(0x00018378u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_set_nzvc(c, t0, RC_L);

L_1837C:
    /* 0001837c   2  beq 0001838c */
    c->pc = RC_ADDR(0x0001837cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1838C;

L_1837E:
    /* 0001837e   4  move.l (10,A5),-(A7) */
    c->pc = RC_ADDR(0x0001837eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_18382:
    /* 00018382   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00018382u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_18386:
    /* 00018386   4  jsr (00018486) */
    c->pc = RC_ADDR(0x00018386u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001838au));
    rc_depth++;
    c->pc = RC_ADDR(0x00018486u);
    return;

L_1838A:
    /* 0001838a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001838au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1838C:
    /* 0001838c   4  pea (ffffffc4,A5) */
    c->pc = RC_ADDR(0x0001838cu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x3cu));

L_18390:
    /* 00018390   4  jsr (00018286) */
    c->pc = RC_ADDR(0x00018390u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00018394u));
    rc_depth++;
    c->pc = RC_ADDR(0x00018286u);
    return;

L_18394:
    /* 00018394   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00018394u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_18396:
    /* 00018396   2  bra 00018374 */
    c->pc = RC_ADDR(0x00018396u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_18374;

L_18398:
    /* 00018398   2  bra 00018374 */
    c->pc = RC_ADDR(0x00018398u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_18374;

}
