using System;
using System.Collections.Generic;
using System.Globalization;
using System.Text;

namespace ICFTD.AmigaExport.Recomp;

/// <summary>
/// Turns the decoded instructions of one function into C, in the style of
/// <c>src\recomp\fn_0001dcb0.c</c>: one statement per instruction, the original's control flow as
/// labels and gotos, every instruction address in a comment.
///
/// A function is emitted only when the decode is *proven* complete: the instruction lengths must
/// add up to the size Ghidra recorded, the instruction count must match, every instruction must be
/// understood, and no construct the emitter cannot express may appear (an internal bsr, a branch
/// out of the function, a vector slot that does not resolve). Anything else leaves the function to
/// the interpreter - a partial translation must still run.
///
/// Register use in the generated body: t0 = value, t1 = current destination, t2 = result,
/// t3 = address, t4 = effective-address scratch.
/// </summary>
public sealed class Emitter
{
    // The vector table and the small-data base of the base-0 image (the one rcmp runs and the one
    // re\disasm describes). Slot resolution needs A4's value, so a `jsr (d,A4)` whose displacement
    // does not land inside the table is refused - that is also the check that A4 is still 0x29A56.
    public const uint VectorTableBase = 0x0002_1A58;
    public const int VectorTableSlots = 160;
    public const uint SmallDataBase = 0x0002_9A56;

    const uint ExecBaseGlobal = 0x0002_D54A;      // A4+0x3AF4: where the cstart stores AbsExecBase
    const string TV = "t0", TC = "t1", TR = "t2", TA = "t3", TX = "t4";

    readonly Decoder _dec;

    public Emitter(byte[] image)
    {
        Image = image;
        _dec = new Decoder(image);
    }

    public byte[] Image { get; }

    // ---- decoding a whole function ------------------------------------------

    public sealed class Function
    {
        public uint Entry;
        public int Size;
        public List<Insn> Insns = new();
        public string? Why;                       // set when the function cannot be emitted
    }

    /// <summary>
    /// Decodes a function. A straight walk from the entry proves the whole body is instructions;
    /// when it disagrees with Ghidra's count, the walk is retried following control flow, which
    /// skips the bytes a branch jumps over (opcode tables, hand-written data). Either attempt must
    /// account for exactly Ghidra's byte count and instruction count, and the differential against
    /// the interpreter is the second check.
    /// </summary>
    public Function Decode(uint entry, int size, int expectedInsns, uint limit)
    {
        Function f = DecodeLinear(entry, size, expectedInsns);
        if (f.Why == null) return f;

        Function g = DecodeFlow(entry, size, expectedInsns, limit);
        if (g.Why == null) return g;

        return f;                                       // report the simpler failure
    }

    Function DecodeLinear(uint entry, int size, int expectedInsns)
    {
        var f = new Function { Entry = entry, Size = size };
        uint end = entry + (uint)size;
        uint pc = entry;

        while (pc < end)
        {
            Insn insn = _dec.Decode(pc);
            if (insn.Kind == Opk.Unsupported)
            {
                f.Why = $"{pc:x8}: {insn.Why}";
                return f;
            }
            f.Insns.Add(insn);
            pc += (uint)insn.Len;
        }
        if (pc != end)
        {
            f.Why = $"decode ends at {pc:x8}, Ghidra says {end:x8}";
            return f;
        }
        if (expectedInsns > 0 && f.Insns.Count != expectedInsns)
        {
            f.Why = $"{f.Insns.Count} instructions decoded, Ghidra says {expectedInsns}";
            return f;
        }
        return f;
    }

    Function DecodeFlow(uint entry, int size, int expectedInsns, uint limit)
    {
        var f = new Function { Entry = entry, Size = size };
        var done = new Dictionary<uint, Insn>();
        var work = new Stack<uint>();
        work.Push(entry);

        while (work.Count > 0)
        {
            uint pc = work.Pop();
            while (pc >= entry && pc < limit)
            {
                if (done.ContainsKey(pc)) break;
                Insn insn = _dec.Decode(pc);
                if (insn.Kind == Opk.Unsupported)
                {
                    f.Why = $"{pc:x8}: {insn.Why}";
                    return f;
                }
                done.Add(pc, insn);

                uint next = pc + (uint)insn.Len;
                switch (insn.Kind)
                {
                    case Opk.Rts:
                    case Opk.Rtr:
                    case Opk.Jmp:                       // a tail transfer: this path ends here
                        pc = 0;
                        break;
                    case Opk.Bra:
                        pc = (insn.Target >= entry && insn.Target < limit) ? insn.Target : 0;
                        break;
                    case Opk.Bcc:
                    case Opk.DBcc:
                        if (insn.Target >= entry && insn.Target < limit) work.Push(insn.Target);
                        pc = next;
                        break;
                    default:
                        pc = next;
                        break;
                }
            }
        }

        f.Insns = new List<Insn>(done.Values);
        f.Insns.Sort((a, b) => a.Addr.CompareTo(b.Addr));

        int bytes = 0;
        foreach (Insn insn in f.Insns) bytes += insn.Len;
        if (bytes != size)
        {
            f.Why = $"{bytes} byte(s) decoded, Ghidra says {size}";
            f.Insns.Clear();
            return f;
        }
        if (expectedInsns > 0 && f.Insns.Count != expectedInsns)
        {
            f.Why = $"{f.Insns.Count} instructions decoded, Ghidra says {expectedInsns}";
            f.Insns.Clear();
            return f;
        }
        return f;
    }

    // ---- target resolution ---------------------------------------------------

    /// <summary>Follows jmp chains from `target`; returns the first non-jmp address.</summary>
    public uint Follow(uint target)
    {
        for (int hop = 0; hop < 8; hop++)
        {
            ushort op = _dec.Read16(target);
            if (op == 0x4EF9) { target = _dec.Read32(target + 2); continue; }
            if (op == 0x4EFA) { target = target + 2 + (uint)(short)_dec.Read16(target + 2); continue; }
            return target;
        }
        return target;
    }

