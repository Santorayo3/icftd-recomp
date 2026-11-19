/* The game's text in another language. See lang.h.
 *
 * One file per language carries every translation there is - the interface, the menus, the map's
 * place names, the boot's messages and the port's own screens as well as the game's story:
 * `lang\<code>.csv`, `<id>;<text>`, where the id is the FNV-1a hash of the English text (sixteen
 * hex digits). Nothing is translated in this source file. What it holds is the interface's English
 * vocabulary (`g_interface`), which is what the exporter needs to know the lines exist, and the
 * loader: read the file, convert it to the font's codes, index it, and hand the engine the
 * translated string where it drew an English one.
 *
 * A file's text is written in UTF-8 and converted to the font's own character codes at start-up
 * (see lang_font_code): the disk font `fonts\newnem.font` carries ASCII only, so Ä Ö Ü ä ö ü are
 * the port's own glyphs (display.c) and code 0x80..0x85 selects them; every other accented letter
 * is drawn as its base letter, and 'ß' is spelled "ss", which is what the font can show.
 */
#include "lang.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "platform.h"

/* Where the translation is copied to: above the emulated stack (EMU_STACK_TOP) and below the
 * library base blocks (EMU_LIB_BASE), a range the machine model never allocates from. A translated
 * run therefore starts with the same RAM an English one does - no heap block moved. */
#define LANG_BASE 0x00184000u
#define LANG_BYTES 0x0003C000u          /* up to EMU_LIB_BASE at 0x1C0000 */

/* One scratch line per formatted string, for the messages the engine builds at run time
 * ("June %d, 1951 - ...", "Sorry, %s has been closed. ..."): their text changes with every place
 * and every minute, so the file carries their *format* and the numbers are put into it at run time.
 * A small ring, because a caller may hold one line across the next lookup. */
#define LANG_SCRATCH_COUNT 4
#define LANG_SCRATCH_LEN   320

/* A long text is handed to the page runners, which split it into pages *in the string itself*
 * (NULs at the breaks) and then keep walking it. So a translated story page is a copy of its own,
 * big enough for a whole narration record (the longest is some 700 bytes) and never the shared
 * catalog entry. */
#define LANG_STORY_COUNT   4
#define LANG_STORY_LEN     1024

/* The longest key a lookup names: a narration record runs to some 700 characters, so this has to
 * hold a whole story page; a longer run of text at a text routine's argument is never a row of the
 * file. */
#define LANG_KEY_MAX 1024

/* The interface's English text - the vocabulary every translation has to cover on top of the
 * game's own script.
 *
 * These are the lines the engine draws from its program and its data bank (the menus, the map's
 * place names, the boot's messages, the save/load screen) and the ones the port's own screens draw
 * (the title, the settings, the save slots, the OSD). They are not in the game's story text, so
 * they are not in the source that tools\lang-export.ps1 reads out of the game data - this list is
 * what the exporter adds to it (`--langkeys`, src\host\lang_dump.c).
 *
 * It carries English only. What a line is called in another language is in that language's file,
 * `lang\<code>.csv`, keyed by the FNV-1a id of the text here (sixteen hex digits) - so adding a
 * language is adding a row per line to a file, and never touching this one. A line without a row
 * simply stays English.
 *
 * The last group is different: those are *formats*, the shape of the messages the program builds
 * itself at run time ("Sleep for 3 hours."). A row for one of those would be a row for that one
 * number, so the engine recognises the shape, reads the numbers out, and lays them out with the
 * translated format (see "the formatted messages", below).
 */
static const char *const g_interface[] =
{
    /* --- the engine's own interface ------------------------------------------------------- */
    "Look North",
    "Look South",
    "Look West",
    "Look East",
    "Go to Map",
    "Situation Map",
    "Make a Call",
    "Answer the Door",
    "Fight",
    "Fight Ant Head",
    "Escape Hospital",
    "Take a Flight",
    "Fire Game",
    "There's no one around.",
    "Nothing's happening here.",
    "No one's home.",
    "Everyone's out at the moment.",
    "Sorry, you can only get there through the Ore Plant.",
    "Sorry, no visiting is allowed.",
    "Game Paused. Press left mouse button to continue.",
    "Game paused. Press left",
    "mouse button to continue",
    "Show new evidence",
    "Want ant info?",
    "Now about this other evidence you brought...",
    "Arsenal",
    "Sleep",

    /* The room action labels live in the room's own data bank (desert.dat), not in the program,
     * so they are listed here with the program's own menu strings. */
    "Answer Door",
    "Bert on Phone",
    "Continue",
    "Next",
    "enough evidence?",
    "fluid proof",
    "sound proof",
    "tissue proof",
    "track proof",
    "Look at Samples",
    "Talk to Biff",
    "Go to Map Down",
    "Go to NOMAP",
    "Hospital",
    "M-4 Mine",
    "Police Station",
    "Can't allocate animation bitmaps.",
    "Can't open animation views.",
    "Can't open animation rastport.",

    /* The save/load screen the engine puts up on its own ("ICFTD" world). */
    "Lizard Breath has been awaiting your return.",
    "If you want to load a saved game, select 'YES'.",
    "If you want to start a new game, select 'NO'.",
    "Is something more important than saving",
    "mankind from annihilation? If so, select 'YES'.",
    "If you pushed save game by mistake, choose 'NO'.",
    "YES",
    "NO",

    /* The boot's own messages (a disk is missing, write protected, ...). */
    "Please insert disk:",
    "or press left mouse button to abort.",
    "The disk:",
    "is write protected.",
    "Unprotect and re-insert it.",
    "Unresolvable file read/write error!",
    "The game is unplayable.",
    "Press button to continue.",

    /* The places the map and the rooms name. */
    "Mine 1",
    "Mine 2",
    "Mine 3",
    "Mine 4",
    "Mine 5",
    "Cook's Stud Farm",
    "J.D.'s Farm",
    "McWilliams Dairy",
    "Creature Cave A",
    "Creature Cave B",
    "Creature Cave C",
    "Ore Plant",
    "PumpStation 1",
    "PumpStation 2",
    "PumpStation 3",
    "Mine Tunnel",
    "North Volcanic Cone",
    "S.W. Volcanic Cone",
    "N.E. Volcanic Cone",
    "Quarry",
    "Hilbers Field",
    "National Guard Armory",
    "Fortune Teller",
    "Home Base",
    "Godfrey's Hot Springs",
    "Platt University Lab",
    "Neptune Hall",
    "KBUG Radio",
    "O'Riordan's Pub",
    "Melville Memorial Hospital",
    "Elmer's Service Station",
    "Lizard Breath Police",
    "Lizard Breath Star",
    "Mayor's Office",
    "Main Street",
    "Main Street South",
    "Main Street West",
    "Main Street East",
    "Beverly's Drive-In",

    /* --- the port's own surfaces: the title, the settings, the save slots, the OSD ---------- */
    "New Game",
    "Play Antheads",
    "Load Game",
    "Settings",
    "Quit Game",
    "Quit to title menu?",
    "Confirm",
    "Cancel",
    "Fullscreen",
    "On",
    "Off",
    "Music Vol.",
    "Sound Vol.",
    "Language",
    "Back",
    "More",
    "Save Game",
    "Slot %d",
    "Slot %d%s",
    "(Empty)",
    "Save Slot - %d%s",
    "Loading",
    "Time frozen",
    "Time unfrozen",
    "Check out my spiritual successor \"It Returned to the Desert\"",
    "Available on Steam and itch.io",
    "Please put the three original 'It Came from the Desert' disk images in the 'disks' folder and restart.",
    "No game data folder was given.",
    "BLASTER not set - no sound (set BLASTER=A220 I5 D1 T4)",

    /* --- the formats of the messages the program builds itself ------------------------------ */
    "June %d, 1951 - %02d:%02d %s",
    "January %d, 1956 - %02d:%02d %s",
    "a.m.",
    "p.m.",
    "Sorry, %s has been destroyed.",
    "Sorry, %s is closed. It will open again at %d:00 %s.",
    "Sleep for %d hours.",
    "The number %d. Hmmmmmm, wonder what that could mean.",
    "There's just one other thing. I don't know if this means anything, but the number %d keeps going through my head.",
    "ETA: %02d:%02d",
    "REEL %d"
};

