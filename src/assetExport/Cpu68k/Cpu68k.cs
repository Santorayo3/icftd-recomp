namespace ICFTD.AmigaExport.Cpu68k;

/// <summary>Why a CPU run ended.</summary>
public enum StopReason { Rts, Rte, MaxInsns, Break, Error }

/// <summary>Raised for every condition the interpreter refuses to guess about.</summary>
public sealed class Cpu68kException : Exception
{
    public readonly uint Pc;
    public Cpu68kException(uint pc, string message) : base(message) => Pc = pc;
}

/// <summary>State captured when a run ends.</summary>
public sealed class RunResult
{
    public StopReason Stop;
    public string Message = "";
    public long Insns;
    public uint Pc;
    public uint[] D = new uint[8];
    public uint[] A = new uint[8];
    public uint Sr;
    public List<MemRange> Modified = new();
    public List<StubCall> Stubs = new();
    public bool PurityUnknown;
}

/// <summary>One call through the A4 vector table, or one Amiga library call, as seen at the jsr.</summary>
public sealed class StubCall
{
    /// <summary>Vector-table slot, or -1 for a library call.</summary>
    public int Slot = -1;

    /// <summary>Lookup key: the slot index, or the library LVO (negative) for library calls.</summary>
    public int Key;

    public int Lvo;
    public uint Target;
    public uint ReturnAddress;
    public uint[] Args = new uint[6];
    public string Name = "";
    public uint Result;
    public bool Handled;
    public string Note = "";
}

/// <summary>
/// Motorola 68000 interpreter, limited to the subset the dshell hunk actually uses.
/// Anything outside that subset throws a <see cref="Cpu68kException"/> naming the address
/// and the opcode; nothing is ever skipped or approximated.
/// </summary>
public sealed class Cpu68k
{
    // The engine's OS vector table: 160 six-byte stubs (`jmp abs.l`) at the start of the
    // data hunk. A4 points just past it, so `jsr (-0x7ffe+6*slot,A4)` lands here.
    public const uint VectorTableBase = 0x0002_1A58;
    public const int VectorTableSlots = 160;
    public const uint VectorTableEnd = VectorTableBase + VectorTableSlots * 6;

    public const uint FlagX = 0x10, FlagN = 0x08, FlagZ = 0x04, FlagV = 0x02, FlagC = 0x01;

    public const int ByteSize = 1, WordSize = 2, LongSize = 4;

    public readonly Memory Mem;
    public readonly uint[] D = new uint[8];
    public readonly uint[] A = new uint[8];
    public uint PC;
    public uint SR;

    public long Insns { get; private set; }
    public bool StopOnRts { get; set; } = true;
    public bool TraceInstructions { get; set; }
    public bool AllowOsStubs { get; set; }
    public TextWriter TraceOut { get; set; } = Console.Out;

    /// <summary>Optional OS model; return true when the call was handled.</summary>
    public Func<StubCall, bool>? StubHost { get; set; }

    /// <summary>Address and description of the last effective address resolved (trace only).</summary>
    public uint LastEaAddr { get; private set; }
    public string LastEa { get; private set; } = "";

    readonly List<StubCall> _stubs = new();
    int _depth;
    StopReason? _stop;
    string _stopMessage = "";
    uint _stopPc;
    bool _purityUnknown;

    public Cpu68k(Memory mem) => Mem = mem;

    // ---- flags ---------------------------------------------------------------

    public bool X => (SR & FlagX) != 0;
    public bool N => (SR & FlagN) != 0;
    public bool Z => (SR & FlagZ) != 0;
    public bool V => (SR & FlagV) != 0;
    public bool C => (SR & FlagC) != 0;

    public void SetFlag(uint flag, bool on)
    {
        if (on) SR |= flag; else SR &= ~flag;
    }

    static uint SizeMask(int size) => size switch
    {
        ByteSize => 0xFFu,
        WordSize => 0xFFFFu,
        _ => 0xFFFF_FFFFu,
    };

    static uint Truncate(uint v, int size) => size == LongSize ? v : v & SizeMask(size);

    static uint Merge(uint old, uint value, int size)
    {
        if (size == LongSize) return value;
        uint mask = SizeMask(size);
        return (old & ~mask) | (value & mask);
    }

    void SetNz(uint value, int size)
    {
        uint m = SizeMask(size);
        SetFlag(FlagN, (value & (m ^ (m >> 1))) != 0);
        SetFlag(FlagZ, (value & m) == 0);
    }

    void SetLogicFlags(uint value, int size)
    {
        SetNz(value, size);
        SetFlag(FlagV, false);
        SetFlag(FlagC, false);
    }

    void FlagsAdd(uint a, uint b, uint extend, uint r, int size, bool setX = true, bool keepZ = false)
    {
        uint m = SizeMask(size), sign = m ^ (m >> 1);
        a &= m; b &= m; r &= m;
        bool carry = (ulong)a + b + extend > m;
        SetFlag(FlagC, carry);
        if (setX) SetFlag(FlagX, carry);
        SetFlag(FlagV, ((a ^ r) & (b ^ r) & sign) != 0);
        SetFlag(FlagN, (r & sign) != 0);
        SetFlag(FlagZ, keepZ ? (Z && r == 0) : r == 0);
    }

    void FlagsSub(uint a, uint b, uint extend, uint r, int size, bool setX = true, bool keepZ = false)
    {
        uint m = SizeMask(size), sign = m ^ (m >> 1);
        a &= m; b &= m; r &= m;
        bool borrow = (ulong)b + extend > a;
        SetFlag(FlagC, borrow);
        if (setX) SetFlag(FlagX, borrow);
        SetFlag(FlagV, ((a ^ b) & (a ^ r) & sign) != 0);
        SetFlag(FlagN, (r & sign) != 0);
        SetFlag(FlagZ, keepZ ? (Z && r == 0) : r == 0);
    }

    public bool TestCondition(int cond) => cond switch
    {
        0 => true,                      // T
        1 => false,                     // F
        2 => !C && !Z,                  // HI
        3 => C || Z,                    // LS
        4 => !C,                        // CC
        5 => C,                         // CS
        6 => !Z,                        // NE
        7 => Z,                         // EQ
        8 => !V,                        // VC
        9 => V,                         // VS
        10 => !N,                       // PL
        11 => N,                        // MI
        12 => N == V,                   // GE
        13 => N != V,                   // LT
        14 => !Z && (N == V),           // GT
        15 => Z || (N != V),            // LE
        _ => throw new ArgumentOutOfRangeException(nameof(cond)),
    };

    // ---- fetch / stack -------------------------------------------------------

    ushort Fetch16()
    {
        ushort w = Mem.Read16(PC);
        PC += 2;
        return w;
    }

    uint Fetch32()
    {
        uint v = Mem.Read32(PC);
        PC += 4;
        return v;
    }

    void Push32(uint v)
    {
        A[7] -= 4;
        Mem.Write32(A[7], v);
    }

    uint Pop32()
    {
        uint v = Mem.Read32(A[7]);
        A[7] += 4;
        return v;
    }