    /// <summary>
    /// Recognises the library wrapper this game uses: a few argument loads, then
    /// `movea.l (base),A6` and `jmp (d16,A6)`. Returns false when it is not a wrapper.
    /// </summary>
    public bool IsLibraryThunk(uint target, out int lib, out int lvo)
    {
        lib = -1;
        lvo = -1;
        uint at = Follow(target);
        uint baseGlobal = 0;
        for (int hop = 0; hop < 10; hop++)
        {
            ushort op = _dec.Read16(at);
            if (op == 0x4CEE || op == 0x4CEF) { at += 6; continue; }              // movem.l (d16,SP),mask
            if (op == 0x206F || op == 0x226F) { at += 4; continue; }              // movea.l (d16,SP),A0/A1
            if (op == 0x202F || op == 0x222F) { at += 4; continue; }              // move.l (d16,SP),D0/D1
            if (op == 0x2C6C) { baseGlobal = SmallDataBase + (uint)(short)_dec.Read16(at + 2); at += 4; continue; }
            if (op == 0x2C7C) { baseGlobal = (uint)(short)_dec.Read16(at + 2); at += 4; continue; }
            if (op == 0x4EEE || op == 0x4EAE)                                     // jmp/jsr (d16,A6)
            {
                lvo = (short)_dec.Read16(at + 2);
                lib = (baseGlobal == 0 || baseGlobal == ExecBaseGlobal) ? 0 : -1;
                return lib >= 0;
            }
            return false;
        }
        return false;
    }

    /// <summary>The target of vector-table slot `slot` (each stub is `jmp abs.l`).</summary>
    public uint SlotTarget(int slot) => _dec.Read32(VectorTableBase + (uint)slot * 6 + 2);

    /// <summary>
    /// Decodes a block of code the model does not cover: a table dispatch target that sits outside
    /// every modelled function (typically a shared epilogue). A straight line until it terminates;
    /// a block that does not terminate is refused.
    /// </summary>
    public Function DecodeBlock(uint addr, uint limit)
    {
        var f = new Function { Entry = addr };
        uint pc = addr;

        for (int n = 0; n < 128; n++)
        {
            if (pc >= limit || (long)pc + 2 > Image.Length)
            {
                f.Why = $"block at {addr:x8} runs past its end at {pc:x8}";
                break;
            }
            Insn insn = _dec.Decode(pc);
            if (insn.Kind == Opk.Unsupported)
            {
                f.Why = $"{pc:x8}: {insn.Why}";
                break;
            }
            f.Insns.Add(insn);
            pc += (uint)insn.Len;
            if (insn.Kind == Opk.Rts || insn.Kind == Opk.Rtr || insn.Kind == Opk.Jmp || insn.Kind == Opk.Bra)
            {
                f.Size = (int)(pc - addr);
                return f;
            }
        }
        if (f.Why == null) f.Why = $"block at {addr:x8} does not terminate";
        f.Insns.Clear();
        return f;
    }

    /// <summary>
    /// Every constant address a function transfers control to, so `recomp` can find code the model
    /// does not cover. Computed jumps are invisible here - the fixtures are what prove those.
    /// </summary>
    public IEnumerable<uint> Targets(Function f)
    {
        foreach (Insn i in f.Insns)
        {
            switch (i.Kind)
            {
                case Opk.Bra:
                case Opk.Bsr:
                case Opk.Bcc:
                case Opk.DBcc:
                    yield return i.Target;
                    break;
                case Opk.Jsr:
                case Opk.Jmp:
                {
                    Ea ea = i.Src!;
                    if (ea.Mode == 5 && ea.Reg == 4)
                    {
                        int slot = SlotOf(ea.Disp);
                        if (slot >= 0) yield return Follow(SlotTarget(slot));
                    }
                    else if (ea.Mode == 7 && ea.Reg != 4 && ea.IndexReg < 0)
                    {
                        yield return ea.Abs;
                    }
                    break;
                }
            }
        }
        // The fall-through tail, and only then: a body that ends in a branch does not reach the byte
        // after it, which is very often data.
        Opk last = f.Insns[^1].Kind;
        if (last != Opk.Rts && last != Opk.Rtr && last != Opk.Bra && last != Opk.Jmp)
            yield return f.Entry + (uint)f.Size;
    }

    /// <summary>Resolves `jsr/jmp (d16,A4)` to a slot; -1 when the displacement is not a slot.</summary>
    public static int SlotOf(int disp)
    {
        int off = disp + 0x7FFE;
        if (off < 0 || off % 6 != 0) return -1;
        int slot = off / 6;
        return slot < VectorTableSlots ? slot : -1;
    }

    // ---- emission ------------------------------------------------------------

    static string Sz(int size) => size == 1 ? "RC_B" : size == 2 ? "RC_W" : "RC_L";
    static string Imm(uint v) => "0x" + v.ToString("x8", CultureInfo.InvariantCulture) + "u";

    /// <summary>An address (image offset) rather than data: shifts with the image's load address.</summary>
    static string ImmA(uint v) => "RC_ADDR(" + Imm(v) + ")";
    static string Disp(int d) => d < 0 ? $"- 0x{-d:x}u" : $"+ 0x{d:x}u";
    static string Label(uint addr) => "L_" + addr.ToString("X", CultureInfo.InvariantCulture);

    sealed class Ctx
    {
        public readonly StringBuilder Sb = new();
        public readonly HashSet<uint> Labels = new();
        public string? Why;
        public void Line(string s) => Sb.Append("    ").Append(s).Append('\n');
        public void Blank() => Sb.Append('\n');
        public void Fail(string why) => Why ??= why;
    }