#define LANG_KEY_COUNT ((int)(sizeof g_interface / sizeof g_interface[0]))

/* The catalog in force is the translation file (`lang\<code>.csv` next to the executable) and
 * nothing else: a row whose text field is empty is the placeholder the exporter leaves for a
 * translator who has not got there yet, and changes nothing - that line stays English.
 *
 * A row may name its English text two ways: verbatim (what a translator works with) or by its
 * 64-bit FNV-1a id, sixteen hex digits. The second form is how a finished translation can be
 * shipped **without carrying the original's text** - see the export tool and docs\port-features.md,
 * "Delivering a translation". */
#define LANG_MAX_ENTRIES 4096              /* the file's rows                              */
#define LANG_FILE_MAX    (512u * 1024u)    /* the largest translation file read            */
#define LANG_PATH_MAX    320               /* <exe dir>\lang\<code>.csv                    */
#define LANG_SEP         ';'               /* the CSV's field separator                    */
#define LANG_ID_LEN      16                /* hex digits of an id-keyed row                */
#define LANG_CODE_MAX    7                 /* the letters of a language code, "de" ...     */

/* The languages the settings view offers: English plus the complete translations found at
 * start-up. A handful is a lot - one file per language the game was translated into - so a fixed
 * list is enough, and a folder with more is reported rather than silently cut short. */
#define LANG_AVAILABLE_MAX 16

typedef struct lang_entry
{
    const char *en;                        /* the English text, as the game has it (or 0)  */
    const char *text;                      /* the translation, in the font's codes (a copy) */
    u64 id;                                /* FNV-1a of `en`, when `en` is not here        */
} lang_entry;

static int g_on;                          /* a language other than English is selected    */
static char g_codeBuf[LANG_CODE_MAX + 1];
static const char *g_code = "en";
static lang_entry *g_ent;                 /* the catalog in force                         */
static int g_entCount;
static char *g_pool;                      /* every g_ent[i].text, converted, end to end   */
static char *g_owned;                     /* the translation file as it was read          */
static char *g_ownedAnt;                  /* its add-on half, `<code>_ant.csv` (or 0)     */
static u32 *g_machAddr;                   /* g_ent[i].text's address in the machine's RAM */
static u32 *g_entHash;
static int *g_slot;                       /* open addressing: an index into g_ent, -1     */
static int g_slots;                       /* the number of slots                          */
static u32 g_scratch[LANG_SCRATCH_COUNT];
static int g_scratchNext;
static u32 g_story[LANG_STORY_COUNT];
static int g_storyNext;
static rt_machine *g_m;
static int g_open;
static int g_fromFile;                    /* rows that came from the file, for the report */
static char g_avail[LANG_AVAILABLE_MAX][LANG_CODE_MAX + 1];  /* "en", then the found ones    */
static int g_availCount;
static int g_scanned;

/* The add-on's own script (`en_ant.csv`), minus every id the base catalog already covers: what a
 * `<code>_ant.csv` has to carry to be merged into the catalog. */
static u64 *g_reqAnt;
static int g_reqAntCount;
static int g_reqAntCap;

/* Browses the language folders once (below, "a complete translation"). */
static u32 lang_scan(void);
/* 1 when the add-on's half translates every id en_ant.csv names that the base catalog does not
 * already cover (see lang_required_build). */
static int lang_ant_complete_text(const char *text, int *missing);

/* --- the catalog's text in the font's character set --------------------------------------- */

/* The font's own codes for the letters it cannot show (see display.c): 0x80..0x85 are a base
 * letter with a diaeresis drawn above it. */
enum
{
    LANG_AUML = 0x80, LANG_OUML = 0x81, LANG_UUML = 0x82,
    LANG_auml = 0x83, LANG_ouml = 0x84, LANG_uuml = 0x85
};

/* "ß" is two characters in this font, which is why this writes one character or two. */
static const char *lang_font_code(u32 cp, int *out)
{
    switch (cp)
    {
    case 0x00C4: *out = LANG_AUML; return 0;     /* Ä */
    case 0x00D6: *out = LANG_OUML; return 0;     /* Ö */
    case 0x00DC: *out = LANG_UUML; return 0;     /* Ü */
    case 0x00E4: *out = LANG_auml; return 0;     /* ä */
    case 0x00F6: *out = LANG_ouml; return 0;     /* ö */
    case 0x00FC: *out = LANG_uuml; return 0;     /* ü */
    case 0x00DF: *out = 's';       return "s";   /* ß -> ss */
    case 0x2013: case 0x2014: *out = '-'; return 0;
    case 0x2018: case 0x2019: *out = '\''; return 0;
    case 0x201C: case 0x201D: *out = '"'; return 0;
    }

    /* Every other accented Latin-1 letter is drawn as its base letter (é -> e, Å -> A, ñ -> n):
     * another language's words stay readable, where '?' would not. The six umlauts above keep
     * their own glyph, which is why this comes second. */
    if (cp >= 0x00C0u && cp <= 0x00FFu)
    {
        if (cp <= 0x00C6u) *out = 'A';            /* À..Æ */
        else if (cp == 0x00C7u) *out = 'C';
        else if (cp <= 0x00CBu) *out = 'E';
        else if (cp <= 0x00CFu) *out = 'I';
        else if (cp == 0x00D0u) *out = 'D';
        else if (cp == 0x00D1u) *out = 'N';
        else if (cp <= 0x00D6u || cp == 0x00D8u) *out = 'O';
        else if (cp == 0x00D7u) *out = 'x';       /* × */
        else if (cp <= 0x00DCu) *out = 'U';
        else if (cp == 0x00DDu) *out = 'Y';
        else if (cp == 0x00DEu) *out = 'T';       /* Þ */
        else if (cp <= 0x00E6u) *out = 'a';
        else if (cp == 0x00E7u) *out = 'c';
        else if (cp <= 0x00EBu) *out = 'e';
        else if (cp <= 0x00EFu) *out = 'i';
        else if (cp == 0x00F0u) *out = 'd';
        else if (cp == 0x00F1u) *out = 'n';
        else if (cp <= 0x00F6u || cp == 0x00F8u) *out = 'o';
        else if (cp == 0x00F7u) *out = '/';       /* ÷ */
        else if (cp <= 0x00FCu) *out = 'u';
        else *out = 'y';
        return 0;
    }
    *out = cp < 0x80u ? (int)cp : '?';
    return 0;
}

/* A translation file is a spreadsheet's CSV: the text is written in whatever encoding the
 * translator's program used, so an umlaut arrives either as UTF-8 (two bytes) or as the single
 * byte a Windows-1252/Latin-1 save produces. A sequence that is not valid UTF-8 therefore falls
 * back to Latin-1, which is why both kinds of file translate correctly. */