    ushort Pop16()
    {
        ushort v = Mem.Read16(A[7]);
        A[7] += 2;
        return v;
    }

    // ---- effective addresses -------------------------------------------------

    /// <summary>A resolved effective address: a register (modes 0/1) or a memory address.</summary>
    readonly struct Ea
    {
        public readonly int Mode;
        public readonly int Reg;
        public readonly uint Addr;
        public Ea(int mode, int reg, uint addr) { Mode = mode; Reg = reg; Addr = addr; }
    }

    // 68000 EA encoding: 0 Dn, 1 An, 2 (An), 3 (An)+, 4 -(An), 5 d16(An), 6 d8(An,Xn),
    // 7 abs.w / abs.l / d16(PC) / d8(PC,Xn) / #imm.
    static readonly string[] ModeName = { "Dn", "An", "(An)", "(An)+", "-(An)", "d16(An)", "d8(An,Xn)", "?" };

    static string Describe(int mode, int reg) => mode switch
    {
        0 => "D" + reg,
        1 => "A" + reg,
        7 => reg switch
        {
            0 => "abs.w",
            1 => "abs.l",
            2 => "d16(PC)",
            3 => "d8(PC,Xn)",
            4 => "#imm",
            _ => "?",
        },
        _ => $"{ModeName[mode]},A{reg}",
    };

    /// <summary>Consumes extension words and applies whatever pre/post increment the mode needs.</summary>
    Ea Resolve(int mode, int reg, int size, uint opAddr)
    {
        switch (mode)
        {
            case 0:
            case 1:
                Note(0, mode, reg);
                return new Ea(mode, reg, 0);

            case 2:
            {
                uint a = A[reg];
                Note(a, mode, reg);
                return new Ea(mode, reg, a);
            }
            case 3:
            {
                uint a = A[reg];
                // Byte accesses to A7 step by two on the 68000.
                A[reg] = a + (uint)(size == ByteSize && reg == 7 ? 2 : size);
                Note(a, mode, reg);
                return new Ea(mode, reg, a);
            }
            case 4:
            {
                // Byte accesses to A7 step by two, and the byte lands at the new address.
                uint step = (uint)(size == ByteSize && reg == 7 ? 2 : size);
                uint a = A[reg] - step;
                A[reg] = a;
                Note(a, mode, reg);
                return new Ea(mode, reg, a);
            }
            case 5:
            {
                int d = (short)Fetch16();
                uint a = A[reg] + (uint)d;
                Note(a, mode, reg);
                return new Ea(mode, reg, a);
            }
            case 6:
            {
                ushort ext = Fetch16();
                uint a = A[reg] + (uint)(int)(sbyte)(ext & 0xFF) + IndexValue(ext);
                Note(a, mode, reg);
                return new Ea(mode, reg, a);
            }
            case 7:
                switch (reg)
                {
                    case 0:
                    {
                        uint a = (uint)(int)(short)Fetch16();
                        Note(a, mode, reg);
                        return new Ea(mode, reg, a);
                    }
                    case 1:
                    {
                        uint a = Fetch32();
                        Note(a, mode, reg);
                        return new Ea(mode, reg, a);
                    }
                    case 2:
                    {
                        uint at = PC;
                        int d = (short)Fetch16();
                        uint a = at + (uint)d;
                        Note(a, mode, reg);
                        return new Ea(mode, reg, a);
                    }
                    case 3:
                    {
                        uint at = PC;
                        ushort ext = Fetch16();
                        uint a = at + (uint)(int)(sbyte)(ext & 0xFF) + IndexValue(ext);
                        Note(a, mode, reg);
                        return new Ea(mode, reg, a);
                    }
                    case 4:
                    {
                        // An immediate always occupies a whole extension word (a byte sits in
                        // its low half); the operand is read from there.
                        uint a = size == ByteSize ? PC + 1 : PC;
                        PC += (uint)(size == LongSize ? 4 : 2);
                        Note(a, mode, reg);
                        return new Ea(mode, reg, a);
                    }
                    default:
                        throw new Cpu68kException(opAddr, $"illegal effective address mode 7/{reg} at 0x{opAddr:X6}");
                }
            default:
                throw new Cpu68kException(opAddr, $"illegal effective address mode {mode}/{reg} at 0x{opAddr:X6}");
        }
    }

    void Note(uint addr, int mode, int reg)
    {
        LastEaAddr = addr;
        LastEa = Describe(mode, reg);
    }

    /// <summary>Index part of a brief extension word (d8,An,Xn / d8,PC,Xn).</summary>
    uint IndexValue(ushort ext)
    {
        if ((ext & 0x0100) != 0)
            throw new Cpu68kException(PC, $"68020 full-format extension word 0x{ext:X4} in an index operand");
        int ireg = (ext >> 12) & 7;
        uint v = (ext & 0x8000) != 0 ? A[ireg] : D[ireg];
        if ((ext & 0x0800) == 0) v = (uint)(int)(short)(v & 0xFFFF);
        v <<= (ext >> 9) & 3;
        return v;
    }

    uint ReadEa(in Ea ea, int size)
    {
        if (ea.Mode == 0) return Truncate(D[ea.Reg], size);
        if (ea.Mode == 1) return Truncate(A[ea.Reg], size);
        return Mem.Read(ea.Addr, size);
    }

    void WriteEa(in Ea ea, int size, uint value, uint opAddr)
    {
        if (ea.Mode == 0)
        {
            D[ea.Reg] = Merge(D[ea.Reg], value, size);
            return;
        }
        if (ea.Mode == 1)
        {
            if (size == ByteSize) throw new Cpu68kException(opAddr, $"byte write to an address register at 0x{opAddr:X6}");
            A[ea.Reg] = size == WordSize ? (uint)(int)(short)(value & 0xFFFF) : value;
            return;
        }
        Mem.Write(ea.Addr, size, value);
    }

    /// <summary>Immediate and direct address-register forms are not data operands.</summary>
    static void RequireDataEa(int mode, int reg, uint opAddr, string what)
    {
        if (mode == 7 && reg == 4)
            throw new Cpu68kException(opAddr, $"{what} at 0x{opAddr:X6} needs a data operand, not an immediate");
        if (mode == 1)
            throw new Cpu68kException(opAddr, $"{what} at 0x{opAddr:X6} has no direct address-register form");
    }

    // ---- main loop -----------------------------------------------------------

    public RunResult Run(long maxInsns)
    {
        _stop = null;
        _stopMessage = "";
        while (_stop is null)
        {
            if (Insns >= maxInsns)
            {
                _stop = StopReason.MaxInsns;
                _stopMessage = $"step budget of {maxInsns} instructions exhausted";
                _stopPc = PC;
                break;
            }
            try
            {
                Step();
            }
            catch (Cpu68kException ex)
            {
                _stop = StopReason.Error;
                _stopMessage = ex.Message;
                _stopPc = ex.Pc;
            }
        }

        var r = new RunResult
        {
            Stop = _stop.Value,
            Message = _stopMessage,
            Insns = Insns,
            Pc = _stopPc,
            Sr = SR,
            PurityUnknown = _purityUnknown,
        };
        Array.Copy(D, r.D, 8);
        Array.Copy(A, r.A, 8);
        foreach (var s in _stubs) r.Stubs.Add(s);
        return r;
    }

