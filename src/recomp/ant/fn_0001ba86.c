/* fn_0001ba86 - 746 byte(s), 218 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001ba86(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001ba86u): goto L_1BA86;
    case RC_ADDR(0x0001ba8au): goto L_1BA8A;
    case RC_ADDR(0x0001ba90u): goto L_1BA90;
    case RC_ADDR(0x0001ba92u): goto L_1BA92;
    case RC_ADDR(0x0001ba96u): goto L_1BA96;
    case RC_ADDR(0x0001ba9au): goto L_1BA9A;
    case RC_ADDR(0x0001ba9eu): goto L_1BA9E;
    case RC_ADDR(0x0001baa2u): goto L_1BAA2;
    case RC_ADDR(0x0001baa6u): goto L_1BAA6;
    case RC_ADDR(0x0001baa8u): goto L_1BAA8;
    case RC_ADDR(0x0001baacu): goto L_1BAAC;
    case RC_ADDR(0x0001bab2u): goto L_1BAB2;
    case RC_ADDR(0x0001bab6u): goto L_1BAB6;
    case RC_ADDR(0x0001bab8u): goto L_1BAB8;
    case RC_ADDR(0x0001babcu): goto L_1BABC;
    case RC_ADDR(0x0001bac2u): goto L_1BAC2;
    case RC_ADDR(0x0001bac6u): goto L_1BAC6;
    case RC_ADDR(0x0001bac8u): goto L_1BAC8;
    case RC_ADDR(0x0001baccu): goto L_1BACC;
    case RC_ADDR(0x0001bad2u): goto L_1BAD2;
    case RC_ADDR(0x0001bad6u): goto L_1BAD6;
    case RC_ADDR(0x0001bad8u): goto L_1BAD8;
    case RC_ADDR(0x0001badcu): goto L_1BADC;
    case RC_ADDR(0x0001badeu): goto L_1BADE;
    case RC_ADDR(0x0001bae2u): goto L_1BAE2;
    case RC_ADDR(0x0001bae6u): goto L_1BAE6;
    case RC_ADDR(0x0001bae8u): goto L_1BAE8;
    case RC_ADDR(0x0001baeau): goto L_1BAEA;
    case RC_ADDR(0x0001baeeu): goto L_1BAEE;
    case RC_ADDR(0x0001baf2u): goto L_1BAF2;
    case RC_ADDR(0x0001baf6u): goto L_1BAF6;
    case RC_ADDR(0x0001baf8u): goto L_1BAF8;
    case RC_ADDR(0x0001bafcu): goto L_1BAFC;
    case RC_ADDR(0x0001bafeu): goto L_1BAFE;
    case RC_ADDR(0x0001bb02u): goto L_1BB02;
    case RC_ADDR(0x0001bb06u): goto L_1BB06;
    case RC_ADDR(0x0001bb08u): goto L_1BB08;
    case RC_ADDR(0x0001bb0cu): goto L_1BB0C;
    case RC_ADDR(0x0001bb0eu): goto L_1BB0E;
    case RC_ADDR(0x0001bb12u): goto L_1BB12;
    case RC_ADDR(0x0001bb16u): goto L_1BB16;
    case RC_ADDR(0x0001bb18u): goto L_1BB18;
    case RC_ADDR(0x0001bb1au): goto L_1BB1A;
    case RC_ADDR(0x0001bb1eu): goto L_1BB1E;
    case RC_ADDR(0x0001bb22u): goto L_1BB22;
    case RC_ADDR(0x0001bb26u): goto L_1BB26;
    case RC_ADDR(0x0001bb28u): goto L_1BB28;
    case RC_ADDR(0x0001bb2cu): goto L_1BB2C;
    case RC_ADDR(0x0001bb2eu): goto L_1BB2E;
    case RC_ADDR(0x0001bb30u): goto L_1BB30;
    case RC_ADDR(0x0001bb36u): goto L_1BB36;
    case RC_ADDR(0x0001bb38u): goto L_1BB38;
    case RC_ADDR(0x0001bb40u): goto L_1BB40;
    case RC_ADDR(0x0001bb42u): goto L_1BB42;
    case RC_ADDR(0x0001bb48u): goto L_1BB48;
    case RC_ADDR(0x0001bb4au): goto L_1BB4A;
    case RC_ADDR(0x0001bb50u): goto L_1BB50;
    case RC_ADDR(0x0001bb52u): goto L_1BB52;
    case RC_ADDR(0x0001bb56u): goto L_1BB56;
    case RC_ADDR(0x0001bb5au): goto L_1BB5A;
    case RC_ADDR(0x0001bb5cu): goto L_1BB5C;
    case RC_ADDR(0x0001bb62u): goto L_1BB62;
    case RC_ADDR(0x0001bb64u): goto L_1BB64;
    case RC_ADDR(0x0001bb68u): goto L_1BB68;
    case RC_ADDR(0x0001bb6au): goto L_1BB6A;
    case RC_ADDR(0x0001bb6cu): goto L_1BB6C;
    case RC_ADDR(0x0001bb70u): goto L_1BB70;
    case RC_ADDR(0x0001bb74u): goto L_1BB74;
    case RC_ADDR(0x0001bb78u): goto L_1BB78;
    case RC_ADDR(0x0001bb7cu): goto L_1BB7C;
    case RC_ADDR(0x0001bb7eu): goto L_1BB7E;
    case RC_ADDR(0x0001bb82u): goto L_1BB82;
    case RC_ADDR(0x0001bb86u): goto L_1BB86;
    case RC_ADDR(0x0001bb88u): goto L_1BB88;
    case RC_ADDR(0x0001bb8cu): goto L_1BB8C;
    case RC_ADDR(0x0001bb8eu): goto L_1BB8E;
    case RC_ADDR(0x0001bb90u): goto L_1BB90;
    case RC_ADDR(0x0001bb96u): goto L_1BB96;
    case RC_ADDR(0x0001bb9au): goto L_1BB9A;
    case RC_ADDR(0x0001bb9eu): goto L_1BB9E;
    case RC_ADDR(0x0001bba2u): goto L_1BBA2;
    case RC_ADDR(0x0001bba4u): goto L_1BBA4;
    case RC_ADDR(0x0001bba8u): goto L_1BBA8;
    case RC_ADDR(0x0001bbaeu): goto L_1BBAE;
    case RC_ADDR(0x0001bbb2u): goto L_1BBB2;
    case RC_ADDR(0x0001bbb4u): goto L_1BBB4;
    case RC_ADDR(0x0001bbb8u): goto L_1BBB8;
    case RC_ADDR(0x0001bbbeu): goto L_1BBBE;
    case RC_ADDR(0x0001bbc2u): goto L_1BBC2;
    case RC_ADDR(0x0001bbc4u): goto L_1BBC4;
    case RC_ADDR(0x0001bbc8u): goto L_1BBC8;
    case RC_ADDR(0x0001bbcau): goto L_1BBCA;
    case RC_ADDR(0x0001bbceu): goto L_1BBCE;
    case RC_ADDR(0x0001bbd2u): goto L_1BBD2;
    case RC_ADDR(0x0001bbd4u): goto L_1BBD4;
    case RC_ADDR(0x0001bbd6u): goto L_1BBD6;
    case RC_ADDR(0x0001bbdau): goto L_1BBDA;
    case RC_ADDR(0x0001bbdeu): goto L_1BBDE;
    case RC_ADDR(0x0001bbe2u): goto L_1BBE2;
    case RC_ADDR(0x0001bbe4u): goto L_1BBE4;
    case RC_ADDR(0x0001bbe8u): goto L_1BBE8;
    case RC_ADDR(0x0001bbeau): goto L_1BBEA;
    case RC_ADDR(0x0001bbecu): goto L_1BBEC;
    case RC_ADDR(0x0001bbf0u): goto L_1BBF0;
    case RC_ADDR(0x0001bbf2u): goto L_1BBF2;
    case RC_ADDR(0x0001bbf6u): goto L_1BBF6;
    case RC_ADDR(0x0001bbf8u): goto L_1BBF8;
    case RC_ADDR(0x0001bbfau): goto L_1BBFA;
    case RC_ADDR(0x0001bbfeu): goto L_1BBFE;
    case RC_ADDR(0x0001bc00u): goto L_1BC00;
    case RC_ADDR(0x0001bc02u): goto L_1BC02;
    case RC_ADDR(0x0001bc06u): goto L_1BC06;
    case RC_ADDR(0x0001bc0au): goto L_1BC0A;
    case RC_ADDR(0x0001bc0eu): goto L_1BC0E;
    case RC_ADDR(0x0001bc10u): goto L_1BC10;
    case RC_ADDR(0x0001bc14u): goto L_1BC14;
    case RC_ADDR(0x0001bc16u): goto L_1BC16;
    case RC_ADDR(0x0001bc18u): goto L_1BC18;
    case RC_ADDR(0x0001bc1eu): goto L_1BC1E;
    case RC_ADDR(0x0001bc20u): goto L_1BC20;
    case RC_ADDR(0x0001bc24u): goto L_1BC24;
    case RC_ADDR(0x0001bc28u): goto L_1BC28;
    case RC_ADDR(0x0001bc2au): goto L_1BC2A;
    case RC_ADDR(0x0001bc30u): goto L_1BC30;
    case RC_ADDR(0x0001bc32u): goto L_1BC32;
    case RC_ADDR(0x0001bc36u): goto L_1BC36;
    case RC_ADDR(0x0001bc38u): goto L_1BC38;
    case RC_ADDR(0x0001bc3au): goto L_1BC3A;
    case RC_ADDR(0x0001bc3eu): goto L_1BC3E;
    case RC_ADDR(0x0001bc42u): goto L_1BC42;
    case RC_ADDR(0x0001bc46u): goto L_1BC46;
    case RC_ADDR(0x0001bc4au): goto L_1BC4A;
    case RC_ADDR(0x0001bc4cu): goto L_1BC4C;
    case RC_ADDR(0x0001bc50u): goto L_1BC50;
    case RC_ADDR(0x0001bc54u): goto L_1BC54;
    case RC_ADDR(0x0001bc56u): goto L_1BC56;
    case RC_ADDR(0x0001bc5au): goto L_1BC5A;
    case RC_ADDR(0x0001bc5cu): goto L_1BC5C;
    case RC_ADDR(0x0001bc5eu): goto L_1BC5E;
    case RC_ADDR(0x0001bc62u): goto L_1BC62;
    case RC_ADDR(0x0001bc6au): goto L_1BC6A;
    case RC_ADDR(0x0001bc6eu): goto L_1BC6E;
    case RC_ADDR(0x0001bc72u): goto L_1BC72;
    case RC_ADDR(0x0001bc76u): goto L_1BC76;
    case RC_ADDR(0x0001bc78u): goto L_1BC78;
    case RC_ADDR(0x0001bc7au): goto L_1BC7A;
    case RC_ADDR(0x0001bc7eu): goto L_1BC7E;
    case RC_ADDR(0x0001bc82u): goto L_1BC82;
    case RC_ADDR(0x0001bc84u): goto L_1BC84;
    case RC_ADDR(0x0001bc88u): goto L_1BC88;
    case RC_ADDR(0x0001bc8au): goto L_1BC8A;
    case RC_ADDR(0x0001bc8eu): goto L_1BC8E;
    case RC_ADDR(0x0001bc92u): goto L_1BC92;
    case RC_ADDR(0x0001bc96u): goto L_1BC96;
    case RC_ADDR(0x0001bc98u): goto L_1BC98;
    case RC_ADDR(0x0001bc9eu): goto L_1BC9E;
    case RC_ADDR(0x0001bca0u): goto L_1BCA0;
    case RC_ADDR(0x0001bca4u): goto L_1BCA4;
    case RC_ADDR(0x0001bca8u): goto L_1BCA8;
    case RC_ADDR(0x0001bcaau): goto L_1BCAA;
    case RC_ADDR(0x0001bcacu): goto L_1BCAC;
    case RC_ADDR(0x0001bcb2u): goto L_1BCB2;
    case RC_ADDR(0x0001bcb6u): goto L_1BCB6;
    case RC_ADDR(0x0001bcb8u): goto L_1BCB8;
    case RC_ADDR(0x0001bcbeu): goto L_1BCBE;
    case RC_ADDR(0x0001bcc0u): goto L_1BCC0;
    case RC_ADDR(0x0001bcc4u): goto L_1BCC4;
    case RC_ADDR(0x0001bccau): goto L_1BCCA;
    case RC_ADDR(0x0001bcccu): goto L_1BCCC;
    case RC_ADDR(0x0001bcd0u): goto L_1BCD0;
    case RC_ADDR(0x0001bcd2u): goto L_1BCD2;
    case RC_ADDR(0x0001bcd6u): goto L_1BCD6;
    case RC_ADDR(0x0001bcd8u): goto L_1BCD8;
    case RC_ADDR(0x0001bcdcu): goto L_1BCDC;
    case RC_ADDR(0x0001bce0u): goto L_1BCE0;
    case RC_ADDR(0x0001bce4u): goto L_1BCE4;
    case RC_ADDR(0x0001bce6u): goto L_1BCE6;
    case RC_ADDR(0x0001bceau): goto L_1BCEA;
    case RC_ADDR(0x0001bceeu): goto L_1BCEE;
    case RC_ADDR(0x0001bcf2u): goto L_1BCF2;
    case RC_ADDR(0x0001bcf6u): goto L_1BCF6;
    case RC_ADDR(0x0001bcfau): goto L_1BCFA;
    case RC_ADDR(0x0001bcfeu): goto L_1BCFE;
    case RC_ADDR(0x0001bd00u): goto L_1BD00;
    case RC_ADDR(0x0001bd04u): goto L_1BD04;
    case RC_ADDR(0x0001bd06u): goto L_1BD06;
    case RC_ADDR(0x0001bd0au): goto L_1BD0A;
    case RC_ADDR(0x0001bd0eu): goto L_1BD0E;
    case RC_ADDR(0x0001bd10u): goto L_1BD10;
    case RC_ADDR(0x0001bd14u): goto L_1BD14;
    case RC_ADDR(0x0001bd18u): goto L_1BD18;
    case RC_ADDR(0x0001bd1cu): goto L_1BD1C;
    case RC_ADDR(0x0001bd20u): goto L_1BD20;
    case RC_ADDR(0x0001bd22u): goto L_1BD22;
    case RC_ADDR(0x0001bd26u): goto L_1BD26;
    case RC_ADDR(0x0001bd2au): goto L_1BD2A;
    case RC_ADDR(0x0001bd2cu): goto L_1BD2C;
    case RC_ADDR(0x0001bd30u): goto L_1BD30;
    case RC_ADDR(0x0001bd34u): goto L_1BD34;
    case RC_ADDR(0x0001bd36u): goto L_1BD36;
    case RC_ADDR(0x0001bd38u): goto L_1BD38;
    case RC_ADDR(0x0001bd3cu): goto L_1BD3C;
    case RC_ADDR(0x0001bd40u): goto L_1BD40;
    case RC_ADDR(0x0001bd42u): goto L_1BD42;
    case RC_ADDR(0x0001bd46u): goto L_1BD46;
    case RC_ADDR(0x0001bd48u): goto L_1BD48;
    case RC_ADDR(0x0001bd4eu): goto L_1BD4E;
    case RC_ADDR(0x0001bd50u): goto L_1BD50;
    case RC_ADDR(0x0001bd54u): goto L_1BD54;
    case RC_ADDR(0x0001bd56u): goto L_1BD56;
    case RC_ADDR(0x0001bd5au): goto L_1BD5A;
    case RC_ADDR(0x0001bd5cu): goto L_1BD5C;
    case RC_ADDR(0x0001bd60u): goto L_1BD60;
    case RC_ADDR(0x0001bd64u): goto L_1BD64;
    case RC_ADDR(0x0001bd66u): goto L_1BD66;
    case RC_ADDR(0x0001bd6au): goto L_1BD6A;
    case RC_ADDR(0x0001bd6cu): goto L_1BD6C;
    case RC_ADDR(0x0001bd6eu): goto L_1BD6E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1BA86:
    /* 0001ba86   4  link.w A5,#ffffffee */
    c->pc = RC_ADDR(0x0001ba86u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x12u;

L_1BA8A:
    /* 0001ba8a   6  cmpi.w #1,(26f2,A4) */
    c->pc = RC_ADDR(0x0001ba8au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26f2u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_1BA90:
    /* 0001ba90   2  bne 0001ba96 */
    c->pc = RC_ADDR(0x0001ba90u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1BA96;

L_1BA92:
    /* 0001ba92   4  clr.w (26f2,A4) */
    c->pc = RC_ADDR(0x0001ba92u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x26f2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1BA96:
    /* 0001ba96   4  clr.w (26e2,A4) */
    c->pc = RC_ADDR(0x0001ba96u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x26e2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1BA9A:
    /* 0001ba9a   4  clr.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001ba9au);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1BA9E:
    /* 0001ba9e   4  bra 0001bc72 */
    c->pc = RC_ADDR(0x0001ba9eu);
    rc_step(c, m, 10);
    goto L_1BC72;

L_1BAA2:
    /* 0001baa2   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001baa2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BAA6:
    /* 0001baa6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001baa6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1BAA8:
    /* 0001baa8   4  lea (25f6,A4),A0 */
    c->pc = RC_ADDR(0x0001baa8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x25f6u);

L_1BAAC:
    /* 0001baac   6  move.w (0,A0,D0.w),(fffffff4,A5) */
    c->pc = RC_ADDR(0x0001baacu);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BAB2:
    /* 0001bab2   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001bab2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BAB6:
    /* 0001bab6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001bab6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1BAB8:
    /* 0001bab8   4  lea (2624,A4),A0 */
    c->pc = RC_ADDR(0x0001bab8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2624u);

L_1BABC:
    /* 0001babc   6  move.w (0,A0,D0.w),(fffffff2,A5) */
    c->pc = RC_ADDR(0x0001babcu);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BAC2:
    /* 0001bac2   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001bac2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BAC6:
    /* 0001bac6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001bac6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1BAC8:
    /* 0001bac8   4  lea (25c8,A4),A0 */
    c->pc = RC_ADDR(0x0001bac8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x25c8u);

L_1BACC:
    /* 0001bacc   6  move.w (0,A0,D0.w),(fffffff6,A5) */
    c->pc = RC_ADDR(0x0001baccu);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BAD2:
    /* 0001bad2   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x0001bad2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BAD6:
    /* 0001bad6   2  subq.w #8,D0 */
    c->pc = RC_ADDR(0x0001bad6u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000008u;
    rc_flags_sub(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1BAD8:
    /* 0001bad8   4  move.w (e76,A4),D1 */
    c->pc = RC_ADDR(0x0001bad8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe76u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BADC:
    /* 0001badc   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x0001badcu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1BADE:
    /* 0001bade   4  ble 0001bb9a */
    c->pc = RC_ADDR(0x0001badeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1BB9A;

L_1BAE2:
    /* 0001bae2   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x0001bae2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BAE6:
    /* 0001bae6   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001bae6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1BAE8:
    /* 0001bae8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001bae8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1BAEA:
    /* 0001baea   4  lea (ffffce48,A4),A0 */
    c->pc = RC_ADDR(0x0001baeau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x31b8u);

L_1BAEE:
    /* 0001baee   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001baeeu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BAF2:
    /* 0001baf2   4  add.w (fffffff4,A5),D1 */
    c->pc = RC_ADDR(0x0001baf2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1BAF6:
    /* 0001baf6   2  addq.w #8,D1 */
    c->pc = RC_ADDR(0x0001baf6u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00000008u;
    rc_flags_add(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1BAF8:
    /* 0001baf8   4  move.w (e76,A4),D0 */
    c->pc = RC_ADDR(0x0001baf8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe76u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BAFC:
    /* 0001bafc   2  cmp.w D1,D0 */
    c->pc = RC_ADDR(0x0001bafcu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1BAFE:
    /* 0001bafe   4  bge 0001bb9a */
    c->pc = RC_ADDR(0x0001bafeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1BB9A;

L_1BB02:
    /* 0001bb02   4  move.w (fffffff2,A5),D0 */
    c->pc = RC_ADDR(0x0001bb02u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BB06:
    /* 0001bb06   2  subq.w #6,D0 */
    c->pc = RC_ADDR(0x0001bb06u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000006u;
    rc_flags_sub(c, RC_W, t1, 0x00000006u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1BB08:
    /* 0001bb08   4  move.w (e78,A4),D1 */
    c->pc = RC_ADDR(0x0001bb08u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe78u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BB0C:
    /* 0001bb0c   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x0001bb0cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1BB0E:
    /* 0001bb0e   4  ble 0001bb9a */
    c->pc = RC_ADDR(0x0001bb0eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1BB9A;

L_1BB12:
    /* 0001bb12   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x0001bb12u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BB16:
    /* 0001bb16   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001bb16u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1BB18:
    /* 0001bb18   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001bb18u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1BB1A:
    /* 0001bb1a   4  lea (ffffce54,A4),A0 */
    c->pc = RC_ADDR(0x0001bb1au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x31acu);

L_1BB1E:
    /* 0001bb1e   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001bb1eu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BB22:
    /* 0001bb22   4  add.w (fffffff2,A5),D1 */
    c->pc = RC_ADDR(0x0001bb22u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1BB26:
    /* 0001bb26   2  addq.w #6,D1 */
    c->pc = RC_ADDR(0x0001bb26u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00000006u;
    rc_flags_add(c, RC_W, t1, 0x00000006u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1BB28:
    /* 0001bb28   4  move.w (e78,A4),D0 */
    c->pc = RC_ADDR(0x0001bb28u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe78u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BB2C:
    /* 0001bb2c   2  cmp.w D1,D0 */
    c->pc = RC_ADDR(0x0001bb2cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1BB2E:
    /* 0001bb2e   2  bge 0001bb9a */
    c->pc = RC_ADDR(0x0001bb2eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1BB9A;

L_1BB30:
    /* 0001bb30   6  cmpi.w #3,(e74,A4) */
    c->pc = RC_ADDR(0x0001bb30u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe74u));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_1BB36:
    /* 0001bb36   2  beq 0001bb9a */
    c->pc = RC_ADDR(0x0001bb36u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1BB9A;

L_1BB38:
    /* 0001bb38   8  cmpi.l #2,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001bb38u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x00000002u);

L_1BB40:
    /* 0001bb40   2  bgt 0001bb4a */
    c->pc = RC_ADDR(0x0001bb40u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_1BB4A;

L_1BB42:
    /* 0001bb42   6  cmpi.w #1,(e74,A4) */
    c->pc = RC_ADDR(0x0001bb42u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe74u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_1BB48:
    /* 0001bb48   2  beq 0001bb90 */
    c->pc = RC_ADDR(0x0001bb48u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1BB90;

L_1BB4A:
    /* 0001bb4a   6  cmpi.w #5,(fffffff6,A5) */
    c->pc = RC_ADDR(0x0001bb4au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_1BB50:
    /* 0001bb50   2  bne 0001bb64 */
    c->pc = RC_ADDR(0x0001bb50u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1BB64;

L_1BB52:
    /* 0001bb52   4  move.w (296a,A4),D0 */
    c->pc = RC_ADDR(0x0001bb52u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x296au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BB56:
    /* 0001bb56   4  cmp.w (2968,A4),D0 */
    c->pc = RC_ADDR(0x0001bb56u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2968u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1BB5A:
    /* 0001bb5a   2  bne 0001bb62 */
    c->pc = RC_ADDR(0x0001bb5au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1BB62;

L_1BB5C:
    /* 0001bb5c   6  move.w #1,(26f2,A4) */
    c->pc = RC_ADDR(0x0001bb5cu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x26f2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BB62:
    /* 0001bb62   2  bra 0001bb8e */
    c->pc = RC_ADDR(0x0001bb62u);
    rc_step(c, m, 10);
    goto L_1BB8E;

L_1BB64:
    /* 0001bb64   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x0001bb64u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BB68:
    /* 0001bb68   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001bb68u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1BB6A:
    /* 0001bb6a   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001bb6au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1BB6C:
    /* 0001bb6c   4  lea (2976,A4),A0 */
    c->pc = RC_ADDR(0x0001bb6cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2976u);

L_1BB70:
    /* 0001bb70   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0001bb70u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BB74:
    /* 0001bb74   4  move.w (fffffff2,A5),D0 */
    c->pc = RC_ADDR(0x0001bb74u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BB78:
    /* 0001bb78   4  sub.w (e6e,A4),D0 */
    c->pc = RC_ADDR(0x0001bb78u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6eu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1BB7C:
    /* 0001bb7c   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001bb7cu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BB7E:
    /* 0001bb7e   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x0001bb7eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BB82:
    /* 0001bb82   4  sub.w (e6c,A4),D0 */
    c->pc = RC_ADDR(0x0001bb82u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6cu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1BB86:
    /* 0001bb86   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001bb86u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BB88:
    /* 0001bb88   4  jsr (ffff8176,A4) */
    c->pc = RC_ADDR(0x0001bb88u);
    rc_step(c, m, 18);
    /* vector 62 */
    rc_push32(c, m, RC_ADDR(0x0001bb8cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c6cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00012a5eu);
    return;

L_1BB8C:
    /* 0001bb8c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001bb8cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1BB8E:
    /* 0001bb8e   2  bra 0001bb96 */
    c->pc = RC_ADDR(0x0001bb8eu);
    rc_step(c, m, 10);
    goto L_1BB96;

L_1BB90:
    /* 0001bb90   6  move.w #2,(26e2,A4) */
    c->pc = RC_ADDR(0x0001bb90u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x26e2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BB96:
    /* 0001bb96   4  bra 0001bc6e */
    c->pc = RC_ADDR(0x0001bb96u);
    rc_step(c, m, 10);
    goto L_1BC6E;

L_1BB9A:
    /* 0001bb9a   4  clr.l (fffffff8,A5) */
    c->pc = RC_ADDR(0x0001bb9au);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1BB9E:
    /* 0001bb9e   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0001bb9eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BBA2:
    /* 0001bba2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001bba2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1BBA4:
    /* 0001bba4   4  lea (2710,A4),A0 */
    c->pc = RC_ADDR(0x0001bba4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2710u);

L_1BBA8:
    /* 0001bba8   6  move.w (0,A0,D0.w),(fffffff0,A5) */
    c->pc = RC_ADDR(0x0001bba8u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BBAE:
    /* 0001bbae   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0001bbaeu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BBB2:
    /* 0001bbb2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001bbb2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1BBB4:
    /* 0001bbb4   4  lea (2728,A4),A0 */
    c->pc = RC_ADDR(0x0001bbb4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2728u);

L_1BBB8:
    /* 0001bbb8   6  move.w (0,A0,D0.w),(ffffffee,A5) */
    c->pc = RC_ADDR(0x0001bbb8u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BBBE:
    /* 0001bbbe   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x0001bbbeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BBC2:
    /* 0001bbc2   2  subq.w #8,D0 */
    c->pc = RC_ADDR(0x0001bbc2u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000008u;
    rc_flags_sub(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1BBC4:
    /* 0001bbc4   4  move.w (fffffff0,A5),D1 */
    c->pc = RC_ADDR(0x0001bbc4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BBC8:
    /* 0001bbc8   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x0001bbc8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1BBCA:
    /* 0001bbca   4  ble 0001bc5e */
    c->pc = RC_ADDR(0x0001bbcau);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1BC5E;

L_1BBCE:
    /* 0001bbce   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x0001bbceu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BBD2:
    /* 0001bbd2   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001bbd2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1BBD4:
    /* 0001bbd4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001bbd4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1BBD6:
    /* 0001bbd6   4  lea (ffffce48,A4),A0 */
    c->pc = RC_ADDR(0x0001bbd6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x31b8u);

L_1BBDA:
    /* 0001bbda   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001bbdau);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BBDE:
    /* 0001bbde   4  add.w (fffffff4,A5),D1 */
    c->pc = RC_ADDR(0x0001bbdeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1BBE2:
    /* 0001bbe2   2  addq.w #8,D1 */
    c->pc = RC_ADDR(0x0001bbe2u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00000008u;
    rc_flags_add(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1BBE4:
    /* 0001bbe4   4  move.w (fffffff0,A5),D0 */
    c->pc = RC_ADDR(0x0001bbe4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BBE8:
    /* 0001bbe8   2  cmp.w D1,D0 */
    c->pc = RC_ADDR(0x0001bbe8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1BBEA:
    /* 0001bbea   2  bge 0001bc5e */
    c->pc = RC_ADDR(0x0001bbeau);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1BC5E;

L_1BBEC:
    /* 0001bbec   4  move.w (fffffff2,A5),D0 */
    c->pc = RC_ADDR(0x0001bbecu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BBF0:
    /* 0001bbf0   2  subq.w #6,D0 */
    c->pc = RC_ADDR(0x0001bbf0u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000006u;
    rc_flags_sub(c, RC_W, t1, 0x00000006u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1BBF2:
    /* 0001bbf2   4  move.w (ffffffee,A5),D1 */
    c->pc = RC_ADDR(0x0001bbf2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BBF6:
    /* 0001bbf6   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x0001bbf6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1BBF8:
    /* 0001bbf8   2  ble 0001bc5e */
    c->pc = RC_ADDR(0x0001bbf8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1BC5E;

L_1BBFA:
    /* 0001bbfa   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x0001bbfau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BBFE:
    /* 0001bbfe   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001bbfeu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1BC00:
    /* 0001bc00   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001bc00u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1BC02:
    /* 0001bc02   4  lea (ffffce54,A4),A0 */
    c->pc = RC_ADDR(0x0001bc02u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x31acu);

L_1BC06:
    /* 0001bc06   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001bc06u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BC0A:
    /* 0001bc0a   4  add.w (fffffff2,A5),D1 */
    c->pc = RC_ADDR(0x0001bc0au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1BC0E:
    /* 0001bc0e   2  addq.w #6,D1 */
    c->pc = RC_ADDR(0x0001bc0eu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00000006u;
    rc_flags_add(c, RC_W, t1, 0x00000006u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1BC10:
    /* 0001bc10   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x0001bc10u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BC14:
    /* 0001bc14   2  cmp.w D1,D0 */
    c->pc = RC_ADDR(0x0001bc14u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1BC16:
    /* 0001bc16   2  bge 0001bc5e */
    c->pc = RC_ADDR(0x0001bc16u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1BC5E;

L_1BC18:
    /* 0001bc18   6  cmpi.w #5,(fffffff6,A5) */
    c->pc = RC_ADDR(0x0001bc18u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_1BC1E:
    /* 0001bc1e   2  bne 0001bc32 */
    c->pc = RC_ADDR(0x0001bc1eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1BC32;

L_1BC20:
    /* 0001bc20   4  move.w (296a,A4),D0 */
    c->pc = RC_ADDR(0x0001bc20u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x296au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BC24:
    /* 0001bc24   4  cmp.w (2968,A4),D0 */
    c->pc = RC_ADDR(0x0001bc24u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2968u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1BC28:
    /* 0001bc28   2  bne 0001bc30 */
    c->pc = RC_ADDR(0x0001bc28u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1BC30;

L_1BC2A:
    /* 0001bc2a   6  move.w #1,(26f2,A4) */
    c->pc = RC_ADDR(0x0001bc2au);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x26f2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BC30:
    /* 0001bc30   2  bra 0001bc5c */
    c->pc = RC_ADDR(0x0001bc30u);
    rc_step(c, m, 10);
    goto L_1BC5C;

L_1BC32:
    /* 0001bc32   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x0001bc32u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BC36:
    /* 0001bc36   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001bc36u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1BC38:
    /* 0001bc38   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001bc38u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1BC3A:
    /* 0001bc3a   4  lea (2976,A4),A0 */
    c->pc = RC_ADDR(0x0001bc3au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2976u);

L_1BC3E:
    /* 0001bc3e   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0001bc3eu);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BC42:
    /* 0001bc42   4  move.w (fffffff2,A5),D0 */
    c->pc = RC_ADDR(0x0001bc42u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BC46:
    /* 0001bc46   4  sub.w (e6e,A4),D0 */
    c->pc = RC_ADDR(0x0001bc46u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6eu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1BC4A:
    /* 0001bc4a   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001bc4au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BC4C:
    /* 0001bc4c   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x0001bc4cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BC50:
    /* 0001bc50   4  sub.w (e6c,A4),D0 */
    c->pc = RC_ADDR(0x0001bc50u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6cu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1BC54:
    /* 0001bc54   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001bc54u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BC56:
    /* 0001bc56   4  jsr (ffff8176,A4) */
    c->pc = RC_ADDR(0x0001bc56u);
    rc_step(c, m, 18);
    /* vector 62 */
    rc_push32(c, m, RC_ADDR(0x0001bc5au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c6cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00012a5eu);
    return;

L_1BC5A:
    /* 0001bc5a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001bc5au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1BC5C:
    /* 0001bc5c   2  bra 0001bc6e */
    c->pc = RC_ADDR(0x0001bc5cu);
    rc_step(c, m, 10);
    goto L_1BC6E;

L_1BC5E:
    /* 0001bc5e   4  addq.l #1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0001bc5eu);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_1BC62:
    /* 0001bc62   8  cmpi.l #c,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0001bc62u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_cmp(c, RC_L, t0, 0x0000000cu);

L_1BC6A:
    /* 0001bc6a   4  blt 0001bb9e */
    c->pc = RC_ADDR(0x0001bc6au);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1BB9E; }

L_1BC6E:
    /* 0001bc6e   4  addq.l #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001bc6eu);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_1BC72:
    /* 0001bc72   4  move.w (2968,A4),D0 */
    c->pc = RC_ADDR(0x0001bc72u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2968u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BC76:
    /* 0001bc76   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001bc76u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1BC78:
    /* 0001bc78   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001bc78u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1BC7A:
    /* 0001bc7a   4  lea (ffffcdd6,A4),A0 */
    c->pc = RC_ADDR(0x0001bc7au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x322au);

L_1BC7E:
    /* 0001bc7e   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001bc7eu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BC82:
    /* 0001bc82   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001bc82u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1BC84:
    /* 0001bc84   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001bc84u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BC88:
    /* 0001bc88   2  cmp.l D1,D0 */
    c->pc = RC_ADDR(0x0001bc88u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1BC8A:
    /* 0001bc8a   4  blt 0001baa2 */
    c->pc = RC_ADDR(0x0001bc8au);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1BAA2; }

L_1BC8E:
    /* 0001bc8e   4  move.w (296a,A4),D0 */
    c->pc = RC_ADDR(0x0001bc8eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x296au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BC92:
    /* 0001bc92   4  cmp.w (2968,A4),D0 */
    c->pc = RC_ADDR(0x0001bc92u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2968u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1BC96:
    /* 0001bc96   2  bne 0001bcdc */
    c->pc = RC_ADDR(0x0001bc96u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1BCDC;

L_1BC98:
    /* 0001bc98   6  cmpi.w #2,(26f2,A4) */
    c->pc = RC_ADDR(0x0001bc98u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26f2u));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_1BC9E:
    /* 0001bc9e   2  bne 0001bcb2 */
    c->pc = RC_ADDR(0x0001bc9eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1BCB2;

L_1BCA0:
    /* 0001bca0   4  move.w (26f6,A4),D0 */
    c->pc = RC_ADDR(0x0001bca0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26f6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BCA4:
    /* 0001bca4   4  subq.w #1,(26f6,A4) */
    c->pc = RC_ADDR(0x0001bca4u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x26f6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1BCA8:
    /* 0001bca8   2  tst.w D0 */
    c->pc = RC_ADDR(0x0001bca8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1BCAA:
    /* 0001bcaa   2  bne 0001bcb2 */
    c->pc = RC_ADDR(0x0001bcaau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1BCB2;

L_1BCAC:
    /* 0001bcac   6  move.w #1,(26f2,A4) */
    c->pc = RC_ADDR(0x0001bcacu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x26f2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BCB2:
    /* 0001bcb2   4  tst.w (26f2,A4) */
    c->pc = RC_ADDR(0x0001bcb2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26f2u));
    rc_set_nzvc(c, t0, RC_W);

L_1BCB6:
    /* 0001bcb6   2  beq 0001bcd2 */
    c->pc = RC_ADDR(0x0001bcb6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1BCD2;

L_1BCB8:
    /* 0001bcb8   6  cmpi.w #9,(26f4,A4) */
    c->pc = RC_ADDR(0x0001bcb8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26f4u));
    rc_cmp(c, RC_W, t0, 0x00000009u);

L_1BCBE:
    /* 0001bcbe   2  bge 0001bcc4 */
    c->pc = RC_ADDR(0x0001bcbeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1BCC4;

L_1BCC0:
    /* 0001bcc0   4  addq.w #1,(26f4,A4) */
    c->pc = RC_ADDR(0x0001bcc0u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x26f4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1BCC4:
    /* 0001bcc4   6  cmpi.w #1,(26f4,A4) */
    c->pc = RC_ADDR(0x0001bcc4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26f4u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_1BCCA:
    /* 0001bcca   2  bne 0001bcd0 */
    c->pc = RC_ADDR(0x0001bccau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1BCD0;

L_1BCCC:
    /* 0001bccc   4  jsr (0001cd7e) */
    c->pc = RC_ADDR(0x0001bcccu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001bcd0u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001cd7eu);
    return;

L_1BCD0:
    /* 0001bcd0   2  bra 0001bcdc */
    c->pc = RC_ADDR(0x0001bcd0u);
    rc_step(c, m, 10);
    goto L_1BCDC;

L_1BCD2:
    /* 0001bcd2   4  tst.w (26f4,A4) */
    c->pc = RC_ADDR(0x0001bcd2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26f4u));
    rc_set_nzvc(c, t0, RC_W);

L_1BCD6:
    /* 0001bcd6   2  beq 0001bcdc */
    c->pc = RC_ADDR(0x0001bcd6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1BCDC;

L_1BCD8:
    /* 0001bcd8   4  subq.w #1,(26f4,A4) */
    c->pc = RC_ADDR(0x0001bcd8u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x26f4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1BCDC:
    /* 0001bcdc   4  move.w #180,D0 */
    c->pc = RC_ADDR(0x0001bcdcu);
    rc_step(c, m, 8);
    t0 = 0x00000180u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BCE0:
    /* 0001bce0   4  sub.w (e6c,A4),D0 */
    c->pc = RC_ADDR(0x0001bce0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6cu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1BCE4:
    /* 0001bce4   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x0001bce4u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1BCE6:
    /* 0001bce6   4  move.w D0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x0001bce6u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BCEA:
    /* 0001bcea   4  move.w #118,D0 */
    c->pc = RC_ADDR(0x0001bceau);
    rc_step(c, m, 8);
    t0 = 0x00000118u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BCEE:
    /* 0001bcee   4  sub.w (e6e,A4),D0 */
    c->pc = RC_ADDR(0x0001bceeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6eu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1BCF2:
    /* 0001bcf2   4  move.w D0,(fffffff2,A5) */
    c->pc = RC_ADDR(0x0001bcf2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BCF6:
    /* 0001bcf6   4  move.l (298e,A4),-(A7) */
    c->pc = RC_ADDR(0x0001bcf6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x298eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BCFA:
    /* 0001bcfa   4  move.w (fffffff2,A5),D0 */
    c->pc = RC_ADDR(0x0001bcfau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BCFE:
    /* 0001bcfe   2  addq.w #6,D0 */
    c->pc = RC_ADDR(0x0001bcfeu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000006u;
    rc_flags_add(c, RC_W, t1, 0x00000006u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1BD00:
    /* 0001bd00   4  sub.w (26f4,A4),D0 */
    c->pc = RC_ADDR(0x0001bd00u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26f4u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1BD04:
    /* 0001bd04   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001bd04u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BD06:
    /* 0001bd06   4  move.w (fffffff4,A5),-(A7) */
    c->pc = RC_ADDR(0x0001bd06u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BD0A:
    /* 0001bd0a   4  jsr (ffff8176,A4) */
    c->pc = RC_ADDR(0x0001bd0au);
    rc_step(c, m, 18);
    /* vector 62 */
    rc_push32(c, m, RC_ADDR(0x0001bd0eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c6cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00012a5eu);
    return;

L_1BD0E:
    /* 0001bd0e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001bd0eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1BD10:
    /* 0001bd10   4  move.l (2992,A4),-(A7) */
    c->pc = RC_ADDR(0x0001bd10u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2992u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BD14:
    /* 0001bd14   4  move.w (fffffff2,A5),D0 */
    c->pc = RC_ADDR(0x0001bd14u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BD18:
    /* 0001bd18   4  add.w (26f4,A4),D0 */
    c->pc = RC_ADDR(0x0001bd18u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26f4u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1BD1C:
    /* 0001bd1c   4  add.w #f,D0 */
    c->pc = RC_ADDR(0x0001bd1cu);
    rc_step(c, m, 10);
    t0 = 0x0000000fu;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1BD20:
    /* 0001bd20   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001bd20u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BD22:
    /* 0001bd22   4  move.w (fffffff4,A5),-(A7) */
    c->pc = RC_ADDR(0x0001bd22u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BD26:
    /* 0001bd26   4  jsr (ffff8176,A4) */
    c->pc = RC_ADDR(0x0001bd26u);
    rc_step(c, m, 18);
    /* vector 62 */
    rc_push32(c, m, RC_ADDR(0x0001bd2au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c6cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00012a5eu);
    return;

L_1BD2A:
    /* 0001bd2a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001bd2au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1BD2C:
    /* 0001bd2c   4  move.l (298a,A4),-(A7) */
    c->pc = RC_ADDR(0x0001bd2cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x298au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BD30:
    /* 0001bd30   4  move.w (fffffff2,A5),D0 */
    c->pc = RC_ADDR(0x0001bd30u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BD34:
    /* 0001bd34   2  subq.w #3,D0 */
    c->pc = RC_ADDR(0x0001bd34u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000003u;
    rc_flags_sub(c, RC_W, t1, 0x00000003u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1BD36:
    /* 0001bd36   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001bd36u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BD38:
    /* 0001bd38   4  move.w (fffffff4,A5),-(A7) */
    c->pc = RC_ADDR(0x0001bd38u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BD3C:
    /* 0001bd3c   4  jsr (ffff8176,A4) */
    c->pc = RC_ADDR(0x0001bd3cu);
    rc_step(c, m, 18);
    /* vector 62 */
    rc_push32(c, m, RC_ADDR(0x0001bd40u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c6cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00012a5eu);
    return;

L_1BD40:
    /* 0001bd40   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001bd40u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1BD42:
    /* 0001bd42   4  tst.w (2968,A4) */
    c->pc = RC_ADDR(0x0001bd42u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2968u));
    rc_set_nzvc(c, t0, RC_W);

L_1BD46:
    /* 0001bd46   2  bne 0001bd6c */
    c->pc = RC_ADDR(0x0001bd46u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1BD6C;

L_1BD48:
    /* 0001bd48   6  cmpi.w #2,(7a4,A4) */
    c->pc = RC_ADDR(0x0001bd48u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7a4u));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_1BD4E:
    /* 0001bd4e   2  bne 0001bd6c */
    c->pc = RC_ADDR(0x0001bd4eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1BD6C;

L_1BD50:
    /* 0001bd50   4  move.l (2c52,A4),-(A7) */
    c->pc = RC_ADDR(0x0001bd50u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2c52u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BD54:
    /* 0001bd54   2  moveq #5a,D0 */
    c->pc = RC_ADDR(0x0001bd54u);
    rc_step(c, m, 4);
    c->d[0] = 0x0000005au;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1BD56:
    /* 0001bd56   4  sub.w (e6e,A4),D0 */
    c->pc = RC_ADDR(0x0001bd56u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6eu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1BD5A:
    /* 0001bd5a   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001bd5au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BD5C:
    /* 0001bd5c   4  move.w #227,D0 */
    c->pc = RC_ADDR(0x0001bd5cu);
    rc_step(c, m, 8);
    t0 = 0x00000227u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BD60:
    /* 0001bd60   4  sub.w (e6c,A4),D0 */
    c->pc = RC_ADDR(0x0001bd60u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6cu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1BD64:
    /* 0001bd64   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001bd64u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BD66:
    /* 0001bd66   4  jsr (ffff8176,A4) */
    c->pc = RC_ADDR(0x0001bd66u);
    rc_step(c, m, 18);
    /* vector 62 */
    rc_push32(c, m, RC_ADDR(0x0001bd6au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c6cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00012a5eu);
    return;

L_1BD6A:
    /* 0001bd6a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001bd6au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1BD6C:
    /* 0001bd6c   2  unlk A5 */
    c->pc = RC_ADDR(0x0001bd6cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1BD6E:
    /* 0001bd6e   2  rts */
    c->pc = RC_ADDR(0x0001bd6eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