    /// <summary>Emits the body; null when the function cannot be emitted (see `Function.Why`).</summary>
    public string? EmitBody(Function f)
    {
        var c = new Ctx();
        CollectLabels(f, c);

        // A jsr/jmp can land on any instruction of the function (the engine's own opcode tables do),
        // so the function dispatches on c->pc and every instruction is a label.
        c.Sb.Append("    switch (c->pc)\n    {\n");
        foreach (Insn insn in f.Insns)
            c.Sb.Append("    case ").Append(ImmA(insn.Addr)).Append(": goto ").Append(Label(insn.Addr)).Append(";\n");
        c.Line("default:");
        c.Line("    rc_bad_entry(c, m);");
        c.Line("    return;");
        c.Sb.Append("    }\n\n");

        foreach (Insn insn in f.Insns)
        {
            if (c.Why != null) break;
            c.Sb.Append(Label(insn.Addr)).Append(":\n");
            c.Sb.Append("    /* ").Append(insn.Addr.ToString("x8", CultureInfo.InvariantCulture)).Append("  ")
             .Append(insn.Len.ToString(CultureInfo.InvariantCulture).PadLeft(2)).Append("  ")
             .Append(Describe(insn)).Append(" */\n");
            EmitInsn(c, insn);
            c.Blank();
        }

        if (c.Why != null) { f.Why = c.Why; return null; }

        // A body that does not end in a terminator falls through into the next function: that is a
        // tail call, exactly what the machine does, not an error.
        Opk last = f.Insns[^1].Kind;
        if (last != Opk.Rts && last != Opk.Bra && last != Opk.Jmp)
        {
            uint next = f.Entry + (uint)f.Size;
            c.Line($"/* falls through into {next:x8} */");
            c.Line($"c->pc = {ImmA(next)};");
            c.Line("return;");
        }
        return c.Sb.ToString();
    }

    static void CollectLabels(Function f, Ctx c)
    {
        /* Every instruction is a label now (a computed transfer can enter anywhere), so a branch
         * whose target is an instruction of this function is an internal goto. */
        foreach (Insn i in f.Insns) c.Labels.Add(i.Addr);
    }

