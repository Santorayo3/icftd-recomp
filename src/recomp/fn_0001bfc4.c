/* fn_0001bfc4 - 282 byte(s), 75 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001bfc4(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001bfc4u): goto L_1BFC4;
    case RC_ADDR(0x0001bfc8u): goto L_1BFC8;
    case RC_ADDR(0x0001bfccu): goto L_1BFCC;
    case RC_ADDR(0x0001bfd0u): goto L_1BFD0;
    case RC_ADDR(0x0001bfd2u): goto L_1BFD2;
    case RC_ADDR(0x0001bfd6u): goto L_1BFD6;
    case RC_ADDR(0x0001bfdau): goto L_1BFDA;
    case RC_ADDR(0x0001bfdcu): goto L_1BFDC;
    case RC_ADDR(0x0001bfe0u): goto L_1BFE0;
    case RC_ADDR(0x0001bfe4u): goto L_1BFE4;
    case RC_ADDR(0x0001bfe6u): goto L_1BFE6;
    case RC_ADDR(0x0001bfeau): goto L_1BFEA;
    case RC_ADDR(0x0001bfeeu): goto L_1BFEE;
    case RC_ADDR(0x0001bff2u): goto L_1BFF2;
    case RC_ADDR(0x0001bff6u): goto L_1BFF6;
    case RC_ADDR(0x0001bffau): goto L_1BFFA;
    case RC_ADDR(0x0001bffcu): goto L_1BFFC;
    case RC_ADDR(0x0001c000u): goto L_1C000;
    case RC_ADDR(0x0001c004u): goto L_1C004;
    case RC_ADDR(0x0001c008u): goto L_1C008;
    case RC_ADDR(0x0001c00cu): goto L_1C00C;
    case RC_ADDR(0x0001c010u): goto L_1C010;
    case RC_ADDR(0x0001c012u): goto L_1C012;
    case RC_ADDR(0x0001c016u): goto L_1C016;
    case RC_ADDR(0x0001c01au): goto L_1C01A;
    case RC_ADDR(0x0001c01eu): goto L_1C01E;
    case RC_ADDR(0x0001c022u): goto L_1C022;
    case RC_ADDR(0x0001c026u): goto L_1C026;
    case RC_ADDR(0x0001c028u): goto L_1C028;
    case RC_ADDR(0x0001c02cu): goto L_1C02C;
    case RC_ADDR(0x0001c030u): goto L_1C030;
    case RC_ADDR(0x0001c034u): goto L_1C034;
    case RC_ADDR(0x0001c038u): goto L_1C038;
    case RC_ADDR(0x0001c03cu): goto L_1C03C;
    case RC_ADDR(0x0001c040u): goto L_1C040;
    case RC_ADDR(0x0001c044u): goto L_1C044;
    case RC_ADDR(0x0001c048u): goto L_1C048;
    case RC_ADDR(0x0001c04cu): goto L_1C04C;
    case RC_ADDR(0x0001c050u): goto L_1C050;
    case RC_ADDR(0x0001c054u): goto L_1C054;
    case RC_ADDR(0x0001c058u): goto L_1C058;
    case RC_ADDR(0x0001c05cu): goto L_1C05C;
    case RC_ADDR(0x0001c060u): goto L_1C060;
    case RC_ADDR(0x0001c064u): goto L_1C064;
    case RC_ADDR(0x0001c068u): goto L_1C068;
    case RC_ADDR(0x0001c06cu): goto L_1C06C;
    case RC_ADDR(0x0001c070u): goto L_1C070;
    case RC_ADDR(0x0001c074u): goto L_1C074;
    case RC_ADDR(0x0001c078u): goto L_1C078;
    case RC_ADDR(0x0001c07cu): goto L_1C07C;
    case RC_ADDR(0x0001c080u): goto L_1C080;
    case RC_ADDR(0x0001c084u): goto L_1C084;
    case RC_ADDR(0x0001c088u): goto L_1C088;
    case RC_ADDR(0x0001c08cu): goto L_1C08C;
    case RC_ADDR(0x0001c090u): goto L_1C090;
    case RC_ADDR(0x0001c094u): goto L_1C094;
    case RC_ADDR(0x0001c098u): goto L_1C098;
    case RC_ADDR(0x0001c09cu): goto L_1C09C;
    case RC_ADDR(0x0001c0a0u): goto L_1C0A0;
    case RC_ADDR(0x0001c0a4u): goto L_1C0A4;
    case RC_ADDR(0x0001c0a8u): goto L_1C0A8;
    case RC_ADDR(0x0001c0aau): goto L_1C0AA;
    case RC_ADDR(0x0001c0aeu): goto L_1C0AE;
    case RC_ADDR(0x0001c0b2u): goto L_1C0B2;
    case RC_ADDR(0x0001c0b6u): goto L_1C0B6;
    case RC_ADDR(0x0001c0bau): goto L_1C0BA;
    case RC_ADDR(0x0001c0beu): goto L_1C0BE;
    case RC_ADDR(0x0001c0c2u): goto L_1C0C2;
    case RC_ADDR(0x0001c0c6u): goto L_1C0C6;
    case RC_ADDR(0x0001c0cau): goto L_1C0CA;
    case RC_ADDR(0x0001c0ceu): goto L_1C0CE;
    case RC_ADDR(0x0001c0d2u): goto L_1C0D2;
    case RC_ADDR(0x0001c0d6u): goto L_1C0D6;
    case RC_ADDR(0x0001c0dau): goto L_1C0DA;
    case RC_ADDR(0x0001c0dcu): goto L_1C0DC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1BFC4:
    /* 0001bfc4   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001bfc4u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1BFC8:
    /* 0001bfc8   4  pea (0001c0de) */
    c->pc = RC_ADDR(0x0001bfc8u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001c0deu));

