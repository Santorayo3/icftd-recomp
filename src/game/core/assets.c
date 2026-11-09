/* First-run asset preparation: find the data root and build game.pak if needed. */
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "platform.h"
#include "assets.h"

#define PATH_CAP   512
#define PACK_DIR   "assets"
#define PACK_FILE  "game.pak"
#define DISKS_DIR  "disks"
#define EXPORT_EXE "icftd-export.exe"

/* Exporter builds, tried relative to the executable folder and to the root. */
static const char *const g_exporters[] = {
    EXPORT_EXE,
    "bin\\win32\\" EXPORT_EXE,
    "bin\\tools\\" EXPORT_EXE,
    "src\\assetExport\\bin\\Release\\net10.0\\win-x64\\ICFTD.AmigaExport.exe",
    "src\\assetExport\\bin\\Debug\\net10.0\\ICFTD.AmigaExport.exe",
    NULLP
};

static char g_root[PATH_CAP];
static char g_pack[PATH_CAP];

static void str_copy(char *dst, u32 cap, const char *src)
{
    u32 i = 0;

    if (cap == 0) return;
    while (src[i] && i + 1 < cap) { dst[i] = src[i]; i++; }
    dst[i] = 0;
}

static void str_join(char *dst, u32 cap, const char *a, const char *b)
{
    u32 n;

    str_copy(dst, cap, a);
    n = (u32)strlen(dst);
    if (n > 0 && dst[n - 1] != '\\' && dst[n - 1] != '/') {
        if (n + 1 >= cap) return;
        dst[n++] = '\\';
        dst[n] = 0;
    }
    str_copy(dst + n, cap - n, b);
}

/* Truncates dir to its parent folder; 0 when nothing is left to strip. */
static u32 dir_up(char *dir)
{
    u32 n = (u32)strlen(dir);

    while (n > 0 && dir[n - 1] != '\\' && dir[n - 1] != '/') n--;
    while (n > 0 && (dir[n - 1] == '\\' || dir[n - 1] == '/')) n--;
    if (n == 0 || (n == 2 && dir[1] == ':')) return 0;
    dir[n] = 0;
    return 1;
}

/* The data root is the first folder above the executable that holds assets\ or
 * disks\, so bin\win32\icftd.exe and a flat release folder both work. */
static void find_root(void)
{
    char dir[PATH_CAP], probe[PATH_CAP];
    u32 level;

    str_copy(dir, sizeof dir, plat_exe_dir());
    str_copy(g_root, sizeof g_root, dir);
    for (level = 0; level < 4; level++) {
        str_join(probe, sizeof probe, dir, DISKS_DIR);
        if (plat_path_kind(probe) == PLAT_PATH_DIR) { str_copy(g_root, sizeof g_root, dir); return; }
        str_join(probe, sizeof probe, dir, PACK_DIR);
        if (plat_path_kind(probe) == PLAT_PATH_DIR) { str_copy(g_root, sizeof g_root, dir); return; }
        if (!dir_up(dir)) return;
    }
}

static u32 find_exporter(char *out, u32 cap)
{
    char probe[PATH_CAP];
    u32 i;

    for (i = 0; g_exporters[i]; i++) {
        str_join(probe, sizeof probe, plat_exe_dir(), g_exporters[i]);
        if (plat_path_kind(probe) == PLAT_PATH_FILE) { str_copy(out, cap, probe); return 1; }
        str_join(probe, sizeof probe, g_root, g_exporters[i]);
        if (plat_path_kind(probe) == PLAT_PATH_FILE) { str_copy(out, cap, probe); return 1; }
    }
    return 0;
}

const char *assets_pack_path(void)
{
    return g_pack;
}

u32 assets_prepare(u32 force)
{
    char assets_dir[PATH_CAP], disks[PATH_CAP], exporter[PATH_CAP];
    char args[PATH_CAP * 2];
    s32 rc;

    find_root();
    str_join(assets_dir, sizeof assets_dir, g_root, PACK_DIR);
    str_join(g_pack, sizeof g_pack, assets_dir, PACK_FILE);

    if (!force && plat_path_kind(g_pack) == PLAT_PATH_FILE) return 1;

    str_join(disks, sizeof disks, g_root, DISKS_DIR);
    if (plat_path_kind(disks) != PLAT_PATH_DIR) {
        printf("No game data yet: %s does not exist.\n", g_pack);
        printf("Put the Amiga disk images into %s and start the game again -\n", disks);
        printf("it decodes them into the data folder on first start.\n");
        return 0;
    }
    if (!find_exporter(exporter, sizeof exporter)) {
        printf("No asset exporter found (ICFTD.AmigaExport).\n");
        printf("Build one next to the game with:\n");
        printf("  dotnet publish src\\assetExport -c Release -r win-x64 --self-contained true "
               "-p:PublishSingleFile=true -p:AssemblyName=%s -o bin\\win32\n", EXPORT_EXE);
        printf("or just run tools\\start.ps1, which builds everything.\n");
        return 0;
    }
    if (plat_path_kind(assets_dir) != PLAT_PATH_DIR) plat_mkdir(assets_dir);

    printf("First start: decoding the disk images in %s into %s\n", disks, g_pack);
    fflush(stdout);
    sprintf(args, "gamepack \"%s\" \"%s\"", disks, g_pack);
    rc = plat_spawn(exporter, args);
    fflush(stdout);                    /* the exporter wrote straight to our stdout */
    if (rc != 0) {
        printf("\nasset export failed (%ld) - check that %s holds the Amiga floppy\n",
               (long)rc, disks);
        printf("images (880 KB files) and see disks\\README.md.\n");
        return 0;
    }
    if (plat_path_kind(g_pack) != PLAT_PATH_FILE) {
        printf("\nthe exporter ran but did not write %s\n", g_pack);
        return 0;
    }
    printf("\nassets ready: %s\n", g_pack);
    return 1;
}
