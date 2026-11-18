/* fn_000229ba - 96 byte(s), 29 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000229ba(cpu_t *c, rt_machine *m)
{
    u32 t0, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000229bau): goto L_229BA;
    case RC_ADDR(0x000229bcu): goto L_229BC;
    case RC_ADDR(0x000229c0u): goto L_229C0;
    case RC_ADDR(0x000229c4u): goto L_229C4;
    case RC_ADDR(0x000229c6u): goto L_229C6;
    case RC_ADDR(0x000229c8u): goto L_229C8;
    case RC_ADDR(0x000229ccu): goto L_229CC;
    case RC_ADDR(0x000229ceu): goto L_229CE;
    case RC_ADDR(0x000229d0u): goto L_229D0;
    case RC_ADDR(0x000229d2u): goto L_229D2;
    case RC_ADDR(0x000229d6u): goto L_229D6;
    case RC_ADDR(0x000229dau): goto L_229DA;
    case RC_ADDR(0x000229deu): goto L_229DE;
    case RC_ADDR(0x000229e2u): goto L_229E2;
    case RC_ADDR(0x000229e6u): goto L_229E6;
    case RC_ADDR(0x000229ecu): goto L_229EC;
    case RC_ADDR(0x000229eeu): goto L_229EE;
    case RC_ADDR(0x000229f2u): goto L_229F2;
    case RC_ADDR(0x000229f6u): goto L_229F6;
    case RC_ADDR(0x000229feu): goto L_229FE;
    case RC_ADDR(0x00022a02u): goto L_22A02;
    case RC_ADDR(0x00022a06u): goto L_22A06;
    case RC_ADDR(0x00022a0au): goto L_22A0A;
    case RC_ADDR(0x00022a0cu): goto L_22A0C;
    case RC_ADDR(0x00022a12u): goto L_22A12;
    case RC_ADDR(0x00022a16u): goto L_22A16;
    case RC_ADDR(0x00022a18u): goto L_22A18;
    case RC_ADDR(0x00022a1cu): goto L_22A1C;
    case RC_ADDR(0x00022a1eu): goto L_22A1E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_229BA:
    /* 000229ba   2  bsr 00022a2c */
    c->pc = RC_ADDR(0x000229bau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000229bcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00022a2cu);
    return;

L_229BC:
    /* 000229bc   4  lea (ffffd54e,A4),A1 */
    c->pc = RC_ADDR(0x000229bcu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x2ab2u);

L_229C0:
    /* 000229c0   4  lea (ffffd54e,A4),A2 */
    c->pc = RC_ADDR(0x000229c0u);
    rc_step(c, m, 8);
    c->a[2] = (c->a[4] - 0x2ab2u);

L_229C4:
    /* 000229c4   2  cmpa.l A1,A2 */
    c->pc = RC_ADDR(0x000229c4u);
    rc_step(c, m, 6);
    t0 = rc_a_get(c, 1, RC_L);
    rc_cmp(c, RC_L, c->a[2], t0);

L_229C6:
    /* 000229c6   2  bne 000229d6 */
    c->pc = RC_ADDR(0x000229c6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_229D6;

L_229C8:
    /* 000229c8   4  move.w #1c07,D1 */
    c->pc = RC_ADDR(0x000229c8u);
    rc_step(c, m, 8);
    t0 = 0x00001c07u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_229CC:
    /* 000229cc   2  bmi 000229d6 */
    c->pc = RC_ADDR(0x000229ccu);
    rc_step(c, m, 10);
    if (rc_cond(c, 11)) goto L_229D6;

L_229CE:
    /* 000229ce   2  moveq #0,D2 */
    c->pc = RC_ADDR(0x000229ceu);
    rc_step(c, m, 4);
    c->d[2] = 0x00000000u;
    rc_set_nzvc(c, c->d[2], RC_L);

L_229D0:
    /* 000229d0   2  move.l D2,(A1)+ */
    c->pc = RC_ADDR(0x000229d0u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 2, RC_L);
    t3 = c->a[1];
    c->a[1] += 4u;
    rc_wr32(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_L);

L_229D2:
    /* 000229d2   4  dbf D1,000229d0 */
    c->pc = RC_ADDR(0x000229d2u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 1, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 1, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_229D0; }
    }

