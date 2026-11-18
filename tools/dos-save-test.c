/* Machine-state test of the save path, driven through the same seam the engine uses.
 *
 * The 1989 build's save routine (FUN_0001042a) does:
 *     Lock("DSAVE:") -> CurrentDir -> Open("ICFTD", MODE_NEWFILE)
 *     -> Write(0x21E18, 0x78) -> Write(0x2686C, 0x3024) -> Close
 * The add-on "Antheads" writes its own file by its own code (FUN_00011C98):
 *     Open("ICFTD2", MODE_NEWFILE) -> Write(0x23ED0, 0xC2) -> Write(0x29094, 0x3214) -> Close
 * Each of those is one dos.library LVO, and rt_os_call is what the runtime answers them with, so
 * this test builds the same argument stacks and checks the result - no window, no 68000.
 *
 * Both files land in the same slot directory, so the slot state has to tell them apart: EMPTY,
 * ORIGINAL, ANTHEADS or BOTH, and a file shorter than its build's save is the engine's own
 * one-byte placeholder, not a save (docs\antheads.md, Phase 7).
 *
 * Build and run: tools\dos-save-test.ps1
 */
#include <stdio.h>
#include <string.h>

#include "machine.h"
#include "display.h"
#include "platform.h"

#define FOURCC_ERR(...) do { printf("FAIL "); printf(__VA_ARGS__); printf("\n"); failed++; } while (0)
#define OK(...)         do { printf("ok   "); printf(__VA_ARGS__); printf("\n"); } while (0)

#define LEN1 0x78                  /* the 1989 game's two ranges (FUN_0001042a) */
#define LEN2 0x3024
#define ANT_LEN1 0xC2              /* the add-on's (FUN_00011C98) */
#define ANT_LEN2 0x3214

static rt_machine m;
static u32 stackPage, buf1, buf2, nameICFTD, nameICFTD2, nameDSAVE;
static int failed;

/* dos.library takes its arguments on the stack: [sp] return address, [sp+4..] the arguments. */
static u32 os(u32 a0, u32 a1, u32 a2, s32 lvo)
{
    rt_write32(&m.mem, stackPage + 0, 0x00001000u);
    rt_write32(&m.mem, stackPage + 4, a0);
    rt_write32(&m.mem, stackPage + 8, a1);
    rt_write32(&m.mem, stackPage + 12, a2);
    return rt_os_call(&m, stackPage, 0, 0, 0, 0, 2, lvo);
}

static void put_str(u32 at, const char *s)
{
    u32 i;
    for (i = 0; s[i] != 0; i++) rt_write8(&m.mem, at + i, (u8)s[i]);
    rt_write8(&m.mem, at + i, 0);
}

/* DSAVE: as current dir, in `slot` - the engine locks the volume before it opens either file, and
 * a lock on a missing directory would send it into its own "please insert volume" panel. */
static void save_dir_current(int slot)
{
    u32 lock;

    m.saveSlot = slot;
    lock = os(nameDSAVE, 0xFFFEu, 0, -84);
    if (lock == 0) FOURCC_ERR("Lock(\"DSAVE:\") returned 0");
    os(lock, 0, 0, -126);                                          /* CurrentDir */
}

/* One file through the engine's own write shape: Open, Write, Write, Close. */
static int write_save(u32 name, u32 a, u32 lenA, u32 b, u32 lenB)
{
    u32 fh = os(name, 1006, 0, -30);                               /* MODE_NEWFILE */
    if (fh == 0) return 0;
    if (os(fh, a, lenA, -48) != lenA) { os(fh, 0, 0, -36); return 0; }
    if (os(fh, b, lenB, -48) != lenB) { os(fh, 0, 0, -36); return 0; }
    os(fh, 0, 0, -36);                                             /* Close */
    return 1;
}

/* The file itself, compared with what was written into the two RAM ranges: the first range's
 * pattern is 0x40+(i&0x3F), the second's is i*7 (each range starts at its own pattern). */
