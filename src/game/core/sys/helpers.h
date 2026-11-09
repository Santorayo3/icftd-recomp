/* Small helpers of the original engine, ported one for one.
 *
 * Every function here was executed by the differential harness (rcmp) on a fixture and the
 * result checked against this code; the fixture lives in ref\fixtures under the original's
 * address.  The "PORTED:" tag is what tools\coverage.ps1 counts.
 */
#ifndef ICFTD_SYS_HELPERS_H
#define ICFTD_SYS_HELPERS_H

#include "../types.h"

s16 sys_abs16(s16 v);
u32 sys_strlen(const char *s);
char *sys_strcpy(char *dst, const char *src);
void *sys_memset(void *dst, u16 count, u8 value);

#endif /* ICFTD_SYS_HELPERS_H */
