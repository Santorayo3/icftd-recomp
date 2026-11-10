/* fn_0001b62e - 260 byte(s), 77 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001b62e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001b62eu): goto L_1B62E;
    case RC_ADDR(0x0001b632u): goto L_1B632;
    case RC_ADDR(0x0001b636u): goto L_1B636;
    case RC_ADDR(0x0001b638u): goto L_1B638;
    case RC_ADDR(0x0001b63cu): goto L_1B63C;
    case RC_ADDR(0x0001b640u): goto L_1B640;
    case RC_ADDR(0x0001b644u): goto L_1B644;
    case RC_ADDR(0x0001b648u): goto L_1B648;
    case RC_ADDR(0x0001b64au): goto L_1B64A;
    case RC_ADDR(0x0001b64eu): goto L_1B64E;
    case RC_ADDR(0x0001b650u): goto L_1B650;
    case RC_ADDR(0x0001b652u): goto L_1B652;
    case RC_ADDR(0x0001b656u): goto L_1B656;
    case RC_ADDR(0x0001b658u): goto L_1B658;
    case RC_ADDR(0x0001b65au): goto L_1B65A;
    case RC_ADDR(0x0001b65eu): goto L_1B65E;
    case RC_ADDR(0x0001b660u): goto L_1B660;
    case RC_ADDR(0x0001b664u): goto L_1B664;
    case RC_ADDR(0x0001b666u): goto L_1B666;
    case RC_ADDR(0x0001b66au): goto L_1B66A;
    case RC_ADDR(0x0001b670u): goto L_1B670;
    case RC_ADDR(0x0001b674u): goto L_1B674;
    case RC_ADDR(0x0001b678u): goto L_1B678;
    case RC_ADDR(0x0001b67cu): goto L_1B67C;
    case RC_ADDR(0x0001b67eu): goto L_1B67E;
    case RC_ADDR(0x0001b682u): goto L_1B682;
    case RC_ADDR(0x0001b686u): goto L_1B686;
    case RC_ADDR(0x0001b68au): goto L_1B68A;
    case RC_ADDR(0x0001b68cu): goto L_1B68C;
    case RC_ADDR(0x0001b68eu): goto L_1B68E;
    case RC_ADDR(0x0001b690u): goto L_1B690;
    case RC_ADDR(0x0001b694u): goto L_1B694;
    case RC_ADDR(0x0001b698u): goto L_1B698;
    case RC_ADDR(0x0001b69eu): goto L_1B69E;
    case RC_ADDR(0x0001b6a2u): goto L_1B6A2;
    case RC_ADDR(0x0001b6a4u): goto L_1B6A4;
    case RC_ADDR(0x0001b6a8u): goto L_1B6A8;
    case RC_ADDR(0x0001b6aau): goto L_1B6AA;
    case RC_ADDR(0x0001b6acu): goto L_1B6AC;
    case RC_ADDR(0x0001b6b0u): goto L_1B6B0;
    case RC_ADDR(0x0001b6b6u): goto L_1B6B6;
    case RC_ADDR(0x0001b6bau): goto L_1B6BA;
    case RC_ADDR(0x0001b6beu): goto L_1B6BE;
    case RC_ADDR(0x0001b6c0u): goto L_1B6C0;
    case RC_ADDR(0x0001b6c4u): goto L_1B6C4;
    case RC_ADDR(0x0001b6c8u): goto L_1B6C8;
    case RC_ADDR(0x0001b6ccu): goto L_1B6CC;
    case RC_ADDR(0x0001b6ceu): goto L_1B6CE;
    case RC_ADDR(0x0001b6d2u): goto L_1B6D2;
    case RC_ADDR(0x0001b6d4u): goto L_1B6D4;
    case RC_ADDR(0x0001b6d8u): goto L_1B6D8;
    case RC_ADDR(0x0001b6dcu): goto L_1B6DC;
    case RC_ADDR(0x0001b6deu): goto L_1B6DE;
    case RC_ADDR(0x0001b6e0u): goto L_1B6E0;
    case RC_ADDR(0x0001b6e2u): goto L_1B6E2;
    case RC_ADDR(0x0001b6e6u): goto L_1B6E6;
    case RC_ADDR(0x0001b6eau): goto L_1B6EA;
    case RC_ADDR(0x0001b6eeu): goto L_1B6EE;
    case RC_ADDR(0x0001b6f2u): goto L_1B6F2;
    case RC_ADDR(0x0001b6f6u): goto L_1B6F6;
    case RC_ADDR(0x0001b6fau): goto L_1B6FA;
    case RC_ADDR(0x0001b6fcu): goto L_1B6FC;
    case RC_ADDR(0x0001b700u): goto L_1B700;
    case RC_ADDR(0x0001b704u): goto L_1B704;
    case RC_ADDR(0x0001b708u): goto L_1B708;
    case RC_ADDR(0x0001b70cu): goto L_1B70C;
    case RC_ADDR(0x0001b70eu): goto L_1B70E;
    case RC_ADDR(0x0001b712u): goto L_1B712;
    case RC_ADDR(0x0001b716u): goto L_1B716;
    case RC_ADDR(0x0001b71au): goto L_1B71A;
    case RC_ADDR(0x0001b71cu): goto L_1B71C;
    case RC_ADDR(0x0001b720u): goto L_1B720;
    case RC_ADDR(0x0001b724u): goto L_1B724;
    case RC_ADDR(0x0001b728u): goto L_1B728;
    case RC_ADDR(0x0001b72cu): goto L_1B72C;
    case RC_ADDR(0x0001b72eu): goto L_1B72E;
    case RC_ADDR(0x0001b730u): goto L_1B730;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1B62E:
    /* 0001b62e   4  link.w A5,#fffffff8 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b62eu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x8u;

L_1B632:
    /* 0001b632   4  pea (282,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b632u);
    rc_push32(c, m, (c->a[4] + 0x282u));

L_1B636:
    /* 0001b636   2  clr.l -(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b636u);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1B638:
    /* 0001b638   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b638u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B63C:
    /* 0001b63c   4  jsr (00016a40) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b63cu);
    rc_push32(c, m, RC_ADDR(0x0001b640u));
    rc_depth++;
    c->pc = RC_ADDR(0x00016a40u);
    return;

L_1B640:
    /* 0001b640   4  lea (c,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b640u);
    c->a[7] = (c->a[7] + 0xcu);

L_1B644:
    /* 0001b644   4  move.l D0,(ffff84f4,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b644u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x7b0cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B648:
    /* 0001b648   2  beq 0001b69e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b648u);
    if (rc_cond(c, 7)) goto L_1B69E;

L_1B64A:
    /* 0001b64a   4  clr.w (fffffffe,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b64au);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1B64E:
    /* 0001b64e   2  bra 0001b674 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b64eu);
    goto L_1B674;

L_1B650:
    /* 0001b650   2  moveq #0,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b650u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1B652:
    /* 0001b652   4  move.w (fffffffe,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b652u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B656:
    /* 0001b656   2  asl.l #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b656u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_1B658:
    /* 0001b658   2  movea.l D0,A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b658u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_1B65A:
    /* 0001b65a   4  adda.l (ffff84f4,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b65au);
    t0 = rc_rd32(c, m, (c->a[4] - 0x7b0cu));
    c->a[0] += t0;

L_1B65E:
    /* 0001b65e   2  moveq #0,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b65eu);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1B660:
    /* 0001b660   4  move.w (fffffffe,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b660u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B664:
    /* 0001b664   2  asl.l #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b664u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_1B666:
    /* 0001b666   4  lea (fffff300,A4),A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b666u);
    c->a[1] = (c->a[4] - 0xd00u);

L_1B66A:
    /* 0001b66a   6  move.l (8,A0),(0,A1,D0.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b66au);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B670:
    /* 0001b670   4  addq.w #1,(fffffffe,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b670u);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1B674:
    /* 0001b674   4  move.w (fffffffe,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b674u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B678:
    /* 0001b678   4  cmp.w (e,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b678u);
    t0 = rc_rd16(c, m, (c->a[5] + 0xeu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B67C:
    /* 0001b67c   2  bcs 0001b650 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b67cu);
    if (rc_cond(c, 5)) { rc_tick(); goto L_1B650; }

L_1B67E:
    /* 0001b67e   4  movea.l (ffff84f4,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b67eu);
    t0 = rc_rd32(c, m, (c->a[4] - 0x7b0cu));
    c->a[0] = t0;

L_1B682:
    /* 0001b682   4  move.w (A0),(fffff2f4,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b682u);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_wr16(c, m, (c->a[4] - 0xd0cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B686:
    /* 0001b686   4  move.w (fffff2f4,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b686u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd0cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B68A:
    /* 0001b68a   2  swap D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b68au);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_1B68C:
    /* 0001b68c   2  clr.w D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b68cu);
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1B68E:
    /* 0001b68e   2  swap D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b68eu);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_1B690:
    /* 0001b690   4  divu.w (fffff2ec,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b690u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd14u));
    rc_divu(c, m, 0, t0);

L_1B694:
    /* 0001b694   4  move.w D0,(fffffff8,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b694u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B698:
    /* 0001b698   6  move.w (c,A5),(fffff2f6,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b698u);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_wr16(c, m, (c->a[4] - 0xd0au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B69E:
    /* 0001b69e   4  move.w (fffffff8,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b69eu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B6A2:
    /* 0001b6a2   2  asl.w #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b6a2u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W);

L_1B6A4:
    /* 0001b6a4   4  mulu.w (fffff2f6,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b6a4u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd0au));
    rc_mulu(c, 0, t0);

L_1B6A8:
    /* 0001b6a8   2  moveq #0,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b6a8u);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1B6AA:
    /* 0001b6aa   2  move.w D0,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b6aau);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B6AC:
    /* 0001b6ac   4  move.l D1,(fffff31c,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b6acu);
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[4] - 0xce4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B6B0:
    /* 0001b6b0   6  pea (00010001).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b6b0u);
    rc_push32(c, m, RC_ADDR(0x00010001u));

L_1B6B6:
    /* 0001b6b6   4  move.l (fffff31c,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b6b6u);
    t0 = rc_rd32(c, m, (c->a[4] - 0xce4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B6BA:
    /* 0001b6ba   4  jsr (ffff8338,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b6bau);
    /* vector 137: exec.library -198 */
    c->pc = RC_ADDR(0x0001b6beu);
    rc_os_call(c, m, 0, -198);