L_229D6:
    /* 000229d6   4  move.l A7,(4520,A4) */
    c->pc = RC_ADDR(0x000229d6u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 7, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x4520u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_229DA:
    /* 000229da   4  movea.l (00000004).l,A6 */
    c->pc = RC_ADDR(0x000229dau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, 0x00000004u);
    c->a[6] = t0;

L_229DE:
    /* 000229de   4  move.l A6,(4524,A4) */
    c->pc = RC_ADDR(0x000229deu);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 6, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x4524u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_229E2:
    /* 000229e2   4  movem.l { D7 A7 },-(SP) */
    c->pc = RC_ADDR(0x000229e2u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[0]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[0]);
    c->a[7] = t3;

L_229E6:
    /* 000229e6   6  btst #4,(129,A6) */
    c->pc = RC_ADDR(0x000229e6u);
    rc_step(c, m, 16);
    t3 = (c->a[6] + 0x129u);
    t4 = 0x00000004u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_229EC:
    /* 000229ec   2  beq 000229fe */
    c->pc = RC_ADDR(0x000229ecu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_229FE;

L_229EE:
    /* 000229ee   4  lea (000229f8),A5 */
    c->pc = RC_ADDR(0x000229eeu);
    rc_step(c, m, 8);
    c->a[5] = RC_ADDR(0x000229f8u);

L_229F2:
    /* 000229f2   4  jsr (ffffffe2,A6) */
    c->pc = RC_ADDR(0x000229f2u);
    rc_step(c, m, 18);
    c->pc = RC_ADDR(0x000229f6u);
    rc_push32(c, m, RC_ADDR(0x000229f6u));
    rc_depth++;
    rc_os_call_a6(c, m, -30);

L_229F6:
    /* 000229f6   2  bra 000229fe */
    c->pc = RC_ADDR(0x000229f6u);
    rc_step(c, m, 10);
    goto L_229FE;

L_229FE:
    /* 000229fe   4  lea (00022a20),A1 */
    c->pc = RC_ADDR(0x000229feu);
    rc_step(c, m, 8);
    c->a[1] = RC_ADDR(0x00022a20u);

L_22A02:
    /* 00022a02   4  jsr (fffffe68,A6) */
    c->pc = RC_ADDR(0x00022a02u);
    rc_step(c, m, 18);
    c->pc = RC_ADDR(0x00022a06u);
    rc_push32(c, m, RC_ADDR(0x00022a06u));
    rc_depth++;
    rc_os_call_a6(c, m, -408);

L_22A06:
    /* 00022a06   4  move.l D0,(4528,A4) */
    c->pc = RC_ADDR(0x00022a06u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x4528u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_22A0A:
    /* 00022a0a   2  bne 00022a18 */
    c->pc = RC_ADDR(0x00022a0au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_22A18;

L_22A0C:
    /* 00022a0c   6  move.l #38007,D7 */
    c->pc = RC_ADDR(0x00022a0cu);
    rc_step(c, m, 12);
    t0 = 0x00038007u;
    rc_d_set(c, 7, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_22A12:
    /* 00022a12   4  jsr (ffffff94,A6) */
    c->pc = RC_ADDR(0x00022a12u);
    rc_step(c, m, 18);
    c->pc = RC_ADDR(0x00022a16u);
    rc_push32(c, m, RC_ADDR(0x00022a16u));
    rc_depth++;
    rc_os_call_a6(c, m, -108);

L_22A16:
    /* 00022a16   2  bra 00022a1c */
    c->pc = RC_ADDR(0x00022a16u);
    rc_step(c, m, 10);
    goto L_22A1C;

L_22A18:
    /* 00022a18   4  jsr (00022a34) */
    c->pc = RC_ADDR(0x00022a18u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00022a1cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00022a34u);
    return;

L_22A1C:
    /* 00022a1c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00022a1cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_22A1E:
    /* 00022a1e   2  rts */
    c->pc = RC_ADDR(0x00022a1eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
