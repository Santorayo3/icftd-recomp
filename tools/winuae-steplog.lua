-- ICFTD: logs the engine's own MovE step counter once per frame, from cycle-exact WinUAE.
--
-- Why this and not a stopwatch: the intro advances by engine *steps*, not by wall-clock seconds,
-- and the step counter is a 32-bit long the engine itself increments (image 0x2C10C; loaded at
-- 0x4000, so 0x3010C). Reading it per frame from the reference machine gives the exact
-- frames-per-step of the original - the number our own `--ticklog` prints in its `step` column -
-- so the two can be diffed directly:
--
--   WinUAE (cycle-exact):  tools\icftd-steplog.uae  -> out\winuae-steps.txt
--   our build:             bin\win32\icftd-recomp.exe <img> <insns> --ticklog
--
-- Both files are "<frame> <step>" lines; the content position is the step number, so "at step 300
-- we are at frame X (WinUAE) vs frame Y (ours)" is a machine-state comparison, not a timing guess.
--
-- Loaded by tools\icftd-steplog.uae ("lua=<this file>"). WinUAE runs on_uae_vsync at the end of
-- every field, with the machine stopped, so the read is the frame boundary state.

local OUT = "E:\\Meine Programme\\Unity\\Projects\\icftd-recomp\\out\\winuae-steps.txt"
local STEP_LO = 0x3010C        -- DAT_0002c10c: the engine's MovE step counter
local MAX_FRAMES = 6000        -- the intro is ~1500; stop writing after 2 minutes

local out = io.open(OUT, "w")
local frame = 0

local function read_step()
    local lo = uae_read_u16(STEP_LO)
    local hi = uae_read_u16(STEP_LO + 2)
    if lo == nil or hi == nil then return -1 end
    return hi * 65536 + lo
end

function on_uae_vsync()
    if out == nil then return end
    frame = frame + 1
    if frame > MAX_FRAMES then
        out:close()
        out = nil
        uae_log("icftd-step-log: done\n")
        return
    end
    out:write(string.format("%d %d\n", frame, read_step()))
    out:flush()
end

uae_log("icftd-step-log: logging to " .. OUT .. "\n")
