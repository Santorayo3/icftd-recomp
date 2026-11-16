/* INI reader for icftd.ini. See config.h. */
#include "config.h"

#include <stdio.h>
#include <string.h>

#include "platform.h"

/* What a fresh installation starts with: written when no file exists, then read back like any
 * other file, so the defaults and the parser can never disagree. The text belongs to the
 * platform - a DOS build has no window mode to configure (plat_default_ini). */

#define CFG_MAX_ITEMS 64
#define CFG_MAX_BYTES 8192
#define CFG_PATH_MAX  260

typedef struct {
    const char *section;
    const char *key;
    const char *value;
} cfg_item;

static char     *g_buf;                 /* the text parse() splits in place */
static char     *g_raw;                 /* the file as it was read: what a write patches */
static u32       g_raw_len;
static cfg_item  g_item[CFG_MAX_ITEMS];
static int       g_count;
static char      g_path[CFG_PATH_MAX];

static int ci_equal(const char *a, const char *b)
{
    if (a == 0 || b == 0) return 0;
    while (*a != 0 && *b != 0) {
        char ca = *a;
        char cb = *b;
        if (ca >= 'A' && ca <= 'Z') ca = (char)(ca - 'A' + 'a');
        if (cb >= 'A' && cb <= 'Z') cb = (char)(cb - 'A' + 'a');
        if (ca != cb) return 0;
        a++;
        b++;
    }
    return *a == 0 && *b == 0;
}

static char *trim(char *s)
{
    char *end;
    while (*s == ' ' || *s == '\t' || *s == '\r') s++;
    end = s + strlen(s);
    while (end > s) {
        char c = end[-1];
        if (c != ' ' && c != '\t' && c != '\r') break;
        end--;
    }
    *end = 0;
    return s;
}

/* Splits the text in place; the item pointers therefore stay valid for as long as g_buf does. */
static void parse(char *text)
{
    char *line = text;
    char *section = (char *)"";

    while (line != 0 && *line != 0 && g_count < CFG_MAX_ITEMS) {
        char *next = strchr(line, '\n');
        char *s;
        if (next != 0) *next++ = 0;
        s = trim(line);
        if (*s != 0 && *s != ';' && *s != '#') {
            if (*s == '[') {
                char *close = strchr(s, ']');
                if (close != 0) {
                    *close = 0;
                    section = trim(s + 1);
                }
            } else {
                char *eq = strchr(s, '=');
                if (eq != 0) {
                    *eq = 0;
                    g_item[g_count].section = section;
                    g_item[g_count].key = trim(s);
                    g_item[g_count].value = trim(eq + 1);
                    g_count++;
                }
            }
        }
        line = next;
    }
}

static int load_file(const char *path)
{
    plat_file *f;
    u32 n;
    char *text, *raw;

    if (plat_path_kind(path) != PLAT_PATH_FILE) return 0;
    f = plat_open(path);
    if (f == 0) return 0;
    n = plat_size(f);
    if (n == 0 || n >= CFG_MAX_BYTES) {
        plat_close(f);
        return 0;
    }
    text = (char *)plat_alloc(n + 1);
    if (text == 0) {
        plat_close(f);
        return 0;
    }
    n = plat_read(f, 0, text, n);
    plat_close(f);
    text[n] = 0;

    raw = (char *)plat_alloc(n + 1);
    if (raw == 0) {
        plat_free(text);
        return 0;
    }
    memcpy(raw, text, n + 1);

    g_buf = text;
    g_raw = raw;                        /* a write puts this back on disk, lines it does not own
                                         * included */
    g_raw_len = n;
    strncpy(g_path, path, CFG_PATH_MAX - 1);
    g_path[CFG_PATH_MAX - 1] = 0;
    /* Notepad writes a UTF-8 BOM; it belongs to no key. */
    if (n >= 3 && (u8)text[0] == 0xEF && (u8)text[1] == 0xBB && (u8)text[2] == 0xBF) parse(text + 3);
    else parse(text);
    return 1;
}

/* The file the settings live in: next to the executable, which is where the game writes it. */
static void exe_ini_path(char *path)
{
    const char *dir = plat_exe_dir();
    u32 i = 0;

    if (dir != 0) {
        while (dir[i] != 0 && i < CFG_PATH_MAX - 12) {
            path[i] = dir[i];
            i++;
        }
    }
    path[i] = 0;
    if (i != 0) path[i++] = '\\';
    path[i] = 0;
    strcat(path, "icftd.ini");
}

u32 rt_config_load(void)
{
    char path[CFG_PATH_MAX];

    rt_config_free();
    exe_ini_path(path);
    if (load_file(path)) return 1;
    return (u32)load_file("icftd.ini");
}

