/* fn_0001de42 - 56 byte(s), 20 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001de42(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001de42u): goto L_1DE42;
    case RC_ADDR(0x0001de46u): goto L_1DE46;
    case RC_ADDR(0x0001de4au): goto L_1DE4A;
    case RC_ADDR(0x0001de4eu): goto L_1DE4E;
    case RC_ADDR(0x0001de50u): goto L_1DE50;
    case RC_ADDR(0x0001de52u): goto L_1DE52;
    case RC_ADDR(0x0001de54u): goto L_1DE54;
    case RC_ADDR(0x0001de58u): goto L_1DE58;
    case RC_ADDR(0x0001de5au): goto L_1DE5A;
    case RC_ADDR(0x0001de5eu): goto L_1DE5E;
    case RC_ADDR(0x0001de60u): goto L_1DE60;
    case RC_ADDR(0x0001de62u): goto L_1DE62;
    case RC_ADDR(0x0001de66u): goto L_1DE66;
    case RC_ADDR(0x0001de68u): goto L_1DE68;
    case RC_ADDR(0x0001de6cu): goto L_1DE6C;
    case RC_ADDR(0x0001de6eu): goto L_1DE6E;
    case RC_ADDR(0x0001de70u): goto L_1DE70;
    case RC_ADDR(0x0001de72u): goto L_1DE72;
    case RC_ADDR(0x0001de76u): goto L_1DE76;
    case RC_ADDR(0x0001de78u): goto L_1DE78;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1DE42:
    /* 0001de42   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001de42u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1DE46:
    /* 0001de46   4  movem.l { D4 D5 },-(SP) */
    c->pc = RC_ADDR(0x0001de46u);
    rc_step(c, m);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    c->a[7] = t3;

L_1DE4A:
    /* 0001de4a   4  movea.l (8,A5),A2 */
    c->pc = RC_ADDR(0x0001de4au);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[2] = t0;

L_1DE4E:
    /* 0001de4e   2  move.l A2,D0 */
    c->pc = RC_ADDR(0x0001de4eu);
    rc_step(c, m);
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DE50:
    /* 0001de50   2  beq 0001de72 */
    c->pc = RC_ADDR(0x0001de50u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1DE72;

L_1DE52:
    /* 0001de52   2  movea.l (A2),A3 */
    c->pc = RC_ADDR(0x0001de52u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, c->a[2]);
    c->a[3] = t0;

L_1DE54:
    /* 0001de54   4  tst.l (2c,A2) */
    c->pc = RC_ADDR(0x0001de54u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[2] + 0x2cu));
    rc_set_nzvc(c, t0, RC_L);

L_1DE58:
    /* 0001de58   2  beq 0001de62 */
    c->pc = RC_ADDR(0x0001de58u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1DE62;

L_1DE5A:
    /* 0001de5a   4  move.l (2c,A2),-(A7) */
    c->pc = RC_ADDR(0x0001de5au);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[2] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DE5E:
    /* 0001de5e   2  bsr 0001de42 */
    c->pc = RC_ADDR(0x0001de5eu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001de60u));
    rc_depth++;
    goto L_1DE42;

L_1DE60:
    /* 0001de60   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001de60u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1DE62:
    /* 0001de62   4  pea (0000003e).l */
    c->pc = RC_ADDR(0x0001de62u);
    rc_step(c, m);
    rc_push32(c, m, 0x0000003eu);

L_1DE66:
    /* 0001de66   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x0001de66u);
    rc_step(c, m);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DE68:
    /* 0001de68   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x0001de68u);
    rc_step(c, m);
    /* vector 139 */
    rc_push32(c, m, RC_ADDR(0x0001de6cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d9au);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000216ccu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000216d0u);
    return;

L_1DE6C:
    /* 0001de6c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001de6cu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1DE6E:
    /* 0001de6e   2  movea.l A3,A2 */
    c->pc = RC_ADDR(0x0001de6eu);
    rc_step(c, m);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[2] = t0;

L_1DE70:
    /* 0001de70   2  bra 0001de4e */
    c->pc = RC_ADDR(0x0001de70u);
    rc_step(c, m);
    rc_tick();
    goto L_1DE4E;

L_1DE72:
    /* 0001de72   4  movem.l (SP)+,{ A2 A3 } */
    c->pc = RC_ADDR(0x0001de72u);
    rc_step(c, m);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_1DE76:
    /* 0001de76   2  unlk A5 */
    c->pc = RC_ADDR(0x0001de76u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1DE78:
    /* 0001de78   2  rts */
    c->pc = RC_ADDR(0x0001de78u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
