/* fn_0001269e - 468 byte(s), 130 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001269e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001269eu): goto L_1269E;
    case RC_ADDR(0x000126a2u): goto L_126A2;
    case RC_ADDR(0x000126a6u): goto L_126A6;
    case RC_ADDR(0x000126aau): goto L_126AA;
    case RC_ADDR(0x000126aeu): goto L_126AE;
    case RC_ADDR(0x000126b0u): goto L_126B0;
    case RC_ADDR(0x000126b4u): goto L_126B4;
    case RC_ADDR(0x000126b8u): goto L_126B8;
    case RC_ADDR(0x000126bcu): goto L_126BC;
    case RC_ADDR(0x000126c2u): goto L_126C2;
    case RC_ADDR(0x000126c4u): goto L_126C4;
    case RC_ADDR(0x000126cau): goto L_126CA;
    case RC_ADDR(0x000126ccu): goto L_126CC;
    case RC_ADDR(0x000126d2u): goto L_126D2;
    case RC_ADDR(0x000126d4u): goto L_126D4;
    case RC_ADDR(0x000126dau): goto L_126DA;
    case RC_ADDR(0x000126dcu): goto L_126DC;
    case RC_ADDR(0x000126e2u): goto L_126E2;
    case RC_ADDR(0x000126e4u): goto L_126E4;
    case RC_ADDR(0x000126eau): goto L_126EA;
    case RC_ADDR(0x000126eeu): goto L_126EE;
    case RC_ADDR(0x000126f4u): goto L_126F4;
    case RC_ADDR(0x000126f8u): goto L_126F8;
    case RC_ADDR(0x000126feu): goto L_126FE;
    case RC_ADDR(0x00012702u): goto L_12702;
    case RC_ADDR(0x00012706u): goto L_12706;
    case RC_ADDR(0x00012708u): goto L_12708;
    case RC_ADDR(0x0001270au): goto L_1270A;
    case RC_ADDR(0x0001270eu): goto L_1270E;
    case RC_ADDR(0x00012710u): goto L_12710;
    case RC_ADDR(0x00012714u): goto L_12714;
    case RC_ADDR(0x00012718u): goto L_12718;
    case RC_ADDR(0x0001271cu): goto L_1271C;
    case RC_ADDR(0x0001271eu): goto L_1271E;
    case RC_ADDR(0x00012722u): goto L_12722;
    case RC_ADDR(0x00012724u): goto L_12724;
    case RC_ADDR(0x00012728u): goto L_12728;
    case RC_ADDR(0x0001272cu): goto L_1272C;
    case RC_ADDR(0x00012730u): goto L_12730;
    case RC_ADDR(0x00012734u): goto L_12734;
    case RC_ADDR(0x00012738u): goto L_12738;
    case RC_ADDR(0x0001273cu): goto L_1273C;
    case RC_ADDR(0x0001273eu): goto L_1273E;
    case RC_ADDR(0x00012742u): goto L_12742;
    case RC_ADDR(0x00012744u): goto L_12744;
    case RC_ADDR(0x00012748u): goto L_12748;
    case RC_ADDR(0x0001274cu): goto L_1274C;
    case RC_ADDR(0x0001274eu): goto L_1274E;
    case RC_ADDR(0x00012752u): goto L_12752;
    case RC_ADDR(0x00012754u): goto L_12754;
    case RC_ADDR(0x00012756u): goto L_12756;
    case RC_ADDR(0x00012758u): goto L_12758;
    case RC_ADDR(0x0001275cu): goto L_1275C;
    case RC_ADDR(0x0001275eu): goto L_1275E;
    case RC_ADDR(0x00012762u): goto L_12762;
    case RC_ADDR(0x00012766u): goto L_12766;
    case RC_ADDR(0x00012768u): goto L_12768;
    case RC_ADDR(0x0001276cu): goto L_1276C;
    case RC_ADDR(0x0001276eu): goto L_1276E;
    case RC_ADDR(0x00012770u): goto L_12770;
    case RC_ADDR(0x00012774u): goto L_12774;
    case RC_ADDR(0x00012776u): goto L_12776;
    case RC_ADDR(0x00012778u): goto L_12778;
    case RC_ADDR(0x0001277cu): goto L_1277C;
    case RC_ADDR(0x00012780u): goto L_12780;
    case RC_ADDR(0x00012786u): goto L_12786;
    case RC_ADDR(0x00012788u): goto L_12788;
    case RC_ADDR(0x0001278au): goto L_1278A;
    case RC_ADDR(0x0001278cu): goto L_1278C;
    case RC_ADDR(0x00012790u): goto L_12790;
    case RC_ADDR(0x00012792u): goto L_12792;
    case RC_ADDR(0x00012796u): goto L_12796;
    case RC_ADDR(0x0001279au): goto L_1279A;
    case RC_ADDR(0x0001279eu): goto L_1279E;
    case RC_ADDR(0x000127a4u): goto L_127A4;
    case RC_ADDR(0x000127a8u): goto L_127A8;
    case RC_ADDR(0x000127acu): goto L_127AC;
    case RC_ADDR(0x000127b0u): goto L_127B0;
    case RC_ADDR(0x000127b2u): goto L_127B2;
    case RC_ADDR(0x000127b8u): goto L_127B8;
    case RC_ADDR(0x000127beu): goto L_127BE;
    case RC_ADDR(0x000127c4u): goto L_127C4;
    case RC_ADDR(0x000127cau): goto L_127CA;
    case RC_ADDR(0x000127ceu): goto L_127CE;
    case RC_ADDR(0x000127d0u): goto L_127D0;
    case RC_ADDR(0x000127d4u): goto L_127D4;
    case RC_ADDR(0x000127d6u): goto L_127D6;
    case RC_ADDR(0x000127dau): goto L_127DA;
    case RC_ADDR(0x000127deu): goto L_127DE;
    case RC_ADDR(0x000127e2u): goto L_127E2;
    case RC_ADDR(0x000127e4u): goto L_127E4;
    case RC_ADDR(0x000127e6u): goto L_127E6;
    case RC_ADDR(0x000127e8u): goto L_127E8;
    case RC_ADDR(0x000127ecu): goto L_127EC;
    case RC_ADDR(0x000127f0u): goto L_127F0;
    case RC_ADDR(0x000127f4u): goto L_127F4;
    case RC_ADDR(0x000127f8u): goto L_127F8;
    case RC_ADDR(0x000127fcu): goto L_127FC;
    case RC_ADDR(0x000127feu): goto L_127FE;
    case RC_ADDR(0x00012802u): goto L_12802;
    case RC_ADDR(0x00012804u): goto L_12804;
    case RC_ADDR(0x00012808u): goto L_12808;
    case RC_ADDR(0x0001280cu): goto L_1280C;
    case RC_ADDR(0x00012810u): goto L_12810;
    case RC_ADDR(0x00012814u): goto L_12814;
    case RC_ADDR(0x00012816u): goto L_12816;
    case RC_ADDR(0x0001281au): goto L_1281A;
    case RC_ADDR(0x0001281eu): goto L_1281E;
    case RC_ADDR(0x00012820u): goto L_12820;
    case RC_ADDR(0x00012824u): goto L_12824;
    case RC_ADDR(0x00012826u): goto L_12826;
    case RC_ADDR(0x00012828u): goto L_12828;
    case RC_ADDR(0x0001282cu): goto L_1282C;
    case RC_ADDR(0x00012830u): goto L_12830;
    case RC_ADDR(0x00012834u): goto L_12834;
    case RC_ADDR(0x00012836u): goto L_12836;
    case RC_ADDR(0x00012838u): goto L_12838;
    case RC_ADDR(0x0001283cu): goto L_1283C;
    case RC_ADDR(0x0001283eu): goto L_1283E;
    case RC_ADDR(0x00012844u): goto L_12844;
    case RC_ADDR(0x00012848u): goto L_12848;
    case RC_ADDR(0x0001284cu): goto L_1284C;
    case RC_ADDR(0x0001284eu): goto L_1284E;
    case RC_ADDR(0x00012852u): goto L_12852;
    case RC_ADDR(0x00012858u): goto L_12858;
    case RC_ADDR(0x0001285eu): goto L_1285E;
    case RC_ADDR(0x00012864u): goto L_12864;
    case RC_ADDR(0x0001286au): goto L_1286A;
    case RC_ADDR(0x0001286eu): goto L_1286E;
    case RC_ADDR(0x00012870u): goto L_12870;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1269E:
    /* 0001269e   4  link.w A5,#ffffffc6 */
    c->pc = RC_ADDR(0x0001269eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x3au;

L_126A2:
    /* 000126a2   4  pea (000003ed).l */
    c->pc = RC_ADDR(0x000126a2u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000003edu);

L_126A6:
    /* 000126a6   4  pea (00012872) */
    c->pc = RC_ADDR(0x000126a6u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00012872u));

