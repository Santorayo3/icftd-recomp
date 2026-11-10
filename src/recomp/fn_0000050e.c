/* fn_0000050e - 308 byte(s), 84 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000050e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x0000050eu): goto L_50E;
    case RC_ADDR(0x00000512u): goto L_512;
    case RC_ADDR(0x00000518u): goto L_518;
    case RC_ADDR(0x00000520u): goto L_520;
    case RC_ADDR(0x00000526u): goto L_526;
    case RC_ADDR(0x0000052cu): goto L_52C;
    case RC_ADDR(0x00000530u): goto L_530;
    case RC_ADDR(0x00000534u): goto L_534;
    case RC_ADDR(0x00000536u): goto L_536;
    case RC_ADDR(0x0000053au): goto L_53A;
    case RC_ADDR(0x0000053eu): goto L_53E;
    case RC_ADDR(0x00000542u): goto L_542;
    case RC_ADDR(0x00000544u): goto L_544;
    case RC_ADDR(0x00000548u): goto L_548;
    case RC_ADDR(0x0000054cu): goto L_54C;
    case RC_ADDR(0x00000550u): goto L_550;
    case RC_ADDR(0x00000554u): goto L_554;
    case RC_ADDR(0x00000556u): goto L_556;
    case RC_ADDR(0x00000558u): goto L_558;
    case RC_ADDR(0x0000055au): goto L_55A;
    case RC_ADDR(0x0000055cu): goto L_55C;
    case RC_ADDR(0x0000055eu): goto L_55E;
    case RC_ADDR(0x00000562u): goto L_562;
    case RC_ADDR(0x00000566u): goto L_566;
    case RC_ADDR(0x0000056au): goto L_56A;
    case RC_ADDR(0x0000056cu): goto L_56C;
    case RC_ADDR(0x00000570u): goto L_570;
    case RC_ADDR(0x00000574u): goto L_574;
    case RC_ADDR(0x00000578u): goto L_578;
    case RC_ADDR(0x0000057cu): goto L_57C;
    case RC_ADDR(0x00000580u): goto L_580;
    case RC_ADDR(0x00000586u): goto L_586;
    case RC_ADDR(0x0000058au): goto L_58A;
    case RC_ADDR(0x0000058eu): goto L_58E;
    case RC_ADDR(0x00000592u): goto L_592;
    case RC_ADDR(0x00000596u): goto L_596;
    case RC_ADDR(0x0000059au): goto L_59A;
    case RC_ADDR(0x0000059eu): goto L_59E;
    case RC_ADDR(0x000005a0u): goto L_5A0;
    case RC_ADDR(0x000005a4u): goto L_5A4;
    case RC_ADDR(0x000005a6u): goto L_5A6;
    case RC_ADDR(0x000005a8u): goto L_5A8;
    case RC_ADDR(0x000005acu): goto L_5AC;
    case RC_ADDR(0x000005b0u): goto L_5B0;
    case RC_ADDR(0x000005b4u): goto L_5B4;
    case RC_ADDR(0x000005b8u): goto L_5B8;
    case RC_ADDR(0x000005bcu): goto L_5BC;
    case RC_ADDR(0x000005c0u): goto L_5C0;
    case RC_ADDR(0x000005c4u): goto L_5C4;
    case RC_ADDR(0x000005c8u): goto L_5C8;
    case RC_ADDR(0x000005ccu): goto L_5CC;
    case RC_ADDR(0x000005d0u): goto L_5D0;
    case RC_ADDR(0x000005d4u): goto L_5D4;
    case RC_ADDR(0x000005d8u): goto L_5D8;
    case RC_ADDR(0x000005dcu): goto L_5DC;
    case RC_ADDR(0x000005e0u): goto L_5E0;
    case RC_ADDR(0x000005e4u): goto L_5E4;
    case RC_ADDR(0x000005e8u): goto L_5E8;
    case RC_ADDR(0x000005ecu): goto L_5EC;
    case RC_ADDR(0x000005f0u): goto L_5F0;
    case RC_ADDR(0x000005f4u): goto L_5F4;
    case RC_ADDR(0x000005f8u): goto L_5F8;
    case RC_ADDR(0x000005fcu): goto L_5FC;
    case RC_ADDR(0x00000600u): goto L_600;
    case RC_ADDR(0x00000604u): goto L_604;
    case RC_ADDR(0x00000608u): goto L_608;
    case RC_ADDR(0x0000060au): goto L_60A;
    case RC_ADDR(0x0000060eu): goto L_60E;
    case RC_ADDR(0x00000610u): goto L_610;
    case RC_ADDR(0x00000614u): goto L_614;
    case RC_ADDR(0x00000618u): goto L_618;
    case RC_ADDR(0x0000061au): goto L_61A;
    case RC_ADDR(0x0000061cu): goto L_61C;
    case RC_ADDR(0x00000620u): goto L_620;
    case RC_ADDR(0x00000622u): goto L_622;
    case RC_ADDR(0x00000624u): goto L_624;
    case RC_ADDR(0x00000626u): goto L_626;
    case RC_ADDR(0x00000628u): goto L_628;
    case RC_ADDR(0x0000062eu): goto L_62E;
    case RC_ADDR(0x00000632u): goto L_632;
    case RC_ADDR(0x00000634u): goto L_634;
    case RC_ADDR(0x00000638u): goto L_638;
    case RC_ADDR(0x0000063au): goto L_63A;
    case RC_ADDR(0x0000063eu): goto L_63E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_50E:
    /* 0000050e   4  link.w A5,#fffffffa */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000050eu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x6u;