    void EmitInsn(Ctx c, Insn i)
    {
        /* The frame budget is spent per instruction, as the interpreter spends it, so a translated
         * run hits the same vblank at the same instruction. */
        c.Line("rc_step(c, m);");
        c.Line($"c->pc = {ImmA(i.Addr)};");
        switch (i.Kind)
        {
            case Opk.Move:
                ReadTo(c, i.Src!, i.Size, TV);
                WriteTo(c, i.Dst!, i.Size, TV);
                c.Line($"rc_set_nzvc(c, {TV}, {Sz(i.Size)});");
                break;
            case Opk.MoveA:
                ReadTo(c, i.Src!, i.Size, TV);
                c.Line(i.Size == 2 ? $"c->a[{i.Reg}] = rc_ext({TV}, RC_W);" : $"c->a[{i.Reg}] = {TV};");
                break;
            case Opk.MoveQ:
                c.Line($"c->d[{i.Reg}] = {Imm(i.Imm)};");
                c.Line($"rc_set_nzvc(c, c->d[{i.Reg}], RC_L);");
                break;
            case Opk.AddQ:
            case Opk.SubQ:
            {
                bool sub = i.Kind == Opk.SubQ;
                if (i.Dst!.Mode == 1)
                {
                    string delta = i.Size == 2 ? $"rc_ext({Imm(i.Imm)}, RC_W)" : Imm(i.Imm);
                    c.Line($"c->a[{i.Dst.Reg}] {(sub ? "-=" : "+=")} {delta};");
                    break;
                }
                Rmw(c, i, i.Dst,
                    cur => $"{cur} {(sub ? "-" : "+")} {Imm(i.Imm)}",
                    (cur, res) => $"{(sub ? "rc_flags_sub" : "rc_flags_add")}(c, {Sz(i.Size)}, {cur}, {Imm(i.Imm)}, {res}, 0);");
                break;
            }
            case Opk.Add:
            case Opk.Sub:
            {
                bool add = i.Kind == Opk.Add;
                if (i.Dst == null)
                {
                    ReadTo(c, i.Src!, i.Size, TV);
                    c.Line($"{TC} = rc_d_get(c, {i.Reg}, {Sz(i.Size)});");
                    c.Line($"{TR} = {TC} {(add ? "+" : "-")} {TV};");
                    c.Line($"{(add ? "rc_flags_add" : "rc_flags_sub")}(c, {Sz(i.Size)}, {TC}, {TV}, {TR}, 0);");
                    c.Line($"rc_d_set(c, {i.Reg}, {Sz(i.Size)}, {TR});");
                    break;
                }
                Rmw(c, i, i.Dst,
                    cur => $"{cur} {(add ? "+" : "-")} rc_d_get(c, {i.Reg}, {Sz(i.Size)})",
                    (cur, res) => $"{(add ? "rc_flags_add" : "rc_flags_sub")}(c, {Sz(i.Size)}, {cur}, rc_d_get(c, {i.Reg}, {Sz(i.Size)}), {res}, 0);");
                break;
            }
            case Opk.AddA:
            case Opk.SubA:
            {
                bool add = i.Kind == Opk.AddA;
                ReadTo(c, i.Src!, i.Size, TV);
                string v = i.Size == 2 ? $"rc_ext({TV}, RC_W)" : TV;
                c.Line($"c->a[{i.Reg}] {(add ? "+=" : "-=")} {v};");
                break;
            }
            case Opk.AddI:
            case Opk.SubI:
            {
                bool add = i.Kind == Opk.AddI;
                Rmw(c, i, i.Dst!, cur => $"{cur} {(add ? "+" : "-")} {Imm(i.Imm)}",
                    (cur, res) => $"{(add ? "rc_flags_add" : "rc_flags_sub")}(c, {Sz(i.Size)}, {cur}, {Imm(i.Imm)}, {res}, 0);");
                break;
            }
            case Opk.Cmp:
                ReadTo(c, i.Src!, i.Size, TV);
                c.Line($"{TC} = rc_d_get(c, {i.Reg}, {Sz(i.Size)});");
                c.Line($"rc_cmp(c, {Sz(i.Size)}, {TC}, {TV});");
                break;
            case Opk.CmpA:
                ReadTo(c, i.Src!, i.Size, TV);
                c.Line($"rc_cmp(c, RC_L, c->a[{i.Reg}], {(i.Size == 2 ? $"rc_ext({TV}, RC_W)" : TV)});");
                break;
            case Opk.CmpI:
                ReadTo(c, i.Dst!, i.Size, TV);
                c.Line($"rc_cmp(c, {Sz(i.Size)}, {TV}, {Imm(i.Imm)});");
                break;
            case Opk.CmpM:
                c.Line($"{TV} = rc_rd{i.Size * 8}(c, m, c->a[{i.Reg}]);");
                c.Line($"c->a[{i.Reg}] += {i.Size}u;");
                c.Line($"{TC} = rc_rd{i.Size * 8}(c, m, c->a[{i.Src!.Reg}]);");
                c.Line($"c->a[{i.Src.Reg}] += {i.Size}u;");
                c.Line($"rc_cmp(c, {Sz(i.Size)}, {TC}, {TV});");
                break;
            case Opk.Tst:
                ReadTo(c, i.Dst!, i.Size, TV);
                c.Line($"rc_set_nzvc(c, {TV}, {Sz(i.Size)});");
                break;
            case Opk.Clr:
                WriteTo(c, i.Dst!, i.Size, "0u");
                c.Line($"rc_set_nzvc(c, 0u, {Sz(i.Size)});");
                break;
            case Opk.Neg:
                Rmw(c, i, i.Dst!, cur => $"0u - {cur}",
                    (cur, res) => $"rc_flags_sub(c, {Sz(i.Size)}, 0u, {cur}, {res}, 0);");
                break;
            case Opk.Not:
                Rmw(c, i, i.Dst!, cur => $"~{cur}",
                    (cur, res) => $"rc_set_nzvc(c, {res}, {Sz(i.Size)});");
                break;
            case Opk.And:
            case Opk.Or:
            case Opk.Eor:
            {
                string op = i.Kind switch { Opk.And => "&", Opk.Or => "|", _ => "^" };
                if (i.Dst == null)
                {
                    ReadTo(c, i.Src!, i.Size, TV);
                    c.Line($"{TR} = {TV} {op} rc_d_get(c, {i.Reg}, {Sz(i.Size)});");
                    c.Line($"rc_set_nzvc(c, {TR}, {Sz(i.Size)});");
                    c.Line($"rc_d_set(c, {i.Reg}, {Sz(i.Size)}, {TR});");
                    break;
                }
                // The interpreter writes first, then sets the flags from the result.
                Rmw(c, i, i.Dst, cur => $"{cur} {op} rc_d_get(c, {i.Reg}, {Sz(i.Size)})",
                    (cur, res) => $"rc_set_nzvc(c, {res}, {Sz(i.Size)});", flagsAfter: true);
                break;
            }
            case Opk.AndI:
            case Opk.OrI:
            case Opk.EorI:
            {
                string op = i.Kind switch { Opk.AndI => "&", Opk.OrI => "|", _ => "^" };
                Rmw(c, i, i.Dst!, cur => $"{cur} {op} {Imm(i.Imm)}",
                    (cur, res) => $"rc_set_nzvc(c, {res}, {Sz(i.Size)});", flagsAfter: true);
                break;
            }
            case Opk.MulU:
            case Opk.MulS:
            case Opk.DivU:
            case Opk.DivS:
                ReadTo(c, i.Src!, 2, TV);
                c.Line(i.Kind switch
                {
                    Opk.MulU => $"rc_mulu(c, {i.Reg}, {TV});",
                    Opk.MulS => $"rc_muls(c, {i.Reg}, {TV});",
                    Opk.DivU => $"rc_divu(c, m, {i.Reg}, {TV});",
                    _ => $"rc_divs(c, m, {i.Reg}, {TV});"
                });
                break;
            case Opk.Btst:
            case Opk.Bchg:
            case Opk.Bclr:
            case Opk.Bset:
            {
                if (i.BitFromReg) c.Line($"{TX} = c->d[{i.Reg}] & 7u;");
                else c.Line($"{TX} = {Imm((uint)i.Reg)};");
                if (i.Dst!.Mode == 0)
                {
                    c.Line($"{TV} = rc_d_get(c, {i.Dst.Reg}, RC_B);");
                    c.Line($"rc_set_z(c, ({TV} & (1u << {TX})) == 0);");
                    if (i.Kind != Opk.Btst)
                    {
                        c.Line(i.Kind switch
                        {
                            Opk.Bchg => $"{TR} = {TV} ^ (1u << {TX});",
                            Opk.Bclr => $"{TR} = {TV} & ~(1u << {TX});",
                            _ => $"{TR} = {TV} | (1u << {TX});"
                        });
                        c.Line($"rc_d_set(c, {i.Dst.Reg}, RC_B, {TR});");
                    }
                    break;
                }
                c.Line($"{TA} = {Address(i.Dst, 1, c)};");
                c.Line($"{TV} = rc_rd8(c, m, {TA});");
                c.Line($"rc_set_z(c, ({TV} & (1u << {TX})) == 0);");
                if (i.Kind != Opk.Btst)
                {
                    c.Line(i.Kind switch
                    {
                        Opk.Bchg => $"{TR} = {TV} ^ (1u << {TX});",
                        Opk.Bclr => $"{TR} = {TV} & ~(1u << {TX});",
                        _ => $"{TR} = {TV} | (1u << {TX});"
                    });
                    c.Line($"rc_wr8(c, m, {TA}, {TR});");
                }
                break;
            }
            case Opk.Shift:
            {
                string count = i.BitFromReg ? $"(c->d[{i.Imm}] & 63u)" : Imm(i.Imm);
                string args = $"{i.ShiftType}, {(i.ShiftLeft ? "1" : "0")}, {count}";
                if (i.Dst == null)
                {
                    c.Line($"c->d[{i.Reg}] = rc_shift(c, {args}, rc_d_get(c, {i.Reg}, {Sz(i.Size)}), {Sz(i.Size)});");
                    break;
                }
                c.Line($"{TA} = {Address(i.Dst, i.Size, c)};");
                c.Line($"{TV} = rc_rd{i.Size * 8}(c, m, {TA});");
                c.Line($"{TR} = rc_shift(c, {args}, {TV}, {Sz(i.Size)});");
                c.Line($"rc_wr{i.Size * 8}(c, m, {TA}, {TR});");
                break;
            }
            case Opk.Ext:
                c.Line(i.Size == 2 ? $"rc_ext_w(c, {i.Reg});" : $"rc_ext_l(c, {i.Reg});");
                break;
            case Opk.Swap:
                c.Line($"{TV} = c->d[{i.Reg}];");
                c.Line($"c->d[{i.Reg}] = ({TV} >> 16) | ({TV} << 16);");
                c.Line($"rc_set_nzvc(c, c->d[{i.Reg}], RC_L);");
                break;
            case Opk.Link:
                c.Line("c->a[7] -= 4;");
                c.Line($"rc_wr32(c, m, c->a[7], c->a[{i.Reg}]);");
                c.Line($"c->a[{i.Reg}] = c->a[7];");
                if ((int)i.Imm < 0) c.Line($"c->a[7] -= 0x{-(int)i.Imm:x}u;");   /* the local frame */
                else if ((int)i.Imm > 0) c.Line($"c->a[7] += 0x{(int)i.Imm:x}u;");
                break;
            case Opk.Unlk:
                c.Line($"c->a[7] = c->a[{i.Reg}];");
                c.Line($"c->a[{i.Reg}] = rc_rd32(c, m, c->a[7]);");
                c.Line("c->a[7] += 4;");
                break;
            case Opk.Rts:
                c.Line("rc_ret(c, m);");
                c.Line("return;");
                break;
            case Opk.Nop:
                break;
            case Opk.Tas:
                if (i.Dst!.Mode == 0)
                {
                    c.Line($"{TV} = rc_d_get(c, {i.Dst.Reg}, RC_B);");
                    c.Line($"rc_set_nzvc(c, {TV}, RC_B);");
                    c.Line($"rc_d_set(c, {i.Dst.Reg}, RC_B, ({TV} | 0x80u));");
                    break;
                }
                c.Line($"{TA} = {Address(i.Dst, 1, c)};");
                c.Line($"{TV} = rc_rd8(c, m, {TA});");
                c.Line($"rc_set_nzvc(c, {TV}, RC_B);");
                c.Line($"rc_wr8(c, m, {TA}, ({TV} | 0x80u));");
                break;
            case Opk.Lea:
                c.Line($"c->a[{i.Reg}] = {Address(i.Dst!, 4, c)};");
                break;
            case Opk.Pea:
                c.Line($"rc_push32(c, m, {Address(i.Src!, 4, c)});");
                break;
            case Opk.MovemToMem: EmitMovemToMem(c, i); break;
            case Opk.MovemToReg: EmitMovemToReg(c, i); break;
            case Opk.Bra:
                if (c.Labels.Contains(i.Target))
                {
                    if (i.Target < i.Addr) c.Line("rc_tick();");       /* a loop: bounded replays */
                    c.Line($"goto {Label(i.Target)};");
                    break;
                }
                c.Line($"c->pc = {ImmA(i.Target)};");
                c.Line("return;");
                break;
            case Opk.Bsr:
                // A bsr into its own body is a local subroutine: the pushed return address is a
                // dispatch case, so its rts resumes this function at the instruction after it.
                c.Line($"rc_push32(c, m, {ImmA(i.Addr + (uint)i.Len)});");
                c.Line("rc_depth++;");
                if (c.Labels.Contains(i.Target)) { c.Line($"goto {Label(i.Target)};"); break; }
                c.Line($"c->pc = {ImmA(i.Target)};");
                c.Line("return;");
                break;
            case Opk.Bcc:
                if (c.Labels.Contains(i.Target))
                {
                    if (i.Target < i.Addr)
                    {
                        c.Line($"if (rc_cond(c, {i.Cond})) {{ rc_tick(); goto {Label(i.Target)}; }}");
                        break;
                    }
                    c.Line($"if (rc_cond(c, {i.Cond})) goto {Label(i.Target)};");
                    break;
                }
                // Out of the function: a conditional tail transfer. The target runs to its own rts,
                // which returns to whoever called us.
                c.Line($"if (rc_cond(c, {i.Cond}))");
                c.Line("{");
                c.Line($"    c->pc = {ImmA(i.Target)};");
                c.Line("    return;");
                c.Line("}");
                break;
            case Opk.DBcc:
                if (!c.Labels.Contains(i.Target)) { c.Fail($"{i.Addr:x8}: dbf target outside the function"); break; }
                c.Line($"if (!rc_cond(c, {i.Cond})) {{");
                c.Line($"    {TR} = (rc_d_get(c, {i.Reg}, RC_W) + 0xFFFFu) & 0xFFFFu;");
                c.Line($"    rc_d_set(c, {i.Reg}, RC_W, {TR});");
                if (i.Target < i.Addr)
                    c.Line($"    if ({TR} != 0xFFFFu) {{ rc_tick(); goto {Label(i.Target)}; }}");
                else
                    c.Line($"    if ({TR} != 0xFFFFu) goto {Label(i.Target)};");
                c.Line("}");
                break;
            case Opk.Scc:
                WriteTo(c, i.Dst!, 1, $"(rc_cond(c, {i.Cond}) ? 0xFFu : 0u)");
                break;
            case Opk.Jsr: EmitJsrJmp(c, i, isCall: true); break;
            case Opk.Jmp: EmitJsrJmp(c, i, isCall: false); break;
            default:
                c.Fail($"{i.Addr:x8}: {i.Kind} is not emitted");
                break;
        }
    }

