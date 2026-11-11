/* fn_0001042a - 270 byte(s), 73 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001042a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001042au): goto L_1042A;
    case RC_ADDR(0x0001042eu): goto L_1042E;
    case RC_ADDR(0x00010432u): goto L_10432;
    case RC_ADDR(0x00010436u): goto L_10436;
    case RC_ADDR(0x0001043eu): goto L_1043E;
    case RC_ADDR(0x00010440u): goto L_10440;
    case RC_ADDR(0x00010444u): goto L_10444;
    case RC_ADDR(0x00010448u): goto L_10448;
    case RC_ADDR(0x0001044cu): goto L_1044C;
    case RC_ADDR(0x00010450u): goto L_10450;
    case RC_ADDR(0x00010454u): goto L_10454;
    case RC_ADDR(0x00010458u): goto L_10458;
    case RC_ADDR(0x0001045cu): goto L_1045C;
    case RC_ADDR(0x00010460u): goto L_10460;
    case RC_ADDR(0x00010464u): goto L_10464;
    case RC_ADDR(0x00010468u): goto L_10468;
    case RC_ADDR(0x0001046cu): goto L_1046C;
    case RC_ADDR(0x00010470u): goto L_10470;
    case RC_ADDR(0x00010474u): goto L_10474;
    case RC_ADDR(0x00010478u): goto L_10478;
    case RC_ADDR(0x0001047cu): goto L_1047C;
    case RC_ADDR(0x00010480u): goto L_10480;
    case RC_ADDR(0x00010486u): goto L_10486;
    case RC_ADDR(0x0001048au): goto L_1048A;
    case RC_ADDR(0x0001048eu): goto L_1048E;
    case RC_ADDR(0x00010492u): goto L_10492;
    case RC_ADDR(0x00010496u): goto L_10496;
    case RC_ADDR(0x00010498u): goto L_10498;
    case RC_ADDR(0x0001049au): goto L_1049A;
    case RC_ADDR(0x0001049cu): goto L_1049C;
    case RC_ADDR(0x0001049eu): goto L_1049E;
    case RC_ADDR(0x000104a2u): goto L_104A2;
    case RC_ADDR(0x000104a6u): goto L_104A6;
    case RC_ADDR(0x000104aau): goto L_104AA;
    case RC_ADDR(0x000104acu): goto L_104AC;
    case RC_ADDR(0x000104aeu): goto L_104AE;
    case RC_ADDR(0x000104b0u): goto L_104B0;
    case RC_ADDR(0x000104b2u): goto L_104B2;
    case RC_ADDR(0x000104b4u): goto L_104B4;
    case RC_ADDR(0x000104b8u): goto L_104B8;
    case RC_ADDR(0x000104bcu): goto L_104BC;
    case RC_ADDR(0x000104c0u): goto L_104C0;
    case RC_ADDR(0x000104c2u): goto L_104C2;
    case RC_ADDR(0x000104c6u): goto L_104C6;
    case RC_ADDR(0x000104c8u): goto L_104C8;
    case RC_ADDR(0x000104ccu): goto L_104CC;
    case RC_ADDR(0x000104d0u): goto L_104D0;
    case RC_ADDR(0x000104d4u): goto L_104D4;
    case RC_ADDR(0x000104d8u): goto L_104D8;
    case RC_ADDR(0x000104dcu): goto L_104DC;
    case RC_ADDR(0x000104e0u): goto L_104E0;
    case RC_ADDR(0x000104e4u): goto L_104E4;
    case RC_ADDR(0x000104e8u): goto L_104E8;
    case RC_ADDR(0x000104ecu): goto L_104EC;
    case RC_ADDR(0x000104f0u): goto L_104F0;
    case RC_ADDR(0x000104f4u): goto L_104F4;
    case RC_ADDR(0x000104f8u): goto L_104F8;
    case RC_ADDR(0x000104fcu): goto L_104FC;
    case RC_ADDR(0x00010500u): goto L_10500;
    case RC_ADDR(0x00010504u): goto L_10504;
    case RC_ADDR(0x00010508u): goto L_10508;
    case RC_ADDR(0x0001050cu): goto L_1050C;
    case RC_ADDR(0x00010510u): goto L_10510;
    case RC_ADDR(0x00010514u): goto L_10514;
    case RC_ADDR(0x00010518u): goto L_10518;
    case RC_ADDR(0x0001051cu): goto L_1051C;
    case RC_ADDR(0x00010520u): goto L_10520;
    case RC_ADDR(0x00010524u): goto L_10524;
    case RC_ADDR(0x00010528u): goto L_10528;
    case RC_ADDR(0x0001052cu): goto L_1052C;
    case RC_ADDR(0x00010530u): goto L_10530;
    case RC_ADDR(0x00010532u): goto L_10532;
    case RC_ADDR(0x00010534u): goto L_10534;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1042A:
    /* 0001042a   4  link.w A5,#ffffffee */
    c->pc = RC_ADDR(0x0001042au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x12u;

L_1042E:
    /* 0001042e   4  clr.l (fffffff0,A5) */
    c->pc = RC_ADDR(0x0001042eu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x10u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_10432:
    /* 00010432   4  addq.l #1,(fffffff0,A5) */
    c->pc = RC_ADDR(0x00010432u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x10u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_10436:
    /* 00010436   8  cmpi.l #c350,(fffffff0,A5) */
    c->pc = RC_ADDR(0x00010436u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    rc_cmp(c, RC_L, t0, 0x0000c350u);

L_1043E:
    /* 0001043e   2  blt 00010432 */
    c->pc = RC_ADDR(0x0001043eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_10432; }

L_10440:
    /* 00010440   4  jsr (ffff801a,A4) */
    c->pc = RC_ADDR(0x00010440u);
    rc_step(c, m, 18);
    /* vector 4 */
    rc_push32(c, m, RC_ADDR(0x00010444u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021a70u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000007f4u);
    return;

L_10444:
    /* 00010444   4  move.w #4,-(A7) */
    c->pc = RC_ADDR(0x00010444u);
    rc_step(c, m, 12);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_10448:
    /* 00010448   4  pea (0000005f).l */
    c->pc = RC_ADDR(0x00010448u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000005fu);

L_1044C:
    /* 0001044c   4  pea (00010538) */
    c->pc = RC_ADDR(0x0001044cu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00010538u));

L_10450:
    /* 00010450   4  jsr (ffff8026,A4) */
    c->pc = RC_ADDR(0x00010450u);
    rc_step(c, m, 18);
    /* vector 6 */
    rc_push32(c, m, RC_ADDR(0x00010454u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021a7cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000093au);
    return;

L_10454:
    /* 00010454   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00010454u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_10458:
    /* 00010458   4  move.w #4,-(A7) */
    c->pc = RC_ADDR(0x00010458u);
    rc_step(c, m, 12);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1045C:
    /* 0001045c   4  pea (00000069).l */
    c->pc = RC_ADDR(0x0001045cu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000069u);

L_10460:
    /* 00010460   4  pea (00010560) */
    c->pc = RC_ADDR(0x00010460u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00010560u));

L_10464:
    /* 00010464   4  jsr (ffff8026,A4) */
    c->pc = RC_ADDR(0x00010464u);
    rc_step(c, m, 18);
    /* vector 6 */
    rc_push32(c, m, RC_ADDR(0x00010468u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021a7cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000093au);
    return;

L_10468:
    /* 00010468   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00010468u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_1046C:
    /* 0001046c   4  move.w #4,-(A7) */
    c->pc = RC_ADDR(0x0001046cu);
    rc_step(c, m, 12);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_10470:
    /* 00010470   4  pea (00000073).l */
    c->pc = RC_ADDR(0x00010470u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000073u);

L_10474:
    /* 00010474   4  pea (00010590) */
    c->pc = RC_ADDR(0x00010474u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00010590u));

L_10478:
    /* 00010478   4  jsr (ffff8026,A4) */
    c->pc = RC_ADDR(0x00010478u);
    rc_step(c, m, 18);
    /* vector 6 */
    rc_push32(c, m, RC_ADDR(0x0001047cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021a7cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000093au);
    return;

L_1047C:
    /* 0001047c   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001047cu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_10480:
    /* 00010480   6  move.w #1,(ffffb02e,A4) */
    c->pc = RC_ADDR(0x00010480u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x4fd2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_10486:
    /* 00010486   4  jsr (000101e4) */
    c->pc = RC_ADDR(0x00010486u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001048au));
    rc_depth++;
    c->pc = RC_ADDR(0x000101e4u);
    return;

L_1048A:
    /* 0001048a   4  move.w D0,(ffffffee,A5) */
    c->pc = RC_ADDR(0x0001048au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1048E:
    /* 0001048e   4  jsr (ffff8020,A4) */
    c->pc = RC_ADDR(0x0001048eu);
    rc_step(c, m, 18);
    /* vector 5 */
    rc_push32(c, m, RC_ADDR(0x00010492u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021a76u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000008d6u);
    return;

L_10492:
    /* 00010492   4  tst.w (ffffffee,A5) */
    c->pc = RC_ADDR(0x00010492u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_set_nzvc(c, t0, RC_W);

L_10496:
    /* 00010496   2  bne 0001049e */
    c->pc = RC_ADDR(0x00010496u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1049E;

L_10498:
    /* 00010498   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00010498u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1049A:
    /* 0001049a   2  unlk A5 */
    c->pc = RC_ADDR(0x0001049au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1049C:
    /* 0001049c   2  rts */
    c->pc = RC_ADDR(0x0001049cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_1049E:
    /* 0001049e   4  move.l (ffffa210,A4),-(A7) */
    c->pc = RC_ADDR(0x0001049eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5df0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_104A2:
    /* 000104a2   4  pea (000105c1) */
    c->pc = RC_ADDR(0x000104a2u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000105c1u));

L_104A6:
    /* 000104a6   4  jsr (ffff8014,A4) */
    c->pc = RC_ADDR(0x000104a6u);
    rc_step(c, m, 18);
    /* vector 3 */
    rc_push32(c, m, RC_ADDR(0x000104aau));
    rc_depth++;
    c->pc = RC_ADDR(0x00021a6au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000050eu);
    return;

L_104AA:
    /* 000104aa   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000104aau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_104AC:
    /* 000104ac   2  tst.w D0 */
    c->pc = RC_ADDR(0x000104acu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_104AE:
    /* 000104ae   2  bne 000104b4 */
    c->pc = RC_ADDR(0x000104aeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_104B4;

L_104B0:
    /* 000104b0   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x000104b0u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_104B2:
    /* 000104b2   2  bra 0001049a */
    c->pc = RC_ADDR(0x000104b2u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1049A;

L_104B4:
    /* 000104b4   4  pea (000003ee).l */
    c->pc = RC_ADDR(0x000104b4u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000003eeu);

L_104B8:
    /* 000104b8   4  move.l (ffffa210,A4),-(A7) */
    c->pc = RC_ADDR(0x000104b8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5df0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_104BC:
    /* 000104bc   4  jsr (ffff8290,A4) */
    c->pc = RC_ADDR(0x000104bcu);
    rc_step(c, m, 18);
    /* vector 109 */
    rc_push32(c, m, RC_ADDR(0x000104c0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ce6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00020476u);
    return;

L_104C0:
    /* 000104c0   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000104c0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_104C2:
    /* 000104c2   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000104c2u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_104C6:
    /* 000104c6   2  beq 00010532 */
    c->pc = RC_ADDR(0x000104c6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_10532;

L_104C8:
    /* 000104c8   4  lea (ffff83c2,A4),A0 */
    c->pc = RC_ADDR(0x000104c8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7c3eu);

L_104CC:
    /* 000104cc   4  move.l A0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x000104ccu);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_104D0:
    /* 000104d0   4  lea (ffff843a,A4),A0 */
    c->pc = RC_ADDR(0x000104d0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7bc6u);

L_104D4:
    /* 000104d4   4  move.l A0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x000104d4u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_104D8:
    /* 000104d8   4  movea.l (fffffff4,A5),A0 */
    c->pc = RC_ADDR(0x000104d8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_104DC:
    /* 000104dc   4  suba.l (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x000104dcu);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] -= t0;

L_104E0:
    /* 000104e0   4  move.l A0,(fffffff0,A5) */
    c->pc = RC_ADDR(0x000104e0u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_104E4:
    /* 000104e4   4  move.l (fffffff0,A5),-(A7) */
    c->pc = RC_ADDR(0x000104e4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_104E8:
    /* 000104e8   4  move.l (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x000104e8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_104EC:
    /* 000104ec   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x000104ecu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_104F0:
    /* 000104f0   4  jsr (ffff8326,A4) */
    c->pc = RC_ADDR(0x000104f0u);
    rc_step(c, m, 18);
    /* vector 134 */
    rc_push32(c, m, RC_ADDR(0x000104f4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d7cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000214a6u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000214aau);
    return;

L_104F4:
    /* 000104f4   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000104f4u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_104F8:
    /* 000104f8   4  lea (ffffce16,A4),A0 */
    c->pc = RC_ADDR(0x000104f8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x31eau);

L_104FC:
    /* 000104fc   4  move.l A0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x000104fcu);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10500:
    /* 00010500   4  lea (fffffe3a,A4),A0 */
    c->pc = RC_ADDR(0x00010500u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x1c6u);

L_10504:
    /* 00010504   4  move.l A0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x00010504u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10508:
    /* 00010508   4  movea.l (fffffff4,A5),A0 */
    c->pc = RC_ADDR(0x00010508u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_1050C:
    /* 0001050c   4  suba.l (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x0001050cu);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] -= t0;

L_10510:
    /* 00010510   4  move.l A0,(fffffff0,A5) */
    c->pc = RC_ADDR(0x00010510u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10514:
    /* 00010514   4  move.l (fffffff0,A5),-(A7) */
    c->pc = RC_ADDR(0x00010514u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10518:
    /* 00010518   4  move.l (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x00010518u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1051C:
    /* 0001051c   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0001051cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10520:
    /* 00010520   4  jsr (ffff8326,A4) */
    c->pc = RC_ADDR(0x00010520u);
    rc_step(c, m, 18);
    /* vector 134 */
    rc_push32(c, m, RC_ADDR(0x00010524u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d7cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000214a6u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000214aau);
    return;

L_10524:
    /* 00010524   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00010524u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_10528:
    /* 00010528   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00010528u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1052C:
    /* 0001052c   4  jsr (ffff8296,A4) */
    c->pc = RC_ADDR(0x0001052cu);
    rc_step(c, m, 18);
    /* vector 110 */
    rc_push32(c, m, RC_ADDR(0x00010530u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cecu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00020490u);
    return;

L_10530:
    /* 00010530   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00010530u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_10532:
    /* 00010532   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00010532u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_10534:
    /* 00010534   4  bra 0001049a */
    c->pc = RC_ADDR(0x00010534u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1049A;

}
