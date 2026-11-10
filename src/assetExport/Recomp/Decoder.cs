using System;

namespace ICFTD.AmigaExport.Recomp;

/// <summary>
/// Decodes one 68000 instruction into an <see cref="Insn"/>. The same group dispatch, the same
/// effective-address table and the same extension-word rules as the interpreter
/// (<c>Cpu68k.cs</c>) - the interpreter is the reference, so the two must never disagree about how
/// long an instruction is or what its operands are. Where the interpreter would throw, the decoder
/// returns an instruction marked <see cref="Opk.Unsupported"/>; the emitter then leaves the whole
/// function to the interpreter instead of guessing.
/// </summary>
public sealed class Decoder
{
    readonly byte[] _image;

    public Decoder(byte[] image) => _image = image;

    public ushort Read16(uint a) => (ushort)((_image[a & 0xFFFFFF] << 8) | _image[(a + 1) & 0xFFFFFF]);
    public uint Read32(uint a) =>
        ((uint)_image[a & 0xFFFFFF] << 24) | ((uint)_image[(a + 1) & 0xFFFFFF] << 16) |
        ((uint)_image[(a + 2) & 0xFFFFFF] << 8) | _image[(a + 3) & 0xFFFFFF];

    uint _pc;

    ushort Fetch16()
    {
        ushort w = Read16(_pc);
        _pc += 2;
        return w;
    }

    uint Fetch32()
    {
        uint v = Read32(_pc);
        _pc += 4;
        return v;
    }

    public Insn Decode(uint addr)
    {
        _pc = addr;
        var insn = new Insn { Addr = addr };
        ushort op = Fetch16();
        insn.Op = op;
        try
        {
            switch (op >> 12)
            {
                case 0x0: Group0(insn, op); break;
                case 0x1:
                case 0x2:
                case 0x3: OpMove(insn, op); break;
                case 0x4: Group4(insn, op); break;
                case 0x5: Group5(insn, op); break;
                case 0x6: Branch(insn, op); break;
                case 0x7: MoveQ(insn, op); break;
                case 0x8: Group8(insn, op); break;
                case 0x9: AddSub(insn, op, false); break;
                case 0xB: GroupB(insn, op); break;
                case 0xC: GroupC(insn, op); break;
                case 0xD: AddSub(insn, op, true); break;
                case 0xE: Shift(insn, op); break;
                default: Unsupported(insn, $"line {op >> 12:x}"); break;
            }
        }
        catch (UnsupportedException ex)
        {
            insn.Kind = Opk.Unsupported;
            insn.Why = ex.Message;
        }
        if (insn.Kind != Opk.Unsupported)
        {
            insn.Len = (int)(_pc - addr);
            if (insn.Len == 0 || insn.Len > 12) Unsupported(insn, "bad length");
        }
        return insn;
    }

    sealed class UnsupportedException : Exception
    {
        public UnsupportedException(string m) : base(m) { }
    }

    static Insn Unsupported(Insn i, string why)
    {
        i.Kind = Opk.Unsupported;
        i.Why = why;
        return i;
    }

    static void Need(bool ok, string why)
    {
        if (!ok) throw new UnsupportedException(why);
    }

    // ---- effective addresses -------------------------------------------------