    // ---- operands ------------------------------------------------------------

    /// <summary>The C expression for the address of a memory operand (increment side effects emitted).</summary>
    string Address(Ea ea, int size, Ctx c)
    {
        switch (ea.Mode)
        {
            case 2: return $"c->a[{ea.Reg}]";
            case 3:
                c.Line($"{TA} = c->a[{ea.Reg}];");
                c.Line($"c->a[{ea.Reg}] += {Step(size, ea.Reg)};");
                return TA;
            case 4:
                c.Line($"c->a[{ea.Reg}] -= {Step(size, ea.Reg)};");
                return $"c->a[{ea.Reg}]";
            case 5: return $"(c->a[{ea.Reg}] {Disp(ea.Disp)})";
            case 6:
                c.Line($"{TX} = {IndexExpr(ea)};");
                return $"(c->a[{ea.Reg}] {Disp(ea.Disp)} + {TX})";
            case 7:
                if (ea.Reg == 4) return Imm(ea.Imm);
                /* Absolute short names a fixed low-memory address (AbsExecBase at 4, the Lattice
                 * small-data area): the same number in every layout, never an image offset. */
                if (ea.Reg == 0) return Imm(ea.Abs);
                if (ea.IndexReg >= 0)
                {
                    c.Line($"{TX} = {IndexExpr(ea)};");
                    return $"({ImmA(ea.Abs)} + {TX})";
                }
                return ImmA(ea.Abs);
            default:
                c.Fail($"{ea.Mode}/{ea.Reg}: not an address");
                return "0u";
        }
    }