static u32 lang_convert(const char *src, char *dst, u32 max)
{
    u32 n = 0;

    while (*src != 0 && n + 3u < max) {
        u32 c = (u8)*src++;
        u32 cp = c;

        if (c >= 0xC0u) {
            int more = c >= 0xF0u ? 3 : c >= 0xE0u ? 2 : 1;
            int got = 0;
            u32 v = c & (more == 3 ? 0x07u : more == 2 ? 0x0Fu : 0x1Fu);

            while (got < more && (*src & 0xC0) == 0x80) { v = (v << 6) | (u32)((u8)*src++ & 0x3Fu); got++; }
            if (got == more) cp = v;             /* valid UTF-8 ... */
            else {                               /* ... or a single Latin-1 byte */
                cp = c;
                src -= got;                      /* put back what was not part of it */
            }
        }
        {
            int code;
            const char *extra = lang_font_code(cp, &code);

            dst[n++] = (char)code;
            if (extra != 0) dst[n++] = *extra;
        }
    }
    dst[n] = 0;
    return n;
}

/* --- selecting a language ------------------------------------------------------------------ */

/* FNV-1a over the text's bytes, 64 bits. A row of the translation file may name its text by this
 * value instead of by the text itself, which is what lets a finished translation be shipped
 * without a copy of the original's script: the id is a fact about the text, not the text. */
static u64 lang_hash64(const char *s)
{
    u64 h = 14695981039346656037ull;

    for (; *s != 0; s++) { h ^= (u64)(u8)*s; h *= 1099511628211ull; }
    return h;
}

/* The value both keying forms are filed under: a 32-bit fold of the id. A collision here is only a
 * false candidate - the text is compared again, and an id row against the full 64 bits. */
static u32 lang_fold(u64 h) { return (u32)h ^ (u32)(h >> 32); }

/* The id a key names, 0 when it is not sixteen hex digits (i.e. it is the English text itself). */
static u64 lang_key_id(const char *key)
{
    u64 v = 0;
    int i;

    for (i = 0; i < LANG_ID_LEN; i++)
    {
        char c = key[i];
        int d;

        if (c >= '0' && c <= '9') d = c - '0';
        else if (c >= 'a' && c <= 'f') d = c - 'a' + 10;
        else if (c >= 'A' && c <= 'F') d = c - 'A' + 10;
        else return 0;
        v = (v << 4) | (u64)d;
    }
    return key[LANG_ID_LEN] == 0 ? v : 0;
}

/* The entry's own key value, for the index and for the "is this the same text" test. */
static u64 lang_entry_hash(const lang_entry *e)
{
    return e->en != 0 ? lang_hash64(e->en) : e->id;
}

/* Frees everything a language selection owns. */
static void lang_free(void)
{
    if (g_pool != 0) plat_free(g_pool);
    if (g_owned != 0) plat_free(g_owned);
    if (g_ownedAnt != 0) plat_free(g_ownedAnt);
    if (g_ent != 0) plat_free(g_ent);
    if (g_machAddr != 0) plat_free(g_machAddr);
    if (g_entHash != 0) plat_free(g_entHash);
    if (g_slot != 0) plat_free(g_slot);
    g_pool = 0;
    g_owned = 0;
    g_ownedAnt = 0;
    g_ent = 0;
    g_entCount = 0;
    g_machAddr = 0;
    g_entHash = 0;
    g_slot = 0;
    g_slots = 0;
    g_fromFile = 0;
    g_on = 0;
    g_open = 0;
}

/* The two-letter name a code is filed under: lower case, and no path punctuation. Returns its
 * length; 0 when there is no usable code ("en" - and anything else - is the caller's decision). */
static int lang_code_of(const char *code, char *out)
{
    int n;

    if (code == 0) { out[0] = 0; return 0; }
    for (n = 0; n < LANG_CODE_MAX && code[n] != 0; n++)
    {
        char c = code[n];

        if (c >= 'A' && c <= 'Z') c = (char)(c - 'A' + 'a');
        if ((c < 'a' || c > 'z') && (c < '0' || c > '9') && c != '-') break;
        out[n] = c;
    }
    out[n] = 0;
    return n;
}

/* A translation file's text, NUL-terminated, in a fresh buffer the caller frees with plat_free; 0
 * when the file is not there, is empty, is bigger than LANG_FILE_MAX or is UTF-16. A spreadsheet's
 * "CSV UTF-8" starts with a byte order mark, which belongs to no record. */
static char *lang_read_path(const char *path, u32 *size)
{
    plat_file *f;
    char *text;
    u32 n;

    f = plat_open(path);
    if (f == 0) return 0;
    n = plat_size(f);
    if (n == 0 || n >= LANG_FILE_MAX) { plat_close(f); return 0; }
    text = (char *)plat_alloc(n + 1u);
    if (text == 0) { plat_close(f); return 0; }
    n = plat_read(f, 0, text, n);
    plat_close(f);
    text[n] = 0;
    if (n >= 3 && (u8)text[0] == 0xEFu && (u8)text[1] == 0xBBu && (u8)text[2] == 0xBFu)
    {
        memmove(text, text + 3, n - 2u);             /* keeps the terminator at n - 3 */
        n -= 3;
    }
    else if (n >= 2 && ((u8)text[0] == 0xFFu || (u8)text[0] == 0xFEu))
    {
        printf("language: %s is UTF-16 - save it as CSV UTF-8\n", path);
        plat_free(text);
        return 0;
    }
    if (size != 0) *size = n;
    return text;
}

/* The translation file's text, or 0. It is a spreadsheet's CSV: `<English>;<text>` (or
 * `<id>;<text>`), one record per line, fields quoted the way CSV quotes them. Where it is looked
 * for, in this order:
 *
 *   <exe dir>\lang\<code>.csv        where a release keeps it, next to the game
 *   <exe dir>\..\lang\<code>.csv     one and two folders above the executable: the development
 *   <exe dir>\..\..\lang\<code>.csv  tree's bin\win32\icftd-recomp.exe and the repository's own
 *                                    lang\ folder at the top of it, so a run started by
 *                                    double-clicking the executable finds the file it sees
 *   lang\<code>.csv                  the working directory
 *
 * The one that was used is printed, so a missing translation is a one-line diagnosis. `name` is
 * the file's stem: "de" for the catalog, "de_ant" for the add-on's own half - and `required` says
 * whether a missing file is a diagnosis (the catalog) or simply the add-on having no German half. */
static u32 lang_read_named(const char *name, char **owned, int required)
{
    char path[LANG_PATH_MAX];
    const char *dir = plat_exe_dir();
    u32 n = 0;

    sprintf(path, "%s\\lang\\%s.csv", dir != 0 ? dir : "", name);
    if (plat_path_kind(path) != PLAT_PATH_FILE && dir != 0 && dir[0] != 0)
        sprintf(path, "%s\\..\\lang\\%s.csv", dir, name);
    if (plat_path_kind(path) != PLAT_PATH_FILE && dir != 0 && dir[0] != 0)
        sprintf(path, "%s\\..\\..\\lang\\%s.csv", dir, name);
    if (plat_path_kind(path) != PLAT_PATH_FILE) sprintf(path, "lang\\%s.csv", name);
    if (plat_path_kind(path) != PLAT_PATH_FILE)
    {
        /* The older tab-separated file is not read any more: say so instead of silently staying
         * English, which looks exactly like a translation that does not match. */
        char old[LANG_PATH_MAX];

        sprintf(old, "%s\\lang\\%s.txt", dir != 0 ? dir : "", name);
        if (dir != 0 && dir[0] != 0 && plat_path_kind(old) != PLAT_PATH_FILE)
            sprintf(old, "%s\\..\\..\\lang\\%s.txt", dir, name);
        if (plat_path_kind(old) == PLAT_PATH_FILE)
            printf("language: %s is ignored - the translation file is %s.csv\n", old, name);
        else if (required)
            printf("language: no lang\\%s.csv - the run stays English (see lang\\README.md)\n",
                   name);
        return 0;
    }
    *owned = lang_read_path(path, &n);
    if (*owned == 0) return 0;
    printf("language: %s (%lu bytes)\n", path, (unsigned long)n);
    return n;
}

