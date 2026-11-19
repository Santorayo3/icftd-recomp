/* --langdump: the English text a run hands to the engine's text routines, as translation-file
 * rows. This is the half of the export that only the running game knows: the intro's narration
 * pages, the room menus and the map's messages are built in memory (the intro's bundle is even
 * compressed), so no scan of the data files finds them - but every one of them passes through one
 * of the seams lang_hook.c swaps strings at.
 *
 * The rows are written as they appear (`<English><TAB><empty>`, with the file's own escapes) so a
 * translator's file can start from them: tools\lang-export.ps1 merges this with the prose that can
 * be read straight out of the data files.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "lang_dump.h"
#include "../runtime/lang.h"

#define LANG_DUMP_MAX 6000              /* rows: far above anything the game says in a run */

static FILE *g_file;
static char **g_seen;                   /* the English strings already written */
static char *g_seenPool;                /* their text, one after another */
static u32 g_seenCount, g_seenPoolAt, g_seenPoolSize;

int host_lang_dump_on(void) { return g_file != 0; }

/* Writes one string with the escapes the loader decodes again: a tab would end the field, a
 * newline the row, and a byte the file could not hold as text is written as \xHH. */
static void dump_escape(FILE *f, const char *en)
{
    const u8 *p = (const u8 *)en;

    for (; *p != 0; p++)
    {
        if (*p == '\\') fputs("\\\\", f);
        else if (*p == '\t') fputs("\\t", f);
        else if (*p == '\n') fputs("\\n", f);
        else if (*p < 0x20u || *p >= 0x7Fu) fprintf(f, "\\x%02X", *p);
        else fputc(*p, f);
    }
}

static void dump_row(const char *en)
{
    dump_escape(g_file, en);
    fputs("\t\n", g_file);
}

void host_lang_dump(const char *path)
{
    if (path == 0 || path[0] == 0) return;
    g_file = fopen(path, "wb");
    if (g_file == 0) { printf("language: cannot write %s\n", path); return; }
    fputs("# The text this run drew, as <English><TAB><German>. The German side is empty: a\n"
          "# translation file fills it in (tools\\lang-export.ps1 merges these rows).\n", g_file);
    fflush(g_file);
    g_seen = (char **)calloc(LANG_DUMP_MAX, sizeof(char *));
    g_seenPoolSize = 512u * 1024u;
    g_seenPool = (char *)malloc(g_seenPoolSize);
    printf("language: dumping the text to %s\n", path);
}

void host_lang_dump_text(const char *en)
{
    u32 i, len;

    if (g_file == 0 || en == 0 || en[0] == 0) return;
    if (rt_lang_is_message(en)) return;          /* the program formats these itself */
    if (g_seen != 0 && g_seenPool != 0)
    {
        for (i = 0; i < g_seenCount; i++)
        {
            if (strcmp(g_seen[i], en) == 0) return;
            /* A paged text is handed over once whole and then page by page, as pointers into
             * itself - those pages are fragments of a row that is already here. */
            if (strlen(en) > 40 && strstr(g_seen[i], en) != 0) return;
        }
        len = (u32)strlen(en) + 1u;
        if (g_seenCount >= LANG_DUMP_MAX || g_seenPoolAt + len > g_seenPoolSize) return;
        memcpy(g_seenPool + g_seenPoolAt, en, len);
        g_seen[g_seenCount++] = g_seenPool + g_seenPoolAt;
        g_seenPoolAt += len;
    }
    dump_row(en);
    fflush(g_file);
}

void host_lang_dump_end(void)
{
    if (g_file == 0) return;
    fclose(g_file);
    g_file = 0;
    printf("language: %lu distinct line(s) dumped\n", (unsigned long)g_seenCount);
    free(g_seen);
    free(g_seenPool);
    g_seen = 0;
    g_seenPool = 0;
    g_seenCount = 0;
    g_seenPoolAt = 0;
}

void host_lang_keys(const char *path)
{
    FILE *f;
    int i, count = rt_lang_key_count();

    if (path == 0 || path[0] == 0) return;
    f = fopen(path, "wb");
    if (f == 0) { printf("language: cannot write %s\n", path); return; }
    fputs("# The interface's English text, one line each, with the same escapes as --langdump.\n"
          "# tools\\lang-export.ps1 merges it into the source text a translation starts from.\n", f);
    for (i = 0; i < count; i++)
    {
        dump_escape(f, rt_lang_key(i));
        fputc('\n', f);
    }
    fclose(f);
    printf("language: %d interface line(s) written to %s\n", count, path);
}