L_126AA:
    /* 000126aa   4  jsr (ffff82b4,A4) */
    c->pc = RC_ADDR(0x000126aau);
    rc_step(c, m, 18);
    /* vector 115 */
    rc_push32(c, m, RC_ADDR(0x000126aeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023daau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022518u);
    return;

L_126AE:
    /* 000126ae   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000126aeu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_126B0:
    /* 000126b0   4  move.l D0,(ffffffca,A5) */
    c->pc = RC_ADDR(0x000126b0u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x36u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_126B4:
    /* 000126b4   4  beq 000127b2 */
    c->pc = RC_ADDR(0x000126b4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_127B2;

L_126B8:
    /* 000126b8   4  clr.w (ffffffc8,A5) */
    c->pc = RC_ADDR(0x000126b8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x38u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_126BC:
    /* 000126bc   6  cmpi.w #36,(ffffffc8,A5) */
    c->pc = RC_ADDR(0x000126bcu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x38u));
    rc_cmp(c, RC_W, t0, 0x00000036u);

L_126C2:
    /* 000126c2   2  bcs 000126f8 */
    c->pc = RC_ADDR(0x000126c2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) goto L_126F8;

L_126C4:
    /* 000126c4   6  cmpi.w #7e,(ffffffc8,A5) */
    c->pc = RC_ADDR(0x000126c4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x38u));
    rc_cmp(c, RC_W, t0, 0x0000007eu);

L_126CA:
    /* 000126ca   2  bls 000126d4 */
    c->pc = RC_ADDR(0x000126cau);
    rc_step(c, m, 10);
    if (rc_cond(c, 3)) goto L_126D4;

L_126CC:
    /* 000126cc   6  cmpi.w #8e,(ffffffc8,A5) */
    c->pc = RC_ADDR(0x000126ccu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x38u));
    rc_cmp(c, RC_W, t0, 0x0000008eu);

L_126D2:
    /* 000126d2   2  bcs 000126f8 */
    c->pc = RC_ADDR(0x000126d2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) goto L_126F8;

L_126D4:
    /* 000126d4   6  cmpi.w #94,(ffffffc8,A5) */
    c->pc = RC_ADDR(0x000126d4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x38u));
    rc_cmp(c, RC_W, t0, 0x00000094u);

