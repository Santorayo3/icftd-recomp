/* fn_00017210 - 196 byte(s), 58 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00017210(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00017210u): goto L_17210;
    case RC_ADDR(0x00017214u): goto L_17214;
    case RC_ADDR(0x0001721au): goto L_1721A;
    case RC_ADDR(0x0001721eu): goto L_1721E;
    case RC_ADDR(0x00017220u): goto L_17220;
    case RC_ADDR(0x00017224u): goto L_17224;
    case RC_ADDR(0x00017228u): goto L_17228;
    case RC_ADDR(0x0001722au): goto L_1722A;
    case RC_ADDR(0x0001722eu): goto L_1722E;
    case RC_ADDR(0x00017230u): goto L_17230;
    case RC_ADDR(0x00017232u): goto L_17232;
    case RC_ADDR(0x00017234u): goto L_17234;
    case RC_ADDR(0x00017236u): goto L_17236;
    case RC_ADDR(0x0001723au): goto L_1723A;
    case RC_ADDR(0x0001723eu): goto L_1723E;
    case RC_ADDR(0x00017242u): goto L_17242;
    case RC_ADDR(0x00017246u): goto L_17246;
    case RC_ADDR(0x0001724au): goto L_1724A;
    case RC_ADDR(0x0001724eu): goto L_1724E;
    case RC_ADDR(0x00017254u): goto L_17254;
    case RC_ADDR(0x00017256u): goto L_17256;
    case RC_ADDR(0x0001725au): goto L_1725A;
    case RC_ADDR(0x0001725cu): goto L_1725C;
    case RC_ADDR(0x00017260u): goto L_17260;
    case RC_ADDR(0x00017264u): goto L_17264;
    case RC_ADDR(0x00017268u): goto L_17268;
    case RC_ADDR(0x0001726cu): goto L_1726C;
    case RC_ADDR(0x00017270u): goto L_17270;
    case RC_ADDR(0x00017274u): goto L_17274;
    case RC_ADDR(0x00017278u): goto L_17278;
    case RC_ADDR(0x0001727cu): goto L_1727C;
    case RC_ADDR(0x00017280u): goto L_17280;
    case RC_ADDR(0x00017284u): goto L_17284;
    case RC_ADDR(0x00017288u): goto L_17288;
    case RC_ADDR(0x0001728cu): goto L_1728C;
    case RC_ADDR(0x00017292u): goto L_17292;
    case RC_ADDR(0x00017294u): goto L_17294;
    case RC_ADDR(0x00017296u): goto L_17296;
    case RC_ADDR(0x0001729au): goto L_1729A;
    case RC_ADDR(0x0001729cu): goto L_1729C;
    case RC_ADDR(0x000172a0u): goto L_172A0;
    case RC_ADDR(0x000172a4u): goto L_172A4;
    case RC_ADDR(0x000172a6u): goto L_172A6;
    case RC_ADDR(0x000172a8u): goto L_172A8;
    case RC_ADDR(0x000172aau): goto L_172AA;
    case RC_ADDR(0x000172acu): goto L_172AC;
    case RC_ADDR(0x000172b0u): goto L_172B0;
    case RC_ADDR(0x000172b4u): goto L_172B4;
    case RC_ADDR(0x000172b8u): goto L_172B8;
    case RC_ADDR(0x000172bcu): goto L_172BC;
    case RC_ADDR(0x000172c0u): goto L_172C0;
    case RC_ADDR(0x000172c4u): goto L_172C4;
    case RC_ADDR(0x000172c8u): goto L_172C8;
    case RC_ADDR(0x000172cau): goto L_172CA;
    case RC_ADDR(0x000172ccu): goto L_172CC;
    case RC_ADDR(0x000172ceu): goto L_172CE;
    case RC_ADDR(0x000172d0u): goto L_172D0;
    case RC_ADDR(0x000172d2u): goto L_172D2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_17210:
    /* 00017210   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x00017210u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_17214:
    /* 00017214   6  move.l (8,A5),(fffffebe,A4) */
    c->pc = RC_ADDR(0x00017214u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] - 0x142u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1721A:
    /* 0001721a   4  tst.w (2e2,A4) */
    c->pc = RC_ADDR(0x0001721au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2e2u));
    rc_set_nzvc(c, t0, RC_W);

L_1721E:
    /* 0001721e   2  beq 0001724e */
    c->pc = RC_ADDR(0x0001721eu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1724E;

L_17220:
    /* 00017220   4  pea (000172d4) */
    c->pc = RC_ADDR(0x00017220u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x000172d4u));

L_17224:
    /* 00017224   4  jsr (ffff8254,A4) */
    c->pc = RC_ADDR(0x00017224u);
    rc_step(c, m);
    /* vector 99 */
    rc_push32(c, m, RC_ADDR(0x00017228u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021caau);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f186u);
    return;

L_17228:
    /* 00017228   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00017228u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1722A:
    /* 0001722a   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001722au);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1722E:
    /* 0001722e   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0001722eu);
    rc_step(c, m);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_17230:
    /* 00017230   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00017230u);
    rc_step(c, m);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_17232:
    /* 00017232   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00017232u);
    rc_step(c, m);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_17234:
    /* 00017234   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00017234u);
    rc_step(c, m);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17236:
    /* 00017236   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00017236u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1723A:
    /* 0001723a   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0001723au);
    rc_step(c, m);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1723E:
    /* 0001723e   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x0001723eu);
    rc_step(c, m);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x00017242u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cbcu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_17242:
    /* 00017242   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00017242u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0x14u);

L_17246:
    /* 00017246   4  clr.w (2e2,A4) */
    c->pc = RC_ADDR(0x00017246u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] + 0x2e2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1724A:
    /* 0001724a   4  clr.w (ffffcdf8,A4) */
    c->pc = RC_ADDR(0x0001724au);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0x3208u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1724E:
    /* 0001724e   6  cmpi.w #2f,(ffffcdf8,A4) */
    c->pc = RC_ADDR(0x0001724eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x3208u));
    rc_cmp(c, RC_W, t0, 0x0000002fu);

