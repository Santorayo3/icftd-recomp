/* fn_00003628 - 164 byte(s), 46 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00003628(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00003628u): goto L_3628;
    case RC_ADDR(0x0000362cu): goto L_362C;
    case RC_ADDR(0x00003630u): goto L_3630;
    case RC_ADDR(0x00003634u): goto L_3634;
    case RC_ADDR(0x00003638u): goto L_3638;
    case RC_ADDR(0x0000363cu): goto L_363C;
    case RC_ADDR(0x00003640u): goto L_3640;
    case RC_ADDR(0x00003644u): goto L_3644;
    case RC_ADDR(0x00003648u): goto L_3648;
    case RC_ADDR(0x0000364cu): goto L_364C;
    case RC_ADDR(0x00003650u): goto L_3650;
    case RC_ADDR(0x00003652u): goto L_3652;
    case RC_ADDR(0x00003656u): goto L_3656;
    case RC_ADDR(0x0000365au): goto L_365A;
    case RC_ADDR(0x0000365eu): goto L_365E;
    case RC_ADDR(0x00003662u): goto L_3662;
    case RC_ADDR(0x00003666u): goto L_3666;
    case RC_ADDR(0x0000366cu): goto L_366C;
    case RC_ADDR(0x0000366eu): goto L_366E;
    case RC_ADDR(0x00003672u): goto L_3672;
    case RC_ADDR(0x00003678u): goto L_3678;
    case RC_ADDR(0x0000367cu): goto L_367C;
    case RC_ADDR(0x00003680u): goto L_3680;
    case RC_ADDR(0x00003686u): goto L_3686;
    case RC_ADDR(0x0000368au): goto L_368A;
    case RC_ADDR(0x0000368cu): goto L_368C;
    case RC_ADDR(0x00003690u): goto L_3690;
    case RC_ADDR(0x00003694u): goto L_3694;
    case RC_ADDR(0x00003698u): goto L_3698;
    case RC_ADDR(0x0000369au): goto L_369A;
    case RC_ADDR(0x0000369cu): goto L_369C;
    case RC_ADDR(0x000036a0u): goto L_36A0;
    case RC_ADDR(0x000036a4u): goto L_36A4;
    case RC_ADDR(0x000036a8u): goto L_36A8;
    case RC_ADDR(0x000036aau): goto L_36AA;
    case RC_ADDR(0x000036aeu): goto L_36AE;
    case RC_ADDR(0x000036b2u): goto L_36B2;
    case RC_ADDR(0x000036b4u): goto L_36B4;
    case RC_ADDR(0x000036b8u): goto L_36B8;
    case RC_ADDR(0x000036bau): goto L_36BA;
    case RC_ADDR(0x000036c0u): goto L_36C0;
    case RC_ADDR(0x000036c2u): goto L_36C2;
    case RC_ADDR(0x000036c4u): goto L_36C4;
    case RC_ADDR(0x000036c6u): goto L_36C6;
    case RC_ADDR(0x000036c8u): goto L_36C8;
    case RC_ADDR(0x000036cau): goto L_36CA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_3628:
    /* 00003628   4  link.w A5,#ffffffce */
    c->pc = RC_ADDR(0x00003628u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x32u;

L_362C:
    /* 0000362c   4  lea (000036cc),A0 */
    c->pc = RC_ADDR(0x0000362cu);
    rc_step(c, m, 8);
    c->a[0] = RC_ADDR(0x000036ccu);

L_3630:
    /* 00003630   4  move.l A0,(ffffffec,A5) */
    c->pc = RC_ADDR(0x00003630u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x14u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3634:
    /* 00003634   4  clr.b (fffffff8,A5) */
    c->pc = RC_ADDR(0x00003634u);
    rc_step(c, m, 16);
    rc_wr8(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_3638:
    /* 00003638   4  lea (ffffffde,A5),A0 */
    c->pc = RC_ADDR(0x00003638u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x22u);

L_363C:
    /* 0000363c   4  move.l A0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x0000363cu);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3640:
    /* 00003640   4  lea (000036ce),A0 */
    c->pc = RC_ADDR(0x00003640u);
    rc_step(c, m, 8);
    c->a[0] = RC_ADDR(0x000036ceu);

L_3644:
    /* 00003644   4  move.l A0,(ffffffde,A5) */
    c->pc = RC_ADDR(0x00003644u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x22u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3648:
    /* 00003648   4  clr.b (ffffffea,A5) */
    c->pc = RC_ADDR(0x00003648u);
    rc_step(c, m, 16);
    rc_wr8(c, m, (c->a[5] - 0x16u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_364C:
    /* 0000364c   4  tst.w (c,A5) */
    c->pc = RC_ADDR(0x0000364cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_set_nzvc(c, t0, RC_W);

L_3650:
    /* 00003650   2  beq 0000366e */
    c->pc = RC_ADDR(0x00003650u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_366E;

L_3652:
    /* 00003652   4  lea (ffffffd0,A5),A0 */
    c->pc = RC_ADDR(0x00003652u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x30u);

L_3656:
    /* 00003656   4  move.l A0,(ffffffe6,A5) */
    c->pc = RC_ADDR(0x00003656u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x1au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_365A:
    /* 0000365a   4  lea (000036d0),A0 */
    c->pc = RC_ADDR(0x0000365au);
    rc_step(c, m, 8);
    c->a[0] = RC_ADDR(0x000036d0u);

L_365E:
    /* 0000365e   4  move.l A0,(ffffffd0,A5) */
    c->pc = RC_ADDR(0x0000365eu);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x30u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3662:
    /* 00003662   4  clr.l (ffffffd8,A5) */
    c->pc = RC_ADDR(0x00003662u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x28u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_3666:
    /* 00003666   6  move.b #3,(fffffffb,A5) */
    c->pc = RC_ADDR(0x00003666u);
    rc_step(c, m, 16);
    t0 = 0x00000003u;
    rc_wr8(c, m, (c->a[5] - 0x5u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_366C:
    /* 0000366c   2  bra 00003678 */
    c->pc = RC_ADDR(0x0000366cu);
    rc_step(c, m, 10);
    goto L_3678;

L_366E:
    /* 0000366e   4  clr.l (ffffffe6,A5) */
    c->pc = RC_ADDR(0x0000366eu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x1au), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_3672:
    /* 00003672   6  move.b #2,(fffffffb,A5) */
    c->pc = RC_ADDR(0x00003672u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr8(c, m, (c->a[5] - 0x5u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_3678:
    /* 00003678   4  lea (ffffffec,A5),A0 */
    c->pc = RC_ADDR(0x00003678u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x14u);

L_367C:
    /* 0000367c   4  move.l A0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000367cu);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3680:
    /* 00003680   6  move.w #1,(ffffffce,A5) */
    c->pc = RC_ADDR(0x00003680u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x32u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3686:
    /* 00003686   4  tst.w (ffffffce,A5) */
    c->pc = RC_ADDR(0x00003686u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x32u));
    rc_set_nzvc(c, t0, RC_W);

L_368A:
    /* 0000368a   2  ble 000036ba */
    c->pc = RC_ADDR(0x0000368au);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_36BA;

L_368C:
    /* 0000368c   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000368cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3690:
    /* 00003690   4  pea (fffffffa,A5) */
    c->pc = RC_ADDR(0x00003690u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x6u));

L_3694:
    /* 00003694   4  jsr (000027d8) */
    c->pc = RC_ADDR(0x00003694u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00003698u));
    rc_depth++;
    c->pc = RC_ADDR(0x000027d8u);
    return;

L_3698:
    /* 00003698   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00003698u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_369A:
    /* 0000369a   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000369au);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_369C:
    /* 0000369c   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000369cu);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_36A0:
    /* 000036a0   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000036a0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_36A4:
    /* 000036a4   4  jsr (000030a6) */
    c->pc = RC_ADDR(0x000036a4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000036a8u));
    rc_depth++;
    c->pc = RC_ADDR(0x000030a6u);
    return;

L_36A8:
    /* 000036a8   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000036a8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_36AA:
    /* 000036aa   4  move.w D0,(ffffffce,A5) */
    c->pc = RC_ADDR(0x000036aau);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x32u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_36AE:
    /* 000036ae   4  tst.w (ffffd5b4,A4) */
    c->pc = RC_ADDR(0x000036aeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a4cu));
    rc_set_nzvc(c, t0, RC_W);

L_36B2:
    /* 000036b2   2  beq 000036b8 */
    c->pc = RC_ADDR(0x000036b2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_36B8;

L_36B4:
    /* 000036b4   4  clr.w (ffffffce,A5) */
    c->pc = RC_ADDR(0x000036b4u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x32u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_36B8:
    /* 000036b8   2  bra 00003686 */
    c->pc = RC_ADDR(0x000036b8u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_3686;

L_36BA:
    /* 000036ba   6  cmpi.w #7,(ffffd728,A4) */
    c->pc = RC_ADDR(0x000036bau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x28d8u));
    rc_cmp(c, RC_W, t0, 0x00000007u);

L_36C0:
    /* 000036c0   2  bne 000036c8 */
    c->pc = RC_ADDR(0x000036c0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_36C8;

L_36C2:
    /* 000036c2   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x000036c2u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_36C4:
    /* 000036c4   2  unlk A5 */
    c->pc = RC_ADDR(0x000036c4u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_36C6:
    /* 000036c6   2  rts */
    c->pc = RC_ADDR(0x000036c6u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_36C8:
    /* 000036c8   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000036c8u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_36CA:
    /* 000036ca   2  bra 000036c4 */
    c->pc = RC_ADDR(0x000036cau);
    rc_step(c, m, 10);
    rc_tick();
    goto L_36C4;

}
