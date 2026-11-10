/* fn_0000bade - 618 byte(s), 173 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000bade(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case 0x0000badeu: goto L_BADE;
    case 0x0000bae2u: goto L_BAE2;
    case 0x0000bae6u: goto L_BAE6;
    case 0x0000baeau: goto L_BAEA;
    case 0x0000baecu: goto L_BAEC;
    case 0x0000baf0u: goto L_BAF0;
    case 0x0000baf4u: goto L_BAF4;
    case 0x0000baf8u: goto L_BAF8;
    case 0x0000bafcu: goto L_BAFC;
    case 0x0000bb00u: goto L_BB00;
    case 0x0000bb04u: goto L_BB04;
    case 0x0000bb08u: goto L_BB08;
    case 0x0000bb0cu: goto L_BB0C;
    case 0x0000bb10u: goto L_BB10;
    case 0x0000bb14u: goto L_BB14;
    case 0x0000bb18u: goto L_BB18;
    case 0x0000bb1cu: goto L_BB1C;
    case 0x0000bb20u: goto L_BB20;
    case 0x0000bb22u: goto L_BB22;
    case 0x0000bb26u: goto L_BB26;
    case 0x0000bb28u: goto L_BB28;
    case 0x0000bb2cu: goto L_BB2C;
    case 0x0000bb30u: goto L_BB30;
    case 0x0000bb34u: goto L_BB34;
    case 0x0000bb38u: goto L_BB38;
    case 0x0000bb3cu: goto L_BB3C;
    case 0x0000bb3eu: goto L_BB3E;
    case 0x0000bb42u: goto L_BB42;
    case 0x0000bb44u: goto L_BB44;
    case 0x0000bb48u: goto L_BB48;
    case 0x0000bb4cu: goto L_BB4C;
    case 0x0000bb50u: goto L_BB50;
    case 0x0000bb54u: goto L_BB54;
    case 0x0000bb56u: goto L_BB56;
    case 0x0000bb5au: goto L_BB5A;
    case 0x0000bb5eu: goto L_BB5E;
    case 0x0000bb60u: goto L_BB60;
    case 0x0000bb64u: goto L_BB64;
    case 0x0000bb68u: goto L_BB68;
    case 0x0000bb6au: goto L_BB6A;
    case 0x0000bb6eu: goto L_BB6E;
    case 0x0000bb70u: goto L_BB70;
    case 0x0000bb74u: goto L_BB74;
    case 0x0000bb78u: goto L_BB78;
    case 0x0000bb7au: goto L_BB7A;
    case 0x0000bb7eu: goto L_BB7E;
    case 0x0000bb82u: goto L_BB82;
    case 0x0000bb84u: goto L_BB84;
    case 0x0000bb88u: goto L_BB88;
    case 0x0000bb8cu: goto L_BB8C;
    case 0x0000bb8eu: goto L_BB8E;
    case 0x0000bb92u: goto L_BB92;
    case 0x0000bb94u: goto L_BB94;
    case 0x0000bb98u: goto L_BB98;
    case 0x0000bb9cu: goto L_BB9C;
    case 0x0000bb9eu: goto L_BB9E;
    case 0x0000bba2u: goto L_BBA2;
    case 0x0000bba6u: goto L_BBA6;
    case 0x0000bba8u: goto L_BBA8;
    case 0x0000bbacu: goto L_BBAC;
    case 0x0000bbb0u: goto L_BBB0;
    case 0x0000bbb4u: goto L_BBB4;
    case 0x0000bbb8u: goto L_BBB8;
    case 0x0000bbbau: goto L_BBBA;
    case 0x0000bbbeu: goto L_BBBE;
    case 0x0000bbc2u: goto L_BBC2;
    case 0x0000bbc4u: goto L_BBC4;
    case 0x0000bbc8u: goto L_BBC8;
    case 0x0000bbccu: goto L_BBCC;
    case 0x0000bbceu: goto L_BBCE;
    case 0x0000bbd2u: goto L_BBD2;
    case 0x0000bbd6u: goto L_BBD6;
    case 0x0000bbdau: goto L_BBDA;
    case 0x0000bbdeu: goto L_BBDE;
    case 0x0000bbe0u: goto L_BBE0;
    case 0x0000bbe4u: goto L_BBE4;
    case 0x0000bbe8u: goto L_BBE8;
    case 0x0000bbeau: goto L_BBEA;
    case 0x0000bbeeu: goto L_BBEE;
    case 0x0000bbf2u: goto L_BBF2;
    case 0x0000bbf6u: goto L_BBF6;
    case 0x0000bbfau: goto L_BBFA;
    case 0x0000bbfeu: goto L_BBFE;
    case 0x0000bc00u: goto L_BC00;
    case 0x0000bc04u: goto L_BC04;
    case 0x0000bc08u: goto L_BC08;
    case 0x0000bc0au: goto L_BC0A;
    case 0x0000bc0cu: goto L_BC0C;
    case 0x0000bc10u: goto L_BC10;
    case 0x0000bc14u: goto L_BC14;
    case 0x0000bc18u: goto L_BC18;
    case 0x0000bc1cu: goto L_BC1C;
    case 0x0000bc1eu: goto L_BC1E;
    case 0x0000bc22u: goto L_BC22;
    case 0x0000bc24u: goto L_BC24;
    case 0x0000bc28u: goto L_BC28;
    case 0x0000bc2cu: goto L_BC2C;
    case 0x0000bc30u: goto L_BC30;
    case 0x0000bc32u: goto L_BC32;
    case 0x0000bc36u: goto L_BC36;
    case 0x0000bc3au: goto L_BC3A;
    case 0x0000bc3cu: goto L_BC3C;
    case 0x0000bc40u: goto L_BC40;
    case 0x0000bc44u: goto L_BC44;
    case 0x0000bc46u: goto L_BC46;
    case 0x0000bc4au: goto L_BC4A;
    case 0x0000bc4eu: goto L_BC4E;
    case 0x0000bc52u: goto L_BC52;
    case 0x0000bc54u: goto L_BC54;
    case 0x0000bc58u: goto L_BC58;
    case 0x0000bc5cu: goto L_BC5C;
    case 0x0000bc60u: goto L_BC60;
    case 0x0000bc64u: goto L_BC64;
    case 0x0000bc66u: goto L_BC66;
    case 0x0000bc6au: goto L_BC6A;
    case 0x0000bc6eu: goto L_BC6E;
    case 0x0000bc70u: goto L_BC70;
    case 0x0000bc72u: goto L_BC72;
    case 0x0000bc76u: goto L_BC76;
    case 0x0000bc7au: goto L_BC7A;
    case 0x0000bc7eu: goto L_BC7E;
    case 0x0000bc82u: goto L_BC82;
    case 0x0000bc86u: goto L_BC86;
    case 0x0000bc88u: goto L_BC88;
    case 0x0000bc8cu: goto L_BC8C;
    case 0x0000bc8eu: goto L_BC8E;
    case 0x0000bc92u: goto L_BC92;
    case 0x0000bc96u: goto L_BC96;
    case 0x0000bc9au: goto L_BC9A;
    case 0x0000bca2u: goto L_BCA2;
    case 0x0000bca6u: goto L_BCA6;
    case 0x0000bcaau: goto L_BCAA;
    case 0x0000bcb2u: goto L_BCB2;
    case 0x0000bcb6u: goto L_BCB6;
    case 0x0000bcbau: goto L_BCBA;
    case 0x0000bcbeu: goto L_BCBE;
    case 0x0000bcc2u: goto L_BCC2;
    case 0x0000bcc6u: goto L_BCC6;
    case 0x0000bcc8u: goto L_BCC8;
    case 0x0000bcccu: goto L_BCCC;
    case 0x0000bcd0u: goto L_BCD0;
    case 0x0000bcd2u: goto L_BCD2;
    case 0x0000bcd6u: goto L_BCD6;
    case 0x0000bcdau: goto L_BCDA;
    case 0x0000bcdcu: goto L_BCDC;
    case 0x0000bce0u: goto L_BCE0;
    case 0x0000bce4u: goto L_BCE4;
    case 0x0000bce8u: goto L_BCE8;
    case 0x0000bceau: goto L_BCEA;
    case 0x0000bcecu: goto L_BCEC;
    case 0x0000bcf0u: goto L_BCF0;
    case 0x0000bcf4u: goto L_BCF4;
    case 0x0000bcf8u: goto L_BCF8;
    case 0x0000bcfcu: goto L_BCFC;
    case 0x0000bd00u: goto L_BD00;
    case 0x0000bd04u: goto L_BD04;
    case 0x0000bd06u: goto L_BD06;
    case 0x0000bd0au: goto L_BD0A;
    case 0x0000bd10u: goto L_BD10;
    case 0x0000bd14u: goto L_BD14;
    case 0x0000bd16u: goto L_BD16;
    case 0x0000bd1au: goto L_BD1A;
    case 0x0000bd20u: goto L_BD20;
    case 0x0000bd24u: goto L_BD24;
    case 0x0000bd26u: goto L_BD26;
    case 0x0000bd2au: goto L_BD2A;
    case 0x0000bd30u: goto L_BD30;
    case 0x0000bd34u: goto L_BD34;
    case 0x0000bd36u: goto L_BD36;
    case 0x0000bd3au: goto L_BD3A;
    case 0x0000bd42u: goto L_BD42;
    case 0x0000bd44u: goto L_BD44;
    case 0x0000bd46u: goto L_BD46;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_BADE:
    /* 0000bade   4  link.w A5,#fffffff4 */
    c->pc = 0x0000badeu;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xcu;