L_1B6BE:
    /* 0001b6be   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b6beu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1B6C0:
    /* 0001b6c0   4  move.l D0,(fffff314,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b6c0u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0xcecu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B6C4:
    /* 0001b6c4   4  clr.w (fffffffa,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b6c4u);
    rc_wr16(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1B6C8:
    /* 0001b6c8   4  clr.w (fffffffe,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b6c8u);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1B6CC:
    /* 0001b6cc   2  bra 0001b712 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b6ccu);
    goto L_1B712;

L_1B6CE:
    /* 0001b6ce   4  clr.w (fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b6ceu);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1B6D2:
    /* 0001b6d2   2  bra 0001b704 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b6d2u);
    goto L_1B704;

L_1B6D4:
    /* 0001b6d4   4  move.w (fffffffa,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b6d4u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B6D8:
    /* 0001b6d8   4  addq.w #1,(fffffffa,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b6d8u);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1B6DC:
    /* 0001b6dc   2  moveq #0,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b6dcu);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1B6DE:
    /* 0001b6de   2  move.w D0,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b6deu);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B6E0:
    /* 0001b6e0   2  asl.l #1,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b6e0u);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_1B6E2:
    /* 0001b6e2   4  movea.l (fffff314,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b6e2u);
    t0 = rc_rd32(c, m, (c->a[4] - 0xcecu));
    c->a[0] = t0;

L_1B6E6:
    /* 0001b6e6   4  move.w (fffffffc,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b6e6u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B6EA:
    /* 0001b6ea   4  mulu.w (fffff2ee,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b6eau);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd12u));
    rc_mulu(c, 0, t0);

L_1B6EE:
    /* 0001b6ee   4  mulu.w (fffff2f4,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b6eeu);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd0cu));
    rc_mulu(c, 0, t0);

L_1B6F2:
    /* 0001b6f2   4  move.w (fffff2ec,A4),D2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b6f2u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd14u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B6F6:
    /* 0001b6f6   4  mulu.w (fffffffe,A5),D2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b6f6u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_mulu(c, 2, t0);

L_1B6FA:
    /* 0001b6fa   2  add.w D2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b6fau);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1B6FC:
    /* 0001b6fc   4  move.w D0,(0,A0,D1.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b6fcu);
    t0 = rc_d_get(c, 0, RC_W);
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B700:
    /* 0001b700   4  addq.w #1,(fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b700u);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1B704:
    /* 0001b704   4  move.w (fffffffc,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b704u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B708:
    /* 0001b708   4  cmp.w (fffff2f6,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b708u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd0au));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B70C:
    /* 0001b70c   2  bcs 0001b6d4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b70cu);
    if (rc_cond(c, 5)) { rc_tick(); goto L_1B6D4; }

L_1B70E:
    /* 0001b70e   4  addq.w #1,(fffffffe,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b70eu);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1B712:
    /* 0001b712   4  move.w (fffffffe,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b712u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B716:
    /* 0001b716   4  cmp.w (fffffff8,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b716u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B71A:
    /* 0001b71a   2  bcs 0001b6ce */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b71au);
    if (rc_cond(c, 5)) { rc_tick(); goto L_1B6CE; }

L_1B71C:
    /* 0001b71c   4  move.w (fffff2f4,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b71cu);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd0cu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B720:
    /* 0001b720   4  move.w (fffff2ee,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b720u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd12u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B724:
    /* 0001b724   4  move.w (fffff2ec,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b724u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd14u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B728:
    /* 0001b728   4  jsr (ffff814c,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b728u);
    /* vector 55 */
    rc_push32(c, m, RC_ADDR(0x0001b72cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00011094u);
    return;

L_1B72C:
    /* 0001b72c   2  addq.w #6,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b72cu);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_1B72E:
    /* 0001b72e   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b72eu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1B730:
    /* 0001b730   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b730u);
    rc_ret(c, m);
    return;

}
