/* fn_000101e4 - 178 byte(s), 46 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000101e4(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000101e4u): goto L_101E4;
    case RC_ADDR(0x000101e8u): goto L_101E8;
    case RC_ADDR(0x000101ecu): goto L_101EC;
    case RC_ADDR(0x000101f2u): goto L_101F2;
    case RC_ADDR(0x000101f8u): goto L_101F8;
    case RC_ADDR(0x000101fcu): goto L_101FC;
    case RC_ADDR(0x000101feu): goto L_101FE;
    case RC_ADDR(0x00010202u): goto L_10202;
    case RC_ADDR(0x00010204u): goto L_10204;
    case RC_ADDR(0x00010208u): goto L_10208;
    case RC_ADDR(0x0001020cu): goto L_1020C;
    case RC_ADDR(0x00010214u): goto L_10214;
    case RC_ADDR(0x00010216u): goto L_10216;
    case RC_ADDR(0x0001021au): goto L_1021A;
    case RC_ADDR(0x0001021eu): goto L_1021E;
    case RC_ADDR(0x00010220u): goto L_10220;
    case RC_ADDR(0x00010224u): goto L_10224;
    case RC_ADDR(0x0001022au): goto L_1022A;
    case RC_ADDR(0x0001022cu): goto L_1022C;
    case RC_ADDR(0x00010232u): goto L_10232;
    case RC_ADDR(0x00010236u): goto L_10236;
    case RC_ADDR(0x0001023cu): goto L_1023C;
    case RC_ADDR(0x0001023eu): goto L_1023E;
    case RC_ADDR(0x00010242u): goto L_10242;
    case RC_ADDR(0x00010248u): goto L_10248;
    case RC_ADDR(0x0001024cu): goto L_1024C;
    case RC_ADDR(0x00010250u): goto L_10250;
    case RC_ADDR(0x00010252u): goto L_10252;
    case RC_ADDR(0x00010256u): goto L_10256;
    case RC_ADDR(0x0001025au): goto L_1025A;
    case RC_ADDR(0x0001025eu): goto L_1025E;
    case RC_ADDR(0x00010262u): goto L_10262;
    case RC_ADDR(0x00010266u): goto L_10266;
    case RC_ADDR(0x0001026au): goto L_1026A;
    case RC_ADDR(0x0001026eu): goto L_1026E;
    case RC_ADDR(0x00010272u): goto L_10272;
    case RC_ADDR(0x00010276u): goto L_10276;
    case RC_ADDR(0x0001027au): goto L_1027A;
    case RC_ADDR(0x00010280u): goto L_10280;
    case RC_ADDR(0x00010282u): goto L_10282;
    case RC_ADDR(0x00010286u): goto L_10286;
    case RC_ADDR(0x00010288u): goto L_10288;
    case RC_ADDR(0x0001028cu): goto L_1028C;
    case RC_ADDR(0x0001028eu): goto L_1028E;
    case RC_ADDR(0x00010292u): goto L_10292;
    case RC_ADDR(0x00010294u): goto L_10294;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_101E4:
    /* 000101e4   4  link.w A5,#fffffff6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000101e4u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xau;

L_101E8:
    /* 000101e8   4  clr.w (fffffffe,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000101e8u);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_101EC:
    /* 000101ec   6  move.w #4,(fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000101ecu);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_101F2:
    /* 000101f2   6  move.w #64,(fffffffa,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000101f2u);
    t0 = 0x00000064u;
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_101F8:
    /* 000101f8   4  tst.w (ffffb02e,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000101f8u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd2u));
    rc_set_nzvc(c, t0, RC_W);

L_101FC:
    /* 000101fc   2  beq 00010204 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000101fcu);
    if (rc_cond(c, 7)) goto L_10204;

L_101FE:
    /* 000101fe   4  jsr (ffff816a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000101feu);
    /* vector 60 */
    rc_push32(c, m, RC_ADDR(0x00010202u));
    rc_depth++;
    c->pc = RC_ADDR(0x00011bf0u);
    return;

