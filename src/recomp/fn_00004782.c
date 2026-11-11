/* fn_00004782 - 834 byte(s), 236 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00004782(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00004782u): goto L_4782;
    case RC_ADDR(0x00004786u): goto L_4786;
    case RC_ADDR(0x0000478au): goto L_478A;
    case RC_ADDR(0x0000478eu): goto L_478E;
    case RC_ADDR(0x00004794u): goto L_4794;
    case RC_ADDR(0x00004796u): goto L_4796;
    case RC_ADDR(0x0000479au): goto L_479A;
    case RC_ADDR(0x0000479eu): goto L_479E;
    case RC_ADDR(0x000047a2u): goto L_47A2;
    case RC_ADDR(0x000047a6u): goto L_47A6;
    case RC_ADDR(0x000047aau): goto L_47AA;
    case RC_ADDR(0x000047aeu): goto L_47AE;
    case RC_ADDR(0x000047b2u): goto L_47B2;
    case RC_ADDR(0x000047b4u): goto L_47B4;
    case RC_ADDR(0x000047b8u): goto L_47B8;
    case RC_ADDR(0x000047bcu): goto L_47BC;
    case RC_ADDR(0x000047c0u): goto L_47C0;
    case RC_ADDR(0x000047c4u): goto L_47C4;
    case RC_ADDR(0x000047c6u): goto L_47C6;
    case RC_ADDR(0x000047ccu): goto L_47CC;
    case RC_ADDR(0x000047d2u): goto L_47D2;
    case RC_ADDR(0x000047d4u): goto L_47D4;
    case RC_ADDR(0x000047d8u): goto L_47D8;
    case RC_ADDR(0x000047dcu): goto L_47DC;
    case RC_ADDR(0x000047e0u): goto L_47E0;
    case RC_ADDR(0x000047e4u): goto L_47E4;
    case RC_ADDR(0x000047e8u): goto L_47E8;
    case RC_ADDR(0x000047ecu): goto L_47EC;
    case RC_ADDR(0x000047f0u): goto L_47F0;
    case RC_ADDR(0x000047f4u): goto L_47F4;
    case RC_ADDR(0x000047f8u): goto L_47F8;
    case RC_ADDR(0x000047fcu): goto L_47FC;
    case RC_ADDR(0x000047feu): goto L_47FE;
    case RC_ADDR(0x00004804u): goto L_4804;
    case RC_ADDR(0x00004806u): goto L_4806;
    case RC_ADDR(0x0000480cu): goto L_480C;
    case RC_ADDR(0x00004810u): goto L_4810;
    case RC_ADDR(0x00004812u): goto L_4812;
    case RC_ADDR(0x00004816u): goto L_4816;
    case RC_ADDR(0x00004818u): goto L_4818;
    case RC_ADDR(0x0000481au): goto L_481A;
    case RC_ADDR(0x0000481eu): goto L_481E;
    case RC_ADDR(0x00004820u): goto L_4820;
    case RC_ADDR(0x00004822u): goto L_4822;
    case RC_ADDR(0x00004826u): goto L_4826;
    case RC_ADDR(0x0000482au): goto L_482A;
    case RC_ADDR(0x0000482cu): goto L_482C;
    case RC_ADDR(0x00004830u): goto L_4830;
    case RC_ADDR(0x00004832u): goto L_4832;
    case RC_ADDR(0x00004836u): goto L_4836;
    case RC_ADDR(0x00004838u): goto L_4838;
    case RC_ADDR(0x0000483au): goto L_483A;
    case RC_ADDR(0x0000483eu): goto L_483E;
    case RC_ADDR(0x00004844u): goto L_4844;
    case RC_ADDR(0x0000484au): goto L_484A;
    case RC_ADDR(0x0000484cu): goto L_484C;
    case RC_ADDR(0x00004852u): goto L_4852;
    case RC_ADDR(0x00004856u): goto L_4856;
    case RC_ADDR(0x00004858u): goto L_4858;
    case RC_ADDR(0x0000485au): goto L_485A;
    case RC_ADDR(0x0000485eu): goto L_485E;
    case RC_ADDR(0x00004860u): goto L_4860;
    case RC_ADDR(0x00004862u): goto L_4862;
    case RC_ADDR(0x00004866u): goto L_4866;
    case RC_ADDR(0x00004868u): goto L_4868;
    case RC_ADDR(0x0000486cu): goto L_486C;
    case RC_ADDR(0x00004870u): goto L_4870;
    case RC_ADDR(0x00004872u): goto L_4872;
    case RC_ADDR(0x00004876u): goto L_4876;
    case RC_ADDR(0x00004878u): goto L_4878;
    case RC_ADDR(0x0000487au): goto L_487A;
    case RC_ADDR(0x0000487eu): goto L_487E;
    case RC_ADDR(0x00004880u): goto L_4880;
    case RC_ADDR(0x00004884u): goto L_4884;
    case RC_ADDR(0x00004888u): goto L_4888;
    case RC_ADDR(0x0000488au): goto L_488A;
    case RC_ADDR(0x0000488cu): goto L_488C;
    case RC_ADDR(0x00004892u): goto L_4892;
    case RC_ADDR(0x00004898u): goto L_4898;
    case RC_ADDR(0x0000489au): goto L_489A;
    case RC_ADDR(0x0000489eu): goto L_489E;
    case RC_ADDR(0x000048a0u): goto L_48A0;
    case RC_ADDR(0x000048a6u): goto L_48A6;
    case RC_ADDR(0x000048acu): goto L_48AC;
    case RC_ADDR(0x000048aeu): goto L_48AE;
    case RC_ADDR(0x000048b4u): goto L_48B4;
    case RC_ADDR(0x000048bau): goto L_48BA;
    case RC_ADDR(0x000048beu): goto L_48BE;
    case RC_ADDR(0x000048c2u): goto L_48C2;
    case RC_ADDR(0x000048c6u): goto L_48C6;
    case RC_ADDR(0x000048cau): goto L_48CA;
    case RC_ADDR(0x000048ccu): goto L_48CC;
    case RC_ADDR(0x000048d0u): goto L_48D0;
    case RC_ADDR(0x000048d4u): goto L_48D4;
    case RC_ADDR(0x000048d8u): goto L_48D8;
    case RC_ADDR(0x000048dcu): goto L_48DC;
    case RC_ADDR(0x000048e0u): goto L_48E0;
    case RC_ADDR(0x000048e4u): goto L_48E4;
    case RC_ADDR(0x000048e6u): goto L_48E6;
    case RC_ADDR(0x000048eau): goto L_48EA;
    case RC_ADDR(0x000048eeu): goto L_48EE;
    case RC_ADDR(0x000048f2u): goto L_48F2;
    case RC_ADDR(0x000048f6u): goto L_48F6;
    case RC_ADDR(0x000048fau): goto L_48FA;
    case RC_ADDR(0x000048fcu): goto L_48FC;
    case RC_ADDR(0x000048feu): goto L_48FE;
    case RC_ADDR(0x00004902u): goto L_4902;
    case RC_ADDR(0x00004906u): goto L_4906;
    case RC_ADDR(0x0000490au): goto L_490A;
    case RC_ADDR(0x00004910u): goto L_4910;
    case RC_ADDR(0x00004912u): goto L_4912;
    case RC_ADDR(0x00004918u): goto L_4918;
    case RC_ADDR(0x0000491cu): goto L_491C;
    case RC_ADDR(0x0000491eu): goto L_491E;
    case RC_ADDR(0x00004920u): goto L_4920;
    case RC_ADDR(0x00004922u): goto L_4922;
    case RC_ADDR(0x00004926u): goto L_4926;
    case RC_ADDR(0x00004928u): goto L_4928;
    case RC_ADDR(0x0000492au): goto L_492A;
    case RC_ADDR(0x0000492cu): goto L_492C;
    case RC_ADDR(0x00004930u): goto L_4930;
    case RC_ADDR(0x00004934u): goto L_4934;
    case RC_ADDR(0x00004938u): goto L_4938;
    case RC_ADDR(0x0000493cu): goto L_493C;
    case RC_ADDR(0x00004940u): goto L_4940;
    case RC_ADDR(0x00004944u): goto L_4944;
    case RC_ADDR(0x00004948u): goto L_4948;
    case RC_ADDR(0x0000494au): goto L_494A;
    case RC_ADDR(0x0000494cu): goto L_494C;
    case RC_ADDR(0x00004950u): goto L_4950;
    case RC_ADDR(0x00004952u): goto L_4952;
    case RC_ADDR(0x00004954u): goto L_4954;
    case RC_ADDR(0x00004958u): goto L_4958;
    case RC_ADDR(0x0000495cu): goto L_495C;
    case RC_ADDR(0x0000495eu): goto L_495E;
    case RC_ADDR(0x00004964u): goto L_4964;
    case RC_ADDR(0x00004968u): goto L_4968;
    case RC_ADDR(0x0000496au): goto L_496A;
    case RC_ADDR(0x0000496cu): goto L_496C;
    case RC_ADDR(0x00004970u): goto L_4970;
    case RC_ADDR(0x00004974u): goto L_4974;
    case RC_ADDR(0x00004976u): goto L_4976;
    case RC_ADDR(0x0000497au): goto L_497A;
    case RC_ADDR(0x00004980u): goto L_4980;
    case RC_ADDR(0x00004982u): goto L_4982;
    case RC_ADDR(0x00004984u): goto L_4984;
    case RC_ADDR(0x00004986u): goto L_4986;
    case RC_ADDR(0x0000498au): goto L_498A;
    case RC_ADDR(0x0000498cu): goto L_498C;
    case RC_ADDR(0x0000498eu): goto L_498E;
    case RC_ADDR(0x00004992u): goto L_4992;
    case RC_ADDR(0x00004996u): goto L_4996;
    case RC_ADDR(0x00004998u): goto L_4998;
    case RC_ADDR(0x0000499cu): goto L_499C;
    case RC_ADDR(0x0000499eu): goto L_499E;
    case RC_ADDR(0x000049a0u): goto L_49A0;
    case RC_ADDR(0x000049a2u): goto L_49A2;
    case RC_ADDR(0x000049a4u): goto L_49A4;
    case RC_ADDR(0x000049a8u): goto L_49A8;
    case RC_ADDR(0x000049acu): goto L_49AC;
    case RC_ADDR(0x000049aeu): goto L_49AE;
    case RC_ADDR(0x000049b0u): goto L_49B0;
    case RC_ADDR(0x000049b4u): goto L_49B4;
    case RC_ADDR(0x000049b8u): goto L_49B8;
    case RC_ADDR(0x000049bcu): goto L_49BC;
    case RC_ADDR(0x000049c0u): goto L_49C0;
    case RC_ADDR(0x000049c4u): goto L_49C4;
    case RC_ADDR(0x000049c8u): goto L_49C8;
    case RC_ADDR(0x000049ceu): goto L_49CE;
    case RC_ADDR(0x000049d2u): goto L_49D2;
    case RC_ADDR(0x000049d6u): goto L_49D6;
    case RC_ADDR(0x000049dcu): goto L_49DC;
    case RC_ADDR(0x000049e0u): goto L_49E0;
    case RC_ADDR(0x000049e4u): goto L_49E4;
    case RC_ADDR(0x000049e6u): goto L_49E6;
    case RC_ADDR(0x000049e8u): goto L_49E8;
    case RC_ADDR(0x000049ecu): goto L_49EC;
    case RC_ADDR(0x000049f2u): goto L_49F2;
    case RC_ADDR(0x000049f6u): goto L_49F6;
    case RC_ADDR(0x000049f8u): goto L_49F8;
    case RC_ADDR(0x000049fau): goto L_49FA;
    case RC_ADDR(0x000049feu): goto L_49FE;
    case RC_ADDR(0x00004a04u): goto L_4A04;
    case RC_ADDR(0x00004a08u): goto L_4A08;
    case RC_ADDR(0x00004a0cu): goto L_4A0C;
    case RC_ADDR(0x00004a10u): goto L_4A10;
    case RC_ADDR(0x00004a14u): goto L_4A14;
    case RC_ADDR(0x00004a18u): goto L_4A18;
    case RC_ADDR(0x00004a1cu): goto L_4A1C;
    case RC_ADDR(0x00004a20u): goto L_4A20;
    case RC_ADDR(0x00004a24u): goto L_4A24;
    case RC_ADDR(0x00004a28u): goto L_4A28;
    case RC_ADDR(0x00004a2cu): goto L_4A2C;
    case RC_ADDR(0x00004a30u): goto L_4A30;
    case RC_ADDR(0x00004a34u): goto L_4A34;
    case RC_ADDR(0x00004a36u): goto L_4A36;
    case RC_ADDR(0x00004a38u): goto L_4A38;
    case RC_ADDR(0x00004a3cu): goto L_4A3C;
    case RC_ADDR(0x00004a40u): goto L_4A40;
    case RC_ADDR(0x00004a44u): goto L_4A44;
    case RC_ADDR(0x00004a48u): goto L_4A48;
    case RC_ADDR(0x00004a4au): goto L_4A4A;
    case RC_ADDR(0x00004a4eu): goto L_4A4E;
    case RC_ADDR(0x00004a52u): goto L_4A52;
    case RC_ADDR(0x00004a58u): goto L_4A58;
    case RC_ADDR(0x00004a5cu): goto L_4A5C;
    case RC_ADDR(0x00004a60u): goto L_4A60;
    case RC_ADDR(0x00004a64u): goto L_4A64;
    case RC_ADDR(0x00004a68u): goto L_4A68;
    case RC_ADDR(0x00004a6au): goto L_4A6A;
    case RC_ADDR(0x00004a6eu): goto L_4A6E;
    case RC_ADDR(0x00004a72u): goto L_4A72;
    case RC_ADDR(0x00004a78u): goto L_4A78;
    case RC_ADDR(0x00004a7cu): goto L_4A7C;
    case RC_ADDR(0x00004a80u): goto L_4A80;
    case RC_ADDR(0x00004a84u): goto L_4A84;
    case RC_ADDR(0x00004a86u): goto L_4A86;
    case RC_ADDR(0x00004a88u): goto L_4A88;
    case RC_ADDR(0x00004a8au): goto L_4A8A;
    case RC_ADDR(0x00004a90u): goto L_4A90;
    case RC_ADDR(0x00004a94u): goto L_4A94;
    case RC_ADDR(0x00004a96u): goto L_4A96;
    case RC_ADDR(0x00004a98u): goto L_4A98;
    case RC_ADDR(0x00004a9au): goto L_4A9A;
    case RC_ADDR(0x00004a9eu): goto L_4A9E;
    case RC_ADDR(0x00004aa0u): goto L_4AA0;
    case RC_ADDR(0x00004aa2u): goto L_4AA2;
    case RC_ADDR(0x00004aa4u): goto L_4AA4;
    case RC_ADDR(0x00004aa8u): goto L_4AA8;
    case RC_ADDR(0x00004aacu): goto L_4AAC;
    case RC_ADDR(0x00004ab0u): goto L_4AB0;
    case RC_ADDR(0x00004ab4u): goto L_4AB4;
    case RC_ADDR(0x00004ab8u): goto L_4AB8;
    case RC_ADDR(0x00004abcu): goto L_4ABC;
    case RC_ADDR(0x00004ac0u): goto L_4AC0;
    case RC_ADDR(0x00004ac2u): goto L_4AC2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_4782:
    /* 00004782   4  link.w A5,#ffffffe6 */
    c->pc = RC_ADDR(0x00004782u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x1au;

L_4786:
    /* 00004786   4  tst.w (ffffce40,A4) */
    c->pc = RC_ADDR(0x00004786u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x31c0u));
    rc_set_nzvc(c, t0, RC_W);