    Ea Resolve(int mode, int reg, int size, bool withIncrement = true)
    {
        var ea = new Ea { Mode = mode, Reg = reg };
        switch (mode)
        {
            case 0:
            case 1:
                return ea;
            case 2:
                return ea;
            case 3:
                Need(withIncrement, "(An)+ is not a computable address here");
                return ea;
            case 4:
                Need(withIncrement, "-(An) is not a computable address here");
                return ea;
            case 5:
                ea.Disp = (short)Fetch16();
                return ea;
            case 6:
            {
                ushort ext = Fetch16();
                Need((ext & 0x0100) == 0, "68020 full-format extension word");
                ea.Disp = (sbyte)(ext & 0xFF);
                ea.IndexReg = (ext >> 12) & 7;
                ea.IndexAddr = (ext & 0x8000) != 0;
                ea.IndexLong = (ext & 0x0800) != 0;
                ea.Scale = (ext >> 9) & 3;
                return ea;
            }
            default:
                switch (reg)
                {
                    case 0:
                        ea.Abs = (uint)(int)(short)Fetch16();
                        return ea;
                    case 1:
                        ea.Abs = Fetch32();
                        return ea;
                    case 2:
                    {
                        uint at = _pc;
                        ea.Disp = (short)Fetch16();
                        ea.Abs = at + (uint)ea.Disp;
                        ea.IsPcRelative = true;
                        return ea;
                    }
                    case 3:
                    {
                        uint at = _pc;
                        ushort ext = Fetch16();
                        Need((ext & 0x0100) == 0, "68020 full-format extension word");
                        ea.Disp = (sbyte)(ext & 0xFF);
                        ea.IndexReg = (ext >> 12) & 7;
                        ea.IndexAddr = (ext & 0x8000) != 0;
                        ea.IndexLong = (ext & 0x0800) != 0;
                        ea.Scale = (ext >> 9) & 3;
                        ea.Abs = at + (uint)ea.Disp;
                        ea.IsPcRelative = true;
                        return ea;
                    }
                    default:
                        // #imm: a byte operand sits in the low half of a whole extension word.
                        ea.Mode = 7;
                        ea.Reg = 4;
                        if (size == 1) { ea.Imm = (uint)(byte)Read16(_pc); _pc += 2; }
                        else if (size == 2) { ea.Imm = Fetch16(); }
                        else { ea.Imm = Fetch32(); }
                        return ea;
                }
        }
    }

    /// <summary>The addressing modes that may be a data operand (immediate and An are not).</summary>
    static void DataEa(int mode, int reg)
    {
        Need(!(mode == 7 && reg == 4), "an immediate is not a destination");
        Need(mode != 1, "an address register is not a data operand");
    }

    // ---- MOVE / MOVEQ --------------------------------------------------------

    void OpMove(Insn i, ushort op)
    {
        int size = (op >> 12) switch { 0x1 => 1, 0x2 => 4, _ => 2 };
        int dstReg = (op >> 9) & 7, dstMode = (op >> 6) & 7;
        int srcMode = (op >> 3) & 7, srcReg = op & 7;
        Need(!(size == 1 && (srcMode == 1 || dstMode == 1)), "byte access to an address register");

        i.Size = size;
        i.Src = Resolve(srcMode, srcReg, size);
        if (dstMode == 1) { i.Kind = Opk.MoveA; i.Reg = dstReg; return; }
        i.Dst = Resolve(dstMode, dstReg, size);
        i.Kind = Opk.Move;
    }

    void MoveQ(Insn i, ushort op)
    {
        Need((op & 0x0100) == 0, "MOVEQ with bit 8 set");
        i.Kind = Opk.MoveQ;
        i.Size = 4;
        i.Reg = (op >> 9) & 7;
        i.Imm = (uint)(int)(sbyte)(op & 0xFF);
    }

    // ---- group 0 -------------------------------------------------------------

