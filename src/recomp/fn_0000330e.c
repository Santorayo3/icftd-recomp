/* fn_0000330e - 60 byte(s), 17 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000330e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case 0x0000330eu: goto L_330E;
    case 0x00003312u: goto L_3312;
    case 0x00003316u: goto L_3316;
    case 0x00003318u: goto L_3318;
    case 0x0000331au: goto L_331A;
    case 0x0000331eu: goto L_331E;
    case 0x00003322u: goto L_3322;
    case 0x0000332au: goto L_332A;
    case 0x0000332cu: goto L_332C;
    case 0x00003330u: goto L_3330;
    case 0x00003332u: goto L_3332;
    case 0x00003334u: goto L_3334;
    case 0x00003338u: goto L_3338;
    case 0x0000333cu: goto L_333C;
    case 0x00003344u: goto L_3344;
    case 0x00003346u: goto L_3346;
    case 0x00003348u: goto L_3348;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_330E:
    /* 0000330e   4  link.w A5,#fffffffc */
    c->pc = 0x0000330eu;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_3312:
    /* 00003312   4  tst.w (ffffce40,A4) */
    c->pc = 0x00003312u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x31c0u));
    rc_set_nzvc(c, t0, RC_W);

L_3316:
    /* 00003316   2  bne 0000331a */
    c->pc = 0x00003316u;
    if (rc_cond(c, 6)) goto L_331A;

L_3318:
    /* 00003318   2  bra 00003312 */
    c->pc = 0x00003318u;
    rc_tick();
    goto L_3312;

L_331A:
    /* 0000331a   4  clr.l (fffffffc,A5) */
    c->pc = 0x0000331au;
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_331E:
    /* 0000331e   4  addq.l #1,(fffffffc,A5) */
    c->pc = 0x0000331eu;
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_3322:
    /* 00003322   8  cmpi.l #61a8,(fffffffc,A5) */
    c->pc = 0x00003322u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x000061a8u);

L_332A:
    /* 0000332a   2  blt 0000331e */
    c->pc = 0x0000332au;
    if (rc_cond(c, 13)) { rc_tick(); goto L_331E; }

L_332C:
    /* 0000332c   4  tst.w (ffffce40,A4) */
    c->pc = 0x0000332cu;
    t0 = rc_rd16(c, m, (c->a[4] - 0x31c0u));
    rc_set_nzvc(c, t0, RC_W);

L_3330:
    /* 00003330   2  beq 00003334 */
    c->pc = 0x00003330u;
    if (rc_cond(c, 7)) goto L_3334;

L_3332:
    /* 00003332   2  bra 0000332c */
    c->pc = 0x00003332u;
    rc_tick();
    goto L_332C;

L_3334:
    /* 00003334   4  clr.l (fffffffc,A5) */
    c->pc = 0x00003334u;
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_3338:
    /* 00003338   4  addq.l #1,(fffffffc,A5) */
    c->pc = 0x00003338u;
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_333C:
    /* 0000333c   8  cmpi.l #61a8,(fffffffc,A5) */
    c->pc = 0x0000333cu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x000061a8u);

L_3344:
    /* 00003344   2  blt 00003338 */
    c->pc = 0x00003344u;
    if (rc_cond(c, 13)) { rc_tick(); goto L_3338; }

L_3346:
    /* 00003346   2  unlk A5 */
    c->pc = 0x00003346u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_3348:
    /* 00003348   2  rts */
    c->pc = 0x00003348u;
    rc_ret(c, m);
    return;

}
