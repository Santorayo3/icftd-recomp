/* fn_000017f0 - 54 byte(s), 17 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000017f0(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000017f0u): goto L_17F0;
    case RC_ADDR(0x000017f4u): goto L_17F4;
    case RC_ADDR(0x000017f8u): goto L_17F8;
    case RC_ADDR(0x000017fcu): goto L_17FC;
    case RC_ADDR(0x000017feu): goto L_17FE;
    case RC_ADDR(0x00001800u): goto L_1800;
    case RC_ADDR(0x00001804u): goto L_1804;
    case RC_ADDR(0x00001808u): goto L_1808;
    case RC_ADDR(0x0000180cu): goto L_180C;
    case RC_ADDR(0x0000180eu): goto L_180E;
    case RC_ADDR(0x00001810u): goto L_1810;
    case RC_ADDR(0x00001812u): goto L_1812;
    case RC_ADDR(0x00001814u): goto L_1814;
    case RC_ADDR(0x00001818u): goto L_1818;
    case RC_ADDR(0x0000181eu): goto L_181E;
    case RC_ADDR(0x00001820u): goto L_1820;
    case RC_ADDR(0x00001824u): goto L_1824;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_17F0:
    /* 000017f0   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x000017f0u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_17F4:
    /* 000017f4   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x000017f4u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17F8:
    /* 000017f8   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000017f8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17FC:
    /* 000017fc   2  ext.l D0 */
    c->pc = RC_ADDR(0x000017fcu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_17FE:
    /* 000017fe   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000017feu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1800:
    /* 00001800   4  lea (ffffcf54,A4),A0 */
    c->pc = RC_ADDR(0x00001800u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x30acu);

L_1804:
    /* 00001804   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00001804u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1808:
    /* 00001808   4  cmp.w (8,A5),D1 */
    c->pc = RC_ADDR(0x00001808u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_180C:
    /* 0000180c   2  bne 00001814 */
    c->pc = RC_ADDR(0x0000180cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1814;

L_180E:
    /* 0000180e   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x0000180eu);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1810:
    /* 00001810   2  unlk A5 */
    c->pc = RC_ADDR(0x00001810u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1812:
    /* 00001812   2  rts */
    c->pc = RC_ADDR(0x00001812u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_1814:
    /* 00001814   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00001814u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1818:
    /* 00001818   6  cmpi.w #14,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00001818u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000014u);

L_181E:
    /* 0000181e   2  blt 000017f8 */
    c->pc = RC_ADDR(0x0000181eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_17F8; }

L_1820:
    /* 00001820   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00001820u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1824:
    /* 00001824   2  bra 00001810 */
    c->pc = RC_ADDR(0x00001824u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1810;

}
