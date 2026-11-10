/* fn_0001faec - 482 byte(s), 139 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001faec(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001faecu): goto L_1FAEC;
    case RC_ADDR(0x0001faf0u): goto L_1FAF0;
    case RC_ADDR(0x0001faf4u): goto L_1FAF4;
    case RC_ADDR(0x0001fafau): goto L_1FAFA;
    case RC_ADDR(0x0001fafeu): goto L_1FAFE;
    case RC_ADDR(0x0001fb02u): goto L_1FB02;
    case RC_ADDR(0x0001fb04u): goto L_1FB04;
    case RC_ADDR(0x0001fb08u): goto L_1FB08;
    case RC_ADDR(0x0001fb0cu): goto L_1FB0C;
    case RC_ADDR(0x0001fb10u): goto L_1FB10;
    case RC_ADDR(0x0001fb14u): goto L_1FB14;
    case RC_ADDR(0x0001fb18u): goto L_1FB18;
    case RC_ADDR(0x0001fb1au): goto L_1FB1A;
    case RC_ADDR(0x0001fb20u): goto L_1FB20;
    case RC_ADDR(0x0001fb22u): goto L_1FB22;
    case RC_ADDR(0x0001fb26u): goto L_1FB26;
    case RC_ADDR(0x0001fb2cu): goto L_1FB2C;
    case RC_ADDR(0x0001fb2eu): goto L_1FB2E;
    case RC_ADDR(0x0001fb32u): goto L_1FB32;
    case RC_ADDR(0x0001fb36u): goto L_1FB36;
    case RC_ADDR(0x0001fb3cu): goto L_1FB3C;
    case RC_ADDR(0x0001fb3eu): goto L_1FB3E;
    case RC_ADDR(0x0001fb42u): goto L_1FB42;
    case RC_ADDR(0x0001fb44u): goto L_1FB44;
    case RC_ADDR(0x0001fb48u): goto L_1FB48;
    case RC_ADDR(0x0001fb4au): goto L_1FB4A;
    case RC_ADDR(0x0001fb4cu): goto L_1FB4C;
    case RC_ADDR(0x0001fb4eu): goto L_1FB4E;
    case RC_ADDR(0x0001fb50u): goto L_1FB50;
    case RC_ADDR(0x0001fb54u): goto L_1FB54;
    case RC_ADDR(0x0001fb56u): goto L_1FB56;
    case RC_ADDR(0x0001fb5au): goto L_1FB5A;
    case RC_ADDR(0x0001fb5eu): goto L_1FB5E;
    case RC_ADDR(0x0001fb60u): goto L_1FB60;
    case RC_ADDR(0x0001fb64u): goto L_1FB64;
    case RC_ADDR(0x0001fb66u): goto L_1FB66;
    case RC_ADDR(0x0001fb68u): goto L_1FB68;
    case RC_ADDR(0x0001fb6au): goto L_1FB6A;
    case RC_ADDR(0x0001fb6eu): goto L_1FB6E;
    case RC_ADDR(0x0001fb70u): goto L_1FB70;
    case RC_ADDR(0x0001fb74u): goto L_1FB74;
    case RC_ADDR(0x0001fb76u): goto L_1FB76;
    case RC_ADDR(0x0001fb7cu): goto L_1FB7C;
    case RC_ADDR(0x0001fb82u): goto L_1FB82;
    case RC_ADDR(0x0001fb88u): goto L_1FB88;
    case RC_ADDR(0x0001fb8cu): goto L_1FB8C;
    case RC_ADDR(0x0001fb92u): goto L_1FB92;
    case RC_ADDR(0x0001fb98u): goto L_1FB98;
    case RC_ADDR(0x0001fb9cu): goto L_1FB9C;
    case RC_ADDR(0x0001fba0u): goto L_1FBA0;
    case RC_ADDR(0x0001fba2u): goto L_1FBA2;
    case RC_ADDR(0x0001fba6u): goto L_1FBA6;
    case RC_ADDR(0x0001fba8u): goto L_1FBA8;
    case RC_ADDR(0x0001fbacu): goto L_1FBAC;
    case RC_ADDR(0x0001fbaeu): goto L_1FBAE;
    case RC_ADDR(0x0001fbb2u): goto L_1FBB2;
    case RC_ADDR(0x0001fbb4u): goto L_1FBB4;
    case RC_ADDR(0x0001fbb8u): goto L_1FBB8;
    case RC_ADDR(0x0001fbbau): goto L_1FBBA;
    case RC_ADDR(0x0001fbbeu): goto L_1FBBE;
    case RC_ADDR(0x0001fbc0u): goto L_1FBC0;
    case RC_ADDR(0x0001fbc4u): goto L_1FBC4;
    case RC_ADDR(0x0001fbc8u): goto L_1FBC8;
    case RC_ADDR(0x0001fbccu): goto L_1FBCC;
    case RC_ADDR(0x0001fbd2u): goto L_1FBD2;
    case RC_ADDR(0x0001fbd6u): goto L_1FBD6;
    case RC_ADDR(0x0001fbdau): goto L_1FBDA;
    case RC_ADDR(0x0001fbdcu): goto L_1FBDC;
    case RC_ADDR(0x0001fbe0u): goto L_1FBE0;
    case RC_ADDR(0x0001fbe4u): goto L_1FBE4;
    case RC_ADDR(0x0001fbe8u): goto L_1FBE8;
    case RC_ADDR(0x0001fbeeu): goto L_1FBEE;
    case RC_ADDR(0x0001fbf0u): goto L_1FBF0;
    case RC_ADDR(0x0001fbf4u): goto L_1FBF4;
    case RC_ADDR(0x0001fbf6u): goto L_1FBF6;
    case RC_ADDR(0x0001fbfau): goto L_1FBFA;
    case RC_ADDR(0x0001fbfeu): goto L_1FBFE;
    case RC_ADDR(0x0001fc02u): goto L_1FC02;
    case RC_ADDR(0x0001fc06u): goto L_1FC06;
    case RC_ADDR(0x0001fc0au): goto L_1FC0A;
    case RC_ADDR(0x0001fc0eu): goto L_1FC0E;
    case RC_ADDR(0x0001fc10u): goto L_1FC10;
    case RC_ADDR(0x0001fc14u): goto L_1FC14;
    case RC_ADDR(0x0001fc18u): goto L_1FC18;
    case RC_ADDR(0x0001fc1cu): goto L_1FC1C;
    case RC_ADDR(0x0001fc20u): goto L_1FC20;
    case RC_ADDR(0x0001fc24u): goto L_1FC24;
    case RC_ADDR(0x0001fc28u): goto L_1FC28;
    case RC_ADDR(0x0001fc2cu): goto L_1FC2C;
    case RC_ADDR(0x0001fc30u): goto L_1FC30;
    case RC_ADDR(0x0001fc32u): goto L_1FC32;
    case RC_ADDR(0x0001fc36u): goto L_1FC36;
    case RC_ADDR(0x0001fc3au): goto L_1FC3A;
    case RC_ADDR(0x0001fc3eu): goto L_1FC3E;
    case RC_ADDR(0x0001fc42u): goto L_1FC42;
    case RC_ADDR(0x0001fc48u): goto L_1FC48;
    case RC_ADDR(0x0001fc4cu): goto L_1FC4C;
    case RC_ADDR(0x0001fc50u): goto L_1FC50;
    case RC_ADDR(0x0001fc52u): goto L_1FC52;
    case RC_ADDR(0x0001fc54u): goto L_1FC54;
    case RC_ADDR(0x0001fc56u): goto L_1FC56;
    case RC_ADDR(0x0001fc58u): goto L_1FC58;
    case RC_ADDR(0x0001fc5cu): goto L_1FC5C;
    case RC_ADDR(0x0001fc62u): goto L_1FC62;
    case RC_ADDR(0x0001fc64u): goto L_1FC64;
    case RC_ADDR(0x0001fc68u): goto L_1FC68;
    case RC_ADDR(0x0001fc6cu): goto L_1FC6C;
    case RC_ADDR(0x0001fc6eu): goto L_1FC6E;
    case RC_ADDR(0x0001fc72u): goto L_1FC72;
    case RC_ADDR(0x0001fc74u): goto L_1FC74;
    case RC_ADDR(0x0001fc78u): goto L_1FC78;
    case RC_ADDR(0x0001fc7cu): goto L_1FC7C;
    case RC_ADDR(0x0001fc7eu): goto L_1FC7E;
    case RC_ADDR(0x0001fc82u): goto L_1FC82;
    case RC_ADDR(0x0001fc86u): goto L_1FC86;
    case RC_ADDR(0x0001fc88u): goto L_1FC88;
    case RC_ADDR(0x0001fc8cu): goto L_1FC8C;
    case RC_ADDR(0x0001fc8eu): goto L_1FC8E;
    case RC_ADDR(0x0001fc92u): goto L_1FC92;
    case RC_ADDR(0x0001fc94u): goto L_1FC94;
    case RC_ADDR(0x0001fc98u): goto L_1FC98;
    case RC_ADDR(0x0001fc9cu): goto L_1FC9C;
    case RC_ADDR(0x0001fc9eu): goto L_1FC9E;
    case RC_ADDR(0x0001fca2u): goto L_1FCA2;
    case RC_ADDR(0x0001fca6u): goto L_1FCA6;
    case RC_ADDR(0x0001fca8u): goto L_1FCA8;
    case RC_ADDR(0x0001fcacu): goto L_1FCAC;
    case RC_ADDR(0x0001fcb0u): goto L_1FCB0;
    case RC_ADDR(0x0001fcb2u): goto L_1FCB2;
    case RC_ADDR(0x0001fcb4u): goto L_1FCB4;
    case RC_ADDR(0x0001fcb6u): goto L_1FCB6;
    case RC_ADDR(0x0001fcbau): goto L_1FCBA;
    case RC_ADDR(0x0001fcbeu): goto L_1FCBE;
    case RC_ADDR(0x0001fcc0u): goto L_1FCC0;
    case RC_ADDR(0x0001fcc2u): goto L_1FCC2;
    case RC_ADDR(0x0001fcc6u): goto L_1FCC6;
    case RC_ADDR(0x0001fcc8u): goto L_1FCC8;
    case RC_ADDR(0x0001fccau): goto L_1FCCA;
    case RC_ADDR(0x0001fcccu): goto L_1FCCC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1FAEC:
    /* 0001faec   4  link.w A5,#fffffffc */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001faecu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_1FAF0:
    /* 0001faf0   4  movem.l { D4 D5 A3 },-(SP) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001faf0u);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_1FAF4:
    /* 0001faf4   6  pea (00010000).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001faf4u);
    rc_push32(c, m, RC_ADDR(0x00010000u));

L_1FAFA:
    /* 0001fafa   4  pea (00000114).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fafau);
    rc_push32(c, m, 0x00000114u);

L_1FAFE:
    /* 0001fafe   4  jsr (ffff8338,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fafeu);
    /* vector 137: exec.library -198 */
    c->pc = RC_ADDR(0x0001fb02u);
    rc_os_call(c, m, 0, -198);