/* One field of the record at `*pp`, unquoted and terminated where it lies. `*more` says whether a
 * separator followed, i.e. whether the record has another field; `*pp` is left at the start of it,
 * or past the record's line break. A field may hold the separator and line breaks when it is
 * quoted ("..." with "" for a quote), which is what a spreadsheet writes. */
static char *lang_field(char **pp, int *more)
{
    char *p = *pp, *dst, *start;
    int quoted = 0;

    *more = 0;
    if (*p == '"') { quoted = 1; p++; }
    start = dst = p;
    while (*p != 0)
    {
        if (quoted)
        {
            if (*p == '"')
            {
                if (p[1] == '"') { *dst++ = '"'; p += 2; continue; }
                p++;                              /* the closing quote */
                quoted = 0;
                continue;
            }
            *dst++ = *p++;
            continue;
        }
        if (*p == LANG_SEP || *p == '\n' || *p == '\r') break;
        *dst++ = *p++;
    }
    if (*p == LANG_SEP)
    {
        if (dst != p) *dst = 0;                   /* a quoted field ends at its copy ... */
        *p++ = 0;                                 /* ... and the separator ends it too */
        *more = 1;
        *pp = p;
        return start;
    }
    while (*p == '\r' || *p == '\n') p++;         /* CRLF or LF, or the end of the file */
    *dst = 0;                                     /* dst <= p: the next record stays whole */
    *pp = p;
    return start;
}

/* Is this text already in g_ent? It is found either by its own text or by an id-keyed row. */
static int lang_find(const char *en)
{
    u64 h = lang_hash64(en);
    u32 fold = lang_fold(h);
    int k;

    if (g_slots == 0) return -1;
    k = (int)(fold & (u32)(g_slots - 1));
    while (g_slot[k] >= 0)
    {
        int e = g_slot[k];

        if (g_entHash[e] == fold)
        {
            if (g_ent[e].en != 0)
            {
                if (strcmp(g_ent[e].en, en) == 0) return e;
            }
            else if (g_ent[e].id == h) return e;
        }
        k = (k + 1) & (g_slots - 1);
    }
    return -1;
}

/* Do these two entries name the same text? (A text-keyed row and an id-keyed one can.) */
static int lang_same(int a, int b)
{
    u64 ha = lang_entry_hash(&g_ent[a]);
    u64 hb = lang_entry_hash(&g_ent[b]);

    if (ha != hb) return 0;
    if (g_ent[a].en != 0 && g_ent[b].en != 0) return strcmp(g_ent[a].en, g_ent[b].en) == 0;
    return 1;
}

/* Allocates the table for g_entCount entries (twice as many slots as entries, rounded up to a
 * power of two) and files every entry into it. A later entry with the same text replaces the
 * earlier one, which is how a row further down the file corrects the one above it. */
static int lang_index(void)
{
    int i, slots = 2;

    if (g_slot != 0) { plat_free(g_slot); g_slot = 0; }
    if (g_entHash != 0) { plat_free(g_entHash); g_entHash = 0; }
    g_slots = 0;
    while (slots < g_entCount * 2) slots *= 2;
    g_slot = (int *)plat_alloc((u32)slots * sizeof(int));
    g_entHash = (u32 *)plat_alloc((u32)g_entCount * sizeof(u32));
    if (g_slot == 0 || g_entHash == 0) return 0;
    g_slots = slots;
    for (i = 0; i < slots; i++) g_slot[i] = -1;
    for (i = 0; i < g_entCount; i++)
    {
        u32 fold = lang_fold(lang_entry_hash(&g_ent[i]));
        int k = (int)(fold & (u32)(slots - 1));

        g_entHash[i] = fold;
        while (g_slot[k] >= 0 && !lang_same(g_slot[k], i)) k = (k + 1) & (slots - 1);
        g_slot[k] = i;
    }
    return 1;
}

/* Files the records of one catalog text into g_ent/g_pool, starting at pool offset `*at`. Rows are
 * kept in file order, so a later row for the same text wins (lang_index) - and the add-on's half is
 * filed after the base one, which is how it may correct a line for the add-on. */
static void lang_parse_catalog(char *text, u32 *at, u32 poolSize)
{
    char *p = text;

    while (*p != 0 && g_entCount < LANG_MAX_ENTRIES)
    {
        int more;
        char *key = lang_field(&p, &more);
        char *second = more ? lang_field(&p, &more) : 0;
        char *third = more ? lang_field(&p, &more) : 0;
        /* Two fields are <key>;<text>. Three are the translator's file, <id>;<English>;<text>
         * - the middle one is for the translator's eyes and is never looked up. */
        char *value = third != 0 ? third : second;
        u64 id;

        while (more) lang_field(&p, &more);      /* a record with more fields than that */

        /* A comment record has one field (or starts with #), and an empty text field is the
         * placeholder the exporter leaves for a translator who has not got there yet. */
        if (key[0] == 0 || key[0] == '#') continue;
        if (value == 0 || value[0] == 0) continue;
        g_ent[g_entCount].text = g_pool + *at;
        *at += lang_convert(value, g_pool + *at, poolSize > *at ? poolSize - *at : 0) + 1u;
        id = lang_key_id(key);
        if (id != 0) { g_ent[g_entCount].en = 0; g_ent[g_entCount].id = id; }
        else { g_ent[g_entCount].en = key; g_ent[g_entCount].id = 0; }
        g_entCount++;
        g_fromFile++;
    }
}

u32 rt_lang_set(const char *code)
{
    u32 poolSize = 0, at = 0;

    /* The code is a language name, "de", "fr", ... - lower case, and no path punctuation: it
     * becomes part of the file name below ("en" - and anything that is not a usable code - is the
     * original's English). */
    lang_code_of(code, g_codeBuf);

    lang_free();
    g_code = g_codeBuf[0] != 0 ? g_codeBuf : "en";
    if (strcmp(g_code, "en") == 0) return 0;
    /* Only a complete translation is a language: the settings view offers nothing else, and a file
     * that misses a line would draw a mixture of two languages (see lang_scan). */
    lang_scan();
    if (rt_lang_available_index(g_code) < 0)
    {
        printf("language: %s is not a complete translation - the run stays English\n", g_code);
        g_code = "en";
        return 0;
    }

    /* The file is read first: the rows are kept in file order, so a later row for the same text
     * replaces an earlier one - which is how a translator's correction wins over the row above
     * it. No file, no translation: the run stays English rather than half a language. */
    if (lang_read_named(g_code, &g_owned, 1) == 0) return 0;

    /* The add-on's own script is a second file, `<code>_ant.csv`: the base catalog already carries
     * the interface and everything the two games share, so this one holds the add-on's rooms, its
     * people and its narration. It is measured against `en_ant.csv` when that source is here (the
     * development tree) and merged in afterwards; a half-translated one would draw a mixture for
     * the add-on alone, so it is skipped - and named - instead. */
    {
        char antName[LANG_CODE_MAX + 8];

        sprintf(antName, "%s_ant", g_code);
        if (lang_read_named(antName, &g_ownedAnt, 0) != 0)
        {
            int missing = 0;

            if (!lang_ant_complete_text(g_ownedAnt, &missing))
            {
                printf("language: %s is not complete for Antheads (%d of %d line(s) missing) - "
                       "the add-on's text stays English\n", antName, missing, g_reqAntCount);
                plat_free(g_ownedAnt);
                g_ownedAnt = 0;
            }
        }
    }

    g_ent = (lang_entry *)plat_alloc((u32)LANG_MAX_ENTRIES * sizeof(lang_entry));
    g_machAddr = (u32 *)plat_alloc((u32)LANG_MAX_ENTRIES * sizeof(u32));
    poolSize = 64u + (u32)strlen(g_owned) * 2u + 256u;
    if (g_ownedAnt != 0) poolSize += (u32)strlen(g_ownedAnt) * 2u;
    g_pool = (char *)plat_alloc(poolSize);
    if (g_ent == 0 || g_pool == 0 || g_machAddr == 0) { lang_free(); g_code = "en"; return 0; }

    lang_parse_catalog(g_owned, &at, poolSize);
    if (g_ownedAnt != 0)
    {
        printf("language: %s adds the add-on's own lines\n", g_code);
        lang_parse_catalog(g_ownedAnt, &at, poolSize);
    }
    if (g_fromFile == 0)
        printf("language: %s holds no translation - is the field separator ';' "
               "(a comma-separated export will not work)?\n", g_code);

    if (g_entCount == 0 || lang_index() == 0) { lang_free(); g_code = "en"; return 0; }
    g_on = 1;
    return 1;
}

