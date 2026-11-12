-- ICFTD: logs a few machine values once per frame from cycle-exact WinUAE. Light by design.
--
-- This is a *read-only, six-accesses-per-frame* script: it must never stall the emulator, so there
-- are no memory scans and no byte-by-byte dumps here. (A previous version dumped RAM through the
-- Lua bridge one byte at a time - a million calls - which froze the machine for seconds per frame
-- and made the picture stop updating. Do not bring that back.)
--
-- What it logs, per vsync, to out\winuae-trace.txt:
--   frame, the copper list pointer ($DFF080), four colour registers, and - if BASE is not 0 - the
--   32-bit value at BASE + 0x2C10C (the engine's MovE step counter, image offset 0x2C10C).
--
-- BASE is the program's load address. It is a fact about how AmigaDOS loaded dshell on the target
-- machine; our own runtime uses 0x4000, which is a choice, not the original's layout. Set it from a
-- measurement (it prints 0 when unknown, and only the palette/copper columns are then meaningful).
--
-- NOTE: WinUAE registers uae_read_u16 only *after* this chunk has finished loading, so it must not
-- be called at the top level.

local OUT = "E:\\Meine Programme\\Unity\\Projects\\icftd-recomp\\out\\winuae-trace.txt"
local BASE = 0                  -- the program's load address in WinUAE, 0 = do not read the counter
local STEP_OFF = 0x2C10C        -- DAT_0002c10c: the engine's MovE step counter
local MAX_FRAMES = 6000

local out = io.open(OUT, "w")
if out == nil then return end
out:write("loaded\n")
out:flush()

local frame = 0

local function u32(a)
    local hi = uae_read_u16(a)
    local lo = uae_read_u16(a + 2)
    if hi == nil or lo == nil then return -1 end
    return hi * 65536 + lo
end

function on_uae_vsync()
    if out == nil then return end
    frame = frame + 1
    if frame > MAX_FRAMES then
        out:close()
        out = nil
        return
    end
    local line = { string.format("%d", frame),
                   string.format("cop=%06X", u32(0xDFF080)) }
    local i
    for i = 1, 4 do
        line[#line + 1] = string.format("c%d=%04X", i, uae_read_u16(0xDFF180 + (i - 1) * 2))
    end
    if BASE ~= 0 then
        line[#line + 1] = string.format("step=%d", u32(BASE + STEP_OFF))
    end
    out:write(table.concat(line, " "), "\n")
    out:flush()
end
