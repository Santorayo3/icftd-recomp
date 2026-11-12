-- ICFTD reference timeline: one line per frame from cycle-exact WinUAE.
--
-- key=value pairs, the same keys our own "--framelog" writes (rt_framelog in
-- src\runtime\amiga\machine.c). Each side logs only what it can see: WinUAE's Lua bridge can read
-- RAM, but the colour registers are write-only, so the picture cannot be read here - the engine's
-- own MovE step counter (a RAM longword) is what this timeline is for. That counter is the cadence
-- measure: "how many frames does the original need to go from step A to step B" is content
-- anchored, so it does not depend on how long the floppy took to load.
--
-- Reads per frame: 3 (+ 4 once). Under no circumstances add memory scans or byte-wise dumps here:
-- an earlier version did a million uae_read_u8 calls per frame, which froze the emulator (black
-- picture, starved audio, half an intro). See docs\next-session.md.
--
-- WinUAE registers uae_read_u16 and friends only *after* this chunk has run, so they must not be
-- called at the top level.

local OUT = "E:\\Meine Programme\\Unity\\Projects\\icftd-recomp\\out\\winuae-trace.txt"

-- Where AmigaDOS loaded dshell on this configuration (A500, 512K slow RAM): the 16-byte code
-- signature at image offset 0x14000 was found there in an earlier run. SIGFRAME reports it, so a
-- run whose layout moved says so instead of logging a counter that means nothing.
local BASE = 0xC530E0
local STEP_OFF = 0x2C10C
local SIG_OFF = 0x14000
local SIGFRAME = 600
local MAX_FRAMES = 12000         -- 4 minutes at 50 Hz; the log is flushed per line, so it can be
                                 -- stopped earlier at any time without losing what was written

local out = io.open(OUT, "w")
if out == nil then return end
out:write("# icftd reference timeline: frame=.. step=.. from cycle-exact WinUAE\n")
out:flush()

local frame = 0

local function u16(a)
    local v = uae_read_u16(a)
    if v == nil or v < 0 then return nil end
    return v
end

local function u32(a)
    local hi = u16(a)
    local lo = u16(a + 2)
    if hi == nil or lo == nil then return nil end
    return hi * 65536 + lo
end

function on_uae_vsync()
    if out == nil then return end
    frame = frame + 1
    if frame == SIGFRAME then
        local w = {}
        local i
        for i = 0, 3 do
            w[#w + 1] = string.format("%04X", u16(BASE + SIG_OFF + i * 2) or 0)
        end
        out:write(string.format("# signature at %06X = %s (image offset 0x14000 is 000D 487A 0022 4EAC)\n",
                                BASE + SIG_OFF, table.concat(w, " ")))
        out:flush()
    end
    if frame > MAX_FRAMES then
        out:write(string.format("# end of log at frame %d\n", MAX_FRAMES))
        out:flush()
        out:close()
        out = nil
        return
    end
    local t = { string.format("frame=%d", frame) }
    -- DMACONR and BPLCON0 are readable registers (COLORxx is not), so they are worth a try; a
    -- bridge that cannot answer them simply leaves the keys out.
    local dm = u16(0xDFF002)
    if dm then t[#t + 1] = string.format("dmacon=%04X", dm) end
    local c0 = u16(0xDFF100)
    if c0 then t[#t + 1] = string.format("con0=%04X", c0) end
    local step = u32(BASE + STEP_OFF)
    if step then t[#t + 1] = string.format("step=%d", step) end
    out:write(table.concat(t, " "), "\n")
    out:flush()
end