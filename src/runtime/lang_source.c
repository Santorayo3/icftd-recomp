/* The game's own source text, written from the player's own extracted data (lang_source.h).
 *
 * The rows come from the same four places tools\lang-export.ps1 reads, and in the same order, so
 * the two write the same file (tools\lang-check.ps1 asserts it): the interface's own vocabulary
 * (compiled into lang.c), the rooms' script bank, the program image's NUL-terminated strings, and
 * the telephone bank. Only ASCII printable runs become rows; the exporter's filters - a record
 * reached through its length is text, a run of bytes is still junk until it reads like prose - are
 * part of the definition, because an id is the text itself.
 *
 * A translation that is complete against this file draws no English; that is why the file must
 * enumerate every line, and why it is written from the player's own data rather than shipped.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "assets.h"
#include "lang.h"
#include "lang_source.h"
#include "platform.h"

#define LS_PATH 400

typedef struct ls_list
{
    char **item;
    int count;
    int cap;
} ls_list;

static int g_lsOutOfMemory;

static void ls_free(ls_list *l)
{
    int i;

    for (i = 0; i < l->count; i++) plat_free(l->item[i]);
    plat_free(l->item);
    l->item = 0;
    l->count = 0;
    l->cap = 0;
}

static int ls_find(const ls_list *l, const char *text)
{
    int i;

    for (i = 0; i < l->count; i++)
        if (strcmp(l->item[i], text) == 0) return 1;
    return 0;
}

/* The exporter's cross-section set is a PowerShell hashtable, whose keys compare without case:
 * "HELLO" and "hello" are one row there. The per-list Contains is case-sensitive. */
static int ls_same_nocase(const char *a, const char *b)
{
    for (; *a != 0 && *b != 0; a++, b++)
    {
        int x = (u8)*a, y = (u8)*b;

        if (x >= 'A' && x <= 'Z') x += 'a' - 'A';
        if (y >= 'A' && y <= 'Z') y += 'a' - 'A';
        if (x != y) return 0;
    }
    return *a == 0 && *b == 0;
}

static int ls_find_nocase(const ls_list *l, const char *text)
{
    int i;

    for (i = 0; i < l->count; i++)
        if (ls_same_nocase(l->item[i], text)) return 1;
    return 0;
}

/* Adds a copy when the list does not hold the text yet (the exporter's ArrayList.Contains). */
static void ls_add(ls_list *l, const char *text)
{
    char *copy;
    char **grown;
    int cap;

    if (text == 0 || text[0] == 0 || ls_find(l, text)) return;
    if (l->count == l->cap)
    {
        cap = l->cap == 0 ? 32 : l->cap * 2;
        grown = (char **)plat_alloc((u32)cap * sizeof(char *));
        if (grown == 0) { g_lsOutOfMemory = 1; return; }
        if (l->item != 0)
        {
            memcpy(grown, l->item, (u32)l->count * sizeof(char *));
            plat_free(l->item);
        }
        l->item = grown;
        l->cap = cap;
    }
    copy = (char *)plat_alloc((u32)strlen(text) + 1u);
    if (copy == 0) { g_lsOutOfMemory = 1; return; }
    strcpy(copy, text);
    l->item[l->count++] = copy;
}

/* A run of the buffer as a string the caller frees. */
static char *ls_copy(const u8 *b, u32 len)
{
    char *text = (char *)plat_alloc(len + 1u);

    if (text == 0) { g_lsOutOfMemory = 1; return 0; }
    memcpy(text, b, len);
    text[len] = 0;
    return text;
}

static int ls_lower(int c) { return c >= 'a' && c <= 'z'; }
static int ls_upper(int c) { return c >= 'A' && c <= 'Z'; }
static int ls_alpha(int c) { return ls_lower(c) || ls_upper(c); }
static int ls_digit(int c) { return c >= '0' && c <= '9'; }
static int ls_print(int c) { return c >= 0x20 && c <= 0x7E; }
static int ls_space(int c) { return c == ' ' || c == '\t' || c == '\r' || c == '\n' || c == '\v' || c == '\f'; }

