-- ICFTD reference timeline: one line per frame from cycle-exact WinUAE.
--
-- The columns are exactly rt_framelog()'s in src\runtime\amiga\machine.c, so our build's
-- "--framelog out\our-trace.txt" can be diffed against this file line by line:
--
--   frame c0..c15 dmacon bplcon0 ddfstrt ddfstop v0..v3 lc0..lc3 step
--
-- Only values that are the same number on both machines are logged; addresses (the copper list
-- pointer, the program base) are not comparable, because the original is loaded into slow RAM by
-- AmigaDOS and our runtime loads the same image at $4000.
--
-- This script must never stall the emulator. It reads 34 registers per vsync and nothing else: no
-- memory scans, no byte-by-byte dumps. (An earlier version dumped RAM through the Lua bridge one
-- byte at a time - a million calls - which froze the machine for seconds per frame; the picture
-- stopped updating and the audio starved. Do not bring that back.)
--
-- WinUAE registers uae_read_u16/uae_read_u32 only *after* this chunk has loaded, so they may not
-- be called at the top level.

local OUT = "E:\\Meine Programme\\Unity\\Projects\\icftd-recomp\\out\\winuae-trace.txt"

-- Where AmigaDOS loaded dshell on this configuration (A500, 512K slow RAM): the 16-byte code
-- signature at image offset 0x14000 was found there in an earlier run, and the engine's MovE step
-- counter sits 0x2C10C into the image. SIGFRAME reports whether the base still holds, so a run
-- that moved (different config, different disks) says so instead of logging garbage.
local BASE = 0xC530E0
local STEP_OFF = 0x2C10C
local SIG_OFF = 0x14000
local SIGFRAME = 1200
local MAX_FRAMES = 9000          -- 3 minutes at 50 Hz; the log is flushed per line, so it can be
                                -- stopped earlier at any time without losing what was written

local out = io.open(OUT, "w")
if out == nil then return end
out:write("# icftd reference timeline\n")
out:flush()

local frame = 0

local function u32(a)
    local hi = uae_read_u16(a)
    local lo = uae_read_u16(a + 2)
    if hi == nil or lo == nil then return -1 end
    return hi * 65536 + lo
end

local function line()
    local t = { string.format("%d", frame) }
    local i
    for i = 0, 15 do
        t[#t + 1] = string.format("%04X", uae_read_u16(0xDFF180 + i * 2))
    end
    t[#t + 1] = string.format("%04X", uae_read_u16(0xDFF096))          -- DMACON
    t[#t + 1] = string.format("%04X", uae_read_u16(0xDFF100))          -- BPLCON0
    t[#t + 1] = string.format("%03X", uae_read_u16(0xDFF08C) % 512)    -- DDFSTRT
    t[#t + 1] = string.format("%03X", uae_read_u16(0xDFF090) % 512)    -- DDFSTOP
    for i = 0, 3 do
        t[#t + 1] = string.format("%02X", uae_read_u16(0xDFF0A8 + i * 16))         -- AUDxVOL
    end
    for i = 0, 3 do
        t[#t + 1] = string.format("%06X", u32(0xDFF0A0 + i * 16) % 0x1000000)     -- AUDxLC
    end
    t[#t + 1] = string.format("%d", u32(BASE + STEP_OFF))
    out:write(table.concat(t, " "), "\n")
    out:flush()
end

function on_uae_vsync()
    if out == nil then return end
    frame = frame + 1
    if frame == SIGFRAME then
        out:write(string.format("# signature at %06X: %04X %04X %04X %04X\n", BASE + SIG_OFF,
                                uae_read_u16(BASE + SIG_OFF), uae_read_u16(BASE + SIG_OFF + 2),
                                uae_read_u16(BASE + SIG_OFF + 4), uae_read_u16(BASE + SIG_OFF + 6)))
        out:flush()
    end
    if frame > MAX_FRAMES then
        out:write(string.format("# end of log at frame %d\n", MAX_FRAMES))
        out:flush()
        out:close()
        out = nil
        return
    end
    line()
end