L_1FB02:
    /* 0001fb02   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fb02u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1FB04:
    /* 0001fb04   4  move.l D0,(fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fb04u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FB08:
    /* 0001fb08   4  tst.l (fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fb08u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_L);

L_1FB0C:
    /* 0001fb0c   4  beq 0001fcc2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fb0cu);
    if (rc_cond(c, 7)) goto L_1FCC2;

L_1FB10:
    /* 0001fb10   4  move.l (fffffffc,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fb10u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FB14:
    /* 0001fb14   4  jsr (00021880) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fb14u);
    rc_push32(c, m, RC_ADDR(0x0001fb18u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021880u);
    return;

L_1FB18:
    /* 0001fb18   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fb18u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1FB1A:
    /* 0001fb1a   6  btst #3,(10,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fb1au);
    t4 = 0x00000003u;
    t3 = (c->a[5] + 0x10u);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_1FB20:
    /* 0001fb20   2  beq 0001fb2e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fb20u);
    if (rc_cond(c, 7)) goto L_1FB2E;

L_1FB22:
    /* 0001fb22   4  movea.l (fffffffc,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fb22u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1FB26:
    /* 0001fb26   6  move.w #10,(12,A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fb26u);
    t0 = 0x00000010u;
    rc_wr16(c, m, (c->a[0] + 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FB2C:
    /* 0001fb2c   2  bra 0001fb54 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fb2cu);
    goto L_1FB54;

L_1FB2E:
    /* 0001fb2e   4  movea.l (fffffffc,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fb2eu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1FB32:
    /* 0001fb32   4  movea.l (8,A5),A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fb32u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[1] = t0;

L_1FB36:
    /* 0001fb36   6  cmpi.b #5,(5,A1) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fb36u);
    t0 = rc_rd8(c, m, (c->a[1] + 0x5u));
    rc_cmp(c, RC_B, t0, 0x00000005u);

L_1FB3C:
    /* 0001fb3c   2  bcc 0001fb4a */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fb3cu);
    if (rc_cond(c, 4)) goto L_1FB4A;