u32 rt_lang_on(void) { return (u32)g_on; }
const char *rt_lang_code(void) { return g_code; }

int rt_lang_key_count(void) { return LANG_KEY_COUNT; }

const char *rt_lang_key(int i)
{
    return i >= 0 && i < LANG_KEY_COUNT ? g_interface[i] : 0;
}

/* The id a translation row is keyed by (lang_source.c writes it, tools\lang-export.ps1 computes
 * it in C#): FNV-1a over the bytes of the English text. */
u64 rt_lang_id(const char *en)
{
    return lang_hash64(en);
}

const char *rt_lang_text(const char *en)
{
    int e;

    if (en == 0 || !g_on || g_ent == 0) return en;
    e = lang_find(en);
    return e >= 0 ? g_ent[e].text : en;
}

/* --- the machine's copy -------------------------------------------------------------------- */

u32 rt_lang_open(rt_machine *m)
{
    u32 at = LANG_BASE;
    int i, k, skipped = 0;

    g_m = m;
    g_open = 0;
    if (!g_on || g_ent == 0 || m == 0) return 0;

    for (i = 0; i < g_entCount; i++)
    {
        const char *s = g_ent[i].text;
        u32 len = (u32)strlen(s) + 1u;

        if (at + len + LANG_SCRATCH_COUNT * LANG_SCRATCH_LEN +
                LANG_STORY_COUNT * LANG_STORY_LEN > LANG_BASE + LANG_BYTES ||
            at + len >= m->mem.size)
        {
            skipped++;                       /* the region is full: this row stays English */
            g_machAddr[i] = 0;
            continue;
        }
        rt_mem_load(&m->mem, at, (const u8 *)s, len);
        g_machAddr[i] = at;
        at += len;
    }
    for (k = 0; k < LANG_SCRATCH_COUNT; k++)
    {
        g_scratch[k] = at;
        at += LANG_SCRATCH_LEN;
    }
    for (k = 0; k < LANG_STORY_COUNT; k++)
    {
        g_story[k] = at;
        at += LANG_STORY_LEN;
    }
    g_scratchNext = 0;
    g_storyNext = 0;
    g_open = 1;
    if (skipped != 0)
        printf("language: %d of %d line(s) did not fit the catalog region and stay English\n",
               skipped, g_entCount);
    return 1;
}

void rt_lang_close(void)
{
    g_open = 0;
    g_m = 0;
    lang_free();
    g_code = "en";
}

/* --- messages the engine formats at run time -----------------------------------------------
 * Their text changes with every place and every minute ("Sleep for 3 hours.", "June 3, 1951 -
 * 09:05 a.m."), so no row of the file can be a row for one of them. What the file holds instead is
 * their *format* - the English shape with the numbers left out, and its translation with the
 * numbers in the same order - and the engine recognises the shape, reads the numbers out and lays
 * them into the translated format. Everything else stays English. */

static const char *lang_number(const char *s, int *out)
{
    int n = 0, digits = 0;

    while (*s >= '0' && *s <= '9') { n = n * 10 + (*s - '0'); s++; digits++; }
    *out = n;
    return digits != 0 ? s : 0;
}

/* The number of %-specifiers in a format, "%%" not counted as one. */
static int lang_specs(const char *f)
{
    int n = 0;

    for (; *f != 0; f++)
    {
        if (*f != '%') continue;
        if (f[1] == '%') { f++; continue; }
        n++;
        while (f[1] != 0 && (f[1] == '-' || f[1] == '+' || f[1] == '0' || f[1] == ' ' ||
                             (f[1] >= '0' && f[1] <= '9') || f[1] == '.' || f[1] == '#'))
            f++;
    }
    return n;
}

/* The translated format for an English one, when the translation takes the same arguments;
 * otherwise the English format, so a mistyped row reads the right arguments rather than overrun
 * them. */
static const char *lang_format(const char *en, int specs)
{
    const char *text = rt_lang_text(en);

    return text != en && lang_specs(text) == specs ? text : en;
}

/* "June 3, 1951 - 09:05 a.m." (the 1989 game's clock line, FUN_000055BA) and
 * "January 1, 1956 - 09:19 a.m." (the add-on's twin): the same shape with its own month and year,
 * each rebuilt from its own format row. */
static int lang_clock(char *out, u32 max, const char *s)
{
    int day, hh, mm;
    const char *p, *fmt, *rest;
    u32 skip;

    if (strncmp(s, "June ", 5) == 0)
    {
        fmt = "June %d, 1951 - %02d:%02d %s";
        rest = ", 1951 - ";
        p = lang_number(s + 5, &day);
    }
    else if (strncmp(s, "January ", 8) == 0)
    {
        fmt = "January %d, 1956 - %02d:%02d %s";
        rest = ", 1956 - ";
        p = lang_number(s + 8, &day);
    }
    else return 0;

    skip = (u32)strlen(rest);
    if (p == 0 || strncmp(p, rest, skip) != 0) return 0;
    p = lang_number(p + skip, &hh);
    if (p == 0 || *p != ':') return 0;
    p = lang_number(p + 1, &mm);
    if (p == 0) return 0;
    if (strcmp(p, " a.m.") != 0 && strcmp(p, " p.m.") != 0) return 0;
    sprintf(out, lang_format(fmt, 4), day, hh, mm, rt_lang_text(p + 1));
    return (u32)strlen(out) < max;
}

/* "Sorry, %s has been destroyed." and "Sorry, %s is closed. It will open again at %d:00 %s."
 * (FUN_00003B1E), with the place's own name translated as well. */
static int lang_sorry(char *out, u32 max, const char *s)
{
    static const char destroyed[] = " has been destroyed.";
    static const char closed[] = " is closed. It will open again at ";
    char name[80];
    const char *body, *end;
    u32 n;

    if (strncmp(s, "Sorry, ", 7) != 0) return 0;
    body = s + 7;

    end = strstr(body, destroyed);
    if (end != 0)
    {
        n = (u32)(end - body);
        if (n >= sizeof name) return 0;
        memcpy(name, body, n);
        name[n] = 0;
        sprintf(out, lang_format("Sorry, %s has been destroyed.", 1), rt_lang_text(name));
        return (u32)strlen(out) < max;
    }

    end = strstr(body, closed);
    if (end != 0)
    {
        int hour;
        const char *p;

        n = (u32)(end - body);
        if (n >= sizeof name) return 0;
        memcpy(name, body, n);
        name[n] = 0;
        p = lang_number(end + sizeof closed - 1u, &hour);
        if (p == 0 || strncmp(p, ":00 ", 4) != 0) return 0;
        p += 4;
        if (strncmp(p, "a.m.", 4) != 0 && strncmp(p, "p.m.", 4) != 0) return 0;
        sprintf(out, lang_format("Sorry, %s is closed. It will open again at %d:00 %s.", 3),
                rt_lang_text(name), hour, rt_lang_text(p));
        return (u32)strlen(out) < max;
    }
    return 0;
}