L_BAE2:
    /* 0000bae2   4  clr.l (fffffff8,A5) */
    c->pc = 0x0000bae2u;
    rc_wr32(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_BAE6:
    /* 0000bae6   4  move.l (fffffff8,A5),D0 */
    c->pc = 0x0000bae6u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_BAEA:
    /* 0000baea   2  asl.l #1,D0 */
    c->pc = 0x0000baeau;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_BAEC:
    /* 0000baec   4  lea (92,A4),A0 */
    c->pc = 0x0000baecu;
    c->a[0] = (c->a[4] + 0x92u);

L_BAF0:
    /* 0000baf0   4  tst.w (0,A0,D0.w) */
    c->pc = 0x0000baf0u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_BAF4:
    /* 0000baf4   4  beq 0000bca6 */
    c->pc = 0x0000baf4u;
    if (rc_cond(c, 7)) goto L_BCA6;

L_BAF8:
    /* 0000baf8   4  move.w (fffffffa,A5),-(A7) */
    c->pc = 0x0000baf8u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_BAFC:
    /* 0000bafc   4  move.l (84,A4),-(A7) */
    c->pc = 0x0000bafcu;
    t0 = rc_rd32(c, m, (c->a[4] + 0x84u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_BB00:
    /* 0000bb00   4  movea.l (fffffebe,A4),A0 */
    c->pc = 0x0000bb00u;
    t0 = rc_rd32(c, m, (c->a[4] - 0x142u));
    c->a[0] = t0;

L_BB04:
    /* 0000bb04   4  move.l (2c,A0),-(A7) */
    c->pc = 0x0000bb04u;
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_BB08:
    /* 0000bb08   4  jsr (ffff822a,A4) */
    c->pc = 0x0000bb08u;
    /* vector 92 */
    rc_push32(c, m, 0x0000bb0cu);
    rc_depth++;
    c->pc = 0x0001dd6eu;
    return;

L_BB0C:
    /* 0000bb0c   4  lea (a,A7),A7 */
    c->pc = 0x0000bb0cu;
    c->a[7] = (c->a[7] + 0xau);

L_BB10:
    /* 0000bb10   4  move.l D0,(fffffff4,A5) */
    c->pc = 0x0000bb10u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_BB14:
    /* 0000bb14   4  movea.l (fffffff4,A5),A0 */
    c->pc = 0x0000bb14u;
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_BB18:
    /* 0000bb18   4  movea.l (84,A4),A1 */
    c->pc = 0x0000bb18u;
    t0 = rc_rd32(c, m, (c->a[4] + 0x84u));
    c->a[1] = t0;

L_BB1C:
    /* 0000bb1c   4  move.w (c,A1),D0 */
    c->pc = 0x0000bb1cu;
    t0 = rc_rd16(c, m, (c->a[1] + 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_BB20:
    /* 0000bb20   2  subq.w #1,D0 */
    c->pc = 0x0000bb20u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_BB22:
    /* 0000bb22   4  move.w (2a,A0),D1 */
    c->pc = 0x0000bb22u;
    t0 = rc_rd16(c, m, (c->a[0] + 0x2au));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_BB26:
    /* 0000bb26   2  cmp.w D0,D1 */
    c->pc = 0x0000bb26u;
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_BB28:
    /* 0000bb28   4  blt 0000bca6 */
    c->pc = 0x0000bb28u;
    if (rc_cond(c, 13)) goto L_BCA6;

L_BB2C:
    /* 0000bb2c   4  move.w (fffffffa,A5),-(A7) */
    c->pc = 0x0000bb2cu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_BB30:
    /* 0000bb30   4  move.l (84,A4),-(A7) */
    c->pc = 0x0000bb30u;
    t0 = rc_rd32(c, m, (c->a[4] + 0x84u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_BB34:
    /* 0000bb34   4  move.w #2,-(A7) */
    c->pc = 0x0000bb34u;
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_BB38:
    /* 0000bb38   4  jsr (ffff8266,A4) */
    c->pc = 0x0000bb38u;
    /* vector 102 */
    rc_push32(c, m, 0x0000bb3cu);
    rc_depth++;
    c->pc = 0x0001f2aeu;
    return;

L_BB3C:
    /* 0000bb3c   2  addq.w #8,A7 */
    c->pc = 0x0000bb3cu;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_BB3E:
    /* 0000bb3e   4  move.l (fffffff8,A5),D0 */
    c->pc = 0x0000bb3eu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_BB42:
    /* 0000bb42   2  asl.l #1,D0 */
    c->pc = 0x0000bb42u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_BB44:
    /* 0000bb44   4  lea (92,A4),A0 */
    c->pc = 0x0000bb44u;
    c->a[0] = (c->a[4] + 0x92u);

L_BB48:
    /* 0000bb48   4  clr.w (0,A0,D0.w) */
    c->pc = 0x0000bb48u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_BB4C:
    /* 0000bb4c   4  clr.l (fffffffc,A5) */
    c->pc = 0x0000bb4cu;
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_BB50:
    /* 0000bb50   4  move.l (fffffff8,A5),D0 */
    c->pc = 0x0000bb50u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_BB54:
    /* 0000bb54   2  asl.l #1,D0 */
    c->pc = 0x0000bb54u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_BB56:
    /* 0000bb56   4  lea (9c,A4),A0 */
    c->pc = 0x0000bb56u;
    c->a[0] = (c->a[4] + 0x9cu);

L_BB5A:
    /* 0000bb5a   4  move.l (fffffffc,A5),D1 */
    c->pc = 0x0000bb5au;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_BB5E:
    /* 0000bb5e   2  asl.l #1,D1 */
    c->pc = 0x0000bb5eu;
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_BB60:
    /* 0000bb60   4  lea (ffff96bc,A4),A1 */
    c->pc = 0x0000bb60u;
    c->a[1] = (c->a[4] - 0x6944u);

L_BB64:
    /* 0000bb64   4  move.w (0,A1,D1.w),D2 */
    c->pc = 0x0000bb64u;
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_BB68:
    /* 0000bb68   2  subq.w #8,D2 */
    c->pc = 0x0000bb68u;
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - 0x00000008u;
    rc_flags_sub(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_BB6A:
    /* 0000bb6a   4  move.w (0,A0,D0.w),D1 */
    c->pc = 0x0000bb6au;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_BB6E:
    /* 0000bb6e   2  cmp.w D2,D1 */
    c->pc = 0x0000bb6eu;
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_BB70:
    /* 0000bb70   4  ble 0000bc96 */
    c->pc = 0x0000bb70u;
    if (rc_cond(c, 15)) goto L_BC96;

L_BB74:
    /* 0000bb74   4  move.l (fffffff8,A5),D0 */
    c->pc = 0x0000bb74u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_BB78:
    /* 0000bb78   2  asl.l #1,D0 */
    c->pc = 0x0000bb78u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_BB7A:
    /* 0000bb7a   4  lea (9c,A4),A0 */
    c->pc = 0x0000bb7au;
    c->a[0] = (c->a[4] + 0x9cu);

L_BB7E:
    /* 0000bb7e   4  move.l (fffffffc,A5),D1 */
    c->pc = 0x0000bb7eu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_BB82:
    /* 0000bb82   2  asl.l #1,D1 */
    c->pc = 0x0000bb82u;
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_BB84:
    /* 0000bb84   4  lea (ffff96bc,A4),A1 */
    c->pc = 0x0000bb84u;
    c->a[1] = (c->a[4] - 0x6944u);

L_BB88:
    /* 0000bb88   4  move.w (0,A1,D1.w),D2 */
    c->pc = 0x0000bb88u;
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_BB8C:
    /* 0000bb8c   2  addq.w #8,D2 */
    c->pc = 0x0000bb8cu;
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 + 0x00000008u;
    rc_flags_add(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_BB8E:
    /* 0000bb8e   4  move.w (0,A0,D0.w),D1 */
    c->pc = 0x0000bb8eu;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_BB92:
    /* 0000bb92   2  cmp.w D2,D1 */
    c->pc = 0x0000bb92u;
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_BB94:
    /* 0000bb94   4  bge 0000bc96 */
    c->pc = 0x0000bb94u;
    if (rc_cond(c, 12)) goto L_BC96;

L_BB98:
    /* 0000bb98   4  move.l (fffffff8,A5),D0 */
    c->pc = 0x0000bb98u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_BB9C:
    /* 0000bb9c   2  asl.l #1,D0 */
    c->pc = 0x0000bb9cu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_BB9E:
    /* 0000bb9e   4  lea (a6,A4),A0 */
    c->pc = 0x0000bb9eu;
    c->a[0] = (c->a[4] + 0xa6u);

L_BBA2:
    /* 0000bba2   4  move.l (fffffffc,A5),D1 */
    c->pc = 0x0000bba2u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_BBA6:
    /* 0000bba6   2  asl.l #1,D1 */
    c->pc = 0x0000bba6u;
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_BBA8:
    /* 0000bba8   4  lea (ffff96cc,A4),A1 */
    c->pc = 0x0000bba8u;
    c->a[1] = (c->a[4] - 0x6934u);

L_BBAC:
    /* 0000bbac   4  move.w (0,A1,D1.w),D2 */
    c->pc = 0x0000bbacu;
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_BBB0:
    /* 0000bbb0   4  add.w #38,D2 */
    c->pc = 0x0000bbb0u;
    t0 = 0x00000038u;
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_BBB4:
    /* 0000bbb4   4  move.w (0,A0,D0.w),D1 */
    c->pc = 0x0000bbb4u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_BBB8:
    /* 0000bbb8   2  cmp.w D2,D1 */
    c->pc = 0x0000bbb8u;
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_BBBA:
    /* 0000bbba   4  ble 0000bc96 */
    c->pc = 0x0000bbbau;
    if (rc_cond(c, 15)) goto L_BC96;

L_BBBE:
    /* 0000bbbe   4  move.l (fffffff8,A5),D0 */
    c->pc = 0x0000bbbeu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_BBC2:
    /* 0000bbc2   2  asl.l #1,D0 */
    c->pc = 0x0000bbc2u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_BBC4:
    /* 0000bbc4   4  lea (a6,A4),A0 */
    c->pc = 0x0000bbc4u;
    c->a[0] = (c->a[4] + 0xa6u);

L_BBC8:
    /* 0000bbc8   4  move.l (fffffffc,A5),D1 */
    c->pc = 0x0000bbc8u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_BBCC:
    /* 0000bbcc   2  asl.l #1,D1 */
    c->pc = 0x0000bbccu;
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_BBCE:
    /* 0000bbce   4  lea (ffff96cc,A4),A1 */
    c->pc = 0x0000bbceu;
    c->a[1] = (c->a[4] - 0x6934u);

L_BBD2:
    /* 0000bbd2   4  move.w (0,A1,D1.w),D2 */
    c->pc = 0x0000bbd2u;
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_BBD6:
    /* 0000bbd6   4  add.w #48,D2 */
    c->pc = 0x0000bbd6u;
    t0 = 0x00000048u;
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_BBDA:
    /* 0000bbda   4  move.w (0,A0,D0.w),D1 */
    c->pc = 0x0000bbdau;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_BBDE:
    /* 0000bbde   2  cmp.w D2,D1 */
    c->pc = 0x0000bbdeu;
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_BBE0:
    /* 0000bbe0   4  bge 0000bc96 */
    c->pc = 0x0000bbe0u;
    if (rc_cond(c, 12)) goto L_BC96;

L_BBE4:
    /* 0000bbe4   4  move.l (fffffffc,A5),D0 */
    c->pc = 0x0000bbe4u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_BBE8:
    /* 0000bbe8   2  asl.l #1,D0 */
    c->pc = 0x0000bbe8u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_BBEA:
    /* 0000bbea   4  lea (432,A4),A0 */
    c->pc = 0x0000bbeau;
    c->a[0] = (c->a[4] + 0x432u);

L_BBEE:
    /* 0000bbee   4  tst.w (0,A0,D0.w) */
    c->pc = 0x0000bbeeu;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_BBF2:
    /* 0000bbf2   4  beq 0000bc96 */
    c->pc = 0x0000bbf2u;
    if (rc_cond(c, 7)) goto L_BC96;

L_BBF6:
    /* 0000bbf6   4  move.w (fffffffe,A5),-(A7) */
    c->pc = 0x0000bbf6u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_BBFA:
    /* 0000bbfa   4  move.l (fffffffc,A5),D0 */
    c->pc = 0x0000bbfau;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_BBFE:
    /* 0000bbfe   2  asl.l #1,D0 */
    c->pc = 0x0000bbfeu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_BC00:
    /* 0000bc00   4  lea (442,A4),A0 */
    c->pc = 0x0000bc00u;
    c->a[0] = (c->a[4] + 0x442u);

L_BC04:
    /* 0000bc04   4  move.w (0,A0,D0.w),D1 */
    c->pc = 0x0000bc04u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_BC08:
    /* 0000bc08   2  ext.l D1 */
    c->pc = 0x0000bc08u;
    rc_ext_l(c, 1);

L_BC0A:
    /* 0000bc0a   2  asl.l #2,D1 */
    c->pc = 0x0000bc0au;
    c->d[1] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L);

L_BC0C:
    /* 0000bc0c   4  lea (418,A4),A0 */
    c->pc = 0x0000bc0cu;
    c->a[0] = (c->a[4] + 0x418u);

L_BC10:
    /* 0000bc10   4  move.l (0,A0,D1.w),-(A7) */
    c->pc = 0x0000bc10u;
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_BC14:
    /* 0000bc14   4  move.w #2,-(A7) */
    c->pc = 0x0000bc14u;
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_BC18:
    /* 0000bc18   4  jsr (ffff8266,A4) */
    c->pc = 0x0000bc18u;
    /* vector 102 */
    rc_push32(c, m, 0x0000bc1cu);
    rc_depth++;
    c->pc = 0x0001f2aeu;
    return;

L_BC1C:
    /* 0000bc1c   2  addq.w #8,A7 */
    c->pc = 0x0000bc1cu;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_BC1E:
    /* 0000bc1e   4  move.l (fffffffc,A5),D0 */
    c->pc = 0x0000bc1eu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_BC22:
    /* 0000bc22   2  asl.l #1,D0 */
    c->pc = 0x0000bc22u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_BC24:
    /* 0000bc24   4  lea (442,A4),A0 */
    c->pc = 0x0000bc24u;
    c->a[0] = (c->a[4] + 0x442u);

L_BC28:
    /* 0000bc28   4  subq.w #1,(0,A0,D0.w) */
    c->pc = 0x0000bc28u;
    t4 = c->d[0];
    t3 = (c->a[0] + 0x0u + t4);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_BC2C:
    /* 0000bc2c   4  move.l (fffffffc,A5),D0 */
    c->pc = 0x0000bc2cu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_BC30:
    /* 0000bc30   2  asl.l #1,D0 */
    c->pc = 0x0000bc30u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_BC32:
    /* 0000bc32   4  lea (442,A4),A0 */
    c->pc = 0x0000bc32u;
    c->a[0] = (c->a[4] + 0x442u);

L_BC36:
    /* 0000bc36   4  tst.w (0,A0,D0.w) */
    c->pc = 0x0000bc36u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_BC3A:
    /* 0000bc3a   2  beq 0000bc88 */
    c->pc = 0x0000bc3au;
    if (rc_cond(c, 7)) goto L_BC88;

L_BC3C:
    /* 0000bc3c   4  move.w #a,-(A7) */
    c->pc = 0x0000bc3cu;
    t0 = 0x0000000au;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_BC40:
    /* 0000bc40   4  move.l (fffffffc,A5),D0 */
    c->pc = 0x0000bc40u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_BC44:
    /* 0000bc44   2  asl.l #1,D0 */
    c->pc = 0x0000bc44u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_BC46:
    /* 0000bc46   4  lea (ffff96cc,A4),A0 */
    c->pc = 0x0000bc46u;
    c->a[0] = (c->a[4] - 0x6934u);

L_BC4A:
    /* 0000bc4a   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = 0x0000bc4au;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_BC4E:
    /* 0000bc4e   4  move.l (fffffffc,A5),D0 */
    c->pc = 0x0000bc4eu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_BC52:
    /* 0000bc52   2  asl.l #1,D0 */
    c->pc = 0x0000bc52u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_BC54:
    /* 0000bc54   4  lea (ffff96bc,A4),A0 */
    c->pc = 0x0000bc54u;
    c->a[0] = (c->a[4] - 0x6944u);

L_BC58:
    /* 0000bc58   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = 0x0000bc58u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_BC5C:
    /* 0000bc5c   4  move.w (fffffffe,A5),-(A7) */
    c->pc = 0x0000bc5cu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_BC60:
    /* 0000bc60   4  move.l (fffffffc,A5),D0 */
    c->pc = 0x0000bc60u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_BC64:
    /* 0000bc64   2  asl.l #1,D0 */
    c->pc = 0x0000bc64u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_BC66:
    /* 0000bc66   4  lea (442,A4),A0 */
    c->pc = 0x0000bc66u;
    c->a[0] = (c->a[4] + 0x442u);

L_BC6A:
    /* 0000bc6a   4  move.w (0,A0,D0.w),D1 */
    c->pc = 0x0000bc6au;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_BC6E:
    /* 0000bc6e   2  ext.l D1 */
    c->pc = 0x0000bc6eu;
    rc_ext_l(c, 1);

L_BC70:
    /* 0000bc70   2  asl.l #2,D1 */
    c->pc = 0x0000bc70u;
    c->d[1] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L);

L_BC72:
    /* 0000bc72   4  lea (418,A4),A0 */
    c->pc = 0x0000bc72u;
    c->a[0] = (c->a[4] + 0x418u);

L_BC76:
    /* 0000bc76   4  move.l (0,A0,D1.w),-(A7) */
    c->pc = 0x0000bc76u;
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_BC7A:
    /* 0000bc7a   4  move.w #1,-(A7) */
    c->pc = 0x0000bc7au;
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_BC7E:
    /* 0000bc7e   4  jsr (ffff8272,A4) */
    c->pc = 0x0000bc7eu;
    /* vector 104 */
    rc_push32(c, m, 0x0000bc82u);
    rc_depth++;
    c->pc = 0x0001f914u;
    return;

L_BC82:
    /* 0000bc82   4  lea (e,A7),A7 */
    c->pc = 0x0000bc82u;
    c->a[7] = (c->a[7] + 0xeu);

L_BC86:
    /* 0000bc86   2  bra 0000bc96 */
    c->pc = 0x0000bc86u;
    goto L_BC96;

L_BC88:
    /* 0000bc88   4  move.l (fffffffc,A5),D0 */
    c->pc = 0x0000bc88u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_BC8C:
    /* 0000bc8c   2  asl.l #1,D0 */
    c->pc = 0x0000bc8cu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_BC8E:
    /* 0000bc8e   4  lea (432,A4),A0 */
    c->pc = 0x0000bc8eu;
    c->a[0] = (c->a[4] + 0x432u);

L_BC92:
    /* 0000bc92   4  clr.w (0,A0,D0.w) */
    c->pc = 0x0000bc92u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_BC96:
    /* 0000bc96   4  addq.l #1,(fffffffc,A5) */
    c->pc = 0x0000bc96u;
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_BC9A:
    /* 0000bc9a   8  cmpi.l #8,(fffffffc,A5) */
    c->pc = 0x0000bc9au;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x00000008u);

L_BCA2:
    /* 0000bca2   4  blt 0000bb50 */
    c->pc = 0x0000bca2u;
    if (rc_cond(c, 13)) { rc_tick(); goto L_BB50; }

L_BCA6:
    /* 0000bca6   4  addq.l #1,(fffffff8,A5) */
    c->pc = 0x0000bca6u;
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_BCAA:
    /* 0000bcaa   8  cmpi.l #5,(fffffff8,A5) */
    c->pc = 0x0000bcaau;
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_cmp(c, RC_L, t0, 0x00000005u);

L_BCB2:
    /* 0000bcb2   4  blt 0000bae6 */
    c->pc = 0x0000bcb2u;
    if (rc_cond(c, 13)) { rc_tick(); goto L_BAE6; }

L_BCB6:
    /* 0000bcb6   4  tst.w (ffffb02e,A4) */
    c->pc = 0x0000bcb6u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd2u));
    rc_set_nzvc(c, t0, RC_W);

L_BCBA:
    /* 0000bcba   4  beq 0000bd44 */
    c->pc = 0x0000bcbau;
    if (rc_cond(c, 7)) goto L_BD44;

L_BCBE:
    /* 0000bcbe   4  move.w #1,-(A7) */
    c->pc = 0x0000bcbeu;
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_BCC2:
    /* 0000bcc2   4  jsr (ffff8248,A4) */
    c->pc = 0x0000bcc2u;
    /* vector 97 */
    rc_push32(c, m, 0x0000bcc6u);
    rc_depth++;
    c->pc = 0x0001ec06u;
    return;

L_BCC6:
    /* 0000bcc6   2  addq.w #2,A7 */
    c->pc = 0x0000bcc6u;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_BCC8:
    /* 0000bcc8   4  clr.l (fffffff8,A5) */
    c->pc = 0x0000bcc8u;
    rc_wr32(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_BCCC:
    /* 0000bccc   4  move.l (fffffff8,A5),D0 */
    c->pc = 0x0000bcccu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_BCD0:
    /* 0000bcd0   2  asl.l #1,D0 */
    c->pc = 0x0000bcd0u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_BCD2:
    /* 0000bcd2   4  lea (92,A4),A0 */
    c->pc = 0x0000bcd2u;
    c->a[0] = (c->a[4] + 0x92u);

L_BCD6:
    /* 0000bcd6   4  tst.w (0,A0,D0.w) */
    c->pc = 0x0000bcd6u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_BCDA:
    /* 0000bcda   2  bne 0000bd36 */
    c->pc = 0x0000bcdau;
    if (rc_cond(c, 6)) goto L_BD36;

L_BCDC:
    /* 0000bcdc   4  move.w #14,-(A7) */
    c->pc = 0x0000bcdcu;
    t0 = 0x00000014u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_BCE0:
    /* 0000bce0   4  move.w (8c,A4),-(A7) */
    c->pc = 0x0000bce0u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x8cu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_BCE4:
    /* 0000bce4   4  move.w (8a,A4),D0 */
    c->pc = 0x0000bce4u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x8au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_BCE8:
    /* 0000bce8   2  subq.w #1,D0 */
    c->pc = 0x0000bce8u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_BCEA:
    /* 0000bcea   2  move.w D0,-(A7) */
    c->pc = 0x0000bceau;
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_BCEC:
    /* 0000bcec   4  move.w (fffffffa,A5),-(A7) */
    c->pc = 0x0000bcecu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_BCF0:
    /* 0000bcf0   4  move.l (84,A4),-(A7) */
    c->pc = 0x0000bcf0u;
    t0 = rc_rd32(c, m, (c->a[4] + 0x84u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_BCF4:
    /* 0000bcf4   4  move.w #1,-(A7) */
    c->pc = 0x0000bcf4u;
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_BCF8:
    /* 0000bcf8   4  jsr (ffff8272,A4) */
    c->pc = 0x0000bcf8u;
    /* vector 104 */
    rc_push32(c, m, 0x0000bcfcu);
    rc_depth++;
    c->pc = 0x0001f914u;
    return;

L_BCFC:
    /* 0000bcfc   4  lea (e,A7),A7 */
    c->pc = 0x0000bcfcu;
    c->a[7] = (c->a[7] + 0xeu);

L_BD00:
    /* 0000bd00   4  move.l (fffffff8,A5),D0 */
    c->pc = 0x0000bd00u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_BD04:
    /* 0000bd04   2  asl.l #1,D0 */
    c->pc = 0x0000bd04u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_BD06:
    /* 0000bd06   4  lea (9c,A4),A0 */
    c->pc = 0x0000bd06u;
    c->a[0] = (c->a[4] + 0x9cu);

L_BD0A:
    /* 0000bd0a   6  move.w (8a,A4),(0,A0,D0.w) */
    c->pc = 0x0000bd0au;
    t0 = rc_rd16(c, m, (c->a[4] + 0x8au));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_BD10:
    /* 0000bd10   4  move.l (fffffff8,A5),D0 */
    c->pc = 0x0000bd10u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_BD14:
    /* 0000bd14   2  asl.l #1,D0 */
    c->pc = 0x0000bd14u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_BD16:
    /* 0000bd16   4  lea (a6,A4),A0 */
    c->pc = 0x0000bd16u;
    c->a[0] = (c->a[4] + 0xa6u);

L_BD1A:
    /* 0000bd1a   6  move.w (8c,A4),(0,A0,D0.w) */
    c->pc = 0x0000bd1au;
    t0 = rc_rd16(c, m, (c->a[4] + 0x8cu));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_BD20:
    /* 0000bd20   4  move.l (fffffff8,A5),D0 */
    c->pc = 0x0000bd20u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_BD24:
    /* 0000bd24   2  asl.l #1,D0 */
    c->pc = 0x0000bd24u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_BD26:
    /* 0000bd26   4  lea (92,A4),A0 */
    c->pc = 0x0000bd26u;
    c->a[0] = (c->a[4] + 0x92u);

L_BD2A:
    /* 0000bd2a   6  move.w #1,(0,A0,D0.w) */
    c->pc = 0x0000bd2au;
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_BD30:
    /* 0000bd30   4  addq.w #1,(268,A4) */
    c->pc = 0x0000bd30u;
    t3 = (c->a[4] + 0x268u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_BD34:
    /* 0000bd34   2  bra 0000bd44 */
    c->pc = 0x0000bd34u;
    goto L_BD44;

L_BD36:
    /* 0000bd36   4  addq.l #1,(fffffff8,A5) */
    c->pc = 0x0000bd36u;
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_BD3A:
    /* 0000bd3a   8  cmpi.l #5,(fffffff8,A5) */
    c->pc = 0x0000bd3au;
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_cmp(c, RC_L, t0, 0x00000005u);

L_BD42:
    /* 0000bd42   2  blt 0000bccc */
    c->pc = 0x0000bd42u;
    if (rc_cond(c, 13)) { rc_tick(); goto L_BCCC; }

L_BD44:
    /* 0000bd44   2  unlk A5 */
    c->pc = 0x0000bd44u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_BD46:
    /* 0000bd46   2  rts */
    c->pc = 0x0000bd46u;
    rc_ret(c, m);
    return;

}