static void check_file(const char *name, u32 a, u32 lenA, u32 b, u32 lenB, int slot)
{
    char path[256];
    plat_file *f;
    u32 i, size;

    sprintf(path, "%s\\saves\\slot%d\\%s", plat_exe_dir(), slot, name);
    f = plat_open(path);
    if (f == 0) { FOURCC_ERR("cannot reopen %s", path); return; }
    size = plat_size(f);
    if (size != lenA + lenB) {
        FOURCC_ERR("%s is %lu bytes, expected %lu", path, (unsigned long)size,
                   (unsigned long)(lenA + lenB));
        plat_close(f);
        return;
    }
    OK("%s is %lu bytes", path, (unsigned long)size);
    plat_read(f, 0, m.mem.base + a, lenA);                         /* overwrite the source */
    plat_read(f, lenA, m.mem.base + b, lenB);
    plat_close(f);
    for (i = 0; i < lenA; i++)
        if (rt_read8(&m.mem, a + i) != (u8)(0x40u + (i & 0x3Fu))) break;
    if (i != lenA) FOURCC_ERR("%s: first range differs at %lu", name, (unsigned long)i);
    else OK("%s: first range written", name);
    for (i = 0; i < lenB; i++)
        if (rt_read8(&m.mem, b + i) != (u8)(i * 7u)) break;
    if (i != lenB) FOURCC_ERR("%s: second range differs at %lu", name, (unsigned long)i);
    else OK("%s: second range written", name);
}

/* What the overlay shows for a slot: the runtime's answer, for the machine's own build and for
 * the other game when the front end registered it. */
static void check_state(int slot, int want, const char *what)
{
    int got = rt_save_slot_state(&m, slot);

    if (got != want)
        FOURCC_ERR("slot %d is state %d, expected %d (%s)", slot, got, want, what);
    else
        OK("slot %d is %s", slot, what);
}