L_1FB3E:
    /* 0001fb3e   4  movea.l (8,A5),A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fb3eu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[1] = t0;

L_1FB42:
    /* 0001fb42   2  moveq #0,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fb42u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1FB44:
    /* 0001fb44   4  move.b (5,A1),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fb44u);
    t0 = rc_rd8(c, m, (c->a[1] + 0x5u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1FB48:
    /* 0001fb48   2  bra 0001fb4c */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fb48u);
    goto L_1FB4C;

L_1FB4A:
    /* 0001fb4a   2  moveq #5,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fb4au);
    c->d[0] = 0x00000005u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1FB4C:
    /* 0001fb4c   2  moveq #1,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fb4cu);
    c->d[1] = 0x00000001u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1FB4E:
    /* 0001fb4e   2  asl.w D0,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fb4eu);
    c->d[1] = rc_shift(c, 0, 1, (c->d[0] & 63u), rc_d_get(c, 1, RC_W), RC_W);

L_1FB50:
    /* 0001fb50   4  move.w D1,(12,A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fb50u);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[0] + 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FB54:
    /* 0001fb54   2  clr.l -(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fb54u);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1FB56:
    /* 0001fb56   4  pea (00000028).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fb56u);
    rc_push32(c, m, 0x00000028u);

L_1FB5A:
    /* 0001fb5a   4  jsr (ffff8338,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fb5au);
    /* vector 137: exec.library -198 */
    c->pc = RC_ADDR(0x0001fb5eu);
    rc_os_call(c, m, 0, -198);