/* "Sleep for %d hours." (FUN_00008E56). */
static int lang_sleep(char *out, u32 max, const char *s)
{
    int hours;
    const char *p;

    if (strncmp(s, "Sleep for ", 10) != 0) return 0;
    p = lang_number(s + 10, &hours);
    if (p == 0 || strncmp(p, " hours.", 7) != 0) return 0;
    sprintf(out, lang_format("Sleep for %d hours.", 1), hours);
    return (u32)strlen(out) < max;
}

/* The add-on's fortune-teller hints, which carry the number she names: "The number 5. Hmmmmmm,
 * wonder what that could mean." and "There's just one other thing. I don't know if this means
 * anything, but the number 5 keeps going through my head." */
static int lang_number_hint(char *out, u32 max, const char *s)
{
    static const char hint1[] = "The number ";
    static const char hint1Tail[] = ". Hmmmmmm, wonder what that could mean.";
    static const char hint2[] =
        "There's just one other thing. I don't know if this means anything, but the number ";
    static const char hint2Tail[] = " keeps going through my head.";
    const char *fmt, *p;
    int n;

    if (strncmp(s, hint1, sizeof hint1 - 1u) == 0)
    {
        fmt = "The number %d. Hmmmmmm, wonder what that could mean.";
        p = lang_number(s + sizeof hint1 - 1u, &n);
        if (p == 0 || strcmp(p, hint1Tail) != 0) return 0;
    }
    else if (strncmp(s, hint2, sizeof hint2 - 1u) == 0)
    {
        fmt = "There's just one other thing. I don't know if this means anything, but the number %d "
              "keeps going through my head.";
        p = lang_number(s + sizeof hint2 - 1u, &n);
        if (p == 0 || strcmp(p, hint2Tail) != 0) return 0;
    }
    else return 0;
    sprintf(out, lang_format(fmt, 1), n);
    return (u32)strlen(out) < max;
}

/* "ETA: %02d:%02d" (the flight's arrival line) and "REEL %d" (the boot's disk swap). */
static int lang_prefix(char *out, u32 max, const char *s)
{
    int first, second;
    const char *p;

    if (strncmp(s, "ETA: ", 5) == 0)
    {
        p = lang_number(s + 5, &first);
        if (p == 0 || *p != ':') return 0;
        p = lang_number(p + 1, &second);
        if (p == 0 || *p != 0) return 0;
        sprintf(out, lang_format("ETA: %02d:%02d", 2), first, second);
        return (u32)strlen(out) < max;
    }
    if (strncmp(s, "REEL ", 5) == 0)
    {
        p = lang_number(s + 5, &first);
        if (p == 0 || *p != 0) return 0;
        sprintf(out, lang_format("REEL %d", 1), first);
        return (u32)strlen(out) < max;
    }
    return 0;
}

/* The next scratch line, filled with `len` bytes of `text`. A translated string handed to a
 * routine is always a copy: FUN_0000510E paginates by writing NULs into the string it is given, so
 * a shared catalog entry would be destroyed by the first page. */
static u32 lang_scratch(rt_machine *m, const char *text, u32 len)
{
    u32 addr;

    if (len > LANG_SCRATCH_LEN) return 0;
    addr = g_scratch[g_scratchNext];
    g_scratchNext = (g_scratchNext + 1) % LANG_SCRATCH_COUNT;
    rt_mem_load(&m->mem, addr, (const u8 *)text, len);
    return addr;
}

/* The same for a whole story page, which the page runners edit and then walk on. A text longer
 * than the copy stays English (nothing is written), which is only a story record over a kilobyte. */
static u32 lang_story(rt_machine *m, const char *text, u32 len)
{
    u32 addr;

    if (len > LANG_STORY_LEN) return 0;
    addr = g_story[g_storyNext];
    g_storyNext = (g_storyNext + 1) % LANG_STORY_COUNT;
    rt_mem_load(&m->mem, addr, (const u8 *)text, len);
    return addr;
}

/* The translation of a formatted message, rebuilt in `line`; 0 when the text is not one of the
 * messages above. */
static int lang_message(char *line, u32 max, const char *s)
{
    int ok;

    if (s[0] == 'J') ok = lang_clock(line, max, s);
    else if (s[0] == 'S') ok = lang_sorry(line, max, s) || lang_sleep(line, max, s);
    else if (s[0] == 'T') ok = lang_number_hint(line, max, s);
    else if (s[0] == 'E' || s[0] == 'R') ok = lang_prefix(line, max, s);
    else return 0;
    return ok;
}

/* Is this one of them? A dump of the game's text leaves those out: the program formats them, so a
 * row for one exact clock time in a translator's file would be a row for that time alone. */
int rt_lang_is_message(const char *en)
{
    char line[LANG_SCRATCH_LEN];

    if (en == 0 || en[0] == 0) return 0;
    return lang_message(line, sizeof line, en);
}

/* The translation of a formatted message, rebuilt in the next scratch line. 0 when the text is not
 * one of the messages above. */
u32 rt_lang_pattern(rt_machine *m, const char *s)
{
    char line[LANG_SCRATCH_LEN];

    if (!lang_message(line, sizeof line, s)) return 0;
    return lang_scratch(m, line, (u32)strlen(line) + 1u);
}

/* --- a complete translation: what the settings view may offer -------------------------------
 * The player's own translations live in the same folder as the shipped one and are found, not
 * listed: at start-up the language folders are browsed and every `<code>.csv` with a two-letter
 * code is measured against the lines the game needs. Only a complete one becomes a language the
 * settings view offers and [GAME] language may name - a file that translates part of the game
 * would draw a mixture of two languages, which looks like a broken translation rather than like
 * an unfinished one.
 *
 * What "complete" means, exactly: every line of the interface's own vocabulary (g_interface - the
 * menus, the map's places, the boot's messages, the port's screens and the formats) and, when the
 * source text `lang\en.csv` is there, every id it lists (the game's own script, which only that
 * file can enumerate). A format has to keep the English row's `%` marks, since the game fills the
 * numbers in. The original's English is not a file: it is the first of the list, always. */

#define LANG_SEEN_MAX 64
#define LANG_FMT_MAX  16                        /* interface formats ("... %d ...")             */

typedef struct lang_seen
{
    char code[LANG_SEEN_MAX][3];
    int count;
} lang_seen;

static u64 *g_req;                              /* the ids a complete file has to carry, sorted */
static int g_reqCount;
static int g_reqCap;
static u64 g_fmtId[LANG_FMT_MAX];               /* an interface format's id, and its % marks   */
static int g_fmtSpecs[LANG_FMT_MAX];
static int g_fmtCount;

/* The value a record is filed under, whichever way it names its text: its id, or the id of the
 * English text itself (the older form). */
static u64 lang_row_key(const char *key)
{
    u64 id = lang_key_id(key);

    return id != 0 ? id : lang_hash64(key);
}

static int lang_req_add_to(u64 **arr, int *count, int *cap, u64 id)
{
    if (*count == *cap)
    {
        int grow = *cap != 0 ? *cap * 2 : 512;
        u64 *grown = (u64 *)plat_alloc((u32)grow * sizeof(u64));

        if (grown == 0) return 0;
        if (*arr != 0)
        {
            memcpy(grown, *arr, (u32)*count * sizeof(u64));
            plat_free(*arr);
        }
        *arr = grown;
        *cap = grow;
    }
    (*arr)[(*count)++] = id;
    return 1;
}

