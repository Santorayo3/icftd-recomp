/* fn_0001a03e - 366 byte(s), 112 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001a03e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001a03eu): goto L_1A03E;
    case RC_ADDR(0x0001a042u): goto L_1A042;
    case RC_ADDR(0x0001a046u): goto L_1A046;
    case RC_ADDR(0x0001a04au): goto L_1A04A;
    case RC_ADDR(0x0001a04cu): goto L_1A04C;
    case RC_ADDR(0x0001a050u): goto L_1A050;
    case RC_ADDR(0x0001a054u): goto L_1A054;
    case RC_ADDR(0x0001a056u): goto L_1A056;
    case RC_ADDR(0x0001a05au): goto L_1A05A;
    case RC_ADDR(0x0001a05cu): goto L_1A05C;
    case RC_ADDR(0x0001a060u): goto L_1A060;
    case RC_ADDR(0x0001a064u): goto L_1A064;
    case RC_ADDR(0x0001a068u): goto L_1A068;
    case RC_ADDR(0x0001a06au): goto L_1A06A;
    case RC_ADDR(0x0001a06eu): goto L_1A06E;
    case RC_ADDR(0x0001a072u): goto L_1A072;
    case RC_ADDR(0x0001a076u): goto L_1A076;
    case RC_ADDR(0x0001a078u): goto L_1A078;
    case RC_ADDR(0x0001a07au): goto L_1A07A;
    case RC_ADDR(0x0001a07eu): goto L_1A07E;
    case RC_ADDR(0x0001a080u): goto L_1A080;
    case RC_ADDR(0x0001a084u): goto L_1A084;
    case RC_ADDR(0x0001a088u): goto L_1A088;
    case RC_ADDR(0x0001a08cu): goto L_1A08C;
    case RC_ADDR(0x0001a08eu): goto L_1A08E;
    case RC_ADDR(0x0001a090u): goto L_1A090;
    case RC_ADDR(0x0001a094u): goto L_1A094;
    case RC_ADDR(0x0001a096u): goto L_1A096;
    case RC_ADDR(0x0001a09au): goto L_1A09A;
    case RC_ADDR(0x0001a09eu): goto L_1A09E;
    case RC_ADDR(0x0001a0a2u): goto L_1A0A2;
    case RC_ADDR(0x0001a0a6u): goto L_1A0A6;
    case RC_ADDR(0x0001a0aau): goto L_1A0AA;
    case RC_ADDR(0x0001a0aeu): goto L_1A0AE;
    case RC_ADDR(0x0001a0b2u): goto L_1A0B2;
    case RC_ADDR(0x0001a0b6u): goto L_1A0B6;
    case RC_ADDR(0x0001a0b8u): goto L_1A0B8;
    case RC_ADDR(0x0001a0bcu): goto L_1A0BC;
    case RC_ADDR(0x0001a0c0u): goto L_1A0C0;
    case RC_ADDR(0x0001a0c4u): goto L_1A0C4;
    case RC_ADDR(0x0001a0c8u): goto L_1A0C8;
    case RC_ADDR(0x0001a0cau): goto L_1A0CA;
    case RC_ADDR(0x0001a0ccu): goto L_1A0CC;
    case RC_ADDR(0x0001a0d0u): goto L_1A0D0;
    case RC_ADDR(0x0001a0d4u): goto L_1A0D4;
    case RC_ADDR(0x0001a0d8u): goto L_1A0D8;
    case RC_ADDR(0x0001a0dau): goto L_1A0DA;
    case RC_ADDR(0x0001a0dcu): goto L_1A0DC;
    case RC_ADDR(0x0001a0e0u): goto L_1A0E0;
    case RC_ADDR(0x0001a0e2u): goto L_1A0E2;
    case RC_ADDR(0x0001a0e4u): goto L_1A0E4;
    case RC_ADDR(0x0001a0e8u): goto L_1A0E8;
    case RC_ADDR(0x0001a0eau): goto L_1A0EA;
    case RC_ADDR(0x0001a0eeu): goto L_1A0EE;
    case RC_ADDR(0x0001a0f2u): goto L_1A0F2;
    case RC_ADDR(0x0001a0f4u): goto L_1A0F4;
    case RC_ADDR(0x0001a0f6u): goto L_1A0F6;
    case RC_ADDR(0x0001a0fau): goto L_1A0FA;
    case RC_ADDR(0x0001a0feu): goto L_1A0FE;
    case RC_ADDR(0x0001a102u): goto L_1A102;
    case RC_ADDR(0x0001a104u): goto L_1A104;
    case RC_ADDR(0x0001a106u): goto L_1A106;
    case RC_ADDR(0x0001a10au): goto L_1A10A;
    case RC_ADDR(0x0001a10eu): goto L_1A10E;
    case RC_ADDR(0x0001a110u): goto L_1A110;
    case RC_ADDR(0x0001a114u): goto L_1A114;
    case RC_ADDR(0x0001a116u): goto L_1A116;
    case RC_ADDR(0x0001a11au): goto L_1A11A;
    case RC_ADDR(0x0001a11cu): goto L_1A11C;
    case RC_ADDR(0x0001a120u): goto L_1A120;
    case RC_ADDR(0x0001a124u): goto L_1A124;
    case RC_ADDR(0x0001a126u): goto L_1A126;
    case RC_ADDR(0x0001a12au): goto L_1A12A;
    case RC_ADDR(0x0001a12cu): goto L_1A12C;
    case RC_ADDR(0x0001a12eu): goto L_1A12E;
    case RC_ADDR(0x0001a130u): goto L_1A130;
    case RC_ADDR(0x0001a134u): goto L_1A134;
    case RC_ADDR(0x0001a138u): goto L_1A138;
    case RC_ADDR(0x0001a13cu): goto L_1A13C;
    case RC_ADDR(0x0001a13eu): goto L_1A13E;
    case RC_ADDR(0x0001a140u): goto L_1A140;
    case RC_ADDR(0x0001a144u): goto L_1A144;
    case RC_ADDR(0x0001a148u): goto L_1A148;
    case RC_ADDR(0x0001a14au): goto L_1A14A;
    case RC_ADDR(0x0001a14eu): goto L_1A14E;
    case RC_ADDR(0x0001a150u): goto L_1A150;
    case RC_ADDR(0x0001a154u): goto L_1A154;
    case RC_ADDR(0x0001a156u): goto L_1A156;
    case RC_ADDR(0x0001a15au): goto L_1A15A;
    case RC_ADDR(0x0001a15eu): goto L_1A15E;
    case RC_ADDR(0x0001a160u): goto L_1A160;
    case RC_ADDR(0x0001a162u): goto L_1A162;
    case RC_ADDR(0x0001a166u): goto L_1A166;
    case RC_ADDR(0x0001a16au): goto L_1A16A;
    case RC_ADDR(0x0001a16eu): goto L_1A16E;
    case RC_ADDR(0x0001a172u): goto L_1A172;
    case RC_ADDR(0x0001a174u): goto L_1A174;
    case RC_ADDR(0x0001a178u): goto L_1A178;
    case RC_ADDR(0x0001a17cu): goto L_1A17C;
    case RC_ADDR(0x0001a17eu): goto L_1A17E;
    case RC_ADDR(0x0001a182u): goto L_1A182;
    case RC_ADDR(0x0001a184u): goto L_1A184;
    case RC_ADDR(0x0001a196u): goto L_1A196;
    case RC_ADDR(0x0001a19cu): goto L_1A19C;
    case RC_ADDR(0x0001a19eu): goto L_1A19E;
    case RC_ADDR(0x0001a1a0u): goto L_1A1A0;
    case RC_ADDR(0x0001a1a4u): goto L_1A1A4;
    case RC_ADDR(0x0001a1a8u): goto L_1A1A8;
    case RC_ADDR(0x0001a1acu): goto L_1A1AC;
    case RC_ADDR(0x0001a1b4u): goto L_1A1B4;
    case RC_ADDR(0x0001a1b8u): goto L_1A1B8;
    case RC_ADDR(0x0001a1bau): goto L_1A1BA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1A03E:
    /* 0001a03e   4  link.w A5,#fffffff8 */
    c->pc = RC_ADDR(0x0001a03eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x8u;

L_1A042:
    /* 0001a042   4  clr.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001a042u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1A046:
    /* 0001a046   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001a046u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A04A:
    /* 0001a04a   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001a04au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1A04C:
    /* 0001a04c   4  lea (9de,A4),A0 */
    c->pc = RC_ADDR(0x0001a04cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x9deu);

L_1A050:
    /* 0001a050   4  tst.l (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001a050u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_L);

L_1A054:
    /* 0001a054   2  beq 0001a09a */
    c->pc = RC_ADDR(0x0001a054u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1A09A;

L_1A056:
    /* 0001a056   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001a056u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A05A:
    /* 0001a05a   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001a05au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1A05C:
    /* 0001a05c   4  lea (9de,A4),A0 */
    c->pc = RC_ADDR(0x0001a05cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x9deu);

L_1A060:
    /* 0001a060   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0001a060u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A064:
    /* 0001a064   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001a064u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A068:
    /* 0001a068   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a068u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A06A:
    /* 0001a06a   4  lea (9c4,A4),A0 */
    c->pc = RC_ADDR(0x0001a06au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x9c4u);

L_1A06E:
    /* 0001a06e   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001a06eu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A072:
    /* 0001a072   4  sub.w (472,A4),D1 */
    c->pc = RC_ADDR(0x0001a072u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x472u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1A076:
    /* 0001a076   2  subq.w #7,D1 */
    c->pc = RC_ADDR(0x0001a076u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - 0x00000007u;
    rc_flags_sub(c, RC_W, t1, 0x00000007u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1A078:
    /* 0001a078   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0001a078u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A07A:
    /* 0001a07a   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001a07au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A07E:
    /* 0001a07e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a07eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A080:
    /* 0001a080   4  lea (9aa,A4),A0 */
    c->pc = RC_ADDR(0x0001a080u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x9aau);

L_1A084:
    /* 0001a084   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001a084u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A088:
    /* 0001a088   4  sub.w (470,A4),D1 */
    c->pc = RC_ADDR(0x0001a088u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x470u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1A08C:
    /* 0001a08c   2  subq.w #6,D1 */
    c->pc = RC_ADDR(0x0001a08cu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - 0x00000006u;
    rc_flags_sub(c, RC_W, t1, 0x00000006u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1A08E:
    /* 0001a08e   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0001a08eu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A090:
    /* 0001a090   4  jsr (ffff8158,A4) */
    c->pc = RC_ADDR(0x0001a090u);
    rc_step(c, m, 18);
    /* vector 57 */
    rc_push32(c, m, RC_ADDR(0x0001a094u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021baeu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00011208u);
    return;

L_1A094:
    /* 0001a094   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001a094u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1A096:
    /* 0001a096   4  bra 0001a1a8 */
    c->pc = RC_ADDR(0x0001a096u);
    rc_step(c, m, 10);
    goto L_1A1A8;

L_1A09A:
    /* 0001a09a   4  move.w (47a,A4),D0 */
    c->pc = RC_ADDR(0x0001a09au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A09E:
    /* 0001a09e   4  sub.w (470,A4),D0 */
    c->pc = RC_ADDR(0x0001a09eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x470u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A0A2:
    /* 0001a0a2   4  move.w D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x0001a0a2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A0A6:
    /* 0001a0a6   4  move.w (47c,A4),D0 */
    c->pc = RC_ADDR(0x0001a0a6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A0AA:
    /* 0001a0aa   4  sub.w (472,A4),D0 */
    c->pc = RC_ADDR(0x0001a0aau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x472u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A0AE:
    /* 0001a0ae   4  move.w D0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0001a0aeu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A0B2:
    /* 0001a0b2   4  move.w (478,A4),D0 */
    c->pc = RC_ADDR(0x0001a0b2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x478u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A0B6:
    /* 0001a0b6   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001a0b6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1A0B8:
    /* 0001a0b8   4  bra 0001a196 */
    c->pc = RC_ADDR(0x0001a0b8u);
    rc_step(c, m, 10);
    goto L_1A196;

L_1A0BC:
    /* 0001a0bc   4  move.w (48a,A4),D0 */
    c->pc = RC_ADDR(0x0001a0bcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x48au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A0C0:
    /* 0001a0c0   4  muls.w #5,D0 */
    c->pc = RC_ADDR(0x0001a0c0u);
    rc_step(c, m, 42);
    t0 = 0x00000005u;
    rc_muls(c, 0, t0);

L_1A0C4:
    /* 0001a0c4   4  add.w (482,A4),D0 */
    c->pc = RC_ADDR(0x0001a0c4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x482u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A0C8:
    /* 0001a0c8   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001a0c8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1A0CA:
    /* 0001a0ca   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001a0cau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1A0CC:
    /* 0001a0cc   4  lea (752,A4),A0 */
    c->pc = RC_ADDR(0x0001a0ccu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x752u);

L_1A0D0:
    /* 0001a0d0   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0001a0d0u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A0D4:
    /* 0001a0d4   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0001a0d4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A0D8:
    /* 0001a0d8   2  subq.w #7,D0 */
    c->pc = RC_ADDR(0x0001a0d8u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000007u;
    rc_flags_sub(c, RC_W, t1, 0x00000007u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A0DA:
    /* 0001a0da   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001a0dau);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A0DC:
    /* 0001a0dc   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0001a0dcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A0E0:
    /* 0001a0e0   2  subq.w #6,D0 */
    c->pc = RC_ADDR(0x0001a0e0u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000006u;
    rc_flags_sub(c, RC_W, t1, 0x00000006u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A0E2:
    /* 0001a0e2   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001a0e2u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A0E4:
    /* 0001a0e4   4  jsr (ffff8158,A4) */
    c->pc = RC_ADDR(0x0001a0e4u);
    rc_step(c, m, 18);
    /* vector 57 */
    rc_push32(c, m, RC_ADDR(0x0001a0e8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021baeu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00011208u);
    return;

L_1A0E8:
    /* 0001a0e8   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001a0e8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1A0EA:
    /* 0001a0ea   4  bra 0001a1a8 */
    c->pc = RC_ADDR(0x0001a0eau);
    rc_step(c, m, 10);
    goto L_1A1A8;

L_1A0EE:
    /* 0001a0ee   4  move.w (48a,A4),D0 */
    c->pc = RC_ADDR(0x0001a0eeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x48au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A0F2:
    /* 0001a0f2   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001a0f2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1A0F4:
    /* 0001a0f4   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001a0f4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1A0F6:
    /* 0001a0f6   4  lea (1fd0,A4),A0 */
    c->pc = RC_ADDR(0x0001a0f6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1fd0u);

L_1A0FA:
    /* 0001a0fa   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0001a0fau);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A0FE:
    /* 0001a0fe   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0001a0feu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A102:
    /* 0001a102   2  subq.w #7,D0 */
    c->pc = RC_ADDR(0x0001a102u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000007u;
    rc_flags_sub(c, RC_W, t1, 0x00000007u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A104:
    /* 0001a104   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001a104u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A106:
    /* 0001a106   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0001a106u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A10A:
    /* 0001a10a   4  sub.w #a,D0 */
    c->pc = RC_ADDR(0x0001a10au);
    rc_step(c, m, 10);
    t0 = 0x0000000au;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A10E:
    /* 0001a10e   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001a10eu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A110:
    /* 0001a110   4  jsr (ffff8158,A4) */
    c->pc = RC_ADDR(0x0001a110u);
    rc_step(c, m, 18);
    /* vector 57 */
    rc_push32(c, m, RC_ADDR(0x0001a114u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021baeu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00011208u);
    return;

L_1A114:
    /* 0001a114   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001a114u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1A116:
    /* 0001a116   4  tst.w (ffffb030,A4) */
    c->pc = RC_ADDR(0x0001a116u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd0u));
    rc_set_nzvc(c, t0, RC_W);

L_1A11A:
    /* 0001a11a   2  beq 0001a150 */
    c->pc = RC_ADDR(0x0001a11au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1A150;

L_1A11C:
    /* 0001a11c   4  move.w (48c,A4),D0 */
    c->pc = RC_ADDR(0x0001a11cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x48cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A120:
    /* 0001a120   4  and.w #7,D0 */
    c->pc = RC_ADDR(0x0001a120u);
    rc_step(c, m, 10);
    t0 = 0x00000007u;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_1A124:
    /* 0001a124   2  beq 0001a150 */
    c->pc = RC_ADDR(0x0001a124u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1A150;

L_1A126:
    /* 0001a126   4  move.w (48a,A4),D0 */
    c->pc = RC_ADDR(0x0001a126u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x48au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A12A:
    /* 0001a12a   2  addq.w #8,D0 */
    c->pc = RC_ADDR(0x0001a12au);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000008u;
    rc_flags_add(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A12C:
    /* 0001a12c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001a12cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1A12E:
    /* 0001a12e   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001a12eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1A130:
    /* 0001a130   4  lea (1fd0,A4),A0 */
    c->pc = RC_ADDR(0x0001a130u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1fd0u);

L_1A134:
    /* 0001a134   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0001a134u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A138:
    /* 0001a138   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0001a138u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A13C:
    /* 0001a13c   2  subq.w #7,D0 */
    c->pc = RC_ADDR(0x0001a13cu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000007u;
    rc_flags_sub(c, RC_W, t1, 0x00000007u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A13E:
    /* 0001a13e   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001a13eu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A140:
    /* 0001a140   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0001a140u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A144:
    /* 0001a144   4  sub.w #a,D0 */
    c->pc = RC_ADDR(0x0001a144u);
    rc_step(c, m, 10);
    t0 = 0x0000000au;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A148:
    /* 0001a148   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001a148u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A14A:
    /* 0001a14a   4  jsr (ffff8158,A4) */
    c->pc = RC_ADDR(0x0001a14au);
    rc_step(c, m, 18);
    /* vector 57 */
    rc_push32(c, m, RC_ADDR(0x0001a14eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021baeu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00011208u);
    return;

L_1A14E:
    /* 0001a14e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001a14eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1A150:
    /* 0001a150   4  addq.w #1,(48c,A4) */
    c->pc = RC_ADDR(0x0001a150u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x48cu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1A154:
    /* 0001a154   2  bra 0001a1a8 */
    c->pc = RC_ADDR(0x0001a154u);
    rc_step(c, m, 10);
    goto L_1A1A8;

L_1A156:
    /* 0001a156   4  move.w (1cbc,A4),D0 */
    c->pc = RC_ADDR(0x0001a156u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cbcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A15A:
    /* 0001a15a   4  add.w (482,A4),D0 */
    c->pc = RC_ADDR(0x0001a15au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x482u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A15E:
    /* 0001a15e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001a15eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1A160:
    /* 0001a160   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001a160u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1A162:
    /* 0001a162   4  lea (1f74,A4),A0 */
    c->pc = RC_ADDR(0x0001a162u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1f74u);

L_1A166:
    /* 0001a166   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0001a166u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A16A:
    /* 0001a16a   4  move.w (1cb8,A4),D0 */
    c->pc = RC_ADDR(0x0001a16au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cb8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A16E:
    /* 0001a16e   4  sub.w (472,A4),D0 */
    c->pc = RC_ADDR(0x0001a16eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x472u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A172:
    /* 0001a172   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001a172u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A174:
    /* 0001a174   4  move.w (1cb6,A4),D0 */
    c->pc = RC_ADDR(0x0001a174u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cb6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A178:
    /* 0001a178   4  sub.w (470,A4),D0 */
    c->pc = RC_ADDR(0x0001a178u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x470u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A17C:
    /* 0001a17c   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001a17cu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A17E:
    /* 0001a17e   4  jsr (ffff8158,A4) */
    c->pc = RC_ADDR(0x0001a17eu);
    rc_step(c, m, 18);
    /* vector 57 */
    rc_push32(c, m, RC_ADDR(0x0001a182u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021baeu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00011208u);
    return;

L_1A182:
    /* 0001a182   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001a182u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1A184:
    /* 0001a184   2  bra 0001a1a8 */
    c->pc = RC_ADDR(0x0001a184u);
    rc_step(c, m, 10);
    goto L_1A1A8;

L_1A196:
    /* 0001a196   6  cmp.l #8,D0 */
    c->pc = RC_ADDR(0x0001a196u);
    rc_step(c, m, 14);
    t0 = 0x00000008u;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1A19C:
    /* 0001a19c   2  bcc 0001a1a8 */
    c->pc = RC_ADDR(0x0001a19cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_1A1A8;

L_1A19E:
    /* 0001a19e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a19eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A1A0:
    /* 0001a1a0   4  move.w (0001a186),D0 */
    c->pc = RC_ADDR(0x0001a1a0u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (RC_ADDR(0x0001a186u) + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A1A4:
    /* 0001a1a4   4  jmp (0001a1a6) */
    c->pc = RC_ADDR(0x0001a1a4u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (RC_ADDR(0x0001a1a6u) + t4);
    c->pc = t3;
    return;

L_1A1A8:
    /* 0001a1a8   4  addq.l #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001a1a8u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_1A1AC:
    /* 0001a1ac   8  cmpi.l #d,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001a1acu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x0000000du);

L_1A1B4:
    /* 0001a1b4   4  blt 0001a046 */
    c->pc = RC_ADDR(0x0001a1b4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1A046; }

L_1A1B8:
    /* 0001a1b8   2  unlk A5 */
    c->pc = RC_ADDR(0x0001a1b8u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1A1BA:
    /* 0001a1ba   2  rts */
    c->pc = RC_ADDR(0x0001a1bau);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