L_1FB5E:
    /* 0001fb5e   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fb5eu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1FB60:
    /* 0001fb60   4  movea.l (fffffffc,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fb60u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1FB64:
    /* 0001fb64   2  move.l D0,(A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fb64u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FB66:
    /* 0001fb66   2  movea.l D0,A2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fb66u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[2] = t0;

L_1FB68:
    /* 0001fb68   2  move.l A2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fb68u);
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FB6A:
    /* 0001fb6a   4  beq 0001fcc2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fb6au);
    if (rc_cond(c, 7)) goto L_1FCC2;

L_1FB6E:
    /* 0001fb6e   2  move.l A2,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fb6eu);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FB70:
    /* 0001fb70   4  jsr (0002188c) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fb70u);
    rc_push32(c, m, RC_ADDR(0x0001fb74u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002188cu);
    return;

L_1FB74:
    /* 0001fb74   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fb74u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1FB76:
    /* 0001fb76   6  move.w (c,A5),(18,A2) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fb76u);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_wr16(c, m, (c->a[2] + 0x18u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FB7C:
    /* 0001fb7c   6  move.w (e,A5),(1a,A2) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fb7cu);
    t0 = rc_rd16(c, m, (c->a[5] + 0xeu));
    rc_wr16(c, m, (c->a[2] + 0x1au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FB82:
    /* 0001fb82   6  move.w (10,A5),(20,A2) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fb82u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    rc_wr16(c, m, (c->a[2] + 0x20u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FB88:
    /* 0001fb88   4  movea.l (fffffffc,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fb88u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1FB8C:
    /* 0001fb8c   6  move.w (10,A5),(10,A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fb8cu);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    rc_wr16(c, m, (c->a[0] + 0x10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FB92:
    /* 0001fb92   6  pea (00010000).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fb92u);
    rc_push32(c, m, RC_ADDR(0x00010000u));

L_1FB98:
    /* 0001fb98   4  pea (0000000c).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fb98u);
    rc_push32(c, m, 0x0000000cu);

L_1FB9C:
    /* 0001fb9c   4  jsr (ffff8338,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fb9cu);
    /* vector 137: exec.library -198 */
    c->pc = RC_ADDR(0x0001fba0u);
    rc_os_call(c, m, 0, -198);