    /// <summary>Executes one instruction.</summary>
    public void Step()
    {
        if (PC >= VectorTableBase && PC < VectorTableEnd)
            throw new Cpu68kException(PC, $"reached vector-table stub {SlotOf(PC)} at 0x{PC:X6} " +
                                          "without a jsr - a branch into the table is not modelled");

        uint opAddr = PC;
        Mem.Pc = opAddr;
        ushort op = Fetch16();

        Decode(op, opAddr);
        Insns++;
        if (TraceInstructions) TraceLine(opAddr, op);
    }

    static int SlotOf(uint pc) => (int)((pc - VectorTableBase) / 6);

    void TraceLine(uint opAddr, ushort op)
    {
        string d = string.Join(' ', D.Select((v, i) => $"D{i}={v:X8}"));
        string a = string.Join(' ', A.Select((v, i) => $"A{i}={v:X8}"));
        string flags = (X ? "X" : "-") + (N ? "N" : "-") + (Z ? "Z" : "-") + (V ? "V" : "-") + (C ? "C" : "-");
        TraceOut.WriteLine($"{opAddr:X6}  {op:X4}  {NameOf(op),-15} {LastEa,-13} {LastEaAddr:X8}  {d} | {a} | {flags}");
    }

    /// <summary>Coarse mnemonic for a failed decode; handlers throw with the exact name.</summary>
    static string NameOf(ushort op) => (op >> 12) switch
    {
        0x0 => (op & 0x0F00) switch
        {
            0x0000 => "ORI",
            0x0200 => "ANDI",
            0x0400 => "SUBI",
            0x0600 => "ADDI",
            0x0800 => "staticBitOp",
            0x0A00 => "EORI",
            0x0C00 => "CMPI",
            _ => "?",
        },
        0x1 => "MOVE.B",
        0x2 => "MOVE.L",
        0x3 => "MOVE.W",
        0x4 => "group-4",
        0x5 => "ADDQ/SUBQ/Scc/DBcc",
        0x6 => "Bcc",
        0x7 => "MOVEQ",
        0x8 => "OR/DIV",
        0x9 => "SUB",
        0xA => "LINE-A",
        0xB => "CMP",
        0xC => "AND/MUL",
        0xD => "ADD",
        0xE => "shift",
        0xF => "LINE-F",
        _ => "?",
    };

    // ---- decode --------------------------------------------------------------

    void Decode(ushort op, uint opAddr)
    {
        switch (op >> 12)
        {
            case 0x0: Group0(op, opAddr); break;
            case 0x1:
            case 0x2:
            case 0x3: OpMove(op, opAddr); break;
            case 0x4: Group4(op, opAddr); break;
            case 0x5: Group5(op, opAddr); break;
            case 0x6: Branch(op, opAddr); break;
            case 0x7: MoveQ(op, opAddr); break;
            case 0x8: Group8(op, opAddr); break;
            case 0x9: GroupAddSub(op, opAddr, isAdd: false); break;
            case 0xA: throw new Cpu68kException(opAddr, $"unimplemented opcode {op:X4} at 0x{opAddr:X6}: LINE-A");
            case 0xB: GroupB(op, opAddr); break;
            case 0xC: GroupC(op, opAddr); break;
            case 0xD: GroupAddSub(op, opAddr, isAdd: true); break;
            case 0xE: Shift(op, opAddr); break;
            default: throw new Cpu68kException(opAddr, $"unimplemented opcode {op:X4} at 0x{opAddr:X6}: LINE-F");
        }
    }

    // ---- MOVE / MOVEA / MOVEQ ------------------------------------------------

    void OpMove(ushort op, uint opAddr)
    {
        int size = (op >> 12) switch { 0x1 => ByteSize, 0x2 => LongSize, _ => WordSize };
        int dstReg = (op >> 9) & 7, dstMode = (op >> 6) & 7;
        int srcMode = (op >> 3) & 7, srcReg = op & 7;

        if (size == ByteSize && (srcMode == 1 || dstMode == 1))
            throw new Cpu68kException(opAddr, $"{NameOf(op)} 0x{op:X4} at 0x{opAddr:X6}: byte access to an address register");

        Ea src = Resolve(srcMode, srcReg, size, opAddr);
        uint value = ReadEa(src, size);

        if (dstMode == 1)
        {
            // MOVEA: word sources sign-extend, and the CCR is not affected.
            A[dstReg] = size == WordSize ? (uint)(int)(short)value : value;
            return;
        }

        Ea dst = Resolve(dstMode, dstReg, size, opAddr);
        WriteEa(dst, size, value, opAddr);
        SetNz(value, size);
        SetFlag(FlagV, false);
        SetFlag(FlagC, false);
    }

    void MoveQ(ushort op, uint opAddr)
    {
        if ((op & 0x0100) != 0)
            throw new Cpu68kException(opAddr, $"unimplemented opcode {op:X4} at 0x{opAddr:X6}: MOVEQ with bit 8 set");
        int reg = (op >> 9) & 7;
        D[reg] = (uint)(int)(sbyte)(op & 0xFF);
        SetLogicFlags(D[reg], LongSize);
    }

    // ---- group 0: immediate ops and static bit ops ---------------------------

