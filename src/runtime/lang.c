/* German for the game's text. See lang.h.
 *
 * The catalog is keyed by the English text exactly as the engine (or a port surface) has it, so a
 * lookup is a plain byte comparison - no ids to keep in step, and a string that is not in the
 * catalog simply stays English.
 *
 * The German side is written in UTF-8 and converted to the font's own character codes at start-up
 * (see lang_font_code): the disk font `fonts\newnem.font` carries ASCII only, so the umlauts are
 * drawn as a base letter plus a diaeresis (display.c) and code 0x80..0x85 selects them. 'ß' is
 * spelled "ss", which is what the font can show.
 */
#include "lang.h"

#include <stdio.h>
#include <string.h>

#include "platform.h"

/* Where the catalog is copied to: above the emulated stack (EMU_STACK_TOP) and below the library
 * base blocks (EMU_LIB_BASE), a range the machine model never allocates from. A German run
 * therefore starts with the same RAM an English one does - no heap block moved. */
#define LANG_BASE 0x00184000u
#define LANG_BYTES 0x0003C000u          /* up to EMU_LIB_BASE at 0x1C0000 */

/* One scratch line per formatted string, for the messages the engine builds at run time
 * ("June %d, 1951 - ...", "Sorry, %s has been closed. ..."), which cannot have a catalog entry of
 * their own. A small ring, because a caller may hold one line across the next lookup. */
#define LANG_SCRATCH_COUNT 4
#define LANG_SCRATCH_LEN   320

/* A long text is handed to the page runners, which split it into pages *in the string itself*
 * (NULs at the breaks) and then keep walking it. So a translated story page is a copy of its own,
 * big enough for a whole narration record (the longest is some 700 bytes) and never the shared
 * catalog entry. */
#define LANG_STORY_COUNT   4
#define LANG_STORY_LEN     1024

/* The longest catalog key. A narration record runs to some 700 characters, so this has to hold a
 * whole story page; a longer run of text at a text routine's argument is never a catalog entry. */
#define LANG_KEY_MAX 1024

typedef struct lang_pair
{
    const char *en;
    const char *de;
} lang_pair;

