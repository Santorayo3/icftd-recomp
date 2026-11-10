/* fn_00014906 - 214 byte(s), 56 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00014906(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00014906u): goto L_14906;
    case RC_ADDR(0x0001490au): goto L_1490A;
    case RC_ADDR(0x0001490eu): goto L_1490E;
    case RC_ADDR(0x00014910u): goto L_14910;
    case RC_ADDR(0x00014914u): goto L_14914;
    case RC_ADDR(0x00014916u): goto L_14916;
    case RC_ADDR(0x0001491cu): goto L_1491C;
    case RC_ADDR(0x0001491eu): goto L_1491E;
    case RC_ADDR(0x00014922u): goto L_14922;
    case RC_ADDR(0x00014924u): goto L_14924;
    case RC_ADDR(0x0001492au): goto L_1492A;
    case RC_ADDR(0x0001492eu): goto L_1492E;
    case RC_ADDR(0x00014930u): goto L_14930;
    case RC_ADDR(0x00014936u): goto L_14936;
    case RC_ADDR(0x00014938u): goto L_14938;
    case RC_ADDR(0x0001493eu): goto L_1493E;
    case RC_ADDR(0x00014940u): goto L_14940;
    case RC_ADDR(0x00014944u): goto L_14944;
    case RC_ADDR(0x00014948u): goto L_14948;
    case RC_ADDR(0x0001494cu): goto L_1494C;
    case RC_ADDR(0x00014952u): goto L_14952;
    case RC_ADDR(0x00014954u): goto L_14954;
    case RC_ADDR(0x0001495au): goto L_1495A;
    case RC_ADDR(0x0001495cu): goto L_1495C;
    case RC_ADDR(0x00014960u): goto L_14960;
    case RC_ADDR(0x00014964u): goto L_14964;
    case RC_ADDR(0x00014968u): goto L_14968;
    case RC_ADDR(0x0001496au): goto L_1496A;
    case RC_ADDR(0x0001496eu): goto L_1496E;
    case RC_ADDR(0x00014972u): goto L_14972;
    case RC_ADDR(0x00014976u): goto L_14976;
    case RC_ADDR(0x0001497au): goto L_1497A;
    case RC_ADDR(0x0001497eu): goto L_1497E;
    case RC_ADDR(0x00014982u): goto L_14982;
    case RC_ADDR(0x00014988u): goto L_14988;
    case RC_ADDR(0x0001498au): goto L_1498A;
    case RC_ADDR(0x00014990u): goto L_14990;
    case RC_ADDR(0x00014996u): goto L_14996;
    case RC_ADDR(0x00014998u): goto L_14998;
    case RC_ADDR(0x0001499eu): goto L_1499E;
    case RC_ADDR(0x000149a4u): goto L_149A4;
    case RC_ADDR(0x000149a6u): goto L_149A6;
    case RC_ADDR(0x000149acu): goto L_149AC;
    case RC_ADDR(0x000149b2u): goto L_149B2;
    case RC_ADDR(0x000149b4u): goto L_149B4;
    case RC_ADDR(0x000149bau): goto L_149BA;
    case RC_ADDR(0x000149beu): goto L_149BE;
    case RC_ADDR(0x000149c2u): goto L_149C2;
    case RC_ADDR(0x000149c6u): goto L_149C6;
    case RC_ADDR(0x000149c8u): goto L_149C8;
    case RC_ADDR(0x000149ccu): goto L_149CC;
    case RC_ADDR(0x000149d0u): goto L_149D0;
    case RC_ADDR(0x000149d2u): goto L_149D2;
    case RC_ADDR(0x000149d6u): goto L_149D6;
    case RC_ADDR(0x000149d8u): goto L_149D8;
    case RC_ADDR(0x000149dau): goto L_149DA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_14906:
    /* 00014906   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00014906u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1490A:
    /* 0001490a   4  tst.w (df2,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001490au);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdf2u));
    rc_set_nzvc(c, t0, RC_W);

L_1490E:
    /* 0001490e   2  bne 00014916 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001490eu);
    if (rc_cond(c, 6)) goto L_14916;

L_14910:
    /* 00014910   4  tst.w (df4,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00014910u);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdf4u));
    rc_set_nzvc(c, t0, RC_W);

L_14914:
    /* 00014914   2  beq 00014924 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00014914u);
    if (rc_cond(c, 7)) goto L_14924;

L_14916:
    /* 00014916   6  cmpi.w #a,(116c,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00014916u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x116cu));
    rc_cmp(c, RC_W, t0, 0x0000000au);

L_1491C:
    /* 0001491c   2  bge 00014922 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001491cu);
    if (rc_cond(c, 12)) goto L_14922;

L_1491E:
    /* 0001491e   4  addq.w #1,(116c,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001491eu);
    t3 = (c->a[4] + 0x116cu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_14922:
    /* 00014922   2  bra 0001492a */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00014922u);
    goto L_1492A;

L_14924:
    /* 00014924   6  move.w #1,(116c,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00014924u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x116cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1492A:
    /* 0001492a   4  tst.w (8,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001492au);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_1492E:
    /* 0001492e   2  beq 0001496a */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001492eu);
    if (rc_cond(c, 7)) goto L_1496A;

L_14930:
    /* 00014930   6  cmpi.w #a,(116a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00014930u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x116au));
    rc_cmp(c, RC_W, t0, 0x0000000au);

L_14936:
    /* 00014936   2  beq 00014940 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00014936u);
    if (rc_cond(c, 7)) goto L_14940;

L_14938:
    /* 00014938   6  cmpi.w #b5,(116a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00014938u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x116au));
    rc_cmp(c, RC_W, t0, 0x000000b5u);

L_1493E:
    /* 0001493e   2  bne 0001494c */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001493eu);
    if (rc_cond(c, 6)) goto L_1494C;