L_10202:
    /* 00010202   2  bra 000101f8 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010202u);
    rc_tick();
    goto L_101F8;

L_10204:
    /* 00010204   4  clr.l (fffffff6,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010204u);
    rc_wr32(c, m, (c->a[5] - 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_10208:
    /* 00010208   4  addq.l #1,(fffffff6,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010208u);
    t3 = (c->a[5] - 0xau);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_1020C:
    /* 0001020c   8  cmpi.l #4e20,(fffffff6,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001020cu);
    t0 = rc_rd32(c, m, (c->a[5] - 0xau));
    rc_cmp(c, RC_L, t0, 0x00004e20u);

L_10214:
    /* 00010214   2  blt 00010208 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010214u);
    if (rc_cond(c, 13)) { rc_tick(); goto L_10208; }

L_10216:
    /* 00010216   4  clr.w (ffffb02e,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010216u);
    rc_wr16(c, m, (c->a[4] - 0x4fd2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1021A:
    /* 0001021a   4  tst.w (ffffb02e,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001021au);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd2u));
    rc_set_nzvc(c, t0, RC_W);

L_1021E:
    /* 0001021e   2  bne 00010282 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001021eu);
    if (rc_cond(c, 6)) goto L_10282;

L_10220:
    /* 00010220   4  jsr (ffff816a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010220u);
    /* vector 60 */
    rc_push32(c, m, RC_ADDR(0x00010224u));
    rc_depth++;
    c->pc = RC_ADDR(0x00011bf0u);
    return;

L_10224:
    /* 00010224   6  cmpi.w #ffff,(ffffb02c,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010224u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd4u));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_1022A:
    /* 0001022a   2  bne 00010236 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001022au);
    if (rc_cond(c, 6)) goto L_10236;

L_1022C:
    /* 0001022c   6  move.w #4,(fffffffe,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001022cu);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_10232:
    /* 00010232   4  clr.w (fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010232u);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_10236:
    /* 00010236   6  cmpi.w #1,(ffffb02c,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010236u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd4u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_1023C:
    /* 0001023c   2  bne 00010248 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001023cu);
    if (rc_cond(c, 6)) goto L_10248;

L_1023E:
    /* 0001023e   4  clr.w (fffffffe,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001023eu);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_10242:
    /* 00010242   6  move.w #4,(fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010242u);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_10248:
    /* 00010248   4  move.w (fffffffa,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010248u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1024C:
    /* 0001024c   4  cmp.w (ffffb02c,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001024cu);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd4u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_10250:
    /* 00010250   2  beq 0001027a */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010250u);
    if (rc_cond(c, 7)) goto L_1027A;

L_10252:
    /* 00010252   4  move.w (fffffffe,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010252u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_10256:
    /* 00010256   4  pea (00000091).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010256u);
    rc_push32(c, m, 0x00000091u);

L_1025A:
    /* 0001025a   4  pea (00010296) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001025au);
    rc_push32(c, m, RC_ADDR(0x00010296u));

L_1025E:
    /* 0001025e   4  jsr (ffff8026,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001025eu);
    /* vector 6 */
    rc_push32(c, m, RC_ADDR(0x00010262u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000093au);
    return;

L_10262:
    /* 00010262   4  lea (a,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010262u);
    c->a[7] = (c->a[7] + 0xau);

L_10266:
    /* 00010266   4  move.w (fffffffc,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010266u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1026A:
    /* 0001026a   4  pea (0000009b).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001026au);
    rc_push32(c, m, 0x0000009bu);

L_1026E:
    /* 0001026e   4  pea (0001029a) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001026eu);
    rc_push32(c, m, RC_ADDR(0x0001029au));

L_10272:
    /* 00010272   4  jsr (ffff8026,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010272u);
    /* vector 6 */
    rc_push32(c, m, RC_ADDR(0x00010276u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000093au);
    return;

L_10276:
    /* 00010276   4  lea (a,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010276u);
    c->a[7] = (c->a[7] + 0xau);

L_1027A:
    /* 0001027a   6  move.w (ffffb02c,A4),(fffffffa,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001027au);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd4u));
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_10280:
    /* 00010280   2  bra 0001021a */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010280u);
    rc_tick();
    goto L_1021A;

L_10282:
    /* 00010282   4  tst.w (ffffb02e,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010282u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd2u));
    rc_set_nzvc(c, t0, RC_W);

L_10286:
    /* 00010286   2  beq 0001028e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010286u);
    if (rc_cond(c, 7)) goto L_1028E;

L_10288:
    /* 00010288   4  jsr (ffff816a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010288u);
    /* vector 60 */
    rc_push32(c, m, RC_ADDR(0x0001028cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00011bf0u);
    return;

L_1028C:
    /* 0001028c   2  bra 00010282 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001028cu);
    rc_tick();
    goto L_10282;

L_1028E:
    /* 0001028e   4  move.w (fffffffe,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001028eu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10292:
    /* 00010292   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010292u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_10294:
    /* 00010294   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010294u);
    rc_ret(c, m);
    return;

}
