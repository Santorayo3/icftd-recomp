/* fn_0001cf48 - 130 byte(s), 31 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001cf48(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001cf48u): goto L_1CF48;
    case RC_ADDR(0x0001cf4cu): goto L_1CF4C;
    case RC_ADDR(0x0001cf50u): goto L_1CF50;
    case RC_ADDR(0x0001cf54u): goto L_1CF54;
    case RC_ADDR(0x0001cf56u): goto L_1CF56;
    case RC_ADDR(0x0001cf5au): goto L_1CF5A;
    case RC_ADDR(0x0001cf5cu): goto L_1CF5C;
    case RC_ADDR(0x0001cf62u): goto L_1CF62;
    case RC_ADDR(0x0001cf68u): goto L_1CF68;
    case RC_ADDR(0x0001cf6cu): goto L_1CF6C;
    case RC_ADDR(0x0001cf72u): goto L_1CF72;
    case RC_ADDR(0x0001cf7au): goto L_1CF7A;
    case RC_ADDR(0x0001cf80u): goto L_1CF80;
    case RC_ADDR(0x0001cf86u): goto L_1CF86;
    case RC_ADDR(0x0001cf8au): goto L_1CF8A;
    case RC_ADDR(0x0001cf8eu): goto L_1CF8E;
    case RC_ADDR(0x0001cf92u): goto L_1CF92;
    case RC_ADDR(0x0001cf94u): goto L_1CF94;
    case RC_ADDR(0x0001cf9au): goto L_1CF9A;
    case RC_ADDR(0x0001cfa0u): goto L_1CFA0;
    case RC_ADDR(0x0001cfa6u): goto L_1CFA6;
    case RC_ADDR(0x0001cfaau): goto L_1CFAA;
    case RC_ADDR(0x0001cfacu): goto L_1CFAC;
    case RC_ADDR(0x0001cfaeu): goto L_1CFAE;
    case RC_ADDR(0x0001cfb2u): goto L_1CFB2;
    case RC_ADDR(0x0001cfb4u): goto L_1CFB4;
    case RC_ADDR(0x0001cfb8u): goto L_1CFB8;
    case RC_ADDR(0x0001cfbau): goto L_1CFBA;
    case RC_ADDR(0x0001cfc0u): goto L_1CFC0;
    case RC_ADDR(0x0001cfc6u): goto L_1CFC6;
    case RC_ADDR(0x0001cfc8u): goto L_1CFC8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1CF48:
    /* 0001cf48   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x0001cf48u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_1CF4C:
    /* 0001cf4c   4  jsr (ffff80c8,A4) */
    c->pc = RC_ADDR(0x0001cf4cu);
    /* vector 33 */
    rc_push32(c, m, RC_ADDR(0x0001cf50u));
    rc_depth++;
    c->pc = RC_ADDR(0x00009becu);
    return;

L_1CF50:
    /* 0001cf50   4  tst.w (ffffb02e,A4) */
    c->pc = RC_ADDR(0x0001cf50u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd2u));
    rc_set_nzvc(c, t0, RC_W);

L_1CF54:
    /* 0001cf54   2  beq 0001cf5c */
    c->pc = RC_ADDR(0x0001cf54u);
    if (rc_cond(c, 7)) goto L_1CF5C;

L_1CF56:
    /* 0001cf56   4  jsr (ffff816a,A4) */
    c->pc = RC_ADDR(0x0001cf56u);
    /* vector 60 */
    rc_push32(c, m, RC_ADDR(0x0001cf5au));
    rc_depth++;
    c->pc = RC_ADDR(0x00011bf0u);
    return;

L_1CF5A:
    /* 0001cf5a   2  bra 0001cf50 */
    c->pc = RC_ADDR(0x0001cf5au);
    rc_tick();
    goto L_1CF50;