L_1BFCC:
    /* 0001bfcc   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x0001bfccu);
    rc_step(c, m);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x0001bfd0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ce0u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000202c4u);
    return;

L_1BFD0:
    /* 0001bfd0   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001bfd0u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1BFD2:
    /* 0001bfd2   4  pea (0001c0ec) */
    c->pc = RC_ADDR(0x0001bfd2u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001c0ecu));

L_1BFD6:
    /* 0001bfd6   4  jsr (00016af2) */
    c->pc = RC_ADDR(0x0001bfd6u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001bfdau));
    rc_depth++;
    c->pc = RC_ADDR(0x00016af2u);
    return;

L_1BFDA:
    /* 0001bfda   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001bfdau);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1BFDC:
    /* 0001bfdc   4  move.l D0,(2388,A4) */
    c->pc = RC_ADDR(0x0001bfdcu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x2388u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BFE0:
    /* 0001bfe0   4  pea (2344,A4) */
    c->pc = RC_ADDR(0x0001bfe0u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] + 0x2344u));

L_1BFE4:
    /* 0001bfe4   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0001bfe4u);
    rc_step(c, m);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1BFE6:
    /* 0001bfe6   4  pea (0001c0f1) */
    c->pc = RC_ADDR(0x0001bfe6u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001c0f1u));

L_1BFEA:
    /* 0001bfea   4  jsr (00016a40) */
    c->pc = RC_ADDR(0x0001bfeau);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001bfeeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00016a40u);
    return;

L_1BFEE:
    /* 0001bfee   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001bfeeu);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_1BFF2:
    /* 0001bff2   4  move.l D0,(238c,A4) */
    c->pc = RC_ADDR(0x0001bff2u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x238cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BFF6:
    /* 0001bff6   4  pea (2304,A4) */
    c->pc = RC_ADDR(0x0001bff6u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] + 0x2304u));

L_1BFFA:
    /* 0001bffa   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0001bffau);
    rc_step(c, m);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1BFFC:
    /* 0001bffc   4  pea (0001c0f6) */
    c->pc = RC_ADDR(0x0001bffcu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001c0f6u));

L_1C000:
    /* 0001c000   4  jsr (00016a40) */
    c->pc = RC_ADDR(0x0001c000u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001c004u));
    rc_depth++;
    c->pc = RC_ADDR(0x00016a40u);
    return;

L_1C004:
    /* 0001c004   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001c004u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_1C008:
    /* 0001c008   4  move.l D0,(2296,A4) */
    c->pc = RC_ADDR(0x0001c008u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x2296u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C00C:
    /* 0001c00c   4  pea (2304,A4) */
    c->pc = RC_ADDR(0x0001c00cu);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] + 0x2304u));

