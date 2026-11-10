/* fn_000043b8 - 168 byte(s), 48 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000043b8(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000043b8u): goto L_43B8;
    case RC_ADDR(0x000043bcu): goto L_43BC;
    case RC_ADDR(0x000043c0u): goto L_43C0;
    case RC_ADDR(0x000043c2u): goto L_43C2;
    case RC_ADDR(0x000043c6u): goto L_43C6;
    case RC_ADDR(0x000043cau): goto L_43CA;
    case RC_ADDR(0x000043ccu): goto L_43CC;
    case RC_ADDR(0x000043ceu): goto L_43CE;
    case RC_ADDR(0x000043d0u): goto L_43D0;
    case RC_ADDR(0x000043d6u): goto L_43D6;
    case RC_ADDR(0x000043dau): goto L_43DA;
    case RC_ADDR(0x000043deu): goto L_43DE;
    case RC_ADDR(0x000043e0u): goto L_43E0;
    case RC_ADDR(0x000043e2u): goto L_43E2;
    case RC_ADDR(0x000043e4u): goto L_43E4;
    case RC_ADDR(0x000043eau): goto L_43EA;
    case RC_ADDR(0x000043eeu): goto L_43EE;
    case RC_ADDR(0x000043f2u): goto L_43F2;
    case RC_ADDR(0x000043f6u): goto L_43F6;
    case RC_ADDR(0x000043fau): goto L_43FA;
    case RC_ADDR(0x000043feu): goto L_43FE;
    case RC_ADDR(0x00004402u): goto L_4402;
    case RC_ADDR(0x00004406u): goto L_4406;
    case RC_ADDR(0x0000440au): goto L_440A;
    case RC_ADDR(0x0000440eu): goto L_440E;
    case RC_ADDR(0x00004412u): goto L_4412;
    case RC_ADDR(0x00004414u): goto L_4414;
    case RC_ADDR(0x00004418u): goto L_4418;
    case RC_ADDR(0x0000441eu): goto L_441E;
    case RC_ADDR(0x00004422u): goto L_4422;
    case RC_ADDR(0x00004426u): goto L_4426;
    case RC_ADDR(0x0000442au): goto L_442A;
    case RC_ADDR(0x0000442cu): goto L_442C;
    case RC_ADDR(0x00004430u): goto L_4430;
    case RC_ADDR(0x00004434u): goto L_4434;
    case RC_ADDR(0x00004436u): goto L_4436;
    case RC_ADDR(0x0000443au): goto L_443A;
    case RC_ADDR(0x0000443eu): goto L_443E;
    case RC_ADDR(0x00004440u): goto L_4440;
    case RC_ADDR(0x00004444u): goto L_4444;
    case RC_ADDR(0x00004448u): goto L_4448;
    case RC_ADDR(0x0000444cu): goto L_444C;
    case RC_ADDR(0x0000444eu): goto L_444E;
    case RC_ADDR(0x00004452u): goto L_4452;
    case RC_ADDR(0x00004456u): goto L_4456;
    case RC_ADDR(0x00004458u): goto L_4458;
    case RC_ADDR(0x0000445cu): goto L_445C;
    case RC_ADDR(0x0000445eu): goto L_445E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_43B8:
    /* 000043b8   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x000043b8u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_43BC:
    /* 000043bc   4  tst.w (ffff8400,A4) */
    c->pc = RC_ADDR(0x000043bcu);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c00u));
    rc_set_nzvc(c, t0, RC_W);

L_43C0:
    /* 000043c0   2  bne 00004418 */
    c->pc = RC_ADDR(0x000043c0u);
    if (rc_cond(c, 6)) goto L_4418;

L_43C2:
    /* 000043c2   4  move.w #e9,-(A7) */
    c->pc = RC_ADDR(0x000043c2u);
    t0 = 0x000000e9u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_43C6:
    /* 000043c6   4  jsr (ffff8086,A4) */
    c->pc = RC_ADDR(0x000043c6u);
    /* vector 22 */
    rc_push32(c, m, RC_ADDR(0x000043cau));
    rc_depth++;
    c->pc = RC_ADDR(0x0000711cu);
    return;

L_43CA:
    /* 000043ca   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000043cau);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_43CC:
    /* 000043cc   2  tst.w D0 */
    c->pc = RC_ADDR(0x000043ccu);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_43CE:
    /* 000043ce   2  beq 00004418 */
    c->pc = RC_ADDR(0x000043ceu);
    if (rc_cond(c, 7)) goto L_4418;