static const lang_pair g_catalog[] =
{
    /* --- the engine's own interface ------------------------------------------------------- */
    { "Look North",                     "Norden ansehen" },
    { "Look South",                     "Süden ansehen" },
    { "Look West",                      "Westen ansehen" },
    { "Look East",                      "Osten ansehen" },
    { "Go to Map",                      "Zur Karte" },
    { "Situation Map",                  "Lagekarte" },
    { "Make a Call",                    "Anrufen" },
    { "Answer the Door",                "Tür öffnen" },
    { "Fight",                          "Kämpfen" },
    { "Escape Hospital",                "Krankenhaus verlassen" },
    { "Take a Flight",                  "Flug machen" },
    { "Fire Game",                      "Feuer löschen" },
    { "There's no one around.",         "Hier ist niemand." },
    { "Nothing's happening here.",      "Hier passiert nichts." },
    { "No one's home.",                 "Niemand zu Hause." },
    { "Everyone's out at the moment.",  "Im Moment ist niemand da." },
    { "Sorry, you can only get there through the Ore Plant.",
      "Tut mir leid, dorthin geht es nur über das Erzwerk." },
    { "Sorry, no visiting is allowed.", "Tut mir leid, Besuche sind nicht erlaubt." },
    { "Sleep for %d hours.",            "Schlafen für %d Stunden." },
    { "Game Paused. Press left mouse button to continue.",
      "Spiel pausiert. Linke Maustaste zum Fortsetzen." },
    { "Game paused. Press left",        "Spiel pausiert. Linke" },
    { "mouse button to continue",       "Maustaste zum Fortsetzen" },
    { "Show new evidence",              "Neue Beweise zeigen" },
    { "Want ant info?",                 "Ameisen-Infos?" },
    { "Now about this other evidence you brought...", "Nun zu den anderen Beweisen..." },
    { "Arsenal",                        "Waffenlager" },
    { "Sleep",                          "Schlafen" },

    /* The room action labels live in the room's own data bank (desert.dat), not in the program,
     * so they are listed here with the program's own menu strings. */
    { "Answer Door",                    "Tür öffnen" },
    { "Bert on Phone",                  "Bert am Telefon" },
    { "Continue",                       "Weiter" },
    { "Next",                           "Weiter" },
    { "enough evidence?",               "Genug Beweise?" },
    { "fluid proof",                    "Beweis: Flüssigkeit" },
    { "sound proof",                    "Beweis: Ton" },
    { "tissue proof",                   "Beweis: Gewebe" },
    { "track proof",                    "Beweis: Spur" },
    { "Look at Samples",                "Proben ansehen" },
    { "Talk to Biff",                   "Mit Biff reden" },
    { "Go to Map Down",                 "Zur Karte" },
    { "Go to NOMAP",                    "Zur Karte" },
    { "Hospital",                       "Krankenhaus" },
    { "M-4 Mine",                       "Mine M-4" },
    { "Police Station",                 "Polizeiwache" },
    { "Can't allocate animation bitmaps.", "Animations-Bitmaps nicht verfügbar." },
    { "Can't open animation views.",    "Animations-Views nicht verfügbar." },
    { "Can't open animation rastport.", "Animations-RastPort nicht verfügbar." },

    /* The save/load screen the engine puts up on its own ("ICFTD" world). */
    { "Lizard Breath has been awaiting your return.", "Lizard Breath hat auf dich gewartet." },
    { "If you want to load a saved game, select 'YES'.", "Zum Laden eines Spielstands wähle 'JA'." },
    { "If you want to start a new game, select 'NO'.",   "Für ein neues Spiel wähle 'NEIN'." },
    { "Is something more important than saving",         "Ist etwas wichtiger, als die Menschheit" },
    { "mankind from annihilation? If so, select 'YES'.", "vor dem Untergang zu bewahren? Dann 'JA'." },
    { "If you pushed save game by mistake, choose 'NO'.",
      "Bei versehentlichem Speichern wähle 'NEIN'." },
    { "YES",                            "JA" },
    { "NO",                             "NEIN" },

    /* The boot's own messages (a disk is missing, write protected, ...). */
    { "Please insert disk:",            "Bitte Diskette einlegen:" },
    { "or press left mouse button to abort.", "oder linke Maustaste zum Abbrechen." },
    { "The disk:",                      "Die Diskette:" },
    { "is write protected.",            "ist schreibgeschützt." },
    { "Unprotect and re-insert it.",    "Schreibschutz entfernen und neu einlegen." },
    { "Unresolvable file read/write error!", "Nicht behebbarer Lese-/Schreibfehler!" },
    { "The game is unplayable.",        "Das Spiel ist nicht spielbar." },
    { "Press button to continue.",      "Taste drücken zum Fortsetzen." },

    /* The places the map and the rooms name. */
    { "Mine 1",                         "Mine 1" },
    { "Mine 2",                         "Mine 2" },
    { "Mine 3",                         "Mine 3" },
    { "Mine 4",                         "Mine 4" },
    { "Mine 5",                         "Mine 5" },
    { "Cook's Stud Farm",               "Cooks Gestüt" },
    { "J.D.'s Farm",                    "J.D.s Farm" },
    { "McWilliams Dairy",               "McWilliams Molkerei" },
    { "Creature Cave A",                "Kreaturenhöhle A" },
    { "Creature Cave B",                "Kreaturenhöhle B" },
    { "Creature Cave C",                "Kreaturenhöhle C" },
    { "Ore Plant",                      "Erzwerk" },
    { "PumpStation 1",                  "Pumpwerk 1" },
    { "PumpStation 2",                  "Pumpwerk 2" },
    { "PumpStation 3",                  "Pumpwerk 3" },
    { "Mine Tunnel",                    "Minenstollen" },
    { "North Volcanic Cone",            "Nordvulkankegel" },
    { "S.W. Volcanic Cone",             "SW-Vulkankegel" },
    { "N.E. Volcanic Cone",             "NO-Vulkankegel" },
    { "Quarry",                         "Steinbruch" },
    { "Hilbers Field",                  "Hilbers Feld" },
    { "National Guard Armory",          "Nationalgarde-Zeughaus" },
    { "Fortune Teller",                 "Wahrsagerin" },
    { "Home Base",                      "Heimatbasis" },
    { "Godfrey's Hot Springs",          "Godfreys Thermalquellen" },
    { "Platt University Lab",           "Platt-Uni-Labor" },
    { "Neptune Hall",                   "Neptune Hall" },
    { "KBUG Radio",                     "KBUG Radio" },
    { "O'Riordan's Pub",                "O'Riordans Kneipe" },
    { "Melville Memorial Hospital",     "Melville-Gedenkkrankenhaus" },
    { "Elmer's Service Station",        "Elmers Tankstelle" },
    { "Lizard Breath Police",           "Polizei Lizard Breath" },
    { "Lizard Breath Star",             "Lizard Breath Star" },
    { "Mayor's Office",                 "Büro des Bürgermeisters" },
    { "Main Street",                    "Hauptstraße" },
    { "Main Street South",              "Hauptstraße Süd" },
    { "Main Street West",               "Hauptstraße West" },
    { "Main Street East",               "Hauptstraße Ost" },
    { "Beverly's Drive-In",             "Beverlys Drive-In" },

    /* --- the port's own surfaces: the title, the settings, the save slots, the OSD ---------- */
    { "New Game",                       "Neues Spiel" },
    { "Play Antheads",                  "Antheads" },
    { "Load Game",                      "Spiel laden" },
    { "Settings",                       "Optionen" },
    { "Quit Game",                      "Beenden" },
    { "Fullscreen",                     "Vollbild" },
    { "On",                             "Ein" },
    { "Off",                            "Aus" },
    { "Music Vol.",                     "Musik" },
    { "Sound Vol.",                     "Sound" },
    { "Back",                           "Zurück" },
    { "More",                           "Mehr" },
    { "Save Game",                      "Spiel speichern" },
    { "Slot %d",                        "Slot %d" },
    { "Slot %d%s",                      "Slot %d%s" },
    { "(Empty)",                        "(Leer)" },
    { "Save Slot - %d%s",               "Speicherplatz - %d%s" },
    { "Loading",                        "Lädt" },
    { "Time frozen",                    "Zeit eingefroren" },
    { "Time unfrozen",                  "Zeit läuft" },
    { "Check out my spiritual successor \"It Returned to the Desert\"",
      "Schau dir den Nachfolger \"It Returned to the Desert\" an" },
    { "Available on Steam and itch.io", "Erhältlich auf Steam und itch.io" },
    { "Please put the three original 'It Came from the Desert' disk images in the 'disks' folder"
      " and restart.",
      "Bitte lege die drei Original-Disketten von 'It Came from the Desert' in den Ordner 'disks'"
      " und starte neu." },
    { "No game data folder was given.", "Kein Spieldaten-Ordner angegeben." },
    { "BLASTER not set - no sound (set BLASTER=A220 I5 D1 T4)",
      "Kein Ton: BLASTER fehlt (A220 I5 D1 T4)" }
};