L_512:
    /* 00000512   6  move.w #1,(ffff83d0,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000512u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7c30u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_518:
    /* 00000518   8  move.l #12d687,(fffffe78,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000518u);
    t0 = 0x0012d687u;
    rc_wr32(c, m, (c->a[4] - 0x188u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_520:
    /* 00000520   6  move.w #1,(fffffffa,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000520u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_526:
    /* 00000526   6  pea (00010001).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000526u);
    rc_push32(c, m, RC_ADDR(0x00010001u));

L_52C:
    /* 0000052c   4  pea (00000024).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000052cu);
    rc_push32(c, m, 0x00000024u);

L_530:
    /* 00000530   4  jsr (ffff8338,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000530u);
    /* vector 137: exec.library -198 */
    c->pc = RC_ADDR(0x00000534u);
    rc_os_call(c, m, 0, -198);

L_534:
    /* 00000534   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000534u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_536:
    /* 00000536   4  move.l D0,(fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000536u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_53A:
    /* 0000053a   4  tst.w (fffffffa,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000053au);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_set_nzvc(c, t0, RC_W);

L_53E:
    /* 0000053e   4  beq 0000063e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000053eu);
    if (rc_cond(c, 7)) goto L_63E;

L_542:
    /* 00000542   2  clr.w -(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000542u);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_544:
    /* 00000544   4  move.l (c,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000544u);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_548:
    /* 00000548   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000548u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_54C:
    /* 0000054c   4  jsr (000002f4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000054cu);
    rc_push32(c, m, RC_ADDR(0x00000550u));
    rc_depth++;
    c->pc = RC_ADDR(0x000002f4u);
    return;

L_550:
    /* 00000550   4  lea (a,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000550u);
    c->a[7] = (c->a[7] + 0xau);

L_554:
    /* 00000554   2  tst.w D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000554u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_556:
    /* 00000556   2  bne 0000055e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000556u);
    if (rc_cond(c, 6)) goto L_55E;

L_558:
    /* 00000558   2  moveq #0,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000558u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_55A:
    /* 0000055a   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000055au);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_55C:
    /* 0000055c   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000055cu);
    rc_ret(c, m);
    return;

L_55E:
    /* 0000055e   4  move.l (fffffffc,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000055eu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_562:
    /* 00000562   4  move.l (fffffe4c,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000562u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x1b4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_566:
    /* 00000566   4  jsr (ffff8308,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000566u);
    /* vector 129 */
    rc_push32(c, m, RC_ADDR(0x0000056au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021434u);
    return;

L_56A:
    /* 0000056a   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000056au);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_56C:
    /* 0000056c   4  movea.l (fffffffc,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000056cu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_570:
    /* 00000570   4  move.l (8,A0),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000570u);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_574:
    /* 00000574   4  cmp.l (fffffe78,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000574u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x188u));
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_578:
    /* 00000578   4  beq 0000063a */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000578u);
    if (rc_cond(c, 7)) goto L_63A;

L_57C:
    /* 0000057c   4  movea.l (fffffffc,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000057cu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_580:
    /* 00000580   6  move.l (8,A0),(fffffe78,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000580u);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    rc_wr32(c, m, (c->a[4] - 0x188u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_586:
    /* 00000586   4  move.l (fffffe78,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000586u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x188u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_58A:
    /* 0000058a   4  bra 00000628 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000058au);
    goto L_628;

L_58E:
    /* 0000058e   4  jsr (000008d6) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000058eu);
    rc_push32(c, m, RC_ADDR(0x00000592u));
    rc_depth++;
    c->pc = RC_ADDR(0x000008d6u);
    return;

L_592:
    /* 00000592   4  pea (00000024).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000592u);
    rc_push32(c, m, 0x00000024u);

L_596:
    /* 00000596   4  move.l (fffffffc,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000596u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_59A:
    /* 0000059a   4  jsr (ffff8344,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000059au);
    /* vector 139: exec.library -210 */
    c->pc = RC_ADDR(0x0000059eu);
    rc_os_call(c, m, 0, -210);

L_59E:
    /* 0000059e   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000059eu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_5A0:
    /* 000005a0   4  clr.w (ffff83d0,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000005a0u);
    rc_wr16(c, m, (c->a[4] - 0x7c30u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5A4:
    /* 000005a4   2  moveq #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000005a4u);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_5A6:
    /* 000005a6   2  bra 0000055a */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000005a6u);
    rc_tick();
    goto L_55A;