L_14940:
    /* 00014940   4  move.w (df2,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00014940u);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdf2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14944:
    /* 00014944   4  mulu.w (116c,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00014944u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x116cu));
    rc_mulu(c, 0, t0);

L_14948:
    /* 00014948   4  add.w D0,(1168,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00014948u);
    t3 = (c->a[4] + 0x1168u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1494C:
    /* 0001494c   6  cmpi.w #f,(1168,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001494cu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1168u));
    rc_cmp(c, RC_W, t0, 0x0000000fu);

L_14952:
    /* 00014952   2  beq 0001495c */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00014952u);
    if (rc_cond(c, 7)) goto L_1495C;

L_14954:
    /* 00014954   6  cmpi.w #126,(1168,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00014954u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1168u));
    rc_cmp(c, RC_W, t0, 0x00000126u);

L_1495A:
    /* 0001495a   2  bne 00014968 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001495au);
    if (rc_cond(c, 6)) goto L_14968;

L_1495C:
    /* 0001495c   4  move.w (df4,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001495cu);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdf4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14960:
    /* 00014960   4  mulu.w (116c,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00014960u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x116cu));
    rc_mulu(c, 0, t0);

L_14964:
    /* 00014964   4  add.w D0,(116a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00014964u);
    t3 = (c->a[4] + 0x116au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_14968:
    /* 00014968   2  bra 00014982 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00014968u);
    goto L_14982;

L_1496A:
    /* 0001496a   4  move.w (df2,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001496au);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdf2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1496E:
    /* 0001496e   4  mulu.w (116c,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001496eu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x116cu));
    rc_mulu(c, 0, t0);

L_14972:
    /* 00014972   4  add.w D0,(1168,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00014972u);
    t3 = (c->a[4] + 0x1168u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_14976:
    /* 00014976   4  move.w (df4,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00014976u);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdf4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1497A:
    /* 0001497a   4  mulu.w (116c,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001497au);
    t0 = rc_rd16(c, m, (c->a[4] + 0x116cu));
    rc_mulu(c, 0, t0);

L_1497E:
    /* 0001497e   4  add.w D0,(116a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001497eu);
    t3 = (c->a[4] + 0x116au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_14982:
    /* 00014982   6  cmpi.w #f,(1168,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00014982u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1168u));
    rc_cmp(c, RC_W, t0, 0x0000000fu);

L_14988:
    /* 00014988   2  bge 00014990 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00014988u);
    if (rc_cond(c, 12)) goto L_14990;

L_1498A:
    /* 0001498a   6  move.w #f,(1168,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001498au);
    t0 = 0x0000000fu;
    rc_wr16(c, m, (c->a[4] + 0x1168u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14990:
    /* 00014990   6  cmpi.w #126,(1168,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00014990u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1168u));
    rc_cmp(c, RC_W, t0, 0x00000126u);

L_14996:
    /* 00014996   2  ble 0001499e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00014996u);
    if (rc_cond(c, 15)) goto L_1499E;

L_14998:
    /* 00014998   6  move.w #126,(1168,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00014998u);
    t0 = 0x00000126u;
    rc_wr16(c, m, (c->a[4] + 0x1168u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1499E:
    /* 0001499e   6  cmpi.w #a,(116a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001499eu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x116au));
    rc_cmp(c, RC_W, t0, 0x0000000au);

L_149A4:
    /* 000149a4   2  bge 000149ac */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000149a4u);
    if (rc_cond(c, 12)) goto L_149AC;

L_149A6:
    /* 000149a6   6  move.w #a,(116a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000149a6u);
    t0 = 0x0000000au;
    rc_wr16(c, m, (c->a[4] + 0x116au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_149AC:
    /* 000149ac   6  cmpi.w #b5,(116a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000149acu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x116au));
    rc_cmp(c, RC_W, t0, 0x000000b5u);

L_149B2:
    /* 000149b2   2  ble 000149ba */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000149b2u);
    if (rc_cond(c, 15)) goto L_149BA;

L_149B4:
    /* 000149b4   6  move.w #b5,(116a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000149b4u);
    t0 = 0x000000b5u;
    rc_wr16(c, m, (c->a[4] + 0x116au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_149BA:
    /* 000149ba   4  move.l (118e,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000149bau);
    t0 = rc_rd32(c, m, (c->a[4] + 0x118eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_149BE:
    /* 000149be   4  move.w (116a,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000149beu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x116au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_149C2:
    /* 000149c2   4  add.w (fffff280,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000149c2u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd80u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_149C6:
    /* 000149c6   2  move.w D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000149c6u);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_149C8:
    /* 000149c8   4  move.w (1168,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000149c8u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1168u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_149CC:
    /* 000149cc   4  sub.w (fffff27e,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000149ccu);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd82u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_149D0:
    /* 000149d0   2  move.w D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000149d0u);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_149D2:
    /* 000149d2   4  jsr (ffff8158,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000149d2u);
    /* vector 57 */
    rc_push32(c, m, RC_ADDR(0x000149d6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00011208u);
    return;

L_149D6:
    /* 000149d6   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000149d6u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_149D8:
    /* 000149d8   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000149d8u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_149DA:
    /* 000149da   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000149dau);
    rc_ret(c, m);
    return;

}