    void Group0(Insn i, ushort op)
    {
        int mode = (op >> 3) & 7, reg = op & 7;

        // Dynamic bit ops: bit 8 set, but not the static 0x0800..0x08FF block.
        if ((op & 0x0100) != 0 && (op & 0xFF00) != 0x0800)
        {
            int sub = (op >> 6) & 3;
            DataEa(mode, reg);
            i.Dst = Resolve(mode, reg, 1);
            i.Kind = sub switch { 0 => Opk.Btst, 1 => Opk.Bchg, 2 => Opk.Bclr, _ => Opk.Bset };
            i.Size = 1;
            i.Reg = (op >> 9) & 7;
            i.BitFromReg = true;
            return;
        }

        switch (op & 0x0F00)
        {
            case 0x0800:
            {
                int sub = (op >> 6) & 3;
                int bit = Fetch16() & 0x1F;
                DataEa(mode, reg);
                i.Dst = Resolve(mode, reg, 1);
                i.Kind = sub switch { 0 => Opk.Btst, 1 => Opk.Bchg, 2 => Opk.Bclr, _ => Opk.Bset };
                i.Size = 1;
                i.Reg = bit;
                i.BitFromReg = false;
                return;
            }
            case 0x0000:   // ORI
            case 0x0200:   // ANDI
            case 0x0A00:   // EORI
            {
                int size = 1 << ((op >> 6) & 3);
                Need(size <= 4, "ORI/ANDI/EORI size field 3");
                i.Imm = size switch { 1 => (uint)(byte)Fetch16(), 2 => Fetch16(), _ => Fetch32() };
                // ORI/ANDI/EORI to CCR/SR is not emitted yet.
                Need(!(mode == 7 && reg == 4), "ORI/ANDI/EORI to CCR/SR");
                DataEa(mode, reg);
                i.Dst = Resolve(mode, reg, size);
                i.Src = null;
                i.Size = size;
                i.Kind = (op & 0x0F00) switch
                {
                    0x0000 => Opk.OrI,
                    0x0200 => Opk.AndI,
                    _ => Opk.EorI
                };
                return;
            }
            case 0x0400:   // SUBI
            case 0x0600:   // ADDI
            case 0x0C00:   // CMPI
            {
                int size = 1 << ((op >> 6) & 3);
                Need(size <= 4, "SUBI/ADDI/CMPI size field 3");
                i.Imm = size switch { 1 => (uint)(byte)Fetch16(), 2 => Fetch16(), _ => Fetch32() };
                Need(!(mode == 7 && reg == 4), "an immediate source needs a data destination");
                DataEa(mode, reg);
                i.Dst = Resolve(mode, reg, size);
                i.Size = size;
                i.Kind = (op & 0x0F00) switch
                {
                    0x0400 => Opk.SubI,
                    0x0600 => Opk.AddI,
                    _ => Opk.CmpI
                };
                return;
            }
        }
        Unsupported(i, $"group 0 opcode {op:x4}");
    }

    // ---- group 4 -------------------------------------------------------------

    void Group4(Insn i, ushort op)
    {
        int mode = (op >> 3) & 7, reg = op & 7;
        int sel = (op >> 6) & 7;

        if (sel == 6) { Need(false, "CHK"); return; }
        if (sel == 7)
        {
            Need(mode != 0, "LEA from a data register");
            i.Dst = Resolve(mode, reg, 4, withIncrement: false);
            i.Kind = Opk.Lea;
            i.Size = 4;
            i.Reg = (op >> 9) & 7;
            return;
        }

        switch (op & 0x0F00)
        {
            case 0x0000:
                if (sel == 3) { Need(false, "MOVE from SR"); return; }
                DataEa(mode, reg);
                i.Kind = Opk.NegX;
                i.Size = 1 << sel;
                i.Dst = Resolve(mode, reg, i.Size);
                return;
            case 0x0200:
                if (sel == 3) { Need(false, "MOVE from CCR"); return; }
                DataEa(mode, reg);
                i.Kind = Opk.Clr;
                i.Size = 1 << sel;
                i.Dst = Resolve(mode, reg, i.Size);
                return;
            case 0x0400:
                if (sel == 3) { Need(false, "MOVE to CCR"); return; }
                DataEa(mode, reg);
                i.Kind = Opk.Neg;
                i.Size = 1 << sel;
                i.Dst = Resolve(mode, reg, i.Size);
                return;
            case 0x0600:
                if (sel == 3) { Need(false, "MOVE to SR"); return; }
                DataEa(mode, reg);
                i.Kind = Opk.Not;
                i.Size = 1 << sel;
                i.Dst = Resolve(mode, reg, i.Size);
                return;
            case 0x0800:
                if (sel == 1)
                {
                    if (mode == 0)
                    {
                        i.Kind = Opk.Swap;
                        i.Reg = reg;
                        i.Size = 4;
                        return;
                    }
                    DataEa(mode, reg);
                    i.Src = Resolve(mode, reg, 4);
                    i.Kind = Opk.Pea;
                    i.Size = 4;
                    return;
                }
                if (mode == 0 && (sel == 2 || sel == 3))
                {
                    i.Kind = Opk.Ext;
                    i.Reg = reg;
                    i.Size = sel == 3 ? 4 : 2;
                    return;
                }
                i.Mask = Fetch16();
                i.Kind = Opk.MovemToMem;
                i.Size = sel == 3 ? 4 : 2;
                i.Dst = Resolve(mode, reg, i.Size);
                return;
            case 0x0A00:
                if (op == 0x4AFC) { Need(false, "ILLEGAL"); return; }
                if (sel == 3)
                {
                    DataEa(mode, reg);
                    i.Kind = Opk.Tas;
                    i.Size = 1;
                    i.Dst = Resolve(mode, reg, 1);
                    return;
                }
                DataEa(mode, reg);
                i.Kind = Opk.Tst;
                i.Size = 1 << sel;
                i.Dst = Resolve(mode, reg, i.Size);
                return;
            case 0x0C00:
                Need(sel == 2 || sel == 3, "group 4 0x4Cxx");
                i.Mask = Fetch16();
                i.Kind = Opk.MovemToReg;
                i.Size = sel == 3 ? 4 : 2;
                i.Src = Resolve(mode, reg, i.Size);
                return;
            case 0x0E00:
                Group4E(i, op);
                return;
        }
        Unsupported(i, $"group 4 opcode {op:x4}");
    }

