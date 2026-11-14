/* The two development hooks declared in cpu.h. Null in the shipped build: an untranslated call is
 * then a reported build error, not a silent interpretation. */
#include "cpu.h"

void (*rc_interpreter)(cpu_t *c, rt_machine *m, u32 addr) = 0;
int  (*rc_stub_host)(cpu_t *c, rt_machine *m, int lib, s32 lvo) = 0;
int  rc_allow_unmodelled = 0;
void (*rc_coverHook)(unsigned index) = 0;
void (*rc_entryHook)(cpu_t *c, rt_machine *m, u32 pc) = 0;
jmp_buf *rc_abort = 0;
unsigned long rc_ops = 0;
unsigned long rc_opsLimit = 0;
int rc_depth = 0;
int rc_stopOnReturn = 0;