static int ls_has_lower(const char *t)
{
    for (; *t != 0; t++)
        if (ls_lower((u8)*t)) return 1;
    return 0;
}

/* `^\d+-\d+[A-Za-z]$`: a room id is what a bank of pictures and offsets yields that would pass
 * every other test. */
static int ls_room_id(const char *t)
{
    const char *p = t;

    if (!ls_digit(*p)) return 0;
    while (ls_digit(*p)) p++;
    if (*p != '-') return 0;
    p++;
    if (!ls_digit(*p)) return 0;
    while (ls_digit(*p)) p++;
    if (!ls_alpha(*p)) return 0;
    return p[1] == 0;
}

/* `^\^\s*([>+-]\d+\s*)+`, then a lone `^\s*` - the room script's speaker and voice markers. */
static const char *ls_strip_markers(const char *t)
{
    while (t[0] == '^')
    {
        const char *p = t + 1;
        int matched = 0;

        while (ls_space(*p)) p++;
        while (*p == '>' || *p == '+' || *p == '-')
        {
            const char *q = p + 1;
            int digits = 0;

            while (ls_digit(*q)) { q++; digits++; }
            if (digits == 0) break;
            while (ls_space(*q)) q++;
            p = q;
            matched = 1;
        }
        if (!matched) break;
        t = p;
    }
    if (t[0] == '^') { t++; while (ls_space(*t)) t++; }
    return t;
}

/* A bank record: the engine strips its command prefix (`/1Accept Treatment`) and the voice/tag
 * byte with the note marker (`#*Note: ...`, `3*I am away ...`) before it draws the rest. */
static void ls_record(ls_list *l, const char *t)
{
    t = ls_strip_markers(t);
    if (t[0] == '/' && ls_digit((u8)t[1]))
    {
        t++;
        while (ls_digit((u8)*t)) t++;
    }
    if (t[0] != 0 && t[1] == '*') t += 2;
    if (t[0] == '*') t++;
    if (strlen(t) < 4 || !ls_has_lower(t) || ls_room_id(t)) return;
    ls_add(l, t);
}

/* Prose the run or the telephone bank hands the layout routines: a letter or a quote first, and a
 * lowercase letter somewhere. */
static int ls_wanted(const char *t)
{
    if (strlen(t) < 4 || !ls_has_lower(t) || ls_room_id(t)) return 0;
    return ls_alpha((u8)t[0]) || ls_digit((u8)t[0]) || t[0] == '"' || t[0] == '\'' || t[0] == '(' ||
           t[0] == '[';
}

static void ls_text(ls_list *l, const char *t)
{
    t = ls_strip_markers(t);
    if (ls_wanted(t)) ls_add(l, t);
}

/* A u8 buffer read whole, or 0. */
static u8 *ls_read_file(const char *path, u32 *size)
{
    plat_file *f = plat_open(path);
    u8 *buf;
    u32 n;

    if (f == 0) return 0;
    n = plat_size(f);
    buf = (u8 *)plat_alloc(n + 1u);
    if (buf == 0)
    {
        g_lsOutOfMemory = 1;
        plat_close(f);
        return 0;
    }
    if (n != 0 && plat_read(f, 0, buf, n) != n)
    {
        plat_free(buf);
        plat_close(f);
        return 0;
    }
    plat_close(f);
    buf[n] = 0;
    *size = n;
    return buf;
}

/* --- the rooms' script bank -------------------------------------------------------------- */

