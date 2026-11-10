/* fn_00001300 - 104 byte(s), 26 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00001300(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00001300u): goto L_1300;
    case RC_ADDR(0x00001304u): goto L_1304;
    case RC_ADDR(0x00001308u): goto L_1308;
    case RC_ADDR(0x0000130cu): goto L_130C;
    case RC_ADDR(0x00001310u): goto L_1310;
    case RC_ADDR(0x00001314u): goto L_1314;
    case RC_ADDR(0x0000131au): goto L_131A;
    case RC_ADDR(0x0000131cu): goto L_131C;
    case RC_ADDR(0x00001320u): goto L_1320;
    case RC_ADDR(0x00001324u): goto L_1324;
    case RC_ADDR(0x00001328u): goto L_1328;
    case RC_ADDR(0x0000132cu): goto L_132C;
    case RC_ADDR(0x00001330u): goto L_1330;
    case RC_ADDR(0x00001334u): goto L_1334;
    case RC_ADDR(0x00001338u): goto L_1338;
    case RC_ADDR(0x0000133cu): goto L_133C;
    case RC_ADDR(0x00001340u): goto L_1340;
    case RC_ADDR(0x00001344u): goto L_1344;
    case RC_ADDR(0x00001348u): goto L_1348;
    case RC_ADDR(0x0000134cu): goto L_134C;
    case RC_ADDR(0x00001350u): goto L_1350;
    case RC_ADDR(0x00001354u): goto L_1354;
    case RC_ADDR(0x00001358u): goto L_1358;
    case RC_ADDR(0x0000135cu): goto L_135C;
    case RC_ADDR(0x00001360u): goto L_1360;
    case RC_ADDR(0x00001364u): goto L_1364;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1300:
    /* 00001300   4  pea (00000001).l */
    c->pc = RC_ADDR(0x00001300u);
    rc_push32(c, m, RC_ADDR(0x00000001u));

L_1304:
    /* 00001304   4  pea (ffffffce,A5) */
    c->pc = RC_ADDR(0x00001304u);
    rc_push32(c, m, (c->a[5] - 0x32u));

L_1308:
    /* 00001308   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00001308u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_130C:
    /* 0000130c   4  jsr (ffff8314,A4) */
    c->pc = RC_ADDR(0x0000130cu);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x00001310u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021476u);
    return;

L_1310:
    /* 00001310   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00001310u);
    c->a[7] = (c->a[7] + 0xcu);

L_1314:
    /* 00001314   6  cmpi.b #fc,(ffffffce,A5) */
    c->pc = RC_ADDR(0x00001314u);
    t0 = rc_rd8(c, m, (c->a[5] - 0x32u));
    rc_cmp(c, RC_B, t0, 0x000000fcu);

L_131A:
    /* 0000131a   2  bne 00001348 */
    c->pc = RC_ADDR(0x0000131au);
    if (rc_cond(c, 6)) goto L_1348;

L_131C:
    /* 0000131c   4  pea (00000001).l */
    c->pc = RC_ADDR(0x0000131cu);
    rc_push32(c, m, RC_ADDR(0x00000001u));

L_1320:
    /* 00001320   4  movea.l (fffffff4,A5),A0 */
    c->pc = RC_ADDR(0x00001320u);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_1324:
    /* 00001324   4  pea (22,A0) */
    c->pc = RC_ADDR(0x00001324u);
    rc_push32(c, m, (c->a[0] + 0x22u));

L_1328:
    /* 00001328   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00001328u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_132C:
    /* 0000132c   4  jsr (ffff8314,A4) */
    c->pc = RC_ADDR(0x0000132cu);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x00001330u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021476u);
    return;

L_1330:
    /* 00001330   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00001330u);
    c->a[7] = (c->a[7] + 0xcu);

L_1334:
    /* 00001334   4  pea (00000001).l */
    c->pc = RC_ADDR(0x00001334u);
    rc_push32(c, m, RC_ADDR(0x00000001u));

L_1338:
    /* 00001338   4  pea (ffffffce,A5) */
    c->pc = RC_ADDR(0x00001338u);
    rc_push32(c, m, (c->a[5] - 0x32u));

L_133C:
    /* 0000133c   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0000133cu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1340:
    /* 00001340   4  jsr (ffff8314,A4) */
    c->pc = RC_ADDR(0x00001340u);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x00001344u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021476u);
    return;

L_1344:
    /* 00001344   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00001344u);
    c->a[7] = (c->a[7] + 0xcu);

L_1348:
    /* 00001348   4  pea (00000001).l */
    c->pc = RC_ADDR(0x00001348u);
    rc_push32(c, m, RC_ADDR(0x00000001u));

L_134C:
    /* 0000134c   4  movea.l (fffffff4,A5),A0 */
    c->pc = RC_ADDR(0x0000134cu);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_1350:
    /* 00001350   4  pea (9,A0) */
    c->pc = RC_ADDR(0x00001350u);
    rc_push32(c, m, (c->a[0] + 0x9u));

L_1354:
    /* 00001354   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00001354u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1358:
    /* 00001358   4  jsr (ffff8314,A4) */
    c->pc = RC_ADDR(0x00001358u);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x0000135cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021476u);
    return;

L_135C:
    /* 0000135c   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0000135cu);
    c->a[7] = (c->a[7] + 0xcu);

L_1360:
    /* 00001360   4  clr.w (ffffffd8,A5) */
    c->pc = RC_ADDR(0x00001360u);
    rc_wr16(c, m, (c->a[5] - 0x28u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1364:
    /* 00001364   4  bra 000013ec */
    c->pc = RC_ADDR(0x00001364u);
    c->pc = RC_ADDR(0x000013ecu);
    return;

}