    void Group4E(Insn i, ushort op)
    {
        int mode = (op >> 3) & 7, reg = op & 7;

        switch (op)
        {
            case 0x4E71: i.Kind = Opk.Nop; return;
            case 0x4E75: i.Kind = Opk.Rts; return;
            case 0x4E73: i.Kind = Opk.Rtr; return;          // RTE: rejected by the emitter
            case 0x4E77: i.Kind = Opk.Rtr; return;
            case 0x4E76: Need(false, "TRAPV"); return;
        }
        if ((op & 0xFFF0) == 0x4E40) { Need(false, "TRAP"); return; }

        if ((op & 0xFFF8) == 0x4E50)
        {
            i.Kind = Opk.Link;
            i.Reg = reg;
            i.Imm = (uint)(int)(short)Fetch16();
            return;
        }
        if ((op & 0xFFF8) == 0x4E58)
        {
            i.Kind = Opk.Unlk;
            i.Reg = reg;
            return;
        }
        if ((op & 0xFFC0) == 0x4E80)                     // JSR <ea>
        {
            Need(mode > 1, "JSR to a register");
            i.Src = Resolve(mode, reg, 4, withIncrement: false);
            i.Kind = Opk.Jsr;
            return;
        }
        if ((op & 0xFFC0) == 0x4EC0)                     // JMP <ea>
        {
            Need(mode > 1, "JMP to a register");
            i.Src = Resolve(mode, reg, 4, withIncrement: false);
            i.Kind = Opk.Jmp;
            return;
        }
        Unsupported(i, $"group 4E opcode {op:x4}");
    }

    // ---- group 5 -------------------------------------------------------------

    void Group5(Insn i, ushort op)
    {
        int mode = (op >> 3) & 7, reg = op & 7;
        int cond = (op >> 8) & 0xF;

        if ((op & 0x00F8) == 0x00C8)                     // DBcc Dn,disp16
        {
            i.Kind = Opk.DBcc;
            i.Cond = cond;
            i.Reg = reg;
            i.Imm = (uint)(int)(short)Fetch16();
            i.Target = i.Addr + 2u + i.Imm;
            i.Size = 2;
            return;
        }
        if ((op & 0x00C0) == 0x00C0)                     // Scc <ea>
        {
            DataEa(mode, reg);
            i.Kind = Opk.Scc;
            i.Cond = cond;
            i.Size = 1;
            i.Dst = Resolve(mode, reg, 1);
            return;
        }

        int data = (op >> 9) & 7;
        if (data == 0) data = 8;
        int size = 1 << ((op >> 6) & 3);
        Need(size <= 4, "ADDQ/SUBQ size field 3");
        bool isSub = (op & 0x0100) != 0;
        i.Size = size;
        i.Imm = (uint)data;
        if (mode == 1)
        {
            i.Kind = isSub ? Opk.SubQ : Opk.AddQ;
            i.Dst = new Ea { Mode = 1, Reg = reg };
            return;
        }
        DataEa(mode, reg);
        i.Kind = isSub ? Opk.SubQ : Opk.AddQ;
        i.Dst = Resolve(mode, reg, size);
    }