/* Writes the platform's default text. Returns 1 when the file is there afterwards. */
static u32 write_defaults(const char *path)
{
    const char *text = plat_default_ini();
    plat_file *f;
    u32 len;

    if (text == 0 || *text == 0) return 0;
    len = (u32)strlen(text);
    f = plat_create(path);
    if (f == 0) return 0;
    if (plat_write(f, 0, text, len) != len) {
        plat_close(f);
        return 0;
    }
    plat_close(f);
    printf("config: wrote the default settings to %s\n", path);
    return 1;
}

u32 rt_config_ensure(void)
{
    char path[CFG_PATH_MAX];

    if (rt_config_load()) return 1;
    exe_ini_path(path);
    if (!write_defaults(path)) return 0;
    return rt_config_load();
}

const char *rt_config_path(void)
{
    return g_path;
}

const char *rt_config_get(const char *section, const char *key)
{
    int i;
    for (i = 0; i < g_count; i++)
        if (ci_equal(g_item[i].section, section) && ci_equal(g_item[i].key, key))
            return g_item[i].value;
    return 0;
}

int rt_config_bool(const char *section, const char *key, int fallback)
{
    const char *v = rt_config_get(section, key);
    if (v == 0) return fallback;
    if (ci_equal(v, "1") || ci_equal(v, "true") || ci_equal(v, "yes") || ci_equal(v, "on")) return 1;
    if (ci_equal(v, "0") || ci_equal(v, "false") || ci_equal(v, "no") || ci_equal(v, "off")) return 0;
    return fallback;
}

int rt_config_int(const char *section, const char *key, int fallback, int lo, int hi)
{
    const char *v = rt_config_get(section, key);
    int value = 0;
    int digits = 0;

    if (v == 0) return fallback;
    while (*v == ' ' || *v == '\t') v++;
    if (*v == '-' || *v == '+') return fallback;          /* no negatives in this config */
    while (*v >= '0' && *v <= '9') {
        value = value * 10 + (*v - '0');
        digits++;
        v++;
        if (value > hi) return hi;
    }
    while (*v == ' ' || *v == '\t' || *v == ';' || *v == '#') v++;
    if (digits == 0 || *v != 0) return fallback;          /* not a plain number */
    if (value < lo) return lo;
    if (value > hi) return hi;
    return value;
}

/* ci_equal for `n` bytes of `a` against the NUL-terminated `b`: both sides must end together. */
static int ci_equal_n(const char *a, u32 n, const char *b)
{
    u32 i = 0;

    if (b == 0) return 0;
    while (i < n && b[i] != 0) {
        char ca = a[i], cb = b[i];
        if (ca >= 'A' && ca <= 'Z') ca = (char)(ca - 'A' + 'a');
        if (cb >= 'A' && cb <= 'Z') cb = (char)(cb - 'A' + 'a');
        if (ca != cb) return 0;
        i++;
    }
    return i == n && b[i] == 0;
}

/* The file's own line ending, so a patch keeps the file's shape. */
static const char *line_ending(void)
{
    u32 i;

    for (i = 0; i < g_raw_len; i++)
        if (g_raw[i] == '\n') return (i != 0 && g_raw[i - 1] == '\r') ? "\r\n" : "\n";
    return "\r\n";
}

