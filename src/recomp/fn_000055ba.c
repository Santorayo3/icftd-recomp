/* fn_000055ba - 68 byte(s), 19 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000055ba(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x000055bau): goto L_55BA;
    case RC_ADDR(0x000055beu): goto L_55BE;
    case RC_ADDR(0x000055c2u): goto L_55C2;
    case RC_ADDR(0x000055c6u): goto L_55C6;
    case RC_ADDR(0x000055cau): goto L_55CA;
    case RC_ADDR(0x000055ccu): goto L_55CC;
    case RC_ADDR(0x000055d0u): goto L_55D0;
    case RC_ADDR(0x000055d2u): goto L_55D2;
    case RC_ADDR(0x000055d6u): goto L_55D6;
    case RC_ADDR(0x000055dau): goto L_55DA;
    case RC_ADDR(0x000055deu): goto L_55DE;
    case RC_ADDR(0x000055e2u): goto L_55E2;
    case RC_ADDR(0x000055e6u): goto L_55E6;
    case RC_ADDR(0x000055eau): goto L_55EA;
    case RC_ADDR(0x000055eeu): goto L_55EE;
    case RC_ADDR(0x000055f2u): goto L_55F2;
    case RC_ADDR(0x000055f6u): goto L_55F6;
    case RC_ADDR(0x000055fau): goto L_55FA;
    case RC_ADDR(0x000055fcu): goto L_55FC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_55BA:
    /* 000055ba   4  link.w A5,#ffffffce */
    c->pc = RC_ADDR(0x000055bau);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x32u;

L_55BE:
    /* 000055be   4  move.l (ffffce1c,A4),-(A7) */
    c->pc = RC_ADDR(0x000055beu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x31e4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_55C2:
    /* 000055c2   4  move.w (ffff83ce,A4),-(A7) */
    c->pc = RC_ADDR(0x000055c2u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c32u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_55C6:
    /* 000055c6   4  move.w (ffffce1a,A4),-(A7) */
    c->pc = RC_ADDR(0x000055c6u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x31e6u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_55CA:
    /* 000055ca   2  moveq #f,D0 */
    c->pc = RC_ADDR(0x000055cau);
    rc_step(c, m, 4);
    c->d[0] = 0x0000000fu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_55CC:
    /* 000055cc   4  sub.w (ffff83c8,A4),D0 */
    c->pc = RC_ADDR(0x000055ccu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_55D0:
    /* 000055d0   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x000055d0u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_55D2:
    /* 000055d2   4  pea (000055fe) */
    c->pc = RC_ADDR(0x000055d2u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000055feu));

L_55D6:
    /* 000055d6   4  pea (ffffffce,A5) */
    c->pc = RC_ADDR(0x000055d6u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x32u));

L_55DA:
    /* 000055da   4  jsr (ffff82d2,A4) */
    c->pc = RC_ADDR(0x000055dau);
    rc_step(c, m, 18);
    /* vector 120 */
    rc_push32(c, m, RC_ADDR(0x000055deu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d28u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00020db6u);
    return;

L_55DE:
    /* 000055de   4  lea (12,A7),A7 */
    c->pc = RC_ADDR(0x000055deu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x12u);

L_55E2:
    /* 000055e2   4  move.w (c,A5),-(A7) */
    c->pc = RC_ADDR(0x000055e2u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_55E6:
    /* 000055e6   4  move.w (a,A5),-(A7) */
    c->pc = RC_ADDR(0x000055e6u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_55EA:
    /* 000055ea   4  move.w (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000055eau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_55EE:
    /* 000055ee   4  pea (ffffffce,A5) */
    c->pc = RC_ADDR(0x000055eeu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x32u));

L_55F2:
    /* 000055f2   4  jsr (00004e2e) */
    c->pc = RC_ADDR(0x000055f2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000055f6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00004e2eu);
    return;

L_55F6:
    /* 000055f6   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x000055f6u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_55FA:
    /* 000055fa   2  unlk A5 */
    c->pc = RC_ADDR(0x000055fau);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_55FC:
    /* 000055fc   2  rts */
    c->pc = RC_ADDR(0x000055fcu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