L_5A8:
    /* 000005a8   4  jsr (000007f4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000005a8u);
    rc_push32(c, m, RC_ADDR(0x000005acu));
    rc_depth++;
    c->pc = RC_ADDR(0x000007f4u);
    return;

L_5AC:
    /* 000005ac   4  move.w #4,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000005acu);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5B0:
    /* 000005b0   4  pea (0000004b).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000005b0u);
    rc_push32(c, m, 0x0000004bu);

L_5B4:
    /* 000005b4   4  pea (00000642) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000005b4u);
    rc_push32(c, m, RC_ADDR(0x00000642u));

L_5B8:
    /* 000005b8   4  jsr (0000093a) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000005b8u);
    rc_push32(c, m, RC_ADDR(0x000005bcu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000093au);
    return;

L_5BC:
    /* 000005bc   4  lea (a,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000005bcu);
    c->a[7] = (c->a[7] + 0xau);

L_5C0:
    /* 000005c0   4  move.w #4,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000005c0u);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5C4:
    /* 000005c4   4  pea (0000005a).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000005c4u);
    rc_push32(c, m, 0x0000005au);

L_5C8:
    /* 000005c8   4  pea (fffffe50,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000005c8u);
    rc_push32(c, m, (c->a[4] - 0x1b0u));

L_5CC:
    /* 000005cc   4  jsr (0000093a) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000005ccu);
    rc_push32(c, m, RC_ADDR(0x000005d0u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000093au);
    return;

L_5D0:
    /* 000005d0   4  lea (a,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000005d0u);
    c->a[7] = (c->a[7] + 0xau);

L_5D4:
    /* 000005d4   4  move.w #4,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000005d4u);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5D8:
    /* 000005d8   4  pea (00000069).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000005d8u);
    rc_push32(c, m, 0x00000069u);

L_5DC:
    /* 000005dc   4  pea (0000064c) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000005dcu);
    rc_push32(c, m, RC_ADDR(0x0000064cu));

L_5E0:
    /* 000005e0   4  jsr (0000093a) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000005e0u);
    rc_push32(c, m, RC_ADDR(0x000005e4u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000093au);
    return;

L_5E4:
    /* 000005e4   4  lea (a,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000005e4u);
    c->a[7] = (c->a[7] + 0xau);

L_5E8:
    /* 000005e8   4  move.w #4,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000005e8u);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5EC:
    /* 000005ec   4  pea (00000078).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000005ecu);
    rc_push32(c, m, 0x00000078u);

L_5F0:
    /* 000005f0   4  pea (00000660) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000005f0u);
    rc_push32(c, m, RC_ADDR(0x00000660u));

L_5F4:
    /* 000005f4   4  jsr (0000093a) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000005f4u);
    rc_push32(c, m, RC_ADDR(0x000005f8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000093au);
    return;

L_5F8:
    /* 000005f8   4  lea (a,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000005f8u);
    c->a[7] = (c->a[7] + 0xau);

L_5FC:
    /* 000005fc   4  pea (fffffffe).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000005fcu);
    rc_push32(c, m, 0xfffffffeu);

L_600:
    /* 00000600   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000600u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_604:
    /* 00000604   4  jsr (ffff830e,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000604u);
    /* vector 130 */
    rc_push32(c, m, RC_ADDR(0x00000608u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002144eu);
    return;

L_608:
    /* 00000608   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000608u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_60A:
    /* 0000060a   4  move.l D0,(fffffe4c,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000060au);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x1b4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_60E:
    /* 0000060e   2  beq 00000624 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000060eu);
    if (rc_cond(c, 7)) goto L_624;

L_610:
    /* 00000610   4  move.l (fffffe4c,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000610u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x1b4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_614:
    /* 00000614   4  jsr (ffff82f6,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000614u);
    /* vector 126 */
    rc_push32(c, m, RC_ADDR(0x00000618u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021410u);
    return;

L_618:
    /* 00000618   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000618u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_61A:
    /* 0000061a   2  move.l D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000061au);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_61C:
    /* 0000061c   4  jsr (ffff8320,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000061cu);
    /* vector 133 */
    rc_push32(c, m, RC_ADDR(0x00000620u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002149au);
    return;

L_620:
    /* 00000620   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000620u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_622:
    /* 00000622   2  bra 000005fc */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000622u);
    rc_tick();
    goto L_5FC;

L_624:
    /* 00000624   2  bra 0000063a */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000624u);
    goto L_63A;

L_626:
    /* 00000626   2  bra 0000063a */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000626u);
    goto L_63A;

L_628:
    /* 00000628   6  sub.l #50,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000628u);
    t0 = 0x00000050u;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_62E:
    /* 0000062e   4  beq 000005a8 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000062eu);
    if (rc_cond(c, 7)) { rc_tick(); goto L_5A8; }

L_632:
    /* 00000632   2  subq.l #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000632u);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_L, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_634:
    /* 00000634   4  beq 0000058e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000634u);
    if (rc_cond(c, 7)) { rc_tick(); goto L_58E; }

L_638:
    /* 00000638   2  bra 00000626 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000638u);
    rc_tick();
    goto L_626;

L_63A:
    /* 0000063a   4  bra 0000053a */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000063au);
    rc_tick();
    goto L_53A;

L_63E:
    /* 0000063e   4  bra 0000055a */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000063eu);
    rc_tick();
    goto L_55A;

}
