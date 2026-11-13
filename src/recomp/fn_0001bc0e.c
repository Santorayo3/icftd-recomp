/* fn_0001bc0e - 422 byte(s), 119 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001bc0e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001bc0eu): goto L_1BC0E;
    case RC_ADDR(0x0001bc12u): goto L_1BC12;
    case RC_ADDR(0x0001bc16u): goto L_1BC16;
    case RC_ADDR(0x0001bc1au): goto L_1BC1A;
    case RC_ADDR(0x0001bc1cu): goto L_1BC1C;
    case RC_ADDR(0x0001bc20u): goto L_1BC20;
    case RC_ADDR(0x0001bc24u): goto L_1BC24;
    case RC_ADDR(0x0001bc28u): goto L_1BC28;
    case RC_ADDR(0x0001bc2cu): goto L_1BC2C;
    case RC_ADDR(0x0001bc2eu): goto L_1BC2E;
    case RC_ADDR(0x0001bc32u): goto L_1BC32;
    case RC_ADDR(0x0001bc34u): goto L_1BC34;
    case RC_ADDR(0x0001bc36u): goto L_1BC36;
    case RC_ADDR(0x0001bc38u): goto L_1BC38;
    case RC_ADDR(0x0001bc3au): goto L_1BC3A;
    case RC_ADDR(0x0001bc3eu): goto L_1BC3E;
    case RC_ADDR(0x0001bc42u): goto L_1BC42;
    case RC_ADDR(0x0001bc46u): goto L_1BC46;
    case RC_ADDR(0x0001bc4au): goto L_1BC4A;
    case RC_ADDR(0x0001bc4eu): goto L_1BC4E;
    case RC_ADDR(0x0001bc50u): goto L_1BC50;
    case RC_ADDR(0x0001bc54u): goto L_1BC54;
    case RC_ADDR(0x0001bc56u): goto L_1BC56;
    case RC_ADDR(0x0001bc5au): goto L_1BC5A;
    case RC_ADDR(0x0001bc5eu): goto L_1BC5E;
    case RC_ADDR(0x0001bc62u): goto L_1BC62;
    case RC_ADDR(0x0001bc66u): goto L_1BC66;
    case RC_ADDR(0x0001bc68u): goto L_1BC68;
    case RC_ADDR(0x0001bc6au): goto L_1BC6A;
    case RC_ADDR(0x0001bc6cu): goto L_1BC6C;
    case RC_ADDR(0x0001bc6eu): goto L_1BC6E;
    case RC_ADDR(0x0001bc72u): goto L_1BC72;
    case RC_ADDR(0x0001bc74u): goto L_1BC74;
    case RC_ADDR(0x0001bc78u): goto L_1BC78;
    case RC_ADDR(0x0001bc7cu): goto L_1BC7C;
    case RC_ADDR(0x0001bc7eu): goto L_1BC7E;
    case RC_ADDR(0x0001bc82u): goto L_1BC82;
    case RC_ADDR(0x0001bc84u): goto L_1BC84;
    case RC_ADDR(0x0001bc86u): goto L_1BC86;
    case RC_ADDR(0x0001bc8au): goto L_1BC8A;
    case RC_ADDR(0x0001bc8cu): goto L_1BC8C;
    case RC_ADDR(0x0001bc8eu): goto L_1BC8E;
    case RC_ADDR(0x0001bc92u): goto L_1BC92;
    case RC_ADDR(0x0001bc96u): goto L_1BC96;
    case RC_ADDR(0x0001bc98u): goto L_1BC98;
    case RC_ADDR(0x0001bc9cu): goto L_1BC9C;
    case RC_ADDR(0x0001bc9eu): goto L_1BC9E;
    case RC_ADDR(0x0001bca0u): goto L_1BCA0;
    case RC_ADDR(0x0001bca4u): goto L_1BCA4;
    case RC_ADDR(0x0001bca6u): goto L_1BCA6;
    case RC_ADDR(0x0001bca8u): goto L_1BCA8;
    case RC_ADDR(0x0001bcacu): goto L_1BCAC;
    case RC_ADDR(0x0001bcaeu): goto L_1BCAE;
    case RC_ADDR(0x0001bcb0u): goto L_1BCB0;
    case RC_ADDR(0x0001bcb4u): goto L_1BCB4;
    case RC_ADDR(0x0001bcb8u): goto L_1BCB8;
    case RC_ADDR(0x0001bcbau): goto L_1BCBA;
    case RC_ADDR(0x0001bcbcu): goto L_1BCBC;
    case RC_ADDR(0x0001bcc0u): goto L_1BCC0;
    case RC_ADDR(0x0001bcc4u): goto L_1BCC4;
    case RC_ADDR(0x0001bcc8u): goto L_1BCC8;
    case RC_ADDR(0x0001bcceu): goto L_1BCCE;
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
    case RC_ADDR(0x0001bcf4u): goto L_1BCF4;
    case RC_ADDR(0x0001bcf8u): goto L_1BCF8;
    case RC_ADDR(0x0001bcfcu): goto L_1BCFC;
    case RC_ADDR(0x0001bd00u): goto L_1BD00;
    case RC_ADDR(0x0001bd06u): goto L_1BD06;
    case RC_ADDR(0x0001bd08u): goto L_1BD08;
    case RC_ADDR(0x0001bd0eu): goto L_1BD0E;
    case RC_ADDR(0x0001bd12u): goto L_1BD12;
    case RC_ADDR(0x0001bd16u): goto L_1BD16;
    case RC_ADDR(0x0001bd1au): goto L_1BD1A;
    case RC_ADDR(0x0001bd20u): goto L_1BD20;
    case RC_ADDR(0x0001bd24u): goto L_1BD24;
    case RC_ADDR(0x0001bd28u): goto L_1BD28;
    case RC_ADDR(0x0001bd2cu): goto L_1BD2C;
    case RC_ADDR(0x0001bd30u): goto L_1BD30;
    case RC_ADDR(0x0001bd32u): goto L_1BD32;
    case RC_ADDR(0x0001bd36u): goto L_1BD36;
    case RC_ADDR(0x0001bd3cu): goto L_1BD3C;
    case RC_ADDR(0x0001bd42u): goto L_1BD42;
    case RC_ADDR(0x0001bd46u): goto L_1BD46;
    case RC_ADDR(0x0001bd4au): goto L_1BD4A;
    case RC_ADDR(0x0001bd50u): goto L_1BD50;
    case RC_ADDR(0x0001bd52u): goto L_1BD52;
    case RC_ADDR(0x0001bd56u): goto L_1BD56;
    case RC_ADDR(0x0001bd5au): goto L_1BD5A;
    case RC_ADDR(0x0001bd5eu): goto L_1BD5E;
    case RC_ADDR(0x0001bd64u): goto L_1BD64;
    case RC_ADDR(0x0001bd68u): goto L_1BD68;
    case RC_ADDR(0x0001bd6cu): goto L_1BD6C;
    case RC_ADDR(0x0001bd6eu): goto L_1BD6E;
    case RC_ADDR(0x0001bd70u): goto L_1BD70;
    case RC_ADDR(0x0001bd76u): goto L_1BD76;
    case RC_ADDR(0x0001bd7au): goto L_1BD7A;
    case RC_ADDR(0x0001bd7eu): goto L_1BD7E;
    case RC_ADDR(0x0001bd82u): goto L_1BD82;
    case RC_ADDR(0x0001bd88u): goto L_1BD88;
    case RC_ADDR(0x0001bd8cu): goto L_1BD8C;
    case RC_ADDR(0x0001bd90u): goto L_1BD90;
    case RC_ADDR(0x0001bd94u): goto L_1BD94;
    case RC_ADDR(0x0001bd98u): goto L_1BD98;
    case RC_ADDR(0x0001bd9au): goto L_1BD9A;
    case RC_ADDR(0x0001bd9cu): goto L_1BD9C;
    case RC_ADDR(0x0001bda0u): goto L_1BDA0;
    case RC_ADDR(0x0001bda6u): goto L_1BDA6;
    case RC_ADDR(0x0001bdaau): goto L_1BDAA;
    case RC_ADDR(0x0001bdaeu): goto L_1BDAE;
    case RC_ADDR(0x0001bdb2u): goto L_1BDB2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1BC0E:
    /* 0001bc0e   4  tst.w (fffff28a,A4) */
    c->pc = RC_ADDR(0x0001bc0eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd76u));
    rc_set_nzvc(c, t0, RC_W);