#define LANG_COUNT ((int)(sizeof g_catalog / sizeof g_catalog[0]))

/* The catalog in force is the built-in table above plus whatever the translation file adds
 * (lang\<code>.csv next to the executable): a row of the file overrides a built-in one, so a
 * translation can be corrected without a rebuild, and a row whose German field is empty is simply a
 * placeholder for the translator and changes nothing.
 *
 * A row may name its English text two ways: verbatim (what a translator works with) or by its
 * 64-bit FNV-1a id, sixteen hex digits. The second form is how a finished translation can be
 * shipped **without carrying the original's text** - see the export tool and docs\port-features.md,
 * "Delivering a translation". */
#define LANG_MAX_ENTRIES 4096              /* built-ins plus the file's rows               */
#define LANG_FILE_MAX    (512u * 1024u)    /* the largest translation file read            */
#define LANG_PATH_MAX    320               /* <exe dir>\lang\<code>.csv                    */
#define LANG_SEP         ';'               /* the CSV's field separator                    */
#define LANG_ID_LEN      16                /* hex digits of an id-keyed row                */

typedef struct lang_entry
{
    const char *en;                        /* the English text, as the game has it (or 0)  */
    const char *de;                        /* German, in the font's codes (a converted copy) */
    u64 id;                                /* FNV-1a of `en`, when `en` is not here        */
} lang_entry;