L_126DA:
    /* 000126da   2  bls 000126e4 */
    c->pc = RC_ADDR(0x000126dau);
    rc_step(c, m, 10);
    if (rc_cond(c, 3)) goto L_126E4;

L_126DC:
    /* 000126dc   6  cmpi.w #9a,(ffffffc8,A5) */
    c->pc = RC_ADDR(0x000126dcu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x38u));
    rc_cmp(c, RC_W, t0, 0x0000009au);

L_126E2:
    /* 000126e2   2  bcs 000126f8 */
    c->pc = RC_ADDR(0x000126e2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) goto L_126F8;

L_126E4:
    /* 000126e4   6  cmpi.w #9e,(ffffffc8,A5) */
    c->pc = RC_ADDR(0x000126e4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x38u));
    rc_cmp(c, RC_W, t0, 0x0000009eu);

L_126EA:
    /* 000126ea   4  bls 0001278a */
    c->pc = RC_ADDR(0x000126eau);
    rc_step(c, m, 10);
    if (rc_cond(c, 3)) goto L_1278A;

L_126EE:
    /* 000126ee   6  cmpi.w #b8,(ffffffc8,A5) */
    c->pc = RC_ADDR(0x000126eeu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x38u));
    rc_cmp(c, RC_W, t0, 0x000000b8u);

