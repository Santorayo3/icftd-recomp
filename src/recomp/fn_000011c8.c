/* fn_000011c8 - 224 byte(s), 64 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000011c8(cpu_t *c, rt_machine *m)
{
    u32 t0, t1;

    switch (c->pc)
    {
    case RC_ADDR(0x000011c8u): goto L_11C8;
    case RC_ADDR(0x000011ccu): goto L_11CC;
    case RC_ADDR(0x000011ceu): goto L_11CE;
    case RC_ADDR(0x000011d2u): goto L_11D2;
    case RC_ADDR(0x000011d4u): goto L_11D4;
    case RC_ADDR(0x000011d6u): goto L_11D6;
    case RC_ADDR(0x000011dau): goto L_11DA;
    case RC_ADDR(0x000011deu): goto L_11DE;
    case RC_ADDR(0x000011e2u): goto L_11E2;
    case RC_ADDR(0x000011e6u): goto L_11E6;
    case RC_ADDR(0x000011eau): goto L_11EA;
    case RC_ADDR(0x000011eeu): goto L_11EE;
    case RC_ADDR(0x000011f2u): goto L_11F2;
    case RC_ADDR(0x000011f4u): goto L_11F4;
    case RC_ADDR(0x000011f6u): goto L_11F6;
    case RC_ADDR(0x000011fau): goto L_11FA;
    case RC_ADDR(0x000011feu): goto L_11FE;
    case RC_ADDR(0x00001202u): goto L_1202;
    case RC_ADDR(0x00001206u): goto L_1206;
    case RC_ADDR(0x0000120au): goto L_120A;
    case RC_ADDR(0x0000120cu): goto L_120C;
    case RC_ADDR(0x0000120eu): goto L_120E;
    case RC_ADDR(0x00001212u): goto L_1212;
    case RC_ADDR(0x00001216u): goto L_1216;
    case RC_ADDR(0x0000121au): goto L_121A;
    case RC_ADDR(0x0000121eu): goto L_121E;
    case RC_ADDR(0x00001222u): goto L_1222;
    case RC_ADDR(0x00001224u): goto L_1224;
    case RC_ADDR(0x00001228u): goto L_1228;
    case RC_ADDR(0x0000122cu): goto L_122C;
    case RC_ADDR(0x0000122eu): goto L_122E;
    case RC_ADDR(0x00001232u): goto L_1232;
    case RC_ADDR(0x00001236u): goto L_1236;
    case RC_ADDR(0x0000123au): goto L_123A;
    case RC_ADDR(0x0000123eu): goto L_123E;
    case RC_ADDR(0x00001244u): goto L_1244;
    case RC_ADDR(0x00001246u): goto L_1246;
    case RC_ADDR(0x0000124cu): goto L_124C;
    case RC_ADDR(0x00001250u): goto L_1250;
    case RC_ADDR(0x00001254u): goto L_1254;
    case RC_ADDR(0x00001256u): goto L_1256;
    case RC_ADDR(0x0000125au): goto L_125A;
    case RC_ADDR(0x0000125cu): goto L_125C;
    case RC_ADDR(0x00001260u): goto L_1260;
    case RC_ADDR(0x00001264u): goto L_1264;
    case RC_ADDR(0x00001268u): goto L_1268;
    case RC_ADDR(0x0000126cu): goto L_126C;
    case RC_ADDR(0x0000126eu): goto L_126E;
    case RC_ADDR(0x00001272u): goto L_1272;
    case RC_ADDR(0x00001274u): goto L_1274;
    case RC_ADDR(0x00001278u): goto L_1278;
    case RC_ADDR(0x0000127au): goto L_127A;
    case RC_ADDR(0x0000127cu): goto L_127C;
    case RC_ADDR(0x00001280u): goto L_1280;
    case RC_ADDR(0x00001284u): goto L_1284;
    case RC_ADDR(0x00001286u): goto L_1286;
    case RC_ADDR(0x0000128au): goto L_128A;
    case RC_ADDR(0x0000128eu): goto L_128E;
    case RC_ADDR(0x00001290u): goto L_1290;
    case RC_ADDR(0x00001294u): goto L_1294;
    case RC_ADDR(0x00001298u): goto L_1298;
    case RC_ADDR(0x0000129cu): goto L_129C;
    case RC_ADDR(0x000012a2u): goto L_12A2;
    case RC_ADDR(0x000012a6u): goto L_12A6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_11C8:
    /* 000011c8   4  move.b (ffffffcf,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000011c8u);
    t0 = rc_rd8(c, m, (c->a[5] - 0x31u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_11CC:
    /* 000011cc   2  ext.w D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000011ccu);
    rc_ext_w(c, 0);

L_11CE:
    /* 000011ce   4  move.w (ffffffd8,A5),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000011ceu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x28u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11D2:
    /* 000011d2   2  cmp.w D0,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000011d2u);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_11D4:
    /* 000011d4   2  bcs 000011a8 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000011d4u);
    if (rc_cond(c, 5))
    {
        c->pc = RC_ADDR(0x000011a8u);
        return;
    }

L_11D6:
    /* 000011d6   4  pea (00000001).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000011d6u);
    rc_push32(c, m, 0x00000001u);

L_11DA:
    /* 000011da   4  pea (ffffffcf,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000011dau);
    rc_push32(c, m, (c->a[5] - 0x31u));

L_11DE:
    /* 000011de   4  move.l (fffffffc,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000011deu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_11E2:
    /* 000011e2   4  jsr (ffff8314,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000011e2u);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x000011e6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021476u);
    return;

L_11E6:
    /* 000011e6   4  lea (c,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000011e6u);
    c->a[7] = (c->a[7] + 0xcu);

L_11EA:
    /* 000011ea   4  pea (00000001).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000011eau);
    rc_push32(c, m, 0x00000001u);

L_11EE:
    /* 000011ee   4  movea.l (fffffff4,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000011eeu);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_11F2:
    /* 000011f2   2  addq.l #1,A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000011f2u);
    c->a[0] += 0x00000001u;

L_11F4:
    /* 000011f4   2  move.l A0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000011f4u);
    t0 = rc_a_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_11F6:
    /* 000011f6   4  move.l (fffffffc,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000011f6u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_11FA:
    /* 000011fa   4  jsr (ffff8314,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000011fau);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x000011feu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021476u);
    return;

L_11FE:
    /* 000011fe   4  lea (c,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000011feu);
    c->a[7] = (c->a[7] + 0xcu);

L_1202:
    /* 00001202   4  pea (00000001).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001202u);
    rc_push32(c, m, 0x00000001u);

L_1206:
    /* 00001206   4  movea.l (fffffff4,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001206u);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_120A:
    /* 0000120a   2  addq.l #6,A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000120au);
    c->a[0] += 0x00000006u;

L_120C:
    /* 0000120c   2  move.l A0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000120cu);
    t0 = rc_a_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_120E:
    /* 0000120e   4  move.l (fffffffc,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000120eu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1212:
    /* 00001212   4  jsr (ffff8314,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001212u);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x00001216u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021476u);
    return;

L_1216:
    /* 00001216   4  lea (c,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001216u);
    c->a[7] = (c->a[7] + 0xcu);

L_121A:
    /* 0000121a   4  movea.l (fffffff4,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000121au);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_121E:
    /* 0000121e   4  move.b (1,A0),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000121eu);
    t0 = rc_rd8(c, m, (c->a[0] + 0x1u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1222:
    /* 00001222   2  ext.w D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001222u);
    rc_ext_w(c, 0);

L_1224:
    /* 00001224   4  move.w D0,(ffffffd6,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001224u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1228:
    /* 00001228   4  movea.l (fffffff4,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001228u);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_122C:
    /* 0000122c   2  addq.l #2,A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000122cu);
    c->a[0] += 0x00000002u;

L_122E:
    /* 0000122e   4  move.l A0,(fffffff8,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000122eu);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1232:
    /* 00001232   4  tst.w (ffffffd6,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001232u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2au));
    rc_set_nzvc(c, t0, RC_W);

L_1236:
    /* 00001236   4  beq 00001300 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001236u);
    if (rc_cond(c, 7))
    {
        c->pc = RC_ADDR(0x00001300u);
        return;
    }

L_123A:
    /* 0000123a   4  movea.l (fffffff8,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000123au);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] = t0;

L_123E:
    /* 0000123e   6  cmpi.b #64,(4,A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000123eu);
    t0 = rc_rd8(c, m, (c->a[0] + 0x4u));
    rc_cmp(c, RC_B, t0, 0x00000064u);

L_1244:
    /* 00001244   2  bne 000012a8 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001244u);
    if (rc_cond(c, 6))
    {
        c->pc = RC_ADDR(0x000012a8u);
        return;
    }

L_1246:
    /* 00001246   6  pea (00010001).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001246u);
    rc_push32(c, m, RC_ADDR(0x00010001u));

L_124C:
    /* 0000124c   4  pea (00000016).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000124cu);
    rc_push32(c, m, 0x00000016u);

L_1250:
    /* 00001250   4  jsr (ffff8338,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001250u);
    /* vector 137: exec.library -198 */
    c->pc = RC_ADDR(0x00001254u);
    rc_os_call(c, m, 0, -198);