int main(void)
{
    u32 back, i, fh;
    int name3;

    setvbuf(stdout, NULL, _IONBF, 0);
    if (!rt_init(&m)) { printf("FAIL rt_init\n"); return 1; }
    m.dataDir = "export";
    m.saveDir = "saves";
    m.saveSlot = 3;                          /* a slot that does not exist yet */

    stackPage = rt_alloc_bytes(64);
    buf1      = rt_alloc_bytes(ANT_LEN2);   /* either build's second range fits */
    buf2      = rt_alloc_bytes(ANT_LEN2);
    nameICFTD  = rt_alloc_bytes(16);
    nameICFTD2 = rt_alloc_bytes(16);
    nameDSAVE  = rt_alloc_bytes(16);
    if (stackPage == 0 || buf1 == 0 || buf2 == 0) { printf("FAIL alloc\n"); return 1; }
    put_str(nameICFTD, "ICFTD");
    put_str(nameICFTD2, "ICFTD2");
    put_str(nameDSAVE, "DSAVE:");
    for (i = 0; i < ANT_LEN2; i++) rt_write8(&m.mem, buf1 + i, (u8)(0x40u + (i & 0x3Fu)));
    for (i = 0; i < ANT_LEN2; i++) rt_write8(&m.mem, buf2 + i, (u8)(i * 7u));

    /* The engine locks the volume first and makes it current, then opens the bare name. */
    save_dir_current(3);
    check_state(3, RT_SAVE_EMPTY, "empty before anything is saved");

    fh = os(nameICFTD, 1006, 0, -30);                              /* MODE_NEWFILE */
    if (fh == 0) { FOURCC_ERR("Open(\"ICFTD\",1006) failed"); return 1; }
    OK("Open(\"ICFTD\",1006) = %06lX", (unsigned long)fh);

    if (os(fh, buf1, LEN1, -48) != LEN1) FOURCC_ERR("Write(%d) short", LEN1);
    else OK("Write(%d) = %d", LEN1, LEN1);
    if (os(fh, buf2, LEN2, -48) != LEN2) FOURCC_ERR("Write(%d) short", LEN2);
    else OK("Write(%d) = %d", LEN2, LEN2);
    os(fh, 0, 0, -36);                                             /* Close */

    if (m.saves != 1) FOURCC_ERR("save not counted (%lu)", (unsigned long)m.saves);
    else OK("save counted");
    if ((s32)(m.gfx.osdIconUntil - m.frame) <= 0) FOURCC_ERR("save icon not raised");
    else OK("save icon raised for %ld frame(s)", (long)(m.gfx.osdIconUntil - m.frame));

    check_file("ICFTD", buf1, LEN1, buf2, LEN2, 3);
    check_state(3, RT_SAVE_ORIGINAL, "the 1989 game's save");

    /* And back in: MODE_OLDFILE must read it into memory. */
    back = rt_alloc_bytes(LEN1 + LEN2);
    fh = os(nameICFTD, 1005, 0, -30);
    if (fh == 0) FOURCC_ERR("Open(\"ICFTD\",1005) failed");
    else
    {
        u32 got = os(fh, back, LEN1 + LEN2, -42);
        os(fh, 0, 0, -36);
        if (got != LEN1 + LEN2) FOURCC_ERR("Read returned %lu", (unsigned long)got);
        else
        {
            for (i = 0; i < LEN1 + LEN2; i++)
            {
                u8 want = i < LEN1 ? (u8)(0x40u + (i & 0x3Fu)) : (u8)((i - LEN1) * 7u);
                if (rt_read8(&m.mem, back + i) != want) break;
            }
            if (i != LEN1 + LEN2) FOURCC_ERR("read back differs at %lu", (unsigned long)i);
            else OK("loaded back identical");
        }
    }

    /* --- the add-on: the same path, its own name, size and two ranges ------------------------ */
    /* The front end registers the add-on's geometry when it boots that program - or when the other
     * game is the one running and the add-on can be played from the same data folder. */
    rt_save_register(&m, RT_SAVE_ANTHEADS, "ICFTD2", ANT_LEN1 + ANT_LEN2);
    m.saveName = "ICFTD2";
    m.saveBytes = ANT_LEN1 + ANT_LEN2;
    save_dir_current(4);
    check_state(4, RT_SAVE_EMPTY, "empty before the add-on saves");

    if (!write_save(nameICFTD2, buf1, ANT_LEN1, buf2, ANT_LEN2)) FOURCC_ERR("the add-on's save failed");
    else OK("ICFTD2 written: Write(%d) + Write(%d)", ANT_LEN1, ANT_LEN2);
    if (m.saves != 2) FOURCC_ERR("the add-on's save not counted (%lu)", (unsigned long)m.saves);
    else OK("the add-on's save counted");
    check_file("ICFTD2", buf1, ANT_LEN1, buf2, ANT_LEN2, 4);
    check_state(4, RT_SAVE_ANTHEADS, "the add-on's save");
    check_state(3, RT_SAVE_ORIGINAL, "still the 1989 game's save");

    /* The same slot, saved from both halves: both files are there and neither hides the other. */
    if (!write_save(nameICFTD, buf1, LEN1, buf2, LEN2)) FOURCC_ERR("the 1989 game's save in slot 4 failed");
    else OK("the 1989 game saved in the add-on's slot");
    check_state(4, RT_SAVE_BOTH, "both games' saves");

    /* The engine's own "no save yet" placeholder: a one-byte file is not a save. */
    save_dir_current(5);
    name3 = (int)os(nameICFTD, 1006, 0, -30);
    if (name3 == 0) FOURCC_ERR("Open(\"ICFTD\",1006) in slot 5 failed");
    else
    {
        os((u32)name3, buf1, 1, -48);
        os((u32)name3, 0, 0, -36);
    }
    check_state(5, RT_SAVE_EMPTY, "empty behind the one-byte placeholder");
    if (!rt_save_slot_empty(&m, 5)) FOURCC_ERR("the placeholder is reported as a save");
    else OK("the placeholder slot still reads \"(Empty)\"");
    if (rt_save_slot_empty(&m, 4)) FOURCC_ERR("the slot both games saved in reads \"(Empty)\"");
    else OK("the slot both games saved in is not \"(Empty)\"");

    printf("%s: %d failure(s)\n", failed == 0 ? "PASS" : "FAIL", failed);
    rt_shutdown(&m);
    return failed == 0 ? 0 : 1;
}
