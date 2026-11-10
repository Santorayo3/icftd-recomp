/* fn_00018108 - 102 byte(s), 26 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00018108(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00018108u): goto L_18108;
    case RC_ADDR(0x0001810cu): goto L_1810C;
    case RC_ADDR(0x00018110u): goto L_18110;
    case RC_ADDR(0x00018116u): goto L_18116;
    case RC_ADDR(0x0001811au): goto L_1811A;
    case RC_ADDR(0x0001811eu): goto L_1811E;
    case RC_ADDR(0x00018120u): goto L_18120;
    case RC_ADDR(0x00018124u): goto L_18124;
    case RC_ADDR(0x00018128u): goto L_18128;
    case RC_ADDR(0x0001812eu): goto L_1812E;
    case RC_ADDR(0x00018132u): goto L_18132;
    case RC_ADDR(0x00018138u): goto L_18138;
    case RC_ADDR(0x0001813cu): goto L_1813C;
    case RC_ADDR(0x00018140u): goto L_18140;
    case RC_ADDR(0x00018144u): goto L_18144;
    case RC_ADDR(0x00018148u): goto L_18148;
    case RC_ADDR(0x0001814cu): goto L_1814C;
    case RC_ADDR(0x00018150u): goto L_18150;
    case RC_ADDR(0x00018154u): goto L_18154;
    case RC_ADDR(0x00018158u): goto L_18158;
    case RC_ADDR(0x0001815cu): goto L_1815C;
    case RC_ADDR(0x00018160u): goto L_18160;
    case RC_ADDR(0x00018164u): goto L_18164;
    case RC_ADDR(0x00018168u): goto L_18168;
    case RC_ADDR(0x0001816au): goto L_1816A;
    case RC_ADDR(0x0001816cu): goto L_1816C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_18108:
    /* 00018108   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00018108u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1810C:
    /* 0001810c   4  move.l A4,(ffffce24,A4) */
    c->pc = RC_ADDR(0x0001810cu);
    rc_step(c, m);
    t0 = rc_a_get(c, 4, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x31dcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_18110:
    /* 00018110   6  pea (00010001).l */
    c->pc = RC_ADDR(0x00018110u);
    rc_step(c, m);
    rc_push32(c, m, 0x00010001u);

L_18116:
    /* 00018116   4  pea (00000016).l */
    c->pc = RC_ADDR(0x00018116u);
    rc_step(c, m);
    rc_push32(c, m, 0x00000016u);

L_1811A:
    /* 0001811a   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x0001811au);
    rc_step(c, m);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x0001811eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d8eu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002168cu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021690u);
    return;

L_1811E:
    /* 0001811e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001811eu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_18120:
    /* 00018120   4  move.l D0,(e00,A4) */
    c->pc = RC_ADDR(0x00018120u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0xe00u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_18124:
    /* 00018124   4  movea.l (e00,A4),A0 */
    c->pc = RC_ADDR(0x00018124u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe00u));
    c->a[0] = t0;

L_18128:
    /* 00018128   6  move.b #2,(8,A0) */
    c->pc = RC_ADDR(0x00018128u);
    rc_step(c, m);
    t0 = 0x00000002u;
    rc_wr8(c, m, (c->a[0] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_1812E:
    /* 0001812e   4  movea.l (e00,A4),A0 */
    c->pc = RC_ADDR(0x0001812eu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe00u));
    c->a[0] = t0;

L_18132:
    /* 00018132   6  move.b #c4,(9,A0) */
    c->pc = RC_ADDR(0x00018132u);
    rc_step(c, m);
    t0 = 0x000000c4u;
    rc_wr8(c, m, (c->a[0] + 0x9u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_18138:
    /* 00018138   4  movea.l (e00,A4),A0 */
    c->pc = RC_ADDR(0x00018138u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe00u));
    c->a[0] = t0;

L_1813C:
    /* 0001813c   4  lea (0001816e),A1 */
    c->pc = RC_ADDR(0x0001813cu);
    rc_step(c, m);
    c->a[1] = RC_ADDR(0x0001816eu);

L_18140:
    /* 00018140   4  move.l A1,(a,A0) */
    c->pc = RC_ADDR(0x00018140u);
    rc_step(c, m);
    t0 = rc_a_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[0] + 0xau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_18144:
    /* 00018144   4  lea (ffffce24,A4),A0 */
    c->pc = RC_ADDR(0x00018144u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x31dcu);

L_18148:
    /* 00018148   4  movea.l (e00,A4),A1 */
    c->pc = RC_ADDR(0x00018148u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe00u));
    c->a[1] = t0;

L_1814C:
    /* 0001814c   4  move.l A0,(e,A1) */
    c->pc = RC_ADDR(0x0001814cu);
    rc_step(c, m);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[1] + 0xeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_18150:
    /* 00018150   4  lea (000180f0),A0 */
    c->pc = RC_ADDR(0x00018150u);
    rc_step(c, m);
    c->a[0] = RC_ADDR(0x000180f0u);

L_18154:
    /* 00018154   4  movea.l (e00,A4),A1 */
    c->pc = RC_ADDR(0x00018154u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe00u));
    c->a[1] = t0;

L_18158:
    /* 00018158   4  move.l A0,(12,A1) */
    c->pc = RC_ADDR(0x00018158u);
    rc_step(c, m);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[1] + 0x12u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1815C:
    /* 0001815c   4  move.l (e00,A4),-(A7) */
    c->pc = RC_ADDR(0x0001815cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe00u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_18160:
    /* 00018160   4  pea (00000005).l */
    c->pc = RC_ADDR(0x00018160u);
    rc_step(c, m);
    rc_push32(c, m, 0x00000005u);

L_18164:
    /* 00018164   4  jsr (ffff832c,A4) */
    c->pc = RC_ADDR(0x00018164u);
    rc_step(c, m);
    /* vector 135 */
    rc_push32(c, m, RC_ADDR(0x00018168u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d82u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000214b8u);
    return;

L_18168:
    /* 00018168   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00018168u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1816A:
    /* 0001816a   2  unlk A5 */
    c->pc = RC_ADDR(0x0001816au);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1816C:
    /* 0001816c   2  rts */
    c->pc = RC_ADDR(0x0001816cu);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