L_1C010:
    /* 0001c010   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0001c010u);
    rc_step(c, m);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1C012:
    /* 0001c012   4  pea (0001c0fc) */
    c->pc = RC_ADDR(0x0001c012u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001c0fcu));

L_1C016:
    /* 0001c016   4  jsr (00016a40) */
    c->pc = RC_ADDR(0x0001c016u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001c01au));
    rc_depth++;
    c->pc = RC_ADDR(0x00016a40u);
    return;

L_1C01A:
    /* 0001c01a   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001c01au);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_1C01E:
    /* 0001c01e   4  move.l D0,(2292,A4) */
    c->pc = RC_ADDR(0x0001c01eu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x2292u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C022:
    /* 0001c022   4  pea (22c4,A4) */
    c->pc = RC_ADDR(0x0001c022u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] + 0x22c4u));

L_1C026:
    /* 0001c026   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0001c026u);
    rc_step(c, m);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1C028:
    /* 0001c028   4  pea (0001c101) */
    c->pc = RC_ADDR(0x0001c028u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001c101u));

L_1C02C:
    /* 0001c02c   4  jsr (00016a40) */
    c->pc = RC_ADDR(0x0001c02cu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001c030u));
    rc_depth++;
    c->pc = RC_ADDR(0x00016a40u);
    return;

L_1C030:
    /* 0001c030   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001c030u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_1C034:
    /* 0001c034   4  move.l D0,(2384,A4) */
    c->pc = RC_ADDR(0x0001c034u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x2384u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C038:
    /* 0001c038   4  jsr (0001c7fc) */
    c->pc = RC_ADDR(0x0001c038u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001c03cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001c7fcu);
    return;

L_1C03C:
    /* 0001c03c   4  jsr (ffff8284,A4) */
    c->pc = RC_ADDR(0x0001c03cu);
    rc_step(c, m);
    /* vector 107 */
    rc_push32(c, m, RC_ADDR(0x0001c040u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cdau);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020266u);
    return;

L_1C040:
    /* 0001c040   4  jsr (0001c266) */
    c->pc = RC_ADDR(0x0001c040u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001c044u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001c266u);
    return;

L_1C044:
    /* 0001c044   4  jsr (0001c332) */
    c->pc = RC_ADDR(0x0001c044u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001c048u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001c332u);
    return;

L_1C048:
    /* 0001c048   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0001c048u);
    rc_step(c, m);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C04C:
    /* 0001c04c   4  pea (0001c112) */
    c->pc = RC_ADDR(0x0001c04cu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001c112u));

L_1C050:
    /* 0001c050   4  pea (0001c106) */
    c->pc = RC_ADDR(0x0001c050u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001c106u));

L_1C054:
    /* 0001c054   4  jsr (ffff800e,A4) */
    c->pc = RC_ADDR(0x0001c054u);
    rc_step(c, m);
    /* vector 2 */
    rc_push32(c, m, RC_ADDR(0x0001c058u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021a64u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000002f4u);
    return;

L_1C058:
    /* 0001c058   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001c058u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xau);

L_1C05C:
    /* 0001c05c   4  pea (23a6,A4) */
    c->pc = RC_ADDR(0x0001c05cu);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] + 0x23a6u));

L_1C060:
    /* 0001c060   4  pea (23a0,A4) */
    c->pc = RC_ADDR(0x0001c060u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] + 0x23a0u));

L_1C064:
    /* 0001c064   4  pea (0001c11b) */
    c->pc = RC_ADDR(0x0001c064u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001c11bu));

L_1C068:
    /* 0001c068   4  jsr (ffff80b0,A4) */
    c->pc = RC_ADDR(0x0001c068u);
    rc_step(c, m);
    /* vector 29 */
    rc_push32(c, m, RC_ADDR(0x0001c06cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b06u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009984u);
    return;

L_1C06C:
    /* 0001c06c   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001c06cu);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_1C070:
    /* 0001c070   4  move.l D0,(2394,A4) */
    c->pc = RC_ADDR(0x0001c070u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x2394u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C074:
    /* 0001c074   4  pea (23aa,A4) */
    c->pc = RC_ADDR(0x0001c074u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] + 0x23aau));

L_1C078:
    /* 0001c078   4  pea (23a2,A4) */
    c->pc = RC_ADDR(0x0001c078u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] + 0x23a2u));

