/* fn_00010714 - 42 byte(s), 11 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00010714(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00010714u): goto L_10714;
    case RC_ADDR(0x00010718u): goto L_10718;
    case RC_ADDR(0x0001071cu): goto L_1071C;
    case RC_ADDR(0x00010720u): goto L_10720;
    case RC_ADDR(0x00010724u): goto L_10724;
    case RC_ADDR(0x00010728u): goto L_10728;
    case RC_ADDR(0x0001072cu): goto L_1072C;
    case RC_ADDR(0x00010730u): goto L_10730;
    case RC_ADDR(0x00010734u): goto L_10734;
    case RC_ADDR(0x00010738u): goto L_10738;
    case RC_ADDR(0x0001073cu): goto L_1073C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_10714:
    /* 00010714   4  movem.l { D1 D2 D3 D4 D5 D6 A0 A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x00010714u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[4]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_10718:
    /* 00010718   4  movea.l (2c,A7),A0 */
    c->pc = RC_ADDR(0x00010718u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x2cu));
    c->a[0] = t0;

L_1071C:
    /* 0001071c   4  move.l (30,A7),D0 */
    c->pc = RC_ADDR(0x0001071cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x30u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_10720:
    /* 00010720   4  move.l (34,A7),D1 */
    c->pc = RC_ADDR(0x00010720u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x34u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_10724:
    /* 00010724   4  move.l (38,A7),D2 */
    c->pc = RC_ADDR(0x00010724u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x38u));
    rc_d_set(c, 2, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_10728:
    /* 00010728   4  move.l (3c,A7),D3 */
    c->pc = RC_ADDR(0x00010728u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x3cu));
    rc_d_set(c, 3, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1072C:
    /* 0001072c   4  movea.l (14da,A4),A3 */
    c->pc = RC_ADDR(0x0001072cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x14dau));
    c->a[3] = t0;

L_10730:
    /* 00010730   4  movea.l (ffffa428,A4),A6 */
    c->pc = RC_ADDR(0x00010730u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5bd8u));
    c->a[6] = t0;

L_10734:
    /* 00010734   4  jsr (0001089e) */
    c->pc = RC_ADDR(0x00010734u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00010738u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001089eu);
    return;

L_10738:
    /* 00010738   4  movem.l (SP)+,{ D4 D5 D6 D7 A1 A2 A3 A4 A5 A6 } */
    c->pc = RC_ADDR(0x00010738u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[6] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[7] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[6] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_1073C:
    /* 0001073c   2  rts */
    c->pc = RC_ADDR(0x0001073cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