L_43D0:
    /* 000043d0   6  move.w #1,(ffff8400,A4) */
    c->pc = RC_ADDR(0x000043d0u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7c00u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_43D6:
    /* 000043d6   4  move.w #ea,-(A7) */
    c->pc = RC_ADDR(0x000043d6u);
    t0 = 0x000000eau;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_43DA:
    /* 000043da   4  jsr (ffff8086,A4) */
    c->pc = RC_ADDR(0x000043dau);
    /* vector 22 */
    rc_push32(c, m, RC_ADDR(0x000043deu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000711cu);
    return;

L_43DE:
    /* 000043de   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000043deu);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_43E0:
    /* 000043e0   2  tst.w D0 */
    c->pc = RC_ADDR(0x000043e0u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_43E2:
    /* 000043e2   2  bne 000043ea */
    c->pc = RC_ADDR(0x000043e2u);
    if (rc_cond(c, 6)) goto L_43EA;

L_43E4:
    /* 000043e4   6  move.w #1,(ffff853e,A4) */
    c->pc = RC_ADDR(0x000043e4u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7ac2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_43EA:
    /* 000043ea   4  jsr (ffff821e,A4) */
    c->pc = RC_ADDR(0x000043eau);
    /* vector 90 */
    rc_push32(c, m, RC_ADDR(0x000043eeu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d778u);
    return;

L_43EE:
    /* 000043ee   4  jsr (ffff8260,A4) */
    c->pc = RC_ADDR(0x000043eeu);
    /* vector 101 */
    rc_push32(c, m, RC_ADDR(0x000043f2u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f27eu);
    return;

L_43F2:
    /* 000043f2   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x000043f2u);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_43F6:
    /* 000043f6   4  pea (00004469) */
    c->pc = RC_ADDR(0x000043f6u);
    rc_push32(c, m, RC_ADDR(0x00004469u));

L_43FA:
    /* 000043fa   4  pea (00004460) */
    c->pc = RC_ADDR(0x000043fau);
    rc_push32(c, m, RC_ADDR(0x00004460u));

L_43FE:
    /* 000043fe   4  jsr (ffff800e,A4) */
    c->pc = RC_ADDR(0x000043feu);
    /* vector 2 */
    rc_push32(c, m, RC_ADDR(0x00004402u));
    rc_depth++;
    c->pc = RC_ADDR(0x000002f4u);
    return;

L_4402:
    /* 00004402   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00004402u);
    c->a[7] = (c->a[7] + 0xau);

L_4406:
    /* 00004406   4  move.w #5a,-(A7) */
    c->pc = RC_ADDR(0x00004406u);
    t0 = 0x0000005au;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_440A:
    /* 0000440a   4  pea (00004474) */
    c->pc = RC_ADDR(0x0000440au);
    rc_push32(c, m, RC_ADDR(0x00004474u));

L_440E:
    /* 0000440e   4  jsr (00000b62) */
    c->pc = RC_ADDR(0x0000440eu);
    rc_push32(c, m, RC_ADDR(0x00004412u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000b62u);
    return;

L_4412:
    /* 00004412   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00004412u);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_4414:
    /* 00004414   4  jsr (00009110) */
    c->pc = RC_ADDR(0x00004414u);
    rc_push32(c, m, RC_ADDR(0x00004418u));
    rc_depth++;
    c->pc = RC_ADDR(0x00009110u);
    return;

L_4418:
    /* 00004418   6  move.w #1,(ffffefe6,A4) */
    c->pc = RC_ADDR(0x00004418u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x101au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_441E:
    /* 0000441e   4  jsr (00003610) */
    c->pc = RC_ADDR(0x0000441eu);
    rc_push32(c, m, RC_ADDR(0x00004422u));
    rc_depth++;
    c->pc = RC_ADDR(0x00003610u);
    return;

L_4422:
    /* 00004422   4  pea (0000447f) */
    c->pc = RC_ADDR(0x00004422u);
    rc_push32(c, m, RC_ADDR(0x0000447fu));

L_4426:
    /* 00004426   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x00004426u);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x0000442au));
    rc_depth++;
    c->pc = RC_ADDR(0x000202c4u);
    return;

L_442A:
    /* 0000442a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000442au);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_442C:
    /* 0000442c   4  pea (00004488) */
    c->pc = RC_ADDR(0x0000442cu);
    rc_push32(c, m, RC_ADDR(0x00004488u));

L_4430:
    /* 00004430   4  jsr (ffff8230,A4) */
    c->pc = RC_ADDR(0x00004430u);
    /* vector 93 */
    rc_push32(c, m, RC_ADDR(0x00004434u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001de7au);
    return;

L_4434:
    /* 00004434   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00004434u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_4436:
    /* 00004436   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00004436u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_443A:
    /* 0000443a   4  tst.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x0000443au);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_L);

L_443E:
    /* 0000443e   2  beq 0000444e */
    c->pc = RC_ADDR(0x0000443eu);
    if (rc_cond(c, 7)) goto L_444E;

L_4440:
    /* 00004440   4  pea (00003b1e) */
    c->pc = RC_ADDR(0x00004440u);
    rc_push32(c, m, RC_ADDR(0x00003b1eu));

L_4444:
    /* 00004444   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00004444u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4448:
    /* 00004448   4  jsr (ffff81fa,A4) */
    c->pc = RC_ADDR(0x00004448u);
    /* vector 84 */
    rc_push32(c, m, RC_ADDR(0x0000444cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d2c6u);
    return;

L_444C:
    /* 0000444c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000444cu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_444E:
    /* 0000444e   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0000444eu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4452:
    /* 00004452   4  jsr (ffff825a,A4) */
    c->pc = RC_ADDR(0x00004452u);
    /* vector 100 */
    rc_push32(c, m, RC_ADDR(0x00004456u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f236u);
    return;

L_4456:
    /* 00004456   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00004456u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_4458:
    /* 00004458   4  jsr (ffff8284,A4) */
    c->pc = RC_ADDR(0x00004458u);
    /* vector 107 */
    rc_push32(c, m, RC_ADDR(0x0000445cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00020266u);
    return;

L_445C:
    /* 0000445c   2  unlk A5 */
    c->pc = RC_ADDR(0x0000445cu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_445E:
    /* 0000445e   2  rts */
    c->pc = RC_ADDR(0x0000445eu);
    rc_ret(c, m);
    return;

}
