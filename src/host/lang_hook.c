/* The language wiring: see lang_hook.h. */
#include <stdio.h>
#include <string.h>

#include "lang_hook.h"
#include "../recomp/fn_table.h"
#include "../runtime/config.h"
#include "../runtime/lang.h"
#include "lang_dump.h"
#include "seams.h"

void host_lang_load(void)
{
    const char *code = rt_config_get("GAME", "language");
    int on;

    rt_lang_scan();                    /* the folders the settings view offers, read once */
    on = (int)rt_lang_set(code);
    printf("language: %s%s\n", on ? rt_lang_code() : "en (the original's English)",
           code == 0 ? " - no [GAME] language entry" : "");
}

int host_lang_switch(rt_machine *m, const char *code)
{
    const char *want;
    int index;
    u32 on;

    if (code == 0) return 0;
    index = rt_lang_available_index(code);
    if (index < 0) return 0;                    /* not a language this run offers */
    want = rt_lang_available(index);
    if (rt_lang_code() != 0 && strcmp(rt_lang_code(), want) == 0) return 1;
    on = rt_lang_set(want);

    /* The machine's own copy of the catalog, the file the next start reads, and the code in force:
     * the view, the game and icftd.ini cannot disagree about it. rt_lang_set leaves the code
     * lower case, which is what the file is named. */
    rt_config_save_string("GAME", "language", rt_lang_code());
    if (m != 0) rt_lang_open(m);
    printf("language: %s\n", on ? rt_lang_code() : "en (the original's English)");
    return 1;
}

void host_lang_open(rt_machine *m)
{
    rt_lang_open(m);
}

int host_lang_on(void)
{
    return (int)rt_lang_on();
}

/* The engine's text routines, and the one of them that writes into the string it is given. Only
 * these take a string as one of their stack arguments. Any other function's argument may point at
 * a buffer that merely *contains* a catalogued line (the loader's destination did), and swapping
 * that would feed it the wrong buffer.
 *
 * `arg` is which argument the string is, `writable` asks for a copy the routine may write into:
 * the two page runners paginate their string in place (NULs at the page breaks) and then keep
 * walking it, so the caller has to see the German text as well - that is what swapping the
 * argument *before* the routine's own prologue does. */
static int lang_seam(u32 pc, int *arg, int *writable)
{
    const seam_set *s = seam_active();

    *arg = 0;
    *writable = 0;
    if (pc == RC_ADDR(s->textStoryPc)) { *arg = 1; *writable = 1; return 1; }   /* (x, text)    */
    if (pc == RC_ADDR(s->textSpeechPc)) { *arg = 2; *writable = 1; return 1; }  /* (x, y, t, n) */
    if (pc == RC_ADDR(s->textPaginatePc)) { *writable = 1; return 1; }         /* (text, n)    */
    return pc == RC_ADDR(s->textBootPc) || pc == RC_ADDR(s->textCenterPc) ||
           pc == RC_ADDR(s->textBlockPc) || pc == RC_ADDR(s->textLinesPc) ||
           pc == RC_ADDR(s->textPagePc) || pc == RC_ADDR(s->textPageOpenPc) ||
           pc == RC_ADDR(s->textFramePc);
}

void host_lang_entry(cpu_t *c, rt_machine *m, u32 pc)
{
    u32 arg, de;
    int index, writable;

    if (!lang_seam(pc, &index, &writable)) return;
    arg = rt_read32(&m->mem, c->a[7] + 4 + 4u * (u32)index);
    if (host_lang_dump_on())
    {
        const char *en = rt_lang_probe(m, arg);   /* before the swap: the dump wants the English */

        if (en != 0) host_lang_dump_text(en);
        /* A dump records what an *English* run draws, so the run it is taken from is left English:
         * a substituted string would arrive at the inner seam as its argument and be written down
         * as if it were the original text - which is what happened to the story pages and to every
         * message the catalog already translates. */
        return;
    }
    if (!rt_lang_on()) return;
    de = rt_lang_arg(m, arg, writable);
    if (de != 0)
    {
        /* Uncharged access (memory.h, not rc_wr32): the swap is the port's, so it may not take a
         * cycle from the machine's frame budget - a tick here would move every frame boundary and
         * with it every word the game computes. */
        rt_write32(&m->mem, c->a[7] + 4 + 4u * (u32)index, de);
    }
}
