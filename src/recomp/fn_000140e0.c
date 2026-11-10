/* fn_000140e0 - 82 byte(s), 25 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000140e0(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000140e0u): goto L_140E0;
    case RC_ADDR(0x000140e4u): goto L_140E4;
    case RC_ADDR(0x000140e8u): goto L_140E8;
    case RC_ADDR(0x000140eau): goto L_140EA;
    case RC_ADDR(0x000140f0u): goto L_140F0;
    case RC_ADDR(0x000140f2u): goto L_140F2;
    case RC_ADDR(0x000140f4u): goto L_140F4;
    case RC_ADDR(0x000140f6u): goto L_140F6;
    case RC_ADDR(0x000140fau): goto L_140FA;
    case RC_ADDR(0x000140fcu): goto L_140FC;
    case RC_ADDR(0x00014100u): goto L_14100;
    case RC_ADDR(0x00014104u): goto L_14104;
    case RC_ADDR(0x00014108u): goto L_14108;
    case RC_ADDR(0x0001410au): goto L_1410A;
    case RC_ADDR(0x0001410eu): goto L_1410E;
    case RC_ADDR(0x00014112u): goto L_14112;
    case RC_ADDR(0x00014114u): goto L_14114;
    case RC_ADDR(0x00014118u): goto L_14118;
    case RC_ADDR(0x0001411cu): goto L_1411C;
    case RC_ADDR(0x00014120u): goto L_14120;
    case RC_ADDR(0x00014122u): goto L_14122;
    case RC_ADDR(0x00014126u): goto L_14126;
    case RC_ADDR(0x0001412au): goto L_1412A;
    case RC_ADDR(0x0001412eu): goto L_1412E;
    case RC_ADDR(0x00014130u): goto L_14130;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_140E0:
    /* 000140e0   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000140e0u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_140E4:
    /* 000140e4   4  tst.w (113e,A4) */
    c->pc = RC_ADDR(0x000140e4u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x113eu));
    rc_set_nzvc(c, t0, RC_W);

L_140E8:
    /* 000140e8   2  beq 0001412e */
    c->pc = RC_ADDR(0x000140e8u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1412E;

L_140EA:
    /* 000140ea   6  cmpi.w #7,(112e,A4) */
    c->pc = RC_ADDR(0x000140eau);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x112eu));
    rc_cmp(c, RC_W, t0, 0x00000007u);

L_140F0:
    /* 000140f0   2  bge 00014122 */
    c->pc = RC_ADDR(0x000140f0u);
    rc_step(c, m);
    if (rc_cond(c, 12)) goto L_14122;

L_140F2:
    /* 000140f2   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x000140f2u);
    rc_step(c, m);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_140F4:
    /* 000140f4   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x000140f4u);
    rc_step(c, m);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_140F6:
    /* 000140f6   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x000140f6u);
    rc_step(c, m);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_140FA:
    /* 000140fa   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x000140fau);
    rc_step(c, m);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_140FC:
    /* 000140fc   4  move.w #6,-(A7) */
    c->pc = RC_ADDR(0x000140fcu);
    rc_step(c, m);
    t0 = 0x00000006u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14100:
    /* 00014100   4  move.w (fffffd8c,A4),D0 */
    c->pc = RC_ADDR(0x00014100u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x274u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14104:
    /* 00014104   4  add.w #10,D0 */
    c->pc = RC_ADDR(0x00014104u);
    rc_step(c, m);
    t0 = 0x00000010u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_14108:
    /* 00014108   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00014108u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1410A:
    /* 0001410a   4  move.w (fffffd8a,A4),D0 */
    c->pc = RC_ADDR(0x0001410au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x276u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1410E:
    /* 0001410e   4  add.w #10,D0 */
    c->pc = RC_ADDR(0x0001410eu);
    rc_step(c, m);
    t0 = 0x00000010u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_14112:
    /* 00014112   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00014112u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14114:
    /* 00014114   4  jsr (000124de) */
    c->pc = RC_ADDR(0x00014114u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00014118u));
    rc_depth++;
    c->pc = RC_ADDR(0x000124deu);
    return;

L_14118:
    /* 00014118   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00014118u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xeu);

L_1411C:
    /* 0001411c   4  addq.w #1,(112e,A4) */
    c->pc = RC_ADDR(0x0001411cu);
    rc_step(c, m);
    t3 = (c->a[4] + 0x112eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_14120:
    /* 00014120   2  bra 0001412e */
    c->pc = RC_ADDR(0x00014120u);
    rc_step(c, m);
    goto L_1412E;

L_14122:
    /* 00014122   4  clr.w (113e,A4) */
    c->pc = RC_ADDR(0x00014122u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] + 0x113eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14126:
    /* 00014126   4  clr.w (112e,A4) */
    c->pc = RC_ADDR(0x00014126u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] + 0x112eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1412A:
    /* 0001412a   4  subq.w #1,(1130,A4) */
    c->pc = RC_ADDR(0x0001412au);
    rc_step(c, m);
    t3 = (c->a[4] + 0x1130u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1412E:
    /* 0001412e   2  unlk A5 */
    c->pc = RC_ADDR(0x0001412eu);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_14130:
    /* 00014130   2  rts */
    c->pc = RC_ADDR(0x00014130u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