L_1CF5C:
    /* 0001cf5c   6  move.l (ffffcbbc,A4),(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001cf5cu);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3444u));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1CF62:
    /* 0001cf62   6  move.l (238c,A4),(ffffcbbc,A4) */
    c->pc = RC_ADDR(0x0001cf62u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x238cu));
    rc_wr32(c, m, (c->a[4] - 0x3444u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1CF68:
    /* 0001cf68   4  movea.l (238c,A4),A0 */
    c->pc = RC_ADDR(0x0001cf68u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x238cu));
    c->a[0] = t0;

L_1CF6C:
    /* 0001cf6c   6  move.w (2,A0),(ffffcb04,A4) */
    c->pc = RC_ADDR(0x0001cf6cu);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_wr16(c, m, (c->a[4] - 0x34fcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CF72:
    /* 0001cf72   8  move.l #16f,(1a,A4) */
    c->pc = RC_ADDR(0x0001cf72u);
    t0 = 0x0000016fu;
    rc_wr32(c, m, (c->a[4] + 0x1au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1CF7A:
    /* 0001cf7a   6  move.w #1e,(fffffec2,A4) */
    c->pc = RC_ADDR(0x0001cf7au);
    t0 = 0x0000001eu;
    rc_wr16(c, m, (c->a[4] - 0x13eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CF80:
    /* 0001cf80   6  move.w #151,(fffffec4,A4) */
    c->pc = RC_ADDR(0x0001cf80u);
    t0 = 0x00000151u;
    rc_wr16(c, m, (c->a[4] - 0x13cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CF86:
    /* 0001cf86   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0001cf86u);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CF8A:
    /* 0001cf8a   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0001cf8au);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1CF8E:
    /* 0001cf8e   4  jsr (ffff806e,A4) */
    c->pc = RC_ADDR(0x0001cf8eu);
    /* vector 18 */
    rc_push32(c, m, RC_ADDR(0x0001cf92u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005012u);
    return;

L_1CF92:
    /* 0001cf92   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x0001cf92u);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_1CF94:
    /* 0001cf94   6  move.l (fffffffc,A5),(ffffcbbc,A4) */
    c->pc = RC_ADDR(0x0001cf94u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_wr32(c, m, (c->a[4] - 0x3444u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1CF9A:
    /* 0001cf9a   6  move.w #c8,(ffffcb04,A4) */
    c->pc = RC_ADDR(0x0001cf9au);
    t0 = 0x000000c8u;
    rc_wr16(c, m, (c->a[4] - 0x34fcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CFA0:
    /* 0001cfa0   6  move.w #1,(fffff28a,A4) */
    c->pc = RC_ADDR(0x0001cfa0u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0xd76u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CFA6:
    /* 0001cfa6   4  tst.w (fffff28a,A4) */
    c->pc = RC_ADDR(0x0001cfa6u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd76u));
    rc_set_nzvc(c, t0, RC_W);

L_1CFAA:
    /* 0001cfaa   2  beq 0001cfae */
    c->pc = RC_ADDR(0x0001cfaau);
    if (rc_cond(c, 7)) goto L_1CFAE;

L_1CFAC:
    /* 0001cfac   2  bra 0001cfa6 */
    c->pc = RC_ADDR(0x0001cfacu);
    rc_tick();
    goto L_1CFA6;

L_1CFAE:
    /* 0001cfae   4  tst.w (ffffb02e,A4) */
    c->pc = RC_ADDR(0x0001cfaeu);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd2u));
    rc_set_nzvc(c, t0, RC_W);

L_1CFB2:
    /* 0001cfb2   2  bne 0001cfba */
    c->pc = RC_ADDR(0x0001cfb2u);
    if (rc_cond(c, 6)) goto L_1CFBA;

L_1CFB4:
    /* 0001cfb4   4  jsr (ffff816a,A4) */
    c->pc = RC_ADDR(0x0001cfb4u);
    /* vector 60 */
    rc_push32(c, m, RC_ADDR(0x0001cfb8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00011bf0u);
    return;

L_1CFB8:
    /* 0001cfb8   2  bra 0001cfae */
    c->pc = RC_ADDR(0x0001cfb8u);
    rc_tick();
    goto L_1CFAE;

L_1CFBA:
    /* 0001cfba   6  move.w #13,(fffffec2,A4) */
    c->pc = RC_ADDR(0x0001cfbau);
    t0 = 0x00000013u;
    rc_wr16(c, m, (c->a[4] - 0x13eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CFC0:
    /* 0001cfc0   6  move.w #12c,(fffffec4,A4) */
    c->pc = RC_ADDR(0x0001cfc0u);
    t0 = 0x0000012cu;
    rc_wr16(c, m, (c->a[4] - 0x13cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CFC6:
    /* 0001cfc6   2  unlk A5 */
    c->pc = RC_ADDR(0x0001cfc6u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1CFC8:
    /* 0001cfc8   2  rts */
    c->pc = RC_ADDR(0x0001cfc8u);
    rc_ret(c, m);
    return;

}