    void Group0(ushort op, uint opAddr)
    {
        int mode = (op >> 3) & 7, reg = op & 7;

        // Dynamic bit ops: 0000 DDD 1TT MMM RRR - the bit number comes from a data register.
        // (Static forms are exactly 0x0800..0x08FF, which have bit 8 clear.)
        if ((op & 0x0100) != 0 && (op & 0xFF00) != 0x0800)
        {
            int sub = (op >> 6) & 3;                 // 0 BTST 1 BCHG 2 BCLR 3 BSET
            int bitReg = (op >> 9) & 7;
            RequireDataEa(mode, reg, opAddr, "a dynamic bit operation");
            Ea ea = Resolve(mode, reg, ByteSize, opAddr);
            uint v = ReadEa(ea, ByteSize);
            int bit = (int)(D[bitReg] & 7);
            bool set = (v & (1u << bit)) != 0;
            SetFlag(FlagZ, !set);
            switch (sub)
            {
                case 0: return;                                                   // BTST
                case 1: WriteEa(ea, ByteSize, v ^ (1u << bit), opAddr); return;   // BCHG
                case 2: WriteEa(ea, ByteSize, v & ~(1u << bit), opAddr); return;  // BCLR
                default: WriteEa(ea, ByteSize, v | (1u << bit), opAddr); return;  // BSET
            }
        }

        switch (op & 0x0F00)
        {
            case 0x0800: // static bit ops: 0000 1000 TT MMM RRR, bit number in the extension word
            {
                int sub = (op >> 6) & 3;               // 0 BTST 1 BCHG 2 BCLR 3 BSET
                int bit = Fetch16() & 0x1F;
                RequireDataEa(mode, reg, opAddr, "a static bit operation");
                Ea ea = Resolve(mode, reg, ByteSize, opAddr);
                uint v = ReadEa(ea, ByteSize);
                bool set = (v & (1u << bit)) != 0;
                SetFlag(FlagZ, !set);
                switch (sub)
                {
                    case 0: return;                                                   // BTST
                    case 1: WriteEa(ea, ByteSize, v ^ (1u << bit), opAddr); return;   // BCHG
                    case 2: WriteEa(ea, ByteSize, v & ~(1u << bit), opAddr); return;  // BCLR
                    default: WriteEa(ea, ByteSize, v | (1u << bit), opAddr); return;  // BSET
                }
            }            case 0x0000: // ORI
            case 0x0200: // ANDI
            case 0x0A00: // EORI
            {
                int size = 1 << ((op >> 6) & 3);
                if (mode == 7 && reg == 4 && size <= WordSize)
                {
                    // ORI/ANDI/EORI to CCR (byte form) or SR (word form)
                    ushort imm = Fetch16();
                    if (size == WordSize)
                        throw new Cpu68kException(opAddr, $"unimplemented opcode at 0x{opAddr:X6}: {NameOf(op)} to SR");
                    uint v = SR & 0xFF;
                    switch (op & 0x0F00)
                    {
                        case 0x0000: v |= (byte)imm; break;
                        case 0x0200: v &= (byte)imm; break;
                        default: v ^= (byte)imm; break;
                    }
                    SR = (SR & 0xFF00) | (v & 0xFF);
                    return;
                }
                if (size > LongSize)
                    throw new Cpu68kException(opAddr, $"unimplemented opcode {op:X4} at 0x{opAddr:X6}: {NameOf(op)} size field 3");
                uint immValue = ReadImmediate(size);
                RequireDataEa(mode, reg, opAddr, NameOf(op));
                Ea ea = Resolve(mode, reg, size, opAddr);
                uint cur = ReadEa(ea, size);
                uint r = (op & 0x0F00) switch
                {
                    0x0000 => cur | immValue,
                    0x0200 => cur & immValue,
                    _ => cur ^ immValue,
                };
                WriteEa(ea, size, r, opAddr);
                SetLogicFlags(r, size);
                return;
            }
            case 0x0400: // SUBI
            case 0x0600: // ADDI
            case 0x0C00: // CMPI
            {
                int size = 1 << ((op >> 6) & 3);
                if (size > LongSize)
                    throw new Cpu68kException(opAddr, $"unimplemented opcode {op:X4} at 0x{opAddr:X6}: {NameOf(op)} size field 3");
                uint immValue = ReadImmediate(size);
                RequireDataEa(mode, reg, opAddr, NameOf(op));
                Ea ea = Resolve(mode, reg, size, opAddr);
                uint cur = ReadEa(ea, size);
                if ((op & 0x0F00) == 0x0C00)
                {
                    FlagsSub(cur, immValue, 0, cur - immValue, size, setX: false);
                    return;
                }
                uint r = (op & 0x0F00) == 0x0600 ? cur + immValue : cur - immValue;
                WriteEa(ea, size, r, opAddr);
                if ((op & 0x0F00) == 0x0600) FlagsAdd(cur, immValue, 0, r, size);
                else FlagsSub(cur, immValue, 0, r, size);
                return;
            }
            default:
                throw new Cpu68kException(opAddr, $"unimplemented opcode {op:X4} at 0x{opAddr:X6}: {NameOf(op)}");
        }
    }

    uint ReadImmediate(int size) => size switch
    {
        ByteSize => ReadImmByte(),
        WordSize => Fetch16(),
        _ => Fetch32(),
    };

    uint ReadImmByte()
    {
        // A byte immediate occupies a whole extension word and sits in its low half.
        ushort w = Fetch16();
        return (byte)w;
    }

    // ---- group 4 -------------------------------------------------------------

