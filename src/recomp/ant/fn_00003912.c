/* fn_00003912 - 78 byte(s), 21 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00003912(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00003912u): goto L_3912;
    case RC_ADDR(0x00003916u): goto L_3916;
    case RC_ADDR(0x0000391cu): goto L_391C;
    case RC_ADDR(0x00003920u): goto L_3920;
    case RC_ADDR(0x00003922u): goto L_3922;
    case RC_ADDR(0x00003926u): goto L_3926;
    case RC_ADDR(0x0000392au): goto L_392A;
    case RC_ADDR(0x0000392cu): goto L_392C;
    case RC_ADDR(0x00003930u): goto L_3930;
    case RC_ADDR(0x00003932u): goto L_3932;
    case RC_ADDR(0x00003936u): goto L_3936;
    case RC_ADDR(0x0000393cu): goto L_393C;
    case RC_ADDR(0x0000393eu): goto L_393E;
    case RC_ADDR(0x00003942u): goto L_3942;
    case RC_ADDR(0x00003948u): goto L_3948;
    case RC_ADDR(0x0000394cu): goto L_394C;
    case RC_ADDR(0x00003952u): goto L_3952;
    case RC_ADDR(0x00003956u): goto L_3956;
    case RC_ADDR(0x0000395au): goto L_395A;
    case RC_ADDR(0x0000395cu): goto L_395C;
    case RC_ADDR(0x0000395eu): goto L_395E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_3912:
    /* 00003912   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x00003912u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_3916:
    /* 00003916   6  move.l (ffffd29c,A4),(fffffffc,A5) */
    c->pc = RC_ADDR(0x00003916u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d64u));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_391C:
    /* 0000391c   4  tst.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x0000391cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_L);

L_3920:
    /* 00003920   2  beq 0000395c */
    c->pc = RC_ADDR(0x00003920u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_395C;

L_3922:
    /* 00003922   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00003922u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3926:
    /* 00003926   4  jsr (ffff8230,A4) */
    c->pc = RC_ADDR(0x00003926u);
    rc_step(c, m, 18);
    /* vector 93 */
    rc_push32(c, m, RC_ADDR(0x0000392au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d26u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f6ccu);
    return;

L_392A:
    /* 0000392a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000392au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_392C:
    /* 0000392c   4  tst.w (ffffd2a0,A4) */
    c->pc = RC_ADDR(0x0000392cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2d60u));
    rc_set_nzvc(c, t0, RC_W);

L_3930:
    /* 00003930   2  beq 0000393e */
    c->pc = RC_ADDR(0x00003930u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_393E;

L_3932:
    /* 00003932   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00003932u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_3936:
    /* 00003936   6  bset #4,(b,A0) */
    c->pc = RC_ADDR(0x00003936u);
    rc_step(c, m, 20);
    t3 = (c->a[0] + 0xbu);
    t4 = 0x00000004u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_393C:
    /* 0000393c   2  bra 00003948 */
    c->pc = RC_ADDR(0x0000393cu);
    rc_step(c, m, 10);
    goto L_3948;

L_393E:
    /* 0000393e   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0000393eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_3942:
    /* 00003942   6  andi.w #ffef,(a,A0) */
    c->pc = RC_ADDR(0x00003942u);
    rc_step(c, m, 20);
    t3 = (c->a[0] + 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 & 0x0000ffefu;
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_3948:
    /* 00003948   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00003948u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_394C:
    /* 0000394c   6  andi.w #fffd,(a,A0) */
    c->pc = RC_ADDR(0x0000394cu);
    rc_step(c, m, 20);
    t3 = (c->a[0] + 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 & 0x0000fffdu;
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_3952:
    /* 00003952   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00003952u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_3956:
    /* 00003956   4  move.l (A0),(fffffffc,A5) */
    c->pc = RC_ADDR(0x00003956u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_395A:
    /* 0000395a   2  bra 0000391c */
    c->pc = RC_ADDR(0x0000395au);
    rc_step(c, m, 10);
    rc_tick();
    goto L_391C;

L_395C:
    /* 0000395c   2  unlk A5 */
    c->pc = RC_ADDR(0x0000395cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_395E:
    /* 0000395e   2  rts */
    c->pc = RC_ADDR(0x0000395eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