    // ---- group 6 -------------------------------------------------------------

    void Branch(Insn i, ushort op)
    {
        int cond = (op >> 8) & 0xF;
        int disp8 = op & 0xFF;
        uint baseAddr = i.Addr + 2;
        int disp;
        if (disp8 == 0) disp = (short)Fetch16();
        else if (disp8 == 0xFF) throw new UnsupportedException("32-bit branch displacement");
        else disp = (sbyte)disp8;

        i.Target = baseAddr + (uint)disp;
        i.Cond = cond;
        i.Kind = cond switch
        {
            0 => Opk.Bra,
            1 => Opk.Bsr,
            _ => Opk.Bcc
        };
    }

    // ---- group 8 / C: OR, AND, DIV, MUL -------------------------------------

    void Group8(Insn i, ushort op)
    {
        int reg = (op >> 9) & 7;
        int opmode = (op >> 6) & 7;
        int mode = (op >> 3) & 7, ea = op & 7;

        switch (opmode)
        {
            case 0:
            case 1:
            case 2:
                i.Kind = Opk.Or;
                i.Size = 1 << opmode;
                i.Reg = reg;
                i.Src = Resolve(mode, ea, i.Size);
                return;
            case 3: Divide(i, op, false); return;
            case 4: Need(false, "SBCD"); return;
            case 5:
            case 6:
                DataEa(mode, ea);
                i.Kind = Opk.Or;
                i.Size = 1 << (opmode - 4);
                i.Reg = reg;
                i.Dst = Resolve(mode, ea, i.Size);
                return;
            default: Divide(i, op, true); return;
        }
    }

    void Divide(Insn i, ushort op, bool signed)
    {
        int reg = (op >> 9) & 7;
        int mode = (op >> 3) & 7, ea = op & 7;
        Need(mode != 1, "DIV from an address register");
        i.Kind = signed ? Opk.DivS : Opk.DivU;
        i.Size = 2;
        i.Reg = reg;
        i.Src = Resolve(mode, ea, 2);
    }

    void GroupC(Insn i, ushort op)
    {
        int reg = (op >> 9) & 7;
        int opmode = (op >> 6) & 7;
        int mode = (op >> 3) & 7, ea = op & 7;

        if ((op & 0xF1F8) == 0xC140 || (op & 0xF1F8) == 0xC148 || (op & 0xF1F8) == 0xC188)
        {
            Need(false, "EXG");
            return;
        }

        switch (opmode)
        {
            case 0:
            case 1:
            case 2:
                i.Kind = Opk.And;
                i.Size = 1 << opmode;
                i.Reg = reg;
                i.Src = Resolve(mode, ea, i.Size);
                return;
            case 3:
                i.Kind = Opk.MulU;
                i.Size = 2;
                i.Reg = reg;
                i.Src = Resolve(mode, ea, 2);
                return;
            case 4:
                Need(false, "ABCD");
                return;
            case 5:
                Need(false, "AND.W Dn,<ea>");
                return;
            case 6:
                DataEa(mode, ea);
                i.Kind = Opk.And;
                i.Size = 4;
                i.Reg = reg;
                i.Dst = Resolve(mode, ea, 4);
                return;
            default:
                i.Kind = Opk.MulS;
                i.Size = 2;
                i.Reg = reg;
                i.Src = Resolve(mode, ea, 2);
                return;
        }
    }