static void ls_bank(const u8 *b, u32 n, ls_list *story)
{
    u32 i = 0;

    while (i + 2 < n)
    {
        u32 k;

        if (b[i] != 0) { i++; continue; }

        /* <u32 nameLen><name><u16 length><text>: a speech record. The length is 16 bits, so a
         * speech over 255 bytes has a non-zero first length byte. */
        if (i + 7 <= n)
        {
            u32 nl = ((u32)b[i] << 24) | ((u32)b[i + 1] << 16) | ((u32)b[i + 2] << 8) | b[i + 3];

            if (nl >= 1 && nl <= 12)
            {
                int nameOk = 1;

                for (k = 0; k < nl; k++)
                {
                    u32 c = b[i + 4 + k];

                    if (!ls_print((int)c)) { nameOk = 0; break; }
                }
                if (nameOk)
                {
                    u32 lenAt = i + 4 + nl;

                    if (lenAt + 2 <= n)
                    {
                        u32 len = ((u32)b[lenAt] << 8) | b[lenAt + 1];
                        u32 start = lenAt + 2;

                        if (len > 8 && start + len <= n)
                        {
                            int ok = 1;

                            for (k = 0; k < len; k++)
                                if (!ls_print((int)b[start + k])) { ok = 0; break; }
                            if (ok)
                            {
                                char *t = ls_copy(b + start, len);

                                if (t != 0) { ls_record(story, t); plat_free(t); }
                                i = start + len;
                                continue;
                            }
                        }
                    }
                }
            }
        }

        /* <00 1A><u32><u16 length><text>: the long narration pages. */
        if (b[i + 1] == 0x1A && i + 8 <= n)
        {
            u32 len = ((u32)b[i + 6] << 8) | b[i + 7];

            if (len > 8 && i + 8 + len <= n)
            {
                int ok = 1;

                for (k = 0; k < len; k++)
                    if (!ls_print((int)b[i + 8 + k])) { ok = 0; break; }
                if (ok)
                {
                    char *t = ls_copy(b + i + 8, len);

                    if (t != 0) { ls_record(story, t); plat_free(t); }
                    i += 8 + len;
                    continue;
                }
            }
        }

        /* <00 length><text> */
        {
            u32 len = b[i + 1];

            if (len >= 4 && i + 2 + len <= n)
            {
                int ok = 1;

                for (k = 0; k < len; k++)
                    if (!ls_print((int)b[i + 2 + k])) { ok = 0; break; }
                if (ok)
                {
                    char *t = ls_copy(b + i + 2, len);

                    if (t != 0) { ls_record(story, t); plat_free(t); }
                    i += 2 + len;
                    continue;
                }
            }
        }
        i++;
    }

    /* A record whose text is longer than 255 bytes starts inside the printable run (the byte before
     * the text may be printable), so its own 16-bit length sits just before the run. */
    {
        long runStart = -1;

        for (i = 0; i <= n; i++)
        {
            int printable = i < n && ls_print((int)b[i]);

            if (printable && runStart < 0) runStart = (long)i;
            if (printable || runStart < 0) continue;
            {
                u32 runLen = i - (u32)runStart;

                if (runLen >= 9)
                {
                    long at = -1;
                    u32 len = 0;

                    if (runStart >= 2)
                    {
                        u32 word = ((u32)b[runStart - 2] << 8) | b[runStart - 1];

                        if (word == runLen || word == runLen - 1) { at = runStart; len = word; }
                    }
                    if (at < 0 && runStart >= 1)
                    {
                        u32 word = ((u32)b[runStart - 1] << 8) | b[runStart];

                        if (word == runLen - 1 || word == runLen - 2) { at = runStart + 1; len = word; }
                    }
                    if (at >= 0 && len >= 4)
                    {
                        char *t = ls_copy(b + at, len);

                        if (t != 0) { ls_record(story, t); plat_free(t); }
                    }
                }
            }
            runStart = -1;
        }
    }
}

/* --- the program image's own strings ----------------------------------------------------- */

/* The last `]Nu` in `t`, or 0. */
static char *ls_last_tag(char *t)
{
    char *last = 0;
    char *p = t;

    while ((p = strstr(p, "]Nu")) != 0)
    {
        last = p;
        p++;
    }
    return last;
}