L_1FBA0:
    /* 0001fba0   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fba0u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1FBA2:
    /* 0001fba2   4  move.l D0,(24,A2) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fba2u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[2] + 0x24u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FBA6:
    /* 0001fba6   2  movea.l D0,A3 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fba6u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[3] = t0;

L_1FBA8:
    /* 0001fba8   4  movea.l (fffffffc,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fba8u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1FBAC:
    /* 0001fbac   2  moveq #0,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fbacu);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1FBAE:
    /* 0001fbae   4  move.w (12,A0),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fbaeu);
    t0 = rc_rd16(c, m, (c->a[0] + 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FBB2:
    /* 0001fbb2   2  move.l D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fbb2u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FBB4:
    /* 0001fbb4   4  jsr (00021832) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fbb4u);
    rc_push32(c, m, RC_ADDR(0x0001fbb8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021832u);
    return;

L_1FBB8:
    /* 0001fbb8   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fbb8u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1FBBA:
    /* 0001fbba   4  move.l D0,(4,A2) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fbbau);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[2] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FBBE:
    /* 0001fbbe   2  move.l A3,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fbbeu);
    t0 = rc_a_get(c, 3, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FBC0:
    /* 0001fbc0   4  beq 0001fcc2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fbc0u);
    if (rc_cond(c, 7)) goto L_1FCC2;

L_1FBC4:
    /* 0001fbc4   4  tst.l (4,A2) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fbc4u);
    t0 = rc_rd32(c, m, (c->a[2] + 0x4u));
    rc_set_nzvc(c, t0, RC_L);

L_1FBC8:
    /* 0001fbc8   4  beq 0001fcc2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fbc8u);
    if (rc_cond(c, 7)) goto L_1FCC2;

L_1FBCC:
    /* 0001fbcc   6  move.l (8,A5),(4,A3) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fbccu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[3] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FBD2:
    /* 0001fbd2   4  move.w (10,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fbd2u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FBD6:
    /* 0001fbd6   4  and.w #8000,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fbd6u);
    t0 = 0x00008000u;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_1FBDA:
    /* 0001fbda   2  bne 0001fbe8 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fbdau);
    if (rc_cond(c, 6)) goto L_1FBE8;

L_1FBDC:
    /* 0001fbdc   4  move.w (c,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fbdcu);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FBE0:
    /* 0001fbe0   4  muls.w #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fbe0u);
    t0 = 0x00000002u;
    rc_muls(c, 0, t0);

L_1FBE4:
    /* 0001fbe4   4  move.w D0,(c,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fbe4u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] + 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FBE8:
    /* 0001fbe8   6  btst #2,(11,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fbe8u);
    t4 = 0x00000002u;
    t3 = (c->a[5] + 0x11u);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_1FBEE:
    /* 0001fbee   2  beq 0001fbfe */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fbeeu);
    if (rc_cond(c, 7)) goto L_1FBFE;