    /// <summary>A byte access to A7 steps by two, as on the real chip.</summary>
    static string Step(int size, int reg) => (size == 1 && reg == 7) ? "2u" : size.ToString(CultureInfo.InvariantCulture) + "u";

    static string IndexExpr(Ea ea)
    {
        string v = ea.IndexAddr ? $"c->a[{ea.IndexReg}]" : $"c->d[{ea.IndexReg}]";
        if (!ea.IndexLong) v = $"rc_ext({v}, RC_W)";
        if (ea.Scale > 0) v = $"({v} << {ea.Scale})";
        return v;
    }

    /// <summary>Reads the operand into `dst` (a temp), applying address side effects first.</summary>
    void ReadTo(Ctx c, Ea ea, int size, string dst)
    {
        switch (ea.Mode)
        {
            case 0: c.Line($"{dst} = rc_d_get(c, {ea.Reg}, {Sz(size)});"); return;
            case 1: c.Line($"{dst} = rc_a_get(c, {ea.Reg}, {Sz(size)});"); return;
            case 7 when ea.Reg == 4: c.Line($"{dst} = {Imm(ea.Imm & Mask(size))};"); return;
        }
        c.Line($"{dst} = rc_rd{size * 8}(c, m, {Address(ea, size, c)});");
    }

    static uint Mask(int size) => size == 1 ? 0xFFu : size == 2 ? 0xFFFFu : 0xFFFFFFFFu;

    /// <summary>Writes `value` to the operand, applying address side effects.</summary>
    void WriteTo(Ctx c, Ea ea, int size, string value)
    {
        switch (ea.Mode)
        {
            case 0:
                c.Line($"rc_d_set(c, {ea.Reg}, {Sz(size)}, {value});");
                return;
            case 1:
                if (size == 1) { c.Fail("byte write to an address register"); return; }
                c.Line($"rc_a_set(c, {ea.Reg}, {Sz(size)}, {value});");
                return;
            case 7 when ea.Reg == 4:
                c.Fail("write to an immediate");
                return;
        }
        c.Line($"rc_wr{size * 8}(c, m, {Address(ea, size, c)}, {value});");
    }

    /// <summary>
    /// Read-modify-write on a destination: `cur` is the old value, `res` the new one, and the
    /// address (memory forms) is evaluated exactly once.
    /// </summary>
    void Rmw(Ctx c, Insn i, Ea dst, Func<string, string> make,
             Func<string, string, string> flags, bool flagsAfter = false)
    {
        if (dst.Mode == 0)
        {
            c.Line($"{TC} = rc_d_get(c, {dst.Reg}, {Sz(i.Size)});");
            c.Line($"{TR} = {make(TC)};");
            if (!flagsAfter) c.Line(flags(TC, TR));
            c.Line($"rc_d_set(c, {dst.Reg}, {Sz(i.Size)}, {TR});");
            if (flagsAfter) c.Line(flags(TC, TR));
            return;
        }
        c.Line($"{TA} = {Address(dst, i.Size, c)};");
        c.Line($"{TC} = rc_rd{i.Size * 8}(c, m, {TA});");
        c.Line($"{TR} = {make(TC)};");
        if (!flagsAfter) c.Line(flags(TC, TR));
        c.Line($"rc_wr{i.Size * 8}(c, m, {TA}, {TR});");
        if (flagsAfter) c.Line(flags(TC, TR));
    }

    void EmitMovemToMem(Ctx c, Insn i)
    {
        bool predec = i.Dst!.Mode == 4;
        if (predec)
        {
            c.Line($"{TA} = c->a[{i.Dst.Reg}];");
            for (int bit = 0; bit < 16; bit++)
            {
                if ((i.Mask & (1 << bit)) == 0) continue;
                // Predecrement reverses the mask: bit 0 is A7, bit 15 is D0.
                string reg = bit < 8 ? $"c->a[{7 - bit}]" : $"c->d[{15 - bit}]";
                c.Line($"{TA} -= {i.Size}u;");
                c.Line($"rc_wr{i.Size * 8}(c, m, {TA}, {reg});");
            }
            c.Line($"c->a[{i.Dst.Reg}] = {TA};");
            return;
        }
        bool postinc = i.Dst.Mode == 3;
        c.Line($"{TA} = {Address(i.Dst, i.Size, c)};");
        for (int bit = 0; bit < 16; bit++)
        {
            if ((i.Mask & (1 << bit)) == 0) continue;
            string reg = bit < 8 ? $"c->d[{bit}]" : $"c->a[{bit - 8}]";
            c.Line($"rc_wr{i.Size * 8}(c, m, {TA}, {reg});");
            c.Line($"{TA} += {i.Size}u;");
        }
        if (postinc) c.Line($"c->a[{i.Dst.Reg}] = {TA};");
    }