    void Group4(ushort op, uint opAddr)
    {
        int mode = (op >> 3) & 7, reg = op & 7;
        int sel = (op >> 6) & 7;      // bits 8..6: the size for 0x40xx..0x4Axx

        // CHK and LEA carry a register in bits 11..9, so they cannot be selected on bits
        // 11..8: LEA (d16,A7),A7 is 0x4FEF and would otherwise look like an unused opcode.
        if (sel == 6) // CHK.W <ea>,Dn
        {
            RequireDataEa(mode, reg, opAddr, "CHK");
            Ea e = Resolve(mode, reg, WordSize, opAddr);
            short bound = (short)ReadEa(e, WordSize);
            int dn = (op >> 9) & 7;
            short v = (short)(D[dn] & 0xFFFF);
            if (v < 0 || v > bound)
                throw new Cpu68kException(opAddr, $"CHK trap at 0x{opAddr:X6}: D{dn}.w={v}, bound={bound}");
            SetFlag(FlagZ, v == 0);
            SetFlag(FlagN, v < 0);
            return;
        }
        if (sel == 7) // LEA <ea>,An
        {
            if (mode == 0) throw new Cpu68kException(opAddr, $"LEA from a data register at 0x{opAddr:X6}");
            Ea e = Resolve(mode, reg, LongSize, opAddr);
            A[(op >> 9) & 7] = e.Mode == 1 ? A[e.Reg] : e.Addr;
            return;
        }

        switch (op & 0x0F00)
        {
            case 0x0000: // NEGX / MOVE from SR
            {
                if (sel == 3)
                {
                    if (mode == 1) throw new Cpu68kException(opAddr, $"MOVE from SR to An at 0x{opAddr:X6}");
                    Ea ea = Resolve(mode, reg, WordSize, opAddr);
                    WriteEa(ea, WordSize, SR & 0xFFFF, opAddr);
                    return;
                }
                int sz = 1 << sel;
                RequireDataEa(mode, reg, opAddr, "NEGX");
                Ea e = Resolve(mode, reg, sz, opAddr);
                uint v = ReadEa(e, sz);
                uint ext = X ? 1u : 0u;
                uint r = 0 - v - ext;
                WriteEa(e, sz, r, opAddr);
                FlagsSub(0, v, ext, r, sz);
                return;
            }
            case 0x0100: // 0x4100 / 0x4140 are not used on the 68000
                throw new Cpu68kException(opAddr, $"unimplemented opcode {op:X4} at 0x{opAddr:X6}: group 4 0x41xx sel {sel}");
            case 0x0200: // CLR / MOVE from CCR
            {
                if (sel == 3)
                {
                    if (mode == 1) throw new Cpu68kException(opAddr, $"MOVE from CCR to An at 0x{opAddr:X6}");
                    Ea ea = Resolve(mode, reg, WordSize, opAddr);
                    WriteEa(ea, WordSize, SR & 0xFF, opAddr);
                    return;
                }
                int sz = 1 << sel;
                RequireDataEa(mode, reg, opAddr, "CLR");
                Ea e = Resolve(mode, reg, sz, opAddr);
                WriteEa(e, sz, 0, opAddr);
                SetFlag(FlagN, false);
                SetFlag(FlagZ, true);
                SetFlag(FlagV, false);
                SetFlag(FlagC, false);
                return;
            }
            case 0x0400: // NEG / MOVE to CCR
            {
                if (sel == 3)
                {
                    if (mode == 1) throw new Cpu68kException(opAddr, $"MOVE to CCR from An at 0x{opAddr:X6}");
                    Ea ea = Resolve(mode, reg, WordSize, opAddr);
                    SR = (SR & 0xFF00) | (ReadEa(ea, WordSize) & 0xFF);
                    return;
                }
                int sz = 1 << sel;
                RequireDataEa(mode, reg, opAddr, "NEG");
                Ea e = Resolve(mode, reg, sz, opAddr);
                uint v = ReadEa(e, sz);
                uint r = 0 - v;
                WriteEa(e, sz, r, opAddr);
                FlagsSub(0, v, 0, r, sz);
                return;
            }
            case 0x0600: // NOT / MOVE to SR
            {
                if (sel == 3)
                    throw new Cpu68kException(opAddr, $"unimplemented opcode at 0x{opAddr:X6}: MOVE to SR");
                int sz = 1 << sel;
                RequireDataEa(mode, reg, opAddr, "NOT");
                Ea e = Resolve(mode, reg, sz, opAddr);
                uint r = ~ReadEa(e, sz);
                WriteEa(e, sz, r, opAddr);
                SetLogicFlags(r, sz);
                return;
            }
            case 0x0800:
            {
                if (sel == 0)
                    throw new Cpu68kException(opAddr, $"unimplemented opcode at 0x{opAddr:X6}: NBCD");
                if (sel == 1) // SWAP Dn / PEA <ea>
                {
                    if (mode == 0)
                    {
                        uint v = D[reg];
                        D[reg] = (v >> 16) | (v << 16);
                        SetLogicFlags(D[reg], LongSize);
                        return;
                    }
                    RequireDataEa(mode, reg, opAddr, "PEA");
                    Ea e = Resolve(mode, reg, LongSize, opAddr);
                    Push32(e.Mode == 1 ? A[e.Reg] : e.Addr);
                    return;
                }
                if (mode == 0) // EXT.W / EXT.L
                {
                    if (sel == 3)
                    {
                        D[reg] = (uint)(int)(short)(D[reg] & 0xFFFF);
                        SetLogicFlags(D[reg], LongSize);
                    }
                    else
                    {
                        sbyte v = (sbyte)(D[reg] & 0xFF);
                        D[reg] = Merge(D[reg], (uint)(int)v, WordSize);
                        SetLogicFlags(D[reg] & 0xFFFF, WordSize);
                    }
                    return;
                }
                MovemToMem(op, opAddr, sel == 3 ? LongSize : WordSize);
                return;
            }
            case 0x0A00:
            {
                if (op == 0x4AFC) throw new Cpu68kException(opAddr, $"ILLEGAL instruction at 0x{opAddr:X6}");
                if (sel == 3) // TAS
                {
                    RequireDataEa(mode, reg, opAddr, "TAS");
                    Ea e = Resolve(mode, reg, ByteSize, opAddr);
                    uint v = ReadEa(e, ByteSize);
                    SetLogicFlags(v, ByteSize);
                    WriteEa(e, ByteSize, v | 0x80, opAddr);
                    return;
                }
                int sz = 1 << sel;
                RequireDataEa(mode, reg, opAddr, "TST");
                Ea t = Resolve(mode, reg, sz, opAddr);
                uint tv = ReadEa(t, sz);
                SetNz(tv, sz);
                SetFlag(FlagV, false);
                SetFlag(FlagC, false);
                return;
            }
            case 0x0C00:
            {
                if (sel == 2 || sel == 3)
                {
                    MovemToReg(op, opAddr, sel == 3 ? LongSize : WordSize);
                    return;
                }
                throw new Cpu68kException(opAddr, $"unimplemented opcode {op:X4} at 0x{opAddr:X6}: group 4 0x4Cxx");
            }
            case 0x0E00:
                Group4E(op, opAddr);
                return;
            default:
                throw new Cpu68kException(opAddr, $"unimplemented opcode {op:X4} at 0x{opAddr:X6}: {NameOf(op)}");
        }
    }

    void MovemToMem(ushort op, uint opAddr, int size)
    {
        int mode = (op >> 3) & 7, reg = op & 7;
        ushort mask = Fetch16();
        if (mask == 0) throw new Cpu68kException(opAddr, $"MOVEM with an empty register mask at 0x{opAddr:X6}");

        if (mode == 4)
        {
            // Predecrement: the mask is reversed (bit 0 = A7) and the store runs downwards.
            uint addr = A[reg];
            for (int i = 0; i < 16; i++)
            {
                if ((mask & (1 << i)) == 0) continue;
                addr -= (uint)size;
                Mem.Write(addr, size, i < 8 ? A[7 - i] : D[15 - i]);
            }
            A[reg] = addr;
            return;
        }

        uint at;
        if (mode == 3) at = A[reg];                       // (An)+ advances by count*size
        else
        {
            Ea ea = Resolve(mode, reg, size, opAddr);
            if (ea.Mode <= 1 || (ea.Mode == 7 && ea.Reg == 4))
                throw new Cpu68kException(opAddr, $"MOVEM to memory needs a memory destination at 0x{opAddr:X6}");
            at = ea.Addr;
        }

        for (int i = 0; i < 16; i++)
        {
            if ((mask & (1 << i)) == 0) continue;
            Mem.Write(at, size, i < 8 ? D[i] : A[i - 8]);
            at += (uint)size;
        }
        if (mode == 3) A[reg] = at;
    }

    void MovemToReg(ushort op, uint opAddr, int size)
    {
        int mode = (op >> 3) & 7, reg = op & 7;
        ushort mask = Fetch16();
        if (mask == 0) throw new Cpu68kException(opAddr, $"MOVEM with an empty register mask at 0x{opAddr:X6}");
        if (mode == 4) throw new Cpu68kException(opAddr, $"MOVEM from memory with -(An) at 0x{opAddr:X6}");

        uint at;
        if (mode == 3) at = A[reg];
        else
        {
            Ea ea = Resolve(mode, reg, size, opAddr);
            if (ea.Mode <= 1 || (ea.Mode == 7 && ea.Reg == 4))
                throw new Cpu68kException(opAddr, $"MOVEM from memory needs a memory source at 0x{opAddr:X6}");
            at = ea.Addr;
        }

        for (int i = 0; i < 16; i++)
        {
            if ((mask & (1 << i)) == 0) continue;
            uint v = Mem.Read(at, size);
            if (size == WordSize) v = (uint)(int)(short)(v & 0xFFFF);
            if (i < 8) D[i] = v; else A[i - 8] = v;
            at += (uint)size;
        }
        if (mode == 3) A[reg] = at;
    }

