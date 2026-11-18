/* fn_00005596 - 66 byte(s), 19 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00005596(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00005596u): goto L_5596;
    case RC_ADDR(0x0000559au): goto L_559A;
    case RC_ADDR(0x000055a0u): goto L_55A0;
    case RC_ADDR(0x000055a6u): goto L_55A6;
    case RC_ADDR(0x000055aau): goto L_55AA;
    case RC_ADDR(0x000055acu): goto L_55AC;
    case RC_ADDR(0x000055b0u): goto L_55B0;
    case RC_ADDR(0x000055b4u): goto L_55B4;
    case RC_ADDR(0x000055b6u): goto L_55B6;
    case RC_ADDR(0x000055bau): goto L_55BA;
    case RC_ADDR(0x000055beu): goto L_55BE;
    case RC_ADDR(0x000055c2u): goto L_55C2;
    case RC_ADDR(0x000055c6u): goto L_55C6;
    case RC_ADDR(0x000055c8u): goto L_55C8;
    case RC_ADDR(0x000055ccu): goto L_55CC;
    case RC_ADDR(0x000055ceu): goto L_55CE;
    case RC_ADDR(0x000055d2u): goto L_55D2;
    case RC_ADDR(0x000055d4u): goto L_55D4;
    case RC_ADDR(0x000055d6u): goto L_55D6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_5596:
    /* 00005596   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x00005596u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_559A:
    /* 0000559a   6  move.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000559au);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_55A0:
    /* 000055a0   6  move.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000055a0u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_55A6:
    /* 000055a6   4  tst.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x000055a6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_W);

L_55AA:
    /* 000055aa   2  beq 000055ce */
    c->pc = RC_ADDR(0x000055aau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_55CE;

L_55AC:
    /* 000055ac   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000055acu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_55B0:
    /* 000055b0   4  jsr (000054be) */
    c->pc = RC_ADDR(0x000055b0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000055b4u));
    rc_depth++;
    c->pc = RC_ADDR(0x000054beu);
    return;

L_55B4:
    /* 000055b4   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000055b4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_55B6:
    /* 000055b6   4  move.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000055b6u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_55BA:
    /* 000055ba   4  move.w (9e8,A4),D0 */
    c->pc = RC_ADDR(0x000055bau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x9e8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_55BE:
    /* 000055be   4  add.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000055beu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_55C2:
    /* 000055c2   4  move.l (fffffa1c,A4),D0 */
    c->pc = RC_ADDR(0x000055c2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5e4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_55C6:
    /* 000055c6   2  addq.l #1,D0 */
    c->pc = RC_ADDR(0x000055c6u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_55C8:
    /* 000055c8   4  add.l D0,(8,A5) */
    c->pc = RC_ADDR(0x000055c8u);
    rc_step(c, m, 24);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_55CC:
    /* 000055cc   2  bra 000055a6 */
    c->pc = RC_ADDR(0x000055ccu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_55A6;

L_55CE:
    /* 000055ce   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000055ceu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_55D2:
    /* 000055d2   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x000055d2u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_55D4:
    /* 000055d4   2  unlk A5 */
    c->pc = RC_ADDR(0x000055d4u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_55D6:
    /* 000055d6   2  rts */
    c->pc = RC_ADDR(0x000055d6u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