static int ls_prefix(const char *t, const char *prefix)
{
    while (*prefix != 0)
    {
        int a = (u8)*t, b = (u8)*prefix;

        if (ls_upper(a)) a = a - 'A' + 'a';
        if (ls_upper(b)) b = b - 'A' + 'a';
        if (a != b) return 0;
        t++;
        prefix++;
    }
    return 1;
}

static int ls_odd_char(int c)
{
    static const char odd[] = "`&@\\{}|~^_=<>[]";

    return strchr(odd, c) != 0;
}

/* The exporter's "is this run a line of the game" test for the program image. */
static int ls_program_wanted(const char *t)
{
    int words = 0, odd = 0, lower = 0, space = 0, format = 0;
    const char *p;

    for (p = t; *p != 0; p++)
    {
        if (*p == '%' && ls_alpha((u8)p[1])) format = 1;
        if (ls_lower((u8)*p)) lower = 1;
        if (*p == ' ') space = 1;
        if (ls_odd_char((u8)*p)) odd++;
    }
    /* [A-Za-z][A-Za-z'-]{1,} */
    for (p = t; *p != 0;)
    {
        if (ls_alpha((u8)p[0]) && (ls_alpha((u8)p[1]) || p[1] == '\'' || p[1] == '-'))
        {
            words++;
            p++;
            while (ls_alpha((u8)*p) || *p == '\'' || *p == '-') p++;
        }
        else p++;
    }
    if (format || !lower || !space || words < 3 || odd != 0) return 0;
    if (ls_prefix(t, "MovE v") || ls_prefix(t, "PO.lE") || ls_prefix(t, "no math library") ||
        ls_prefix(t, "Sonix Music") || ls_prefix(t, "Nu lE")) return 0;
    if (ls_prefix(t, "Version ") && ls_digit((u8)t[8])) return 0;
    return 1;
}

static void ls_program(const u8 *b, u32 n, ls_list *story)
{
    long runStart = -1;
    u32 i;

    for (i = 0; i <= n; i++)
    {
        int printable = i < n && ls_print((int)b[i]);

        if (printable && runStart < 0) runStart = (long)i;
        if (printable || runStart < 0) continue;
        {
            u32 runLen = i - (u32)runStart;

            if (runLen >= 8)
            {
                char *temp = ls_copy(b + runStart, runLen);

                if (temp != 0)
                {
                    char *text = temp;
                    char *tag = ls_last_tag(temp);

                    if (tag != 0 && tag + 3 < temp + runLen) text = tag + 3;
                    else
                    {
                        u32 k, last = runLen - 2;

                        if (last > 7) last = 7;
                        for (k = 0; k <= last; k++)
                        {
                            const char *rest = temp + k;

                            if ((ls_upper((u8)rest[0]) && ls_lower((u8)rest[1])) ||
                                rest[0] == '"' || rest[0] == '\'' || rest[0] == '(')
                            {
                                text = (char *)rest;
                                break;
                            }
                        }
                    }
                    while (*text == ' ') text++;
                    {
                        char *end = text + strlen(text);

                        while (end > text && end[-1] == ' ') *--end = 0;
                    }
                    if (ls_program_wanted(text)) ls_record(story, text);
                    plat_free(temp);
                }
            }
        }
        runStart = -1;
    }
}

/* --- the telephone bank ------------------------------------------------------------------ */

static void ls_phone(const u8 *b, u32 n, ls_list *talk)
{
    u32 at = 0;

    while (at < n)
    {
        u32 end = at, len;
        char *line;

        while (end < n && b[end] != '\n') end++;
        len = end - at;
        while (len > 0 && b[at + len - 1] == '\r') len--;
        line = ls_copy(b + at, len);
        if (line != 0)
        {
            char *t = line;

            if (strlen(t) >= 3 && (t[0] == '>' || t[0] == '+') && ls_digit((u8)t[1]))
            {
                char *p = t + 1;

                while (ls_digit((u8)*p)) p++;
                if (ls_space(*p))
                {
                    while (ls_space(*p)) p++;
                    t = p;
                }
            }
            {
                /* The engine splits the speaker off at the first colon within the first three
                 * characters; the 1989 file writes `O:Let me see...`, the add-on's `O: The lab?...`. */
                int colon = -1, k, length = (int)strlen(t);

                for (k = 0; k < 3 && k < length; k++)
                    if (t[k] == ':') { colon = k; break; }
                if (colon >= 0)
                {
                    const char *text = t + colon + 1;

                    while (ls_space(*text)) text++;
                    ls_text(talk, text);
                }
            }
            plat_free(line);
        }
        at = end < n ? end + 1 : n;
    }
}

