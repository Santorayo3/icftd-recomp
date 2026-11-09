#include "helpers.h"

/* PORTED: 0001a47c (identical code at 00014dc0 and 00012132) - absolute value of a word.
 * The original negates in place with neg.w, so -32768 comes back as -32768; the cast is
 * deliberate and is what the fixture 0001a47c-neg.json pins down. */
/* PORTED: 00014dc0 - 22 bytes, byte-identical to 0001a47c (compared in dshell.img) */
/* PORTED: 00012132 - 22 bytes, byte-identical to 0001a47c (compared in dshell.img) */
s16 sys_abs16(s16 v)
{
    if (v < 0) v = (s16)(0u - (u16)v);
    return v;
}

/* PORTED: 00020820 - length up to but not including the terminator.
 * Fixture 00020820-strlen.json: "Hello" -> 5. */
u32 sys_strlen(const char *s)
{
    const char *p = s;
    while (*p != '\0') p++;
    return (u32)(p - s);
}

/* PORTED: 00020810 - copy including the terminator, return the destination. */
char *sys_strcpy(char *dst, const char *src)
{
    char *d = dst;
    char c;
    do
    {
        c = *src++;
        *d++ = c;
    } while (c != '\0');
    return dst;
}

/* PORTED: 000208a4 - memset. The original branches into its dbf first, so the word counter at
 * SP+8 is the exact byte count (fixture 000208a4-memset.json: count 4, value 0x41). */
void *sys_memset(void *dst, u16 count, u8 value)
{
    u8 *p = (u8 *)dst;
    while (count-- != 0) *p++ = value;
    return dst;
}