u32 rt_config_save_int(const char *section, const char *key, int value)
{
    char valueText[16];
    char path[CFG_PATH_MAX];
    const char *eol;
    char *out;
    u32 in, outLen = 0, insertAt = 0, eolLen;
    int bom, inSection, replaced = 0, overflow = 0;
    plat_file *f;
    u32 len;

    if (section == 0 || key == 0) return 0;
    sprintf(valueText, "%d", value);
    /* Nothing loaded: a fresh copy writes its defaults first, then patches those. */
    if (g_raw == 0 && !rt_config_ensure()) return 0;
    if (g_raw == 0) return 0;

    out = (char *)plat_alloc(CFG_MAX_BYTES);
    if (out == 0) return 0;
    eol = line_ending();
    eolLen = (u32)strlen(eol);
    bom = (g_raw_len >= 3 && (u8)g_raw[0] == 0xEF && (u8)g_raw[1] == 0xBB && (u8)g_raw[2] == 0xBF);
    if (bom) {
        memcpy(out, g_raw, 3);
        outLen = 3;
    }
    inSection = (*section == 0);

    for (in = bom ? 3u : 0u; in < g_raw_len && outLen < CFG_MAX_BYTES; ) {
        u32 end = in, next, s, e, ke, eq;
        int header = 0;

        while (end < g_raw_len && g_raw[end] != '\n' && g_raw[end] != '\r') end++;
        next = end;
        if (next < g_raw_len && g_raw[next] == '\r') next++;
        if (next < g_raw_len && g_raw[next] == '\n') next++;

        s = in;
        e = end;
        while (s < e && (g_raw[s] == ' ' || g_raw[s] == '\t')) s++;
        while (e > s && (g_raw[e - 1] == ' ' || g_raw[e - 1] == '\t')) e--;

        if (s < e && g_raw[s] == '[') {
            u32 cs = s + 1u, ce = cs;

            while (ce < e && g_raw[ce] != ']') ce++;
            inSection = ci_equal_n(g_raw + cs, ce - cs, section);
            if (inSection) header = 1;
        } else if (s < e && g_raw[s] != ';' && g_raw[s] != '#') {
            eq = s;
            while (eq < e && g_raw[eq] != '=') eq++;
            if (eq < e) {
                ke = eq;
                while (ke > s && (g_raw[ke - 1] == ' ' || g_raw[ke - 1] == '\t')) ke--;
                if (inSection && !replaced && ci_equal_n(g_raw + s, ke - s, key)) {
                    /* The file's own indentation and spelling of the key, the new value. */
                    if (outLen + (s - in) + (ke - s) + 1u + (u32)strlen(valueText) + eolLen >
                        CFG_MAX_BYTES) {
                        overflow = 1;
                        break;
                    }
                    memcpy(out + outLen, g_raw + in, s - in);
                    outLen += s - in;
                    memcpy(out + outLen, g_raw + s, ke - s);
                    outLen += ke - s;
                    out[outLen++] = '=';
                    len = (u32)strlen(valueText);
                    memcpy(out + outLen, valueText, len);
                    outLen += len;
                    memcpy(out + outLen, eol, eolLen);
                    outLen += eolLen;
                    replaced = 1;
                    in = next;
                    continue;
                }
            }
        }

        if (outLen + (next - in) > CFG_MAX_BYTES) {
            overflow = 1;
            break;
        }
        memcpy(out + outLen, g_raw + in, next - in);
        outLen += next - in;
        if (header) insertAt = outLen;      /* a missing key goes under its section's header */
        in = next;
    }
    /* A file too big for its own limit is left exactly as it is: a half-written settings file is
     * worse than a setting that did not take. (The loop can also stop with input left over when
     * the buffer filled up on the last line it copied.) */
    if (in < g_raw_len) overflow = 1;
    if (overflow) {
        plat_free(out);
        return 0;
    }

    if (!replaced) {
        char line[160];
        u32 need;

        /* "key=value", "[section]" and the terminators: a longer name does not fit the buffer. */
        if (strlen(section) + strlen(key) + strlen(valueText) + 3u * eolLen + 5u > sizeof line) {
            plat_free(out);
            return 0;
        }
        if (insertAt != 0) {
            sprintf(line, "%s=%s%s", key, valueText, eol);
            need = (u32)strlen(line);
            if (outLen + need > CFG_MAX_BYTES) {
                plat_free(out);
                return 0;
            }
            memmove(out + insertAt + need, out + insertAt, outLen - insertAt);
            memcpy(out + insertAt, line, need);
            outLen += need;
        } else {
            /* No such section: append it. A file whose last line has no terminator gets one
             * first, or the new header would join that line. */
            if (outLen != 0 && out[outLen - 1] != '\n')
                sprintf(line, "%s[%s]%s%s=%s%s", eol, section, eol, key, valueText, eol);
            else
                sprintf(line, "[%s]%s%s=%s%s", section, eol, key, valueText, eol);
            need = (u32)strlen(line);
            if (outLen + need > CFG_MAX_BYTES) {
                plat_free(out);
                return 0;
            }
            memcpy(out + outLen, line, need);
            outLen += need;
        }
    }

    if (g_path[0] != 0) {
        strncpy(path, g_path, CFG_PATH_MAX - 1);
        path[CFG_PATH_MAX - 1] = 0;
    } else exe_ini_path(path);
    f = plat_create(path);
    if (f == 0) {
        plat_free(out);
        return 0;
    }
    len = plat_write(f, 0, out, outLen);
    plat_close(f);
    plat_free(out);
    if (len != outLen) return 0;
    printf("config: saved %s/%s=%s to %s\n", section, key, valueText, path);
    /* Re-read, so the value is the one in memory and in the file, not two copies. */
    return rt_config_load();
}

void rt_config_free(void)
{
    if (g_buf != 0) plat_free(g_buf);
    if (g_raw != 0) plat_free(g_raw);
    g_buf = 0;
    g_raw = 0;
    g_raw_len = 0;
    g_count = 0;
    g_path[0] = 0;
}
