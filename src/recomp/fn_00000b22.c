/* fn_00000b22 - 64 byte(s), 18 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00000b22(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00000b22u): goto L_B22;
    case RC_ADDR(0x00000b26u): goto L_B26;
    case RC_ADDR(0x00000b2au): goto L_B2A;
    case RC_ADDR(0x00000b30u): goto L_B30;
    case RC_ADDR(0x00000b32u): goto L_B32;
    case RC_ADDR(0x00000b36u): goto L_B36;
    case RC_ADDR(0x00000b3au): goto L_B3A;
    case RC_ADDR(0x00000b3eu): goto L_B3E;
    case RC_ADDR(0x00000b40u): goto L_B40;
    case RC_ADDR(0x00000b48u): goto L_B48;
    case RC_ADDR(0x00000b4eu): goto L_B4E;
    case RC_ADDR(0x00000b50u): goto L_B50;
    case RC_ADDR(0x00000b54u): goto L_B54;
    case RC_ADDR(0x00000b56u): goto L_B56;
    case RC_ADDR(0x00000b58u): goto L_B58;
    case RC_ADDR(0x00000b5au): goto L_B5A;
    case RC_ADDR(0x00000b5eu): goto L_B5E;
    case RC_ADDR(0x00000b60u): goto L_B60;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_B22:
    /* 00000b22   4  link.w A5,#ffffff98 */
    c->pc = RC_ADDR(0x00000b22u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x68u;

L_B26:
    /* 00000b26   4  clr.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x00000b26u);
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_B2A:
    /* 00000b2a   6  cmpi.b #fe,(9,A5) */
    c->pc = RC_ADDR(0x00000b2au);
    t0 = rc_rd8(c, m, (c->a[5] + 0x9u));
    rc_cmp(c, RC_B, t0, 0x000000feu);

L_B30:
    /* 00000b30   2  bne 00000b48 */
    c->pc = RC_ADDR(0x00000b30u);
    if (rc_cond(c, 6)) goto L_B48;

L_B32:
    /* 00000b32   4  pea (00000003).l */
    c->pc = RC_ADDR(0x00000b32u);
    rc_push32(c, m, RC_ADDR(0x00000003u));

L_B36:
    /* 00000b36   4  pea (ffffff98,A5) */
    c->pc = RC_ADDR(0x00000b36u);
    rc_push32(c, m, (c->a[5] - 0x68u));

L_B3A:
    /* 00000b3a   4  jsr (00000aaa) */
    c->pc = RC_ADDR(0x00000b3au);
    rc_push32(c, m, RC_ADDR(0x00000b3eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00000aaau);
    return;

L_B3E:
    /* 00000b3e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00000b3eu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_B40:
    /* 00000b40   8  move.l #3,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00000b40u);
    t0 = 0x00000003u;
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_B48:
    /* 00000b48   6  cmpi.b #fd,(9,A5) */
    c->pc = RC_ADDR(0x00000b48u);
    t0 = rc_rd8(c, m, (c->a[5] + 0x9u));
    rc_cmp(c, RC_B, t0, 0x000000fdu);

L_B4E:
    /* 00000b4e   2  bne 00000b5e */
    c->pc = RC_ADDR(0x00000b4eu);
    if (rc_cond(c, 6)) goto L_B5E;

L_B50:
    /* 00000b50   4  pea (ffffff98,A5) */
    c->pc = RC_ADDR(0x00000b50u);
    rc_push32(c, m, (c->a[5] - 0x68u));

L_B54:
    /* 00000b54   2  bsr 00000af0 */
    c->pc = RC_ADDR(0x00000b54u);
    rc_push32(c, m, RC_ADDR(0x00000b56u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000af0u);
    return;

L_B56:
    /* 00000b56   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00000b56u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_B58:
    /* 00000b58   2  ext.l D0 */
    c->pc = RC_ADDR(0x00000b58u);
    rc_ext_l(c, 0);

L_B5A:
    /* 00000b5a   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00000b5au);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_B5E:
    /* 00000b5e   2  unlk A5 */
    c->pc = RC_ADDR(0x00000b5eu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_B60:
    /* 00000b60   2  rts */
    c->pc = RC_ADDR(0x00000b60u);
    rc_ret(c, m);
    return;

}