    void Group4E(ushort op, uint opAddr)
    {
        int mode = (op >> 3) & 7, reg = op & 7;
        switch (op)
        {
            case 0x4E71: return;                                    // NOP
            case 0x4E75:                                            // RTS
                PC = Pop32();
                if (_depth > 0) _depth--;
                else if (StopOnRts)
                {
                    _stop = StopReason.Rts;
                    _stopMessage = "RTS from the entry function";
                    _stopPc = PC;
                }
                return;
            case 0x4E73:                                            // RTE
                SR = Pop16();
                PC = Pop32();
                _stop = StopReason.Rte;
                _stopMessage = "RTE (exception return) - stopping";
                _stopPc = PC;
                return;
            case 0x4E77:                                            // RTR
            {
                uint ccr = Pop16();
                SR = (SR & 0xFF00) | (ccr & 0xFF);
                PC = Pop32();
                return;
            }
            case 0x4E76:                                            // TRAPV
                if (V) throw new Cpu68kException(opAddr, $"TRAPV taken at 0x{opAddr:X6} (overflow trap)");
                return;
            case 0x4E70: throw new Cpu68kException(opAddr, "RESET is not modelled");
            case 0x4E72: throw new Cpu68kException(opAddr, "STOP is not modelled");
            case 0x4E60:
            case 0x4E68:
                throw new Cpu68kException(opAddr, $"unimplemented opcode at 0x{opAddr:X6}: MOVE to/from USP");
        }

        if ((op & 0xFFF0) == 0x4E40)
            throw new Cpu68kException(opAddr, $"TRAP #{op & 0xF} at 0x{opAddr:X6} is not modelled");

        switch (op & 0xFFF8)
        {
            case 0x4E50: // LINK An,#d16
            {
                int d = (short)Fetch16();
                uint sp = A[7] - 4;
                Mem.Write32(sp, A[reg]);
                A[7] = sp;
                A[reg] = sp;
                A[7] = sp + (uint)d;
                return;
            }
            case 0x4E58: // UNLK An
            {
                A[7] = A[reg];
                A[reg] = Mem.Read32(A[7]);
                A[7] += 4;
                return;
            }
        }

        if ((op & 0xFFC0) == 0x4E80) // JSR <ea>
        {
            if (mode <= 1) throw new Cpu68kException(opAddr, $"JSR to a register at 0x{opAddr:X6}");
            if (mode == 5 && reg == 6) // jsr (d16,A6) - an Amiga library call
            {
                int lvo = (short)Fetch16();
                Push32(PC);
                DoLibraryCall(lvo, opAddr);
                return;
            }
            Ea ea = Resolve(mode, reg, LongSize, opAddr);
            uint target = ea.Addr;
            Push32(PC);
            if (target >= VectorTableBase && target < VectorTableEnd)
            {
                DoStub(SlotOf(target), opAddr);
                return;
            }
            PC = target;
            _depth++;
            return;
        }
        if ((op & 0xFFC0) == 0x4EC0) // JMP <ea>
        {
            if (mode <= 1) throw new Cpu68kException(opAddr, $"JMP to a register at 0x{opAddr:X6}");
            if (mode == 5 && reg == 6) // jmp (d16,A6) - the tail end of a library wrapper
            {
                int lvo = (short)Fetch16();
                DoLibraryCall(lvo, opAddr);
                return;
            }
            Ea ea = Resolve(mode, reg, LongSize, opAddr);
            uint target = ea.Addr;
            if (target >= VectorTableBase && target < VectorTableEnd)
                throw new Cpu68kException(opAddr, $"JMP into vector-table stub {SlotOf(target)} at 0x{opAddr:X6}");
            PC = target;
            return;
        }

        throw new Cpu68kException(opAddr, $"unimplemented opcode {op:X4} at 0x{opAddr:X6}: group 4E");
    }

    // ---- vector-table stubs --------------------------------------------------

    void DoStub(int slot, uint opAddr)
    {
        uint ret = Mem.Read32(A[7]);          // the jsr to the stub already pushed it
        var call = new StubCall
        {
            Slot = slot,
            Key = slot,
            Target = Mem.Read32(VectorTableBase + (uint)slot * 6 + 2),
            ReturnAddress = ret,
        };
        ReadArgs(call, 4);

        if (StubHost?.Invoke(call) == true)
        {
            _stubs.Add(call);
            A[7] += 4;
            D[0] = call.Result;
            PC = ret;
            return;
        }

        // Unmodelled slot: run what the stub points at. Engine-internal slots then execute
        // their real code, and Amiga library wrappers end in jmp (d16,A6), which is caught
        // by DoLibraryCall and named by its LVO. The stub is *called*, so its rts returns to the
        // jsr's caller (`_depth` mirrors that; without it the run stopped one frame deep and the
        // differential compared a truncated execution against a complete one).
        call.Note = "passthrough";
        _stubs.Add(call);
        PC = call.Target;
        _depth++;
    }

    /// <summary>A call into an Amiga library: the displacement is the LVO, so no base is needed.</summary>
    void DoLibraryCall(int lvo, uint opAddr)
    {
        uint ret = Mem.Read32(A[7]);
        var call = new StubCall { Slot = -1, Key = lvo, Lvo = lvo, ReturnAddress = ret };
        ReadArgs(call, 4);

        if (StubHost?.Invoke(call) != true)
        {
            if (!AllowOsStubs)
                throw new Cpu68kException(opAddr, $"library call LVO {lvo} ({LvoName(lvo)}) at 0x{opAddr:X6} " +
                                                  "- allowOsStubs is false");
            call.Result = 0;
            call.Note = "unmodelled";
            _purityUnknown = true;
        }
        _stubs.Add(call);
        A[7] += 4;
        D[0] = call.Result;
        PC = ret;
    }

    void ReadArgs(StubCall call, int firstArgOffset)
    {
        for (int i = 0; i < call.Args.Length; i++)
            call.Args[i] = Mem.Read32(A[7] + (uint)(firstArgOffset + i * 4));
    }

    /// <summary>Names of the exec.library LVOs this build actually calls.</summary>
    static string LvoName(int lvo) => lvo switch
    {
        -132 => "Forbid",
        -198 => "AllocMem",
        -210 => "FreeMem",
        _ => "-",
    };

    // ---- group 5: ADDQ/SUBQ, Scc, DBcc --------------------------------------

    void Group5(ushort op, uint opAddr)
    {
        int mode = (op >> 3) & 7, reg = op & 7;
        int cond = (op >> 8) & 0xF;

        if ((op & 0x00F8) == 0x00C8) // DBcc Dn,disp16
        {
            int d = (short)Fetch16();
            if (!TestCondition(cond))
            {
                short counter = (short)((D[reg] & 0xFFFF) - 1);
                D[reg] = Merge(D[reg], (uint)(ushort)counter, WordSize);
                if (counter != -1) PC = PC - 2 + (uint)d;
            }
            return;
        }

        if ((op & 0x00C0) == 0x00C0) // Scc <ea>
        {
            RequireDataEa(mode, reg, opAddr, "Scc");
            Ea ea = Resolve(mode, reg, ByteSize, opAddr);
            WriteEa(ea, ByteSize, TestCondition(cond) ? 0xFFu : 0u, opAddr);
            return;
        }

        int data = (op >> 9) & 7;
        if (data == 0) data = 8;
        int size = 1 << ((op >> 6) & 3);
        if (size > LongSize)
            throw new Cpu68kException(opAddr, $"unimplemented opcode {op:X4} at 0x{opAddr:X6}: ADDQ/SUBQ size 3");
        bool isSub = (op & 0x0100) != 0;

        if (mode == 1) // ADDQ/SUBQ to An: no flags, and the word form sign-extends
        {
            uint delta = size == WordSize ? (uint)(int)(short)data : (uint)data;
            A[reg] = isSub ? A[reg] - delta : A[reg] + delta;
            return;
        }
        RequireDataEa(mode, reg, opAddr, isSub ? "SUBQ" : "ADDQ");
        Ea e = Resolve(mode, reg, size, opAddr);
        uint v = ReadEa(e, size);
        uint r = isSub ? v - (uint)data : v + (uint)data;
        WriteEa(e, size, r, opAddr);
        if (isSub) FlagsSub(v, (uint)data, 0, r, size);
        else FlagsAdd(v, (uint)data, 0, r, size);
    }