/* --- the source file --------------------------------------------------------------------- */

static int ls_put(plat_file *f, u32 *at, const char *text)
{
    u32 len = (u32)strlen(text);

    if (len == 0) return 1;
    if (plat_write(f, *at, text, len) != len) return 0;
    *at += len;
    return 1;
}

/* One CSV field: quoted (with its quotes doubled) only when it has to be - a spreadsheet reads and
 * writes exactly this. */
static int ls_put_field(plat_file *f, u32 *at, const char *text)
{
    const char *p;
    int quote = 0;

    for (p = text; *p != 0; p++)
        if (*p == ';' || *p == '"' || *p == '\r' || *p == '\n') { quote = 1; break; }
    if (!quote) return ls_put(f, at, text);
    if (!ls_put(f, at, "\"")) return 0;
    for (p = text; *p != 0; p++)
    {
        char one[2];

        if (*p == '"' && !ls_put(f, at, "\"\"")) return 0;
        if (*p != '"')
        {
            one[0] = *p;
            one[1] = 0;
            if (!ls_put(f, at, one)) return 0;
        }
    }
    return ls_put(f, at, "\"");
}

/* The sixteen hex digits of an id, uppercase, as the translation files write them (a manual
 * conversion: the DOS C library's printf has no 64-bit `%llX`). */
static void ls_hex16(char *out, u64 id)
{
    static const char digits[] = "0123456789ABCDEF";
    int i;

    for (i = 15; i >= 0; i--)
    {
        out[i] = digits[(int)(id & 15u)];
        id >>= 4;
    }
    out[16] = 0;
}

static int ls_put_row(plat_file *f, u32 *at, const char *text)
{
    char key[20];

    ls_hex16(key, rt_lang_id(text));
    strcpy(key + 16, ";");
    return ls_put(f, at, key) && ls_put_field(f, at, text) && ls_put(f, at, "\r\n");
}

static int ls_put_rows(plat_file *f, u32 *at, const ls_list *l)
{
    int i;

    for (i = 0; i < l->count; i++)
        if (!ls_put_row(f, at, l->item[i])) return 0;
    return 1;
}

static int ls_put_section(plat_file *f, u32 *at, const char *title, const ls_list *l)
{
    char line[160];

    sprintf(line, "# --- %s (%d record(s)) ---\r\n", title, l->count);
    return ls_put(f, at, line) && ls_put_rows(f, at, l) && ls_put(f, at, "\r\n");
}

