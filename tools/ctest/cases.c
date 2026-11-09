/* One adapter per ported function.
 *
 * Each adapter is the proof of the calling convention: it reads the arguments exactly where
 * the original reads them (stack offsets relative to A7), calls the C port with typed
 * arguments, and writes the results back where the original writes them. If an adapter
 * cannot be written without guessing, the port is not structurally faithful yet and does not
 * belong here.
 */
#include <stdio.h>
#include <string.h>

#include "ctest.h"
#include "../../src/game/core/sys/helpers.h"

/* PORTED: 0001a47c - s16 abs16(s16); the argument is a word at SP+4, the result is D0.w.
 * The original negates the argument *in place* (`neg.w (8,A5)`), so a negative argument
 * leaves the caller's word changed; the randomised diff caught that, the pinned case did not
 * (its argument is 0x8000, which neg.w leaves alone). */
int case_0001a47c(void)
{
    u32 slot = fx_reg(15) + 4;
    s16 arg = (s16)fx_read16(slot);
    s16 result = sys_abs16(arg);

    fx_expect("d0");
    if (result != arg) fx_write16(slot, (u16)result);
    fx_set_d0_word((u16)result);
    return 0;
}

/* PORTED: 00020820 - u32 strlen(const char *); argument is a long at SP+4, result in D0. */
int case_00020820(void)
{
    u32 src = fx_read32(fx_reg(15) + 4);
    fx_expect("d0");
    fx_set_d0_long(sys_strlen((const char *)fx_base() + src));
    return 0;
}

/* PORTED: 00020810 - char *strcpy(char *dst, const char *src); arguments at SP+4/+8,
 * result (the destination) in D0. */
int case_00020810(void)
{
    u32 dst = fx_read32(fx_reg(15) + 4);
    u32 src = fx_read32(fx_reg(15) + 8);
    u8 *base = fx_base();
    u32 len = sys_strlen((const char *)base + src);

    fx_expect("d0");
    sys_strcpy((char *)base + dst, (const char *)base + src);
    fx_mark_written(dst, len + 1);
    fx_set_d0_long(dst);
    return 0;
}

/* PORTED: 000208a4 - memset. The original branches into the dbf first, so it writes exactly
 * `counter` bytes (word at SP+8) of the byte in the low half of the word at SP+10 (the two
 * words are loaded with one movem.w, so the value is the *low* byte of the second word);
 * nothing is returned. */
int case_000208a4(void)
{
    u32 dst = fx_read32(fx_reg(15) + 4);
    u16 count = fx_read16(fx_reg(15) + 8);
    u8 value = (u8)fx_read16(fx_reg(15) + 10);
    u8 *base = fx_base();

    fx_expect("");
    sys_memset(base + dst, count, value);
    fx_mark_written(dst, count);
    return 0;
}

static const struct { const char *name; fx_case fn; } g_cases[] =
{
    { "0001a47c", case_0001a47c },
    { "00020810", case_00020810 },
    { "00020820", case_00020820 },
    { "000208a4", case_000208a4 },
};

fx_case fx_find_case(const char *name)
{
    unsigned i;
    for (i = 0; i < sizeof g_cases / sizeof g_cases[0]; i++)
        if (strcmp(g_cases[i].name, name) == 0) return g_cases[i].fn;
    return NULL;
}

void fx_list_cases(void)
{
    unsigned i;
    for (i = 0; i < sizeof g_cases / sizeof g_cases[0]; i++)
        printf("%s\n", g_cases[i].name);
}
