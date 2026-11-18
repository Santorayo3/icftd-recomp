/* fn_000109d2 - 42 byte(s), 14 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000109d2(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000109d2u): goto L_109D2;
    case RC_ADDR(0x000109d6u): goto L_109D6;
    case RC_ADDR(0x000109dau): goto L_109DA;
    case RC_ADDR(0x000109dcu): goto L_109DC;
    case RC_ADDR(0x000109e0u): goto L_109E0;
    case RC_ADDR(0x000109e4u): goto L_109E4;
    case RC_ADDR(0x000109e6u): goto L_109E6;
    case RC_ADDR(0x000109e8u): goto L_109E8;
    case RC_ADDR(0x000109eau): goto L_109EA;
    case RC_ADDR(0x000109eeu): goto L_109EE;
    case RC_ADDR(0x000109f0u): goto L_109F0;
    case RC_ADDR(0x000109f4u): goto L_109F4;
    case RC_ADDR(0x000109f6u): goto L_109F6;
    case RC_ADDR(0x000109fau): goto L_109FA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_109D2:
    /* 000109d2   4  movem.l { D7 A7 },-(SP) */
    c->pc = RC_ADDR(0x000109d2u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[0]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[0]);
    c->a[7] = t3;

L_109D6:
    /* 000109d6   4  tst.w (a,A6) */
    c->pc = RC_ADDR(0x000109d6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[6] + 0xau));
    rc_set_nzvc(c, t0, RC_W);

L_109DA:
    /* 000109da   2  beq 000109f6 */
    c->pc = RC_ADDR(0x000109dau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_109F6;

L_109DC:
    /* 000109dc   4  clr.w (a,A6) */
    c->pc = RC_ADDR(0x000109dcu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[6] + 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_109E0:
    /* 000109e0   4  lea (26,A6),A0 */
    c->pc = RC_ADDR(0x000109e0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[6] + 0x26u);

L_109E4:
    /* 000109e4   2  clr.b D0 */
    c->pc = RC_ADDR(0x000109e4u);
    rc_step(c, m, 4);
    rc_d_set(c, 0, RC_B, 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_109E6:
    /* 000109e6   2  tst.l (A0)+ */
    c->pc = RC_ADDR(0x000109e6u);
    rc_step(c, m, 12);
    t3 = c->a[0];
    c->a[0] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_set_nzvc(c, t0, RC_L);

L_109E8:
    /* 000109e8   2  beq 000109ee */
    c->pc = RC_ADDR(0x000109e8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_109EE;

L_109EA:
    /* 000109ea   4  bsr 00010dea */
    c->pc = RC_ADDR(0x000109eau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000109eeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00010deau);
    return;

L_109EE:
    /* 000109ee   2  addq.b #1,D0 */
    c->pc = RC_ADDR(0x000109eeu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_B);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_B, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_B, t2);

L_109F0:
    /* 000109f0   4  cmpi.b #4,D0 */
    c->pc = RC_ADDR(0x000109f0u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000004u);

L_109F4:
    /* 000109f4   2  bne 000109e6 */
    c->pc = RC_ADDR(0x000109f4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_109E6; }

L_109F6:
    /* 000109f6   4  movem.l (SP)+,{ D0 A0 } */
    c->pc = RC_ADDR(0x000109f6u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_109FA:
    /* 000109fa   2  rts */
    c->pc = RC_ADDR(0x000109fau);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