    // ---- group 6: branches ---------------------------------------------------

    void Branch(ushort op, uint opAddr)
    {
        int cond = (op >> 8) & 0xF;
        int disp8 = op & 0xFF;
        uint baseAddr = opAddr + 2;
        int disp;
        if (disp8 == 0) disp = (short)Fetch16();
        else if (disp8 == 0xFF)
            throw new Cpu68kException(opAddr, $"unimplemented opcode {op:X4} at 0x{opAddr:X6}: 32-bit branch displacement");
        else disp = (sbyte)disp8;

        if (cond == 0) { PC = baseAddr + (uint)disp; return; }            // BRA
        if (cond == 1)                                                    // BSR
        {
            Push32(PC);
            PC = baseAddr + (uint)disp;
            _depth++;
            return;
        }
        if (TestCondition(cond)) PC = baseAddr + (uint)disp;
    }

    // ---- group 8: OR / DIVU / DIVS / SBCD ------------------------------------

    void Group8(ushort op, uint opAddr)
    {
        int reg = (op >> 9) & 7;
        int opmode = (op >> 6) & 7;
        int mode = (op >> 3) & 7, ea = op & 7;

        switch (opmode)
        {
            case 0:
            case 1:
            case 2:
            {
                int size = 1 << opmode;
                Ea e = Resolve(mode, ea, size, opAddr);
                uint r = ReadEa(e, size) | Truncate(D[reg], size);
                SetLogicFlags(r, size);
                D[reg] = Merge(D[reg], r, size);
                return;
            }
            case 3: Divide(op, opAddr, signed: false); return;
            case 4:
                throw new Cpu68kException(opAddr, $"unimplemented opcode {op:X4} at 0x{opAddr:X6}: SBCD");
            case 5:
            case 6:
            {
                int size = 1 << (opmode - 4);
                RequireDataEa(mode, ea, opAddr, "OR");
                Ea e = Resolve(mode, ea, size, opAddr);
                uint r = ReadEa(e, size) | Truncate(D[reg], size);
                WriteEa(e, size, r, opAddr);
                SetLogicFlags(r, size);
                return;
            }
            default: Divide(op, opAddr, signed: true); return;
        }
    }

    void Divide(ushort op, uint opAddr, bool signed)
    {
        int reg = (op >> 9) & 7;
        int mode = (op >> 3) & 7, ea = op & 7;
        // The source can be any data mode, including an immediate; only A direct is illegal.
        if (mode == 1) throw new Cpu68kException(opAddr, $"{(signed ? "DIVS" : "DIVU")} from an address register at 0x{opAddr:X6}");
        Ea e = Resolve(mode, ea, WordSize, opAddr);
        uint divisor = ReadEa(e, WordSize);

        if (signed)
        {
            int dv = (short)(divisor & 0xFFFF);
            if (dv == 0) throw new Cpu68kException(opAddr, $"DIVS by zero at 0x{opAddr:X6}");
            int dividend = (int)D[reg];
            long q = dividend / dv;
            int rem = dividend % dv;
            if (q > short.MaxValue || q < short.MinValue)
            {
                SetFlag(FlagV, true);
                SetFlag(FlagC, false);
                return;
            }
            D[reg] = ((uint)(ushort)rem << 16) | (ushort)q;
            SetNz((uint)q & 0xFFFF, WordSize);
            SetFlag(FlagV, false);
            SetFlag(FlagC, false);
            return;
        }

        if (divisor == 0) throw new Cpu68kException(opAddr, $"DIVU by zero at 0x{opAddr:X6}");
        uint dividend32 = D[reg];
        uint qu = dividend32 / divisor;
        uint rem32 = dividend32 % divisor;
        if (qu > 0xFFFF)
        {
            SetFlag(FlagV, true);
            SetFlag(FlagC, false);
            return;
        }
        D[reg] = (rem32 << 16) | qu;
        SetNz(qu, WordSize);
        SetFlag(FlagV, false);
        SetFlag(FlagC, false);
    }

    // ---- group 9 / D: SUB / ADD (and their ADDA/SUBA forms) ------------------

    void GroupAddSub(ushort op, uint opAddr, bool isAdd)
    {
        int reg = (op >> 9) & 7;
        int opmode = (op >> 6) & 7;
        int mode = (op >> 3) & 7, ea = op & 7;

        switch (opmode)
        {
            case 0:
            case 1:
            case 2: // <ea> op Dn
            {
                int size = 1 << opmode;
                Ea e = Resolve(mode, ea, size, opAddr);
                uint src = ReadEa(e, size);
                uint dst = Truncate(D[reg], size);
                uint r = isAdd ? dst + src : dst - src;
                if (isAdd) FlagsAdd(dst, src, 0, r, size);
                else FlagsSub(dst, src, 0, r, size);
                D[reg] = Merge(D[reg], r, size);
                return;
            }
            case 3: // SUBA.W / ADDA.W
            case 7: // SUBA.L / ADDA.L
            {
                int size = opmode == 3 ? WordSize : LongSize;
                Ea e = Resolve(mode, ea, size, opAddr);
                uint src = ReadEa(e, size);
                if (size == WordSize) src = (uint)(int)(short)src;
                A[reg] = isAdd ? A[reg] + src : A[reg] - src;
                return;
            }
            case 4: // ADDX / SUBX
                throw new Cpu68kException(opAddr, $"unimplemented opcode {op:X4} at 0x{opAddr:X6}: " +
                                                   (isAdd ? "ADDX" : "SUBX") + " (extend-flag form)");
            case 5:
            case 6: // Dn op <ea>
            {
                int size = 1 << (opmode - 4);
                RequireDataEa(mode, ea, opAddr, isAdd ? "ADD" : "SUB");
                Ea e = Resolve(mode, ea, size, opAddr);
                uint src = Truncate(D[reg], size);
                uint dst = ReadEa(e, size);
                uint r = isAdd ? dst + src : dst - src;
                if (isAdd) FlagsAdd(dst, src, 0, r, size);
                else FlagsSub(dst, src, 0, r, size);
                WriteEa(e, size, r, opAddr);
                return;
            }
        }
        throw new Cpu68kException(opAddr, $"unimplemented opcode {op:X4} at 0x{opAddr:X6}: opmode {opmode}");
    }

