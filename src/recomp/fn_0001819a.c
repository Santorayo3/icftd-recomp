/* fn_0001819a - 318 byte(s), 82 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001819a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001819au): goto L_1819A;
    case RC_ADDR(0x0001819eu): goto L_1819E;
    case RC_ADDR(0x000181a4u): goto L_181A4;
    case RC_ADDR(0x000181aau): goto L_181AA;
    case RC_ADDR(0x000181b0u): goto L_181B0;
    case RC_ADDR(0x000181b8u): goto L_181B8;
    case RC_ADDR(0x000181beu): goto L_181BE;
    case RC_ADDR(0x000181c2u): goto L_181C2;
    case RC_ADDR(0x000181c6u): goto L_181C6;
    case RC_ADDR(0x000181cau): goto L_181CA;
    case RC_ADDR(0x000181ccu): goto L_181CC;
    case RC_ADDR(0x000181d0u): goto L_181D0;
    case RC_ADDR(0x000181d4u): goto L_181D4;
    case RC_ADDR(0x000181d8u): goto L_181D8;
    case RC_ADDR(0x000181dau): goto L_181DA;
    case RC_ADDR(0x000181e0u): goto L_181E0;
    case RC_ADDR(0x000181e4u): goto L_181E4;
    case RC_ADDR(0x000181e8u): goto L_181E8;
    case RC_ADDR(0x000181eau): goto L_181EA;
    case RC_ADDR(0x000181eeu): goto L_181EE;
    case RC_ADDR(0x000181f2u): goto L_181F2;
    case RC_ADDR(0x000181f6u): goto L_181F6;
    case RC_ADDR(0x000181fau): goto L_181FA;
    case RC_ADDR(0x000181fcu): goto L_181FC;
    case RC_ADDR(0x00018200u): goto L_18200;
    case RC_ADDR(0x00018204u): goto L_18204;
    case RC_ADDR(0x00018208u): goto L_18208;
    case RC_ADDR(0x0001820cu): goto L_1820C;
    case RC_ADDR(0x00018212u): goto L_18212;
    case RC_ADDR(0x00018218u): goto L_18218;
    case RC_ADDR(0x0001821cu): goto L_1821C;
    case RC_ADDR(0x00018222u): goto L_18222;
    case RC_ADDR(0x00018226u): goto L_18226;
    case RC_ADDR(0x00018228u): goto L_18228;
    case RC_ADDR(0x0001822au): goto L_1822A;
    case RC_ADDR(0x0001822eu): goto L_1822E;
    case RC_ADDR(0x00018232u): goto L_18232;
    case RC_ADDR(0x00018236u): goto L_18236;
    case RC_ADDR(0x0001823au): goto L_1823A;
    case RC_ADDR(0x0001823cu): goto L_1823C;
    case RC_ADDR(0x00018240u): goto L_18240;
    case RC_ADDR(0x00018242u): goto L_18242;
    case RC_ADDR(0x00018246u): goto L_18246;
    case RC_ADDR(0x0001824au): goto L_1824A;
    case RC_ADDR(0x0001824cu): goto L_1824C;
    case RC_ADDR(0x00018250u): goto L_18250;
    case RC_ADDR(0x00018254u): goto L_18254;
    case RC_ADDR(0x00018256u): goto L_18256;
    case RC_ADDR(0x0001825au): goto L_1825A;
    case RC_ADDR(0x0001825eu): goto L_1825E;
    case RC_ADDR(0x00018262u): goto L_18262;
    case RC_ADDR(0x00018266u): goto L_18266;
    case RC_ADDR(0x0001826au): goto L_1826A;
    case RC_ADDR(0x0001826eu): goto L_1826E;
    case RC_ADDR(0x00018272u): goto L_18272;
    case RC_ADDR(0x00018276u): goto L_18276;
    case RC_ADDR(0x0001827au): goto L_1827A;
    case RC_ADDR(0x0001827eu): goto L_1827E;
    case RC_ADDR(0x00018282u): goto L_18282;
    case RC_ADDR(0x00018286u): goto L_18286;
    case RC_ADDR(0x0001828cu): goto L_1828C;
    case RC_ADDR(0x0001828eu): goto L_1828E;
    case RC_ADDR(0x00018292u): goto L_18292;
    case RC_ADDR(0x00018294u): goto L_18294;
    case RC_ADDR(0x00018298u): goto L_18298;
    case RC_ADDR(0x0001829cu): goto L_1829C;
    case RC_ADDR(0x000182a0u): goto L_182A0;
    case RC_ADDR(0x000182a4u): goto L_182A4;
    case RC_ADDR(0x000182a8u): goto L_182A8;
    case RC_ADDR(0x000182acu): goto L_182AC;
    case RC_ADDR(0x000182b0u): goto L_182B0;
    case RC_ADDR(0x000182b4u): goto L_182B4;
    case RC_ADDR(0x000182b6u): goto L_182B6;
    case RC_ADDR(0x000182bau): goto L_182BA;
    case RC_ADDR(0x000182beu): goto L_182BE;
    case RC_ADDR(0x000182c2u): goto L_182C2;
    case RC_ADDR(0x000182c4u): goto L_182C4;
    case RC_ADDR(0x000182c8u): goto L_182C8;
    case RC_ADDR(0x000182ccu): goto L_182CC;
    case RC_ADDR(0x000182d0u): goto L_182D0;
    case RC_ADDR(0x000182d4u): goto L_182D4;
    case RC_ADDR(0x000182d6u): goto L_182D6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1819A:
    /* 0001819a   4  link.w A5,#fffffffa */
    c->pc = RC_ADDR(0x0001819au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x6u;

L_1819E:
    /* 0001819e   6  move.w #150,(740,A4) */
    c->pc = RC_ADDR(0x0001819eu);
    rc_step(c, m, 16);
    t0 = 0x00000150u;
    rc_wr16(c, m, (c->a[4] + 0x740u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_181A4:
    /* 000181a4   6  move.w #c8,(742,A4) */
    c->pc = RC_ADDR(0x000181a4u);
    rc_step(c, m, 16);
    t0 = 0x000000c8u;
    rc_wr16(c, m, (c->a[4] + 0x742u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_181AA:
    /* 000181aa   6  move.w #5,(744,A4) */
    c->pc = RC_ADDR(0x000181aau);
    rc_step(c, m, 16);
    t0 = 0x00000005u;
    rc_wr16(c, m, (c->a[4] + 0x744u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_181B0:
    /* 000181b0   8  move.l #20d0,(746,A4) */
    c->pc = RC_ADDR(0x000181b0u);
    rc_step(c, m, 24);
    t0 = 0x000020d0u;
    rc_wr32(c, m, (c->a[4] + 0x746u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_181B8:
    /* 000181b8   6  move.w #a,(74a,A4) */
    c->pc = RC_ADDR(0x000181b8u);
    rc_step(c, m, 16);
    t0 = 0x0000000au;
    rc_wr16(c, m, (c->a[4] + 0x74au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_181BE:
    /* 000181be   4  jsr (ffff81c4,A4) */
    c->pc = RC_ADDR(0x000181beu);
    rc_step(c, m, 18);
    /* vector 75 */
    rc_push32(c, m, RC_ADDR(0x000181c2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c1au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001b94au);
    return;

L_181C2:
    /* 000181c2   4  pea (ffff9eb2,A4) */
    c->pc = RC_ADDR(0x000181c2u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] - 0x614eu));

L_181C6:
    /* 000181c6   4  jsr (ffff810a,A4) */
    c->pc = RC_ADDR(0x000181c6u);
    rc_step(c, m, 18);
    /* vector 44 */
    rc_push32(c, m, RC_ADDR(0x000181cau));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b60u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000e804u);
    return;

L_181CA:
    /* 000181ca   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000181cau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_181CC:
    /* 000181cc   4  jsr (0001b49e) */
    c->pc = RC_ADDR(0x000181ccu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000181d0u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001b49eu);
    return;

L_181D0:
    /* 000181d0   4  pea (000182d8) */
    c->pc = RC_ADDR(0x000181d0u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000182d8u));

L_181D4:
    /* 000181d4   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x000181d4u);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x000181d8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ce0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000202c4u);
    return;

L_181D8:
    /* 000181d8   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000181d8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_181DA:
    /* 000181da   6  move.w #2,(fffffffa,A5) */
    c->pc = RC_ADDR(0x000181dau);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_181E0:
    /* 000181e0   4  move.w (fffffffa,A5),-(A7) */
    c->pc = RC_ADDR(0x000181e0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_181E4:
    /* 000181e4   4  jsr (0001abbe) */
    c->pc = RC_ADDR(0x000181e4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000181e8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001abbeu);
    return;

L_181E8:
    /* 000181e8   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000181e8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_181EA:
    /* 000181ea   4  move.w #5,-(A7) */
    c->pc = RC_ADDR(0x000181eau);
    rc_step(c, m, 12);
    t0 = 0x00000005u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_181EE:
    /* 000181ee   4  move.w #5,-(A7) */
    c->pc = RC_ADDR(0x000181eeu);
    rc_step(c, m, 12);
    t0 = 0x00000005u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_181F2:
    /* 000181f2   4  pea (000182e5) */
    c->pc = RC_ADDR(0x000181f2u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000182e5u));

L_181F6:
    /* 000181f6   4  jsr (ffff81b2,A4) */
    c->pc = RC_ADDR(0x000181f6u);
    rc_step(c, m, 18);
    /* vector 72 */
    rc_push32(c, m, RC_ADDR(0x000181fau));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c08u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001b62eu);
    return;

L_181FA:
    /* 000181fa   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000181fau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_181FC:
    /* 000181fc   4  jsr (0001b2e8) */
    c->pc = RC_ADDR(0x000181fcu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00018200u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001b2e8u);
    return;

L_18200:
    /* 00018200   4  jsr (ffff81ca,A4) */
    c->pc = RC_ADDR(0x00018200u);
    rc_step(c, m, 18);
    /* vector 76 */
    rc_push32(c, m, RC_ADDR(0x00018204u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c20u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001b9a4u);
    return;

L_18204:
    /* 00018204   4  jsr (ffff818e,A4) */
    c->pc = RC_ADDR(0x00018204u);
    rc_step(c, m, 18);
    /* vector 66 */
    rc_push32(c, m, RC_ADDR(0x00018208u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021be4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00017f34u);
    return;

L_18208:
    /* 00018208   4  jsr (00018368) */
    c->pc = RC_ADDR(0x00018208u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001820cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00018368u);
    return;

L_1820C:
    /* 0001820c   6  move.w #2,(736,A4) */
    c->pc = RC_ADDR(0x0001820cu);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x736u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18212:
    /* 00018212   6  cmpi.w #8,(71a,A4) */
    c->pc = RC_ADDR(0x00018212u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x71au));
    rc_cmp(c, RC_W, t0, 0x00000008u);

L_18218:
    /* 00018218   4  bge 000182a4 */
    c->pc = RC_ADDR(0x00018218u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_182A4;

L_1821C:
    /* 0001821c   6  move.w #1,(fffff28a,A4) */
    c->pc = RC_ADDR(0x0001821cu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0xd76u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18222:
    /* 00018222   4  tst.w (fffff28a,A4) */
    /* a flag wait: rc_wait runs it natively and returns 1 when its exit branch is taken;
     * 0 means the three instructions below run instead (the reference path). */
    if (rc_wait(c, m, RC_ADDR(0x00018222u), 12,
                RC_ADDR(0x00018226u), 10, 7,
                RC_ADDR(0x00018228u), 10,
                (c->a[4] - 0xd76u), RC_W))
        goto L_1822A;
    c->pc = RC_ADDR(0x00018222u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd76u));
    rc_set_nzvc(c, t0, RC_W);

L_18226:
    /* 00018226   2  beq 0001822a */
    c->pc = RC_ADDR(0x00018226u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1822A;

L_18228:
    /* 00018228   2  bra 00018222 */
    c->pc = RC_ADDR(0x00018228u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_18222;

L_1822A:
    /* 0001822a   4  jsr (ffff816a,A4) */
    c->pc = RC_ADDR(0x0001822au);
    rc_step(c, m, 18);
    /* vector 60 */
    rc_push32(c, m, RC_ADDR(0x0001822eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bc0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00011bf0u);
    return;

L_1822E:
    /* 0001822e   4  jsr (ffff80da,A4) */
    c->pc = RC_ADDR(0x0001822eu);
    rc_step(c, m, 18);
    /* vector 36 */
    rc_push32(c, m, RC_ADDR(0x00018232u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b30u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00009c72u);
    return;

L_18232:
    /* 00018232   4  move.w #7,-(A7) */
    c->pc = RC_ADDR(0x00018232u);
    rc_step(c, m, 12);
    t0 = 0x00000007u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18236:
    /* 00018236   4  jsr (ffff813a,A4) */
    c->pc = RC_ADDR(0x00018236u);
    rc_step(c, m, 18);
    /* vector 52 */
    rc_push32(c, m, RC_ADDR(0x0001823au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b90u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001075au);
    return;

L_1823A:
    /* 0001823a   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001823au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1823C:
    /* 0001823c   4  tst.w (736,A4) */
    c->pc = RC_ADDR(0x0001823cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x736u));
    rc_set_nzvc(c, t0, RC_W);

L_18240:
    /* 00018240   2  beq 00018250 */
    c->pc = RC_ADDR(0x00018240u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_18250;

L_18242:
    /* 00018242   4  subq.w #1,(736,A4) */
    c->pc = RC_ADDR(0x00018242u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x736u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_18246:
    /* 00018246   4  tst.w (736,A4) */
    c->pc = RC_ADDR(0x00018246u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x736u));
    rc_set_nzvc(c, t0, RC_W);

L_1824A:
    /* 0001824a   2  bne 00018250 */
    c->pc = RC_ADDR(0x0001824au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_18250;

L_1824C:
    /* 0001824c   4  jsr (ffff819a,A4) */
    c->pc = RC_ADDR(0x0001824cu);
    rc_step(c, m, 18);
    /* vector 68 */
    rc_push32(c, m, RC_ADDR(0x00018250u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bf0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001806eu);
    return;

L_18250:
    /* 00018250   4  move.w (74e,A4),D0 */
    c->pc = RC_ADDR(0x00018250u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x74eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18254:
    /* 00018254   2  asl.w #4,D0 */
    c->pc = RC_ADDR(0x00018254u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W));

L_18256:
    /* 00018256   4  sub.w #30,D0 */
    c->pc = RC_ADDR(0x00018256u);
    rc_step(c, m, 10);
    t0 = 0x00000030u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1825A:
    /* 0001825a   4  move.w D0,(470,A4) */
    c->pc = RC_ADDR(0x0001825au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x470u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1825E:
    /* 0001825e   4  move.w (750,A4),D0 */
    c->pc = RC_ADDR(0x0001825eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x750u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18262:
    /* 00018262   4  muls.w #a,D0 */
    c->pc = RC_ADDR(0x00018262u);
    rc_step(c, m, 42);
    t0 = 0x0000000au;
    rc_muls(c, 0, t0);

L_18266:
    /* 00018266   4  sub.w #28,D0 */
    c->pc = RC_ADDR(0x00018266u);
    rc_step(c, m, 10);
    t0 = 0x00000028u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1826A:
    /* 0001826a   4  move.w D0,(472,A4) */
    c->pc = RC_ADDR(0x0001826au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x472u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1826E:
    /* 0001826e   4  jsr (00018832) */
    c->pc = RC_ADDR(0x0001826eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00018272u));
    rc_depth++;
    c->pc = RC_ADDR(0x00018832u);
    return;

L_18272:
    /* 00018272   4  jsr (0001887c) */
    c->pc = RC_ADDR(0x00018272u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00018276u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001887cu);
    return;

L_18276:
    /* 00018276   4  jsr (ffff815e,A4) */
    c->pc = RC_ADDR(0x00018276u);
    rc_step(c, m, 18);
    /* vector 58 */
    rc_push32(c, m, RC_ADDR(0x0001827au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bb4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00011512u);
    return;

L_1827A:
    /* 0001827a   4  jsr (0001a1bc) */
    c->pc = RC_ADDR(0x0001827au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001827eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001a1bcu);
    return;

L_1827E:
    /* 0001827e   4  jsr (0001a53c) */
    c->pc = RC_ADDR(0x0001827eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00018282u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001a53cu);
    return;

L_18282:
    /* 00018282   4  jsr (00019006) */
    c->pc = RC_ADDR(0x00018282u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00018286u));
    rc_depth++;
    c->pc = RC_ADDR(0x00019006u);
    return;

L_18286:
    /* 00018286   6  cmpi.w #14,(1cc4,A4) */
    c->pc = RC_ADDR(0x00018286u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cc4u));
    rc_cmp(c, RC_W, t0, 0x00000014u);

L_1828C:
    /* 0001828c   2  blt 00018294 */
    c->pc = RC_ADDR(0x0001828cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_18294;

L_1828E:
    /* 0001828e   4  tst.w (1cb4,A4) */
    c->pc = RC_ADDR(0x0001828eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cb4u));
    rc_set_nzvc(c, t0, RC_W);

L_18292:
    /* 00018292   2  blt 00018298 */
    c->pc = RC_ADDR(0x00018292u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_18298;

L_18294:
    /* 00018294   4  jsr (000189aa) */
    c->pc = RC_ADDR(0x00018294u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00018298u));
    rc_depth++;
    c->pc = RC_ADDR(0x000189aau);
    return;

L_18298:
    /* 00018298   4  jsr (00019e9c) */
    c->pc = RC_ADDR(0x00018298u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001829cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00019e9cu);
    return;

L_1829C:
    /* 0001829c   4  jsr (ffff83aa,A4) */
    c->pc = RC_ADDR(0x0001829cu);
    rc_step(c, m, 18);
    /* vector 156 */
    rc_push32(c, m, RC_ADDR(0x000182a0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021e00u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021948u);
    return;

L_182A0:
    /* 000182a0   4  bra 00018212 */
    c->pc = RC_ADDR(0x000182a0u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_18212;

L_182A4:
    /* 000182a4   4  jsr (ffff8110,A4) */
    c->pc = RC_ADDR(0x000182a4u);
    rc_step(c, m, 18);
    /* vector 45 */
    rc_push32(c, m, RC_ADDR(0x000182a8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b66u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000ec8au);
    return;

L_182A8:
    /* 000182a8   4  jsr (ffff8284,A4) */
    c->pc = RC_ADDR(0x000182a8u);
    rc_step(c, m, 18);
    /* vector 107 */
    rc_push32(c, m, RC_ADDR(0x000182acu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cdau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00020266u);
    return;

L_182AC:
    /* 000182ac   4  jsr (ffff81be,A4) */
    c->pc = RC_ADDR(0x000182acu);
    rc_step(c, m, 18);
    /* vector 74 */
    rc_push32(c, m, RC_ADDR(0x000182b0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c14u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001b926u);
    return;

L_182B0:
    /* 000182b0   4  tst.w (fffffec8,A4) */
    c->pc = RC_ADDR(0x000182b0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x138u));
    rc_set_nzvc(c, t0, RC_W);

L_182B4:
    /* 000182b4   2  bne 000182c4 */
    c->pc = RC_ADDR(0x000182b4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_182C4;

L_182B6:
    /* 000182b6   4  move.w #7,-(A7) */
    c->pc = RC_ADDR(0x000182b6u);
    rc_step(c, m, 12);
    t0 = 0x00000007u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_182BA:
    /* 000182ba   4  pea (000182ef) */
    c->pc = RC_ADDR(0x000182bau);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000182efu));

L_182BE:
    /* 000182be   4  jsr (00017148) */
    c->pc = RC_ADDR(0x000182beu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000182c2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00017148u);
    return;

L_182C2:
    /* 000182c2   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x000182c2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_182C4:
    /* 000182c4   4  jsr (ffff81a0,A4) */
    c->pc = RC_ADDR(0x000182c4u);
    rc_step(c, m, 18);
    /* vector 69 */
    rc_push32(c, m, RC_ADDR(0x000182c8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bf6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000180aeu);
    return;

L_182C8:
    /* 000182c8   4  jsr (ffff8176,A4) */
    c->pc = RC_ADDR(0x000182c8u);
    rc_step(c, m, 18);
    /* vector 62 */
    rc_push32(c, m, RC_ADDR(0x000182ccu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bccu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00016b34u);
    return;

L_182CC:
    /* 000182cc   4  jsr (ffff81d0,A4) */
    c->pc = RC_ADDR(0x000182ccu);
    rc_step(c, m, 18);
    /* vector 77 */
    rc_push32(c, m, RC_ADDR(0x000182d0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c26u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001ba1au);
    return;

L_182D0:
    /* 000182d0   4  jsr (0001b5aa) */
    c->pc = RC_ADDR(0x000182d0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000182d4u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001b5aau);
    return;

L_182D4:
    /* 000182d4   2  unlk A5 */
    c->pc = RC_ADDR(0x000182d4u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_182D6:
    /* 000182d6   2  rts */
    c->pc = RC_ADDR(0x000182d6u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