L_1BC12:
    /* 0001bc12   4  beq 0001bdb2 */
    c->pc = RC_ADDR(0x0001bc12u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1BDB2;

L_1BC16:
    /* 0001bc16   4  tst.w (2274,A4) */
    c->pc = RC_ADDR(0x0001bc16u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2274u));
    rc_set_nzvc(c, t0, RC_W);

L_1BC1A:
    /* 0001bc1a   2  beq 0001bc20 */
    c->pc = RC_ADDR(0x0001bc1au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1BC20;

L_1BC1C:
    /* 0001bc1c   4  bsr 0001bf64 */
    c->pc = RC_ADDR(0x0001bc1cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001bc20u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001bf64u);
    return;

L_1BC20:
    /* 0001bc20   4  lea (fffff33a,A4),A0 */
    c->pc = RC_ADDR(0x0001bc20u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0xcc6u);

L_1BC24:
    /* 0001bc24   4  lea (fffff326,A4),A1 */
    c->pc = RC_ADDR(0x0001bc24u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0xcdau);

L_1BC28:
    /* 0001bc28   4  lea (229a,A4),A2 */
    c->pc = RC_ADDR(0x0001bc28u);
    rc_step(c, m, 8);
    c->a[2] = (c->a[4] + 0x229au);

L_1BC2C:
    /* 0001bc2c   2  addq.l #8,A2 */
    c->pc = RC_ADDR(0x0001bc2cu);
    rc_step(c, m, 8);
    c->a[2] += 0x00000008u;

L_1BC2E:
    /* 0001bc2e   4  move.w #4,D0 */
    c->pc = RC_ADDR(0x0001bc2eu);
    rc_step(c, m, 8);
    t0 = 0x00000004u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BC32:
    /* 0001bc32   2  move.l (A0),D1 */
    c->pc = RC_ADDR(0x0001bc32u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BC34:
    /* 0001bc34   2  move.l (A1),(A0)+ */
    c->pc = RC_ADDR(0x0001bc34u);
    rc_step(c, m, 20);
    t0 = rc_rd32(c, m, c->a[1]);
    t3 = c->a[0];
    c->a[0] += 4u;
    rc_wr32(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BC36:
    /* 0001bc36   2  move.l D1,(A1)+ */
    c->pc = RC_ADDR(0x0001bc36u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_L);
    t3 = c->a[1];
    c->a[1] += 4u;
    rc_wr32(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BC38:
    /* 0001bc38   2  move.l D1,(A2)+ */
    c->pc = RC_ADDR(0x0001bc38u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_L);
    t3 = c->a[2];
    c->a[2] += 4u;
    rc_wr32(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BC3A:
    /* 0001bc3a   4  dbf D0,0001bc32 */
    c->pc = RC_ADDR(0x0001bc3au);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1BC32; }
    }

L_1BC3E:
    /* 0001bc3e   4  movea.l (228a,A4),A0 */
    c->pc = RC_ADDR(0x0001bc3eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x228au));
    c->a[0] = t0;

L_1BC42:
    /* 0001bc42   4  adda.l (a12,A4),A0 */
    c->pc = RC_ADDR(0x0001bc42u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] + 0xa12u));
    c->a[0] += t0;

