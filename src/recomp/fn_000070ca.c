/* fn_000070ca - 62 byte(s), 18 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000070ca(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000070cau): goto L_70CA;
    case RC_ADDR(0x000070ceu): goto L_70CE;
    case RC_ADDR(0x000070d4u): goto L_70D4;
    case RC_ADDR(0x000070d6u): goto L_70D6;
    case RC_ADDR(0x000070dau): goto L_70DA;
    case RC_ADDR(0x000070e0u): goto L_70E0;
    case RC_ADDR(0x000070e2u): goto L_70E2;
    case RC_ADDR(0x000070e8u): goto L_70E8;
    case RC_ADDR(0x000070eau): goto L_70EA;
    case RC_ADDR(0x000070eeu): goto L_70EE;
    case RC_ADDR(0x000070f0u): goto L_70F0;
    case RC_ADDR(0x000070f2u): goto L_70F2;
    case RC_ADDR(0x000070f4u): goto L_70F4;
    case RC_ADDR(0x000070f6u): goto L_70F6;
    case RC_ADDR(0x000070fau): goto L_70FA;
    case RC_ADDR(0x000070feu): goto L_70FE;
    case RC_ADDR(0x00007104u): goto L_7104;
    case RC_ADDR(0x00007106u): goto L_7106;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_70CA:
    /* 000070ca   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000070cau);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_70CE:
    /* 000070ce   6  cmpi.w #33,(8,A5) */
    c->pc = RC_ADDR(0x000070ceu);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_cmp(c, RC_W, t0, 0x00000033u);

L_70D4:
    /* 000070d4   2  bne 000070da */
    c->pc = RC_ADDR(0x000070d4u);
    if (rc_cond(c, 6)) goto L_70DA;

L_70D6:
    /* 000070d6   4  addq.w #1,(ffff8432,A4) */
    c->pc = RC_ADDR(0x000070d6u);
    t3 = (c->a[4] - 0x7bceu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_70DA:
    /* 000070da   6  cmpi.w #ef,(8,A5) */
    c->pc = RC_ADDR(0x000070dau);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_cmp(c, RC_W, t0, 0x000000efu);

L_70E0:
    /* 000070e0   2  ble 000070f6 */
    c->pc = RC_ADDR(0x000070e0u);
    if (rc_cond(c, 15)) goto L_70F6;

L_70E2:
    /* 000070e2   6  cmpi.w #f4,(8,A5) */
    c->pc = RC_ADDR(0x000070e2u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_cmp(c, RC_W, t0, 0x000000f4u);

L_70E8:
    /* 000070e8   2  bge 000070f6 */
    c->pc = RC_ADDR(0x000070e8u);
    if (rc_cond(c, 12)) goto L_70F6;

L_70EA:
    /* 000070ea   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x000070eau);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_70EE:
    /* 000070ee   2  subq.w #5,D0 */
    c->pc = RC_ADDR(0x000070eeu);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000005u;
    rc_flags_sub(c, RC_W, t1, 0x00000005u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_70F0:
    /* 000070f0   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x000070f0u);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_70F2:
    /* 000070f2   2  bsr 000070ca */
    c->pc = RC_ADDR(0x000070f2u);
    rc_push32(c, m, RC_ADDR(0x000070f4u));
    rc_depth++;
    goto L_70CA;

L_70F4:
    /* 000070f4   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000070f4u);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_70F6:
    /* 000070f6   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x000070f6u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_70FA:
    /* 000070fa   4  lea (ffffce44,A4),A0 */
    c->pc = RC_ADDR(0x000070fau);
    c->a[0] = (c->a[4] - 0x31bcu);

L_70FE:
    /* 000070fe   6  move.b #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000070feu);
    t0 = 0x00000001u;
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_7104:
    /* 00007104   2  unlk A5 */
    c->pc = RC_ADDR(0x00007104u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_7106:
    /* 00007106   2  rts */
    c->pc = RC_ADDR(0x00007106u);
    rc_ret(c, m);
    return;

}