static int ls_write(const char *path, int ant, const ls_list *iface, const ls_list *story,
                    const ls_list *talk, char *msg, u32 max)
{
    plat_file *f = plat_create(path);
    u32 at = 0;
    int ok;

    if (f == 0)
    {
        if (msg != 0) sprintf(msg, "cannot write %s", path);
        return 0;
    }
    ok = ls_put(f, &at, "\xEF\xBB\xBF");
    if (ant)
    {
        ok = ok && ls_put(f, &at, "# Source text of It Came from the Desert II - Antheads - the id and the English text\r\n");
        ok = ok && ls_put(f, &at, "# of the add-on's own lines (its rooms, people and narration). NOT committed: this\r\n");
        ok = ok && ls_put(f, &at, "# is the game's own script. The interface and every line the two games share are in\r\n");
        ok = ok && ls_put(f, &at, "# en.csv: the game merges this half into the one catalog when the add-on runs.\r\n");
    }
    else
    {
        ok = ok && ls_put(f, &at, "# Source text of It Came from the Desert - the id and the English text of every\r\n");
        ok = ok && ls_put(f, &at, "# string the game can draw. NOT committed: this is the game's own script.\r\n");
    }
    ok = ok && ls_put(f, &at, "# tools\\lang-export.ps1 -Work builds the translator's file from it, -Pack writes\r\n");
    ok = ok && ls_put(f, &at, "# the translation the game reads.\r\n");
    ok = ok && ls_put(f, &at, "#\r\n");
    ok = ok && ls_put(f, &at, "# The id is an FNV-1a hash of the English text (sixteen hex digits), and lang.c\r\n");
    ok = ok && ls_put(f, &at, "# computes the same value, so a translation file never repeats the original's\r\n");
    ok = ok && ls_put(f, &at, "# words.\r\n");
    ok = ok && ls_put(f, &at, "\r\n");
    if (ok && iface->count > 0)
        ok = ls_put_section(f, &at, "the interface, the menus and the messages", iface);
    if (ok)
        ok = ls_put_section(f, &at, "the story: the rooms, the people and the narration", story);
    if (ok)
    {
        char line[160];

        sprintf(line, "# --- the telephone dialogue (%d record(s)) ---\r\n", talk->count);
        ok = ls_put(f, &at, line) && ls_put_rows(f, &at, talk);
    }
    plat_close(f);
    if (!ok)
    {
        if (msg != 0) sprintf(msg, "cannot write %s", path);
        return 0;
    }
    return 1;
}

/* --- the two scans ----------------------------------------------------------------------- */

typedef struct ls_source
{
    ls_list iface;
    ls_list story;
    ls_list talk;
} ls_source;

static int ls_path_join(char *out, u32 max, const char *dir, const char *relative)
{
    if (strlen(dir) + 1u + strlen(relative) + 1u > max) return 0;
    sprintf(out, "%s\\%s", dir, relative);
    return 1;
}

static void ls_scan(ls_source *s, const char *dataDir, int layout, int ant)
{
    char path[LS_PATH];
    u8 *buf;
    u32 n = 0;
    const char *bank, *phone, *image;
    int windows = layout == RT_ASSETS_WINDOWS;
    int i;

    if (!ant)
        for (i = 0; i < rt_lang_key_count(); i++) ls_add(&s->iface, rt_lang_key(i));

    if (ant)
    {
        bank = windows ? "ant2\\Desert2.dat" : "ANT2\\DESERT2.DAT";
        phone = windows ? "ant2\\phone2.dat" : "ANT2\\PHONE2.DAT";
        image = windows ? "ant\\code\\dshell4k\\dshell.img" : "ANTSHEL.IMG";
    }
    else
    {
        bank = windows ? "disk2\\desert.dat" : "DISK2\\DESERT.DAT";
        phone = windows ? "disk2\\phone.dat" : "DISK2\\PHONE.DAT";
        image = windows ? "code\\dshell4k\\dshell.img" : "DSHELL.IMG";
    }

    if (ls_path_join(path, sizeof path, dataDir, bank) && (buf = ls_read_file(path, &n)) != 0)
    {
        ls_bank(buf, n, &s->story);
        plat_free(buf);
    }
    if (ls_path_join(path, sizeof path, dataDir, image) && (buf = ls_read_file(path, &n)) != 0)
    {
        ls_program(buf, n, &s->story);
        plat_free(buf);
    }
    if (ls_path_join(path, sizeof path, dataDir, phone) && (buf = ls_read_file(path, &n)) != 0)
    {
        ls_phone(buf, n, &s->talk);
        plat_free(buf);
    }
}

/* The rows as the file holds them: one section in front of the next, a text only in the first
 * section that names it (a run's menu label is not also a story record). */
typedef struct ls_sections
{
    ls_list iface;
    ls_list story;
    ls_list talk;
} ls_sections;