L_17254:
    /* 00017254   2  bne 0001728c */
    c->pc = RC_ADDR(0x00017254u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_1728C;

L_17256:
    /* 00017256   4  move.w #3f,-(A7) */
    c->pc = RC_ADDR(0x00017256u);
    rc_step(c, m);
    t0 = 0x0000003fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1725A:
    /* 0001725a   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0001725au);
    rc_step(c, m);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1725C:
    /* 0001725c   4  move.l (1392,A4),-(A7) */
    c->pc = RC_ADDR(0x0001725cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1392u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_17260:
    /* 00017260   4  move.w (1396,A4),-(A7) */
    c->pc = RC_ADDR(0x00017260u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1396u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17264:
    /* 00017264   4  move.l (138e,A4),-(A7) */
    c->pc = RC_ADDR(0x00017264u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x138eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_17268:
    /* 00017268   4  jsr (ffff80b6,A4) */
    c->pc = RC_ADDR(0x00017268u);
    rc_step(c, m);
    /* vector 30 */
    rc_push32(c, m, RC_ADDR(0x0001726cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b0cu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009b60u);
    return;

L_1726C:
    /* 0001726c   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0001726cu);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xeu);

L_17270:
    /* 00017270   4  move.w #3f,-(A7) */
    c->pc = RC_ADDR(0x00017270u);
    rc_step(c, m);
    t0 = 0x0000003fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17274:
    /* 00017274   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x00017274u);
    rc_step(c, m);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17278:
    /* 00017278   4  move.l (1392,A4),-(A7) */
    c->pc = RC_ADDR(0x00017278u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1392u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1727C:
    /* 0001727c   4  move.w (1396,A4),-(A7) */
    c->pc = RC_ADDR(0x0001727cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1396u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17280:
    /* 00017280   4  move.l (138e,A4),-(A7) */
    c->pc = RC_ADDR(0x00017280u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x138eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_17284:
    /* 00017284   4  jsr (ffff80b6,A4) */
    c->pc = RC_ADDR(0x00017284u);
    rc_step(c, m);
    /* vector 30 */
    rc_push32(c, m, RC_ADDR(0x00017288u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b0cu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009b60u);
    return;

L_17288:
    /* 00017288   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00017288u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xeu);

L_1728C:
    /* 0001728c   6  cmpi.w #31,(ffffcdf8,A4) */
    c->pc = RC_ADDR(0x0001728cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x3208u));
    rc_cmp(c, RC_W, t0, 0x00000031u);

L_17292:
    /* 00017292   2  bne 000172a6 */
    c->pc = RC_ADDR(0x00017292u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_172A6;

L_17294:
    /* 00017294   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00017294u);
    rc_step(c, m);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17296:
    /* 00017296   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x00017296u);
    rc_step(c, m);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x0001729au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b18u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009bcau);
    return;

L_1729A:
    /* 0001729a   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001729au);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1729C:
    /* 0001729c   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0001729cu);
    rc_step(c, m);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_172A0:
    /* 000172a0   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x000172a0u);
    rc_step(c, m);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x000172a4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b18u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009bcau);
    return;

L_172A4:
    /* 000172a4   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000172a4u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_172A6:
    /* 000172a6   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x000172a6u);
    rc_step(c, m);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_172A8:
    /* 000172a8   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x000172a8u);
    rc_step(c, m);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_172AA:
    /* 000172aa   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x000172aau);
    rc_step(c, m);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_172AC:
    /* 000172ac   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000172acu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_172B0:
    /* 000172b0   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x000172b0u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_172B4:
    /* 000172b4   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x000172b4u);
    rc_step(c, m);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x000172b8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cceu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fa02u);
    return;

L_172B8:
    /* 000172b8   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x000172b8u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xeu);

L_172BC:
    /* 000172bc   4  move.w (ffffcdf8,A4),D0 */
    c->pc = RC_ADDR(0x000172bcu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x3208u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_172C0:
    /* 000172c0   4  addq.w #1,(ffffcdf8,A4) */
    c->pc = RC_ADDR(0x000172c0u);
    rc_step(c, m);
    t3 = (c->a[4] - 0x3208u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_172C4:
    /* 000172c4   4  cmp.w (138c,A4),D0 */
    c->pc = RC_ADDR(0x000172c4u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x138cu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_172C8:
    /* 000172c8   2  ble 000172d0 */
    c->pc = RC_ADDR(0x000172c8u);
    rc_step(c, m);
    if (rc_cond(c, 15)) goto L_172D0;

L_172CA:
    /* 000172ca   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x000172cau);
    rc_step(c, m);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_172CC:
    /* 000172cc   2  unlk A5 */
    c->pc = RC_ADDR(0x000172ccu);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_172CE:
    /* 000172ce   2  rts */
    c->pc = RC_ADDR(0x000172ceu);
    rc_step(c, m);
    rc_ret(c, m);
    return;

L_172D0:
    /* 000172d0   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000172d0u);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_172D2:
    /* 000172d2   2  bra 000172cc */
    c->pc = RC_ADDR(0x000172d2u);
    rc_step(c, m);
    rc_tick();
    goto L_172CC;

}
