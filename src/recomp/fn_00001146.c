/* fn_00001146 - 98 byte(s), 24 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00001146(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00001146u): goto L_1146;
    case RC_ADDR(0x0000114cu): goto L_114C;
    case RC_ADDR(0x00001150u): goto L_1150;
    case RC_ADDR(0x00001154u): goto L_1154;
    case RC_ADDR(0x00001156u): goto L_1156;
    case RC_ADDR(0x0000115au): goto L_115A;
    case RC_ADDR(0x0000115eu): goto L_115E;
    case RC_ADDR(0x00001162u): goto L_1162;
    case RC_ADDR(0x00001168u): goto L_1168;
    case RC_ADDR(0x0000116cu): goto L_116C;
    case RC_ADDR(0x00001170u): goto L_1170;
    case RC_ADDR(0x00001174u): goto L_1174;
    case RC_ADDR(0x00001178u): goto L_1178;
    case RC_ADDR(0x0000117cu): goto L_117C;
    case RC_ADDR(0x00001180u): goto L_1180;
    case RC_ADDR(0x00001184u): goto L_1184;
    case RC_ADDR(0x00001188u): goto L_1188;
    case RC_ADDR(0x0000118cu): goto L_118C;
    case RC_ADDR(0x00001190u): goto L_1190;
    case RC_ADDR(0x00001194u): goto L_1194;
    case RC_ADDR(0x0000119au): goto L_119A;
    case RC_ADDR(0x0000119cu): goto L_119C;
    case RC_ADDR(0x000011a2u): goto L_11A2;
    case RC_ADDR(0x000011a6u): goto L_11A6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1146:
    /* 00001146   6  pea (00010001).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001146u);
    rc_push32(c, m, RC_ADDR(0x00010001u));

L_114C:
    /* 0000114c   4  pea (0000002c).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000114cu);
    rc_push32(c, m, 0x0000002cu);

L_1150:
    /* 00001150   4  jsr (ffff8338,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001150u);
    /* vector 137: exec.library -198 */
    c->pc = RC_ADDR(0x00001154u);
    rc_os_call(c, m, 0, -198);

L_1154:
    /* 00001154   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001154u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1156:
    /* 00001156   4  movea.l (fffffff4,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001156u);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_115A:
    /* 0000115a   4  move.l D0,(e,A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000115au);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[0] + 0xeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_115E:
    /* 0000115e   4  movea.l (fffffff4,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000115eu);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_1162:
    /* 00001162   6  move.l (e,A0),(fffffff4,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001162u);
    t0 = rc_rd32(c, m, (c->a[0] + 0xeu));
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1168:
    /* 00001168   4  subq.w #1,(ffffffda,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001168u);
    t3 = (c->a[5] - 0x26u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_116C:
    /* 0000116c   4  pea (00000001).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000116cu);
    rc_push32(c, m, 0x00000001u);

L_1170:
    /* 00001170   4  move.l (fffffff4,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001170u);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1174:
    /* 00001174   4  move.l (fffffffc,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001174u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1178:
    /* 00001178   4  jsr (ffff8314,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001178u);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x0000117cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021476u);
    return;

L_117C:
    /* 0000117c   4  lea (c,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000117cu);
    c->a[7] = (c->a[7] + 0xcu);

L_1180:
    /* 00001180   4  pea (00000001).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001180u);
    rc_push32(c, m, 0x00000001u);

L_1184:
    /* 00001184   4  pea (ffffffcf,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001184u);
    rc_push32(c, m, (c->a[5] - 0x31u));

L_1188:
    /* 00001188   4  move.l (fffffffc,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001188u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_118C:
    /* 0000118c   4  jsr (ffff8314,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000118cu);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x00001190u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021476u);
    return;

L_1190:
    /* 00001190   4  lea (c,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001190u);
    c->a[7] = (c->a[7] + 0xcu);

L_1194:
    /* 00001194   6  cmpi.b #64,(ffffffcf,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001194u);
    t0 = rc_rd8(c, m, (c->a[5] - 0x31u));
    rc_cmp(c, RC_B, t0, 0x00000064u);

L_119A:
    /* 0000119a   2  ble 000011ea */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000119au);
    if (rc_cond(c, 15))
    {
        c->pc = RC_ADDR(0x000011eau);
        return;
    }

L_119C:
    /* 0000119c   6  subi.b #64,(ffffffcf,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000119cu);
    t3 = (c->a[5] - 0x31u);
    t1 = rc_rd8(c, m, t3);
    t2 = t1 - 0x00000064u;
    rc_flags_sub(c, RC_B, t1, 0x00000064u, t2, 0);
    rc_wr8(c, m, t3, t2);

L_11A2:
    /* 000011a2   4  clr.w (ffffffd8,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000011a2u);
    rc_wr16(c, m, (c->a[5] - 0x28u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_11A6:
    /* 000011a6   2  bra 000011c8 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000011a6u);
    c->pc = RC_ADDR(0x000011c8u);
    return;

}