L_478A:
    /* 0000478a   4  beq 0000488c */
    c->pc = RC_ADDR(0x0000478au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_488C;

L_478E:
    /* 0000478e   6  cmpi.w #1,(fffffff2,A4) */
    c->pc = RC_ADDR(0x0000478eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0xeu));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_4794:
    /* 00004794   2  bne 0000479a */
    c->pc = RC_ADDR(0x00004794u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_479A;

L_4796:
    /* 00004796   4  addq.w #1,(fffffff2,A4) */
    c->pc = RC_ADDR(0x00004796u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0xeu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_479A:
    /* 0000479a   4  move.w (ffff856e,A4),D0 */
    c->pc = RC_ADDR(0x0000479au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7a92u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_479E:
    /* 0000479e   4  addq.w #1,(ffff856e,A4) */
    c->pc = RC_ADDR(0x0000479eu);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x7a92u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_47A2:
    /* 000047a2   4  cmp.w #2,D0 */
    c->pc = RC_ADDR(0x000047a2u);
    rc_step(c, m, 8);
    t0 = 0x00000002u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_47A6:
    /* 000047a6   4  ble 0000488a */
    c->pc = RC_ADDR(0x000047a6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_488A;

L_47AA:
    /* 000047aa   4  clr.w (ffff856e,A4) */
    c->pc = RC_ADDR(0x000047aau);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7a92u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_47AE:
    /* 000047ae   4  tst.w (ffffce3c,A4) */
    c->pc = RC_ADDR(0x000047aeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x31c4u));
    rc_set_nzvc(c, t0, RC_W);

L_47B2:
    /* 000047b2   2  beq 000047dc */
    c->pc = RC_ADDR(0x000047b2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_47DC;

L_47B4:
    /* 000047b4   4  clr.w (fffffff2,A4) */
    c->pc = RC_ADDR(0x000047b4u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0xeu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_47B8:
    /* 000047b8   4  move.w (ffffce3c,A4),D0 */
    c->pc = RC_ADDR(0x000047b8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x31c4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_47BC:
    /* 000047bc   4  add.w D0,(fffff1d0,A4) */
    c->pc = RC_ADDR(0x000047bcu);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0xe30u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_47C0:
    /* 000047c0   4  tst.w (fffff1d0,A4) */
    c->pc = RC_ADDR(0x000047c0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0xe30u));
    rc_set_nzvc(c, t0, RC_W);

L_47C4:
    /* 000047c4   2  bge 000047cc */
    c->pc = RC_ADDR(0x000047c4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_47CC;

L_47C6:
    /* 000047c6   6  move.w #4,(fffff1d0,A4) */
    c->pc = RC_ADDR(0x000047c6u);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] - 0xe30u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_47CC:
    /* 000047cc   6  cmpi.w #4,(fffff1d0,A4) */
    c->pc = RC_ADDR(0x000047ccu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0xe30u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_47D2:
    /* 000047d2   2  ble 000047d8 */
    c->pc = RC_ADDR(0x000047d2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_47D8;

L_47D4:
    /* 000047d4   4  clr.w (fffff1d0,A4) */
    c->pc = RC_ADDR(0x000047d4u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0xe30u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_47D8:
    /* 000047d8   4  bra 0000488a */
    c->pc = RC_ADDR(0x000047d8u);
    rc_step(c, m, 10);
    goto L_488A;

L_47DC:
    /* 000047dc   4  tst.w (ffffce3e,A4) */
    c->pc = RC_ADDR(0x000047dcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x31c2u));
    rc_set_nzvc(c, t0, RC_W);

L_47E0:
    /* 000047e0   4  beq 0000488a */
    c->pc = RC_ADDR(0x000047e0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_488A;

L_47E4:
    /* 000047e4   4  tst.w (c,A5) */
    c->pc = RC_ADDR(0x000047e4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_set_nzvc(c, t0, RC_W);

L_47E8:
    /* 000047e8   4  beq 0000488a */
    c->pc = RC_ADDR(0x000047e8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_488A;

L_47EC:
    /* 000047ec   4  move.w (ffffefec,A4),D0 */
    c->pc = RC_ADDR(0x000047ecu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x1014u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_47F0:
    /* 000047f0   4  muls.w #12,D0 */
    c->pc = RC_ADDR(0x000047f0u);
    rc_step(c, m, 42);
    t0 = 0x00000012u;
    rc_muls(c, 0, t0);

L_47F4:
    /* 000047f4   4  lea (ffff8589,A4),A0 */
    c->pc = RC_ADDR(0x000047f4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7a77u);

L_47F8:
    /* 000047f8   4  tst.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x000047f8u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_B);

L_47FC:
    /* 000047fc   2  beq 00004806 */
    c->pc = RC_ADDR(0x000047fcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_4806;

L_47FE:
    /* 000047fe   6  move.w (ffffefec,A4),(ffffffee,A5) */
    c->pc = RC_ADDR(0x000047feu);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] - 0x1014u));
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_4804:
    /* 00004804   2  bra 0000480c */
    c->pc = RC_ADDR(0x00004804u);
    rc_step(c, m, 10);
    goto L_480C;

L_4806:
    /* 00004806   6  move.w #22,(ffffffee,A5) */
    c->pc = RC_ADDR(0x00004806u);
    rc_step(c, m, 16);
    t0 = 0x00000022u;
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_480C:
    /* 0000480c   4  tst.w (ffffce3e,A4) */
    c->pc = RC_ADDR(0x0000480cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x31c2u));
    rc_set_nzvc(c, t0, RC_W);

L_4810:
    /* 00004810   2  ble 00004832 */
    c->pc = RC_ADDR(0x00004810u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_4832;

L_4812:
    /* 00004812   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x00004812u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4816:
    /* 00004816   2  ext.l D0 */
    c->pc = RC_ADDR(0x00004816u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_4818:
    /* 00004818   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00004818u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_481A:
    /* 0000481a   4  move.w (fffff1d0,A4),D1 */
    c->pc = RC_ADDR(0x0000481au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0xe30u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_481E:
    /* 0000481e   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000481eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_4820:
    /* 00004820   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00004820u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_4822:
    /* 00004822   4  lea (fffff102,A4),A0 */
    c->pc = RC_ADDR(0x00004822u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0xefeu);

L_4826:
    /* 00004826   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00004826u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_482A:
    /* 0000482a   2  ext.w D1 */
    c->pc = RC_ADDR(0x0000482au);
    rc_step(c, m, 4);
    rc_ext_w(c, 1);

L_482C:
    /* 0000482c   4  move.w D1,(fffffff2,A5) */
    c->pc = RC_ADDR(0x0000482cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_4830:
    /* 00004830   2  bra 00004844 */
    c->pc = RC_ADDR(0x00004830u);
    rc_step(c, m, 10);
    goto L_4844;

L_4832:
    /* 00004832   4  move.w (fffff1d0,A4),D0 */
    c->pc = RC_ADDR(0x00004832u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0xe30u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4836:
    /* 00004836   2  ext.l D0 */
    c->pc = RC_ADDR(0x00004836u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_4838:
    /* 00004838   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00004838u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_483A:
    /* 0000483a   4  lea (fffff1c8,A4),A0 */
    c->pc = RC_ADDR(0x0000483au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0xe38u);

L_483E:
    /* 0000483e   6  move.w (0,A0,D0.w),(fffffff2,A5) */
    c->pc = RC_ADDR(0x0000483eu);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_4844:
    /* 00004844   6  cmpi.w #5,(fffffff2,A5) */
    c->pc = RC_ADDR(0x00004844u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_484A:
    /* 0000484a   2  blt 00004852 */
    c->pc = RC_ADDR(0x0000484au);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_4852;

L_484C:
    /* 0000484c   6  move.w #5,(fffffff2,A5) */
    c->pc = RC_ADDR(0x0000484cu);
    rc_step(c, m, 16);
    t0 = 0x00000005u;
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_4852:
    /* 00004852   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x00004852u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4856:
    /* 00004856   2  ext.l D0 */
    c->pc = RC_ADDR(0x00004856u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_4858:
    /* 00004858   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00004858u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_485A:
    /* 0000485a   4  move.w (fffff1d0,A4),D1 */
    c->pc = RC_ADDR(0x0000485au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0xe30u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_485E:
    /* 0000485e   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000485eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_4860:
    /* 00004860   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00004860u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_4862:
    /* 00004862   4  lea (fffff102,A4),A0 */
    c->pc = RC_ADDR(0x00004862u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0xefeu);

L_4866:
    /* 00004866   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x00004866u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_4868:
    /* 00004868   4  move.w (fffffff2,A5),D0 */
    c->pc = RC_ADDR(0x00004868u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_486C:
    /* 0000486c   4  muls.w (ffffce3e,A4),D0 */
    c->pc = RC_ADDR(0x0000486cu);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] - 0x31c2u));
    rc_muls(c, 0, t0);

L_4870:
    /* 00004870   2  subx.b D0,D0 */
    c->pc = RC_ADDR(0x00004870u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_B);
    t1 = rc_d_get(c, 0, RC_B);
    t2 = t1 - t0 - ((c->sr & RC_X) ? 1u : 0u);
    rc_flags_subx(c, RC_B, t1, t0, ((c->sr & RC_X) ? 1u : 0u), t2);
    rc_d_set(c, 0, RC_B, t2);

L_4872:
    /* 00004872   4  move.w (fffff1d0,A4),D0 */
    c->pc = RC_ADDR(0x00004872u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0xe30u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4876:
    /* 00004876   2  ext.l D0 */
    c->pc = RC_ADDR(0x00004876u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_4878:
    /* 00004878   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00004878u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_487A:
    /* 0000487a   4  lea (fffff1c8,A4),A0 */
    c->pc = RC_ADDR(0x0000487au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0xe38u);

L_487E:
    /* 0000487e   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x0000487eu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_4880:
    /* 00004880   4  move.w (fffffff2,A5),D0 */
    c->pc = RC_ADDR(0x00004880u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4884:
    /* 00004884   4  muls.w (ffffce3e,A4),D0 */
    c->pc = RC_ADDR(0x00004884u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] - 0x31c2u));
    rc_muls(c, 0, t0);

L_4888:
    /* 00004888   2  add.w D0,(A0) */
    c->pc = RC_ADDR(0x00004888u);
    rc_step(c, m, 12);
    t3 = c->a[0];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_488A:
    /* 0000488a   2  bra 000048b4 */
    c->pc = RC_ADDR(0x0000488au);
    rc_step(c, m, 10);
    goto L_48B4;

L_488C:
    /* 0000488c   6  move.w #3,(ffff856e,A4) */
    c->pc = RC_ADDR(0x0000488cu);
    rc_step(c, m, 16);
    t0 = 0x00000003u;
    rc_wr16(c, m, (c->a[4] - 0x7a92u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_4892:
    /* 00004892   6  cmpi.w #4,(fffff1d0,A4) */
    c->pc = RC_ADDR(0x00004892u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0xe30u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_4898:
    /* 00004898   2  bne 000048a6 */
    c->pc = RC_ADDR(0x00004898u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_48A6;

L_489A:
    /* 0000489a   4  tst.w (fffffff2,A4) */
    c->pc = RC_ADDR(0x0000489au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0xeu));
    rc_set_nzvc(c, t0, RC_W);

L_489E:
    /* 0000489e   2  bne 000048a6 */
    c->pc = RC_ADDR(0x0000489eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_48A6;

L_48A0:
    /* 000048a0   6  move.w #1,(fffffff2,A4) */
    c->pc = RC_ADDR(0x000048a0u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_48A6:
    /* 000048a6   6  cmpi.w #2,(fffffff2,A4) */
    c->pc = RC_ADDR(0x000048a6u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0xeu));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_48AC:
    /* 000048ac   2  bne 000048b4 */
    c->pc = RC_ADDR(0x000048acu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_48B4;

L_48AE:
    /* 000048ae   6  move.w #1,(ffffefe8,A4) */
    c->pc = RC_ADDR(0x000048aeu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x1018u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_48B4:
    /* 000048b4   6  move.l (8,A5),(fffffebe,A4) */
    c->pc = RC_ADDR(0x000048b4u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] - 0x142u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_48BA:
    /* 000048ba   4  clr.w (fffffff6,A5) */
    c->pc = RC_ADDR(0x000048bau);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_48BE:
    /* 000048be   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x000048beu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_48C2:
    /* 000048c2   4  muls.w #12,D0 */
    c->pc = RC_ADDR(0x000048c2u);
    rc_step(c, m, 42);
    t0 = 0x00000012u;
    rc_muls(c, 0, t0);

L_48C6:
    /* 000048c6   4  lea (ffff857c,A4),A0 */
    c->pc = RC_ADDR(0x000048c6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7a84u);

L_48CA:
    /* 000048ca   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x000048cau);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_48CC:
    /* 000048cc   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x000048ccu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_48D0:
    /* 000048d0   4  add.l (ffffeff6,A4),D1 */
    c->pc = RC_ADDR(0x000048d0u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] - 0x100au));
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_48D4:
    /* 000048d4   4  move.l D1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000048d4u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_48D8:
    /* 000048d8   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x000048d8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_48DC:
    /* 000048dc   4  muls.w #12,D0 */
    c->pc = RC_ADDR(0x000048dcu);
    rc_step(c, m, 42);
    t0 = 0x00000012u;
    rc_muls(c, 0, t0);

L_48E0:
    /* 000048e0   4  lea (ffff857e,A4),A0 */
    c->pc = RC_ADDR(0x000048e0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7a82u);

L_48E4:
    /* 000048e4   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x000048e4u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_48E6:
    /* 000048e6   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x000048e6u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_48EA:
    /* 000048ea   4  add.l (ffffeffa,A4),D1 */
    c->pc = RC_ADDR(0x000048eau);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] - 0x1006u));
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_48EE:
    /* 000048ee   4  move.l D1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x000048eeu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_48F2:
    /* 000048f2   4  move.w (fffffff6,A5),-(A7) */
    c->pc = RC_ADDR(0x000048f2u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_48F6:
    /* 000048f6   4  jsr (0000475c) */
    c->pc = RC_ADDR(0x000048f6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000048fau));
    rc_depth++;
    c->pc = RC_ADDR(0x0000475cu);
    return;

L_48FA:
    /* 000048fa   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000048fau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_48FC:
    /* 000048fc   2  tst.w D0 */
    c->pc = RC_ADDR(0x000048fcu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_48FE:
    /* 000048fe   4  beq 000049d2 */
    c->pc = RC_ADDR(0x000048feu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_49D2;

L_4902:
    /* 00004902   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00004902u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4906:
    /* 00004906   4  lea (fffff19e,A4),A0 */
    c->pc = RC_ADDR(0x00004906u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0xe62u);

L_490A:
    /* 0000490a   6  cmpi.b #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000490au);
    rc_step(c, m, 18);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_B, t0, 0x00000001u);

L_4910:
    /* 00004910   2  bne 00004940 */
    c->pc = RC_ADDR(0x00004910u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_4940;

L_4912:
    /* 00004912   6  pea (00010000).l */
    c->pc = RC_ADDR(0x00004912u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010000u);

L_4918:
    /* 00004918   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x00004918u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_491C:
    /* 0000491c   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x0000491cu);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_491E:
    /* 0000491e   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x0000491eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_4920:
    /* 00004920   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00004920u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4922:
    /* 00004922   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00004922u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_4926:
    /* 00004926   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x00004926u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_4928:
    /* 00004928   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x00004928u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_492A:
    /* 0000492a   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0000492au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_492C:
    /* 0000492c   4  move.w (fffffff6,A5),-(A7) */
    c->pc = RC_ADDR(0x0000492cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_4930:
    /* 00004930   4  move.l (8,A4),-(A7) */
    c->pc = RC_ADDR(0x00004930u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4934:
    /* 00004934   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00004934u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_4938:
    /* 00004938   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x00004938u);
    rc_step(c, m, 18);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x0000493cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cbcu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_493C:
    /* 0000493c   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x0000493cu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_4940:
    /* 00004940   4  clr.w (fffffff4,A5) */
    c->pc = RC_ADDR(0x00004940u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0xcu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4944:
    /* 00004944   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00004944u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4948:
    /* 00004948   2  ext.l D0 */
    c->pc = RC_ADDR(0x00004948u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_494A:
    /* 0000494a   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000494au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_494C:
    /* 0000494c   4  move.w (fffffff4,A5),D1 */
    c->pc = RC_ADDR(0x0000494cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4950:
    /* 00004950   2  ext.l D1 */
    c->pc = RC_ADDR(0x00004950u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_4952:
    /* 00004952   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00004952u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_4954:
    /* 00004954   4  lea (fffff102,A4),A0 */
    c->pc = RC_ADDR(0x00004954u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0xefeu);

L_4958:
    /* 00004958   4  tst.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00004958u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_B);

L_495C:
    /* 0000495c   2  beq 000049c4 */
    c->pc = RC_ADDR(0x0000495cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_49C4;

L_495E:
    /* 0000495e   6  pea (00010000).l */
    c->pc = RC_ADDR(0x0000495eu);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010000u);

L_4964:
    /* 00004964   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x00004964u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4968:
    /* 00004968   2  ext.l D0 */
    c->pc = RC_ADDR(0x00004968u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_496A:
    /* 0000496a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000496au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_496C:
    /* 0000496c   4  lea (ffff8552,A4),A0 */
    c->pc = RC_ADDR(0x0000496cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7aaeu);

L_4970:
    /* 00004970   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00004970u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4974:
    /* 00004974   2  ext.l D1 */
    c->pc = RC_ADDR(0x00004974u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_4976:
    /* 00004976   4  add.l (fffffff8,A5),D1 */
    c->pc = RC_ADDR(0x00004976u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_497A:
    /* 0000497a   6  add.l #a,D1 */
    c->pc = RC_ADDR(0x0000497au);
    rc_step(c, m, 16);
    t0 = 0x0000000au;
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_4980:
    /* 00004980   2  moveq #10,D0 */
    c->pc = RC_ADDR(0x00004980u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000010u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_4982:
    /* 00004982   2  asl.l D0,D1 */
    c->pc = RC_ADDR(0x00004982u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, (c->d[0] & 63u), rc_d_get(c, 1, RC_L), RC_L));

L_4984:
    /* 00004984   2  move.l D1,-(A7) */
    c->pc = RC_ADDR(0x00004984u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4986:
    /* 00004986   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x00004986u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_498A:
    /* 0000498a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000498au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_498C:
    /* 0000498c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000498cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_498E:
    /* 0000498e   4  lea (ffff854a,A4),A0 */
    c->pc = RC_ADDR(0x0000498eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7ab6u);

L_4992:
    /* 00004992   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00004992u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4996:
    /* 00004996   2  ext.l D1 */
    c->pc = RC_ADDR(0x00004996u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_4998:
    /* 00004998   4  add.l (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x00004998u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_499C:
    /* 0000499c   2  addq.l #4,D1 */
    c->pc = RC_ADDR(0x0000499cu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + 0x00000004u;
    rc_flags_add(c, RC_L, t1, 0x00000004u, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_499E:
    /* 0000499e   2  moveq #10,D0 */
    c->pc = RC_ADDR(0x0000499eu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000010u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_49A0:
    /* 000049a0   2  asl.l D0,D1 */
    c->pc = RC_ADDR(0x000049a0u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, (c->d[0] & 63u), rc_d_get(c, 1, RC_L), RC_L));

L_49A2:
    /* 000049a2   2  move.l D1,-(A7) */
    c->pc = RC_ADDR(0x000049a2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_49A4:
    /* 000049a4   4  move.w (fffffff6,A5),-(A7) */
    c->pc = RC_ADDR(0x000049a4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_49A8:
    /* 000049a8   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x000049a8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_49AC:
    /* 000049ac   2  ext.l D0 */
    c->pc = RC_ADDR(0x000049acu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_49AE:
    /* 000049ae   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000049aeu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_49B0:
    /* 000049b0   4  lea (fffffff4,A4),A0 */
    c->pc = RC_ADDR(0x000049b0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0xcu);

L_49B4:
    /* 000049b4   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x000049b4u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_49B8:
    /* 000049b8   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x000049b8u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_49BC:
    /* 000049bc   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x000049bcu);
    rc_step(c, m, 18);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x000049c0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cbcu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_49C0:
    /* 000049c0   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x000049c0u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_49C4:
    /* 000049c4   4  addq.w #1,(fffffff4,A5) */
    c->pc = RC_ADDR(0x000049c4u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xcu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_49C8:
    /* 000049c8   6  cmpi.w #4,(fffffff4,A5) */
    c->pc = RC_ADDR(0x000049c8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_49CE:
    /* 000049ce   4  blt 00004944 */
    c->pc = RC_ADDR(0x000049ceu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_4944; }

L_49D2:
    /* 000049d2   4  addq.w #1,(fffffff6,A5) */
    c->pc = RC_ADDR(0x000049d2u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_49D6:
    /* 000049d6   6  cmpi.w #27,(fffffff6,A5) */
    c->pc = RC_ADDR(0x000049d6u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_cmp(c, RC_W, t0, 0x00000027u);

L_49DC:
    /* 000049dc   4  blt 000048be */
    c->pc = RC_ADDR(0x000049dcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_48BE; }

L_49E0:
    /* 000049e0   4  move.w (ffff83c8,A4),D0 */
    c->pc = RC_ADDR(0x000049e0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_49E4:
    /* 000049e4   2  ext.l D0 */
    c->pc = RC_ADDR(0x000049e4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_49E6:
    /* 000049e6   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000049e6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_49E8:
    /* 000049e8   4  lea (ffff847c,A4),A0 */
    c->pc = RC_ADDR(0x000049e8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7b84u);

L_49EC:
    /* 000049ec   6  move.l (0,A0,D0.w),(ffffffea,A5) */
    c->pc = RC_ADDR(0x000049ecu);
    rc_step(c, m, 30);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[5] - 0x16u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_49F2:
    /* 000049f2   4  move.w (ffff83c8,A4),D0 */
    c->pc = RC_ADDR(0x000049f2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_49F6:
    /* 000049f6   2  ext.l D0 */
    c->pc = RC_ADDR(0x000049f6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_49F8:
    /* 000049f8   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000049f8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_49FA:
    /* 000049fa   4  lea (ffff8440,A4),A0 */
    c->pc = RC_ADDR(0x000049fau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7bc0u);

L_49FE:
    /* 000049fe   6  move.l (0,A0,D0.w),(ffffffe6,A5) */
    c->pc = RC_ADDR(0x000049feu);
    rc_step(c, m, 30);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[5] - 0x1au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_4A04:
    /* 00004a04   4  clr.w (fffffff6,A5) */
    c->pc = RC_ADDR(0x00004a04u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4A08:
    /* 00004a08   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00004a08u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4A0C:
    /* 00004a0c   4  movea.l (ffffffe6,A5),A0 */
    c->pc = RC_ADDR(0x00004a0cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1au));
    c->a[0] = t0;

L_4A10:
    /* 00004a10   4  tst.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00004a10u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_B);

L_4A14:
    /* 00004a14   4  beq 00004ac0 */
    c->pc = RC_ADDR(0x00004a14u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_4AC0;

L_4A18:
    /* 00004a18   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00004a18u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4A1C:
    /* 00004a1c   4  movea.l (ffffffea,A5),A0 */
    c->pc = RC_ADDR(0x00004a1cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x16u));
    c->a[0] = t0;

L_4A20:
    /* 00004a20   4  tst.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00004a20u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_B);

L_4A24:
    /* 00004a24   4  beq 00004ab8 */
    c->pc = RC_ADDR(0x00004a24u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_4AB8;

L_4A28:
    /* 00004a28   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00004a28u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4A2C:
    /* 00004a2c   4  movea.l (ffffffe6,A5),A0 */
    c->pc = RC_ADDR(0x00004a2cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1au));
    c->a[0] = t0;

L_4A30:
    /* 00004a30   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00004a30u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_4A34:
    /* 00004a34   2  ext.w D1 */
    c->pc = RC_ADDR(0x00004a34u);
    rc_step(c, m, 4);
    rc_ext_w(c, 1);

L_4A36:
    /* 00004a36   2  subq.w #1,D1 */
    c->pc = RC_ADDR(0x00004a36u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_4A38:
    /* 00004a38   4  move.w D1,(fffffff0,A5) */
    c->pc = RC_ADDR(0x00004a38u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_4A3C:
    /* 00004a3c   4  move.w (fffffff0,A5),D0 */
    c->pc = RC_ADDR(0x00004a3cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4A40:
    /* 00004a40   4  muls.w #12,D0 */
    c->pc = RC_ADDR(0x00004a40u);
    rc_step(c, m, 42);
    t0 = 0x00000012u;
    rc_muls(c, 0, t0);

L_4A44:
    /* 00004a44   4  lea (ffff857c,A4),A0 */
    c->pc = RC_ADDR(0x00004a44u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7a84u);

L_4A48:
    /* 00004a48   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00004a48u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_4A4A:
    /* 00004a4a   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00004a4au);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4A4E:
    /* 00004a4e   4  add.l (ffffeff6,A4),D1 */
    c->pc = RC_ADDR(0x00004a4eu);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] - 0x100au));
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_4A52:
    /* 00004a52   6  add.l #10,D1 */
    c->pc = RC_ADDR(0x00004a52u);
    rc_step(c, m, 16);
    t0 = 0x00000010u;
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_4A58:
    /* 00004a58   4  move.l D1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00004a58u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_4A5C:
    /* 00004a5c   4  move.w (fffffff0,A5),D0 */
    c->pc = RC_ADDR(0x00004a5cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4A60:
    /* 00004a60   4  muls.w #12,D0 */
    c->pc = RC_ADDR(0x00004a60u);
    rc_step(c, m, 42);
    t0 = 0x00000012u;
    rc_muls(c, 0, t0);

L_4A64:
    /* 00004a64   4  lea (ffff857e,A4),A0 */
    c->pc = RC_ADDR(0x00004a64u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7a82u);

L_4A68:
    /* 00004a68   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00004a68u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_4A6A:
    /* 00004a6a   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00004a6au);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4A6E:
    /* 00004a6e   4  add.l (ffffeffa,A4),D1 */
    c->pc = RC_ADDR(0x00004a6eu);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] - 0x1006u));
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_4A72:
    /* 00004a72   6  add.l #a,D1 */
    c->pc = RC_ADDR(0x00004a72u);
    rc_step(c, m, 16);
    t0 = 0x0000000au;
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_4A78:
    /* 00004a78   4  move.l D1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00004a78u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_4A7C:
    /* 00004a7c   4  move.w (fffffff0,A5),-(A7) */
    c->pc = RC_ADDR(0x00004a7cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_4A80:
    /* 00004a80   4  jsr (0000475c) */
    c->pc = RC_ADDR(0x00004a80u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00004a84u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000475cu);
    return;

L_4A84:
    /* 00004a84   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00004a84u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_4A86:
    /* 00004a86   2  tst.w D0 */
    c->pc = RC_ADDR(0x00004a86u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_4A88:
    /* 00004a88   2  beq 00004ab8 */
    c->pc = RC_ADDR(0x00004a88u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_4AB8;

L_4A8A:
    /* 00004a8a   6  pea (00010000).l */
    c->pc = RC_ADDR(0x00004a8au);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010000u);

L_4A90:
    /* 00004a90   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x00004a90u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_4A94:
    /* 00004a94   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x00004a94u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_4A96:
    /* 00004a96   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x00004a96u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_4A98:
    /* 00004a98   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00004a98u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4A9A:
    /* 00004a9a   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00004a9au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_4A9E:
    /* 00004a9e   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x00004a9eu);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_4AA0:
    /* 00004aa0   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x00004aa0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_4AA2:
    /* 00004aa2   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00004aa2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4AA4:
    /* 00004aa4   4  move.w (fffffff6,A5),-(A7) */
    c->pc = RC_ADDR(0x00004aa4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_4AA8:
    /* 00004aa8   4  move.l (4,A4),-(A7) */
    c->pc = RC_ADDR(0x00004aa8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4AAC:
    /* 00004aac   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00004aacu);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_4AB0:
    /* 00004ab0   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x00004ab0u);
    rc_step(c, m, 18);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x00004ab4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cbcu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_4AB4:
    /* 00004ab4   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00004ab4u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_4AB8:
    /* 00004ab8   4  addq.w #1,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00004ab8u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_4ABC:
    /* 00004abc   4  bra 00004a08 */
    c->pc = RC_ADDR(0x00004abcu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_4A08;

L_4AC0:
    /* 00004ac0   2  unlk A5 */
    c->pc = RC_ADDR(0x00004ac0u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_4AC2:
    /* 00004ac2   2  rts */
    c->pc = RC_ADDR(0x00004ac2u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
