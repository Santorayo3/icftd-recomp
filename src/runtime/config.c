/* INI reader for icftd.ini. See config.h. */
#include "config.h"

#include <stdio.h>
#include <string.h>

#include "platform.h"

/* What a fresh installation starts with: written when no file exists, then read back like any
 * other file, so the defaults and the parser can never disagree. */
static const char kDefaultIni[] =
    "; ICFTD runtime settings. Written with these defaults on the first start.\r\n"
    "; Sections use [BRACKETS]; ';' or '#' at the start of a line is a comment.\r\n"
    "\r\n"
    "[VIDEO]\r\n"
    "; false = window at the original 320x200; true = fullscreen, picture scaled up to fit.\r\n"
    "fullscreen=true\r\n"
    "\r\n"
    "[AUDIO]\r\n"
    "; Volume 0..10, 0 = off, 10 = full.\r\n"
    "sound=10\r\n"
    "music=10\r\n";

#define CFG_MAX_ITEMS 64
#define CFG_MAX_BYTES 8192
#define CFG_PATH_MAX  260

typedef struct {
    const char *section;
    const char *key;
    const char *value;
} cfg_item;

static char     *g_buf;
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
    char *text;

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

    g_buf = text;
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

/* Writes kDefaultIni. Returns 1 when the file is there afterwards. */
static u32 write_defaults(const char *path)
{
    plat_file *f = plat_create(path);
    u32 len = (u32)strlen(kDefaultIni);

    if (f == 0) return 0;
    if (plat_write(f, 0, kDefaultIni, len) != len) {
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

void rt_config_free(void)
{
    if (g_buf != 0) plat_free(g_buf);
    g_buf = 0;
    g_count = 0;
    g_path[0] = 0;
}
