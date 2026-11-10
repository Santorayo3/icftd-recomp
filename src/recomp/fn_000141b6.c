/* fn_000141b6 - 90 byte(s), 25 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000141b6(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000141b6u): goto L_141B6;
    case RC_ADDR(0x000141bau): goto L_141BA;
    case RC_ADDR(0x000141beu): goto L_141BE;
    case RC_ADDR(0x000141c2u): goto L_141C2;
    case RC_ADDR(0x000141c6u): goto L_141C6;
    case RC_ADDR(0x000141c8u): goto L_141C8;
    case RC_ADDR(0x000141ceu): goto L_141CE;
    case RC_ADDR(0x000141d4u): goto L_141D4;
    case RC_ADDR(0x000141d6u): goto L_141D6;
    case RC_ADDR(0x000141dau): goto L_141DA;
    case RC_ADDR(0x000141deu): goto L_141DE;
    case RC_ADDR(0x000141e0u): goto L_141E0;
    case RC_ADDR(0x000141e4u): goto L_141E4;
    case RC_ADDR(0x000141e8u): goto L_141E8;
    case RC_ADDR(0x000141eau): goto L_141EA;
    case RC_ADDR(0x000141eeu): goto L_141EE;
    case RC_ADDR(0x000141f4u): goto L_141F4;
    case RC_ADDR(0x000141f6u): goto L_141F6;
    case RC_ADDR(0x000141fau): goto L_141FA;
    case RC_ADDR(0x000141feu): goto L_141FE;
    case RC_ADDR(0x00014202u): goto L_14202;
    case RC_ADDR(0x00014204u): goto L_14204;
    case RC_ADDR(0x00014208u): goto L_14208;
    case RC_ADDR(0x0001420cu): goto L_1420C;
    case RC_ADDR(0x0001420eu): goto L_1420E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_141B6:
    /* 000141b6   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000141b6u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_141BA:
    /* 000141ba   4  move.w (10d0,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000141bau);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10d0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_141BE:
    /* 000141be   4  subq.w #1,(10d0,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000141beu);
    t3 = (c->a[4] + 0x10d0u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_141C2:
    /* 000141c2   4  cmp.w #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000141c2u);
    t0 = 0x00000001u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_141C6:
    /* 000141c6   2  bge 000141ee */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000141c6u);
    if (rc_cond(c, 12)) goto L_141EE;

L_141C8:
    /* 000141c8   6  move.w (112c,A4),(10d0,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000141c8u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x112cu));
    rc_wr16(c, m, (c->a[4] + 0x10d0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_141CE:
    /* 000141ce   6  cmpi.w #f,(112c,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000141ceu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x112cu));
    rc_cmp(c, RC_W, t0, 0x0000000fu);

L_141D4:
    /* 000141d4   2  bge 000141da */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000141d4u);
    if (rc_cond(c, 12)) goto L_141DA;

L_141D6:
    /* 000141d6   4  addq.w #1,(112c,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000141d6u);
    t3 = (c->a[4] + 0x112cu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_141DA:
    /* 000141da   4  tst.w (fffff286,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000141dau);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd7au));
    rc_set_nzvc(c, t0, RC_W);

L_141DE:
    /* 000141de   2  beq 000141e4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000141deu);
    if (rc_cond(c, 7)) goto L_141E4;

L_141E0:
    /* 000141e0   4  subq.w #1,(fffff286,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000141e0u);
    t3 = (c->a[4] - 0xd7au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_141E4:
    /* 000141e4   4  tst.w (fffff288,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000141e4u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd78u));
    rc_set_nzvc(c, t0, RC_W);

L_141E8:
    /* 000141e8   2  beq 000141ee */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000141e8u);
    if (rc_cond(c, 7)) goto L_141EE;

L_141EA:
    /* 000141ea   4  subq.w #1,(fffff288,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000141eau);
    t3 = (c->a[4] - 0xd78u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_141EE:
    /* 000141ee   6  cmpi.w #1,(af8,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000141eeu);
    t0 = rc_rd16(c, m, (c->a[4] + 0xaf8u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_141F4:
    /* 000141f4   2  ble 0001420c */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000141f4u);
    if (rc_cond(c, 15)) goto L_1420C;

L_141F6:
    /* 000141f6   4  move.w (10d2,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000141f6u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10d2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_141FA:
    /* 000141fa   4  addq.w #1,(10d2,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000141fau);
    t3 = (c->a[4] + 0x10d2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_141FE:
    /* 000141fe   4  cmp.w #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000141feu);
    t0 = 0x00000001u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_14202:
    /* 00014202   2  ble 0001420c */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00014202u);
    if (rc_cond(c, 15)) goto L_1420C;

L_14204:
    /* 00014204   4  clr.w (10d2,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00014204u);
    rc_wr16(c, m, (c->a[4] + 0x10d2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14208:
    /* 00014208   4  subq.w #1,(af8,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00014208u);
    t3 = (c->a[4] + 0xaf8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1420C:
    /* 0001420c   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001420cu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1420E:
    /* 0001420e   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001420eu);
    rc_ret(c, m);
    return;

}