    // ---- group 9 / D: SUB, ADD ----------------------------------------------

    void AddSub(Insn i, ushort op, bool isAdd)
    {
        int reg = (op >> 9) & 7;
        int opmode = (op >> 6) & 7;
        int mode = (op >> 3) & 7, ea = op & 7;

        switch (opmode)
        {
            case 0:
            case 1:
            case 2:
                i.Kind = isAdd ? Opk.Add : Opk.Sub;
                i.Size = 1 << opmode;
                i.Reg = reg;
                i.Src = Resolve(mode, ea, i.Size);
                return;
            case 3:
            case 7:
                i.Kind = isAdd ? Opk.AddA : Opk.SubA;
                i.Size = opmode == 3 ? 2 : 4;
                i.Reg = reg;
                i.Src = Resolve(mode, ea, i.Size);
                return;
            case 4:
                Need(false, isAdd ? "ADDX" : "SUBX");
                return;
            case 5:
            case 6:
                DataEa(mode, ea);
                i.Kind = isAdd ? Opk.Add : Opk.Sub;
                i.Size = 1 << (opmode - 4);
                i.Reg = reg;
                i.Dst = Resolve(mode, ea, i.Size);
                return;
        }
        Unsupported(i, $"add/sub opmode {opmode}");
    }

    // ---- group B: CMP, CMPA, CMPM, EOR --------------------------------------

    void GroupB(Insn i, ushort op)
    {
        int reg = (op >> 9) & 7;
        int opmode = (op >> 6) & 7;
        int mode = (op >> 3) & 7, ea = op & 7;

        switch (opmode)
        {
            case 0:
            case 1:
            case 2:
                i.Kind = Opk.Cmp;
                i.Size = 1 << opmode;
                i.Reg = reg;
                i.Src = Resolve(mode, ea, i.Size);
                return;
            case 3:
            case 7:
                i.Kind = Opk.CmpA;
                i.Size = opmode == 3 ? 2 : 4;
                i.Reg = reg;
                i.Src = Resolve(mode, ea, i.Size);
                return;
            case 4:
            case 5:
            case 6:
                if (mode == 1)
                {
                    i.Kind = Opk.CmpM;
                    i.Size = 1 << (opmode - 4);
                    i.Reg = reg;
                    i.Src = new Ea { Mode = 3, Reg = ea };
                    return;
                }
                DataEa(mode, ea);
                i.Kind = Opk.Eor;
                i.Size = 1 << (opmode - 4);
                i.Reg = reg;
                i.Dst = Resolve(mode, ea, i.Size);
                return;
        }
        Unsupported(i, $"group B opmode {opmode}");
    }

    // ---- group E: shifts -----------------------------------------------------

    void Shift(Insn i, ushort op)
    {
        if ((op & 0x00C0) == 0x00C0)
        {
            int mode = (op >> 3) & 7, reg = op & 7;
            DataEa(mode, reg);
            i.Kind = Opk.Shift;
            i.Size = 2;
            i.ShiftType = (op >> 9) & 3;
            i.ShiftLeft = (op & 0x0100) != 0;
            i.Imm = 1;
            i.BitFromReg = false;
            i.Dst = Resolve(mode, reg, 2);
            return;
        }

        int count = (op >> 9) & 7;
        int type = (op >> 3) & 3;
        bool left = (op & 0x0100) != 0;
        int size = 1 << ((op >> 6) & 3);
        Need(size <= 4, "shift size field 3");
        int dn = op & 7;

        i.Kind = Opk.Shift;
        i.Size = size;
        i.ShiftType = type;
        i.ShiftLeft = left;
        i.Reg = dn;
        if ((op & 0x0020) != 0)
        {
            i.BitFromReg = true;
            i.Imm = (uint)count;                // the count register
        }
        else
        {
            i.BitFromReg = false;
            i.Imm = (uint)(count == 0 ? 8 : count);
        }
    }
}