static int lang_req_add(u64 id) { return lang_req_add_to(&g_req, &g_reqCount, &g_reqCap, id); }
static int lang_ant_req_add(u64 id)
{
    return lang_req_add_to(&g_reqAnt, &g_reqAntCount, &g_reqAntCap, id);
}

static int lang_u64_cmp(const void *a, const void *b)
{
    u64 x = *(const u64 *)a, y = *(const u64 *)b;

    return x < y ? -1 : x > y ? 1 : 0;
}

/* The required id's index, -1 when no line needs it. */
static int lang_u64_find(const u64 *arr, int count, u64 id)
{
    int lo = 0, hi = count - 1;

    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;

        if (arr[mid] == id) return mid;
        if (arr[mid] < id) lo = mid + 1;
        else hi = mid - 1;
    }
    return -1;
}

static int lang_req_find(u64 id) { return lang_u64_find(g_req, g_reqCount, id); }

/* The % marks an interface format takes, -1 when the id is not one of them. */
static int lang_fmt_specs(u64 id)
{
    int f;

    for (f = 0; f < g_fmtCount; f++)
        if (g_fmtId[f] == id) return g_fmtSpecs[f];
    return -1;
}

/* The i-th folder a translation is read from (0..3), in lang_read_file's order; 0 for a folder
 * this platform has no name for. Called one at a time so a caller needs a single path buffer. */
static int lang_dir(int i, char *path)
{
    const char *dir = plat_exe_dir();

    if (i == 0)
    {
        sprintf(path, "%s\\lang", dir != 0 ? dir : "");
        return 1;
    }
    if (i == 3)
    {
        strcpy(path, "lang");
        return 1;
    }
    if (dir == 0 || dir[0] == 0) return 0;
    sprintf(path, i == 1 ? "%s\\..\\lang" : "%s\\..\\..\\lang", dir);
    return 1;
}

/* The first source file `name` in the language folders, in lang_dir's order, or 0. */
static char *lang_read_source(const char *name, char *usedPath)
{
    char dir[LANG_PATH_MAX];
    int i;

    for (i = 0; i < 4 && lang_dir(i, dir); i++)
    {
        char path[LANG_PATH_MAX];
        char *text;

        sprintf(path, "%s\\%s", dir, name);
        text = lang_read_path(path, 0);
        if (text == 0) continue;
        if (usedPath != 0) strcpy(usedPath, path);
        return text;
    }
    return 0;
}

/* `count` ids in `arr`, sorted and made distinct. An empty set stays empty: there is no `arr` to
 * sort then (the add-on's own list is empty until `en_ant.csv` is there to be read), and a count
 * of one would name an id no row carries - the add-on's half would be measured against nothing
 * and index into the missing array. */
static void lang_req_sorted_distinct(u64 *arr, int *count)
{
    int i, d;

    if (*count <= 0) { *count = 0; return; }
    qsort(arr, (size_t)*count, sizeof(arr[0]), lang_u64_cmp);
    d = 1;
    for (i = 1; i < *count; i++)
        if (arr[i] != arr[d - 1]) arr[d++] = arr[i];
    *count = d;
}

/* The ids a complete translation has to carry: the interface's vocabulary, plus the game's own
 * script when its source text is there. The add-on's script (`en_ant.csv`) is a second set, kept
 * apart: the base catalog already covers every id the two games share, so only what is left over
 * is asked of `<code>_ant.csv`. Sorted and made distinct for the lookups above. */
static int lang_required_build(void)
{
    char path[LANG_PATH_MAX];
    char *text, *p;
    int i;

    for (i = 0; i < LANG_KEY_COUNT; i++)
    {
        int specs = lang_specs(g_interface[i]);

        if (!lang_req_add(lang_hash64(g_interface[i]))) return 0;
        if (specs > 0 && g_fmtCount < LANG_FMT_MAX)
        {
            g_fmtId[g_fmtCount] = lang_hash64(g_interface[i]);
            g_fmtSpecs[g_fmtCount] = specs;
            g_fmtCount++;
        }
    }

    text = lang_read_source("en.csv", path);
    if (text != 0)
    {
        printf("language: the source text %s sets what a complete translation needs\n", path);
        for (p = text; *p != 0; )
        {
            int more;
            char *key = lang_field(&p, &more);
            char *second = more ? lang_field(&p, &more) : 0;
            char *third = more ? lang_field(&p, &more) : 0;
            char *english = third != 0 ? third : second;

            while (more) lang_field(&p, &more);
            if (key[0] == 0 || key[0] == '#') continue;
            if (english == 0 || english[0] == 0) continue;
            if (!lang_req_add(lang_row_key(key))) { plat_free(text); return 0; }
        }
        plat_free(text);
    }
    lang_req_sorted_distinct(g_req, &g_reqCount);

    text = lang_read_source("en_ant.csv", path);
    if (text != 0)
    {
        printf("language: the source text %s sets what the add-on's own half needs\n", path);
        for (p = text; *p != 0; )
        {
            int more;
            char *key = lang_field(&p, &more);
            char *second = more ? lang_field(&p, &more) : 0;
            char *third = more ? lang_field(&p, &more) : 0;
            char *english = third != 0 ? third : second;
            u64 id;

            while (more) lang_field(&p, &more);
            if (key[0] == 0 || key[0] == '#') continue;
            if (english == 0 || english[0] == 0) continue;
            id = lang_row_key(key);
            /* The base file already answers every line both games draw; a row for one of those
             * would only repeat it (and could disagree with it). */
            if (lang_req_find(id) >= 0) continue;
            if (!lang_ant_req_add(id)) { plat_free(text); return 0; }
        }
        plat_free(text);
    }
    lang_req_sorted_distinct(g_reqAnt, &g_reqAntCount);

    return g_reqCount > 0;
}

/* 1 when the file at `path` translates every required line; `missing` is how many it does not. */
static int lang_complete(const char *path, int *missing)
{
    char *text = lang_read_path(path, 0);
    u8 *hit;
    int left;

    if (missing != 0) *missing = g_reqCount;
    if (text == 0 || g_reqCount == 0) return 0;
    hit = (u8 *)plat_alloc((u32)g_reqCount);
    if (hit == 0) return 0;
    memset(hit, 0, (u32)g_reqCount);
    left = g_reqCount;

    {
        char *p;

        for (p = text; *p != 0; )
        {
            int more, k = -1, want;
            char *key = lang_field(&p, &more);
            char *second = more ? lang_field(&p, &more) : 0;
            char *third = more ? lang_field(&p, &more) : 0;
            char *value = third != 0 ? third : second;
            u64 id;

            while (more) lang_field(&p, &more);
            if (key[0] == 0 || key[0] == '#') continue;
            if (value == 0 || value[0] == 0) continue;
            id = lang_row_key(key);
            k = lang_req_find(id);
            if (k < 0 || hit[k]) continue;
            /* A format whose % marks differ is drawn in English (lang_format), so it is no
             * translation of that line. */
            want = lang_fmt_specs(id);
            if (want >= 0 && lang_specs(value) != want) continue;
            hit[k] = 1;
            left--;
        }
    }
    plat_free(hit);
    plat_free(text);
    if (missing != 0) *missing = left;
    return left == 0;
}

/* 1 when the add-on's half translates every id `en_ant.csv` names that the base catalog does not
 * already cover; `missing` is how many it does not. With no add-on source (a release has none) the
 * file cannot be measured and is accepted as it is. The text is parsed on a copy: lang_field
 * terminates the fields it walks through, and the catalog needs the file whole afterwards. */