L_1C07C:
    /* 0001c07c   4  pea (0001c124) */
    c->pc = RC_ADDR(0x0001c07cu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001c124u));

L_1C080:
    /* 0001c080   4  jsr (ffff80b0,A4) */
    c->pc = RC_ADDR(0x0001c080u);
    rc_step(c, m);
    /* vector 29 */
    rc_push32(c, m, RC_ADDR(0x0001c084u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b06u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009984u);
    return;

L_1C084:
    /* 0001c084   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001c084u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_1C088:
    /* 0001c088   4  move.l D0,(2398,A4) */
    c->pc = RC_ADDR(0x0001c088u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x2398u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C08C:
    /* 0001c08c   4  pea (23ae,A4) */
    c->pc = RC_ADDR(0x0001c08cu);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] + 0x23aeu));

L_1C090:
    /* 0001c090   4  pea (23a4,A4) */
    c->pc = RC_ADDR(0x0001c090u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] + 0x23a4u));

L_1C094:
    /* 0001c094   4  pea (0001c12d) */
    c->pc = RC_ADDR(0x0001c094u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001c12du));

L_1C098:
    /* 0001c098   4  jsr (ffff80b0,A4) */
    c->pc = RC_ADDR(0x0001c098u);
    rc_step(c, m);
    /* vector 29 */
    rc_push32(c, m, RC_ADDR(0x0001c09cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b06u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009984u);
    return;

L_1C09C:
    /* 0001c09c   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001c09cu);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_1C0A0:
    /* 0001c0a0   4  move.l D0,(239c,A4) */
    c->pc = RC_ADDR(0x0001c0a0u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x239cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C0A4:
    /* 0001c0a4   4  move.w #40,-(A7) */
    c->pc = RC_ADDR(0x0001c0a4u);
    rc_step(c, m);
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C0A8:
    /* 0001c0a8   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0001c0a8u);
    rc_step(c, m);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1C0AA:
    /* 0001c0aa   4  move.l (23aa,A4),-(A7) */
    c->pc = RC_ADDR(0x0001c0aau);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x23aau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C0AE:
    /* 0001c0ae   4  move.w (23a2,A4),-(A7) */
    c->pc = RC_ADDR(0x0001c0aeu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x23a2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C0B2:
    /* 0001c0b2   4  move.l (2398,A4),-(A7) */
    c->pc = RC_ADDR(0x0001c0b2u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2398u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C0B6:
    /* 0001c0b6   4  jsr (ffff80b6,A4) */
    c->pc = RC_ADDR(0x0001c0b6u);
    rc_step(c, m);
    /* vector 30 */
    rc_push32(c, m, RC_ADDR(0x0001c0bau));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b0cu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009b60u);
    return;

L_1C0BA:
    /* 0001c0ba   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0001c0bau);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xeu);

L_1C0BE:
    /* 0001c0be   4  move.w #40,-(A7) */
    c->pc = RC_ADDR(0x0001c0beu);
    rc_step(c, m);
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C0C2:
    /* 0001c0c2   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0001c0c2u);
    rc_step(c, m);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C0C6:
    /* 0001c0c6   4  move.l (23aa,A4),-(A7) */
    c->pc = RC_ADDR(0x0001c0c6u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x23aau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C0CA:
    /* 0001c0ca   4  move.w (23a2,A4),-(A7) */
    c->pc = RC_ADDR(0x0001c0cau);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x23a2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C0CE:
    /* 0001c0ce   4  move.l (2398,A4),-(A7) */
    c->pc = RC_ADDR(0x0001c0ceu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2398u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C0D2:
    /* 0001c0d2   4  jsr (ffff80b6,A4) */
    c->pc = RC_ADDR(0x0001c0d2u);
    rc_step(c, m);
    /* vector 30 */
    rc_push32(c, m, RC_ADDR(0x0001c0d6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b0cu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009b60u);
    return;

L_1C0D6:
    /* 0001c0d6   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0001c0d6u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xeu);

L_1C0DA:
    /* 0001c0da   2  unlk A5 */
    c->pc = RC_ADDR(0x0001c0dau);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1C0DC:
    /* 0001c0dc   2  rts */
    c->pc = RC_ADDR(0x0001c0dcu);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