    // ---- group B: CMP / CMPA / CMPM / EOR ------------------------------------

    void GroupB(ushort op, uint opAddr)
    {
        int reg = (op >> 9) & 7;
        int opmode = (op >> 6) & 7;
        int mode = (op >> 3) & 7, ea = op & 7;

        switch (opmode)
        {
            case 0:
            case 1:
            case 2: // CMP.<size> <ea>,Dn
            {
                int size = 1 << opmode;
                Ea e = Resolve(mode, ea, size, opAddr);
                uint src = ReadEa(e, size);
                uint dst = Truncate(D[reg], size);
                FlagsSub(dst, src, 0, dst - src, size, setX: false);
                return;
            }
            case 3: // CMPA.W
            case 7: // CMPA.L
            {
                int size = opmode == 3 ? WordSize : LongSize;
                Ea e = Resolve(mode, ea, size, opAddr);
                uint src = ReadEa(e, size);
                if (size == WordSize) src = (uint)(int)(short)src;
                uint dst = A[reg];
                FlagsSub(dst, src, 0, dst - src, LongSize, setX: false);
                return;
            }
            case 4:
            case 5:
            case 6:
            {
                int size = 1 << (opmode - 4);
                if (mode == 1) // CMPM (An)+,(An)+
                {
                    uint src = Mem.Read(A[reg], size);
                    A[reg] += (uint)size;
                    uint dst = Mem.Read(A[ea], size);
                    A[ea] += (uint)size;
                    FlagsSub(dst, src, 0, dst - src, size, setX: false);
                    return;
                }
                RequireDataEa(mode, ea, opAddr, "EOR");
                Ea e = Resolve(mode, ea, size, opAddr);
                uint r = ReadEa(e, size) ^ Truncate(D[reg], size);
                WriteEa(e, size, r, opAddr);
                SetLogicFlags(r, size);
                return;
            }
        }
        throw new Cpu68kException(opAddr, $"unimplemented opcode {op:X4} at 0x{opAddr:X6}: opmode {opmode}");
    }

    // ---- group C: AND / MULU / MULS / EXG ------------------------------------

    void GroupC(ushort op, uint opAddr)
    {
        int reg = (op >> 9) & 7;
        int opmode = (op >> 6) & 7;
        int mode = (op >> 3) & 7, ea = op & 7;

        // EXG has three encodings that otherwise look like AND/MUL opmodes.
        if ((op & 0xF1F8) == 0xC140) { (D[reg], D[ea]) = (D[ea], D[reg]); return; }
        if ((op & 0xF1F8) == 0xC148) { (A[reg], A[ea]) = (A[ea], A[reg]); return; }
        if ((op & 0xF1F8) == 0xC188) { (D[reg], A[ea]) = (A[ea], D[reg]); return; }

        switch (opmode)
        {
            case 0:
            case 1:
            case 2: // AND.<size> <ea>,Dn
            {
                int size = 1 << opmode;
                Ea e = Resolve(mode, ea, size, opAddr);
                uint r = ReadEa(e, size) & Truncate(D[reg], size);
                SetLogicFlags(r, size);
                D[reg] = Merge(D[reg], r, size);
                return;
            }
            case 3: // MULU.W
            {
                Ea e = Resolve(mode, ea, WordSize, opAddr);
                uint r = (D[reg] & 0xFFFF) * (ReadEa(e, WordSize) & 0xFFFF);
                D[reg] = r;
                SetNz(r, LongSize);
                SetFlag(FlagV, false);
                SetFlag(FlagC, false);
                return;
            }
            case 4:
                throw new Cpu68kException(opAddr, $"unimplemented opcode {op:X4} at 0x{opAddr:X6}: ABCD");
            case 5:
                throw new Cpu68kException(opAddr, $"unimplemented opcode {op:X4} at 0x{opAddr:X6}: opmode 5 (AND.W Dn,<ea>)");
            case 6: // AND.L Dn,<ea>
            {
                RequireDataEa(mode, ea, opAddr, "AND.L");
                Ea e = Resolve(mode, ea, LongSize, opAddr);
                uint r = ReadEa(e, LongSize) & D[reg];
                WriteEa(e, LongSize, r, opAddr);
                SetLogicFlags(r, LongSize);
                return;
            }
            default: // MULS.W
            {
                Ea e = Resolve(mode, ea, WordSize, opAddr);
                int r = (short)(D[reg] & 0xFFFF) * (short)ReadEa(e, WordSize);
                D[reg] = (uint)r;
                SetNz((uint)r, LongSize);
                SetFlag(FlagV, false);
                SetFlag(FlagC, false);
                return;
            }
        }
    }

    // ---- group E: shifts and rotates ----------------------------------------

    void Shift(ushort op, uint opAddr)
    {
        if ((op & 0x00C0) == 0x00C0) // memory form: shift the word at <ea> by one
        {
            int typeMem = (op >> 9) & 3;          // 0 AS 1 LS 2 ROX 3 RO
            bool leftMem = (op & 0x0100) != 0;
            int mode = (op >> 3) & 7, reg = op & 7;
            RequireDataEa(mode, reg, opAddr, "a memory shift");
            Ea e = Resolve(mode, reg, WordSize, opAddr);
            uint v = ReadEa(e, WordSize);
            WriteEa(e, WordSize, ShiftValue(typeMem, leftMem, 1, v, WordSize), opAddr);
            return;
        }

        int count = (op >> 9) & 7;
        int type = (op >> 3) & 3;
        bool left = (op & 0x0100) != 0;
        int size = 1 << ((op >> 6) & 3);
        if (size > LongSize)
            throw new Cpu68kException(opAddr, $"unimplemented opcode {op:X4} at 0x{opAddr:X6}: shift size 3");
        int dn = op & 7;

        if ((op & 0x0020) != 0) count = (int)(D[count] & 63);
        else if (count == 0) count = 8;

        if (count == 0) { SetFlag(FlagC, false); return; }

        D[dn] = ShiftValue(type, left, count, Truncate(D[dn], size), size);
    }

    uint ShiftValue(int type, bool left, int count, uint value, int size)
    {
        uint m = SizeMask(size);
        uint sign = m ^ (m >> 1);
        uint v = value & m;
        uint signOfInput = v & sign;
        bool carry = false;
        bool overflow = false;

        for (int i = 0; i < count; i++)
        {
            if (left)
            {
                bool outBit = (v & sign) != 0;
                v = (v << 1) & m;
                if (type == 2 && X) v |= 1;                                      // ROXL
                if (type == 0 && ((v & sign) != 0) != outBit) overflow = true;   // ASL
                carry = outBit;
            }
            else
            {
                bool outBit = (v & 1) != 0;
                v >>= 1;
                if (type == 0) v |= signOfInput;                                 // ASR keeps the input sign
                if (type == 2 && X) v |= sign;                                   // ROXR
                carry = outBit;
            }
            if (type != 3) SetFlag(FlagX, carry);                                // RO leaves X alone
        }

        SetFlag(FlagC, carry);
        SetNz(v, size);
        SetFlag(FlagV, overflow);
        return v;
    }
}