static void ls_section_add(ls_list *dst, ls_list *seen, const ls_list *src)
{
    int i;

    for (i = 0; i < src->count; i++)
        if (!ls_find_nocase(seen, src->item[i]))
        {
            ls_add(dst, src->item[i]);
            ls_add(seen, src->item[i]);
        }
}

static void ls_sections_build(ls_sections *out, const ls_source *s)
{
    ls_list seen;

    memset(&seen, 0, sizeof seen);
    ls_section_add(&out->iface, &seen, &s->iface);
    ls_section_add(&out->story, &seen, &s->story);
    ls_section_add(&out->talk, &seen, &s->talk);
    ls_free(&seen);
}

static int ls_id_cmp(const void *a, const void *b)
{
    u64 x = *(const u64 *)a, y = *(const u64 *)b;

    return x < y ? -1 : x > y ? 1 : 0;
}

/* Drops from `l` every text the base catalog already lists (the add-on's file carries only what
 * en.csv does not: the two games' shared lines are one row, or would disagree). */
static void ls_drop_known(ls_list *l, u64 *ids, int count)
{
    int i, out = 0;

    for (i = 0; i < l->count; i++)
    {
        u64 id = rt_lang_id(l->item[i]);
        int lo = 0, hi = count - 1, found = 0;

        while (lo <= hi)
        {
            int mid = (lo + hi) / 2;

            if (ids[mid] == id) { found = 1; break; }
            if (ids[mid] < id) lo = mid + 1;
            else hi = mid - 1;
        }
        if (found) plat_free(l->item[i]);
        else l->item[out++] = l->item[i];
    }
    l->count = out;
}

static void ls_free_sections(ls_sections *s)
{
    ls_free(&s->iface);
    ls_free(&s->story);
    ls_free(&s->talk);
}

static int ls_id_hex(int c)
{
    if (c >= '0' && c <= '9') return c - '0';
    if (c >= 'A' && c <= 'F') return c - 'A' + 10;
    if (c >= 'a' && c <= 'f') return c - 'a' + 10;
    return -1;
}

/* The ids a written `en.csv` holds, read back from the file: the add-on's half is defined against
 * that catalog, the same way tools\lang-export.ps1 reads it. `count` is 0 when the file is not
 * there (then nothing is shared, as in the exporter). */
static u64 *ls_read_ids(const char *path, int *count)
{
    u8 *buf;
    u32 n = 0, at;
    u64 *ids;
    int cap = 0;

    *count = 0;
    buf = ls_read_file(path, &n);
    if (buf == 0) return 0;
    ids = 0;
    at = 0;
    while (at < n)
    {
        u32 end = at, i;
        u64 id = 0;
        int ok = 1;

        while (end < n && buf[end] != '\n') end++;
        if (end > at && buf[at] != '#')
        {
            for (i = 0; i < 16; i++)
            {
                int digit = at + i < end ? ls_id_hex((int)buf[at + i]) : -1;

                if (digit < 0) { ok = 0; break; }
                id = (id << 4) | (u64)digit;
            }
            if (ok && at + 16 < end && buf[at + 16] == ';')
            {
                if (*count == cap)
                {
                    int grown = cap == 0 ? 128 : cap * 2;
                    u64 *next = (u64 *)plat_alloc((u32)grown * sizeof(u64));

                    if (next == 0) { g_lsOutOfMemory = 1; break; }
                    if (ids != 0)
                    {
                        memcpy(next, ids, (u32)*count * sizeof(u64));
                        plat_free(ids);
                    }
                    ids = next;
                    cap = grown;
                }
                ids[(*count)++] = id;
            }
        }
        at = end < n ? end + 1 : n;
    }
    plat_free(buf);
    if (ids != 0 && *count > 0) qsort(ids, (size_t)*count, sizeof ids[0], ls_id_cmp);
    return ids;
}