static int g_on;                          /* a language other than English is selected    */
static const char *g_code = "en";
static lang_entry *g_ent;                 /* the catalog in force                         */
static int g_entCount;
static char *g_pool;                      /* every g_ent[i].de, converted, end to end     */
static char *g_owned;                     /* the translation file as it was read          */
static u32 *g_machAddr;                   /* g_ent[i].de's address in the machine's RAM   */
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
    case 0x00E9: *out = 'e'; return 0;
    default: *out = cp < 0x80u ? (int)cp : '?'; return 0;
    }
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
    if (g_ent != 0) plat_free(g_ent);
    if (g_machAddr != 0) plat_free(g_machAddr);
    if (g_entHash != 0) plat_free(g_entHash);
    if (g_slot != 0) plat_free(g_slot);
    g_pool = 0;
    g_owned = 0;
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

/* The translation file's text, or 0. It is a spreadsheet's CSV: `<English>;<German>`, one record
 * per line, fields quoted the way CSV quotes them. Where it is looked for, in this order:
 *
 *   <exe dir>\lang\<code>.csv        where a release keeps it, next to the game
 *   <exe dir>\..\lang\<code>.csv     one and two folders above the executable: the development
 *   <exe dir>\..\..\lang\<code>.csv  tree's bin\win32\icftd-recomp.exe and the repository's own
 *                                    lang\ folder at the top of it, so a run started by
 *                                    double-clicking the executable finds the file it sees
 *   lang\<code>.csv                  the working directory
 *
 * The one that was used is printed, so a missing translation is a one-line diagnosis. */