L_1254:
    /* 00001254   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001254u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1256:
    /* 00001256   4  movea.l (fffffff8,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001256u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] = t0;

L_125A:
    /* 0000125a   2  move.l D0,(A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000125au);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_L);

L_125C:
    /* 0000125c   4  movea.l (fffffff8,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000125cu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] = t0;

L_1260:
    /* 00001260   4  move.l (A0),(ffffffec,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001260u);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_wr32(c, m, (c->a[5] - 0x14u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1264:
    /* 00001264   4  move.l (fffffffc,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001264u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1268:
    /* 00001268   4  jsr (00000fea) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001268u);
    rc_push32(c, m, RC_ADDR(0x0000126cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00000feau);
    return;

L_126C:
    /* 0000126c   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000126cu);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_126E:
    /* 0000126e   4  movea.l (ffffffec,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000126eu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x14u));
    c->a[0] = t0;

L_1272:
    /* 00001272   2  move.l D0,(A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001272u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1274:
    /* 00001274   4  movea.l (ffffffec,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001274u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x14u));
    c->a[0] = t0;

L_1278:
    /* 00001278   2  addq.l #4,A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001278u);
    c->a[0] += 0x00000004u;

L_127A:
    /* 0000127a   2  move.l A0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000127au);
    t0 = rc_a_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_127C:
    /* 0000127c   4  move.l (fffffffc,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000127cu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1280:
    /* 00001280   4  jsr (00000fa2) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001280u);
    rc_push32(c, m, RC_ADDR(0x00001284u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000fa2u);
    return;

L_1284:
    /* 00001284   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001284u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1286:
    /* 00001286   4  move.l (fffffffc,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001286u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_128A:
    /* 0000128a   4  jsr (00000fea) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000128au);
    rc_push32(c, m, RC_ADDR(0x0000128eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00000feau);
    return;

L_128E:
    /* 0000128e   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000128eu);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1290:
    /* 00001290   4  movea.l (ffffffec,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001290u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x14u));
    c->a[0] = t0;

L_1294:
    /* 00001294   4  move.l D0,(c,A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001294u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[0] + 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1298:
    /* 00001298   4  movea.l (ffffffec,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001298u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x14u));
    c->a[0] = t0;

L_129C:
    /* 0000129c   6  adda.l #10,A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000129cu);
    t0 = 0x00000010u;
    c->a[0] += t0;

L_12A2:
    /* 000012a2   4  move.l A0,(fffffff8,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000012a2u);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_12A6:
    /* 000012a6   2  bra 000012e0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000012a6u);
    c->pc = RC_ADDR(0x000012e0u);
    return;

}
