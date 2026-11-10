/* fn_0001eb94 - 72 byte(s), 22 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001eb94(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case 0x0001eb94u: goto L_1EB94;
    case 0x0001eb98u: goto L_1EB98;
    case 0x0001eb9cu: goto L_1EB9C;
    case 0x0001eb9eu: goto L_1EB9E;
    case 0x0001eba0u: goto L_1EBA0;
    case 0x0001eba2u: goto L_1EBA2;
    case 0x0001eba6u: goto L_1EBA6;
    case 0x0001ebaau: goto L_1EBAA;
    case 0x0001ebacu: goto L_1EBAC;
    case 0x0001ebb0u: goto L_1EBB0;
    case 0x0001ebb4u: goto L_1EBB4;
    case 0x0001ebb6u: goto L_1EBB6;
    case 0x0001ebbau: goto L_1EBBA;
    case 0x0001ebbeu: goto L_1EBBE;
    case 0x0001ebc2u: goto L_1EBC2;
    case 0x0001ebc4u: goto L_1EBC4;
    case 0x0001ebc8u: goto L_1EBC8;
    case 0x0001ebccu: goto L_1EBCC;
    case 0x0001ebd0u: goto L_1EBD0;
    case 0x0001ebd2u: goto L_1EBD2;
    case 0x0001ebd6u: goto L_1EBD6;
    case 0x0001ebdau: goto L_1EBDA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1EB94:
    /* 0001eb94   4  link.w A5,#fffffff8 */
    c->pc = 0x0001eb94u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x8u;

L_1EB98:
    /* 0001eb98   4  tst.w (ffffcb00,A4) */
    c->pc = 0x0001eb98u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x3500u));
    rc_set_nzvc(c, t0, RC_W);

L_1EB9C:
    /* 0001eb9c   2  bne 0001eba2 */
    c->pc = 0x0001eb9cu;
    if (rc_cond(c, 6)) goto L_1EBA2;

L_1EB9E:
    /* 0001eb9e   2  unlk A5 */
    c->pc = 0x0001eb9eu;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1EBA0:
    /* 0001eba0   2  rts */
    c->pc = 0x0001eba0u;
    rc_ret(c, m);
    return;

L_1EBA2:
    /* 0001eba2   4  move.l (10,A5),-(A7) */
    c->pc = 0x0001eba2u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1EBA6:
    /* 0001eba6   4  jsr (ffff8230,A4) */
    c->pc = 0x0001eba6u;
    /* vector 93 */
    rc_push32(c, m, 0x0001ebaau);
    rc_depth++;
    c->pc = 0x0001de7au;
    return;

L_1EBAA:
    /* 0001ebaa   2  addq.w #4,A7 */
    c->pc = 0x0001ebaau;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1EBAC:
    /* 0001ebac   4  move.l D0,(fffffff8,A5) */
    c->pc = 0x0001ebacu;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1EBB0:
    /* 0001ebb0   4  tst.l (14,A5) */
    c->pc = 0x0001ebb0u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x14u));
    rc_set_nzvc(c, t0, RC_L);

L_1EBB4:
    /* 0001ebb4   2  bne 0001ebbe */
    c->pc = 0x0001ebb4u;
    if (rc_cond(c, 6)) goto L_1EBBE;

L_1EBB6:
    /* 0001ebb6   4  lea (ffff8278,A4),A0 */
    c->pc = 0x0001ebb6u;
    c->a[0] = (c->a[4] - 0x7d88u);

L_1EBBA:
    /* 0001ebba   4  move.l A0,(14,A5) */
    c->pc = 0x0001ebbau;
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] + 0x14u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1EBBE:
    /* 0001ebbe   4  tst.l (fffffff8,A5) */
    c->pc = 0x0001ebbeu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_set_nzvc(c, t0, RC_L);

L_1EBC2:
    /* 0001ebc2   2  beq 0001ebd2 */
    c->pc = 0x0001ebc2u;
    if (rc_cond(c, 7)) goto L_1EBD2;

L_1EBC4:
    /* 0001ebc4   4  move.l (14,A5),-(A7) */
    c->pc = 0x0001ebc4u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x14u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1EBC8:
    /* 0001ebc8   4  move.l (fffffff8,A5),-(A7) */
    c->pc = 0x0001ebc8u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1EBCC:
    /* 0001ebcc   4  jsr (ffff81fa,A4) */
    c->pc = 0x0001ebccu;
    /* vector 84 */
    rc_push32(c, m, 0x0001ebd0u);
    rc_depth++;
    c->pc = 0x0001d2c6u;
    return;

L_1EBD0:
    /* 0001ebd0   2  addq.w #8,A7 */
    c->pc = 0x0001ebd0u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1EBD2:
    /* 0001ebd2   4  jsr (ffff8260,A4) */
    c->pc = 0x0001ebd2u;
    /* vector 101 */
    rc_push32(c, m, 0x0001ebd6u);
    rc_depth++;
    c->pc = 0x0001f27eu;
    return;

L_1EBD6:
    /* 0001ebd6   4  jsr (ffff821e,A4) */
    c->pc = 0x0001ebd6u;
    /* vector 90 */
    rc_push32(c, m, 0x0001ebdau);
    rc_depth++;
    c->pc = 0x0001d778u;
    return;

L_1EBDA:
    /* 0001ebda   2  bra 0001eb9e */
    c->pc = 0x0001ebdau;
    rc_tick();
    goto L_1EB9E;

}