L_1FBF0:
    /* 0001fbf0   4  move.w (e,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fbf0u);
    t0 = rc_rd16(c, m, (c->a[5] + 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FBF4:
    /* 0001fbf4   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fbf4u);
    rc_ext_l(c, 0);

L_1FBF6:
    /* 0001fbf6   4  divs.w #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fbf6u);
    t0 = 0x00000002u;
    rc_divs(c, m, 0, t0);

L_1FBFA:
    /* 0001fbfa   4  move.w D0,(e,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fbfau);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] + 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FBFE:
    /* 0001fbfe   4  movea.l (fffffffc,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fbfeu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1FC02:
    /* 0001fc02   4  movea.l (ffffcba0,A4),A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fc02u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3460u));
    c->a[1] = t0;

L_1FC06:
    /* 0001fc06   4  move.w (da,A1),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fc06u);
    t0 = rc_rd16(c, m, (c->a[1] + 0xdau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FC0A:
    /* 0001fc0a   4  sub.w (c,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fc0au);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1FC0E:
    /* 0001fc0e   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fc0eu);
    rc_ext_l(c, 0);

L_1FC10:
    /* 0001fc10   4  divs.w #4,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fc10u);
    t0 = 0x00000004u;
    rc_divs(c, m, 0, t0);

L_1FC14:
    /* 0001fc14   4  movea.l (ffffcba8,A4),A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fc14u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3458u));
    c->a[1] = t0;

L_1FC18:
    /* 0001fc18   4  add.w (30,A1),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fc18u);
    t0 = rc_rd16(c, m, (c->a[1] + 0x30u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1FC1C:
    /* 0001fc1c   4  move.w D0,(e,A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fc1cu);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[0] + 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FC20:
    /* 0001fc20   4  movea.l (fffffffc,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fc20u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1FC24:
    /* 0001fc24   4  movea.l (ffffcba0,A4),A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fc24u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3460u));
    c->a[1] = t0;

L_1FC28:
    /* 0001fc28   4  move.w (d8,A1),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fc28u);
    t0 = rc_rd16(c, m, (c->a[1] + 0xd8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FC2C:
    /* 0001fc2c   4  sub.w (e,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fc2cu);
    t0 = rc_rd16(c, m, (c->a[5] + 0xeu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1FC30:
    /* 0001fc30   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fc30u);
    rc_ext_l(c, 0);

L_1FC32:
    /* 0001fc32   4  divs.w #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fc32u);
    t0 = 0x00000002u;
    rc_divs(c, m, 0, t0);

L_1FC36:
    /* 0001fc36   4  movea.l (ffffcba8,A4),A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fc36u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3458u));
    c->a[1] = t0;

L_1FC3A:
    /* 0001fc3a   4  add.w (2e,A1),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fc3au);
    t0 = rc_rd16(c, m, (c->a[1] + 0x2eu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1FC3E:
    /* 0001fc3e   4  move.w D0,(c,A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fc3eu);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[0] + 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FC42:
    /* 0001fc42   6  pea (00010001).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fc42u);
    rc_push32(c, m, RC_ADDR(0x00010001u));

L_1FC48:
    /* 0001fc48   4  pea (0000000c).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fc48u);
    rc_push32(c, m, 0x0000000cu);

L_1FC4C:
    /* 0001fc4c   4  jsr (ffff8338,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fc4cu);
    /* vector 137: exec.library -198 */
    c->pc = RC_ADDR(0x0001fc50u);
    rc_os_call(c, m, 0, -198);

