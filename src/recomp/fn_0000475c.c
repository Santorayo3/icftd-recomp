/* fn_0000475c - 38 byte(s), 12 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000475c(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000475cu): goto L_475C;
    case RC_ADDR(0x00004760u): goto L_4760;
    case RC_ADDR(0x00004766u): goto L_4766;
    case RC_ADDR(0x00004768u): goto L_4768;
    case RC_ADDR(0x0000476eu): goto L_476E;
    case RC_ADDR(0x00004770u): goto L_4770;
    case RC_ADDR(0x00004776u): goto L_4776;
    case RC_ADDR(0x00004778u): goto L_4778;
    case RC_ADDR(0x0000477au): goto L_477A;
    case RC_ADDR(0x0000477cu): goto L_477C;
    case RC_ADDR(0x0000477eu): goto L_477E;
    case RC_ADDR(0x00004780u): goto L_4780;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_475C:
    /* 0000475c   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000475cu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_4760:
    /* 00004760   6  cmpi.w #27,(8,A5) */
    c->pc = RC_ADDR(0x00004760u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_cmp(c, RC_W, t0, 0x00000027u);

L_4766:
    /* 00004766   2  bge 0000477e */
    c->pc = RC_ADDR(0x00004766u);
    if (rc_cond(c, 12)) goto L_477E;

L_4768:
    /* 00004768   6  cmpi.w #8,(8,A5) */
    c->pc = RC_ADDR(0x00004768u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_cmp(c, RC_W, t0, 0x00000008u);

L_476E:
    /* 0000476e   2  blt 00004778 */
    c->pc = RC_ADDR(0x0000476eu);
    if (rc_cond(c, 13)) goto L_4778;

L_4770:
    /* 00004770   6  cmpi.w #a,(8,A5) */
    c->pc = RC_ADDR(0x00004770u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_cmp(c, RC_W, t0, 0x0000000au);

L_4776:
    /* 00004776   2  ble 0000477e */
    c->pc = RC_ADDR(0x00004776u);
    if (rc_cond(c, 15)) goto L_477E;

L_4778:
    /* 00004778   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00004778u);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_477A:
    /* 0000477a   2  unlk A5 */
    c->pc = RC_ADDR(0x0000477au);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_477C:
    /* 0000477c   2  rts */
    c->pc = RC_ADDR(0x0000477cu);
    rc_ret(c, m);
    return;

L_477E:
    /* 0000477e   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0000477eu);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_4780:
    /* 00004780   2  bra 0000477a */
    c->pc = RC_ADDR(0x00004780u);
    rc_tick();
    goto L_477A;

}
