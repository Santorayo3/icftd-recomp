/* fn_0000c75e - 768 byte(s), 241 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000c75e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000c75eu): goto L_C75E;
    case RC_ADDR(0x0000c762u): goto L_C762;
    case RC_ADDR(0x0000c766u): goto L_C766;
    case RC_ADDR(0x0000c76cu): goto L_C76C;
    case RC_ADDR(0x0000c770u): goto L_C770;
    case RC_ADDR(0x0000c772u): goto L_C772;
    case RC_ADDR(0x0000c776u): goto L_C776;
    case RC_ADDR(0x0000c778u): goto L_C778;
    case RC_ADDR(0x0000c77cu): goto L_C77C;
    case RC_ADDR(0x0000c780u): goto L_C780;
    case RC_ADDR(0x0000c782u): goto L_C782;
    case RC_ADDR(0x0000c786u): goto L_C786;
    case RC_ADDR(0x0000c78au): goto L_C78A;
    case RC_ADDR(0x0000c78eu): goto L_C78E;
    case RC_ADDR(0x0000c792u): goto L_C792;
    case RC_ADDR(0x0000c796u): goto L_C796;
    case RC_ADDR(0x0000c79au): goto L_C79A;
    case RC_ADDR(0x0000c79eu): goto L_C79E;
    case RC_ADDR(0x0000c7a4u): goto L_C7A4;
    case RC_ADDR(0x0000c7a6u): goto L_C7A6;
    case RC_ADDR(0x0000c7aau): goto L_C7AA;
    case RC_ADDR(0x0000c7acu): goto L_C7AC;
    case RC_ADDR(0x0000c7b2u): goto L_C7B2;
    case RC_ADDR(0x0000c7b8u): goto L_C7B8;
    case RC_ADDR(0x0000c7bau): goto L_C7BA;
    case RC_ADDR(0x0000c7beu): goto L_C7BE;
    case RC_ADDR(0x0000c7c0u): goto L_C7C0;
    case RC_ADDR(0x0000c7c6u): goto L_C7C6;
    case RC_ADDR(0x0000c7c8u): goto L_C7C8;
    case RC_ADDR(0x0000c7ccu): goto L_C7CC;
    case RC_ADDR(0x0000c7d0u): goto L_C7D0;
    case RC_ADDR(0x0000c7d2u): goto L_C7D2;
    case RC_ADDR(0x0000c7d6u): goto L_C7D6;
    case RC_ADDR(0x0000c7d8u): goto L_C7D8;
    case RC_ADDR(0x0000c7dcu): goto L_C7DC;
    case RC_ADDR(0x0000c7e0u): goto L_C7E0;
    case RC_ADDR(0x0000c7e4u): goto L_C7E4;
    case RC_ADDR(0x0000c7e8u): goto L_C7E8;
    case RC_ADDR(0x0000c7eau): goto L_C7EA;
    case RC_ADDR(0x0000c7ecu): goto L_C7EC;
    case RC_ADDR(0x0000c7f2u): goto L_C7F2;
    case RC_ADDR(0x0000c7f4u): goto L_C7F4;
    case RC_ADDR(0x0000c7f8u): goto L_C7F8;
    case RC_ADDR(0x0000c7fcu): goto L_C7FC;
    case RC_ADDR(0x0000c7feu): goto L_C7FE;
    case RC_ADDR(0x0000c800u): goto L_C800;
    case RC_ADDR(0x0000c802u): goto L_C802;
    case RC_ADDR(0x0000c804u): goto L_C804;
    case RC_ADDR(0x0000c80au): goto L_C80A;
    case RC_ADDR(0x0000c80cu): goto L_C80C;
    case RC_ADDR(0x0000c80eu): goto L_C80E;
    case RC_ADDR(0x0000c810u): goto L_C810;
    case RC_ADDR(0x0000c814u): goto L_C814;
    case RC_ADDR(0x0000c818u): goto L_C818;
    case RC_ADDR(0x0000c81au): goto L_C81A;
    case RC_ADDR(0x0000c81cu): goto L_C81C;
    case RC_ADDR(0x0000c81eu): goto L_C81E;
    case RC_ADDR(0x0000c822u): goto L_C822;
    case RC_ADDR(0x0000c826u): goto L_C826;
    case RC_ADDR(0x0000c82au): goto L_C82A;
    case RC_ADDR(0x0000c82cu): goto L_C82C;
    case RC_ADDR(0x0000c82eu): goto L_C82E;
    case RC_ADDR(0x0000c830u): goto L_C830;
    case RC_ADDR(0x0000c832u): goto L_C832;
    case RC_ADDR(0x0000c836u): goto L_C836;
    case RC_ADDR(0x0000c838u): goto L_C838;
    case RC_ADDR(0x0000c83eu): goto L_C83E;
    case RC_ADDR(0x0000c840u): goto L_C840;
    case RC_ADDR(0x0000c842u): goto L_C842;
    case RC_ADDR(0x0000c844u): goto L_C844;
    case RC_ADDR(0x0000c848u): goto L_C848;
    case RC_ADDR(0x0000c84cu): goto L_C84C;
    case RC_ADDR(0x0000c84eu): goto L_C84E;
    case RC_ADDR(0x0000c854u): goto L_C854;
    case RC_ADDR(0x0000c856u): goto L_C856;
    case RC_ADDR(0x0000c85cu): goto L_C85C;
    case RC_ADDR(0x0000c860u): goto L_C860;
    case RC_ADDR(0x0000c866u): goto L_C866;
    case RC_ADDR(0x0000c86au): goto L_C86A;
    case RC_ADDR(0x0000c86cu): goto L_C86C;
    case RC_ADDR(0x0000c86eu): goto L_C86E;
    case RC_ADDR(0x0000c870u): goto L_C870;
    case RC_ADDR(0x0000c874u): goto L_C874;
    case RC_ADDR(0x0000c878u): goto L_C878;
    case RC_ADDR(0x0000c87au): goto L_C87A;
    case RC_ADDR(0x0000c87eu): goto L_C87E;
    case RC_ADDR(0x0000c880u): goto L_C880;
    case RC_ADDR(0x0000c882u): goto L_C882;
    case RC_ADDR(0x0000c886u): goto L_C886;
    case RC_ADDR(0x0000c888u): goto L_C888;
    case RC_ADDR(0x0000c88au): goto L_C88A;
    case RC_ADDR(0x0000c88eu): goto L_C88E;
    case RC_ADDR(0x0000c894u): goto L_C894;
    case RC_ADDR(0x0000c896u): goto L_C896;
    case RC_ADDR(0x0000c898u): goto L_C898;
    case RC_ADDR(0x0000c89cu): goto L_C89C;
    case RC_ADDR(0x0000c8a0u): goto L_C8A0;
    case RC_ADDR(0x0000c8a2u): goto L_C8A2;
    case RC_ADDR(0x0000c8a4u): goto L_C8A4;
    case RC_ADDR(0x0000c8a8u): goto L_C8A8;
    case RC_ADDR(0x0000c8acu): goto L_C8AC;
    case RC_ADDR(0x0000c8b0u): goto L_C8B0;
    case RC_ADDR(0x0000c8b4u): goto L_C8B4;
    case RC_ADDR(0x0000c8b6u): goto L_C8B6;
    case RC_ADDR(0x0000c8b8u): goto L_C8B8;
    case RC_ADDR(0x0000c8bcu): goto L_C8BC;
    case RC_ADDR(0x0000c8c0u): goto L_C8C0;
    case RC_ADDR(0x0000c8c2u): goto L_C8C2;
    case RC_ADDR(0x0000c8c4u): goto L_C8C4;
    case RC_ADDR(0x0000c8c8u): goto L_C8C8;
    case RC_ADDR(0x0000c8ccu): goto L_C8CC;
    case RC_ADDR(0x0000c8d0u): goto L_C8D0;
    case RC_ADDR(0x0000c8d4u): goto L_C8D4;
    case RC_ADDR(0x0000c8d6u): goto L_C8D6;
    case RC_ADDR(0x0000c8d8u): goto L_C8D8;
    case RC_ADDR(0x0000c8dcu): goto L_C8DC;
    case RC_ADDR(0x0000c8e2u): goto L_C8E2;
    case RC_ADDR(0x0000c8e6u): goto L_C8E6;
    case RC_ADDR(0x0000c8e8u): goto L_C8E8;
    case RC_ADDR(0x0000c8eau): goto L_C8EA;
    case RC_ADDR(0x0000c8f0u): goto L_C8F0;
    case RC_ADDR(0x0000c8f4u): goto L_C8F4;
    case RC_ADDR(0x0000c8f8u): goto L_C8F8;
    case RC_ADDR(0x0000c8fau): goto L_C8FA;
    case RC_ADDR(0x0000c8fcu): goto L_C8FC;
    case RC_ADDR(0x0000c900u): goto L_C900;
    case RC_ADDR(0x0000c906u): goto L_C906;
    case RC_ADDR(0x0000c90cu): goto L_C90C;
    case RC_ADDR(0x0000c90eu): goto L_C90E;
    case RC_ADDR(0x0000c912u): goto L_C912;
    case RC_ADDR(0x0000c914u): goto L_C914;
    case RC_ADDR(0x0000c918u): goto L_C918;
    case RC_ADDR(0x0000c91eu): goto L_C91E;
    case RC_ADDR(0x0000c920u): goto L_C920;
    case RC_ADDR(0x0000c924u): goto L_C924;
    case RC_ADDR(0x0000c926u): goto L_C926;
    case RC_ADDR(0x0000c928u): goto L_C928;
    case RC_ADDR(0x0000c92cu): goto L_C92C;
    case RC_ADDR(0x0000c930u): goto L_C930;
    case RC_ADDR(0x0000c934u): goto L_C934;
    case RC_ADDR(0x0000c938u): goto L_C938;
    case RC_ADDR(0x0000c93au): goto L_C93A;
    case RC_ADDR(0x0000c93cu): goto L_C93C;
    case RC_ADDR(0x0000c940u): goto L_C940;
    case RC_ADDR(0x0000c944u): goto L_C944;
    case RC_ADDR(0x0000c948u): goto L_C948;
    case RC_ADDR(0x0000c94au): goto L_C94A;
    case RC_ADDR(0x0000c94cu): goto L_C94C;
    case RC_ADDR(0x0000c950u): goto L_C950;
    case RC_ADDR(0x0000c954u): goto L_C954;
    case RC_ADDR(0x0000c956u): goto L_C956;
    case RC_ADDR(0x0000c958u): goto L_C958;
    case RC_ADDR(0x0000c95cu): goto L_C95C;
    case RC_ADDR(0x0000c95eu): goto L_C95E;
    case RC_ADDR(0x0000c962u): goto L_C962;
    case RC_ADDR(0x0000c964u): goto L_C964;
    case RC_ADDR(0x0000c968u): goto L_C968;
    case RC_ADDR(0x0000c96au): goto L_C96A;
    case RC_ADDR(0x0000c96cu): goto L_C96C;
    case RC_ADDR(0x0000c96eu): goto L_C96E;
    case RC_ADDR(0x0000c970u): goto L_C970;
    case RC_ADDR(0x0000c974u): goto L_C974;
    case RC_ADDR(0x0000c978u): goto L_C978;
    case RC_ADDR(0x0000c97au): goto L_C97A;
    case RC_ADDR(0x0000c97cu): goto L_C97C;
    case RC_ADDR(0x0000c980u): goto L_C980;
    case RC_ADDR(0x0000c982u): goto L_C982;
    case RC_ADDR(0x0000c986u): goto L_C986;
    case RC_ADDR(0x0000c988u): goto L_C988;
    case RC_ADDR(0x0000c98cu): goto L_C98C;
    case RC_ADDR(0x0000c990u): goto L_C990;
    case RC_ADDR(0x0000c992u): goto L_C992;
    case RC_ADDR(0x0000c994u): goto L_C994;
    case RC_ADDR(0x0000c998u): goto L_C998;
    case RC_ADDR(0x0000c99cu): goto L_C99C;
    case RC_ADDR(0x0000c9a0u): goto L_C9A0;
    case RC_ADDR(0x0000c9a2u): goto L_C9A2;
    case RC_ADDR(0x0000c9a4u): goto L_C9A4;
    case RC_ADDR(0x0000c9a6u): goto L_C9A6;
    case RC_ADDR(0x0000c9a8u): goto L_C9A8;
    case RC_ADDR(0x0000c9acu): goto L_C9AC;
    case RC_ADDR(0x0000c9b2u): goto L_C9B2;
    case RC_ADDR(0x0000c9b4u): goto L_C9B4;
    case RC_ADDR(0x0000c9b6u): goto L_C9B6;
    case RC_ADDR(0x0000c9b8u): goto L_C9B8;
    case RC_ADDR(0x0000c9bau): goto L_C9BA;
    case RC_ADDR(0x0000c9beu): goto L_C9BE;
    case RC_ADDR(0x0000c9c0u): goto L_C9C0;
    case RC_ADDR(0x0000c9c2u): goto L_C9C2;
    case RC_ADDR(0x0000c9c6u): goto L_C9C6;
    case RC_ADDR(0x0000c9cau): goto L_C9CA;
    case RC_ADDR(0x0000c9ccu): goto L_C9CC;
    case RC_ADDR(0x0000c9ceu): goto L_C9CE;
    case RC_ADDR(0x0000c9d2u): goto L_C9D2;
    case RC_ADDR(0x0000c9d6u): goto L_C9D6;
    case RC_ADDR(0x0000c9d8u): goto L_C9D8;
    case RC_ADDR(0x0000c9dcu): goto L_C9DC;
    case RC_ADDR(0x0000c9deu): goto L_C9DE;
    case RC_ADDR(0x0000c9e0u): goto L_C9E0;
    case RC_ADDR(0x0000c9e2u): goto L_C9E2;
    case RC_ADDR(0x0000c9e4u): goto L_C9E4;
    case RC_ADDR(0x0000c9e8u): goto L_C9E8;
    case RC_ADDR(0x0000c9eau): goto L_C9EA;
    case RC_ADDR(0x0000c9ecu): goto L_C9EC;
    case RC_ADDR(0x0000c9f0u): goto L_C9F0;
    case RC_ADDR(0x0000c9f4u): goto L_C9F4;
    case RC_ADDR(0x0000c9f6u): goto L_C9F6;
    case RC_ADDR(0x0000c9f8u): goto L_C9F8;
    case RC_ADDR(0x0000c9fcu): goto L_C9FC;
    case RC_ADDR(0x0000ca00u): goto L_CA00;
    case RC_ADDR(0x0000ca02u): goto L_CA02;
    case RC_ADDR(0x0000ca06u): goto L_CA06;
    case RC_ADDR(0x0000ca08u): goto L_CA08;
    case RC_ADDR(0x0000ca0au): goto L_CA0A;
    case RC_ADDR(0x0000ca0cu): goto L_CA0C;
    case RC_ADDR(0x0000ca10u): goto L_CA10;
    case RC_ADDR(0x0000ca14u): goto L_CA14;
    case RC_ADDR(0x0000ca16u): goto L_CA16;
    case RC_ADDR(0x0000ca18u): goto L_CA18;
    case RC_ADDR(0x0000ca1au): goto L_CA1A;
    case RC_ADDR(0x0000ca1eu): goto L_CA1E;
    case RC_ADDR(0x0000ca20u): goto L_CA20;
    case RC_ADDR(0x0000ca22u): goto L_CA22;
    case RC_ADDR(0x0000ca26u): goto L_CA26;
    case RC_ADDR(0x0000ca2au): goto L_CA2A;
    case RC_ADDR(0x0000ca2cu): goto L_CA2C;
    case RC_ADDR(0x0000ca2eu): goto L_CA2E;
    case RC_ADDR(0x0000ca32u): goto L_CA32;
    case RC_ADDR(0x0000ca36u): goto L_CA36;
    case RC_ADDR(0x0000ca38u): goto L_CA38;
    case RC_ADDR(0x0000ca3cu): goto L_CA3C;
    case RC_ADDR(0x0000ca3eu): goto L_CA3E;
    case RC_ADDR(0x0000ca40u): goto L_CA40;
    case RC_ADDR(0x0000ca44u): goto L_CA44;
    case RC_ADDR(0x0000ca46u): goto L_CA46;
    case RC_ADDR(0x0000ca4au): goto L_CA4A;
    case RC_ADDR(0x0000ca4cu): goto L_CA4C;
    case RC_ADDR(0x0000ca52u): goto L_CA52;
    case RC_ADDR(0x0000ca56u): goto L_CA56;
    case RC_ADDR(0x0000ca5au): goto L_CA5A;
    case RC_ADDR(0x0000ca5cu): goto L_CA5C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_C75E:
    /* 0000c75e   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000c75eu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_C762:
    /* 0000c762   4  movem.l { A0 A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x0000c762u);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_C766:
    /* 0000c766   6  move.w (486,A4),(4e4,A4) */
    c->pc = RC_ADDR(0x0000c766u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x486u));
    rc_wr16(c, m, (c->a[4] + 0x4e4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C76C:
    /* 0000c76c   4  tst.w (ffffb02e,A4) */
    c->pc = RC_ADDR(0x0000c76cu);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd2u));
    rc_set_nzvc(c, t0, RC_W);

