/* Host-side test harness for ported functions.
 *
 * tools\port-diff.ps1 runs the *original* function in the 68000 interpreter (rcmp) and the
 * C port on the same binary fixture, then compares the two canonical dumps. A case in
 * cases.c is the adapter that turns "68k call with a stack argument" into "C call with a
 * typed argument" and writes the result back the way the original does - so the adapter is
 * also the documented proof of the calling convention.
 */
#ifndef ICFTD_CTEST_H
#define ICFTD_CTEST_H

typedef unsigned char  u8;
typedef unsigned short u16;
typedef unsigned long  u32;
typedef signed short   s16;
typedef signed long    s32;

/* fixture memory (16 MB, same flat space the interpreter uses) */
u8  *fx_base(void);
u8  fx_read8(u32 addr);
u16 fx_read16(u32 addr);
u32 fx_read32(u32 addr);
void fx_write8(u32 addr, u8 value);
void fx_write16(u32 addr, u16 value);
void fx_write32(u32 addr, u32 value);

/* tells the diff that [addr, addr+len) was changed through a plain pointer */
void fx_mark_written(u32 addr, u32 len);

/* CPU registers, D0..D7 = 0..7, A0..A7 = 8..15 */
u32 fx_reg(int index);
void fx_set_reg(int index, u32 value);
void fx_set_d0_word(u16 value);   /* what move.w ...,D0 does: only the low word changes */
void fx_set_d0_long(u32 value);

typedef int (*fx_case)(void);

/* Declares which results the case is answerable for: a comma list of d0..d7, a0..a7, mem.
 * Memory is always compared. Default is d0..d7 (the value-returning registers). */
void fx_expect(const char *what);

/* one adapter per ported function, keyed by the original address (8 hex digits) */
fx_case fx_find_case(const char *name);
void fx_list_cases(void);

int case_0001a47c(void);   /* sys_abs16 */
int case_00020810(void);   /* sys_strcpy */
int case_00020820(void);   /* sys_strlen */
int case_000208a4(void);   /* sys_memset */

#endif /* ICFTD_CTEST_H */
