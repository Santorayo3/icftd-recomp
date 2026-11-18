/* fn_000008a4 - 326 byte(s), 89 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000008a4(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x000008a4u): goto L_8A4;
    case RC_ADDR(0x000008a8u): goto L_8A8;
    case RC_ADDR(0x000008aeu): goto L_8AE;
    case RC_ADDR(0x000008b6u): goto L_8B6;
    case RC_ADDR(0x000008bcu): goto L_8BC;
    case RC_ADDR(0x000008c2u): goto L_8C2;
    case RC_ADDR(0x000008c6u): goto L_8C6;
    case RC_ADDR(0x000008cau): goto L_8CA;
    case RC_ADDR(0x000008ccu): goto L_8CC;
    case RC_ADDR(0x000008d0u): goto L_8D0;
    case RC_ADDR(0x000008d4u): goto L_8D4;
    case RC_ADDR(0x000008d8u): goto L_8D8;
    case RC_ADDR(0x000008dcu): goto L_8DC;
    case RC_ADDR(0x000008deu): goto L_8DE;
    case RC_ADDR(0x000008e2u): goto L_8E2;
    case RC_ADDR(0x000008e6u): goto L_8E6;
    case RC_ADDR(0x000008eau): goto L_8EA;
    case RC_ADDR(0x000008eeu): goto L_8EE;
    case RC_ADDR(0x000008f0u): goto L_8F0;
    case RC_ADDR(0x000008f2u): goto L_8F2;
    case RC_ADDR(0x000008f6u): goto L_8F6;
    case RC_ADDR(0x000008fau): goto L_8FA;
    case RC_ADDR(0x000008feu): goto L_8FE;
    case RC_ADDR(0x00000900u): goto L_900;
    case RC_ADDR(0x00000902u): goto L_902;
    case RC_ADDR(0x00000904u): goto L_904;
    case RC_ADDR(0x00000906u): goto L_906;
    case RC_ADDR(0x0000090au): goto L_90A;
    case RC_ADDR(0x0000090eu): goto L_90E;
    case RC_ADDR(0x00000912u): goto L_912;
    case RC_ADDR(0x00000914u): goto L_914;
    case RC_ADDR(0x00000918u): goto L_918;
    case RC_ADDR(0x0000091cu): goto L_91C;
    case RC_ADDR(0x00000920u): goto L_920;
    case RC_ADDR(0x00000924u): goto L_924;
    case RC_ADDR(0x00000928u): goto L_928;
    case RC_ADDR(0x0000092eu): goto L_92E;
    case RC_ADDR(0x00000932u): goto L_932;
    case RC_ADDR(0x00000936u): goto L_936;
    case RC_ADDR(0x0000093au): goto L_93A;
    case RC_ADDR(0x0000093eu): goto L_93E;
    case RC_ADDR(0x00000942u): goto L_942;
    case RC_ADDR(0x00000946u): goto L_946;
    case RC_ADDR(0x0000094au): goto L_94A;
    case RC_ADDR(0x0000094cu): goto L_94C;
    case RC_ADDR(0x0000094eu): goto L_94E;
    case RC_ADDR(0x00000950u): goto L_950;
    case RC_ADDR(0x00000954u): goto L_954;
    case RC_ADDR(0x00000958u): goto L_958;
    case RC_ADDR(0x0000095cu): goto L_95C;
    case RC_ADDR(0x00000960u): goto L_960;
    case RC_ADDR(0x00000964u): goto L_964;
    case RC_ADDR(0x00000968u): goto L_968;
    case RC_ADDR(0x0000096cu): goto L_96C;
    case RC_ADDR(0x00000970u): goto L_970;
    case RC_ADDR(0x00000974u): goto L_974;
    case RC_ADDR(0x00000978u): goto L_978;
    case RC_ADDR(0x0000097cu): goto L_97C;
    case RC_ADDR(0x00000980u): goto L_980;
    case RC_ADDR(0x00000984u): goto L_984;
    case RC_ADDR(0x00000988u): goto L_988;
    case RC_ADDR(0x0000098cu): goto L_98C;
    case RC_ADDR(0x00000990u): goto L_990;
    case RC_ADDR(0x00000994u): goto L_994;
    case RC_ADDR(0x00000998u): goto L_998;
    case RC_ADDR(0x0000099cu): goto L_99C;
    case RC_ADDR(0x000009a0u): goto L_9A0;
    case RC_ADDR(0x000009a4u): goto L_9A4;
    case RC_ADDR(0x000009a8u): goto L_9A8;
    case RC_ADDR(0x000009acu): goto L_9AC;
    case RC_ADDR(0x000009b0u): goto L_9B0;
    case RC_ADDR(0x000009b2u): goto L_9B2;
    case RC_ADDR(0x000009b6u): goto L_9B6;
    case RC_ADDR(0x000009b8u): goto L_9B8;
    case RC_ADDR(0x000009bcu): goto L_9BC;
    case RC_ADDR(0x000009c0u): goto L_9C0;
    case RC_ADDR(0x000009c2u): goto L_9C2;
    case RC_ADDR(0x000009c4u): goto L_9C4;
    case RC_ADDR(0x000009c8u): goto L_9C8;
    case RC_ADDR(0x000009cau): goto L_9CA;
    case RC_ADDR(0x000009ccu): goto L_9CC;
    case RC_ADDR(0x000009ceu): goto L_9CE;
    case RC_ADDR(0x000009d0u): goto L_9D0;
    case RC_ADDR(0x000009d6u): goto L_9D6;
    case RC_ADDR(0x000009dau): goto L_9DA;
    case RC_ADDR(0x000009dcu): goto L_9DC;
    case RC_ADDR(0x000009e0u): goto L_9E0;
    case RC_ADDR(0x000009e2u): goto L_9E2;
    case RC_ADDR(0x000009e6u): goto L_9E6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_8A4:
    /* 000008a4   4  link.w A5,#fffffffa */
    c->pc = RC_ADDR(0x000008a4u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x6u;

L_8A8:
    /* 000008a8   6  move.w #1,(ffff83ea,A4) */
    c->pc = RC_ADDR(0x000008a8u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7c16u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_8AE:
    /* 000008ae   8  move.l #12d687,(7f2,A4) */
    c->pc = RC_ADDR(0x000008aeu);
    rc_step(c, m, 24);
    t0 = 0x0012d687u;
    rc_wr32(c, m, (c->a[4] + 0x7f2u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_8B6:
    /* 000008b6   6  move.w #1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x000008b6u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_8BC:
    /* 000008bc   6  pea (00010001).l */
    c->pc = RC_ADDR(0x000008bcu);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010001u);

L_8C2:
    /* 000008c2   4  pea (00000024).l */
    c->pc = RC_ADDR(0x000008c2u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000024u);

L_8C6:
    /* 000008c6   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x000008c6u);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x000008cau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_8CA:
    /* 000008ca   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000008cau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_8CC:
    /* 000008cc   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000008ccu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_8D0:
    /* 000008d0   4  beq 000009e6 */
    c->pc = RC_ADDR(0x000008d0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_9E6;

L_8D4:
    /* 000008d4   4  tst.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x000008d4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_set_nzvc(c, t0, RC_W);

L_8D8:
    /* 000008d8   4  beq 000009e6 */
    c->pc = RC_ADDR(0x000008d8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_9E6;

L_8DC:
    /* 000008dc   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x000008dcu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_8DE:
    /* 000008de   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x000008deu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_8E2:
    /* 000008e2   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000008e2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_8E6:
    /* 000008e6   4  jsr (0000068a) */
    c->pc = RC_ADDR(0x000008e6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000008eau));
    rc_depth++;
    c->pc = RC_ADDR(0x0000068au);
    return;

L_8EA:
    /* 000008ea   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x000008eau);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_8EE:
    /* 000008ee   2  tst.w D0 */
    c->pc = RC_ADDR(0x000008eeu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_8F0:
    /* 000008f0   2  bne 00000906 */
    c->pc = RC_ADDR(0x000008f0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_906;

L_8F2:
    /* 000008f2   4  pea (00000024).l */
    c->pc = RC_ADDR(0x000008f2u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000024u);

L_8F6:
    /* 000008f6   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x000008f6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_8FA:
    /* 000008fa   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x000008fau);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x000008feu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_8FE:
    /* 000008fe   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000008feu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_900:
    /* 00000900   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00000900u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_902:
    /* 00000902   2  unlk A5 */
    c->pc = RC_ADDR(0x00000902u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_904:
    /* 00000904   2  rts */
    c->pc = RC_ADDR(0x00000904u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_906:
    /* 00000906   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00000906u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_90A:
    /* 0000090a   4  move.l (7c6,A4),-(A7) */
    c->pc = RC_ADDR(0x0000090au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x7c6u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_90E:
    /* 0000090e   4  jsr (ffff832c,A4) */
    c->pc = RC_ADDR(0x0000090eu);
    rc_step(c, m, 18);
    /* vector 135 */
    rc_push32(c, m, RC_ADDR(0x00000912u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e22u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000234d6u);
    return;

L_912:
    /* 00000912   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00000912u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_914:
    /* 00000914   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00000914u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_918:
    /* 00000918   4  move.l (8,A0),D0 */
    c->pc = RC_ADDR(0x00000918u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_91C:
    /* 0000091c   4  cmp.l (7f2,A4),D0 */
    c->pc = RC_ADDR(0x0000091cu);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] + 0x7f2u));
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_920:
    /* 00000920   4  beq 000009e2 */
    c->pc = RC_ADDR(0x00000920u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_9E2;

L_924:
    /* 00000924   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00000924u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_928:
    /* 00000928   6  move.l (8,A0),(7f2,A4) */
    c->pc = RC_ADDR(0x00000928u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    rc_wr32(c, m, (c->a[4] + 0x7f2u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_92E:
    /* 0000092e   4  move.l (7f2,A4),D0 */
    c->pc = RC_ADDR(0x0000092eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x7f2u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_932:
    /* 00000932   4  bra 000009d0 */
    c->pc = RC_ADDR(0x00000932u);
    rc_step(c, m, 10);
    goto L_9D0;

L_936:
    /* 00000936   4  jsr (00000c80) */
    c->pc = RC_ADDR(0x00000936u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000093au));
    rc_depth++;
    c->pc = RC_ADDR(0x00000c80u);
    return;

L_93A:
    /* 0000093a   4  clr.w (ffff83ea,A4) */
    c->pc = RC_ADDR(0x0000093au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7c16u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_93E:
    /* 0000093e   4  pea (00000024).l */
    c->pc = RC_ADDR(0x0000093eu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000024u);

L_942:
    /* 00000942   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00000942u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_946:
    /* 00000946   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x00000946u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0000094au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_94A:
    /* 0000094a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000094au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_94C:
    /* 0000094c   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0000094cu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_94E:
    /* 0000094e   2  bra 00000902 */
    c->pc = RC_ADDR(0x0000094eu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_902;

L_950:
    /* 00000950   4  jsr (00000b9e) */
    c->pc = RC_ADDR(0x00000950u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00000954u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000b9eu);
    return;

L_954:
    /* 00000954   4  move.w #4,-(A7) */
    c->pc = RC_ADDR(0x00000954u);
    rc_step(c, m, 12);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_958:
    /* 00000958   4  pea (0000004b).l */
    c->pc = RC_ADDR(0x00000958u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000004bu);

L_95C:
    /* 0000095c   4  pea (000009ea) */
    c->pc = RC_ADDR(0x0000095cu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000009eau));

L_960:
    /* 00000960   4  jsr (00000ce4) */
    c->pc = RC_ADDR(0x00000960u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00000964u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000ce4u);
    return;

L_964:
    /* 00000964   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00000964u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_968:
    /* 00000968   4  move.w #4,-(A7) */
    c->pc = RC_ADDR(0x00000968u);
    rc_step(c, m, 12);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_96C:
    /* 0000096c   4  pea (0000005a).l */
    c->pc = RC_ADDR(0x0000096cu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000005au);

L_970:
    /* 00000970   4  pea (7ca,A4) */
    c->pc = RC_ADDR(0x00000970u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x7cau));

L_974:
    /* 00000974   4  jsr (00000ce4) */
    c->pc = RC_ADDR(0x00000974u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00000978u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000ce4u);
    return;

L_978:
    /* 00000978   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00000978u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_97C:
    /* 0000097c   4  move.w #4,-(A7) */
    c->pc = RC_ADDR(0x0000097cu);
    rc_step(c, m, 12);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_980:
    /* 00000980   4  pea (00000069).l */
    c->pc = RC_ADDR(0x00000980u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000069u);

L_984:
    /* 00000984   4  pea (000009f4) */
    c->pc = RC_ADDR(0x00000984u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000009f4u));

L_988:
    /* 00000988   4  jsr (00000ce4) */
    c->pc = RC_ADDR(0x00000988u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000098cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00000ce4u);
    return;

L_98C:
    /* 0000098c   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0000098cu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_990:
    /* 00000990   4  move.w #4,-(A7) */
    c->pc = RC_ADDR(0x00000990u);
    rc_step(c, m, 12);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_994:
    /* 00000994   4  pea (00000078).l */
    c->pc = RC_ADDR(0x00000994u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000078u);

L_998:
    /* 00000998   4  pea (00000a08) */
    c->pc = RC_ADDR(0x00000998u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00000a08u));

L_99C:
    /* 0000099c   4  jsr (00000ce4) */
    c->pc = RC_ADDR(0x0000099cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000009a0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000ce4u);
    return;

L_9A0:
    /* 000009a0   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x000009a0u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_9A4:
    /* 000009a4   4  pea (fffffffe).l */
    c->pc = RC_ADDR(0x000009a4u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0xfffffffeu);

L_9A8:
    /* 000009a8   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000009a8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9AC:
    /* 000009ac   4  jsr (ffff8332,A4) */
    c->pc = RC_ADDR(0x000009acu);
    rc_step(c, m, 18);
    /* vector 136 */
    rc_push32(c, m, RC_ADDR(0x000009b0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e28u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000234ecu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000234f0u);
    return;

L_9B0:
    /* 000009b0   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000009b0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_9B2:
    /* 000009b2   4  move.l D0,(7c6,A4) */
    c->pc = RC_ADDR(0x000009b2u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x7c6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_9B6:
    /* 000009b6   2  beq 000009cc */
    c->pc = RC_ADDR(0x000009b6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_9CC;

L_9B8:
    /* 000009b8   4  move.l (7c6,A4),-(A7) */
    c->pc = RC_ADDR(0x000009b8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x7c6u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9BC:
    /* 000009bc   4  jsr (ffff831a,A4) */
    c->pc = RC_ADDR(0x000009bcu);
    rc_step(c, m, 18);
    /* vector 132 */
    rc_push32(c, m, RC_ADDR(0x000009c0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e10u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000234aeu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000234b2u);
    return;

L_9C0:
    /* 000009c0   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000009c0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_9C2:
    /* 000009c2   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x000009c2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9C4:
    /* 000009c4   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x000009c4u);
    rc_step(c, m, 18);
    /* vector 139 */
    rc_push32(c, m, RC_ADDR(0x000009c8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e3au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023538u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0002353cu);
    return;

L_9C8:
    /* 000009c8   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000009c8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_9CA:
    /* 000009ca   2  bra 000009a4 */
    c->pc = RC_ADDR(0x000009cau);
    rc_step(c, m, 10);
    rc_tick();
    goto L_9A4;

L_9CC:
    /* 000009cc   2  bra 000009e2 */
    c->pc = RC_ADDR(0x000009ccu);
    rc_step(c, m, 10);
    goto L_9E2;

L_9CE:
    /* 000009ce   2  bra 000009e2 */
    c->pc = RC_ADDR(0x000009ceu);
    rc_step(c, m, 10);
    goto L_9E2;

L_9D0:
    /* 000009d0   6  sub.l #50,D0 */
    c->pc = RC_ADDR(0x000009d0u);
    rc_step(c, m, 16);
    t0 = 0x00000050u;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_9D6:
    /* 000009d6   4  beq 00000950 */
    c->pc = RC_ADDR(0x000009d6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_950; }

L_9DA:
    /* 000009da   2  subq.l #2,D0 */
    c->pc = RC_ADDR(0x000009dau);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_L, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_9DC:
    /* 000009dc   4  beq 00000936 */
    c->pc = RC_ADDR(0x000009dcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_936; }

L_9E0:
    /* 000009e0   2  bra 000009ce */
    c->pc = RC_ADDR(0x000009e0u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_9CE;

L_9E2:
    /* 000009e2   4  bra 000008d4 */
    c->pc = RC_ADDR(0x000009e2u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_8D4;

L_9E6:
    /* 000009e6   4  bra 00000902 */
    c->pc = RC_ADDR(0x000009e6u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_902;

}