L_C770:
    /* 0000c770   2  beq 0000c7c0 */
    c->pc = RC_ADDR(0x0000c770u);
    if (rc_cond(c, 7)) goto L_C7C0;

L_C772:
    /* 0000c772   4  tst.w (738,A4) */
    c->pc = RC_ADDR(0x0000c772u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x738u));
    rc_set_nzvc(c, t0, RC_W);

L_C776:
    /* 0000c776   2  beq 0000c7c0 */
    c->pc = RC_ADDR(0x0000c776u);
    if (rc_cond(c, 7)) goto L_C7C0;

L_C778:
    /* 0000c778   4  subq.w #1,(738,A4) */
    c->pc = RC_ADDR(0x0000c778u);
    t3 = (c->a[4] + 0x738u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_C77C:
    /* 0000c77c   4  tst.w (4e6,A4) */
    c->pc = RC_ADDR(0x0000c77cu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x4e6u));
    rc_set_nzvc(c, t0, RC_W);

L_C780:
    /* 0000c780   2  bne 0000c79e */
    c->pc = RC_ADDR(0x0000c780u);
    if (rc_cond(c, 6)) goto L_C79E;

L_C782:
    /* 0000c782   4  move.w #8,-(A7) */
    c->pc = RC_ADDR(0x0000c782u);
    t0 = 0x00000008u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C786:
    /* 0000c786   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0000c786u);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C78A:
    /* 0000c78a   4  move.l (732,A4),-(A7) */
    c->pc = RC_ADDR(0x0000c78au);
    t0 = rc_rd32(c, m, (c->a[4] + 0x732u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C78E:
    /* 0000c78e   4  move.w (72c,A4),-(A7) */
    c->pc = RC_ADDR(0x0000c78eu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x72cu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C792:
    /* 0000c792   4  move.l (726,A4),-(A7) */
    c->pc = RC_ADDR(0x0000c792u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x726u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C796:
    /* 0000c796   4  jsr (ffff80b6,A4) */
    c->pc = RC_ADDR(0x0000c796u);
    /* vector 30 */
    rc_push32(c, m, RC_ADDR(0x0000c79au));
    rc_depth++;
    c->pc = RC_ADDR(0x00009b60u);
    return;

L_C79A:
    /* 0000c79a   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000c79au);
    c->a[7] = (c->a[7] + 0xeu);

L_C79E:
    /* 0000c79e   6  cmpi.w #5,(4e6,A4) */
    c->pc = RC_ADDR(0x0000c79eu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x4e6u));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_C7A4:
    /* 0000c7a4   2  bge 0000c7ac */
    c->pc = RC_ADDR(0x0000c7a4u);
    if (rc_cond(c, 12)) goto L_C7AC;

L_C7A6:
    /* 0000c7a6   4  addq.w #1,(4e6,A4) */
    c->pc = RC_ADDR(0x0000c7a6u);
    t3 = (c->a[4] + 0x4e6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_C7AA:
    /* 0000c7aa   2  bra 0000c7b2 */
    c->pc = RC_ADDR(0x0000c7aau);
    goto L_C7B2;

L_C7AC:
    /* 0000c7ac   6  move.w #4,(4e6,A4) */
    c->pc = RC_ADDR(0x0000c7acu);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] + 0x4e6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C7B2:
    /* 0000c7b2   6  cmpi.w #3e8,(50a,A4) */
    c->pc = RC_ADDR(0x0000c7b2u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x50au));
    rc_cmp(c, RC_W, t0, 0x000003e8u);

L_C7B8:
    /* 0000c7b8   2  bge 0000c7be */
    c->pc = RC_ADDR(0x0000c7b8u);
    if (rc_cond(c, 12)) goto L_C7BE;

L_C7BA:
    /* 0000c7ba   4  addq.w #1,(50a,A4) */
    c->pc = RC_ADDR(0x0000c7bau);
    t3 = (c->a[4] + 0x50au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_C7BE:
    /* 0000c7be   2  bra 0000c7e0 */
    c->pc = RC_ADDR(0x0000c7beu);
    goto L_C7E0;

L_C7C0:
    /* 0000c7c0   6  cmpi.w #1,(4e6,A4) */
    c->pc = RC_ADDR(0x0000c7c0u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x4e6u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_C7C6:
    /* 0000c7c6   2  bne 0000c7d2 */
    c->pc = RC_ADDR(0x0000c7c6u);
    if (rc_cond(c, 6)) goto L_C7D2;

L_C7C8:
    /* 0000c7c8   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0000c7c8u);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C7CC:
    /* 0000c7cc   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x0000c7ccu);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x0000c7d0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00009bcau);
    return;

L_C7D0:
    /* 0000c7d0   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000c7d0u);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_C7D2:
    /* 0000c7d2   4  tst.w (4e6,A4) */
    c->pc = RC_ADDR(0x0000c7d2u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x4e6u));
    rc_set_nzvc(c, t0, RC_W);

L_C7D6:
    /* 0000c7d6   2  beq 0000c7dc */
    c->pc = RC_ADDR(0x0000c7d6u);
    if (rc_cond(c, 7)) goto L_C7DC;

L_C7D8:
    /* 0000c7d8   4  subq.w #1,(4e6,A4) */
    c->pc = RC_ADDR(0x0000c7d8u);
    t3 = (c->a[4] + 0x4e6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_C7DC:
    /* 0000c7dc   4  clr.w (50a,A4) */
    c->pc = RC_ADDR(0x0000c7dcu);
    rc_wr16(c, m, (c->a[4] + 0x50au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C7E0:
    /* 0000c7e0   4  move.w (4e6,A4),D0 */
    c->pc = RC_ADDR(0x0000c7e0u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x4e6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C7E4:
    /* 0000c7e4   4  muls.w #b,D0 */
    c->pc = RC_ADDR(0x0000c7e4u);
    t0 = 0x0000000bu;
    rc_muls(c, 0, t0);

L_C7E8:
    /* 0000c7e8   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c7e8u);
    rc_ext_l(c, 0);

L_C7EA:
    /* 0000c7ea   2  move.l D0,D4 */
    c->pc = RC_ADDR(0x0000c7eau);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_C7EC:
    /* 0000c7ec   6  cmpi.w #28,(738,A4) */
    c->pc = RC_ADDR(0x0000c7ecu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x738u));
    rc_cmp(c, RC_W, t0, 0x00000028u);

L_C7F2:
    /* 0000c7f2   2  bge 0000c804 */
    c->pc = RC_ADDR(0x0000c7f2u);
    if (rc_cond(c, 12)) goto L_C804;

L_C7F4:
    /* 0000c7f4   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0000c7f4u);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C7F8:
    /* 0000c7f8   4  jsr (ffff8188,A4) */
    c->pc = RC_ADDR(0x0000c7f8u);
    /* vector 65 */
    rc_push32(c, m, RC_ADDR(0x0000c7fcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00016ee0u);
    return;

L_C7FC:
    /* 0000c7fc   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000c7fcu);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_C7FE:
    /* 0000c7fe   2  tst.w D0 */
    c->pc = RC_ADDR(0x0000c7feu);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_C800:
    /* 0000c800   2  bne 0000c804 */
    c->pc = RC_ADDR(0x0000c800u);
    if (rc_cond(c, 6)) goto L_C804;

L_C802:
    /* 0000c802   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x0000c802u);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_C804:
    /* 0000c804   6  move.w D4,(00dff0d8).l */
    c->pc = RC_ADDR(0x0000c804u);
    t0 = rc_d_get(c, 4, RC_W);
    rc_wr16(c, m, RC_ADDR(0x00dff0d8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C80A:
    /* 0000c80a   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x0000c80au);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_C80C:
    /* 0000c80c   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000c80cu);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_C80E:
    /* 0000c80e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000c80eu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_C810:
    /* 0000c810   4  lea (4ea,A4),A0 */
    c->pc = RC_ADDR(0x0000c810u);
    c->a[0] = (c->a[4] + 0x4eau);

L_C814:
    /* 0000c814   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000c814u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_C818:
    /* 0000c818   2  beq 0000c84c */
    c->pc = RC_ADDR(0x0000c818u);
    if (rc_cond(c, 7)) goto L_C84C;

L_C81A:
    /* 0000c81a   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000c81au);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_C81C:
    /* 0000c81c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000c81cu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_C81E:
    /* 0000c81e   4  lea (502,A4),A0 */
    c->pc = RC_ADDR(0x0000c81eu);
    c->a[0] = (c->a[4] + 0x502u);

L_C822:
    /* 0000c822   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000c822u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C826:
    /* 0000c826   4  subq.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000c826u);
    t4 = c->d[0];
    t3 = (c->a[0] + 0x0u + t4);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_C82A:
    /* 0000c82a   2  tst.w D1 */
    c->pc = RC_ADDR(0x0000c82au);
    t0 = rc_d_get(c, 1, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_C82C:
    /* 0000c82c   2  beq 0000c840 */
    c->pc = RC_ADDR(0x0000c82cu);
    if (rc_cond(c, 7)) goto L_C840;

L_C82E:
    /* 0000c82e   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000c82eu);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_C830:
    /* 0000c830   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000c830u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_C832:
    /* 0000c832   4  lea (4ea,A4),A0 */
    c->pc = RC_ADDR(0x0000c832u);
    c->a[0] = (c->a[4] + 0x4eau);

L_C836:
    /* 0000c836   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x0000c836u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_C838:
    /* 0000c838   6  bchg #0,(1,A0) */
    c->pc = RC_ADDR(0x0000c838u);
    t4 = 0x00000000u;
    t3 = (c->a[0] + 0x1u);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 ^ (1u << t4);
    rc_wr8(c, m, t3, t2);

L_C83E:
    /* 0000c83e   2  bra 0000c84c */
    c->pc = RC_ADDR(0x0000c83eu);
    goto L_C84C;

L_C840:
    /* 0000c840   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000c840u);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_C842:
    /* 0000c842   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000c842u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_C844:
    /* 0000c844   4  lea (4ea,A4),A0 */
    c->pc = RC_ADDR(0x0000c844u);
    c->a[0] = (c->a[4] + 0x4eau);

L_C848:
    /* 0000c848   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000c848u);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C84C:
    /* 0000c84c   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x0000c84cu);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_C84E:
    /* 0000c84e   6  cmp.l #4,D4 */
    c->pc = RC_ADDR(0x0000c84eu);
    t0 = 0x00000004u;
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_C854:
    /* 0000c854   2  blt 0000c80c */
    c->pc = RC_ADDR(0x0000c854u);
    if (rc_cond(c, 13)) { rc_tick(); goto L_C80C; }

L_C856:
    /* 0000c856   6  cmpi.w #5,(4e6,A4) */
    c->pc = RC_ADDR(0x0000c856u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x4e6u));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_C85C:
    /* 0000c85c   4  bne 0000c8f4 */
    c->pc = RC_ADDR(0x0000c85cu);
    if (rc_cond(c, 6)) goto L_C8F4;

L_C860:
    /* 0000c860   6  cmpi.w #8,(50a,A4) */
    c->pc = RC_ADDR(0x0000c860u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x50au));
    rc_cmp(c, RC_W, t0, 0x00000008u);

L_C866:
    /* 0000c866   4  ble 0000c8f4 */
    c->pc = RC_ADDR(0x0000c866u);
    if (rc_cond(c, 15)) goto L_C8F4;

L_C86A:
    /* 0000c86a   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x0000c86au);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_C86C:
    /* 0000c86c   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000c86cu);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_C86E:
    /* 0000c86e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000c86eu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_C870:
    /* 0000c870   4  lea (4ea,A4),A0 */
    c->pc = RC_ADDR(0x0000c870u);
    c->a[0] = (c->a[4] + 0x4eau);

L_C874:
    /* 0000c874   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000c874u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_C878:
    /* 0000c878   2  bne 0000c8e8 */
    c->pc = RC_ADDR(0x0000c878u);
    if (rc_cond(c, 6)) goto L_C8E8;

L_C87A:
    /* 0000c87a   4  move.w (486,A4),D0 */
    c->pc = RC_ADDR(0x0000c87au);
    t0 = rc_rd16(c, m, (c->a[4] + 0x486u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C87E:
    /* 0000c87e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c87eu);
    rc_ext_l(c, 0);

L_C880:
    /* 0000c880   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000c880u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_C882:
    /* 0000c882   4  lea (ffff98a4,A4),A0 */
    c->pc = RC_ADDR(0x0000c882u);
    c->a[0] = (c->a[4] - 0x675cu);

L_C886:
    /* 0000c886   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x0000c886u);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_C888:
    /* 0000c888   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0000c888u);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_C88A:
    /* 0000c88a   4  lea (4ea,A4),A1 */
    c->pc = RC_ADDR(0x0000c88au);
    c->a[1] = (c->a[4] + 0x4eau);

L_C88E:
    /* 0000c88e   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0000c88eu);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C894:
    /* 0000c894   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000c894u);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_C896:
    /* 0000c896   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000c896u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_C898:
    /* 0000c898   4  lea (4f2,A4),A0 */
    c->pc = RC_ADDR(0x0000c898u);
    c->a[0] = (c->a[4] + 0x4f2u);

L_C89C:
    /* 0000c89c   4  move.w (486,A4),D1 */
    c->pc = RC_ADDR(0x0000c89cu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x486u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C8A0:
    /* 0000c8a0   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000c8a0u);
    rc_ext_l(c, 1);

L_C8A2:
    /* 0000c8a2   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0000c8a2u);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_C8A4:
    /* 0000c8a4   4  lea (ffff98c4,A4),A1 */
    c->pc = RC_ADDR(0x0000c8a4u);
    c->a[1] = (c->a[4] - 0x673cu);

L_C8A8:
    /* 0000c8a8   4  move.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x0000c8a8u);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C8AC:
    /* 0000c8ac   4  add.w (47a,A4),D2 */
    c->pc = RC_ADDR(0x0000c8acu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47au));
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_C8B0:
    /* 0000c8b0   4  move.w D2,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000c8b0u);
    t0 = rc_d_get(c, 2, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C8B4:
    /* 0000c8b4   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000c8b4u);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_C8B6:
    /* 0000c8b6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000c8b6u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_C8B8:
    /* 0000c8b8   4  lea (4fa,A4),A0 */
    c->pc = RC_ADDR(0x0000c8b8u);
    c->a[0] = (c->a[4] + 0x4fau);

L_C8BC:
    /* 0000c8bc   4  move.w (486,A4),D1 */
    c->pc = RC_ADDR(0x0000c8bcu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x486u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C8C0:
    /* 0000c8c0   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000c8c0u);
    rc_ext_l(c, 1);

L_C8C2:
    /* 0000c8c2   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0000c8c2u);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_C8C4:
    /* 0000c8c4   4  lea (ffff98e4,A4),A1 */
    c->pc = RC_ADDR(0x0000c8c4u);
    c->a[1] = (c->a[4] - 0x671cu);

L_C8C8:
    /* 0000c8c8   4  move.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x0000c8c8u);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C8CC:
    /* 0000c8cc   4  add.w (47c,A4),D2 */
    c->pc = RC_ADDR(0x0000c8ccu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47cu));
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_C8D0:
    /* 0000c8d0   4  move.w D2,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000c8d0u);
    t0 = rc_d_get(c, 2, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C8D4:
    /* 0000c8d4   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000c8d4u);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_C8D6:
    /* 0000c8d6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000c8d6u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_C8D8:
    /* 0000c8d8   4  lea (502,A4),A0 */
    c->pc = RC_ADDR(0x0000c8d8u);
    c->a[0] = (c->a[4] + 0x502u);

L_C8DC:
    /* 0000c8dc   6  move.w #18,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000c8dcu);
    t0 = 0x00000018u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C8E2:
    /* 0000c8e2   4  clr.w (50a,A4) */
    c->pc = RC_ADDR(0x0000c8e2u);
    rc_wr16(c, m, (c->a[4] + 0x50au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C8E6:
    /* 0000c8e6   2  bra 0000c8f4 */
    c->pc = RC_ADDR(0x0000c8e6u);
    goto L_C8F4;

L_C8E8:
    /* 0000c8e8   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x0000c8e8u);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_C8EA:
    /* 0000c8ea   6  cmp.l #4,D4 */
    c->pc = RC_ADDR(0x0000c8eau);
    t0 = 0x00000004u;
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_C8F0:
    /* 0000c8f0   4  blt 0000c86c */
    c->pc = RC_ADDR(0x0000c8f0u);
    if (rc_cond(c, 13)) { rc_tick(); goto L_C86C; }

L_C8F4:
    /* 0000c8f4   4  move.w (4e4,A4),D0 */
    c->pc = RC_ADDR(0x0000c8f4u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x4e4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C8F8:
    /* 0000c8f8   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c8f8u);
    rc_ext_l(c, 0);

L_C8FA:
    /* 0000c8fa   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000c8fau);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_C8FC:
    /* 0000c8fc   4  lea (ffff9a32,A4),A0 */
    c->pc = RC_ADDR(0x0000c8fcu);
    c->a[0] = (c->a[4] - 0x65ceu);

L_C900:
    /* 0000c900   6  move.w (0,A0,D0.w),(4e8,A4) */
    c->pc = RC_ADDR(0x0000c900u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] + 0x4e8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C906:
    /* 0000c906   6  btst #0,(4e5,A4) */
    c->pc = RC_ADDR(0x0000c906u);
    t4 = 0x00000000u;
    t3 = (c->a[4] + 0x4e5u);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_C90C:
    /* 0000c90c   2  bne 0000c918 */
    c->pc = RC_ADDR(0x0000c90cu);
    if (rc_cond(c, 6)) goto L_C918;

L_C90E:
    /* 0000c90e   4  move.w (4e6,A4),D0 */
    c->pc = RC_ADDR(0x0000c90eu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x4e6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C912:
    /* 0000c912   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x0000c912u);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_C914:
    /* 0000c914   4  add.w D0,(4e8,A4) */
    c->pc = RC_ADDR(0x0000c914u);
    t3 = (c->a[4] + 0x4e8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_C918:
    /* 0000c918   6  cmpi.w #8,(50a,A4) */
    c->pc = RC_ADDR(0x0000c918u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x50au));
    rc_cmp(c, RC_W, t0, 0x00000008u);

L_C91E:
    /* 0000c91e   2  ble 0000c96a */
    c->pc = RC_ADDR(0x0000c91eu);
    if (rc_cond(c, 15)) goto L_C96A;

L_C920:
    /* 0000c920   4  move.w (486,A4),D0 */
    c->pc = RC_ADDR(0x0000c920u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x486u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C924:
    /* 0000c924   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c924u);
    rc_ext_l(c, 0);

L_C926:
    /* 0000c926   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000c926u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_C928:
    /* 0000c928   4  lea (ffff97a4,A4),A0 */
    c->pc = RC_ADDR(0x0000c928u);
    c->a[0] = (c->a[4] - 0x685cu);

L_C92C:
    /* 0000c92c   4  move.w (0,A0,D0.w),D5 */
    c->pc = RC_ADDR(0x0000c92cu);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 5, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C930:
    /* 0000c930   4  add.w (47a,A4),D5 */
    c->pc = RC_ADDR(0x0000c930u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47au));
    t1 = rc_d_get(c, 5, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 5, RC_W, t2);

L_C934:
    /* 0000c934   4  move.w (486,A4),D0 */
    c->pc = RC_ADDR(0x0000c934u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x486u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C938:
    /* 0000c938   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c938u);
    rc_ext_l(c, 0);

L_C93A:
    /* 0000c93a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000c93au);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_C93C:
    /* 0000c93c   4  lea (ffff97c4,A4),A0 */
    c->pc = RC_ADDR(0x0000c93cu);
    c->a[0] = (c->a[4] - 0x683cu);

L_C940:
    /* 0000c940   4  move.w (0,A0,D0.w),D6 */
    c->pc = RC_ADDR(0x0000c940u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C944:
    /* 0000c944   4  add.w (47c,A4),D6 */
    c->pc = RC_ADDR(0x0000c944u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47cu));
    t1 = rc_d_get(c, 6, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 6, RC_W, t2);

L_C948:
    /* 0000c948   2  move.w D5,D0 */
    c->pc = RC_ADDR(0x0000c948u);
    t0 = rc_d_get(c, 5, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C94A:
    /* 0000c94a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c94au);
    rc_ext_l(c, 0);

L_C94C:
    /* 0000c94c   4  divs.w #20,D0 */
    c->pc = RC_ADDR(0x0000c94cu);
    t0 = 0x00000020u;
    rc_divs(c, m, 0, t0);

L_C950:
    /* 0000c950   4  muls.w #27,D0 */
    c->pc = RC_ADDR(0x0000c950u);
    t0 = 0x00000027u;
    rc_muls(c, 0, t0);

L_C954:
    /* 0000c954   2  move.w D6,D1 */
    c->pc = RC_ADDR(0x0000c954u);
    t0 = rc_d_get(c, 6, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C956:
    /* 0000c956   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000c956u);
    rc_ext_l(c, 1);

L_C958:
    /* 0000c958   4  divs.w #1b,D1 */
    c->pc = RC_ADDR(0x0000c958u);
    t0 = 0x0000001bu;
    rc_divs(c, m, 1, t0);

L_C95C:
    /* 0000c95c   2  add.w D1,D0 */
    c->pc = RC_ADDR(0x0000c95cu);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_C95E:
    /* 0000c95e   4  add.w #28,D0 */
    c->pc = RC_ADDR(0x0000c95eu);
    t0 = 0x00000028u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_C962:
    /* 0000c962   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0000c962u);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C964:
    /* 0000c964   4  jsr (0000d3c2) */
    c->pc = RC_ADDR(0x0000c964u);
    rc_push32(c, m, RC_ADDR(0x0000c968u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000d3c2u);
    return;

L_C968:
    /* 0000c968   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000c968u);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_C96A:
    /* 0000c96a   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x0000c96au);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_C96C:
    /* 0000c96c   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000c96cu);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_C96E:
    /* 0000c96e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000c96eu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_C970:
    /* 0000c970   4  lea (60c,A4),A0 */
    c->pc = RC_ADDR(0x0000c970u);
    c->a[0] = (c->a[4] + 0x60cu);

L_C974:
    /* 0000c974   4  move.w (0,A0,D0.w),D7 */
    c->pc = RC_ADDR(0x0000c974u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 7, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C978:
    /* 0000c978   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000c978u);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_C97A:
    /* 0000c97a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000c97au);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_C97C:
    /* 0000c97c   4  lea (50c,A4),A0 */
    c->pc = RC_ADDR(0x0000c97cu);
    c->a[0] = (c->a[4] + 0x50cu);

L_C980:
    /* 0000c980   2  move.l D0,D1 */
    c->pc = RC_ADDR(0x0000c980u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_C982:
    /* 0000c982   4  move.w (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x0000c982u);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C986:
    /* 0000c986   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c986u);
    rc_ext_l(c, 0);

L_C988:
    /* 0000c988   4  bra 0000ca3e */
    c->pc = RC_ADDR(0x0000c988u);
    goto L_CA3E;

L_C98C:
    /* 0000c98c   4  bra 0000ca4a */
    c->pc = RC_ADDR(0x0000c98cu);
    goto L_CA4A;

L_C990:
    /* 0000c990   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000c990u);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_C992:
    /* 0000c992   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000c992u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_C994:
    /* 0000c994   4  lea (68c,A4),A0 */
    c->pc = RC_ADDR(0x0000c994u);
    c->a[0] = (c->a[4] + 0x68cu);

L_C998:
    /* 0000c998   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000c998u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C99C:
    /* 0000c99c   4  subq.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000c99cu);
    t4 = c->d[0];
    t3 = (c->a[0] + 0x0u + t4);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_C9A0:
    /* 0000c9a0   2  tst.w D1 */
    c->pc = RC_ADDR(0x0000c9a0u);
    t0 = rc_d_get(c, 1, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_C9A2:
    /* 0000c9a2   2  beq 0000ca08 */
    c->pc = RC_ADDR(0x0000c9a2u);
    if (rc_cond(c, 7)) goto L_CA08;

L_C9A4:
    /* 0000c9a4   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000c9a4u);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_C9A6:
    /* 0000c9a6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000c9a6u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_C9A8:
    /* 0000c9a8   4  lea (68c,A4),A0 */
    c->pc = RC_ADDR(0x0000c9a8u);
    c->a[0] = (c->a[4] + 0x68cu);

L_C9AC:
    /* 0000c9ac   6  btst #0,(1,A0,D0.w) */
    c->pc = RC_ADDR(0x0000c9acu);
    t4 = 0x00000000u;
    t4 = c->d[0];
    t3 = (c->a[0] + 0x1u + t4);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_C9B2:
    /* 0000c9b2   2  beq 0000c9de */
    c->pc = RC_ADDR(0x0000c9b2u);
    if (rc_cond(c, 7)) goto L_C9DE;

L_C9B4:
    /* 0000c9b4   2  move.w D7,D0 */
    c->pc = RC_ADDR(0x0000c9b4u);
    t0 = rc_d_get(c, 7, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C9B6:
    /* 0000c9b6   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c9b6u);
    rc_ext_l(c, 0);

L_C9B8:
    /* 0000c9b8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000c9b8u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_C9BA:
    /* 0000c9ba   4  movea.l (fffff2f8,A4),A0 */
    c->pc = RC_ADDR(0x0000c9bau);
    t0 = rc_rd32(c, m, (c->a[4] - 0xd08u));
    c->a[0] = t0;

L_C9BE:
    /* 0000c9be   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x0000c9beu);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_C9C0:
    /* 0000c9c0   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0000c9c0u);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_C9C2:
    /* 0000c9c2   4  lea (58c,A4),A1 */
    c->pc = RC_ADDR(0x0000c9c2u);
    c->a[1] = (c->a[4] + 0x58cu);

L_C9C6:
    /* 0000c9c6   4  move.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x0000c9c6u);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C9CA:
    /* 0000c9ca   2  ext.l D2 */
    c->pc = RC_ADDR(0x0000c9cau);
    rc_ext_l(c, 2);

L_C9CC:
    /* 0000c9cc   2  asl.l #1,D2 */
    c->pc = RC_ADDR(0x0000c9ccu);
    c->d[2] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_L), RC_L);

L_C9CE:
    /* 0000c9ce   4  lea (ffff993a,A4),A1 */
    c->pc = RC_ADDR(0x0000c9ceu);
    c->a[1] = (c->a[4] - 0x66c6u);

L_C9D2:
    /* 0000c9d2   4  move.w (0,A1,D2.w),D1 */
    c->pc = RC_ADDR(0x0000c9d2u);
    t4 = c->d[2];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C9D6:
    /* 0000c9d6   2  asl.w #1,D1 */
    c->pc = RC_ADDR(0x0000c9d6u);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W);

L_C9D8:
    /* 0000c9d8   4  move.w D1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000c9d8u);
    t0 = rc_d_get(c, 1, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C9DC:
    /* 0000c9dc   2  bra 0000ca06 */
    c->pc = RC_ADDR(0x0000c9dcu);
    goto L_CA06;

L_C9DE:
    /* 0000c9de   2  move.w D7,D0 */
    c->pc = RC_ADDR(0x0000c9deu);
    t0 = rc_d_get(c, 7, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C9E0:
    /* 0000c9e0   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c9e0u);
    rc_ext_l(c, 0);

L_C9E2:
    /* 0000c9e2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000c9e2u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_C9E4:
    /* 0000c9e4   4  movea.l (fffff2f8,A4),A0 */
    c->pc = RC_ADDR(0x0000c9e4u);
    t0 = rc_rd32(c, m, (c->a[4] - 0xd08u));
    c->a[0] = t0;

L_C9E8:
    /* 0000c9e8   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x0000c9e8u);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_C9EA:
    /* 0000c9ea   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0000c9eau);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_C9EC:
    /* 0000c9ec   4  lea (58c,A4),A1 */
    c->pc = RC_ADDR(0x0000c9ecu);
    c->a[1] = (c->a[4] + 0x58cu);

L_C9F0:
    /* 0000c9f0   4  move.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x0000c9f0u);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C9F4:
    /* 0000c9f4   2  ext.l D2 */
    c->pc = RC_ADDR(0x0000c9f4u);
    rc_ext_l(c, 2);

L_C9F6:
    /* 0000c9f6   2  asl.l #1,D2 */
    c->pc = RC_ADDR(0x0000c9f6u);
    c->d[2] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_L), RC_L);

L_C9F8:
    /* 0000c9f8   4  lea (ffff9970,A4),A1 */
    c->pc = RC_ADDR(0x0000c9f8u);
    c->a[1] = (c->a[4] - 0x6690u);

L_C9FC:
    /* 0000c9fc   4  move.w (0,A1,D2.w),D1 */
    c->pc = RC_ADDR(0x0000c9fcu);
    t4 = c->d[2];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CA00:
    /* 0000ca00   2  asl.w #1,D1 */
    c->pc = RC_ADDR(0x0000ca00u);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W);

L_CA02:
    /* 0000ca02   4  move.w D1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000ca02u);
    t0 = rc_d_get(c, 1, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_CA06:
    /* 0000ca06   2  bra 0000ca3c */
    c->pc = RC_ADDR(0x0000ca06u);
    goto L_CA3C;

L_CA08:
    /* 0000ca08   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000ca08u);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CA0A:
    /* 0000ca0a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000ca0au);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_CA0C:
    /* 0000ca0c   4  lea (50c,A4),A0 */
    c->pc = RC_ADDR(0x0000ca0cu);
    c->a[0] = (c->a[4] + 0x50cu);

L_CA10:
    /* 0000ca10   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000ca10u);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_CA14:
    /* 0000ca14   2  move.w D7,D0 */
    c->pc = RC_ADDR(0x0000ca14u);
    t0 = rc_d_get(c, 7, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CA16:
    /* 0000ca16   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000ca16u);
    rc_ext_l(c, 0);

L_CA18:
    /* 0000ca18   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000ca18u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_CA1A:
    /* 0000ca1a   4  movea.l (fffff2f8,A4),A0 */
    c->pc = RC_ADDR(0x0000ca1au);
    t0 = rc_rd32(c, m, (c->a[4] - 0xd08u));
    c->a[0] = t0;

L_CA1E:
    /* 0000ca1e   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x0000ca1eu);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CA20:
    /* 0000ca20   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0000ca20u);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_CA22:
    /* 0000ca22   4  lea (58c,A4),A1 */
    c->pc = RC_ADDR(0x0000ca22u);
    c->a[1] = (c->a[4] + 0x58cu);

L_CA26:
    /* 0000ca26   4  move.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x0000ca26u);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CA2A:
    /* 0000ca2a   2  ext.l D2 */
    c->pc = RC_ADDR(0x0000ca2au);
    rc_ext_l(c, 2);

L_CA2C:
    /* 0000ca2c   2  asl.l #1,D2 */
    c->pc = RC_ADDR(0x0000ca2cu);
    c->d[2] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_L), RC_L);

L_CA2E:
    /* 0000ca2e   4  lea (ffff99a6,A4),A1 */
    c->pc = RC_ADDR(0x0000ca2eu);
    c->a[1] = (c->a[4] - 0x665au);

L_CA32:
    /* 0000ca32   4  move.w (0,A1,D2.w),D1 */
    c->pc = RC_ADDR(0x0000ca32u);
    t4 = c->d[2];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CA36:
    /* 0000ca36   2  asl.w #1,D1 */
    c->pc = RC_ADDR(0x0000ca36u);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W);

L_CA38:
    /* 0000ca38   4  move.w D1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000ca38u);
    t0 = rc_d_get(c, 1, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_CA3C:
    /* 0000ca3c   2  bra 0000ca4a */
    c->pc = RC_ADDR(0x0000ca3cu);
    goto L_CA4A;

L_CA3E:
    /* 0000ca3e   2  tst.l D0 */
    c->pc = RC_ADDR(0x0000ca3eu);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_CA40:
    /* 0000ca40   4  beq 0000c98c */
    c->pc = RC_ADDR(0x0000ca40u);
    if (rc_cond(c, 7)) { rc_tick(); goto L_C98C; }

L_CA44:
    /* 0000ca44   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x0000ca44u);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_CA46:
    /* 0000ca46   4  beq 0000c990 */
    c->pc = RC_ADDR(0x0000ca46u);
    if (rc_cond(c, 7)) { rc_tick(); goto L_C990; }

L_CA4A:
    /* 0000ca4a   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x0000ca4au);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_CA4C:
    /* 0000ca4c   6  cmp.l #40,D4 */
    c->pc = RC_ADDR(0x0000ca4cu);
    t0 = 0x00000040u;
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_CA52:
    /* 0000ca52   4  blt 0000c96c */
    c->pc = RC_ADDR(0x0000ca52u);
    if (rc_cond(c, 13)) { rc_tick(); goto L_C96C; }

L_CA56:
    /* 0000ca56   4  movem.l (SP)+,{ D4 D5 D6 D7 } */
    c->pc = RC_ADDR(0x0000ca56u);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[6] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[7] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_CA5A:
    /* 0000ca5a   2  unlk A5 */
    c->pc = RC_ADDR(0x0000ca5au);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_CA5C:
    /* 0000ca5c   2  rts */
    c->pc = RC_ADDR(0x0000ca5cu);
    rc_ret(c, m);
    return;

}