static int lang_ant_complete_text(const char *text, int *missing)
{
    char *copy, *p;
    u8 *hit;
    int left;

    if (missing != 0) *missing = g_reqAntCount;
    if (g_reqAntCount == 0) return 1;
    copy = (char *)plat_alloc((u32)strlen(text) + 1u);
    if (copy == 0) return 0;
    strcpy(copy, text);
    hit = (u8 *)plat_alloc((u32)g_reqAntCount);
    if (hit == 0) { plat_free(copy); return 0; }
    memset(hit, 0, (u32)g_reqAntCount);
    left = g_reqAntCount;

    for (p = copy; *p != 0; )
    {
        int more, k;
        char *key = lang_field(&p, &more);
        char *second = more ? lang_field(&p, &more) : 0;
        char *third = more ? lang_field(&p, &more) : 0;
        char *value = third != 0 ? third : second;

        while (more) lang_field(&p, &more);
        if (key[0] == 0 || key[0] == '#') continue;
        if (value == 0 || value[0] == 0) continue;
        k = lang_u64_find(g_reqAnt, g_reqAntCount, lang_row_key(key));
        if (k < 0 || hit[k]) continue;
        hit[k] = 1;
        left--;
    }
    plat_free(hit);
    plat_free(copy);
    if (missing != 0) *missing = left;
    return left == 0;
}

/* 1 for `name` being a two-letter code and the .csv suffix ("de.csv", "DE.CSV"); `code` is left
 * lower case. */
static int lang_file_code(const char *name, char *code)
{
    static const char suffix[] = ".csv";
    int i;

    for (i = 0; i < 2; i++)
    {
        char c = name[i];

        if (c >= 'A' && c <= 'Z') c = (char)(c - 'A' + 'a');
        if (c < 'a' || c > 'z') return 0;
        code[i] = c;
    }
    code[2] = 0;
    for (i = 0; i < 4; i++)
    {
        char a = name[2 + i], b = suffix[i];

        if (a >= 'A' && a <= 'Z') a = (char)(a - 'A' + 'a');
        if (a != b) return 0;
    }
    return name[6] == 0;
}

static void lang_any_visit(const char *name, u32 size, void *ctx)
{
    char code[LANG_CODE_MAX + 1];

    (void)size;
    if (*(int *)ctx == 0 && lang_file_code(name, code)) *(int *)ctx = 1;
}

/* The folder a generated file goes in: the first language folder that already holds a translation
 * (the copy lang_read_file would read), else the folder next to the executable - the one a release
 * ships its `lang\` as. */
u32 rt_lang_write_dir(char *path, u32 max)
{
    char dir[LANG_PATH_MAX];
    int i, pick = -1;

    for (i = 0; i < 4 && lang_dir(i, dir); i++)
    {
        int found = 0;

        if (i == 0 && dir[0] == '\\') continue;         /* an empty exe dir would name the root */
        if (pick < 0) pick = i;
        plat_dir_files(dir, lang_any_visit, &found);
        if (found && strlen(dir) + 1u <= max)
        {
            strcpy(path, dir);
            return 1;
        }
    }
    if (pick < 0 || !lang_dir(pick, dir) || strlen(dir) + 1u > max) return 0;
    strcpy(path, dir);
    return 1;
}

typedef struct lang_scan_ctx
{
    const char *dir;
    lang_seen *seen;
} lang_scan_ctx;

static void lang_scan_file(const char *name, u32 size, void *ctxp)
{
    lang_scan_ctx *ctx = (lang_scan_ctx *)ctxp;
    char code[LANG_CODE_MAX + 1];
    char path[LANG_PATH_MAX];
    int i, missing = 0;

    (void)size;
    if (!lang_file_code(name, code)) return;
    if (strcmp(code, "en") == 0) return;        /* the original's English needs no file */
    for (i = 0; i < ctx->seen->count; i++)
        if (strcmp(ctx->seen->code[i], code) == 0) return;
    /* An earlier folder's copy is the one lang_read_file would read, so it decides - complete or
     * not - and this one is not looked at again. */
    if (ctx->seen->count >= LANG_SEEN_MAX) return;
    strcpy(ctx->seen->code[ctx->seen->count++], code);

    sprintf(path, "%s\\%s", ctx->dir, name);
    if (!lang_complete(path, &missing))
    {
        printf("language: %s is not a complete translation (%d of %d line(s) missing) - "
               "not offered\n", path, missing, g_reqCount);
        return;
    }
    if (g_availCount >= LANG_AVAILABLE_MAX)
    {
        printf("language: %s is complete, but only %d language(s) fit the list\n", path,
               LANG_AVAILABLE_MAX - 1);
        return;
    }
    strcpy(g_avail[g_availCount++], code);
    printf("language: found %s (%s)\n", code, path);
}

static u32 lang_scan(void)
{
    char dir[LANG_PATH_MAX];
    lang_seen seen;
    int i;

    if (g_scanned) return (u32)(g_availCount - 1);
    g_scanned = 1;
    g_availCount = 0;
    strcpy(g_avail[g_availCount++], "en");
    if (!lang_required_build())
    {
        printf("language: no key list to measure a translation against - English only\n");
        return 0;
    }

    seen.count = 0;
    for (i = 0; i < 4 && lang_dir(i, dir); i++)
    {
        lang_scan_ctx ctx;

        ctx.dir = dir;
        ctx.seen = &seen;
        plat_dir_files(dir, lang_scan_file, &ctx);
    }

    printf("language: %d language(s) offered:", g_availCount);
    for (i = 0; i < g_availCount; i++) printf(" %s", g_avail[i]);
    printf("\n");
    return (u32)(g_availCount - 1);
}

u32 rt_lang_scan(void) { return lang_scan(); }

int rt_lang_available_count(void)
{
    lang_scan();
    return g_availCount > 0 ? g_availCount : 1;
}

const char *rt_lang_available(int i)
{
    lang_scan();
    return i >= 0 && i < g_availCount ? g_avail[i] : 0;
}

int rt_lang_available_index(const char *code)
{
    char c[LANG_CODE_MAX + 1];
    int i;

    lang_scan();
    if (lang_code_of(code, c) == 0) return -1;
    for (i = 0; i < g_availCount; i++)
        if (strcmp(g_avail[i], c) == 0) return i;
    return -1;
}

/* --- the lookup the front end's function-entry hook makes ---------------------------------- */

const char *rt_lang_probe(rt_machine *m, u32 arg)
{
    const char *p;
    u32 i;

    if (m == 0) return 0;
    if (arg < 0x100u || arg >= m->mem.size) return 0;
    p = (const char *)m->mem.base + arg;
    /* The first argument of a text routine is a string; every other function's is not. Rejecting
     * anything but printable text keeps the cost of a call to one load while a language is
     * selected. */
    if ((u8)p[0] < 0x20u || (u8)p[0] > 0x7Eu) return 0;
    for (i = 0; i < LANG_KEY_MAX; i++)
    {
        u8 c;

        if (arg + i >= m->mem.size) return 0;
        c = (u8)p[i];
        if (c == 0) break;
        if (c < 0x20u && c != '\n' && c != '\t') return 0;   /* control bytes: not text */
    }
    if (i == LANG_KEY_MAX || arg + i >= m->mem.size) return 0;
    return p;
}

u32 rt_lang_arg(rt_machine *m, u32 arg, int writable)
{
    const char *p;
    int e;

    if (!g_open || m != g_m) return 0;
    p = rt_lang_probe(m, arg);
    if (p == 0) return 0;

    e = lang_find(p);
    if (e >= 0 && g_machAddr[e] != 0)
    {
        const char *text = g_ent[e].text;

        return writable ? lang_story(m, text, (u32)strlen(text) + 1u) : g_machAddr[e];
    }
    return rt_lang_pattern(m, p);
}
