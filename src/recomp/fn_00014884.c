/* fn_00014884 - 62 byte(s), 14 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00014884(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00014884u): goto L_14884;
    case RC_ADDR(0x00014888u): goto L_14888;
    case RC_ADDR(0x0001488eu): goto L_1488E;
    case RC_ADDR(0x00014894u): goto L_14894;
    case RC_ADDR(0x00014898u): goto L_14898;
    case RC_ADDR(0x0001489eu): goto L_1489E;
    case RC_ADDR(0x000148a4u): goto L_148A4;
    case RC_ADDR(0x000148aau): goto L_148AA;
    case RC_ADDR(0x000148b0u): goto L_148B0;
    case RC_ADDR(0x000148b4u): goto L_148B4;
    case RC_ADDR(0x000148b8u): goto L_148B8;
    case RC_ADDR(0x000148bau): goto L_148BA;
    case RC_ADDR(0x000148beu): goto L_148BE;
    case RC_ADDR(0x000148c0u): goto L_148C0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_14884:
    /* 00014884   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00014884u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_14888:
    /* 00014888   6  move.w #3e8,(1154,A4) */
    c->pc = RC_ADDR(0x00014888u);
    t0 = 0x000003e8u;
    rc_wr16(c, m, (c->a[4] + 0x1154u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1488E:
    /* 0001488e   6  move.w #3e8,(1156,A4) */
    c->pc = RC_ADDR(0x0001488eu);
    t0 = 0x000003e8u;
    rc_wr16(c, m, (c->a[4] + 0x1156u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14894:
    /* 00014894   4  clr.w (1192,A4) */
    c->pc = RC_ADDR(0x00014894u);
    rc_wr16(c, m, (c->a[4] + 0x1192u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14898:
    /* 00014898   6  move.w #1,(afa,A4) */
    c->pc = RC_ADDR(0x00014898u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xafau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1489E:
    /* 0001489e   6  move.w #f,(1168,A4) */
    c->pc = RC_ADDR(0x0001489eu);
    t0 = 0x0000000fu;
    rc_wr16(c, m, (c->a[4] + 0x1168u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_148A4:
    /* 000148a4   6  move.w #a,(116a,A4) */
    c->pc = RC_ADDR(0x000148a4u);
    t0 = 0x0000000au;
    rc_wr16(c, m, (c->a[4] + 0x116au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_148AA:
    /* 000148aa   6  move.w #1,(116c,A4) */
    c->pc = RC_ADDR(0x000148aau);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x116cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_148B0:
    /* 000148b0   4  clr.w (1194,A4) */
    c->pc = RC_ADDR(0x000148b0u);
    rc_wr16(c, m, (c->a[4] + 0x1194u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_148B4:
    /* 000148b4   4  tst.w (1166,A4) */
    c->pc = RC_ADDR(0x000148b4u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1166u));
    rc_set_nzvc(c, t0, RC_W);

L_148B8:
    /* 000148b8   2  beq 000148be */
    c->pc = RC_ADDR(0x000148b8u);
    if (rc_cond(c, 7)) goto L_148BE;

L_148BA:
    /* 000148ba   4  subq.w #1,(1166,A4) */
    c->pc = RC_ADDR(0x000148bau);
    t3 = (c->a[4] + 0x1166u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_148BE:
    /* 000148be   2  unlk A5 */
    c->pc = RC_ADDR(0x000148beu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_148C0:
    /* 000148c0   2  rts */
    c->pc = RC_ADDR(0x000148c0u);
    rc_ret(c, m);
    return;

}