    void EmitMovemToReg(Ctx c, Insn i)
    {
        bool postinc = i.Src!.Mode == 3;
        c.Line($"{TA} = {Address(i.Src, i.Size, c)};");
        for (int bit = 0; bit < 16; bit++)
        {
            if ((i.Mask & (1 << bit)) == 0) continue;
            c.Line($"{TV} = rc_rd{i.Size * 8}(c, m, {TA});");
            if (i.Size == 2) c.Line($"{TV} = rc_ext({TV}, RC_W);");
            if (bit < 8) c.Line($"c->d[{bit}] = {TV};");
            else c.Line($"c->a[{bit - 8}] = {TV};");
            c.Line($"{TA} += {i.Size}u;");
        }
        if (postinc) c.Line($"c->a[{i.Src.Reg}] = {TA};");
    }

    void EmitJsrJmp(Ctx c, Insn i, bool isCall)
    {
        Ea ea = i.Src!;
        uint ret = i.Addr + (uint)i.Len;

        // jsr/jmp (d16,A6): the library base only exists at run time, exactly the trap the Musashi
        // front end uses for the original binary.
        if (ea.Mode == 5 && ea.Reg == 6)
        {
            if (isCall)
            {
                c.Line($"c->pc = {ImmA(ret)};");
                c.Line($"rc_push32(c, m, {ImmA(ret)});");
            }
            c.Line($"rc_os_call_a6(c, m, {ea.Disp});");
            if (!isCall) c.Line("return;");
            return;
        }

        if (ea.Mode == 5 && ea.Reg == 4)                        // an engine vector-table slot
        {
            int slot = SlotOf(ea.Disp);
            if (slot < 0) { c.Fail($"{i.Addr:x8}: jsr/jmp (d16,A4) is not a vector-table slot"); return; }
            uint target = SlotTarget(slot);
            if (IsLibraryThunk(target, out int lib, out int lvo))
            {
                c.Line($"/* vector {slot}: {LibName(lib)} {lvo} */");
                if (isCall) c.Line($"c->pc = {ImmA(ret)};");
                c.Line($"rc_os_call(c, m, {lib}, {lvo});");
                return;
            }
            c.Line($"/* vector {slot} */");
            if (isCall) { c.Line($"rc_push32(c, m, {ImmA(ret)});"); c.Line("rc_depth++;"); }
            c.Line($"c->pc = {ImmA(Follow(target))};");
            c.Line("return;");
            return;
        }

        // A constant address. `(d16,PC)` arrives here already resolved; `(d8,PC,Xn)` does not - its
        // index only exists at run time, so it falls through to the computed transfer below.
        if (ea.Mode == 7 && ea.Reg != 4 && ea.IndexReg < 0)
        {
            if (IsLibraryThunk(ea.Abs, out int lib, out int lvo))
            {
                c.Line($"/* {LibName(lib)} {lvo} */");
                if (isCall) c.Line($"c->pc = {ImmA(ret)};");
                c.Line($"rc_os_call(c, m, {lib}, {lvo});");
                return;
            }
            if (isCall) { c.Line($"rc_push32(c, m, {ImmA(ret)});"); c.Line("rc_depth++;"); }
            /* Absolute short is a fixed address, not an image offset (see Address()). */
            c.Line($"c->pc = {(ea.Reg == 0 ? Imm(ea.Abs) : ImmA(ea.Abs))};");
            c.Line("return;");
            return;
        }

        // A computed transfer: the address only exists at run time.
        if (isCall) { c.Line($"rc_push32(c, m, {ImmA(ret)});"); c.Line("rc_depth++;"); }
        c.Line($"{TA} = {Address(ea, 4, c)};");
        c.Line($"c->pc = {TA};");
        c.Line("return;");
    }

    static string LibName(int lib) => lib switch
    {
        0 => "exec.library",
        1 => "graphics.library",
        2 => "dos.library",
        _ => "library"
    };

    // ---- the instruction in words, for the comment ----------------------------

    static readonly string[] CondName =
    {
        "t", "f", "hi", "ls", "cc", "cs", "ne", "eq", "vc", "vs", "pl", "mi", "ge", "lt", "gt", "le"
    };