L_126F4:
    /* 000126f4   4  bcc 0001278a */
    c->pc = RC_ADDR(0x000126f4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_1278A;

L_126F8:
    /* 000126f8   6  pea (00010001).l */
    c->pc = RC_ADDR(0x000126f8u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010001u);

L_126FE:
    /* 000126fe   4  pea (00000320).l */
    c->pc = RC_ADDR(0x000126feu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000320u);

L_12702:
    /* 00012702   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x00012702u);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x00012706u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_12706:
    /* 00012706   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00012706u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_12708:
    /* 00012708   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00012708u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1270A:
    /* 0001270a   4  move.w (ffffffc8,A5),D1 */
    c->pc = RC_ADDR(0x0001270au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x38u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1270E:
    /* 0001270e   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x0001270eu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_12710:
    /* 00012710   4  lea (1502,A4),A0 */
    c->pc = RC_ADDR(0x00012710u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1502u);

L_12714:
    /* 00012714   4  move.l D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x00012714u);
    rc_step(c, m, 18);
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_12718:
    /* 00012718   4  pea (00000320).l */
    c->pc = RC_ADDR(0x00012718u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000320u);

L_1271C:
    /* 0001271c   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001271cu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1271E:
    /* 0001271e   4  move.w (ffffffc8,A5),D0 */
    c->pc = RC_ADDR(0x0001271eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x38u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12722:
    /* 00012722   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00012722u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_12724:
    /* 00012724   4  lea (1502,A4),A0 */
    c->pc = RC_ADDR(0x00012724u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1502u);

L_12728:
    /* 00012728   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00012728u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1272C:
    /* 0001272c   4  move.l (ffffffca,A5),-(A7) */
    c->pc = RC_ADDR(0x0001272cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x36u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_12730:
    /* 00012730   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x00012730u);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x00012734u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_12734:
    /* 00012734   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00012734u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_12738:
    /* 00012738   4  clr.w (ffffffc6,A5) */
    c->pc = RC_ADDR(0x00012738u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x3au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1273C:
    /* 0001273c   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001273cu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1273E:
    /* 0001273e   4  move.w (ffffffc8,A5),D0 */
    c->pc = RC_ADDR(0x0001273eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x38u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12742:
    /* 00012742   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00012742u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_12744:
    /* 00012744   4  lea (1502,A4),A0 */
    c->pc = RC_ADDR(0x00012744u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1502u);

L_12748:
    /* 00012748   4  move.l (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00012748u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1274C:
    /* 0001274c   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001274cu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1274E:
    /* 0001274e   4  move.w (ffffffc6,A5),D0 */
    c->pc = RC_ADDR(0x0001274eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x3au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12752:
    /* 00012752   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00012752u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_12754:
    /* 00012754   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x00012754u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_12756:
    /* 00012756   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00012756u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_12758:
    /* 00012758   4  move.w (ffffffc8,A5),D0 */
    c->pc = RC_ADDR(0x00012758u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x38u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1275C:
    /* 0001275c   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001275cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1275E:
    /* 0001275e   4  lea (1502,A4),A1 */
    c->pc = RC_ADDR(0x0001275eu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1502u);

L_12762:
    /* 00012762   4  move.l (0,A1,D0.w),D2 */
    c->pc = RC_ADDR(0x00012762u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 2, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_12766:
    /* 00012766   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00012766u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_12768:
    /* 00012768   4  move.w (ffffffc6,A5),D0 */
    c->pc = RC_ADDR(0x00012768u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x3au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1276C:
    /* 0001276c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001276cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1276E:
    /* 0001276e   2  movea.l D0,A1 */
    c->pc = RC_ADDR(0x0001276eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[1] = t0;

L_12770:
    /* 00012770   4  move.w (0,A1,D2.w),D0 */
    c->pc = RC_ADDR(0x00012770u);
    rc_step(c, m, 14);
    t4 = c->d[2];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12774:
    /* 00012774   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x00012774u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_12776:
    /* 00012776   2  asl.w #1,D0 */
    c->pc = RC_ADDR(0x00012776u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_12778:
    /* 00012778   4  move.w D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x00012778u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 0, RC_W);
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1277C:
    /* 0001277c   4  addq.w #1,(ffffffc6,A5) */
    c->pc = RC_ADDR(0x0001277cu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x3au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_12780:
    /* 00012780   6  cmpi.w #190,(ffffffc6,A5) */
    c->pc = RC_ADDR(0x00012780u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x3au));
    rc_cmp(c, RC_W, t0, 0x00000190u);

L_12786:
    /* 00012786   2  bcs 0001273c */
    c->pc = RC_ADDR(0x00012786u);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_1273C; }

L_12788:
    /* 00012788   2  bra 0001279a */
    c->pc = RC_ADDR(0x00012788u);
    rc_step(c, m, 10);
    goto L_1279A;

L_1278A:
    /* 0001278a   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001278au);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1278C:
    /* 0001278c   4  move.w (ffffffc8,A5),D0 */
    c->pc = RC_ADDR(0x0001278cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x38u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12790:
    /* 00012790   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00012790u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_12792:
    /* 00012792   4  lea (1502,A4),A0 */
    c->pc = RC_ADDR(0x00012792u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1502u);

L_12796:
    /* 00012796   4  clr.l (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00012796u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1279A:
    /* 0001279a   4  addq.w #1,(ffffffc8,A5) */
    c->pc = RC_ADDR(0x0001279au);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x38u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1279E:
    /* 0001279e   6  cmpi.w #b8,(ffffffc8,A5) */
    c->pc = RC_ADDR(0x0001279eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x38u));
    rc_cmp(c, RC_W, t0, 0x000000b8u);

L_127A4:
    /* 000127a4   4  bcs 000126bc */
    c->pc = RC_ADDR(0x000127a4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_126BC; }

L_127A8:
    /* 000127a8   4  move.l (ffffffca,A5),-(A7) */
    c->pc = RC_ADDR(0x000127a8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x36u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_127AC:
    /* 000127ac   4  jsr (ffff82ba,A4) */
    c->pc = RC_ADDR(0x000127acu);
    rc_step(c, m, 18);
    /* vector 116 */
    rc_push32(c, m, RC_ADDR(0x000127b0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023db0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022532u);
    return;

L_127B0:
    /* 000127b0   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000127b0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_127B2:
    /* 000127b2   6  move.w #4b0,(fffffa98,A4) */
    c->pc = RC_ADDR(0x000127b2u);
    rc_step(c, m, 16);
    t0 = 0x000004b0u;
    rc_wr16(c, m, (c->a[4] - 0x568u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_127B8:
    /* 000127b8   6  move.w #4b0,(fffffa9a,A4) */
    c->pc = RC_ADDR(0x000127b8u);
    rc_step(c, m, 16);
    t0 = 0x000004b0u;
    rc_wr16(c, m, (c->a[4] - 0x566u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_127BE:
    /* 000127be   6  move.w #1,(fffffa94,A4) */
    c->pc = RC_ADDR(0x000127beu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x56cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_127C4:
    /* 000127c4   6  move.w #a,(fffffa96,A4) */
    c->pc = RC_ADDR(0x000127c4u);
    rc_step(c, m, 16);
    t0 = 0x0000000au;
    rc_wr16(c, m, (c->a[4] - 0x56au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_127CA:
    /* 000127ca   4  clr.w (ffffffc8,A5) */
    c->pc = RC_ADDR(0x000127cau);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x38u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_127CE:
    /* 000127ce   2  bra 0001281a */
    c->pc = RC_ADDR(0x000127ceu);
    rc_step(c, m, 10);
    goto L_1281A;

L_127D0:
    /* 000127d0   4  clr.w (ffffffc6,A5) */
    c->pc = RC_ADDR(0x000127d0u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x3au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_127D4:
    /* 000127d4   2  bra 0001280c */
    c->pc = RC_ADDR(0x000127d4u);
    rc_step(c, m, 10);
    goto L_1280C;

L_127D6:
    /* 000127d6   4  move.w (ffffffc8,A5),D0 */
    c->pc = RC_ADDR(0x000127d6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x38u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_127DA:
    /* 000127da   4  mulu.w (fffffa9e,A4),D0 */
    c->pc = RC_ADDR(0x000127dau);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] - 0x562u));
    rc_mulu(c, 0, t0);

L_127DE:
    /* 000127de   4  add.w (ffffffc6,A5),D0 */
    c->pc = RC_ADDR(0x000127deu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x3au));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_127E2:
    /* 000127e2   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x000127e2u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_127E4:
    /* 000127e4   2  move.w D0,D1 */
    c->pc = RC_ADDR(0x000127e4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_127E6:
    /* 000127e6   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x000127e6u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_127E8:
    /* 000127e8   4  movea.l (fffffabc,A4),A0 */
    c->pc = RC_ADDR(0x000127e8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x544u));
    c->a[0] = t0;

L_127EC:
    /* 000127ec   4  move.w (ffffffc6,A5),D0 */
    c->pc = RC_ADDR(0x000127ecu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x3au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_127F0:
    /* 000127f0   4  mulu.w (fffffa96,A4),D0 */
    c->pc = RC_ADDR(0x000127f0u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] - 0x56au));
    rc_mulu(c, 0, t0);

L_127F4:
    /* 000127f4   4  mulu.w (fffffa9c,A4),D0 */
    c->pc = RC_ADDR(0x000127f4u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] - 0x564u));
    rc_mulu(c, 0, t0);

L_127F8:
    /* 000127f8   4  move.w (fffffa94,A4),D2 */
    c->pc = RC_ADDR(0x000127f8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x56cu));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_127FC:
    /* 000127fc   2  asl.w #1,D2 */
    c->pc = RC_ADDR(0x000127fcu);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_W, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_W), RC_W));

L_127FE:
    /* 000127fe   4  mulu.w (ffffffc8,A5),D2 */
    c->pc = RC_ADDR(0x000127feu);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[5] - 0x38u));
    rc_mulu(c, 2, t0);

L_12802:
    /* 00012802   2  add.w D2,D0 */
    c->pc = RC_ADDR(0x00012802u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_12804:
    /* 00012804   4  move.w D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x00012804u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 0, RC_W);
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12808:
    /* 00012808   4  addq.w #1,(ffffffc6,A5) */
    c->pc = RC_ADDR(0x00012808u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x3au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1280C:
    /* 0001280c   4  move.w (ffffffc6,A5),D0 */
    c->pc = RC_ADDR(0x0001280cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x3au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12810:
    /* 00012810   4  cmp.w (fffffa9e,A4),D0 */
    c->pc = RC_ADDR(0x00012810u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x562u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_12814:
    /* 00012814   2  bcs 000127d6 */
    c->pc = RC_ADDR(0x00012814u);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_127D6; }

L_12816:
    /* 00012816   4  addq.w #1,(ffffffc8,A5) */
    c->pc = RC_ADDR(0x00012816u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x38u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1281A:
    /* 0001281a   4  move.w (fffffa9c,A4),D0 */
    c->pc = RC_ADDR(0x0001281au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x564u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1281E:
    /* 0001281e   2  lsr.w #1,D0 */
    c->pc = RC_ADDR(0x0001281eu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_12820:
    /* 00012820   4  move.w (ffffffc8,A5),D1 */
    c->pc = RC_ADDR(0x00012820u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x38u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12824:
    /* 00012824   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x00012824u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_12826:
    /* 00012826   2  bcs 000127d0 */
    c->pc = RC_ADDR(0x00012826u);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_127D0; }

L_12828:
    /* 00012828   4  move.w (fffffa9c,A4),-(A7) */
    c->pc = RC_ADDR(0x00012828u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x564u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1282C:
    /* 0001282c   4  move.w (fffffa96,A4),-(A7) */
    c->pc = RC_ADDR(0x0001282cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x56au));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_12830:
    /* 00012830   4  move.w (fffffa94,A4),D0 */
    c->pc = RC_ADDR(0x00012830u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x56cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12834:
    /* 00012834   2  asl.w #1,D0 */
    c->pc = RC_ADDR(0x00012834u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_12836:
    /* 00012836   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00012836u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_12838:
    /* 00012838   4  jsr (ffff816a,A4) */
    c->pc = RC_ADDR(0x00012838u);
    rc_step(c, m, 18);
    /* vector 60 */
    rc_push32(c, m, RC_ADDR(0x0001283cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c60u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000128eau);
    return;

L_1283C:
    /* 0001283c   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x0001283cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_1283E:
    /* 0001283e   6  pea (00010001).l */
    c->pc = RC_ADDR(0x0001283eu);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010001u);

L_12844:
    /* 00012844   4  pea (00001c20).l */
    c->pc = RC_ADDR(0x00012844u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00001c20u);

L_12848:
    /* 00012848   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x00012848u);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x0001284cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_1284C:
    /* 0001284c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001284cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1284E:
    /* 0001284e   4  move.l D0,(fffffaa0,A4) */
    c->pc = RC_ADDR(0x0001284eu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x560u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_12852:
    /* 00012852   6  move.w (fffffaa6,A4),(1410,A4) */
    c->pc = RC_ADDR(0x00012852u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] - 0x55au));
    rc_wr16(c, m, (c->a[4] + 0x1410u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12858:
    /* 00012858   6  move.w (fffffaa6,A4),(1148,A4) */
    c->pc = RC_ADDR(0x00012858u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] - 0x55au));
    rc_wr16(c, m, (c->a[4] + 0x1148u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1285E:
    /* 0001285e   6  move.w (fffffaa4,A4),(1412,A4) */
    c->pc = RC_ADDR(0x0001285eu);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] - 0x55cu));
    rc_wr16(c, m, (c->a[4] + 0x1412u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12864:
    /* 00012864   6  move.w (fffffaa4,A4),(114a,A4) */
    c->pc = RC_ADDR(0x00012864u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] - 0x55cu));
    rc_wr16(c, m, (c->a[4] + 0x114au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1286A:
    /* 0001286a   4  jsr (00014204) */
    c->pc = RC_ADDR(0x0001286au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001286eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00014204u);
    return;

L_1286E:
    /* 0001286e   2  unlk A5 */
    c->pc = RC_ADDR(0x0001286eu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_12870:
    /* 00012870   2  rts */
    c->pc = RC_ADDR(0x00012870u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