L_1FC50:
    /* 0001fc50   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fc50u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1FC52:
    /* 0001fc52   2  move.l D0,D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fc52u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FC54:
    /* 0001fc54   2  tst.l D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fc54u);
    t0 = rc_d_get(c, 4, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_1FC56:
    /* 0001fc56   2  beq 0001fcc2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fc56u);
    if (rc_cond(c, 7)) goto L_1FCC2;

L_1FC58:
    /* 0001fc58   4  pea (00000020).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fc58u);
    rc_push32(c, m, 0x00000020u);

L_1FC5C:
    /* 0001fc5c   6  move.l #dff096,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fc5cu);
    t0 = 0x00dff096u;
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FC62:
    /* 0001fc62   2  move.l D4,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fc62u);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FC64:
    /* 0001fc64   4  jsr (000217d0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fc64u);
    rc_push32(c, m, RC_ADDR(0x0001fc68u));
    rc_depth++;
    c->pc = RC_ADDR(0x000217d0u);
    return;

L_1FC68:
    /* 0001fc68   4  lea (c,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fc68u);
    c->a[7] = (c->a[7] + 0xcu);

L_1FC6C:
    /* 0001fc6c   2  move.l D4,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fc6cu);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FC6E:
    /* 0001fc6e   4  jsr (000217b8) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fc6eu);
    rc_push32(c, m, RC_ADDR(0x0001fc72u));
    rc_depth++;
    c->pc = RC_ADDR(0x000217b8u);
    return;

L_1FC72:
    /* 0001fc72   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fc72u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1FC74:
    /* 0001fc74   4  pea (000000ff).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fc74u);
    rc_push32(c, m, 0x000000ffu);

L_1FC78:
    /* 0001fc78   4  pea (00002710).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fc78u);
    rc_push32(c, m, 0x00002710u);

L_1FC7C:
    /* 0001fc7c   2  move.l D4,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fc7cu);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FC7E:
    /* 0001fc7e   4  jsr (000217e2) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fc7eu);
    rc_push32(c, m, RC_ADDR(0x0001fc82u));
    rc_depth++;
    c->pc = RC_ADDR(0x000217e2u);
    return;

L_1FC82:
    /* 0001fc82   4  lea (c,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fc82u);
    c->a[7] = (c->a[7] + 0xcu);

L_1FC86:
    /* 0001fc86   2  move.l D4,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fc86u);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FC88:
    /* 0001fc88   4  jsr (000217b8) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fc88u);
    rc_push32(c, m, RC_ADDR(0x0001fc8cu));
    rc_depth++;
    c->pc = RC_ADDR(0x000217b8u);
    return;

L_1FC8C:
    /* 0001fc8c   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fc8cu);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1FC8E:
    /* 0001fc8e   4  move.l D4,(14,A2) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fc8eu);
    t0 = rc_d_get(c, 4, RC_L);
    rc_wr32(c, m, (c->a[2] + 0x14u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FC92:
    /* 0001fc92   2  move.l A2,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fc92u);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FC94:
    /* 0001fc94   4  move.l (fffffffc,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fc94u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FC98:
    /* 0001fc98   4  jsr (000218a4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fc98u);
    rc_push32(c, m, RC_ADDR(0x0001fc9cu));
    rc_depth++;
    c->pc = RC_ADDR(0x000218a4u);
    return;

L_1FC9C:
    /* 0001fc9c   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fc9cu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1FC9E:
    /* 0001fc9e   4  move.l (fffffffc,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fc9eu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FCA2:
    /* 0001fca2   4  jsr (000218c4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fca2u);
    rc_push32(c, m, RC_ADDR(0x0001fca6u));
    rc_depth++;
    c->pc = RC_ADDR(0x000218c4u);
    return;

L_1FCA6:
    /* 0001fca6   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fca6u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1FCA8:
    /* 0001fca8   4  move.l (fffffffc,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fca8u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FCAC:
    /* 0001fcac   4  jsr (0001fde8) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fcacu);
    rc_push32(c, m, RC_ADDR(0x0001fcb0u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001fde8u);
    return;

L_1FCB0:
    /* 0001fcb0   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fcb0u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1FCB2:
    /* 0001fcb2   2  tst.w D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fcb2u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1FCB4:
    /* 0001fcb4   2  beq 0001fcc2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fcb4u);
    if (rc_cond(c, 7)) goto L_1FCC2;

L_1FCB6:
    /* 0001fcb6   4  move.l (fffffffc,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fcb6u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FCBA:
    /* 0001fcba   4  movem.l (SP)+,{ D4 A2 A3 } */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fcbau);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_1FCBE:
    /* 0001fcbe   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fcbeu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1FCC0:
    /* 0001fcc0   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fcc0u);
    rc_ret(c, m);
    return;

L_1FCC2:
    /* 0001fcc2   4  pea (fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fcc2u);
    rc_push32(c, m, (c->a[5] - 0x4u));

L_1FCC6:
    /* 0001fcc6   2  bsr 0001fcce */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fcc6u);
    rc_push32(c, m, RC_ADDR(0x0001fcc8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001fcceu);
    return;

L_1FCC8:
    /* 0001fcc8   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fcc8u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1FCCA:
    /* 0001fcca   2  moveq #0,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fccau);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1FCCC:
    /* 0001fccc   2  bra 0001fcba */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fcccu);
    rc_tick();
    goto L_1FCBA;

}