    static string Describe(Insn i)
    {
        string size = i.Size switch { 1 => ".b", 2 => ".w", 4 => ".l", _ => "" };
        switch (i.Kind)
        {
            case Opk.Move: return $"move{size} {Ea(i.Src!)},{Ea(i.Dst!)}";
            case Opk.MoveA: return $"movea{size} {Ea(i.Src!)},A{i.Reg}";
            case Opk.MoveQ: return $"moveq #{i.Imm:x},D{i.Reg}";
            case Opk.AddQ: return $"addq{size} #{i.Imm:x},{Ea(i.Dst!)}";
            case Opk.SubQ: return $"subq{size} #{i.Imm:x},{Ea(i.Dst!)}";
            case Opk.Add: return i.Dst == null ? $"add{size} {Ea(i.Src!)},D{i.Reg}" : $"add{size} D{i.Reg},{Ea(i.Dst)}";
            case Opk.Sub: return i.Dst == null ? $"sub{size} {Ea(i.Src!)},D{i.Reg}" : $"sub{size} D{i.Reg},{Ea(i.Dst)}";
            case Opk.AddA: return $"adda{size} {Ea(i.Src!)},A{i.Reg}";
            case Opk.SubA: return $"suba{size} {Ea(i.Src!)},A{i.Reg}";
            case Opk.AddI: return $"addi{size} #{i.Imm:x},{Ea(i.Dst!)}";
            case Opk.SubI: return $"subi{size} #{i.Imm:x},{Ea(i.Dst!)}";
            case Opk.Cmp: return $"cmp{size} {Ea(i.Src!)},D{i.Reg}";
            case Opk.CmpA: return $"cmpa{size} {Ea(i.Src!)},A{i.Reg}";
            case Opk.CmpI: return $"cmpi{size} #{i.Imm:x},{Ea(i.Dst!)}";
            case Opk.CmpM: return $"cmpm{size} (A{i.Reg})+,(A{i.Src!.Reg})+";
            case Opk.Tst: return $"tst{size} {Ea(i.Dst!)}";
            case Opk.Clr: return $"clr{size} {Ea(i.Dst!)}";
            case Opk.Neg: return $"neg{size} {Ea(i.Dst!)}";
            case Opk.Not: return $"not{size} {Ea(i.Dst!)}";
            case Opk.And: return i.Dst == null ? $"and{size} {Ea(i.Src!)},D{i.Reg}" : $"and{size} D{i.Reg},{Ea(i.Dst)}";
            case Opk.Or: return i.Dst == null ? $"or{size} {Ea(i.Src!)},D{i.Reg}" : $"or{size} D{i.Reg},{Ea(i.Dst)}";
            case Opk.Eor: return $"eor{size} D{i.Reg},{Ea(i.Dst!)}";
            case Opk.AndI: return $"andi{size} #{i.Imm:x},{Ea(i.Dst!)}";
            case Opk.OrI: return $"ori{size} #{i.Imm:x},{Ea(i.Dst!)}";
            case Opk.EorI: return $"eori{size} #{i.Imm:x},{Ea(i.Dst!)}";
            case Opk.MulU: return $"mulu{size} {Ea(i.Src!)},D{i.Reg}";
            case Opk.MulS: return $"muls{size} {Ea(i.Src!)},D{i.Reg}";
            case Opk.DivU: return $"divu{size} {Ea(i.Src!)},D{i.Reg}";
            case Opk.DivS: return $"divs{size} {Ea(i.Src!)},D{i.Reg}";
            case Opk.Btst: return $"btst {(i.BitFromReg ? $"D{i.Reg}" : $"#{i.Reg:x}")},{Ea(i.Dst!)}";
            case Opk.Bchg: return $"bchg {(i.BitFromReg ? $"D{i.Reg}" : $"#{i.Reg:x}")},{Ea(i.Dst!)}";
            case Opk.Bclr: return $"bclr {(i.BitFromReg ? $"D{i.Reg}" : $"#{i.Reg:x}")},{Ea(i.Dst!)}";
            case Opk.Bset: return $"bset {(i.BitFromReg ? $"D{i.Reg}" : $"#{i.Reg:x}")},{Ea(i.Dst!)}";
            case Opk.Shift:
            {
                string kind = (i.ShiftType switch { 0 => "as", 1 => "ls", 2 => "rox", _ => "ro" })
                              + (i.ShiftLeft ? "l" : "r");
                string cnt = i.BitFromReg ? $"D{i.Imm}" : $"#{i.Imm:x}";
                return $"{kind}{size} {cnt},{(i.Dst == null ? $"D{i.Reg}" : Ea(i.Dst))}";
            }
            case Opk.Ext: return i.Size == 2 ? $"ext.w D{i.Reg}" : $"ext.l D{i.Reg}";
            case Opk.Swap: return $"swap D{i.Reg}";
            case Opk.Link: return $"link.w A{i.Reg},#{i.Imm:x}";
            case Opk.Unlk: return $"unlk A{i.Reg}";
            case Opk.Rts: return "rts";
            case Opk.Nop: return "nop";
            case Opk.Tas: return $"tas {Ea(i.Dst!)}";
            case Opk.Lea: return $"lea {Ea(i.Dst!)},A{i.Reg}";
            case Opk.Pea: return $"pea {Ea(i.Src!)}";
            case Opk.MovemToMem: return $"movem{size} {RegMask(i.Mask)},-(SP)";
            case Opk.MovemToReg: return $"movem{size} (SP)+,{RegMask(i.Mask)}";
            case Opk.Bra: return $"bra {i.Target:x8}";
            case Opk.Bsr: return $"bsr {i.Target:x8}";
            case Opk.Bcc: return $"b{CondName[i.Cond]} {i.Target:x8}";
            case Opk.DBcc: return $"db{CondName[i.Cond]} D{i.Reg},{i.Target:x8}";
            case Opk.Scc: return $"s{CondName[i.Cond]} {Ea(i.Dst!)}";
            case Opk.Jsr: return $"jsr {Ea(i.Src!)}";
            case Opk.Jmp: return $"jmp {Ea(i.Src!)}";            default: return i.Kind.ToString().ToLowerInvariant();
        }
    }

    static string RegMask(ushort m)
    {
        var sb = new StringBuilder("{");
        for (int bit = 0; bit < 16; bit++)
        {
            if ((m & (1 << bit)) == 0) continue;
            sb.Append(' ').Append(bit < 8 ? "D" : "A").Append(bit < 8 ? bit : bit - 8);
        }
        return sb.Append(" }").ToString();
    }

    static string Ea(Ea e)
    {
        switch (e.Mode)
        {
            case 0: return "D" + e.Reg;
            case 1: return "A" + e.Reg;
            case 2: return $"(A{e.Reg})";
            case 3: return $"(A{e.Reg})+";
            case 4: return $"-(A{e.Reg})";
            case 5: return $"({e.Disp:x},A{e.Reg})";
            case 6: return $"({e.Disp:x},A{e.Reg},D{e.IndexReg}.w)";
            default:
                if (e.Reg == 4) return $"#{e.Imm:x}";
                return e.IsPcRelative ? $"({e.Abs:x8})" : $"({e.Abs:x8}).l";
        }
    }
}