L_1BC46:
    /* 0001bc46   4  lea (fffff33a,A4),A1 */
    c->pc = RC_ADDR(0x0001bc46u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0xcc6u);

L_1BC4A:
    /* 0001bc4a   4  move.w #4,D0 */
    c->pc = RC_ADDR(0x0001bc4au);
    rc_step(c, m, 8);
    t0 = 0x00000004u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BC4E:
    /* 0001bc4e   2  move.w (A1)+,(A0) */
    c->pc = RC_ADDR(0x0001bc4eu);
    rc_step(c, m, 12);
    t3 = c->a[1];
    c->a[1] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BC50:
    /* 0001bc50   4  move.w (A1)+,(4,A0) */
    c->pc = RC_ADDR(0x0001bc50u);
    rc_step(c, m, 16);
    t3 = c->a[1];
    c->a[1] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_wr16(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BC54:
    /* 0001bc54   2  addq.l #8,A0 */
    c->pc = RC_ADDR(0x0001bc54u);
    rc_step(c, m, 8);
    c->a[0] += 0x00000008u;

L_1BC56:
    /* 0001bc56   4  dbf D0,0001bc4e */
    c->pc = RC_ADDR(0x0001bc56u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1BC4E; }
    }

L_1BC5A:
    /* 0001bc5a   4  tst.w (2276,A4) */
    c->pc = RC_ADDR(0x0001bc5au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2276u));
    rc_set_nzvc(c, t0, RC_W);

