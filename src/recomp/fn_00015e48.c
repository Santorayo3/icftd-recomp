/* fn_00015e48 - 106 byte(s), 28 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00015e48(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00015e48u): goto L_15E48;
    case RC_ADDR(0x00015e4au): goto L_15E4A;
    case RC_ADDR(0x00015e4cu): goto L_15E4C;
    case RC_ADDR(0x00015e50u): goto L_15E50;
    case RC_ADDR(0x00015e54u): goto L_15E54;
    case RC_ADDR(0x00015e56u): goto L_15E56;
    case RC_ADDR(0x00015e5au): goto L_15E5A;
    case RC_ADDR(0x00015e5cu): goto L_15E5C;
    case RC_ADDR(0x00015e60u): goto L_15E60;
    case RC_ADDR(0x00015e62u): goto L_15E62;
    case RC_ADDR(0x00015e68u): goto L_15E68;
    case RC_ADDR(0x00015e6au): goto L_15E6A;
    case RC_ADDR(0x00015e70u): goto L_15E70;
    case RC_ADDR(0x00015e76u): goto L_15E76;
    case RC_ADDR(0x00015e7cu): goto L_15E7C;
    case RC_ADDR(0x00015e7eu): goto L_15E7E;
    case RC_ADDR(0x00015e82u): goto L_15E82;
    case RC_ADDR(0x00015e86u): goto L_15E86;
    case RC_ADDR(0x00015e8cu): goto L_15E8C;
    case RC_ADDR(0x00015e90u): goto L_15E90;
    case RC_ADDR(0x00015e96u): goto L_15E96;
    case RC_ADDR(0x00015e98u): goto L_15E98;
    case RC_ADDR(0x00015e9eu): goto L_15E9E;
    case RC_ADDR(0x00015ea0u): goto L_15EA0;
    case RC_ADDR(0x00015ea6u): goto L_15EA6;
    case RC_ADDR(0x00015eaau): goto L_15EAA;
    case RC_ADDR(0x00015eaeu): goto L_15EAE;
    case RC_ADDR(0x00015eb0u): goto L_15EB0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_15E48:
    /* 00015e48   2  bsr 00015e20 */
    c->pc = RC_ADDR(0x00015e48u);
    rc_push32(c, m, RC_ADDR(0x00015e4au));
    rc_depth++;
    c->pc = RC_ADDR(0x00015e20u);
    return;

L_15E4A:
    /* 00015e4a   2  beq 00015eae */
    c->pc = RC_ADDR(0x00015e4au);
    if (rc_cond(c, 7)) goto L_15EAE;

L_15E4C:
    /* 00015e4c   4  andi.b #7f,D0 */
    c->pc = RC_ADDR(0x00015e4cu);
    t1 = rc_d_get(c, 0, RC_B);
    t2 = t1 & 0x0000007fu;
    rc_d_set(c, 0, RC_B, t2);
    rc_set_nzvc(c, t2, RC_B);

L_15E50:
    /* 00015e50   4  cmpi.b #4,D0 */
    c->pc = RC_ADDR(0x00015e50u);
    t0 = rc_d_get(c, 0, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000004u);

L_15E54:
    /* 00015e54   2  beq 00015e7e */
    c->pc = RC_ADDR(0x00015e54u);
    if (rc_cond(c, 7)) goto L_15E7E;

L_15E56:
    /* 00015e56   4  cmpi.b #2,D0 */
    c->pc = RC_ADDR(0x00015e56u);
    t0 = rc_d_get(c, 0, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000002u);

L_15E5A:
    /* 00015e5a   2  bgt 00015eae */
    c->pc = RC_ADDR(0x00015e5au);
    if (rc_cond(c, 14)) goto L_15EAE;

L_15E5C:
    /* 00015e5c   4  cmpi.b #1,D0 */
    c->pc = RC_ADDR(0x00015e5cu);
    t0 = rc_d_get(c, 0, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000001u);

L_15E60:
    /* 00015e60   2  beq 00015e7e */
    c->pc = RC_ADDR(0x00015e60u);
    if (rc_cond(c, 7)) goto L_15E7E;

L_15E62:
    /* 00015e62   6  cmpi.w #2,(af8,A4) */
    c->pc = RC_ADDR(0x00015e62u);
    t0 = rc_rd16(c, m, (c->a[4] + 0xaf8u));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_15E68:
    /* 00015e68   2  bgt 00015eae */
    c->pc = RC_ADDR(0x00015e68u);
    if (rc_cond(c, 14)) goto L_15EAE;

L_15E6A:
    /* 00015e6a   6  move.w #1,(af8,A4) */
    c->pc = RC_ADDR(0x00015e6au);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xaf8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15E70:
    /* 00015e70   6  move.w #1,(fffff286,A4) */
    c->pc = RC_ADDR(0x00015e70u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0xd7au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15E76:
    /* 00015e76   6  move.w #1,(fffff288,A4) */
    c->pc = RC_ADDR(0x00015e76u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0xd78u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15E7C:
    /* 00015e7c   2  bra 00015eae */
    c->pc = RC_ADDR(0x00015e7cu);
    goto L_15EAE;

L_15E7E:
    /* 00015e7e   4  sub.w D2,(fffffd98,A4) */
    c->pc = RC_ADDR(0x00015e7eu);
    t3 = (c->a[4] - 0x268u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 2, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 2, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_15E82:
    /* 00015e82   4  sub.w D3,(fffffd9a,A4) */
    c->pc = RC_ADDR(0x00015e82u);
    t3 = (c->a[4] - 0x266u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 3, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 3, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_15E86:
    /* 00015e86   6  move.w #1,(af8,A4) */
    c->pc = RC_ADDR(0x00015e86u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xaf8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15E8C:
    /* 00015e8c   4  move.w #1,D0 */
    c->pc = RC_ADDR(0x00015e8cu);
    t0 = 0x00000001u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15E90:
    /* 00015e90   6  cmpi.w #2,(fffff286,A4) */
    c->pc = RC_ADDR(0x00015e90u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd7au));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_15E96:
    /* 00015e96   2  bge 00015ea0 */
    c->pc = RC_ADDR(0x00015e96u);
    if (rc_cond(c, 12)) goto L_15EA0;

L_15E98:
    /* 00015e98   6  cmpi.w #3,(fffff288,A4) */
    c->pc = RC_ADDR(0x00015e98u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd78u));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_15E9E:
    /* 00015e9e   2  blt 00015ea6 */
    c->pc = RC_ADDR(0x00015e9eu);
    if (rc_cond(c, 13)) goto L_15EA6;

L_15EA0:
    /* 00015ea0   6  move.w #1,(10e2,A4) */
    c->pc = RC_ADDR(0x00015ea0u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x10e2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15EA6:
    /* 00015ea6   4  clr.w (fffff286,A4) */
    c->pc = RC_ADDR(0x00015ea6u);
    rc_wr16(c, m, (c->a[4] - 0xd7au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15EAA:
    /* 00015eaa   4  clr.w (fffff288,A4) */
    c->pc = RC_ADDR(0x00015eaau);
    rc_wr16(c, m, (c->a[4] - 0xd78u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15EAE:
    /* 00015eae   2  clr.w D0 */
    c->pc = RC_ADDR(0x00015eaeu);
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15EB0:
    /* 00015eb0   2  rts */
    c->pc = RC_ADDR(0x00015eb0u);
    rc_ret(c, m);
    return;

}