int rt_lang_source_write(const char *dataDir, int layout, const char *dir, int force, char *msg,
                         u32 max)
{
    char path[LS_PATH], antPath[LS_PATH];
    int wrote = 0;
    int addon, needBase, needAnt;

    if (dataDir == 0 || dir == 0)
    {
        if (msg != 0) sprintf(msg, "no data or language folder for the source text");
        return -1;
    }
    if (!ls_path_join(path, sizeof path, dir, "en.csv") ||
        !ls_path_join(antPath, sizeof antPath, dir, "en_ant.csv"))
    {
        if (msg != 0) sprintf(msg, "the language folder path is too long");
        return -1;
    }
    addon = (int)rt_assets_addon_ready(dataDir, layout);
    needBase = force || plat_path_kind(path) != PLAT_PATH_FILE;
    needAnt = addon && (force || plat_path_kind(antPath) != PLAT_PATH_FILE);
    if (!needBase && !needAnt) return 0;             /* the usual start: two file checks */
    if (plat_path_kind(dir) != PLAT_PATH_DIR && !plat_mkdir(dir))
    {
        if (msg != 0) sprintf(msg, "cannot create %s", dir);
        return -1;
    }
    g_lsOutOfMemory = 0;

    if (needBase)
    {
        ls_source base;
        ls_sections sec;

        memset(&base, 0, sizeof base);
        memset(&sec, 0, sizeof sec);
        ls_scan(&base, dataDir, layout, 0);
        ls_sections_build(&sec, &base);
        if (g_lsOutOfMemory)
        {
            if (msg != 0) sprintf(msg, "out of memory writing the source text");
            ls_free_sections(&sec);
            ls_free(&base.iface);
            ls_free(&base.story);
            ls_free(&base.talk);
            return -1;
        }
        if (!ls_write(path, 0, &sec.iface, &sec.story, &sec.talk, msg, max))
        {
            ls_free_sections(&sec);
            ls_free(&base.iface);
            ls_free(&base.story);
            ls_free(&base.talk);
            return -1;
        }
        printf("language: wrote the game's source text to %s (%d line(s)) - a translation starts here\n",
               path, sec.iface.count + sec.story.count + sec.talk.count);
        wrote++;
        ls_free_sections(&sec);
        ls_free(&base.iface);
        ls_free(&base.story);
        ls_free(&base.talk);
    }

    if (needAnt)
    {
        ls_source ant;
        ls_sections antSec;
        u64 *ids;
        int count = 0;

        memset(&ant, 0, sizeof ant);
        memset(&antSec, 0, sizeof antSec);
        ls_scan(&ant, dataDir, layout, 1);
        ls_sections_build(&antSec, &ant);
        if (g_lsOutOfMemory)
        {
            if (msg != 0) sprintf(msg, "out of memory writing the source text");
            ls_free_sections(&antSec);
            ls_free(&ant.iface);
            ls_free(&ant.story);
            ls_free(&ant.talk);
            return -1;
        }
        ids = ls_read_ids(path, &count);
        if (count > 0)
        {
            ls_drop_known(&antSec.iface, ids, count);
            ls_drop_known(&antSec.story, ids, count);
            ls_drop_known(&antSec.talk, ids, count);
        }
        plat_free(ids);
        if (!ls_write(antPath, 1, &antSec.iface, &antSec.story, &antSec.talk, msg, max))
        {
            ls_free_sections(&antSec);
            ls_free(&ant.iface);
            ls_free(&ant.story);
            ls_free(&ant.talk);
            return -1;
        }
        printf("language: wrote the add-on's source text to %s (%d line(s))\n", antPath,
               antSec.iface.count + antSec.story.count + antSec.talk.count);
        wrote++;
        ls_free_sections(&antSec);
        ls_free(&ant.iface);
        ls_free(&ant.story);
        ls_free(&ant.talk);
    }

    if (g_lsOutOfMemory)
    {
        if (msg != 0) sprintf(msg, "out of memory writing the source text");
        return -1;
    }
    return wrote;
}