static u32 lang_read_file(const char *code)
{
    char path[LANG_PATH_MAX];
    const char *dir = plat_exe_dir();
    plat_file *f;
    u32 n;

    sprintf(path, "%s\\lang\\%s.csv", dir != 0 ? dir : "", code);
    if (plat_path_kind(path) != PLAT_PATH_FILE && dir != 0 && dir[0] != 0)
        sprintf(path, "%s\\..\\lang\\%s.csv", dir, code);
    if (plat_path_kind(path) != PLAT_PATH_FILE && dir != 0 && dir[0] != 0)
        sprintf(path, "%s\\..\\..\\lang\\%s.csv", dir, code);
    if (plat_path_kind(path) != PLAT_PATH_FILE) sprintf(path, "lang\\%s.csv", code);
    if (plat_path_kind(path) != PLAT_PATH_FILE)
    {
        /* The older tab-separated file is not read any more: say so instead of silently staying
         * English, which looks exactly like a translation that does not match. */
        char old[LANG_PATH_MAX];

        sprintf(old, "%s\\lang\\%s.txt", dir != 0 ? dir : "", code);
        if (dir != 0 && dir[0] != 0 && plat_path_kind(old) != PLAT_PATH_FILE)
            sprintf(old, "%s\\..\\..\\lang\\%s.txt", dir, code);
        if (plat_path_kind(old) == PLAT_PATH_FILE)
            printf("language: %s is ignored - the translation file is %s.csv\n", old, code);
        return 0;
    }
    f = plat_open(path);
    if (f == 0) return 0;
    n = plat_size(f);
    if (n == 0 || n >= LANG_FILE_MAX) { plat_close(f); return 0; }
    g_owned = (char *)plat_alloc(n + 1u);
    if (g_owned == 0) { plat_close(f); return 0; }
    n = plat_read(f, 0, g_owned, n);
    plat_close(f);
    g_owned[n] = 0;
    /* A spreadsheet's "CSV UTF-8" starts with a byte order mark; UTF-16 cannot be read at all
     * (every field would look like garbage). */
    if (n >= 3 && (u8)g_owned[0] == 0xEFu && (u8)g_owned[1] == 0xBBu && (u8)g_owned[2] == 0xBFu)
    {
        memmove(g_owned, g_owned + 3, n - 2u);       /* keeps the terminator at n - 3 */
        n -= 3;
    }
    else if (n >= 2 && ((u8)g_owned[0] == 0xFFu || (u8)g_owned[0] == 0xFEu))
    {
        printf("language: %s is UTF-16 - save it as CSV UTF-8\n", path);
        plat_free(g_owned);
        g_owned = 0;
        return 0;
    }
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
 * earlier one, which is how a translation file overrides a built-in row. */
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

u32 rt_lang_set(const char *code)
{
    char want[8];
    int i, de;
    char *p;
    u32 poolSize = 0, at = 0;

    code = code != 0 ? code : "en";
    for (i = 0; i < 7 && code[i] != 0 && code[i] != ' ' && code[i] != '\t'; i++)
    {
        char c = code[i];
        if (c >= 'A' && c <= 'Z') c = (char)(c - 'A' + 'a');
        want[i] = c;
    }
    want[i] = 0;
    de = (want[0] == 'd' && want[1] == 'e' && want[2] == 0);

    lang_free();
    g_code = de ? "de" : "en";
    if (!de) return 0;

    /* The file is read first: the rows are kept in file order, so a row whose English side is
     * already there (a built-in one, or an earlier row) replaces it - the file wins. */
    lang_read_file("de");
    g_ent = (lang_entry *)plat_alloc((u32)LANG_MAX_ENTRIES * sizeof(lang_entry));
    g_machAddr = (u32 *)plat_alloc((u32)LANG_MAX_ENTRIES * sizeof(u32));
    poolSize = 64u;
    for (i = 0; i < LANG_COUNT; i++) poolSize += (u32)strlen(g_catalog[i].de) * 2u + 8u;
    if (g_owned != 0) poolSize += (u32)strlen(g_owned) * 2u + 256u;
    g_pool = (char *)plat_alloc(poolSize);
    if (g_ent == 0 || g_pool == 0 || g_machAddr == 0) { lang_free(); g_code = "en"; return 0; }

    for (i = 0; i < LANG_COUNT; i++)
    {
        g_ent[i].en = g_catalog[i].en;
        g_ent[i].id = 0;
        g_ent[i].de = g_pool + at;
        at += lang_convert(g_catalog[i].de, g_pool + at, poolSize - at) + 1u;
    }
    g_entCount = LANG_COUNT;

    if (g_owned != 0)
    {
        char *p = g_owned;

        while (*p != 0 && g_entCount < LANG_MAX_ENTRIES)
        {
            int more;
            char *key = lang_field(&p, &more);
            char *second = more ? lang_field(&p, &more) : 0;
            char *third = more ? lang_field(&p, &more) : 0;
            /* Two fields are <key>;<German>. Three are the translator's file, <id>;<English>;
             * <German> - the middle one is for the translator's eyes and is never looked up. */
            char *de = third != 0 ? third : second;
            u64 id;

            while (more) lang_field(&p, &more);      /* a record with more fields than that */

            /* A comment record has one field (or starts with #), and an empty German field is the
             * placeholder the exporter leaves for a translator who has not got there yet. */
            if (key[0] == 0 || key[0] == '#') continue;
            if (de == 0 || de[0] == 0) continue;
            g_ent[g_entCount].de = g_pool + at;
            at += lang_convert(de, g_pool + at, poolSize > at ? poolSize - at : 0) + 1u;
            id = lang_key_id(key);
            if (id != 0) { g_ent[g_entCount].en = 0; g_ent[g_entCount].id = id; }
            else { g_ent[g_entCount].en = key; g_ent[g_entCount].id = 0; }
            g_entCount++;
            g_fromFile++;
        }
        if (g_fromFile == 0)
            printf("language: %s holds no translation - is the field separator ';' "
                   "(a comma-separated export will not work)?\n", g_code);
    }

    if (lang_index() == 0) { lang_free(); g_code = "en"; return 0; }
    g_on = 1;
    return 1;
}

u32 rt_lang_on(void) { return (u32)g_on; }
const char *rt_lang_code(void) { return g_code; }

const char *rt_lang_text(const char *en)
{
    int e;

    if (en == 0 || !g_on || g_ent == 0) return en;
    e = lang_find(en);
    return e >= 0 ? g_ent[e].de : en;
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
        const char *s = g_ent[i].de;
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
 * A format string cannot have a catalog entry (its result changes every minute, every place), so
 * the few messages the game builds with sprintf are recognised by their shape and rebuilt in
 * German. Everything else stays English. */

static const char *lang_number(const char *s, int *out)
{
    int n = 0, digits = 0;

    while (*s >= '0' && *s <= '9') { n = n * 10 + (*s - '0'); s++; digits++; }
    *out = n;
    return digits != 0 ? s : 0;
}

/* "June 3, 1951 - 09:05 a.m." (FUN_000055BA's clock line). */
static int lang_clock(char *out, u32 max, const char *s)
{
    int day, hh, mm;
    const char *p;

    if (strncmp(s, "June ", 5) != 0) return 0;
    p = lang_number(s + 5, &day);
    if (p == 0 || strncmp(p, ", 1951 - ", 9) != 0) return 0;
    p = lang_number(p + 9, &hh);
    if (p == 0 || *p != ':') return 0;
    p = lang_number(p + 1, &mm);
    if (p == 0) return 0;
    if (strcmp(p, " a.m.") != 0 && strcmp(p, " p.m.") != 0) return 0;
    sprintf(out, "%d. Juni 1951 - %02d:%02d %s", day, hh, mm,
            p[1] == 'a' ? "vorm." : "nachm.");
    return (u32)strlen(out) < max;
}

/* "Sorry, %s has been destroyed." and "Sorry, %s is closed. It will open again at %d:00 %s."
 * (FUN_00003B1E), with the place's own name looked up in the catalog. */
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
        sprintf(out, "Tut mir leid, %s wurde zerstört.", rt_lang_text(name));
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
        sprintf(out, "Tut mir leid, %s ist geschlossen. Öffnet wieder um %d:00 %s",
                rt_lang_text(name), hour, p[0] == 'a' ? "vorm." : "nachm.");
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
    sprintf(out, "Schlafen für %d Stunden.", hours);
    return (u32)strlen(out) < max;
}

/* "ETA: %02d:%02d" (the flight's arrival line) and "REEL %d" (the boot's disk swap). */
static int lang_prefix(char *out, u32 max, const char *s)
{
    const char *rest;

    if (strncmp(s, "ETA: ", 5) == 0) rest = s + 5;
    else if (strncmp(s, "REEL ", 5) == 0) rest = 0;
    else return 0;
    if (rest != 0) { sprintf(out, "Ankunft: %s", rest); return (u32)strlen(out) < max; }
    sprintf(out, "ROLLE %s", s + 5);
    return (u32)strlen(out) < max;
}

/* The next scratch line, filled with `len` bytes of `text`. A German string handed to a routine is
 * always a copy: FUN_0000510E paginates by writing NULs into the string it is given, so a shared
 * catalog entry would be destroyed by the first page. */
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

/* The German for a formatted message, rebuilt in `line`; 0 when the text is not one of the
 * messages above. */
static int lang_message(char *line, u32 max, const char *s)
{
    int ok;

    if (s[0] == 'J') ok = lang_clock(line, max, s);
    else if (s[0] == 'S') ok = lang_sorry(line, max, s) || lang_sleep(line, max, s);
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

/* The German for a formatted message, rebuilt in the next scratch line. 0 when the text is not one
 * of the messages above. */
u32 rt_lang_pattern(rt_machine *m, const char *s)
{
    char line[LANG_SCRATCH_LEN];

    if (!lang_message(line, sizeof line, s)) return 0;
    return lang_scratch(m, line, (u32)strlen(line) + 1u);
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
     * anything but printable text keeps the cost of a call to one load while German is selected. */
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
        const char *de = g_ent[e].de;

        return writable ? lang_story(m, de, (u32)strlen(de) + 1u) : g_machAddr[e];
    }
    return rt_lang_pattern(m, p);
}
