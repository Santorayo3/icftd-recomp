/* fn_00011026 - 110 byte(s), 33 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00011026(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00011026u): goto L_11026;
    case RC_ADDR(0x0001102au): goto L_1102A;
    case RC_ADDR(0x0001102eu): goto L_1102E;
    case RC_ADDR(0x00011030u): goto L_11030;
    case RC_ADDR(0x00011034u): goto L_11034;
    case RC_ADDR(0x00011036u): goto L_11036;
    case RC_ADDR(0x0001103au): goto L_1103A;
    case RC_ADDR(0x0001103eu): goto L_1103E;
    case RC_ADDR(0x00011040u): goto L_11040;
    case RC_ADDR(0x00011044u): goto L_11044;
    case RC_ADDR(0x00011046u): goto L_11046;
    case RC_ADDR(0x0001104au): goto L_1104A;
    case RC_ADDR(0x0001104cu): goto L_1104C;
    case RC_ADDR(0x00011050u): goto L_11050;
    case RC_ADDR(0x00011054u): goto L_11054;
    case RC_ADDR(0x00011058u): goto L_11058;
    case RC_ADDR(0x0001105au): goto L_1105A;
    case RC_ADDR(0x0001105eu): goto L_1105E;
    case RC_ADDR(0x00011064u): goto L_11064;
    case RC_ADDR(0x00011066u): goto L_11066;
    case RC_ADDR(0x0001106au): goto L_1106A;
    case RC_ADDR(0x0001106eu): goto L_1106E;
    case RC_ADDR(0x00011072u): goto L_11072;
    case RC_ADDR(0x00011074u): goto L_11074;
    case RC_ADDR(0x00011078u): goto L_11078;
    case RC_ADDR(0x0001107cu): goto L_1107C;
    case RC_ADDR(0x00011080u): goto L_11080;
    case RC_ADDR(0x00011082u): goto L_11082;
    case RC_ADDR(0x00011086u): goto L_11086;
    case RC_ADDR(0x0001108au): goto L_1108A;
    case RC_ADDR(0x0001108eu): goto L_1108E;
    case RC_ADDR(0x00011090u): goto L_11090;
    case RC_ADDR(0x00011092u): goto L_11092;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_11026:
    /* 00011026   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00011026u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_1102A:
    /* 0001102a   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001102au);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1102E:
    /* 0001102e   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001102eu);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_11030:
    /* 00011030   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00011030u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11034:
    /* 00011034   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00011034u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_11036:
    /* 00011036   4  lea (b08,A4),A0 */
    c->pc = RC_ADDR(0x00011036u);
    c->a[0] = (c->a[4] + 0xb08u);

L_1103A:
    /* 0001103a   4  tst.l (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001103au);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_L);

L_1103E:
    /* 0001103e   2  beq 0001105a */
    c->pc = RC_ADDR(0x0001103eu);
    if (rc_cond(c, 7)) goto L_1105A;

L_11040:
    /* 00011040   4  pea (00000320).l */
    c->pc = RC_ADDR(0x00011040u);
    rc_push32(c, m, RC_ADDR(0x00000320u));

L_11044:
    /* 00011044   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00011044u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_11046:
    /* 00011046   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00011046u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1104A:
    /* 0001104a   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001104au);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_1104C:
    /* 0001104c   4  lea (b08,A4),A0 */
    c->pc = RC_ADDR(0x0001104cu);
    c->a[0] = (c->a[4] + 0xb08u);

L_11050:
    /* 00011050   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00011050u);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_11054:
    /* 00011054   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x00011054u);
    /* vector 139: exec.library -210 */
    c->pc = RC_ADDR(0x00011058u);
    rc_os_call(c, m, 0, -210);

L_11058:
    /* 00011058   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00011058u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1105A:
    /* 0001105a   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001105au);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1105E:
    /* 0001105e   6  cmpi.w #b8,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001105eu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x000000b8u);

L_11064:
    /* 00011064   2  bcs 0001102e */
    c->pc = RC_ADDR(0x00011064u);
    if (rc_cond(c, 5)) { rc_tick(); goto L_1102E; }

L_11066:
    /* 00011066   4  pea (00001c20).l */
    c->pc = RC_ADDR(0x00011066u);
    rc_push32(c, m, RC_ADDR(0x00001c20u));

L_1106A:
    /* 0001106a   4  move.l (fffff2f8,A4),-(A7) */
    c->pc = RC_ADDR(0x0001106au);
    t0 = rc_rd32(c, m, (c->a[4] - 0xd08u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1106E:
    /* 0001106e   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x0001106eu);
    /* vector 139: exec.library -210 */
    c->pc = RC_ADDR(0x00011072u);
    rc_os_call(c, m, 0, -210);

L_11072:
    /* 00011072   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00011072u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_11074:
    /* 00011074   4  move.l (fffff31c,A4),-(A7) */
    c->pc = RC_ADDR(0x00011074u);
    t0 = rc_rd32(c, m, (c->a[4] - 0xce4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_11078:
    /* 00011078   4  move.l (fffff314,A4),-(A7) */
    c->pc = RC_ADDR(0x00011078u);
    t0 = rc_rd32(c, m, (c->a[4] - 0xcecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1107C:
    /* 0001107c   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x0001107cu);
    /* vector 139: exec.library -210 */
    c->pc = RC_ADDR(0x00011080u);
    rc_os_call(c, m, 0, -210);

L_11080:
    /* 00011080   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00011080u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_11082:
    /* 00011082   4  move.l (fffff320,A4),-(A7) */
    c->pc = RC_ADDR(0x00011082u);
    t0 = rc_rd32(c, m, (c->a[4] - 0xce0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_11086:
    /* 00011086   4  move.l (fffff318,A4),-(A7) */
    c->pc = RC_ADDR(0x00011086u);
    t0 = rc_rd32(c, m, (c->a[4] - 0xce8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1108A:
    /* 0001108a   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x0001108au);
    /* vector 139: exec.library -210 */
    c->pc = RC_ADDR(0x0001108eu);
    rc_os_call(c, m, 0, -210);

L_1108E:
    /* 0001108e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001108eu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_11090:
    /* 00011090   2  unlk A5 */
    c->pc = RC_ADDR(0x00011090u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_11092:
    /* 00011092   2  rts */
    c->pc = RC_ADDR(0x00011092u);
    rc_ret(c, m);
    return;

}
