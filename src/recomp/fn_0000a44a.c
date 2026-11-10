/* fn_0000a44a - 108 byte(s), 30 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000a44a(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000a44au): goto L_A44A;
    case RC_ADDR(0x0000a44eu): goto L_A44E;
    case RC_ADDR(0x0000a454u): goto L_A454;
    case RC_ADDR(0x0000a458u): goto L_A458;
    case RC_ADDR(0x0000a45au): goto L_A45A;
    case RC_ADDR(0x0000a45eu): goto L_A45E;
    case RC_ADDR(0x0000a462u): goto L_A462;
    case RC_ADDR(0x0000a464u): goto L_A464;
    case RC_ADDR(0x0000a468u): goto L_A468;
    case RC_ADDR(0x0000a46cu): goto L_A46C;
    case RC_ADDR(0x0000a470u): goto L_A470;
    case RC_ADDR(0x0000a474u): goto L_A474;
    case RC_ADDR(0x0000a478u): goto L_A478;
    case RC_ADDR(0x0000a47cu): goto L_A47C;
    case RC_ADDR(0x0000a480u): goto L_A480;
    case RC_ADDR(0x0000a482u): goto L_A482;
    case RC_ADDR(0x0000a486u): goto L_A486;
    case RC_ADDR(0x0000a48au): goto L_A48A;
    case RC_ADDR(0x0000a48eu): goto L_A48E;
    case RC_ADDR(0x0000a492u): goto L_A492;
    case RC_ADDR(0x0000a496u): goto L_A496;
    case RC_ADDR(0x0000a498u): goto L_A498;
    case RC_ADDR(0x0000a49cu): goto L_A49C;
    case RC_ADDR(0x0000a4a0u): goto L_A4A0;
    case RC_ADDR(0x0000a4a2u): goto L_A4A2;
    case RC_ADDR(0x0000a4a6u): goto L_A4A6;
    case RC_ADDR(0x0000a4aau): goto L_A4AA;
    case RC_ADDR(0x0000a4aeu): goto L_A4AE;
    case RC_ADDR(0x0000a4b2u): goto L_A4B2;
    case RC_ADDR(0x0000a4b4u): goto L_A4B4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_A44A:
    /* 0000a44a   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x0000a44au);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_A44E:
    /* 0000a44e   6  move.w #1,(2e2,A4) */
    c->pc = RC_ADDR(0x0000a44eu);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x2e2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_A454:
    /* 0000a454   4  tst.w (8,A5) */
    c->pc = RC_ADDR(0x0000a454u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_A458:
    /* 0000a458   2  beq 0000a464 */
    c->pc = RC_ADDR(0x0000a458u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_A464;

L_A45A:
    /* 0000a45a   4  lea (0000a4b6),A0 */
    c->pc = RC_ADDR(0x0000a45au);
    rc_step(c, m);
    c->a[0] = RC_ADDR(0x0000a4b6u);

L_A45E:
    /* 0000a45e   4  move.l A0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000a45eu);
    rc_step(c, m);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_A462:
    /* 0000a462   2  bra 0000a46c */
    c->pc = RC_ADDR(0x0000a462u);
    rc_step(c, m);
    goto L_A46C;

L_A464:
    /* 0000a464   4  lea (0000a4bb),A0 */
    c->pc = RC_ADDR(0x0000a464u);
    rc_step(c, m);
    c->a[0] = RC_ADDR(0x0000a4bbu);

L_A468:
    /* 0000a468   4  move.l A0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000a468u);
    rc_step(c, m);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_A46C:
    /* 0000a46c   4  jsr (ffff80c8,A4) */
    c->pc = RC_ADDR(0x0000a46cu);
    rc_step(c, m);
    /* vector 33 */
    rc_push32(c, m, RC_ADDR(0x0000a470u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b1eu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009becu);
    return;

L_A470:
    /* 0000a470   4  jsr (ffff8110,A4) */
    c->pc = RC_ADDR(0x0000a470u);
    rc_step(c, m);
    /* vector 45 */
    rc_push32(c, m, RC_ADDR(0x0000a474u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b66u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ec8au);
    return;

L_A474:
    /* 0000a474   4  pea (ffffffff).l */
    c->pc = RC_ADDR(0x0000a474u);
    rc_step(c, m);
    rc_push32(c, m, 0xffffffffu);

L_A478:
    /* 0000a478   4  pea (ffff9b62,A4) */
    c->pc = RC_ADDR(0x0000a478u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] - 0x649eu));

L_A47C:
    /* 0000a47c   4  jsr (00009cf2) */
    c->pc = RC_ADDR(0x0000a47cu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0000a480u));
    rc_depth++;
    c->pc = RC_ADDR(0x00009cf2u);
    return;

L_A480:
    /* 0000a480   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000a480u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_A482:
    /* 0000a482   4  jsr (ffff821e,A4) */
    c->pc = RC_ADDR(0x0000a482u);
    rc_step(c, m);
    /* vector 90 */
    rc_push32(c, m, RC_ADDR(0x0000a486u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c74u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d778u);
    return;

L_A486:
    /* 0000a486   4  jsr (ffff8260,A4) */
    c->pc = RC_ADDR(0x0000a486u);
    rc_step(c, m);
    /* vector 101 */
    rc_push32(c, m, RC_ADDR(0x0000a48au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cb6u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f27eu);
    return;

L_A48A:
    /* 0000a48a   4  clr.w (ffffcb20,A4) */
    c->pc = RC_ADDR(0x0000a48au);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0x34e0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A48E:
    /* 0000a48e   4  pea (0000a4c0) */
    c->pc = RC_ADDR(0x0000a48eu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0000a4c0u));

L_A492:
    /* 0000a492   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x0000a492u);
    rc_step(c, m);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x0000a496u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ce0u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000202c4u);
    return;

L_A496:
    /* 0000a496   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000a496u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_A498:
    /* 0000a498   4  pea (0000a3a2) */
    c->pc = RC_ADDR(0x0000a498u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0000a3a2u));

L_A49C:
    /* 0000a49c   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0000a49cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_A4A0:
    /* 0000a4a0   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000a4a0u);
    rc_step(c, m);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_A4A2:
    /* 0000a4a2   4  pea (0000a4cd) */
    c->pc = RC_ADDR(0x0000a4a2u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0000a4cdu));

L_A4A6:
    /* 0000a4a6   4  jsr (ffff8242,A4) */
    c->pc = RC_ADDR(0x0000a4a6u);
    rc_step(c, m);
    /* vector 96 */
    rc_push32(c, m, RC_ADDR(0x0000a4aau));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c98u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001eb94u);
    return;

L_A4AA:
    /* 0000a4aa   4  lea (10,A7),A7 */
    c->pc = RC_ADDR(0x0000a4aau);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0x10u);

L_A4AE:
    /* 0000a4ae   4  jsr (ffff8284,A4) */
    c->pc = RC_ADDR(0x0000a4aeu);
    rc_step(c, m);
    /* vector 107 */
    rc_push32(c, m, RC_ADDR(0x0000a4b2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cdau);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020266u);
    return;

L_A4B2:
    /* 0000a4b2   2  unlk A5 */
    c->pc = RC_ADDR(0x0000a4b2u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_A4B4:
    /* 0000a4b4   2  rts */
    c->pc = RC_ADDR(0x0000a4b4u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
