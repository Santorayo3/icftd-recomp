/* fn_0000a982 - 112 byte(s), 34 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000a982(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000a982u): goto L_A982;
    case RC_ADDR(0x0000a986u): goto L_A986;
    case RC_ADDR(0x0000a98au): goto L_A98A;
    case RC_ADDR(0x0000a98eu): goto L_A98E;
    case RC_ADDR(0x0000a990u): goto L_A990;
    case RC_ADDR(0x0000a994u): goto L_A994;
    case RC_ADDR(0x0000a998u): goto L_A998;
    case RC_ADDR(0x0000a99au): goto L_A99A;
    case RC_ADDR(0x0000a99eu): goto L_A99E;
    case RC_ADDR(0x0000a9a0u): goto L_A9A0;
    case RC_ADDR(0x0000a9a2u): goto L_A9A2;
    case RC_ADDR(0x0000a9a4u): goto L_A9A4;
    case RC_ADDR(0x0000a9a8u): goto L_A9A8;
    case RC_ADDR(0x0000a9acu): goto L_A9AC;
    case RC_ADDR(0x0000a9b0u): goto L_A9B0;
    case RC_ADDR(0x0000a9b4u): goto L_A9B4;
    case RC_ADDR(0x0000a9b6u): goto L_A9B6;
    case RC_ADDR(0x0000a9bau): goto L_A9BA;
    case RC_ADDR(0x0000a9bcu): goto L_A9BC;
    case RC_ADDR(0x0000a9c0u): goto L_A9C0;
    case RC_ADDR(0x0000a9c4u): goto L_A9C4;
    case RC_ADDR(0x0000a9c6u): goto L_A9C6;
    case RC_ADDR(0x0000a9ccu): goto L_A9CC;
    case RC_ADDR(0x0000a9ceu): goto L_A9CE;
    case RC_ADDR(0x0000a9d2u): goto L_A9D2;
    case RC_ADDR(0x0000a9d6u): goto L_A9D6;
    case RC_ADDR(0x0000a9d8u): goto L_A9D8;
    case RC_ADDR(0x0000a9deu): goto L_A9DE;
    case RC_ADDR(0x0000a9e0u): goto L_A9E0;
    case RC_ADDR(0x0000a9e4u): goto L_A9E4;
    case RC_ADDR(0x0000a9e8u): goto L_A9E8;
    case RC_ADDR(0x0000a9eau): goto L_A9EA;
    case RC_ADDR(0x0000a9eeu): goto L_A9EE;
    case RC_ADDR(0x0000a9f0u): goto L_A9F0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_A982:
    /* 0000a982   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x0000a982u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_A986:
    /* 0000a986   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x0000a986u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A98A:
    /* 0000a98a   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0000a98au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A98E:
    /* 0000a98e   2  bra 0000a9ac */
    c->pc = RC_ADDR(0x0000a98eu);
    rc_step(c, m, 10);
    goto L_A9AC;

L_A990:
    /* 0000a990   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0000a990u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A994:
    /* 0000a994   4  add.w #e1,D0 */
    c->pc = RC_ADDR(0x0000a994u);
    rc_step(c, m, 10);
    t0 = 0x000000e1u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_A998:
    /* 0000a998   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0000a998u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_A99A:
    /* 0000a99a   4  jsr (ffff808c,A4) */
    c->pc = RC_ADDR(0x0000a99au);
    rc_step(c, m, 18);
    /* vector 23 */
    rc_push32(c, m, RC_ADDR(0x0000a99eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b82u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000080a0u);
    return;

L_A99E:
    /* 0000a99e   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000a99eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_A9A0:
    /* 0000a9a0   2  tst.w D0 */
    c->pc = RC_ADDR(0x0000a9a0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_A9A2:
    /* 0000a9a2   2  beq 0000a9a8 */
    c->pc = RC_ADDR(0x0000a9a2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_A9A8;

L_A9A4:
    /* 0000a9a4   4  addq.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000a9a4u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_A9A8:
    /* 0000a9a8   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000a9a8u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_A9AC:
    /* 0000a9ac   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0000a9acu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A9B0:
    /* 0000a9b0   4  cmp.w (fffff85c,A4),D0 */
    c->pc = RC_ADDR(0x0000a9b0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7a4u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_A9B4:
    /* 0000a9b4   2  blt 0000a990 */
    c->pc = RC_ADDR(0x0000a9b4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_A990; }

L_A9B6:
    /* 0000a9b6   4  tst.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x0000a9b6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_W);

L_A9BA:
    /* 0000a9ba   2  beq 0000a9c6 */
    c->pc = RC_ADDR(0x0000a9bau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_A9C6;

L_A9BC:
    /* 0000a9bc   4  move.w #e8,-(A7) */
    c->pc = RC_ADDR(0x0000a9bcu);
    rc_step(c, m, 12);
    t0 = 0x000000e8u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_A9C0:
    /* 0000a9c0   4  jsr (ffff8086,A4) */
    c->pc = RC_ADDR(0x0000a9c0u);
    rc_step(c, m, 18);
    /* vector 22 */
    rc_push32(c, m, RC_ADDR(0x0000a9c4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b7cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000803eu);
    return;

L_A9C4:
    /* 0000a9c4   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000a9c4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_A9C6:
    /* 0000a9c6   6  cmpi.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000a9c6u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_A9CC:
    /* 0000a9cc   2  ble 0000a9d8 */
    c->pc = RC_ADDR(0x0000a9ccu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_A9D8;

L_A9CE:
    /* 0000a9ce   4  move.w #96,-(A7) */
    c->pc = RC_ADDR(0x0000a9ceu);
    rc_step(c, m, 12);
    t0 = 0x00000096u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_A9D2:
    /* 0000a9d2   4  jsr (ffff8086,A4) */
    c->pc = RC_ADDR(0x0000a9d2u);
    rc_step(c, m, 18);
    /* vector 22 */
    rc_push32(c, m, RC_ADDR(0x0000a9d6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b7cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000803eu);
    return;

L_A9D6:
    /* 0000a9d6   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000a9d6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_A9D8:
    /* 0000a9d8   6  cmpi.w #4,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000a9d8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_A9DE:
    /* 0000a9de   2  bne 0000a9ea */
    c->pc = RC_ADDR(0x0000a9deu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_A9EA;

L_A9E0:
    /* 0000a9e0   4  move.w #ea,-(A7) */
    c->pc = RC_ADDR(0x0000a9e0u);
    rc_step(c, m, 12);
    t0 = 0x000000eau;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_A9E4:
    /* 0000a9e4   4  jsr (ffff8086,A4) */
    c->pc = RC_ADDR(0x0000a9e4u);
    rc_step(c, m, 18);
    /* vector 22 */
    rc_push32(c, m, RC_ADDR(0x0000a9e8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b7cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000803eu);
    return;

L_A9E8:
    /* 0000a9e8   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000a9e8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_A9EA:
    /* 0000a9ea   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000a9eau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A9EE:
    /* 0000a9ee   2  unlk A5 */
    c->pc = RC_ADDR(0x0000a9eeu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_A9F0:
    /* 0000a9f0   2  rts */
    c->pc = RC_ADDR(0x0000a9f0u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
