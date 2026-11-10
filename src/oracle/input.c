/* Frame-indexed input script: "frame fire joy0 [joy1]" per line, applied at frame boundaries. */
#include "input.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct input_entry
{
    u32 frame;
    u8  fire;
    u16 joy0, joy1;
} input_entry;

static input_entry *g_list;
static int  g_count;
static int  g_pos;                  /* last applied entry */

int input_active(void) { return g_count > 0; }

int input_load(const char *path)
{
    FILE *f = fopen(path, "r");
    char line[256];
    int lineNo = 0;

    if (f == 0)
    {
        printf("emu: cannot read input script %s\n", path);
        return 0;
    }
    g_list = (input_entry *)malloc(sizeof(input_entry) * 1024);
    if (g_list == 0) { fclose(f); return 0; }
    g_count = 0;
    g_pos = 0;
    while (fgets(line, sizeof line, f) != 0 && g_count < 1024)
    {
        char *p = line;
        char *end;
        input_entry e;
        lineNo++;
        while (*p == ' ' || *p == '\t') p++;
        if (*p == 0 || *p == '\n' || *p == '\r' || *p == '#' || *p == ';') continue;
        e.frame = (u32)strtoul(p, &end, 0);
        if (end == p)
        {
            printf("emu: %s:%d: expected a frame number\n", path, lineNo);
            fclose(f);
            return 0;
        }
        p = end;
        e.fire = 0;
        e.joy0 = 0xFFFFu;
        e.joy1 = 0xFFFFu;
        if (*p == 0 || *p == '\n') { /* frame only: fire released */ }
        else
        {
            e.fire = (u8)(strtoul(p, &end, 0) != 0);
            p = end;
            if (*p != 0 && *p != '\n' && *p != '\r')
            {
                e.joy0 = (u16)strtoul(p, &end, 0);
                p = end;
                if (*p != 0 && *p != '\n' && *p != '\r')
                    e.joy1 = (u16)strtoul(p, &end, 0);
            }
        }
        g_list[g_count++] = e;
    }
    fclose(f);
    printf("emu: input script %s, %d entr%s\n", path, g_count, g_count == 1 ? "y" : "ies");
    return 1;
}

/* Entries are applied in file order; a script that goes backwards in frame still behaves
 * deterministically (the later line wins from its frame on). */
void input_apply(rt_machine *m)
{
    while (g_pos < g_count && g_list[g_pos].frame <= m->frame)
    {
        m->fireDown = g_list[g_pos].fire;
        m->joy0 = g_list[g_pos].joy0;
        m->joy1 = g_list[g_pos].joy1;
        g_pos++;
    }
}