L_1BC5E:
    /* 0001bc5e   4  beq 0001bcea */
    c->pc = RC_ADDR(0x0001bc5eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1BCEA;

L_1BC62:
    /* 0001bc62   4  move.w (2276,A4),D2 */
    c->pc = RC_ADDR(0x0001bc62u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2276u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BC66:
    /* 0001bc66   2  neg.w D2 */
    c->pc = RC_ADDR(0x0001bc66u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_1BC68:
    /* 0001bc68   2  lsl.w #1,D2 */
    c->pc = RC_ADDR(0x0001bc68u);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 2, RC_W), RC_W));

L_1BC6A:
    /* 0001bc6a   2  clr.w D3 */
    c->pc = RC_ADDR(0x0001bc6au);
    rc_step(c, m, 4);
    rc_d_set(c, 3, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1BC6C:
    /* 0001bc6c   2  clr.w D4 */
    c->pc = RC_ADDR(0x0001bc6cu);
    rc_step(c, m, 4);
    rc_d_set(c, 4, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1BC6E:
    /* 0001bc6e   4  move.w (2284,A4),D0 */
    c->pc = RC_ADDR(0x0001bc6eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2284u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BC72:
    /* 0001bc72   2  move.w D0,D1 */
    c->pc = RC_ADDR(0x0001bc72u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BC74:
    /* 0001bc74   4  andi.w #f,D0 */
    c->pc = RC_ADDR(0x0001bc74u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 & 0x0000000fu;
    rc_d_set(c, 0, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_1BC78:
    /* 0001bc78   4  andi.w #f0,D1 */
    c->pc = RC_ADDR(0x0001bc78u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 & 0x000000f0u;
    rc_d_set(c, 1, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_1BC7C:
    /* 0001bc7c   2  add.w D2,D0 */
    c->pc = RC_ADDR(0x0001bc7cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1BC7E:
    /* 0001bc7e   4  cmpi.w #10,D0 */
    c->pc = RC_ADDR(0x0001bc7eu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000010u);

L_1BC82:
    /* 0001bc82   2  blt 0001bc8a */
    c->pc = RC_ADDR(0x0001bc82u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1BC8A;

L_1BC84:
    /* 0001bc84   2  clr.w D0 */
    c->pc = RC_ADDR(0x0001bc84u);
    rc_step(c, m, 4);
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1BC86:
    /* 0001bc86   4  move.w #fffe,D3 */
    c->pc = RC_ADDR(0x0001bc86u);
    rc_step(c, m, 8);
    t0 = 0x0000fffeu;
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BC8A:
    /* 0001bc8a   2  tst.w D0 */
    c->pc = RC_ADDR(0x0001bc8au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1BC8C:
    /* 0001bc8c   2  bpl 0001bc96 */
    c->pc = RC_ADDR(0x0001bc8cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 10)) goto L_1BC96;

L_1BC8E:
    /* 0001bc8e   4  move.w #f,D0 */
    c->pc = RC_ADDR(0x0001bc8eu);
    rc_step(c, m, 8);
    t0 = 0x0000000fu;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BC92:
    /* 0001bc92   4  move.w #2,D3 */
    c->pc = RC_ADDR(0x0001bc92u);
    rc_step(c, m, 8);
    t0 = 0x00000002u;
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BC96:
    /* 0001bc96   2  lsr.w #4,D1 */
    c->pc = RC_ADDR(0x0001bc96u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 1, RC_W), RC_W));

L_1BC98:
    /* 0001bc98   4  move.w (2276,A4),D2 */
    c->pc = RC_ADDR(0x0001bc98u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2276u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BC9C:
    /* 0001bc9c   2  neg.w D2 */
    c->pc = RC_ADDR(0x0001bc9cu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_1BC9E:
    /* 0001bc9e   2  add.w D2,D1 */
    c->pc = RC_ADDR(0x0001bc9eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1BCA0:
    /* 0001bca0   4  cmpi.w #10,D1 */
    c->pc = RC_ADDR(0x0001bca0u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000010u);

L_1BCA4:
    /* 0001bca4   2  blt 0001bcac */
    c->pc = RC_ADDR(0x0001bca4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1BCAC;

L_1BCA6:
    /* 0001bca6   2  clr.w D1 */
    c->pc = RC_ADDR(0x0001bca6u);
    rc_step(c, m, 4);
    rc_d_set(c, 1, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1BCA8:
    /* 0001bca8   4  move.w #fffe,D4 */
    c->pc = RC_ADDR(0x0001bca8u);
    rc_step(c, m, 8);
    t0 = 0x0000fffeu;
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BCAC:
    /* 0001bcac   2  tst.w D1 */
    c->pc = RC_ADDR(0x0001bcacu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1BCAE:
    /* 0001bcae   2  bpl 0001bcb8 */
    c->pc = RC_ADDR(0x0001bcaeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 10)) goto L_1BCB8;

L_1BCB0:
    /* 0001bcb0   4  move.w #f,D1 */
    c->pc = RC_ADDR(0x0001bcb0u);
    rc_step(c, m, 8);
    t0 = 0x0000000fu;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BCB4:
    /* 0001bcb4   4  move.w #2,D4 */
    c->pc = RC_ADDR(0x0001bcb4u);
    rc_step(c, m, 8);
    t0 = 0x00000002u;
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BCB8:
    /* 0001bcb8   2  lsl.w #4,D1 */
    c->pc = RC_ADDR(0x0001bcb8u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 1, 0x00000004u, rc_d_get(c, 1, RC_W), RC_W));

L_1BCBA:
    /* 0001bcba   2  or.w D1,D0 */
    c->pc = RC_ADDR(0x0001bcbau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t2 = t0 | rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_1BCBC:
    /* 0001bcbc   4  move.w D0,(2284,A4) */
    c->pc = RC_ADDR(0x0001bcbcu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x2284u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BCC0:
    /* 0001bcc0   4  movea.l (a12,A4),A0 */
    c->pc = RC_ADDR(0x0001bcc0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0xa12u));
    c->a[0] = t0;

L_1BCC4:
    /* 0001bcc4   4  adda.l (228e,A4),A0 */
    c->pc = RC_ADDR(0x0001bcc4u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] + 0x228eu));
    c->a[0] += t0;

L_1BCC8:
    /* 0001bcc8   6  move.w (2284,A4),(30,A0) */
    c->pc = RC_ADDR(0x0001bcc8u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2284u));
    rc_wr16(c, m, (c->a[0] + 0x30u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BCCE:
    /* 0001bcce   4  move.w #2,D0 */
    c->pc = RC_ADDR(0x0001bcceu);
    rc_step(c, m, 8);
    t0 = 0x00000002u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BCD2:
    /* 0001bcd2   4  add.w D3,(4,A0) */
    c->pc = RC_ADDR(0x0001bcd2u);
    rc_step(c, m, 16);
    t3 = (c->a[0] + 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 3, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 3, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1BCD6:
    /* 0001bcd6   2  addq.l #8,A0 */
    c->pc = RC_ADDR(0x0001bcd6u);
    rc_step(c, m, 8);
    c->a[0] += 0x00000008u;

L_1BCD8:
    /* 0001bcd8   4  dbf D0,0001bcd2 */
    c->pc = RC_ADDR(0x0001bcd8u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1BCD2; }
    }

L_1BCDC:
    /* 0001bcdc   4  move.w #1,D0 */
    c->pc = RC_ADDR(0x0001bcdcu);
    rc_step(c, m, 8);
    t0 = 0x00000001u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BCE0:
    /* 0001bce0   4  add.w D4,(4,A0) */
    c->pc = RC_ADDR(0x0001bce0u);
    rc_step(c, m, 16);
    t3 = (c->a[0] + 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 4, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 4, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1BCE4:
    /* 0001bce4   2  addq.l #8,A0 */
    c->pc = RC_ADDR(0x0001bce4u);
    rc_step(c, m, 8);
    c->a[0] += 0x00000008u;

L_1BCE6:
    /* 0001bce6   4  dbf D0,0001bce0 */
    c->pc = RC_ADDR(0x0001bce6u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1BCE0; }
    }

L_1BCEA:
    /* 0001bcea   4  move.w (ffffb02c,A4),D0 */
    c->pc = RC_ADDR(0x0001bceau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BCEE:
    /* 0001bcee   4  sub.w D0,(2288,A4) */
    c->pc = RC_ADDR(0x0001bceeu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x2288u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1BCF2:
    /* 0001bcf2   2  bpl 0001bcf8 */
    c->pc = RC_ADDR(0x0001bcf2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 10)) goto L_1BCF8;

L_1BCF4:
    /* 0001bcf4   4  clr.w (2288,A4) */
    c->pc = RC_ADDR(0x0001bcf4u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x2288u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1BCF8:
    /* 0001bcf8   4  tst.w (2288,A4) */
    c->pc = RC_ADDR(0x0001bcf8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2288u));
    rc_set_nzvc(c, t0, RC_W);

L_1BCFC:
    /* 0001bcfc   4  beq 0001bdae */
    c->pc = RC_ADDR(0x0001bcfcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1BDAE;

L_1BD00:
    /* 0001bd00   6  cmpi.w #9,(2288,A4) */
    c->pc = RC_ADDR(0x0001bd00u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2288u));
    rc_cmp(c, RC_W, t0, 0x00000009u);

L_1BD06:
    /* 0001bd06   2  blt 0001bd0e */
    c->pc = RC_ADDR(0x0001bd06u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1BD0E;

L_1BD08:
    /* 0001bd08   6  move.w #9,(2288,A4) */
    c->pc = RC_ADDR(0x0001bd08u);
    rc_step(c, m, 16);
    t0 = 0x00000009u;
    rc_wr16(c, m, (c->a[4] + 0x2288u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BD0E:
    /* 0001bd0e   4  move.w (2288,A4),D3 */
    c->pc = RC_ADDR(0x0001bd0eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2288u));
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BD12:
    /* 0001bd12   4  movea.l (228a,A4),A0 */
    c->pc = RC_ADDR(0x0001bd12u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x228au));
    c->a[0] = t0;

L_1BD16:
    /* 0001bd16   4  adda.l (a12,A4),A0 */
    c->pc = RC_ADDR(0x0001bd16u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] + 0xa12u));
    c->a[0] += t0;

L_1BD1A:
    /* 0001bd1a   6  adda.l #a6,A0 */
    c->pc = RC_ADDR(0x0001bd1au);
    rc_step(c, m, 16);
    t0 = 0x000000a6u;
    c->a[0] += t0;

L_1BD20:
    /* 0001bd20   4  lea (0001bdb4),A1 */
    c->pc = RC_ADDR(0x0001bd20u);
    rc_step(c, m, 8);
    c->a[1] = RC_ADDR(0x0001bdb4u);

L_1BD24:
    /* 0001bd24   4  move.w (2286,A4),D0 */
    c->pc = RC_ADDR(0x0001bd24u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2286u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BD28:
    /* 0001bd28   4  move.w #b,D1 */
    c->pc = RC_ADDR(0x0001bd28u);
    rc_step(c, m, 8);
    t0 = 0x0000000bu;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BD2C:
    /* 0001bd2c   4  tst.b (0,A1,D0.w) */
    c->pc = RC_ADDR(0x0001bd2cu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[1] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_B);

L_1BD30:
    /* 0001bd30   2  beq 0001bd36 */
    c->pc = RC_ADDR(0x0001bd30u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1BD36;

L_1BD32:
    /* 0001bd32   4  addi.b #1,(A0) */
    c->pc = RC_ADDR(0x0001bd32u);
    rc_step(c, m, 16);
    t3 = c->a[0];
    t1 = rc_rd8(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_B, t1, 0x00000001u, t2, 0);
    rc_wr8(c, m, t3, t2);

L_1BD36:
    /* 0001bd36   6  adda.l #14,A0 */
    c->pc = RC_ADDR(0x0001bd36u);
    rc_step(c, m, 16);
    t0 = 0x00000014u;
    c->a[0] += t0;

L_1BD3C:
    /* 0001bd3c   6  adda.l #10,A1 */
    c->pc = RC_ADDR(0x0001bd3cu);
    rc_step(c, m, 16);
    t0 = 0x00000010u;
    c->a[1] += t0;

L_1BD42:
    /* 0001bd42   4  dbf D1,0001bd2c */
    c->pc = RC_ADDR(0x0001bd42u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 1, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 1, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1BD2C; }
    }

L_1BD46:
    /* 0001bd46   4  addq.w #1,(2286,A4) */
    c->pc = RC_ADDR(0x0001bd46u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x2286u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1BD4A:
    /* 0001bd4a   6  cmpi.w #10,(2286,A4) */
    c->pc = RC_ADDR(0x0001bd4au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2286u));
    rc_cmp(c, RC_W, t0, 0x00000010u);

L_1BD50:
    /* 0001bd50   2  blt 0001bdaa */
    c->pc = RC_ADDR(0x0001bd50u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1BDAA;

L_1BD52:
    /* 0001bd52   4  clr.w (2286,A4) */
    c->pc = RC_ADDR(0x0001bd52u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x2286u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1BD56:
    /* 0001bd56   4  movea.l (228a,A4),A0 */
    c->pc = RC_ADDR(0x0001bd56u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x228au));
    c->a[0] = t0;

L_1BD5A:
    /* 0001bd5a   4  adda.l (a12,A4),A0 */
    c->pc = RC_ADDR(0x0001bd5au);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] + 0xa12u));
    c->a[0] += t0;

L_1BD5E:
    /* 0001bd5e   6  adda.l #a6,A0 */
    c->pc = RC_ADDR(0x0001bd5eu);
    rc_step(c, m, 16);
    t0 = 0x000000a6u;
    c->a[0] += t0;

L_1BD64:
    /* 0001bd64   4  lea (0001be74),A1 */
    c->pc = RC_ADDR(0x0001bd64u);
    rc_step(c, m, 8);
    c->a[1] = RC_ADDR(0x0001be74u);

L_1BD68:
    /* 0001bd68   4  move.w #b,D0 */
    c->pc = RC_ADDR(0x0001bd68u);
    rc_step(c, m, 8);
    t0 = 0x0000000bu;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BD6C:
    /* 0001bd6c   2  move.b (A1)+,D1 */
    c->pc = RC_ADDR(0x0001bd6cu);
    rc_step(c, m, 8);
    t3 = c->a[1];
    c->a[1] += 1u;
    t0 = rc_rd8(c, m, t3);
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1BD6E:
    /* 0001bd6e   2  sub.b D1,(A0) */
    c->pc = RC_ADDR(0x0001bd6eu);
    rc_step(c, m, 12);
    t3 = c->a[0];
    t1 = rc_rd8(c, m, t3);
    t2 = t1 - rc_d_get(c, 1, RC_B);
    rc_flags_sub(c, RC_B, t1, rc_d_get(c, 1, RC_B), t2, 0);
    rc_wr8(c, m, t3, t2);

L_1BD70:
    /* 0001bd70   6  adda.l #14,A0 */
    c->pc = RC_ADDR(0x0001bd70u);
    rc_step(c, m, 16);
    t0 = 0x00000014u;
    c->a[0] += t0;

L_1BD76:
    /* 0001bd76   4  dbf D0,0001bd6c */
    c->pc = RC_ADDR(0x0001bd76u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1BD6C; }
    }

L_1BD7A:
    /* 0001bd7a   4  movea.l (228a,A4),A0 */
    c->pc = RC_ADDR(0x0001bd7au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x228au));
    c->a[0] = t0;

L_1BD7E:
    /* 0001bd7e   4  adda.l (a12,A4),A0 */
    c->pc = RC_ADDR(0x0001bd7eu);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] + 0xa12u));
    c->a[0] += t0;

L_1BD82:
    /* 0001bd82   6  adda.l #ac,A0 */
    c->pc = RC_ADDR(0x0001bd82u);
    rc_step(c, m, 16);
    t0 = 0x000000acu;
    c->a[0] += t0;

L_1BD88:
    /* 0001bd88   4  move.w #5,D0 */
    c->pc = RC_ADDR(0x0001bd88u);
    rc_step(c, m, 8);
    t0 = 0x00000005u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BD8C:
    /* 0001bd8c   4  move.w #2,D1 */
    c->pc = RC_ADDR(0x0001bd8cu);
    rc_step(c, m, 8);
    t0 = 0x00000002u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BD90:
    /* 0001bd90   4  move.w (14,A0),D2 */
    c->pc = RC_ADDR(0x0001bd90u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x14u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BD94:
    /* 0001bd94   4  move.w (A0),(14,A0) */
    c->pc = RC_ADDR(0x0001bd94u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_wr16(c, m, (c->a[0] + 0x14u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BD98:
    /* 0001bd98   2  move.w D2,(A0) */
    c->pc = RC_ADDR(0x0001bd98u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BD9A:
    /* 0001bd9a   2  addq.l #4,A0 */
    c->pc = RC_ADDR(0x0001bd9au);
    rc_step(c, m, 8);
    c->a[0] += 0x00000004u;

L_1BD9C:
    /* 0001bd9c   4  dbf D1,0001bd90 */
    c->pc = RC_ADDR(0x0001bd9cu);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 1, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 1, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1BD90; }
    }

L_1BDA0:
    /* 0001bda0   6  adda.l #1c,A0 */
    c->pc = RC_ADDR(0x0001bda0u);
    rc_step(c, m, 16);
    t0 = 0x0000001cu;
    c->a[0] += t0;

L_1BDA6:
    /* 0001bda6   4  dbf D0,0001bd8c */
    c->pc = RC_ADDR(0x0001bda6u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1BD8C; }
    }

L_1BDAA:
    /* 0001bdaa   4  dbf D3,0001bd12 */
    c->pc = RC_ADDR(0x0001bdaau);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 3, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 3, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1BD12; }
    }

L_1BDAE:
    /* 0001bdae   4  clr.w (fffff28a,A4) */
    c->pc = RC_ADDR(0x0001bdaeu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0xd76u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1BDB2:
    /* 0001bdb2   2  rts */
    c->pc = RC_ADDR(0x0001bdb2u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
